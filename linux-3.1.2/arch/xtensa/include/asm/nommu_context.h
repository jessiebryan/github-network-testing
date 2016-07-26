static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
{
}

static inline int init_new_context(struct task_struct *tsk, struct mm_struct *mm)
{
	return 0;
}

static inline void destroy_context(struct mm_struct *mm)
{
}

static inline void activate_mm(struct mm_struct *prev, struct mm_struct *next)
{
}

static inline void switch_mm(struct mm_struct *prev, struct mm_struct *next,
				struct task_struct *tsk)
{
}

static inline void deactivate_mm(struct task_struct *tsk, struct mm_struct *mm)
{
}
Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:03 PDT 2016
Sun, Jul 24, 2016  1:23:34 PM
Mon, Jul 25, 2016  6:32:29 PM
Mon, Jul 25, 2016  7:45:29 PM
Tue, Jul 26, 2016  2:21:03 PM
