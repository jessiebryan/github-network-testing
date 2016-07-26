/* i2c.h */
int i2c_init(void);

/* High level I2C actions */
int i2c_writereg(unsigned char theSlave, unsigned char theReg, unsigned char theValue);
unsigned char i2c_readreg(unsigned char theSlave, unsigned char theReg);

/* Low level I2C */
void i2c_start(void);
void i2c_stop(void);
void i2c_outbyte(unsigned char x);
unsigned char i2c_inbyte(void);
int i2c_getack(void);
void i2c_sendack(void);



Tue Jul 19 12:33:17 PDT 2016
Fri Jul 22 15:37:38 PDT 2016
Sun, Jul 24, 2016  1:12:46 PM
Mon, Jul 25, 2016  6:19:32 PM
Mon, Jul 25, 2016  7:32:48 PM
