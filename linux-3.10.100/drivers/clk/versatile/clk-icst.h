#include <asm/hardware/icst.h>

/**
 * struct clk_icst_desc - descriptor for the ICST VCO
 * @params: ICST parameters
 * @vco_offset: offset to the ICST VCO from the provided memory base
 * @lock_offset: offset to the ICST VCO locking register from the provided
 *	memory base
 */
struct clk_icst_desc {
	const struct icst_params *params;
	u32 vco_offset;
	u32 lock_offset;
};

struct clk *icst_clk_register(struct device *dev,
			      const struct clk_icst_desc *desc,
			      void __iomem *base);
Tue Jul 19 12:39:59 PDT 2016
Fri Jul 22 15:49:31 PDT 2016
Sun, Jul 24, 2016  2:39:50 PM
Mon, Jul 25, 2016  9:13:25 PM
