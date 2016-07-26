#ifndef ARCH__X86__MM__KMEMCHECK__ERROR_H
#define ARCH__X86__MM__KMEMCHECK__ERROR_H

#include <linux/ptrace.h>

#include "shadow.h"

void kmemcheck_error_save(enum kmemcheck_shadow state,
	unsigned long address, unsigned int size, struct pt_regs *regs);

void kmemcheck_error_save_bug(struct pt_regs *regs);

void kmemcheck_error_recall(void);

#endif
Tue Jul 19 12:50:23 PDT 2016
Fri Jul 22 16:08:49 PDT 2016
Sun, Jul 24, 2016  5:07:19 PM
Mon, Jul 25, 2016 11:57:54 PM
