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
Tue Jul 19 12:50:46 PDT 2016
Fri Jul 22 16:09:32 PDT 2016
Sun, Jul 24, 2016  5:12:45 PM
Tue, Jul 26, 2016 12:03:52 AM
