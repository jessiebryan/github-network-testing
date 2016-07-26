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
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:46 PDT 2016
Sun, Jul 24, 2016  1:36:07 PM
Mon, Jul 25, 2016  8:00:16 PM
