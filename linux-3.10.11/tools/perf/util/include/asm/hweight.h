#ifndef PERF_HWEIGHT_H
#define PERF_HWEIGHT_H

#include <linux/types.h>
unsigned int hweight32(unsigned int w);
unsigned long hweight64(__u64 w);

#endif /* PERF_HWEIGHT_H */
Tue Jul 19 12:42:27 PDT 2016
