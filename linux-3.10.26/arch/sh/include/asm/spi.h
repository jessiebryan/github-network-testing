#ifndef __ASM_SPI_H__
#define __ASM_SPI_H__

struct sh_spi_info;

struct sh_spi_info {
	int			 bus_num;
	int			 num_chipselect;

	void (*chip_select)(struct sh_spi_info *spi, int cs, int state);
};

#endif /* __ASM_SPI_H__ */
Tue Jul 19 12:51:38 PDT 2016
Fri Jul 22 16:11:13 PDT 2016
Sun, Jul 24, 2016  5:25:13 PM
Tue, Jul 26, 2016 12:17:39 AM
