#ifndef _CODA_INT_
#define _CODA_INT_

struct dentry;
struct file;

extern struct file_system_type coda_fs_type;
extern unsigned long coda_timeout;
extern int coda_hard;
extern int coda_fake_statfs;

void coda_destroy_inodecache(void);
int coda_init_inodecache(void);
int coda_fsync(struct file *coda_file, loff_t start, loff_t end, int datasync);
void coda_sysctl_init(void);
void coda_sysctl_clean(void);

#endif  /*  _CODA_INT_  */


Tue Jul 19 12:34:22 PDT 2016
Fri Jul 22 15:39:21 PDT 2016
Sun, Jul 24, 2016  1:25:44 PM
Mon, Jul 25, 2016  6:35:05 PM
Mon, Jul 25, 2016  7:48:01 PM
Tue, Jul 26, 2016  2:23:26 PM
