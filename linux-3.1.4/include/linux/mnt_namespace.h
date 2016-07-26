#ifndef _NAMESPACE_H_
#define _NAMESPACE_H_
#ifdef __KERNEL__

#include <linux/path.h>
#include <linux/seq_file.h>
#include <linux/wait.h>

struct mnt_namespace {
	atomic_t		count;
	struct vfsmount *	root;
	struct list_head	list;
	wait_queue_head_t poll;
	int event;
};

struct proc_mounts {
	struct seq_file m; /* must be the first element */
	struct mnt_namespace *ns;
	struct path root;
};

struct fs_struct;

extern struct mnt_namespace *create_mnt_ns(struct vfsmount *mnt);
extern struct mnt_namespace *copy_mnt_ns(unsigned long, struct mnt_namespace *,
		struct fs_struct *);
extern void put_mnt_ns(struct mnt_namespace *ns);
static inline void get_mnt_ns(struct mnt_namespace *ns)
{
	atomic_inc(&ns->count);
}

extern const struct seq_operations mounts_op;
extern const struct seq_operations mountinfo_op;
extern const struct seq_operations mountstats_op;
extern int mnt_had_events(struct proc_mounts *);

#endif
#endif
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:43 PDT 2016
Sun, Jul 24, 2016  1:43:06 PM
Mon, Jul 25, 2016  8:08:30 PM
Tue, Jul 26, 2016  2:42:38 PM
