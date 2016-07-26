#ifndef _ALPHA_RTC_H
#define _ALPHA_RTC_H

#if defined(CONFIG_ALPHA_MARVEL) && defined(CONFIG_SMP) \
 || defined(CONFIG_ALPHA_GENERIC)
# define get_rtc_time		alpha_mv.rtc_get_time
# define set_rtc_time		alpha_mv.rtc_set_time
#endif

#include <asm-generic/rtc.h>

#endif
Tue Jul 19 12:38:26 PDT 2016
Fri Jul 22 15:46:23 PDT 2016
Sun, Jul 24, 2016  2:17:26 PM
Mon, Jul 25, 2016  8:48:28 PM
