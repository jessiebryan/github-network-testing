#include <linux/amba/serial.h>
extern struct amba_pl010_data ap_uart_data;
void integrator_init_early(void);
int integrator_init(bool is_cp);
void integrator_reserve(void);
void integrator_restart(char, const char *);
void integrator_init_sysfs(struct device *parent, u32 id);
Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:35 PDT 2016
Sun, Jul 24, 2016  5:13:08 PM
