#ifndef _ASM_X86_PROTO_H
#define _ASM_X86_PROTO_H

#include <asm/ldt.h>

/* misc architecture specific prototypes */

void system_call(void);
void syscall_init(void);

void ia32_syscall(void);
void ia32_cstar_target(void);
void ia32_sysenter_target(void);

void syscall32_cpu_init(void);

void x86_configure_nx(void);
void x86_report_nx(void);

extern int reboot_force;

long do_arch_prctl(struct task_struct *task, int code, unsigned long addr);

#endif /* _ASM_X86_PROTO_H */
Tue Jul 19 12:43:22 PDT 2016
Fri Jul 22 15:55:39 PDT 2016
Sun, Jul 24, 2016  3:25:36 PM
Mon, Jul 25, 2016 10:04:53 PM
