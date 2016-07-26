/*
 *  fs/partitions/atari.h
 *  Moved by Russell King from:
 *
 * linux/include/linux/atari_rootsec.h
 * definitions for Atari Rootsector layout
 * by Andreas Schwab (schwab@ls5.informatik.uni-dortmund.de)
 *
 * modified for ICD/Supra partitioning scheme restricted to at most 12
 * partitions
 * by Guenther Kelleter (guenther@pool.informatik.rwth-aachen.de)
 */

struct partition_info
{
  u8 flg;			/* bit 0: active; bit 7: bootable */
  char id[3];			/* "GEM", "BGM", "XGM", or other */
  __be32 st;			/* start of partition */
  __be32 siz;			/* length of partition */
};

struct rootsector
{
  char unused[0x156];		/* room for boot code */
  struct partition_info icdpart[8];	/* info for ICD-partitions 5..12 */
  char unused2[0xc];
  u32 hd_siz;			/* size of disk in blocks */
  struct partition_info part[4];
  u32 bsl_st;			/* start of bad sector list */
  u32 bsl_cnt;			/* length of bad sector list */
  u16 checksum;			/* checksum for bootable disks */
} __attribute__((__packed__));

int atari_partition(struct parsed_partitions *state);
Tue Jul 19 12:33:37 PDT 2016
Fri Jul 22 15:38:17 PDT 2016
Sun, Jul 24, 2016  1:17:37 PM
Mon, Jul 25, 2016  6:25:20 PM
Mon, Jul 25, 2016  7:38:30 PM
Tue, Jul 26, 2016  2:14:24 PM
