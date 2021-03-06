#ifndef TARGET_CORE_IBLOCK_H
#define TARGET_CORE_IBLOCK_H

#define IBLOCK_VERSION		"4.0"

#define IBLOCK_MAX_CDBS		16
#define IBLOCK_LBA_SHIFT	9

struct iblock_req {
	atomic_t pending;
	atomic_t ib_bio_err_cnt;
} ____cacheline_aligned;

#define IBDF_HAS_UDEV_PATH		0x01

struct iblock_dev {
	struct se_device dev;
	unsigned char ibd_udev_path[SE_UDEV_PATH_LEN];
	u32	ibd_flags;
	struct bio_set	*ibd_bio_set;
	struct block_device *ibd_bd;
	bool ibd_readonly;
} ____cacheline_aligned;

#endif /* TARGET_CORE_IBLOCK_H */
Tue Jul 19 12:44:11 PDT 2016
Fri Jul 22 15:57:10 PDT 2016
Sun, Jul 24, 2016  3:37:14 PM
Mon, Jul 25, 2016 10:17:50 PM
