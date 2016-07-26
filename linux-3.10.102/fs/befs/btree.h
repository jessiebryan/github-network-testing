/*
 * btree.h
 * 
 */


int befs_btree_find(struct super_block *sb, befs_data_stream * ds,
		    const char *key, befs_off_t * value);

int befs_btree_read(struct super_block *sb, befs_data_stream * ds,
		    loff_t key_no, size_t bufsize, char *keybuf,
		    size_t * keysize, befs_off_t * value);

Tue Jul 19 12:41:26 PDT 2016
Fri Jul 22 15:52:26 PDT 2016
Sun, Jul 24, 2016  3:00:35 PM
Mon, Jul 25, 2016  9:36:50 PM
