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
Tue Jul 19 12:53:48 PDT 2016
Fri Jul 22 16:15:28 PDT 2016
Sun, Jul 24, 2016  5:56:27 PM
Tue, Jul 26, 2016 12:52:06 AM
