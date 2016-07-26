/*
 * ADXL345/346 Three-Axis Digital Accelerometers (I2C/SPI Interface)
 *
 * Enter bugs at http://blackfin.uclinux.org/
 *
 * Copyright (C) 2009 Michael Hennerich, Analog Devices Inc.
 * Licensed under the GPL-2 or later.
 */

#ifndef _ADXL34X_H_
#define _ADXL34X_H_

struct device;
struct adxl34x;

struct adxl34x_bus_ops {
	u16 bustype;
	int (*read)(struct device *, unsigned char);
	int (*read_block)(struct device *, unsigned char, int, void *);
	int (*write)(struct device *, unsigned char, unsigned char);
};

void adxl34x_suspend(struct adxl34x *ac);
void adxl34x_resume(struct adxl34x *ac);
struct adxl34x *adxl34x_probe(struct device *dev, int irq,
			      bool fifo_delay_default,
			      const struct adxl34x_bus_ops *bops);
int adxl34x_remove(struct adxl34x *ac);

#endif
Tue Jul 19 12:33:28 PDT 2016
Fri Jul 22 15:38:01 PDT 2016
Sun, Jul 24, 2016  1:15:34 PM
Mon, Jul 25, 2016  6:22:53 PM
Mon, Jul 25, 2016  7:36:05 PM
Tue, Jul 26, 2016  2:12:04 PM
