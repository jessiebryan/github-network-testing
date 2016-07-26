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
Tue Jul 19 12:40:38 PDT 2016
Fri Jul 22 15:50:48 PDT 2016
Sun, Jul 24, 2016  2:49:09 PM
Mon, Jul 25, 2016  9:23:56 PM
