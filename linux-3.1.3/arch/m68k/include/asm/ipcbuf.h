#ifndef __m68k_IPCBUF_H__
#define __m68k_IPCBUF_H__

/*
 * The user_ipc_perm structure for m68k architecture.
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

#endif /* __m68k_IPCBUF_H__ */
Tue Jul 19 12:34:54 PDT 2016
Fri Jul 22 15:39:54 PDT 2016
Sun, Jul 24, 2016  1:29:51 PM
Mon, Jul 25, 2016  6:39:59 PM
Mon, Jul 25, 2016  7:52:50 PM
Tue, Jul 26, 2016  2:27:59 PM
