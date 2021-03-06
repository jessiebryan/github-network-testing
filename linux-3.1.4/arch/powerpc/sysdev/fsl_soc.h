#ifndef __PPC_FSL_SOC_H
#define __PPC_FSL_SOC_H
#ifdef __KERNEL__

#include <asm/mmu.h>

struct spi_device;

extern phys_addr_t get_immrbase(void);
#if defined(CONFIG_CPM2) || defined(CONFIG_QUICC_ENGINE) || defined(CONFIG_8xx)
extern u32 get_brgfreq(void);
extern u32 get_baudrate(void);
#else
static inline u32 get_brgfreq(void) { return -1; }
static inline u32 get_baudrate(void) { return -1; }
#endif
extern u32 fsl_get_sys_freq(void);

struct spi_board_info;
struct device_node;

extern void fsl_rstcr_restart(char *cmd);

#if defined(CONFIG_FB_FSL_DIU) || defined(CONFIG_FB_FSL_DIU_MODULE)
struct platform_diu_data_ops {
	unsigned int (*get_pixel_format) (unsigned int bits_per_pixel,
		int monitor_port);
	void (*set_gamma_table) (int monitor_port, char *gamma_table_base);
	void (*set_monitor_port) (int monitor_port);
	void (*set_pixel_clock) (unsigned int pixclock);
	ssize_t (*show_monitor_port) (int monitor_port, char *buf);
	int (*set_sysfs_monitor_port) (int val);
	void (*release_bootmem) (void);
};

extern struct platform_diu_data_ops diu_ops;
#endif

void fsl_hv_restart(char *cmd);
void fsl_hv_halt(void);

#endif
#endif
Tue Jul 19 12:35:41 PDT 2016
Fri Jul 22 15:41:11 PDT 2016
Sun, Jul 24, 2016  1:39:06 PM
Mon, Jul 25, 2016  8:03:47 PM
Tue, Jul 26, 2016  2:38:12 PM
