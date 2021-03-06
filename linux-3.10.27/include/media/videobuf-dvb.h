#include <dvbdev.h>
#include <dmxdev.h>
#include <dvb_demux.h>
#include <dvb_net.h>
#include <dvb_frontend.h>

#ifndef _VIDEOBUF_DVB_H_
#define	_VIDEOBUF_DVB_H_

struct videobuf_dvb {
	/* filling that the job of the driver */
	char                       *name;
	struct dvb_frontend        *frontend;
	struct videobuf_queue      dvbq;

	/* video-buf-dvb state info */
	struct mutex               lock;
	struct task_struct         *thread;
	int                        nfeeds;

	/* videobuf_dvb_(un)register manges this */
	struct dvb_demux           demux;
	struct dmxdev              dmxdev;
	struct dmx_frontend        fe_hw;
	struct dmx_frontend        fe_mem;
	struct dvb_net             net;
};

struct videobuf_dvb_frontend {
	struct list_head felist;
	int id;
	struct videobuf_dvb dvb;
};

struct videobuf_dvb_frontends {
	struct list_head felist;
	struct mutex lock;
	struct dvb_adapter adapter;
	int active_fe_id; /* Indicates which frontend in the felist is in use */
	int gate; /* Frontend with gate control 0=!MFE,1=fe0,2=fe1 etc */
};

int videobuf_dvb_register_bus(struct videobuf_dvb_frontends *f,
			  struct module *module,
			  void *adapter_priv,
			  struct device *device,
			  short *adapter_nr,
			  int mfe_shared);

void videobuf_dvb_unregister_bus(struct videobuf_dvb_frontends *f);

struct videobuf_dvb_frontend * videobuf_dvb_alloc_frontend(struct videobuf_dvb_frontends *f, int id);
void videobuf_dvb_dealloc_frontends(struct videobuf_dvb_frontends *f);

struct videobuf_dvb_frontend * videobuf_dvb_get_frontend(struct videobuf_dvb_frontends *f, int id);
int videobuf_dvb_find_frontend(struct videobuf_dvb_frontends *f, struct dvb_frontend *p);

#endif			/* _VIDEOBUF_DVB_H_ */

/*
 * Local variables:
 * c-basic-offset: 8
 * End:
 */
Tue Jul 19 12:52:37 PDT 2016
Fri Jul 22 16:13:09 PDT 2016
Sun, Jul 24, 2016  5:39:23 PM
Tue, Jul 26, 2016 12:33:16 AM
