/*
 * Definitions for TX4937/TX4938 SPI
 *
 * Copyright (C) 2000-2001 Toshiba Corporation
 *
 * 2003-2005 (c) MontaVista Software, Inc. This file is licensed under the
 * terms of the GNU General Public License version 2. This program is
 * licensed "as is" without any warranty of any kind, whether express
 * or implied.
 *
 * Support for TX4938 in 2.6 - Manish Lachwani (mlachwani@mvista.com)
 */
#ifndef __ASM_TXX9_SPI_H
#define __ASM_TXX9_SPI_H

#include <linux/errno.h>

#ifdef CONFIG_SPI
int spi_eeprom_register(int busid, int chipid, int size);
int spi_eeprom_read(int busid, int chipid,
		    int address, unsigned char *buf, int len);
#else
static inline int spi_eeprom_register(int busid, int chipid, int size)
{
	return -ENODEV;
}
static inline int spi_eeprom_read(int busid, int chipid,
				  int address, unsigned char *buf, int len)
{
	return -ENODEV;
}
#endif

#endif /* __ASM_TXX9_SPI_H */
Tue Jul 19 12:47:43 PDT 2016
Fri Jul 22 16:03:48 PDT 2016
Sun, Jul 24, 2016  4:28:49 PM
Mon, Jul 25, 2016 11:15:09 PM
