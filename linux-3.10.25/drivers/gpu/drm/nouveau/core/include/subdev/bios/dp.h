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
Tue Jul 19 12:51:03 PDT 2016
Fri Jul 22 16:10:07 PDT 2016
Sun, Jul 24, 2016  5:16:57 PM
Tue, Jul 26, 2016 12:08:32 AM
