/*
 * udf_fs_i.h
 *
 * This file is intended for the Linux kernel/module. 
 *
 * COPYRIGHT
 *	This file is distributed under the terms of the GNU General Public
 *	License (GPL). Copies of the GPL can be obtained from:
 *		ftp://prep.ai.mit.edu/pub/gnu/GPL
 *	Each contributing author retains all rights to their own work.
 */
#ifndef _UDF_FS_I_H
#define _UDF_FS_I_H 1

/* exported IOCTLs, we have 'l', 0x40-0x7f */
#define UDF_GETEASIZE   _IOR('l', 0x40, int)
#define UDF_GETEABLOCK  _IOR('l', 0x41, void *)
#define UDF_GETVOLIDENT _IOR('l', 0x42, void *)
#define UDF_RELOCATE_BLOCKS _IOWR('l', 0x43, long)

#endif /* _UDF_FS_I_H */
Tue Jul 19 12:41:36 PDT 2016
Fri Jul 22 15:52:43 PDT 2016
Sun, Jul 24, 2016  3:02:48 PM
Mon, Jul 25, 2016  9:39:20 PM
