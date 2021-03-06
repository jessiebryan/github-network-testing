/*
 * MMIO/IRQ and platform data for SH7760 I2C channels
 */

#ifndef _I2C_SH7760_H_
#define _I2C_SH7760_H_

#define SH7760_I2C_DEVNAME	"sh7760-i2c"

#define SH7760_I2C0_MMIO	0xFE140000
#define SH7760_I2C0_MMIOEND	0xFE14003B
#define SH7760_I2C0_IRQ		62

#define SH7760_I2C1_MMIO	0xFE150000
#define SH7760_I2C1_MMIOEND	0xFE15003B
#define SH7760_I2C1_IRQ		63

struct sh7760_i2c_platdata {
	unsigned int speed_khz;
};

#endif
Tue Jul 19 12:34:01 PDT 2016
Fri Jul 22 15:38:57 PDT 2016
Sun, Jul 24, 2016  1:22:47 PM
Mon, Jul 25, 2016  6:31:31 PM
Mon, Jul 25, 2016  7:44:34 PM
Tue, Jul 26, 2016  2:20:10 PM
