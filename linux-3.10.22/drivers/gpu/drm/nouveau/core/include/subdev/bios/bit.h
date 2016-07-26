#ifndef __NVBIOS_BIT_H__
#define __NVBIOS_BIT_H__

struct bit_entry {
	u8  id;
	u8  version;
	u16 length;
	u16 offset;
};

int bit_entry(struct nouveau_bios *, u8 id, struct bit_entry *);

#endif
Tue Jul 19 12:49:07 PDT 2016
Fri Jul 22 16:06:26 PDT 2016
Sun, Jul 24, 2016  4:49:04 PM
Mon, Jul 25, 2016 11:37:42 PM
