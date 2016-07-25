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
Tue Jul 19 12:49:45 PDT 2016
Fri Jul 22 16:07:38 PDT 2016
Sun, Jul 24, 2016  4:58:17 PM
