
/*
 * These symbols are needed for board-specific files to call their
 * own cpu-specific files
 */

#ifndef __ASM_ARCH_SETUP_H
#define __ASM_ARCH_SETUP_H

#include <asm/mach/time.h>
#include <linux/init.h>

#ifdef CONFIG_NOMADIK_8815

extern void cpu8815_map_io(void);
extern void cpu8815_platform_init(void);
extern void cpu8815_init_irq(void);
extern void nmdk_timer_init(void);

#endif /* NOMADIK_8815 */

#endif /*  __ASM_ARCH_SETUP_H */
Tue Jul 19 12:35:31 PDT 2016
Fri Jul 22 15:40:51 PDT 2016
Sun, Jul 24, 2016  1:36:43 PM
Mon, Jul 25, 2016  8:00:58 PM
Tue, Jul 26, 2016  2:35:34 PM
