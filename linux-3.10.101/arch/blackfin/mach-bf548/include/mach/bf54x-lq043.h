/*
 * Copyright 2007-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef BF54X_LQ043_H
#define BF54X_LQ043_H

struct bfin_bf54xfb_val {
	unsigned int	defval;
	unsigned int	min;
	unsigned int	max;
};

struct bfin_bf54xfb_mach_info {
	unsigned char	fixed_syncs;	/* do not update sync/border */

	/* LCD types */
	int		type;

	/* Screen size */
	int		width;
	int		height;

	/* Screen info */
	struct bfin_bf54xfb_val xres;
	struct bfin_bf54xfb_val yres;
	struct bfin_bf54xfb_val bpp;

	/* GPIOs */
	unsigned short 		disp;

};

#endif /* BF54X_LQ043_H */
Tue Jul 19 12:40:25 PDT 2016
Fri Jul 22 15:50:22 PDT 2016
Sun, Jul 24, 2016  2:46:07 PM
Mon, Jul 25, 2016  9:20:27 PM
