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
Tue Jul 19 12:34:10 PDT 2016
Fri Jul 22 15:39:13 PDT 2016
Sun, Jul 24, 2016  1:24:46 PM
Mon, Jul 25, 2016  6:33:54 PM
Mon, Jul 25, 2016  7:46:53 PM
Tue, Jul 26, 2016  2:22:22 PM
