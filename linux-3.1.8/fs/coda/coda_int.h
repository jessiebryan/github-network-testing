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


Tue Jul 19 12:37:38 PDT 2016
Fri Jul 22 15:44:58 PDT 2016
Sun, Jul 24, 2016  2:06:58 PM
Mon, Jul 25, 2016  8:36:49 PM
