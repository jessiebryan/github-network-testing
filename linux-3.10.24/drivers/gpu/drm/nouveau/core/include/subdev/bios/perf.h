#ifndef __NVBIOS_PERF_H__
#define __NVBIOS_PERF_H__

struct nouveau_bios;

struct nvbios_perf_fan {
	u32 pwm_divisor;
};

int
nvbios_perf_fan_parse(struct nouveau_bios *, struct nvbios_perf_fan *);


#endif
Tue Jul 19 12:50:24 PDT 2016
Fri Jul 22 16:08:52 PDT 2016
Sun, Jul 24, 2016  5:07:38 PM
Mon, Jul 25, 2016 11:58:15 PM
