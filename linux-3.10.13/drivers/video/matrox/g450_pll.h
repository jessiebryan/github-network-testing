#ifndef __G450_PLL_H__
#define __G450_PLL_H__

#include "matroxfb_base.h"

int matroxfb_g450_setclk(struct matrox_fb_info *minfo, unsigned int fout,
			 unsigned int pll);
unsigned int g450_mnp2f(const struct matrox_fb_info *minfo, unsigned int mnp);
void matroxfb_g450_setpll_cond(struct matrox_fb_info *minfo, unsigned int mnp,
			       unsigned int pll);

#endif	/* __G450_PLL_H__ */
Tue Jul 19 12:43:33 PDT 2016
Fri Jul 22 15:55:59 PDT 2016
Sun, Jul 24, 2016  3:28:09 PM
Mon, Jul 25, 2016 10:07:43 PM
