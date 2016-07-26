#ifndef __LINUX_SPI_CORGI_LCD_H
#define __LINUX_SPI_CORGI_LCD_H

#define CORGI_LCD_MODE_QVGA	1
#define CORGI_LCD_MODE_VGA	2

struct corgi_lcd_platform_data {
	int	init_mode;
	int	max_intensity;
	int	default_intensity;
	int	limit_mask;

	int	gpio_backlight_on;	/* -1 if n/a */
	int	gpio_backlight_cont;	/* -1 if n/a */

	void (*notify)(int intensity);
	void (*kick_battery)(void);
};

#endif /* __LINUX_SPI_CORGI_LCD_H */
Tue Jul 19 12:40:14 PDT 2016
Fri Jul 22 15:50:01 PDT 2016
Sun, Jul 24, 2016  2:43:29 PM
Mon, Jul 25, 2016  9:17:28 PM
