#ifndef __ALPHA_SWITCH_TO_H
#define __ALPHA_SWITCH_TO_H


struct task_struct;
extern struct task_struct *alpha_switch_to(unsigned long, struct task_struct *);

#define switch_to(P,N,L)						 \
  do {									 \
    (L) = alpha_switch_to(virt_to_phys(&task_thread_info(N)->pcb), (P)); \
    check_mmu_context();						 \
  } while (0)

#endif /* __ALPHA_SWITCH_TO_H */
Tue Jul 19 12:38:26 PDT 2016
Fri Jul 22 15:46:23 PDT 2016
Sun, Jul 24, 2016  2:17:27 PM
Mon, Jul 25, 2016  8:48:28 PM
