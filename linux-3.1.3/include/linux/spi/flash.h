#ifndef LINUX_SPI_FLASH_H
#define LINUX_SPI_FLASH_H

struct mtd_partition;

/**
 * struct flash_platform_data: board-specific flash data
 * @name: optional flash device name (eg, as used with mtdparts=)
 * @parts: optional array of mtd_partitions for static partitioning
 * @nr_parts: number of mtd_partitions for static partitoning
 * @type: optional flash device type (e.g. m25p80 vs m25p64), for use
 *	with chips that can't be queried for JEDEC or other IDs
 *
 * Board init code (in arch/.../mach-xxx/board-yyy.c files) can
 * provide information about SPI flash parts (such as DataFlash) to
 * help set up the device and its appropriate default partitioning.
 *
 * Note that for DataFlash, sizes for pages, blocks, and sectors are
 * rarely powers of two; and partitions should be sector-aligned.
 */
struct flash_platform_data {
	char		*name;
	struct mtd_partition *parts;
	unsigned int	nr_parts;

	char		*type;

	/* we'll likely add more ... use JEDEC IDs, etc */
};

#endif
Tue Jul 19 12:35:24 PDT 2016
Fri Jul 22 15:40:38 PDT 2016
Sun, Jul 24, 2016  1:35:10 PM
Mon, Jul 25, 2016  7:59:08 PM
Tue, Jul 26, 2016  2:33:51 PM
