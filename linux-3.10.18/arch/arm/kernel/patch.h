#ifndef _ARM_KERNEL_PATCH_H
#define _ARM_KERNEL_PATCH_H

void patch_text(void *addr, unsigned int insn);
void __patch_text(void *addr, unsigned int insn);

#endif
Tue Jul 19 12:46:17 PDT 2016
Fri Jul 22 16:01:06 PDT 2016
Sun, Jul 24, 2016  4:08:15 PM
Mon, Jul 25, 2016 10:52:18 PM
