#ifndef _ASM_POWERPC_CONTEXT_TRACKING_H
#define _ASM_POWERPC_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
#define SCHEDULE_USER bl	.schedule_user
#else
#define SCHEDULE_USER bl	.schedule
#endif

#endif
Tue Jul 19 12:51:36 PDT 2016
Fri Jul 22 16:11:10 PDT 2016
Sun, Jul 24, 2016  5:24:45 PM
Tue, Jul 26, 2016 12:17:07 AM
