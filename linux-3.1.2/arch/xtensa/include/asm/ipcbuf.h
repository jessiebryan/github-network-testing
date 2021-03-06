/*
 * include/asm-xtensa/ipcbuf.h
 *
 * The ipc64_perm structure for the Xtensa architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 */

#ifndef _XTENSA_IPCBUF_H
#define _XTENSA_IPCBUF_H

/*
 * Pad space is left for:
 * - 32-bit mode_t and seq
 * - 2 miscellaneous 32-bit values
 *
 * This file is subject to the terms and conditions of the GNU General
 * Public License.  See the file "COPYING" in the main directory of
 * this archive for more details.
 */

struct ipc64_perm
{
	__kernel_key_t		key;
	__kernel_uid32_t	uid;
	__kernel_gid32_t	gid;
	__kernel_uid32_t	cuid;
	__kernel_gid32_t	cgid;
	__kernel_mode_t		mode;
	unsigned long		seq;
	unsigned long		__unused1;
	unsigned long		__unused2;
};

#endif /* _XTENSA_IPCBUF_H */
Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:03 PDT 2016
Sun, Jul 24, 2016  1:23:33 PM
Mon, Jul 25, 2016  6:32:28 PM
Mon, Jul 25, 2016  7:45:29 PM
Tue, Jul 26, 2016  2:21:03 PM
