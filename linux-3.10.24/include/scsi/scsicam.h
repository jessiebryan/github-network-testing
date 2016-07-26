/*
 * scsicam.h - SCSI CAM support functions, use for HDIO_GETGEO, etc.
 *
 * Copyright 1993, 1994 Drew Eckhardt
 *      Visionary Computing 
 *      (Unix and Linux consulting and custom programming)
 *      drew@Colorado.EDU
 *	+1 (303) 786-7975
 *
 * For more information, please consult the SCSI-CAM draft.
 */

#ifndef SCSICAM_H
#define SCSICAM_H
extern int scsicam_bios_param (struct block_device *bdev, sector_t capacity, int *ip);
extern int scsi_partsize(unsigned char *buf, unsigned long capacity,
           unsigned int  *cyls, unsigned int *hds, unsigned int *secs);
extern unsigned char *scsi_bios_ptable(struct block_device *bdev);
#endif /* def SCSICAM_H */
Tue Jul 19 12:50:41 PDT 2016
Fri Jul 22 16:09:23 PDT 2016
Sun, Jul 24, 2016  5:11:39 PM
Tue, Jul 26, 2016 12:02:39 AM
