#ifndef __ASM_SH_KFR2R09_H
#define __ASM_SH_KFR2R09_H

#include <video/sh_mobile_lcdc.h>

#if defined(CONFIG_FB_SH_MOBILE_LCDC) || defined(CONFIG_FB_SH_MOBILE_LCDC_MODULE)
int kfr2r09_lcd_set_brightness(int brightness);
int kfr2r09_lcd_setup(void *sys_ops_handle,
		      struct sh_mobile_lcdc_sys_bus_ops *sys_ops);
void kfr2r09_lcd_start(void *sys_ops_handle,
		       struct sh_mobile_lcdc_sys_bus_ops *sys_ops);
#else
static int kfr2r09_lcd_set_brightness(int brightness) {}
static int kfr2r09_lcd_setup(void *sys_ops_handle,
				struct sh_mobile_lcdc_sys_bus_ops *sys_ops)
{
	return -ENODEV;
}
static void kfr2r09_lcd_start(void *sys_ops_handle,
				struct sh_mobile_lcdc_sys_bus_ops *sys_ops)
{
}
#endif

#endif /* __ASM_SH_KFR2R09_H */
Tue Jul 19 12:39:55 PDT 2016
Fri Jul 22 15:49:24 PDT 2016
Sun, Jul 24, 2016  2:39:00 PM
Mon, Jul 25, 2016  9:12:30 PM
