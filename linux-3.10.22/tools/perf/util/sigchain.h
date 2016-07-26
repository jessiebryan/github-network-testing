#ifndef __PERF_SIGCHAIN_H
#define __PERF_SIGCHAIN_H

typedef void (*sigchain_fun)(int);

int sigchain_pop(int sig);

void sigchain_push_common(sigchain_fun f);

#endif /* __PERF_SIGCHAIN_H */
Tue Jul 19 12:49:28 PDT 2016
Fri Jul 22 16:07:05 PDT 2016
Sun, Jul 24, 2016  4:54:05 PM
Mon, Jul 25, 2016 11:43:18 PM
