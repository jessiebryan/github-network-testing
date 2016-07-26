#ifndef _ASM_C6X_BYTEORDER_H
#define _ASM_C6X_BYTEORDER_H

#include <asm/types.h>

#ifdef _BIG_ENDIAN
#include <linux/byteorder/big_endian.h>
#else /* _BIG_ENDIAN */
#include <linux/byteorder/little_endian.h>
#endif /* _BIG_ENDIAN */

#endif /* _ASM_BYTEORDER_H */
Tue Jul 19 12:46:20 PDT 2016
Fri Jul 22 16:01:14 PDT 2016
Sun, Jul 24, 2016  4:09:08 PM
Mon, Jul 25, 2016 10:53:18 PM
