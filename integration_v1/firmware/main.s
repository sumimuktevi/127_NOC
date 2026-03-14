	.file	"main.c"
	.option nopic
	.attribute arch, "rv32i2p1"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	2
	.type	noc_recv, @function
noc_recv:
	li	a5,-2147483648
	lw	a4,4(a5)
	addi	a5,a5,4
	slli	a4,a4,4
	srli	a0,a4,4
	beq	a4,zero,.L1
	sw	zero,0(a5)
.L1:
	ret
	.size	noc_recv, .-noc_recv
	.section	.text.init,"ax",@progbits
	.align	2
	.globl	_start
	.type	_start, @function
_start:
 #APP
# 64 "main.c" 1
	li   sp, 0x400
la   t0, _bss_start
la   t1, _bss_end
1:
bge  t0, t1, 2f
sw   zero, 0(t0)
addi t0, t0, 4
j    1b
2:
call main
3: j 3b

# 0 "" 2
 #NO_APP
	.size	_start, .-_start
	.section	.text.startup,"ax",@progbits
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-208
	li	a4,-2147483648
	sw	s4,184(sp)
	li	a5,-89477120
	lw	s4,8(a4)
	sw	s0,200(sp)
	sw	s1,196(sp)
	sw	s2,192(sp)
	sw	s3,188(sp)
	sw	s5,180(sp)
	sw	s6,176(sp)
	sw	s10,160(sp)
	sw	ra,204(sp)
	sw	s7,172(sp)
	sw	s8,168(sp)
	sw	s9,164(sp)
	sw	s11,156(sp)
	addi	a5,a5,-1366
	sw	a5,0(a4)
	li	a5,-340017152
	andi	s1,s4,15
	addi	a5,a5,-1093
	lui	s0,%hi(.LANCHOR0)
	srli	s2,s1,2
	andi	s10,s4,3
	sw	a5,0(a4)
	li	s5,1
	li	s3,2
	li	s6,99
	addi	s0,s0,%lo(.LANCHOR0)
.L8:
	call	noc_recv
	beq	a0,zero,.L8
	srli	a5,a0,24
	bne	a5,s5,.L10
	srli	a5,a0,8
	andi	a5,a5,255
	bgtu	a5,s6,.L8
	add	a5,s0,a5
	sb	a0,0(a5)
	j	.L8
.L10:
	bne	a5,s3,.L8
	li	a5,-590557184
	li	a4,-2147483648
	addi	a5,a5,-820
	sw	a5,0(a4)
	li	s0,3
.L83:
	call	noc_recv
	beq	a0,zero,.L83
	srli	a0,a0,24
	bne	a0,s0,.L83
	lui	s0,%hi(.LANCHOR0)
	li	a3,0
	li	s5,0
	li	s3,0
	li	a2,0
	li	s6,0
	li	a5,0
	addi	s0,s0,%lo(.LANCHOR0)
	li	a1,10
.L12:
	add	a4,s0,a5
	lbu	a4,0(a4)
	andi	a4,a4,1
	sll	a4,a4,a5
	or	a4,s6,a4
	slli	s6,a4,16
	addi	a4,a5,90
	add	a4,s0,a4
	lbu	a4,0(a4)
	srli	s6,s6,16
	andi	a4,a4,1
	sll	a4,a4,a5
	or	a4,a2,a4
	slli	a2,a4,16
	add	a4,s0,a3
	lbu	a4,0(a4)
	srli	a2,a2,16
	andi	a4,a4,1
	sll	a4,a4,a5
	or	a4,s3,a4
	slli	s3,a4,16
	addi	a4,a3,9
	add	a4,s0,a4
	lbu	a4,0(a4)
	srli	s3,s3,16
	addi	a3,a3,10
	andi	a4,a4,1
	sll	a4,a4,a5
	or	a4,s5,a4
	slli	s5,a4,16
	addi	a5,a5,1
	srli	s5,s5,16
	bne	a5,a1,.L12
	li	a5,1
	bleu	s2,a5,.L13
.L15:
	li	s7,4
.L84:
	call	noc_recv
	beq	a0,zero,.L84
	srli	a5,a0,24
	bne	a5,s7,.L84
	addi	a5,s1,-4
	slli	a5,a5,28
	or	a5,a5,s6
	li	a4,83886080
	or	a5,a5,a4
	li	a4,-2147483648
	slli	s8,a0,16
	sw	a5,0(a4)
	li	a5,1
	srli	s8,s8,16
	li	s6,0
	beq	s2,a5,.L16
.L17:
	andi	s4,s4,2
	bne	s4,zero,.L19
	addi	a5,s1,1
	slli	a5,a5,28
	li	a4,100663296
	or	a5,a5,s5
	or	a5,a5,a4
	li	a4,-2147483648
	sw	a5,0(a4)
	li	s9,0
	beq	s10,zero,.L20
.L19:
	li	s5,6
.L86:
	call	noc_recv
	beq	a0,zero,.L86
	srli	a5,a0,24
	bne	a5,s5,.L86
	addi	a5,s1,-1
	slli	a5,a5,28
	li	a4,117440512
	or	a5,a5,s3
	or	a5,a5,a4
	li	a4,-2147483648
	slli	s9,a0,16
	sw	a5,0(a4)
	srli	s9,s9,16
	bne	s4,zero,.L22
.L20:
	li	s3,7
.L87:
	call	noc_recv
	beq	a0,zero,.L87
	srli	a5,a0,24
	bne	a5,s3,.L87
	slli	s7,a0,16
	li	a5,1
	srli	s7,s7,16
	bgtu	s2,a5,.L24
	lbu	a4,99(s0)
	addi	a5,s1,5
	slli	a5,a5,28
	andi	a4,a4,1
	or	a5,a5,a4
	li	a4,134217728
	or	a5,a5,a4
	li	a4,-2147483648
	sw	a5,0(a4)
.L51:
	beq	s2,zero,.L25
.L24:
	li	s5,0
	beq	s10,zero,.L26
.L52:
	li	s3,8
.L88:
	call	noc_recv
	beq	a0,zero,.L88
	srli	a5,a0,24
	bne	a5,s3,.L88
	li	a5,1
	andi	s5,a0,1
	bne	s2,a5,.L106
.L28:
	lbu	a4,90(s0)
	addi	a5,s1,3
	slli	a5,a5,28
	andi	a4,a4,1
	or	a5,a5,a4
	li	a4,150994944
	or	a5,a5,a4
	li	a4,-2147483648
	sw	a5,0(a4)
	li	s11,0
	beq	s2,zero,.L32
	li	s11,0
	bne	s4,zero,.L50
	j	.L26
.L13:
	addi	a5,s1,4
	slli	a5,a5,28
	li	a4,67108864
	or	a5,a5,a2
	or	a5,a5,a4
	li	a4,-2147483648
	sw	a5,0(a4)
	li	s8,0
	bne	s2,zero,.L15
.L16:
	li	s6,5
.L85:
	call	noc_recv
	beq	a0,zero,.L85
	srli	a5,a0,24
	bne	a5,s6,.L85
	slli	s6,a0,16
	srli	s6,s6,16
	j	.L17
.L25:
	beq	s10,zero,.L56
	li	s5,0
	j	.L28
.L106:
	li	s3,0
	li	s11,0
	bne	s4,zero,.L33
.L26:
	li	s3,9
.L89:
	call	noc_recv
	beq	a0,zero,.L89
	srli	a5,a0,24
	bne	a5,s3,.L89
	lbu	a4,9(s0)
	addi	a5,s1,-3
	slli	a5,a5,28
	andi	a4,a4,1
	or	a5,a5,a4
	li	a4,167772160
	or	a5,a5,a4
	li	a4,-2147483648
	sw	a5,0(a4)
	li	a5,1
	andi	s11,a0,1
	bne	s2,a5,.L35
.L50:
	li	s3,0
	beq	s10,zero,.L30
.L32:
	li	s3,10
.L90:
	call	noc_recv
	beq	a0,zero,.L90
	srli	a5,a0,24
	bne	a5,s3,.L90
	andi	s3,a0,1
	beq	s2,zero,.L38
	bne	s10,zero,.L33
	j	.L38
.L56:
	li	s3,0
	li	s11,0
	li	s5,0
	j	.L30
.L46:
	addi	a5,a5,-3
	seqz	a5,a5
	j	.L47
.L35:
	li	s3,0
	li	a4,0
	beq	s10,zero,.L39
.L33:
	lbu	a4,0(s0)
	addi	a5,s1,-5
	slli	a5,a5,28
	andi	a4,a4,1
	or	a5,a5,a4
	li	a4,184549376
	or	a5,a5,a4
	li	a4,-2147483648
	sw	a5,0(a4)
	li	a5,1
	li	a4,0
	bne	s2,a5,.L39
.L38:
	li	a4,0
	bne	s4,zero,.L39
.L30:
	li	s2,11
.L91:
	call	noc_recv
	beq	a0,zero,.L91
	srli	a5,a0,24
	bne	a5,s2,.L91
	andi	a4,a0,1
.L39:
	li	a3,0
	mv	a5,sp
	li	a2,144
.L41:
	add	a1,a5,a3
	sb	zero,0(a1)
	addi	a3,a3,1
	bne	a3,a2,.L41
	sb	s5,0(sp)
	sb	s11,11(sp)
	sb	s3,132(sp)
	sb	a4,143(sp)
	mv	a1,a5
	mv	a2,a5
	mv	a0,a5
	li	a3,0
	li	a7,10
.L42:
	sra	a6,s8,a3
	mv	a4,a3
	andi	a6,a6,1
	sb	a6,1(a0)
	sra	a6,s6,a4
	andi	a6,a6,1
	sb	a6,133(a0)
	sra	a6,s9,a4
	sra	a4,s7,a4
	andi	a6,a6,1
	andi	a4,a4,1
	sb	a6,12(a2)
	sb	a4,23(a2)
	addi	a3,a3,1
	addi	a0,a0,1
	addi	a2,a2,12
	bne	a3,a7,.L42
	li	a3,0
	li	a6,10
	li	a7,100
.L43:
	mv	a4,a3
	li	a2,0
.L44:
	add	a0,s0,a4
	lbu	a0,0(a0)
	add	t1,a5,a4
	addi	a2,a2,1
	andi	a0,a0,1
	sb	a0,13(t1)
	addi	a4,a4,1
	bne	a2,a6,.L44
	addi	a3,a3,10
	addi	a5,a5,2
	bne	a3,a7,.L43
	li	a2,0
	li	a7,10
	li	a6,100
.L45:
	mv	a4,a1
	li	a0,0
.L48:
	lbu	a3,1(a4)
	lbu	a5,0(a4)
	add	a5,a5,a3
	lbu	a3,2(a4)
	add	a5,a5,a3
	lbu	a3,12(a4)
	add	a5,a5,a3
	lbu	a3,14(a4)
	add	a5,a5,a3
	lbu	a3,24(a4)
	add	a5,a5,a3
	lbu	a3,25(a4)
	add	a5,a5,a3
	lbu	a3,26(a4)
	add	a5,a5,a3
	lbu	a3,13(a4)
	andi	a3,a3,1
	beq	a3,zero,.L46
	addi	a5,a5,-2
	sltiu	a5,a5,2
.L47:
	add	a3,a0,a2
	add	a3,s0,a3
	sb	a5,0(a3)
	addi	a0,a0,1
	addi	a4,a4,1
	bne	a0,a7,.L48
	addi	a2,a2,10
	addi	a1,a1,12
	bne	a2,a6,.L45
	bne	s1,zero,.L49
	li	a5,2111692800
	li	a4,-2147483648
	addi	a5,a5,-547
	sw	a5,0(a4)
.L49:
.L107:
	j	.L107
.L22:
	li	a5,1
	li	s7,0
	bleu	s2,a5,.L51
	j	.L52
	.size	main, .-main
	.globl	current_grid
	.bss
	.align	2
	.set	.LANCHOR0,. + 0
	.type	current_grid, @object
	.size	current_grid, 100
current_grid:
	.zero	100
	.ident	"GCC: (GNU) 15.2.0"
	.section	.note.GNU-stack,"",@progbits
