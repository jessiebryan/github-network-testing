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
Tue Jul 19 12:44:42 PDT 2016
Fri Jul 22 15:58:05 PDT 2016
Sun, Jul 24, 2016  3:44:28 PM
Mon, Jul 25, 2016 10:25:51 PM
