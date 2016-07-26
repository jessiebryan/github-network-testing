#ifndef __ASM_SPI_H__
#define __ASM_SPI_H__

struct sh_spi_info;

struct sh_spi_info {
	int			 bus_num;
	int			 num_chipselect;

	void (*chip_select)(struct sh_spi_info *spi, int cs, int state);
};

#endif /* __ASM_SPI_H__ */
Tue Jul 19 12:40:34 PDT 2016
Fri Jul 22 15:50:39 PDT 2016
Sun, Jul 24, 2016  2:48:08 PM
Mon, Jul 25, 2016  9:22:47 PM
