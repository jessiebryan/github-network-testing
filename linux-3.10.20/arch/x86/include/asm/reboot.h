#ifndef _ASM_X86_REBOOT_H
#define _ASM_X86_REBOOT_H

#include <linux/kdebug.h>

struct pt_regs;

struct machine_ops {
	void (*restart)(char *cmd);
	void (*halt)(void);
	void (*power_off)(void);
	void (*shutdown)(void);
	void (*crash_shutdown)(struct pt_regs *);
	void (*emergency_restart)(void);
};

extern struct machine_ops machine_ops;

void native_machine_crash_shutdown(struct pt_regs *regs);
void native_machine_shutdown(void);
void __noreturn machine_real_restart(unsigned int type);
/* These must match dispatch in arch/x86/realmore/rm/reboot.S */
#define MRR_BIOS	0
#define MRR_APM		1

typedef void (*nmi_shootdown_cb)(int, struct pt_regs*);
void nmi_shootdown_cpus(nmi_shootdown_cb callback);

#endif /* _ASM_X86_REBOOT_H */
Tue Jul 19 12:47:48 PDT 2016
Fri Jul 22 16:03:58 PDT 2016
Sun, Jul 24, 2016  4:30:11 PM
Mon, Jul 25, 2016 11:16:40 PM
