#ifndef S390_CMB_H
#define S390_CMB_H

#include <uapi/asm/cmb.h>

struct ccw_device;
extern int enable_cmf(struct ccw_device *cdev);
extern int disable_cmf(struct ccw_device *cdev);
extern u64 cmf_read(struct ccw_device *cdev, int index);
extern int cmf_readall(struct ccw_device *cdev, struct cmbdata *data);

#endif /* S390_CMB_H */
Tue Jul 19 12:49:01 PDT 2016
Fri Jul 22 16:06:16 PDT 2016
Sun, Jul 24, 2016  4:47:49 PM
Mon, Jul 25, 2016 11:36:18 PM
