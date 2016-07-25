#ifndef _LINUX_UNALIGNED_BE_MEMMOVE_H
#define _LINUX_UNALIGNED_BE_MEMMOVE_H

#include <linux/unaligned/memmove.h>

static inline u16 get_unaligned_be16(const void *p)
{
	return __get_unaligned_memmove16((const u8 *)p);
}

static inline u32 get_unaligned_be32(const void *p)
{
	return __get_unaligned_memmove32((const u8 *)p);
}

static inline u64 get_unaligned_be64(const void *p)
{
	return __get_unaligned_memmove64((const u8 *)p);
}

static inline void put_unaligned_be16(u16 val, void *p)
{
	__put_unaligned_memmove16(val, p);
}

static inline void put_unaligned_be32(u32 val, void *p)
{
	__put_unaligned_memmove32(val, p);
}

static inline void put_unaligned_be64(u64 val, void *p)
{
	__put_unaligned_memmove64(val, p);
}

#endif /* _LINUX_UNALIGNED_LE_MEMMOVE_H */
Tue Jul 19 12:53:15 PDT 2016
Fri Jul 22 16:14:24 PDT 2016
Sun, Jul 24, 2016  5:48:33 PM
