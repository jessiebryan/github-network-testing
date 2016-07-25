#ifndef _ASM_FB_H_
#define _ASM_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:50:51 PDT 2016
Fri Jul 22 16:09:42 PDT 2016
Sun, Jul 24, 2016  5:14:03 PM
