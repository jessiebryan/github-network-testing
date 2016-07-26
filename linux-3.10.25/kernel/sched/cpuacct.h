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
Tue Jul 19 12:51:23 PDT 2016
Fri Jul 22 16:10:44 PDT 2016
Sun, Jul 24, 2016  5:21:32 PM
Tue, Jul 26, 2016 12:13:35 AM
