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
Tue Jul 19 12:53:57 PDT 2016
Fri Jul 22 16:15:46 PDT 2016
Sun, Jul 24, 2016  5:58:34 PM
Tue, Jul 26, 2016 12:54:26 AM
