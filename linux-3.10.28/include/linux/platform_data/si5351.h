/*
 * Si5351A/B/C programmable clock generator platform_data.
 */

#ifndef __LINUX_PLATFORM_DATA_SI5351_H__
#define __LINUX_PLATFORM_DATA_SI5351_H__

struct clk;

/**
 * enum si5351_variant - SiLabs Si5351 chip variant
 * @SI5351_VARIANT_A: Si5351A (8 output clocks, XTAL input)
 * @SI5351_VARIANT_A3: Si5351A MSOP10 (3 output clocks, XTAL input)
 * @SI5351_VARIANT_B: Si5351B (8 output clocks, XTAL/VXCO input)
 * @SI5351_VARIANT_C: Si5351C (8 output clocks, XTAL/CLKIN input)
 */
enum si5351_variant {
	SI5351_VARIANT_A = 1,
	SI5351_VARIANT_A3 = 2,
	SI5351_VARIANT_B = 3,
	SI5351_VARIANT_C = 4,
};

/**
 * enum si5351_pll_src - Si5351 pll clock source
 * @SI5351_PLL_SRC_DEFAULT: default, do not change eeprom config
 * @SI5351_PLL_SRC_XTAL: pll source clock is XTAL input
 * @SI5351_PLL_SRC_CLKIN: pll source clock is CLKIN input (Si5351C only)
 */
enum si5351_pll_src {
	SI5351_PLL_SRC_DEFAULT = 0,
	SI5351_PLL_SRC_XTAL = 1,
	SI5351_PLL_SRC_CLKIN = 2,
};

/**
 * enum si5351_multisynth_src - Si5351 multisynth clock source
 * @SI5351_MULTISYNTH_SRC_DEFAULT: default, do not change eeprom config
 * @SI5351_MULTISYNTH_SRC_VCO0: multisynth source clock is VCO0
 * @SI5351_MULTISYNTH_SRC_VCO1: multisynth source clock is VCO1/VXCO
 */
enum si5351_multisynth_src {
	SI5351_MULTISYNTH_SRC_DEFAULT = 0,
	SI5351_MULTISYNTH_SRC_VCO0 = 1,
	SI5351_MULTISYNTH_SRC_VCO1 = 2,
};

/**
 * enum si5351_clkout_src - Si5351 clock output clock source
 * @SI5351_CLKOUT_SRC_DEFAULT: default, do not change eeprom config
 * @SI5351_CLKOUT_SRC_MSYNTH_N: clkout N source clock is multisynth N
 * @SI5351_CLKOUT_SRC_MSYNTH_0_4: clkout N source clock is multisynth 0 (N<4)
 *                                or 4 (N>=4)
 * @SI5351_CLKOUT_SRC_XTAL: clkout N source clock is XTAL
 * @SI5351_CLKOUT_SRC_CLKIN: clkout N source clock is CLKIN (Si5351C only)
 */
enum si5351_clkout_src {
	SI5351_CLKOUT_SRC_DEFAULT = 0,
	SI5351_CLKOUT_SRC_MSYNTH_N = 1,
	SI5351_CLKOUT_SRC_MSYNTH_0_4 = 2,
	SI5351_CLKOUT_SRC_XTAL = 3,
	SI5351_CLKOUT_SRC_CLKIN = 4,
};

/**
 * enum si5351_drive_strength - Si5351 clock output drive strength
 * @SI5351_DRIVE_DEFAULT: default, do not change eeprom config
 * @SI5351_DRIVE_2MA: 2mA clock output drive strength
 * @SI5351_DRIVE_4MA: 4mA clock output drive strength
 * @SI5351_DRIVE_6MA: 6mA clock output drive strength
 * @SI5351_DRIVE_8MA: 8mA clock output drive strength
 */
enum si5351_drive_strength {
	SI5351_DRIVE_DEFAULT = 0,
	SI5351_DRIVE_2MA = 2,
	SI5351_DRIVE_4MA = 4,
	SI5351_DRIVE_6MA = 6,
	SI5351_DRIVE_8MA = 8,
};

/**
 * struct si5351_clkout_config - Si5351 clock output configuration
 * @clkout: clkout number
 * @multisynth_src: multisynth source clock
 * @clkout_src: clkout source clock
 * @pll_master: if true, clkout can also change pll rate
 * @drive: output drive strength
 * @rate: initial clkout rate, or default if 0
 */
struct si5351_clkout_config {
	enum si5351_multisynth_src multisynth_src;
	enum si5351_clkout_src clkout_src;
	enum si5351_drive_strength drive;
	bool pll_master;
	unsigned long rate;
};

/**
 * struct si5351_platform_data - Platform data for the Si5351 clock driver
 * @variant: Si5351 chip variant
 * @clk_xtal: xtal input clock
 * @clk_clkin: clkin input clock
 * @pll_src: array of pll source clock setting
 * @clkout: array of clkout configuration
 */
struct si5351_platform_data {
	enum si5351_variant variant;
	struct clk *clk_xtal;
	struct clk *clk_clkin;
	enum si5351_pll_src pll_src[2];
	struct si5351_clkout_config clkout[8];
};

#endif
Tue Jul 19 12:53:14 PDT 2016
Fri Jul 22 16:14:23 PDT 2016
Sun, Jul 24, 2016  5:48:18 PM
Tue, Jul 26, 2016 12:43:04 AM
