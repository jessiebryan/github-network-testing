#ifndef __NVBIOS_DP_H__
#define __NVBIOS_DP_H__

struct nvbios_dpout {
	u16 type;
	u16 mask;
	u8  flags;
	u32 script[5];
	u32 lnkcmp;
};

u16 nvbios_dpout_parse(struct nouveau_bios *, u8 idx,
		       u8 *ver, u8 *hdr, u8 *cnt, u8 *len,
		       struct nvbios_dpout *);
u16 nvbios_dpout_match(struct nouveau_bios *, u16 type, u16 mask,
		       u8 *ver, u8 *hdr, u8 *cnt, u8 *len,
		       struct nvbios_dpout *);

struct nvbios_dpcfg {
	u8 drv;
	u8 pre;
	u8 unk;
};

u16
nvbios_dpcfg_parse(struct nouveau_bios *, u16 outp, u8 idx,
		   u8 *ver, u8 *hdr, u8 *cnt, u8 *len,
		   struct nvbios_dpcfg *);
u16
nvbios_dpcfg_match(struct nouveau_bios *, u16 outp, u8 un, u8 vs, u8 pe,
		   u8 *ver, u8 *hdr, u8 *cnt, u8 *len,
		   struct nvbios_dpcfg *);

#endif
Tue Jul 19 12:43:24 PDT 2016
Fri Jul 22 15:55:42 PDT 2016
Sun, Jul 24, 2016  3:26:01 PM
Mon, Jul 25, 2016 10:05:21 PM
