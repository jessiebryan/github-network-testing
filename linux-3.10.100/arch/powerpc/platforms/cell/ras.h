#ifndef RAS_H
#define RAS_H

extern void cbe_system_error_exception(struct pt_regs *regs);
extern void cbe_maintenance_exception(struct pt_regs *regs);
extern void cbe_thermal_exception(struct pt_regs *regs);
extern void cbe_ras_init(void);

#endif /* RAS_H */
Tue Jul 19 12:39:54 PDT 2016
Fri Jul 22 15:49:21 PDT 2016
Sun, Jul 24, 2016  2:38:40 PM
Mon, Jul 25, 2016  9:12:07 PM
