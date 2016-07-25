/*
 * io.h
 */

struct buffer_head *befs_bread_iaddr(struct super_block *sb,
				     befs_inode_addr iaddr);

struct buffer_head *befs_bread(struct super_block *sb, befs_blocknr_t block);

Tue Jul 19 12:39:30 PDT 2016
Fri Jul 22 15:48:34 PDT 2016
Sun, Jul 24, 2016  2:32:57 PM
