#ifndef __ASM_SH_KFR2R09_H
#define __ASM_SH_KFR2R09_H

#include <video/sh_mobile_lcdc.h>

#if defined(CONFIG_FB_SH_MOBILE_LCDC) || defined(CONFIG_FB_SH_MOBILE_LCDC_MODULE)
void kfr2r09_lcd_on(void *board_data, struct fb_info *info);
void kfr2r09_lcd_off(void *board_data);
int kfr2r09_lcd_setup(void *board_data, void *sys_ops_handle,
		      struct sh_mobile_lcdc_sys_bus_ops *sys_ops);
void kfr2r09_lcd_start(void *board_data, void *sys_ops_handle,
		       struct sh_mobile_lcdc_sys_bus_ops *sys_ops);
#else
static void kfr2r09_lcd_on(void *board_data) {}
static void kfr2r09_lcd_off(void *board_data) {}
static int kfr2r09_lcd_setup(void *board_data, void *sys_ops_handle,
				struct sh_mobile_lcdc_sys_bus_ops *sys_ops)
{
	return -ENODEV;
}
static void kfr2r09_lcd_start(void *board_data, void *sys_ops_handle,
				struct sh_mobile_lcdc_sys_bus_ops *sys_ops)
{
}
#endif

#endif /* __ASM_SH_KFR2R09_H */
Tue Jul 19 12:33:25 PDT 2016
Fri Jul 22 15:37:53 PDT 2016
Sun, Jul 24, 2016  1:14:39 PM
Mon, Jul 25, 2016  6:21:47 PM
Mon, Jul 25, 2016  7:35:01 PM
Tue, Jul 26, 2016  2:11:03 PM
