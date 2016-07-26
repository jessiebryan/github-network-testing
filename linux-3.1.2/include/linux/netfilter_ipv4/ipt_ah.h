#ifndef _IPT_AH_H
#define _IPT_AH_H

#include <linux/types.h>

struct ipt_ah {
	__u32 spis[2];			/* Security Parameter Index */
	__u8  invflags;			/* Inverse flags */
};



/* Values for "invflags" field in struct ipt_ah. */
#define IPT_AH_INV_SPI		0x01	/* Invert the sense of spi. */
#define IPT_AH_INV_MASK	0x01	/* All possible flags. */

#endif /*_IPT_AH_H*/
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:43 PM
Mon, Jul 25, 2016  6:36:14 PM
Mon, Jul 25, 2016  7:49:10 PM
Tue, Jul 26, 2016  2:24:30 PM
