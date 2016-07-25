/*
 * datastream.h
 *
 */

struct buffer_head *befs_read_datastream(struct super_block *sb,
					 befs_data_stream * ds, befs_off_t pos,
					 uint * off);

int befs_fblock2brun(struct super_block *sb, befs_data_stream * data,
		     befs_blocknr_t fblock, befs_block_run * run);

size_t befs_read_lsymlink(struct super_block *sb, befs_data_stream * data,
			  void *buff, befs_off_t len);

befs_blocknr_t befs_count_blocks(struct super_block *sb, befs_data_stream * ds);

extern const befs_inode_addr BAD_IADDR;

Tue Jul 19 12:52:31 PDT 2016
Fri Jul 22 16:12:57 PDT 2016
Sun, Jul 24, 2016  5:37:48 PM
