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
Tue Jul 19 12:49:51 PDT 2016
Fri Jul 22 16:07:49 PDT 2016
Sun, Jul 24, 2016  4:59:37 PM
Mon, Jul 25, 2016 11:49:26 PM
