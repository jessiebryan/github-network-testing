/*
 * Copyright (C) 2010 Pengutronix
 * Uwe Kleine-Koenig <u.kleine-koenig@pengutronix.de>
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation.
 */
#include <mach/mx51.h>
#include <mach/devices-common.h>

extern const struct imx_fec_data imx51_fec_data;
#define imx51_add_fec(pdata)	\
	imx_add_fec(&imx51_fec_data, pdata)

extern const struct imx_imx_i2c_data imx51_imx_i2c_data[];
#define imx51_add_imx_i2c(id, pdata)	\
	imx_add_imx_i2c(&imx51_imx_i2c_data[id], pdata)

extern const struct imx_imx_ssi_data imx51_imx_ssi_data[];
#define imx51_add_imx_ssi(id, pdata)	\
	imx_add_imx_ssi(&imx51_imx_ssi_data[id], pdata)

extern const struct imx_imx_uart_1irq_data imx51_imx_uart_data[];
#define imx51_add_imx_uart(id, pdata)	\
	imx_add_imx_uart_1irq(&imx51_imx_uart_data[id], pdata)

extern const struct imx_mxc_nand_data imx51_mxc_nand_data;
#define imx51_add_mxc_nand(pdata)	\
	imx_add_mxc_nand(&imx51_mxc_nand_data, pdata)

extern const struct imx_sdhci_esdhc_imx_data imx51_sdhci_esdhc_imx_data[];
#define imx51_add_sdhci_esdhc_imx(id, pdata)	\
	imx_add_sdhci_esdhc_imx(&imx51_sdhci_esdhc_imx_data[id], pdata)

extern const struct imx_spi_imx_data imx51_cspi_data;
#define imx51_add_cspi(pdata)	\
	imx_add_spi_imx(&imx51_cspi_data, pdata)

extern const struct imx_spi_imx_data imx51_ecspi_data[];
#define imx51_add_ecspi(id, pdata)	\
	imx_add_spi_imx(&imx51_ecspi_data[id], pdata)

extern const struct imx_imx2_wdt_data imx51_imx2_wdt_data[];
#define imx51_add_imx2_wdt(id, pdata)	\
	imx_add_imx2_wdt(&imx51_imx2_wdt_data[id])

extern const struct imx_mxc_pwm_data imx51_mxc_pwm_data[];
#define imx51_add_mxc_pwm(id)	\
	imx_add_mxc_pwm(&imx51_mxc_pwm_data[id])

extern const struct imx_imx_keypad_data imx51_imx_keypad_data;
#define imx51_add_imx_keypad(pdata)	\
	imx_add_imx_keypad(&imx51_imx_keypad_data, pdata)
Tue Jul 19 12:36:39 PDT 2016
Fri Jul 22 15:43:06 PDT 2016
Sun, Jul 24, 2016  1:53:11 PM
Mon, Jul 25, 2016  8:20:23 PM
