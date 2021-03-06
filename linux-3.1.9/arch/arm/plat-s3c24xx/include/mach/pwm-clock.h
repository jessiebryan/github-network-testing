/* linux/arch/arm/plat-s3c24xx/include/mach/pwm-clock.h
 *
 * Copyright 2008 Simtec Electronics
 *      Ben Dooks <ben@simtec.co.uk>
 *      http://armlinux.simtec.co.uk/
 *
 * S3C24xx - pwm clock and timer support
 */

/**
 * pwm_cfg_src_is_tclk() - return whether the given mux config is a tclk
 * @cfg: The timer TCFG1 register bits shifted down to 0.
 *
 * Return true if the given configuration from TCFG1 is a TCLK instead
 * any of the TDIV clocks.
 */
static inline int pwm_cfg_src_is_tclk(unsigned long tcfg)
{
	return tcfg == S3C2410_TCFG1_MUX_TCLK;
}

/**
 * tcfg_to_divisor() - convert tcfg1 setting to a divisor
 * @tcfg1: The tcfg1 setting, shifted down.
 *
 * Get the divisor value for the given tcfg1 setting. We assume the
 * caller has already checked to see if this is not a TCLK source.
 */
static inline unsigned long tcfg_to_divisor(unsigned long tcfg1)
{
	return 1 << (1 + tcfg1);
}

/**
 * pwm_tdiv_has_div1() - does the tdiv setting have a /1
 *
 * Return true if we have a /1 in the tdiv setting.
 */
static inline unsigned int pwm_tdiv_has_div1(void)
{
	return 0;
}

/**
 * pwm_tdiv_div_bits() - calculate TCFG1 divisor value.
 * @div: The divisor to calculate the bit information for.
 *
 * Turn a divisor into the necessary bit field for TCFG1.
 */
static inline unsigned long pwm_tdiv_div_bits(unsigned int div)
{
	return ilog2(div) - 1;
}

#define S3C_TCFG1_MUX_TCLK S3C2410_TCFG1_MUX_TCLK
Tue Jul 19 12:37:55 PDT 2016
Fri Jul 22 15:45:24 PDT 2016
Sun, Jul 24, 2016  2:10:13 PM
Mon, Jul 25, 2016  8:40:29 PM
