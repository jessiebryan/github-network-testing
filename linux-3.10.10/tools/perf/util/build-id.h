#ifndef PERF_BUILD_ID_H_
#define PERF_BUILD_ID_H_ 1

#define BUILD_ID_SIZE 20

#include "tool.h"
#include "types.h"

extern struct perf_tool build_id__mark_dso_hit_ops;
struct dso;

int build_id__sprintf(const u8 *build_id, int len, char *bf);
char *dso__build_id_filename(struct dso *self, char *bf, size_t size);

int build_id__mark_dso_hit(struct perf_tool *tool, union perf_event *event,
			   struct perf_sample *sample, struct perf_evsel *evsel,
			   struct machine *machine);

#endif
Tue Jul 19 12:39:42 PDT 2016
Fri Jul 22 15:48:57 PDT 2016
Sun, Jul 24, 2016  2:35:43 PM
Mon, Jul 25, 2016  9:08:50 PM
