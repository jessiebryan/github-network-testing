#ifndef _LINUX_FS_STRUCT_H
#define _LINUX_FS_STRUCT_H

#include <linux/path.h>
#include <linux/spinlock.h>
#include <linux/seqlock.h>

struct fs_struct {
	int users;
	spinlock_t lock;
	seqcount_t seq;
	int umask;
	int in_exec;
	struct path root, pwd;
};

extern struct kmem_cache *fs_cachep;

extern void exit_fs(struct task_struct *);
extern void set_fs_root(struct fs_struct *, const struct path *);
extern void set_fs_pwd(struct fs_struct *, const struct path *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void free_fs_struct(struct fs_struct *);
extern int unshare_fs_struct(void);

static inline void get_fs_root(struct fs_struct *fs, struct path *root)
{
	spin_lock(&fs->lock);
	*root = fs->root;
	path_get(root);
	spin_unlock(&fs->lock);
}

static inline void get_fs_pwd(struct fs_struct *fs, struct path *pwd)
{
	spin_lock(&fs->lock);
	*pwd = fs->pwd;
	path_get(pwd);
	spin_unlock(&fs->lock);
}

static inline void get_fs_root_and_pwd(struct fs_struct *fs, struct path *root,
				       struct path *pwd)
{
	spin_lock(&fs->lock);
	*root = fs->root;
	path_get(root);
	*pwd = fs->pwd;
	path_get(pwd);
	spin_unlock(&fs->lock);
}

extern bool current_chrooted(void);

#endif /* _LINUX_FS_STRUCT_H */
Tue Jul 19 12:53:51 PDT 2016
Fri Jul 22 16:15:33 PDT 2016
Sun, Jul 24, 2016  5:57:03 PM
Tue, Jul 26, 2016 12:52:47 AM
