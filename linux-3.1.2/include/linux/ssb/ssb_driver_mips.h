#ifndef LINUX_SSB_MIPSCORE_H_
#define LINUX_SSB_MIPSCORE_H_

#ifdef CONFIG_SSB_DRIVER_MIPS

struct ssb_device;

struct ssb_serial_port {
	void *regs;
	unsigned long clockspeed;
	unsigned int irq;
	unsigned int baud_base;
	unsigned int reg_shift;
};


struct ssb_mipscore {
	struct ssb_device *dev;

	int nr_serial_ports;
	struct ssb_serial_port serial_ports[4];

	u8 flash_buswidth;
	u32 flash_window;
	u32 flash_window_size;
};

extern void ssb_mipscore_init(struct ssb_mipscore *mcore);
extern u32 ssb_cpu_clock(struct ssb_mipscore *mcore);

extern unsigned int ssb_mips_irq(struct ssb_device *dev);


#else /* CONFIG_SSB_DRIVER_MIPS */

struct ssb_mipscore {
};

static inline
void ssb_mipscore_init(struct ssb_mipscore *mcore)
{
}

#endif /* CONFIG_SSB_DRIVER_MIPS */

#endif /* LINUX_SSB_MIPSCORE_H_ */
Tue Jul 19 12:34:27 PDT 2016
Fri Jul 22 15:39:30 PDT 2016
Sun, Jul 24, 2016  1:26:56 PM
Mon, Jul 25, 2016  6:36:30 PM
Mon, Jul 25, 2016  7:49:26 PM
Tue, Jul 26, 2016  2:24:45 PM
