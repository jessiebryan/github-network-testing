#include <linux/amba/serial.h>
extern struct amba_pl010_data ap_uart_data;
void integrator_init_early(void);
int integrator_init(bool is_cp);
void integrator_reserve(void);
void integrator_restart(char, const char *);
void integrator_init_sysfs(struct device *parent, u32 id);
Tue Jul 19 12:41:01 PDT 2016
Fri Jul 22 15:51:32 PDT 2016
Sun, Jul 24, 2016  2:54:36 PM
Mon, Jul 25, 2016  9:30:04 PM
