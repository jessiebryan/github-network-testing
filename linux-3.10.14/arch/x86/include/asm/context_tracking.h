#ifndef _ASM_X86_CONTEXT_TRACKING_H
#define _ASM_X86_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
# define SCHEDULE_USER call schedule_user
#else
# define SCHEDULE_USER call schedule
#endif

#endif
Tue Jul 19 12:44:01 PDT 2016
Fri Jul 22 15:56:51 PDT 2016
Sun, Jul 24, 2016  3:34:43 PM
Mon, Jul 25, 2016 10:15:02 PM
