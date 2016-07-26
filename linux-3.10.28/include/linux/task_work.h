#ifndef _LINUX_TASK_WORK_H
#define _LINUX_TASK_WORK_H

#include <linux/list.h>
#include <linux/sched.h>

typedef void (*task_work_func_t)(struct callback_head *);

static inline void
init_task_work(struct callback_head *twork, task_work_func_t func)
{
	twork->func = func;
}

int task_work_add(struct task_struct *task, struct callback_head *twork, bool);
struct callback_head *task_work_cancel(struct task_struct *, task_work_func_t);
void task_work_run(void);

static inline void exit_task_work(struct task_struct *task)
{
	task_work_run();
}

#endif	/* _LINUX_TASK_WORK_H */
Tue Jul 19 12:53:15 PDT 2016
Fri Jul 22 16:14:24 PDT 2016
Sun, Jul 24, 2016  5:48:31 PM
Tue, Jul 26, 2016 12:43:19 AM
