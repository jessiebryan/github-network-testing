#ifndef __ASM_SH_MOBILE_CEU_H__
#define __ASM_SH_MOBILE_CEU_H__

#define SH_CEU_FLAG_USE_8BIT_BUS	(1 << 0) /* use  8bit bus width */
#define SH_CEU_FLAG_USE_16BIT_BUS	(1 << 1) /* use 16bit bus width */
#define SH_CEU_FLAG_HSYNC_LOW		(1 << 2) /* default High if possible */
#define SH_CEU_FLAG_VSYNC_LOW		(1 << 3) /* default High if possible */

struct device;
struct resource;

struct sh_mobile_ceu_companion {
	u32		num_resources;
	struct resource	*resource;
	int		id;
	void		*platform_data;
};

struct sh_mobile_ceu_info {
	unsigned long flags;
	struct sh_mobile_ceu_companion *csi2;
};

#endif /* __ASM_SH_MOBILE_CEU_H__ */
Tue Jul 19 12:35:25 PDT 2016
Fri Jul 22 15:40:40 PDT 2016
Sun, Jul 24, 2016  1:35:23 PM
Mon, Jul 25, 2016  7:59:23 PM
Tue, Jul 26, 2016  2:34:05 PM
