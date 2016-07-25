#ifndef _COMPAT_H_
#define _COMPAT_H_

#define btrfs_drop_nlink(inode) drop_nlink(inode)
#define btrfs_inc_nlink(inode)	inc_nlink(inode)

#endif /* _COMPAT_H_ */
Tue Jul 19 12:39:30 PDT 2016
Fri Jul 22 15:48:34 PDT 2016
Sun, Jul 24, 2016  2:32:58 PM
