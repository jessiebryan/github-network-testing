/*
 * Chip specific defines for DM355 SoC
 *
 * Author: Kevin Hilman, Deep Root Systems, LLC
 *
 * 2007 (c) Deep Root Systems, LLC. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#ifndef __ASM_ARCH_DM355_H
#define __ASM_ARCH_DM355_H

#include <mach/hardware.h>
#include <mach/asp.h>
#include <media/davinci/vpfe_capture.h>

#define DM355_ASYNC_EMIF_CONTROL_BASE	0x01E10000
#define DM355_ASYNC_EMIF_DATA_CE0_BASE	0x02000000

#define ASP1_TX_EVT_EN	1
#define ASP1_RX_EVT_EN	2

struct spi_board_info;

void __init dm355_init(void);
void dm355_init_spi0(unsigned chipselect_mask,
		struct spi_board_info *info, unsigned len);
void __init dm355_init_asp1(u32 evt_enable, struct snd_platform_data *pdata);
void dm355_set_vpfe_config(struct vpfe_config *cfg);

#endif /* __ASM_ARCH_DM355_H */
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:35 PDT 2016
Sun, Jul 24, 2016  1:19:57 PM
Mon, Jul 25, 2016  6:28:08 PM
Mon, Jul 25, 2016  7:41:15 PM
Tue, Jul 26, 2016  2:16:59 PM
