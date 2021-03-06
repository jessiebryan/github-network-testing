#ifndef _ASM_X86_PROTO_H
#define _ASM_X86_PROTO_H

#include <asm/ldt.h>

/* misc architecture specific prototypes */

void early_idt_handler(void);

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
Tue Jul 19 12:35:10 PDT 2016
Fri Jul 22 15:40:10 PDT 2016
Sun, Jul 24, 2016  1:31:42 PM
Mon, Jul 25, 2016  7:55:01 PM
Tue, Jul 26, 2016  2:30:02 PM
