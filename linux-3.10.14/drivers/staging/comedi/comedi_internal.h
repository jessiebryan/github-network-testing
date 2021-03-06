#ifndef _COMEDI_INTERNAL_H
#define _COMEDI_INTERNAL_H

#include <linux/types.h>

/*
 * various internal comedi stuff
 */
int do_rangeinfo_ioctl(struct comedi_device *dev,
		       struct comedi_rangeinfo __user *arg);
struct comedi_device *comedi_alloc_board_minor(struct device *hardware_device);
void comedi_release_hardware_device(struct device *hardware_device);
int comedi_alloc_subdevice_minor(struct comedi_subdevice *s);
void comedi_free_subdevice_minor(struct comedi_subdevice *s);

int comedi_buf_alloc(struct comedi_device *dev, struct comedi_subdevice *s,
		     unsigned long new_size);
void comedi_buf_reset(struct comedi_async *async);
unsigned int comedi_buf_write_n_allocated(struct comedi_async *async);

extern unsigned int comedi_default_buf_size_kb;
extern unsigned int comedi_default_buf_maxsize_kb;

/* drivers.c */

extern struct comedi_driver *comedi_drivers;

int insn_inval(struct comedi_device *, struct comedi_subdevice *,
	       struct comedi_insn *, unsigned int *);

void comedi_device_detach(struct comedi_device *);
int comedi_device_attach(struct comedi_device *, struct comedi_devconfig *);

#ifdef CONFIG_PROC_FS

/* proc.c */

void comedi_proc_init(void);
void comedi_proc_cleanup(void);
#else
static inline void comedi_proc_init(void)
{
}
static inline void comedi_proc_cleanup(void)
{
}
#endif

#endif /* _COMEDI_INTERNAL_H */
Tue Jul 19 12:44:09 PDT 2016
Fri Jul 22 15:57:07 PDT 2016
Sun, Jul 24, 2016  3:36:47 PM
Mon, Jul 25, 2016 10:17:21 PM
