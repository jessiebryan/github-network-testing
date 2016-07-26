#ifndef _UAPI__IP_SET_BITMAP_H
#define _UAPI__IP_SET_BITMAP_H

/* Bitmap type specific error codes */
enum {
	/* The element is out of the range of the set */
	IPSET_ERR_BITMAP_RANGE = IPSET_ERR_TYPE_SPECIFIC,
	/* The range exceeds the size limit of the set type */
	IPSET_ERR_BITMAP_RANGE_SIZE,
};


#endif /* _UAPI__IP_SET_BITMAP_H */
Tue Jul 19 12:39:38 PDT 2016
Fri Jul 22 15:48:51 PDT 2016
Sun, Jul 24, 2016  2:35:00 PM
Mon, Jul 25, 2016  9:08:03 PM
