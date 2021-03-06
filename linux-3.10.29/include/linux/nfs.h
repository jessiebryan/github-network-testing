/*
 * NFS protocol definitions
 *
 * This file contains constants mostly for Version 2 of the protocol,
 * but also has a couple of NFSv3 bits in (notably the error codes).
 */
#ifndef _LINUX_NFS_H
#define _LINUX_NFS_H

#include <linux/sunrpc/msg_prot.h>
#include <linux/string.h>
#include <uapi/linux/nfs.h>

/*
 * This is the kernel NFS client file handle representation
 */
#define NFS_MAXFHSIZE		128
struct nfs_fh {
	unsigned short		size;
	unsigned char		data[NFS_MAXFHSIZE];
};

/*
 * Returns a zero iff the size and data fields match.
 * Checks only "size" bytes in the data field.
 */
static inline int nfs_compare_fh(const struct nfs_fh *a, const struct nfs_fh *b)
{
	return a->size != b->size || memcmp(a->data, b->data, a->size) != 0;
}

static inline void nfs_copy_fh(struct nfs_fh *target, const struct nfs_fh *source)
{
	target->size = source->size;
	memcpy(target->data, source->data, source->size);
}


/*
 * This is really a general kernel constant, but since nothing like
 * this is defined in the kernel headers, I have to do it here.
 */
#define NFS_OFFSET_MAX		((__s64)((~(__u64)0) >> 1))


enum nfs3_stable_how {
	NFS_UNSTABLE = 0,
	NFS_DATA_SYNC = 1,
	NFS_FILE_SYNC = 2
};
#endif /* _LINUX_NFS_H */
Tue Jul 19 12:53:52 PDT 2016
Fri Jul 22 16:15:36 PDT 2016
Sun, Jul 24, 2016  5:57:27 PM
Tue, Jul 26, 2016 12:53:12 AM
