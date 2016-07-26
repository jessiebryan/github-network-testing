#ifndef __ASM_SPI_H__
#define __ASM_SPI_H__

struct sh_spi_info;

struct sh_spi_info {
	int			 bus_num;
	int			 num_chipselect;

	void (*chip_select)(struct sh_spi_info *spi, int cs, int state);
};

#endif /* __ASM_SPI_H__ */
Tue Jul 19 12:53:34 PDT 2016
Fri Jul 22 16:15:02 PDT 2016
Sun, Jul 24, 2016  5:53:10 PM
Tue, Jul 26, 2016 12:48:30 AM
