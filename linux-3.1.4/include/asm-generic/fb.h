#ifndef __ASM_GENERIC_FB_H_
#define __ASM_GENERIC_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* __ASM_GENERIC_FB_H_ */
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:38 PDT 2016
Sun, Jul 24, 2016  1:42:30 PM
Mon, Jul 25, 2016  8:07:47 PM
Tue, Jul 26, 2016  2:41:58 PM
