#ifndef US122L_H
#define US122L_H


struct us122l {
	struct usb_device	*dev;
	int			card_index;
	int			stride;
	struct usb_stream_kernel sk;

	struct mutex		mutex;
	struct file		*first;
	unsigned		second_periods_polled;
	struct file		*master;
	struct file		*slave;
	struct list_head	midi_list;

	atomic_t		mmap_count;
};


#define US122L(c) ((struct us122l *)(c)->private_data)

#define NAME_ALLCAPS "US-122L"

#define USB_ID_US122L 0x800E
#define USB_ID_US144 0x800F
#define USB_ID_US122MKII 0x8021
#define USB_ID_US144MKII 0x8020

#endif
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:32 PDT 2016
Sun, Jul 24, 2016  1:19:36 PM
Mon, Jul 25, 2016  6:27:43 PM
Mon, Jul 25, 2016  7:40:50 PM
Tue, Jul 26, 2016  2:16:36 PM
