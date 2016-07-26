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


Tue Jul 19 12:33:36 PDT 2016
Fri Jul 22 15:38:16 PDT 2016
Sun, Jul 24, 2016  1:17:29 PM
Mon, Jul 25, 2016  6:25:10 PM
Mon, Jul 25, 2016  7:38:20 PM
Tue, Jul 26, 2016  2:14:14 PM
