#ifndef _ARM_KERNEL_PATCH_H
#define _ARM_KERNEL_PATCH_H

void patch_text(void *addr, unsigned int insn);
void __patch_text(void *addr, unsigned int insn);

#endif
Tue Jul 19 12:39:05 PDT 2016
Fri Jul 22 15:47:41 PDT 2016
Sun, Jul 24, 2016  2:26:52 PM
Mon, Jul 25, 2016  8:58:59 PM
