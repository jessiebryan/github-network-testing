#ifndef __NOUVEAU_ENUM_H__
#define __NOUVEAU_ENUM_H__

struct nouveau_enum {
	u32 value;
	const char *name;
	const void *data;
	u32 data2;
};

const struct nouveau_enum *
nouveau_enum_find(const struct nouveau_enum *, u32 value);

const struct nouveau_enum *
nouveau_enum_print(const struct nouveau_enum *en, u32 value);

struct nouveau_bitfield {
	u32 mask;
	const char *name;
};

void nouveau_bitfield_print(const struct nouveau_bitfield *, u32 value);

#endif
Tue Jul 19 12:39:21 PDT 2016
Fri Jul 22 15:48:15 PDT 2016
Sun, Jul 24, 2016  2:30:43 PM
Mon, Jul 25, 2016  9:03:18 PM
