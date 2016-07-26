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
Tue Jul 19 12:51:48 PDT 2016
Fri Jul 22 16:11:35 PDT 2016
Sun, Jul 24, 2016  5:27:34 PM
Tue, Jul 26, 2016 12:20:14 AM
