#ifndef _ASM_FB_H_
#define _ASM_FB_H_
#include <linux/fb.h>

#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:52:49 PDT 2016
Fri Jul 22 16:13:33 PDT 2016
Sun, Jul 24, 2016  5:42:08 PM
Tue, Jul 26, 2016 12:36:18 AM
