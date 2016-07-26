int omap_sram_init(void);

void omap_map_sram(unsigned long start, unsigned long size,
			unsigned long skip, int cached);
void omap_sram_reset(void);

extern void *omap_sram_push_address(unsigned long size);

/* Macro to push a function to the internal SRAM, using the fncpy API */
#define omap_sram_push(funcp, size) ({				\
	typeof(&(funcp)) _res = NULL;				\
	void *_sram_address = omap_sram_push_address(size);	\
	if (_sram_address)					\
		_res = fncpy(_sram_address, &(funcp), size);	\
	_res;							\
})
Tue Jul 19 12:52:07 PDT 2016
Fri Jul 22 16:12:11 PDT 2016
Sun, Jul 24, 2016  5:32:11 PM
Tue, Jul 26, 2016 12:25:19 AM
