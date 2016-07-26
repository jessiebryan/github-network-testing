#ifndef ARCH__X86__MM__KMEMCHECK__ERROR_H
#define ARCH__X86__MM__KMEMCHECK__ERROR_H

#include <linux/ptrace.h>

#include "shadow.h"

void kmemcheck_error_save(enum kmemcheck_shadow state,
	unsigned long address, unsigned int size, struct pt_regs *regs);

void kmemcheck_error_save_bug(struct pt_regs *regs);

void kmemcheck_error_recall(void);

#endif
Tue Jul 19 12:52:59 PDT 2016
Fri Jul 22 16:13:53 PDT 2016
Sun, Jul 24, 2016  5:44:34 PM
Tue, Jul 26, 2016 12:38:59 AM
