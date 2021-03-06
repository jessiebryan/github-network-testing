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
Tue Jul 19 12:33:20 PDT 2016
Fri Jul 22 15:37:44 PDT 2016
Sun, Jul 24, 2016  1:13:27 PM
Mon, Jul 25, 2016  6:20:22 PM
Mon, Jul 25, 2016  7:33:37 PM
Tue, Jul 26, 2016  2:09:44 PM
