#ifndef _ASM_FB_H_
#define _ASM_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:42:00 PDT 2016
Fri Jul 22 15:53:18 PDT 2016
Sun, Jul 24, 2016  3:07:20 PM
Mon, Jul 25, 2016  9:44:27 PM
