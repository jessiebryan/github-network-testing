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
Tue Jul 19 12:53:16 PDT 2016
Fri Jul 22 16:14:25 PDT 2016
Sun, Jul 24, 2016  5:48:40 PM
Tue, Jul 26, 2016 12:43:28 AM
