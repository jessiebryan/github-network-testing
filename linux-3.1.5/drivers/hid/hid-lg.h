#ifndef __HID_LG_H
#define __HID_LG_H

#ifdef CONFIG_LOGITECH_FF
int lgff_init(struct hid_device *hdev);
#else
static inline int lgff_init(struct hid_device *hdev) { return -1; }
#endif

#ifdef CONFIG_LOGIRUMBLEPAD2_FF
int lg2ff_init(struct hid_device *hdev);
#else
static inline int lg2ff_init(struct hid_device *hdev) { return -1; }
#endif

#ifdef CONFIG_LOGIG940_FF
int lg3ff_init(struct hid_device *hdev);
#else
static inline int lg3ff_init(struct hid_device *hdev) { return -1; }
#endif

#ifdef CONFIG_LOGIWII_FF
int lg4ff_init(struct hid_device *hdev);
#else
static inline int lg4ff_init(struct hid_device *hdev) { return -1; }
#endif

#endif
Tue Jul 19 12:36:20 PDT 2016
Fri Jul 22 15:42:27 PDT 2016
Sun, Jul 24, 2016  1:48:30 PM
Mon, Jul 25, 2016  8:14:54 PM
