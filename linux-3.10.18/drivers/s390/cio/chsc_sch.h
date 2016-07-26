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
Tue Jul 19 12:46:38 PDT 2016
Fri Jul 22 16:01:49 PDT 2016
Sun, Jul 24, 2016  4:13:27 PM
Mon, Jul 25, 2016 10:58:06 PM
