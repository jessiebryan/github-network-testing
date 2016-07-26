/*
 *    Copyright IBM Corp. 2007, 2012
 *    Author(s): Peter Oberparleiter <peter.oberparleiter@de.ibm.com>
 */

#ifndef _UAPI_ASM_S390_CHPID_H
#define _UAPI_ASM_S390_CHPID_H

#include <linux/string.h>
#include <linux/types.h>

#define __MAX_CHPID 255

struct chp_id {
	__u8 reserved1;
	__u8 cssid;
	__u8 reserved2;
	__u8 id;
} __attribute__((packed));


#endif /* _UAPI_ASM_S390_CHPID_H */
Tue Jul 19 12:45:51 PDT 2016
Fri Jul 22 16:00:18 PDT 2016
Sun, Jul 24, 2016  4:01:44 PM
Mon, Jul 25, 2016 10:45:05 PM
