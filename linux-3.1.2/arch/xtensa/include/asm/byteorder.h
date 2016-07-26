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
Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:03 PDT 2016
Sun, Jul 24, 2016  1:23:32 PM
Mon, Jul 25, 2016  6:32:27 PM
Mon, Jul 25, 2016  7:45:27 PM
Tue, Jul 26, 2016  2:21:01 PM
