#ifndef ARCH_PERF_COMMON_H
#define ARCH_PERF_COMMON_H

#include "../util/session.h"

extern const char *objdump_path;

int perf_session_env__lookup_objdump(struct perf_session_env *env);

#endif /* ARCH_PERF_COMMON_H */
Tue Jul 19 12:47:32 PDT 2016
Fri Jul 22 16:03:28 PDT 2016
