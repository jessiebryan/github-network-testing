#ifndef _NAMESPACE_H_
#define _NAMESPACE_H_
#ifdef __KERNEL__

struct mnt_namespace;
struct fs_struct;
struct user_namespace;

extern struct mnt_namespace *copy_mnt_ns(unsigned long, struct mnt_namespace *,
		struct user_namespace *, struct fs_struct *);
extern void put_mnt_ns(struct mnt_namespace *ns);

extern const struct file_operations proc_mounts_operations;
extern const struct file_operations proc_mountinfo_operations;
extern const struct file_operations proc_mountstats_operations;

#endif
#endif
Tue Jul 19 12:40:13 PDT 2016
Fri Jul 22 15:49:58 PDT 2016
Sun, Jul 24, 2016  2:43:07 PM
Mon, Jul 25, 2016  9:17:03 PM
