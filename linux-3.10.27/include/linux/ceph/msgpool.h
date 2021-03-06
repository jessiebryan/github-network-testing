#ifndef _FS_CEPH_MSGPOOL
#define _FS_CEPH_MSGPOOL

#include <linux/mempool.h>
#include <linux/ceph/messenger.h>

/*
 * we use memory pools for preallocating messages we may receive, to
 * avoid unexpected OOM conditions.
 */
struct ceph_msgpool {
	const char *name;
	mempool_t *pool;
	int type;               /* preallocated message type */
	int front_len;          /* preallocated payload size */
};

extern int ceph_msgpool_init(struct ceph_msgpool *pool, int type,
			     int front_len, int size, bool blocking,
			     const char *name);
extern void ceph_msgpool_destroy(struct ceph_msgpool *pool);
extern struct ceph_msg *ceph_msgpool_get(struct ceph_msgpool *,
					 int front_len);
extern void ceph_msgpool_put(struct ceph_msgpool *, struct ceph_msg *);

#endif
Tue Jul 19 12:52:33 PDT 2016
Fri Jul 22 16:13:01 PDT 2016
Sun, Jul 24, 2016  5:38:18 PM
Tue, Jul 26, 2016 12:32:04 AM
