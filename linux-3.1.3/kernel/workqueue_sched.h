/*
 * kernel/workqueue_sched.h
 *
 * Scheduler hooks for concurrency managed workqueue.  Only to be
 * included from sched.c and workqueue.c.
 */
void wq_worker_waking_up(struct task_struct *task, unsigned int cpu);
struct task_struct *wq_worker_sleeping(struct task_struct *task,
				       unsigned int cpu);
Tue Jul 19 12:35:27 PDT 2016
Fri Jul 22 15:40:43 PDT 2016
Sun, Jul 24, 2016  1:35:46 PM
Mon, Jul 25, 2016  7:59:50 PM
