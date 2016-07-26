#ifndef __MATROXFB_MISC_H__
#define __MATROXFB_MISC_H__

#include "matroxfb_base.h"

/* also for modules */
int matroxfb_PLL_calcclock(const struct matrox_pll_features* pll, unsigned int freq, unsigned int fmax,
	unsigned int* in, unsigned int* feed, unsigned int* post);
static inline int PLL_calcclock(const struct matrox_fb_info *minfo,
				unsigned int freq, unsigned int fmax,
				unsigned int *in, unsigned int *feed,
				unsigned int *post)
{
	return matroxfb_PLL_calcclock(&minfo->features.pll, freq, fmax, in, feed, post);
}

int matroxfb_vgaHWinit(struct matrox_fb_info *minfo, struct my_timming* m);
void matroxfb_vgaHWrestore(struct matrox_fb_info *minfo);
void matroxfb_read_pins(struct matrox_fb_info *minfo);

#endif	/* __MATROXFB_MISC_H__ */
Tue Jul 19 12:40:08 PDT 2016
Fri Jul 22 15:49:50 PDT 2016
Sun, Jul 24, 2016  2:42:05 PM
Mon, Jul 25, 2016  9:15:55 PM
