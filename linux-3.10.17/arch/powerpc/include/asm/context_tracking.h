#ifndef _ASM_POWERPC_CONTEXT_TRACKING_H
#define _ASM_POWERPC_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
#define SCHEDULE_USER bl	.schedule_user
#else
#define SCHEDULE_USER bl	.schedule
#endif

#endif
Tue Jul 19 12:45:49 PDT 2016
Fri Jul 22 16:00:15 PDT 2016
Sun, Jul 24, 2016  4:01:26 PM
Mon, Jul 25, 2016 10:44:45 PM
