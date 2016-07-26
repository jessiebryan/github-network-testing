
extern int acpi_suspend(u32 state);

extern void acpi_enable_wakeup_devices(u8 sleep_state);
extern void acpi_disable_wakeup_devices(u8 sleep_state);

extern struct list_head acpi_wakeup_device_list;
extern struct mutex acpi_device_lock;

extern void acpi_resume_power_resources(void);
Tue Jul 19 12:47:49 PDT 2016
Fri Jul 22 16:04:00 PDT 2016
Sun, Jul 24, 2016  4:30:25 PM
Mon, Jul 25, 2016 11:16:57 PM
