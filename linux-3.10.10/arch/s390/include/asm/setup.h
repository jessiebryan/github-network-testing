/*
 *  S390 version
 *    Copyright IBM Corp. 1999, 2010
 */
#ifndef _ASM_S390_SETUP_H
#define _ASM_S390_SETUP_H

#include <uapi/asm/setup.h>


#define PARMAREA		0x10400
#define MEMORY_CHUNKS		256

#ifndef __ASSEMBLY__

#include <asm/lowcore.h>
#include <asm/types.h>

#ifndef CONFIG_64BIT
#define IPL_DEVICE        (*(unsigned long *)  (0x10404))
#define INITRD_START      (*(unsigned long *)  (0x1040C))
#define INITRD_SIZE       (*(unsigned long *)  (0x10414))
#define OLDMEM_BASE	  (*(unsigned long *)  (0x1041C))
#define OLDMEM_SIZE	  (*(unsigned long *)  (0x10424))
#else /* CONFIG_64BIT */
#define IPL_DEVICE        (*(unsigned long *)  (0x10400))
#define INITRD_START      (*(unsigned long *)  (0x10408))
#define INITRD_SIZE       (*(unsigned long *)  (0x10410))
#define OLDMEM_BASE	  (*(unsigned long *)  (0x10418))
#define OLDMEM_SIZE	  (*(unsigned long *)  (0x10420))
#endif /* CONFIG_64BIT */
#define COMMAND_LINE      ((char *)            (0x10480))

#define CHUNK_READ_WRITE 0
#define CHUNK_READ_ONLY  1

struct mem_chunk {
	unsigned long addr;
	unsigned long size;
	int type;
};

extern struct mem_chunk memory_chunk[];
extern int memory_end_set;
extern unsigned long memory_end;

void detect_memory_layout(struct mem_chunk chunk[], unsigned long maxsize);
void create_mem_hole(struct mem_chunk mem_chunk[], unsigned long addr,
		     unsigned long size);

#define PRIMARY_SPACE_MODE	0
#define ACCESS_REGISTER_MODE	1
#define SECONDARY_SPACE_MODE	2
#define HOME_SPACE_MODE		3

extern unsigned int s390_user_mode;

/*
 * Machine features detected in head.S
 */

#define MACHINE_FLAG_VM		(1UL << 0)
#define MACHINE_FLAG_IEEE	(1UL << 1)
#define MACHINE_FLAG_CSP	(1UL << 2)
#define MACHINE_FLAG_MVPG	(1UL << 3)
#define MACHINE_FLAG_DIAG44	(1UL << 4)
#define MACHINE_FLAG_IDTE	(1UL << 5)
#define MACHINE_FLAG_DIAG9C	(1UL << 6)
#define MACHINE_FLAG_MVCOS	(1UL << 7)
#define MACHINE_FLAG_KVM	(1UL << 8)
#define MACHINE_FLAG_ESOP	(1UL << 9)
#define MACHINE_FLAG_EDAT1	(1UL << 10)
#define MACHINE_FLAG_EDAT2	(1UL << 11)
#define MACHINE_FLAG_LPAR	(1UL << 12)
#define MACHINE_FLAG_LPP	(1UL << 13)
#define MACHINE_FLAG_TOPOLOGY	(1UL << 14)
#define MACHINE_FLAG_TE		(1UL << 15)
#define MACHINE_FLAG_RRBM	(1UL << 16)

#define MACHINE_IS_VM		(S390_lowcore.machine_flags & MACHINE_FLAG_VM)
#define MACHINE_IS_KVM		(S390_lowcore.machine_flags & MACHINE_FLAG_KVM)
#define MACHINE_IS_LPAR		(S390_lowcore.machine_flags & MACHINE_FLAG_LPAR)

#define MACHINE_HAS_DIAG9C	(S390_lowcore.machine_flags & MACHINE_FLAG_DIAG9C)
#define MACHINE_HAS_ESOP	(S390_lowcore.machine_flags & MACHINE_FLAG_ESOP)
#define MACHINE_HAS_PFMF	MACHINE_HAS_EDAT1
#define MACHINE_HAS_HPAGE	MACHINE_HAS_EDAT1

#ifndef CONFIG_64BIT
#define MACHINE_HAS_IEEE	(S390_lowcore.machine_flags & MACHINE_FLAG_IEEE)
#define MACHINE_HAS_CSP		(S390_lowcore.machine_flags & MACHINE_FLAG_CSP)
#define MACHINE_HAS_IDTE	(0)
#define MACHINE_HAS_DIAG44	(1)
#define MACHINE_HAS_MVPG	(S390_lowcore.machine_flags & MACHINE_FLAG_MVPG)
#define MACHINE_HAS_MVCOS	(0)
#define MACHINE_HAS_EDAT1	(0)
#define MACHINE_HAS_EDAT2	(0)
#define MACHINE_HAS_LPP		(0)
#define MACHINE_HAS_TOPOLOGY	(0)
#define MACHINE_HAS_TE		(0)
#define MACHINE_HAS_RRBM	(0)
#else /* CONFIG_64BIT */
#define MACHINE_HAS_IEEE	(1)
#define MACHINE_HAS_CSP		(1)
#define MACHINE_HAS_IDTE	(S390_lowcore.machine_flags & MACHINE_FLAG_IDTE)
#define MACHINE_HAS_DIAG44	(S390_lowcore.machine_flags & MACHINE_FLAG_DIAG44)
#define MACHINE_HAS_MVPG	(1)
#define MACHINE_HAS_MVCOS	(S390_lowcore.machine_flags & MACHINE_FLAG_MVCOS)
#define MACHINE_HAS_EDAT1	(S390_lowcore.machine_flags & MACHINE_FLAG_EDAT1)
#define MACHINE_HAS_EDAT2	(S390_lowcore.machine_flags & MACHINE_FLAG_EDAT2)
#define MACHINE_HAS_LPP		(S390_lowcore.machine_flags & MACHINE_FLAG_LPP)
#define MACHINE_HAS_TOPOLOGY	(S390_lowcore.machine_flags & MACHINE_FLAG_TOPOLOGY)
#define MACHINE_HAS_TE		(S390_lowcore.machine_flags & MACHINE_FLAG_TE)
#define MACHINE_HAS_RRBM	(S390_lowcore.machine_flags & MACHINE_FLAG_RRBM)
#endif /* CONFIG_64BIT */

#define ZFCPDUMP_HSA_SIZE	(32UL<<20)
#define ZFCPDUMP_HSA_SIZE_MAX	(64UL<<20)

/*
 * Console mode. Override with conmode=
 */
extern unsigned int console_mode;
extern unsigned int console_devno;
extern unsigned int console_irq;

extern char vmhalt_cmd[];
extern char vmpoff_cmd[];

#define CONSOLE_IS_UNDEFINED	(console_mode == 0)
#define CONSOLE_IS_SCLP		(console_mode == 1)
#define CONSOLE_IS_3215		(console_mode == 2)
#define CONSOLE_IS_3270		(console_mode == 3)
#define SET_CONSOLE_SCLP	do { console_mode = 1; } while (0)
#define SET_CONSOLE_3215	do { console_mode = 2; } while (0)
#define SET_CONSOLE_3270	do { console_mode = 3; } while (0)

#define NSS_NAME_SIZE	8
extern char kernel_nss_name[];

#ifdef CONFIG_PFAULT
extern int pfault_init(void);
extern void pfault_fini(void);
#else /* CONFIG_PFAULT */
#define pfault_init()		({-1;})
#define pfault_fini()		do { } while (0)
#endif /* CONFIG_PFAULT */

extern void cmma_init(void);

extern void (*_machine_restart)(char *command);
extern void (*_machine_halt)(void);
extern void (*_machine_power_off)(void);

#else /* __ASSEMBLY__ */

#ifndef CONFIG_64BIT
#define IPL_DEVICE        0x10404
#define INITRD_START      0x1040C
#define INITRD_SIZE       0x10414
#define OLDMEM_BASE	  0x1041C
#define OLDMEM_SIZE	  0x10424
#else /* CONFIG_64BIT */
#define IPL_DEVICE        0x10400
#define INITRD_START      0x10408
#define INITRD_SIZE       0x10410
#define OLDMEM_BASE	  0x10418
#define OLDMEM_SIZE	  0x10420
#endif /* CONFIG_64BIT */
#define COMMAND_LINE      0x10480

#endif /* __ASSEMBLY__ */
#endif /* _ASM_S390_SETUP_H */
Tue Jul 19 12:39:16 PDT 2016
Fri Jul 22 15:48:04 PDT 2016
Sun, Jul 24, 2016  2:29:33 PM
Mon, Jul 25, 2016  9:01:59 PM
