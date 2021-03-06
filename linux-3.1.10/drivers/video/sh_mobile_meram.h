#ifndef __sh_mobile_meram_h__
#define __sh_mobile_meram_h__

#include <linux/mutex.h>
#include <video/sh_mobile_meram.h>

/*
 * MERAM private
 */

#define MERAM_ICB_Y 0x1
#define MERAM_ICB_C 0x2

/* MERAM cache size */
#define SH_MOBILE_MERAM_ICB_NUM		32

#define SH_MOBILE_MERAM_CACHE_OFFSET(p)	((p) >> 16)
#define SH_MOBILE_MERAM_CACHE_SIZE(p)	((p) & 0xffff)

struct sh_mobile_meram_priv {
	void __iomem	*base;
	struct mutex	lock;
	unsigned long	used_icb;
	int		used_meram_cache_regions;
	unsigned long	used_meram_cache[SH_MOBILE_MERAM_ICB_NUM];
};

int sh_mobile_meram_alloc_icb(const struct sh_mobile_meram_cfg *cfg,
		   int xres,
		   int yres,
		   unsigned int base_addr,
		   int yuv_mode,
		   int *marker_icb,
		   int *out_pitch);

void sh_mobile_meram_free_icb(int marker_icb);

#define SH_MOBILE_MERAM_START(ind, ab) \
	(0xC0000000 | ((ab & 0x1) << 23) | ((ind & 0x1F) << 24))

#endif /* !__sh_mobile_meram_h__ */
Tue Jul 19 12:33:36 PDT 2016
Fri Jul 22 15:38:16 PDT 2016
Sun, Jul 24, 2016  1:17:24 PM
Mon, Jul 25, 2016  6:25:04 PM
Mon, Jul 25, 2016  7:38:15 PM
Tue, Jul 26, 2016  2:14:08 PM
