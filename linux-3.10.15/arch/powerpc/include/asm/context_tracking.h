#ifndef _ASM_POWERPC_CONTEXT_TRACKING_H
#define _ASM_POWERPC_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
#define SCHEDULE_USER bl	.schedule_user
#else
#define SCHEDULE_USER bl	.schedule
#endif

#endif
Tue Jul 19 12:44:35 PDT 2016
Fri Jul 22 15:57:54 PDT 2016
Sun, Jul 24, 2016  3:43:00 PM
Mon, Jul 25, 2016 10:24:13 PM
