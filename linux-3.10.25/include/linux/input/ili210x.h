#ifndef _ILI210X_H
#define _ILI210X_H

struct ili210x_platform_data {
	unsigned long irq_flags;
	unsigned int poll_period;
	bool (*get_pendown_state)(void);
};

#endif
Tue Jul 19 12:51:16 PDT 2016
Fri Jul 22 16:10:30 PDT 2016
Sun, Jul 24, 2016  5:19:55 PM
