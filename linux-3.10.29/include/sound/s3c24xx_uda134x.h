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
Tue Jul 19 12:53:56 PDT 2016
Fri Jul 22 16:15:43 PDT 2016
Sun, Jul 24, 2016  5:58:16 PM
Tue, Jul 26, 2016 12:54:06 AM
