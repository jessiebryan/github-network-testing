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
Tue Jul 19 12:47:01 PDT 2016
Fri Jul 22 16:02:30 PDT 2016
Sun, Jul 24, 2016  4:18:50 PM
Mon, Jul 25, 2016 11:04:06 PM
