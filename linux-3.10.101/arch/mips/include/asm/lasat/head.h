/*
 * Image header stuff
 */
#ifndef _HEAD_H
#define _HEAD_H

#define LASAT_K_MAGIC0_VAL	0xfedeabba
#define LASAT_K_MAGIC1_VAL	0x00bedead

#ifndef _LANGUAGE_ASSEMBLY
#include <linux/types.h>
struct bootloader_header {
	u32 magic[2];
	u32 version;
	u32 image_start;
	u32 image_size;
	u32 kernel_start;
	u32 kernel_entry;
};
#endif

#endif /* _HEAD_H */
Tue Jul 19 12:40:30 PDT 2016
Fri Jul 22 15:50:31 PDT 2016
Sun, Jul 24, 2016  2:47:05 PM
Mon, Jul 25, 2016  9:21:33 PM
