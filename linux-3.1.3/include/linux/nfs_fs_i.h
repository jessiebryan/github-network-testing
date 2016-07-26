#ifndef _NFS_FS_I
#define _NFS_FS_I

#include <asm/types.h>
#include <linux/list.h>
#include <linux/nfs.h>

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
Tue Jul 19 12:35:23 PDT 2016
Fri Jul 22 15:40:37 PDT 2016
Sun, Jul 24, 2016  1:34:59 PM
Mon, Jul 25, 2016  7:58:55 PM
