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
Tue Jul 19 12:48:05 PDT 2016
Fri Jul 22 16:04:30 PDT 2016
Sun, Jul 24, 2016  4:34:21 PM
Mon, Jul 25, 2016 11:21:18 PM
