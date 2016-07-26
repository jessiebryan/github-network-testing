#ifndef _CRAMFS_FS_SB
#define _CRAMFS_FS_SB

/*
 * cramfs super-block data in memory
 */
struct cramfs_sb_info {
			unsigned long magic;
			unsigned long size;
			unsigned long blocks;
			unsigned long files;
			unsigned long flags;
};

static inline struct cramfs_sb_info *CRAMFS_SB(struct super_block *sb)
{
	return sb->s_fs_info;
}

#endif
Tue Jul 19 12:35:56 PDT 2016
Fri Jul 22 15:41:40 PDT 2016
Sun, Jul 24, 2016  1:42:43 PM
Mon, Jul 25, 2016  8:08:03 PM
Tue, Jul 26, 2016  2:42:12 PM
