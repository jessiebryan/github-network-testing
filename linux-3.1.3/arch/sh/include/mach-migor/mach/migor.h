#ifndef __ASM_SH_MIGOR_H
#define __ASM_SH_MIGOR_H

#define PORT_MSELCRA 0xa4050180
#define PORT_MSELCRB 0xa4050182
#define BSC_CS4BCR 0xfec10010
#define BSC_CS6ABCR 0xfec1001c
#define BSC_CS4WCR 0xfec10030

#include <video/sh_mobile_lcdc.h>

int migor_lcd_qvga_setup(void *board_data, void *sys_ops_handle,
			 struct sh_mobile_lcdc_sys_bus_ops *sys_ops);

#endif /* __ASM_SH_MIGOR_H */
Tue Jul 19 12:35:01 PDT 2016
Fri Jul 22 15:40:06 PDT 2016
Sun, Jul 24, 2016  1:31:10 PM
Mon, Jul 25, 2016  7:54:23 PM
Tue, Jul 26, 2016  2:29:27 PM
