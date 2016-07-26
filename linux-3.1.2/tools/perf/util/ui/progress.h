#ifndef _PERF_UI_PROGRESS_H_
#define _PERF_UI_PROGRESS_H_ 1

struct ui_progress;

struct ui_progress *ui_progress__new(const char *title, u64 total);
void ui_progress__delete(struct ui_progress *self);

void ui_progress__update(struct ui_progress *self, u64 curr);

#endif
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:38 PDT 2016
Sun, Jul 24, 2016  1:27:55 PM
Mon, Jul 25, 2016  6:37:41 PM
