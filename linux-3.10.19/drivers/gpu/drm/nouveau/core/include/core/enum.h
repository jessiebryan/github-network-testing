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
Tue Jul 19 12:47:12 PDT 2016
Fri Jul 22 16:02:49 PDT 2016
Sun, Jul 24, 2016  4:21:19 PM
Mon, Jul 25, 2016 11:06:52 PM
