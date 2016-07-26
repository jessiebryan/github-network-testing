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
Tue Jul 19 12:44:31 PDT 2016
Fri Jul 22 15:57:46 PDT 2016
Sun, Jul 24, 2016  3:41:56 PM
Mon, Jul 25, 2016 10:23:01 PM
