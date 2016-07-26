#ifndef _ARM_KERNEL_PATCH_H
#define _ARM_KERNEL_PATCH_H

void patch_text(void *addr, unsigned int insn);
void __patch_text(void *addr, unsigned int insn);

#endif
Tue Jul 19 12:50:07 PDT 2016
Fri Jul 22 16:08:21 PDT 2016
Sun, Jul 24, 2016  5:03:45 PM
Mon, Jul 25, 2016 11:53:54 PM
