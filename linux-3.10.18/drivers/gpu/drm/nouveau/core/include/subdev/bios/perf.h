#ifndef __NVBIOS_PERF_H__
#define __NVBIOS_PERF_H__

struct nouveau_bios;

struct nvbios_perf_fan {
	u32 pwm_divisor;
};

int
nvbios_perf_fan_parse(struct nouveau_bios *, struct nvbios_perf_fan *);


#endif
Tue Jul 19 12:46:32 PDT 2016
Fri Jul 22 16:01:39 PDT 2016
Sun, Jul 24, 2016  4:12:08 PM
Mon, Jul 25, 2016 10:56:39 PM
