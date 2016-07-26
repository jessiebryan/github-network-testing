#ifndef __ASM_GENERIC_FB_H_
#define __ASM_GENERIC_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* __ASM_GENERIC_FB_H_ */
Tue Jul 19 12:53:11 PDT 2016
Fri Jul 22 16:14:16 PDT 2016
Sun, Jul 24, 2016  5:47:26 PM
Tue, Jul 26, 2016 12:42:07 AM
