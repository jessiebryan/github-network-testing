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

#include <uapi/asm/param.h>

# define HZ		CONFIG_HZ	/* internal timer frequency */
# define USER_HZ	100		/* for user interfaces in "ticks" */
# define CLOCKS_PER_SEC (USER_HZ)	/* frequnzy at which times() counts */
#endif /* _XTENSA_PARAM_H */
Tue Jul 19 12:41:16 PDT 2016
Fri Jul 22 15:52:04 PDT 2016
Sun, Jul 24, 2016  2:58:07 PM
Mon, Jul 25, 2016  9:34:04 PM
