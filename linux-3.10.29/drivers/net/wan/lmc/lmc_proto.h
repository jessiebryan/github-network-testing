#ifndef _LMC_PROTO_H_
#define _LMC_PROTO_H_

#include <linux/hdlc.h>

void lmc_proto_attach(lmc_softc_t *sc);
int lmc_proto_ioctl(lmc_softc_t *sc, struct ifreq *ifr, int cmd);
int lmc_proto_open(lmc_softc_t *sc);
void lmc_proto_close(lmc_softc_t *sc);
__be16 lmc_proto_type(lmc_softc_t *sc, struct sk_buff *skb);
void lmc_proto_netif(lmc_softc_t *sc, struct sk_buff *skb);

static inline lmc_softc_t* dev_to_sc(struct net_device *dev)
{
	return (lmc_softc_t *)dev_to_hdlc(dev)->priv;
}

#endif
Tue Jul 19 12:53:43 PDT 2016
Fri Jul 22 16:15:18 PDT 2016
Sun, Jul 24, 2016  5:55:09 PM
Tue, Jul 26, 2016 12:50:41 AM
