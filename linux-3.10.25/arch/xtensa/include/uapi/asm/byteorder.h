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
Tue Jul 19 12:51:02 PDT 2016
Fri Jul 22 16:10:05 PDT 2016
Sun, Jul 24, 2016  5:16:43 PM
Tue, Jul 26, 2016 12:08:17 AM
