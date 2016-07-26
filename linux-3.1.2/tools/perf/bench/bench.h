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
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:37 PDT 2016
Sun, Jul 24, 2016  1:27:52 PM
Mon, Jul 25, 2016  6:37:38 PM
Mon, Jul 25, 2016  7:50:31 PM
Tue, Jul 26, 2016  2:25:47 PM
