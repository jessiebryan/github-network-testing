#ifndef _TOOLS_LE_BYTESHIFT_H
#define _TOOLS_LE_BYTESHIFT_H

#include <linux/types.h>

static inline __u16 __get_unaligned_le16(const __u8 *p)
{
	return p[0] | p[1] << 8;
}

static inline __u32 __get_unaligned_le32(const __u8 *p)
{
	return p[0] | p[1] << 8 | p[2] << 16 | p[3] << 24;
}

static inline __u64 __get_unaligned_le64(const __u8 *p)
{
	return (__u64)__get_unaligned_le32(p + 4) << 32 |
	       __get_unaligned_le32(p);
}

static inline void __put_unaligned_le16(__u16 val, __u8 *p)
{
	*p++ = val;
	*p++ = val >> 8;
}

static inline void __put_unaligned_le32(__u32 val, __u8 *p)
{
	__put_unaligned_le16(val >> 16, p + 2);
	__put_unaligned_le16(val, p);
}

static inline void __put_unaligned_le64(__u64 val, __u8 *p)
{
	__put_unaligned_le32(val >> 32, p + 4);
	__put_unaligned_le32(val, p);
}

static inline __u16 get_unaligned_le16(const void *p)
{
	return __get_unaligned_le16((const __u8 *)p);
}

static inline __u32 get_unaligned_le32(const void *p)
{
	return __get_unaligned_le32((const __u8 *)p);
}

static inline __u64 get_unaligned_le64(const void *p)
{
	return __get_unaligned_le64((const __u8 *)p);
}

static inline void put_unaligned_le16(__u16 val, void *p)
{
	__put_unaligned_le16(val, p);
}

static inline void put_unaligned_le32(__u32 val, void *p)
{
	__put_unaligned_le32(val, p);
}

static inline void put_unaligned_le64(__u64 val, void *p)
{
	__put_unaligned_le64(val, p);
}

#endif /* _TOOLS_LE_BYTESHIFT_H */
Tue Jul 19 12:44:24 PDT 2016
Fri Jul 22 15:57:33 PDT 2016
Sun, Jul 24, 2016  3:40:14 PM
Mon, Jul 25, 2016 10:21:08 PM
