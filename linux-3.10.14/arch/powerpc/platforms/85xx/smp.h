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
Tue Jul 19 12:43:57 PDT 2016
Fri Jul 22 15:56:43 PDT 2016
Sun, Jul 24, 2016  3:33:57 PM
Mon, Jul 25, 2016 10:14:10 PM
