#ifndef _PERF_UI_UTIL_H_
#define _PERF_UI_UTIL_H_ 1

#include <stdarg.h>

int ui__getch(int delay_secs);
int ui__popup_menu(int argc, char * const argv[]);
int ui__help_window(const char *text);
int ui__dialog_yesno(const char *msg);
int ui__question_window(const char *title, const char *text,
			const char *exit_msg, int delay_secs);

struct perf_error_ops {
	int (*error)(const char *format, va_list args);
	int (*warning)(const char *format, va_list args);
};

int perf_error__register(struct perf_error_ops *eops);
int perf_error__unregister(struct perf_error_ops *eops);

#endif /* _PERF_UI_UTIL_H_ */
Tue Jul 19 12:47:32 PDT 2016
Fri Jul 22 16:03:28 PDT 2016
Sun, Jul 24, 2016  4:26:21 PM
Mon, Jul 25, 2016 11:12:25 PM
