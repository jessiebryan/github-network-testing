/* 
 *    Copyright (C) 2002 Richard Hirst <rhirst at parisc-linux.org>
 *    Copyright (C) 2003 James Bottomley <jejb at parisc-linux.org>
 *    Copyright (C) 2003 Randolph Chung <tausq with parisc-linux.org>
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef _PARISC64_KERNEL_SYS32_H
#define _PARISC64_KERNEL_SYS32_H

#include <linux/compat.h>

/* Call a kernel syscall which will use kernel space instead of user
 * space for its copy_to/from_user.
 */
#define KERNEL_SYSCALL(ret, syscall, args...) \
{ \
    mm_segment_t old_fs = get_fs(); \
    set_fs(KERNEL_DS); \
    ret = syscall(args); \
    set_fs (old_fs); \
}

#ifdef CONFIG_COMPAT

typedef __u32 __sighandler_t32;

struct sigaction32 {
	__sighandler_t32 sa_handler;
	unsigned int sa_flags;
	compat_sigset_t sa_mask;		/* mask last for extensibility */
};

#endif

#endif
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:49 PDT 2016
Sun, Jul 24, 2016  1:14:05 PM
Mon, Jul 25, 2016  6:21:06 PM
Mon, Jul 25, 2016  7:34:21 PM
Tue, Jul 26, 2016  2:10:25 PM
