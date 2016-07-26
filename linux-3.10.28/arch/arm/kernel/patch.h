#ifndef _ARM_KERNEL_PATCH_H
#define _ARM_KERNEL_PATCH_H

void patch_text(void *addr, unsigned int insn);
void __patch_text(void *addr, unsigned int insn);

#endif
Tue Jul 19 12:52:43 PDT 2016
Fri Jul 22 16:13:23 PDT 2016
Sun, Jul 24, 2016  5:40:56 PM
Tue, Jul 26, 2016 12:34:59 AM
