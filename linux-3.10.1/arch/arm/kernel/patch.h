#ifndef _ARM_KERNEL_PATCH_H
#define _ARM_KERNEL_PATCH_H

void patch_text(void *addr, unsigned int insn);
void __patch_text(void *addr, unsigned int insn);

#endif
Tue Jul 19 12:38:26 PDT 2016
Fri Jul 22 15:46:25 PDT 2016
Sun, Jul 24, 2016  2:17:40 PM
Mon, Jul 25, 2016  8:48:43 PM
