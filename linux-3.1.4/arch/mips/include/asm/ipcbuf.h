#ifndef _ASM_IPCBUF_H
#define _ASM_IPCBUF_H

/*
 * The ipc64_perm structure for alpha architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 32-bit seq
 * - 2 miscellaneous 64-bit values
 */

struct ipc64_perm
{
	__kernel_key_t	key;
	__kernel_uid_t	uid;
	__kernel_gid_t	gid;
	__kernel_uid_t	cuid;
	__kernel_gid_t	cgid;
	__kernel_mode_t	mode;
	unsigned short	seq;
	unsigned short	__pad1;
	unsigned long	__unused1;
	unsigned long	__unused2;
};

#endif /* _ASM_IPCBUF_H */
Tue Jul 19 12:35:38 PDT 2016
Fri Jul 22 15:41:05 PDT 2016
Sun, Jul 24, 2016  1:38:19 PM
