#ifndef __ASM_SPI_H__
#define __ASM_SPI_H__

struct sh_spi_info;

struct sh_spi_info {
	int			 bus_num;
	int			 num_chipselect;

	void (*chip_select)(struct sh_spi_info *spi, int cs, int state);
};

#endif /* __ASM_SPI_H__ */
Tue Jul 19 12:48:24 PDT 2016
Fri Jul 22 16:05:05 PDT 2016
Sun, Jul 24, 2016  4:38:48 PM
Mon, Jul 25, 2016 11:26:16 PM
