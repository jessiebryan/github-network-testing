/*
 * tw9910 Driver header
 *
 * Copyright (C) 2008 Renesas Solutions Corp.
 * Kuninori Morimoto <morimoto.kuninori@renesas.com>
 *
 * Based on ov772x.h
 *
 * Copyright (C) Kuninori Morimoto <morimoto.kuninori@renesas.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __TW9910_H__
#define __TW9910_H__

#include <media/soc_camera.h>

enum tw9910_mpout_pin {
	TW9910_MPO_VLOSS,
	TW9910_MPO_HLOCK,
	TW9910_MPO_SLOCK,
	TW9910_MPO_VLOCK,
	TW9910_MPO_MONO,
	TW9910_MPO_DET50,
	TW9910_MPO_FIELD,
	TW9910_MPO_RTCO,
};

struct tw9910_video_info {
	unsigned long		buswidth;
	enum tw9910_mpout_pin	mpout;
};


#endif /* __TW9910_H__ */
Tue Jul 19 12:53:16 PDT 2016
Fri Jul 22 16:14:26 PDT 2016
Sun, Jul 24, 2016  5:48:41 PM
Tue, Jul 26, 2016 12:43:30 AM
