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
Tue Jul 19 12:36:24 PDT 2016
Fri Jul 22 15:42:35 PDT 2016
Sun, Jul 24, 2016  1:49:30 PM
