#ifndef _NFS_FS_I
#define _NFS_FS_I

struct nlm_lockowner;

/*
 * NFS lock info
 */
struct nfs_lock_info {
	u32		state;
	struct nlm_lockowner *owner;
	struct list_head list;
};

struct nfs4_lock_state;
struct nfs4_lock_info {
	struct nfs4_lock_state *owner;
};

#endif
Tue Jul 19 12:49:59 PDT 2016
Fri Jul 22 16:08:04 PDT 2016
Sun, Jul 24, 2016  5:01:33 PM
Mon, Jul 25, 2016 11:51:34 PM
