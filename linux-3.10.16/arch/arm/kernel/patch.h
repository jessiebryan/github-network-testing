#ifndef _ARM_KERNEL_PATCH_H
#define _ARM_KERNEL_PATCH_H

void patch_text(void *addr, unsigned int insn);
void __patch_text(void *addr, unsigned int insn);

#endif
Tue Jul 19 12:45:04 PDT 2016
Fri Jul 22 15:58:46 PDT 2016
Sun, Jul 24, 2016  3:49:49 PM
