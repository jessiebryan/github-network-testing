#ifndef __BASIC_TYPES_H__
#define __BASIC_TYPES_H__

#define SUCCESS	0
#define FAIL	(-1)

#include <linux/types.h>

#define SIZE_T __kernel_size_t
#define sint signed int
#define FIELD_OFFSET(s, field)	((addr_t)&((s *)(0))->field)

/* Should we extend this to be host_addr_t and target_addr_t for case:
 *	host : x86_64
 *	target : mips64
 */
#define addr_t unsigned long

#define MEM_ALIGNMENT_OFFSET	(sizeof(SIZE_T))
#define MEM_ALIGNMENT_PADDING	(sizeof(SIZE_T) - 1)

#endif /*__BASIC_TYPES_H__*/

Tue Jul 19 12:37:36 PDT 2016
Fri Jul 22 15:44:54 PDT 2016
Sun, Jul 24, 2016  2:06:29 PM
Mon, Jul 25, 2016  8:36:15 PM
