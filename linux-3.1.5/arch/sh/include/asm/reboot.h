#ifndef __ASM_SH_REBOOT_H
#define __ASM_SH_REBOOT_H

#include <linux/kdebug.h>

struct pt_regs;

struct machine_ops {
	void (*restart)(char *cmd);
	void (*halt)(void);
	void (*power_off)(void);
	void (*shutdown)(void);
	void (*crash_shutdown)(struct pt_regs *);
};

extern struct machine_ops machine_ops;

/* arch/sh/kernel/machine_kexec.c */
void native_machine_crash_shutdown(struct pt_regs *regs);

#endif /* __ASM_SH_REBOOT_H */
Tue Jul 19 12:36:16 PDT 2016
Fri Jul 22 15:42:19 PDT 2016
Sun, Jul 24, 2016  1:47:34 PM
Mon, Jul 25, 2016  8:13:47 PM
