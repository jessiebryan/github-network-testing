/*
 * MMIO/IRQ and platform data for SH7760 I2C channels
 */

#ifndef _I2C_SH7760_H_
#define _I2C_SH7760_H_

#define SH7760_I2C_DEVNAME	"sh7760-i2c"

#define SH7760_I2C0_MMIO	0xFE140000
#define SH7760_I2C0_MMIOEND	0xFE14003B

#define SH7760_I2C1_MMIO	0xFE150000
#define SH7760_I2C1_MMIOEND	0xFE15003B

struct sh7760_i2c_platdata {
	unsigned int speed_khz;
};

#endif
Tue Jul 19 12:43:19 PDT 2016
Fri Jul 22 15:55:34 PDT 2016
Sun, Jul 24, 2016  3:24:58 PM
Mon, Jul 25, 2016 10:04:10 PM
