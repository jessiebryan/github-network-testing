/*
 * dst-bt878.h: part of the DST driver for the TwinHan DST Frontend
 *
 * Copyright (C) 2003 Jamie Honan
 */

struct dst_gpio_enable {
	u32	mask;
	u32	enable;
};

struct dst_gpio_output {
	u32	mask;
	u32	highvals;
};

struct dst_gpio_read {
	unsigned long value;
};

union dst_gpio_packet {
	struct dst_gpio_enable enb;
	struct dst_gpio_output outp;
	struct dst_gpio_read rd;
	int    psize;
};

#define DST_IG_ENABLE	0
#define DST_IG_WRITE	1
#define DST_IG_READ	2
#define DST_IG_TS       3

struct bt878;

int bt878_device_control(struct bt878 *bt, unsigned int cmd, union dst_gpio_packet *mp);
Tue Jul 19 12:47:14 PDT 2016
Fri Jul 22 16:02:53 PDT 2016
Sun, Jul 24, 2016  4:21:46 PM
Mon, Jul 25, 2016 11:07:22 PM
