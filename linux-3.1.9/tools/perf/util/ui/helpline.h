#ifndef _PERF_UI_HELPLINE_H_
#define _PERF_UI_HELPLINE_H_ 1

void ui_helpline__init(void);
void ui_helpline__pop(void);
void ui_helpline__push(const char *msg);
void ui_helpline__vpush(const char *fmt, va_list ap);
void ui_helpline__fpush(const char *fmt, ...);
void ui_helpline__puts(const char *msg);

#endif /* _PERF_UI_HELPLINE_H_ */
Tue Jul 19 12:38:25 PDT 2016
Fri Jul 22 15:46:22 PDT 2016
Sun, Jul 24, 2016  2:17:23 PM
Mon, Jul 25, 2016  8:48:24 PM
