#ifndef __ASM_SPI_H__
#define __ASM_SPI_H__

struct sh_spi_info;

struct sh_spi_info {
	int			 bus_num;
	int			 num_chipselect;

	void (*chip_select)(struct sh_spi_info *spi, int cs, int state);
};

#endif /* __ASM_SPI_H__ */
Tue Jul 19 12:39:17 PDT 2016
Fri Jul 22 15:48:06 PDT 2016
Sun, Jul 24, 2016  2:29:43 PM
Mon, Jul 25, 2016  9:02:11 PM
