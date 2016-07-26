#ifndef __PERF_THREAD_MAP_H
#define __PERF_THREAD_MAP_H

#include <sys/types.h>

struct thread_map {
	int nr;
	int map[];
};

struct thread_map *thread_map__new_by_pid(pid_t pid);
struct thread_map *thread_map__new_by_tid(pid_t tid);
struct thread_map *thread_map__new(pid_t pid, pid_t tid);
void thread_map__delete(struct thread_map *threads);
#endif	/* __PERF_THREAD_MAP_H */
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:33 PDT 2016
Sun, Jul 24, 2016  1:19:39 PM
Mon, Jul 25, 2016  6:27:46 PM
Mon, Jul 25, 2016  7:40:53 PM
