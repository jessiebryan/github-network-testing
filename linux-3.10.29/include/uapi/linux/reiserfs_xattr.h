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
Tue Jul 19 12:53:57 PDT 2016
Fri Jul 22 16:15:46 PDT 2016
Sun, Jul 24, 2016  5:58:37 PM
Tue, Jul 26, 2016 12:54:30 AM
