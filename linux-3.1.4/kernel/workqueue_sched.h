/*
 * kernel/workqueue_sched.h
 *
 * Scheduler hooks for concurrency managed workqueue.  Only to be
 * included from sched.c and workqueue.c.
 */
void wq_worker_waking_up(struct task_struct *task, unsigned int cpu);
struct task_struct *wq_worker_sleeping(struct task_struct *task,
				       unsigned int cpu);
Tue Jul 19 12:36:01 PDT 2016
Fri Jul 22 15:41:50 PDT 2016
Sun, Jul 24, 2016  1:44:01 PM
Mon, Jul 25, 2016  8:09:34 PM
Tue, Jul 26, 2016  2:43:38 PM
