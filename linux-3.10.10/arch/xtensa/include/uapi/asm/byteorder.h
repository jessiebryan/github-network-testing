#ifndef _XTENSA_BYTEORDER_H
#define _XTENSA_BYTEORDER_H

#ifdef __XTENSA_EL__
#include <linux/byteorder/little_endian.h>
#elif defined(__XTENSA_EB__)
#include <linux/byteorder/big_endian.h>
#else
# error processor byte order undefined!
#endif

#endif /* _XTENSA_BYTEORDER_H */
Tue Jul 19 12:39:20 PDT 2016
Fri Jul 22 15:48:13 PDT 2016
Sun, Jul 24, 2016  2:30:31 PM
Mon, Jul 25, 2016  9:03:04 PM
