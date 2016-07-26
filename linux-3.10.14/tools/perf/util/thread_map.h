#ifndef __PERF_THREAD_MAP_H
#define __PERF_THREAD_MAP_H

#include <sys/types.h>
#include <stdio.h>

struct thread_map {
	int nr;
	pid_t map[];
};

struct thread_map *thread_map__new_by_pid(pid_t pid);
struct thread_map *thread_map__new_by_tid(pid_t tid);
struct thread_map *thread_map__new_by_uid(uid_t uid);
struct thread_map *thread_map__new(pid_t pid, pid_t tid, uid_t uid);

struct thread_map *thread_map__new_str(const char *pid,
		const char *tid, uid_t uid);

void thread_map__delete(struct thread_map *threads);

size_t thread_map__fprintf(struct thread_map *threads, FILE *fp);

static inline int thread_map__nr(struct thread_map *threads)
{
	return threads ? threads->nr : 1;
}

#endif	/* __PERF_THREAD_MAP_H */
Tue Jul 19 12:44:24 PDT 2016
Fri Jul 22 15:57:33 PDT 2016
Sun, Jul 24, 2016  3:40:18 PM
Mon, Jul 25, 2016 10:21:12 PM
