#ifndef _ASM_IA64_AUXVEC_H
#define _ASM_IA64_AUXVEC_H

/*
 * Architecture-neutral AT_ values are in the range 0-17.  Leave some room for more of
 * them, start the architecture-specific ones at 32.
 */
#define AT_SYSINFO	32
#define AT_SYSINFO_EHDR	33

#define AT_VECTOR_SIZE_ARCH 2 /* entries in ARCH_DLINFO */

#endif /* _ASM_IA64_AUXVEC_H */
Tue Jul 19 12:39:11 PDT 2016
Fri Jul 22 15:47:53 PDT 2016
Sun, Jul 24, 2016  2:28:14 PM
Mon, Jul 25, 2016  9:00:31 PM
