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
Tue Jul 19 12:52:27 PDT 2016
Fri Jul 22 16:12:50 PDT 2016
Sun, Jul 24, 2016  5:36:53 PM
