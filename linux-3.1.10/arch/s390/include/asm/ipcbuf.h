#ifndef __S390_IPCBUF_H__
#define __S390_IPCBUF_H__

/*
 * The user_ipc_perm structure for S/390 architecture.
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
#ifndef __s390x__
	unsigned short		__pad2;
#endif /* ! __s390x__ */
	unsigned long		__unused1;
	unsigned long		__unused2;
};

#endif /* __S390_IPCBUF_H__ */
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:23 PM
Mon, Jul 25, 2016  6:21:28 PM
Mon, Jul 25, 2016  7:34:42 PM
Tue, Jul 26, 2016  2:10:45 PM
