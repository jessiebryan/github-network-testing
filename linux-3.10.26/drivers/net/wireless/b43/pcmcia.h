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
Tue Jul 19 12:51:47 PDT 2016
Fri Jul 22 16:11:32 PDT 2016
Sun, Jul 24, 2016  5:27:16 PM
Tue, Jul 26, 2016 12:19:54 AM
