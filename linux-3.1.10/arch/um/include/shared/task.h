#ifndef __TASK_H
#define __TASK_H

#include <kern_constants.h>

#define TASK_REGS(task) ((struct uml_pt_regs *) &(((char *) (task))[HOST_TASK_REGS]))
#define TASK_PID(task) *((int *) &(((char *) (task))[HOST_TASK_PID]))

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
