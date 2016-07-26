#ifndef __ASM_SPI_H__
#define __ASM_SPI_H__

struct sh_spi_info;

struct sh_spi_info {
	int			 bus_num;
	int			 num_chipselect;

	void (*chip_select)(struct sh_spi_info *spi, int cs, int state);
};

#endif /* __ASM_SPI_H__ */
Tue Jul 19 12:38:03 PDT 2016
Fri Jul 22 15:45:40 PDT 2016
Sun, Jul 24, 2016  2:12:18 PM
Mon, Jul 25, 2016  8:42:47 PM
