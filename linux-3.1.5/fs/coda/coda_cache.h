/* Coda filesystem -- Linux Minicache
 *
 * Copyright (C) 1989 - 1997 Carnegie Mellon University
 *
 * Carnegie Mellon University encourages users of this software to
 * contribute improvements to the Coda project. Contact Peter Braam
 * <coda@cs.cmu.edu>
 */

#ifndef _CFSNC_HEADER_
#define _CFSNC_HEADER_

/* credential cache */
void coda_cache_enter(struct inode *inode, int mask);
void coda_cache_clear_inode(struct inode *);
void coda_cache_clear_all(struct super_block *sb);
int coda_cache_check(struct inode *inode, int mask);

/* for downcalls and attributes and lookups */
void coda_flag_inode_children(struct inode *inode, int flag);

#endif /* _CFSNC_HEADER_ */
Tue Jul 19 12:36:28 PDT 2016
Fri Jul 22 15:42:43 PDT 2016
Sun, Jul 24, 2016  1:50:29 PM
Mon, Jul 25, 2016  8:17:11 PM
