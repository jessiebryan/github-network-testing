#ifndef _MEDIA_MT9V032_H
#define _MEDIA_MT9V032_H

struct v4l2_subdev;

struct mt9v032_platform_data {
	unsigned int clk_pol:1;

	void (*set_clock)(struct v4l2_subdev *subdev, unsigned int rate);
};

#endif
Tue Jul 19 12:34:31 PDT 2016
Fri Jul 22 15:39:31 PDT 2016
Sun, Jul 24, 2016  1:27:07 PM
Mon, Jul 25, 2016  6:36:44 PM
Mon, Jul 25, 2016  7:49:39 PM
Tue, Jul 26, 2016  2:24:57 PM
