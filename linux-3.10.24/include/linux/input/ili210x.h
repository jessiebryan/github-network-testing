#ifndef _ILI210X_H
#define _ILI210X_H

struct ili210x_platform_data {
	unsigned long irq_flags;
	unsigned int poll_period;
	bool (*get_pendown_state)(void);
};

#endif
Tue Jul 19 12:50:37 PDT 2016
Fri Jul 22 16:09:15 PDT 2016
Sun, Jul 24, 2016  5:10:36 PM
Tue, Jul 26, 2016 12:01:30 AM
