#ifndef _ASM_FB_H_
#define _ASM_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:39 PDT 2016
Sun, Jul 24, 2016  1:12:58 PM
Mon, Jul 25, 2016  6:19:46 PM
Mon, Jul 25, 2016  7:33:02 PM
Tue, Jul 26, 2016  2:09:12 PM
