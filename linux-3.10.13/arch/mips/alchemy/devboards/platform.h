#ifndef _DEVBOARD_PLATFORM_H_
#define _DEVBOARD_PLATFORM_H_

#include <linux/init.h>

int __init db1x_register_pcmcia_socket(phys_addr_t pcmcia_attr_start,
				       phys_addr_t pcmcia_attr_len,
				       phys_addr_t pcmcia_mem_start,
				       phys_addr_t pcmcia_mem_end,
				       phys_addr_t pcmcia_io_start,
				       phys_addr_t pcmcia_io_end,
				       int card_irq,
				       int cd_irq,
				       int stschg_irq,
				       int eject_irq,
				       int id);

int __init db1x_register_norflash(unsigned long size, int width,
				  int swapped);

#endif
Tue Jul 19 12:43:15 PDT 2016
Fri Jul 22 15:55:26 PDT 2016
Sun, Jul 24, 2016  3:23:52 PM
Mon, Jul 25, 2016 10:02:57 PM
