/*
 *  Name                         : qnxtypes.h
 *  Author                       : Richard Frowijn
 *  Function                     : standard qnx types
 *  History                      : 22-03-1998 created
 *
 */

#ifndef _QNX4TYPES_H
#define _QNX4TYPES_H

#include <linux/types.h>

typedef __le16 qnx4_nxtnt_t;
typedef __u8  qnx4_ftype_t;

typedef struct {
	__le32 xtnt_blk;
	__le32 xtnt_size;
} qnx4_xtnt_t;

typedef __le16 qnx4_mode_t;
typedef __le16 qnx4_muid_t;
typedef __le16 qnx4_mgid_t;
typedef __le32 qnx4_off_t;
typedef __le16 qnx4_nlink_t;

#endif
Tue Jul 19 12:43:04 PDT 2016
Fri Jul 22 15:55:05 PDT 2016
Sun, Jul 24, 2016  3:21:10 PM
Mon, Jul 25, 2016  9:59:58 PM
