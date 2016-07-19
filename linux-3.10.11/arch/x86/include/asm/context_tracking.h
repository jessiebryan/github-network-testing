#ifndef _ASM_X86_CONTEXT_TRACKING_H
#define _ASM_X86_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
# define SCHEDULE_USER call schedule_user
#else
# define SCHEDULE_USER call schedule
#endif

#endif
Tue Jul 19 12:41:59 PDT 2016
