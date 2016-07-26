#ifndef __MATROXFB_MAVEN_H__
#define __MATROXFB_MAVEN_H__

#include <linux/ioctl.h>
#include <linux/i2c.h>
#include <linux/i2c-algo-bit.h>
#include "matroxfb_base.h"

struct i2c_bit_adapter {
	struct i2c_adapter		adapter;
	int				initialized;
	struct i2c_algo_bit_data	bac;
	struct matrox_fb_info*		minfo;
	struct {
		unsigned int		data;
		unsigned int		clock;
				      } mask;
};

#endif /* __MATROXFB_MAVEN_H__ */
Tue Jul 19 12:53:09 PDT 2016
Fri Jul 22 16:14:13 PDT 2016
Sun, Jul 24, 2016  5:47:03 PM
Tue, Jul 26, 2016 12:41:42 AM
