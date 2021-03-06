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
Tue Jul 19 12:53:34 PDT 2016
Fri Jul 22 16:15:02 PDT 2016
Sun, Jul 24, 2016  5:53:11 PM
Tue, Jul 26, 2016 12:48:31 AM
