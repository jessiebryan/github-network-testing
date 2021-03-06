#ifndef _MEDIA_MT9V032_H
#define _MEDIA_MT9V032_H

struct v4l2_subdev;

struct mt9v032_platform_data {
	unsigned int clk_pol:1;

	void (*set_clock)(struct v4l2_subdev *subdev, unsigned int rate);

	const s64 *link_freqs;
	s64 link_def_freq;
};

#endif
Tue Jul 19 12:40:54 PDT 2016
Fri Jul 22 15:51:18 PDT 2016
Sun, Jul 24, 2016  2:52:54 PM
Mon, Jul 25, 2016  9:28:09 PM
