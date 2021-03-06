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
Tue Jul 19 12:34:55 PDT 2016
Fri Jul 22 15:39:56 PDT 2016
Sun, Jul 24, 2016  1:30:00 PM
Mon, Jul 25, 2016  6:40:10 PM
Mon, Jul 25, 2016  7:53:02 PM
Tue, Jul 26, 2016  2:28:10 PM
