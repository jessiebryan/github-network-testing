#ifndef _ASM_X86_CONTEXT_TRACKING_H
#define _ASM_X86_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
# define SCHEDULE_USER call schedule_user
#else
# define SCHEDULE_USER call schedule
#endif

#endif
Tue Jul 19 12:41:15 PDT 2016
Fri Jul 22 15:52:02 PDT 2016
Sun, Jul 24, 2016  2:57:51 PM
Mon, Jul 25, 2016  9:33:46 PM
