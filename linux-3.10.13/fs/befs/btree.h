/*
 * btree.h
 * 
 */


int befs_btree_find(struct super_block *sb, befs_data_stream * ds,
		    const char *key, befs_off_t * value);

int befs_btree_read(struct super_block *sb, befs_data_stream * ds,
		    loff_t key_no, size_t bufsize, char *keybuf,
		    size_t * keysize, befs_off_t * value);

Tue Jul 19 12:43:33 PDT 2016
Fri Jul 22 15:56:00 PDT 2016
Sun, Jul 24, 2016  3:28:14 PM
Mon, Jul 25, 2016 10:07:48 PM
