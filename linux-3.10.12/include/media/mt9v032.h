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
Tue Jul 19 12:43:01 PDT 2016
Fri Jul 22 15:55:00 PDT 2016
Sun, Jul 24, 2016  3:20:32 PM
Mon, Jul 25, 2016  9:59:16 PM
