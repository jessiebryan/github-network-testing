#ifndef _ASM_POWERPC_CONTEXT_TRACKING_H
#define _ASM_POWERPC_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
#define SCHEDULE_USER bl	.schedule_user
#else
#define SCHEDULE_USER bl	.schedule
#endif

#endif
Tue Jul 19 12:47:06 PDT 2016
Fri Jul 22 16:02:38 PDT 2016
Sun, Jul 24, 2016  4:19:51 PM
Mon, Jul 25, 2016 11:05:14 PM
