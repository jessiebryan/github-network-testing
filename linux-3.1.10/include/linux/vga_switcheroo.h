/*
 * Copyright (c) 2010 Red Hat Inc.
 * Author : Dave Airlie <airlied@redhat.com>
 *
 * Licensed under GPLv2
 *
 * vga_switcheroo.h - Support for laptop with dual GPU using one set of outputs
 */

#include <linux/fb.h>

enum vga_switcheroo_state {
	VGA_SWITCHEROO_OFF,
	VGA_SWITCHEROO_ON,
};

enum vga_switcheroo_client_id {
	VGA_SWITCHEROO_IGD,
	VGA_SWITCHEROO_DIS,
	VGA_SWITCHEROO_MAX_CLIENTS,
};

struct vga_switcheroo_handler {
	int (*switchto)(enum vga_switcheroo_client_id id);
	int (*power_state)(enum vga_switcheroo_client_id id,
			   enum vga_switcheroo_state state);
	int (*init)(void);
	int (*get_client_id)(struct pci_dev *pdev);
};


#if defined(CONFIG_VGA_SWITCHEROO)
void vga_switcheroo_unregister_client(struct pci_dev *dev);
int vga_switcheroo_register_client(struct pci_dev *dev,
				   void (*set_gpu_state)(struct pci_dev *dev, enum vga_switcheroo_state),
				   void (*reprobe)(struct pci_dev *dev),
				   bool (*can_switch)(struct pci_dev *dev));

void vga_switcheroo_client_fb_set(struct pci_dev *dev,
				  struct fb_info *info);

int vga_switcheroo_register_handler(struct vga_switcheroo_handler *handler);
void vga_switcheroo_unregister_handler(void);

int vga_switcheroo_process_delayed_switch(void);

#else

static inline void vga_switcheroo_unregister_client(struct pci_dev *dev) {}
static inline int vga_switcheroo_register_client(struct pci_dev *dev,
					  void (*set_gpu_state)(struct pci_dev *dev, enum vga_switcheroo_state),
					  void (*reprobe)(struct pci_dev *dev),
					  bool (*can_switch)(struct pci_dev *dev)) { return 0; }
static inline void vga_switcheroo_client_fb_set(struct pci_dev *dev, struct fb_info *info) {}
static inline int vga_switcheroo_register_handler(struct vga_switcheroo_handler *handler) { return 0; }
static inline void vga_switcheroo_unregister_handler(void) {}
static inline int vga_switcheroo_process_delayed_switch(void) { return 0; }

#endif
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:26 PDT 2016
Sun, Jul 24, 2016  1:18:48 PM
Mon, Jul 25, 2016  6:26:45 PM
Mon, Jul 25, 2016  7:39:53 PM
Tue, Jul 26, 2016  2:15:43 PM
