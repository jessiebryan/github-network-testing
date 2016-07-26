#ifndef __NVBIOS_PERF_H__
#define __NVBIOS_PERF_H__

struct nouveau_bios;

struct nvbios_perf_fan {
	u32 pwm_divisor;
};

int
nvbios_perf_fan_parse(struct nouveau_bios *, struct nvbios_perf_fan *);


#endif
Tue Jul 19 12:53:00 PDT 2016
Fri Jul 22 16:13:55 PDT 2016
Sun, Jul 24, 2016  5:44:53 PM
Tue, Jul 26, 2016 12:39:20 AM
