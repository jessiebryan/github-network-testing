/*
  File: linux/reiserfs_xattr.h
*/

#ifndef _LINUX_REISERFS_XATTR_H
#define _LINUX_REISERFS_XATTR_H

#include <linux/types.h>

/* Magic value in header */
#define REISERFS_XATTR_MAGIC 0x52465841	/* "RFXA" */

struct reiserfs_xattr_header {
	__le32 h_magic;		/* magic number for identification */
	__le32 h_hash;		/* hash of the value */
};

struct reiserfs_security_handle {
	char *name;
	void *value;
	size_t length;
};

#endif  /*  _LINUX_REISERFS_XATTR_H  */
Tue Jul 19 12:47:30 PDT 2016
Fri Jul 22 16:03:23 PDT 2016
Sun, Jul 24, 2016  4:25:45 PM
Mon, Jul 25, 2016 11:11:45 PM
