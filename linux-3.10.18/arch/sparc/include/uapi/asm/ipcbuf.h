#ifndef __SPARC_IPCBUF_H
#define __SPARC_IPCBUF_H

/*
 * The ipc64_perm structure for sparc/sparc64 architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 32-bit seq
 * - on sparc for 32 bit mode (it is 32 bit on sparc64)
 * - 2 miscellaneous 64-bit values
 */

struct ipc64_perm
{
	__kernel_key_t	key;
	__kernel_uid_t	uid;
	__kernel_gid_t	gid;
	__kernel_uid_t	cuid;
	__kernel_gid_t	cgid;
#ifndef __arch64__
	unsigned short	__pad0;
#endif
	__kernel_mode_t	mode;
	unsigned short	__pad1;
	unsigned short	seq;
	unsigned long long __unused1;
	unsigned long long __unused2;
};

#endif /* __SPARC_IPCBUF_H */
Tue Jul 19 12:46:29 PDT 2016
Fri Jul 22 16:01:32 PDT 2016
Sun, Jul 24, 2016  4:11:22 PM
Mon, Jul 25, 2016 10:55:47 PM
