#ifndef __LCD_MIPID_H
#define __LCD_MIPID_H

enum mipid_test_num {
	MIPID_TEST_RGB_LINES,
};

enum mipid_test_result {
	MIPID_TEST_SUCCESS,
	MIPID_TEST_INVALID,
	MIPID_TEST_FAILED,
};

#ifdef __KERNEL__

struct mipid_platform_data {
	int	nreset_gpio;
	int	data_lines;

	void	(*shutdown)(struct mipid_platform_data *pdata);
	void	(*set_bklight_level)(struct mipid_platform_data *pdata,
				     int level);
	int	(*get_bklight_level)(struct mipid_platform_data *pdata);
	int	(*get_bklight_max)(struct mipid_platform_data *pdata);
};

#endif

#endif
Tue Jul 19 12:44:56 PDT 2016
Fri Jul 22 15:58:31 PDT 2016
Sun, Jul 24, 2016  3:47:49 PM
Mon, Jul 25, 2016 10:29:34 PM
