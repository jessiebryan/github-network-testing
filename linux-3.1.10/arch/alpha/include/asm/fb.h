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
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:28 PDT 2016
Sun, Jul 24, 2016  1:11:27 PM
Mon, Jul 25, 2016  6:17:58 PM
Mon, Jul 25, 2016  7:31:17 PM
Tue, Jul 26, 2016  2:07:32 PM
