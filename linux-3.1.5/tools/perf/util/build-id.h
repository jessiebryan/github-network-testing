#ifndef PERF_BUILD_ID_H_
#define PERF_BUILD_ID_H_ 1

#include "session.h"

extern struct perf_event_ops build_id__mark_dso_hit_ops;

char *dso__build_id_filename(struct dso *self, char *bf, size_t size);

#endif
Tue Jul 19 12:36:36 PDT 2016
Fri Jul 22 15:43:01 PDT 2016
Sun, Jul 24, 2016  1:52:37 PM
Mon, Jul 25, 2016  8:19:43 PM
