#ifndef _ARM_KERNEL_PATCH_H
#define _ARM_KERNEL_PATCH_H

void patch_text(void *addr, unsigned int insn);
void __patch_text(void *addr, unsigned int insn);

#endif
Tue Jul 19 12:46:56 PDT 2016
Fri Jul 22 16:02:19 PDT 2016
Sun, Jul 24, 2016  4:17:27 PM
Mon, Jul 25, 2016 11:02:33 PM
