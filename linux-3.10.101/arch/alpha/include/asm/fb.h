#ifndef _ASM_FB_H_
#define _ASM_FB_H_
#include <linux/device.h>

/* Caching is off in the I/O space quadrant by design.  */
#define fb_pgprotect(...) do {} while (0)

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:40:21 PDT 2016
Fri Jul 22 15:50:13 PDT 2016
Sun, Jul 24, 2016  2:45:01 PM
Mon, Jul 25, 2016  9:19:14 PM
