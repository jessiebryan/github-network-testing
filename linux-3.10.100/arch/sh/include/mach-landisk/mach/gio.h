#ifndef __ASM_SH_LANDISK_GIO_H
#define __ASM_SH_LANDISK_GIO_H

#include <linux/ioctl.h>

/* version */
#define VERSION_STR	"1.00"

/* Driver name */
#define GIO_DRIVER_NAME		"/dev/giodrv"

/* Use 'k' as magic number */
#define GIODRV_IOC_MAGIC  'k'

#define GIODRV_IOCRESET    _IO(GIODRV_IOC_MAGIC, 0)
/*
 * S means "Set" through a ptr,
 * T means "Tell" directly
 * G means "Get" (to a pointed var)
 * Q means "Query", response is on the return value
 * X means "eXchange": G and S atomically
 * H means "sHift": T and Q atomically
 */
#define GIODRV_IOCSGIODATA1   _IOW(GIODRV_IOC_MAGIC,  1, unsigned char *)
#define GIODRV_IOCGGIODATA1   _IOR(GIODRV_IOC_MAGIC,  2, unsigned char *)
#define GIODRV_IOCSGIODATA2   _IOW(GIODRV_IOC_MAGIC,  3, unsigned short *)
#define GIODRV_IOCGGIODATA2   _IOR(GIODRV_IOC_MAGIC,  4, unsigned short *)
#define GIODRV_IOCSGIODATA4   _IOW(GIODRV_IOC_MAGIC,  5, unsigned long *)
#define GIODRV_IOCGGIODATA4   _IOR(GIODRV_IOC_MAGIC,  6, unsigned long *)
#define GIODRV_IOCSGIOSETADDR _IOW(GIODRV_IOC_MAGIC,  7, unsigned long *)
#define GIODRV_IOCHARDRESET   _IO(GIODRV_IOC_MAGIC, 8) /* debugging tool */
#define GIODRV_IOC_MAXNR 8

#define GIO_READ 0x00000000
#define GIO_WRITE 0x00000001

#endif /* __ASM_SH_LANDISK_GIO_H  */
Tue Jul 19 12:39:55 PDT 2016
Fri Jul 22 15:49:24 PDT 2016
Sun, Jul 24, 2016  2:39:00 PM
Mon, Jul 25, 2016  9:12:30 PM
