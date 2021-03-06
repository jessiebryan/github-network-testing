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
Tue Jul 19 12:45:15 PDT 2016
Fri Jul 22 15:59:09 PDT 2016
Sun, Jul 24, 2016  3:52:45 PM
Mon, Jul 25, 2016 10:35:05 PM
