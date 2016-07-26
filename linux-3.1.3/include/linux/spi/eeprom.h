#ifndef __LINUX_SPI_EEPROM_H
#define __LINUX_SPI_EEPROM_H

#include <linux/memory.h>

/*
 * Put one of these structures in platform_data for SPI EEPROMS handled
 * by the "at25" driver.  On SPI, most EEPROMS understand the same core
 * command set.  If you need to support EEPROMs that don't yet fit, add
 * flags to support those protocol options.  These values all come from
 * the chip datasheets.
 */
struct spi_eeprom {
	u32		byte_len;
	char		name[10];
	u16		page_size;		/* for writes */
	u16		flags;
#define	EE_ADDR1	0x0001			/*  8 bit addrs */
#define	EE_ADDR2	0x0002			/* 16 bit addrs */
#define	EE_ADDR3	0x0004			/* 24 bit addrs */
#define	EE_READONLY	0x0008			/* disallow writes */

	/* for exporting this chip's data to other kernel code */
	void (*setup)(struct memory_accessor *mem, void *context);
	void *context;
};

#endif /* __LINUX_SPI_EEPROM_H */
Tue Jul 19 12:35:24 PDT 2016
Fri Jul 22 15:40:38 PDT 2016
Sun, Jul 24, 2016  1:35:10 PM
Mon, Jul 25, 2016  7:59:08 PM
Tue, Jul 26, 2016  2:33:51 PM
