#ifndef __ASM_SH_TRAPS_H
#define __ASM_SH_TRAPS_H

#include <linux/compiler.h>

#ifdef CONFIG_SUPERH32
# include <asm/traps_32.h>
#else
# include <asm/traps_64.h>
#endif

BUILD_TRAP_HANDLER(address_error);
BUILD_TRAP_HANDLER(debug);
BUILD_TRAP_HANDLER(bug);
BUILD_TRAP_HANDLER(breakpoint);
BUILD_TRAP_HANDLER(singlestep);
BUILD_TRAP_HANDLER(fpu_error);
BUILD_TRAP_HANDLER(fpu_state_restore);
BUILD_TRAP_HANDLER(nmi);

#endif /* __ASM_SH_TRAPS_H */
Tue Jul 19 12:45:51 PDT 2016
Fri Jul 22 16:00:19 PDT 2016
Sun, Jul 24, 2016  4:01:55 PM
Mon, Jul 25, 2016 10:45:17 PM
