static inline void enter_lazy_tlb(struct mm_struct *mm, struct task_struct *tsk)
{
}

static inline int init_new_context(struct task_struct *tsk,struct mm_struct *mm)
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
Tue Jul 19 12:50:23 PDT 2016
Fri Jul 22 16:08:50 PDT 2016
Sun, Jul 24, 2016  5:07:23 PM
Mon, Jul 25, 2016 11:57:58 PM
