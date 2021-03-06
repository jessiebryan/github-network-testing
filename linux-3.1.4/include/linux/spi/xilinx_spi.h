#ifndef __LINUX_SPI_XILINX_SPI_H
#define __LINUX_SPI_XILINX_SPI_H

/**
 * struct xspi_platform_data - Platform data of the Xilinx SPI driver
 * @num_chipselect:	Number of chip select by the IP.
 * @little_endian:	If registers should be accessed little endian or not.
 * @bits_per_word:	Number of bits per word.
 * @devices:		Devices to add when the driver is probed.
 * @num_devices:	Number of devices in the devices array.
 */
struct xspi_platform_data {
	u16 num_chipselect;
	bool little_endian;
	u8 bits_per_word;
	struct spi_board_info *devices;
	u8 num_devices;
};

#endif /* __LINUX_SPI_XILINX_SPI_H */
Tue Jul 19 12:35:58 PDT 2016
Fri Jul 22 15:41:46 PDT 2016
Sun, Jul 24, 2016  1:43:25 PM
Mon, Jul 25, 2016  8:08:52 PM
Tue, Jul 26, 2016  2:42:59 PM
