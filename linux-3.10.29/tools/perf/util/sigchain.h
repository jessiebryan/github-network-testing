#ifndef __PERF_SIGCHAIN_H
#define __PERF_SIGCHAIN_H

typedef void (*sigchain_fun)(int);

int sigchain_pop(int sig);

void sigchain_push_common(sigchain_fun f);

#endif /* __PERF_SIGCHAIN_H */
Tue Jul 19 12:54:00 PDT 2016
Fri Jul 22 16:15:51 PDT 2016
Sun, Jul 24, 2016  5:59:16 PM
Tue, Jul 26, 2016 12:55:12 AM
