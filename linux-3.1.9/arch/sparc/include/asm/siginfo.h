#ifndef __SPARC_SIGINFO_H
#define __SPARC_SIGINFO_H

#if defined(__sparc__) && defined(__arch64__)

#define SI_PAD_SIZE32	((SI_MAX_SIZE/sizeof(int)) - 3)
#define __ARCH_SI_PREAMBLE_SIZE	(4 * sizeof(int))
#define __ARCH_SI_BAND_T int

#endif /* defined(__sparc__) && defined(__arch64__) */


#define __ARCH_SI_TRAPNO

#include <asm-generic/siginfo.h>

#ifdef __KERNEL__

#include <linux/compat.h>

#ifdef CONFIG_COMPAT

struct compat_siginfo;

#endif /* CONFIG_COMPAT */

#endif /* __KERNEL__ */

#define SI_NOINFO	32767		/* no information in siginfo_t */

/*
 * SIGEMT si_codes
 */
#define EMT_TAGOVF	(__SI_FAULT|1)	/* tag overflow */
#define NSIGEMT		1

#endif /* !(__SPARC_SIGINFO_H) */
Tue Jul 19 12:38:04 PDT 2016
Fri Jul 22 15:45:42 PDT 2016
Sun, Jul 24, 2016  2:12:31 PM
Mon, Jul 25, 2016  8:43:01 PM
