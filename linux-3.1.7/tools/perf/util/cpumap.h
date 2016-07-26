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
Tue Jul 19 12:37:10 PDT 2016
Fri Jul 22 15:44:07 PDT 2016
Sun, Jul 24, 2016  2:00:52 PM
Mon, Jul 25, 2016  8:29:30 PM
