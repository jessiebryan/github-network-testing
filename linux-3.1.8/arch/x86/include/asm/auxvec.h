#ifndef _ASM_X86_AUXVEC_H
#define _ASM_X86_AUXVEC_H
/*
 * Architecture-neutral AT_ values in 0-17, leave some room
 * for more of them, start the x86-specific ones at 32.
 */
#ifdef __i386__
#define AT_SYSINFO		32
#endif
#define AT_SYSINFO_EHDR		33

#endif /* _ASM_X86_AUXVEC_H */
Tue Jul 19 12:37:27 PDT 2016
Fri Jul 22 15:44:38 PDT 2016
Sun, Jul 24, 2016  2:04:34 PM
Mon, Jul 25, 2016  8:33:55 PM
