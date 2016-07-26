#ifndef __ASMARM_IPCBUF_H
#define __ASMARM_IPCBUF_H

/*
 * The ipc64_perm structure for arm architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 32-bit mode_t and seq
 * - 2 miscellaneous 32-bit values
 */

struct ipc64_perm
{
	__kernel_key_t		key;
	__kernel_uid32_t	uid;
	__kernel_gid32_t	gid;
	__kernel_uid32_t	cuid;
	__kernel_gid32_t	cgid;
	__kernel_mode_t		mode;
	unsigned short		__pad1;
	unsigned short		seq;
	unsigned short		__pad2;
	unsigned long		__unused1;
	unsigned long		__unused2;
};

#endif /* __ASMARM_IPCBUF_H */
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:39 PDT 2016
Sun, Jul 24, 2016  1:28:04 PM
Mon, Jul 25, 2016  6:37:52 PM
Mon, Jul 25, 2016  7:50:45 PM
