
extern int acpi_suspend(u32 state);

extern void acpi_enable_wakeup_devices(u8 sleep_state);
extern void acpi_disable_wakeup_devices(u8 sleep_state);

extern struct list_head acpi_wakeup_device_list;
extern struct mutex acpi_device_lock;
Tue Jul 19 12:35:45 PDT 2016
Fri Jul 22 15:41:20 PDT 2016
Sun, Jul 24, 2016  1:40:07 PM
