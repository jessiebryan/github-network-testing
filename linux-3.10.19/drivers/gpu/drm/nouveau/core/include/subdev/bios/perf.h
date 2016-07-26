#ifndef __NVBIOS_PERF_H__
#define __NVBIOS_PERF_H__

struct nouveau_bios;

struct nvbios_perf_fan {
	u32 pwm_divisor;
};

int
nvbios_perf_fan_parse(struct nouveau_bios *, struct nvbios_perf_fan *);


#endif
Tue Jul 19 12:47:12 PDT 2016
Fri Jul 22 16:02:50 PDT 2016
Sun, Jul 24, 2016  4:21:21 PM
Mon, Jul 25, 2016 11:06:54 PM
