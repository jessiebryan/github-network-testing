#ifndef ARCH__X86__MM__KMEMCHECK__ERROR_H
#define ARCH__X86__MM__KMEMCHECK__ERROR_H

#include <linux/ptrace.h>

#include "shadow.h"

void kmemcheck_error_save(enum kmemcheck_shadow state,
	unsigned long address, unsigned int size, struct pt_regs *regs);

void kmemcheck_error_save_bug(struct pt_regs *regs);

void kmemcheck_error_recall(void);

#endif
Tue Jul 19 12:49:05 PDT 2016
Fri Jul 22 16:06:23 PDT 2016
Sun, Jul 24, 2016  4:48:46 PM
Mon, Jul 25, 2016 11:37:21 PM
