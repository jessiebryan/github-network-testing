#ifndef RAS_H
#define RAS_H

extern void cbe_system_error_exception(struct pt_regs *regs);
extern void cbe_maintenance_exception(struct pt_regs *regs);
extern void cbe_thermal_exception(struct pt_regs *regs);
extern void cbe_ras_init(void);

#endif /* RAS_H */
Tue Jul 19 12:36:15 PDT 2016
Fri Jul 22 15:42:17 PDT 2016
Sun, Jul 24, 2016  1:47:18 PM
Mon, Jul 25, 2016  8:13:29 PM
