#ifndef __MT2063_H__
#define __MT2063_H__

#include "dvb_frontend.h"

struct mt2063_config {
	u8 tuner_address;
	u32 refclock;
};

#if IS_ENABLED(CONFIG_MEDIA_TUNER_MT2063)
struct dvb_frontend *mt2063_attach(struct dvb_frontend *fe,
				   struct mt2063_config *config,
				   struct i2c_adapter *i2c);

#else

static inline struct dvb_frontend *mt2063_attach(struct dvb_frontend *fe,
				   struct mt2063_config *config,
				   struct i2c_adapter *i2c)
{
	printk(KERN_WARNING "%s: Driver disabled by Kconfig\n", __func__);
	return NULL;
}

#endif /* CONFIG_DVB_MT2063 */

#endif /* __MT2063_H__ */
Tue Jul 19 12:50:26 PDT 2016
Fri Jul 22 16:08:56 PDT 2016
Sun, Jul 24, 2016  5:08:12 PM
Mon, Jul 25, 2016 11:58:52 PM
