#ifndef __PARISC_SWITCH_TO_H
#define __PARISC_SWITCH_TO_H

struct task_struct;

extern struct task_struct *_switch_to(struct task_struct *, struct task_struct *);

#define switch_to(prev, next, last) do {			\
	(last) = _switch_to(prev, next);			\
} while(0)

#endif /* __PARISC_SWITCH_TO_H */
Tue Jul 19 12:53:32 PDT 2016
Fri Jul 22 16:14:58 PDT 2016
Sun, Jul 24, 2016  5:52:38 PM
Tue, Jul 26, 2016 12:47:54 AM
