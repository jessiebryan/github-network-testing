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
Tue Jul 19 12:45:39 PDT 2016
Fri Jul 22 15:59:55 PDT 2016
Sun, Jul 24, 2016  3:58:49 PM
Mon, Jul 25, 2016 10:41:49 PM
