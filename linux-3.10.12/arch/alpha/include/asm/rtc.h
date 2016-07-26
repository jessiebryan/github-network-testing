#ifndef _ALPHA_RTC_H
#define _ALPHA_RTC_H

#if defined(CONFIG_ALPHA_MARVEL) && defined(CONFIG_SMP) \
 || defined(CONFIG_ALPHA_GENERIC)
# define get_rtc_time		alpha_mv.rtc_get_time
# define set_rtc_time		alpha_mv.rtc_set_time
#endif

#include <asm-generic/rtc.h>

#endif
Tue Jul 19 12:42:28 PDT 2016
Fri Jul 22 15:54:00 PDT 2016
Sun, Jul 24, 2016  3:12:41 PM
Mon, Jul 25, 2016  9:50:29 PM
