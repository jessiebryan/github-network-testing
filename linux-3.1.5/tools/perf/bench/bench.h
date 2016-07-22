#ifndef BENCH_H
#define BENCH_H

extern int bench_sched_messaging(int argc, const char **argv, const char *prefix);
extern int bench_sched_pipe(int argc, const char **argv, const char *prefix);
extern int bench_mem_memcpy(int argc, const char **argv, const char *prefix __used);

#define BENCH_FORMAT_DEFAULT_STR	"default"
#define BENCH_FORMAT_DEFAULT		0
#define BENCH_FORMAT_SIMPLE_STR		"simple"
#define BENCH_FORMAT_SIMPLE		1

#define BENCH_FORMAT_UNKNOWN		-1

extern int bench_format;

#endif
Tue Jul 19 12:36:36 PDT 2016
Fri Jul 22 15:43:01 PDT 2016
