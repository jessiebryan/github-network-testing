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
Tue Jul 19 12:49:49 PDT 2016
Fri Jul 22 16:07:46 PDT 2016
Sun, Jul 24, 2016  4:59:19 PM
Mon, Jul 25, 2016 11:49:07 PM
