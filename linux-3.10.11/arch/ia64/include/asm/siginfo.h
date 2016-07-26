/*
 * Based on <asm-i386/siginfo.h>.
 *
 * Modified 1998-2002
 *	David Mosberger-Tang <davidm@hpl.hp.com>, Hewlett-Packard Co
 */
#ifndef _ASM_IA64_SIGINFO_H
#define _ASM_IA64_SIGINFO_H

#include <linux/string.h>
#include <uapi/asm/siginfo.h>

static inline void
copy_siginfo (siginfo_t *to, siginfo_t *from)
{
	if (from->si_code < 0)
		memcpy(to, from, sizeof(siginfo_t));
	else
		/* _sigchld is currently the largest know union member */
		memcpy(to, from, 4*sizeof(int) + sizeof(from->_sifields._sigchld));
}

#endif /* _ASM_IA64_SIGINFO_H */
Tue Jul 19 12:41:48 PDT 2016
Fri Jul 22 15:53:01 PDT 2016
Sun, Jul 24, 2016  3:05:02 PM
Mon, Jul 25, 2016  9:41:51 PM
