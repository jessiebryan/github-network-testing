#ifndef __ASM_GENERIC_FB_H_
#define __ASM_GENERIC_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* __ASM_GENERIC_FB_H_ */
Tue Jul 19 12:44:13 PDT 2016
Fri Jul 22 15:57:14 PDT 2016
Sun, Jul 24, 2016  3:37:46 PM
Mon, Jul 25, 2016 10:18:25 PM
