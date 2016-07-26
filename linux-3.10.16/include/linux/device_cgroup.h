#include <linux/fs.h>

#ifdef CONFIG_CGROUP_DEVICE
extern int __devcgroup_inode_permission(struct inode *inode, int mask);
extern int devcgroup_inode_mknod(int mode, dev_t dev);
static inline int devcgroup_inode_permission(struct inode *inode, int mask)
{
	if (likely(!inode->i_rdev))
		return 0;
	if (!S_ISBLK(inode->i_mode) && !S_ISCHR(inode->i_mode))
		return 0;
	return __devcgroup_inode_permission(inode, mask);
}
#else
static inline int devcgroup_inode_permission(struct inode *inode, int mask)
{ return 0; }
static inline int devcgroup_inode_mknod(int mode, dev_t dev)
{ return 0; }
#endif
Tue Jul 19 12:45:30 PDT 2016
Fri Jul 22 15:59:37 PDT 2016
Sun, Jul 24, 2016  3:56:28 PM
Mon, Jul 25, 2016 10:39:12 PM
