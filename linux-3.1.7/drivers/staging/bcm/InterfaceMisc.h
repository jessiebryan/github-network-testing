#ifndef __INTERFACE_MISC_H
#define __INTERFACE_MISC_H

INT
InterfaceRDM(PS_INTERFACE_ADAPTER psIntfAdapter,
			UINT addr,
			PVOID buff,
			INT len);

INT
InterfaceWRM(PS_INTERFACE_ADAPTER psIntfAdapter,
			UINT addr,
			PVOID buff,
			INT len);


int InterfaceFileDownload( PVOID psIntfAdapter,
                        struct file *flp,
                        unsigned int on_chip_loc);

int InterfaceFileReadbackFromChip( PVOID psIntfAdapter,
                        struct file *flp,
                        unsigned int on_chip_loc);


int BcmRDM(PVOID arg,
			UINT addr,
			PVOID buff,
			INT len);

int BcmWRM(PVOID arg,
			UINT addr,
			PVOID buff,
			INT len);

INT Bcm_clear_halt_of_endpoints(PMINI_ADAPTER Adapter);

VOID Bcm_kill_all_URBs(PS_INTERFACE_ADAPTER psIntfAdapter);

#define DISABLE_USB_ZERO_LEN_INT 0x0F011878

#endif // __INTERFACE_MISC_H
Tue Jul 19 12:36:58 PDT 2016
Fri Jul 22 15:43:44 PDT 2016
Sun, Jul 24, 2016  1:58:00 PM
Mon, Jul 25, 2016  8:26:06 PM
