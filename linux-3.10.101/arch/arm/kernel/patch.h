#ifndef _ARM_KERNEL_PATCH_H
#define _ARM_KERNEL_PATCH_H

void patch_text(void *addr, unsigned int insn);
void __patch_text(void *addr, unsigned int insn);

#endif
Tue Jul 19 12:40:22 PDT 2016
Fri Jul 22 15:50:15 PDT 2016
Sun, Jul 24, 2016  2:45:16 PM
Mon, Jul 25, 2016  9:19:30 PM
