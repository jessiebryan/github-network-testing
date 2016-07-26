#ifndef __NVBIOS_MXM_H__
#define __NVBIOS_MXM_H__

u16 mxm_table(struct nouveau_bios *, u8 *ver, u8 *hdr);

u8  mxm_sor_map(struct nouveau_bios *, u8 conn);
u8  mxm_ddc_map(struct nouveau_bios *, u8 port);

#endif
Tue Jul 19 12:42:46 PDT 2016
Fri Jul 22 15:54:32 PDT 2016
Sun, Jul 24, 2016  3:16:48 PM
Mon, Jul 25, 2016  9:55:08 PM
