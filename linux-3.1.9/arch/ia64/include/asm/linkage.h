#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#ifndef __ASSEMBLY__

#define asmlinkage CPP_ASMLINKAGE __attribute__((syscall_linkage))

#else

#include <asm/asmmacro.h>

#endif

#endif
Tue Jul 19 12:37:57 PDT 2016
Fri Jul 22 15:45:29 PDT 2016
Sun, Jul 24, 2016  2:10:51 PM
Mon, Jul 25, 2016  8:41:11 PM
