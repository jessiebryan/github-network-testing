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
Tue Jul 19 12:42:59 PDT 2016
Fri Jul 22 15:54:56 PDT 2016
Sun, Jul 24, 2016  3:20:01 PM
Mon, Jul 25, 2016  9:58:42 PM
