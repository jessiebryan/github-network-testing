#ifndef _ASM_X86_CONTEXT_TRACKING_H
#define _ASM_X86_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
# define SCHEDULE_USER call schedule_user
#else
# define SCHEDULE_USER call schedule
#endif

#endif
Tue Jul 19 12:49:43 PDT 2016
Fri Jul 22 16:07:34 PDT 2016
Sun, Jul 24, 2016  4:57:47 PM
Mon, Jul 25, 2016 11:47:24 PM
