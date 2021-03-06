/*
 * arch/arm/mach-spear3xx/include/mach/misc_regs.h
 *
 * Miscellaneous registers definitions for SPEAr3xx machine family
 *
 * Copyright (C) 2009 ST Microelectronics
 * Viresh Kumar<viresh.kumar@st.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __MACH_MISC_REGS_H
#define __MACH_MISC_REGS_H

#include <mach/hardware.h>

#define MISC_BASE		IOMEM(VA_SPEAR3XX_ICM3_MISC_REG_BASE)

#define SOC_CFG_CTR		(MISC_BASE + 0x000)
#define DIAG_CFG_CTR		(MISC_BASE + 0x004)
#define PLL1_CTR		(MISC_BASE + 0x008)
#define PLL1_FRQ		(MISC_BASE + 0x00C)
#define PLL1_MOD		(MISC_BASE + 0x010)
#define PLL2_CTR		(MISC_BASE + 0x014)
/* PLL_CTR register masks */
#define PLL_ENABLE		2
#define PLL_MODE_SHIFT		4
#define PLL_MODE_MASK		0x3
#define PLL_MODE_NORMAL		0
#define PLL_MODE_FRACTION	1
#define PLL_MODE_DITH_DSB	2
#define PLL_MODE_DITH_SSB	3

#define PLL2_FRQ		(MISC_BASE + 0x018)
/* PLL FRQ register masks */
#define PLL_DIV_N_SHIFT		0
#define PLL_DIV_N_MASK		0xFF
#define PLL_DIV_P_SHIFT		8
#define PLL_DIV_P_MASK		0x7
#define PLL_NORM_FDBK_M_SHIFT	24
#define PLL_NORM_FDBK_M_MASK	0xFF
#define PLL_DITH_FDBK_M_SHIFT	16
#define PLL_DITH_FDBK_M_MASK	0xFFFF

#define PLL2_MOD		(MISC_BASE + 0x01C)
#define PLL_CLK_CFG		(MISC_BASE + 0x020)
#define CORE_CLK_CFG		(MISC_BASE + 0x024)
/* CORE CLK CFG register masks */
#define PLL_HCLK_RATIO_SHIFT	10
#define PLL_HCLK_RATIO_MASK	0x3
#define HCLK_PCLK_RATIO_SHIFT	8
#define HCLK_PCLK_RATIO_MASK	0x3

#define PERIP_CLK_CFG		(MISC_BASE + 0x028)
/* PERIP_CLK_CFG register masks */
#define UART_CLK_SHIFT		4
#define UART_CLK_MASK		0x1
#define FIRDA_CLK_SHIFT		5
#define FIRDA_CLK_MASK		0x3
#define GPT0_CLK_SHIFT		8
#define GPT1_CLK_SHIFT		11
#define GPT2_CLK_SHIFT		12
#define GPT_CLK_MASK		0x1
#define AUX_CLK_PLL3_VAL	0
#define AUX_CLK_PLL1_VAL	1

#define PERIP1_CLK_ENB		(MISC_BASE + 0x02C)
/* PERIP1_CLK_ENB register masks */
#define UART_CLK_ENB		3
#define SSP_CLK_ENB		5
#define I2C_CLK_ENB		7
#define JPEG_CLK_ENB		8
#define FIRDA_CLK_ENB		10
#define GPT1_CLK_ENB		11
#define GPT2_CLK_ENB		12
#define ADC_CLK_ENB		15
#define RTC_CLK_ENB		17
#define GPIO_CLK_ENB		18
#define DMA_CLK_ENB		19
#define SMI_CLK_ENB		21
#define GMAC_CLK_ENB		23
#define USBD_CLK_ENB		24
#define USBH_CLK_ENB		25
#define C3_CLK_ENB		31

#define SOC_CORE_ID		(MISC_BASE + 0x030)
#define RAS_CLK_ENB		(MISC_BASE + 0x034)
#define PERIP1_SOF_RST		(MISC_BASE + 0x038)
/* PERIP1_SOF_RST register masks */
#define JPEG_SOF_RST		8

#define SOC_USER_ID		(MISC_BASE + 0x03C)
#define RAS_SOF_RST		(MISC_BASE + 0x040)
#define PRSC1_CLK_CFG		(MISC_BASE + 0x044)
#define PRSC2_CLK_CFG		(MISC_BASE + 0x048)
#define PRSC3_CLK_CFG		(MISC_BASE + 0x04C)
/* gpt synthesizer register masks */
#define GPT_MSCALE_SHIFT	0
#define GPT_MSCALE_MASK		0xFFF
#define GPT_NSCALE_SHIFT	12
#define GPT_NSCALE_MASK		0xF

#define AMEM_CLK_CFG		(MISC_BASE + 0x050)
#define EXPI_CLK_CFG		(MISC_BASE + 0x054)
#define CLCD_CLK_SYNT		(MISC_BASE + 0x05C)
#define FIRDA_CLK_SYNT		(MISC_BASE + 0x060)
#define UART_CLK_SYNT		(MISC_BASE + 0x064)
#define GMAC_CLK_SYNT		(MISC_BASE + 0x068)
#define RAS1_CLK_SYNT		(MISC_BASE + 0x06C)
#define RAS2_CLK_SYNT		(MISC_BASE + 0x070)
#define RAS3_CLK_SYNT		(MISC_BASE + 0x074)
#define RAS4_CLK_SYNT		(MISC_BASE + 0x078)
/* aux clk synthesiser register masks for irda to ras4 */
#define AUX_SYNT_ENB		31
#define AUX_EQ_SEL_SHIFT	30
#define AUX_EQ_SEL_MASK		1
#define AUX_EQ1_SEL		0
#define AUX_EQ2_SEL		1
#define AUX_XSCALE_SHIFT	16
#define AUX_XSCALE_MASK		0xFFF
#define AUX_YSCALE_SHIFT	0
#define AUX_YSCALE_MASK		0xFFF

#define ICM1_ARB_CFG		(MISC_BASE + 0x07C)
#define ICM2_ARB_CFG		(MISC_BASE + 0x080)
#define ICM3_ARB_CFG		(MISC_BASE + 0x084)
#define ICM4_ARB_CFG		(MISC_BASE + 0x088)
#define ICM5_ARB_CFG		(MISC_BASE + 0x08C)
#define ICM6_ARB_CFG		(MISC_BASE + 0x090)
#define ICM7_ARB_CFG		(MISC_BASE + 0x094)
#define ICM8_ARB_CFG		(MISC_BASE + 0x098)
#define ICM9_ARB_CFG		(MISC_BASE + 0x09C)
#define DMA_CHN_CFG		(MISC_BASE + 0x0A0)
#define USB2_PHY_CFG		(MISC_BASE + 0x0A4)
#define GMAC_CFG_CTR		(MISC_BASE + 0x0A8)
#define EXPI_CFG_CTR		(MISC_BASE + 0x0AC)
#define PRC1_LOCK_CTR		(MISC_BASE + 0x0C0)
#define PRC2_LOCK_CTR		(MISC_BASE + 0x0C4)
#define PRC3_LOCK_CTR		(MISC_BASE + 0x0C8)
#define PRC4_LOCK_CTR		(MISC_BASE + 0x0CC)
#define PRC1_IRQ_CTR		(MISC_BASE + 0x0D0)
#define PRC2_IRQ_CTR		(MISC_BASE + 0x0D4)
#define PRC3_IRQ_CTR		(MISC_BASE + 0x0D8)
#define PRC4_IRQ_CTR		(MISC_BASE + 0x0DC)
#define PWRDOWN_CFG_CTR		(MISC_BASE + 0x0E0)
#define COMPSSTL_1V8_CFG	(MISC_BASE + 0x0E4)
#define COMPSSTL_2V5_CFG	(MISC_BASE + 0x0E8)
#define COMPCOR_3V3_CFG		(MISC_BASE + 0x0EC)
#define SSTLPAD_CFG_CTR		(MISC_BASE + 0x0F0)
#define BIST1_CFG_CTR		(MISC_BASE + 0x0F4)
#define BIST2_CFG_CTR		(MISC_BASE + 0x0F8)
#define BIST3_CFG_CTR		(MISC_BASE + 0x0FC)
#define BIST4_CFG_CTR		(MISC_BASE + 0x100)
#define BIST5_CFG_CTR		(MISC_BASE + 0x104)
#define BIST1_STS_RES		(MISC_BASE + 0x108)
#define BIST2_STS_RES		(MISC_BASE + 0x10C)
#define BIST3_STS_RES		(MISC_BASE + 0x110)
#define BIST4_STS_RES		(MISC_BASE + 0x114)
#define BIST5_STS_RES		(MISC_BASE + 0x118)
#define SYSERR_CFG_CTR		(MISC_BASE + 0x11C)

#endif /* __MACH_MISC_REGS_H */
Tue Jul 19 12:33:51 PDT 2016
Fri Jul 22 15:38:39 PDT 2016
Sun, Jul 24, 2016  1:20:31 PM
Mon, Jul 25, 2016  6:28:48 PM
Mon, Jul 25, 2016  7:41:54 PM
Tue, Jul 26, 2016  2:17:38 PM
