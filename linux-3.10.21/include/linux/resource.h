#ifndef _LINUX_RESOURCE_H
#define _LINUX_RESOURCE_H

#include <uapi/linux/resource.h>


struct task_struct;

int getrusage(struct task_struct *p, int who, struct rusage __user *ru);
int do_prlimit(struct task_struct *tsk, unsigned int resource,
		struct rlimit *new_rlim, struct rlimit *old_rlim);

#endif
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:40 PDT 2016
Sun, Jul 24, 2016  4:43:18 PM
Mon, Jul 25, 2016 11:31:15 PM
