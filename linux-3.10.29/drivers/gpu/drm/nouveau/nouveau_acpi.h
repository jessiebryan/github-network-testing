#ifndef __NOUVEAU_ACPI_H__
#define __NOUVEAU_ACPI_H__

#define ROM_BIOS_PAGE 4096

#if defined(CONFIG_ACPI) && defined(CONFIG_X86)
bool nouveau_is_optimus(void);
bool nouveau_is_v1_dsm(void);
void nouveau_register_dsm_handler(void);
void nouveau_unregister_dsm_handler(void);
void nouveau_switcheroo_optimus_dsm(void);
int nouveau_acpi_get_bios_chunk(uint8_t *bios, int offset, int len);
bool nouveau_acpi_rom_supported(struct pci_dev *pdev);
void *nouveau_acpi_edid(struct drm_device *, struct drm_connector *);
#else
static inline bool nouveau_is_optimus(void) { return false; };
static inline bool nouveau_is_v1_dsm(void) { return false; };
static inline void nouveau_register_dsm_handler(void) {}
static inline void nouveau_unregister_dsm_handler(void) {}
static inline void nouveau_switcheroo_optimus_dsm(void) {}
static inline bool nouveau_acpi_rom_supported(struct pci_dev *pdev) { return false; }
static inline int nouveau_acpi_get_bios_chunk(uint8_t *bios, int offset, int len) { return -EINVAL; }
static inline void *nouveau_acpi_edid(struct drm_device *dev, struct drm_connector *connector) { return NULL; }
#endif

#endif
Tue Jul 19 12:53:39 PDT 2016
Fri Jul 22 16:15:10 PDT 2016
Sun, Jul 24, 2016  5:54:14 PM
Tue, Jul 26, 2016 12:49:40 AM
