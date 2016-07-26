/*
 * btree.h
 * 
 */


int befs_btree_find(struct super_block *sb, befs_data_stream * ds,
		    const char *key, befs_off_t * value);

int befs_btree_read(struct super_block *sb, befs_data_stream * ds,
		    loff_t key_no, size_t bufsize, char *keybuf,
		    size_t * keysize, befs_off_t * value);

Tue Jul 19 12:34:22 PDT 2016
Fri Jul 22 15:39:20 PDT 2016
Sun, Jul 24, 2016  1:25:42 PM
Mon, Jul 25, 2016  6:35:02 PM
Mon, Jul 25, 2016  7:47:59 PM
Tue, Jul 26, 2016  2:23:23 PM
