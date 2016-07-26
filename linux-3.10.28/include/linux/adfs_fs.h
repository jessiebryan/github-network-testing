#ifndef _ADFS_FS_H
#define _ADFS_FS_H

#include <uapi/linux/adfs_fs.h>

/*
 * Calculate the boot block checksum on an ADFS drive.  Note that this will
 * appear to be correct if the sector contains all zeros, so also check that
 * the disk size is non-zero!!!
 */
static inline int adfs_checkbblk(unsigned char *ptr)
{
	unsigned int result = 0;
	unsigned char *p = ptr + 511;

	do {
	        result = (result & 0xff) + (result >> 8);
        	result = result + *--p;
	} while (p != ptr);

	return (result & 0xff) != ptr[511];
}
#endif
Tue Jul 19 12:53:11 PDT 2016
Fri Jul 22 16:14:17 PDT 2016
Sun, Jul 24, 2016  5:47:33 PM
Tue, Jul 26, 2016 12:42:14 AM
