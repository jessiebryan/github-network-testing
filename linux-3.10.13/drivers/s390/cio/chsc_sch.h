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
Tue Jul 19 12:43:29 PDT 2016
Fri Jul 22 15:55:53 PDT 2016
Sun, Jul 24, 2016  3:27:20 PM
Mon, Jul 25, 2016 10:06:48 PM
