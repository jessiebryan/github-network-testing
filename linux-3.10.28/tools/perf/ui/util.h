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
Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:35 PDT 2016
Sun, Jul 24, 2016  5:49:55 PM
Tue, Jul 26, 2016 12:44:51 AM
