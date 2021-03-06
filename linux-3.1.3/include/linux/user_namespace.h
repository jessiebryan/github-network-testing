#ifndef _LINUX_USER_NAMESPACE_H
#define _LINUX_USER_NAMESPACE_H

#include <linux/kref.h>
#include <linux/nsproxy.h>
#include <linux/sched.h>
#include <linux/err.h>

#define UIDHASH_BITS	(CONFIG_BASE_SMALL ? 3 : 7)
#define UIDHASH_SZ	(1 << UIDHASH_BITS)

struct user_namespace {
	struct kref		kref;
	struct hlist_head	uidhash_table[UIDHASH_SZ];
	struct user_struct	*creator;
	struct work_struct	destroyer;
};

extern struct user_namespace init_user_ns;

#ifdef CONFIG_USER_NS

static inline struct user_namespace *get_user_ns(struct user_namespace *ns)
{
	if (ns)
		kref_get(&ns->kref);
	return ns;
}

extern int create_user_ns(struct cred *new);
extern void free_user_ns(struct kref *kref);

static inline void put_user_ns(struct user_namespace *ns)
{
	if (ns)
		kref_put(&ns->kref, free_user_ns);
}

uid_t user_ns_map_uid(struct user_namespace *to, const struct cred *cred, uid_t uid);
gid_t user_ns_map_gid(struct user_namespace *to, const struct cred *cred, gid_t gid);

#else

static inline struct user_namespace *get_user_ns(struct user_namespace *ns)
{
	return &init_user_ns;
}

static inline int create_user_ns(struct cred *new)
{
	return -EINVAL;
}

static inline void put_user_ns(struct user_namespace *ns)
{
}

static inline uid_t user_ns_map_uid(struct user_namespace *to,
	const struct cred *cred, uid_t uid)
{
	return uid;
}
static inline gid_t user_ns_map_gid(struct user_namespace *to,
	const struct cred *cred, gid_t gid)
{
	return gid;
}

#endif

#endif /* _LINUX_USER_H */
Tue Jul 19 12:35:25 PDT 2016
Fri Jul 22 15:40:39 PDT 2016
Sun, Jul 24, 2016  1:35:18 PM
Mon, Jul 25, 2016  7:59:17 PM
Tue, Jul 26, 2016  2:34:00 PM
