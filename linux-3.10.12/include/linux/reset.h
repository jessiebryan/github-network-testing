#ifndef _LINUX_RESET_H_
#define _LINUX_RESET_H_

struct device;
struct reset_control;

int reset_control_reset(struct reset_control *rstc);
int reset_control_assert(struct reset_control *rstc);
int reset_control_deassert(struct reset_control *rstc);

struct reset_control *reset_control_get(struct device *dev, const char *id);
void reset_control_put(struct reset_control *rstc);
struct reset_control *devm_reset_control_get(struct device *dev, const char *id);

int device_reset(struct device *dev);

#endif
Tue Jul 19 12:43:00 PDT 2016
Fri Jul 22 15:54:58 PDT 2016
Sun, Jul 24, 2016  3:20:15 PM
Mon, Jul 25, 2016  9:58:57 PM
