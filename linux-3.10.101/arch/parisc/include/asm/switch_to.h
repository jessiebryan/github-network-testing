#ifndef __PARISC_SWITCH_TO_H
#define __PARISC_SWITCH_TO_H

struct task_struct;

extern struct task_struct *_switch_to(struct task_struct *, struct task_struct *);

#define switch_to(prev, next, last) do {			\
	(last) = _switch_to(prev, next);			\
} while(0)

#endif /* __PARISC_SWITCH_TO_H */
Tue Jul 19 12:40:32 PDT 2016
Fri Jul 22 15:50:35 PDT 2016
Sun, Jul 24, 2016  2:47:37 PM
Mon, Jul 25, 2016  9:22:11 PM
