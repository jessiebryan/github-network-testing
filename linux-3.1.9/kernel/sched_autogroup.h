#ifdef CONFIG_SCHED_AUTOGROUP

struct autogroup {
	/*
	 * reference doesn't mean how many thread attach to this
	 * autogroup now. It just stands for the number of task
	 * could use this autogroup.
	 */
	struct kref		kref;
	struct task_group	*tg;
	struct rw_semaphore	lock;
	unsigned long		id;
	int			nice;
};

static inline bool task_group_is_autogroup(struct task_group *tg);
static inline struct task_group *
autogroup_task_group(struct task_struct *p, struct task_group *tg);

#else /* !CONFIG_SCHED_AUTOGROUP */

static inline void autogroup_init(struct task_struct *init_task) {  }
static inline void autogroup_free(struct task_group *tg) { }
static inline bool task_group_is_autogroup(struct task_group *tg)
{
	return 0;
}

static inline struct task_group *
autogroup_task_group(struct task_struct *p, struct task_group *tg)
{
	return tg;
}

#ifdef CONFIG_SCHED_DEBUG
static inline int autogroup_path(struct task_group *tg, char *buf, int buflen)
{
	return 0;
}
#endif

#endif /* CONFIG_SCHED_AUTOGROUP */
Tue Jul 19 12:38:24 PDT 2016
Fri Jul 22 15:46:19 PDT 2016
Sun, Jul 24, 2016  2:16:58 PM
Mon, Jul 25, 2016  8:47:57 PM
