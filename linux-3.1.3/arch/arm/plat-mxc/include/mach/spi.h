
#ifndef __MACH_SPI_H_
#define __MACH_SPI_H_

/*
 * struct spi_imx_master - device.platform_data for SPI controller devices.
 * @chipselect: Array of chipselects for this master. Numbers >= 0 mean gpio
 *              pins, numbers < 0 mean internal CSPI chipselects according
 *              to MXC_SPI_CS(). Normally you want to use gpio based chip
 *              selects as the CSPI module tries to be intelligent about
 *              when to assert the chipselect: The CSPI module deasserts the
 *              chipselect once it runs out of input data. The other problem
 *              is that it is not possible to mix between high active and low
 *              active chipselects on one single bus using the internal
 *              chipselects. Unfortunately Freescale decided to put some
 *              chipselects on dedicated pins which are not usable as gpios,
 *              so we have to support the internal chipselects.
 * @num_chipselect: ARRAY_SIZE(chipselect)
 */
struct spi_imx_master {
	int	*chipselect;
	int	num_chipselect;
};

#define MXC_SPI_CS(no)	((no) - 32)

#endif /* __MACH_SPI_H_*/
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:47 PDT 2016
Sun, Jul 24, 2016  1:28:55 PM
Mon, Jul 25, 2016  6:38:53 PM
Mon, Jul 25, 2016  7:51:46 PM
Tue, Jul 26, 2016  2:26:57 PM
