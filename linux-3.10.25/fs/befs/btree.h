/*
 * btree.h
 * 
 */


int befs_btree_find(struct super_block *sb, befs_data_stream * ds,
		    const char *key, befs_off_t * value);

int befs_btree_read(struct super_block *sb, befs_data_stream * ds,
		    loff_t key_no, size_t bufsize, char *keybuf,
		    size_t * keysize, befs_off_t * value);

Tue Jul 19 12:51:13 PDT 2016
Fri Jul 22 16:10:25 PDT 2016
Sun, Jul 24, 2016  5:19:11 PM
Tue, Jul 26, 2016 12:10:59 AM
