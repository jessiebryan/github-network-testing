#ifndef _ASM_FB_H_
#define _ASM_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:47:11 PDT 2016
Fri Jul 22 16:02:47 PDT 2016
Sun, Jul 24, 2016  4:21:05 PM
Mon, Jul 25, 2016 11:06:36 PM
