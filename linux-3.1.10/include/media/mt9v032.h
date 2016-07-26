#ifndef _MEDIA_MT9V032_H
#define _MEDIA_MT9V032_H

struct v4l2_subdev;

struct mt9v032_platform_data {
	unsigned int clk_pol:1;

	void (*set_clock)(struct v4l2_subdev *subdev, unsigned int rate);
};

#endif
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:26 PDT 2016
Sun, Jul 24, 2016  1:18:51 PM
Mon, Jul 25, 2016  6:26:49 PM
Mon, Jul 25, 2016  7:39:57 PM
