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
Tue Jul 19 12:44:48 PDT 2016
Fri Jul 22 15:58:16 PDT 2016
Sun, Jul 24, 2016  3:45:47 PM
Mon, Jul 25, 2016 10:27:19 PM
