#ifndef _ASM_POWERPC_CONTEXT_TRACKING_H
#define _ASM_POWERPC_CONTEXT_TRACKING_H

#ifdef CONFIG_CONTEXT_TRACKING
#define SCHEDULE_USER bl	.schedule_user
#else
#define SCHEDULE_USER bl	.schedule
#endif

#endif
Tue Jul 19 12:50:57 PDT 2016
Fri Jul 22 16:09:54 PDT 2016
Sun, Jul 24, 2016  5:15:26 PM
Tue, Jul 26, 2016 12:06:53 AM
