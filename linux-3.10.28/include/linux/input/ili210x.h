#ifndef _ILI210X_H
#define _ILI210X_H

struct ili210x_platform_data {
	unsigned long irq_flags;
	unsigned int poll_period;
	bool (*get_pendown_state)(void);
};

#endif
Tue Jul 19 12:53:12 PDT 2016
Fri Jul 22 16:14:19 PDT 2016
Sun, Jul 24, 2016  5:47:52 PM
Tue, Jul 26, 2016 12:42:35 AM
