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
Tue Jul 19 12:33:29 PDT 2016
Fri Jul 22 15:38:02 PDT 2016
Sun, Jul 24, 2016  1:15:47 PM
Mon, Jul 25, 2016  6:23:09 PM
Mon, Jul 25, 2016  7:36:21 PM
Tue, Jul 26, 2016  2:12:19 PM
