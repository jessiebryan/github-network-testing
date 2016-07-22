#ifndef _MEDIA_MT9V032_H
#define _MEDIA_MT9V032_H

struct v4l2_subdev;

struct mt9v032_platform_data {
	unsigned int clk_pol:1;

	void (*set_clock)(struct v4l2_subdev *subdev, unsigned int rate);
};

#endif
Tue Jul 19 12:38:22 PDT 2016
Fri Jul 22 15:46:16 PDT 2016
