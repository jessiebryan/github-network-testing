#ifndef __NVMXM_MXMS_H__
#define __NVMXM_MXMS_H__

struct mxms_odev {
	u8 outp_type;
	u8 conn_type;
	u8 ddc_port;
	u8 dig_conn;
};

void mxms_output_device(struct nouveau_mxm *, u8 *, struct mxms_odev *);

u16  mxms_version(struct nouveau_mxm *);
u16  mxms_headerlen(struct nouveau_mxm *);
u16  mxms_structlen(struct nouveau_mxm *);
bool mxms_checksum(struct nouveau_mxm *);
bool mxms_valid(struct nouveau_mxm *);

bool mxms_foreach(struct nouveau_mxm *, u8,
		  bool (*)(struct nouveau_mxm *, u8 *, void *), void *);

#endif
Tue Jul 19 12:39:21 PDT 2016
Fri Jul 22 15:48:15 PDT 2016
Sun, Jul 24, 2016  2:30:46 PM
Mon, Jul 25, 2016  9:03:20 PM
