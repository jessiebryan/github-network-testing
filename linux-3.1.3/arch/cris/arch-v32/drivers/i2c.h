
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
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:50 PDT 2016
Sun, Jul 24, 2016  1:29:16 PM
Mon, Jul 25, 2016  6:39:18 PM
Mon, Jul 25, 2016  7:52:10 PM
Tue, Jul 26, 2016  2:27:20 PM
