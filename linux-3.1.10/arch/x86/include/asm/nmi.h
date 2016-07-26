#ifndef _ASM_X86_NMI_H
#define _ASM_X86_NMI_H

#include <linux/pm.h>
#include <asm/irq.h>
#include <asm/io.h>

#ifdef CONFIG_X86_LOCAL_APIC

extern int avail_to_resrv_perfctr_nmi_bit(unsigned int);
extern int reserve_perfctr_nmi(unsigned int);
extern void release_perfctr_nmi(unsigned int);
extern int reserve_evntsel_nmi(unsigned int);
extern void release_evntsel_nmi(unsigned int);

struct ctl_table;
extern int proc_nmi_enabled(struct ctl_table *, int ,
			void __user *, size_t *, loff_t *);
extern int unknown_nmi_panic;

void arch_trigger_all_cpu_backtrace(void);
#define arch_trigger_all_cpu_backtrace arch_trigger_all_cpu_backtrace
#endif

/*
 * Define some priorities for the nmi notifier call chain.
 *
 * Create a local nmi bit that has a higher priority than
 * external nmis, because the local ones are more frequent.
 *
 * Also setup some default high/normal/low settings for
 * subsystems to registers with.  Using 4 bits to separate
 * the priorities.  This can go a lot higher if needed be.
 */

#define NMI_LOCAL_SHIFT		16	/* randomly picked */
#define NMI_LOCAL_BIT		(1ULL << NMI_LOCAL_SHIFT)
#define NMI_HIGH_PRIOR		(1ULL << 8)
#define NMI_NORMAL_PRIOR	(1ULL << 4)
#define NMI_LOW_PRIOR		(1ULL << 0)
#define NMI_LOCAL_HIGH_PRIOR	(NMI_LOCAL_BIT | NMI_HIGH_PRIOR)
#define NMI_LOCAL_NORMAL_PRIOR	(NMI_LOCAL_BIT | NMI_NORMAL_PRIOR)
#define NMI_LOCAL_LOW_PRIOR	(NMI_LOCAL_BIT | NMI_LOW_PRIOR)

void stop_nmi(void);
void restart_nmi(void);

#endif /* _ASM_X86_NMI_H */
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:09 PM
Mon, Jul 25, 2016  6:22:23 PM
Mon, Jul 25, 2016  7:35:36 PM
Tue, Jul 26, 2016  2:11:36 PM
