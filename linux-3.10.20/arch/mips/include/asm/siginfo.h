/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1998, 1999, 2001, 2003 Ralf Baechle
 * Copyright (C) 2000, 2001 Silicon Graphics, Inc.
 */
#ifndef _ASM_SIGINFO_H
#define _ASM_SIGINFO_H

#include <uapi/asm/siginfo.h>


/*
 * Duplicated here because of <asm-generic/siginfo.h> braindamage ...
 */
#include <linux/string.h>

static inline void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
	if (from->si_code < 0)
		memcpy(to, from, sizeof(*to));
	else
		/* _sigchld is currently the largest know union member */
		memcpy(to, from, 3*sizeof(int) + sizeof(from->_sifields._sigchld));
}

#endif /* _ASM_SIGINFO_H */
Tue Jul 19 12:47:42 PDT 2016
Fri Jul 22 16:03:47 PDT 2016
Sun, Jul 24, 2016  4:28:47 PM
Mon, Jul 25, 2016 11:15:07 PM
