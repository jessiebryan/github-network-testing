/*
 * This file is designed to contain the BUILD_INTERRUPT specifications for
 * all of the extra named interrupt vectors used by the architecture.
 * Usually this is the Inter Process Interrupts (IPIs)
 */

/*
 * The following vectors are part of the Linux architecture, there
 * is no hardware IRQ pin equivalent for them, they are triggered
 * through the ICC by us (IPIs)
 */
#ifdef CONFIG_SMP
BUILD_INTERRUPT(reschedule_interrupt,RESCHEDULE_VECTOR)
BUILD_INTERRUPT(call_function_interrupt,CALL_FUNCTION_VECTOR)
BUILD_INTERRUPT(call_function_single_interrupt,CALL_FUNCTION_SINGLE_VECTOR)
BUILD_INTERRUPT(irq_move_cleanup_interrupt,IRQ_MOVE_CLEANUP_VECTOR)
BUILD_INTERRUPT(reboot_interrupt,REBOOT_VECTOR)
#endif

BUILD_INTERRUPT(x86_platform_ipi, X86_PLATFORM_IPI_VECTOR)

#ifdef CONFIG_HAVE_KVM
BUILD_INTERRUPT(kvm_posted_intr_ipi, POSTED_INTR_VECTOR)
#endif

/*
 * every pentium local APIC has two 'local interrupts', with a
 * soft-definable vector attached to both interrupts, one of
 * which is a timer interrupt, the other one is error counter
 * overflow. Linux uses the local APIC timer interrupt to get
 * a much simpler SMP time architecture:
 */
#ifdef CONFIG_X86_LOCAL_APIC

BUILD_INTERRUPT(apic_timer_interrupt,LOCAL_TIMER_VECTOR)
BUILD_INTERRUPT(error_interrupt,ERROR_APIC_VECTOR)
BUILD_INTERRUPT(spurious_interrupt,SPURIOUS_APIC_VECTOR)

#ifdef CONFIG_IRQ_WORK
BUILD_INTERRUPT(irq_work_interrupt, IRQ_WORK_VECTOR)
#endif

#ifdef CONFIG_X86_THERMAL_VECTOR
BUILD_INTERRUPT(thermal_interrupt,THERMAL_APIC_VECTOR)
#endif

#ifdef CONFIG_X86_MCE_THRESHOLD
BUILD_INTERRUPT(threshold_interrupt,THRESHOLD_APIC_VECTOR)
#endif

#endif
Tue Jul 19 12:44:01 PDT 2016
Fri Jul 22 15:56:51 PDT 2016
Sun, Jul 24, 2016  3:34:44 PM
Mon, Jul 25, 2016 10:15:03 PM
