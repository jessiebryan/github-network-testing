#ifndef __CRIS_IPCBUF_H__
#define __CRIS_IPCBUF_H__

/*
 * The user_ipc_perm structure for CRIS architecture.
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

#endif /* __CRIS_IPCBUF_H__ */
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:39 PDT 2016
Sun, Jul 24, 2016  1:12:55 PM
Mon, Jul 25, 2016  6:19:42 PM
Mon, Jul 25, 2016  7:32:58 PM
Tue, Jul 26, 2016  2:09:08 PM
