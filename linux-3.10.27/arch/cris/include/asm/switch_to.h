#ifndef __ASM_CRIS_SWITCH_TO_H
#define __ASM_CRIS_SWITCH_TO_H

/* the switch_to macro calls resume, an asm function in entry.S which does the actual
 * task switching.
 */

extern struct task_struct *resume(struct task_struct *prev, struct task_struct *next, int);
#define switch_to(prev,next,last) last = resume(prev,next, \
					 (int)&((struct task_struct *)0)->thread)

#endif /* __ASM_CRIS_SWITCH_TO_H */
Tue Jul 19 12:52:09 PDT 2016
Fri Jul 22 16:12:16 PDT 2016
Sun, Jul 24, 2016  5:32:42 PM
Tue, Jul 26, 2016 12:25:54 AM
