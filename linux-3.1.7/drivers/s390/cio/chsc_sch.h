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
Tue Jul 19 12:36:57 PDT 2016
Fri Jul 22 15:43:42 PDT 2016
Sun, Jul 24, 2016  1:57:45 PM
Mon, Jul 25, 2016  8:25:48 PM
