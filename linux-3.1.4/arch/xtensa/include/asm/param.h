/*
 * include/asm-xtensa/param.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 */

#ifndef _XTENSA_PARAM_H
#define _XTENSA_PARAM_H

#ifdef __KERNEL__
# define HZ		CONFIG_HZ	/* internal timer frequency */
# define USER_HZ	100		/* for user interfaces in "ticks" */
# define CLOCKS_PER_SEC (USER_HZ)	/* frequnzy at which times() counts */
#else
# define HZ		100
#endif

#define EXEC_PAGESIZE	4096

#ifndef NGROUPS
#define NGROUPS		32
#endif

#ifndef NOGROUP
#define NOGROUP		(-1)
#endif

#define MAXHOSTNAMELEN	64	/* max length of hostname */

#endif /* _XTENSA_PARAM_H */
Tue Jul 19 12:35:45 PDT 2016
Fri Jul 22 15:41:19 PDT 2016
Sun, Jul 24, 2016  1:40:04 PM
Mon, Jul 25, 2016  8:04:56 PM
Tue, Jul 26, 2016  2:39:18 PM
