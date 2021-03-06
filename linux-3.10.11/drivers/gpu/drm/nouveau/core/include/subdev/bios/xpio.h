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
Tue Jul 19 12:42:02 PDT 2016
Fri Jul 22 15:53:21 PDT 2016
Sun, Jul 24, 2016  3:07:36 PM
Mon, Jul 25, 2016  9:44:45 PM
