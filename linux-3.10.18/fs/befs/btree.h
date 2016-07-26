/*
 * btree.h
 * 
 */


int befs_btree_find(struct super_block *sb, befs_data_stream * ds,
		    const char *key, befs_off_t * value);

int befs_btree_read(struct super_block *sb, befs_data_stream * ds,
		    loff_t key_no, size_t bufsize, char *keybuf,
		    size_t * keysize, befs_off_t * value);

Tue Jul 19 12:46:42 PDT 2016
Fri Jul 22 16:01:56 PDT 2016
Sun, Jul 24, 2016  4:14:21 PM
Mon, Jul 25, 2016 10:59:06 PM
