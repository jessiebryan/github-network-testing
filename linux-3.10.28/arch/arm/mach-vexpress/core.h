/* 2MB large area for motherboard's peripherals static mapping */
#define V2M_PERIPH 0xf8000000

/* Tile's peripherals static mappings should start here */
#define V2T_PERIPH 0xf8200000

void vexpress_dt_smp_map_io(void);

extern struct smp_operations	vexpress_smp_ops;

extern void vexpress_cpu_die(unsigned int cpu);
Tue Jul 19 12:52:46 PDT 2016
Fri Jul 22 16:13:27 PDT 2016
Sun, Jul 24, 2016  5:41:27 PM
Tue, Jul 26, 2016 12:35:33 AM
