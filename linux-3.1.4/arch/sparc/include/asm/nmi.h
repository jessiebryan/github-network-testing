#ifndef __NMI_H
#define __NMI_H

extern int __init nmi_init(void);
extern void perfctr_irq(int irq, struct pt_regs *regs);
extern void nmi_adjust_hz(unsigned int new_hz);

extern atomic_t nmi_active;

extern void start_nmi_watchdog(void *unused);
extern void stop_nmi_watchdog(void *unused);

#endif /* __NMI_H */
Tue Jul 19 12:35:42 PDT 2016
Fri Jul 22 15:41:15 PDT 2016
Sun, Jul 24, 2016  1:39:30 PM
Mon, Jul 25, 2016  8:04:16 PM
Tue, Jul 26, 2016  2:38:40 PM
