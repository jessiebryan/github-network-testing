#ifndef __NVBIOS_PERF_H__
#define __NVBIOS_PERF_H__

struct nouveau_bios;

struct nvbios_perf_fan {
	u32 pwm_divisor;
};

int
nvbios_perf_fan_parse(struct nouveau_bios *, struct nvbios_perf_fan *);


#endif
Tue Jul 19 12:44:03 PDT 2016
Fri Jul 22 15:56:55 PDT 2016
Sun, Jul 24, 2016  3:35:14 PM
Mon, Jul 25, 2016 10:15:37 PM
