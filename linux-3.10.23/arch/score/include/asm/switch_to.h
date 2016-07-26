#ifndef _ASM_SCORE_SWITCH_TO_H
#define _ASM_SCORE_SWITCH_TO_H

extern void *resume(void *last, void *next, void *next_ti);

#define switch_to(prev, next, last)				\
do {								\
	(last) = resume(prev, next, task_thread_info(next));	\
} while (0)

#define finish_arch_switch(prev)	do {} while (0)

#endif /* _ASM_SCORE_SWITCH_TO_H */
Tue Jul 19 12:49:41 PDT 2016
Fri Jul 22 16:07:29 PDT 2016
Sun, Jul 24, 2016  4:57:11 PM
Mon, Jul 25, 2016 11:46:44 PM
