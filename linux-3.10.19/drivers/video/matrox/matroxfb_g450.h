#ifndef __MATROXFB_G450_H__
#define __MATROXFB_G450_H__

#include "matroxfb_base.h"

#ifdef CONFIG_FB_MATROX_G
void matroxfb_g450_connect(struct matrox_fb_info *minfo);
void matroxfb_g450_shutdown(struct matrox_fb_info *minfo);
#else
static inline void matroxfb_g450_connect(struct matrox_fb_info *minfo) { };
static inline void matroxfb_g450_shutdown(struct matrox_fb_info *minfo) { };
#endif

#endif /* __MATROXFB_G450_H__ */
Tue Jul 19 12:47:20 PDT 2016
Fri Jul 22 16:03:06 PDT 2016
Sun, Jul 24, 2016  4:23:31 PM
Mon, Jul 25, 2016 11:09:15 PM
