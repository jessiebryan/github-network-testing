#ifndef _ARM_KERNEL_PATCH_H
#define _ARM_KERNEL_PATCH_H

void patch_text(void *addr, unsigned int insn);
void __patch_text(void *addr, unsigned int insn);

#endif
Tue Jul 19 12:44:25 PDT 2016
Fri Jul 22 15:57:36 PDT 2016
Sun, Jul 24, 2016  3:40:36 PM
Mon, Jul 25, 2016 10:21:32 PM
