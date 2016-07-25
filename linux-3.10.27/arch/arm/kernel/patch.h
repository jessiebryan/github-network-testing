#ifndef _ARM_KERNEL_PATCH_H
#define _ARM_KERNEL_PATCH_H

void patch_text(void *addr, unsigned int insn);
void __patch_text(void *addr, unsigned int insn);

#endif
Tue Jul 19 12:52:04 PDT 2016
Fri Jul 22 16:12:07 PDT 2016
Sun, Jul 24, 2016  5:31:38 PM
