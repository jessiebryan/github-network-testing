#ifndef B43_PCMCIA_H_
#define B43_PCMCIA_H_

#ifdef CONFIG_B43_PCMCIA

int b43_pcmcia_init(void);
void b43_pcmcia_exit(void);

#else /* CONFIG_B43_PCMCIA */

static inline int b43_pcmcia_init(void)
{
	return 0;
}
static inline void b43_pcmcia_exit(void)
{
}

#endif /* CONFIG_B43_PCMCIA */
#endif /* B43_PCMCIA_H_ */
Tue Jul 19 12:35:14 PDT 2016
Fri Jul 22 15:40:19 PDT 2016
Sun, Jul 24, 2016  1:32:48 PM
Mon, Jul 25, 2016  7:56:20 PM
Tue, Jul 26, 2016  2:31:15 PM
