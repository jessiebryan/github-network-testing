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
Tue Jul 19 12:40:44 PDT 2016
Fri Jul 22 15:50:58 PDT 2016
Sun, Jul 24, 2016  2:50:28 PM
