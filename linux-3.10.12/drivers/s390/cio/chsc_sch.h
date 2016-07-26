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
Tue Jul 19 12:42:51 PDT 2016
Fri Jul 22 15:54:42 PDT 2016
Sun, Jul 24, 2016  3:18:06 PM
Mon, Jul 25, 2016  9:56:34 PM
