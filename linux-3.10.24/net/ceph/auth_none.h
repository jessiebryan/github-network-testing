#ifndef _FS_CEPH_AUTH_NONE_H
#define _FS_CEPH_AUTH_NONE_H

#include <linux/slab.h>
#include <linux/ceph/auth.h>

/*
 * null security mode.
 *
 * we use a single static authorizer that simply encodes our entity name
 * and global id.
 */

struct ceph_none_authorizer {
	char buf[128];
	int buf_len;
	char reply_buf[0];
};

struct ceph_auth_none_info {
	bool starting;
	bool built_authorizer;
	struct ceph_none_authorizer au;   /* we only need one; it's static */
};

extern int ceph_auth_none_init(struct ceph_auth_client *ac);

#endif

Tue Jul 19 12:50:43 PDT 2016
Fri Jul 22 16:09:28 PDT 2016
Sun, Jul 24, 2016  5:12:16 PM
Tue, Jul 26, 2016 12:03:21 AM
