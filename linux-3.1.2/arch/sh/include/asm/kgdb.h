#ifndef __ASM_SH_KGDB_H
#define __ASM_SH_KGDB_H

#include <asm/cacheflush.h>
#include <asm/ptrace.h>

/* Same as pt_regs but has vbr in place of syscall_nr */
struct kgdb_regs {
        unsigned long regs[16];
        unsigned long pc;
        unsigned long pr;
        unsigned long sr;
        unsigned long gbr;
        unsigned long mach;
        unsigned long macl;
        unsigned long vbr;
};

enum regnames {
	GDB_R0, GDB_R1, GDB_R2, GDB_R3, GDB_R4, GDB_R5, GDB_R6, GDB_R7,
	GDB_R8, GDB_R9, GDB_R10, GDB_R11, GDB_R12, GDB_R13, GDB_R14, GDB_R15,

	GDB_PC, GDB_PR, GDB_SR, GDB_GBR, GDB_MACH, GDB_MACL, GDB_VBR,
};

#define NUMREGBYTES    ((GDB_VBR + 1) * 4)

static inline void arch_kgdb_breakpoint(void)
{
	__asm__ __volatile__ ("trapa #0x3c\n");
}

#define BUFMAX                 2048

#define CACHE_FLUSH_IS_SAFE	1
#define BREAK_INSTR_SIZE	2
#define GDB_ADJUSTS_BREAK_OFFSET

#endif /* __ASM_SH_KGDB_H */
Tue Jul 19 12:34:01 PDT 2016
Fri Jul 22 15:38:57 PDT 2016
Sun, Jul 24, 2016  1:22:47 PM
Mon, Jul 25, 2016  6:31:32 PM
Mon, Jul 25, 2016  7:44:34 PM
Tue, Jul 26, 2016  2:20:11 PM
