#include <linux/amba/serial.h>
extern struct amba_pl010_data ap_uart_data;
void integrator_init_early(void);
int integrator_init(bool is_cp);
void integrator_reserve(void);
void integrator_restart(char, const char *);
void integrator_init_sysfs(struct device *parent, u32 id);
Tue Jul 19 12:38:27 PDT 2016
Fri Jul 22 15:46:26 PDT 2016
Sun, Jul 24, 2016  2:17:47 PM
Mon, Jul 25, 2016  8:48:51 PM
