#ifndef __NVBIOS_INIT_H__
#define __NVBIOS_INIT_H__

struct nvbios_init {
	struct nouveau_subdev *subdev;
	struct nouveau_bios *bios;
	u16 offset;
	struct dcb_output *outp;
	int crtc;

	/* internal state used during parsing */
	u8 execute;
	u32 nested;
	u16 repeat;
	u16 repend;
	u32 ramcfg;
};

int nvbios_exec(struct nvbios_init *);
int nvbios_init(struct nouveau_subdev *, bool execute);

#endif
Tue Jul 19 12:51:43 PDT 2016
Fri Jul 22 16:11:21 PDT 2016
Sun, Jul 24, 2016  5:26:15 PM
Tue, Jul 26, 2016 12:18:47 AM
