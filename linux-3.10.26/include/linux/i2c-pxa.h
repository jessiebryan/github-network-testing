#ifndef _LINUX_I2C_ALGO_PXA_H
#define _LINUX_I2C_ALGO_PXA_H

typedef enum i2c_slave_event_e {
	I2C_SLAVE_EVENT_START_READ,
	I2C_SLAVE_EVENT_START_WRITE,
	I2C_SLAVE_EVENT_STOP
} i2c_slave_event_t;

struct i2c_slave_client {
	void *data;
	void (*event)(void *ptr, i2c_slave_event_t event);
	int  (*read) (void *ptr);
	void (*write)(void *ptr, unsigned int val);
};

#endif /* _LINUX_I2C_ALGO_PXA_H */
Tue Jul 19 12:51:55 PDT 2016
Fri Jul 22 16:11:47 PDT 2016
Sun, Jul 24, 2016  5:29:10 PM
Tue, Jul 26, 2016 12:22:00 AM
