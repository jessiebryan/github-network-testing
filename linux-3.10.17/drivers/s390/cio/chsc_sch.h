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
Tue Jul 19 12:46:00 PDT 2016
Fri Jul 22 16:00:36 PDT 2016
Sun, Jul 24, 2016  4:04:14 PM
Mon, Jul 25, 2016 10:47:51 PM
