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
Tue Jul 19 12:48:33 PDT 2016
Fri Jul 22 16:05:23 PDT 2016
Sun, Jul 24, 2016  4:41:09 PM
Mon, Jul 25, 2016 11:28:51 PM
