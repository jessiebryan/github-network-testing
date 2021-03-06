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
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:47 PDT 2016
Sun, Jul 24, 2016  1:28:57 PM
Mon, Jul 25, 2016  6:38:55 PM
Mon, Jul 25, 2016  7:51:48 PM
Tue, Jul 26, 2016  2:26:59 PM
