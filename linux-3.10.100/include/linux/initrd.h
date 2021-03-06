
#define INITRD_MINOR 250 /* shouldn't collide with /dev/ram* too soon ... */

/* 1 = load ramdisk, 0 = don't load */
extern int rd_doload;

/* 1 = prompt for ramdisk, 0 = don't prompt */
extern int rd_prompt;

/* starting block # of image */
extern int rd_image_start;

/* 1 if it is not an error if initrd_start < memory_start */
extern int initrd_below_start_ok;

/* free_initrd_mem always gets called with the next two as arguments.. */
extern unsigned long initrd_start, initrd_end;
extern void free_initrd_mem(unsigned long, unsigned long);

extern unsigned int real_root_dev;
Tue Jul 19 12:40:12 PDT 2016
Fri Jul 22 15:49:56 PDT 2016
Sun, Jul 24, 2016  2:42:53 PM
Mon, Jul 25, 2016  9:16:48 PM
