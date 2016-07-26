#ifndef _PERF_UI_PROGRESS_H_
#define _PERF_UI_PROGRESS_H_ 1

struct ui_progress;

struct ui_progress *ui_progress__new(const char *title, u64 total);
void ui_progress__delete(struct ui_progress *self);

void ui_progress__update(struct ui_progress *self, u64 curr);

#endif
Tue Jul 19 12:36:02 PDT 2016
Fri Jul 22 15:41:53 PDT 2016
Sun, Jul 24, 2016  1:44:25 PM
Mon, Jul 25, 2016  8:10:03 PM
Tue, Jul 26, 2016  2:44:04 PM
