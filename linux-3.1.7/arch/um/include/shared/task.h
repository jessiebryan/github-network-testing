#ifndef __TASK_H
#define __TASK_H

#include <kern_constants.h>

#define TASK_REGS(task) ((struct uml_pt_regs *) &(((char *) (task))[HOST_TASK_REGS]))
#define TASK_PID(task) *((int *) &(((char *) (task))[HOST_TASK_PID]))

#endif
Tue Jul 19 12:36:51 PDT 2016
Fri Jul 22 15:43:30 PDT 2016
Sun, Jul 24, 2016  1:56:13 PM
Mon, Jul 25, 2016  8:23:58 PM
