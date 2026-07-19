	.INCLUDE "gba.inc"
	.INCLUDE "macro.inc"

	.SECTION .text
	.ARM
	.syntax unified

	.ALIGN 2, 0

	ARM_FUNC_START Init
Init: @ 0x080000C0
	mov r0, #PSR_IRQ_MODE
	msr cpsr_fc, r0
	ldr sp, sp_irq
	mov r0, #PSR_SYS_MODE
	msr cpsr_fc, r0
	ldr sp, sp_sys
	ldr r1, =INTR_VECTOR
	adr r0, IntrMain
	str r0, [r1]
	ldr r1, =AgbMain + 1
	mov lr, pc
	bx r1
	b Init

	.align 2, 0
sp_sys: .4byte IWRAM_END - 0x100
sp_irq: .4byte IWRAM_END - 0x60

	ARM_FUNC_START IntrMain
IntrMain: @ 0x080000FC
	mov r3, #REG_BASE
	add r3, r3, #REG_OFFSET_IE
	ldr r2, [r3, #REG_OFFSET_IE - REG_OFFSET_IE]
	ldrh r1, [r3, #REG_OFFSET_IME - REG_OFFSET_IE]
	mrs r0, spsr
	push {r0, r1, r2, r3, lr}
	mov r0, #1
	strh r0, [r3, #REG_OFFSET_IME - REG_OFFSET_IE]
	and r1, r2, r2, lsr #16
	mov ip, #0
	ands r0, r1, #INTR_FLAG_SERIAL | INTR_FLAG_TIMER3
	bne IntrMain_FoundIntr
	add ip, ip, #4
	ands r0, r1, #INTR_FLAG_VBLANK
	bne IntrMain_FoundIntr
	add ip, ip, #4
	ands r0, r1, #INTR_FLAG_VCOUNT
	bne IntrMain_FoundIntr
	add ip, ip, #4
	ands r0, r1, #INTR_FLAG_HBLANK
	bne IntrMain_FoundIntr
	add ip, ip, #4
	ands r0, r1, #INTR_FLAG_DMA0
	bne IntrMain_FoundIntr
	add ip, ip, #4
	ands r0, r1, #INTR_FLAG_DMA1
	bne IntrMain_FoundIntr
	add ip, ip, #4
	ands r0, r1, #INTR_FLAG_DMA2
	bne IntrMain_FoundIntr
	add ip, ip, #4
	ands r0, r1, #INTR_FLAG_DMA3
	bne IntrMain_FoundIntr
	add ip, ip, #4
	ands r0, r1, #INTR_FLAG_KEYPAD
	bne IntrMain_FoundIntr
	add ip, ip, #4
	ands r0, r1, #INTR_FLAG_GAMEPAK
	strbne r0, [r3, #REG_OFFSET_SOUNDCNT_X - REG_OFFSET_IE]
	bne . @ spin
IntrMain_FoundIntr:
	strh r0, [r3, #REG_OFFSET_IF - REG_OFFSET_IE]
	mov r1, #INTR_FLAG_GAMEPAK | INTR_FLAG_SERIAL | INTR_FLAG_TIMER3
	bic r2, r2, r0
	and r1, r1, r2
	strh r1, [r3, #REG_OFFSET_IE - REG_OFFSET_IE]
	mrs r3, apsr
	bic r3, r3, #PSR_IRQ_DISABLE_BIT | PSR_FIQ_DISABLE_BIT | PSR_MODE_MASK
	orr r3, r3, #PSR_SYS_MODE
	msr cpsr_fc, r3
	ldr r1, =gIntrTable
	add r1, r1, ip
	ldr r0, [r1]
	stmdb sp!, {lr}
	adr lr, IntrMain_RetAddr
	bx r0
IntrMain_RetAddr:
	ldm sp!, {lr}
	mrs r3, apsr
	bic r3, r3, #PSR_IRQ_DISABLE_BIT | PSR_FIQ_DISABLE_BIT | PSR_MODE_MASK
	orr r3, r3, #PSR_IRQ_DISABLE_BIT | PSR_IRQ_MODE
	msr cpsr_fc, r3
	pop {r0, r1, r2, r3, lr}
	strh r2, [r3, #REG_OFFSET_IE - REG_OFFSET_IE]
	strh r1, [r3, #REG_OFFSET_IME - REG_OFFSET_IE]
	msr spsr_fc, r0
	bx lr
	.align 2, 0

	.pool

	arm_func_start sub_0800020C
sub_0800020C: @ 0x0800020C
	stm r0!, {r4-r12, sp, lr}
	mov r0, #0
	bx lr

	arm_func_start sub_08000218
sub_08000218: @ 0x08000218
	ldm r0!, {r4-r12, sp, lr}
	movs r0, r1
	moveq r0, #1
	bx lr

	arm_func_start sub_08000228
sub_08000228: @ 0x08000228
	push {r8, sb, sl, fp}
	mov ip, #REG_BASE
	ldr fp, _08000264 @ =0x03006210
	add sl, fp, #0x28
	mov sb, #1
	mov r8, #0
	strb r8, [ip, #REG_OFFSET_IME]
	ldm sl, {r0, r1}
	stm sl!, {r1}
	stm sl!, {r0}
	ldrb r0, [fp, #5]
	strb r8, [fp, #5]
	strb sb, [ip, #REG_OFFSET_IME]
	pop {r8, sb, sl, fp}
	bx lr
	.align 2, 0
_08000264: .4byte 0x03006210
