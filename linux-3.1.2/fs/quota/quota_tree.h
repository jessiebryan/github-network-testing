/*
 *	Definitions of structures for vfsv0 quota format
 */

#ifndef _LINUX_QUOTA_TREE_H
#define _LINUX_QUOTA_TREE_H

#include <linux/types.h>
#include <linux/quota.h>

/*
 *  Structure of header of block with quota structures. It is padded to 16 bytes so
 *  there will be space for exactly 21 quota-entries in a block
 */
struct qt_disk_dqdbheader {
	__le32 dqdh_next_free;	/* Number of next block with free entry */
	__le32 dqdh_prev_free;	/* Number of previous block with free entry */
	__le16 dqdh_entries;	/* Number of valid entries in block */
	__le16 dqdh_pad1;
	__le32 dqdh_pad2;
};

#define QT_TREEOFF	1		/* Offset of tree in file in blocks */

#endif /* _LINUX_QUOTAIO_TREE_H */
Tue Jul 19 12:34:23 PDT 2016
Fri Jul 22 15:39:22 PDT 2016
Sun, Jul 24, 2016  1:25:54 PM
Mon, Jul 25, 2016  6:35:16 PM
Mon, Jul 25, 2016  7:48:12 PM
Tue, Jul 26, 2016  2:23:36 PM
