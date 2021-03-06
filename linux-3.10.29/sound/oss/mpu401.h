
/*	From uart401.c */
int probe_uart401 (struct address_info *hw_config, struct module *owner);
void unload_uart401 (struct address_info *hw_config);

irqreturn_t uart401intr (int irq, void *dev_id);

/*	From mpu401.c */
int probe_mpu401(struct address_info *hw_config, struct resource *ports);
int attach_mpu401(struct address_info * hw_config, struct module *owner);
void unload_mpu401(struct address_info *hw_info);
Tue Jul 19 12:53:59 PDT 2016
Fri Jul 22 16:15:49 PDT 2016
Sun, Jul 24, 2016  5:58:59 PM
Tue, Jul 26, 2016 12:54:54 AM
