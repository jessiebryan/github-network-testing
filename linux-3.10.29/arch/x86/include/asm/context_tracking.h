#ifndef _ASM_X86_CONTEXT_TRACKING_H
#define _ASM_X86_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
# define SCHEDULE_USER call schedule_user
#else
# define SCHEDULE_USER call schedule
#endif

#endif
Tue Jul 19 12:53:36 PDT 2016
Fri Jul 22 16:15:06 PDT 2016
Sun, Jul 24, 2016  5:53:40 PM
Tue, Jul 26, 2016 12:49:03 AM
