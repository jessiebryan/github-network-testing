/*
 *  linux/fs/ext2/xip.h
 *
 * Copyright (C) 2005 IBM Corporation
 * Author: Carsten Otte (cotte@de.ibm.com)
 */

#ifdef CONFIG_EXT2_FS_XIP
extern void ext2_xip_verify_sb (struct super_block *);
extern int ext2_clear_xip_target (struct inode *, sector_t);

static inline int ext2_use_xip (struct super_block *sb)
{
	struct ext2_sb_info *sbi = EXT2_SB(sb);
	return (sbi->s_mount_opt & EXT2_MOUNT_XIP);
}
int ext2_get_xip_mem(struct address_space *, pgoff_t, int,
				void **, unsigned long *);
#define mapping_is_xip(map) unlikely(map->a_ops->get_xip_mem)
#else
#define mapping_is_xip(map)			0
#define ext2_xip_verify_sb(sb)			do { } while (0)
#define ext2_use_xip(sb)			0
#define ext2_clear_xip_target(inode, chain)	0
#define ext2_get_xip_mem			NULL
#endif
Tue Jul 19 12:35:54 PDT 2016
Fri Jul 22 15:41:37 PDT 2016
Sun, Jul 24, 2016  1:42:15 PM
Mon, Jul 25, 2016  8:07:29 PM
Tue, Jul 26, 2016  2:41:42 PM
