#ifndef __NVBIOS_MXM_H__
#define __NVBIOS_MXM_H__

u16 mxm_table(struct nouveau_bios *, u8 *ver, u8 *hdr);

u8  mxm_sor_map(struct nouveau_bios *, u8 conn);
u8  mxm_ddc_map(struct nouveau_bios *, u8 port);

#endif
Tue Jul 19 12:51:43 PDT 2016
Fri Jul 22 16:11:21 PDT 2016
Sun, Jul 24, 2016  5:26:15 PM
Tue, Jul 26, 2016 12:18:47 AM
