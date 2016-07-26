#ifndef __NVBIOS_XPIO_H__
#define __NVBIOS_XPIO_H__

#define NVBIOS_XPIO_FLAG_AUX  0x10
#define NVBIOS_XPIO_FLAG_AUX0 0x00
#define NVBIOS_XPIO_FLAG_AUX1 0x10

struct nvbios_xpio {
	u8 type;
	u8 addr;
	u8 flags;
};

u16 dcb_xpio_table(struct nouveau_bios *, u8 idx,
		   u8 *ver, u8 *hdr, u8 *cnt, u8 *len);
u16 dcb_xpio_parse(struct nouveau_bios *, u8 idx,
		   u8 *ver, u8 *hdr, u8 *cnt, u8 *len, struct nvbios_xpio *);

#endif
Tue Jul 19 12:51:03 PDT 2016
Fri Jul 22 16:10:07 PDT 2016
Sun, Jul 24, 2016  5:16:57 PM
Tue, Jul 26, 2016 12:08:33 AM
