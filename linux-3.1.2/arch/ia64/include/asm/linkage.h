#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#ifndef __ASSEMBLY__

#define asmlinkage CPP_ASMLINKAGE __attribute__((syscall_linkage))

#else

#include <asm/asmmacro.h>

#endif

#endif
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:47 PDT 2016
Sun, Jul 24, 2016  1:21:22 PM
Mon, Jul 25, 2016  6:29:50 PM
Mon, Jul 25, 2016  7:42:55 PM
Tue, Jul 26, 2016  2:18:36 PM
