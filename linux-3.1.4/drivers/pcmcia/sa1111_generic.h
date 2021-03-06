#include "soc_common.h"
#include "sa11xx_base.h"

struct sa1111_pcmcia_socket {
	struct soc_pcmcia_socket soc;
	struct sa1111_dev *dev;
	struct sa1111_pcmcia_socket *next;
};

static inline struct sa1111_pcmcia_socket *to_skt(struct soc_pcmcia_socket *s)
{
	return container_of(s, struct sa1111_pcmcia_socket, soc);
}

int sa1111_pcmcia_add(struct sa1111_dev *dev, struct pcmcia_low_level *ops,
	int (*add)(struct soc_pcmcia_socket *));

extern void sa1111_pcmcia_socket_state(struct soc_pcmcia_socket *, struct pcmcia_state *);
extern int sa1111_pcmcia_configure_socket(struct soc_pcmcia_socket *, const socket_state_t *);
extern void sa1111_pcmcia_socket_init(struct soc_pcmcia_socket *);

extern int pcmcia_badge4_init(struct device *);
extern int pcmcia_jornada720_init(struct device *);
extern int pcmcia_lubbock_init(struct sa1111_dev *);
extern int pcmcia_neponset_init(struct sa1111_dev *);

Tue Jul 19 12:35:50 PDT 2016
Fri Jul 22 15:41:29 PDT 2016
Sun, Jul 24, 2016  1:41:14 PM
Mon, Jul 25, 2016  8:06:18 PM
Tue, Jul 26, 2016  2:40:35 PM
