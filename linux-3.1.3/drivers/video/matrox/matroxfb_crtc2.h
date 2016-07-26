#ifndef __MATROXFB_CRTC2_H__
#define __MATROXFB_CRTC2_H__

#include <linux/ioctl.h>
#include "matroxfb_base.h"

struct matroxfb_dh_fb_info {
	struct fb_info		fbcon;
	int			fbcon_registered;
	int                     initialized;

	struct matrox_fb_info*	primary_dev;

	struct {
		unsigned long	base;	/* physical */
		vaddr_t		vbase;	/* virtual */
		unsigned int	len;
		unsigned int	len_usable;
		unsigned int	len_maximum;
		unsigned int 	offbase;
		unsigned int	borrowed;
			      } video;
	struct {
		unsigned long	base;
		vaddr_t		vbase;
		unsigned int	len;
			      } mmio;

	unsigned int		interlaced:1;

	u_int32_t cmap[16];
};

#endif /* __MATROXFB_CRTC2_H__ */
Tue Jul 19 12:35:19 PDT 2016
Fri Jul 22 15:40:28 PDT 2016
Sun, Jul 24, 2016  1:33:53 PM
Mon, Jul 25, 2016  7:57:37 PM
Tue, Jul 26, 2016  2:32:26 PM
