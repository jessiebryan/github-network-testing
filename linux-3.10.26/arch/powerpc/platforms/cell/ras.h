#ifndef RAS_H
#define RAS_H

extern void cbe_system_error_exception(struct pt_regs *regs);
extern void cbe_maintenance_exception(struct pt_regs *regs);
extern void cbe_thermal_exception(struct pt_regs *regs);
extern void cbe_ras_init(void);

#endif /* RAS_H */
Tue Jul 19 12:51:37 PDT 2016
Fri Jul 22 16:11:11 PDT 2016
Sun, Jul 24, 2016  5:24:57 PM
Tue, Jul 26, 2016 12:17:21 AM
