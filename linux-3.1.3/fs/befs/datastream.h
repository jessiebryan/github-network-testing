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

Tue Jul 19 12:35:19 PDT 2016
Fri Jul 22 15:40:29 PDT 2016
Sun, Jul 24, 2016  1:33:58 PM
Mon, Jul 25, 2016  7:57:42 PM
