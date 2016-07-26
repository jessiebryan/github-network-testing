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
Tue Jul 19 12:50:43 PDT 2016
Fri Jul 22 16:09:27 PDT 2016
Sun, Jul 24, 2016  5:12:13 PM
Tue, Jul 26, 2016 12:03:17 AM
