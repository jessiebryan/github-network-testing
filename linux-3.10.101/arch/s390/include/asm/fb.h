#ifndef _ASM_FB_H_
#define _ASM_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:40:33 PDT 2016
Fri Jul 22 15:50:38 PDT 2016
Sun, Jul 24, 2016  2:47:56 PM
Mon, Jul 25, 2016  9:22:33 PM
