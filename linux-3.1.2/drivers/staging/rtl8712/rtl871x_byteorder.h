#ifndef _RTL871X_BYTEORDER_H_
#define _RTL871X_BYTEORDER_H_

#if defined(__LITTLE_ENDIAN)
#  include "little_endian.h"
#elif defined(__BIG_ENDIAN)
#  include "big_endian.h"
#else
#  error "Must be LITTLE/BIG Endian Host"
#endif

#endif /* _RTL871X_BYTEORDER_H_ */

Tue Jul 19 12:34:12 PDT 2016
Fri Jul 22 15:39:17 PDT 2016
Sun, Jul 24, 2016  1:25:17 PM
