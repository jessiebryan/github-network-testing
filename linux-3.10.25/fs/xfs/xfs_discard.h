#ifndef XFS_DISCARD_H
#define XFS_DISCARD_H 1

struct fstrim_range;
struct list_head;

extern int	xfs_ioc_trim(struct xfs_mount *, struct fstrim_range __user *);
extern int	xfs_discard_extents(struct xfs_mount *, struct list_head *);

#endif /* XFS_DISCARD_H */
Tue Jul 19 12:51:14 PDT 2016
Fri Jul 22 16:10:26 PDT 2016
Sun, Jul 24, 2016  5:19:25 PM
Tue, Jul 26, 2016 12:11:15 AM
