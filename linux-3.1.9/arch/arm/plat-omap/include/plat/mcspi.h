#ifndef _OMAP2_MCSPI_H
#define _OMAP2_MCSPI_H

#define OMAP2_MCSPI_REV 0
#define OMAP3_MCSPI_REV 1
#define OMAP4_MCSPI_REV 2

#define OMAP4_MCSPI_REG_OFFSET 0x100

struct omap2_mcspi_platform_config {
	unsigned short	num_cs;
	unsigned int regs_offset;
};

struct omap2_mcspi_dev_attr {
	unsigned short num_chipselect;
};

struct omap2_mcspi_device_config {
	unsigned turbo_mode:1;

	/* Do we want one channel enabled at the same time? */
	unsigned single_channel:1;
};

#endif
Tue Jul 19 12:37:54 PDT 2016
Fri Jul 22 15:45:23 PDT 2016
Sun, Jul 24, 2016  2:10:11 PM
Mon, Jul 25, 2016  8:40:27 PM
