#ifndef __NMI_H
#define __NMI_H

extern int __init nmi_init(void);
extern void perfctr_irq(int irq, struct pt_regs *regs);
extern void nmi_adjust_hz(unsigned int new_hz);

extern atomic_t nmi_active;

extern void start_nmi_watchdog(void *unused);
extern void stop_nmi_watchdog(void *unused);

#endif /* __NMI_H */
Tue Jul 19 12:51:00 PDT 2016
Fri Jul 22 16:09:59 PDT 2016
Sun, Jul 24, 2016  5:16:05 PM
Tue, Jul 26, 2016 12:07:36 AM
