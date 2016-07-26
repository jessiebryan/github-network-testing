#ifndef _PERF_UI_PROGRESS_H_
#define _PERF_UI_PROGRESS_H_ 1

#include <../types.h>

struct ui_progress {
	void (*update)(u64, u64, const char *);
	void (*finish)(void);
};

extern struct ui_progress *progress_fns;

void ui_progress__init(void);

void ui_progress__update(u64 curr, u64 total, const char *title);
void ui_progress__finish(void);

#endif
Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:35 PDT 2016
Sun, Jul 24, 2016  5:49:55 PM
Tue, Jul 26, 2016 12:44:51 AM
