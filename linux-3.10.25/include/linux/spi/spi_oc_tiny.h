#ifndef _LINUX_SPI_SPI_OC_TINY_H
#define _LINUX_SPI_SPI_OC_TINY_H

/**
 * struct tiny_spi_platform_data - platform data of the OpenCores tiny SPI
 * @freq:	input clock freq to the core.
 * @baudwidth:	baud rate divider width of the core.
 * @gpio_cs_count:	number of gpio pins used for chipselect.
 * @gpio_cs:	array of gpio pins used for chipselect.
 *
 * freq and baudwidth are used only if the divider is programmable.
 */
struct tiny_spi_platform_data {
	unsigned int freq;
	unsigned int baudwidth;
	unsigned int gpio_cs_count;
	int *gpio_cs;
};

#endif /* _LINUX_SPI_SPI_OC_TINY_H */
Tue Jul 19 12:51:18 PDT 2016
Fri Jul 22 16:10:35 PDT 2016
Sun, Jul 24, 2016  5:20:31 PM
Tue, Jul 26, 2016 12:12:28 AM
