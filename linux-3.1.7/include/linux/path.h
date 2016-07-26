#ifndef _LINUX_PATH_H
#define _LINUX_PATH_H

struct dentry;
struct vfsmount;

struct path {
	struct vfsmount *mnt;
	struct dentry *dentry;
};

extern void path_get(struct path *);
extern void path_put(struct path *);

static inline int path_equal(const struct path *path1, const struct path *path2)
{
	return path1->mnt == path2->mnt && path1->dentry == path2->dentry;
}

#endif  /* _LINUX_PATH_H */
Tue Jul 19 12:37:06 PDT 2016
Fri Jul 22 15:43:58 PDT 2016
Sun, Jul 24, 2016  1:59:45 PM
Mon, Jul 25, 2016  8:28:11 PM
