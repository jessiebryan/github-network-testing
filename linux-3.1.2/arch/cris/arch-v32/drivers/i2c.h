
#include <linux/init.h>

/* High level I2C actions */
int __init i2c_init(void);
int i2c_write(unsigned char theSlave, void *data, size_t nbytes);
int i2c_read(unsigned char theSlave, void *data, size_t nbytes);
int i2c_writereg(unsigned char theSlave, unsigned char theReg, unsigned char theValue);
unsigned char i2c_readreg(unsigned char theSlave, unsigned char theReg);

/* Low level I2C */
void i2c_start(void);
void i2c_stop(void);
void i2c_outbyte(unsigned char x);
unsigned char i2c_inbyte(void);
int i2c_getack(void);
void i2c_sendack(void);
Tue Jul 19 12:33:54 PDT 2016
Fri Jul 22 15:38:44 PDT 2016
Sun, Jul 24, 2016  1:21:01 PM
Mon, Jul 25, 2016  6:29:24 PM
Mon, Jul 25, 2016  7:42:29 PM
Tue, Jul 26, 2016  2:18:12 PM
