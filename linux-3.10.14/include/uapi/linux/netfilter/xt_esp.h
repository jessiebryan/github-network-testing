#ifndef _XT_ESP_H
#define _XT_ESP_H

#include <linux/types.h>

struct xt_esp {
	__u32 spis[2];	/* Security Parameter Index */
	__u8  invflags;	/* Inverse flags */
};

/* Values for "invflags" field in struct xt_esp. */
#define XT_ESP_INV_SPI	0x01	/* Invert the sense of spi. */
#define XT_ESP_INV_MASK	0x01	/* All possible flags. */

#endif /*_XT_ESP_H*/
Tue Jul 19 12:44:21 PDT 2016
Fri Jul 22 15:57:28 PDT 2016
Sun, Jul 24, 2016  3:39:34 PM
Mon, Jul 25, 2016 10:20:23 PM
