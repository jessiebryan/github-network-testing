#ifndef __NVBIOS_MXM_H__
#define __NVBIOS_MXM_H__

u16 mxm_table(struct nouveau_bios *, u8 *ver, u8 *hdr);

u8  mxm_sor_map(struct nouveau_bios *, u8 conn);
u8  mxm_ddc_map(struct nouveau_bios *, u8 port);

#endif
Tue Jul 19 12:45:19 PDT 2016
Fri Jul 22 15:59:16 PDT 2016
Sun, Jul 24, 2016  3:53:42 PM
Mon, Jul 25, 2016 10:36:09 PM
