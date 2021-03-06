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
Tue Jul 19 12:36:30 PDT 2016
Fri Jul 22 15:42:48 PDT 2016
Sun, Jul 24, 2016  1:50:58 PM
Mon, Jul 25, 2016  8:17:46 PM
