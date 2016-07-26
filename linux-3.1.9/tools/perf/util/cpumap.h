#ifndef __PERF_CPUMAP_H
#define __PERF_CPUMAP_H

struct cpu_map {
	int nr;
	int map[];
};

struct cpu_map *cpu_map__new(const char *cpu_list);
struct cpu_map *cpu_map__dummy_new(void);
void cpu_map__delete(struct cpu_map *map);

#endif /* __PERF_CPUMAP_H */
Tue Jul 19 12:38:25 PDT 2016
Fri Jul 22 15:46:22 PDT 2016
Sun, Jul 24, 2016  2:17:21 PM
Mon, Jul 25, 2016  8:48:21 PM
