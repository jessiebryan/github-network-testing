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
Tue Jul 19 12:37:11 PDT 2016
Fri Jul 22 15:44:08 PDT 2016
