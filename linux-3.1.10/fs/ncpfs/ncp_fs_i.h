/*
 *  ncp_fs_i.h
 *
 *  Copyright (C) 1995 Volker Lendecke
 *
 */

#ifndef _LINUX_NCP_FS_I
#define _LINUX_NCP_FS_I

/*
 * This is the ncpfs part of the inode structure. This must contain
 * all the information we need to work with an inode after creation.
 */
struct ncp_inode_info {
	__le32	dirEntNum;
	__le32	DosDirNum;
	__u8	volNumber;
	__le32	nwattr;
	struct mutex open_mutex;
	atomic_t	opened;
	int	access;
	int	flags;
#define NCPI_KLUDGE_SYMLINK	0x0001
	__u8	file_handle[6];
	struct inode vfs_inode;
};

#endif	/* _LINUX_NCP_FS_I */
Tue Jul 19 12:33:37 PDT 2016
Fri Jul 22 15:38:17 PDT 2016
Sun, Jul 24, 2016  1:17:33 PM
Mon, Jul 25, 2016  6:25:15 PM
Mon, Jul 25, 2016  7:38:25 PM
Tue, Jul 26, 2016  2:14:18 PM
