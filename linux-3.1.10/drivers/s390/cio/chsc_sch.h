#ifndef _CHSC_SCH_H
#define _CHSC_SCH_H

struct chsc_request {
	struct completion completion;
	struct irb irb;
};

struct chsc_private {
	struct chsc_request *request;
};

#endif
Tue Jul 19 12:33:32 PDT 2016
Fri Jul 22 15:38:08 PDT 2016
Sun, Jul 24, 2016  1:16:30 PM
Mon, Jul 25, 2016  6:24:00 PM
Mon, Jul 25, 2016  7:37:12 PM
Tue, Jul 26, 2016  2:13:06 PM
