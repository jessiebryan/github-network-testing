/*
 * au1550_spi.h - Au1550 PSC SPI controller driver - platform data structure
 */

#ifndef _AU1550_SPI_H_
#define _AU1550_SPI_H_

struct au1550_spi_info {
	u32 mainclk_hz;		/* main input clock frequency of PSC */
	u16 num_chipselect;	/* number of chipselects supported */
	void (*activate_cs)(struct au1550_spi_info *spi, int cs, int polarity);
	void (*deactivate_cs)(struct au1550_spi_info *spi, int cs, int polarity);
};

#endif
Tue Jul 19 12:52:51 PDT 2016
Fri Jul 22 16:13:38 PDT 2016
Sun, Jul 24, 2016  5:42:47 PM
Tue, Jul 26, 2016 12:37:01 AM
