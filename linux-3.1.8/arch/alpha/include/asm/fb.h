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
Tue Jul 19 12:37:11 PDT 2016
Fri Jul 22 15:44:08 PDT 2016
Sun, Jul 24, 2016  2:00:56 PM
Mon, Jul 25, 2016  8:29:35 PM
