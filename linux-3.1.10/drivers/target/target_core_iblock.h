#ifndef TARGET_CORE_IBLOCK_H
#define TARGET_CORE_IBLOCK_H

#define IBLOCK_VERSION		"4.0"

#define IBLOCK_MAX_CDBS		16
#define IBLOCK_LBA_SHIFT	9

struct iblock_req {
	struct se_task ib_task;
	unsigned char ib_scsi_cdb[TCM_MAX_COMMAND_SIZE];
	atomic_t ib_bio_cnt;
	atomic_t ib_bio_err_cnt;
	struct bio *ib_bio;
} ____cacheline_aligned;

#define IBDF_HAS_UDEV_PATH		0x01

struct iblock_dev {
	unsigned char ibd_udev_path[SE_UDEV_PATH_LEN];
	u32	ibd_flags;
	struct bio_set	*ibd_bio_set;
	struct block_device *ibd_bd;
	struct iblock_hba *ibd_host;
} ____cacheline_aligned;

struct iblock_hba {
	int		iblock_host_id;
} ____cacheline_aligned;

#endif /* TARGET_CORE_IBLOCK_H */
Tue Jul 19 12:33:35 PDT 2016
Fri Jul 22 15:38:14 PDT 2016
Sun, Jul 24, 2016  1:17:14 PM
Mon, Jul 25, 2016  6:24:53 PM
Mon, Jul 25, 2016  7:38:03 PM
Tue, Jul 26, 2016  2:13:57 PM
