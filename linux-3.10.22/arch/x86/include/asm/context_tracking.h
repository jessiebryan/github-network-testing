#ifndef _ASM_X86_CONTEXT_TRACKING_H
#define _ASM_X86_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
# define SCHEDULE_USER call schedule_user
#else
# define SCHEDULE_USER call schedule
#endif

#endif
Tue Jul 19 12:49:04 PDT 2016
Fri Jul 22 16:06:22 PDT 2016
Sun, Jul 24, 2016  4:48:33 PM
Mon, Jul 25, 2016 11:37:07 PM
