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
Tue Jul 19 12:53:50 PDT 2016
Fri Jul 22 16:15:33 PDT 2016
Sun, Jul 24, 2016  5:56:58 PM
Tue, Jul 26, 2016 12:52:40 AM
