#ifndef _ALPHA_RTC_H
#define _ALPHA_RTC_H

#if defined(CONFIG_ALPHA_GENERIC)
# define get_rtc_time		alpha_mv.rtc_get_time
# define set_rtc_time		alpha_mv.rtc_set_time
#else
# if defined(CONFIG_ALPHA_MARVEL) && defined(CONFIG_SMP)
#  define get_rtc_time		marvel_get_rtc_time
#  define set_rtc_time		marvel_set_rtc_time
# endif
#endif

#include <asm-generic/rtc.h>

#endif
Tue Jul 19 12:36:03 PDT 2016
Fri Jul 22 15:41:54 PDT 2016
Sun, Jul 24, 2016  1:44:29 PM
Mon, Jul 25, 2016  8:10:08 PM
Tue, Jul 26, 2016  2:44:09 PM
