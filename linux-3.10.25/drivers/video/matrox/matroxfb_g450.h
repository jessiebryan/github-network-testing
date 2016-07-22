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
Tue Jul 19 12:51:12 PDT 2016
Fri Jul 22 16:10:24 PDT 2016
