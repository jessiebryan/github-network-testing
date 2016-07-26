#ifndef __OMAP_NOKIA_DSI_PANEL_H
#define __OMAP_NOKIA_DSI_PANEL_H

struct omap_dss_device;

/**
 * struct nokia_dsi_panel_data - Nokia DSI panel driver configuration
 * @name: panel name
 * @use_ext_te: use external TE
 * @ext_te_gpio: external TE GPIO
 * @esd_interval: interval of ESD checks, 0 = disabled (ms)
 * @ulps_timeout: time to wait before entering ULPS, 0 = disabled (ms)
 * @max_backlight_level: maximum backlight level
 * @set_backlight: pointer to backlight set function
 * @get_backlight: pointer to backlight get function
 */
struct nokia_dsi_panel_data {
	const char *name;

	int reset_gpio;

	bool use_ext_te;
	int ext_te_gpio;

	unsigned esd_interval;
	unsigned ulps_timeout;

	int max_backlight_level;
	int (*set_backlight)(struct omap_dss_device *dssdev, int level);
	int (*get_backlight)(struct omap_dss_device *dssdev);
};

#endif /* __OMAP_NOKIA_DSI_PANEL_H */
Tue Jul 19 12:36:01 PDT 2016
Fri Jul 22 15:41:50 PDT 2016
Sun, Jul 24, 2016  1:43:57 PM
Mon, Jul 25, 2016  8:09:30 PM
