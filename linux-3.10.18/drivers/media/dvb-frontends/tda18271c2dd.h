#ifndef _TDA18271C2DD_H_
#define _TDA18271C2DD_H_

#include <linux/kconfig.h>

#if IS_ENABLED(CONFIG_DVB_TDA18271C2DD)
struct dvb_frontend *tda18271c2dd_attach(struct dvb_frontend *fe,
					 struct i2c_adapter *i2c, u8 adr);
#else
static inline struct dvb_frontend *tda18271c2dd_attach(struct dvb_frontend *fe,
					 struct i2c_adapter *i2c, u8 adr)
{
        printk(KERN_WARNING "%s: driver disabled by Kconfig\n", __func__);
        return NULL;
}
#endif

#endif
Tue Jul 19 12:46:34 PDT 2016
Fri Jul 22 16:01:42 PDT 2016
Sun, Jul 24, 2016  4:12:32 PM
Mon, Jul 25, 2016 10:57:05 PM
