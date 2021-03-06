#ifndef _LINUX_UNALIGNED_LE_STRUCT_H
#define _LINUX_UNALIGNED_LE_STRUCT_H

#include <linux/unaligned/packed_struct.h>

static inline u16 get_unaligned_le16(const void *p)
{
	return __get_unaligned_cpu16((const u8 *)p);
}

static inline u32 get_unaligned_le32(const void *p)
{
	return __get_unaligned_cpu32((const u8 *)p);
}

static inline u64 get_unaligned_le64(const void *p)
{
	return __get_unaligned_cpu64((const u8 *)p);
}

static inline void put_unaligned_le16(u16 val, void *p)
{
	__put_unaligned_cpu16(val, p);
}

static inline void put_unaligned_le32(u32 val, void *p)
{
	__put_unaligned_cpu32(val, p);
}

static inline void put_unaligned_le64(u64 val, void *p)
{
	__put_unaligned_cpu64(val, p);
}

#endif /* _LINUX_UNALIGNED_LE_STRUCT_H */
Tue Jul 19 12:35:25 PDT 2016
Fri Jul 22 15:40:39 PDT 2016
Sun, Jul 24, 2016  1:35:16 PM
Mon, Jul 25, 2016  7:59:15 PM
Tue, Jul 26, 2016  2:33:57 PM
