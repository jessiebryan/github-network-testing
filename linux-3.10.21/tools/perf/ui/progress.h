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
Tue Jul 19 12:48:48 PDT 2016
Fri Jul 22 16:05:52 PDT 2016
Sun, Jul 24, 2016  4:44:50 PM
Mon, Jul 25, 2016 11:32:55 PM
