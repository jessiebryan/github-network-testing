/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 */

#ifndef _XTENSA_SWITCH_TO_H
#define _XTENSA_SWITCH_TO_H

/* * switch_to(n) should switch tasks to task nr n, first
 * checking that n isn't the current task, in which case it does nothing.
 */
extern void *_switch_to(void *last, void *next);

#define switch_to(prev,next,last)		\
do {						\
	(last) = _switch_to(prev, next);	\
} while(0)

#endif /* _XTENSA_SWITCH_TO_H */
Tue Jul 19 12:45:18 PDT 2016
Fri Jul 22 15:59:14 PDT 2016
Sun, Jul 24, 2016  3:53:28 PM
Mon, Jul 25, 2016 10:35:53 PM
