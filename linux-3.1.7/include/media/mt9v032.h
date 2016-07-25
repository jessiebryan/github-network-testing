#ifndef _MEDIA_MT9V032_H
#define _MEDIA_MT9V032_H

struct v4l2_subdev;

struct mt9v032_platform_data {
	unsigned int clk_pol:1;

	void (*set_clock)(struct v4l2_subdev *subdev, unsigned int rate);
};

#endif
Tue Jul 19 12:37:07 PDT 2016
Fri Jul 22 15:44:01 PDT 2016
Sun, Jul 24, 2016  2:00:06 PM
