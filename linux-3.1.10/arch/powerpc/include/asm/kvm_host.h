/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * Copyright IBM Corp. 2007
 *
 * Authors: Hollis Blanchard <hollisb@us.ibm.com>
 */

#ifndef __POWERPC_KVM_HOST_H__
#define __POWERPC_KVM_HOST_H__

#include <linux/mutex.h>
#include <linux/hrtimer.h>
#include <linux/interrupt.h>
#include <linux/types.h>
#include <linux/kvm_types.h>
#include <linux/threads.h>
#include <linux/spinlock.h>
#include <linux/kvm_para.h>
#include <linux/list.h>
#include <linux/atomic.h>
#include <asm/kvm_asm.h>
#include <asm/processor.h>

#define KVM_MAX_VCPUS		NR_CPUS
#define KVM_MAX_VCORES		NR_CPUS
#define KVM_MEMORY_SLOTS 32
/* memory slots that does not exposed to userspace */
#define KVM_PRIVATE_MEM_SLOTS 4

#ifdef CONFIG_KVM_MMIO
#define KVM_COALESCED_MMIO_PAGE_OFFSET 1
#endif

/* We don't currently support large pages. */
#define KVM_HPAGE_GFN_SHIFT(x)	0
#define KVM_NR_PAGE_SIZES	1
#define KVM_PAGES_PER_HPAGE(x)	(1UL<<31)

#define HPTEG_CACHE_NUM			(1 << 15)
#define HPTEG_HASH_BITS_PTE		13
#define HPTEG_HASH_BITS_PTE_LONG	12
#define HPTEG_HASH_BITS_VPTE		13
#define HPTEG_HASH_BITS_VPTE_LONG	5
#define HPTEG_HASH_NUM_PTE		(1 << HPTEG_HASH_BITS_PTE)
#define HPTEG_HASH_NUM_PTE_LONG		(1 << HPTEG_HASH_BITS_PTE_LONG)
#define HPTEG_HASH_NUM_VPTE		(1 << HPTEG_HASH_BITS_VPTE)
#define HPTEG_HASH_NUM_VPTE_LONG	(1 << HPTEG_HASH_BITS_VPTE_LONG)

/* Physical Address Mask - allowed range of real mode RAM access */
#define KVM_PAM			0x0fffffffffffffffULL

struct kvm;
struct kvm_run;
struct kvm_vcpu;

struct lppaca;
struct slb_shadow;
struct dtl;

struct kvm_vm_stat {
	u32 remote_tlb_flush;
};

struct kvm_vcpu_stat {
	u32 sum_exits;
	u32 mmio_exits;
	u32 dcr_exits;
	u32 signal_exits;
	u32 light_exits;
	/* Account for special types of light exits: */
	u32 itlb_real_miss_exits;
	u32 itlb_virt_miss_exits;
	u32 dtlb_real_miss_exits;
	u32 dtlb_virt_miss_exits;
	u32 syscall_exits;
	u32 isi_exits;
	u32 dsi_exits;
	u32 emulated_inst_exits;
	u32 dec_exits;
	u32 ext_intr_exits;
	u32 halt_wakeup;
#ifdef CONFIG_PPC_BOOK3S
	u32 pf_storage;
	u32 pf_instruc;
	u32 sp_storage;
	u32 sp_instruc;
	u32 queue_intr;
	u32 ld;
	u32 ld_slow;
	u32 st;
	u32 st_slow;
#endif
};

enum kvm_exit_types {
	MMIO_EXITS,
	DCR_EXITS,
	SIGNAL_EXITS,
	ITLB_REAL_MISS_EXITS,
	ITLB_VIRT_MISS_EXITS,
	DTLB_REAL_MISS_EXITS,
	DTLB_VIRT_MISS_EXITS,
	SYSCALL_EXITS,
	ISI_EXITS,
	DSI_EXITS,
	EMULATED_INST_EXITS,
	EMULATED_MTMSRWE_EXITS,
	EMULATED_WRTEE_EXITS,
	EMULATED_MTSPR_EXITS,
	EMULATED_MFSPR_EXITS,
	EMULATED_MTMSR_EXITS,
	EMULATED_MFMSR_EXITS,
	EMULATED_TLBSX_EXITS,
	EMULATED_TLBWE_EXITS,
	EMULATED_RFI_EXITS,
	DEC_EXITS,
	EXT_INTR_EXITS,
	HALT_WAKEUP,
	USR_PR_INST,
	FP_UNAVAIL,
	DEBUG_EXITS,
	TIMEINGUEST,
	__NUMBER_OF_KVM_EXIT_TYPES
};

/* allow access to big endian 32bit upper/lower parts and 64bit var */
struct kvmppc_exit_timing {
	union {
		u64 tv64;
		struct {
			u32 tbu, tbl;
		} tv32;
	};
};

struct kvmppc_pginfo {
	unsigned long pfn;
	atomic_t refcnt;
};

struct kvmppc_spapr_tce_table {
	struct list_head list;
	struct kvm *kvm;
	u64 liobn;
	u32 window_size;
	struct page *pages[0];
};

struct kvmppc_rma_info {
	void		*base_virt;
	unsigned long	 base_pfn;
	unsigned long	 npages;
	struct list_head list;
	atomic_t 	 use_count;
};

struct kvm_arch {
#ifdef CONFIG_KVM_BOOK3S_64_HV
	unsigned long hpt_virt;
	unsigned long ram_npages;
	unsigned long ram_psize;
	unsigned long ram_porder;
	struct kvmppc_pginfo *ram_pginfo;
	unsigned int lpid;
	unsigned int host_lpid;
	unsigned long host_lpcr;
	unsigned long sdr1;
	unsigned long host_sdr1;
	int tlbie_lock;
	int n_rma_pages;
	unsigned long lpcr;
	unsigned long rmor;
	struct kvmppc_rma_info *rma;
	struct list_head spapr_tce_tables;
	unsigned short last_vcpu[NR_CPUS];
	struct kvmppc_vcore *vcores[KVM_MAX_VCORES];
#endif /* CONFIG_KVM_BOOK3S_64_HV */
};

/*
 * Struct for a virtual core.
 * Note: entry_exit_count combines an entry count in the bottom 8 bits
 * and an exit count in the next 8 bits.  This is so that we can
 * atomically increment the entry count iff the exit count is 0
 * without taking the lock.
 */
struct kvmppc_vcore {
	int n_runnable;
	int n_blocked;
	int num_threads;
	int entry_exit_count;
	int n_woken;
	int nap_count;
	u16 pcpu;
	u8 vcore_running;
	u8 in_guest;
	struct list_head runnable_threads;
	spinlock_t lock;
};

#define VCORE_ENTRY_COUNT(vc)	((vc)->entry_exit_count & 0xff)
#define VCORE_EXIT_COUNT(vc)	((vc)->entry_exit_count >> 8)

struct kvmppc_pte {
	ulong eaddr;
	u64 vpage;
	ulong raddr;
	bool may_read		: 1;
	bool may_write		: 1;
	bool may_execute	: 1;
};

struct kvmppc_mmu {
	/* book3s_64 only */
	void (*slbmte)(struct kvm_vcpu *vcpu, u64 rb, u64 rs);
	u64  (*slbmfee)(struct kvm_vcpu *vcpu, u64 slb_nr);
	u64  (*slbmfev)(struct kvm_vcpu *vcpu, u64 slb_nr);
	void (*slbie)(struct kvm_vcpu *vcpu, u64 slb_nr);
	void (*slbia)(struct kvm_vcpu *vcpu);
	/* book3s */
	void (*mtsrin)(struct kvm_vcpu *vcpu, u32 srnum, ulong value);
	u32  (*mfsrin)(struct kvm_vcpu *vcpu, u32 srnum);
	int  (*xlate)(struct kvm_vcpu *vcpu, gva_t eaddr, struct kvmppc_pte *pte, bool data);
	void (*reset_msr)(struct kvm_vcpu *vcpu);
	void (*tlbie)(struct kvm_vcpu *vcpu, ulong addr, bool large);
	int  (*esid_to_vsid)(struct kvm_vcpu *vcpu, ulong esid, u64 *vsid);
	u64  (*ea_to_vp)(struct kvm_vcpu *vcpu, gva_t eaddr, bool data);
	bool (*is_dcbz32)(struct kvm_vcpu *vcpu);
};

struct kvmppc_slb {
	u64 esid;
	u64 vsid;
	u64 orige;
	u64 origv;
	bool valid	: 1;
	bool Ks		: 1;
	bool Kp		: 1;
	bool nx		: 1;
	bool large	: 1;	/* PTEs are 16MB */
	bool tb		: 1;	/* 1TB segment */
	bool class	: 1;
};

struct kvm_vcpu_arch {
	ulong host_stack;
	u32 host_pid;
#ifdef CONFIG_PPC_BOOK3S
	ulong host_msr;
	ulong host_r2;
	void *host_retip;
	ulong trampoline_lowmem;
	ulong trampoline_enter;
	ulong highmem_handler;
	ulong rmcall;
	ulong host_paca_phys;
	struct kvmppc_slb slb[64];
	int slb_max;		/* 1 + index of last valid entry in slb[] */
	int slb_nr;		/* total number of entries in SLB */
	struct kvmppc_mmu mmu;
#endif

	ulong gpr[32];

	u64 fpr[32];
	u64 fpscr;

#ifdef CONFIG_SPE
	ulong evr[32];
	ulong spefscr;
	ulong host_spefscr;
	u64 acc;
#endif
#ifdef CONFIG_ALTIVEC
	vector128 vr[32];
	vector128 vscr;
#endif

#ifdef CONFIG_VSX
	u64 vsr[64];
#endif

#ifdef CONFIG_PPC_BOOK3S
	/* For Gekko paired singles */
	u32 qpr[32];
#endif

	ulong pc;
	ulong ctr;
	ulong lr;

	ulong xer;
	u32 cr;

#ifdef CONFIG_PPC_BOOK3S
	ulong hflags;
	ulong guest_owned_ext;
	ulong purr;
	ulong spurr;
	ulong dscr;
	ulong amr;
	ulong uamor;
	u32 ctrl;
	ulong dabr;
#endif
	u32 vrsave; /* also USPRG0 */
	u32 mmucr;
	ulong shadow_msr;
	ulong sprg4;
	ulong sprg5;
	ulong sprg6;
	ulong sprg7;
	ulong csrr0;
	ulong csrr1;
	ulong dsrr0;
	ulong dsrr1;
	ulong mcsrr0;
	ulong mcsrr1;
	ulong mcsr;
	ulong esr;
	u32 dec;
	u32 decar;
	u32 tbl;
	u32 tbu;
	u32 tcr;
	u32 tsr;
	u32 ivor[64];
	ulong ivpr;
	u32 pir;
	u32 pvr;

	u32 shadow_pid;
	u32 shadow_pid1;
	u32 pid;
	u32 swap_pid;

	u32 ccr0;
	u32 ccr1;
	u32 dbcr0;
	u32 dbcr1;
	u32 dbsr;

	u64 mmcr[3];
	u32 pmc[8];

#ifdef CONFIG_KVM_EXIT_TIMING
	struct mutex exit_timing_lock;
	struct kvmppc_exit_timing timing_exit;
	struct kvmppc_exit_timing timing_last_enter;
	u32 last_exit_type;
	u32 timing_count_type[__NUMBER_OF_KVM_EXIT_TYPES];
	u64 timing_sum_duration[__NUMBER_OF_KVM_EXIT_TYPES];
	u64 timing_sum_quad_duration[__NUMBER_OF_KVM_EXIT_TYPES];
	u64 timing_min_duration[__NUMBER_OF_KVM_EXIT_TYPES];
	u64 timing_max_duration[__NUMBER_OF_KVM_EXIT_TYPES];
	u64 timing_last_exit;
	struct dentry *debugfs_exit_timing;
#endif

#ifdef CONFIG_PPC_BOOK3S
	ulong fault_dar;
	u32 fault_dsisr;
#endif

#ifdef CONFIG_BOOKE
	ulong fault_dear;
	ulong fault_esr;
	ulong queued_dear;
	ulong queued_esr;
#endif
	gpa_t paddr_accessed;

	u8 io_gpr; /* GPR used as IO source/target */
	u8 mmio_is_bigendian;
	u8 mmio_sign_extend;
	u8 dcr_needed;
	u8 dcr_is_write;
	u8 osi_needed;
	u8 osi_enabled;
	u8 hcall_needed;

	u32 cpr0_cfgaddr; /* holds the last set cpr0_cfgaddr */

	struct hrtimer dec_timer;
	struct tasklet_struct tasklet;
	u64 dec_jiffies;
	u64 dec_expires;
	unsigned long pending_exceptions;
	u16 last_cpu;
	u8 ceded;
	u8 prodded;
	u32 last_inst;

	struct lppaca *vpa;
	struct slb_shadow *slb_shadow;
	struct dtl *dtl;
	struct dtl *dtl_end;

	struct kvmppc_vcore *vcore;
	int ret;
	int trap;
	int state;
	int ptid;
	wait_queue_head_t cpu_run;

	struct kvm_vcpu_arch_shared *shared;
	unsigned long magic_page_pa; /* phys addr to map the magic page to */
	unsigned long magic_page_ea; /* effect. addr to map the magic page to */

#ifdef CONFIG_KVM_BOOK3S_64_HV
	struct kvm_vcpu_arch_shared shregs;

	struct list_head run_list;
	struct task_struct *run_task;
	struct kvm_run *kvm_run;
#endif
};

#define KVMPPC_VCPU_BUSY_IN_HOST	0
#define KVMPPC_VCPU_BLOCKED		1
#define KVMPPC_VCPU_RUNNABLE		2

#endif /* __POWERPC_KVM_HOST_H__ */
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:50 PDT 2016
Sun, Jul 24, 2016  1:14:11 PM
Mon, Jul 25, 2016  6:21:13 PM
Mon, Jul 25, 2016  7:34:28 PM
Tue, Jul 26, 2016  2:10:32 PM
