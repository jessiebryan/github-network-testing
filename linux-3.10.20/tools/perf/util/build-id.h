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
Tue Jul 19 12:48:10 PDT 2016
Fri Jul 22 16:04:39 PDT 2016
Sun, Jul 24, 2016  4:35:35 PM
Mon, Jul 25, 2016 11:22:41 PM
