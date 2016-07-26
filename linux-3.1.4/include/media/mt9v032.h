#ifndef _MEDIA_MT9V032_H
#define _MEDIA_MT9V032_H

struct v4l2_subdev;

struct mt9v032_platform_data {
	unsigned int clk_pol:1;

	void (*set_clock)(struct v4l2_subdev *subdev, unsigned int rate);
};

#endif
Tue Jul 19 12:35:59 PDT 2016
Fri Jul 22 15:41:47 PDT 2016
Sun, Jul 24, 2016  1:43:37 PM
Mon, Jul 25, 2016  8:09:06 PM
Tue, Jul 26, 2016  2:43:11 PM
