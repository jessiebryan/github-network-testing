#ifndef _ASM_C6X_BYTEORDER_H
#define _ASM_C6X_BYTEORDER_H

#include <asm/types.h>

#ifdef _BIG_ENDIAN
#include <linux/byteorder/big_endian.h>
#else /* _BIG_ENDIAN */
#include <linux/byteorder/little_endian.h>
#endif /* _BIG_ENDIAN */

#endif /* _ASM_BYTEORDER_H */
Tue Jul 19 12:38:30 PDT 2016
Fri Jul 22 15:46:33 PDT 2016
Sun, Jul 24, 2016  2:18:34 PM
Mon, Jul 25, 2016  8:49:43 PM
