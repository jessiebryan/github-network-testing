#ifndef _LINUX_UTSNAME_H
#define _LINUX_UTSNAME_H

#define __OLD_UTS_LEN 8

struct oldold_utsname {
	char sysname[9];
	char nodename[9];
	char release[9];
	char version[9];
	char machine[9];
};

#define __NEW_UTS_LEN 64

struct old_utsname {
	char sysname[65];
	char nodename[65];
	char release[65];
	char version[65];
	char machine[65];
};

struct new_utsname {
	char sysname[__NEW_UTS_LEN + 1];
	char nodename[__NEW_UTS_LEN + 1];
	char release[__NEW_UTS_LEN + 1];
	char version[__NEW_UTS_LEN + 1];
	char machine[__NEW_UTS_LEN + 1];
	char domainname[__NEW_UTS_LEN + 1];
};

#ifdef __KERNEL__

#include <linux/sched.h>
#include <linux/kref.h>
#include <linux/nsproxy.h>
#include <linux/err.h>

struct user_namespace;
extern struct user_namespace init_user_ns;

struct uts_namespace {
	struct kref kref;
	struct new_utsname name;
	struct user_namespace *user_ns;
};
extern struct uts_namespace init_uts_ns;

#ifdef CONFIG_UTS_NS
static inline void get_uts_ns(struct uts_namespace *ns)
{
	kref_get(&ns->kref);
}

extern struct uts_namespace *copy_utsname(unsigned long flags,
					  struct task_struct *tsk);
extern void free_uts_ns(struct kref *kref);

static inline void put_uts_ns(struct uts_namespace *ns)
{
	kref_put(&ns->kref, free_uts_ns);
}
#else
static inline void get_uts_ns(struct uts_namespace *ns)
{
}

static inline void put_uts_ns(struct uts_namespace *ns)
{
}

static inline struct uts_namespace *copy_utsname(unsigned long flags,
						 struct task_struct *tsk)
{
	if (flags & CLONE_NEWUTS)
		return ERR_PTR(-EINVAL);

	return tsk->nsproxy->uts_ns;
}
#endif

static inline struct new_utsname *utsname(void)
{
	return &current->nsproxy->uts_ns->name;
}

static inline struct new_utsname *init_utsname(void)
{
	return &init_uts_ns.name;
}

extern struct rw_semaphore uts_sem;

#endif /* __KERNEL__ */

#endif /* _LINUX_UTSNAME_H */
Tue Jul 19 12:35:59 PDT 2016
Fri Jul 22 15:41:47 PDT 2016
Sun, Jul 24, 2016  1:43:33 PM
Mon, Jul 25, 2016  8:09:01 PM
Tue, Jul 26, 2016  2:43:07 PM
