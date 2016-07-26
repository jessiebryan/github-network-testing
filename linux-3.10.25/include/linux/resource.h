#ifndef _LINUX_RESOURCE_H
#define _LINUX_RESOURCE_H

#include <uapi/linux/resource.h>


struct task_struct;

int getrusage(struct task_struct *p, int who, struct rusage __user *ru);
int do_prlimit(struct task_struct *tsk, unsigned int resource,
		struct rlimit *new_rlim, struct rlimit *old_rlim);

#endif
Tue Jul 19 12:51:18 PDT 2016
Fri Jul 22 16:10:34 PDT 2016
Sun, Jul 24, 2016  5:20:27 PM
Tue, Jul 26, 2016 12:12:23 AM
