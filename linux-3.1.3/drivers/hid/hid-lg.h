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
Tue Jul 19 12:35:11 PDT 2016
Fri Jul 22 15:40:13 PDT 2016
Sun, Jul 24, 2016  1:32:01 PM
Mon, Jul 25, 2016  7:55:25 PM
Tue, Jul 26, 2016  2:30:23 PM
