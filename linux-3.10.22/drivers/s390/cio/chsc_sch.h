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
Tue Jul 19 12:49:12 PDT 2016
Fri Jul 22 16:06:36 PDT 2016
Sun, Jul 24, 2016  4:50:22 PM
Mon, Jul 25, 2016 11:39:09 PM
