#ifndef _LINUX_UNALIGNED_LE_MEMMOVE_H
#define _LINUX_UNALIGNED_LE_MEMMOVE_H

#include <linux/unaligned/memmove.h>

static inline u16 get_unaligned_le16(const void *p)
{
	return __get_unaligned_memmove16((const u8 *)p);
}

static inline u32 get_unaligned_le32(const void *p)
{
	return __get_unaligned_memmove32((const u8 *)p);
}

static inline u64 get_unaligned_le64(const void *p)
{
	return __get_unaligned_memmove64((const u8 *)p);
}

static inline void put_unaligned_le16(u16 val, void *p)
{
	__put_unaligned_memmove16(val, p);
}

static inline void put_unaligned_le32(u32 val, void *p)
{
	__put_unaligned_memmove32(val, p);
}

static inline void put_unaligned_le64(u64 val, void *p)
{
	__put_unaligned_memmove64(val, p);
}

#endif /* _LINUX_UNALIGNED_LE_MEMMOVE_H */
Tue Jul 19 12:37:45 PDT 2016
Fri Jul 22 15:45:08 PDT 2016
Sun, Jul 24, 2016  2:08:15 PM
Mon, Jul 25, 2016  8:38:16 PM
