#ifndef _ASM_X86_CONTEXT_TRACKING_H
#define _ASM_X86_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
# define SCHEDULE_USER call schedule_user
#else
# define SCHEDULE_USER call schedule
#endif

#endif
Tue Jul 19 12:47:48 PDT 2016
Fri Jul 22 16:03:57 PDT 2016
Sun, Jul 24, 2016  4:30:05 PM
Mon, Jul 25, 2016 11:16:33 PM
