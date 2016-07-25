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
Tue Jul 19 12:38:43 PDT 2016
Fri Jul 22 15:46:58 PDT 2016
Sun, Jul 24, 2016  2:21:33 PM
