#ifndef __PERF_SIGCHAIN_H
#define __PERF_SIGCHAIN_H

typedef void (*sigchain_fun)(int);

int sigchain_pop(int sig);

void sigchain_push_common(sigchain_fun f);

#endif /* __PERF_SIGCHAIN_H */
Tue Jul 19 12:50:45 PDT 2016
Fri Jul 22 16:09:31 PDT 2016
Sun, Jul 24, 2016  5:12:42 PM
Tue, Jul 26, 2016 12:03:48 AM
