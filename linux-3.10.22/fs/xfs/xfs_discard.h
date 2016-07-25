#ifndef XFS_DISCARD_H
#define XFS_DISCARD_H 1

struct fstrim_range;
struct list_head;

extern int	xfs_ioc_trim(struct xfs_mount *, struct fstrim_range __user *);
extern int	xfs_discard_extents(struct xfs_mount *, struct list_head *);

#endif /* XFS_DISCARD_H */
Tue Jul 19 12:49:17 PDT 2016
Fri Jul 22 16:06:45 PDT 2016
Sun, Jul 24, 2016  4:51:30 PM
