#include <linux/module.h>
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
Tue Jul 19 12:33:39 PDT 2016
Fri Jul 22 15:38:20 PDT 2016
Sun, Jul 24, 2016  1:17:59 PM
Mon, Jul 25, 2016  6:25:47 PM
Mon, Jul 25, 2016  7:38:56 PM
Tue, Jul 26, 2016  2:14:49 PM
