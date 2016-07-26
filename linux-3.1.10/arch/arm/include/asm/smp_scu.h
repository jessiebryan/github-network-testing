#ifndef __ASMARM_ARCH_SCU_H
#define __ASMARM_ARCH_SCU_H

#define SCU_PM_NORMAL	0
#define SCU_PM_DORMANT	2
#define SCU_PM_POWEROFF	3

#ifndef __ASSEMBLER__
unsigned int scu_get_core_count(void __iomem *);
void scu_enable(void __iomem *);
int scu_power_mode(void __iomem *, unsigned int);
#endif

#endif
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:29 PDT 2016
Sun, Jul 24, 2016  1:11:36 PM
Mon, Jul 25, 2016  6:18:09 PM
Mon, Jul 25, 2016  7:31:27 PM
Tue, Jul 26, 2016  2:07:42 PM
