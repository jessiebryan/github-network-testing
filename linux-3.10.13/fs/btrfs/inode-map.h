#ifndef __BTRFS_INODE_MAP
#define __BTRFS_INODE_MAP

void btrfs_init_free_ino_ctl(struct btrfs_root *root);
void btrfs_unpin_free_ino(struct btrfs_root *root);
void btrfs_return_ino(struct btrfs_root *root, u64 objectid);
int btrfs_find_free_ino(struct btrfs_root *root, u64 *objectid);
int btrfs_save_ino_cache(struct btrfs_root *root,
			 struct btrfs_trans_handle *trans);

int btrfs_find_free_objectid(struct btrfs_root *root, u64 *objectid);

#endif
Tue Jul 19 12:43:33 PDT 2016
Fri Jul 22 15:56:00 PDT 2016
Sun, Jul 24, 2016  3:28:15 PM
Mon, Jul 25, 2016 10:07:49 PM
