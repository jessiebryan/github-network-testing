#ifndef _ASM_IPCBUF_H
#define _ASM_IPCBUF_H

/*
 * The ipc64_perm structure for MN10300 architecture.
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

#endif /* _ASM_IPCBUF_H */
Tue Jul 19 12:36:13 PDT 2016
Fri Jul 22 15:42:14 PDT 2016
Sun, Jul 24, 2016  1:46:55 PM
Mon, Jul 25, 2016  8:13:01 PM
