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
Tue Jul 19 12:44:57 PDT 2016
Fri Jul 22 15:58:32 PDT 2016
Sun, Jul 24, 2016  3:48:01 PM
Mon, Jul 25, 2016 10:29:48 PM
