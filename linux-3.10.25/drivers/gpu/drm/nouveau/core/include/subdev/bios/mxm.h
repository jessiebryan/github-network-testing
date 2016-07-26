#ifndef __NVBIOS_MXM_H__
#define __NVBIOS_MXM_H__

u16 mxm_table(struct nouveau_bios *, u8 *ver, u8 *hdr);

u8  mxm_sor_map(struct nouveau_bios *, u8 conn);
u8  mxm_ddc_map(struct nouveau_bios *, u8 port);

#endif
Tue Jul 19 12:51:03 PDT 2016
Fri Jul 22 16:10:07 PDT 2016
Sun, Jul 24, 2016  5:16:57 PM
Tue, Jul 26, 2016 12:08:33 AM
