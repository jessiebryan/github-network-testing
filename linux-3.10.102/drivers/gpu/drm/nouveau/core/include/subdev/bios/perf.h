#ifndef __NVBIOS_PERF_H__
#define __NVBIOS_PERF_H__

struct nouveau_bios;

struct nvbios_perf_fan {
	u32 pwm_divisor;
};

int
nvbios_perf_fan_parse(struct nouveau_bios *, struct nvbios_perf_fan *);


#endif
Tue Jul 19 12:41:17 PDT 2016
Fri Jul 22 15:52:07 PDT 2016
Sun, Jul 24, 2016  2:58:22 PM
Mon, Jul 25, 2016  9:34:21 PM
