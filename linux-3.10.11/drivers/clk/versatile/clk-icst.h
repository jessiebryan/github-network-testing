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
Tue Jul 19 12:42:01 PDT 2016
Fri Jul 22 15:53:19 PDT 2016
Sun, Jul 24, 2016  3:07:29 PM
Mon, Jul 25, 2016  9:44:36 PM
