#ifndef _FS_CEPH_MSGPOOL
#define _FS_CEPH_MSGPOOL

#include <linux/mempool.h>
#include "messenger.h"

/*
 * we use memory pools for preallocating messages we may receive, to
 * avoid unexpected OOM conditions.
 */
struct ceph_msgpool {
	const char *name;
	mempool_t *pool;
	int front_len;          /* preallocated payload size */
};

extern int ceph_msgpool_init(struct ceph_msgpool *pool,
			     int front_len, int size, bool blocking,
			     const char *name);
extern void ceph_msgpool_destroy(struct ceph_msgpool *pool);
extern struct ceph_msg *ceph_msgpool_get(struct ceph_msgpool *,
					 int front_len);
extern void ceph_msgpool_put(struct ceph_msgpool *, struct ceph_msg *);

#endif
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:24 PDT 2016
Sun, Jul 24, 2016  1:26:12 PM
Mon, Jul 25, 2016  6:35:37 PM
Mon, Jul 25, 2016  7:48:33 PM
Tue, Jul 26, 2016  2:23:56 PM
