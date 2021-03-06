#ifndef __FS_CEPH_BUFFER_H
#define __FS_CEPH_BUFFER_H

#include <linux/kref.h>
#include <linux/mm.h>
#include <linux/vmalloc.h>
#include <linux/types.h>
#include <linux/uio.h>

/*
 * a simple reference counted buffer.
 *
 * use kmalloc for small sizes (<= one page), vmalloc for larger
 * sizes.
 */
struct ceph_buffer {
	struct kref kref;
	struct kvec vec;
	size_t alloc_len;
	bool is_vmalloc;
};

extern struct ceph_buffer *ceph_buffer_new(size_t len, gfp_t gfp);
extern void ceph_buffer_release(struct kref *kref);

static inline struct ceph_buffer *ceph_buffer_get(struct ceph_buffer *b)
{
	kref_get(&b->kref);
	return b;
}

static inline void ceph_buffer_put(struct ceph_buffer *b)
{
	kref_put(&b->kref, ceph_buffer_release);
}

extern int ceph_decode_buffer(struct ceph_buffer **b, void **p, void *end);

#endif
Tue Jul 19 12:53:12 PDT 2016
Fri Jul 22 16:14:17 PDT 2016
Sun, Jul 24, 2016  5:47:37 PM
Tue, Jul 26, 2016 12:42:19 AM
