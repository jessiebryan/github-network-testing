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
Tue Jul 19 12:47:50 PDT 2016
Fri Jul 22 16:04:01 PDT 2016
Sun, Jul 24, 2016  4:30:36 PM
Mon, Jul 25, 2016 11:17:08 PM
