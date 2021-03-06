#ifndef _LINUX_RESOURCE_H
#define _LINUX_RESOURCE_H

#include <uapi/linux/resource.h>


struct task_struct;

int getrusage(struct task_struct *p, int who, struct rusage __user *ru);
int do_prlimit(struct task_struct *tsk, unsigned int resource,
		struct rlimit *new_rlim, struct rlimit *old_rlim);

#endif
Tue Jul 19 12:51:57 PDT 2016
Fri Jul 22 16:11:52 PDT 2016
Sun, Jul 24, 2016  5:29:45 PM
Tue, Jul 26, 2016 12:22:38 AM
