#ifndef LINUX_GENERIC_ACL_H
#define LINUX_GENERIC_ACL_H

#include <linux/xattr.h>

struct inode;

extern const struct xattr_handler generic_acl_access_handler;
extern const struct xattr_handler generic_acl_default_handler;

int generic_acl_init(struct inode *, struct inode *);
int generic_acl_chmod(struct inode *);

#endif /* LINUX_GENERIC_ACL_H */
Tue Jul 19 12:52:33 PDT 2016
Fri Jul 22 16:13:02 PDT 2016
Sun, Jul 24, 2016  5:38:26 PM
Tue, Jul 26, 2016 12:32:13 AM
