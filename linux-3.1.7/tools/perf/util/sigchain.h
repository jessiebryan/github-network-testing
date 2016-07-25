#ifndef __PERF_SIGCHAIN_H
#define __PERF_SIGCHAIN_H

typedef void (*sigchain_fun)(int);

int sigchain_pop(int sig);

void sigchain_push_common(sigchain_fun f);

#endif /* __PERF_SIGCHAIN_H */
Tue Jul 19 12:37:11 PDT 2016
Fri Jul 22 15:44:08 PDT 2016
Sun, Jul 24, 2016  2:00:53 PM
