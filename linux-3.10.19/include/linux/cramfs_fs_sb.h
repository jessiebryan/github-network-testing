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
Tue Jul 19 12:47:23 PDT 2016
Fri Jul 22 16:03:10 PDT 2016
Sun, Jul 24, 2016  4:24:07 PM
Mon, Jul 25, 2016 11:09:55 PM
