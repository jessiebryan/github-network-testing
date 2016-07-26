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
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:44 PM
Mon, Jul 25, 2016  6:36:16 PM
Mon, Jul 25, 2016  7:49:12 PM
Tue, Jul 26, 2016  2:24:32 PM
