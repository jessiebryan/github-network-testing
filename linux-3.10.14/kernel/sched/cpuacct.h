#ifdef CONFIG_CGROUP_CPUACCT

extern void cpuacct_charge(struct task_struct *tsk, u64 cputime);
extern void cpuacct_account_field(struct task_struct *p, int index, u64 val);

#else

static inline void cpuacct_charge(struct task_struct *tsk, u64 cputime)
{
}

static inline void
cpuacct_account_field(struct task_struct *p, int index, u64 val)
{
}

#endif
Tue Jul 19 12:44:22 PDT 2016
Fri Jul 22 15:57:29 PDT 2016
Sun, Jul 24, 2016  3:39:49 PM
Mon, Jul 25, 2016 10:20:40 PM
