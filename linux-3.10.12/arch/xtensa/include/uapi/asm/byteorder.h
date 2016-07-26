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
Tue Jul 19 12:42:45 PDT 2016
Fri Jul 22 15:54:30 PDT 2016
Sun, Jul 24, 2016  3:16:34 PM
Mon, Jul 25, 2016  9:54:53 PM
