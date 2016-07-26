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
Tue Jul 19 12:48:28 PDT 2016
Fri Jul 22 16:05:12 PDT 2016
Sun, Jul 24, 2016  4:39:43 PM
Mon, Jul 25, 2016 11:27:16 PM
