#ifndef __ASM_GENERIC_FB_H_
#define __ASM_GENERIC_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* __ASM_GENERIC_FB_H_ */
Tue Jul 19 12:50:35 PDT 2016
Fri Jul 22 16:09:12 PDT 2016
Sun, Jul 24, 2016  5:10:11 PM
Tue, Jul 26, 2016 12:01:02 AM
