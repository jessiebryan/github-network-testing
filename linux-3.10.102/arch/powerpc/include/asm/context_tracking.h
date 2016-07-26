#ifndef _ASM_POWERPC_CONTEXT_TRACKING_H
#define _ASM_POWERPC_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
#define SCHEDULE_USER bl	.schedule_user
#else
#define SCHEDULE_USER bl	.schedule
#endif

#endif
Tue Jul 19 12:41:11 PDT 2016
Fri Jul 22 15:51:52 PDT 2016
Sun, Jul 24, 2016  2:56:53 PM
Mon, Jul 25, 2016  9:32:39 PM
