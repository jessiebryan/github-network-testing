#ifndef _LINUX_STRING_HELPERS_H_
#define _LINUX_STRING_HELPERS_H_

#include <linux/types.h>

/* Descriptions of the types of units to
 * print in */
enum string_size_units {
	STRING_UNITS_10,	/* use powers of 10^3 (standard SI) */
	STRING_UNITS_2,		/* use binary powers of 2^10 */
};

int string_get_size(u64 size, enum string_size_units units,
		    char *buf, int len);

#endif
Tue Jul 19 12:34:27 PDT 2016
Fri Jul 22 15:39:30 PDT 2016
Sun, Jul 24, 2016  1:26:57 PM
Mon, Jul 25, 2016  6:36:31 PM
Mon, Jul 25, 2016  7:49:26 PM
Tue, Jul 26, 2016  2:24:46 PM
