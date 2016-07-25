#ifndef _COMPAT_H_
#define _COMPAT_H_

#define btrfs_drop_nlink(inode) drop_nlink(inode)
#define btrfs_inc_nlink(inode)	inc_nlink(inode)

#endif /* _COMPAT_H_ */
Tue Jul 19 12:42:55 PDT 2016
Fri Jul 22 15:54:49 PDT 2016
Sun, Jul 24, 2016  3:19:01 PM
