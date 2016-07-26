#ifndef RAS_H
#define RAS_H

extern void cbe_system_error_exception(struct pt_regs *regs);
extern void cbe_maintenance_exception(struct pt_regs *regs);
extern void cbe_thermal_exception(struct pt_regs *regs);
extern void cbe_ras_init(void);

#endif /* RAS_H */
Tue Jul 19 12:43:57 PDT 2016
Fri Jul 22 15:56:43 PDT 2016
Sun, Jul 24, 2016  3:33:57 PM
Mon, Jul 25, 2016 10:14:11 PM
