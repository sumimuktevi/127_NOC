
firmware.elf:     file format elf32-littleriscv


Disassembly of section .text:

00000000 <_start>:
   0:	7fc00113          	li	sp,2044
   4:	60000293          	li	t0,1536
   8:	62800313          	li	t1,1576
   c:	0062d863          	bge	t0,t1,1c <_start+0x1c>
  10:	00028023          	sb	zero,0(t0)
  14:	00128293          	addi	t0,t0,1
  18:	ff5ff06f          	j	c <_start+0xc>
  1c:	64000293          	li	t0,1600
  20:	6a400313          	li	t1,1700
  24:	0062d863          	bge	t0,t1,34 <_start+0x34>
  28:	00028023          	sb	zero,0(t0)
  2c:	00128293          	addi	t0,t0,1
  30:	ff5ff06f          	j	24 <_start+0x24>
  34:	70000293          	li	t0,1792
  38:	72400313          	li	t1,1828
  3c:	0062d863          	bge	t0,t1,4c <_start+0x4c>
  40:	00028023          	sb	zero,0(t0)
  44:	00128293          	addi	t0,t0,1
  48:	ff5ff06f          	j	3c <_start+0x3c>
  4c:	038000ef          	jal	84 <main>
  50:	0000006f          	j	50 <_start+0x50>

00000054 <col_bitmap.constprop.0>:
  54:	50000693          	li	a3,1280
  58:	00000513          	li	a0,0
  5c:	00000713          	li	a4,0
  60:	00a00613          	li	a2,10
  64:	0006c783          	lbu	a5,0(a3)
  68:	00a68693          	addi	a3,a3,10
  6c:	0017f793          	andi	a5,a5,1
  70:	00e797b3          	sll	a5,a5,a4
  74:	00170713          	addi	a4,a4,1
  78:	00f56533          	or	a0,a0,a5
  7c:	fec714e3          	bne	a4,a2,64 <col_bitmap.constprop.0+0x10>
  80:	00008067          	ret

Disassembly of section .text.startup:

00000084 <main>:
  84:	fd010113          	addi	sp,sp,-48
  88:	800007b7          	lui	a5,0x80000
  8c:	03212023          	sw	s2,32(sp)
  90:	0087a903          	lw	s2,8(a5) # 80000008 <_bss_end+0x7ffffcd4>
  94:	00078713          	mv	a4,a5
  98:	f00007b7          	lui	a5,0xf0000
  9c:	01612823          	sw	s6,16(sp)
  a0:	00178793          	addi	a5,a5,1 # f0000001 <_bss_end+0xeffffccd>
  a4:	02112623          	sw	ra,44(sp)
  a8:	02812423          	sw	s0,40(sp)
  ac:	02912223          	sw	s1,36(sp)
  b0:	01312e23          	sw	s3,28(sp)
  b4:	01412c23          	sw	s4,24(sp)
  b8:	01512a23          	sw	s5,20(sp)
  bc:	00f72023          	sw	a5,0(a4)
  c0:	00397b13          	andi	s6,s2,3
  c4:	50000793          	li	a5,1280
  c8:	56400713          	li	a4,1380
  cc:	00078023          	sb	zero,0(a5)
  d0:	00178793          	addi	a5,a5,1
  d4:	fee79ce3          	bne	a5,a4,cc <main+0x48>
  d8:	00100413          	li	s0,1
  dc:	528006a3          	sb	s0,1325(zero) # 52d <_bss_end+0x1f9>
  e0:	52800ba3          	sb	s0,1335(zero) # 537 <_bss_end+0x203>
  e4:	548000a3          	sb	s0,1345(zero) # 541 <_bss_end+0x20d>
  e8:	54800823          	sb	s0,1360(zero) # 550 <_bss_end+0x21c>
  ec:	54800d23          	sb	s0,1370(zero) # 55a <_bss_end+0x226>
  f0:	54800ca3          	sb	s0,1369(zero) # 559 <_bss_end+0x225>
  f4:	f00007b7          	lui	a5,0xf0000
  f8:	80000737          	lui	a4,0x80000
  fc:	568001a3          	sb	s0,1379(zero) # 563 <_bss_end+0x22f>
 100:	00278793          	addi	a5,a5,2 # f0000002 <_bss_end+0xeffffcce>
 104:	00f72023          	sw	a5,0(a4) # 80000000 <_bss_end+0x7ffffccc>
 108:	00000993          	li	s3,0
 10c:	00c97913          	andi	s2,s2,12
 110:	00470a13          	addi	s4,a4,4
 114:	00a00a93          	li	s5,10
 118:	00900493          	li	s1,9
 11c:	71302e23          	sw	s3,1820(zero) # 71c <_bss_end+0x3e8>
 120:	02091063          	bnez	s2,140 <main+0xbc>
 124:	0a8b1863          	bne	s6,s0,1d4 <main+0x150>
 128:	f2dff0ef          	jal	54 <col_bitmap.constprop.0>
 12c:	800007b7          	lui	a5,0x80000
 130:	40056513          	ori	a0,a0,1024
 134:	00a7a023          	sw	a0,0(a5) # 80000000 <_bss_end+0x7ffffccc>
 138:	00800793          	li	a5,8
 13c:	72f02023          	sw	a5,1824(zero) # 720 <_bss_end+0x3ec>
 140:	00012223          	sw	zero,4(sp)
 144:	00012423          	sw	zero,8(sp)
 148:	00010623          	sb	zero,12(sp)
 14c:	50000513          	li	a0,1280
 150:	00000613          	li	a2,0
 154:	00050693          	mv	a3,a0
 158:	00000713          	li	a4,0
 15c:	0006c883          	lbu	a7,0(a3)
 160:	00168813          	addi	a6,a3,1
 164:	00000593          	li	a1,0
 168:	0a060263          	beqz	a2,20c <main+0x188>
 16c:	00070663          	beqz	a4,178 <main+0xf4>
 170:	ff56c583          	lbu	a1,-11(a3)
 174:	0015f593          	andi	a1,a1,1
 178:	ff66c783          	lbu	a5,-10(a3)
 17c:	0017f793          	andi	a5,a5,1
 180:	00b787b3          	add	a5,a5,a1
 184:	00970a63          	beq	a4,s1,198 <main+0x114>
 188:	ff76c583          	lbu	a1,-9(a3)
 18c:	0015f593          	andi	a1,a1,1
 190:	00b787b3          	add	a5,a5,a1
 194:	08070e63          	beqz	a4,230 <main+0x1ac>
 198:	fff6c583          	lbu	a1,-1(a3)
 19c:	0015f593          	andi	a1,a1,1
 1a0:	00f587b3          	add	a5,a1,a5
 1a4:	08970e63          	beq	a4,s1,240 <main+0x1bc>
 1a8:	00084583          	lbu	a1,0(a6)
 1ac:	0015f593          	andi	a1,a1,1
 1b0:	00f587b3          	add	a5,a1,a5
 1b4:	0a961663          	bne	a2,s1,260 <main+0x1dc>
 1b8:	08071c63          	bnez	a4,250 <main+0x1cc>
 1bc:	60a74583          	lbu	a1,1546(a4)
 1c0:	0015f593          	andi	a1,a1,1
 1c4:	00f587b3          	add	a5,a1,a5
 1c8:	0c970263          	beq	a4,s1,28c <main+0x208>
 1cc:	60b74583          	lbu	a1,1547(a4)
 1d0:	0b40006f          	j	284 <main+0x200>
 1d4:	f60b16e3          	bnez	s6,140 <main+0xbc>
 1d8:	000a2703          	lw	a4,0(s4)
 1dc:	40077793          	andi	a5,a4,1024
 1e0:	fe078ce3          	beqz	a5,1d8 <main+0x154>
 1e4:	3ff77713          	andi	a4,a4,1023
 1e8:	70e02623          	sw	a4,1804(zero) # 70c <_bss_end+0x3d8>
 1ec:	00000793          	li	a5,0
 1f0:	00f756b3          	srl	a3,a4,a5
 1f4:	0016f693          	andi	a3,a3,1
 1f8:	60d78f23          	sb	a3,1566(a5)
 1fc:	00178793          	addi	a5,a5,1
 200:	ff5798e3          	bne	a5,s5,1f0 <main+0x16c>
 204:	00400793          	li	a5,4
 208:	f35ff06f          	j	13c <main+0xb8>
 20c:	00070663          	beqz	a4,218 <main+0x194>
 210:	5ff74583          	lbu	a1,1535(a4)
 214:	0015f593          	andi	a1,a1,1
 218:	60074783          	lbu	a5,1536(a4)
 21c:	0017f793          	andi	a5,a5,1
 220:	00b787b3          	add	a5,a5,a1
 224:	f6970ae3          	beq	a4,s1,198 <main+0x114>
 228:	60174583          	lbu	a1,1537(a4)
 22c:	f61ff06f          	j	18c <main+0x108>
 230:	61464583          	lbu	a1,1556(a2)
 234:	0015f593          	andi	a1,a1,1
 238:	00f587b3          	add	a5,a1,a5
 23c:	f6dff06f          	j	1a8 <main+0x124>
 240:	61e64583          	lbu	a1,1566(a2)
 244:	0015f593          	andi	a1,a1,1
 248:	00f587b3          	add	a5,a1,a5
 24c:	00e61c63          	bne	a2,a4,264 <main+0x1e0>
 250:	60974583          	lbu	a1,1545(a4)
 254:	0015f593          	andi	a1,a1,1
 258:	00b787b3          	add	a5,a5,a1
 25c:	f61ff06f          	j	1bc <main+0x138>
 260:	00070863          	beqz	a4,270 <main+0x1ec>
 264:	0096c583          	lbu	a1,9(a3)
 268:	0015f593          	andi	a1,a1,1
 26c:	00b787b3          	add	a5,a5,a1
 270:	00a6c583          	lbu	a1,10(a3)
 274:	0015f593          	andi	a1,a1,1
 278:	00f587b3          	add	a5,a1,a5
 27c:	00970863          	beq	a4,s1,28c <main+0x208>
 280:	00b6c583          	lbu	a1,11(a3)
 284:	0015f593          	andi	a1,a1,1
 288:	00b787b3          	add	a5,a5,a1
 28c:	0018f593          	andi	a1,a7,1
 290:	08058c63          	beqz	a1,328 <main+0x2a4>
 294:	ffe78593          	addi	a1,a5,-2
 298:	0025b593          	sltiu	a1,a1,2
 29c:	01078793          	addi	a5,a5,16
 2a0:	14b68023          	sb	a1,320(a3)
 2a4:	002787b3          	add	a5,a5,sp
 2a8:	ff47c683          	lbu	a3,-12(a5)
 2ac:	00170713          	addi	a4,a4,1
 2b0:	00168693          	addi	a3,a3,1
 2b4:	fed78a23          	sb	a3,-12(a5)
 2b8:	00080693          	mv	a3,a6
 2bc:	eb5710e3          	bne	a4,s5,15c <main+0xd8>
 2c0:	00160613          	addi	a2,a2,1
 2c4:	00a50513          	addi	a0,a0,10
 2c8:	e95616e3          	bne	a2,s5,154 <main+0xd0>
 2cc:	00000793          	li	a5,0
 2d0:	00410693          	addi	a3,sp,4
 2d4:	00f68733          	add	a4,a3,a5
 2d8:	00074703          	lbu	a4,0(a4)
 2dc:	00178793          	addi	a5,a5,1
 2e0:	70e787a3          	sb	a4,1807(a5)
 2e4:	fe9798e3          	bne	a5,s1,2d4 <main+0x250>
 2e8:	f00007b7          	lui	a5,0xf0000
 2ec:	00378793          	addi	a5,a5,3 # f0000003 <_bss_end+0xeffffccf>
 2f0:	80000737          	lui	a4,0x80000
 2f4:	00f72023          	sw	a5,0(a4) # 80000000 <_bss_end+0x7ffffccc>
 2f8:	6a400693          	li	a3,1700
 2fc:	64000793          	li	a5,1600
 300:	0007c703          	lbu	a4,0(a5)
 304:	00178793          	addi	a5,a5,1
 308:	eae78fa3          	sb	a4,-321(a5)
 30c:	fed79ae3          	bne	a5,a3,300 <main+0x27c>
 310:	f00007b7          	lui	a5,0xf0000
 314:	80000737          	lui	a4,0x80000
 318:	00478793          	addi	a5,a5,4 # f0000004 <_bss_end+0xeffffcd0>
 31c:	00f72023          	sw	a5,0(a4) # 80000000 <_bss_end+0x7ffffccc>
 320:	00198993          	addi	s3,s3,1
 324:	df9ff06f          	j	11c <main+0x98>
 328:	ffd78593          	addi	a1,a5,-3
 32c:	0015b593          	seqz	a1,a1
 330:	f6dff06f          	j	29c <main+0x218>
