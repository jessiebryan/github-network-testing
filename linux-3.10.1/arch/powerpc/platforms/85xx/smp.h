#ifndef POWERPC_85XX_SMP_H_
#define POWERPC_85XX_SMP_H_ 1

#include <linux/init.h>

#ifdef CONFIG_SMP
void __init mpc85xx_smp_init(void);
#else
static inline void mpc85xx_smp_init(void)
{
	/* Nothing to do */
}
#endif

#endif /* not POWERPC_85XX_SMP_H_ */
Tue Jul 19 12:38:37 PDT 2016
Fri Jul 22 15:46:47 PDT 2016
Sun, Jul 24, 2016  2:20:15 PM
Mon, Jul 25, 2016  8:51:37 PM
