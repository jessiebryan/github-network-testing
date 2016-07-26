#ifndef _ASM_IA64_FCNTL_H
#define _ASM_IA64_FCNTL_H
/*
 * Modified 1998-2000
 *	David Mosberger-Tang <davidm@hpl.hp.com>, Hewlett-Packard Co.
 */

#define force_o_largefile()	\
		(personality(current->personality) != PER_LINUX32)

#include <asm-generic/fcntl.h>

#endif /* _ASM_IA64_FCNTL_H */
Tue Jul 19 12:45:45 PDT 2016
Fri Jul 22 16:00:07 PDT 2016
Sun, Jul 24, 2016  4:00:25 PM
Mon, Jul 25, 2016 10:43:35 PM
