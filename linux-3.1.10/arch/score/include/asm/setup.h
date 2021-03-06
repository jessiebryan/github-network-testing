#ifndef _ASM_SCORE_SETUP_H
#define _ASM_SCORE_SETUP_H

#define COMMAND_LINE_SIZE	256
#define MEMORY_START		0
#define MEMORY_SIZE		0x2000000

#ifdef __KERNEL__

extern void pagetable_init(void);
extern void pgd_init(unsigned long page);

extern void setup_early_printk(void);
extern void cpu_cache_init(void);
extern void tlb_init(void);

extern void handle_nmi(void);
extern void handle_adelinsn(void);
extern void handle_adedata(void);
extern void handle_ibe(void);
extern void handle_pel(void);
extern void handle_sys(void);
extern void handle_ccu(void);
extern void handle_ri(void);
extern void handle_tr(void);
extern void handle_ades(void);
extern void handle_cee(void);
extern void handle_cpe(void);
extern void handle_dve(void);
extern void handle_dbe(void);
extern void handle_reserved(void);
extern void handle_tlb_refill(void);
extern void handle_tlb_invaild(void);
extern void handle_mod(void);
extern void debug_exception_vector(void);
extern void general_exception_vector(void);
extern void interrupt_exception_vector(void);

#endif /* __KERNEL__ */

#endif /* _ASM_SCORE_SETUP_H */
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:52 PDT 2016
Sun, Jul 24, 2016  1:14:28 PM
Mon, Jul 25, 2016  6:21:35 PM
Mon, Jul 25, 2016  7:34:48 PM
Tue, Jul 26, 2016  2:10:51 PM
