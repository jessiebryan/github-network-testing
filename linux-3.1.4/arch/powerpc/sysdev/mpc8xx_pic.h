#ifndef _PPC_KERNEL_MPC8xx_H
#define _PPC_KERNEL_MPC8xx_H

#include <linux/irq.h>
#include <linux/interrupt.h>

int mpc8xx_pic_init(void);
unsigned int mpc8xx_get_irq(void);

/*
 * Some internal interrupt registers use an 8-bit mask for the interrupt
 * level instead of a number.
 */
static inline uint mk_int_int_mask(uint mask)
{
	return (1 << (7 - (mask/2)));
}

#endif /* _PPC_KERNEL_PPC8xx_H */
Tue Jul 19 12:35:41 PDT 2016
Fri Jul 22 15:41:11 PDT 2016
Sun, Jul 24, 2016  1:39:06 PM
Mon, Jul 25, 2016  8:03:47 PM
Tue, Jul 26, 2016  2:38:12 PM
