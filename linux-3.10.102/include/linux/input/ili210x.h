#ifndef _ILI210X_H
#define _ILI210X_H

struct ili210x_platform_data {
	unsigned long irq_flags;
	unsigned int poll_period;
	bool (*get_pendown_state)(void);
};

#endif
Tue Jul 19 12:41:29 PDT 2016
Fri Jul 22 15:52:31 PDT 2016
Sun, Jul 24, 2016  3:01:19 PM
Mon, Jul 25, 2016  9:37:40 PM
