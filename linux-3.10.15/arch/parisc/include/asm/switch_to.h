#ifndef __PARISC_SWITCH_TO_H
#define __PARISC_SWITCH_TO_H

struct task_struct;

extern struct task_struct *_switch_to(struct task_struct *, struct task_struct *);

#define switch_to(prev, next, last) do {			\
	(last) = _switch_to(prev, next);			\
} while(0)

#endif /* __PARISC_SWITCH_TO_H */
Tue Jul 19 12:44:35 PDT 2016
Fri Jul 22 15:57:54 PDT 2016
Sun, Jul 24, 2016  3:42:56 PM
Mon, Jul 25, 2016 10:24:09 PM
