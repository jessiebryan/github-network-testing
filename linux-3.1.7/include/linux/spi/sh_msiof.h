#ifndef __SPI_SH_MSIOF_H__
#define __SPI_SH_MSIOF_H__

struct sh_msiof_spi_info {
	int tx_fifo_override;
	int rx_fifo_override;
	u16 num_chipselect;
};

#endif /* __SPI_SH_MSIOF_H__ */
Tue Jul 19 12:37:06 PDT 2016
