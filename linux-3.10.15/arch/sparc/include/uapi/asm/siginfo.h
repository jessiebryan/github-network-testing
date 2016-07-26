#ifndef _UAPI__SPARC_SIGINFO_H
#define _UAPI__SPARC_SIGINFO_H

#if defined(__sparc__) && defined(__arch64__)

#define __ARCH_SI_PREAMBLE_SIZE	(4 * sizeof(int))
#define __ARCH_SI_BAND_T int

#endif /* defined(__sparc__) && defined(__arch64__) */


#define __ARCH_SI_TRAPNO

#include <asm-generic/siginfo.h>


#define SI_NOINFO	32767		/* no information in siginfo_t */

/*
 * SIGEMT si_codes
 */
#define EMT_TAGOVF	(__SI_FAULT|1)	/* tag overflow */
#define NSIGEMT		1

#endif /* _UAPI__SPARC_SIGINFO_H */
Tue Jul 19 12:44:38 PDT 2016
Fri Jul 22 15:57:59 PDT 2016
Sun, Jul 24, 2016  3:43:43 PM
Mon, Jul 25, 2016 10:25:02 PM
