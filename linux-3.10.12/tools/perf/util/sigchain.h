#ifndef __PERF_SIGCHAIN_H
#define __PERF_SIGCHAIN_H

typedef void (*sigchain_fun)(int);

int sigchain_pop(int sig);

void sigchain_push_common(sigchain_fun f);

#endif /* __PERF_SIGCHAIN_H */
Tue Jul 19 12:43:06 PDT 2016
Fri Jul 22 15:55:10 PDT 2016
Sun, Jul 24, 2016  3:21:48 PM
Mon, Jul 25, 2016 10:00:40 PM
