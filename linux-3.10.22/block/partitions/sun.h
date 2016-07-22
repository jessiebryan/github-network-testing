/*
 *  fs/partitions/sun.h
 */

#define SUN_LABEL_MAGIC          0xDABE
#define SUN_VTOC_SANITY          0x600DDEEE

int sun_partition(struct parsed_partitions *state);
Tue Jul 19 12:49:06 PDT 2016
Fri Jul 22 16:06:24 PDT 2016
