#ifndef __PERF_SIGCHAIN_H
#define __PERF_SIGCHAIN_H

typedef void (*sigchain_fun)(int);

int sigchain_pop(int sig);

void sigchain_push_common(sigchain_fun f);

#endif /* __PERF_SIGCHAIN_H */
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:33 PDT 2016
Sun, Jul 24, 2016  1:19:38 PM
Mon, Jul 25, 2016  6:27:46 PM
Mon, Jul 25, 2016  7:40:53 PM
Tue, Jul 26, 2016  2:16:38 PM
