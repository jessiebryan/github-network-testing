#ifndef S390_CMB_H
#define S390_CMB_H

#include <uapi/asm/cmb.h>

struct ccw_device;
extern int enable_cmf(struct ccw_device *cdev);
extern int disable_cmf(struct ccw_device *cdev);
extern u64 cmf_read(struct ccw_device *cdev, int index);
extern int cmf_readall(struct ccw_device *cdev, struct cmbdata *data);

#endif /* S390_CMB_H */
Tue Jul 19 12:38:37 PDT 2016
Fri Jul 22 15:46:48 PDT 2016
Sun, Jul 24, 2016  2:20:18 PM
Mon, Jul 25, 2016  8:51:40 PM
