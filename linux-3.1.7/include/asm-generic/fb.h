#ifndef __ASM_GENERIC_FB_H_
#define __ASM_GENERIC_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* __ASM_GENERIC_FB_H_ */
Tue Jul 19 12:37:03 PDT 2016
Fri Jul 22 15:43:52 PDT 2016
Sun, Jul 24, 2016  1:58:59 PM
Mon, Jul 25, 2016  8:27:16 PM
