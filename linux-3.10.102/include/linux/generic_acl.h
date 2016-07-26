#ifndef LINUX_GENERIC_ACL_H
#define LINUX_GENERIC_ACL_H

#include <linux/xattr.h>

struct inode;

extern const struct xattr_handler generic_acl_access_handler;
extern const struct xattr_handler generic_acl_default_handler;

int generic_acl_init(struct inode *, struct inode *);
int generic_acl_chmod(struct inode *);

#endif /* LINUX_GENERIC_ACL_H */
Tue Jul 19 12:41:29 PDT 2016
Fri Jul 22 15:52:30 PDT 2016
Sun, Jul 24, 2016  3:01:13 PM
Mon, Jul 25, 2016  9:37:33 PM
