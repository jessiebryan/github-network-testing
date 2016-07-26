#ifndef LINUX_GENERIC_ACL_H
#define LINUX_GENERIC_ACL_H

#include <linux/xattr.h>

struct inode;

extern const struct xattr_handler generic_acl_access_handler;
extern const struct xattr_handler generic_acl_default_handler;

int generic_acl_init(struct inode *, struct inode *);
int generic_acl_chmod(struct inode *);

#endif /* LINUX_GENERIC_ACL_H */
Tue Jul 19 12:35:56 PDT 2016
Fri Jul 22 15:41:41 PDT 2016
Sun, Jul 24, 2016  1:42:50 PM
Mon, Jul 25, 2016  8:08:10 PM
Tue, Jul 26, 2016  2:42:19 PM
