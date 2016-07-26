#ifndef __NVBIOS_MXM_H__
#define __NVBIOS_MXM_H__

u16 mxm_table(struct nouveau_bios *, u8 *ver, u8 *hdr);

u8  mxm_sor_map(struct nouveau_bios *, u8 conn);
u8  mxm_ddc_map(struct nouveau_bios *, u8 port);

#endif
Tue Jul 19 12:39:59 PDT 2016
Fri Jul 22 15:49:32 PDT 2016
Sun, Jul 24, 2016  2:39:57 PM
Mon, Jul 25, 2016  9:13:33 PM
