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
Tue Jul 19 12:37:44 PDT 2016
Fri Jul 22 15:45:07 PDT 2016
Sun, Jul 24, 2016  2:08:11 PM
Mon, Jul 25, 2016  8:38:11 PM
