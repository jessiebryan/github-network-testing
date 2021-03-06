#ifdef __KERNEL__
#ifndef __MICROBLAZE_KGDB_H__
#define __MICROBLAZE_KGDB_H__

#ifndef __ASSEMBLY__

#define CACHE_FLUSH_IS_SAFE	1
#define BUFMAX			2048

/*
 * 32 32-bit general purpose registers (r0-r31)
 *  6 32-bit special registers (pc, msr, ear, esr, fsr, btr)
 * 12 32-bit PVR
 *   7 32-bit MMU Regs (redr, rpid, rzpr, rtlbx, rtlbsx, rtlblo, rtlbhi)
 * ------
 *  57 registers
 */
#define NUMREGBYTES	(57 * 4)

#define BREAK_INSTR_SIZE	4
static inline void arch_kgdb_breakpoint(void)
{
	__asm__ __volatile__("brki r16, 0x18;");
}

#endif /* __ASSEMBLY__ */
#endif /* __MICROBLAZE_KGDB_H__ */
#endif /* __KERNEL__ */
Tue Jul 19 12:48:19 PDT 2016
Fri Jul 22 16:04:56 PDT 2016
Sun, Jul 24, 2016  4:37:37 PM
Mon, Jul 25, 2016 11:24:56 PM
