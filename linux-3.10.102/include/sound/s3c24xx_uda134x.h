#ifndef _S3C24XX_UDA134X_H_
#define _S3C24XX_UDA134X_H_ 1

#include <sound/uda134x.h>

struct s3c24xx_uda134x_platform_data {
	int l3_clk;
	int l3_mode;
	int l3_data;
	void (*power) (int);
	int model;
};

#endif
Tue Jul 19 12:41:34 PDT 2016
Fri Jul 22 15:52:40 PDT 2016
Sun, Jul 24, 2016  3:02:24 PM
Mon, Jul 25, 2016  9:38:53 PM
