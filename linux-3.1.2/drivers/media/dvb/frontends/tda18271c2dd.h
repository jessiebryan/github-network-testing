#ifndef _TDA18271C2DD_H_
#define _TDA18271C2DD_H_
#if defined(CONFIG_DVB_TDA18271C2DD) || (defined(CONFIG_DVB_TDA18271C2DD_MODULE) \
        && defined(MODULE))
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
Tue Jul 19 12:34:06 PDT 2016
Fri Jul 22 15:39:07 PDT 2016
Sun, Jul 24, 2016  1:24:03 PM
Mon, Jul 25, 2016  6:33:03 PM
