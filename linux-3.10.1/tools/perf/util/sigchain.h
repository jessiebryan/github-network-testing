#ifndef __PERF_SIGCHAIN_H
#define __PERF_SIGCHAIN_H

typedef void (*sigchain_fun)(int);

int sigchain_pop(int sig);

void sigchain_push_common(sigchain_fun f);

#endif /* __PERF_SIGCHAIN_H */
Tue Jul 19 12:39:04 PDT 2016
Fri Jul 22 15:47:39 PDT 2016
Sun, Jul 24, 2016  2:26:33 PM
Mon, Jul 25, 2016  8:58:38 PM
