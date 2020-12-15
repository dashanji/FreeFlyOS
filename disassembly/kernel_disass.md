
kernel:     file format elf32-i386


Disassembly of section .init.text:

00100000 <init>:
  100000:	55                   	push   %ebp
  100001:	89 e5                	mov    %esp,%ebp
  100003:	83 ec 58             	sub    $0x58,%esp
  100006:	c7 45 c0 04 03 00 00 	movl   $0x304,-0x40(%ebp)
  10000d:	c7 45 bc df 03 00 00 	movl   $0x3df,-0x44(%ebp)
  100014:	c7 45 b8 02 00 00 00 	movl   $0x2,-0x48(%ebp)
  10001b:	b8 00 20 10 00       	mov    $0x102000,%eax
  100020:	83 c8 03             	or     $0x3,%eax
  100023:	a3 00 10 10 00       	mov    %eax,0x101000
  100028:	ba 00 30 10 00       	mov    $0x103000,%edx
  10002d:	8b 45 c0             	mov    -0x40(%ebp),%eax
  100030:	83 e8 04             	sub    $0x4,%eax
  100033:	83 ca 03             	or     $0x3,%edx
  100036:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  10003d:	b8 00 40 10 00       	mov    $0x104000,%eax
  100042:	83 c8 03             	or     $0x3,%eax
  100045:	89 c2                	mov    %eax,%edx
  100047:	8b 45 c0             	mov    -0x40(%ebp),%eax
  10004a:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  100051:	ba 00 50 10 00       	mov    $0x105000,%edx
  100056:	8b 45 c0             	mov    -0x40(%ebp),%eax
  100059:	83 c0 01             	add    $0x1,%eax
  10005c:	83 ca 03             	or     $0x3,%edx
  10005f:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  100066:	ba 00 60 10 00       	mov    $0x106000,%edx
  10006b:	8b 45 c0             	mov    -0x40(%ebp),%eax
  10006e:	83 c0 02             	add    $0x2,%eax
  100071:	83 ca 03             	or     $0x3,%edx
  100074:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  10007b:	b8 00 70 10 00       	mov    $0x107000,%eax
  100080:	83 c8 03             	or     $0x3,%eax
  100083:	89 c2                	mov    %eax,%edx
  100085:	8b 45 bc             	mov    -0x44(%ebp),%eax
  100088:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  10008f:	b8 00 80 10 00       	mov    $0x108000,%eax
  100094:	83 c8 03             	or     $0x3,%eax
  100097:	89 c2                	mov    %eax,%edx
  100099:	8b 45 b8             	mov    -0x48(%ebp),%eax
  10009c:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  1000a3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
  1000aa:	eb 19                	jmp    1000c5 <init+0xc5>
  1000ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
  1000af:	c1 e0 0c             	shl    $0xc,%eax
  1000b2:	83 c8 03             	or     $0x3,%eax
  1000b5:	89 c2                	mov    %eax,%edx
  1000b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
  1000ba:	89 14 85 00 20 10 00 	mov    %edx,0x102000(,%eax,4)
  1000c1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
  1000c5:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%ebp)
  1000cc:	76 de                	jbe    1000ac <init+0xac>
  1000ce:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
  1000d5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
  1000dc:	eb 1d                	jmp    1000fb <init+0xfb>
  1000de:	8b 45 ec             	mov    -0x14(%ebp),%eax
  1000e1:	83 c8 03             	or     $0x3,%eax
  1000e4:	89 c2                	mov    %eax,%edx
  1000e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
  1000e9:	89 14 85 00 30 10 00 	mov    %edx,0x103000(,%eax,4)
  1000f0:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
  1000f4:	81 45 ec 00 10 00 00 	addl   $0x1000,-0x14(%ebp)
  1000fb:	81 7d f0 ff 03 00 00 	cmpl   $0x3ff,-0x10(%ebp)
  100102:	76 da                	jbe    1000de <init+0xde>
  100104:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
  10010b:	c7 45 e4 00 00 00 01 	movl   $0x1000000,-0x1c(%ebp)
  100112:	eb 1d                	jmp    100131 <init+0x131>
  100114:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  100117:	83 c8 03             	or     $0x3,%eax
  10011a:	89 c2                	mov    %eax,%edx
  10011c:	8b 45 e8             	mov    -0x18(%ebp),%eax
  10011f:	89 14 85 00 40 10 00 	mov    %edx,0x104000(,%eax,4)
  100126:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
  10012a:	81 45 e4 00 10 00 00 	addl   $0x1000,-0x1c(%ebp)
  100131:	81 7d e8 ff 03 00 00 	cmpl   $0x3ff,-0x18(%ebp)
  100138:	76 da                	jbe    100114 <init+0x114>
  10013a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
  100141:	c7 45 dc 00 00 40 01 	movl   $0x1400000,-0x24(%ebp)
  100148:	eb 1d                	jmp    100167 <init+0x167>
  10014a:	8b 45 dc             	mov    -0x24(%ebp),%eax
  10014d:	83 c8 03             	or     $0x3,%eax
  100150:	89 c2                	mov    %eax,%edx
  100152:	8b 45 e0             	mov    -0x20(%ebp),%eax
  100155:	89 14 85 00 50 10 00 	mov    %edx,0x105000(,%eax,4)
  10015c:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
  100160:	81 45 dc 00 10 00 00 	addl   $0x1000,-0x24(%ebp)
  100167:	81 7d e0 ff 03 00 00 	cmpl   $0x3ff,-0x20(%ebp)
  10016e:	76 da                	jbe    10014a <init+0x14a>
  100170:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
  100177:	c7 45 d4 00 00 80 01 	movl   $0x1800000,-0x2c(%ebp)
  10017e:	eb 1d                	jmp    10019d <init+0x19d>
  100180:	8b 45 d4             	mov    -0x2c(%ebp),%eax
  100183:	83 c8 03             	or     $0x3,%eax
  100186:	89 c2                	mov    %eax,%edx
  100188:	8b 45 d8             	mov    -0x28(%ebp),%eax
  10018b:	89 14 85 00 60 10 00 	mov    %edx,0x106000(,%eax,4)
  100192:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
  100196:	81 45 d4 00 10 00 00 	addl   $0x1000,-0x2c(%ebp)
  10019d:	81 7d d8 ff 03 00 00 	cmpl   $0x3ff,-0x28(%ebp)
  1001a4:	76 da                	jbe    100180 <init+0x180>
  1001a6:	c7 45 b4 fe 03 00 00 	movl   $0x3fe,-0x4c(%ebp)
  1001ad:	8b 45 b4             	mov    -0x4c(%ebp),%eax
  1001b0:	89 45 d0             	mov    %eax,-0x30(%ebp)
  1001b3:	c7 45 cc 00 e0 ff 37 	movl   $0x37ffe000,-0x34(%ebp)
  1001ba:	eb 1d                	jmp    1001d9 <init+0x1d9>
  1001bc:	8b 45 cc             	mov    -0x34(%ebp),%eax
  1001bf:	83 c8 03             	or     $0x3,%eax
  1001c2:	89 c2                	mov    %eax,%edx
  1001c4:	8b 45 d0             	mov    -0x30(%ebp),%eax
  1001c7:	89 14 85 00 70 10 00 	mov    %edx,0x107000(,%eax,4)
  1001ce:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
  1001d2:	81 45 cc 00 10 00 00 	addl   $0x1000,-0x34(%ebp)
  1001d9:	8b 45 b4             	mov    -0x4c(%ebp),%eax
  1001dc:	83 c0 02             	add    $0x2,%eax
  1001df:	39 45 d0             	cmp    %eax,-0x30(%ebp)
  1001e2:	72 d8                	jb     1001bc <init+0x1bc>
  1001e4:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
  1001eb:	8b 45 b0             	mov    -0x50(%ebp),%eax
  1001ee:	89 45 c8             	mov    %eax,-0x38(%ebp)
  1001f1:	c7 45 c4 00 00 80 00 	movl   $0x800000,-0x3c(%ebp)
  1001f8:	eb 1d                	jmp    100217 <init+0x217>
  1001fa:	8b 45 c4             	mov    -0x3c(%ebp),%eax
  1001fd:	83 c8 03             	or     $0x3,%eax
  100200:	89 c2                	mov    %eax,%edx
  100202:	8b 45 c8             	mov    -0x38(%ebp),%eax
  100205:	89 14 85 00 80 10 00 	mov    %edx,0x108000(,%eax,4)
  10020c:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
  100210:	81 45 c4 00 10 00 00 	addl   $0x1000,-0x3c(%ebp)
  100217:	8b 45 b4             	mov    -0x4c(%ebp),%eax
  10021a:	83 c0 01             	add    $0x1,%eax
  10021d:	39 45 c8             	cmp    %eax,-0x38(%ebp)
  100220:	72 d8                	jb     1001fa <init+0x1fa>
  100222:	b8 00 10 10 00       	mov    $0x101000,%eax
  100227:	0f 22 d8             	mov    %eax,%cr3
  10022a:	0f 20 c0             	mov    %cr0,%eax
  10022d:	89 45 ac             	mov    %eax,-0x54(%ebp)
  100230:	81 4d ac 00 00 00 80 	orl    $0x80000000,-0x54(%ebp)
  100237:	8b 45 ac             	mov    -0x54(%ebp),%eax
  10023a:	0f 22 c0             	mov    %eax,%cr0
  10023d:	b8 00 00 00 f8       	mov    $0xf8000000,%eax
  100242:	89 c4                	mov    %eax,%esp
  100244:	31 ed                	xor    %ebp,%ebp
  100246:	b8 c0 33 a1 c1       	mov    $0xc1a133c0,%eax
  10024b:	3d 00 00 b0 01       	cmp    $0x1b00000,%eax
  100250:	77 16                	ja     100268 <init+0x268>
  100252:	68 60 99 00 c1       	push   $0xc1009960
  100257:	68 cc 99 00 c1       	push   $0xc10099cc
  10025c:	6a 51                	push   $0x51
  10025e:	68 98 99 00 c1       	push   $0xc1009998
  100263:	e8 a5 00 f0 c0       	call   c100030d <__PANIC>
  100268:	e8 09 1c f0 c0       	call   c1001e76 <main>
  10026d:	90                   	nop
  10026e:	c9                   	leave  
  10026f:	c3                   	ret    

Disassembly of section .user.text:

40000000 <delay>:
40000000:	55                   	push   %ebp
40000001:	89 e5                	mov    %esp,%ebp
40000003:	83 ec 10             	sub    $0x10,%esp
40000006:	8b 45 08             	mov    0x8(%ebp),%eax
40000009:	89 45 fc             	mov    %eax,-0x4(%ebp)
4000000c:	eb 17                	jmp    40000025 <delay+0x25>
4000000e:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
40000015:	eb 04                	jmp    4000001b <delay+0x1b>
40000017:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
4000001b:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
4000001f:	75 f6                	jne    40000017 <delay+0x17>
40000021:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
40000025:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
40000029:	75 e3                	jne    4000000e <delay+0xe>
4000002b:	90                   	nop
4000002c:	90                   	nop
4000002d:	c9                   	leave  
4000002e:	c3                   	ret    

4000002f <user_main>:
4000002f:	55                   	push   %ebp
40000030:	89 e5                	mov    %esp,%ebp
40000032:	83 ec 48             	sub    $0x48,%esp
40000035:	c7 45 c6 48 65 6c 6c 	movl   $0x6c6c6548,-0x3a(%ebp)
4000003c:	c7 45 ca 6f 2c 49 27 	movl   $0x27492c6f,-0x36(%ebp)
40000043:	c7 45 ce 6d 20 61 20 	movl   $0x2061206d,-0x32(%ebp)
4000004a:	c7 45 d2 55 73 65 72 	movl   $0x72657355,-0x2e(%ebp)
40000051:	c7 45 d6 20 46 75 6e 	movl   $0x6e754620,-0x2a(%ebp)
40000058:	c7 45 da 63 74 69 6f 	movl   $0x6f697463,-0x26(%ebp)
4000005f:	c7 45 de 6e 21 4e 69 	movl   $0x694e216e,-0x22(%ebp)
40000066:	c7 45 e2 63 65 20 74 	movl   $0x74206563,-0x1e(%ebp)
4000006d:	c7 45 e6 6f 20 6d 65 	movl   $0x656d206f,-0x1a(%ebp)
40000074:	c7 45 ea 65 74 20 79 	movl   $0x79207465,-0x16(%ebp)
4000007b:	c7 45 ee 6f 75 21 0a 	movl   $0xa21756f,-0x12(%ebp)
40000082:	c7 45 f2 00 00 00 00 	movl   $0x0,-0xe(%ebp)
40000089:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
4000008f:	e8 a9 06 00 00       	call   4000073d <my_shell>
40000094:	90                   	nop
40000095:	c9                   	leave  
40000096:	c3                   	ret    

40000097 <user_syscall>:
40000097:	55                   	push   %ebp
40000098:	89 e5                	mov    %esp,%ebp
4000009a:	57                   	push   %edi
4000009b:	56                   	push   %esi
4000009c:	53                   	push   %ebx
4000009d:	83 ec 20             	sub    $0x20,%esp
400000a0:	8d 45 0c             	lea    0xc(%ebp),%eax
400000a3:	89 45 f0             	mov    %eax,-0x10(%ebp)
400000a6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
400000ad:	eb 15                	jmp    400000c4 <user_syscall+0x2d>
400000af:	83 45 f0 04          	addl   $0x4,-0x10(%ebp)
400000b3:	8b 45 f0             	mov    -0x10(%ebp),%eax
400000b6:	8b 50 fc             	mov    -0x4(%eax),%edx
400000b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
400000bc:	89 54 85 d4          	mov    %edx,-0x2c(%ebp,%eax,4)
400000c0:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
400000c4:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
400000c8:	7e e5                	jle    400000af <user_syscall+0x18>
400000ca:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
400000d1:	8b 45 08             	mov    0x8(%ebp),%eax
400000d4:	8b 55 d4             	mov    -0x2c(%ebp),%edx
400000d7:	8b 4d d8             	mov    -0x28(%ebp),%ecx
400000da:	8b 5d dc             	mov    -0x24(%ebp),%ebx
400000dd:	8b 7d e0             	mov    -0x20(%ebp),%edi
400000e0:	8b 75 e4             	mov    -0x1c(%ebp),%esi
400000e3:	cd 80                	int    $0x80
400000e5:	89 45 e8             	mov    %eax,-0x18(%ebp)
400000e8:	8b 45 e8             	mov    -0x18(%ebp),%eax
400000eb:	83 c4 20             	add    $0x20,%esp
400000ee:	5b                   	pop    %ebx
400000ef:	5e                   	pop    %esi
400000f0:	5f                   	pop    %edi
400000f1:	5d                   	pop    %ebp
400000f2:	c3                   	ret    

400000f3 <user_sys_getpid>:
400000f3:	55                   	push   %ebp
400000f4:	89 e5                	mov    %esp,%ebp
400000f6:	6a 12                	push   $0x12
400000f8:	e8 9a ff ff ff       	call   40000097 <user_syscall>
400000fd:	83 c4 04             	add    $0x4,%esp
40000100:	c9                   	leave  
40000101:	c3                   	ret    

40000102 <user_print_char>:
40000102:	55                   	push   %ebp
40000103:	89 e5                	mov    %esp,%ebp
40000105:	83 ec 04             	sub    $0x4,%esp
40000108:	8b 45 08             	mov    0x8(%ebp),%eax
4000010b:	88 45 fc             	mov    %al,-0x4(%ebp)
4000010e:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
40000112:	50                   	push   %eax
40000113:	6a 24                	push   $0x24
40000115:	e8 7d ff ff ff       	call   40000097 <user_syscall>
4000011a:	83 c4 08             	add    $0x8,%esp
4000011d:	90                   	nop
4000011e:	c9                   	leave  
4000011f:	c3                   	ret    

40000120 <user_print_string>:
40000120:	55                   	push   %ebp
40000121:	89 e5                	mov    %esp,%ebp
40000123:	ff 75 08             	pushl  0x8(%ebp)
40000126:	6a 25                	push   $0x25
40000128:	e8 6a ff ff ff       	call   40000097 <user_syscall>
4000012d:	83 c4 08             	add    $0x8,%esp
40000130:	90                   	nop
40000131:	c9                   	leave  
40000132:	c3                   	ret    

40000133 <user_print_num>:
40000133:	55                   	push   %ebp
40000134:	89 e5                	mov    %esp,%ebp
40000136:	83 ec 08             	sub    $0x8,%esp
40000139:	8b 55 0c             	mov    0xc(%ebp),%edx
4000013c:	8b 45 10             	mov    0x10(%ebp),%eax
4000013f:	88 55 fc             	mov    %dl,-0x4(%ebp)
40000142:	88 45 f8             	mov    %al,-0x8(%ebp)
40000145:	0f be 55 f8          	movsbl -0x8(%ebp),%edx
40000149:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
4000014d:	ff 75 14             	pushl  0x14(%ebp)
40000150:	52                   	push   %edx
40000151:	50                   	push   %eax
40000152:	ff 75 08             	pushl  0x8(%ebp)
40000155:	6a 26                	push   $0x26
40000157:	e8 3b ff ff ff       	call   40000097 <user_syscall>
4000015c:	83 c4 14             	add    $0x14,%esp
4000015f:	90                   	nop
40000160:	c9                   	leave  
40000161:	c3                   	ret    

40000162 <read>:
40000162:	55                   	push   %ebp
40000163:	89 e5                	mov    %esp,%ebp
40000165:	ff 75 10             	pushl  0x10(%ebp)
40000168:	ff 75 0c             	pushl  0xc(%ebp)
4000016b:	ff 75 08             	pushl  0x8(%ebp)
4000016e:	6a 18                	push   $0x18
40000170:	e8 22 ff ff ff       	call   40000097 <user_syscall>
40000175:	83 c4 10             	add    $0x10,%esp
40000178:	c9                   	leave  
40000179:	c3                   	ret    

4000017a <open>:
4000017a:	55                   	push   %ebp
4000017b:	89 e5                	mov    %esp,%ebp
4000017d:	83 ec 04             	sub    $0x4,%esp
40000180:	8b 45 0c             	mov    0xc(%ebp),%eax
40000183:	88 45 fc             	mov    %al,-0x4(%ebp)
40000186:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
4000018a:	50                   	push   %eax
4000018b:	ff 75 08             	pushl  0x8(%ebp)
4000018e:	6a 28                	push   $0x28
40000190:	e8 02 ff ff ff       	call   40000097 <user_syscall>
40000195:	83 c4 0c             	add    $0xc,%esp
40000198:	c9                   	leave  
40000199:	c3                   	ret    

4000019a <close>:
4000019a:	55                   	push   %ebp
4000019b:	89 e5                	mov    %esp,%ebp
4000019d:	ff 75 08             	pushl  0x8(%ebp)
400001a0:	6a 29                	push   $0x29
400001a2:	e8 f0 fe ff ff       	call   40000097 <user_syscall>
400001a7:	83 c4 08             	add    $0x8,%esp
400001aa:	c9                   	leave  
400001ab:	c3                   	ret    

400001ac <write>:
400001ac:	55                   	push   %ebp
400001ad:	89 e5                	mov    %esp,%ebp
400001af:	ff 75 10             	pushl  0x10(%ebp)
400001b2:	ff 75 0c             	pushl  0xc(%ebp)
400001b5:	ff 75 08             	pushl  0x8(%ebp)
400001b8:	6a 2a                	push   $0x2a
400001ba:	e8 d8 fe ff ff       	call   40000097 <user_syscall>
400001bf:	83 c4 10             	add    $0x10,%esp
400001c2:	c9                   	leave  
400001c3:	c3                   	ret    

400001c4 <lseek>:
400001c4:	55                   	push   %ebp
400001c5:	89 e5                	mov    %esp,%ebp
400001c7:	83 ec 04             	sub    $0x4,%esp
400001ca:	8b 45 10             	mov    0x10(%ebp),%eax
400001cd:	88 45 fc             	mov    %al,-0x4(%ebp)
400001d0:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
400001d4:	50                   	push   %eax
400001d5:	ff 75 0c             	pushl  0xc(%ebp)
400001d8:	ff 75 08             	pushl  0x8(%ebp)
400001db:	6a 2b                	push   $0x2b
400001dd:	e8 b5 fe ff ff       	call   40000097 <user_syscall>
400001e2:	83 c4 10             	add    $0x10,%esp
400001e5:	c9                   	leave  
400001e6:	c3                   	ret    

400001e7 <unlink>:
400001e7:	55                   	push   %ebp
400001e8:	89 e5                	mov    %esp,%ebp
400001ea:	ff 75 08             	pushl  0x8(%ebp)
400001ed:	6a 2c                	push   $0x2c
400001ef:	e8 a3 fe ff ff       	call   40000097 <user_syscall>
400001f4:	83 c4 08             	add    $0x8,%esp
400001f7:	c9                   	leave  
400001f8:	c3                   	ret    

400001f9 <mkdir>:
400001f9:	55                   	push   %ebp
400001fa:	89 e5                	mov    %esp,%ebp
400001fc:	ff 75 08             	pushl  0x8(%ebp)
400001ff:	6a 2d                	push   $0x2d
40000201:	e8 91 fe ff ff       	call   40000097 <user_syscall>
40000206:	83 c4 08             	add    $0x8,%esp
40000209:	c9                   	leave  
4000020a:	c3                   	ret    

4000020b <rmdir>:
4000020b:	55                   	push   %ebp
4000020c:	89 e5                	mov    %esp,%ebp
4000020e:	ff 75 08             	pushl  0x8(%ebp)
40000211:	6a 2e                	push   $0x2e
40000213:	e8 7f fe ff ff       	call   40000097 <user_syscall>
40000218:	83 c4 08             	add    $0x8,%esp
4000021b:	c9                   	leave  
4000021c:	c3                   	ret    

4000021d <rewinddir>:
4000021d:	55                   	push   %ebp
4000021e:	89 e5                	mov    %esp,%ebp
40000220:	ff 75 08             	pushl  0x8(%ebp)
40000223:	6a 2f                	push   $0x2f
40000225:	e8 6d fe ff ff       	call   40000097 <user_syscall>
4000022a:	83 c4 08             	add    $0x8,%esp
4000022d:	90                   	nop
4000022e:	c9                   	leave  
4000022f:	c3                   	ret    

40000230 <getcwd>:
40000230:	55                   	push   %ebp
40000231:	89 e5                	mov    %esp,%ebp
40000233:	ff 75 0c             	pushl  0xc(%ebp)
40000236:	ff 75 08             	pushl  0x8(%ebp)
40000239:	6a 30                	push   $0x30
4000023b:	e8 57 fe ff ff       	call   40000097 <user_syscall>
40000240:	83 c4 0c             	add    $0xc,%esp
40000243:	c9                   	leave  
40000244:	c3                   	ret    

40000245 <chdir>:
40000245:	55                   	push   %ebp
40000246:	89 e5                	mov    %esp,%ebp
40000248:	ff 75 08             	pushl  0x8(%ebp)
4000024b:	6a 31                	push   $0x31
4000024d:	e8 45 fe ff ff       	call   40000097 <user_syscall>
40000252:	83 c4 08             	add    $0x8,%esp
40000255:	c9                   	leave  
40000256:	c3                   	ret    

40000257 <stat>:
40000257:	55                   	push   %ebp
40000258:	89 e5                	mov    %esp,%ebp
4000025a:	ff 75 0c             	pushl  0xc(%ebp)
4000025d:	ff 75 08             	pushl  0x8(%ebp)
40000260:	6a 32                	push   $0x32
40000262:	e8 30 fe ff ff       	call   40000097 <user_syscall>
40000267:	83 c4 0c             	add    $0xc,%esp
4000026a:	c9                   	leave  
4000026b:	c3                   	ret    

4000026c <opendir>:
4000026c:	55                   	push   %ebp
4000026d:	89 e5                	mov    %esp,%ebp
4000026f:	ff 75 08             	pushl  0x8(%ebp)
40000272:	6a 33                	push   $0x33
40000274:	e8 1e fe ff ff       	call   40000097 <user_syscall>
40000279:	83 c4 08             	add    $0x8,%esp
4000027c:	c9                   	leave  
4000027d:	c3                   	ret    

4000027e <closedir>:
4000027e:	55                   	push   %ebp
4000027f:	89 e5                	mov    %esp,%ebp
40000281:	ff 75 08             	pushl  0x8(%ebp)
40000284:	6a 34                	push   $0x34
40000286:	e8 0c fe ff ff       	call   40000097 <user_syscall>
4000028b:	83 c4 08             	add    $0x8,%esp
4000028e:	c9                   	leave  
4000028f:	c3                   	ret    

40000290 <readdir>:
40000290:	55                   	push   %ebp
40000291:	89 e5                	mov    %esp,%ebp
40000293:	ff 75 08             	pushl  0x8(%ebp)
40000296:	6a 35                	push   $0x35
40000298:	e8 fa fd ff ff       	call   40000097 <user_syscall>
4000029d:	83 c4 08             	add    $0x8,%esp
400002a0:	c9                   	leave  
400002a1:	c3                   	ret    

400002a2 <printf>:
400002a2:	55                   	push   %ebp
400002a3:	89 e5                	mov    %esp,%ebp
400002a5:	83 ec 38             	sub    $0x38,%esp
400002a8:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
400002ac:	8d 45 0c             	lea    0xc(%ebp),%eax
400002af:	89 45 f4             	mov    %eax,-0xc(%ebp)
400002b2:	e9 da 02 00 00       	jmp    40000591 <printf+0x2ef>
400002b7:	8b 45 08             	mov    0x8(%ebp),%eax
400002ba:	0f b6 00             	movzbl (%eax),%eax
400002bd:	3c 25                	cmp    $0x25,%al
400002bf:	0f 85 aa 02 00 00    	jne    4000056f <printf+0x2cd>
400002c5:	90                   	nop
400002c6:	8b 45 08             	mov    0x8(%ebp),%eax
400002c9:	83 c0 01             	add    $0x1,%eax
400002cc:	89 45 08             	mov    %eax,0x8(%ebp)
400002cf:	8b 45 08             	mov    0x8(%ebp),%eax
400002d2:	0f b6 00             	movzbl (%eax),%eax
400002d5:	0f be c0             	movsbl %al,%eax
400002d8:	83 e8 30             	sub    $0x30,%eax
400002db:	83 f8 48             	cmp    $0x48,%eax
400002de:	0f 87 6f 02 00 00    	ja     40000553 <printf+0x2b1>
400002e4:	8b 04 85 38 14 00 40 	mov    0x40001438(,%eax,4),%eax
400002eb:	ff e0                	jmp    *%eax
400002ed:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400002f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
400002f4:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
400002f8:	88 45 d7             	mov    %al,-0x29(%ebp)
400002fb:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
400002ff:	83 ec 0c             	sub    $0xc,%esp
40000302:	50                   	push   %eax
40000303:	e8 fa fd ff ff       	call   40000102 <user_print_char>
40000308:	83 c4 10             	add    $0x10,%esp
4000030b:	e9 54 02 00 00       	jmp    40000564 <printf+0x2c2>
40000310:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000314:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000317:	8b 40 fc             	mov    -0x4(%eax),%eax
4000031a:	89 45 dc             	mov    %eax,-0x24(%ebp)
4000031d:	83 ec 0c             	sub    $0xc,%esp
40000320:	ff 75 dc             	pushl  -0x24(%ebp)
40000323:	e8 f8 fd ff ff       	call   40000120 <user_print_string>
40000328:	83 c4 10             	add    $0x10,%esp
4000032b:	e9 34 02 00 00       	jmp    40000564 <printf+0x2c2>
40000330:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000334:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000337:	8b 40 fc             	mov    -0x4(%eax),%eax
4000033a:	89 45 d8             	mov    %eax,-0x28(%ebp)
4000033d:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000341:	74 19                	je     4000035c <printf+0xba>
40000343:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
40000347:	6a 01                	push   $0x1
40000349:	50                   	push   %eax
4000034a:	6a 0a                	push   $0xa
4000034c:	ff 75 d8             	pushl  -0x28(%ebp)
4000034f:	e8 df fd ff ff       	call   40000133 <user_print_num>
40000354:	83 c4 10             	add    $0x10,%esp
40000357:	e9 08 02 00 00       	jmp    40000564 <printf+0x2c2>
4000035c:	6a 00                	push   $0x0
4000035e:	6a 14                	push   $0x14
40000360:	6a 0a                	push   $0xa
40000362:	ff 75 d8             	pushl  -0x28(%ebp)
40000365:	e8 c9 fd ff ff       	call   40000133 <user_print_num>
4000036a:	83 c4 10             	add    $0x10,%esp
4000036d:	e9 f2 01 00 00       	jmp    40000564 <printf+0x2c2>
40000372:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000376:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000379:	8b 40 fc             	mov    -0x4(%eax),%eax
4000037c:	89 45 d0             	mov    %eax,-0x30(%ebp)
4000037f:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000383:	74 19                	je     4000039e <printf+0xfc>
40000385:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
40000389:	6a 01                	push   $0x1
4000038b:	50                   	push   %eax
4000038c:	6a 10                	push   $0x10
4000038e:	ff 75 d0             	pushl  -0x30(%ebp)
40000391:	e8 9d fd ff ff       	call   40000133 <user_print_num>
40000396:	83 c4 10             	add    $0x10,%esp
40000399:	e9 c6 01 00 00       	jmp    40000564 <printf+0x2c2>
4000039e:	6a 00                	push   $0x0
400003a0:	6a 14                	push   $0x14
400003a2:	6a 10                	push   $0x10
400003a4:	ff 75 d0             	pushl  -0x30(%ebp)
400003a7:	e8 87 fd ff ff       	call   40000133 <user_print_num>
400003ac:	83 c4 10             	add    $0x10,%esp
400003af:	e9 b0 01 00 00       	jmp    40000564 <printf+0x2c2>
400003b4:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
400003b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
400003bb:	8b 50 fc             	mov    -0x4(%eax),%edx
400003be:	8b 40 f8             	mov    -0x8(%eax),%eax
400003c1:	89 45 c8             	mov    %eax,-0x38(%ebp)
400003c4:	89 55 cc             	mov    %edx,-0x34(%ebp)
400003c7:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400003cb:	74 1a                	je     400003e7 <printf+0x145>
400003cd:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
400003d1:	8b 45 c8             	mov    -0x38(%ebp),%eax
400003d4:	6a 01                	push   $0x1
400003d6:	52                   	push   %edx
400003d7:	6a 10                	push   $0x10
400003d9:	50                   	push   %eax
400003da:	e8 54 fd ff ff       	call   40000133 <user_print_num>
400003df:	83 c4 10             	add    $0x10,%esp
400003e2:	e9 7d 01 00 00       	jmp    40000564 <printf+0x2c2>
400003e7:	8b 45 c8             	mov    -0x38(%ebp),%eax
400003ea:	6a 00                	push   $0x0
400003ec:	6a 14                	push   $0x14
400003ee:	6a 10                	push   $0x10
400003f0:	50                   	push   %eax
400003f1:	e8 3d fd ff ff       	call   40000133 <user_print_num>
400003f6:	83 c4 10             	add    $0x10,%esp
400003f9:	e9 66 01 00 00       	jmp    40000564 <printf+0x2c2>
400003fe:	8b 45 08             	mov    0x8(%ebp),%eax
40000401:	83 c0 01             	add    $0x1,%eax
40000404:	89 45 08             	mov    %eax,0x8(%ebp)
40000407:	8b 45 08             	mov    0x8(%ebp),%eax
4000040a:	0f b6 00             	movzbl (%eax),%eax
4000040d:	0f be c0             	movsbl %al,%eax
40000410:	83 f8 78             	cmp    $0x78,%eax
40000413:	0f 84 80 00 00 00    	je     40000499 <printf+0x1f7>
40000419:	83 f8 78             	cmp    $0x78,%eax
4000041c:	0f 8f f9 00 00 00    	jg     4000051b <printf+0x279>
40000422:	83 f8 6c             	cmp    $0x6c,%eax
40000425:	0f 84 ac 00 00 00    	je     400004d7 <printf+0x235>
4000042b:	83 f8 6c             	cmp    $0x6c,%eax
4000042e:	0f 8f e7 00 00 00    	jg     4000051b <printf+0x279>
40000434:	83 f8 64             	cmp    $0x64,%eax
40000437:	74 1c                	je     40000455 <printf+0x1b3>
40000439:	83 f8 64             	cmp    $0x64,%eax
4000043c:	0f 8f d9 00 00 00    	jg     4000051b <printf+0x279>
40000442:	83 f8 4c             	cmp    $0x4c,%eax
40000445:	0f 84 8c 00 00 00    	je     400004d7 <printf+0x235>
4000044b:	83 f8 58             	cmp    $0x58,%eax
4000044e:	74 49                	je     40000499 <printf+0x1f7>
40000450:	e9 c6 00 00 00       	jmp    4000051b <printf+0x279>
40000455:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000459:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000045c:	8b 40 fc             	mov    -0x4(%eax),%eax
4000045f:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000462:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000466:	74 1a                	je     40000482 <printf+0x1e0>
40000468:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
4000046c:	8b 45 ec             	mov    -0x14(%ebp),%eax
4000046f:	6a 01                	push   $0x1
40000471:	52                   	push   %edx
40000472:	6a 0a                	push   $0xa
40000474:	50                   	push   %eax
40000475:	e8 b9 fc ff ff       	call   40000133 <user_print_num>
4000047a:	83 c4 10             	add    $0x10,%esp
4000047d:	e9 9a 00 00 00       	jmp    4000051c <printf+0x27a>
40000482:	8b 45 ec             	mov    -0x14(%ebp),%eax
40000485:	6a 00                	push   $0x0
40000487:	6a 14                	push   $0x14
40000489:	6a 0a                	push   $0xa
4000048b:	50                   	push   %eax
4000048c:	e8 a2 fc ff ff       	call   40000133 <user_print_num>
40000491:	83 c4 10             	add    $0x10,%esp
40000494:	e9 83 00 00 00       	jmp    4000051c <printf+0x27a>
40000499:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
4000049d:	8b 45 f4             	mov    -0xc(%ebp),%eax
400004a0:	8b 40 fc             	mov    -0x4(%eax),%eax
400004a3:	89 45 e8             	mov    %eax,-0x18(%ebp)
400004a6:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400004aa:	74 17                	je     400004c3 <printf+0x221>
400004ac:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
400004b0:	8b 45 e8             	mov    -0x18(%ebp),%eax
400004b3:	6a 01                	push   $0x1
400004b5:	52                   	push   %edx
400004b6:	6a 10                	push   $0x10
400004b8:	50                   	push   %eax
400004b9:	e8 75 fc ff ff       	call   40000133 <user_print_num>
400004be:	83 c4 10             	add    $0x10,%esp
400004c1:	eb 59                	jmp    4000051c <printf+0x27a>
400004c3:	8b 45 e8             	mov    -0x18(%ebp),%eax
400004c6:	6a 00                	push   $0x0
400004c8:	6a 14                	push   $0x14
400004ca:	6a 10                	push   $0x10
400004cc:	50                   	push   %eax
400004cd:	e8 61 fc ff ff       	call   40000133 <user_print_num>
400004d2:	83 c4 10             	add    $0x10,%esp
400004d5:	eb 45                	jmp    4000051c <printf+0x27a>
400004d7:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
400004db:	8b 45 f4             	mov    -0xc(%ebp),%eax
400004de:	8b 50 fc             	mov    -0x4(%eax),%edx
400004e1:	8b 40 f8             	mov    -0x8(%eax),%eax
400004e4:	89 45 e0             	mov    %eax,-0x20(%ebp)
400004e7:	89 55 e4             	mov    %edx,-0x1c(%ebp)
400004ea:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400004ee:	74 17                	je     40000507 <printf+0x265>
400004f0:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
400004f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
400004f7:	6a 01                	push   $0x1
400004f9:	52                   	push   %edx
400004fa:	6a 10                	push   $0x10
400004fc:	50                   	push   %eax
400004fd:	e8 31 fc ff ff       	call   40000133 <user_print_num>
40000502:	83 c4 10             	add    $0x10,%esp
40000505:	eb 15                	jmp    4000051c <printf+0x27a>
40000507:	8b 45 e0             	mov    -0x20(%ebp),%eax
4000050a:	6a 00                	push   $0x0
4000050c:	6a 14                	push   $0x14
4000050e:	6a 10                	push   $0x10
40000510:	50                   	push   %eax
40000511:	e8 1d fc ff ff       	call   40000133 <user_print_num>
40000516:	83 c4 10             	add    $0x10,%esp
40000519:	eb 01                	jmp    4000051c <printf+0x27a>
4000051b:	90                   	nop
4000051c:	eb 46                	jmp    40000564 <printf+0x2c2>
4000051e:	8b 45 08             	mov    0x8(%ebp),%eax
40000521:	0f b6 00             	movzbl (%eax),%eax
40000524:	0f be c0             	movsbl %al,%eax
40000527:	83 e8 30             	sub    $0x30,%eax
4000052a:	89 c2                	mov    %eax,%edx
4000052c:	89 d0                	mov    %edx,%eax
4000052e:	c1 e0 02             	shl    $0x2,%eax
40000531:	01 d0                	add    %edx,%eax
40000533:	01 c0                	add    %eax,%eax
40000535:	89 c2                	mov    %eax,%edx
40000537:	8b 45 08             	mov    0x8(%ebp),%eax
4000053a:	83 c0 01             	add    $0x1,%eax
4000053d:	89 45 08             	mov    %eax,0x8(%ebp)
40000540:	8b 45 08             	mov    0x8(%ebp),%eax
40000543:	0f b6 00             	movzbl (%eax),%eax
40000546:	01 d0                	add    %edx,%eax
40000548:	83 e8 30             	sub    $0x30,%eax
4000054b:	88 45 f3             	mov    %al,-0xd(%ebp)
4000054e:	e9 73 fd ff ff       	jmp    400002c6 <printf+0x24>
40000553:	83 ec 0c             	sub    $0xc,%esp
40000556:	68 18 14 00 40       	push   $0x40001418
4000055b:	e8 c0 fb ff ff       	call   40000120 <user_print_string>
40000560:	83 c4 10             	add    $0x10,%esp
40000563:	90                   	nop
40000564:	8b 45 08             	mov    0x8(%ebp),%eax
40000567:	83 c0 01             	add    $0x1,%eax
4000056a:	89 45 08             	mov    %eax,0x8(%ebp)
4000056d:	eb 1e                	jmp    4000058d <printf+0x2eb>
4000056f:	8b 45 08             	mov    0x8(%ebp),%eax
40000572:	0f b6 00             	movzbl (%eax),%eax
40000575:	0f be c0             	movsbl %al,%eax
40000578:	83 ec 0c             	sub    $0xc,%esp
4000057b:	50                   	push   %eax
4000057c:	e8 81 fb ff ff       	call   40000102 <user_print_char>
40000581:	83 c4 10             	add    $0x10,%esp
40000584:	8b 45 08             	mov    0x8(%ebp),%eax
40000587:	83 c0 01             	add    $0x1,%eax
4000058a:	89 45 08             	mov    %eax,0x8(%ebp)
4000058d:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
40000591:	8b 45 08             	mov    0x8(%ebp),%eax
40000594:	0f b6 00             	movzbl (%eax),%eax
40000597:	84 c0                	test   %al,%al
40000599:	0f 85 18 fd ff ff    	jne    400002b7 <printf+0x15>
4000059f:	90                   	nop
400005a0:	90                   	nop
400005a1:	c9                   	leave  
400005a2:	c3                   	ret    

400005a3 <print_prompt>:
400005a3:	55                   	push   %ebp
400005a4:	89 e5                	mov    %esp,%ebp
400005a6:	83 ec 08             	sub    $0x8,%esp
400005a9:	83 ec 08             	sub    $0x8,%esp
400005ac:	68 a0 18 00 40       	push   $0x400018a0
400005b1:	68 5c 15 00 40       	push   $0x4000155c
400005b6:	e8 e7 fc ff ff       	call   400002a2 <printf>
400005bb:	83 c4 10             	add    $0x10,%esp
400005be:	90                   	nop
400005bf:	c9                   	leave  
400005c0:	c3                   	ret    

400005c1 <user_readline>:
400005c1:	55                   	push   %ebp
400005c2:	89 e5                	mov    %esp,%ebp
400005c4:	83 ec 18             	sub    $0x18,%esp
400005c7:	8b 45 08             	mov    0x8(%ebp),%eax
400005ca:	89 45 f4             	mov    %eax,-0xc(%ebp)
400005cd:	eb 72                	jmp    40000641 <user_readline+0x80>
400005cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
400005d2:	0f b6 00             	movzbl (%eax),%eax
400005d5:	0f be c0             	movsbl %al,%eax
400005d8:	83 f8 0d             	cmp    $0xd,%eax
400005db:	74 0f                	je     400005ec <user_readline+0x2b>
400005dd:	83 f8 0d             	cmp    $0xd,%eax
400005e0:	7f 3c                	jg     4000061e <user_readline+0x5d>
400005e2:	83 f8 08             	cmp    $0x8,%eax
400005e5:	74 1a                	je     40000601 <user_readline+0x40>
400005e7:	83 f8 0a             	cmp    $0xa,%eax
400005ea:	75 32                	jne    4000061e <user_readline+0x5d>
400005ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
400005ef:	c6 00 00             	movb   $0x0,(%eax)
400005f2:	83 ec 0c             	sub    $0xc,%esp
400005f5:	6a 0a                	push   $0xa
400005f7:	e8 06 fb ff ff       	call   40000102 <user_print_char>
400005fc:	83 c4 10             	add    $0x10,%esp
400005ff:	eb 76                	jmp    40000677 <user_readline+0xb6>
40000601:	8b 45 08             	mov    0x8(%ebp),%eax
40000604:	0f b6 00             	movzbl (%eax),%eax
40000607:	3c 08                	cmp    $0x8,%al
40000609:	74 36                	je     40000641 <user_readline+0x80>
4000060b:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
4000060f:	83 ec 0c             	sub    $0xc,%esp
40000612:	6a 08                	push   $0x8
40000614:	e8 e9 fa ff ff       	call   40000102 <user_print_char>
40000619:	83 c4 10             	add    $0x10,%esp
4000061c:	eb 23                	jmp    40000641 <user_readline+0x80>
4000061e:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000621:	0f b6 00             	movzbl (%eax),%eax
40000624:	84 c0                	test   %al,%al
40000626:	74 19                	je     40000641 <user_readline+0x80>
40000628:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000062b:	0f b6 00             	movzbl (%eax),%eax
4000062e:	0f be c0             	movsbl %al,%eax
40000631:	83 ec 0c             	sub    $0xc,%esp
40000634:	50                   	push   %eax
40000635:	e8 c8 fa ff ff       	call   40000102 <user_print_char>
4000063a:	83 c4 10             	add    $0x10,%esp
4000063d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
40000641:	83 ec 04             	sub    $0x4,%esp
40000644:	6a 01                	push   $0x1
40000646:	ff 75 f4             	pushl  -0xc(%ebp)
40000649:	6a 00                	push   $0x0
4000064b:	e8 12 fb ff ff       	call   40000162 <read>
40000650:	83 c4 10             	add    $0x10,%esp
40000653:	83 f8 ff             	cmp    $0xffffffff,%eax
40000656:	74 0f                	je     40000667 <user_readline+0xa6>
40000658:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000065b:	2b 45 08             	sub    0x8(%ebp),%eax
4000065e:	39 45 0c             	cmp    %eax,0xc(%ebp)
40000661:	0f 8f 68 ff ff ff    	jg     400005cf <user_readline+0xe>
40000667:	83 ec 0c             	sub    $0xc,%esp
4000066a:	68 74 15 00 40       	push   $0x40001574
4000066f:	e8 2e fc ff ff       	call   400002a2 <printf>
40000674:	83 c4 10             	add    $0x10,%esp
40000677:	c9                   	leave  
40000678:	c3                   	ret    

40000679 <cmd_parse>:
40000679:	55                   	push   %ebp
4000067a:	89 e5                	mov    %esp,%ebp
4000067c:	83 ec 14             	sub    $0x14,%esp
4000067f:	8b 45 10             	mov    0x10(%ebp),%eax
40000682:	88 45 ec             	mov    %al,-0x14(%ebp)
40000685:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
4000068c:	eb 19                	jmp    400006a7 <cmd_parse+0x2e>
4000068e:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000691:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000698:	8b 45 0c             	mov    0xc(%ebp),%eax
4000069b:	01 d0                	add    %edx,%eax
4000069d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
400006a3:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
400006a7:	83 7d fc 0f          	cmpl   $0xf,-0x4(%ebp)
400006ab:	7e e1                	jle    4000068e <cmd_parse+0x15>
400006ad:	8b 45 08             	mov    0x8(%ebp),%eax
400006b0:	89 45 f8             	mov    %eax,-0x8(%ebp)
400006b3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400006ba:	eb 6f                	jmp    4000072b <cmd_parse+0xb2>
400006bc:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
400006c0:	8b 45 f8             	mov    -0x8(%ebp),%eax
400006c3:	0f b6 00             	movzbl (%eax),%eax
400006c6:	38 45 ec             	cmp    %al,-0x14(%ebp)
400006c9:	74 f1                	je     400006bc <cmd_parse+0x43>
400006cb:	8b 45 f8             	mov    -0x8(%ebp),%eax
400006ce:	0f b6 00             	movzbl (%eax),%eax
400006d1:	84 c0                	test   %al,%al
400006d3:	74 62                	je     40000737 <cmd_parse+0xbe>
400006d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006d8:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
400006df:	8b 45 0c             	mov    0xc(%ebp),%eax
400006e2:	01 c2                	add    %eax,%edx
400006e4:	8b 45 f8             	mov    -0x8(%ebp),%eax
400006e7:	89 02                	mov    %eax,(%edx)
400006e9:	eb 04                	jmp    400006ef <cmd_parse+0x76>
400006eb:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
400006ef:	8b 45 f8             	mov    -0x8(%ebp),%eax
400006f2:	0f b6 00             	movzbl (%eax),%eax
400006f5:	84 c0                	test   %al,%al
400006f7:	74 0b                	je     40000704 <cmd_parse+0x8b>
400006f9:	8b 45 f8             	mov    -0x8(%ebp),%eax
400006fc:	0f b6 00             	movzbl (%eax),%eax
400006ff:	38 45 ec             	cmp    %al,-0x14(%ebp)
40000702:	75 e7                	jne    400006eb <cmd_parse+0x72>
40000704:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000707:	0f b6 00             	movzbl (%eax),%eax
4000070a:	84 c0                	test   %al,%al
4000070c:	74 0c                	je     4000071a <cmd_parse+0xa1>
4000070e:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000711:	8d 50 01             	lea    0x1(%eax),%edx
40000714:	89 55 f8             	mov    %edx,-0x8(%ebp)
40000717:	c6 00 00             	movb   $0x0,(%eax)
4000071a:	83 7d f4 10          	cmpl   $0x10,-0xc(%ebp)
4000071e:	7e 07                	jle    40000727 <cmd_parse+0xae>
40000720:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
40000725:	eb 14                	jmp    4000073b <cmd_parse+0xc2>
40000727:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
4000072b:	8b 45 f8             	mov    -0x8(%ebp),%eax
4000072e:	0f b6 00             	movzbl (%eax),%eax
40000731:	84 c0                	test   %al,%al
40000733:	75 8b                	jne    400006c0 <cmd_parse+0x47>
40000735:	eb 01                	jmp    40000738 <cmd_parse+0xbf>
40000737:	90                   	nop
40000738:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000073b:	c9                   	leave  
4000073c:	c3                   	ret    

4000073d <my_shell>:
4000073d:	55                   	push   %ebp
4000073e:	89 e5                	mov    %esp,%ebp
40000740:	83 ec 08             	sub    $0x8,%esp
40000743:	c6 05 a0 18 00 40 2f 	movb   $0x2f,0x400018a0
4000074a:	e8 54 fe ff ff       	call   400005a3 <print_prompt>
4000074f:	83 ec 04             	sub    $0x4,%esp
40000752:	68 00 02 00 00       	push   $0x200
40000757:	6a 00                	push   $0x0
40000759:	68 a0 1a 00 40       	push   $0x40001aa0
4000075e:	e8 3e 02 00 00       	call   400009a1 <user_memset>
40000763:	83 c4 10             	add    $0x10,%esp
40000766:	83 ec 04             	sub    $0x4,%esp
40000769:	68 00 02 00 00       	push   $0x200
4000076e:	6a 00                	push   $0x0
40000770:	68 a0 1c 00 40       	push   $0x40001ca0
40000775:	e8 27 02 00 00       	call   400009a1 <user_memset>
4000077a:	83 c4 10             	add    $0x10,%esp
4000077d:	83 ec 08             	sub    $0x8,%esp
40000780:	68 80 00 00 00       	push   $0x80
40000785:	68 a0 1c 00 40       	push   $0x40001ca0
4000078a:	e8 32 fe ff ff       	call   400005c1 <user_readline>
4000078f:	83 c4 10             	add    $0x10,%esp
40000792:	0f b6 05 a0 1c 00 40 	movzbl 0x40001ca0,%eax
40000799:	84 c0                	test   %al,%al
4000079b:	0f 84 ce 01 00 00    	je     4000096f <my_shell+0x232>
400007a1:	c7 05 14 14 00 40 ff 	movl   $0xffffffff,0x40001414
400007a8:	ff ff ff 
400007ab:	83 ec 04             	sub    $0x4,%esp
400007ae:	6a 20                	push   $0x20
400007b0:	68 20 1d 00 40       	push   $0x40001d20
400007b5:	68 a0 1c 00 40       	push   $0x40001ca0
400007ba:	e8 ba fe ff ff       	call   40000679 <cmd_parse>
400007bf:	83 c4 10             	add    $0x10,%esp
400007c2:	a3 14 14 00 40       	mov    %eax,0x40001414
400007c7:	a1 14 14 00 40       	mov    0x40001414,%eax
400007cc:	83 f8 ff             	cmp    $0xffffffff,%eax
400007cf:	75 17                	jne    400007e8 <my_shell+0xab>
400007d1:	83 ec 08             	sub    $0x8,%esp
400007d4:	6a 10                	push   $0x10
400007d6:	68 bc 15 00 40       	push   $0x400015bc
400007db:	e8 c2 fa ff ff       	call   400002a2 <printf>
400007e0:	83 c4 10             	add    $0x10,%esp
400007e3:	e9 88 01 00 00       	jmp    40000970 <my_shell+0x233>
400007e8:	a1 20 1d 00 40       	mov    0x40001d20,%eax
400007ed:	83 ec 08             	sub    $0x8,%esp
400007f0:	50                   	push   %eax
400007f1:	68 d8 15 00 40       	push   $0x400015d8
400007f6:	e8 49 02 00 00       	call   40000a44 <user_strcmp>
400007fb:	83 c4 10             	add    $0x10,%esp
400007fe:	85 c0                	test   %eax,%eax
40000800:	75 1b                	jne    4000081d <my_shell+0xe0>
40000802:	a1 14 14 00 40       	mov    0x40001414,%eax
40000807:	83 ec 08             	sub    $0x8,%esp
4000080a:	68 20 1d 00 40       	push   $0x40001d20
4000080f:	50                   	push   %eax
40000810:	e8 81 06 00 00       	call   40000e96 <buildin_ls>
40000815:	83 c4 10             	add    $0x10,%esp
40000818:	e9 2d ff ff ff       	jmp    4000074a <my_shell+0xd>
4000081d:	a1 20 1d 00 40       	mov    0x40001d20,%eax
40000822:	83 ec 08             	sub    $0x8,%esp
40000825:	50                   	push   %eax
40000826:	68 db 15 00 40       	push   $0x400015db
4000082b:	e8 14 02 00 00       	call   40000a44 <user_strcmp>
40000830:	83 c4 10             	add    $0x10,%esp
40000833:	85 c0                	test   %eax,%eax
40000835:	75 4f                	jne    40000886 <my_shell+0x149>
40000837:	a1 14 14 00 40       	mov    0x40001414,%eax
4000083c:	83 ec 08             	sub    $0x8,%esp
4000083f:	68 20 1d 00 40       	push   $0x40001d20
40000844:	50                   	push   %eax
40000845:	e8 c2 05 00 00       	call   40000e0c <buildin_cd>
4000084a:	83 c4 10             	add    $0x10,%esp
4000084d:	85 c0                	test   %eax,%eax
4000084f:	0f 84 f5 fe ff ff    	je     4000074a <my_shell+0xd>
40000855:	83 ec 04             	sub    $0x4,%esp
40000858:	68 00 02 00 00       	push   $0x200
4000085d:	6a 00                	push   $0x0
4000085f:	68 a0 18 00 40       	push   $0x400018a0
40000864:	e8 38 01 00 00       	call   400009a1 <user_memset>
40000869:	83 c4 10             	add    $0x10,%esp
4000086c:	83 ec 08             	sub    $0x8,%esp
4000086f:	68 a0 1a 00 40       	push   $0x40001aa0
40000874:	68 a0 18 00 40       	push   $0x400018a0
40000879:	e8 93 02 00 00       	call   40000b11 <user_strcpy>
4000087e:	83 c4 10             	add    $0x10,%esp
40000881:	e9 c4 fe ff ff       	jmp    4000074a <my_shell+0xd>
40000886:	a1 20 1d 00 40       	mov    0x40001d20,%eax
4000088b:	83 ec 08             	sub    $0x8,%esp
4000088e:	50                   	push   %eax
4000088f:	68 de 15 00 40       	push   $0x400015de
40000894:	e8 ab 01 00 00       	call   40000a44 <user_strcmp>
40000899:	83 c4 10             	add    $0x10,%esp
4000089c:	85 c0                	test   %eax,%eax
4000089e:	75 1b                	jne    400008bb <my_shell+0x17e>
400008a0:	a1 14 14 00 40       	mov    0x40001414,%eax
400008a5:	83 ec 08             	sub    $0x8,%esp
400008a8:	68 20 1d 00 40       	push   $0x40001d20
400008ad:	50                   	push   %eax
400008ae:	e8 f9 04 00 00       	call   40000dac <buildin_pwd>
400008b3:	83 c4 10             	add    $0x10,%esp
400008b6:	e9 8f fe ff ff       	jmp    4000074a <my_shell+0xd>
400008bb:	a1 20 1d 00 40       	mov    0x40001d20,%eax
400008c0:	83 ec 08             	sub    $0x8,%esp
400008c3:	50                   	push   %eax
400008c4:	68 e2 15 00 40       	push   $0x400015e2
400008c9:	e8 76 01 00 00       	call   40000a44 <user_strcmp>
400008ce:	83 c4 10             	add    $0x10,%esp
400008d1:	85 c0                	test   %eax,%eax
400008d3:	75 1b                	jne    400008f0 <my_shell+0x1b3>
400008d5:	a1 14 14 00 40       	mov    0x40001414,%eax
400008da:	83 ec 08             	sub    $0x8,%esp
400008dd:	68 20 1d 00 40       	push   $0x40001d20
400008e2:	50                   	push   %eax
400008e3:	e8 73 09 00 00       	call   4000125b <buildin_mkdir>
400008e8:	83 c4 10             	add    $0x10,%esp
400008eb:	e9 5a fe ff ff       	jmp    4000074a <my_shell+0xd>
400008f0:	a1 20 1d 00 40       	mov    0x40001d20,%eax
400008f5:	83 ec 08             	sub    $0x8,%esp
400008f8:	50                   	push   %eax
400008f9:	68 e8 15 00 40       	push   $0x400015e8
400008fe:	e8 41 01 00 00       	call   40000a44 <user_strcmp>
40000903:	83 c4 10             	add    $0x10,%esp
40000906:	85 c0                	test   %eax,%eax
40000908:	75 1b                	jne    40000925 <my_shell+0x1e8>
4000090a:	a1 14 14 00 40       	mov    0x40001414,%eax
4000090f:	83 ec 08             	sub    $0x8,%esp
40000912:	68 20 1d 00 40       	push   $0x40001d20
40000917:	50                   	push   %eax
40000918:	e8 d0 09 00 00       	call   400012ed <buildin_rmdir>
4000091d:	83 c4 10             	add    $0x10,%esp
40000920:	e9 25 fe ff ff       	jmp    4000074a <my_shell+0xd>
40000925:	a1 20 1d 00 40       	mov    0x40001d20,%eax
4000092a:	83 ec 08             	sub    $0x8,%esp
4000092d:	50                   	push   %eax
4000092e:	68 ee 15 00 40       	push   $0x400015ee
40000933:	e8 0c 01 00 00       	call   40000a44 <user_strcmp>
40000938:	83 c4 10             	add    $0x10,%esp
4000093b:	85 c0                	test   %eax,%eax
4000093d:	75 1b                	jne    4000095a <my_shell+0x21d>
4000093f:	a1 14 14 00 40       	mov    0x40001414,%eax
40000944:	83 ec 08             	sub    $0x8,%esp
40000947:	68 20 1d 00 40       	push   $0x40001d20
4000094c:	50                   	push   %eax
4000094d:	e8 2d 0a 00 00       	call   4000137f <buildin_rm>
40000952:	83 c4 10             	add    $0x10,%esp
40000955:	e9 f0 fd ff ff       	jmp    4000074a <my_shell+0xd>
4000095a:	83 ec 0c             	sub    $0xc,%esp
4000095d:	68 f1 15 00 40       	push   $0x400015f1
40000962:	e8 3b f9 ff ff       	call   400002a2 <printf>
40000967:	83 c4 10             	add    $0x10,%esp
4000096a:	e9 db fd ff ff       	jmp    4000074a <my_shell+0xd>
4000096f:	90                   	nop
40000970:	e9 d5 fd ff ff       	jmp    4000074a <my_shell+0xd>

40000975 <__memset>:
40000975:	55                   	push   %ebp
40000976:	89 e5                	mov    %esp,%ebp
40000978:	57                   	push   %edi
40000979:	83 ec 14             	sub    $0x14,%esp
4000097c:	8b 45 0c             	mov    0xc(%ebp),%eax
4000097f:	88 45 e8             	mov    %al,-0x18(%ebp)
40000982:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000985:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
40000989:	8b 55 08             	mov    0x8(%ebp),%edx
4000098c:	89 d7                	mov    %edx,%edi
4000098e:	f3 aa                	rep stos %al,%es:(%edi)
40000990:	89 fa                	mov    %edi,%edx
40000992:	89 4d f8             	mov    %ecx,-0x8(%ebp)
40000995:	89 55 f4             	mov    %edx,-0xc(%ebp)
40000998:	8b 45 08             	mov    0x8(%ebp),%eax
4000099b:	83 c4 14             	add    $0x14,%esp
4000099e:	5f                   	pop    %edi
4000099f:	5d                   	pop    %ebp
400009a0:	c3                   	ret    

400009a1 <user_memset>:
400009a1:	55                   	push   %ebp
400009a2:	89 e5                	mov    %esp,%ebp
400009a4:	83 ec 04             	sub    $0x4,%esp
400009a7:	8b 45 0c             	mov    0xc(%ebp),%eax
400009aa:	88 45 fc             	mov    %al,-0x4(%ebp)
400009ad:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
400009b1:	ff 75 10             	pushl  0x10(%ebp)
400009b4:	50                   	push   %eax
400009b5:	ff 75 08             	pushl  0x8(%ebp)
400009b8:	e8 b8 ff ff ff       	call   40000975 <__memset>
400009bd:	83 c4 0c             	add    $0xc,%esp
400009c0:	c9                   	leave  
400009c1:	c3                   	ret    

400009c2 <user_strcat>:
400009c2:	55                   	push   %ebp
400009c3:	89 e5                	mov    %esp,%ebp
400009c5:	83 ec 10             	sub    $0x10,%esp
400009c8:	8b 45 08             	mov    0x8(%ebp),%eax
400009cb:	89 45 fc             	mov    %eax,-0x4(%ebp)
400009ce:	90                   	nop
400009cf:	8b 45 fc             	mov    -0x4(%ebp),%eax
400009d2:	8d 50 01             	lea    0x1(%eax),%edx
400009d5:	89 55 fc             	mov    %edx,-0x4(%ebp)
400009d8:	0f b6 00             	movzbl (%eax),%eax
400009db:	84 c0                	test   %al,%al
400009dd:	75 f0                	jne    400009cf <user_strcat+0xd>
400009df:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
400009e3:	90                   	nop
400009e4:	8b 55 0c             	mov    0xc(%ebp),%edx
400009e7:	8d 42 01             	lea    0x1(%edx),%eax
400009ea:	89 45 0c             	mov    %eax,0xc(%ebp)
400009ed:	8b 45 fc             	mov    -0x4(%ebp),%eax
400009f0:	8d 48 01             	lea    0x1(%eax),%ecx
400009f3:	89 4d fc             	mov    %ecx,-0x4(%ebp)
400009f6:	0f b6 12             	movzbl (%edx),%edx
400009f9:	88 10                	mov    %dl,(%eax)
400009fb:	0f b6 00             	movzbl (%eax),%eax
400009fe:	84 c0                	test   %al,%al
40000a00:	75 e2                	jne    400009e4 <user_strcat+0x22>
40000a02:	8b 45 08             	mov    0x8(%ebp),%eax
40000a05:	c9                   	leave  
40000a06:	c3                   	ret    

40000a07 <__strcmp>:
40000a07:	55                   	push   %ebp
40000a08:	89 e5                	mov    %esp,%ebp
40000a0a:	57                   	push   %edi
40000a0b:	56                   	push   %esi
40000a0c:	83 ec 10             	sub    $0x10,%esp
40000a0f:	8b 55 08             	mov    0x8(%ebp),%edx
40000a12:	8b 45 0c             	mov    0xc(%ebp),%eax
40000a15:	89 d1                	mov    %edx,%ecx
40000a17:	89 c2                	mov    %eax,%edx
40000a19:	89 ce                	mov    %ecx,%esi
40000a1b:	89 d7                	mov    %edx,%edi
40000a1d:	ac                   	lods   %ds:(%esi),%al
40000a1e:	ae                   	scas   %es:(%edi),%al
40000a1f:	75 08                	jne    40000a29 <__strcmp+0x22>
40000a21:	84 c0                	test   %al,%al
40000a23:	75 f8                	jne    40000a1d <__strcmp+0x16>
40000a25:	31 c0                	xor    %eax,%eax
40000a27:	eb 04                	jmp    40000a2d <__strcmp+0x26>
40000a29:	19 c0                	sbb    %eax,%eax
40000a2b:	0c 01                	or     $0x1,%al
40000a2d:	89 fa                	mov    %edi,%edx
40000a2f:	89 f1                	mov    %esi,%ecx
40000a31:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000a34:	89 4d f0             	mov    %ecx,-0x10(%ebp)
40000a37:	89 55 ec             	mov    %edx,-0x14(%ebp)
40000a3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000a3d:	83 c4 10             	add    $0x10,%esp
40000a40:	5e                   	pop    %esi
40000a41:	5f                   	pop    %edi
40000a42:	5d                   	pop    %ebp
40000a43:	c3                   	ret    

40000a44 <user_strcmp>:
40000a44:	55                   	push   %ebp
40000a45:	89 e5                	mov    %esp,%ebp
40000a47:	ff 75 0c             	pushl  0xc(%ebp)
40000a4a:	ff 75 08             	pushl  0x8(%ebp)
40000a4d:	e8 b5 ff ff ff       	call   40000a07 <__strcmp>
40000a52:	83 c4 08             	add    $0x8,%esp
40000a55:	c9                   	leave  
40000a56:	c3                   	ret    

40000a57 <user_strrchr>:
40000a57:	55                   	push   %ebp
40000a58:	89 e5                	mov    %esp,%ebp
40000a5a:	83 ec 14             	sub    $0x14,%esp
40000a5d:	8b 45 0c             	mov    0xc(%ebp),%eax
40000a60:	88 45 ec             	mov    %al,-0x14(%ebp)
40000a63:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000a6a:	eb 1b                	jmp    40000a87 <user_strrchr+0x30>
40000a6c:	8b 45 08             	mov    0x8(%ebp),%eax
40000a6f:	0f b6 00             	movzbl (%eax),%eax
40000a72:	0f be d0             	movsbl %al,%edx
40000a75:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
40000a79:	39 c2                	cmp    %eax,%edx
40000a7b:	75 06                	jne    40000a83 <user_strrchr+0x2c>
40000a7d:	8b 45 08             	mov    0x8(%ebp),%eax
40000a80:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000a83:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000a87:	8b 45 08             	mov    0x8(%ebp),%eax
40000a8a:	0f b6 00             	movzbl (%eax),%eax
40000a8d:	84 c0                	test   %al,%al
40000a8f:	75 db                	jne    40000a6c <user_strrchr+0x15>
40000a91:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000a94:	c9                   	leave  
40000a95:	c3                   	ret    

40000a96 <user_strlen>:
40000a96:	55                   	push   %ebp
40000a97:	89 e5                	mov    %esp,%ebp
40000a99:	83 ec 10             	sub    $0x10,%esp
40000a9c:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000aa3:	eb 04                	jmp    40000aa9 <user_strlen+0x13>
40000aa5:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
40000aa9:	8b 45 08             	mov    0x8(%ebp),%eax
40000aac:	8d 50 01             	lea    0x1(%eax),%edx
40000aaf:	89 55 08             	mov    %edx,0x8(%ebp)
40000ab2:	0f b6 00             	movzbl (%eax),%eax
40000ab5:	84 c0                	test   %al,%al
40000ab7:	75 ec                	jne    40000aa5 <user_strlen+0xf>
40000ab9:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000abc:	c9                   	leave  
40000abd:	c3                   	ret    

40000abe <__memcpy>:
40000abe:	55                   	push   %ebp
40000abf:	89 e5                	mov    %esp,%ebp
40000ac1:	57                   	push   %edi
40000ac2:	56                   	push   %esi
40000ac3:	83 ec 10             	sub    $0x10,%esp
40000ac6:	8b 45 10             	mov    0x10(%ebp),%eax
40000ac9:	c1 e8 02             	shr    $0x2,%eax
40000acc:	89 c1                	mov    %eax,%ecx
40000ace:	8b 55 08             	mov    0x8(%ebp),%edx
40000ad1:	8b 45 0c             	mov    0xc(%ebp),%eax
40000ad4:	89 d7                	mov    %edx,%edi
40000ad6:	89 c6                	mov    %eax,%esi
40000ad8:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
40000ada:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000add:	83 e1 03             	and    $0x3,%ecx
40000ae0:	74 02                	je     40000ae4 <__memcpy+0x26>
40000ae2:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
40000ae4:	89 f0                	mov    %esi,%eax
40000ae6:	89 fa                	mov    %edi,%edx
40000ae8:	89 4d f4             	mov    %ecx,-0xc(%ebp)
40000aeb:	89 55 f0             	mov    %edx,-0x10(%ebp)
40000aee:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000af1:	8b 45 08             	mov    0x8(%ebp),%eax
40000af4:	83 c4 10             	add    $0x10,%esp
40000af7:	5e                   	pop    %esi
40000af8:	5f                   	pop    %edi
40000af9:	5d                   	pop    %ebp
40000afa:	c3                   	ret    

40000afb <user_memcpy>:
40000afb:	55                   	push   %ebp
40000afc:	89 e5                	mov    %esp,%ebp
40000afe:	ff 75 10             	pushl  0x10(%ebp)
40000b01:	ff 75 0c             	pushl  0xc(%ebp)
40000b04:	ff 75 08             	pushl  0x8(%ebp)
40000b07:	e8 b2 ff ff ff       	call   40000abe <__memcpy>
40000b0c:	83 c4 0c             	add    $0xc,%esp
40000b0f:	c9                   	leave  
40000b10:	c3                   	ret    

40000b11 <user_strcpy>:
40000b11:	55                   	push   %ebp
40000b12:	89 e5                	mov    %esp,%ebp
40000b14:	83 ec 10             	sub    $0x10,%esp
40000b17:	8b 45 08             	mov    0x8(%ebp),%eax
40000b1a:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000b1d:	90                   	nop
40000b1e:	8b 55 0c             	mov    0xc(%ebp),%edx
40000b21:	8d 42 01             	lea    0x1(%edx),%eax
40000b24:	89 45 0c             	mov    %eax,0xc(%ebp)
40000b27:	8b 45 08             	mov    0x8(%ebp),%eax
40000b2a:	8d 48 01             	lea    0x1(%eax),%ecx
40000b2d:	89 4d 08             	mov    %ecx,0x8(%ebp)
40000b30:	0f b6 12             	movzbl (%edx),%edx
40000b33:	88 10                	mov    %dl,(%eax)
40000b35:	0f b6 00             	movzbl (%eax),%eax
40000b38:	84 c0                	test   %al,%al
40000b3a:	75 e2                	jne    40000b1e <user_strcpy+0xd>
40000b3c:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000b3f:	c9                   	leave  
40000b40:	c3                   	ret    

40000b41 <path_parse>:
40000b41:	55                   	push   %ebp
40000b42:	89 e5                	mov    %esp,%ebp
40000b44:	8b 45 08             	mov    0x8(%ebp),%eax
40000b47:	0f b6 00             	movzbl (%eax),%eax
40000b4a:	3c 2f                	cmp    $0x2f,%al
40000b4c:	75 27                	jne    40000b75 <path_parse+0x34>
40000b4e:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000b52:	8b 45 08             	mov    0x8(%ebp),%eax
40000b55:	0f b6 00             	movzbl (%eax),%eax
40000b58:	3c 2f                	cmp    $0x2f,%al
40000b5a:	74 f2                	je     40000b4e <path_parse+0xd>
40000b5c:	eb 17                	jmp    40000b75 <path_parse+0x34>
40000b5e:	8b 55 08             	mov    0x8(%ebp),%edx
40000b61:	8d 42 01             	lea    0x1(%edx),%eax
40000b64:	89 45 08             	mov    %eax,0x8(%ebp)
40000b67:	8b 45 0c             	mov    0xc(%ebp),%eax
40000b6a:	8d 48 01             	lea    0x1(%eax),%ecx
40000b6d:	89 4d 0c             	mov    %ecx,0xc(%ebp)
40000b70:	0f b6 12             	movzbl (%edx),%edx
40000b73:	88 10                	mov    %dl,(%eax)
40000b75:	8b 45 08             	mov    0x8(%ebp),%eax
40000b78:	0f b6 00             	movzbl (%eax),%eax
40000b7b:	3c 2f                	cmp    $0x2f,%al
40000b7d:	74 0a                	je     40000b89 <path_parse+0x48>
40000b7f:	8b 45 08             	mov    0x8(%ebp),%eax
40000b82:	0f b6 00             	movzbl (%eax),%eax
40000b85:	84 c0                	test   %al,%al
40000b87:	75 d5                	jne    40000b5e <path_parse+0x1d>
40000b89:	8b 45 08             	mov    0x8(%ebp),%eax
40000b8c:	0f b6 00             	movzbl (%eax),%eax
40000b8f:	84 c0                	test   %al,%al
40000b91:	75 07                	jne    40000b9a <path_parse+0x59>
40000b93:	b8 00 00 00 00       	mov    $0x0,%eax
40000b98:	eb 03                	jmp    40000b9d <path_parse+0x5c>
40000b9a:	8b 45 08             	mov    0x8(%ebp),%eax
40000b9d:	5d                   	pop    %ebp
40000b9e:	c3                   	ret    

40000b9f <wash_path>:
40000b9f:	55                   	push   %ebp
40000ba0:	89 e5                	mov    %esp,%ebp
40000ba2:	83 ec 28             	sub    $0x28,%esp
40000ba5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
40000bac:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
40000bb3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
40000bba:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
40000bc1:	8b 45 08             	mov    0x8(%ebp),%eax
40000bc4:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000bc7:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000bca:	50                   	push   %eax
40000bcb:	ff 75 f4             	pushl  -0xc(%ebp)
40000bce:	e8 6e ff ff ff       	call   40000b41 <path_parse>
40000bd3:	83 c4 08             	add    $0x8,%esp
40000bd6:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000bd9:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000bdd:	84 c0                	test   %al,%al
40000bdf:	75 14                	jne    40000bf5 <wash_path+0x56>
40000be1:	8b 45 0c             	mov    0xc(%ebp),%eax
40000be4:	c6 00 2f             	movb   $0x2f,(%eax)
40000be7:	8b 45 0c             	mov    0xc(%ebp),%eax
40000bea:	83 c0 01             	add    $0x1,%eax
40000bed:	c6 00 00             	movb   $0x0,(%eax)
40000bf0:	e9 f2 00 00 00       	jmp    40000ce7 <wash_path+0x148>
40000bf5:	8b 45 0c             	mov    0xc(%ebp),%eax
40000bf8:	c6 00 00             	movb   $0x0,(%eax)
40000bfb:	83 ec 08             	sub    $0x8,%esp
40000bfe:	68 04 16 00 40       	push   $0x40001604
40000c03:	ff 75 0c             	pushl  0xc(%ebp)
40000c06:	e8 b7 fd ff ff       	call   400009c2 <user_strcat>
40000c0b:	83 c4 10             	add    $0x10,%esp
40000c0e:	e9 c8 00 00 00       	jmp    40000cdb <wash_path+0x13c>
40000c13:	83 ec 08             	sub    $0x8,%esp
40000c16:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000c19:	50                   	push   %eax
40000c1a:	68 06 16 00 40       	push   $0x40001606
40000c1f:	e8 20 fe ff ff       	call   40000a44 <user_strcmp>
40000c24:	83 c4 10             	add    $0x10,%esp
40000c27:	85 c0                	test   %eax,%eax
40000c29:	75 2e                	jne    40000c59 <wash_path+0xba>
40000c2b:	83 ec 08             	sub    $0x8,%esp
40000c2e:	6a 2f                	push   $0x2f
40000c30:	ff 75 0c             	pushl  0xc(%ebp)
40000c33:	e8 1f fe ff ff       	call   40000a57 <user_strrchr>
40000c38:	83 c4 10             	add    $0x10,%esp
40000c3b:	89 45 f0             	mov    %eax,-0x10(%ebp)
40000c3e:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000c41:	3b 45 0c             	cmp    0xc(%ebp),%eax
40000c44:	74 08                	je     40000c4e <wash_path+0xaf>
40000c46:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000c49:	c6 00 00             	movb   $0x0,(%eax)
40000c4c:	eb 5f                	jmp    40000cad <wash_path+0x10e>
40000c4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000c51:	83 c0 01             	add    $0x1,%eax
40000c54:	c6 00 00             	movb   $0x0,(%eax)
40000c57:	eb 54                	jmp    40000cad <wash_path+0x10e>
40000c59:	83 ec 08             	sub    $0x8,%esp
40000c5c:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000c5f:	50                   	push   %eax
40000c60:	68 09 16 00 40       	push   $0x40001609
40000c65:	e8 da fd ff ff       	call   40000a44 <user_strcmp>
40000c6a:	83 c4 10             	add    $0x10,%esp
40000c6d:	85 c0                	test   %eax,%eax
40000c6f:	74 3c                	je     40000cad <wash_path+0x10e>
40000c71:	83 ec 08             	sub    $0x8,%esp
40000c74:	68 04 16 00 40       	push   $0x40001604
40000c79:	ff 75 0c             	pushl  0xc(%ebp)
40000c7c:	e8 c3 fd ff ff       	call   40000a44 <user_strcmp>
40000c81:	83 c4 10             	add    $0x10,%esp
40000c84:	85 c0                	test   %eax,%eax
40000c86:	74 13                	je     40000c9b <wash_path+0xfc>
40000c88:	83 ec 08             	sub    $0x8,%esp
40000c8b:	68 04 16 00 40       	push   $0x40001604
40000c90:	ff 75 0c             	pushl  0xc(%ebp)
40000c93:	e8 2a fd ff ff       	call   400009c2 <user_strcat>
40000c98:	83 c4 10             	add    $0x10,%esp
40000c9b:	83 ec 08             	sub    $0x8,%esp
40000c9e:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000ca1:	50                   	push   %eax
40000ca2:	ff 75 0c             	pushl  0xc(%ebp)
40000ca5:	e8 18 fd ff ff       	call   400009c2 <user_strcat>
40000caa:	83 c4 10             	add    $0x10,%esp
40000cad:	83 ec 04             	sub    $0x4,%esp
40000cb0:	6a 10                	push   $0x10
40000cb2:	6a 00                	push   $0x0
40000cb4:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000cb7:	50                   	push   %eax
40000cb8:	e8 e4 fc ff ff       	call   400009a1 <user_memset>
40000cbd:	83 c4 10             	add    $0x10,%esp
40000cc0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
40000cc4:	74 15                	je     40000cdb <wash_path+0x13c>
40000cc6:	83 ec 08             	sub    $0x8,%esp
40000cc9:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000ccc:	50                   	push   %eax
40000ccd:	ff 75 f4             	pushl  -0xc(%ebp)
40000cd0:	e8 6c fe ff ff       	call   40000b41 <path_parse>
40000cd5:	83 c4 10             	add    $0x10,%esp
40000cd8:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000cdb:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000cdf:	84 c0                	test   %al,%al
40000ce1:	0f 85 2c ff ff ff    	jne    40000c13 <wash_path+0x74>
40000ce7:	c9                   	leave  
40000ce8:	c3                   	ret    

40000ce9 <make_clear_abs_path>:
40000ce9:	55                   	push   %ebp
40000cea:	89 e5                	mov    %esp,%ebp
40000cec:	57                   	push   %edi
40000ced:	81 ec 04 02 00 00    	sub    $0x204,%esp
40000cf3:	c7 85 f8 fd ff ff 00 	movl   $0x0,-0x208(%ebp)
40000cfa:	00 00 00 
40000cfd:	8d 95 fc fd ff ff    	lea    -0x204(%ebp),%edx
40000d03:	b8 00 00 00 00       	mov    $0x0,%eax
40000d08:	b9 7f 00 00 00       	mov    $0x7f,%ecx
40000d0d:	89 d7                	mov    %edx,%edi
40000d0f:	f3 ab                	rep stos %eax,%es:(%edi)
40000d11:	8b 45 08             	mov    0x8(%ebp),%eax
40000d14:	0f b6 00             	movzbl (%eax),%eax
40000d17:	3c 2f                	cmp    $0x2f,%al
40000d19:	74 61                	je     40000d7c <make_clear_abs_path+0x93>
40000d1b:	83 ec 04             	sub    $0x4,%esp
40000d1e:	68 00 02 00 00       	push   $0x200
40000d23:	6a 00                	push   $0x0
40000d25:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000d2b:	50                   	push   %eax
40000d2c:	e8 70 fc ff ff       	call   400009a1 <user_memset>
40000d31:	83 c4 10             	add    $0x10,%esp
40000d34:	83 ec 08             	sub    $0x8,%esp
40000d37:	68 00 02 00 00       	push   $0x200
40000d3c:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000d42:	50                   	push   %eax
40000d43:	e8 e8 f4 ff ff       	call   40000230 <getcwd>
40000d48:	83 c4 10             	add    $0x10,%esp
40000d4b:	85 c0                	test   %eax,%eax
40000d4d:	74 2d                	je     40000d7c <make_clear_abs_path+0x93>
40000d4f:	0f b6 85 f8 fd ff ff 	movzbl -0x208(%ebp),%eax
40000d56:	3c 2f                	cmp    $0x2f,%al
40000d58:	75 0b                	jne    40000d65 <make_clear_abs_path+0x7c>
40000d5a:	0f b6 85 f9 fd ff ff 	movzbl -0x207(%ebp),%eax
40000d61:	84 c0                	test   %al,%al
40000d63:	74 17                	je     40000d7c <make_clear_abs_path+0x93>
40000d65:	83 ec 08             	sub    $0x8,%esp
40000d68:	68 04 16 00 40       	push   $0x40001604
40000d6d:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000d73:	50                   	push   %eax
40000d74:	e8 49 fc ff ff       	call   400009c2 <user_strcat>
40000d79:	83 c4 10             	add    $0x10,%esp
40000d7c:	83 ec 08             	sub    $0x8,%esp
40000d7f:	ff 75 08             	pushl  0x8(%ebp)
40000d82:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000d88:	50                   	push   %eax
40000d89:	e8 34 fc ff ff       	call   400009c2 <user_strcat>
40000d8e:	83 c4 10             	add    $0x10,%esp
40000d91:	83 ec 08             	sub    $0x8,%esp
40000d94:	ff 75 0c             	pushl  0xc(%ebp)
40000d97:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000d9d:	50                   	push   %eax
40000d9e:	e8 fc fd ff ff       	call   40000b9f <wash_path>
40000da3:	83 c4 10             	add    $0x10,%esp
40000da6:	90                   	nop
40000da7:	8b 7d fc             	mov    -0x4(%ebp),%edi
40000daa:	c9                   	leave  
40000dab:	c3                   	ret    

40000dac <buildin_pwd>:
40000dac:	55                   	push   %ebp
40000dad:	89 e5                	mov    %esp,%ebp
40000daf:	83 ec 08             	sub    $0x8,%esp
40000db2:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40000db6:	74 12                	je     40000dca <buildin_pwd+0x1e>
40000db8:	83 ec 0c             	sub    $0xc,%esp
40000dbb:	68 0b 16 00 40       	push   $0x4000160b
40000dc0:	e8 dd f4 ff ff       	call   400002a2 <printf>
40000dc5:	83 c4 10             	add    $0x10,%esp
40000dc8:	eb 40                	jmp    40000e0a <buildin_pwd+0x5e>
40000dca:	83 ec 08             	sub    $0x8,%esp
40000dcd:	68 00 02 00 00       	push   $0x200
40000dd2:	68 a0 1a 00 40       	push   $0x40001aa0
40000dd7:	e8 54 f4 ff ff       	call   40000230 <getcwd>
40000ddc:	83 c4 10             	add    $0x10,%esp
40000ddf:	85 c0                	test   %eax,%eax
40000de1:	74 17                	je     40000dfa <buildin_pwd+0x4e>
40000de3:	83 ec 08             	sub    $0x8,%esp
40000de6:	68 a0 1a 00 40       	push   $0x40001aa0
40000deb:	68 26 16 00 40       	push   $0x40001626
40000df0:	e8 ad f4 ff ff       	call   400002a2 <printf>
40000df5:	83 c4 10             	add    $0x10,%esp
40000df8:	eb 10                	jmp    40000e0a <buildin_pwd+0x5e>
40000dfa:	83 ec 0c             	sub    $0xc,%esp
40000dfd:	68 2c 16 00 40       	push   $0x4000162c
40000e02:	e8 9b f4 ff ff       	call   400002a2 <printf>
40000e07:	83 c4 10             	add    $0x10,%esp
40000e0a:	c9                   	leave  
40000e0b:	c3                   	ret    

40000e0c <buildin_cd>:
40000e0c:	55                   	push   %ebp
40000e0d:	89 e5                	mov    %esp,%ebp
40000e0f:	83 ec 08             	sub    $0x8,%esp
40000e12:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40000e16:	7e 17                	jle    40000e2f <buildin_cd+0x23>
40000e18:	83 ec 0c             	sub    $0xc,%esp
40000e1b:	68 55 16 00 40       	push   $0x40001655
40000e20:	e8 7d f4 ff ff       	call   400002a2 <printf>
40000e25:	83 c4 10             	add    $0x10,%esp
40000e28:	b8 00 00 00 00       	mov    $0x0,%eax
40000e2d:	eb 65                	jmp    40000e94 <buildin_cd+0x88>
40000e2f:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40000e33:	75 10                	jne    40000e45 <buildin_cd+0x39>
40000e35:	c6 05 a0 1a 00 40 2f 	movb   $0x2f,0x40001aa0
40000e3c:	c6 05 a1 1a 00 40 00 	movb   $0x0,0x40001aa1
40000e43:	eb 19                	jmp    40000e5e <buildin_cd+0x52>
40000e45:	8b 45 0c             	mov    0xc(%ebp),%eax
40000e48:	83 c0 04             	add    $0x4,%eax
40000e4b:	8b 00                	mov    (%eax),%eax
40000e4d:	83 ec 08             	sub    $0x8,%esp
40000e50:	68 a0 1a 00 40       	push   $0x40001aa0
40000e55:	50                   	push   %eax
40000e56:	e8 8e fe ff ff       	call   40000ce9 <make_clear_abs_path>
40000e5b:	83 c4 10             	add    $0x10,%esp
40000e5e:	83 ec 0c             	sub    $0xc,%esp
40000e61:	68 a0 1a 00 40       	push   $0x40001aa0
40000e66:	e8 da f3 ff ff       	call   40000245 <chdir>
40000e6b:	83 c4 10             	add    $0x10,%esp
40000e6e:	83 f8 ff             	cmp    $0xffffffff,%eax
40000e71:	75 1c                	jne    40000e8f <buildin_cd+0x83>
40000e73:	83 ec 08             	sub    $0x8,%esp
40000e76:	68 a0 1a 00 40       	push   $0x40001aa0
40000e7b:	68 73 16 00 40       	push   $0x40001673
40000e80:	e8 1d f4 ff ff       	call   400002a2 <printf>
40000e85:	83 c4 10             	add    $0x10,%esp
40000e88:	b8 00 00 00 00       	mov    $0x0,%eax
40000e8d:	eb 05                	jmp    40000e94 <buildin_cd+0x88>
40000e8f:	b8 a0 1a 00 40       	mov    $0x40001aa0,%eax
40000e94:	c9                   	leave  
40000e95:	c3                   	ret    

40000e96 <buildin_ls>:
40000e96:	55                   	push   %ebp
40000e97:	89 e5                	mov    %esp,%ebp
40000e99:	57                   	push   %edi
40000e9a:	53                   	push   %ebx
40000e9b:	81 ec 30 02 00 00    	sub    $0x230,%esp
40000ea1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
40000ea8:	83 ec 04             	sub    $0x4,%esp
40000eab:	6a 0c                	push   $0xc
40000ead:	6a 00                	push   $0x0
40000eaf:	8d 45 c8             	lea    -0x38(%ebp),%eax
40000eb2:	50                   	push   %eax
40000eb3:	e8 e9 fa ff ff       	call   400009a1 <user_memset>
40000eb8:	83 c4 10             	add    $0x10,%esp
40000ebb:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
40000ebf:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
40000ec6:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
40000ecd:	e9 e9 00 00 00       	jmp    40000fbb <buildin_ls+0x125>
40000ed2:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000ed5:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000edc:	8b 45 0c             	mov    0xc(%ebp),%eax
40000edf:	01 d0                	add    %edx,%eax
40000ee1:	8b 00                	mov    (%eax),%eax
40000ee3:	0f b6 00             	movzbl (%eax),%eax
40000ee6:	3c 2d                	cmp    $0x2d,%al
40000ee8:	0f 85 91 00 00 00    	jne    40000f7f <buildin_ls+0xe9>
40000eee:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000ef1:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000ef8:	8b 45 0c             	mov    0xc(%ebp),%eax
40000efb:	01 d0                	add    %edx,%eax
40000efd:	8b 00                	mov    (%eax),%eax
40000eff:	83 ec 08             	sub    $0x8,%esp
40000f02:	50                   	push   %eax
40000f03:	68 8d 16 00 40       	push   $0x4000168d
40000f08:	e8 37 fb ff ff       	call   40000a44 <user_strcmp>
40000f0d:	83 c4 10             	add    $0x10,%esp
40000f10:	85 c0                	test   %eax,%eax
40000f12:	75 09                	jne    40000f1d <buildin_ls+0x87>
40000f14:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
40000f18:	e9 9a 00 00 00       	jmp    40000fb7 <buildin_ls+0x121>
40000f1d:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000f20:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000f27:	8b 45 0c             	mov    0xc(%ebp),%eax
40000f2a:	01 d0                	add    %edx,%eax
40000f2c:	8b 00                	mov    (%eax),%eax
40000f2e:	83 ec 08             	sub    $0x8,%esp
40000f31:	50                   	push   %eax
40000f32:	68 90 16 00 40       	push   $0x40001690
40000f37:	e8 08 fb ff ff       	call   40000a44 <user_strcmp>
40000f3c:	83 c4 10             	add    $0x10,%esp
40000f3f:	85 c0                	test   %eax,%eax
40000f41:	75 15                	jne    40000f58 <buildin_ls+0xc2>
40000f43:	83 ec 0c             	sub    $0xc,%esp
40000f46:	68 94 16 00 40       	push   $0x40001694
40000f4b:	e8 52 f3 ff ff       	call   400002a2 <printf>
40000f50:	83 c4 10             	add    $0x10,%esp
40000f53:	e9 fc 02 00 00       	jmp    40001254 <buildin_ls+0x3be>
40000f58:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000f5b:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000f62:	8b 45 0c             	mov    0xc(%ebp),%eax
40000f65:	01 d0                	add    %edx,%eax
40000f67:	8b 00                	mov    (%eax),%eax
40000f69:	83 ec 08             	sub    $0x8,%esp
40000f6c:	50                   	push   %eax
40000f6d:	68 04 17 00 40       	push   $0x40001704
40000f72:	e8 2b f3 ff ff       	call   400002a2 <printf>
40000f77:	83 c4 10             	add    $0x10,%esp
40000f7a:	e9 d5 02 00 00       	jmp    40001254 <buildin_ls+0x3be>
40000f7f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
40000f83:	75 1d                	jne    40000fa2 <buildin_ls+0x10c>
40000f85:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000f88:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000f8f:	8b 45 0c             	mov    0xc(%ebp),%eax
40000f92:	01 d0                	add    %edx,%eax
40000f94:	8b 00                	mov    (%eax),%eax
40000f96:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000f99:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
40000fa0:	eb 15                	jmp    40000fb7 <buildin_ls+0x121>
40000fa2:	83 ec 0c             	sub    $0xc,%esp
40000fa5:	68 3d 17 00 40       	push   $0x4000173d
40000faa:	e8 f3 f2 ff ff       	call   400002a2 <printf>
40000faf:	83 c4 10             	add    $0x10,%esp
40000fb2:	e9 9d 02 00 00       	jmp    40001254 <buildin_ls+0x3be>
40000fb7:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
40000fbb:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000fbe:	3b 45 08             	cmp    0x8(%ebp),%eax
40000fc1:	0f 8c 0b ff ff ff    	jl     40000ed2 <buildin_ls+0x3c>
40000fc7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
40000fcb:	75 37                	jne    40001004 <buildin_ls+0x16e>
40000fcd:	83 ec 08             	sub    $0x8,%esp
40000fd0:	68 00 02 00 00       	push   $0x200
40000fd5:	68 a0 1a 00 40       	push   $0x40001aa0
40000fda:	e8 51 f2 ff ff       	call   40000230 <getcwd>
40000fdf:	83 c4 10             	add    $0x10,%esp
40000fe2:	85 c0                	test   %eax,%eax
40000fe4:	74 09                	je     40000fef <buildin_ls+0x159>
40000fe6:	c7 45 f4 a0 1a 00 40 	movl   $0x40001aa0,-0xc(%ebp)
40000fed:	eb 2f                	jmp    4000101e <buildin_ls+0x188>
40000fef:	83 ec 0c             	sub    $0xc,%esp
40000ff2:	68 58 17 00 40       	push   $0x40001758
40000ff7:	e8 a6 f2 ff ff       	call   400002a2 <printf>
40000ffc:	83 c4 10             	add    $0x10,%esp
40000fff:	e9 50 02 00 00       	jmp    40001254 <buildin_ls+0x3be>
40001004:	83 ec 08             	sub    $0x8,%esp
40001007:	68 a0 1a 00 40       	push   $0x40001aa0
4000100c:	ff 75 f4             	pushl  -0xc(%ebp)
4000100f:	e8 d5 fc ff ff       	call   40000ce9 <make_clear_abs_path>
40001014:	83 c4 10             	add    $0x10,%esp
40001017:	c7 45 f4 a0 1a 00 40 	movl   $0x40001aa0,-0xc(%ebp)
4000101e:	83 ec 08             	sub    $0x8,%esp
40001021:	8d 45 c8             	lea    -0x38(%ebp),%eax
40001024:	50                   	push   %eax
40001025:	ff 75 f4             	pushl  -0xc(%ebp)
40001028:	e8 2a f2 ff ff       	call   40000257 <stat>
4000102d:	83 c4 10             	add    $0x10,%esp
40001030:	83 f8 ff             	cmp    $0xffffffff,%eax
40001033:	75 18                	jne    4000104d <buildin_ls+0x1b7>
40001035:	83 ec 08             	sub    $0x8,%esp
40001038:	ff 75 f4             	pushl  -0xc(%ebp)
4000103b:	68 7c 17 00 40       	push   $0x4000177c
40001040:	e8 5d f2 ff ff       	call   400002a2 <printf>
40001045:	83 c4 10             	add    $0x10,%esp
40001048:	e9 07 02 00 00       	jmp    40001254 <buildin_ls+0x3be>
4000104d:	8b 45 d0             	mov    -0x30(%ebp),%eax
40001050:	83 f8 02             	cmp    $0x2,%eax
40001053:	0f 85 c8 01 00 00    	jne    40001221 <buildin_ls+0x38b>
40001059:	83 ec 0c             	sub    $0xc,%esp
4000105c:	ff 75 f4             	pushl  -0xc(%ebp)
4000105f:	e8 08 f2 ff ff       	call   4000026c <opendir>
40001064:	83 c4 10             	add    $0x10,%esp
40001067:	89 45 dc             	mov    %eax,-0x24(%ebp)
4000106a:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
40001071:	c7 85 c8 fd ff ff 00 	movl   $0x0,-0x238(%ebp)
40001078:	00 00 00 
4000107b:	8d 95 cc fd ff ff    	lea    -0x234(%ebp),%edx
40001081:	b8 00 00 00 00       	mov    $0x0,%eax
40001086:	b9 7f 00 00 00       	mov    $0x7f,%ecx
4000108b:	89 d7                	mov    %edx,%edi
4000108d:	f3 ab                	rep stos %eax,%es:(%edi)
4000108f:	83 ec 0c             	sub    $0xc,%esp
40001092:	ff 75 f4             	pushl  -0xc(%ebp)
40001095:	e8 fc f9 ff ff       	call   40000a96 <user_strlen>
4000109a:	83 c4 10             	add    $0x10,%esp
4000109d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
400010a0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
400010a3:	83 e8 01             	sub    $0x1,%eax
400010a6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
400010a9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
400010ac:	83 ec 04             	sub    $0x4,%esp
400010af:	50                   	push   %eax
400010b0:	ff 75 f4             	pushl  -0xc(%ebp)
400010b3:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
400010b9:	50                   	push   %eax
400010ba:	e8 3c fa ff ff       	call   40000afb <user_memcpy>
400010bf:	83 c4 10             	add    $0x10,%esp
400010c2:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
400010c8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
400010cb:	01 d0                	add    %edx,%eax
400010cd:	0f b6 00             	movzbl (%eax),%eax
400010d0:	3c 2f                	cmp    $0x2f,%al
400010d2:	74 12                	je     400010e6 <buildin_ls+0x250>
400010d4:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
400010da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
400010dd:	01 d0                	add    %edx,%eax
400010df:	c6 00 2f             	movb   $0x2f,(%eax)
400010e2:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
400010e6:	83 ec 0c             	sub    $0xc,%esp
400010e9:	ff 75 dc             	pushl  -0x24(%ebp)
400010ec:	e8 2c f1 ff ff       	call   4000021d <rewinddir>
400010f1:	83 c4 10             	add    $0x10,%esp
400010f4:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400010f8:	0f 84 ec 00 00 00    	je     400011ea <buildin_ls+0x354>
400010fe:	8b 45 cc             	mov    -0x34(%ebp),%eax
40001101:	83 ec 08             	sub    $0x8,%esp
40001104:	50                   	push   %eax
40001105:	68 ad 17 00 40       	push   $0x400017ad
4000110a:	e8 93 f1 ff ff       	call   400002a2 <printf>
4000110f:	83 c4 10             	add    $0x10,%esp
40001112:	e9 a2 00 00 00       	jmp    400011b9 <buildin_ls+0x323>
40001117:	c6 45 e3 64          	movb   $0x64,-0x1d(%ebp)
4000111b:	8b 45 d8             	mov    -0x28(%ebp),%eax
4000111e:	8b 40 14             	mov    0x14(%eax),%eax
40001121:	83 f8 01             	cmp    $0x1,%eax
40001124:	75 04                	jne    4000112a <buildin_ls+0x294>
40001126:	c6 45 e3 2d          	movb   $0x2d,-0x1d(%ebp)
4000112a:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
40001130:	8b 45 e4             	mov    -0x1c(%ebp),%eax
40001133:	01 d0                	add    %edx,%eax
40001135:	c6 00 00             	movb   $0x0,(%eax)
40001138:	8b 45 d8             	mov    -0x28(%ebp),%eax
4000113b:	83 ec 08             	sub    $0x8,%esp
4000113e:	50                   	push   %eax
4000113f:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
40001145:	50                   	push   %eax
40001146:	e8 77 f8 ff ff       	call   400009c2 <user_strcat>
4000114b:	83 c4 10             	add    $0x10,%esp
4000114e:	83 ec 04             	sub    $0x4,%esp
40001151:	6a 0c                	push   $0xc
40001153:	6a 00                	push   $0x0
40001155:	8d 45 c8             	lea    -0x38(%ebp),%eax
40001158:	50                   	push   %eax
40001159:	e8 43 f8 ff ff       	call   400009a1 <user_memset>
4000115e:	83 c4 10             	add    $0x10,%esp
40001161:	83 ec 08             	sub    $0x8,%esp
40001164:	8d 45 c8             	lea    -0x38(%ebp),%eax
40001167:	50                   	push   %eax
40001168:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
4000116e:	50                   	push   %eax
4000116f:	e8 e3 f0 ff ff       	call   40000257 <stat>
40001174:	83 c4 10             	add    $0x10,%esp
40001177:	83 f8 ff             	cmp    $0xffffffff,%eax
4000117a:	75 19                	jne    40001195 <buildin_ls+0x2ff>
4000117c:	8b 45 d8             	mov    -0x28(%ebp),%eax
4000117f:	83 ec 08             	sub    $0x8,%esp
40001182:	50                   	push   %eax
40001183:	68 7c 17 00 40       	push   $0x4000177c
40001188:	e8 15 f1 ff ff       	call   400002a2 <printf>
4000118d:	83 c4 10             	add    $0x10,%esp
40001190:	e9 bf 00 00 00       	jmp    40001254 <buildin_ls+0x3be>
40001195:	8b 5d d8             	mov    -0x28(%ebp),%ebx
40001198:	8b 4d cc             	mov    -0x34(%ebp),%ecx
4000119b:	8b 45 d8             	mov    -0x28(%ebp),%eax
4000119e:	8b 50 10             	mov    0x10(%eax),%edx
400011a1:	0f be 45 e3          	movsbl -0x1d(%ebp),%eax
400011a5:	83 ec 0c             	sub    $0xc,%esp
400011a8:	53                   	push   %ebx
400011a9:	51                   	push   %ecx
400011aa:	52                   	push   %edx
400011ab:	50                   	push   %eax
400011ac:	68 b8 17 00 40       	push   $0x400017b8
400011b1:	e8 ec f0 ff ff       	call   400002a2 <printf>
400011b6:	83 c4 20             	add    $0x20,%esp
400011b9:	83 ec 0c             	sub    $0xc,%esp
400011bc:	ff 75 dc             	pushl  -0x24(%ebp)
400011bf:	e8 cc f0 ff ff       	call   40000290 <readdir>
400011c4:	83 c4 10             	add    $0x10,%esp
400011c7:	89 45 d8             	mov    %eax,-0x28(%ebp)
400011ca:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
400011ce:	0f 85 43 ff ff ff    	jne    40001117 <buildin_ls+0x281>
400011d4:	eb 3b                	jmp    40001211 <buildin_ls+0x37b>
400011d6:	8b 45 d8             	mov    -0x28(%ebp),%eax
400011d9:	83 ec 08             	sub    $0x8,%esp
400011dc:	50                   	push   %eax
400011dd:	68 c8 17 00 40       	push   $0x400017c8
400011e2:	e8 bb f0 ff ff       	call   400002a2 <printf>
400011e7:	83 c4 10             	add    $0x10,%esp
400011ea:	83 ec 0c             	sub    $0xc,%esp
400011ed:	ff 75 dc             	pushl  -0x24(%ebp)
400011f0:	e8 9b f0 ff ff       	call   40000290 <readdir>
400011f5:	83 c4 10             	add    $0x10,%esp
400011f8:	89 45 d8             	mov    %eax,-0x28(%ebp)
400011fb:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
400011ff:	75 d5                	jne    400011d6 <buildin_ls+0x340>
40001201:	83 ec 0c             	sub    $0xc,%esp
40001204:	68 cc 17 00 40       	push   $0x400017cc
40001209:	e8 94 f0 ff ff       	call   400002a2 <printf>
4000120e:	83 c4 10             	add    $0x10,%esp
40001211:	83 ec 0c             	sub    $0xc,%esp
40001214:	ff 75 dc             	pushl  -0x24(%ebp)
40001217:	e8 62 f0 ff ff       	call   4000027e <closedir>
4000121c:	83 c4 10             	add    $0x10,%esp
4000121f:	eb 33                	jmp    40001254 <buildin_ls+0x3be>
40001221:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40001225:	74 1a                	je     40001241 <buildin_ls+0x3ab>
40001227:	8b 55 cc             	mov    -0x34(%ebp),%edx
4000122a:	8b 45 c8             	mov    -0x38(%ebp),%eax
4000122d:	ff 75 f4             	pushl  -0xc(%ebp)
40001230:	52                   	push   %edx
40001231:	50                   	push   %eax
40001232:	68 ce 17 00 40       	push   $0x400017ce
40001237:	e8 66 f0 ff ff       	call   400002a2 <printf>
4000123c:	83 c4 10             	add    $0x10,%esp
4000123f:	eb 13                	jmp    40001254 <buildin_ls+0x3be>
40001241:	83 ec 08             	sub    $0x8,%esp
40001244:	ff 75 f4             	pushl  -0xc(%ebp)
40001247:	68 26 16 00 40       	push   $0x40001626
4000124c:	e8 51 f0 ff ff       	call   400002a2 <printf>
40001251:	83 c4 10             	add    $0x10,%esp
40001254:	8d 65 f8             	lea    -0x8(%ebp),%esp
40001257:	5b                   	pop    %ebx
40001258:	5f                   	pop    %edi
40001259:	5d                   	pop    %ebp
4000125a:	c3                   	ret    

4000125b <buildin_mkdir>:
4000125b:	55                   	push   %ebp
4000125c:	89 e5                	mov    %esp,%ebp
4000125e:	83 ec 18             	sub    $0x18,%esp
40001261:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
40001268:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
4000126c:	74 12                	je     40001280 <buildin_mkdir+0x25>
4000126e:	83 ec 0c             	sub    $0xc,%esp
40001271:	68 e0 17 00 40       	push   $0x400017e0
40001276:	e8 27 f0 ff ff       	call   400002a2 <printf>
4000127b:	83 c4 10             	add    $0x10,%esp
4000127e:	eb 68                	jmp    400012e8 <buildin_mkdir+0x8d>
40001280:	8b 45 0c             	mov    0xc(%ebp),%eax
40001283:	83 c0 04             	add    $0x4,%eax
40001286:	8b 00                	mov    (%eax),%eax
40001288:	83 ec 08             	sub    $0x8,%esp
4000128b:	68 a0 1a 00 40       	push   $0x40001aa0
40001290:	50                   	push   %eax
40001291:	e8 53 fa ff ff       	call   40000ce9 <make_clear_abs_path>
40001296:	83 c4 10             	add    $0x10,%esp
40001299:	83 ec 08             	sub    $0x8,%esp
4000129c:	68 a0 1a 00 40       	push   $0x40001aa0
400012a1:	68 04 16 00 40       	push   $0x40001604
400012a6:	e8 99 f7 ff ff       	call   40000a44 <user_strcmp>
400012ab:	83 c4 10             	add    $0x10,%esp
400012ae:	85 c0                	test   %eax,%eax
400012b0:	74 36                	je     400012e8 <buildin_mkdir+0x8d>
400012b2:	83 ec 0c             	sub    $0xc,%esp
400012b5:	68 a0 1a 00 40       	push   $0x40001aa0
400012ba:	e8 3a ef ff ff       	call   400001f9 <mkdir>
400012bf:	83 c4 10             	add    $0x10,%esp
400012c2:	85 c0                	test   %eax,%eax
400012c4:	75 09                	jne    400012cf <buildin_mkdir+0x74>
400012c6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400012cd:	eb 19                	jmp    400012e8 <buildin_mkdir+0x8d>
400012cf:	8b 45 0c             	mov    0xc(%ebp),%eax
400012d2:	83 c0 04             	add    $0x4,%eax
400012d5:	8b 00                	mov    (%eax),%eax
400012d7:	83 ec 08             	sub    $0x8,%esp
400012da:	50                   	push   %eax
400012db:	68 04 18 00 40       	push   $0x40001804
400012e0:	e8 bd ef ff ff       	call   400002a2 <printf>
400012e5:	83 c4 10             	add    $0x10,%esp
400012e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
400012eb:	c9                   	leave  
400012ec:	c3                   	ret    

400012ed <buildin_rmdir>:
400012ed:	55                   	push   %ebp
400012ee:	89 e5                	mov    %esp,%ebp
400012f0:	83 ec 18             	sub    $0x18,%esp
400012f3:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
400012fa:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
400012fe:	74 12                	je     40001312 <buildin_rmdir+0x25>
40001300:	83 ec 0c             	sub    $0xc,%esp
40001303:	68 28 18 00 40       	push   $0x40001828
40001308:	e8 95 ef ff ff       	call   400002a2 <printf>
4000130d:	83 c4 10             	add    $0x10,%esp
40001310:	eb 68                	jmp    4000137a <buildin_rmdir+0x8d>
40001312:	8b 45 0c             	mov    0xc(%ebp),%eax
40001315:	83 c0 04             	add    $0x4,%eax
40001318:	8b 00                	mov    (%eax),%eax
4000131a:	83 ec 08             	sub    $0x8,%esp
4000131d:	68 a0 1a 00 40       	push   $0x40001aa0
40001322:	50                   	push   %eax
40001323:	e8 c1 f9 ff ff       	call   40000ce9 <make_clear_abs_path>
40001328:	83 c4 10             	add    $0x10,%esp
4000132b:	83 ec 08             	sub    $0x8,%esp
4000132e:	68 a0 1a 00 40       	push   $0x40001aa0
40001333:	68 04 16 00 40       	push   $0x40001604
40001338:	e8 07 f7 ff ff       	call   40000a44 <user_strcmp>
4000133d:	83 c4 10             	add    $0x10,%esp
40001340:	85 c0                	test   %eax,%eax
40001342:	74 36                	je     4000137a <buildin_rmdir+0x8d>
40001344:	83 ec 0c             	sub    $0xc,%esp
40001347:	68 a0 1a 00 40       	push   $0x40001aa0
4000134c:	e8 ba ee ff ff       	call   4000020b <rmdir>
40001351:	83 c4 10             	add    $0x10,%esp
40001354:	85 c0                	test   %eax,%eax
40001356:	75 09                	jne    40001361 <buildin_rmdir+0x74>
40001358:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000135f:	eb 19                	jmp    4000137a <buildin_rmdir+0x8d>
40001361:	8b 45 0c             	mov    0xc(%ebp),%eax
40001364:	83 c0 04             	add    $0x4,%eax
40001367:	8b 00                	mov    (%eax),%eax
40001369:	83 ec 08             	sub    $0x8,%esp
4000136c:	50                   	push   %eax
4000136d:	68 49 18 00 40       	push   $0x40001849
40001372:	e8 2b ef ff ff       	call   400002a2 <printf>
40001377:	83 c4 10             	add    $0x10,%esp
4000137a:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000137d:	c9                   	leave  
4000137e:	c3                   	ret    

4000137f <buildin_rm>:
4000137f:	55                   	push   %ebp
40001380:	89 e5                	mov    %esp,%ebp
40001382:	83 ec 18             	sub    $0x18,%esp
40001385:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
4000138c:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40001390:	74 12                	je     400013a4 <buildin_rm+0x25>
40001392:	83 ec 0c             	sub    $0xc,%esp
40001395:	68 63 18 00 40       	push   $0x40001863
4000139a:	e8 03 ef ff ff       	call   400002a2 <printf>
4000139f:	83 c4 10             	add    $0x10,%esp
400013a2:	eb 68                	jmp    4000140c <buildin_rm+0x8d>
400013a4:	8b 45 0c             	mov    0xc(%ebp),%eax
400013a7:	83 c0 04             	add    $0x4,%eax
400013aa:	8b 00                	mov    (%eax),%eax
400013ac:	83 ec 08             	sub    $0x8,%esp
400013af:	68 a0 1a 00 40       	push   $0x40001aa0
400013b4:	50                   	push   %eax
400013b5:	e8 2f f9 ff ff       	call   40000ce9 <make_clear_abs_path>
400013ba:	83 c4 10             	add    $0x10,%esp
400013bd:	83 ec 08             	sub    $0x8,%esp
400013c0:	68 a0 1a 00 40       	push   $0x40001aa0
400013c5:	68 04 16 00 40       	push   $0x40001604
400013ca:	e8 75 f6 ff ff       	call   40000a44 <user_strcmp>
400013cf:	83 c4 10             	add    $0x10,%esp
400013d2:	85 c0                	test   %eax,%eax
400013d4:	74 36                	je     4000140c <buildin_rm+0x8d>
400013d6:	83 ec 0c             	sub    $0xc,%esp
400013d9:	68 a0 1a 00 40       	push   $0x40001aa0
400013de:	e8 04 ee ff ff       	call   400001e7 <unlink>
400013e3:	83 c4 10             	add    $0x10,%esp
400013e6:	85 c0                	test   %eax,%eax
400013e8:	75 09                	jne    400013f3 <buildin_rm+0x74>
400013ea:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400013f1:	eb 19                	jmp    4000140c <buildin_rm+0x8d>
400013f3:	8b 45 0c             	mov    0xc(%ebp),%eax
400013f6:	83 c0 04             	add    $0x4,%eax
400013f9:	8b 00                	mov    (%eax),%eax
400013fb:	83 ec 08             	sub    $0x8,%esp
400013fe:	50                   	push   %eax
400013ff:	68 81 18 00 40       	push   $0x40001881
40001404:	e8 99 ee ff ff       	call   400002a2 <printf>
40001409:	83 c4 10             	add    $0x10,%esp
4000140c:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000140f:	c9                   	leave  
40001410:	c3                   	ret    

Disassembly of section .text:

c1000000 <inb>:
c1000000:	55                   	push   %ebp
c1000001:	89 e5                	mov    %esp,%ebp
c1000003:	83 ec 14             	sub    $0x14,%esp
c1000006:	8b 45 08             	mov    0x8(%ebp),%eax
c1000009:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
c100000d:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c1000011:	89 c2                	mov    %eax,%edx
c1000013:	ec                   	in     (%dx),%al
c1000014:	88 45 ff             	mov    %al,-0x1(%ebp)
c1000017:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
c100001b:	c9                   	leave  
c100001c:	c3                   	ret    

c100001d <inw>:
c100001d:	55                   	push   %ebp
c100001e:	89 e5                	mov    %esp,%ebp
c1000020:	83 ec 14             	sub    $0x14,%esp
c1000023:	8b 45 08             	mov    0x8(%ebp),%eax
c1000026:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
c100002a:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c100002e:	89 c2                	mov    %eax,%edx
c1000030:	66 ed                	in     (%dx),%ax
c1000032:	66 89 45 fe          	mov    %ax,-0x2(%ebp)
c1000036:	0f b7 45 fe          	movzwl -0x2(%ebp),%eax
c100003a:	c9                   	leave  
c100003b:	c3                   	ret    

c100003c <outb>:
c100003c:	55                   	push   %ebp
c100003d:	89 e5                	mov    %esp,%ebp
c100003f:	83 ec 08             	sub    $0x8,%esp
c1000042:	8b 45 08             	mov    0x8(%ebp),%eax
c1000045:	8b 55 0c             	mov    0xc(%ebp),%edx
c1000048:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
c100004c:	89 d0                	mov    %edx,%eax
c100004e:	88 45 f8             	mov    %al,-0x8(%ebp)
c1000051:	0f b6 45 f8          	movzbl -0x8(%ebp),%eax
c1000055:	0f b7 55 fc          	movzwl -0x4(%ebp),%edx
c1000059:	ee                   	out    %al,(%dx)
c100005a:	90                   	nop
c100005b:	c9                   	leave  
c100005c:	c3                   	ret    

c100005d <outw>:
c100005d:	55                   	push   %ebp
c100005e:	89 e5                	mov    %esp,%ebp
c1000060:	83 ec 08             	sub    $0x8,%esp
c1000063:	8b 55 08             	mov    0x8(%ebp),%edx
c1000066:	8b 45 0c             	mov    0xc(%ebp),%eax
c1000069:	66 89 55 fc          	mov    %dx,-0x4(%ebp)
c100006d:	66 89 45 f8          	mov    %ax,-0x8(%ebp)
c1000071:	0f b7 45 f8          	movzwl -0x8(%ebp),%eax
c1000075:	0f b7 55 fc          	movzwl -0x4(%ebp),%edx
c1000079:	66 ef                	out    %ax,(%dx)
c100007b:	90                   	nop
c100007c:	c9                   	leave  
c100007d:	c3                   	ret    

c100007e <__memset>:
c100007e:	55                   	push   %ebp
c100007f:	89 e5                	mov    %esp,%ebp
c1000081:	57                   	push   %edi
c1000082:	83 ec 14             	sub    $0x14,%esp
c1000085:	8b 45 0c             	mov    0xc(%ebp),%eax
c1000088:	88 45 e8             	mov    %al,-0x18(%ebp)
c100008b:	8b 4d 10             	mov    0x10(%ebp),%ecx
c100008e:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
c1000092:	8b 55 08             	mov    0x8(%ebp),%edx
c1000095:	89 d7                	mov    %edx,%edi
c1000097:	f3 aa                	rep stos %al,%es:(%edi)
c1000099:	89 fa                	mov    %edi,%edx
c100009b:	89 4d f8             	mov    %ecx,-0x8(%ebp)
c100009e:	89 55 f4             	mov    %edx,-0xc(%ebp)
c10000a1:	8b 45 08             	mov    0x8(%ebp),%eax
c10000a4:	83 c4 14             	add    $0x14,%esp
c10000a7:	5f                   	pop    %edi
c10000a8:	5d                   	pop    %ebp
c10000a9:	c3                   	ret    

c10000aa <memset>:
c10000aa:	55                   	push   %ebp
c10000ab:	89 e5                	mov    %esp,%ebp
c10000ad:	83 ec 04             	sub    $0x4,%esp
c10000b0:	8b 45 0c             	mov    0xc(%ebp),%eax
c10000b3:	88 45 fc             	mov    %al,-0x4(%ebp)
c10000b6:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
c10000ba:	ff 75 10             	pushl  0x10(%ebp)
c10000bd:	50                   	push   %eax
c10000be:	ff 75 08             	pushl  0x8(%ebp)
c10000c1:	e8 b8 ff ff ff       	call   c100007e <__memset>
c10000c6:	83 c4 0c             	add    $0xc,%esp
c10000c9:	c9                   	leave  
c10000ca:	c3                   	ret    

c10000cb <__memcpy>:
c10000cb:	55                   	push   %ebp
c10000cc:	89 e5                	mov    %esp,%ebp
c10000ce:	57                   	push   %edi
c10000cf:	56                   	push   %esi
c10000d0:	83 ec 10             	sub    $0x10,%esp
c10000d3:	8b 45 10             	mov    0x10(%ebp),%eax
c10000d6:	c1 e8 02             	shr    $0x2,%eax
c10000d9:	89 c1                	mov    %eax,%ecx
c10000db:	8b 55 08             	mov    0x8(%ebp),%edx
c10000de:	8b 45 0c             	mov    0xc(%ebp),%eax
c10000e1:	89 d7                	mov    %edx,%edi
c10000e3:	89 c6                	mov    %eax,%esi
c10000e5:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c10000e7:	8b 4d 10             	mov    0x10(%ebp),%ecx
c10000ea:	83 e1 03             	and    $0x3,%ecx
c10000ed:	74 02                	je     c10000f1 <__memcpy+0x26>
c10000ef:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
c10000f1:	89 f0                	mov    %esi,%eax
c10000f3:	89 fa                	mov    %edi,%edx
c10000f5:	89 4d f4             	mov    %ecx,-0xc(%ebp)
c10000f8:	89 55 f0             	mov    %edx,-0x10(%ebp)
c10000fb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10000fe:	8b 45 08             	mov    0x8(%ebp),%eax
c1000101:	83 c4 10             	add    $0x10,%esp
c1000104:	5e                   	pop    %esi
c1000105:	5f                   	pop    %edi
c1000106:	5d                   	pop    %ebp
c1000107:	c3                   	ret    

c1000108 <memcpy>:
c1000108:	55                   	push   %ebp
c1000109:	89 e5                	mov    %esp,%ebp
c100010b:	ff 75 10             	pushl  0x10(%ebp)
c100010e:	ff 75 0c             	pushl  0xc(%ebp)
c1000111:	ff 75 08             	pushl  0x8(%ebp)
c1000114:	e8 b2 ff ff ff       	call   c10000cb <__memcpy>
c1000119:	83 c4 0c             	add    $0xc,%esp
c100011c:	c9                   	leave  
c100011d:	c3                   	ret    

c100011e <strlen>:
c100011e:	55                   	push   %ebp
c100011f:	89 e5                	mov    %esp,%ebp
c1000121:	83 ec 10             	sub    $0x10,%esp
c1000124:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100012b:	eb 04                	jmp    c1000131 <strlen+0x13>
c100012d:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1000131:	8b 45 08             	mov    0x8(%ebp),%eax
c1000134:	8d 50 01             	lea    0x1(%eax),%edx
c1000137:	89 55 08             	mov    %edx,0x8(%ebp)
c100013a:	0f b6 00             	movzbl (%eax),%eax
c100013d:	84 c0                	test   %al,%al
c100013f:	75 ec                	jne    c100012d <strlen+0xf>
c1000141:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000144:	c9                   	leave  
c1000145:	c3                   	ret    

c1000146 <__strcmp>:
c1000146:	55                   	push   %ebp
c1000147:	89 e5                	mov    %esp,%ebp
c1000149:	57                   	push   %edi
c100014a:	56                   	push   %esi
c100014b:	83 ec 10             	sub    $0x10,%esp
c100014e:	8b 55 08             	mov    0x8(%ebp),%edx
c1000151:	8b 45 0c             	mov    0xc(%ebp),%eax
c1000154:	89 d1                	mov    %edx,%ecx
c1000156:	89 c2                	mov    %eax,%edx
c1000158:	89 ce                	mov    %ecx,%esi
c100015a:	89 d7                	mov    %edx,%edi
c100015c:	ac                   	lods   %ds:(%esi),%al
c100015d:	ae                   	scas   %es:(%edi),%al
c100015e:	75 08                	jne    c1000168 <__strcmp+0x22>
c1000160:	84 c0                	test   %al,%al
c1000162:	75 f8                	jne    c100015c <__strcmp+0x16>
c1000164:	31 c0                	xor    %eax,%eax
c1000166:	eb 04                	jmp    c100016c <__strcmp+0x26>
c1000168:	19 c0                	sbb    %eax,%eax
c100016a:	0c 01                	or     $0x1,%al
c100016c:	89 fa                	mov    %edi,%edx
c100016e:	89 f1                	mov    %esi,%ecx
c1000170:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1000173:	89 4d f0             	mov    %ecx,-0x10(%ebp)
c1000176:	89 55 ec             	mov    %edx,-0x14(%ebp)
c1000179:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100017c:	83 c4 10             	add    $0x10,%esp
c100017f:	5e                   	pop    %esi
c1000180:	5f                   	pop    %edi
c1000181:	5d                   	pop    %ebp
c1000182:	c3                   	ret    

c1000183 <strcmp>:
c1000183:	55                   	push   %ebp
c1000184:	89 e5                	mov    %esp,%ebp
c1000186:	ff 75 0c             	pushl  0xc(%ebp)
c1000189:	ff 75 08             	pushl  0x8(%ebp)
c100018c:	e8 b5 ff ff ff       	call   c1000146 <__strcmp>
c1000191:	83 c4 08             	add    $0x8,%esp
c1000194:	c9                   	leave  
c1000195:	c3                   	ret    

c1000196 <strrchr>:
c1000196:	55                   	push   %ebp
c1000197:	89 e5                	mov    %esp,%ebp
c1000199:	83 ec 14             	sub    $0x14,%esp
c100019c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100019f:	88 45 ec             	mov    %al,-0x14(%ebp)
c10001a2:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c10001a9:	eb 1b                	jmp    c10001c6 <strrchr+0x30>
c10001ab:	8b 45 08             	mov    0x8(%ebp),%eax
c10001ae:	0f b6 00             	movzbl (%eax),%eax
c10001b1:	0f be d0             	movsbl %al,%edx
c10001b4:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
c10001b8:	39 c2                	cmp    %eax,%edx
c10001ba:	75 06                	jne    c10001c2 <strrchr+0x2c>
c10001bc:	8b 45 08             	mov    0x8(%ebp),%eax
c10001bf:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10001c2:	83 45 08 01          	addl   $0x1,0x8(%ebp)
c10001c6:	8b 45 08             	mov    0x8(%ebp),%eax
c10001c9:	0f b6 00             	movzbl (%eax),%eax
c10001cc:	84 c0                	test   %al,%al
c10001ce:	75 db                	jne    c10001ab <strrchr+0x15>
c10001d0:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10001d3:	c9                   	leave  
c10001d4:	c3                   	ret    

c10001d5 <strcat>:
c10001d5:	55                   	push   %ebp
c10001d6:	89 e5                	mov    %esp,%ebp
c10001d8:	83 ec 10             	sub    $0x10,%esp
c10001db:	8b 45 08             	mov    0x8(%ebp),%eax
c10001de:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10001e1:	90                   	nop
c10001e2:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10001e5:	8d 50 01             	lea    0x1(%eax),%edx
c10001e8:	89 55 fc             	mov    %edx,-0x4(%ebp)
c10001eb:	0f b6 00             	movzbl (%eax),%eax
c10001ee:	84 c0                	test   %al,%al
c10001f0:	75 f0                	jne    c10001e2 <strcat+0xd>
c10001f2:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c10001f6:	90                   	nop
c10001f7:	8b 55 0c             	mov    0xc(%ebp),%edx
c10001fa:	8d 42 01             	lea    0x1(%edx),%eax
c10001fd:	89 45 0c             	mov    %eax,0xc(%ebp)
c1000200:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000203:	8d 48 01             	lea    0x1(%eax),%ecx
c1000206:	89 4d fc             	mov    %ecx,-0x4(%ebp)
c1000209:	0f b6 12             	movzbl (%edx),%edx
c100020c:	88 10                	mov    %dl,(%eax)
c100020e:	0f b6 00             	movzbl (%eax),%eax
c1000211:	84 c0                	test   %al,%al
c1000213:	75 e2                	jne    c10001f7 <strcat+0x22>
c1000215:	8b 45 08             	mov    0x8(%ebp),%eax
c1000218:	c9                   	leave  
c1000219:	c3                   	ret    

c100021a <strcpy>:
c100021a:	55                   	push   %ebp
c100021b:	89 e5                	mov    %esp,%ebp
c100021d:	83 ec 10             	sub    $0x10,%esp
c1000220:	8b 45 08             	mov    0x8(%ebp),%eax
c1000223:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1000226:	90                   	nop
c1000227:	8b 55 0c             	mov    0xc(%ebp),%edx
c100022a:	8d 42 01             	lea    0x1(%edx),%eax
c100022d:	89 45 0c             	mov    %eax,0xc(%ebp)
c1000230:	8b 45 08             	mov    0x8(%ebp),%eax
c1000233:	8d 48 01             	lea    0x1(%eax),%ecx
c1000236:	89 4d 08             	mov    %ecx,0x8(%ebp)
c1000239:	0f b6 12             	movzbl (%edx),%edx
c100023c:	88 10                	mov    %dl,(%eax)
c100023e:	0f b6 00             	movzbl (%eax),%eax
c1000241:	84 c0                	test   %al,%al
c1000243:	75 e2                	jne    c1000227 <strcpy+0xd>
c1000245:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000248:	c9                   	leave  
c1000249:	c3                   	ret    

c100024a <CPU_INVLPG>:
c100024a:	55                   	push   %ebp
c100024b:	89 e5                	mov    %esp,%ebp
c100024d:	8b 45 08             	mov    0x8(%ebp),%eax
c1000250:	0f 01 38             	invlpg (%eax)
c1000253:	90                   	nop
c1000254:	5d                   	pop    %ebp
c1000255:	c3                   	ret    

c1000256 <lcr3>:
c1000256:	55                   	push   %ebp
c1000257:	89 e5                	mov    %esp,%ebp
c1000259:	8b 45 08             	mov    0x8(%ebp),%eax
c100025c:	0f 22 d8             	mov    %eax,%cr3
c100025f:	90                   	nop
c1000260:	5d                   	pop    %ebp
c1000261:	c3                   	ret    

c1000262 <print_seg>:
c1000262:	55                   	push   %ebp
c1000263:	89 e5                	mov    %esp,%ebp
c1000265:	83 ec 18             	sub    $0x18,%esp
c1000268:	8c 4d f6             	mov    %cs,-0xa(%ebp)
c100026b:	8c 5d f4             	mov    %ds,-0xc(%ebp)
c100026e:	8c 6d f2             	mov    %gs,-0xe(%ebp)
c1000271:	8c 45 f0             	mov    %es,-0x10(%ebp)
c1000274:	8c 65 ee             	mov    %fs,-0x12(%ebp)
c1000277:	8c 55 ec             	mov    %ss,-0x14(%ebp)
c100027a:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c100027e:	0f b7 c0             	movzwl %ax,%eax
c1000281:	83 ec 08             	sub    $0x8,%esp
c1000284:	50                   	push   %eax
c1000285:	68 d4 99 00 c1       	push   $0xc10099d4
c100028a:	e8 39 43 00 00       	call   c10045c8 <printk>
c100028f:	83 c4 10             	add    $0x10,%esp
c1000292:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1000296:	0f b7 c0             	movzwl %ax,%eax
c1000299:	83 ec 08             	sub    $0x8,%esp
c100029c:	50                   	push   %eax
c100029d:	68 dd 99 00 c1       	push   $0xc10099dd
c10002a2:	e8 21 43 00 00       	call   c10045c8 <printk>
c10002a7:	83 c4 10             	add    $0x10,%esp
c10002aa:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c10002ae:	0f b7 c0             	movzwl %ax,%eax
c10002b1:	83 ec 08             	sub    $0x8,%esp
c10002b4:	50                   	push   %eax
c10002b5:	68 e6 99 00 c1       	push   $0xc10099e6
c10002ba:	e8 09 43 00 00       	call   c10045c8 <printk>
c10002bf:	83 c4 10             	add    $0x10,%esp
c10002c2:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
c10002c6:	0f b7 c0             	movzwl %ax,%eax
c10002c9:	83 ec 08             	sub    $0x8,%esp
c10002cc:	50                   	push   %eax
c10002cd:	68 ef 99 00 c1       	push   $0xc10099ef
c10002d2:	e8 f1 42 00 00       	call   c10045c8 <printk>
c10002d7:	83 c4 10             	add    $0x10,%esp
c10002da:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
c10002de:	0f b7 c0             	movzwl %ax,%eax
c10002e1:	83 ec 08             	sub    $0x8,%esp
c10002e4:	50                   	push   %eax
c10002e5:	68 f8 99 00 c1       	push   $0xc10099f8
c10002ea:	e8 d9 42 00 00       	call   c10045c8 <printk>
c10002ef:	83 c4 10             	add    $0x10,%esp
c10002f2:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c10002f6:	0f b7 c0             	movzwl %ax,%eax
c10002f9:	83 ec 08             	sub    $0x8,%esp
c10002fc:	50                   	push   %eax
c10002fd:	68 01 9a 00 c1       	push   $0xc1009a01
c1000302:	e8 c1 42 00 00       	call   c10045c8 <printk>
c1000307:	83 c4 10             	add    $0x10,%esp
c100030a:	90                   	nop
c100030b:	c9                   	leave  
c100030c:	c3                   	ret    

c100030d <__PANIC>:
c100030d:	55                   	push   %ebp
c100030e:	89 e5                	mov    %esp,%ebp
c1000310:	83 ec 08             	sub    $0x8,%esp
c1000313:	e8 18 0a 00 00       	call   c1000d30 <intr_disable>
c1000318:	83 ec 04             	sub    $0x4,%esp
c100031b:	ff 75 0c             	pushl  0xc(%ebp)
c100031e:	ff 75 08             	pushl  0x8(%ebp)
c1000321:	68 0a 9a 00 c1       	push   $0xc1009a0a
c1000326:	e8 9d 42 00 00       	call   c10045c8 <printk>
c100032b:	83 c4 10             	add    $0x10,%esp
c100032e:	83 ec 04             	sub    $0x4,%esp
c1000331:	ff 75 14             	pushl  0x14(%ebp)
c1000334:	ff 75 10             	pushl  0x10(%ebp)
c1000337:	68 28 9a 00 c1       	push   $0xc1009a28
c100033c:	e8 87 42 00 00       	call   c10045c8 <printk>
c1000341:	83 c4 10             	add    $0x10,%esp
c1000344:	e8 02 00 00 00       	call   c100034b <monitor>
c1000349:	eb f9                	jmp    c1000344 <__PANIC+0x37>

c100034b <monitor>:
c100034b:	55                   	push   %ebp
c100034c:	89 e5                	mov    %esp,%ebp
c100034e:	83 ec 18             	sub    $0x18,%esp
c1000351:	c7 05 68 ec 00 c1 00 	movl   $0x0,0xc100ec68
c1000358:	00 00 00 
c100035b:	83 ec 0c             	sub    $0xc,%esp
c100035e:	68 cf 9a 00 c1       	push   $0xc1009acf
c1000363:	e8 fd 01 00 00       	call   c1000565 <readline>
c1000368:	83 c4 10             	add    $0x10,%esp
c100036b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100036e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1000372:	74 e7                	je     c100035b <monitor+0x10>
c1000374:	83 ec 0c             	sub    $0xc,%esp
c1000377:	ff 75 f4             	pushl  -0xc(%ebp)
c100037a:	e8 05 00 00 00       	call   c1000384 <run>
c100037f:	83 c4 10             	add    $0x10,%esp
c1000382:	eb d7                	jmp    c100035b <monitor+0x10>

c1000384 <run>:
c1000384:	55                   	push   %ebp
c1000385:	89 e5                	mov    %esp,%ebp
c1000387:	83 ec 18             	sub    $0x18,%esp
c100038a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1000391:	eb 3f                	jmp    c10003d2 <run+0x4e>
c1000393:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1000396:	89 d0                	mov    %edx,%eax
c1000398:	01 c0                	add    %eax,%eax
c100039a:	01 d0                	add    %edx,%eax
c100039c:	c1 e0 02             	shl    $0x2,%eax
c100039f:	05 00 c0 00 c1       	add    $0xc100c000,%eax
c10003a4:	8b 00                	mov    (%eax),%eax
c10003a6:	83 ec 08             	sub    $0x8,%esp
c10003a9:	50                   	push   %eax
c10003aa:	ff 75 08             	pushl  0x8(%ebp)
c10003ad:	e8 d1 fd ff ff       	call   c1000183 <strcmp>
c10003b2:	83 c4 10             	add    $0x10,%esp
c10003b5:	85 c0                	test   %eax,%eax
c10003b7:	75 15                	jne    c10003ce <run+0x4a>
c10003b9:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10003bc:	89 d0                	mov    %edx,%eax
c10003be:	01 c0                	add    %eax,%eax
c10003c0:	01 d0                	add    %edx,%eax
c10003c2:	c1 e0 02             	shl    $0x2,%eax
c10003c5:	05 08 c0 00 c1       	add    $0xc100c008,%eax
c10003ca:	8b 00                	mov    (%eax),%eax
c10003cc:	ff d0                	call   *%eax
c10003ce:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10003d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10003d5:	83 f8 02             	cmp    $0x2,%eax
c10003d8:	76 b9                	jbe    c1000393 <run+0xf>
c10003da:	90                   	nop
c10003db:	90                   	nop
c10003dc:	c9                   	leave  
c10003dd:	c3                   	ret    

c10003de <instr_hello>:
c10003de:	55                   	push   %ebp
c10003df:	89 e5                	mov    %esp,%ebp
c10003e1:	83 ec 08             	sub    $0x8,%esp
c10003e4:	a1 04 c0 00 c1       	mov    0xc100c004,%eax
c10003e9:	83 ec 08             	sub    $0x8,%esp
c10003ec:	50                   	push   %eax
c10003ed:	68 d2 9a 00 c1       	push   $0xc1009ad2
c10003f2:	e8 d1 41 00 00       	call   c10045c8 <printk>
c10003f7:	83 c4 10             	add    $0x10,%esp
c10003fa:	83 ec 0c             	sub    $0xc,%esp
c10003fd:	68 d8 9a 00 c1       	push   $0xc1009ad8
c1000402:	e8 c1 41 00 00       	call   c10045c8 <printk>
c1000407:	83 c4 10             	add    $0x10,%esp
c100040a:	90                   	nop
c100040b:	c9                   	leave  
c100040c:	c3                   	ret    

c100040d <instr_help>:
c100040d:	55                   	push   %ebp
c100040e:	89 e5                	mov    %esp,%ebp
c1000410:	83 ec 18             	sub    $0x18,%esp
c1000413:	a1 10 c0 00 c1       	mov    0xc100c010,%eax
c1000418:	83 ec 08             	sub    $0x8,%esp
c100041b:	50                   	push   %eax
c100041c:	68 d2 9a 00 c1       	push   $0xc1009ad2
c1000421:	e8 a2 41 00 00       	call   c10045c8 <printk>
c1000426:	83 c4 10             	add    $0x10,%esp
c1000429:	83 ec 0c             	sub    $0xc,%esp
c100042c:	68 08 9b 00 c1       	push   $0xc1009b08
c1000431:	e8 92 41 00 00       	call   c10045c8 <printk>
c1000436:	83 c4 10             	add    $0x10,%esp
c1000439:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1000440:	eb 3c                	jmp    c100047e <instr_help+0x71>
c1000442:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1000445:	89 d0                	mov    %edx,%eax
c1000447:	01 c0                	add    %eax,%eax
c1000449:	01 d0                	add    %edx,%eax
c100044b:	c1 e0 02             	shl    $0x2,%eax
c100044e:	05 04 c0 00 c1       	add    $0xc100c004,%eax
c1000453:	8b 08                	mov    (%eax),%ecx
c1000455:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1000458:	89 d0                	mov    %edx,%eax
c100045a:	01 c0                	add    %eax,%eax
c100045c:	01 d0                	add    %edx,%eax
c100045e:	c1 e0 02             	shl    $0x2,%eax
c1000461:	05 00 c0 00 c1       	add    $0xc100c000,%eax
c1000466:	8b 00                	mov    (%eax),%eax
c1000468:	83 ec 04             	sub    $0x4,%esp
c100046b:	51                   	push   %ecx
c100046c:	50                   	push   %eax
c100046d:	68 27 9b 00 c1       	push   $0xc1009b27
c1000472:	e8 51 41 00 00       	call   c10045c8 <printk>
c1000477:	83 c4 10             	add    $0x10,%esp
c100047a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100047e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000481:	83 f8 02             	cmp    $0x2,%eax
c1000484:	76 bc                	jbe    c1000442 <instr_help+0x35>
c1000486:	90                   	nop
c1000487:	90                   	nop
c1000488:	c9                   	leave  
c1000489:	c3                   	ret    

c100048a <instr_game>:
c100048a:	55                   	push   %ebp
c100048b:	89 e5                	mov    %esp,%ebp
c100048d:	83 ec 18             	sub    $0x18,%esp
c1000490:	c7 45 ec 1c 00 00 00 	movl   $0x1c,-0x14(%ebp)
c1000497:	a1 1c c0 00 c1       	mov    0xc100c01c,%eax
c100049c:	83 ec 08             	sub    $0x8,%esp
c100049f:	50                   	push   %eax
c10004a0:	68 d2 9a 00 c1       	push   $0xc1009ad2
c10004a5:	e8 1e 41 00 00       	call   c10045c8 <printk>
c10004aa:	83 c4 10             	add    $0x10,%esp
c10004ad:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10004b4:	83 ec 0c             	sub    $0xc,%esp
c10004b7:	68 32 9b 00 c1       	push   $0xc1009b32
c10004bc:	e8 a4 00 00 00       	call   c1000565 <readline>
c10004c1:	83 c4 10             	add    $0x10,%esp
c10004c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10004c7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10004cb:	74 e0                	je     c10004ad <instr_game+0x23>
c10004cd:	eb 23                	jmp    c10004f2 <instr_game+0x68>
c10004cf:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10004d2:	89 d0                	mov    %edx,%eax
c10004d4:	c1 e0 02             	shl    $0x2,%eax
c10004d7:	01 d0                	add    %edx,%eax
c10004d9:	01 c0                	add    %eax,%eax
c10004db:	89 c2                	mov    %eax,%edx
c10004dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10004e0:	0f b6 00             	movzbl (%eax),%eax
c10004e3:	0f be c0             	movsbl %al,%eax
c10004e6:	83 e8 30             	sub    $0x30,%eax
c10004e9:	01 d0                	add    %edx,%eax
c10004eb:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10004ee:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10004f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10004f5:	0f b6 00             	movzbl (%eax),%eax
c10004f8:	84 c0                	test   %al,%al
c10004fa:	75 d3                	jne    c10004cf <instr_game+0x45>
c10004fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10004ff:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1000502:	75 12                	jne    c1000516 <instr_game+0x8c>
c1000504:	83 ec 0c             	sub    $0xc,%esp
c1000507:	68 50 9b 00 c1       	push   $0xc1009b50
c100050c:	e8 b7 40 00 00       	call   c10045c8 <printk>
c1000511:	83 c4 10             	add    $0x10,%esp
c1000514:	eb 32                	jmp    c1000548 <instr_game+0xbe>
c1000516:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000519:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c100051c:	7d 15                	jge    c1000533 <instr_game+0xa9>
c100051e:	83 ec 0c             	sub    $0xc,%esp
c1000521:	68 7f 9b 00 c1       	push   $0xc1009b7f
c1000526:	e8 9d 40 00 00       	call   c10045c8 <printk>
c100052b:	83 c4 10             	add    $0x10,%esp
c100052e:	e9 7a ff ff ff       	jmp    c10004ad <instr_game+0x23>
c1000533:	83 ec 0c             	sub    $0xc,%esp
c1000536:	68 97 9b 00 c1       	push   $0xc1009b97
c100053b:	e8 88 40 00 00       	call   c10045c8 <printk>
c1000540:	83 c4 10             	add    $0x10,%esp
c1000543:	e9 65 ff ff ff       	jmp    c10004ad <instr_game+0x23>
c1000548:	90                   	nop
c1000549:	c9                   	leave  
c100054a:	c3                   	ret    

c100054b <getchar>:
c100054b:	55                   	push   %ebp
c100054c:	89 e5                	mov    %esp,%ebp
c100054e:	83 ec 18             	sub    $0x18,%esp
c1000551:	90                   	nop
c1000552:	e8 44 44 00 00       	call   c100499b <cons_getc>
c1000557:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100055a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100055e:	74 f2                	je     c1000552 <getchar+0x7>
c1000560:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000563:	c9                   	leave  
c1000564:	c3                   	ret    

c1000565 <readline>:
c1000565:	55                   	push   %ebp
c1000566:	89 e5                	mov    %esp,%ebp
c1000568:	83 ec 18             	sub    $0x18,%esp
c100056b:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100056f:	74 13                	je     c1000584 <readline+0x1f>
c1000571:	83 ec 08             	sub    $0x8,%esp
c1000574:	ff 75 08             	pushl  0x8(%ebp)
c1000577:	68 ae 9b 00 c1       	push   $0xc1009bae
c100057c:	e8 47 40 00 00       	call   c10045c8 <printk>
c1000581:	83 c4 10             	add    $0x10,%esp
c1000584:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100058b:	e8 bb ff ff ff       	call   c100054b <getchar>
c1000590:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1000593:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1000597:	79 0a                	jns    c10005a3 <readline+0x3e>
c1000599:	b8 00 00 00 00       	mov    $0x0,%eax
c100059e:	e9 82 00 00 00       	jmp    c1000625 <readline+0xc0>
c10005a3:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c10005a7:	7e 2b                	jle    c10005d4 <readline+0x6f>
c10005a9:	81 7d f4 fe 03 00 00 	cmpl   $0x3fe,-0xc(%ebp)
c10005b0:	7f 22                	jg     c10005d4 <readline+0x6f>
c10005b2:	83 ec 0c             	sub    $0xc,%esp
c10005b5:	ff 75 f0             	pushl  -0x10(%ebp)
c10005b8:	e8 a0 43 00 00       	call   c100495d <cons_putc>
c10005bd:	83 c4 10             	add    $0x10,%esp
c10005c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10005c3:	8d 50 01             	lea    0x1(%eax),%edx
c10005c6:	89 55 f4             	mov    %edx,-0xc(%ebp)
c10005c9:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10005cc:	88 90 00 e0 00 c1    	mov    %dl,-0x3eff2000(%eax)
c10005d2:	eb 4c                	jmp    c1000620 <readline+0xbb>
c10005d4:	83 7d f0 08          	cmpl   $0x8,-0x10(%ebp)
c10005d8:	75 1a                	jne    c10005f4 <readline+0x8f>
c10005da:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10005de:	7e 14                	jle    c10005f4 <readline+0x8f>
c10005e0:	83 ec 0c             	sub    $0xc,%esp
c10005e3:	ff 75 f0             	pushl  -0x10(%ebp)
c10005e6:	e8 72 43 00 00       	call   c100495d <cons_putc>
c10005eb:	83 c4 10             	add    $0x10,%esp
c10005ee:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
c10005f2:	eb 2c                	jmp    c1000620 <readline+0xbb>
c10005f4:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
c10005f8:	74 06                	je     c1000600 <readline+0x9b>
c10005fa:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
c10005fe:	75 8b                	jne    c100058b <readline+0x26>
c1000600:	83 ec 0c             	sub    $0xc,%esp
c1000603:	ff 75 f0             	pushl  -0x10(%ebp)
c1000606:	e8 52 43 00 00       	call   c100495d <cons_putc>
c100060b:	83 c4 10             	add    $0x10,%esp
c100060e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000611:	05 00 e0 00 c1       	add    $0xc100e000,%eax
c1000616:	c6 00 00             	movb   $0x0,(%eax)
c1000619:	b8 00 e0 00 c1       	mov    $0xc100e000,%eax
c100061e:	eb 05                	jmp    c1000625 <readline+0xc0>
c1000620:	e9 66 ff ff ff       	jmp    c100058b <readline+0x26>
c1000625:	c9                   	leave  
c1000626:	c3                   	ret    

c1000627 <lgdt>:
c1000627:	55                   	push   %ebp
c1000628:	89 e5                	mov    %esp,%ebp
c100062a:	8b 45 08             	mov    0x8(%ebp),%eax
c100062d:	0f 01 10             	lgdtl  (%eax)
c1000630:	b8 23 00 00 00       	mov    $0x23,%eax
c1000635:	8e e8                	mov    %eax,%gs
c1000637:	b8 23 00 00 00       	mov    $0x23,%eax
c100063c:	8e e0                	mov    %eax,%fs
c100063e:	b8 10 00 00 00       	mov    $0x10,%eax
c1000643:	8e c0                	mov    %eax,%es
c1000645:	b8 10 00 00 00       	mov    $0x10,%eax
c100064a:	8e d8                	mov    %eax,%ds
c100064c:	b8 10 00 00 00       	mov    $0x10,%eax
c1000651:	8e d0                	mov    %eax,%ss
c1000653:	ea 5a 06 00 c1 08 00 	ljmp   $0x8,$0xc100065a
c100065a:	90                   	nop
c100065b:	5d                   	pop    %ebp
c100065c:	c3                   	ret    

c100065d <ltr>:
c100065d:	55                   	push   %ebp
c100065e:	89 e5                	mov    %esp,%ebp
c1000660:	83 ec 04             	sub    $0x4,%esp
c1000663:	8b 45 08             	mov    0x8(%ebp),%eax
c1000666:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
c100066a:	0f b7 45 fc          	movzwl -0x4(%ebp),%eax
c100066e:	0f 00 d8             	ltr    %ax
c1000671:	90                   	nop
c1000672:	c9                   	leave  
c1000673:	c3                   	ret    

c1000674 <gdt_init>:
c1000674:	55                   	push   %ebp
c1000675:	89 e5                	mov    %esp,%ebp
c1000677:	c7 05 04 ec 00 c1 00 	movl   $0xf8000000,0xc100ec04
c100067e:	00 00 f8 
c1000681:	66 c7 05 08 ec 00 c1 	movw   $0x10,0xc100ec08
c1000688:	10 00 
c100068a:	66 c7 05 68 c0 00 c1 	movw   $0x68,0xc100c068
c1000691:	68 00 
c1000693:	b8 00 ec 00 c1       	mov    $0xc100ec00,%eax
c1000698:	66 a3 6a c0 00 c1    	mov    %ax,0xc100c06a
c100069e:	b8 00 ec 00 c1       	mov    $0xc100ec00,%eax
c10006a3:	c1 e8 10             	shr    $0x10,%eax
c10006a6:	a2 6c c0 00 c1       	mov    %al,0xc100c06c
c10006ab:	0f b6 05 6d c0 00 c1 	movzbl 0xc100c06d,%eax
c10006b2:	83 e0 f0             	and    $0xfffffff0,%eax
c10006b5:	83 c8 09             	or     $0x9,%eax
c10006b8:	a2 6d c0 00 c1       	mov    %al,0xc100c06d
c10006bd:	0f b6 05 6d c0 00 c1 	movzbl 0xc100c06d,%eax
c10006c4:	83 e0 ef             	and    $0xffffffef,%eax
c10006c7:	a2 6d c0 00 c1       	mov    %al,0xc100c06d
c10006cc:	0f b6 05 6d c0 00 c1 	movzbl 0xc100c06d,%eax
c10006d3:	83 e0 9f             	and    $0xffffff9f,%eax
c10006d6:	a2 6d c0 00 c1       	mov    %al,0xc100c06d
c10006db:	0f b6 05 6d c0 00 c1 	movzbl 0xc100c06d,%eax
c10006e2:	83 c8 80             	or     $0xffffff80,%eax
c10006e5:	a2 6d c0 00 c1       	mov    %al,0xc100c06d
c10006ea:	0f b6 05 6e c0 00 c1 	movzbl 0xc100c06e,%eax
c10006f1:	83 e0 f0             	and    $0xfffffff0,%eax
c10006f4:	a2 6e c0 00 c1       	mov    %al,0xc100c06e
c10006f9:	0f b6 05 6e c0 00 c1 	movzbl 0xc100c06e,%eax
c1000700:	83 e0 ef             	and    $0xffffffef,%eax
c1000703:	a2 6e c0 00 c1       	mov    %al,0xc100c06e
c1000708:	0f b6 05 6e c0 00 c1 	movzbl 0xc100c06e,%eax
c100070f:	83 e0 df             	and    $0xffffffdf,%eax
c1000712:	a2 6e c0 00 c1       	mov    %al,0xc100c06e
c1000717:	0f b6 05 6e c0 00 c1 	movzbl 0xc100c06e,%eax
c100071e:	83 c8 40             	or     $0x40,%eax
c1000721:	a2 6e c0 00 c1       	mov    %al,0xc100c06e
c1000726:	0f b6 05 6e c0 00 c1 	movzbl 0xc100c06e,%eax
c100072d:	83 e0 7f             	and    $0x7f,%eax
c1000730:	a2 6e c0 00 c1       	mov    %al,0xc100c06e
c1000735:	b8 00 ec 00 c1       	mov    $0xc100ec00,%eax
c100073a:	c1 e8 18             	shr    $0x18,%eax
c100073d:	a2 6f c0 00 c1       	mov    %al,0xc100c06f
c1000742:	68 78 c0 00 c1       	push   $0xc100c078
c1000747:	e8 db fe ff ff       	call   c1000627 <lgdt>
c100074c:	83 c4 04             	add    $0x4,%esp
c100074f:	6a 28                	push   $0x28
c1000751:	e8 07 ff ff ff       	call   c100065d <ltr>
c1000756:	83 c4 04             	add    $0x4,%esp
c1000759:	90                   	nop
c100075a:	c9                   	leave  
c100075b:	c3                   	ret    

c100075c <lidt>:
c100075c:	55                   	push   %ebp
c100075d:	89 e5                	mov    %esp,%ebp
c100075f:	8b 45 08             	mov    0x8(%ebp),%eax
c1000762:	0f 01 18             	lidtl  (%eax)
c1000765:	90                   	nop
c1000766:	5d                   	pop    %ebp
c1000767:	c3                   	ret    

c1000768 <idt_init>:
c1000768:	55                   	push   %ebp
c1000769:	89 e5                	mov    %esp,%ebp
c100076b:	83 ec 10             	sub    $0x10,%esp
c100076e:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1000775:	e9 c3 00 00 00       	jmp    c100083d <idt_init+0xd5>
c100077a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100077d:	8b 04 85 00 c1 00 c1 	mov    -0x3eff3f00(,%eax,4),%eax
c1000784:	89 c2                	mov    %eax,%edx
c1000786:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000789:	66 89 14 c5 00 e4 00 	mov    %dx,-0x3eff1c00(,%eax,8)
c1000790:	c1 
c1000791:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000794:	66 c7 04 c5 02 e4 00 	movw   $0x8,-0x3eff1bfe(,%eax,8)
c100079b:	c1 08 00 
c100079e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007a1:	0f b6 14 c5 04 e4 00 	movzbl -0x3eff1bfc(,%eax,8),%edx
c10007a8:	c1 
c10007a9:	83 e2 e0             	and    $0xffffffe0,%edx
c10007ac:	88 14 c5 04 e4 00 c1 	mov    %dl,-0x3eff1bfc(,%eax,8)
c10007b3:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007b6:	0f b6 14 c5 04 e4 00 	movzbl -0x3eff1bfc(,%eax,8),%edx
c10007bd:	c1 
c10007be:	83 e2 1f             	and    $0x1f,%edx
c10007c1:	88 14 c5 04 e4 00 c1 	mov    %dl,-0x3eff1bfc(,%eax,8)
c10007c8:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007cb:	0f b6 14 c5 05 e4 00 	movzbl -0x3eff1bfb(,%eax,8),%edx
c10007d2:	c1 
c10007d3:	83 e2 f0             	and    $0xfffffff0,%edx
c10007d6:	83 ca 0e             	or     $0xe,%edx
c10007d9:	88 14 c5 05 e4 00 c1 	mov    %dl,-0x3eff1bfb(,%eax,8)
c10007e0:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007e3:	0f b6 14 c5 05 e4 00 	movzbl -0x3eff1bfb(,%eax,8),%edx
c10007ea:	c1 
c10007eb:	83 e2 ef             	and    $0xffffffef,%edx
c10007ee:	88 14 c5 05 e4 00 c1 	mov    %dl,-0x3eff1bfb(,%eax,8)
c10007f5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007f8:	0f b6 14 c5 05 e4 00 	movzbl -0x3eff1bfb(,%eax,8),%edx
c10007ff:	c1 
c1000800:	83 e2 9f             	and    $0xffffff9f,%edx
c1000803:	88 14 c5 05 e4 00 c1 	mov    %dl,-0x3eff1bfb(,%eax,8)
c100080a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100080d:	0f b6 14 c5 05 e4 00 	movzbl -0x3eff1bfb(,%eax,8),%edx
c1000814:	c1 
c1000815:	83 ca 80             	or     $0xffffff80,%edx
c1000818:	88 14 c5 05 e4 00 c1 	mov    %dl,-0x3eff1bfb(,%eax,8)
c100081f:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000822:	8b 04 85 00 c1 00 c1 	mov    -0x3eff3f00(,%eax,4),%eax
c1000829:	c1 e8 10             	shr    $0x10,%eax
c100082c:	89 c2                	mov    %eax,%edx
c100082e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000831:	66 89 14 c5 06 e4 00 	mov    %dx,-0x3eff1bfa(,%eax,8)
c1000838:	c1 
c1000839:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100083d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000840:	3d ff 00 00 00       	cmp    $0xff,%eax
c1000845:	0f 86 2f ff ff ff    	jbe    c100077a <idt_init+0x12>
c100084b:	a1 00 c3 00 c1       	mov    0xc100c300,%eax
c1000850:	66 a3 00 e8 00 c1    	mov    %ax,0xc100e800
c1000856:	66 c7 05 02 e8 00 c1 	movw   $0x8,0xc100e802
c100085d:	08 00 
c100085f:	0f b6 05 04 e8 00 c1 	movzbl 0xc100e804,%eax
c1000866:	83 e0 e0             	and    $0xffffffe0,%eax
c1000869:	a2 04 e8 00 c1       	mov    %al,0xc100e804
c100086e:	0f b6 05 04 e8 00 c1 	movzbl 0xc100e804,%eax
c1000875:	83 e0 1f             	and    $0x1f,%eax
c1000878:	a2 04 e8 00 c1       	mov    %al,0xc100e804
c100087d:	0f b6 05 05 e8 00 c1 	movzbl 0xc100e805,%eax
c1000884:	83 c8 0f             	or     $0xf,%eax
c1000887:	a2 05 e8 00 c1       	mov    %al,0xc100e805
c100088c:	0f b6 05 05 e8 00 c1 	movzbl 0xc100e805,%eax
c1000893:	83 e0 ef             	and    $0xffffffef,%eax
c1000896:	a2 05 e8 00 c1       	mov    %al,0xc100e805
c100089b:	0f b6 05 05 e8 00 c1 	movzbl 0xc100e805,%eax
c10008a2:	83 c8 60             	or     $0x60,%eax
c10008a5:	a2 05 e8 00 c1       	mov    %al,0xc100e805
c10008aa:	0f b6 05 05 e8 00 c1 	movzbl 0xc100e805,%eax
c10008b1:	83 c8 80             	or     $0xffffff80,%eax
c10008b4:	a2 05 e8 00 c1       	mov    %al,0xc100e805
c10008b9:	a1 00 c3 00 c1       	mov    0xc100c300,%eax
c10008be:	c1 e8 10             	shr    $0x10,%eax
c10008c1:	66 a3 06 e8 00 c1    	mov    %ax,0xc100e806
c10008c7:	a1 80 c2 00 c1       	mov    0xc100c280,%eax
c10008cc:	66 a3 00 e7 00 c1    	mov    %ax,0xc100e700
c10008d2:	66 c7 05 02 e7 00 c1 	movw   $0x8,0xc100e702
c10008d9:	08 00 
c10008db:	0f b6 05 04 e7 00 c1 	movzbl 0xc100e704,%eax
c10008e2:	83 e0 e0             	and    $0xffffffe0,%eax
c10008e5:	a2 04 e7 00 c1       	mov    %al,0xc100e704
c10008ea:	0f b6 05 04 e7 00 c1 	movzbl 0xc100e704,%eax
c10008f1:	83 e0 1f             	and    $0x1f,%eax
c10008f4:	a2 04 e7 00 c1       	mov    %al,0xc100e704
c10008f9:	0f b6 05 05 e7 00 c1 	movzbl 0xc100e705,%eax
c1000900:	83 c8 0f             	or     $0xf,%eax
c1000903:	a2 05 e7 00 c1       	mov    %al,0xc100e705
c1000908:	0f b6 05 05 e7 00 c1 	movzbl 0xc100e705,%eax
c100090f:	83 e0 ef             	and    $0xffffffef,%eax
c1000912:	a2 05 e7 00 c1       	mov    %al,0xc100e705
c1000917:	0f b6 05 05 e7 00 c1 	movzbl 0xc100e705,%eax
c100091e:	83 c8 60             	or     $0x60,%eax
c1000921:	a2 05 e7 00 c1       	mov    %al,0xc100e705
c1000926:	0f b6 05 05 e7 00 c1 	movzbl 0xc100e705,%eax
c100092d:	83 c8 80             	or     $0xffffff80,%eax
c1000930:	a2 05 e7 00 c1       	mov    %al,0xc100e705
c1000935:	a1 80 c2 00 c1       	mov    0xc100c280,%eax
c100093a:	c1 e8 10             	shr    $0x10,%eax
c100093d:	66 a3 06 e7 00 c1    	mov    %ax,0xc100e706
c1000943:	68 80 c0 00 c1       	push   $0xc100c080
c1000948:	e8 0f fe ff ff       	call   c100075c <lidt>
c100094d:	83 c4 04             	add    $0x4,%esp
c1000950:	90                   	nop
c1000951:	c9                   	leave  
c1000952:	c3                   	ret    

c1000953 <set_ts_esp0>:
c1000953:	55                   	push   %ebp
c1000954:	89 e5                	mov    %esp,%ebp
c1000956:	8b 45 08             	mov    0x8(%ebp),%eax
c1000959:	a3 04 ec 00 c1       	mov    %eax,0xc100ec04
c100095e:	90                   	nop
c100095f:	5d                   	pop    %ebp
c1000960:	c3                   	ret    

c1000961 <hash32>:
c1000961:	55                   	push   %ebp
c1000962:	89 e5                	mov    %esp,%ebp
c1000964:	83 ec 10             	sub    $0x10,%esp
c1000967:	8b 45 08             	mov    0x8(%ebp),%eax
c100096a:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1000970:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1000973:	b8 20 00 00 00       	mov    $0x20,%eax
c1000978:	2b 45 0c             	sub    0xc(%ebp),%eax
c100097b:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100097e:	89 c1                	mov    %eax,%ecx
c1000980:	d3 ea                	shr    %cl,%edx
c1000982:	89 d0                	mov    %edx,%eax
c1000984:	c9                   	leave  
c1000985:	c3                   	ret    

c1000986 <print_regs>:
c1000986:	55                   	push   %ebp
c1000987:	89 e5                	mov    %esp,%ebp
c1000989:	83 ec 08             	sub    $0x8,%esp
c100098c:	8b 45 08             	mov    0x8(%ebp),%eax
c100098f:	8b 00                	mov    (%eax),%eax
c1000991:	83 ec 08             	sub    $0x8,%esp
c1000994:	50                   	push   %eax
c1000995:	68 e6 9b 00 c1       	push   $0xc1009be6
c100099a:	e8 29 3c 00 00       	call   c10045c8 <printk>
c100099f:	83 c4 10             	add    $0x10,%esp
c10009a2:	8b 45 08             	mov    0x8(%ebp),%eax
c10009a5:	8b 40 04             	mov    0x4(%eax),%eax
c10009a8:	83 ec 08             	sub    $0x8,%esp
c10009ab:	50                   	push   %eax
c10009ac:	68 f6 9b 00 c1       	push   $0xc1009bf6
c10009b1:	e8 12 3c 00 00       	call   c10045c8 <printk>
c10009b6:	83 c4 10             	add    $0x10,%esp
c10009b9:	8b 45 08             	mov    0x8(%ebp),%eax
c10009bc:	8b 40 08             	mov    0x8(%eax),%eax
c10009bf:	83 ec 08             	sub    $0x8,%esp
c10009c2:	50                   	push   %eax
c10009c3:	68 06 9c 00 c1       	push   $0xc1009c06
c10009c8:	e8 fb 3b 00 00       	call   c10045c8 <printk>
c10009cd:	83 c4 10             	add    $0x10,%esp
c10009d0:	8b 45 08             	mov    0x8(%ebp),%eax
c10009d3:	8b 40 0c             	mov    0xc(%eax),%eax
c10009d6:	83 ec 08             	sub    $0x8,%esp
c10009d9:	50                   	push   %eax
c10009da:	68 16 9c 00 c1       	push   $0xc1009c16
c10009df:	e8 e4 3b 00 00       	call   c10045c8 <printk>
c10009e4:	83 c4 10             	add    $0x10,%esp
c10009e7:	8b 45 08             	mov    0x8(%ebp),%eax
c10009ea:	8b 40 10             	mov    0x10(%eax),%eax
c10009ed:	83 ec 08             	sub    $0x8,%esp
c10009f0:	50                   	push   %eax
c10009f1:	68 26 9c 00 c1       	push   $0xc1009c26
c10009f6:	e8 cd 3b 00 00       	call   c10045c8 <printk>
c10009fb:	83 c4 10             	add    $0x10,%esp
c10009fe:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a01:	8b 40 14             	mov    0x14(%eax),%eax
c1000a04:	83 ec 08             	sub    $0x8,%esp
c1000a07:	50                   	push   %eax
c1000a08:	68 36 9c 00 c1       	push   $0xc1009c36
c1000a0d:	e8 b6 3b 00 00       	call   c10045c8 <printk>
c1000a12:	83 c4 10             	add    $0x10,%esp
c1000a15:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a18:	8b 40 18             	mov    0x18(%eax),%eax
c1000a1b:	83 ec 08             	sub    $0x8,%esp
c1000a1e:	50                   	push   %eax
c1000a1f:	68 46 9c 00 c1       	push   $0xc1009c46
c1000a24:	e8 9f 3b 00 00       	call   c10045c8 <printk>
c1000a29:	83 c4 10             	add    $0x10,%esp
c1000a2c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a2f:	8b 40 1c             	mov    0x1c(%eax),%eax
c1000a32:	83 ec 08             	sub    $0x8,%esp
c1000a35:	50                   	push   %eax
c1000a36:	68 56 9c 00 c1       	push   $0xc1009c56
c1000a3b:	e8 88 3b 00 00       	call   c10045c8 <printk>
c1000a40:	83 c4 10             	add    $0x10,%esp
c1000a43:	90                   	nop
c1000a44:	c9                   	leave  
c1000a45:	c3                   	ret    

c1000a46 <print_trapframe>:
c1000a46:	55                   	push   %ebp
c1000a47:	89 e5                	mov    %esp,%ebp
c1000a49:	83 ec 18             	sub    $0x18,%esp
c1000a4c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a4f:	83 ec 0c             	sub    $0xc,%esp
c1000a52:	50                   	push   %eax
c1000a53:	e8 2e ff ff ff       	call   c1000986 <print_regs>
c1000a58:	83 c4 10             	add    $0x10,%esp
c1000a5b:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a5e:	0f b7 40 2c          	movzwl 0x2c(%eax),%eax
c1000a62:	0f b7 c0             	movzwl %ax,%eax
c1000a65:	83 ec 08             	sub    $0x8,%esp
c1000a68:	50                   	push   %eax
c1000a69:	68 66 9c 00 c1       	push   $0xc1009c66
c1000a6e:	e8 55 3b 00 00       	call   c10045c8 <printk>
c1000a73:	83 c4 10             	add    $0x10,%esp
c1000a76:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a79:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1000a7d:	0f b7 c0             	movzwl %ax,%eax
c1000a80:	83 ec 08             	sub    $0x8,%esp
c1000a83:	50                   	push   %eax
c1000a84:	68 7a 9c 00 c1       	push   $0xc1009c7a
c1000a89:	e8 3a 3b 00 00       	call   c10045c8 <printk>
c1000a8e:	83 c4 10             	add    $0x10,%esp
c1000a91:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a94:	0f b7 40 24          	movzwl 0x24(%eax),%eax
c1000a98:	0f b7 c0             	movzwl %ax,%eax
c1000a9b:	83 ec 08             	sub    $0x8,%esp
c1000a9e:	50                   	push   %eax
c1000a9f:	68 8e 9c 00 c1       	push   $0xc1009c8e
c1000aa4:	e8 1f 3b 00 00       	call   c10045c8 <printk>
c1000aa9:	83 c4 10             	add    $0x10,%esp
c1000aac:	8b 45 08             	mov    0x8(%ebp),%eax
c1000aaf:	0f b7 40 20          	movzwl 0x20(%eax),%eax
c1000ab3:	0f b7 c0             	movzwl %ax,%eax
c1000ab6:	83 ec 08             	sub    $0x8,%esp
c1000ab9:	50                   	push   %eax
c1000aba:	68 a2 9c 00 c1       	push   $0xc1009ca2
c1000abf:	e8 04 3b 00 00       	call   c10045c8 <printk>
c1000ac4:	83 c4 10             	add    $0x10,%esp
c1000ac7:	8b 45 08             	mov    0x8(%ebp),%eax
c1000aca:	8b 40 34             	mov    0x34(%eax),%eax
c1000acd:	83 ec 08             	sub    $0x8,%esp
c1000ad0:	50                   	push   %eax
c1000ad1:	68 b6 9c 00 c1       	push   $0xc1009cb6
c1000ad6:	e8 ed 3a 00 00       	call   c10045c8 <printk>
c1000adb:	83 c4 10             	add    $0x10,%esp
c1000ade:	8b 45 08             	mov    0x8(%ebp),%eax
c1000ae1:	8b 40 38             	mov    0x38(%eax),%eax
c1000ae4:	83 ec 08             	sub    $0x8,%esp
c1000ae7:	50                   	push   %eax
c1000ae8:	68 c6 9c 00 c1       	push   $0xc1009cc6
c1000aed:	e8 d6 3a 00 00       	call   c10045c8 <printk>
c1000af2:	83 c4 10             	add    $0x10,%esp
c1000af5:	8b 45 08             	mov    0x8(%ebp),%eax
c1000af8:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
c1000afc:	0f b7 c0             	movzwl %ax,%eax
c1000aff:	83 ec 08             	sub    $0x8,%esp
c1000b02:	50                   	push   %eax
c1000b03:	68 d6 9c 00 c1       	push   $0xc1009cd6
c1000b08:	e8 bb 3a 00 00       	call   c10045c8 <printk>
c1000b0d:	83 c4 10             	add    $0x10,%esp
c1000b10:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b13:	8b 40 40             	mov    0x40(%eax),%eax
c1000b16:	83 ec 08             	sub    $0x8,%esp
c1000b19:	50                   	push   %eax
c1000b1a:	68 ea 9c 00 c1       	push   $0xc1009cea
c1000b1f:	e8 a4 3a 00 00       	call   c10045c8 <printk>
c1000b24:	83 c4 10             	add    $0x10,%esp
c1000b27:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1000b2e:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
c1000b35:	eb 3f                	jmp    c1000b76 <print_trapframe+0x130>
c1000b37:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b3a:	8b 50 40             	mov    0x40(%eax),%edx
c1000b3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000b40:	21 d0                	and    %edx,%eax
c1000b42:	85 c0                	test   %eax,%eax
c1000b44:	74 29                	je     c1000b6f <print_trapframe+0x129>
c1000b46:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000b49:	8b 04 85 a0 c0 00 c1 	mov    -0x3eff3f60(,%eax,4),%eax
c1000b50:	85 c0                	test   %eax,%eax
c1000b52:	74 1b                	je     c1000b6f <print_trapframe+0x129>
c1000b54:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000b57:	8b 04 85 a0 c0 00 c1 	mov    -0x3eff3f60(,%eax,4),%eax
c1000b5e:	83 ec 08             	sub    $0x8,%esp
c1000b61:	50                   	push   %eax
c1000b62:	68 fa 9c 00 c1       	push   $0xc1009cfa
c1000b67:	e8 5c 3a 00 00       	call   c10045c8 <printk>
c1000b6c:	83 c4 10             	add    $0x10,%esp
c1000b6f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1000b73:	d1 65 f0             	shll   -0x10(%ebp)
c1000b76:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000b79:	83 f8 17             	cmp    $0x17,%eax
c1000b7c:	76 b9                	jbe    c1000b37 <print_trapframe+0xf1>
c1000b7e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b81:	8b 40 40             	mov    0x40(%eax),%eax
c1000b84:	c1 e8 0c             	shr    $0xc,%eax
c1000b87:	83 e0 03             	and    $0x3,%eax
c1000b8a:	83 ec 08             	sub    $0x8,%esp
c1000b8d:	50                   	push   %eax
c1000b8e:	68 fe 9c 00 c1       	push   $0xc1009cfe
c1000b93:	e8 30 3a 00 00       	call   c10045c8 <printk>
c1000b98:	83 c4 10             	add    $0x10,%esp
c1000b9b:	90                   	nop
c1000b9c:	c9                   	leave  
c1000b9d:	c3                   	ret    

c1000b9e <trap_dispatch>:
c1000b9e:	55                   	push   %ebp
c1000b9f:	89 e5                	mov    %esp,%ebp
c1000ba1:	83 ec 18             	sub    $0x18,%esp
c1000ba4:	8b 45 08             	mov    0x8(%ebp),%eax
c1000ba7:	8b 40 30             	mov    0x30(%eax),%eax
c1000baa:	3d 80 00 00 00       	cmp    $0x80,%eax
c1000baf:	74 61                	je     c1000c12 <trap_dispatch+0x74>
c1000bb1:	3d 80 00 00 00       	cmp    $0x80,%eax
c1000bb6:	0f 87 f7 00 00 00    	ja     c1000cb3 <trap_dispatch+0x115>
c1000bbc:	83 f8 2f             	cmp    $0x2f,%eax
c1000bbf:	77 1e                	ja     c1000bdf <trap_dispatch+0x41>
c1000bc1:	83 f8 0e             	cmp    $0xe,%eax
c1000bc4:	0f 82 e9 00 00 00    	jb     c1000cb3 <trap_dispatch+0x115>
c1000bca:	83 e8 0e             	sub    $0xe,%eax
c1000bcd:	83 f8 21             	cmp    $0x21,%eax
c1000bd0:	0f 87 dd 00 00 00    	ja     c1000cb3 <trap_dispatch+0x115>
c1000bd6:	8b 04 85 3c 9d 00 c1 	mov    -0x3eff62c4(,%eax,4),%eax
c1000bdd:	ff e0                	jmp    *%eax
c1000bdf:	83 f8 60             	cmp    $0x60,%eax
c1000be2:	0f 85 cb 00 00 00    	jne    c1000cb3 <trap_dispatch+0x115>
c1000be8:	83 ec 0c             	sub    $0xc,%esp
c1000beb:	68 07 9d 00 c1       	push   $0xc1009d07
c1000bf0:	e8 d3 39 00 00       	call   c10045c8 <printk>
c1000bf5:	83 c4 10             	add    $0x10,%esp
c1000bf8:	e9 cf 00 00 00       	jmp    c1000ccc <trap_dispatch+0x12e>
c1000bfd:	83 ec 0c             	sub    $0xc,%esp
c1000c00:	68 17 9d 00 c1       	push   $0xc1009d17
c1000c05:	e8 be 39 00 00       	call   c10045c8 <printk>
c1000c0a:	83 c4 10             	add    $0x10,%esp
c1000c0d:	e9 ba 00 00 00       	jmp    c1000ccc <trap_dispatch+0x12e>
c1000c12:	83 ec 0c             	sub    $0xc,%esp
c1000c15:	ff 75 08             	pushl  0x8(%ebp)
c1000c18:	e8 d2 0f 00 00       	call   c1001bef <syscall_trap>
c1000c1d:	83 c4 10             	add    $0x10,%esp
c1000c20:	e9 a7 00 00 00       	jmp    c1000ccc <trap_dispatch+0x12e>
c1000c25:	a1 2c 32 a1 c1       	mov    0xc1a1322c,%eax
c1000c2a:	83 c0 01             	add    $0x1,%eax
c1000c2d:	a3 2c 32 a1 c1       	mov    %eax,0xc1a1322c
c1000c32:	8b 0d 2c 32 a1 c1    	mov    0xc1a1322c,%ecx
c1000c38:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
c1000c3d:	89 c8                	mov    %ecx,%eax
c1000c3f:	f7 e2                	mul    %edx
c1000c41:	89 d0                	mov    %edx,%eax
c1000c43:	c1 e8 05             	shr    $0x5,%eax
c1000c46:	6b c0 64             	imul   $0x64,%eax,%eax
c1000c49:	29 c1                	sub    %eax,%ecx
c1000c4b:	89 c8                	mov    %ecx,%eax
c1000c4d:	85 c0                	test   %eax,%eax
c1000c4f:	75 1b                	jne    c1000c6c <trap_dispatch+0xce>
c1000c51:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1000c56:	8b 50 04             	mov    0x4(%eax),%edx
c1000c59:	83 ea 01             	sub    $0x1,%edx
c1000c5c:	89 50 04             	mov    %edx,0x4(%eax)
c1000c5f:	a1 28 32 a1 c1       	mov    0xc1a13228,%eax
c1000c64:	83 c0 01             	add    $0x1,%eax
c1000c67:	a3 28 32 a1 c1       	mov    %eax,0xc1a13228
c1000c6c:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1000c71:	8b 40 04             	mov    0x4(%eax),%eax
c1000c74:	85 c0                	test   %eax,%eax
c1000c76:	75 50                	jne    c1000cc8 <trap_dispatch+0x12a>
c1000c78:	e8 05 2a 00 00       	call   c1003682 <schedule>
c1000c7d:	eb 49                	jmp    c1000cc8 <trap_dispatch+0x12a>
c1000c7f:	e8 17 3d 00 00       	call   c100499b <cons_getc>
c1000c84:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000c87:	eb 43                	jmp    c1000ccc <trap_dispatch+0x12e>
c1000c89:	e8 0d 3d 00 00       	call   c100499b <cons_getc>
c1000c8e:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000c91:	0f b6 05 ac 0c 01 c1 	movzbl 0xc1010cac,%eax
c1000c98:	84 c0                	test   %al,%al
c1000c9a:	75 2f                	jne    c1000ccb <trap_dispatch+0x12d>
c1000c9c:	83 ec 0c             	sub    $0xc,%esp
c1000c9f:	68 ac 0c 01 c1       	push   $0xc1010cac
c1000ca4:	e8 b3 3e 00 00       	call   c1004b5c <sema_up>
c1000ca9:	83 c4 10             	add    $0x10,%esp
c1000cac:	e8 d1 29 00 00       	call   c1003682 <schedule>
c1000cb1:	eb 18                	jmp    c1000ccb <trap_dispatch+0x12d>
c1000cb3:	83 ec 0c             	sub    $0xc,%esp
c1000cb6:	68 1e 9d 00 c1       	push   $0xc1009d1e
c1000cbb:	e8 08 39 00 00       	call   c10045c8 <printk>
c1000cc0:	83 c4 10             	add    $0x10,%esp
c1000cc3:	eb 07                	jmp    c1000ccc <trap_dispatch+0x12e>
c1000cc5:	90                   	nop
c1000cc6:	eb 04                	jmp    c1000ccc <trap_dispatch+0x12e>
c1000cc8:	90                   	nop
c1000cc9:	eb 01                	jmp    c1000ccc <trap_dispatch+0x12e>
c1000ccb:	90                   	nop
c1000ccc:	90                   	nop
c1000ccd:	c9                   	leave  
c1000cce:	c3                   	ret    

c1000ccf <trap>:
c1000ccf:	55                   	push   %ebp
c1000cd0:	89 e5                	mov    %esp,%ebp
c1000cd2:	83 ec 08             	sub    $0x8,%esp
c1000cd5:	83 ec 0c             	sub    $0xc,%esp
c1000cd8:	ff 75 08             	pushl  0x8(%ebp)
c1000cdb:	e8 be fe ff ff       	call   c1000b9e <trap_dispatch>
c1000ce0:	83 c4 10             	add    $0x10,%esp
c1000ce3:	90                   	nop
c1000ce4:	c9                   	leave  
c1000ce5:	c3                   	ret    

c1000ce6 <disable_interupt>:
c1000ce6:	55                   	push   %ebp
c1000ce7:	89 e5                	mov    %esp,%ebp
c1000ce9:	fa                   	cli    
c1000cea:	90                   	nop
c1000ceb:	5d                   	pop    %ebp
c1000cec:	c3                   	ret    

c1000ced <enable_interupt>:
c1000ced:	55                   	push   %ebp
c1000cee:	89 e5                	mov    %esp,%ebp
c1000cf0:	fb                   	sti    
c1000cf1:	90                   	nop
c1000cf2:	5d                   	pop    %ebp
c1000cf3:	c3                   	ret    

c1000cf4 <get_now_intr_status>:
c1000cf4:	55                   	push   %ebp
c1000cf5:	89 e5                	mov    %esp,%ebp
c1000cf7:	83 ec 10             	sub    $0x10,%esp
c1000cfa:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1000d01:	9c                   	pushf  
c1000d02:	58                   	pop    %eax
c1000d03:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1000d06:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000d09:	c1 e8 09             	shr    $0x9,%eax
c1000d0c:	83 e0 01             	and    $0x1,%eax
c1000d0f:	c9                   	leave  
c1000d10:	c3                   	ret    

c1000d11 <intr_enable>:
c1000d11:	55                   	push   %ebp
c1000d12:	89 e5                	mov    %esp,%ebp
c1000d14:	e8 db ff ff ff       	call   c1000cf4 <get_now_intr_status>
c1000d19:	85 c0                	test   %eax,%eax
c1000d1b:	75 0c                	jne    c1000d29 <intr_enable+0x18>
c1000d1d:	e8 cb ff ff ff       	call   c1000ced <enable_interupt>
c1000d22:	b8 00 00 00 00       	mov    $0x0,%eax
c1000d27:	eb 05                	jmp    c1000d2e <intr_enable+0x1d>
c1000d29:	b8 01 00 00 00       	mov    $0x1,%eax
c1000d2e:	5d                   	pop    %ebp
c1000d2f:	c3                   	ret    

c1000d30 <intr_disable>:
c1000d30:	55                   	push   %ebp
c1000d31:	89 e5                	mov    %esp,%ebp
c1000d33:	e8 bc ff ff ff       	call   c1000cf4 <get_now_intr_status>
c1000d38:	83 f8 01             	cmp    $0x1,%eax
c1000d3b:	75 0c                	jne    c1000d49 <intr_disable+0x19>
c1000d3d:	e8 a4 ff ff ff       	call   c1000ce6 <disable_interupt>
c1000d42:	b8 01 00 00 00       	mov    $0x1,%eax
c1000d47:	eb 05                	jmp    c1000d4e <intr_disable+0x1e>
c1000d49:	b8 00 00 00 00       	mov    $0x0,%eax
c1000d4e:	5d                   	pop    %ebp
c1000d4f:	c3                   	ret    

c1000d50 <intr_save>:
c1000d50:	55                   	push   %ebp
c1000d51:	89 e5                	mov    %esp,%ebp
c1000d53:	83 ec 10             	sub    $0x10,%esp
c1000d56:	e8 d5 ff ff ff       	call   c1000d30 <intr_disable>
c1000d5b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1000d5e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000d61:	c9                   	leave  
c1000d62:	c3                   	ret    

c1000d63 <intr_restore>:
c1000d63:	55                   	push   %ebp
c1000d64:	89 e5                	mov    %esp,%ebp
c1000d66:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1000d6a:	75 05                	jne    c1000d71 <intr_restore+0xe>
c1000d6c:	e8 7c ff ff ff       	call   c1000ced <enable_interupt>
c1000d71:	90                   	nop
c1000d72:	5d                   	pop    %ebp
c1000d73:	c3                   	ret    

c1000d74 <__alltraps>:
c1000d74:	1e                   	push   %ds
c1000d75:	06                   	push   %es
c1000d76:	0f a0                	push   %fs
c1000d78:	0f a8                	push   %gs
c1000d7a:	60                   	pusha  
c1000d7b:	b8 10 00 00 00       	mov    $0x10,%eax
c1000d80:	8e d8                	mov    %eax,%ds
c1000d82:	8e c0                	mov    %eax,%es
c1000d84:	54                   	push   %esp
c1000d85:	e8 45 ff ff ff       	call   c1000ccf <trap>
c1000d8a:	5c                   	pop    %esp

c1000d8b <__trapret>:
c1000d8b:	61                   	popa   
c1000d8c:	0f a9                	pop    %gs
c1000d8e:	0f a1                	pop    %fs
c1000d90:	07                   	pop    %es
c1000d91:	1f                   	pop    %ds
c1000d92:	83 c4 08             	add    $0x8,%esp
c1000d95:	cf                   	iret   

c1000d96 <forkrets>:
c1000d96:	8b 64 24 04          	mov    0x4(%esp),%esp
c1000d9a:	eb ef                	jmp    c1000d8b <__trapret>

c1000d9c <vector0>:
c1000d9c:	6a 00                	push   $0x0
c1000d9e:	6a 00                	push   $0x0
c1000da0:	e9 cf ff ff ff       	jmp    c1000d74 <__alltraps>

c1000da5 <vector1>:
c1000da5:	6a 00                	push   $0x0
c1000da7:	6a 01                	push   $0x1
c1000da9:	e9 c6 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000dae <vector2>:
c1000dae:	6a 00                	push   $0x0
c1000db0:	6a 02                	push   $0x2
c1000db2:	e9 bd ff ff ff       	jmp    c1000d74 <__alltraps>

c1000db7 <vector3>:
c1000db7:	6a 00                	push   $0x0
c1000db9:	6a 03                	push   $0x3
c1000dbb:	e9 b4 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000dc0 <vector4>:
c1000dc0:	6a 00                	push   $0x0
c1000dc2:	6a 04                	push   $0x4
c1000dc4:	e9 ab ff ff ff       	jmp    c1000d74 <__alltraps>

c1000dc9 <vector5>:
c1000dc9:	6a 00                	push   $0x0
c1000dcb:	6a 05                	push   $0x5
c1000dcd:	e9 a2 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000dd2 <vector6>:
c1000dd2:	6a 00                	push   $0x0
c1000dd4:	6a 06                	push   $0x6
c1000dd6:	e9 99 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000ddb <vector7>:
c1000ddb:	6a 00                	push   $0x0
c1000ddd:	6a 07                	push   $0x7
c1000ddf:	e9 90 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000de4 <vector8>:
c1000de4:	6a 08                	push   $0x8
c1000de6:	e9 89 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000deb <vector9>:
c1000deb:	6a 09                	push   $0x9
c1000ded:	e9 82 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000df2 <vector10>:
c1000df2:	6a 0a                	push   $0xa
c1000df4:	e9 7b ff ff ff       	jmp    c1000d74 <__alltraps>

c1000df9 <vector11>:
c1000df9:	6a 0b                	push   $0xb
c1000dfb:	e9 74 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e00 <vector12>:
c1000e00:	6a 0c                	push   $0xc
c1000e02:	e9 6d ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e07 <vector13>:
c1000e07:	6a 0d                	push   $0xd
c1000e09:	e9 66 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e0e <vector14>:
c1000e0e:	6a 0e                	push   $0xe
c1000e10:	e9 5f ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e15 <vector15>:
c1000e15:	6a 00                	push   $0x0
c1000e17:	6a 0f                	push   $0xf
c1000e19:	e9 56 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e1e <vector16>:
c1000e1e:	6a 00                	push   $0x0
c1000e20:	6a 10                	push   $0x10
c1000e22:	e9 4d ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e27 <vector17>:
c1000e27:	6a 11                	push   $0x11
c1000e29:	e9 46 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e2e <vector18>:
c1000e2e:	6a 00                	push   $0x0
c1000e30:	6a 12                	push   $0x12
c1000e32:	e9 3d ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e37 <vector19>:
c1000e37:	6a 00                	push   $0x0
c1000e39:	6a 13                	push   $0x13
c1000e3b:	e9 34 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e40 <vector20>:
c1000e40:	6a 00                	push   $0x0
c1000e42:	6a 14                	push   $0x14
c1000e44:	e9 2b ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e49 <vector21>:
c1000e49:	6a 00                	push   $0x0
c1000e4b:	6a 15                	push   $0x15
c1000e4d:	e9 22 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e52 <vector22>:
c1000e52:	6a 00                	push   $0x0
c1000e54:	6a 16                	push   $0x16
c1000e56:	e9 19 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e5b <vector23>:
c1000e5b:	6a 00                	push   $0x0
c1000e5d:	6a 17                	push   $0x17
c1000e5f:	e9 10 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e64 <vector24>:
c1000e64:	6a 00                	push   $0x0
c1000e66:	6a 18                	push   $0x18
c1000e68:	e9 07 ff ff ff       	jmp    c1000d74 <__alltraps>

c1000e6d <vector25>:
c1000e6d:	6a 00                	push   $0x0
c1000e6f:	6a 19                	push   $0x19
c1000e71:	e9 fe fe ff ff       	jmp    c1000d74 <__alltraps>

c1000e76 <vector26>:
c1000e76:	6a 00                	push   $0x0
c1000e78:	6a 1a                	push   $0x1a
c1000e7a:	e9 f5 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000e7f <vector27>:
c1000e7f:	6a 00                	push   $0x0
c1000e81:	6a 1b                	push   $0x1b
c1000e83:	e9 ec fe ff ff       	jmp    c1000d74 <__alltraps>

c1000e88 <vector28>:
c1000e88:	6a 00                	push   $0x0
c1000e8a:	6a 1c                	push   $0x1c
c1000e8c:	e9 e3 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000e91 <vector29>:
c1000e91:	6a 00                	push   $0x0
c1000e93:	6a 1d                	push   $0x1d
c1000e95:	e9 da fe ff ff       	jmp    c1000d74 <__alltraps>

c1000e9a <vector30>:
c1000e9a:	6a 00                	push   $0x0
c1000e9c:	6a 1e                	push   $0x1e
c1000e9e:	e9 d1 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000ea3 <vector31>:
c1000ea3:	6a 00                	push   $0x0
c1000ea5:	6a 1f                	push   $0x1f
c1000ea7:	e9 c8 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000eac <vector32>:
c1000eac:	6a 00                	push   $0x0
c1000eae:	6a 20                	push   $0x20
c1000eb0:	e9 bf fe ff ff       	jmp    c1000d74 <__alltraps>

c1000eb5 <vector33>:
c1000eb5:	6a 00                	push   $0x0
c1000eb7:	6a 21                	push   $0x21
c1000eb9:	e9 b6 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000ebe <vector34>:
c1000ebe:	6a 00                	push   $0x0
c1000ec0:	6a 22                	push   $0x22
c1000ec2:	e9 ad fe ff ff       	jmp    c1000d74 <__alltraps>

c1000ec7 <vector35>:
c1000ec7:	6a 00                	push   $0x0
c1000ec9:	6a 23                	push   $0x23
c1000ecb:	e9 a4 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000ed0 <vector36>:
c1000ed0:	6a 00                	push   $0x0
c1000ed2:	6a 24                	push   $0x24
c1000ed4:	e9 9b fe ff ff       	jmp    c1000d74 <__alltraps>

c1000ed9 <vector37>:
c1000ed9:	6a 00                	push   $0x0
c1000edb:	6a 25                	push   $0x25
c1000edd:	e9 92 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000ee2 <vector38>:
c1000ee2:	6a 00                	push   $0x0
c1000ee4:	6a 26                	push   $0x26
c1000ee6:	e9 89 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000eeb <vector39>:
c1000eeb:	6a 00                	push   $0x0
c1000eed:	6a 27                	push   $0x27
c1000eef:	e9 80 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000ef4 <vector40>:
c1000ef4:	6a 00                	push   $0x0
c1000ef6:	6a 28                	push   $0x28
c1000ef8:	e9 77 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000efd <vector41>:
c1000efd:	6a 00                	push   $0x0
c1000eff:	6a 29                	push   $0x29
c1000f01:	e9 6e fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f06 <vector42>:
c1000f06:	6a 00                	push   $0x0
c1000f08:	6a 2a                	push   $0x2a
c1000f0a:	e9 65 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f0f <vector43>:
c1000f0f:	6a 00                	push   $0x0
c1000f11:	6a 2b                	push   $0x2b
c1000f13:	e9 5c fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f18 <vector44>:
c1000f18:	6a 00                	push   $0x0
c1000f1a:	6a 2c                	push   $0x2c
c1000f1c:	e9 53 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f21 <vector45>:
c1000f21:	6a 00                	push   $0x0
c1000f23:	6a 2d                	push   $0x2d
c1000f25:	e9 4a fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f2a <vector46>:
c1000f2a:	6a 00                	push   $0x0
c1000f2c:	6a 2e                	push   $0x2e
c1000f2e:	e9 41 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f33 <vector47>:
c1000f33:	6a 00                	push   $0x0
c1000f35:	6a 2f                	push   $0x2f
c1000f37:	e9 38 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f3c <vector48>:
c1000f3c:	6a 00                	push   $0x0
c1000f3e:	6a 30                	push   $0x30
c1000f40:	e9 2f fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f45 <vector49>:
c1000f45:	6a 00                	push   $0x0
c1000f47:	6a 31                	push   $0x31
c1000f49:	e9 26 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f4e <vector50>:
c1000f4e:	6a 00                	push   $0x0
c1000f50:	6a 32                	push   $0x32
c1000f52:	e9 1d fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f57 <vector51>:
c1000f57:	6a 00                	push   $0x0
c1000f59:	6a 33                	push   $0x33
c1000f5b:	e9 14 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f60 <vector52>:
c1000f60:	6a 00                	push   $0x0
c1000f62:	6a 34                	push   $0x34
c1000f64:	e9 0b fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f69 <vector53>:
c1000f69:	6a 00                	push   $0x0
c1000f6b:	6a 35                	push   $0x35
c1000f6d:	e9 02 fe ff ff       	jmp    c1000d74 <__alltraps>

c1000f72 <vector54>:
c1000f72:	6a 00                	push   $0x0
c1000f74:	6a 36                	push   $0x36
c1000f76:	e9 f9 fd ff ff       	jmp    c1000d74 <__alltraps>

c1000f7b <vector55>:
c1000f7b:	6a 00                	push   $0x0
c1000f7d:	6a 37                	push   $0x37
c1000f7f:	e9 f0 fd ff ff       	jmp    c1000d74 <__alltraps>

c1000f84 <vector56>:
c1000f84:	6a 00                	push   $0x0
c1000f86:	6a 38                	push   $0x38
c1000f88:	e9 e7 fd ff ff       	jmp    c1000d74 <__alltraps>

c1000f8d <vector57>:
c1000f8d:	6a 00                	push   $0x0
c1000f8f:	6a 39                	push   $0x39
c1000f91:	e9 de fd ff ff       	jmp    c1000d74 <__alltraps>

c1000f96 <vector58>:
c1000f96:	6a 00                	push   $0x0
c1000f98:	6a 3a                	push   $0x3a
c1000f9a:	e9 d5 fd ff ff       	jmp    c1000d74 <__alltraps>

c1000f9f <vector59>:
c1000f9f:	6a 00                	push   $0x0
c1000fa1:	6a 3b                	push   $0x3b
c1000fa3:	e9 cc fd ff ff       	jmp    c1000d74 <__alltraps>

c1000fa8 <vector60>:
c1000fa8:	6a 00                	push   $0x0
c1000faa:	6a 3c                	push   $0x3c
c1000fac:	e9 c3 fd ff ff       	jmp    c1000d74 <__alltraps>

c1000fb1 <vector61>:
c1000fb1:	6a 00                	push   $0x0
c1000fb3:	6a 3d                	push   $0x3d
c1000fb5:	e9 ba fd ff ff       	jmp    c1000d74 <__alltraps>

c1000fba <vector62>:
c1000fba:	6a 00                	push   $0x0
c1000fbc:	6a 3e                	push   $0x3e
c1000fbe:	e9 b1 fd ff ff       	jmp    c1000d74 <__alltraps>

c1000fc3 <vector63>:
c1000fc3:	6a 00                	push   $0x0
c1000fc5:	6a 3f                	push   $0x3f
c1000fc7:	e9 a8 fd ff ff       	jmp    c1000d74 <__alltraps>

c1000fcc <vector64>:
c1000fcc:	6a 00                	push   $0x0
c1000fce:	6a 40                	push   $0x40
c1000fd0:	e9 9f fd ff ff       	jmp    c1000d74 <__alltraps>

c1000fd5 <vector65>:
c1000fd5:	6a 00                	push   $0x0
c1000fd7:	6a 41                	push   $0x41
c1000fd9:	e9 96 fd ff ff       	jmp    c1000d74 <__alltraps>

c1000fde <vector66>:
c1000fde:	6a 00                	push   $0x0
c1000fe0:	6a 42                	push   $0x42
c1000fe2:	e9 8d fd ff ff       	jmp    c1000d74 <__alltraps>

c1000fe7 <vector67>:
c1000fe7:	6a 00                	push   $0x0
c1000fe9:	6a 43                	push   $0x43
c1000feb:	e9 84 fd ff ff       	jmp    c1000d74 <__alltraps>

c1000ff0 <vector68>:
c1000ff0:	6a 00                	push   $0x0
c1000ff2:	6a 44                	push   $0x44
c1000ff4:	e9 7b fd ff ff       	jmp    c1000d74 <__alltraps>

c1000ff9 <vector69>:
c1000ff9:	6a 00                	push   $0x0
c1000ffb:	6a 45                	push   $0x45
c1000ffd:	e9 72 fd ff ff       	jmp    c1000d74 <__alltraps>

c1001002 <vector70>:
c1001002:	6a 00                	push   $0x0
c1001004:	6a 46                	push   $0x46
c1001006:	e9 69 fd ff ff       	jmp    c1000d74 <__alltraps>

c100100b <vector71>:
c100100b:	6a 00                	push   $0x0
c100100d:	6a 47                	push   $0x47
c100100f:	e9 60 fd ff ff       	jmp    c1000d74 <__alltraps>

c1001014 <vector72>:
c1001014:	6a 00                	push   $0x0
c1001016:	6a 48                	push   $0x48
c1001018:	e9 57 fd ff ff       	jmp    c1000d74 <__alltraps>

c100101d <vector73>:
c100101d:	6a 00                	push   $0x0
c100101f:	6a 49                	push   $0x49
c1001021:	e9 4e fd ff ff       	jmp    c1000d74 <__alltraps>

c1001026 <vector74>:
c1001026:	6a 00                	push   $0x0
c1001028:	6a 4a                	push   $0x4a
c100102a:	e9 45 fd ff ff       	jmp    c1000d74 <__alltraps>

c100102f <vector75>:
c100102f:	6a 00                	push   $0x0
c1001031:	6a 4b                	push   $0x4b
c1001033:	e9 3c fd ff ff       	jmp    c1000d74 <__alltraps>

c1001038 <vector76>:
c1001038:	6a 00                	push   $0x0
c100103a:	6a 4c                	push   $0x4c
c100103c:	e9 33 fd ff ff       	jmp    c1000d74 <__alltraps>

c1001041 <vector77>:
c1001041:	6a 00                	push   $0x0
c1001043:	6a 4d                	push   $0x4d
c1001045:	e9 2a fd ff ff       	jmp    c1000d74 <__alltraps>

c100104a <vector78>:
c100104a:	6a 00                	push   $0x0
c100104c:	6a 4e                	push   $0x4e
c100104e:	e9 21 fd ff ff       	jmp    c1000d74 <__alltraps>

c1001053 <vector79>:
c1001053:	6a 00                	push   $0x0
c1001055:	6a 4f                	push   $0x4f
c1001057:	e9 18 fd ff ff       	jmp    c1000d74 <__alltraps>

c100105c <vector80>:
c100105c:	6a 00                	push   $0x0
c100105e:	6a 50                	push   $0x50
c1001060:	e9 0f fd ff ff       	jmp    c1000d74 <__alltraps>

c1001065 <vector81>:
c1001065:	6a 00                	push   $0x0
c1001067:	6a 51                	push   $0x51
c1001069:	e9 06 fd ff ff       	jmp    c1000d74 <__alltraps>

c100106e <vector82>:
c100106e:	6a 00                	push   $0x0
c1001070:	6a 52                	push   $0x52
c1001072:	e9 fd fc ff ff       	jmp    c1000d74 <__alltraps>

c1001077 <vector83>:
c1001077:	6a 00                	push   $0x0
c1001079:	6a 53                	push   $0x53
c100107b:	e9 f4 fc ff ff       	jmp    c1000d74 <__alltraps>

c1001080 <vector84>:
c1001080:	6a 00                	push   $0x0
c1001082:	6a 54                	push   $0x54
c1001084:	e9 eb fc ff ff       	jmp    c1000d74 <__alltraps>

c1001089 <vector85>:
c1001089:	6a 00                	push   $0x0
c100108b:	6a 55                	push   $0x55
c100108d:	e9 e2 fc ff ff       	jmp    c1000d74 <__alltraps>

c1001092 <vector86>:
c1001092:	6a 00                	push   $0x0
c1001094:	6a 56                	push   $0x56
c1001096:	e9 d9 fc ff ff       	jmp    c1000d74 <__alltraps>

c100109b <vector87>:
c100109b:	6a 00                	push   $0x0
c100109d:	6a 57                	push   $0x57
c100109f:	e9 d0 fc ff ff       	jmp    c1000d74 <__alltraps>

c10010a4 <vector88>:
c10010a4:	6a 00                	push   $0x0
c10010a6:	6a 58                	push   $0x58
c10010a8:	e9 c7 fc ff ff       	jmp    c1000d74 <__alltraps>

c10010ad <vector89>:
c10010ad:	6a 00                	push   $0x0
c10010af:	6a 59                	push   $0x59
c10010b1:	e9 be fc ff ff       	jmp    c1000d74 <__alltraps>

c10010b6 <vector90>:
c10010b6:	6a 00                	push   $0x0
c10010b8:	6a 5a                	push   $0x5a
c10010ba:	e9 b5 fc ff ff       	jmp    c1000d74 <__alltraps>

c10010bf <vector91>:
c10010bf:	6a 00                	push   $0x0
c10010c1:	6a 5b                	push   $0x5b
c10010c3:	e9 ac fc ff ff       	jmp    c1000d74 <__alltraps>

c10010c8 <vector92>:
c10010c8:	6a 00                	push   $0x0
c10010ca:	6a 5c                	push   $0x5c
c10010cc:	e9 a3 fc ff ff       	jmp    c1000d74 <__alltraps>

c10010d1 <vector93>:
c10010d1:	6a 00                	push   $0x0
c10010d3:	6a 5d                	push   $0x5d
c10010d5:	e9 9a fc ff ff       	jmp    c1000d74 <__alltraps>

c10010da <vector94>:
c10010da:	6a 00                	push   $0x0
c10010dc:	6a 5e                	push   $0x5e
c10010de:	e9 91 fc ff ff       	jmp    c1000d74 <__alltraps>

c10010e3 <vector95>:
c10010e3:	6a 00                	push   $0x0
c10010e5:	6a 5f                	push   $0x5f
c10010e7:	e9 88 fc ff ff       	jmp    c1000d74 <__alltraps>

c10010ec <vector96>:
c10010ec:	6a 00                	push   $0x0
c10010ee:	6a 60                	push   $0x60
c10010f0:	e9 7f fc ff ff       	jmp    c1000d74 <__alltraps>

c10010f5 <vector97>:
c10010f5:	6a 00                	push   $0x0
c10010f7:	6a 61                	push   $0x61
c10010f9:	e9 76 fc ff ff       	jmp    c1000d74 <__alltraps>

c10010fe <vector98>:
c10010fe:	6a 00                	push   $0x0
c1001100:	6a 62                	push   $0x62
c1001102:	e9 6d fc ff ff       	jmp    c1000d74 <__alltraps>

c1001107 <vector99>:
c1001107:	6a 00                	push   $0x0
c1001109:	6a 63                	push   $0x63
c100110b:	e9 64 fc ff ff       	jmp    c1000d74 <__alltraps>

c1001110 <vector100>:
c1001110:	6a 00                	push   $0x0
c1001112:	6a 64                	push   $0x64
c1001114:	e9 5b fc ff ff       	jmp    c1000d74 <__alltraps>

c1001119 <vector101>:
c1001119:	6a 00                	push   $0x0
c100111b:	6a 65                	push   $0x65
c100111d:	e9 52 fc ff ff       	jmp    c1000d74 <__alltraps>

c1001122 <vector102>:
c1001122:	6a 00                	push   $0x0
c1001124:	6a 66                	push   $0x66
c1001126:	e9 49 fc ff ff       	jmp    c1000d74 <__alltraps>

c100112b <vector103>:
c100112b:	6a 00                	push   $0x0
c100112d:	6a 67                	push   $0x67
c100112f:	e9 40 fc ff ff       	jmp    c1000d74 <__alltraps>

c1001134 <vector104>:
c1001134:	6a 00                	push   $0x0
c1001136:	6a 68                	push   $0x68
c1001138:	e9 37 fc ff ff       	jmp    c1000d74 <__alltraps>

c100113d <vector105>:
c100113d:	6a 00                	push   $0x0
c100113f:	6a 69                	push   $0x69
c1001141:	e9 2e fc ff ff       	jmp    c1000d74 <__alltraps>

c1001146 <vector106>:
c1001146:	6a 00                	push   $0x0
c1001148:	6a 6a                	push   $0x6a
c100114a:	e9 25 fc ff ff       	jmp    c1000d74 <__alltraps>

c100114f <vector107>:
c100114f:	6a 00                	push   $0x0
c1001151:	6a 6b                	push   $0x6b
c1001153:	e9 1c fc ff ff       	jmp    c1000d74 <__alltraps>

c1001158 <vector108>:
c1001158:	6a 00                	push   $0x0
c100115a:	6a 6c                	push   $0x6c
c100115c:	e9 13 fc ff ff       	jmp    c1000d74 <__alltraps>

c1001161 <vector109>:
c1001161:	6a 00                	push   $0x0
c1001163:	6a 6d                	push   $0x6d
c1001165:	e9 0a fc ff ff       	jmp    c1000d74 <__alltraps>

c100116a <vector110>:
c100116a:	6a 00                	push   $0x0
c100116c:	6a 6e                	push   $0x6e
c100116e:	e9 01 fc ff ff       	jmp    c1000d74 <__alltraps>

c1001173 <vector111>:
c1001173:	6a 00                	push   $0x0
c1001175:	6a 6f                	push   $0x6f
c1001177:	e9 f8 fb ff ff       	jmp    c1000d74 <__alltraps>

c100117c <vector112>:
c100117c:	6a 00                	push   $0x0
c100117e:	6a 70                	push   $0x70
c1001180:	e9 ef fb ff ff       	jmp    c1000d74 <__alltraps>

c1001185 <vector113>:
c1001185:	6a 00                	push   $0x0
c1001187:	6a 71                	push   $0x71
c1001189:	e9 e6 fb ff ff       	jmp    c1000d74 <__alltraps>

c100118e <vector114>:
c100118e:	6a 00                	push   $0x0
c1001190:	6a 72                	push   $0x72
c1001192:	e9 dd fb ff ff       	jmp    c1000d74 <__alltraps>

c1001197 <vector115>:
c1001197:	6a 00                	push   $0x0
c1001199:	6a 73                	push   $0x73
c100119b:	e9 d4 fb ff ff       	jmp    c1000d74 <__alltraps>

c10011a0 <vector116>:
c10011a0:	6a 00                	push   $0x0
c10011a2:	6a 74                	push   $0x74
c10011a4:	e9 cb fb ff ff       	jmp    c1000d74 <__alltraps>

c10011a9 <vector117>:
c10011a9:	6a 00                	push   $0x0
c10011ab:	6a 75                	push   $0x75
c10011ad:	e9 c2 fb ff ff       	jmp    c1000d74 <__alltraps>

c10011b2 <vector118>:
c10011b2:	6a 00                	push   $0x0
c10011b4:	6a 76                	push   $0x76
c10011b6:	e9 b9 fb ff ff       	jmp    c1000d74 <__alltraps>

c10011bb <vector119>:
c10011bb:	6a 00                	push   $0x0
c10011bd:	6a 77                	push   $0x77
c10011bf:	e9 b0 fb ff ff       	jmp    c1000d74 <__alltraps>

c10011c4 <vector120>:
c10011c4:	6a 00                	push   $0x0
c10011c6:	6a 78                	push   $0x78
c10011c8:	e9 a7 fb ff ff       	jmp    c1000d74 <__alltraps>

c10011cd <vector121>:
c10011cd:	6a 00                	push   $0x0
c10011cf:	6a 79                	push   $0x79
c10011d1:	e9 9e fb ff ff       	jmp    c1000d74 <__alltraps>

c10011d6 <vector122>:
c10011d6:	6a 00                	push   $0x0
c10011d8:	6a 7a                	push   $0x7a
c10011da:	e9 95 fb ff ff       	jmp    c1000d74 <__alltraps>

c10011df <vector123>:
c10011df:	6a 00                	push   $0x0
c10011e1:	6a 7b                	push   $0x7b
c10011e3:	e9 8c fb ff ff       	jmp    c1000d74 <__alltraps>

c10011e8 <vector124>:
c10011e8:	6a 00                	push   $0x0
c10011ea:	6a 7c                	push   $0x7c
c10011ec:	e9 83 fb ff ff       	jmp    c1000d74 <__alltraps>

c10011f1 <vector125>:
c10011f1:	6a 00                	push   $0x0
c10011f3:	6a 7d                	push   $0x7d
c10011f5:	e9 7a fb ff ff       	jmp    c1000d74 <__alltraps>

c10011fa <vector126>:
c10011fa:	6a 00                	push   $0x0
c10011fc:	6a 7e                	push   $0x7e
c10011fe:	e9 71 fb ff ff       	jmp    c1000d74 <__alltraps>

c1001203 <vector127>:
c1001203:	6a 00                	push   $0x0
c1001205:	6a 7f                	push   $0x7f
c1001207:	e9 68 fb ff ff       	jmp    c1000d74 <__alltraps>

c100120c <vector128>:
c100120c:	6a 00                	push   $0x0
c100120e:	68 80 00 00 00       	push   $0x80
c1001213:	e9 5c fb ff ff       	jmp    c1000d74 <__alltraps>

c1001218 <vector129>:
c1001218:	6a 00                	push   $0x0
c100121a:	68 81 00 00 00       	push   $0x81
c100121f:	e9 50 fb ff ff       	jmp    c1000d74 <__alltraps>

c1001224 <vector130>:
c1001224:	6a 00                	push   $0x0
c1001226:	68 82 00 00 00       	push   $0x82
c100122b:	e9 44 fb ff ff       	jmp    c1000d74 <__alltraps>

c1001230 <vector131>:
c1001230:	6a 00                	push   $0x0
c1001232:	68 83 00 00 00       	push   $0x83
c1001237:	e9 38 fb ff ff       	jmp    c1000d74 <__alltraps>

c100123c <vector132>:
c100123c:	6a 00                	push   $0x0
c100123e:	68 84 00 00 00       	push   $0x84
c1001243:	e9 2c fb ff ff       	jmp    c1000d74 <__alltraps>

c1001248 <vector133>:
c1001248:	6a 00                	push   $0x0
c100124a:	68 85 00 00 00       	push   $0x85
c100124f:	e9 20 fb ff ff       	jmp    c1000d74 <__alltraps>

c1001254 <vector134>:
c1001254:	6a 00                	push   $0x0
c1001256:	68 86 00 00 00       	push   $0x86
c100125b:	e9 14 fb ff ff       	jmp    c1000d74 <__alltraps>

c1001260 <vector135>:
c1001260:	6a 00                	push   $0x0
c1001262:	68 87 00 00 00       	push   $0x87
c1001267:	e9 08 fb ff ff       	jmp    c1000d74 <__alltraps>

c100126c <vector136>:
c100126c:	6a 00                	push   $0x0
c100126e:	68 88 00 00 00       	push   $0x88
c1001273:	e9 fc fa ff ff       	jmp    c1000d74 <__alltraps>

c1001278 <vector137>:
c1001278:	6a 00                	push   $0x0
c100127a:	68 89 00 00 00       	push   $0x89
c100127f:	e9 f0 fa ff ff       	jmp    c1000d74 <__alltraps>

c1001284 <vector138>:
c1001284:	6a 00                	push   $0x0
c1001286:	68 8a 00 00 00       	push   $0x8a
c100128b:	e9 e4 fa ff ff       	jmp    c1000d74 <__alltraps>

c1001290 <vector139>:
c1001290:	6a 00                	push   $0x0
c1001292:	68 8b 00 00 00       	push   $0x8b
c1001297:	e9 d8 fa ff ff       	jmp    c1000d74 <__alltraps>

c100129c <vector140>:
c100129c:	6a 00                	push   $0x0
c100129e:	68 8c 00 00 00       	push   $0x8c
c10012a3:	e9 cc fa ff ff       	jmp    c1000d74 <__alltraps>

c10012a8 <vector141>:
c10012a8:	6a 00                	push   $0x0
c10012aa:	68 8d 00 00 00       	push   $0x8d
c10012af:	e9 c0 fa ff ff       	jmp    c1000d74 <__alltraps>

c10012b4 <vector142>:
c10012b4:	6a 00                	push   $0x0
c10012b6:	68 8e 00 00 00       	push   $0x8e
c10012bb:	e9 b4 fa ff ff       	jmp    c1000d74 <__alltraps>

c10012c0 <vector143>:
c10012c0:	6a 00                	push   $0x0
c10012c2:	68 8f 00 00 00       	push   $0x8f
c10012c7:	e9 a8 fa ff ff       	jmp    c1000d74 <__alltraps>

c10012cc <vector144>:
c10012cc:	6a 00                	push   $0x0
c10012ce:	68 90 00 00 00       	push   $0x90
c10012d3:	e9 9c fa ff ff       	jmp    c1000d74 <__alltraps>

c10012d8 <vector145>:
c10012d8:	6a 00                	push   $0x0
c10012da:	68 91 00 00 00       	push   $0x91
c10012df:	e9 90 fa ff ff       	jmp    c1000d74 <__alltraps>

c10012e4 <vector146>:
c10012e4:	6a 00                	push   $0x0
c10012e6:	68 92 00 00 00       	push   $0x92
c10012eb:	e9 84 fa ff ff       	jmp    c1000d74 <__alltraps>

c10012f0 <vector147>:
c10012f0:	6a 00                	push   $0x0
c10012f2:	68 93 00 00 00       	push   $0x93
c10012f7:	e9 78 fa ff ff       	jmp    c1000d74 <__alltraps>

c10012fc <vector148>:
c10012fc:	6a 00                	push   $0x0
c10012fe:	68 94 00 00 00       	push   $0x94
c1001303:	e9 6c fa ff ff       	jmp    c1000d74 <__alltraps>

c1001308 <vector149>:
c1001308:	6a 00                	push   $0x0
c100130a:	68 95 00 00 00       	push   $0x95
c100130f:	e9 60 fa ff ff       	jmp    c1000d74 <__alltraps>

c1001314 <vector150>:
c1001314:	6a 00                	push   $0x0
c1001316:	68 96 00 00 00       	push   $0x96
c100131b:	e9 54 fa ff ff       	jmp    c1000d74 <__alltraps>

c1001320 <vector151>:
c1001320:	6a 00                	push   $0x0
c1001322:	68 97 00 00 00       	push   $0x97
c1001327:	e9 48 fa ff ff       	jmp    c1000d74 <__alltraps>

c100132c <vector152>:
c100132c:	6a 00                	push   $0x0
c100132e:	68 98 00 00 00       	push   $0x98
c1001333:	e9 3c fa ff ff       	jmp    c1000d74 <__alltraps>

c1001338 <vector153>:
c1001338:	6a 00                	push   $0x0
c100133a:	68 99 00 00 00       	push   $0x99
c100133f:	e9 30 fa ff ff       	jmp    c1000d74 <__alltraps>

c1001344 <vector154>:
c1001344:	6a 00                	push   $0x0
c1001346:	68 9a 00 00 00       	push   $0x9a
c100134b:	e9 24 fa ff ff       	jmp    c1000d74 <__alltraps>

c1001350 <vector155>:
c1001350:	6a 00                	push   $0x0
c1001352:	68 9b 00 00 00       	push   $0x9b
c1001357:	e9 18 fa ff ff       	jmp    c1000d74 <__alltraps>

c100135c <vector156>:
c100135c:	6a 00                	push   $0x0
c100135e:	68 9c 00 00 00       	push   $0x9c
c1001363:	e9 0c fa ff ff       	jmp    c1000d74 <__alltraps>

c1001368 <vector157>:
c1001368:	6a 00                	push   $0x0
c100136a:	68 9d 00 00 00       	push   $0x9d
c100136f:	e9 00 fa ff ff       	jmp    c1000d74 <__alltraps>

c1001374 <vector158>:
c1001374:	6a 00                	push   $0x0
c1001376:	68 9e 00 00 00       	push   $0x9e
c100137b:	e9 f4 f9 ff ff       	jmp    c1000d74 <__alltraps>

c1001380 <vector159>:
c1001380:	6a 00                	push   $0x0
c1001382:	68 9f 00 00 00       	push   $0x9f
c1001387:	e9 e8 f9 ff ff       	jmp    c1000d74 <__alltraps>

c100138c <vector160>:
c100138c:	6a 00                	push   $0x0
c100138e:	68 a0 00 00 00       	push   $0xa0
c1001393:	e9 dc f9 ff ff       	jmp    c1000d74 <__alltraps>

c1001398 <vector161>:
c1001398:	6a 00                	push   $0x0
c100139a:	68 a1 00 00 00       	push   $0xa1
c100139f:	e9 d0 f9 ff ff       	jmp    c1000d74 <__alltraps>

c10013a4 <vector162>:
c10013a4:	6a 00                	push   $0x0
c10013a6:	68 a2 00 00 00       	push   $0xa2
c10013ab:	e9 c4 f9 ff ff       	jmp    c1000d74 <__alltraps>

c10013b0 <vector163>:
c10013b0:	6a 00                	push   $0x0
c10013b2:	68 a3 00 00 00       	push   $0xa3
c10013b7:	e9 b8 f9 ff ff       	jmp    c1000d74 <__alltraps>

c10013bc <vector164>:
c10013bc:	6a 00                	push   $0x0
c10013be:	68 a4 00 00 00       	push   $0xa4
c10013c3:	e9 ac f9 ff ff       	jmp    c1000d74 <__alltraps>

c10013c8 <vector165>:
c10013c8:	6a 00                	push   $0x0
c10013ca:	68 a5 00 00 00       	push   $0xa5
c10013cf:	e9 a0 f9 ff ff       	jmp    c1000d74 <__alltraps>

c10013d4 <vector166>:
c10013d4:	6a 00                	push   $0x0
c10013d6:	68 a6 00 00 00       	push   $0xa6
c10013db:	e9 94 f9 ff ff       	jmp    c1000d74 <__alltraps>

c10013e0 <vector167>:
c10013e0:	6a 00                	push   $0x0
c10013e2:	68 a7 00 00 00       	push   $0xa7
c10013e7:	e9 88 f9 ff ff       	jmp    c1000d74 <__alltraps>

c10013ec <vector168>:
c10013ec:	6a 00                	push   $0x0
c10013ee:	68 a8 00 00 00       	push   $0xa8
c10013f3:	e9 7c f9 ff ff       	jmp    c1000d74 <__alltraps>

c10013f8 <vector169>:
c10013f8:	6a 00                	push   $0x0
c10013fa:	68 a9 00 00 00       	push   $0xa9
c10013ff:	e9 70 f9 ff ff       	jmp    c1000d74 <__alltraps>

c1001404 <vector170>:
c1001404:	6a 00                	push   $0x0
c1001406:	68 aa 00 00 00       	push   $0xaa
c100140b:	e9 64 f9 ff ff       	jmp    c1000d74 <__alltraps>

c1001410 <vector171>:
c1001410:	6a 00                	push   $0x0
c1001412:	68 ab 00 00 00       	push   $0xab
c1001417:	e9 58 f9 ff ff       	jmp    c1000d74 <__alltraps>

c100141c <vector172>:
c100141c:	6a 00                	push   $0x0
c100141e:	68 ac 00 00 00       	push   $0xac
c1001423:	e9 4c f9 ff ff       	jmp    c1000d74 <__alltraps>

c1001428 <vector173>:
c1001428:	6a 00                	push   $0x0
c100142a:	68 ad 00 00 00       	push   $0xad
c100142f:	e9 40 f9 ff ff       	jmp    c1000d74 <__alltraps>

c1001434 <vector174>:
c1001434:	6a 00                	push   $0x0
c1001436:	68 ae 00 00 00       	push   $0xae
c100143b:	e9 34 f9 ff ff       	jmp    c1000d74 <__alltraps>

c1001440 <vector175>:
c1001440:	6a 00                	push   $0x0
c1001442:	68 af 00 00 00       	push   $0xaf
c1001447:	e9 28 f9 ff ff       	jmp    c1000d74 <__alltraps>

c100144c <vector176>:
c100144c:	6a 00                	push   $0x0
c100144e:	68 b0 00 00 00       	push   $0xb0
c1001453:	e9 1c f9 ff ff       	jmp    c1000d74 <__alltraps>

c1001458 <vector177>:
c1001458:	6a 00                	push   $0x0
c100145a:	68 b1 00 00 00       	push   $0xb1
c100145f:	e9 10 f9 ff ff       	jmp    c1000d74 <__alltraps>

c1001464 <vector178>:
c1001464:	6a 00                	push   $0x0
c1001466:	68 b2 00 00 00       	push   $0xb2
c100146b:	e9 04 f9 ff ff       	jmp    c1000d74 <__alltraps>

c1001470 <vector179>:
c1001470:	6a 00                	push   $0x0
c1001472:	68 b3 00 00 00       	push   $0xb3
c1001477:	e9 f8 f8 ff ff       	jmp    c1000d74 <__alltraps>

c100147c <vector180>:
c100147c:	6a 00                	push   $0x0
c100147e:	68 b4 00 00 00       	push   $0xb4
c1001483:	e9 ec f8 ff ff       	jmp    c1000d74 <__alltraps>

c1001488 <vector181>:
c1001488:	6a 00                	push   $0x0
c100148a:	68 b5 00 00 00       	push   $0xb5
c100148f:	e9 e0 f8 ff ff       	jmp    c1000d74 <__alltraps>

c1001494 <vector182>:
c1001494:	6a 00                	push   $0x0
c1001496:	68 b6 00 00 00       	push   $0xb6
c100149b:	e9 d4 f8 ff ff       	jmp    c1000d74 <__alltraps>

c10014a0 <vector183>:
c10014a0:	6a 00                	push   $0x0
c10014a2:	68 b7 00 00 00       	push   $0xb7
c10014a7:	e9 c8 f8 ff ff       	jmp    c1000d74 <__alltraps>

c10014ac <vector184>:
c10014ac:	6a 00                	push   $0x0
c10014ae:	68 b8 00 00 00       	push   $0xb8
c10014b3:	e9 bc f8 ff ff       	jmp    c1000d74 <__alltraps>

c10014b8 <vector185>:
c10014b8:	6a 00                	push   $0x0
c10014ba:	68 b9 00 00 00       	push   $0xb9
c10014bf:	e9 b0 f8 ff ff       	jmp    c1000d74 <__alltraps>

c10014c4 <vector186>:
c10014c4:	6a 00                	push   $0x0
c10014c6:	68 ba 00 00 00       	push   $0xba
c10014cb:	e9 a4 f8 ff ff       	jmp    c1000d74 <__alltraps>

c10014d0 <vector187>:
c10014d0:	6a 00                	push   $0x0
c10014d2:	68 bb 00 00 00       	push   $0xbb
c10014d7:	e9 98 f8 ff ff       	jmp    c1000d74 <__alltraps>

c10014dc <vector188>:
c10014dc:	6a 00                	push   $0x0
c10014de:	68 bc 00 00 00       	push   $0xbc
c10014e3:	e9 8c f8 ff ff       	jmp    c1000d74 <__alltraps>

c10014e8 <vector189>:
c10014e8:	6a 00                	push   $0x0
c10014ea:	68 bd 00 00 00       	push   $0xbd
c10014ef:	e9 80 f8 ff ff       	jmp    c1000d74 <__alltraps>

c10014f4 <vector190>:
c10014f4:	6a 00                	push   $0x0
c10014f6:	68 be 00 00 00       	push   $0xbe
c10014fb:	e9 74 f8 ff ff       	jmp    c1000d74 <__alltraps>

c1001500 <vector191>:
c1001500:	6a 00                	push   $0x0
c1001502:	68 bf 00 00 00       	push   $0xbf
c1001507:	e9 68 f8 ff ff       	jmp    c1000d74 <__alltraps>

c100150c <vector192>:
c100150c:	6a 00                	push   $0x0
c100150e:	68 c0 00 00 00       	push   $0xc0
c1001513:	e9 5c f8 ff ff       	jmp    c1000d74 <__alltraps>

c1001518 <vector193>:
c1001518:	6a 00                	push   $0x0
c100151a:	68 c1 00 00 00       	push   $0xc1
c100151f:	e9 50 f8 ff ff       	jmp    c1000d74 <__alltraps>

c1001524 <vector194>:
c1001524:	6a 00                	push   $0x0
c1001526:	68 c2 00 00 00       	push   $0xc2
c100152b:	e9 44 f8 ff ff       	jmp    c1000d74 <__alltraps>

c1001530 <vector195>:
c1001530:	6a 00                	push   $0x0
c1001532:	68 c3 00 00 00       	push   $0xc3
c1001537:	e9 38 f8 ff ff       	jmp    c1000d74 <__alltraps>

c100153c <vector196>:
c100153c:	6a 00                	push   $0x0
c100153e:	68 c4 00 00 00       	push   $0xc4
c1001543:	e9 2c f8 ff ff       	jmp    c1000d74 <__alltraps>

c1001548 <vector197>:
c1001548:	6a 00                	push   $0x0
c100154a:	68 c5 00 00 00       	push   $0xc5
c100154f:	e9 20 f8 ff ff       	jmp    c1000d74 <__alltraps>

c1001554 <vector198>:
c1001554:	6a 00                	push   $0x0
c1001556:	68 c6 00 00 00       	push   $0xc6
c100155b:	e9 14 f8 ff ff       	jmp    c1000d74 <__alltraps>

c1001560 <vector199>:
c1001560:	6a 00                	push   $0x0
c1001562:	68 c7 00 00 00       	push   $0xc7
c1001567:	e9 08 f8 ff ff       	jmp    c1000d74 <__alltraps>

c100156c <vector200>:
c100156c:	6a 00                	push   $0x0
c100156e:	68 c8 00 00 00       	push   $0xc8
c1001573:	e9 fc f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001578 <vector201>:
c1001578:	6a 00                	push   $0x0
c100157a:	68 c9 00 00 00       	push   $0xc9
c100157f:	e9 f0 f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001584 <vector202>:
c1001584:	6a 00                	push   $0x0
c1001586:	68 ca 00 00 00       	push   $0xca
c100158b:	e9 e4 f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001590 <vector203>:
c1001590:	6a 00                	push   $0x0
c1001592:	68 cb 00 00 00       	push   $0xcb
c1001597:	e9 d8 f7 ff ff       	jmp    c1000d74 <__alltraps>

c100159c <vector204>:
c100159c:	6a 00                	push   $0x0
c100159e:	68 cc 00 00 00       	push   $0xcc
c10015a3:	e9 cc f7 ff ff       	jmp    c1000d74 <__alltraps>

c10015a8 <vector205>:
c10015a8:	6a 00                	push   $0x0
c10015aa:	68 cd 00 00 00       	push   $0xcd
c10015af:	e9 c0 f7 ff ff       	jmp    c1000d74 <__alltraps>

c10015b4 <vector206>:
c10015b4:	6a 00                	push   $0x0
c10015b6:	68 ce 00 00 00       	push   $0xce
c10015bb:	e9 b4 f7 ff ff       	jmp    c1000d74 <__alltraps>

c10015c0 <vector207>:
c10015c0:	6a 00                	push   $0x0
c10015c2:	68 cf 00 00 00       	push   $0xcf
c10015c7:	e9 a8 f7 ff ff       	jmp    c1000d74 <__alltraps>

c10015cc <vector208>:
c10015cc:	6a 00                	push   $0x0
c10015ce:	68 d0 00 00 00       	push   $0xd0
c10015d3:	e9 9c f7 ff ff       	jmp    c1000d74 <__alltraps>

c10015d8 <vector209>:
c10015d8:	6a 00                	push   $0x0
c10015da:	68 d1 00 00 00       	push   $0xd1
c10015df:	e9 90 f7 ff ff       	jmp    c1000d74 <__alltraps>

c10015e4 <vector210>:
c10015e4:	6a 00                	push   $0x0
c10015e6:	68 d2 00 00 00       	push   $0xd2
c10015eb:	e9 84 f7 ff ff       	jmp    c1000d74 <__alltraps>

c10015f0 <vector211>:
c10015f0:	6a 00                	push   $0x0
c10015f2:	68 d3 00 00 00       	push   $0xd3
c10015f7:	e9 78 f7 ff ff       	jmp    c1000d74 <__alltraps>

c10015fc <vector212>:
c10015fc:	6a 00                	push   $0x0
c10015fe:	68 d4 00 00 00       	push   $0xd4
c1001603:	e9 6c f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001608 <vector213>:
c1001608:	6a 00                	push   $0x0
c100160a:	68 d5 00 00 00       	push   $0xd5
c100160f:	e9 60 f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001614 <vector214>:
c1001614:	6a 00                	push   $0x0
c1001616:	68 d6 00 00 00       	push   $0xd6
c100161b:	e9 54 f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001620 <vector215>:
c1001620:	6a 00                	push   $0x0
c1001622:	68 d7 00 00 00       	push   $0xd7
c1001627:	e9 48 f7 ff ff       	jmp    c1000d74 <__alltraps>

c100162c <vector216>:
c100162c:	6a 00                	push   $0x0
c100162e:	68 d8 00 00 00       	push   $0xd8
c1001633:	e9 3c f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001638 <vector217>:
c1001638:	6a 00                	push   $0x0
c100163a:	68 d9 00 00 00       	push   $0xd9
c100163f:	e9 30 f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001644 <vector218>:
c1001644:	6a 00                	push   $0x0
c1001646:	68 da 00 00 00       	push   $0xda
c100164b:	e9 24 f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001650 <vector219>:
c1001650:	6a 00                	push   $0x0
c1001652:	68 db 00 00 00       	push   $0xdb
c1001657:	e9 18 f7 ff ff       	jmp    c1000d74 <__alltraps>

c100165c <vector220>:
c100165c:	6a 00                	push   $0x0
c100165e:	68 dc 00 00 00       	push   $0xdc
c1001663:	e9 0c f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001668 <vector221>:
c1001668:	6a 00                	push   $0x0
c100166a:	68 dd 00 00 00       	push   $0xdd
c100166f:	e9 00 f7 ff ff       	jmp    c1000d74 <__alltraps>

c1001674 <vector222>:
c1001674:	6a 00                	push   $0x0
c1001676:	68 de 00 00 00       	push   $0xde
c100167b:	e9 f4 f6 ff ff       	jmp    c1000d74 <__alltraps>

c1001680 <vector223>:
c1001680:	6a 00                	push   $0x0
c1001682:	68 df 00 00 00       	push   $0xdf
c1001687:	e9 e8 f6 ff ff       	jmp    c1000d74 <__alltraps>

c100168c <vector224>:
c100168c:	6a 00                	push   $0x0
c100168e:	68 e0 00 00 00       	push   $0xe0
c1001693:	e9 dc f6 ff ff       	jmp    c1000d74 <__alltraps>

c1001698 <vector225>:
c1001698:	6a 00                	push   $0x0
c100169a:	68 e1 00 00 00       	push   $0xe1
c100169f:	e9 d0 f6 ff ff       	jmp    c1000d74 <__alltraps>

c10016a4 <vector226>:
c10016a4:	6a 00                	push   $0x0
c10016a6:	68 e2 00 00 00       	push   $0xe2
c10016ab:	e9 c4 f6 ff ff       	jmp    c1000d74 <__alltraps>

c10016b0 <vector227>:
c10016b0:	6a 00                	push   $0x0
c10016b2:	68 e3 00 00 00       	push   $0xe3
c10016b7:	e9 b8 f6 ff ff       	jmp    c1000d74 <__alltraps>

c10016bc <vector228>:
c10016bc:	6a 00                	push   $0x0
c10016be:	68 e4 00 00 00       	push   $0xe4
c10016c3:	e9 ac f6 ff ff       	jmp    c1000d74 <__alltraps>

c10016c8 <vector229>:
c10016c8:	6a 00                	push   $0x0
c10016ca:	68 e5 00 00 00       	push   $0xe5
c10016cf:	e9 a0 f6 ff ff       	jmp    c1000d74 <__alltraps>

c10016d4 <vector230>:
c10016d4:	6a 00                	push   $0x0
c10016d6:	68 e6 00 00 00       	push   $0xe6
c10016db:	e9 94 f6 ff ff       	jmp    c1000d74 <__alltraps>

c10016e0 <vector231>:
c10016e0:	6a 00                	push   $0x0
c10016e2:	68 e7 00 00 00       	push   $0xe7
c10016e7:	e9 88 f6 ff ff       	jmp    c1000d74 <__alltraps>

c10016ec <vector232>:
c10016ec:	6a 00                	push   $0x0
c10016ee:	68 e8 00 00 00       	push   $0xe8
c10016f3:	e9 7c f6 ff ff       	jmp    c1000d74 <__alltraps>

c10016f8 <vector233>:
c10016f8:	6a 00                	push   $0x0
c10016fa:	68 e9 00 00 00       	push   $0xe9
c10016ff:	e9 70 f6 ff ff       	jmp    c1000d74 <__alltraps>

c1001704 <vector234>:
c1001704:	6a 00                	push   $0x0
c1001706:	68 ea 00 00 00       	push   $0xea
c100170b:	e9 64 f6 ff ff       	jmp    c1000d74 <__alltraps>

c1001710 <vector235>:
c1001710:	6a 00                	push   $0x0
c1001712:	68 eb 00 00 00       	push   $0xeb
c1001717:	e9 58 f6 ff ff       	jmp    c1000d74 <__alltraps>

c100171c <vector236>:
c100171c:	6a 00                	push   $0x0
c100171e:	68 ec 00 00 00       	push   $0xec
c1001723:	e9 4c f6 ff ff       	jmp    c1000d74 <__alltraps>

c1001728 <vector237>:
c1001728:	6a 00                	push   $0x0
c100172a:	68 ed 00 00 00       	push   $0xed
c100172f:	e9 40 f6 ff ff       	jmp    c1000d74 <__alltraps>

c1001734 <vector238>:
c1001734:	6a 00                	push   $0x0
c1001736:	68 ee 00 00 00       	push   $0xee
c100173b:	e9 34 f6 ff ff       	jmp    c1000d74 <__alltraps>

c1001740 <vector239>:
c1001740:	6a 00                	push   $0x0
c1001742:	68 ef 00 00 00       	push   $0xef
c1001747:	e9 28 f6 ff ff       	jmp    c1000d74 <__alltraps>

c100174c <vector240>:
c100174c:	6a 00                	push   $0x0
c100174e:	68 f0 00 00 00       	push   $0xf0
c1001753:	e9 1c f6 ff ff       	jmp    c1000d74 <__alltraps>

c1001758 <vector241>:
c1001758:	6a 00                	push   $0x0
c100175a:	68 f1 00 00 00       	push   $0xf1
c100175f:	e9 10 f6 ff ff       	jmp    c1000d74 <__alltraps>

c1001764 <vector242>:
c1001764:	6a 00                	push   $0x0
c1001766:	68 f2 00 00 00       	push   $0xf2
c100176b:	e9 04 f6 ff ff       	jmp    c1000d74 <__alltraps>

c1001770 <vector243>:
c1001770:	6a 00                	push   $0x0
c1001772:	68 f3 00 00 00       	push   $0xf3
c1001777:	e9 f8 f5 ff ff       	jmp    c1000d74 <__alltraps>

c100177c <vector244>:
c100177c:	6a 00                	push   $0x0
c100177e:	68 f4 00 00 00       	push   $0xf4
c1001783:	e9 ec f5 ff ff       	jmp    c1000d74 <__alltraps>

c1001788 <vector245>:
c1001788:	6a 00                	push   $0x0
c100178a:	68 f5 00 00 00       	push   $0xf5
c100178f:	e9 e0 f5 ff ff       	jmp    c1000d74 <__alltraps>

c1001794 <vector246>:
c1001794:	6a 00                	push   $0x0
c1001796:	68 f6 00 00 00       	push   $0xf6
c100179b:	e9 d4 f5 ff ff       	jmp    c1000d74 <__alltraps>

c10017a0 <vector247>:
c10017a0:	6a 00                	push   $0x0
c10017a2:	68 f7 00 00 00       	push   $0xf7
c10017a7:	e9 c8 f5 ff ff       	jmp    c1000d74 <__alltraps>

c10017ac <vector248>:
c10017ac:	6a 00                	push   $0x0
c10017ae:	68 f8 00 00 00       	push   $0xf8
c10017b3:	e9 bc f5 ff ff       	jmp    c1000d74 <__alltraps>

c10017b8 <vector249>:
c10017b8:	6a 00                	push   $0x0
c10017ba:	68 f9 00 00 00       	push   $0xf9
c10017bf:	e9 b0 f5 ff ff       	jmp    c1000d74 <__alltraps>

c10017c4 <vector250>:
c10017c4:	6a 00                	push   $0x0
c10017c6:	68 fa 00 00 00       	push   $0xfa
c10017cb:	e9 a4 f5 ff ff       	jmp    c1000d74 <__alltraps>

c10017d0 <vector251>:
c10017d0:	6a 00                	push   $0x0
c10017d2:	68 fb 00 00 00       	push   $0xfb
c10017d7:	e9 98 f5 ff ff       	jmp    c1000d74 <__alltraps>

c10017dc <vector252>:
c10017dc:	6a 00                	push   $0x0
c10017de:	68 fc 00 00 00       	push   $0xfc
c10017e3:	e9 8c f5 ff ff       	jmp    c1000d74 <__alltraps>

c10017e8 <vector253>:
c10017e8:	6a 00                	push   $0x0
c10017ea:	68 fd 00 00 00       	push   $0xfd
c10017ef:	e9 80 f5 ff ff       	jmp    c1000d74 <__alltraps>

c10017f4 <vector254>:
c10017f4:	6a 00                	push   $0x0
c10017f6:	68 fe 00 00 00       	push   $0xfe
c10017fb:	e9 74 f5 ff ff       	jmp    c1000d74 <__alltraps>

c1001800 <vector255>:
c1001800:	6a 00                	push   $0x0
c1001802:	68 ff 00 00 00       	push   $0xff
c1001807:	e9 68 f5 ff ff       	jmp    c1000d74 <__alltraps>

c100180c <hash32>:
c100180c:	55                   	push   %ebp
c100180d:	89 e5                	mov    %esp,%ebp
c100180f:	83 ec 10             	sub    $0x10,%esp
c1001812:	8b 45 08             	mov    0x8(%ebp),%eax
c1001815:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100181b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100181e:	b8 20 00 00 00       	mov    $0x20,%eax
c1001823:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001826:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001829:	89 c1                	mov    %eax,%ecx
c100182b:	d3 ea                	shr    %cl,%edx
c100182d:	89 d0                	mov    %edx,%eax
c100182f:	c9                   	leave  
c1001830:	c3                   	ret    

c1001831 <sys_exit>:
c1001831:	55                   	push   %ebp
c1001832:	89 e5                	mov    %esp,%ebp
c1001834:	83 ec 10             	sub    $0x10,%esp
c1001837:	8b 45 08             	mov    0x8(%ebp),%eax
c100183a:	8b 00                	mov    (%eax),%eax
c100183c:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100183f:	b8 00 00 00 00       	mov    $0x0,%eax
c1001844:	c9                   	leave  
c1001845:	c3                   	ret    

c1001846 <sys_fork>:
c1001846:	55                   	push   %ebp
c1001847:	89 e5                	mov    %esp,%ebp
c1001849:	83 ec 18             	sub    $0x18,%esp
c100184c:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1001851:	8b 40 2c             	mov    0x2c(%eax),%eax
c1001854:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001857:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100185a:	8b 40 44             	mov    0x44(%eax),%eax
c100185d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001860:	83 ec 04             	sub    $0x4,%esp
c1001863:	ff 75 f4             	pushl  -0xc(%ebp)
c1001866:	ff 75 f0             	pushl  -0x10(%ebp)
c1001869:	6a 00                	push   $0x0
c100186b:	e8 52 1c 00 00       	call   c10034c2 <do_fork>
c1001870:	83 c4 10             	add    $0x10,%esp
c1001873:	c9                   	leave  
c1001874:	c3                   	ret    

c1001875 <sys_wait>:
c1001875:	55                   	push   %ebp
c1001876:	89 e5                	mov    %esp,%ebp
c1001878:	83 ec 10             	sub    $0x10,%esp
c100187b:	8b 45 08             	mov    0x8(%ebp),%eax
c100187e:	8b 00                	mov    (%eax),%eax
c1001880:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1001883:	8b 45 08             	mov    0x8(%ebp),%eax
c1001886:	83 c0 04             	add    $0x4,%eax
c1001889:	8b 00                	mov    (%eax),%eax
c100188b:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100188e:	90                   	nop
c100188f:	c9                   	leave  
c1001890:	c3                   	ret    

c1001891 <sys_exec>:
c1001891:	55                   	push   %ebp
c1001892:	89 e5                	mov    %esp,%ebp
c1001894:	83 ec 18             	sub    $0x18,%esp
c1001897:	8b 45 08             	mov    0x8(%ebp),%eax
c100189a:	8b 00                	mov    (%eax),%eax
c100189c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100189f:	8b 45 08             	mov    0x8(%ebp),%eax
c10018a2:	8b 40 04             	mov    0x4(%eax),%eax
c10018a5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10018a8:	8b 45 08             	mov    0x8(%ebp),%eax
c10018ab:	83 c0 08             	add    $0x8,%eax
c10018ae:	8b 00                	mov    (%eax),%eax
c10018b0:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10018b3:	8b 45 08             	mov    0x8(%ebp),%eax
c10018b6:	8b 40 0c             	mov    0xc(%eax),%eax
c10018b9:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10018bc:	ff 75 e8             	pushl  -0x18(%ebp)
c10018bf:	ff 75 ec             	pushl  -0x14(%ebp)
c10018c2:	ff 75 f0             	pushl  -0x10(%ebp)
c10018c5:	ff 75 f4             	pushl  -0xc(%ebp)
c10018c8:	e8 cb 1f 00 00       	call   c1003898 <do_execve>
c10018cd:	83 c4 10             	add    $0x10,%esp
c10018d0:	c9                   	leave  
c10018d1:	c3                   	ret    

c10018d2 <sys_yield>:
c10018d2:	55                   	push   %ebp
c10018d3:	89 e5                	mov    %esp,%ebp
c10018d5:	90                   	nop
c10018d6:	5d                   	pop    %ebp
c10018d7:	c3                   	ret    

c10018d8 <sys_kill>:
c10018d8:	55                   	push   %ebp
c10018d9:	89 e5                	mov    %esp,%ebp
c10018db:	83 ec 10             	sub    $0x10,%esp
c10018de:	8b 45 08             	mov    0x8(%ebp),%eax
c10018e1:	8b 00                	mov    (%eax),%eax
c10018e3:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10018e6:	90                   	nop
c10018e7:	c9                   	leave  
c10018e8:	c3                   	ret    

c10018e9 <sys_getpid>:
c10018e9:	55                   	push   %ebp
c10018ea:	89 e5                	mov    %esp,%ebp
c10018ec:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10018f1:	8b 40 0c             	mov    0xc(%eax),%eax
c10018f4:	5d                   	pop    %ebp
c10018f5:	c3                   	ret    

c10018f6 <sys_print_char>:
c10018f6:	55                   	push   %ebp
c10018f7:	89 e5                	mov    %esp,%ebp
c10018f9:	83 ec 18             	sub    $0x18,%esp
c10018fc:	8b 45 08             	mov    0x8(%ebp),%eax
c10018ff:	8b 00                	mov    (%eax),%eax
c1001901:	88 45 f7             	mov    %al,-0x9(%ebp)
c1001904:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1001908:	83 ec 04             	sub    $0x4,%esp
c100190b:	6a 02                	push   $0x2
c100190d:	6a 00                	push   $0x0
c100190f:	50                   	push   %eax
c1001910:	e8 e0 29 00 00       	call   c10042f5 <print_char>
c1001915:	83 c4 10             	add    $0x10,%esp
c1001918:	b8 00 00 00 00       	mov    $0x0,%eax
c100191d:	c9                   	leave  
c100191e:	c3                   	ret    

c100191f <sys_print_string>:
c100191f:	55                   	push   %ebp
c1001920:	89 e5                	mov    %esp,%ebp
c1001922:	83 ec 18             	sub    $0x18,%esp
c1001925:	8b 45 08             	mov    0x8(%ebp),%eax
c1001928:	8b 00                	mov    (%eax),%eax
c100192a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100192d:	83 ec 04             	sub    $0x4,%esp
c1001930:	6a 02                	push   $0x2
c1001932:	6a 00                	push   $0x0
c1001934:	ff 75 f4             	pushl  -0xc(%ebp)
c1001937:	e8 d6 2a 00 00       	call   c1004412 <print_string>
c100193c:	83 c4 10             	add    $0x10,%esp
c100193f:	b8 00 00 00 00       	mov    $0x0,%eax
c1001944:	c9                   	leave  
c1001945:	c3                   	ret    

c1001946 <sys_print_num>:
c1001946:	55                   	push   %ebp
c1001947:	89 e5                	mov    %esp,%ebp
c1001949:	53                   	push   %ebx
c100194a:	83 ec 14             	sub    $0x14,%esp
c100194d:	8b 45 08             	mov    0x8(%ebp),%eax
c1001950:	8b 00                	mov    (%eax),%eax
c1001952:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001955:	8b 45 08             	mov    0x8(%ebp),%eax
c1001958:	83 c0 04             	add    $0x4,%eax
c100195b:	8b 00                	mov    (%eax),%eax
c100195d:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001960:	8b 45 08             	mov    0x8(%ebp),%eax
c1001963:	83 c0 08             	add    $0x8,%eax
c1001966:	8b 00                	mov    (%eax),%eax
c1001968:	88 45 f2             	mov    %al,-0xe(%ebp)
c100196b:	8b 45 08             	mov    0x8(%ebp),%eax
c100196e:	83 c0 0c             	add    $0xc,%eax
c1001971:	8b 00                	mov    (%eax),%eax
c1001973:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001976:	0f be 5d f2          	movsbl -0xe(%ebp),%ebx
c100197a:	0f b6 4d f3          	movzbl -0xd(%ebp),%ecx
c100197e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001981:	99                   	cltd   
c1001982:	83 ec 04             	sub    $0x4,%esp
c1001985:	ff 75 ec             	pushl  -0x14(%ebp)
c1001988:	53                   	push   %ebx
c1001989:	51                   	push   %ecx
c100198a:	6a 02                	push   $0x2
c100198c:	6a 00                	push   $0x0
c100198e:	52                   	push   %edx
c100198f:	50                   	push   %eax
c1001990:	e8 b4 2a 00 00       	call   c1004449 <print_num>
c1001995:	83 c4 20             	add    $0x20,%esp
c1001998:	b8 00 00 00 00       	mov    $0x0,%eax
c100199d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10019a0:	c9                   	leave  
c10019a1:	c3                   	ret    

c10019a2 <sys_pgdir>:
c10019a2:	55                   	push   %ebp
c10019a3:	89 e5                	mov    %esp,%ebp
c10019a5:	b8 00 00 00 00       	mov    $0x0,%eax
c10019aa:	5d                   	pop    %ebp
c10019ab:	c3                   	ret    

c10019ac <sys_fdread>:
c10019ac:	55                   	push   %ebp
c10019ad:	89 e5                	mov    %esp,%ebp
c10019af:	83 ec 18             	sub    $0x18,%esp
c10019b2:	8b 45 08             	mov    0x8(%ebp),%eax
c10019b5:	8b 00                	mov    (%eax),%eax
c10019b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10019ba:	8b 45 08             	mov    0x8(%ebp),%eax
c10019bd:	83 c0 04             	add    $0x4,%eax
c10019c0:	8b 00                	mov    (%eax),%eax
c10019c2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10019c5:	8b 45 08             	mov    0x8(%ebp),%eax
c10019c8:	8b 40 08             	mov    0x8(%eax),%eax
c10019cb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10019ce:	83 ec 04             	sub    $0x4,%esp
c10019d1:	ff 75 ec             	pushl  -0x14(%ebp)
c10019d4:	ff 75 f0             	pushl  -0x10(%ebp)
c10019d7:	ff 75 f4             	pushl  -0xc(%ebp)
c10019da:	e8 0c 46 00 00       	call   c1005feb <sys_read>
c10019df:	83 c4 10             	add    $0x10,%esp
c10019e2:	c9                   	leave  
c10019e3:	c3                   	ret    

c10019e4 <syscall_open>:
c10019e4:	55                   	push   %ebp
c10019e5:	89 e5                	mov    %esp,%ebp
c10019e7:	83 ec 18             	sub    $0x18,%esp
c10019ea:	8b 45 08             	mov    0x8(%ebp),%eax
c10019ed:	8b 00                	mov    (%eax),%eax
c10019ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10019f2:	8b 45 08             	mov    0x8(%ebp),%eax
c10019f5:	83 c0 04             	add    $0x4,%eax
c10019f8:	8b 00                	mov    (%eax),%eax
c10019fa:	88 45 f3             	mov    %al,-0xd(%ebp)
c10019fd:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001a01:	83 ec 08             	sub    $0x8,%esp
c1001a04:	50                   	push   %eax
c1001a05:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a08:	e8 c7 41 00 00       	call   c1005bd4 <sys_open>
c1001a0d:	83 c4 10             	add    $0x10,%esp
c1001a10:	c9                   	leave  
c1001a11:	c3                   	ret    

c1001a12 <syscall_close>:
c1001a12:	55                   	push   %ebp
c1001a13:	89 e5                	mov    %esp,%ebp
c1001a15:	83 ec 18             	sub    $0x18,%esp
c1001a18:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a1b:	8b 00                	mov    (%eax),%eax
c1001a1d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a20:	83 ec 0c             	sub    $0xc,%esp
c1001a23:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a26:	e8 71 44 00 00       	call   c1005e9c <sys_close>
c1001a2b:	83 c4 10             	add    $0x10,%esp
c1001a2e:	c9                   	leave  
c1001a2f:	c3                   	ret    

c1001a30 <syscall_write>:
c1001a30:	55                   	push   %ebp
c1001a31:	89 e5                	mov    %esp,%ebp
c1001a33:	83 ec 18             	sub    $0x18,%esp
c1001a36:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a39:	8b 00                	mov    (%eax),%eax
c1001a3b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a3e:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a41:	83 c0 04             	add    $0x4,%eax
c1001a44:	8b 00                	mov    (%eax),%eax
c1001a46:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001a49:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a4c:	8b 40 08             	mov    0x8(%eax),%eax
c1001a4f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001a52:	83 ec 04             	sub    $0x4,%esp
c1001a55:	ff 75 ec             	pushl  -0x14(%ebp)
c1001a58:	ff 75 f0             	pushl  -0x10(%ebp)
c1001a5b:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a5e:	e8 95 44 00 00       	call   c1005ef8 <sys_write>
c1001a63:	83 c4 10             	add    $0x10,%esp
c1001a66:	c9                   	leave  
c1001a67:	c3                   	ret    

c1001a68 <syscall_lseek>:
c1001a68:	55                   	push   %ebp
c1001a69:	89 e5                	mov    %esp,%ebp
c1001a6b:	83 ec 18             	sub    $0x18,%esp
c1001a6e:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a71:	8b 00                	mov    (%eax),%eax
c1001a73:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a76:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a79:	83 c0 04             	add    $0x4,%eax
c1001a7c:	8b 00                	mov    (%eax),%eax
c1001a7e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001a81:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a84:	83 c0 08             	add    $0x8,%eax
c1001a87:	8b 00                	mov    (%eax),%eax
c1001a89:	88 45 ef             	mov    %al,-0x11(%ebp)
c1001a8c:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1001a90:	83 ec 04             	sub    $0x4,%esp
c1001a93:	50                   	push   %eax
c1001a94:	ff 75 f0             	pushl  -0x10(%ebp)
c1001a97:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a9a:	e8 44 46 00 00       	call   c10060e3 <sys_lseek>
c1001a9f:	83 c4 10             	add    $0x10,%esp
c1001aa2:	c9                   	leave  
c1001aa3:	c3                   	ret    

c1001aa4 <syscall_unlink>:
c1001aa4:	55                   	push   %ebp
c1001aa5:	89 e5                	mov    %esp,%ebp
c1001aa7:	83 ec 18             	sub    $0x18,%esp
c1001aaa:	8b 45 08             	mov    0x8(%ebp),%eax
c1001aad:	8b 00                	mov    (%eax),%eax
c1001aaf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001ab2:	83 ec 0c             	sub    $0xc,%esp
c1001ab5:	ff 75 f4             	pushl  -0xc(%ebp)
c1001ab8:	e8 12 47 00 00       	call   c10061cf <sys_unlink>
c1001abd:	83 c4 10             	add    $0x10,%esp
c1001ac0:	c9                   	leave  
c1001ac1:	c3                   	ret    

c1001ac2 <syscall_mkdir>:
c1001ac2:	55                   	push   %ebp
c1001ac3:	89 e5                	mov    %esp,%ebp
c1001ac5:	83 ec 18             	sub    $0x18,%esp
c1001ac8:	8b 45 08             	mov    0x8(%ebp),%eax
c1001acb:	8b 00                	mov    (%eax),%eax
c1001acd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001ad0:	83 ec 0c             	sub    $0xc,%esp
c1001ad3:	ff 75 f4             	pushl  -0xc(%ebp)
c1001ad6:	e8 14 49 00 00       	call   c10063ef <sys_mkdir>
c1001adb:	83 c4 10             	add    $0x10,%esp
c1001ade:	c9                   	leave  
c1001adf:	c3                   	ret    

c1001ae0 <syscall_rmdir>:
c1001ae0:	55                   	push   %ebp
c1001ae1:	89 e5                	mov    %esp,%ebp
c1001ae3:	83 ec 18             	sub    $0x18,%esp
c1001ae6:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ae9:	8b 00                	mov    (%eax),%eax
c1001aeb:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001aee:	83 ec 0c             	sub    $0xc,%esp
c1001af1:	ff 75 f4             	pushl  -0xc(%ebp)
c1001af4:	e8 af 4e 00 00       	call   c10069a8 <sys_rmdir>
c1001af9:	83 c4 10             	add    $0x10,%esp
c1001afc:	c9                   	leave  
c1001afd:	c3                   	ret    

c1001afe <syscall_rewinddir>:
c1001afe:	55                   	push   %ebp
c1001aff:	89 e5                	mov    %esp,%ebp
c1001b01:	83 ec 18             	sub    $0x18,%esp
c1001b04:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b07:	8b 00                	mov    (%eax),%eax
c1001b09:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b0c:	83 ec 0c             	sub    $0xc,%esp
c1001b0f:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b12:	e8 81 4e 00 00       	call   c1006998 <sys_rewinddir>
c1001b17:	83 c4 10             	add    $0x10,%esp
c1001b1a:	b8 00 00 00 00       	mov    $0x0,%eax
c1001b1f:	c9                   	leave  
c1001b20:	c3                   	ret    

c1001b21 <syscall_getcwd>:
c1001b21:	55                   	push   %ebp
c1001b22:	89 e5                	mov    %esp,%ebp
c1001b24:	83 ec 18             	sub    $0x18,%esp
c1001b27:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b2a:	8b 00                	mov    (%eax),%eax
c1001b2c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b2f:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b32:	8b 40 04             	mov    0x4(%eax),%eax
c1001b35:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001b38:	83 ec 08             	sub    $0x8,%esp
c1001b3b:	ff 75 f0             	pushl  -0x10(%ebp)
c1001b3e:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b41:	e8 e1 51 00 00       	call   c1006d27 <sys_getcwd>
c1001b46:	83 c4 10             	add    $0x10,%esp
c1001b49:	c9                   	leave  
c1001b4a:	c3                   	ret    

c1001b4b <syscall_chdir>:
c1001b4b:	55                   	push   %ebp
c1001b4c:	89 e5                	mov    %esp,%ebp
c1001b4e:	83 ec 18             	sub    $0x18,%esp
c1001b51:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b54:	8b 00                	mov    (%eax),%eax
c1001b56:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b59:	83 ec 0c             	sub    $0xc,%esp
c1001b5c:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b5f:	e8 dc 54 00 00       	call   c1007040 <sys_chdir>
c1001b64:	83 c4 10             	add    $0x10,%esp
c1001b67:	c9                   	leave  
c1001b68:	c3                   	ret    

c1001b69 <syscall_stat>:
c1001b69:	55                   	push   %ebp
c1001b6a:	89 e5                	mov    %esp,%ebp
c1001b6c:	83 ec 18             	sub    $0x18,%esp
c1001b6f:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b72:	8b 00                	mov    (%eax),%eax
c1001b74:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b77:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b7a:	83 c0 04             	add    $0x4,%eax
c1001b7d:	8b 00                	mov    (%eax),%eax
c1001b7f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001b82:	83 ec 08             	sub    $0x8,%esp
c1001b85:	ff 75 f0             	pushl  -0x10(%ebp)
c1001b88:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b8b:	e8 84 53 00 00       	call   c1006f14 <sys_stat>
c1001b90:	83 c4 10             	add    $0x10,%esp
c1001b93:	c9                   	leave  
c1001b94:	c3                   	ret    

c1001b95 <syscall_opendir>:
c1001b95:	55                   	push   %ebp
c1001b96:	89 e5                	mov    %esp,%ebp
c1001b98:	83 ec 18             	sub    $0x18,%esp
c1001b9b:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b9e:	8b 00                	mov    (%eax),%eax
c1001ba0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001ba3:	83 ec 0c             	sub    $0xc,%esp
c1001ba6:	ff 75 f4             	pushl  -0xc(%ebp)
c1001ba9:	e8 7b 4c 00 00       	call   c1006829 <sys_opendir>
c1001bae:	83 c4 10             	add    $0x10,%esp
c1001bb1:	c9                   	leave  
c1001bb2:	c3                   	ret    

c1001bb3 <syscall_closedir>:
c1001bb3:	55                   	push   %ebp
c1001bb4:	89 e5                	mov    %esp,%ebp
c1001bb6:	83 ec 18             	sub    $0x18,%esp
c1001bb9:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bbc:	8b 00                	mov    (%eax),%eax
c1001bbe:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bc1:	83 ec 0c             	sub    $0xc,%esp
c1001bc4:	ff 75 f4             	pushl  -0xc(%ebp)
c1001bc7:	e8 6a 4d 00 00       	call   c1006936 <sys_closedir>
c1001bcc:	83 c4 10             	add    $0x10,%esp
c1001bcf:	c9                   	leave  
c1001bd0:	c3                   	ret    

c1001bd1 <syscall_readdir>:
c1001bd1:	55                   	push   %ebp
c1001bd2:	89 e5                	mov    %esp,%ebp
c1001bd4:	83 ec 18             	sub    $0x18,%esp
c1001bd7:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bda:	8b 00                	mov    (%eax),%eax
c1001bdc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bdf:	83 ec 0c             	sub    $0xc,%esp
c1001be2:	ff 75 f4             	pushl  -0xc(%ebp)
c1001be5:	e8 79 4d 00 00       	call   c1006963 <sys_readdir>
c1001bea:	83 c4 10             	add    $0x10,%esp
c1001bed:	c9                   	leave  
c1001bee:	c3                   	ret    

c1001bef <syscall_trap>:
c1001bef:	55                   	push   %ebp
c1001bf0:	89 e5                	mov    %esp,%ebp
c1001bf2:	83 ec 28             	sub    $0x28,%esp
c1001bf5:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bf8:	8b 40 1c             	mov    0x1c(%eax),%eax
c1001bfb:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bfe:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1001c02:	78 60                	js     c1001c64 <syscall_trap+0x75>
c1001c04:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001c07:	83 f8 35             	cmp    $0x35,%eax
c1001c0a:	77 58                	ja     c1001c64 <syscall_trap+0x75>
c1001c0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001c0f:	8b 04 85 00 c5 00 c1 	mov    -0x3eff3b00(,%eax,4),%eax
c1001c16:	85 c0                	test   %eax,%eax
c1001c18:	74 4a                	je     c1001c64 <syscall_trap+0x75>
c1001c1a:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c1d:	8b 40 14             	mov    0x14(%eax),%eax
c1001c20:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1001c23:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c26:	8b 40 18             	mov    0x18(%eax),%eax
c1001c29:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1001c2c:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c2f:	8b 40 10             	mov    0x10(%eax),%eax
c1001c32:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1001c35:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c38:	8b 00                	mov    (%eax),%eax
c1001c3a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001c3d:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c40:	8b 40 04             	mov    0x4(%eax),%eax
c1001c43:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001c46:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001c49:	8b 04 85 00 c5 00 c1 	mov    -0x3eff3b00(,%eax,4),%eax
c1001c50:	83 ec 0c             	sub    $0xc,%esp
c1001c53:	8d 55 e0             	lea    -0x20(%ebp),%edx
c1001c56:	52                   	push   %edx
c1001c57:	ff d0                	call   *%eax
c1001c59:	83 c4 10             	add    $0x10,%esp
c1001c5c:	89 c2                	mov    %eax,%edx
c1001c5e:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c61:	89 50 1c             	mov    %edx,0x1c(%eax)
c1001c64:	c9                   	leave  
c1001c65:	c3                   	ret    

c1001c66 <kbd_proc_data>:
c1001c66:	55                   	push   %ebp
c1001c67:	89 e5                	mov    %esp,%ebp
c1001c69:	83 ec 18             	sub    $0x18,%esp
c1001c6c:	83 ec 0c             	sub    $0xc,%esp
c1001c6f:	6a 64                	push   $0x64
c1001c71:	e8 8a e3 ff ff       	call   c1000000 <inb>
c1001c76:	83 c4 10             	add    $0x10,%esp
c1001c79:	83 e0 01             	and    $0x1,%eax
c1001c7c:	85 c0                	test   %eax,%eax
c1001c7e:	75 0a                	jne    c1001c8a <kbd_proc_data+0x24>
c1001c80:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1001c85:	e9 55 01 00 00       	jmp    c1001ddf <kbd_proc_data+0x179>
c1001c8a:	83 ec 0c             	sub    $0xc,%esp
c1001c8d:	6a 60                	push   $0x60
c1001c8f:	e8 6c e3 ff ff       	call   c1000000 <inb>
c1001c94:	83 c4 10             	add    $0x10,%esp
c1001c97:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001c9a:	80 7d f3 e0          	cmpb   $0xe0,-0xd(%ebp)
c1001c9e:	75 17                	jne    c1001cb7 <kbd_proc_data+0x51>
c1001ca0:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001ca5:	83 c8 40             	or     $0x40,%eax
c1001ca8:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001cad:	b8 00 00 00 00       	mov    $0x0,%eax
c1001cb2:	e9 28 01 00 00       	jmp    c1001ddf <kbd_proc_data+0x179>
c1001cb7:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001cbb:	84 c0                	test   %al,%al
c1001cbd:	79 47                	jns    c1001d06 <kbd_proc_data+0xa0>
c1001cbf:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001cc4:	83 e0 40             	and    $0x40,%eax
c1001cc7:	85 c0                	test   %eax,%eax
c1001cc9:	75 09                	jne    c1001cd4 <kbd_proc_data+0x6e>
c1001ccb:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001ccf:	83 e0 7f             	and    $0x7f,%eax
c1001cd2:	eb 04                	jmp    c1001cd8 <kbd_proc_data+0x72>
c1001cd4:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001cd8:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001cdb:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001cdf:	0f b6 80 e0 c5 00 c1 	movzbl -0x3eff3a20(%eax),%eax
c1001ce6:	83 c8 40             	or     $0x40,%eax
c1001ce9:	0f b6 c0             	movzbl %al,%eax
c1001cec:	f7 d0                	not    %eax
c1001cee:	89 c2                	mov    %eax,%edx
c1001cf0:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001cf5:	21 d0                	and    %edx,%eax
c1001cf7:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001cfc:	b8 00 00 00 00       	mov    $0x0,%eax
c1001d01:	e9 d9 00 00 00       	jmp    c1001ddf <kbd_proc_data+0x179>
c1001d06:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d0b:	83 e0 40             	and    $0x40,%eax
c1001d0e:	85 c0                	test   %eax,%eax
c1001d10:	74 11                	je     c1001d23 <kbd_proc_data+0xbd>
c1001d12:	80 4d f3 80          	orb    $0x80,-0xd(%ebp)
c1001d16:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d1b:	83 e0 bf             	and    $0xffffffbf,%eax
c1001d1e:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001d23:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d27:	0f b6 80 e0 c5 00 c1 	movzbl -0x3eff3a20(%eax),%eax
c1001d2e:	0f b6 d0             	movzbl %al,%edx
c1001d31:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d36:	09 d0                	or     %edx,%eax
c1001d38:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001d3d:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d41:	0f b6 80 e0 c6 00 c1 	movzbl -0x3eff3920(%eax),%eax
c1001d48:	0f b6 d0             	movzbl %al,%edx
c1001d4b:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d50:	31 d0                	xor    %edx,%eax
c1001d52:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001d57:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d5c:	83 e0 03             	and    $0x3,%eax
c1001d5f:	8b 14 85 e0 ca 00 c1 	mov    -0x3eff3520(,%eax,4),%edx
c1001d66:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d6a:	01 d0                	add    %edx,%eax
c1001d6c:	0f b6 00             	movzbl (%eax),%eax
c1001d6f:	0f b6 c0             	movzbl %al,%eax
c1001d72:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001d75:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d7a:	83 e0 08             	and    $0x8,%eax
c1001d7d:	85 c0                	test   %eax,%eax
c1001d7f:	74 22                	je     c1001da3 <kbd_proc_data+0x13d>
c1001d81:	83 7d f4 60          	cmpl   $0x60,-0xc(%ebp)
c1001d85:	7e 0c                	jle    c1001d93 <kbd_proc_data+0x12d>
c1001d87:	83 7d f4 7a          	cmpl   $0x7a,-0xc(%ebp)
c1001d8b:	7f 06                	jg     c1001d93 <kbd_proc_data+0x12d>
c1001d8d:	83 6d f4 20          	subl   $0x20,-0xc(%ebp)
c1001d91:	eb 10                	jmp    c1001da3 <kbd_proc_data+0x13d>
c1001d93:	83 7d f4 40          	cmpl   $0x40,-0xc(%ebp)
c1001d97:	7e 0a                	jle    c1001da3 <kbd_proc_data+0x13d>
c1001d99:	83 7d f4 5a          	cmpl   $0x5a,-0xc(%ebp)
c1001d9d:	7f 04                	jg     c1001da3 <kbd_proc_data+0x13d>
c1001d9f:	83 45 f4 20          	addl   $0x20,-0xc(%ebp)
c1001da3:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001da8:	f7 d0                	not    %eax
c1001daa:	83 e0 06             	and    $0x6,%eax
c1001dad:	85 c0                	test   %eax,%eax
c1001daf:	75 2b                	jne    c1001ddc <kbd_proc_data+0x176>
c1001db1:	81 7d f4 e9 00 00 00 	cmpl   $0xe9,-0xc(%ebp)
c1001db8:	75 22                	jne    c1001ddc <kbd_proc_data+0x176>
c1001dba:	83 ec 0c             	sub    $0xc,%esp
c1001dbd:	68 c4 9d 00 c1       	push   $0xc1009dc4
c1001dc2:	e8 01 28 00 00       	call   c10045c8 <printk>
c1001dc7:	83 c4 10             	add    $0x10,%esp
c1001dca:	83 ec 08             	sub    $0x8,%esp
c1001dcd:	6a 03                	push   $0x3
c1001dcf:	68 92 00 00 00       	push   $0x92
c1001dd4:	e8 63 e2 ff ff       	call   c100003c <outb>
c1001dd9:	83 c4 10             	add    $0x10,%esp
c1001ddc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001ddf:	c9                   	leave  
c1001de0:	c3                   	ret    

c1001de1 <kbd_intr>:
c1001de1:	55                   	push   %ebp
c1001de2:	89 e5                	mov    %esp,%ebp
c1001de4:	83 ec 08             	sub    $0x8,%esp
c1001de7:	83 ec 0c             	sub    $0xc,%esp
c1001dea:	68 66 1c 00 c1       	push   $0xc1001c66
c1001def:	e8 23 22 00 00       	call   c1004017 <cons_intr>
c1001df4:	83 c4 10             	add    $0x10,%esp
c1001df7:	90                   	nop
c1001df8:	c9                   	leave  
c1001df9:	c3                   	ret    

c1001dfa <kbd_init>:
c1001dfa:	55                   	push   %ebp
c1001dfb:	89 e5                	mov    %esp,%ebp
c1001dfd:	83 ec 18             	sub    $0x18,%esp
c1001e00:	c7 05 20 32 a1 c1 00 	movl   $0x0,0xc1a13220
c1001e07:	00 00 00 
c1001e0a:	c7 05 24 32 a1 c1 00 	movl   $0x0,0xc1a13224
c1001e11:	00 00 00 
c1001e14:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1001e1b:	eb 0f                	jmp    c1001e2c <kbd_init+0x32>
c1001e1d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001e20:	05 20 30 a1 c1       	add    $0xc1a13020,%eax
c1001e25:	c6 00 00             	movb   $0x0,(%eax)
c1001e28:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1001e2c:	81 7d f4 ff 01 00 00 	cmpl   $0x1ff,-0xc(%ebp)
c1001e33:	7e e8                	jle    c1001e1d <kbd_init+0x23>
c1001e35:	c6 05 6c ec 00 c1 00 	movb   $0x0,0xc100ec6c
c1001e3c:	e8 a0 ff ff ff       	call   c1001de1 <kbd_intr>
c1001e41:	83 ec 0c             	sub    $0xc,%esp
c1001e44:	6a 01                	push   $0x1
c1001e46:	e8 8b 1e 00 00       	call   c1003cd6 <pic_enable>
c1001e4b:	83 c4 10             	add    $0x10,%esp
c1001e4e:	90                   	nop
c1001e4f:	c9                   	leave  
c1001e50:	c3                   	ret    

c1001e51 <hash32>:
c1001e51:	55                   	push   %ebp
c1001e52:	89 e5                	mov    %esp,%ebp
c1001e54:	83 ec 10             	sub    $0x10,%esp
c1001e57:	8b 45 08             	mov    0x8(%ebp),%eax
c1001e5a:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1001e60:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1001e63:	b8 20 00 00 00       	mov    $0x20,%eax
c1001e68:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001e6b:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001e6e:	89 c1                	mov    %eax,%ecx
c1001e70:	d3 ea                	shr    %cl,%edx
c1001e72:	89 d0                	mov    %edx,%eax
c1001e74:	c9                   	leave  
c1001e75:	c3                   	ret    

c1001e76 <main>:
c1001e76:	8d 4c 24 04          	lea    0x4(%esp),%ecx
c1001e7a:	83 e4 f0             	and    $0xfffffff0,%esp
c1001e7d:	ff 71 fc             	pushl  -0x4(%ecx)
c1001e80:	55                   	push   %ebp
c1001e81:	89 e5                	mov    %esp,%ebp
c1001e83:	51                   	push   %ecx
c1001e84:	83 ec 04             	sub    $0x4,%esp
c1001e87:	e8 f1 23 00 00       	call   c100427d <clear>
c1001e8c:	83 ec 0c             	sub    $0xc,%esp
c1001e8f:	68 d0 9d 00 c1       	push   $0xc1009dd0
c1001e94:	e8 2f 27 00 00       	call   c10045c8 <printk>
c1001e99:	83 c4 10             	add    $0x10,%esp
c1001e9c:	e8 d3 e7 ff ff       	call   c1000674 <gdt_init>
c1001ea1:	e8 63 1e 00 00       	call   c1003d09 <pic_init>
c1001ea6:	e8 bd e8 ff ff       	call   c1000768 <idt_init>
c1001eab:	e8 3d ee ff ff       	call   c1000ced <enable_interupt>
c1001eb0:	e8 bd 1f 00 00       	call   c1003e72 <serial_init>
c1001eb5:	e8 40 ff ff ff       	call   c1001dfa <kbd_init>
c1001eba:	e8 dd 09 00 00       	call   c100289c <setup_vpt>
c1001ebf:	e8 15 04 00 00       	call   c10022d9 <pmm_init>
c1001ec4:	e8 5a 00 00 00       	call   c1001f23 <test_pmm>
c1001ec9:	e8 3e 01 00 00       	call   c100200c <test_vmm>
c1001ece:	e8 fa 51 00 00       	call   c10070cd <fs_init>
c1001ed3:	83 ec 0c             	sub    $0xc,%esp
c1001ed6:	68 1e 1f 00 c1       	push   $0xc1001f1e
c1001edb:	e8 1b 0e 00 00       	call   c1002cfb <kernel_task_init>
c1001ee0:	83 c4 10             	add    $0x10,%esp
c1001ee3:	e8 95 23 00 00       	call   c100427d <clear>
c1001ee8:	83 ec 0c             	sub    $0xc,%esp
c1001eeb:	6a 64                	push   $0x64
c1001eed:	e8 88 22 00 00       	call   c100417a <timer_init>
c1001ef2:	83 c4 10             	add    $0x10,%esp
c1001ef5:	83 ec 08             	sub    $0x8,%esp
c1001ef8:	6a 00                	push   $0x0
c1001efa:	68 ac 0c 01 c1       	push   $0xc1010cac
c1001eff:	e8 18 2b 00 00       	call   c1004a1c <sema_init>
c1001f04:	83 c4 10             	add    $0x10,%esp
c1001f07:	e8 05 ee ff ff       	call   c1000d11 <intr_enable>
c1001f0c:	83 ec 0c             	sub    $0xc,%esp
c1001f0f:	68 2f 00 00 40       	push   $0x4000002f
c1001f14:	e8 99 1a 00 00       	call   c10039b2 <user_task_init>
c1001f19:	83 c4 10             	add    $0x10,%esp
c1001f1c:	eb fe                	jmp    c1001f1c <main+0xa6>

c1001f1e <kernel_main>:
c1001f1e:	55                   	push   %ebp
c1001f1f:	89 e5                	mov    %esp,%ebp
c1001f21:	eb fe                	jmp    c1001f21 <kernel_main+0x3>

c1001f23 <test_pmm>:
c1001f23:	55                   	push   %ebp
c1001f24:	89 e5                	mov    %esp,%ebp
c1001f26:	83 ec 18             	sub    $0x18,%esp
c1001f29:	83 ec 08             	sub    $0x8,%esp
c1001f2c:	6a 01                	push   $0x1
c1001f2e:	68 00 02 00 00       	push   $0x200
c1001f33:	e8 c1 07 00 00       	call   c10026f9 <pmm_alloc>
c1001f38:	83 c4 10             	add    $0x10,%esp
c1001f3b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001f3e:	83 ec 08             	sub    $0x8,%esp
c1001f41:	6a 00                	push   $0x0
c1001f43:	68 00 20 00 00       	push   $0x2000
c1001f48:	e8 ac 07 00 00       	call   c10026f9 <pmm_alloc>
c1001f4d:	83 c4 10             	add    $0x10,%esp
c1001f50:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001f53:	83 ec 08             	sub    $0x8,%esp
c1001f56:	6a 02                	push   $0x2
c1001f58:	68 00 30 00 00       	push   $0x3000
c1001f5d:	e8 97 07 00 00       	call   c10026f9 <pmm_alloc>
c1001f62:	83 c4 10             	add    $0x10,%esp
c1001f65:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001f68:	83 ec 08             	sub    $0x8,%esp
c1001f6b:	ff 75 f0             	pushl  -0x10(%ebp)
c1001f6e:	68 e6 9d 00 c1       	push   $0xc1009de6
c1001f73:	e8 50 26 00 00       	call   c10045c8 <printk>
c1001f78:	83 c4 10             	add    $0x10,%esp
c1001f7b:	83 ec 08             	sub    $0x8,%esp
c1001f7e:	ff 75 f4             	pushl  -0xc(%ebp)
c1001f81:	68 fc 9d 00 c1       	push   $0xc1009dfc
c1001f86:	e8 3d 26 00 00       	call   c10045c8 <printk>
c1001f8b:	83 c4 10             	add    $0x10,%esp
c1001f8e:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c1001f94:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c1001f9a:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c1001f9f:	51                   	push   %ecx
c1001fa0:	52                   	push   %edx
c1001fa1:	50                   	push   %eax
c1001fa2:	68 18 9e 00 c1       	push   $0xc1009e18
c1001fa7:	e8 1c 26 00 00       	call   c10045c8 <printk>
c1001fac:	83 c4 10             	add    $0x10,%esp
c1001faf:	83 ec 08             	sub    $0x8,%esp
c1001fb2:	68 00 02 00 00       	push   $0x200
c1001fb7:	ff 75 f4             	pushl  -0xc(%ebp)
c1001fba:	e8 36 08 00 00       	call   c10027f5 <pmm_free>
c1001fbf:	83 c4 10             	add    $0x10,%esp
c1001fc2:	83 ec 08             	sub    $0x8,%esp
c1001fc5:	68 00 20 00 00       	push   $0x2000
c1001fca:	ff 75 f0             	pushl  -0x10(%ebp)
c1001fcd:	e8 23 08 00 00       	call   c10027f5 <pmm_free>
c1001fd2:	83 c4 10             	add    $0x10,%esp
c1001fd5:	83 ec 08             	sub    $0x8,%esp
c1001fd8:	68 00 30 00 00       	push   $0x3000
c1001fdd:	ff 75 ec             	pushl  -0x14(%ebp)
c1001fe0:	e8 10 08 00 00       	call   c10027f5 <pmm_free>
c1001fe5:	83 c4 10             	add    $0x10,%esp
c1001fe8:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c1001fee:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c1001ff4:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c1001ff9:	51                   	push   %ecx
c1001ffa:	52                   	push   %edx
c1001ffb:	50                   	push   %eax
c1001ffc:	68 18 9e 00 c1       	push   $0xc1009e18
c1002001:	e8 c2 25 00 00       	call   c10045c8 <printk>
c1002006:	83 c4 10             	add    $0x10,%esp
c1002009:	90                   	nop
c100200a:	c9                   	leave  
c100200b:	c3                   	ret    

c100200c <test_vmm>:
c100200c:	55                   	push   %ebp
c100200d:	89 e5                	mov    %esp,%ebp
c100200f:	83 ec 38             	sub    $0x38,%esp
c1002012:	83 ec 0c             	sub    $0xc,%esp
c1002015:	68 5f 9e 00 c1       	push   $0xc1009e5f
c100201a:	e8 a9 25 00 00       	call   c10045c8 <printk>
c100201f:	83 c4 10             	add    $0x10,%esp
c1002022:	83 ec 08             	sub    $0x8,%esp
c1002025:	6a 00                	push   $0x0
c1002027:	68 00 01 00 00       	push   $0x100
c100202c:	e8 43 09 00 00       	call   c1002974 <vmm_malloc>
c1002031:	83 c4 10             	add    $0x10,%esp
c1002034:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002037:	83 ec 08             	sub    $0x8,%esp
c100203a:	6a 01                	push   $0x1
c100203c:	68 00 20 00 00       	push   $0x2000
c1002041:	e8 2e 09 00 00       	call   c1002974 <vmm_malloc>
c1002046:	83 c4 10             	add    $0x10,%esp
c1002049:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100204c:	83 ec 08             	sub    $0x8,%esp
c100204f:	6a 02                	push   $0x2
c1002051:	68 00 30 00 00       	push   $0x3000
c1002056:	e8 19 09 00 00       	call   c1002974 <vmm_malloc>
c100205b:	83 c4 10             	add    $0x10,%esp
c100205e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002061:	83 ec 08             	sub    $0x8,%esp
c1002064:	ff 75 f4             	pushl  -0xc(%ebp)
c1002067:	68 e6 9d 00 c1       	push   $0xc1009de6
c100206c:	e8 57 25 00 00       	call   c10045c8 <printk>
c1002071:	83 c4 10             	add    $0x10,%esp
c1002074:	83 ec 08             	sub    $0x8,%esp
c1002077:	ff 75 f0             	pushl  -0x10(%ebp)
c100207a:	68 fc 9d 00 c1       	push   $0xc1009dfc
c100207f:	e8 44 25 00 00       	call   c10045c8 <printk>
c1002084:	83 c4 10             	add    $0x10,%esp
c1002087:	83 ec 08             	sub    $0x8,%esp
c100208a:	ff 75 ec             	pushl  -0x14(%ebp)
c100208d:	68 76 9e 00 c1       	push   $0xc1009e76
c1002092:	e8 31 25 00 00       	call   c10045c8 <printk>
c1002097:	83 c4 10             	add    $0x10,%esp
c100209a:	83 ec 0c             	sub    $0xc,%esp
c100209d:	68 91 9e 00 c1       	push   $0xc1009e91
c10020a2:	e8 21 25 00 00       	call   c10045c8 <printk>
c10020a7:	83 c4 10             	add    $0x10,%esp
c10020aa:	83 ec 08             	sub    $0x8,%esp
c10020ad:	6a 00                	push   $0x0
c10020af:	68 00 01 00 00       	push   $0x100
c10020b4:	e8 bb 08 00 00       	call   c1002974 <vmm_malloc>
c10020b9:	83 c4 10             	add    $0x10,%esp
c10020bc:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10020bf:	83 ec 08             	sub    $0x8,%esp
c10020c2:	6a 01                	push   $0x1
c10020c4:	68 00 20 00 00       	push   $0x2000
c10020c9:	e8 a6 08 00 00       	call   c1002974 <vmm_malloc>
c10020ce:	83 c4 10             	add    $0x10,%esp
c10020d1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10020d4:	83 ec 08             	sub    $0x8,%esp
c10020d7:	6a 02                	push   $0x2
c10020d9:	68 00 30 00 00       	push   $0x3000
c10020de:	e8 91 08 00 00       	call   c1002974 <vmm_malloc>
c10020e3:	83 c4 10             	add    $0x10,%esp
c10020e6:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10020e9:	83 ec 08             	sub    $0x8,%esp
c10020ec:	ff 75 e8             	pushl  -0x18(%ebp)
c10020ef:	68 e6 9d 00 c1       	push   $0xc1009de6
c10020f4:	e8 cf 24 00 00       	call   c10045c8 <printk>
c10020f9:	83 c4 10             	add    $0x10,%esp
c10020fc:	83 ec 08             	sub    $0x8,%esp
c10020ff:	ff 75 e4             	pushl  -0x1c(%ebp)
c1002102:	68 fc 9d 00 c1       	push   $0xc1009dfc
c1002107:	e8 bc 24 00 00       	call   c10045c8 <printk>
c100210c:	83 c4 10             	add    $0x10,%esp
c100210f:	83 ec 08             	sub    $0x8,%esp
c1002112:	ff 75 e0             	pushl  -0x20(%ebp)
c1002115:	68 76 9e 00 c1       	push   $0xc1009e76
c100211a:	e8 a9 24 00 00       	call   c10045c8 <printk>
c100211f:	83 c4 10             	add    $0x10,%esp
c1002122:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002125:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1002128:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100212b:	c6 00 ff             	movb   $0xff,(%eax)
c100212e:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002131:	0f b6 00             	movzbl (%eax),%eax
c1002134:	0f b6 c0             	movzbl %al,%eax
c1002137:	83 ec 08             	sub    $0x8,%esp
c100213a:	50                   	push   %eax
c100213b:	68 a8 9e 00 c1       	push   $0xc1009ea8
c1002140:	e8 83 24 00 00       	call   c10045c8 <printk>
c1002145:	83 c4 10             	add    $0x10,%esp
c1002148:	83 ec 08             	sub    $0x8,%esp
c100214b:	68 00 01 00 00       	push   $0x100
c1002150:	ff 75 f4             	pushl  -0xc(%ebp)
c1002153:	e8 41 09 00 00       	call   c1002a99 <vmm_free>
c1002158:	83 c4 10             	add    $0x10,%esp
c100215b:	83 ec 08             	sub    $0x8,%esp
c100215e:	68 00 20 00 00       	push   $0x2000
c1002163:	ff 75 f0             	pushl  -0x10(%ebp)
c1002166:	e8 2e 09 00 00       	call   c1002a99 <vmm_free>
c100216b:	83 c4 10             	add    $0x10,%esp
c100216e:	83 ec 08             	sub    $0x8,%esp
c1002171:	68 00 30 00 00       	push   $0x3000
c1002176:	ff 75 ec             	pushl  -0x14(%ebp)
c1002179:	e8 1b 09 00 00       	call   c1002a99 <vmm_free>
c100217e:	83 c4 10             	add    $0x10,%esp
c1002181:	83 ec 08             	sub    $0x8,%esp
c1002184:	6a 00                	push   $0x0
c1002186:	68 00 01 00 00       	push   $0x100
c100218b:	e8 e4 07 00 00       	call   c1002974 <vmm_malloc>
c1002190:	83 c4 10             	add    $0x10,%esp
c1002193:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1002196:	83 ec 08             	sub    $0x8,%esp
c1002199:	6a 01                	push   $0x1
c100219b:	68 00 20 00 00       	push   $0x2000
c10021a0:	e8 cf 07 00 00       	call   c1002974 <vmm_malloc>
c10021a5:	83 c4 10             	add    $0x10,%esp
c10021a8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10021ab:	83 ec 08             	sub    $0x8,%esp
c10021ae:	6a 02                	push   $0x2
c10021b0:	68 00 30 00 00       	push   $0x3000
c10021b5:	e8 ba 07 00 00       	call   c1002974 <vmm_malloc>
c10021ba:	83 c4 10             	add    $0x10,%esp
c10021bd:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10021c0:	83 ec 08             	sub    $0x8,%esp
c10021c3:	ff 75 d8             	pushl  -0x28(%ebp)
c10021c6:	68 e6 9d 00 c1       	push   $0xc1009de6
c10021cb:	e8 f8 23 00 00       	call   c10045c8 <printk>
c10021d0:	83 c4 10             	add    $0x10,%esp
c10021d3:	83 ec 08             	sub    $0x8,%esp
c10021d6:	ff 75 d4             	pushl  -0x2c(%ebp)
c10021d9:	68 fc 9d 00 c1       	push   $0xc1009dfc
c10021de:	e8 e5 23 00 00       	call   c10045c8 <printk>
c10021e3:	83 c4 10             	add    $0x10,%esp
c10021e6:	83 ec 08             	sub    $0x8,%esp
c10021e9:	ff 75 d0             	pushl  -0x30(%ebp)
c10021ec:	68 76 9e 00 c1       	push   $0xc1009e76
c10021f1:	e8 d2 23 00 00       	call   c10045c8 <printk>
c10021f6:	83 c4 10             	add    $0x10,%esp
c10021f9:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10021fc:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10021ff:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1002202:	c6 00 ff             	movb   $0xff,(%eax)
c1002205:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1002208:	0f b6 00             	movzbl (%eax),%eax
c100220b:	0f b6 c0             	movzbl %al,%eax
c100220e:	83 ec 08             	sub    $0x8,%esp
c1002211:	50                   	push   %eax
c1002212:	68 b4 9e 00 c1       	push   $0xc1009eb4
c1002217:	e8 ac 23 00 00       	call   c10045c8 <printk>
c100221c:	83 c4 10             	add    $0x10,%esp
c100221f:	90                   	nop
c1002220:	c9                   	leave  
c1002221:	c3                   	ret    

c1002222 <test_schedule>:
c1002222:	55                   	push   %ebp
c1002223:	89 e5                	mov    %esp,%ebp
c1002225:	83 ec 08             	sub    $0x8,%esp
c1002228:	e8 e4 ea ff ff       	call   c1000d11 <intr_enable>
c100222d:	eb fe                	jmp    c100222d <test_schedule+0xb>

c100222f <print_task1>:
c100222f:	55                   	push   %ebp
c1002230:	89 e5                	mov    %esp,%ebp
c1002232:	83 ec 18             	sub    $0x18,%esp
c1002235:	8b 45 08             	mov    0x8(%ebp),%eax
c1002238:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100223b:	83 ec 08             	sub    $0x8,%esp
c100223e:	ff 75 f4             	pushl  -0xc(%ebp)
c1002241:	68 c0 9e 00 c1       	push   $0xc1009ec0
c1002246:	e8 7d 23 00 00       	call   c10045c8 <printk>
c100224b:	83 c4 10             	add    $0x10,%esp
c100224e:	83 ec 0c             	sub    $0xc,%esp
c1002251:	68 40 42 0f 00       	push   $0xf4240
c1002256:	e8 36 00 00 00       	call   c1002291 <delay>
c100225b:	83 c4 10             	add    $0x10,%esp
c100225e:	eb db                	jmp    c100223b <print_task1+0xc>

c1002260 <print_task2>:
c1002260:	55                   	push   %ebp
c1002261:	89 e5                	mov    %esp,%ebp
c1002263:	83 ec 18             	sub    $0x18,%esp
c1002266:	8b 45 08             	mov    0x8(%ebp),%eax
c1002269:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100226c:	83 ec 08             	sub    $0x8,%esp
c100226f:	ff 75 f4             	pushl  -0xc(%ebp)
c1002272:	68 c0 9e 00 c1       	push   $0xc1009ec0
c1002277:	e8 4c 23 00 00       	call   c10045c8 <printk>
c100227c:	83 c4 10             	add    $0x10,%esp
c100227f:	83 ec 0c             	sub    $0xc,%esp
c1002282:	68 40 42 0f 00       	push   $0xf4240
c1002287:	e8 05 00 00 00       	call   c1002291 <delay>
c100228c:	83 c4 10             	add    $0x10,%esp
c100228f:	eb db                	jmp    c100226c <print_task2+0xc>

c1002291 <delay>:
c1002291:	55                   	push   %ebp
c1002292:	89 e5                	mov    %esp,%ebp
c1002294:	83 ec 10             	sub    $0x10,%esp
c1002297:	8b 45 08             	mov    0x8(%ebp),%eax
c100229a:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100229d:	eb 17                	jmp    c10022b6 <delay+0x25>
c100229f:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c10022a6:	eb 04                	jmp    c10022ac <delay+0x1b>
c10022a8:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c10022ac:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c10022b0:	75 f6                	jne    c10022a8 <delay+0x17>
c10022b2:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c10022b6:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c10022ba:	75 e3                	jne    c100229f <delay+0xe>
c10022bc:	90                   	nop
c10022bd:	90                   	nop
c10022be:	c9                   	leave  
c10022bf:	c3                   	ret    

c10022c0 <test_user>:
c10022c0:	55                   	push   %ebp
c10022c1:	89 e5                	mov    %esp,%ebp
c10022c3:	83 ec 08             	sub    $0x8,%esp
c10022c6:	83 ec 0c             	sub    $0xc,%esp
c10022c9:	68 2f 00 00 40       	push   $0x4000002f
c10022ce:	e8 df 16 00 00       	call   c10039b2 <user_task_init>
c10022d3:	83 c4 10             	add    $0x10,%esp
c10022d6:	90                   	nop
c10022d7:	c9                   	leave  
c10022d8:	c3                   	ret    

c10022d9 <pmm_init>:
c10022d9:	55                   	push   %ebp
c10022da:	89 e5                	mov    %esp,%ebp
c10022dc:	83 ec 38             	sub    $0x38,%esp
c10022df:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10022e6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10022ed:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10022f4:	c7 45 d4 04 80 00 c0 	movl   $0xc0008004,-0x2c(%ebp)
c10022fb:	b8 00 80 00 c0       	mov    $0xc0008000,%eax
c1002300:	8b 00                	mov    (%eax),%eax
c1002302:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002305:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c100230c:	e9 98 02 00 00       	jmp    c10025a9 <pmm_init+0x2d0>
c1002311:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002314:	89 d0                	mov    %edx,%eax
c1002316:	c1 e0 02             	shl    $0x2,%eax
c1002319:	01 d0                	add    %edx,%eax
c100231b:	c1 e0 02             	shl    $0x2,%eax
c100231e:	89 c2                	mov    %eax,%edx
c1002320:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1002323:	01 d0                	add    %edx,%eax
c1002325:	8b 50 04             	mov    0x4(%eax),%edx
c1002328:	8b 00                	mov    (%eax),%eax
c100232a:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100232d:	e9 40 02 00 00       	jmp    c1002572 <pmm_init+0x299>
c1002332:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002335:	85 c0                	test   %eax,%eax
c1002337:	0f 88 2e 02 00 00    	js     c100256b <pmm_init+0x292>
c100233d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002340:	89 d0                	mov    %edx,%eax
c1002342:	c1 e0 02             	shl    $0x2,%eax
c1002345:	01 d0                	add    %edx,%eax
c1002347:	c1 e0 02             	shl    $0x2,%eax
c100234a:	89 c2                	mov    %eax,%edx
c100234c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100234f:	01 d0                	add    %edx,%eax
c1002351:	8b 40 10             	mov    0x10(%eax),%eax
c1002354:	83 f8 01             	cmp    $0x1,%eax
c1002357:	75 59                	jne    c10023b2 <pmm_init+0xd9>
c1002359:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100235c:	c1 e8 0c             	shr    $0xc,%eax
c100235f:	89 c2                	mov    %eax,%edx
c1002361:	89 d0                	mov    %edx,%eax
c1002363:	01 c0                	add    %eax,%eax
c1002365:	01 d0                	add    %edx,%eax
c1002367:	c1 e0 02             	shl    $0x2,%eax
c100236a:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c100236f:	c6 00 00             	movb   $0x0,(%eax)
c1002372:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002375:	c1 e8 0c             	shr    $0xc,%eax
c1002378:	89 c2                	mov    %eax,%edx
c100237a:	89 d0                	mov    %edx,%eax
c100237c:	01 c0                	add    %eax,%eax
c100237e:	01 d0                	add    %edx,%eax
c1002380:	c1 e0 02             	shl    $0x2,%eax
c1002383:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c1002388:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c100238e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002391:	c1 e8 0c             	shr    $0xc,%eax
c1002394:	89 c2                	mov    %eax,%edx
c1002396:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002399:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100239e:	89 c1                	mov    %eax,%ecx
c10023a0:	89 d0                	mov    %edx,%eax
c10023a2:	01 c0                	add    %eax,%eax
c10023a4:	01 d0                	add    %edx,%eax
c10023a6:	c1 e0 02             	shl    $0x2,%eax
c10023a9:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c10023ae:	89 08                	mov    %ecx,(%eax)
c10023b0:	eb 57                	jmp    c1002409 <pmm_init+0x130>
c10023b2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10023b5:	c1 e8 0c             	shr    $0xc,%eax
c10023b8:	89 c2                	mov    %eax,%edx
c10023ba:	89 d0                	mov    %edx,%eax
c10023bc:	01 c0                	add    %eax,%eax
c10023be:	01 d0                	add    %edx,%eax
c10023c0:	c1 e0 02             	shl    $0x2,%eax
c10023c3:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10023c8:	c6 00 08             	movb   $0x8,(%eax)
c10023cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10023ce:	c1 e8 0c             	shr    $0xc,%eax
c10023d1:	89 c2                	mov    %eax,%edx
c10023d3:	89 d0                	mov    %edx,%eax
c10023d5:	01 c0                	add    %eax,%eax
c10023d7:	01 d0                	add    %edx,%eax
c10023d9:	c1 e0 02             	shl    $0x2,%eax
c10023dc:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c10023e1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10023e7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10023ea:	c1 e8 0c             	shr    $0xc,%eax
c10023ed:	89 c2                	mov    %eax,%edx
c10023ef:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10023f2:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10023f7:	89 c1                	mov    %eax,%ecx
c10023f9:	89 d0                	mov    %edx,%eax
c10023fb:	01 c0                	add    %eax,%eax
c10023fd:	01 d0                	add    %edx,%eax
c10023ff:	c1 e0 02             	shl    $0x2,%eax
c1002402:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c1002407:	89 08                	mov    %ecx,(%eax)
c1002409:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100240c:	c1 e8 0c             	shr    $0xc,%eax
c100240f:	89 c2                	mov    %eax,%edx
c1002411:	89 d0                	mov    %edx,%eax
c1002413:	01 c0                	add    %eax,%eax
c1002415:	01 d0                	add    %edx,%eax
c1002417:	c1 e0 02             	shl    $0x2,%eax
c100241a:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c100241f:	8b 00                	mov    (%eax),%eax
c1002421:	3d ff ff ff 00       	cmp    $0xffffff,%eax
c1002426:	77 62                	ja     c100248a <pmm_init+0x1b1>
c1002428:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100242b:	c1 e8 0c             	shr    $0xc,%eax
c100242e:	89 c1                	mov    %eax,%ecx
c1002430:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002433:	c1 e8 0c             	shr    $0xc,%eax
c1002436:	89 c2                	mov    %eax,%edx
c1002438:	89 c8                	mov    %ecx,%eax
c100243a:	01 c0                	add    %eax,%eax
c100243c:	01 c8                	add    %ecx,%eax
c100243e:	c1 e0 02             	shl    $0x2,%eax
c1002441:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002446:	0f b6 08             	movzbl (%eax),%ecx
c1002449:	89 d0                	mov    %edx,%eax
c100244b:	01 c0                	add    %eax,%eax
c100244d:	01 d0                	add    %edx,%eax
c100244f:	c1 e0 02             	shl    $0x2,%eax
c1002452:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002457:	88 08                	mov    %cl,(%eax)
c1002459:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100245c:	c1 e8 0c             	shr    $0xc,%eax
c100245f:	89 c2                	mov    %eax,%edx
c1002461:	89 d0                	mov    %edx,%eax
c1002463:	01 c0                	add    %eax,%eax
c1002465:	01 d0                	add    %edx,%eax
c1002467:	c1 e0 02             	shl    $0x2,%eax
c100246a:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c100246f:	8b 00                	mov    (%eax),%eax
c1002471:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002474:	75 07                	jne    c100247d <pmm_init+0x1a4>
c1002476:	b8 01 00 00 00       	mov    $0x1,%eax
c100247b:	eb 05                	jmp    c1002482 <pmm_init+0x1a9>
c100247d:	b8 00 00 00 00       	mov    $0x0,%eax
c1002482:	01 45 f4             	add    %eax,-0xc(%ebp)
c1002485:	e9 e1 00 00 00       	jmp    c100256b <pmm_init+0x292>
c100248a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100248d:	c1 e8 0c             	shr    $0xc,%eax
c1002490:	89 c2                	mov    %eax,%edx
c1002492:	89 d0                	mov    %edx,%eax
c1002494:	01 c0                	add    %eax,%eax
c1002496:	01 d0                	add    %edx,%eax
c1002498:	c1 e0 02             	shl    $0x2,%eax
c100249b:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c10024a0:	8b 00                	mov    (%eax),%eax
c10024a2:	3d ff ff ff 37       	cmp    $0x37ffffff,%eax
c10024a7:	77 62                	ja     c100250b <pmm_init+0x232>
c10024a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024ac:	c1 e8 0c             	shr    $0xc,%eax
c10024af:	89 c2                	mov    %eax,%edx
c10024b1:	89 d0                	mov    %edx,%eax
c10024b3:	01 c0                	add    %eax,%eax
c10024b5:	01 d0                	add    %edx,%eax
c10024b7:	c1 e0 02             	shl    $0x2,%eax
c10024ba:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10024bf:	0f b6 08             	movzbl (%eax),%ecx
c10024c2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024c5:	c1 e8 0c             	shr    $0xc,%eax
c10024c8:	89 c2                	mov    %eax,%edx
c10024ca:	83 c9 10             	or     $0x10,%ecx
c10024cd:	89 d0                	mov    %edx,%eax
c10024cf:	01 c0                	add    %eax,%eax
c10024d1:	01 d0                	add    %edx,%eax
c10024d3:	c1 e0 02             	shl    $0x2,%eax
c10024d6:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10024db:	88 08                	mov    %cl,(%eax)
c10024dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024e0:	c1 e8 0c             	shr    $0xc,%eax
c10024e3:	89 c2                	mov    %eax,%edx
c10024e5:	89 d0                	mov    %edx,%eax
c10024e7:	01 c0                	add    %eax,%eax
c10024e9:	01 d0                	add    %edx,%eax
c10024eb:	c1 e0 02             	shl    $0x2,%eax
c10024ee:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c10024f3:	8b 00                	mov    (%eax),%eax
c10024f5:	83 f8 ff             	cmp    $0xffffffff,%eax
c10024f8:	75 07                	jne    c1002501 <pmm_init+0x228>
c10024fa:	b8 01 00 00 00       	mov    $0x1,%eax
c10024ff:	eb 05                	jmp    c1002506 <pmm_init+0x22d>
c1002501:	b8 00 00 00 00       	mov    $0x0,%eax
c1002506:	01 45 f0             	add    %eax,-0x10(%ebp)
c1002509:	eb 60                	jmp    c100256b <pmm_init+0x292>
c100250b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100250e:	c1 e8 0c             	shr    $0xc,%eax
c1002511:	89 c2                	mov    %eax,%edx
c1002513:	89 d0                	mov    %edx,%eax
c1002515:	01 c0                	add    %eax,%eax
c1002517:	01 d0                	add    %edx,%eax
c1002519:	c1 e0 02             	shl    $0x2,%eax
c100251c:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002521:	0f b6 08             	movzbl (%eax),%ecx
c1002524:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002527:	c1 e8 0c             	shr    $0xc,%eax
c100252a:	89 c2                	mov    %eax,%edx
c100252c:	83 c9 20             	or     $0x20,%ecx
c100252f:	89 d0                	mov    %edx,%eax
c1002531:	01 c0                	add    %eax,%eax
c1002533:	01 d0                	add    %edx,%eax
c1002535:	c1 e0 02             	shl    $0x2,%eax
c1002538:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c100253d:	88 08                	mov    %cl,(%eax)
c100253f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002542:	c1 e8 0c             	shr    $0xc,%eax
c1002545:	89 c2                	mov    %eax,%edx
c1002547:	89 d0                	mov    %edx,%eax
c1002549:	01 c0                	add    %eax,%eax
c100254b:	01 d0                	add    %edx,%eax
c100254d:	c1 e0 02             	shl    $0x2,%eax
c1002550:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c1002555:	8b 00                	mov    (%eax),%eax
c1002557:	83 f8 ff             	cmp    $0xffffffff,%eax
c100255a:	75 07                	jne    c1002563 <pmm_init+0x28a>
c100255c:	b8 01 00 00 00       	mov    $0x1,%eax
c1002561:	eb 05                	jmp    c1002568 <pmm_init+0x28f>
c1002563:	b8 00 00 00 00       	mov    $0x0,%eax
c1002568:	01 45 ec             	add    %eax,-0x14(%ebp)
c100256b:	81 45 e0 00 10 00 00 	addl   $0x1000,-0x20(%ebp)
c1002572:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002575:	89 d0                	mov    %edx,%eax
c1002577:	c1 e0 02             	shl    $0x2,%eax
c100257a:	01 d0                	add    %edx,%eax
c100257c:	c1 e0 02             	shl    $0x2,%eax
c100257f:	89 c2                	mov    %eax,%edx
c1002581:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1002584:	01 d0                	add    %edx,%eax
c1002586:	8b 50 0c             	mov    0xc(%eax),%edx
c1002589:	8b 40 08             	mov    0x8(%eax),%eax
c100258c:	89 c2                	mov    %eax,%edx
c100258e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002591:	01 d0                	add    %edx,%eax
c1002593:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002598:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c100259b:	0f 82 91 fd ff ff    	jb     c1002332 <pmm_init+0x59>
c10025a1:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c10025a5:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c10025a9:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c10025ad:	0f 85 5e fd ff ff    	jne    c1002311 <pmm_init+0x38>
c10025b3:	c7 05 f0 0c 61 c1 00 	movl   $0x1000,0xc1610cf0
c10025ba:	10 00 00 
c10025bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10025c0:	a3 f4 0c 61 c1       	mov    %eax,0xc1610cf4
c10025c5:	c7 05 ec 0c 61 c1 e0 	movl   $0xc1010ce0,0xc1610cec
c10025cc:	0c 01 c1 
c10025cf:	c7 05 e4 0c 61 c1 00 	movl   $0x37000,0xc1610ce4
c10025d6:	70 03 00 
c10025d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10025dc:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c10025e1:	8b 15 f0 0c 61 c1    	mov    0xc1610cf0,%edx
c10025e7:	89 d0                	mov    %edx,%eax
c10025e9:	01 c0                	add    %eax,%eax
c10025eb:	01 d0                	add    %edx,%eax
c10025ed:	c1 e0 02             	shl    $0x2,%eax
c10025f0:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10025f5:	a3 e0 0c 61 c1       	mov    %eax,0xc1610ce0
c10025fa:	c7 05 c4 0c 01 c1 00 	movl   $0x48000,0xc1010cc4
c1002601:	80 04 00 
c1002604:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002607:	a3 c8 0c 01 c1       	mov    %eax,0xc1010cc8
c100260c:	8b 15 e4 0c 61 c1    	mov    0xc1610ce4,%edx
c1002612:	a1 f0 0c 61 c1       	mov    0xc1610cf0,%eax
c1002617:	01 c2                	add    %eax,%edx
c1002619:	89 d0                	mov    %edx,%eax
c100261b:	01 c0                	add    %eax,%eax
c100261d:	01 d0                	add    %edx,%eax
c100261f:	c1 e0 02             	shl    $0x2,%eax
c1002622:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002627:	a3 c0 0c 01 c1       	mov    %eax,0xc1010cc0
c100262c:	c7 45 d0 00 00 00 40 	movl   $0x40000000,-0x30(%ebp)
c1002633:	90                   	nop
c1002634:	c7 45 dc 00 00 00 01 	movl   $0x1000000,-0x24(%ebp)
c100263b:	eb 39                	jmp    c1002676 <pmm_init+0x39d>
c100263d:	8b 0d e0 0c 61 c1    	mov    0xc1610ce0,%ecx
c1002643:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002646:	2d 00 00 00 01       	sub    $0x1000000,%eax
c100264b:	c1 e8 0c             	shr    $0xc,%eax
c100264e:	89 c2                	mov    %eax,%edx
c1002650:	89 d0                	mov    %edx,%eax
c1002652:	01 c0                	add    %eax,%eax
c1002654:	01 d0                	add    %edx,%eax
c1002656:	c1 e0 02             	shl    $0x2,%eax
c1002659:	01 c8                	add    %ecx,%eax
c100265b:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c1002662:	a1 e8 0c 61 c1       	mov    0xc1610ce8,%eax
c1002667:	83 e8 01             	sub    $0x1,%eax
c100266a:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c100266f:	81 45 dc 00 10 00 00 	addl   $0x1000,-0x24(%ebp)
c1002676:	b8 c0 33 a1 c1       	mov    $0xc1a133c0,%eax
c100267b:	05 ff 0f 00 40       	add    $0x40000fff,%eax
c1002680:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002685:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1002688:	72 b3                	jb     c100263d <pmm_init+0x364>
c100268a:	c7 45 d8 00 e0 ff 37 	movl   $0x37ffe000,-0x28(%ebp)
c1002691:	eb 39                	jmp    c10026cc <pmm_init+0x3f3>
c1002693:	8b 0d e0 0c 61 c1    	mov    0xc1610ce0,%ecx
c1002699:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100269c:	2d 00 00 00 01       	sub    $0x1000000,%eax
c10026a1:	c1 e8 0c             	shr    $0xc,%eax
c10026a4:	89 c2                	mov    %eax,%edx
c10026a6:	89 d0                	mov    %edx,%eax
c10026a8:	01 c0                	add    %eax,%eax
c10026aa:	01 d0                	add    %edx,%eax
c10026ac:	c1 e0 02             	shl    $0x2,%eax
c10026af:	01 c8                	add    %ecx,%eax
c10026b1:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10026b8:	a1 e8 0c 61 c1       	mov    0xc1610ce8,%eax
c10026bd:	83 e8 01             	sub    $0x1,%eax
c10026c0:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c10026c5:	81 45 d8 00 10 00 00 	addl   $0x1000,-0x28(%ebp)
c10026cc:	81 7d d8 ff ff ff 37 	cmpl   $0x37ffffff,-0x28(%ebp)
c10026d3:	76 be                	jbe    c1002693 <pmm_init+0x3ba>
c10026d5:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c10026db:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c10026e1:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c10026e6:	51                   	push   %ecx
c10026e7:	52                   	push   %edx
c10026e8:	50                   	push   %eax
c10026e9:	68 c4 9e 00 c1       	push   $0xc1009ec4
c10026ee:	e8 d5 1e 00 00       	call   c10045c8 <printk>
c10026f3:	83 c4 10             	add    $0x10,%esp
c10026f6:	90                   	nop
c10026f7:	c9                   	leave  
c10026f8:	c3                   	ret    

c10026f9 <pmm_alloc>:
c10026f9:	55                   	push   %ebp
c10026fa:	89 e5                	mov    %esp,%ebp
c10026fc:	83 ec 24             	sub    $0x24,%esp
c10026ff:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002702:	88 45 dc             	mov    %al,-0x24(%ebp)
c1002705:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100270c:	8b 45 08             	mov    0x8(%ebp),%eax
c100270f:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002714:	c1 e8 0c             	shr    $0xc,%eax
c1002717:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100271a:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
c100271e:	75 09                	jne    c1002729 <pmm_alloc+0x30>
c1002720:	c7 45 f0 ec 0c 61 c1 	movl   $0xc1610cec,-0x10(%ebp)
c1002727:	eb 16                	jmp    c100273f <pmm_alloc+0x46>
c1002729:	80 7d dc 01          	cmpb   $0x1,-0x24(%ebp)
c100272d:	75 09                	jne    c1002738 <pmm_alloc+0x3f>
c100272f:	c7 45 f0 e0 0c 61 c1 	movl   $0xc1610ce0,-0x10(%ebp)
c1002736:	eb 07                	jmp    c100273f <pmm_alloc+0x46>
c1002738:	c7 45 f0 c0 0c 01 c1 	movl   $0xc1010cc0,-0x10(%ebp)
c100273f:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1002746:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100274d:	eb 43                	jmp    c1002792 <pmm_alloc+0x99>
c100274f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002752:	8b 08                	mov    (%eax),%ecx
c1002754:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002757:	89 d0                	mov    %edx,%eax
c1002759:	01 c0                	add    %eax,%eax
c100275b:	01 d0                	add    %edx,%eax
c100275d:	c1 e0 02             	shl    $0x2,%eax
c1002760:	01 c8                	add    %ecx,%eax
c1002762:	8b 40 04             	mov    0x4(%eax),%eax
c1002765:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002768:	75 0c                	jne    c1002776 <pmm_alloc+0x7d>
c100276a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100276e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002771:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002774:	eb 10                	jmp    c1002786 <pmm_alloc+0x8d>
c1002776:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002779:	83 c0 01             	add    $0x1,%eax
c100277c:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100277f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002786:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002789:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c100278c:	74 11                	je     c100279f <pmm_alloc+0xa6>
c100278e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002792:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002795:	8b 40 04             	mov    0x4(%eax),%eax
c1002798:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c100279b:	72 b2                	jb     c100274f <pmm_alloc+0x56>
c100279d:	eb 01                	jmp    c10027a0 <pmm_alloc+0xa7>
c100279f:	90                   	nop
c10027a0:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10027a3:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10027a6:	eb 2d                	jmp    c10027d5 <pmm_alloc+0xdc>
c10027a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10027ab:	8b 08                	mov    (%eax),%ecx
c10027ad:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10027b0:	89 d0                	mov    %edx,%eax
c10027b2:	01 c0                	add    %eax,%eax
c10027b4:	01 d0                	add    %edx,%eax
c10027b6:	c1 e0 02             	shl    $0x2,%eax
c10027b9:	01 c8                	add    %ecx,%eax
c10027bb:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10027c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10027c5:	8b 40 08             	mov    0x8(%eax),%eax
c10027c8:	8d 50 ff             	lea    -0x1(%eax),%edx
c10027cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10027ce:	89 50 08             	mov    %edx,0x8(%eax)
c10027d1:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c10027d5:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10027d8:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c10027db:	76 cb                	jbe    c10027a8 <pmm_alloc+0xaf>
c10027dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10027e0:	8b 08                	mov    (%eax),%ecx
c10027e2:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10027e5:	89 d0                	mov    %edx,%eax
c10027e7:	01 c0                	add    %eax,%eax
c10027e9:	01 d0                	add    %edx,%eax
c10027eb:	c1 e0 02             	shl    $0x2,%eax
c10027ee:	01 c8                	add    %ecx,%eax
c10027f0:	8b 40 08             	mov    0x8(%eax),%eax
c10027f3:	c9                   	leave  
c10027f4:	c3                   	ret    

c10027f5 <pmm_free>:
c10027f5:	55                   	push   %ebp
c10027f6:	89 e5                	mov    %esp,%ebp
c10027f8:	83 ec 20             	sub    $0x20,%esp
c10027fb:	8b 45 0c             	mov    0xc(%ebp),%eax
c10027fe:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002803:	c1 e8 0c             	shr    $0xc,%eax
c1002806:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002809:	81 7d 08 ff ff ff 00 	cmpl   $0xffffff,0x8(%ebp)
c1002810:	77 09                	ja     c100281b <pmm_free+0x26>
c1002812:	c7 45 fc ec 0c 61 c1 	movl   $0xc1610cec,-0x4(%ebp)
c1002819:	eb 27                	jmp    c1002842 <pmm_free+0x4d>
c100281b:	81 7d 08 ff ff ff 37 	cmpl   $0x37ffffff,0x8(%ebp)
c1002822:	77 10                	ja     c1002834 <pmm_free+0x3f>
c1002824:	81 6d 08 00 00 00 01 	subl   $0x1000000,0x8(%ebp)
c100282b:	c7 45 fc e0 0c 61 c1 	movl   $0xc1610ce0,-0x4(%ebp)
c1002832:	eb 0e                	jmp    c1002842 <pmm_free+0x4d>
c1002834:	81 6d 08 00 00 00 38 	subl   $0x38000000,0x8(%ebp)
c100283b:	c7 45 fc c0 0c 01 c1 	movl   $0xc1010cc0,-0x4(%ebp)
c1002842:	8b 45 08             	mov    0x8(%ebp),%eax
c1002845:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100284a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100284d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002850:	c1 e8 0c             	shr    $0xc,%eax
c1002853:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002856:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100285d:	eb 31                	jmp    c1002890 <pmm_free+0x9b>
c100285f:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002862:	8b 08                	mov    (%eax),%ecx
c1002864:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1002867:	89 d0                	mov    %edx,%eax
c1002869:	01 c0                	add    %eax,%eax
c100286b:	01 d0                	add    %edx,%eax
c100286d:	c1 e0 02             	shl    $0x2,%eax
c1002870:	01 c8                	add    %ecx,%eax
c1002872:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
c1002879:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100287c:	8b 40 08             	mov    0x8(%eax),%eax
c100287f:	8d 50 01             	lea    0x1(%eax),%edx
c1002882:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002885:	89 50 08             	mov    %edx,0x8(%eax)
c1002888:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c100288c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002890:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002893:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002896:	72 c7                	jb     c100285f <pmm_free+0x6a>
c1002898:	90                   	nop
c1002899:	90                   	nop
c100289a:	c9                   	leave  
c100289b:	c3                   	ret    

c100289c <setup_vpt>:
c100289c:	55                   	push   %ebp
c100289d:	89 e5                	mov    %esp,%ebp
c100289f:	83 ec 28             	sub    $0x28,%esp
c10028a2:	c7 45 e0 e0 00 00 00 	movl   $0xe0,-0x20(%ebp)
c10028a9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10028b0:	eb 27                	jmp    c10028d9 <setup_vpt+0x3d>
c10028b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028b5:	c1 e0 0c             	shl    $0xc,%eax
c10028b8:	05 00 30 93 c1       	add    $0xc1933000,%eax
c10028bd:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c10028c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028c6:	05 00 03 00 00       	add    $0x300,%eax
c10028cb:	83 ca 03             	or     $0x3,%edx
c10028ce:	89 14 85 00 10 61 c1 	mov    %edx,-0x3e9ef000(,%eax,4)
c10028d5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10028d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028dc:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c10028df:	72 d1                	jb     c10028b2 <setup_vpt+0x16>
c10028e1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10028e8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10028ef:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c10028f6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c10028fd:	eb 3d                	jmp    c100293c <setup_vpt+0xa0>
c10028ff:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002902:	8d 50 01             	lea    0x1(%eax),%edx
c1002905:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1002908:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100290b:	83 ca 03             	or     $0x3,%edx
c100290e:	8b 4d ec             	mov    -0x14(%ebp),%ecx
c1002911:	c1 e1 0a             	shl    $0xa,%ecx
c1002914:	01 c8                	add    %ecx,%eax
c1002916:	89 14 85 00 30 93 c1 	mov    %edx,-0x3e6cd000(,%eax,4)
c100291d:	81 7d e8 00 04 00 00 	cmpl   $0x400,-0x18(%ebp)
c1002924:	75 0b                	jne    c1002931 <setup_vpt+0x95>
c1002926:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c100292a:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002931:	81 45 f0 00 10 00 00 	addl   $0x1000,-0x10(%ebp)
c1002938:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c100293c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100293f:	c1 e0 0a             	shl    $0xa,%eax
c1002942:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1002945:	72 b8                	jb     c10028ff <setup_vpt+0x63>
c1002947:	b8 60 1d 00 40       	mov    $0x40001d60,%eax
c100294c:	68 00 00 00 40       	push   $0x40000000
c1002951:	50                   	push   %eax
c1002952:	68 00 00 00 40       	push   $0x40000000
c1002957:	68 00 10 61 c1       	push   $0xc1611000
c100295c:	e8 30 02 00 00       	call   c1002b91 <vmm_map>
c1002961:	83 c4 10             	add    $0x10,%esp
c1002964:	b8 00 10 61 c1       	mov    $0xc1611000,%eax
c1002969:	05 00 00 00 40       	add    $0x40000000,%eax
c100296e:	0f 22 d8             	mov    %eax,%cr3
c1002971:	90                   	nop
c1002972:	c9                   	leave  
c1002973:	c3                   	ret    

c1002974 <vmm_malloc>:
c1002974:	55                   	push   %ebp
c1002975:	89 e5                	mov    %esp,%ebp
c1002977:	53                   	push   %ebx
c1002978:	83 ec 34             	sub    $0x34,%esp
c100297b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100297e:	88 45 d4             	mov    %al,-0x2c(%ebp)
c1002981:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
c1002985:	83 ec 08             	sub    $0x8,%esp
c1002988:	50                   	push   %eax
c1002989:	ff 75 08             	pushl  0x8(%ebp)
c100298c:	e8 68 fd ff ff       	call   c10026f9 <pmm_alloc>
c1002991:	83 c4 10             	add    $0x10,%esp
c1002994:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002997:	8b 45 08             	mov    0x8(%ebp),%eax
c100299a:	05 ff 0f 00 00       	add    $0xfff,%eax
c100299f:	c1 e8 0c             	shr    $0xc,%eax
c10029a2:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10029a5:	80 7d d4 02          	cmpb   $0x2,-0x2c(%ebp)
c10029a9:	0f 85 db 00 00 00    	jne    c1002a8a <vmm_malloc+0x116>
c10029af:	a1 f4 ca 00 c1       	mov    0xc100caf4,%eax
c10029b4:	a3 00 20 93 c1       	mov    %eax,0xc1932000
c10029b9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10029c0:	eb 5d                	jmp    c1002a1f <vmm_malloc+0xab>
c10029c2:	8b 15 f4 ca 00 c1    	mov    0xc100caf4,%edx
c10029c8:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c10029cd:	29 c2                	sub    %eax,%edx
c10029cf:	89 d0                	mov    %edx,%eax
c10029d1:	c1 e8 16             	shr    $0x16,%eax
c10029d4:	89 c3                	mov    %eax,%ebx
c10029d6:	8b 15 f4 ca 00 c1    	mov    0xc100caf4,%edx
c10029dc:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c10029e1:	29 c2                	sub    %eax,%edx
c10029e3:	89 d0                	mov    %edx,%eax
c10029e5:	c1 e8 0c             	shr    $0xc,%eax
c10029e8:	25 ff 03 00 00       	and    $0x3ff,%eax
c10029ed:	89 c1                	mov    %eax,%ecx
c10029ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10029f2:	83 c8 07             	or     $0x7,%eax
c10029f5:	89 c2                	mov    %eax,%edx
c10029f7:	89 d8                	mov    %ebx,%eax
c10029f9:	c1 e0 0a             	shl    $0xa,%eax
c10029fc:	01 c8                	add    %ecx,%eax
c10029fe:	89 14 85 00 20 91 c1 	mov    %edx,-0x3e6ee000(,%eax,4)
c1002a05:	a1 f4 ca 00 c1       	mov    0xc100caf4,%eax
c1002a0a:	05 00 10 00 00       	add    $0x1000,%eax
c1002a0f:	a3 f4 ca 00 c1       	mov    %eax,0xc100caf4
c1002a14:	81 45 f4 00 10 00 00 	addl   $0x1000,-0xc(%ebp)
c1002a1b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002a1f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002a22:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1002a25:	72 9b                	jb     c10029c2 <vmm_malloc+0x4e>
c1002a27:	8b 15 f4 ca 00 c1    	mov    0xc100caf4,%edx
c1002a2d:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002a32:	29 c2                	sub    %eax,%edx
c1002a34:	89 d0                	mov    %edx,%eax
c1002a36:	05 ff ff 3f 00       	add    $0x3fffff,%eax
c1002a3b:	c1 e8 16             	shr    $0x16,%eax
c1002a3e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002a41:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002a48:	eb 2e                	jmp    c1002a78 <vmm_malloc+0x104>
c1002a4a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a4d:	c1 e0 0c             	shl    $0xc,%eax
c1002a50:	05 00 20 91 c1       	add    $0xc1912000,%eax
c1002a55:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002a5b:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002a60:	c1 e8 16             	shr    $0x16,%eax
c1002a63:	89 c1                	mov    %eax,%ecx
c1002a65:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a68:	01 c8                	add    %ecx,%eax
c1002a6a:	83 ca 07             	or     $0x7,%edx
c1002a6d:	89 14 85 00 10 61 c1 	mov    %edx,-0x3e9ef000(,%eax,4)
c1002a74:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002a78:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a7b:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002a7e:	72 ca                	jb     c1002a4a <vmm_malloc+0xd6>
c1002a80:	a1 00 20 93 c1       	mov    0xc1932000,%eax
c1002a85:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002a88:	eb 07                	jmp    c1002a91 <vmm_malloc+0x11d>
c1002a8a:	81 6d f4 00 00 00 40 	subl   $0x40000000,-0xc(%ebp)
c1002a91:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002a94:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002a97:	c9                   	leave  
c1002a98:	c3                   	ret    

c1002a99 <vmm_free>:
c1002a99:	55                   	push   %ebp
c1002a9a:	89 e5                	mov    %esp,%ebp
c1002a9c:	53                   	push   %ebx
c1002a9d:	83 ec 14             	sub    $0x14,%esp
c1002aa0:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002aa3:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002aa8:	c1 e8 0c             	shr    $0xc,%eax
c1002aab:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002aae:	8b 45 08             	mov    0x8(%ebp),%eax
c1002ab1:	05 00 00 00 40       	add    $0x40000000,%eax
c1002ab6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002ab9:	81 7d ec ff ff ff 37 	cmpl   $0x37ffffff,-0x14(%ebp)
c1002ac0:	0f 86 ae 00 00 00    	jbe    c1002b74 <vmm_free+0xdb>
c1002ac6:	8b 45 08             	mov    0x8(%ebp),%eax
c1002ac9:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002ace:	89 c2                	mov    %eax,%edx
c1002ad0:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002ad5:	29 c2                	sub    %eax,%edx
c1002ad7:	89 d0                	mov    %edx,%eax
c1002ad9:	c1 e8 16             	shr    $0x16,%eax
c1002adc:	89 c2                	mov    %eax,%edx
c1002ade:	8b 45 08             	mov    0x8(%ebp),%eax
c1002ae1:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002ae6:	89 c1                	mov    %eax,%ecx
c1002ae8:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002aed:	29 c1                	sub    %eax,%ecx
c1002aef:	89 c8                	mov    %ecx,%eax
c1002af1:	c1 e8 0c             	shr    $0xc,%eax
c1002af4:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002af9:	c1 e2 0a             	shl    $0xa,%edx
c1002afc:	01 d0                	add    %edx,%eax
c1002afe:	8b 04 85 00 20 91 c1 	mov    -0x3e6ee000(,%eax,4),%eax
c1002b05:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002b0a:	83 ec 08             	sub    $0x8,%esp
c1002b0d:	ff 75 0c             	pushl  0xc(%ebp)
c1002b10:	50                   	push   %eax
c1002b11:	e8 df fc ff ff       	call   c10027f5 <pmm_free>
c1002b16:	83 c4 10             	add    $0x10,%esp
c1002b19:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002b20:	eb 48                	jmp    c1002b6a <vmm_free+0xd1>
c1002b22:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002b27:	8b 55 08             	mov    0x8(%ebp),%edx
c1002b2a:	29 c2                	sub    %eax,%edx
c1002b2c:	89 d0                	mov    %edx,%eax
c1002b2e:	c1 e8 16             	shr    $0x16,%eax
c1002b31:	89 c3                	mov    %eax,%ebx
c1002b33:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002b38:	8b 55 08             	mov    0x8(%ebp),%edx
c1002b3b:	29 c2                	sub    %eax,%edx
c1002b3d:	89 d0                	mov    %edx,%eax
c1002b3f:	c1 e8 0c             	shr    $0xc,%eax
c1002b42:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002b47:	89 c1                	mov    %eax,%ecx
c1002b49:	8b 45 08             	mov    0x8(%ebp),%eax
c1002b4c:	83 c8 06             	or     $0x6,%eax
c1002b4f:	89 c2                	mov    %eax,%edx
c1002b51:	89 d8                	mov    %ebx,%eax
c1002b53:	c1 e0 0a             	shl    $0xa,%eax
c1002b56:	01 c8                	add    %ecx,%eax
c1002b58:	89 14 85 00 20 91 c1 	mov    %edx,-0x3e6ee000(,%eax,4)
c1002b5f:	81 45 08 00 10 00 00 	addl   $0x1000,0x8(%ebp)
c1002b66:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002b6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002b6d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002b70:	72 b0                	jb     c1002b22 <vmm_free+0x89>
c1002b72:	eb 17                	jmp    c1002b8b <vmm_free+0xf2>
c1002b74:	8b 45 08             	mov    0x8(%ebp),%eax
c1002b77:	05 00 00 00 40       	add    $0x40000000,%eax
c1002b7c:	83 ec 08             	sub    $0x8,%esp
c1002b7f:	ff 75 0c             	pushl  0xc(%ebp)
c1002b82:	50                   	push   %eax
c1002b83:	e8 6d fc ff ff       	call   c10027f5 <pmm_free>
c1002b88:	83 c4 10             	add    $0x10,%esp
c1002b8b:	90                   	nop
c1002b8c:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002b8f:	c9                   	leave  
c1002b90:	c3                   	ret    

c1002b91 <vmm_map>:
c1002b91:	55                   	push   %ebp
c1002b92:	89 e5                	mov    %esp,%ebp
c1002b94:	53                   	push   %ebx
c1002b95:	83 ec 20             	sub    $0x20,%esp
c1002b98:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002b9b:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002ba0:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002ba3:	8b 45 10             	mov    0x10(%ebp),%eax
c1002ba6:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002bab:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002bb0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002bb3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002bb6:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002bb9:	81 65 14 00 f0 ff ff 	andl   $0xfffff000,0x14(%ebp)
c1002bc0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002bc3:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002bc6:	c1 e8 0c             	shr    $0xc,%eax
c1002bc9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002bcc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002bd3:	eb 43                	jmp    c1002c18 <vmm_map+0x87>
c1002bd5:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002bd8:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002bdb:	c1 e8 16             	shr    $0x16,%eax
c1002bde:	89 c3                	mov    %eax,%ebx
c1002be0:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002be3:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002be6:	c1 e8 0c             	shr    $0xc,%eax
c1002be9:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002bee:	89 c1                	mov    %eax,%ecx
c1002bf0:	8b 45 14             	mov    0x14(%ebp),%eax
c1002bf3:	83 c8 07             	or     $0x7,%eax
c1002bf6:	89 c2                	mov    %eax,%edx
c1002bf8:	89 d8                	mov    %ebx,%eax
c1002bfa:	c1 e0 0a             	shl    $0xa,%eax
c1002bfd:	01 c8                	add    %ecx,%eax
c1002bff:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002c06:	81 45 14 00 10 00 00 	addl   $0x1000,0x14(%ebp)
c1002c0d:	81 45 f8 00 10 00 00 	addl   $0x1000,-0x8(%ebp)
c1002c14:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002c18:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002c1b:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002c1e:	72 b5                	jb     c1002bd5 <vmm_map+0x44>
c1002c20:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002c23:	05 ff 03 00 00       	add    $0x3ff,%eax
c1002c28:	c1 e8 0a             	shr    $0xa,%eax
c1002c2b:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002c2e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002c35:	eb 33                	jmp    c1002c6a <vmm_map+0xd9>
c1002c37:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002c3a:	c1 e0 0c             	shl    $0xc,%eax
c1002c3d:	05 00 20 61 c1       	add    $0xc1612000,%eax
c1002c42:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002c48:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002c4b:	c1 e8 16             	shr    $0x16,%eax
c1002c4e:	89 c1                	mov    %eax,%ecx
c1002c50:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002c53:	01 c8                	add    %ecx,%eax
c1002c55:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
c1002c5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c5f:	01 c8                	add    %ecx,%eax
c1002c61:	83 ca 07             	or     $0x7,%edx
c1002c64:	89 10                	mov    %edx,(%eax)
c1002c66:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002c6a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002c6d:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002c70:	72 c5                	jb     c1002c37 <vmm_map+0xa6>
c1002c72:	90                   	nop
c1002c73:	90                   	nop
c1002c74:	83 c4 20             	add    $0x20,%esp
c1002c77:	5b                   	pop    %ebx
c1002c78:	5d                   	pop    %ebp
c1002c79:	c3                   	ret    

c1002c7a <setup_pgdir>:
c1002c7a:	55                   	push   %ebp
c1002c7b:	89 e5                	mov    %esp,%ebp
c1002c7d:	57                   	push   %edi
c1002c7e:	56                   	push   %esi
c1002c7f:	53                   	push   %ebx
c1002c80:	83 ec 1c             	sub    $0x1c,%esp
c1002c83:	83 ec 08             	sub    $0x8,%esp
c1002c86:	6a 01                	push   $0x1
c1002c88:	68 00 10 00 00       	push   $0x1000
c1002c8d:	e8 e2 fc ff ff       	call   c1002974 <vmm_malloc>
c1002c92:	83 c4 10             	add    $0x10,%esp
c1002c95:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002c98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002c9b:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1002ca0:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002ca5:	8b 0b                	mov    (%ebx),%ecx
c1002ca7:	89 08                	mov    %ecx,(%eax)
c1002ca9:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002cad:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002cb1:	8d 78 04             	lea    0x4(%eax),%edi
c1002cb4:	83 e7 fc             	and    $0xfffffffc,%edi
c1002cb7:	29 f8                	sub    %edi,%eax
c1002cb9:	29 c3                	sub    %eax,%ebx
c1002cbb:	01 c2                	add    %eax,%edx
c1002cbd:	83 e2 fc             	and    $0xfffffffc,%edx
c1002cc0:	89 d0                	mov    %edx,%eax
c1002cc2:	c1 e8 02             	shr    $0x2,%eax
c1002cc5:	89 de                	mov    %ebx,%esi
c1002cc7:	89 c1                	mov    %eax,%ecx
c1002cc9:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002ccb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002cce:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002cd1:	5b                   	pop    %ebx
c1002cd2:	5e                   	pop    %esi
c1002cd3:	5f                   	pop    %edi
c1002cd4:	5d                   	pop    %ebp
c1002cd5:	c3                   	ret    

c1002cd6 <hash32>:
c1002cd6:	55                   	push   %ebp
c1002cd7:	89 e5                	mov    %esp,%ebp
c1002cd9:	83 ec 10             	sub    $0x10,%esp
c1002cdc:	8b 45 08             	mov    0x8(%ebp),%eax
c1002cdf:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1002ce5:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002ce8:	b8 20 00 00 00       	mov    $0x20,%eax
c1002ced:	2b 45 0c             	sub    0xc(%ebp),%eax
c1002cf0:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002cf3:	89 c1                	mov    %eax,%ecx
c1002cf5:	d3 ea                	shr    %cl,%edx
c1002cf7:	89 d0                	mov    %edx,%eax
c1002cf9:	c9                   	leave  
c1002cfa:	c3                   	ret    

c1002cfb <kernel_task_init>:
c1002cfb:	55                   	push   %ebp
c1002cfc:	89 e5                	mov    %esp,%ebp
c1002cfe:	83 ec 28             	sub    $0x28,%esp
c1002d01:	c7 45 ec 84 0c 01 c1 	movl   $0xc1010c84,-0x14(%ebp)
c1002d08:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d0b:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002d0e:	89 50 04             	mov    %edx,0x4(%eax)
c1002d11:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d14:	8b 50 04             	mov    0x4(%eax),%edx
c1002d17:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d1a:	89 10                	mov    %edx,(%eax)
c1002d1c:	90                   	nop
c1002d1d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002d24:	eb 27                	jmp    c1002d4d <kernel_task_init+0x52>
c1002d26:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002d29:	c1 e0 03             	shl    $0x3,%eax
c1002d2c:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c1002d31:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002d34:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002d37:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1002d3a:	89 50 04             	mov    %edx,0x4(%eax)
c1002d3d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002d40:	8b 50 04             	mov    0x4(%eax),%edx
c1002d43:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002d46:	89 10                	mov    %edx,(%eax)
c1002d48:	90                   	nop
c1002d49:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002d4d:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%ebp)
c1002d54:	7e d0                	jle    c1002d26 <kernel_task_init+0x2b>
c1002d56:	83 ec 0c             	sub    $0xc,%esp
c1002d59:	6a 01                	push   $0x1
c1002d5b:	e8 c5 05 00 00       	call   c1003325 <alloc_task>
c1002d60:	83 c4 10             	add    $0x10,%esp
c1002d63:	a3 00 30 a1 c1       	mov    %eax,0xc1a13000
c1002d68:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002d6d:	85 c0                	test   %eax,%eax
c1002d6f:	75 10                	jne    c1002d81 <kernel_task_init+0x86>
c1002d71:	83 ec 0c             	sub    $0xc,%esp
c1002d74:	68 0c 9f 00 c1       	push   $0xc1009f0c
c1002d79:	e8 4a 18 00 00       	call   c10045c8 <printk>
c1002d7e:	83 c4 10             	add    $0x10,%esp
c1002d81:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002d86:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c1002d8c:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002d91:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1002d98:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002d9d:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1002da4:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002da9:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1002db0:	c7 05 80 0c 01 c1 00 	movl   $0x0,0xc1010c80
c1002db7:	00 00 00 
c1002dba:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002dbf:	83 ec 08             	sub    $0x8,%esp
c1002dc2:	68 1f 9f 00 c1       	push   $0xc1009f1f
c1002dc7:	50                   	push   %eax
c1002dc8:	e8 3f 03 00 00       	call   c100310c <set_task_name>
c1002dcd:	83 c4 10             	add    $0x10,%esp
c1002dd0:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002dd5:	89 c2                	mov    %eax,%edx
c1002dd7:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ddc:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1002de2:	89 50 24             	mov    %edx,0x24(%eax)
c1002de5:	ba 00 10 61 c1       	mov    $0xc1611000,%edx
c1002dea:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002def:	81 c2 00 00 00 40    	add    $0x40000000,%edx
c1002df5:	89 50 28             	mov    %edx,0x28(%eax)
c1002df8:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002dfd:	c7 80 e4 00 00 00 00 	movl   $0x0,0xe4(%eax)
c1002e04:	00 00 00 
c1002e07:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e0c:	8b 40 24             	mov    0x24(%eax),%eax
c1002e0f:	8d 50 b4             	lea    -0x4c(%eax),%edx
c1002e12:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e17:	89 50 2c             	mov    %edx,0x2c(%eax)
c1002e1a:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e1f:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e22:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1002e29:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e2e:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e31:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1002e38:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e3d:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e40:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1002e47:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e4c:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e4f:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c1002e56:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e5b:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e5e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1002e64:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e69:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e6c:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c1002e73:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e78:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e7b:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1002e82:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e87:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e8a:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1002e91:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e96:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e99:	66 c7 40 3c 08 00    	movw   $0x8,0x3c(%eax)
c1002e9f:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ea4:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002ea7:	66 c7 40 48 10 00    	movw   $0x10,0x48(%eax)
c1002ead:	8b 15 00 30 a1 c1    	mov    0xc1a13000,%edx
c1002eb3:	8b 52 2c             	mov    0x2c(%edx),%edx
c1002eb6:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c1002eba:	66 89 42 24          	mov    %ax,0x24(%edx)
c1002ebe:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ec3:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002ec6:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1002eca:	66 89 50 28          	mov    %dx,0x28(%eax)
c1002ece:	8b 15 00 30 a1 c1    	mov    0xc1a13000,%edx
c1002ed4:	8b 52 2c             	mov    0x2c(%edx),%edx
c1002ed7:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1002edb:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1002edf:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ee4:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002ee7:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1002eed:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ef2:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002ef5:	8b 55 08             	mov    0x8(%ebp),%edx
c1002ef8:	89 50 38             	mov    %edx,0x38(%eax)
c1002efb:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f00:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002f03:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1002f0a:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f0f:	8b 50 24             	mov    0x24(%eax),%edx
c1002f12:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f17:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002f1a:	83 ea 4c             	sub    $0x4c,%edx
c1002f1d:	89 50 44             	mov    %edx,0x44(%eax)
c1002f20:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f25:	8b 50 2c             	mov    0x2c(%eax),%edx
c1002f28:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f2d:	8b 52 38             	mov    0x38(%edx),%edx
c1002f30:	89 50 30             	mov    %edx,0x30(%eax)
c1002f33:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f38:	8b 50 2c             	mov    0x2c(%eax),%edx
c1002f3b:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f40:	89 50 34             	mov    %edx,0x34(%eax)
c1002f43:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f48:	8b 50 2c             	mov    0x2c(%eax),%edx
c1002f4b:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f50:	8b 52 10             	mov    0x10(%edx),%edx
c1002f53:	89 50 38             	mov    %edx,0x38(%eax)
c1002f56:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f5b:	8b 50 2c             	mov    0x2c(%eax),%edx
c1002f5e:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f63:	8b 52 14             	mov    0x14(%edx),%edx
c1002f66:	89 50 40             	mov    %edx,0x40(%eax)
c1002f69:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f6e:	83 c0 50             	add    $0x50,%eax
c1002f71:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002f74:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f77:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002f7a:	89 50 04             	mov    %edx,0x4(%eax)
c1002f7d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f80:	8b 50 04             	mov    0x4(%eax),%edx
c1002f83:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f86:	89 10                	mov    %edx,(%eax)
c1002f88:	90                   	nop
c1002f89:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f8e:	83 c0 50             	add    $0x50,%eax
c1002f91:	83 ec 0c             	sub    $0xc,%esp
c1002f94:	50                   	push   %eax
c1002f95:	e8 dc 01 00 00       	call   c1003176 <add_link>
c1002f9a:	83 c4 10             	add    $0x10,%esp
c1002f9d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002fa4:	eb 16                	jmp    c1002fbc <kernel_task_init+0x2c1>
c1002fa6:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fab:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1002fae:	83 c2 18             	add    $0x18,%edx
c1002fb1:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1002fb8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002fbc:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1002fc0:	7e e4                	jle    c1002fa6 <kernel_task_init+0x2ab>
c1002fc2:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fc7:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1002fcc:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fd1:	83 ec 0c             	sub    $0xc,%esp
c1002fd4:	50                   	push   %eax
c1002fd5:	e8 1f 02 00 00       	call   c10031f9 <add_pid_hash>
c1002fda:	83 c4 10             	add    $0x10,%esp
c1002fdd:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fe2:	83 ec 0c             	sub    $0xc,%esp
c1002fe5:	50                   	push   %eax
c1002fe6:	e8 b3 05 00 00       	call   c100359e <wakeup_task>
c1002feb:	83 c4 10             	add    $0x10,%esp
c1002fee:	c7 05 8c 0c 01 c1 01 	movl   $0x1,0xc1010c8c
c1002ff5:	00 00 00 
c1002ff8:	90                   	nop
c1002ff9:	c9                   	leave  
c1002ffa:	c3                   	ret    

c1002ffb <set_pid_bit>:
c1002ffb:	55                   	push   %ebp
c1002ffc:	89 e5                	mov    %esp,%ebp
c1002ffe:	83 ec 10             	sub    $0x10,%esp
c1003001:	8b 45 08             	mov    0x8(%ebp),%eax
c1003004:	8d 50 07             	lea    0x7(%eax),%edx
c1003007:	85 c0                	test   %eax,%eax
c1003009:	0f 48 c2             	cmovs  %edx,%eax
c100300c:	c1 f8 03             	sar    $0x3,%eax
c100300f:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003012:	8b 45 08             	mov    0x8(%ebp),%eax
c1003015:	99                   	cltd   
c1003016:	c1 ea 1d             	shr    $0x1d,%edx
c1003019:	01 d0                	add    %edx,%eax
c100301b:	83 e0 07             	and    $0x7,%eax
c100301e:	29 d0                	sub    %edx,%eax
c1003020:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003023:	90                   	nop
c1003024:	c9                   	leave  
c1003025:	c3                   	ret    

c1003026 <clear_pid_bit>:
c1003026:	55                   	push   %ebp
c1003027:	89 e5                	mov    %esp,%ebp
c1003029:	83 ec 10             	sub    $0x10,%esp
c100302c:	8b 45 08             	mov    0x8(%ebp),%eax
c100302f:	8d 50 07             	lea    0x7(%eax),%edx
c1003032:	85 c0                	test   %eax,%eax
c1003034:	0f 48 c2             	cmovs  %edx,%eax
c1003037:	c1 f8 03             	sar    $0x3,%eax
c100303a:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100303d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003040:	99                   	cltd   
c1003041:	c1 ea 1d             	shr    $0x1d,%edx
c1003044:	01 d0                	add    %edx,%eax
c1003046:	83 e0 07             	and    $0x7,%eax
c1003049:	29 d0                	sub    %edx,%eax
c100304b:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100304e:	90                   	nop
c100304f:	c9                   	leave  
c1003050:	c3                   	ret    

c1003051 <find_free_pid>:
c1003051:	55                   	push   %ebp
c1003052:	89 e5                	mov    %esp,%ebp
c1003054:	83 ec 10             	sub    $0x10,%esp
c1003057:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100305e:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1003065:	eb 1b                	jmp    c1003082 <find_free_pid+0x31>
c1003067:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100306e:	eb 08                	jmp    c1003078 <find_free_pid+0x27>
c1003070:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003074:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1003078:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
c100307c:	7e f2                	jle    c1003070 <find_free_pid+0x1f>
c100307e:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1003082:	81 7d f8 00 80 00 00 	cmpl   $0x8000,-0x8(%ebp)
c1003089:	75 dc                	jne    c1003067 <find_free_pid+0x16>
c100308b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003090:	c9                   	leave  
c1003091:	c3                   	ret    

c1003092 <alloc_pid>:
c1003092:	55                   	push   %ebp
c1003093:	89 e5                	mov    %esp,%ebp
c1003095:	83 ec 10             	sub    $0x10,%esp
c1003098:	a1 00 cb 00 c1       	mov    0xc100cb00,%eax
c100309d:	85 c0                	test   %eax,%eax
c100309f:	75 07                	jne    c10030a8 <alloc_pid+0x16>
c10030a1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10030a6:	eb 44                	jmp    c10030ec <alloc_pid+0x5a>
c10030a8:	81 7d fc ff 7f 00 00 	cmpl   $0x7fff,-0x4(%ebp)
c10030af:	75 07                	jne    c10030b8 <alloc_pid+0x26>
c10030b1:	e8 9b ff ff ff       	call   c1003051 <find_free_pid>
c10030b6:	eb 08                	jmp    c10030c0 <alloc_pid+0x2e>
c10030b8:	a1 80 0c 01 c1       	mov    0xc1010c80,%eax
c10030bd:	83 c0 01             	add    $0x1,%eax
c10030c0:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10030c3:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c10030c7:	78 18                	js     c10030e1 <alloc_pid+0x4f>
c10030c9:	ff 75 fc             	pushl  -0x4(%ebp)
c10030cc:	e8 2a ff ff ff       	call   c1002ffb <set_pid_bit>
c10030d1:	83 c4 04             	add    $0x4,%esp
c10030d4:	a1 00 cb 00 c1       	mov    0xc100cb00,%eax
c10030d9:	83 e8 01             	sub    $0x1,%eax
c10030dc:	a3 00 cb 00 c1       	mov    %eax,0xc100cb00
c10030e1:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10030e4:	a3 80 0c 01 c1       	mov    %eax,0xc1010c80
c10030e9:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10030ec:	c9                   	leave  
c10030ed:	c3                   	ret    

c10030ee <free_pid>:
c10030ee:	55                   	push   %ebp
c10030ef:	89 e5                	mov    %esp,%ebp
c10030f1:	ff 75 08             	pushl  0x8(%ebp)
c10030f4:	e8 2d ff ff ff       	call   c1003026 <clear_pid_bit>
c10030f9:	83 c4 04             	add    $0x4,%esp
c10030fc:	a1 00 cb 00 c1       	mov    0xc100cb00,%eax
c1003101:	83 c0 01             	add    $0x1,%eax
c1003104:	a3 00 cb 00 c1       	mov    %eax,0xc100cb00
c1003109:	90                   	nop
c100310a:	c9                   	leave  
c100310b:	c3                   	ret    

c100310c <set_task_name>:
c100310c:	55                   	push   %ebp
c100310d:	89 e5                	mov    %esp,%ebp
c100310f:	83 ec 08             	sub    $0x8,%esp
c1003112:	8b 45 08             	mov    0x8(%ebp),%eax
c1003115:	83 c0 10             	add    $0x10,%eax
c1003118:	83 ec 04             	sub    $0x4,%esp
c100311b:	6a 14                	push   $0x14
c100311d:	6a 00                	push   $0x0
c100311f:	50                   	push   %eax
c1003120:	e8 85 cf ff ff       	call   c10000aa <memset>
c1003125:	83 c4 10             	add    $0x10,%esp
c1003128:	8b 45 08             	mov    0x8(%ebp),%eax
c100312b:	83 c0 10             	add    $0x10,%eax
c100312e:	83 ec 04             	sub    $0x4,%esp
c1003131:	6a 14                	push   $0x14
c1003133:	ff 75 0c             	pushl  0xc(%ebp)
c1003136:	50                   	push   %eax
c1003137:	e8 cc cf ff ff       	call   c1000108 <memcpy>
c100313c:	83 c4 10             	add    $0x10,%esp
c100313f:	c9                   	leave  
c1003140:	c3                   	ret    

c1003141 <get_task_name>:
c1003141:	55                   	push   %ebp
c1003142:	89 e5                	mov    %esp,%ebp
c1003144:	83 ec 08             	sub    $0x8,%esp
c1003147:	83 ec 04             	sub    $0x4,%esp
c100314a:	6a 15                	push   $0x15
c100314c:	6a 00                	push   $0x0
c100314e:	68 90 0c 01 c1       	push   $0xc1010c90
c1003153:	e8 52 cf ff ff       	call   c10000aa <memset>
c1003158:	83 c4 10             	add    $0x10,%esp
c100315b:	8b 45 08             	mov    0x8(%ebp),%eax
c100315e:	83 c0 10             	add    $0x10,%eax
c1003161:	83 ec 04             	sub    $0x4,%esp
c1003164:	6a 14                	push   $0x14
c1003166:	50                   	push   %eax
c1003167:	68 90 0c 01 c1       	push   $0xc1010c90
c100316c:	e8 97 cf ff ff       	call   c1000108 <memcpy>
c1003171:	83 c4 10             	add    $0x10,%esp
c1003174:	c9                   	leave  
c1003175:	c3                   	ret    

c1003176 <add_link>:
c1003176:	55                   	push   %ebp
c1003177:	89 e5                	mov    %esp,%ebp
c1003179:	83 ec 20             	sub    $0x20,%esp
c100317c:	c7 45 fc 84 0c 01 c1 	movl   $0xc1010c84,-0x4(%ebp)
c1003183:	8b 45 08             	mov    0x8(%ebp),%eax
c1003186:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003189:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100318c:	8b 00                	mov    (%eax),%eax
c100318e:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1003191:	89 55 f4             	mov    %edx,-0xc(%ebp)
c1003194:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003197:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100319a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100319d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10031a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10031a3:	89 10                	mov    %edx,(%eax)
c10031a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10031a8:	8b 10                	mov    (%eax),%edx
c10031aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10031ad:	89 50 04             	mov    %edx,0x4(%eax)
c10031b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10031b3:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10031b6:	89 50 04             	mov    %edx,0x4(%eax)
c10031b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10031bc:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10031bf:	89 10                	mov    %edx,(%eax)
c10031c1:	90                   	nop
c10031c2:	90                   	nop
c10031c3:	90                   	nop
c10031c4:	c9                   	leave  
c10031c5:	c3                   	ret    

c10031c6 <remove_link>:
c10031c6:	55                   	push   %ebp
c10031c7:	89 e5                	mov    %esp,%ebp
c10031c9:	83 ec 10             	sub    $0x10,%esp
c10031cc:	8b 45 08             	mov    0x8(%ebp),%eax
c10031cf:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10031d2:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10031d5:	8b 40 04             	mov    0x4(%eax),%eax
c10031d8:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10031db:	8b 12                	mov    (%edx),%edx
c10031dd:	89 55 f8             	mov    %edx,-0x8(%ebp)
c10031e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10031e3:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10031e6:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10031e9:	89 50 04             	mov    %edx,0x4(%eax)
c10031ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10031ef:	8b 55 f8             	mov    -0x8(%ebp),%edx
c10031f2:	89 10                	mov    %edx,(%eax)
c10031f4:	90                   	nop
c10031f5:	90                   	nop
c10031f6:	90                   	nop
c10031f7:	c9                   	leave  
c10031f8:	c3                   	ret    

c10031f9 <add_pid_hash>:
c10031f9:	55                   	push   %ebp
c10031fa:	89 e5                	mov    %esp,%ebp
c10031fc:	53                   	push   %ebx
c10031fd:	83 ec 20             	sub    $0x20,%esp
c1003200:	8b 45 08             	mov    0x8(%ebp),%eax
c1003203:	8d 58 58             	lea    0x58(%eax),%ebx
c1003206:	8b 45 08             	mov    0x8(%ebp),%eax
c1003209:	8b 40 0c             	mov    0xc(%eax),%eax
c100320c:	6a 0a                	push   $0xa
c100320e:	50                   	push   %eax
c100320f:	e8 c2 fa ff ff       	call   c1002cd6 <hash32>
c1003214:	83 c4 08             	add    $0x8,%esp
c1003217:	c1 e0 03             	shl    $0x3,%eax
c100321a:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c100321f:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003222:	89 5d f4             	mov    %ebx,-0xc(%ebp)
c1003225:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1003228:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100322b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100322e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003231:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003234:	8b 40 04             	mov    0x4(%eax),%eax
c1003237:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100323a:	89 55 e8             	mov    %edx,-0x18(%ebp)
c100323d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003240:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1003243:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003246:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003249:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100324c:	89 10                	mov    %edx,(%eax)
c100324e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003251:	8b 10                	mov    (%eax),%edx
c1003253:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003256:	89 50 04             	mov    %edx,0x4(%eax)
c1003259:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100325c:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100325f:	89 50 04             	mov    %edx,0x4(%eax)
c1003262:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003265:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003268:	89 10                	mov    %edx,(%eax)
c100326a:	90                   	nop
c100326b:	90                   	nop
c100326c:	90                   	nop
c100326d:	90                   	nop
c100326e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1003271:	c9                   	leave  
c1003272:	c3                   	ret    

c1003273 <remove_pid_hash>:
c1003273:	55                   	push   %ebp
c1003274:	89 e5                	mov    %esp,%ebp
c1003276:	83 ec 18             	sub    $0x18,%esp
c1003279:	83 ec 0c             	sub    $0xc,%esp
c100327c:	ff 75 08             	pushl  0x8(%ebp)
c100327f:	e8 36 00 00 00       	call   c10032ba <find_task>
c1003284:	83 c4 10             	add    $0x10,%esp
c1003287:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100328a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100328d:	83 c0 58             	add    $0x58,%eax
c1003290:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003293:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003296:	8b 40 04             	mov    0x4(%eax),%eax
c1003299:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100329c:	8b 12                	mov    (%edx),%edx
c100329e:	89 55 ec             	mov    %edx,-0x14(%ebp)
c10032a1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10032a4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10032a7:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10032aa:	89 50 04             	mov    %edx,0x4(%eax)
c10032ad:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10032b0:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10032b3:	89 10                	mov    %edx,(%eax)
c10032b5:	90                   	nop
c10032b6:	90                   	nop
c10032b7:	90                   	nop
c10032b8:	c9                   	leave  
c10032b9:	c3                   	ret    

c10032ba <find_task>:
c10032ba:	55                   	push   %ebp
c10032bb:	89 e5                	mov    %esp,%ebp
c10032bd:	83 ec 10             	sub    $0x10,%esp
c10032c0:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10032c4:	79 07                	jns    c10032cd <find_task+0x13>
c10032c6:	b8 00 00 00 00       	mov    $0x0,%eax
c10032cb:	eb 56                	jmp    c1003323 <find_task+0x69>
c10032cd:	8b 45 08             	mov    0x8(%ebp),%eax
c10032d0:	6a 0a                	push   $0xa
c10032d2:	50                   	push   %eax
c10032d3:	e8 fe f9 ff ff       	call   c1002cd6 <hash32>
c10032d8:	83 c4 08             	add    $0x8,%esp
c10032db:	c1 e0 03             	shl    $0x3,%eax
c10032de:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c10032e3:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10032e6:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10032e9:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10032ec:	eb 19                	jmp    c1003307 <find_task+0x4d>
c10032ee:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10032f1:	83 e8 58             	sub    $0x58,%eax
c10032f4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10032f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10032fa:	8b 40 0c             	mov    0xc(%eax),%eax
c10032fd:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003300:	75 05                	jne    c1003307 <find_task+0x4d>
c1003302:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003305:	eb 1c                	jmp    c1003323 <find_task+0x69>
c1003307:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100330a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100330d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003310:	8b 40 04             	mov    0x4(%eax),%eax
c1003313:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003316:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003319:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c100331c:	75 d0                	jne    c10032ee <find_task+0x34>
c100331e:	b8 00 00 00 00       	mov    $0x0,%eax
c1003323:	c9                   	leave  
c1003324:	c3                   	ret    

c1003325 <alloc_task>:
c1003325:	55                   	push   %ebp
c1003326:	89 e5                	mov    %esp,%ebp
c1003328:	83 ec 18             	sub    $0x18,%esp
c100332b:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c100332f:	75 17                	jne    c1003348 <alloc_task+0x23>
c1003331:	83 ec 08             	sub    $0x8,%esp
c1003334:	6a 01                	push   $0x1
c1003336:	68 e8 00 00 00       	push   $0xe8
c100333b:	e8 34 f6 ff ff       	call   c1002974 <vmm_malloc>
c1003340:	83 c4 10             	add    $0x10,%esp
c1003343:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003346:	eb 15                	jmp    c100335d <alloc_task+0x38>
c1003348:	83 ec 08             	sub    $0x8,%esp
c100334b:	6a 02                	push   $0x2
c100334d:	68 e8 00 00 00       	push   $0xe8
c1003352:	e8 1d f6 ff ff       	call   c1002974 <vmm_malloc>
c1003357:	83 c4 10             	add    $0x10,%esp
c100335a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100335d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1003361:	0f 84 8c 00 00 00    	je     c10033f3 <alloc_task+0xce>
c1003367:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100336a:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c1003370:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003373:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c100337a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100337d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1003384:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003387:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
c100338e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003391:	83 c0 10             	add    $0x10,%eax
c1003394:	83 ec 04             	sub    $0x4,%esp
c1003397:	6a 14                	push   $0x14
c1003399:	6a 00                	push   $0x0
c100339b:	50                   	push   %eax
c100339c:	e8 09 cd ff ff       	call   c10000aa <memset>
c10033a1:	83 c4 10             	add    $0x10,%esp
c10033a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033a7:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
c10033ae:	ba 00 10 61 c1       	mov    $0xc1611000,%edx
c10033b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033b6:	89 50 28             	mov    %edx,0x28(%eax)
c10033b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033bc:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
c10033c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033c6:	83 c0 30             	add    $0x30,%eax
c10033c9:	83 ec 04             	sub    $0x4,%esp
c10033cc:	6a 20                	push   $0x20
c10033ce:	6a 00                	push   $0x0
c10033d0:	50                   	push   %eax
c10033d1:	e8 d4 cc ff ff       	call   c10000aa <memset>
c10033d6:	83 c4 10             	add    $0x10,%esp
c10033d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033dc:	c7 80 e0 00 00 00 11 	movl   $0x19971211,0xe0(%eax)
c10033e3:	12 97 19 
c10033e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033e9:	c7 80 e4 00 00 00 00 	movl   $0x0,0xe4(%eax)
c10033f0:	00 00 00 
c10033f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033f6:	c9                   	leave  
c10033f7:	c3                   	ret    

c10033f8 <forkret>:
c10033f8:	55                   	push   %ebp
c10033f9:	89 e5                	mov    %esp,%ebp
c10033fb:	83 ec 08             	sub    $0x8,%esp
c10033fe:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003403:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003406:	83 ec 0c             	sub    $0xc,%esp
c1003409:	50                   	push   %eax
c100340a:	e8 87 d9 ff ff       	call   c1000d96 <forkrets>
c100340f:	83 c4 10             	add    $0x10,%esp
c1003412:	90                   	nop
c1003413:	c9                   	leave  
c1003414:	c3                   	ret    

c1003415 <copy_thread>:
c1003415:	55                   	push   %ebp
c1003416:	89 e5                	mov    %esp,%ebp
c1003418:	57                   	push   %edi
c1003419:	56                   	push   %esi
c100341a:	53                   	push   %ebx
c100341b:	8b 45 08             	mov    0x8(%ebp),%eax
c100341e:	8b 40 24             	mov    0x24(%eax),%eax
c1003421:	83 e8 4c             	sub    $0x4c,%eax
c1003424:	89 c2                	mov    %eax,%edx
c1003426:	8b 45 08             	mov    0x8(%ebp),%eax
c1003429:	89 50 2c             	mov    %edx,0x2c(%eax)
c100342c:	8b 45 08             	mov    0x8(%ebp),%eax
c100342f:	8b 40 24             	mov    0x24(%eax),%eax
c1003432:	8d 50 b4             	lea    -0x4c(%eax),%edx
c1003435:	8b 45 08             	mov    0x8(%ebp),%eax
c1003438:	89 50 24             	mov    %edx,0x24(%eax)
c100343b:	8b 45 08             	mov    0x8(%ebp),%eax
c100343e:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003441:	8b 55 10             	mov    0x10(%ebp),%edx
c1003444:	89 d3                	mov    %edx,%ebx
c1003446:	ba 4c 00 00 00       	mov    $0x4c,%edx
c100344b:	8b 0b                	mov    (%ebx),%ecx
c100344d:	89 08                	mov    %ecx,(%eax)
c100344f:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003453:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003457:	8d 78 04             	lea    0x4(%eax),%edi
c100345a:	83 e7 fc             	and    $0xfffffffc,%edi
c100345d:	29 f8                	sub    %edi,%eax
c100345f:	29 c3                	sub    %eax,%ebx
c1003461:	01 c2                	add    %eax,%edx
c1003463:	83 e2 fc             	and    $0xfffffffc,%edx
c1003466:	89 d0                	mov    %edx,%eax
c1003468:	c1 e8 02             	shr    $0x2,%eax
c100346b:	89 de                	mov    %ebx,%esi
c100346d:	89 c1                	mov    %eax,%ecx
c100346f:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003471:	8b 45 08             	mov    0x8(%ebp),%eax
c1003474:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003477:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c100347e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003481:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003484:	8b 55 0c             	mov    0xc(%ebp),%edx
c1003487:	89 50 44             	mov    %edx,0x44(%eax)
c100348a:	8b 45 10             	mov    0x10(%ebp),%eax
c100348d:	8b 50 38             	mov    0x38(%eax),%edx
c1003490:	8b 45 08             	mov    0x8(%ebp),%eax
c1003493:	89 50 30             	mov    %edx,0x30(%eax)
c1003496:	8b 45 10             	mov    0x10(%ebp),%eax
c1003499:	8b 50 10             	mov    0x10(%eax),%edx
c100349c:	8b 45 08             	mov    0x8(%ebp),%eax
c100349f:	89 50 38             	mov    %edx,0x38(%eax)
c10034a2:	8b 45 10             	mov    0x10(%ebp),%eax
c10034a5:	8b 50 14             	mov    0x14(%eax),%edx
c10034a8:	8b 45 08             	mov    0x8(%ebp),%eax
c10034ab:	89 50 40             	mov    %edx,0x40(%eax)
c10034ae:	8b 45 08             	mov    0x8(%ebp),%eax
c10034b1:	8b 40 2c             	mov    0x2c(%eax),%eax
c10034b4:	89 c2                	mov    %eax,%edx
c10034b6:	8b 45 08             	mov    0x8(%ebp),%eax
c10034b9:	89 50 34             	mov    %edx,0x34(%eax)
c10034bc:	90                   	nop
c10034bd:	5b                   	pop    %ebx
c10034be:	5e                   	pop    %esi
c10034bf:	5f                   	pop    %edi
c10034c0:	5d                   	pop    %ebp
c10034c1:	c3                   	ret    

c10034c2 <do_fork>:
c10034c2:	55                   	push   %ebp
c10034c3:	89 e5                	mov    %esp,%ebp
c10034c5:	83 ec 18             	sub    $0x18,%esp
c10034c8:	a1 8c 0c 01 c1       	mov    0xc1010c8c,%eax
c10034cd:	3d 00 80 00 00       	cmp    $0x8000,%eax
c10034d2:	76 0a                	jbe    c10034de <do_fork+0x1c>
c10034d4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10034d9:	e9 be 00 00 00       	jmp    c100359c <do_fork+0xda>
c10034de:	83 ec 0c             	sub    $0xc,%esp
c10034e1:	6a 01                	push   $0x1
c10034e3:	e8 3d fe ff ff       	call   c1003325 <alloc_task>
c10034e8:	83 c4 10             	add    $0x10,%esp
c10034eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10034ee:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10034f2:	75 0a                	jne    c10034fe <do_fork+0x3c>
c10034f4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10034f9:	e9 9e 00 00 00       	jmp    c100359c <do_fork+0xda>
c10034fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003501:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c1003507:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100350a:	89 50 24             	mov    %edx,0x24(%eax)
c100350d:	83 ec 04             	sub    $0x4,%esp
c1003510:	ff 75 10             	pushl  0x10(%ebp)
c1003513:	ff 75 0c             	pushl  0xc(%ebp)
c1003516:	ff 75 f4             	pushl  -0xc(%ebp)
c1003519:	e8 f7 fe ff ff       	call   c1003415 <copy_thread>
c100351e:	83 c4 10             	add    $0x10,%esp
c1003521:	e8 6c fb ff ff       	call   c1003092 <alloc_pid>
c1003526:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003529:	89 42 0c             	mov    %eax,0xc(%edx)
c100352c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100352f:	8b 40 0c             	mov    0xc(%eax),%eax
c1003532:	85 c0                	test   %eax,%eax
c1003534:	79 07                	jns    c100353d <do_fork+0x7b>
c1003536:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100353b:	eb 5f                	jmp    c100359c <do_fork+0xda>
c100353d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003540:	83 c0 50             	add    $0x50,%eax
c1003543:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003546:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003549:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100354c:	89 50 04             	mov    %edx,0x4(%eax)
c100354f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003552:	8b 50 04             	mov    0x4(%eax),%edx
c1003555:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003558:	89 10                	mov    %edx,(%eax)
c100355a:	90                   	nop
c100355b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100355e:	83 c0 50             	add    $0x50,%eax
c1003561:	83 ec 0c             	sub    $0xc,%esp
c1003564:	50                   	push   %eax
c1003565:	e8 0c fc ff ff       	call   c1003176 <add_link>
c100356a:	83 c4 10             	add    $0x10,%esp
c100356d:	83 ec 0c             	sub    $0xc,%esp
c1003570:	ff 75 f4             	pushl  -0xc(%ebp)
c1003573:	e8 81 fc ff ff       	call   c10031f9 <add_pid_hash>
c1003578:	83 c4 10             	add    $0x10,%esp
c100357b:	a1 8c 0c 01 c1       	mov    0xc1010c8c,%eax
c1003580:	83 c0 01             	add    $0x1,%eax
c1003583:	a3 8c 0c 01 c1       	mov    %eax,0xc1010c8c
c1003588:	83 ec 0c             	sub    $0xc,%esp
c100358b:	ff 75 f4             	pushl  -0xc(%ebp)
c100358e:	e8 0b 00 00 00       	call   c100359e <wakeup_task>
c1003593:	83 c4 10             	add    $0x10,%esp
c1003596:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003599:	8b 40 0c             	mov    0xc(%eax),%eax
c100359c:	c9                   	leave  
c100359d:	c3                   	ret    

c100359e <wakeup_task>:
c100359e:	55                   	push   %ebp
c100359f:	89 e5                	mov    %esp,%ebp
c10035a1:	8b 45 08             	mov    0x8(%ebp),%eax
c10035a4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10035aa:	90                   	nop
c10035ab:	5d                   	pop    %ebp
c10035ac:	c3                   	ret    

c10035ad <kernel_thread>:
c10035ad:	55                   	push   %ebp
c10035ae:	89 e5                	mov    %esp,%ebp
c10035b0:	83 ec 58             	sub    $0x58,%esp
c10035b3:	83 ec 04             	sub    $0x4,%esp
c10035b6:	6a 4c                	push   $0x4c
c10035b8:	6a 00                	push   $0x0
c10035ba:	8d 45 ac             	lea    -0x54(%ebp),%eax
c10035bd:	50                   	push   %eax
c10035be:	e8 e7 ca ff ff       	call   c10000aa <memset>
c10035c3:	83 c4 10             	add    $0x10,%esp
c10035c6:	66 c7 45 e8 08 00    	movw   $0x8,-0x18(%ebp)
c10035cc:	66 c7 45 f4 10 00    	movw   $0x10,-0xc(%ebp)
c10035d2:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10035d6:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
c10035da:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
c10035de:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
c10035e2:	8b 45 08             	mov    0x8(%ebp),%eax
c10035e5:	89 45 bc             	mov    %eax,-0x44(%ebp)
c10035e8:	8b 45 0c             	mov    0xc(%ebp),%eax
c10035eb:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10035ee:	b8 3c 3c 00 c1       	mov    $0xc1003c3c,%eax
c10035f3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10035f6:	83 ec 04             	sub    $0x4,%esp
c10035f9:	8d 45 ac             	lea    -0x54(%ebp),%eax
c10035fc:	50                   	push   %eax
c10035fd:	6a 00                	push   $0x0
c10035ff:	ff 75 10             	pushl  0x10(%ebp)
c1003602:	e8 bb fe ff ff       	call   c10034c2 <do_fork>
c1003607:	83 c4 10             	add    $0x10,%esp
c100360a:	c9                   	leave  
c100360b:	c3                   	ret    

c100360c <task_run>:
c100360c:	55                   	push   %ebp
c100360d:	89 e5                	mov    %esp,%ebp
c100360f:	83 ec 18             	sub    $0x18,%esp
c1003612:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003617:	39 45 08             	cmp    %eax,0x8(%ebp)
c100361a:	74 63                	je     c100367f <task_run+0x73>
c100361c:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003621:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003624:	8b 45 08             	mov    0x8(%ebp),%eax
c1003627:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c100362c:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003631:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003634:	75 07                	jne    c100363d <task_run+0x31>
c1003636:	e8 d6 d6 ff ff       	call   c1000d11 <intr_enable>
c100363b:	eb 05                	jmp    c1003642 <task_run+0x36>
c100363d:	e8 ee d6 ff ff       	call   c1000d30 <intr_disable>
c1003642:	8b 45 08             	mov    0x8(%ebp),%eax
c1003645:	8b 40 24             	mov    0x24(%eax),%eax
c1003648:	83 ec 0c             	sub    $0xc,%esp
c100364b:	50                   	push   %eax
c100364c:	e8 02 d3 ff ff       	call   c1000953 <set_ts_esp0>
c1003651:	83 c4 10             	add    $0x10,%esp
c1003654:	8b 45 08             	mov    0x8(%ebp),%eax
c1003657:	8b 40 28             	mov    0x28(%eax),%eax
c100365a:	83 ec 0c             	sub    $0xc,%esp
c100365d:	50                   	push   %eax
c100365e:	e8 f3 cb ff ff       	call   c1000256 <lcr3>
c1003663:	83 c4 10             	add    $0x10,%esp
c1003666:	8b 45 08             	mov    0x8(%ebp),%eax
c1003669:	8d 50 30             	lea    0x30(%eax),%edx
c100366c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100366f:	83 c0 30             	add    $0x30,%eax
c1003672:	83 ec 08             	sub    $0x8,%esp
c1003675:	52                   	push   %edx
c1003676:	50                   	push   %eax
c1003677:	e8 c5 05 00 00       	call   c1003c41 <switch_to>
c100367c:	83 c4 10             	add    $0x10,%esp
c100367f:	90                   	nop
c1003680:	c9                   	leave  
c1003681:	c3                   	ret    

c1003682 <schedule>:
c1003682:	55                   	push   %ebp
c1003683:	89 e5                	mov    %esp,%ebp
c1003685:	83 ec 18             	sub    $0x18,%esp
c1003688:	c7 45 ec 84 0c 01 c1 	movl   $0xc1010c84,-0x14(%ebp)
c100368f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003692:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003695:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100369a:	8b 00                	mov    (%eax),%eax
c100369c:	85 c0                	test   %eax,%eax
c100369e:	75 0c                	jne    c10036ac <schedule+0x2a>
c10036a0:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10036a5:	8b 40 04             	mov    0x4(%eax),%eax
c10036a8:	85 c0                	test   %eax,%eax
c10036aa:	74 0b                	je     c10036b7 <schedule+0x35>
c10036ac:	0f b6 05 ac 0c 01 c1 	movzbl 0xc1010cac,%eax
c10036b3:	3c 01                	cmp    $0x1,%al
c10036b5:	75 48                	jne    c10036ff <schedule+0x7d>
c10036b7:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10036bc:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c10036c3:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10036c8:	83 c0 50             	add    $0x50,%eax
c10036cb:	50                   	push   %eax
c10036cc:	e8 a5 fa ff ff       	call   c1003176 <add_link>
c10036d1:	83 c4 04             	add    $0x4,%esp
c10036d4:	eb 29                	jmp    c10036ff <schedule+0x7d>
c10036d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036d9:	83 e8 50             	sub    $0x50,%eax
c10036dc:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10036df:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10036e2:	8b 00                	mov    (%eax),%eax
c10036e4:	85 c0                	test   %eax,%eax
c10036e6:	75 17                	jne    c10036ff <schedule+0x7d>
c10036e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10036eb:	8b 40 04             	mov    0x4(%eax),%eax
c10036ee:	85 c0                	test   %eax,%eax
c10036f0:	74 0d                	je     c10036ff <schedule+0x7d>
c10036f2:	ff 75 f4             	pushl  -0xc(%ebp)
c10036f5:	e8 cc fa ff ff       	call   c10031c6 <remove_link>
c10036fa:	83 c4 04             	add    $0x4,%esp
c10036fd:	eb 17                	jmp    c1003716 <schedule+0x94>
c10036ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003702:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003705:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003708:	8b 40 04             	mov    0x4(%eax),%eax
c100370b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100370e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003711:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1003714:	75 c0                	jne    c10036d6 <schedule+0x54>
c1003716:	83 ec 0c             	sub    $0xc,%esp
c1003719:	ff 75 f0             	pushl  -0x10(%ebp)
c100371c:	e8 eb fe ff ff       	call   c100360c <task_run>
c1003721:	83 c4 10             	add    $0x10,%esp
c1003724:	90                   	nop
c1003725:	c9                   	leave  
c1003726:	c3                   	ret    

c1003727 <thread_block>:
c1003727:	55                   	push   %ebp
c1003728:	89 e5                	mov    %esp,%ebp
c100372a:	83 ec 18             	sub    $0x18,%esp
c100372d:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1003731:	74 19                	je     c100374c <thread_block+0x25>
c1003733:	68 25 9f 00 c1       	push   $0xc1009f25
c1003738:	68 48 a0 00 c1       	push   $0xc100a048
c100373d:	68 a4 01 00 00       	push   $0x1a4
c1003742:	68 38 9f 00 c1       	push   $0xc1009f38
c1003747:	e8 c1 cb ff ff       	call   c100030d <__PANIC>
c100374c:	e8 ff d5 ff ff       	call   c1000d50 <intr_save>
c1003751:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003754:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003759:	8b 55 08             	mov    0x8(%ebp),%edx
c100375c:	89 10                	mov    %edx,(%eax)
c100375e:	e8 1f ff ff ff       	call   c1003682 <schedule>
c1003763:	83 ec 0c             	sub    $0xc,%esp
c1003766:	ff 75 f4             	pushl  -0xc(%ebp)
c1003769:	e8 f5 d5 ff ff       	call   c1000d63 <intr_restore>
c100376e:	83 c4 10             	add    $0x10,%esp
c1003771:	90                   	nop
c1003772:	c9                   	leave  
c1003773:	c3                   	ret    

c1003774 <thread_unblock>:
c1003774:	55                   	push   %ebp
c1003775:	89 e5                	mov    %esp,%ebp
c1003777:	83 ec 18             	sub    $0x18,%esp
c100377a:	c7 45 f0 84 0c 01 c1 	movl   $0xc1010c84,-0x10(%ebp)
c1003781:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003784:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003787:	e8 c4 d5 ff ff       	call   c1000d50 <intr_save>
c100378c:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100378f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003792:	8b 00                	mov    (%eax),%eax
c1003794:	83 f8 01             	cmp    $0x1,%eax
c1003797:	74 19                	je     c10037b2 <thread_unblock+0x3e>
c1003799:	68 69 9f 00 c1       	push   $0xc1009f69
c100379e:	68 58 a0 00 c1       	push   $0xc100a058
c10037a3:	68 b5 01 00 00       	push   $0x1b5
c10037a8:	68 38 9f 00 c1       	push   $0xc1009f38
c10037ad:	e8 5b cb ff ff       	call   c100030d <__PANIC>
c10037b2:	8b 45 08             	mov    0x8(%ebp),%eax
c10037b5:	8b 00                	mov    (%eax),%eax
c10037b7:	85 c0                	test   %eax,%eax
c10037b9:	74 58                	je     c1003813 <thread_unblock+0x9f>
c10037bb:	eb 24                	jmp    c10037e1 <thread_unblock+0x6d>
c10037bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037c0:	83 e8 50             	sub    $0x50,%eax
c10037c3:	39 45 08             	cmp    %eax,0x8(%ebp)
c10037c6:	75 19                	jne    c10037e1 <thread_unblock+0x6d>
c10037c8:	68 80 9f 00 c1       	push   $0xc1009f80
c10037cd:	68 58 a0 00 c1       	push   $0xc100a058
c10037d2:	68 ba 01 00 00       	push   $0x1ba
c10037d7:	68 38 9f 00 c1       	push   $0xc1009f38
c10037dc:	e8 2c cb ff ff       	call   c100030d <__PANIC>
c10037e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037e4:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10037e7:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10037ea:	8b 40 04             	mov    0x4(%eax),%eax
c10037ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10037f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037f3:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c10037f6:	75 c5                	jne    c10037bd <thread_unblock+0x49>
c10037f8:	8b 45 08             	mov    0x8(%ebp),%eax
c10037fb:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003801:	8b 45 08             	mov    0x8(%ebp),%eax
c1003804:	83 c0 50             	add    $0x50,%eax
c1003807:	83 ec 0c             	sub    $0xc,%esp
c100380a:	50                   	push   %eax
c100380b:	e8 66 f9 ff ff       	call   c1003176 <add_link>
c1003810:	83 c4 10             	add    $0x10,%esp
c1003813:	83 ec 0c             	sub    $0xc,%esp
c1003816:	ff 75 ec             	pushl  -0x14(%ebp)
c1003819:	e8 45 d5 ff ff       	call   c1000d63 <intr_restore>
c100381e:	83 c4 10             	add    $0x10,%esp
c1003821:	90                   	nop
c1003822:	c9                   	leave  
c1003823:	c3                   	ret    

c1003824 <print_taskinfo>:
c1003824:	55                   	push   %ebp
c1003825:	89 e5                	mov    %esp,%ebp
c1003827:	83 ec 08             	sub    $0x8,%esp
c100382a:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100382f:	83 ec 0c             	sub    $0xc,%esp
c1003832:	50                   	push   %eax
c1003833:	e8 09 f9 ff ff       	call   c1003141 <get_task_name>
c1003838:	83 c4 10             	add    $0x10,%esp
c100383b:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c1003841:	8b 52 0c             	mov    0xc(%edx),%edx
c1003844:	83 ec 04             	sub    $0x4,%esp
c1003847:	50                   	push   %eax
c1003848:	52                   	push   %edx
c1003849:	68 b4 9f 00 c1       	push   $0xc1009fb4
c100384e:	e8 75 0d 00 00       	call   c10045c8 <printk>
c1003853:	83 c4 10             	add    $0x10,%esp
c1003856:	83 ec 08             	sub    $0x8,%esp
c1003859:	ff 75 08             	pushl  0x8(%ebp)
c100385c:	68 d6 9f 00 c1       	push   $0xc1009fd6
c1003861:	e8 62 0d 00 00       	call   c10045c8 <printk>
c1003866:	83 c4 10             	add    $0x10,%esp
c1003869:	83 ec 0c             	sub    $0xc,%esp
c100386c:	68 e3 9f 00 c1       	push   $0xc1009fe3
c1003871:	e8 52 0d 00 00       	call   c10045c8 <printk>
c1003876:	83 c4 10             	add    $0x10,%esp
c1003879:	b8 00 00 00 00       	mov    $0x0,%eax
c100387e:	c9                   	leave  
c100387f:	c3                   	ret    

c1003880 <do_exit>:
c1003880:	55                   	push   %ebp
c1003881:	89 e5                	mov    %esp,%ebp
c1003883:	83 ec 08             	sub    $0x8,%esp
c1003886:	83 ec 0c             	sub    $0xc,%esp
c1003889:	68 ff 9f 00 c1       	push   $0xc1009fff
c100388e:	e8 35 0d 00 00       	call   c10045c8 <printk>
c1003893:	83 c4 10             	add    $0x10,%esp
c1003896:	eb fe                	jmp    c1003896 <do_exit+0x16>

c1003898 <do_execve>:
c1003898:	55                   	push   %ebp
c1003899:	89 e5                	mov    %esp,%ebp
c100389b:	b8 00 00 00 00       	mov    $0x0,%eax
c10038a0:	5d                   	pop    %ebp
c10038a1:	c3                   	ret    

c10038a2 <kernel_execve>:
c10038a2:	55                   	push   %ebp
c10038a3:	89 e5                	mov    %esp,%ebp
c10038a5:	83 ec 18             	sub    $0x18,%esp
c10038a8:	83 ec 0c             	sub    $0xc,%esp
c10038ab:	ff 75 08             	pushl  0x8(%ebp)
c10038ae:	e8 6b c8 ff ff       	call   c100011e <strlen>
c10038b3:	83 c4 10             	add    $0x10,%esp
c10038b6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10038b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10038bc:	c9                   	leave  
c10038bd:	c3                   	ret    

c10038be <user_main>:
c10038be:	55                   	push   %ebp
c10038bf:	89 e5                	mov    %esp,%ebp
c10038c1:	90                   	nop
c10038c2:	5d                   	pop    %ebp
c10038c3:	c3                   	ret    

c10038c4 <set_user_cr3>:
c10038c4:	55                   	push   %ebp
c10038c5:	89 e5                	mov    %esp,%ebp
c10038c7:	57                   	push   %edi
c10038c8:	56                   	push   %esi
c10038c9:	53                   	push   %ebx
c10038ca:	83 ec 2c             	sub    $0x2c,%esp
c10038cd:	83 ec 08             	sub    $0x8,%esp
c10038d0:	6a 02                	push   $0x2
c10038d2:	68 00 10 00 00       	push   $0x1000
c10038d7:	e8 98 f0 ff ff       	call   c1002974 <vmm_malloc>
c10038dc:	83 c4 10             	add    $0x10,%esp
c10038df:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10038e2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10038e5:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c10038ea:	ba 00 10 00 00       	mov    $0x1000,%edx
c10038ef:	8b 0b                	mov    (%ebx),%ecx
c10038f1:	89 08                	mov    %ecx,(%eax)
c10038f3:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c10038f7:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c10038fb:	8d 78 04             	lea    0x4(%eax),%edi
c10038fe:	83 e7 fc             	and    $0xfffffffc,%edi
c1003901:	29 f8                	sub    %edi,%eax
c1003903:	29 c3                	sub    %eax,%ebx
c1003905:	01 c2                	add    %eax,%edx
c1003907:	83 e2 fc             	and    $0xfffffffc,%edx
c100390a:	89 d0                	mov    %edx,%eax
c100390c:	c1 e8 02             	shr    $0x2,%eax
c100390f:	89 de                	mov    %ebx,%esi
c1003911:	89 c1                	mov    %eax,%ecx
c1003913:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003915:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003918:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100391b:	a1 00 1c 61 c1       	mov    0xc1611c00,%eax
c1003920:	83 ec 08             	sub    $0x8,%esp
c1003923:	50                   	push   %eax
c1003924:	68 0b a0 00 c1       	push   $0xc100a00b
c1003929:	e8 9a 0c 00 00       	call   c10045c8 <printk>
c100392e:	83 c4 10             	add    $0x10,%esp
c1003931:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003934:	05 00 0c 00 00       	add    $0xc00,%eax
c1003939:	8b 00                	mov    (%eax),%eax
c100393b:	83 ec 08             	sub    $0x8,%esp
c100393e:	50                   	push   %eax
c100393f:	68 1f a0 00 c1       	push   $0xc100a01f
c1003944:	e8 7f 0c 00 00       	call   c10045c8 <printk>
c1003949:	83 c4 10             	add    $0x10,%esp
c100394c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100394f:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1003952:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003955:	c1 e8 16             	shr    $0x16,%eax
c1003958:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100395f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003962:	01 d0                	add    %edx,%eax
c1003964:	8b 00                	mov    (%eax),%eax
c1003966:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100396b:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1003970:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1003973:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003976:	c1 e8 0c             	shr    $0xc,%eax
c1003979:	25 ff 03 00 00       	and    $0x3ff,%eax
c100397e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003985:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1003988:	01 d0                	add    %edx,%eax
c100398a:	8b 00                	mov    (%eax),%eax
c100398c:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003991:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1003994:	83 ec 08             	sub    $0x8,%esp
c1003997:	ff 75 d4             	pushl  -0x2c(%ebp)
c100399a:	68 2f a0 00 c1       	push   $0xc100a02f
c100399f:	e8 24 0c 00 00       	call   c10045c8 <printk>
c10039a4:	83 c4 10             	add    $0x10,%esp
c10039a7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10039aa:	8d 65 f4             	lea    -0xc(%ebp),%esp
c10039ad:	5b                   	pop    %ebx
c10039ae:	5e                   	pop    %esi
c10039af:	5f                   	pop    %edi
c10039b0:	5d                   	pop    %ebp
c10039b1:	c3                   	ret    

c10039b2 <user_task_init>:
c10039b2:	55                   	push   %ebp
c10039b3:	89 e5                	mov    %esp,%ebp
c10039b5:	53                   	push   %ebx
c10039b6:	83 ec 14             	sub    $0x14,%esp
c10039b9:	83 ec 0c             	sub    $0xc,%esp
c10039bc:	6a 00                	push   $0x0
c10039be:	e8 62 f9 ff ff       	call   c1003325 <alloc_task>
c10039c3:	83 c4 10             	add    $0x10,%esp
c10039c6:	a3 0c 30 a1 c1       	mov    %eax,0xc1a1300c
c10039cb:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10039d0:	85 c0                	test   %eax,%eax
c10039d2:	75 10                	jne    c10039e4 <user_task_init+0x32>
c10039d4:	83 ec 0c             	sub    $0xc,%esp
c10039d7:	68 0c 9f 00 c1       	push   $0xc1009f0c
c10039dc:	e8 e7 0b 00 00       	call   c10045c8 <printk>
c10039e1:	83 c4 10             	add    $0x10,%esp
c10039e4:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10039e9:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c10039ef:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10039f4:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c10039fb:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a00:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1003a07:	8b 1d 0c 30 a1 c1    	mov    0xc1a1300c,%ebx
c1003a0d:	e8 80 f6 ff ff       	call   c1003092 <alloc_pid>
c1003a12:	89 43 0c             	mov    %eax,0xc(%ebx)
c1003a15:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a1a:	83 ec 08             	sub    $0x8,%esp
c1003a1d:	68 3d a0 00 c1       	push   $0xc100a03d
c1003a22:	50                   	push   %eax
c1003a23:	e8 e4 f6 ff ff       	call   c100310c <set_task_name>
c1003a28:	83 c4 10             	add    $0x10,%esp
c1003a2b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a30:	c7 40 24 00 00 00 f8 	movl   $0xf8000000,0x24(%eax)
c1003a37:	8b 1d 0c 30 a1 c1    	mov    0xc1a1300c,%ebx
c1003a3d:	e8 82 fe ff ff       	call   c10038c4 <set_user_cr3>
c1003a42:	89 43 28             	mov    %eax,0x28(%ebx)
c1003a45:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a4a:	8d 90 b4 0f 00 00    	lea    0xfb4(%eax),%edx
c1003a50:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a55:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003a58:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a5d:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003a60:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1003a67:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a6c:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003a6f:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1003a76:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a7b:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003a7e:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1003a85:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a8a:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003a8d:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c1003a94:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a99:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003a9c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003aa2:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003aa7:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003aaa:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c1003ab1:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ab6:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003ab9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1003ac0:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ac5:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003ac8:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1003acf:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ad4:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003ad7:	66 c7 40 3c 1b 00    	movw   $0x1b,0x3c(%eax)
c1003add:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ae2:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003ae5:	66 c7 40 48 23 00    	movw   $0x23,0x48(%eax)
c1003aeb:	8b 15 0c 30 a1 c1    	mov    0xc1a1300c,%edx
c1003af1:	8b 52 2c             	mov    0x2c(%edx),%edx
c1003af4:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c1003af8:	66 89 42 24          	mov    %ax,0x24(%edx)
c1003afc:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b01:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b04:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1003b08:	66 89 50 28          	mov    %dx,0x28(%eax)
c1003b0c:	8b 15 0c 30 a1 c1    	mov    0xc1a1300c,%edx
c1003b12:	8b 52 2c             	mov    0x2c(%edx),%edx
c1003b15:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1003b19:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1003b1d:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b22:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b25:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1003b2b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b30:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b33:	8b 55 08             	mov    0x8(%ebp),%edx
c1003b36:	89 50 38             	mov    %edx,0x38(%eax)
c1003b39:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b3e:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b41:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1003b48:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b4d:	89 c2                	mov    %eax,%edx
c1003b4f:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b54:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b57:	81 c2 b4 0f 00 00    	add    $0xfb4,%edx
c1003b5d:	89 50 44             	mov    %edx,0x44(%eax)
c1003b60:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b65:	8b 50 2c             	mov    0x2c(%eax),%edx
c1003b68:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b6d:	8b 52 38             	mov    0x38(%edx),%edx
c1003b70:	89 50 30             	mov    %edx,0x30(%eax)
c1003b73:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b78:	8b 50 2c             	mov    0x2c(%eax),%edx
c1003b7b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b80:	89 50 34             	mov    %edx,0x34(%eax)
c1003b83:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b88:	8b 50 2c             	mov    0x2c(%eax),%edx
c1003b8b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b90:	8b 52 10             	mov    0x10(%edx),%edx
c1003b93:	89 50 38             	mov    %edx,0x38(%eax)
c1003b96:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b9b:	8b 50 2c             	mov    0x2c(%eax),%edx
c1003b9e:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ba3:	8b 52 14             	mov    0x14(%edx),%edx
c1003ba6:	89 50 40             	mov    %edx,0x40(%eax)
c1003ba9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003bb0:	eb 16                	jmp    c1003bc8 <user_task_init+0x216>
c1003bb2:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003bb7:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003bba:	83 c2 18             	add    $0x18,%edx
c1003bbd:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1003bc4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003bc8:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1003bcc:	7e e4                	jle    c1003bb2 <user_task_init+0x200>
c1003bce:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003bd3:	83 c0 50             	add    $0x50,%eax
c1003bd6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003bd9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003bdc:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003bdf:	89 50 04             	mov    %edx,0x4(%eax)
c1003be2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003be5:	8b 50 04             	mov    0x4(%eax),%edx
c1003be8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003beb:	89 10                	mov    %edx,(%eax)
c1003bed:	90                   	nop
c1003bee:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003bf3:	83 ec 0c             	sub    $0xc,%esp
c1003bf6:	50                   	push   %eax
c1003bf7:	e8 fd f5 ff ff       	call   c10031f9 <add_pid_hash>
c1003bfc:	83 c4 10             	add    $0x10,%esp
c1003bff:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c04:	83 ec 0c             	sub    $0xc,%esp
c1003c07:	50                   	push   %eax
c1003c08:	e8 91 f9 ff ff       	call   c100359e <wakeup_task>
c1003c0d:	83 c4 10             	add    $0x10,%esp
c1003c10:	a1 8c 0c 01 c1       	mov    0xc1010c8c,%eax
c1003c15:	83 c0 01             	add    $0x1,%eax
c1003c18:	a3 8c 0c 01 c1       	mov    %eax,0xc1010c8c
c1003c1d:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c22:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1003c27:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c2c:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003c2f:	89 c4                	mov    %eax,%esp
c1003c31:	e9 55 d1 ff ff       	jmp    c1000d8b <__trapret>
c1003c36:	90                   	nop
c1003c37:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1003c3a:	c9                   	leave  
c1003c3b:	c3                   	ret    

c1003c3c <kernel_thread_entry>:
c1003c3c:	fb                   	sti    
c1003c3d:	52                   	push   %edx
c1003c3e:	ff d3                	call   *%ebx
c1003c40:	c3                   	ret    

c1003c41 <switch_to>:
c1003c41:	8b 44 24 04          	mov    0x4(%esp),%eax
c1003c45:	8f 00                	popl   (%eax)
c1003c47:	89 60 04             	mov    %esp,0x4(%eax)
c1003c4a:	89 58 08             	mov    %ebx,0x8(%eax)
c1003c4d:	89 48 0c             	mov    %ecx,0xc(%eax)
c1003c50:	89 50 10             	mov    %edx,0x10(%eax)
c1003c53:	89 70 14             	mov    %esi,0x14(%eax)
c1003c56:	89 78 18             	mov    %edi,0x18(%eax)
c1003c59:	89 68 1c             	mov    %ebp,0x1c(%eax)
c1003c5c:	8b 44 24 04          	mov    0x4(%esp),%eax
c1003c60:	8b 68 1c             	mov    0x1c(%eax),%ebp
c1003c63:	8b 78 18             	mov    0x18(%eax),%edi
c1003c66:	8b 70 14             	mov    0x14(%eax),%esi
c1003c69:	8b 50 10             	mov    0x10(%eax),%edx
c1003c6c:	8b 48 0c             	mov    0xc(%eax),%ecx
c1003c6f:	8b 58 08             	mov    0x8(%eax),%ebx
c1003c72:	8b 60 04             	mov    0x4(%eax),%esp
c1003c75:	ff 30                	pushl  (%eax)
c1003c77:	c3                   	ret    

c1003c78 <pic_setmask>:
c1003c78:	55                   	push   %ebp
c1003c79:	89 e5                	mov    %esp,%ebp
c1003c7b:	83 ec 28             	sub    $0x28,%esp
c1003c7e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003c81:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
c1003c85:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1003c89:	66 a3 04 db 00 c1    	mov    %ax,0xc100db04
c1003c8f:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1003c93:	88 45 f7             	mov    %al,-0x9(%ebp)
c1003c96:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1003c9a:	66 c1 e8 08          	shr    $0x8,%ax
c1003c9e:	88 45 f6             	mov    %al,-0xa(%ebp)
c1003ca1:	0f b6 05 a5 0c 01 c1 	movzbl 0xc1010ca5,%eax
c1003ca8:	84 c0                	test   %al,%al
c1003caa:	74 27                	je     c1003cd3 <pic_setmask+0x5b>
c1003cac:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1003cb0:	83 ec 08             	sub    $0x8,%esp
c1003cb3:	50                   	push   %eax
c1003cb4:	6a 21                	push   $0x21
c1003cb6:	e8 81 c3 ff ff       	call   c100003c <outb>
c1003cbb:	83 c4 10             	add    $0x10,%esp
c1003cbe:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1003cc2:	83 ec 08             	sub    $0x8,%esp
c1003cc5:	50                   	push   %eax
c1003cc6:	68 a1 00 00 00       	push   $0xa1
c1003ccb:	e8 6c c3 ff ff       	call   c100003c <outb>
c1003cd0:	83 c4 10             	add    $0x10,%esp
c1003cd3:	90                   	nop
c1003cd4:	c9                   	leave  
c1003cd5:	c3                   	ret    

c1003cd6 <pic_enable>:
c1003cd6:	55                   	push   %ebp
c1003cd7:	89 e5                	mov    %esp,%ebp
c1003cd9:	83 ec 08             	sub    $0x8,%esp
c1003cdc:	8b 45 08             	mov    0x8(%ebp),%eax
c1003cdf:	ba 01 00 00 00       	mov    $0x1,%edx
c1003ce4:	89 c1                	mov    %eax,%ecx
c1003ce6:	d3 e2                	shl    %cl,%edx
c1003ce8:	89 d0                	mov    %edx,%eax
c1003cea:	f7 d0                	not    %eax
c1003cec:	89 c2                	mov    %eax,%edx
c1003cee:	0f b7 05 04 db 00 c1 	movzwl 0xc100db04,%eax
c1003cf5:	21 d0                	and    %edx,%eax
c1003cf7:	0f b7 c0             	movzwl %ax,%eax
c1003cfa:	83 ec 0c             	sub    $0xc,%esp
c1003cfd:	50                   	push   %eax
c1003cfe:	e8 75 ff ff ff       	call   c1003c78 <pic_setmask>
c1003d03:	83 c4 10             	add    $0x10,%esp
c1003d06:	90                   	nop
c1003d07:	c9                   	leave  
c1003d08:	c3                   	ret    

c1003d09 <pic_init>:
c1003d09:	55                   	push   %ebp
c1003d0a:	89 e5                	mov    %esp,%ebp
c1003d0c:	83 ec 08             	sub    $0x8,%esp
c1003d0f:	c6 05 a5 0c 01 c1 01 	movb   $0x1,0xc1010ca5
c1003d16:	83 ec 08             	sub    $0x8,%esp
c1003d19:	68 ff 00 00 00       	push   $0xff
c1003d1e:	6a 21                	push   $0x21
c1003d20:	e8 17 c3 ff ff       	call   c100003c <outb>
c1003d25:	83 c4 10             	add    $0x10,%esp
c1003d28:	83 ec 08             	sub    $0x8,%esp
c1003d2b:	68 ff 00 00 00       	push   $0xff
c1003d30:	68 a1 00 00 00       	push   $0xa1
c1003d35:	e8 02 c3 ff ff       	call   c100003c <outb>
c1003d3a:	83 c4 10             	add    $0x10,%esp
c1003d3d:	83 ec 08             	sub    $0x8,%esp
c1003d40:	6a 11                	push   $0x11
c1003d42:	6a 20                	push   $0x20
c1003d44:	e8 f3 c2 ff ff       	call   c100003c <outb>
c1003d49:	83 c4 10             	add    $0x10,%esp
c1003d4c:	83 ec 08             	sub    $0x8,%esp
c1003d4f:	6a 11                	push   $0x11
c1003d51:	68 a0 00 00 00       	push   $0xa0
c1003d56:	e8 e1 c2 ff ff       	call   c100003c <outb>
c1003d5b:	83 c4 10             	add    $0x10,%esp
c1003d5e:	83 ec 08             	sub    $0x8,%esp
c1003d61:	6a 20                	push   $0x20
c1003d63:	6a 21                	push   $0x21
c1003d65:	e8 d2 c2 ff ff       	call   c100003c <outb>
c1003d6a:	83 c4 10             	add    $0x10,%esp
c1003d6d:	83 ec 08             	sub    $0x8,%esp
c1003d70:	6a 28                	push   $0x28
c1003d72:	68 a1 00 00 00       	push   $0xa1
c1003d77:	e8 c0 c2 ff ff       	call   c100003c <outb>
c1003d7c:	83 c4 10             	add    $0x10,%esp
c1003d7f:	83 ec 08             	sub    $0x8,%esp
c1003d82:	6a 04                	push   $0x4
c1003d84:	6a 21                	push   $0x21
c1003d86:	e8 b1 c2 ff ff       	call   c100003c <outb>
c1003d8b:	83 c4 10             	add    $0x10,%esp
c1003d8e:	83 ec 08             	sub    $0x8,%esp
c1003d91:	6a 02                	push   $0x2
c1003d93:	68 a1 00 00 00       	push   $0xa1
c1003d98:	e8 9f c2 ff ff       	call   c100003c <outb>
c1003d9d:	83 c4 10             	add    $0x10,%esp
c1003da0:	83 ec 08             	sub    $0x8,%esp
c1003da3:	6a 03                	push   $0x3
c1003da5:	6a 21                	push   $0x21
c1003da7:	e8 90 c2 ff ff       	call   c100003c <outb>
c1003dac:	83 c4 10             	add    $0x10,%esp
c1003daf:	83 ec 08             	sub    $0x8,%esp
c1003db2:	6a 03                	push   $0x3
c1003db4:	68 a1 00 00 00       	push   $0xa1
c1003db9:	e8 7e c2 ff ff       	call   c100003c <outb>
c1003dbe:	83 c4 10             	add    $0x10,%esp
c1003dc1:	83 ec 08             	sub    $0x8,%esp
c1003dc4:	6a 68                	push   $0x68
c1003dc6:	6a 20                	push   $0x20
c1003dc8:	e8 6f c2 ff ff       	call   c100003c <outb>
c1003dcd:	83 c4 10             	add    $0x10,%esp
c1003dd0:	83 ec 08             	sub    $0x8,%esp
c1003dd3:	6a 68                	push   $0x68
c1003dd5:	68 a0 00 00 00       	push   $0xa0
c1003dda:	e8 5d c2 ff ff       	call   c100003c <outb>
c1003ddf:	83 c4 10             	add    $0x10,%esp
c1003de2:	83 ec 08             	sub    $0x8,%esp
c1003de5:	6a 0a                	push   $0xa
c1003de7:	6a 20                	push   $0x20
c1003de9:	e8 4e c2 ff ff       	call   c100003c <outb>
c1003dee:	83 c4 10             	add    $0x10,%esp
c1003df1:	83 ec 08             	sub    $0x8,%esp
c1003df4:	6a 0a                	push   $0xa
c1003df6:	68 a0 00 00 00       	push   $0xa0
c1003dfb:	e8 3c c2 ff ff       	call   c100003c <outb>
c1003e00:	83 c4 10             	add    $0x10,%esp
c1003e03:	0f b7 05 04 db 00 c1 	movzwl 0xc100db04,%eax
c1003e0a:	66 83 f8 ff          	cmp    $0xffff,%ax
c1003e0e:	74 16                	je     c1003e26 <pic_init+0x11d>
c1003e10:	0f b7 05 04 db 00 c1 	movzwl 0xc100db04,%eax
c1003e17:	0f b7 c0             	movzwl %ax,%eax
c1003e1a:	83 ec 0c             	sub    $0xc,%esp
c1003e1d:	50                   	push   %eax
c1003e1e:	e8 55 fe ff ff       	call   c1003c78 <pic_setmask>
c1003e23:	83 c4 10             	add    $0x10,%esp
c1003e26:	90                   	nop
c1003e27:	c9                   	leave  
c1003e28:	c3                   	ret    

c1003e29 <delay>:
c1003e29:	55                   	push   %ebp
c1003e2a:	89 e5                	mov    %esp,%ebp
c1003e2c:	83 ec 08             	sub    $0x8,%esp
c1003e2f:	83 ec 0c             	sub    $0xc,%esp
c1003e32:	68 84 00 00 00       	push   $0x84
c1003e37:	e8 c4 c1 ff ff       	call   c1000000 <inb>
c1003e3c:	83 c4 10             	add    $0x10,%esp
c1003e3f:	83 ec 0c             	sub    $0xc,%esp
c1003e42:	68 84 00 00 00       	push   $0x84
c1003e47:	e8 b4 c1 ff ff       	call   c1000000 <inb>
c1003e4c:	83 c4 10             	add    $0x10,%esp
c1003e4f:	83 ec 0c             	sub    $0xc,%esp
c1003e52:	68 84 00 00 00       	push   $0x84
c1003e57:	e8 a4 c1 ff ff       	call   c1000000 <inb>
c1003e5c:	83 c4 10             	add    $0x10,%esp
c1003e5f:	83 ec 0c             	sub    $0xc,%esp
c1003e62:	68 84 00 00 00       	push   $0x84
c1003e67:	e8 94 c1 ff ff       	call   c1000000 <inb>
c1003e6c:	83 c4 10             	add    $0x10,%esp
c1003e6f:	90                   	nop
c1003e70:	c9                   	leave  
c1003e71:	c3                   	ret    

c1003e72 <serial_init>:
c1003e72:	55                   	push   %ebp
c1003e73:	89 e5                	mov    %esp,%ebp
c1003e75:	83 ec 08             	sub    $0x8,%esp
c1003e78:	83 ec 08             	sub    $0x8,%esp
c1003e7b:	6a 00                	push   $0x0
c1003e7d:	68 fa 03 00 00       	push   $0x3fa
c1003e82:	e8 b5 c1 ff ff       	call   c100003c <outb>
c1003e87:	83 c4 10             	add    $0x10,%esp
c1003e8a:	83 ec 08             	sub    $0x8,%esp
c1003e8d:	68 80 00 00 00       	push   $0x80
c1003e92:	68 fb 03 00 00       	push   $0x3fb
c1003e97:	e8 a0 c1 ff ff       	call   c100003c <outb>
c1003e9c:	83 c4 10             	add    $0x10,%esp
c1003e9f:	83 ec 08             	sub    $0x8,%esp
c1003ea2:	6a 0c                	push   $0xc
c1003ea4:	68 f8 03 00 00       	push   $0x3f8
c1003ea9:	e8 8e c1 ff ff       	call   c100003c <outb>
c1003eae:	83 c4 10             	add    $0x10,%esp
c1003eb1:	83 ec 08             	sub    $0x8,%esp
c1003eb4:	6a 00                	push   $0x0
c1003eb6:	68 f9 03 00 00       	push   $0x3f9
c1003ebb:	e8 7c c1 ff ff       	call   c100003c <outb>
c1003ec0:	83 c4 10             	add    $0x10,%esp
c1003ec3:	83 ec 08             	sub    $0x8,%esp
c1003ec6:	6a 03                	push   $0x3
c1003ec8:	68 fb 03 00 00       	push   $0x3fb
c1003ecd:	e8 6a c1 ff ff       	call   c100003c <outb>
c1003ed2:	83 c4 10             	add    $0x10,%esp
c1003ed5:	83 ec 08             	sub    $0x8,%esp
c1003ed8:	6a 00                	push   $0x0
c1003eda:	68 fc 03 00 00       	push   $0x3fc
c1003edf:	e8 58 c1 ff ff       	call   c100003c <outb>
c1003ee4:	83 c4 10             	add    $0x10,%esp
c1003ee7:	83 ec 08             	sub    $0x8,%esp
c1003eea:	6a 01                	push   $0x1
c1003eec:	68 f9 03 00 00       	push   $0x3f9
c1003ef1:	e8 46 c1 ff ff       	call   c100003c <outb>
c1003ef6:	83 c4 10             	add    $0x10,%esp
c1003ef9:	83 ec 0c             	sub    $0xc,%esp
c1003efc:	68 fd 03 00 00       	push   $0x3fd
c1003f01:	e8 fa c0 ff ff       	call   c1000000 <inb>
c1003f06:	83 c4 10             	add    $0x10,%esp
c1003f09:	3c ff                	cmp    $0xff,%al
c1003f0b:	0f 95 c0             	setne  %al
c1003f0e:	a2 a6 0c 01 c1       	mov    %al,0xc1010ca6
c1003f13:	83 ec 0c             	sub    $0xc,%esp
c1003f16:	68 fa 03 00 00       	push   $0x3fa
c1003f1b:	e8 e0 c0 ff ff       	call   c1000000 <inb>
c1003f20:	83 c4 10             	add    $0x10,%esp
c1003f23:	83 ec 0c             	sub    $0xc,%esp
c1003f26:	68 f8 03 00 00       	push   $0x3f8
c1003f2b:	e8 d0 c0 ff ff       	call   c1000000 <inb>
c1003f30:	83 c4 10             	add    $0x10,%esp
c1003f33:	0f b6 05 a6 0c 01 c1 	movzbl 0xc1010ca6,%eax
c1003f3a:	84 c0                	test   %al,%al
c1003f3c:	74 1d                	je     c1003f5b <serial_init+0xe9>
c1003f3e:	83 ec 0c             	sub    $0xc,%esp
c1003f41:	68 67 a0 00 c1       	push   $0xc100a067
c1003f46:	e8 7d 06 00 00       	call   c10045c8 <printk>
c1003f4b:	83 c4 10             	add    $0x10,%esp
c1003f4e:	83 ec 0c             	sub    $0xc,%esp
c1003f51:	6a 04                	push   $0x4
c1003f53:	e8 7e fd ff ff       	call   c1003cd6 <pic_enable>
c1003f58:	83 c4 10             	add    $0x10,%esp
c1003f5b:	90                   	nop
c1003f5c:	c9                   	leave  
c1003f5d:	c3                   	ret    

c1003f5e <lpt_putc_sub>:
c1003f5e:	55                   	push   %ebp
c1003f5f:	89 e5                	mov    %esp,%ebp
c1003f61:	83 ec 18             	sub    $0x18,%esp
c1003f64:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003f6b:	eb 09                	jmp    c1003f76 <lpt_putc_sub+0x18>
c1003f6d:	e8 b7 fe ff ff       	call   c1003e29 <delay>
c1003f72:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003f76:	83 ec 0c             	sub    $0xc,%esp
c1003f79:	68 79 03 00 00       	push   $0x379
c1003f7e:	e8 7d c0 ff ff       	call   c1000000 <inb>
c1003f83:	83 c4 10             	add    $0x10,%esp
c1003f86:	84 c0                	test   %al,%al
c1003f88:	78 09                	js     c1003f93 <lpt_putc_sub+0x35>
c1003f8a:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c1003f91:	7e da                	jle    c1003f6d <lpt_putc_sub+0xf>
c1003f93:	8b 45 08             	mov    0x8(%ebp),%eax
c1003f96:	0f b6 c0             	movzbl %al,%eax
c1003f99:	83 ec 08             	sub    $0x8,%esp
c1003f9c:	50                   	push   %eax
c1003f9d:	68 78 03 00 00       	push   $0x378
c1003fa2:	e8 95 c0 ff ff       	call   c100003c <outb>
c1003fa7:	83 c4 10             	add    $0x10,%esp
c1003faa:	83 ec 08             	sub    $0x8,%esp
c1003fad:	6a 0d                	push   $0xd
c1003faf:	68 7a 03 00 00       	push   $0x37a
c1003fb4:	e8 83 c0 ff ff       	call   c100003c <outb>
c1003fb9:	83 c4 10             	add    $0x10,%esp
c1003fbc:	83 ec 08             	sub    $0x8,%esp
c1003fbf:	6a 08                	push   $0x8
c1003fc1:	68 7a 03 00 00       	push   $0x37a
c1003fc6:	e8 71 c0 ff ff       	call   c100003c <outb>
c1003fcb:	83 c4 10             	add    $0x10,%esp
c1003fce:	90                   	nop
c1003fcf:	c9                   	leave  
c1003fd0:	c3                   	ret    

c1003fd1 <lpt_putc>:
c1003fd1:	55                   	push   %ebp
c1003fd2:	89 e5                	mov    %esp,%ebp
c1003fd4:	83 ec 08             	sub    $0x8,%esp
c1003fd7:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1003fdb:	74 10                	je     c1003fed <lpt_putc+0x1c>
c1003fdd:	83 ec 0c             	sub    $0xc,%esp
c1003fe0:	ff 75 08             	pushl  0x8(%ebp)
c1003fe3:	e8 76 ff ff ff       	call   c1003f5e <lpt_putc_sub>
c1003fe8:	83 c4 10             	add    $0x10,%esp
c1003feb:	eb 27                	jmp    c1004014 <lpt_putc+0x43>
c1003fed:	83 ec 0c             	sub    $0xc,%esp
c1003ff0:	6a 08                	push   $0x8
c1003ff2:	e8 67 ff ff ff       	call   c1003f5e <lpt_putc_sub>
c1003ff7:	83 c4 10             	add    $0x10,%esp
c1003ffa:	83 ec 0c             	sub    $0xc,%esp
c1003ffd:	6a 20                	push   $0x20
c1003fff:	e8 5a ff ff ff       	call   c1003f5e <lpt_putc_sub>
c1004004:	83 c4 10             	add    $0x10,%esp
c1004007:	83 ec 0c             	sub    $0xc,%esp
c100400a:	6a 08                	push   $0x8
c100400c:	e8 4d ff ff ff       	call   c1003f5e <lpt_putc_sub>
c1004011:	83 c4 10             	add    $0x10,%esp
c1004014:	90                   	nop
c1004015:	c9                   	leave  
c1004016:	c3                   	ret    

c1004017 <cons_intr>:
c1004017:	55                   	push   %ebp
c1004018:	89 e5                	mov    %esp,%ebp
c100401a:	83 ec 18             	sub    $0x18,%esp
c100401d:	eb 3b                	jmp    c100405a <cons_intr+0x43>
c100401f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1004023:	74 35                	je     c100405a <cons_intr+0x43>
c1004025:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c100402a:	8d 50 01             	lea    0x1(%eax),%edx
c100402d:	89 15 24 32 a1 c1    	mov    %edx,0xc1a13224
c1004033:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004036:	88 90 20 30 a1 c1    	mov    %dl,-0x3e5ecfe0(%eax)
c100403c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100403f:	a2 6c ec 00 c1       	mov    %al,0xc100ec6c
c1004044:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c1004049:	3d 00 02 00 00       	cmp    $0x200,%eax
c100404e:	75 0a                	jne    c100405a <cons_intr+0x43>
c1004050:	c7 05 24 32 a1 c1 00 	movl   $0x0,0xc1a13224
c1004057:	00 00 00 
c100405a:	8b 45 08             	mov    0x8(%ebp),%eax
c100405d:	ff d0                	call   *%eax
c100405f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004062:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c1004066:	75 b7                	jne    c100401f <cons_intr+0x8>
c1004068:	90                   	nop
c1004069:	90                   	nop
c100406a:	c9                   	leave  
c100406b:	c3                   	ret    

c100406c <serial_proc_data>:
c100406c:	55                   	push   %ebp
c100406d:	89 e5                	mov    %esp,%ebp
c100406f:	83 ec 18             	sub    $0x18,%esp
c1004072:	83 ec 0c             	sub    $0xc,%esp
c1004075:	68 fd 03 00 00       	push   $0x3fd
c100407a:	e8 81 bf ff ff       	call   c1000000 <inb>
c100407f:	83 c4 10             	add    $0x10,%esp
c1004082:	0f b6 c0             	movzbl %al,%eax
c1004085:	83 e0 01             	and    $0x1,%eax
c1004088:	85 c0                	test   %eax,%eax
c100408a:	75 07                	jne    c1004093 <serial_proc_data+0x27>
c100408c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1004091:	eb 26                	jmp    c10040b9 <serial_proc_data+0x4d>
c1004093:	83 ec 0c             	sub    $0xc,%esp
c1004096:	68 f8 03 00 00       	push   $0x3f8
c100409b:	e8 60 bf ff ff       	call   c1000000 <inb>
c10040a0:	83 c4 10             	add    $0x10,%esp
c10040a3:	0f b6 c0             	movzbl %al,%eax
c10040a6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10040a9:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
c10040ad:	75 07                	jne    c10040b6 <serial_proc_data+0x4a>
c10040af:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
c10040b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10040b9:	c9                   	leave  
c10040ba:	c3                   	ret    

c10040bb <serial_intr>:
c10040bb:	55                   	push   %ebp
c10040bc:	89 e5                	mov    %esp,%ebp
c10040be:	83 ec 08             	sub    $0x8,%esp
c10040c1:	0f b6 05 a6 0c 01 c1 	movzbl 0xc1010ca6,%eax
c10040c8:	84 c0                	test   %al,%al
c10040ca:	74 10                	je     c10040dc <serial_intr+0x21>
c10040cc:	83 ec 0c             	sub    $0xc,%esp
c10040cf:	68 6c 40 00 c1       	push   $0xc100406c
c10040d4:	e8 3e ff ff ff       	call   c1004017 <cons_intr>
c10040d9:	83 c4 10             	add    $0x10,%esp
c10040dc:	90                   	nop
c10040dd:	c9                   	leave  
c10040de:	c3                   	ret    

c10040df <serial_putc_sub>:
c10040df:	55                   	push   %ebp
c10040e0:	89 e5                	mov    %esp,%ebp
c10040e2:	83 ec 18             	sub    $0x18,%esp
c10040e5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10040ec:	eb 09                	jmp    c10040f7 <serial_putc_sub+0x18>
c10040ee:	e8 36 fd ff ff       	call   c1003e29 <delay>
c10040f3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10040f7:	83 ec 0c             	sub    $0xc,%esp
c10040fa:	68 fd 03 00 00       	push   $0x3fd
c10040ff:	e8 fc be ff ff       	call   c1000000 <inb>
c1004104:	83 c4 10             	add    $0x10,%esp
c1004107:	0f b6 c0             	movzbl %al,%eax
c100410a:	83 e0 20             	and    $0x20,%eax
c100410d:	85 c0                	test   %eax,%eax
c100410f:	75 09                	jne    c100411a <serial_putc_sub+0x3b>
c1004111:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c1004118:	7e d4                	jle    c10040ee <serial_putc_sub+0xf>
c100411a:	8b 45 08             	mov    0x8(%ebp),%eax
c100411d:	0f b6 c0             	movzbl %al,%eax
c1004120:	83 ec 08             	sub    $0x8,%esp
c1004123:	50                   	push   %eax
c1004124:	68 f8 03 00 00       	push   $0x3f8
c1004129:	e8 0e bf ff ff       	call   c100003c <outb>
c100412e:	83 c4 10             	add    $0x10,%esp
c1004131:	90                   	nop
c1004132:	c9                   	leave  
c1004133:	c3                   	ret    

c1004134 <serial_putc>:
c1004134:	55                   	push   %ebp
c1004135:	89 e5                	mov    %esp,%ebp
c1004137:	83 ec 08             	sub    $0x8,%esp
c100413a:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c100413e:	74 10                	je     c1004150 <serial_putc+0x1c>
c1004140:	83 ec 0c             	sub    $0xc,%esp
c1004143:	ff 75 08             	pushl  0x8(%ebp)
c1004146:	e8 94 ff ff ff       	call   c10040df <serial_putc_sub>
c100414b:	83 c4 10             	add    $0x10,%esp
c100414e:	eb 27                	jmp    c1004177 <serial_putc+0x43>
c1004150:	83 ec 0c             	sub    $0xc,%esp
c1004153:	6a 08                	push   $0x8
c1004155:	e8 85 ff ff ff       	call   c10040df <serial_putc_sub>
c100415a:	83 c4 10             	add    $0x10,%esp
c100415d:	83 ec 0c             	sub    $0xc,%esp
c1004160:	6a 20                	push   $0x20
c1004162:	e8 78 ff ff ff       	call   c10040df <serial_putc_sub>
c1004167:	83 c4 10             	add    $0x10,%esp
c100416a:	83 ec 0c             	sub    $0xc,%esp
c100416d:	6a 08                	push   $0x8
c100416f:	e8 6b ff ff ff       	call   c10040df <serial_putc_sub>
c1004174:	83 c4 10             	add    $0x10,%esp
c1004177:	90                   	nop
c1004178:	c9                   	leave  
c1004179:	c3                   	ret    

c100417a <timer_init>:
c100417a:	55                   	push   %ebp
c100417b:	89 e5                	mov    %esp,%ebp
c100417d:	83 ec 18             	sub    $0x18,%esp
c1004180:	b8 dc 34 12 00       	mov    $0x1234dc,%eax
c1004185:	ba 00 00 00 00       	mov    $0x0,%edx
c100418a:	f7 75 08             	divl   0x8(%ebp)
c100418d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004190:	83 ec 08             	sub    $0x8,%esp
c1004193:	6a 36                	push   $0x36
c1004195:	6a 43                	push   $0x43
c1004197:	e8 a0 be ff ff       	call   c100003c <outb>
c100419c:	83 c4 10             	add    $0x10,%esp
c100419f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041a2:	88 45 f3             	mov    %al,-0xd(%ebp)
c10041a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041a8:	c1 e8 08             	shr    $0x8,%eax
c10041ab:	88 45 f2             	mov    %al,-0xe(%ebp)
c10041ae:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c10041b2:	83 ec 08             	sub    $0x8,%esp
c10041b5:	50                   	push   %eax
c10041b6:	6a 40                	push   $0x40
c10041b8:	e8 7f be ff ff       	call   c100003c <outb>
c10041bd:	83 c4 10             	add    $0x10,%esp
c10041c0:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
c10041c4:	83 ec 08             	sub    $0x8,%esp
c10041c7:	50                   	push   %eax
c10041c8:	6a 40                	push   $0x40
c10041ca:	e8 6d be ff ff       	call   c100003c <outb>
c10041cf:	83 c4 10             	add    $0x10,%esp
c10041d2:	c7 05 2c 32 a1 c1 00 	movl   $0x0,0xc1a1322c
c10041d9:	00 00 00 
c10041dc:	c7 05 28 32 a1 c1 00 	movl   $0x0,0xc1a13228
c10041e3:	00 00 00 
c10041e6:	83 ec 0c             	sub    $0xc,%esp
c10041e9:	6a 00                	push   $0x0
c10041eb:	e8 e6 fa ff ff       	call   c1003cd6 <pic_enable>
c10041f0:	83 c4 10             	add    $0x10,%esp
c10041f3:	90                   	nop
c10041f4:	c9                   	leave  
c10041f5:	c3                   	ret    

c10041f6 <print_cursor>:
c10041f6:	55                   	push   %ebp
c10041f7:	89 e5                	mov    %esp,%ebp
c10041f9:	83 ec 28             	sub    $0x28,%esp
c10041fc:	8b 55 08             	mov    0x8(%ebp),%edx
c10041ff:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004202:	88 55 e4             	mov    %dl,-0x1c(%ebp)
c1004205:	88 45 e0             	mov    %al,-0x20(%ebp)
c1004208:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
c100420c:	89 d0                	mov    %edx,%eax
c100420e:	c1 e0 02             	shl    $0x2,%eax
c1004211:	01 d0                	add    %edx,%eax
c1004213:	c1 e0 04             	shl    $0x4,%eax
c1004216:	89 c2                	mov    %eax,%edx
c1004218:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c100421c:	01 d0                	add    %edx,%eax
c100421e:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c1004222:	83 ec 08             	sub    $0x8,%esp
c1004225:	6a 0e                	push   $0xe
c1004227:	68 d4 03 00 00       	push   $0x3d4
c100422c:	e8 0b be ff ff       	call   c100003c <outb>
c1004231:	83 c4 10             	add    $0x10,%esp
c1004234:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004238:	66 c1 e8 08          	shr    $0x8,%ax
c100423c:	0f b6 c0             	movzbl %al,%eax
c100423f:	83 ec 08             	sub    $0x8,%esp
c1004242:	50                   	push   %eax
c1004243:	68 d5 03 00 00       	push   $0x3d5
c1004248:	e8 ef bd ff ff       	call   c100003c <outb>
c100424d:	83 c4 10             	add    $0x10,%esp
c1004250:	83 ec 08             	sub    $0x8,%esp
c1004253:	6a 0f                	push   $0xf
c1004255:	68 d4 03 00 00       	push   $0x3d4
c100425a:	e8 dd bd ff ff       	call   c100003c <outb>
c100425f:	83 c4 10             	add    $0x10,%esp
c1004262:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004266:	0f b6 c0             	movzbl %al,%eax
c1004269:	83 ec 08             	sub    $0x8,%esp
c100426c:	50                   	push   %eax
c100426d:	68 d5 03 00 00       	push   $0x3d5
c1004272:	e8 c5 bd ff ff       	call   c100003c <outb>
c1004277:	83 c4 10             	add    $0x10,%esp
c100427a:	90                   	nop
c100427b:	c9                   	leave  
c100427c:	c3                   	ret    

c100427d <clear>:
c100427d:	55                   	push   %ebp
c100427e:	89 e5                	mov    %esp,%ebp
c1004280:	83 ec 18             	sub    $0x18,%esp
c1004283:	66 c7 45 f4 00 0f    	movw   $0xf00,-0xc(%ebp)
c1004289:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c100428d:	83 c8 20             	or     $0x20,%eax
c1004290:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1004294:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c100429a:	eb 1f                	jmp    c10042bb <clear+0x3e>
c100429c:	a1 08 db 00 c1       	mov    0xc100db08,%eax
c10042a1:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
c10042a5:	01 d2                	add    %edx,%edx
c10042a7:	01 c2                	add    %eax,%edx
c10042a9:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c10042ad:	66 89 02             	mov    %ax,(%edx)
c10042b0:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10042b4:	83 c0 01             	add    $0x1,%eax
c10042b7:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10042bb:	66 81 7d f6 cf 07    	cmpw   $0x7cf,-0xa(%ebp)
c10042c1:	76 d9                	jbe    c100429c <clear+0x1f>
c10042c3:	c6 05 a7 0c 01 c1 00 	movb   $0x0,0xc1010ca7
c10042ca:	c6 05 a8 0c 01 c1 00 	movb   $0x0,0xc1010ca8
c10042d1:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c10042d8:	0f b6 d0             	movzbl %al,%edx
c10042db:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c10042e2:	0f b6 c0             	movzbl %al,%eax
c10042e5:	83 ec 08             	sub    $0x8,%esp
c10042e8:	52                   	push   %edx
c10042e9:	50                   	push   %eax
c10042ea:	e8 07 ff ff ff       	call   c10041f6 <print_cursor>
c10042ef:	83 c4 10             	add    $0x10,%esp
c10042f2:	90                   	nop
c10042f3:	c9                   	leave  
c10042f4:	c3                   	ret    

c10042f5 <print_char>:
c10042f5:	55                   	push   %ebp
c10042f6:	89 e5                	mov    %esp,%ebp
c10042f8:	83 ec 28             	sub    $0x28,%esp
c10042fb:	8b 45 08             	mov    0x8(%ebp),%eax
c10042fe:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1004301:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1004307:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c100430d:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c1004314:	3c 18                	cmp    $0x18,%al
c1004316:	76 05                	jbe    c100431d <print_char+0x28>
c1004318:	e8 60 ff ff ff       	call   c100427d <clear>
c100431d:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c1004324:	0f b6 d0             	movzbl %al,%edx
c1004327:	89 d0                	mov    %edx,%eax
c1004329:	c1 e0 02             	shl    $0x2,%eax
c100432c:	01 d0                	add    %edx,%eax
c100432e:	c1 e0 04             	shl    $0x4,%eax
c1004331:	89 c2                	mov    %eax,%edx
c1004333:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c100433a:	0f b6 c0             	movzbl %al,%eax
c100433d:	01 d0                	add    %edx,%eax
c100433f:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1004343:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
c1004347:	83 f8 09             	cmp    $0x9,%eax
c100434a:	74 20                	je     c100436c <print_char+0x77>
c100434c:	83 f8 0a             	cmp    $0xa,%eax
c100434f:	75 2f                	jne    c1004380 <print_char+0x8b>
c1004351:	c6 05 a8 0c 01 c1 00 	movb   $0x0,0xc1010ca8
c1004358:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c100435f:	83 c0 01             	add    $0x1,%eax
c1004362:	a2 a7 0c 01 c1       	mov    %al,0xc1010ca7
c1004367:	e9 82 00 00 00       	jmp    c10043ee <print_char+0xf9>
c100436c:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c1004373:	83 c0 08             	add    $0x8,%eax
c1004376:	83 e0 f8             	and    $0xfffffff8,%eax
c1004379:	a2 a8 0c 01 c1       	mov    %al,0xc1010ca8
c100437e:	eb 6e                	jmp    c10043ee <print_char+0xf9>
c1004380:	66 0f be 45 e4       	movsbw -0x1c(%ebp),%ax
c1004385:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
c1004389:	8b 45 0c             	mov    0xc(%ebp),%eax
c100438c:	c1 e0 04             	shl    $0x4,%eax
c100438f:	0f b6 c0             	movzbl %al,%eax
c1004392:	8b 55 10             	mov    0x10(%ebp),%edx
c1004395:	83 e2 0f             	and    $0xf,%edx
c1004398:	09 d0                	or     %edx,%eax
c100439a:	c1 e0 08             	shl    $0x8,%eax
c100439d:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10043a1:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10043a5:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c10043a9:	a1 08 db 00 c1       	mov    0xc100db08,%eax
c10043ae:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c10043b2:	01 d2                	add    %edx,%edx
c10043b4:	01 c2                	add    %eax,%edx
c10043b6:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10043ba:	66 89 02             	mov    %ax,(%edx)
c10043bd:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c10043c4:	83 c0 01             	add    $0x1,%eax
c10043c7:	a2 a8 0c 01 c1       	mov    %al,0xc1010ca8
c10043cc:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c10043d3:	3c 4f                	cmp    $0x4f,%al
c10043d5:	76 16                	jbe    c10043ed <print_char+0xf8>
c10043d7:	c6 05 a8 0c 01 c1 00 	movb   $0x0,0xc1010ca8
c10043de:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c10043e5:	83 c0 01             	add    $0x1,%eax
c10043e8:	a2 a7 0c 01 c1       	mov    %al,0xc1010ca7
c10043ed:	90                   	nop
c10043ee:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c10043f5:	0f b6 d0             	movzbl %al,%edx
c10043f8:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c10043ff:	0f b6 c0             	movzbl %al,%eax
c1004402:	83 ec 08             	sub    $0x8,%esp
c1004405:	52                   	push   %edx
c1004406:	50                   	push   %eax
c1004407:	e8 ea fd ff ff       	call   c10041f6 <print_cursor>
c100440c:	83 c4 10             	add    $0x10,%esp
c100440f:	90                   	nop
c1004410:	c9                   	leave  
c1004411:	c3                   	ret    

c1004412 <print_string>:
c1004412:	55                   	push   %ebp
c1004413:	89 e5                	mov    %esp,%ebp
c1004415:	83 ec 08             	sub    $0x8,%esp
c1004418:	eb 21                	jmp    c100443b <print_string+0x29>
c100441a:	8b 45 08             	mov    0x8(%ebp),%eax
c100441d:	8d 50 01             	lea    0x1(%eax),%edx
c1004420:	89 55 08             	mov    %edx,0x8(%ebp)
c1004423:	0f b6 00             	movzbl (%eax),%eax
c1004426:	0f be c0             	movsbl %al,%eax
c1004429:	83 ec 04             	sub    $0x4,%esp
c100442c:	ff 75 10             	pushl  0x10(%ebp)
c100442f:	ff 75 0c             	pushl  0xc(%ebp)
c1004432:	50                   	push   %eax
c1004433:	e8 bd fe ff ff       	call   c10042f5 <print_char>
c1004438:	83 c4 10             	add    $0x10,%esp
c100443b:	8b 45 08             	mov    0x8(%ebp),%eax
c100443e:	0f b6 00             	movzbl (%eax),%eax
c1004441:	84 c0                	test   %al,%al
c1004443:	75 d5                	jne    c100441a <print_string+0x8>
c1004445:	90                   	nop
c1004446:	90                   	nop
c1004447:	c9                   	leave  
c1004448:	c3                   	ret    

c1004449 <print_num>:
c1004449:	55                   	push   %ebp
c100444a:	89 e5                	mov    %esp,%ebp
c100444c:	83 ec 48             	sub    $0x48,%esp
c100444f:	8b 4d 18             	mov    0x18(%ebp),%ecx
c1004452:	8b 55 1c             	mov    0x1c(%ebp),%edx
c1004455:	8b 45 08             	mov    0x8(%ebp),%eax
c1004458:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100445b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100445e:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1004461:	89 c8                	mov    %ecx,%eax
c1004463:	88 45 bc             	mov    %al,-0x44(%ebp)
c1004466:	89 d0                	mov    %edx,%eax
c1004468:	88 45 b8             	mov    %al,-0x48(%ebp)
c100446b:	0f be 45 b8          	movsbl -0x48(%ebp),%eax
c100446f:	c6 44 05 c8 00       	movb   $0x0,-0x38(%ebp,%eax,1)
c1004474:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
c1004478:	83 e8 01             	sub    $0x1,%eax
c100447b:	88 45 f7             	mov    %al,-0x9(%ebp)
c100447e:	e9 c0 00 00 00       	jmp    c1004543 <print_num+0xfa>
c1004483:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
c1004487:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100448a:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100448d:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c1004490:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004493:	89 55 ec             	mov    %edx,-0x14(%ebp)
c1004496:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004499:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100449c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10044a0:	74 1c                	je     c10044be <print_num+0x75>
c10044a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10044a5:	ba 00 00 00 00       	mov    $0x0,%edx
c10044aa:	f7 75 e4             	divl   -0x1c(%ebp)
c10044ad:	89 55 f0             	mov    %edx,-0x10(%ebp)
c10044b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10044b3:	ba 00 00 00 00       	mov    $0x0,%edx
c10044b8:	f7 75 e4             	divl   -0x1c(%ebp)
c10044bb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10044be:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10044c1:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10044c4:	f7 75 e4             	divl   -0x1c(%ebp)
c10044c7:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10044ca:	89 55 dc             	mov    %edx,-0x24(%ebp)
c10044cd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10044d0:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10044d3:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10044d6:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c10044d9:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10044dc:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10044e0:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c10044e4:	80 7d bc 0a          	cmpb   $0xa,-0x44(%ebp)
c10044e8:	75 16                	jne    c1004500 <print_num+0xb7>
c10044ea:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10044ee:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c10044f3:	8d 50 30             	lea    0x30(%eax),%edx
c10044f6:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10044fa:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c10044fe:	eb 39                	jmp    c1004539 <print_num+0xf0>
c1004500:	80 7d bc 10          	cmpb   $0x10,-0x44(%ebp)
c1004504:	75 33                	jne    c1004539 <print_num+0xf0>
c1004506:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100450a:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100450f:	3c 09                	cmp    $0x9,%al
c1004511:	7e 10                	jle    c1004523 <print_num+0xda>
c1004513:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004517:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100451c:	83 c0 37             	add    $0x37,%eax
c100451f:	89 c2                	mov    %eax,%edx
c1004521:	eb 0e                	jmp    c1004531 <print_num+0xe8>
c1004523:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004527:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100452c:	83 c0 30             	add    $0x30,%eax
c100452f:	89 c2                	mov    %eax,%edx
c1004531:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004535:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1004539:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100453d:	83 e8 01             	sub    $0x1,%eax
c1004540:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004543:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
c1004547:	0f 89 36 ff ff ff    	jns    c1004483 <print_num+0x3a>
c100454d:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
c1004551:	75 5e                	jne    c10045b1 <print_num+0x168>
c1004553:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c100455a:	90                   	nop
c100455b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100455e:	8d 50 01             	lea    0x1(%eax),%edx
c1004561:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1004564:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004569:	3c 30                	cmp    $0x30,%al
c100456b:	74 ee                	je     c100455b <print_num+0x112>
c100456d:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c1004571:	8d 55 c8             	lea    -0x38(%ebp),%edx
c1004574:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004577:	01 d0                	add    %edx,%eax
c1004579:	0f b6 00             	movzbl (%eax),%eax
c100457c:	84 c0                	test   %al,%al
c100457e:	74 1c                	je     c100459c <print_num+0x153>
c1004580:	8d 55 c8             	lea    -0x38(%ebp),%edx
c1004583:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004586:	01 d0                	add    %edx,%eax
c1004588:	83 ec 04             	sub    $0x4,%esp
c100458b:	ff 75 14             	pushl  0x14(%ebp)
c100458e:	ff 75 10             	pushl  0x10(%ebp)
c1004591:	50                   	push   %eax
c1004592:	e8 7b fe ff ff       	call   c1004412 <print_string>
c1004597:	83 c4 10             	add    $0x10,%esp
c100459a:	eb 2a                	jmp    c10045c6 <print_num+0x17d>
c100459c:	83 ec 04             	sub    $0x4,%esp
c100459f:	ff 75 14             	pushl  0x14(%ebp)
c10045a2:	ff 75 10             	pushl  0x10(%ebp)
c10045a5:	6a 30                	push   $0x30
c10045a7:	e8 49 fd ff ff       	call   c10042f5 <print_char>
c10045ac:	83 c4 10             	add    $0x10,%esp
c10045af:	eb 15                	jmp    c10045c6 <print_num+0x17d>
c10045b1:	83 ec 04             	sub    $0x4,%esp
c10045b4:	ff 75 14             	pushl  0x14(%ebp)
c10045b7:	ff 75 10             	pushl  0x10(%ebp)
c10045ba:	8d 45 c8             	lea    -0x38(%ebp),%eax
c10045bd:	50                   	push   %eax
c10045be:	e8 4f fe ff ff       	call   c1004412 <print_string>
c10045c3:	83 c4 10             	add    $0x10,%esp
c10045c6:	c9                   	leave  
c10045c7:	c3                   	ret    

c10045c8 <printk>:
c10045c8:	55                   	push   %ebp
c10045c9:	89 e5                	mov    %esp,%ebp
c10045cb:	83 ec 38             	sub    $0x38,%esp
c10045ce:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c10045d2:	8d 45 0c             	lea    0xc(%ebp),%eax
c10045d5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10045d8:	e9 6e 03 00 00       	jmp    c100494b <printk+0x383>
c10045dd:	8b 45 08             	mov    0x8(%ebp),%eax
c10045e0:	0f b6 00             	movzbl (%eax),%eax
c10045e3:	3c 25                	cmp    $0x25,%al
c10045e5:	0f 85 3a 03 00 00    	jne    c1004925 <printk+0x35d>
c10045eb:	90                   	nop
c10045ec:	8b 45 08             	mov    0x8(%ebp),%eax
c10045ef:	83 c0 01             	add    $0x1,%eax
c10045f2:	89 45 08             	mov    %eax,0x8(%ebp)
c10045f5:	8b 45 08             	mov    0x8(%ebp),%eax
c10045f8:	0f b6 00             	movzbl (%eax),%eax
c10045fb:	0f be c0             	movsbl %al,%eax
c10045fe:	83 e8 30             	sub    $0x30,%eax
c1004601:	83 f8 48             	cmp    $0x48,%eax
c1004604:	0f 87 fb 02 00 00    	ja     c1004905 <printk+0x33d>
c100460a:	8b 04 85 98 a0 00 c1 	mov    -0x3eff5f68(,%eax,4),%eax
c1004611:	ff e0                	jmp    *%eax
c1004613:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004617:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100461a:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
c100461e:	88 45 d7             	mov    %al,-0x29(%ebp)
c1004621:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
c1004625:	83 ec 04             	sub    $0x4,%esp
c1004628:	6a 02                	push   $0x2
c100462a:	6a 00                	push   $0x0
c100462c:	50                   	push   %eax
c100462d:	e8 c3 fc ff ff       	call   c10042f5 <print_char>
c1004632:	83 c4 10             	add    $0x10,%esp
c1004635:	e9 e0 02 00 00       	jmp    c100491a <printk+0x352>
c100463a:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c100463e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004641:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004644:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1004647:	83 ec 04             	sub    $0x4,%esp
c100464a:	6a 02                	push   $0x2
c100464c:	6a 00                	push   $0x0
c100464e:	ff 75 dc             	pushl  -0x24(%ebp)
c1004651:	e8 bc fd ff ff       	call   c1004412 <print_string>
c1004656:	83 c4 10             	add    $0x10,%esp
c1004659:	e9 bc 02 00 00       	jmp    c100491a <printk+0x352>
c100465e:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004662:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004665:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004668:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100466b:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100466f:	74 23                	je     c1004694 <printk+0xcc>
c1004671:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004675:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004678:	99                   	cltd   
c1004679:	83 ec 04             	sub    $0x4,%esp
c100467c:	6a 01                	push   $0x1
c100467e:	51                   	push   %ecx
c100467f:	6a 0a                	push   $0xa
c1004681:	6a 02                	push   $0x2
c1004683:	6a 00                	push   $0x0
c1004685:	52                   	push   %edx
c1004686:	50                   	push   %eax
c1004687:	e8 bd fd ff ff       	call   c1004449 <print_num>
c100468c:	83 c4 20             	add    $0x20,%esp
c100468f:	e9 86 02 00 00       	jmp    c100491a <printk+0x352>
c1004694:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004697:	99                   	cltd   
c1004698:	83 ec 04             	sub    $0x4,%esp
c100469b:	6a 00                	push   $0x0
c100469d:	6a 14                	push   $0x14
c100469f:	6a 0a                	push   $0xa
c10046a1:	6a 02                	push   $0x2
c10046a3:	6a 00                	push   $0x0
c10046a5:	52                   	push   %edx
c10046a6:	50                   	push   %eax
c10046a7:	e8 9d fd ff ff       	call   c1004449 <print_num>
c10046ac:	83 c4 20             	add    $0x20,%esp
c10046af:	e9 66 02 00 00       	jmp    c100491a <printk+0x352>
c10046b4:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10046b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10046bb:	8b 40 fc             	mov    -0x4(%eax),%eax
c10046be:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10046c1:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10046c5:	74 23                	je     c10046ea <printk+0x122>
c10046c7:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10046cb:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10046ce:	99                   	cltd   
c10046cf:	83 ec 04             	sub    $0x4,%esp
c10046d2:	6a 01                	push   $0x1
c10046d4:	51                   	push   %ecx
c10046d5:	6a 10                	push   $0x10
c10046d7:	6a 02                	push   $0x2
c10046d9:	6a 00                	push   $0x0
c10046db:	52                   	push   %edx
c10046dc:	50                   	push   %eax
c10046dd:	e8 67 fd ff ff       	call   c1004449 <print_num>
c10046e2:	83 c4 20             	add    $0x20,%esp
c10046e5:	e9 30 02 00 00       	jmp    c100491a <printk+0x352>
c10046ea:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10046ed:	99                   	cltd   
c10046ee:	83 ec 04             	sub    $0x4,%esp
c10046f1:	6a 00                	push   $0x0
c10046f3:	6a 14                	push   $0x14
c10046f5:	6a 10                	push   $0x10
c10046f7:	6a 02                	push   $0x2
c10046f9:	6a 00                	push   $0x0
c10046fb:	52                   	push   %edx
c10046fc:	50                   	push   %eax
c10046fd:	e8 47 fd ff ff       	call   c1004449 <print_num>
c1004702:	83 c4 20             	add    $0x20,%esp
c1004705:	e9 10 02 00 00       	jmp    c100491a <printk+0x352>
c100470a:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c100470e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004711:	8b 50 fc             	mov    -0x4(%eax),%edx
c1004714:	8b 40 f8             	mov    -0x8(%eax),%eax
c1004717:	89 45 c8             	mov    %eax,-0x38(%ebp)
c100471a:	89 55 cc             	mov    %edx,-0x34(%ebp)
c100471d:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004721:	74 25                	je     c1004748 <printk+0x180>
c1004723:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004727:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100472a:	8b 55 cc             	mov    -0x34(%ebp),%edx
c100472d:	83 ec 04             	sub    $0x4,%esp
c1004730:	6a 01                	push   $0x1
c1004732:	51                   	push   %ecx
c1004733:	6a 10                	push   $0x10
c1004735:	6a 02                	push   $0x2
c1004737:	6a 00                	push   $0x0
c1004739:	52                   	push   %edx
c100473a:	50                   	push   %eax
c100473b:	e8 09 fd ff ff       	call   c1004449 <print_num>
c1004740:	83 c4 20             	add    $0x20,%esp
c1004743:	e9 d2 01 00 00       	jmp    c100491a <printk+0x352>
c1004748:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100474b:	8b 55 cc             	mov    -0x34(%ebp),%edx
c100474e:	83 ec 04             	sub    $0x4,%esp
c1004751:	6a 00                	push   $0x0
c1004753:	6a 14                	push   $0x14
c1004755:	6a 10                	push   $0x10
c1004757:	6a 02                	push   $0x2
c1004759:	6a 00                	push   $0x0
c100475b:	52                   	push   %edx
c100475c:	50                   	push   %eax
c100475d:	e8 e7 fc ff ff       	call   c1004449 <print_num>
c1004762:	83 c4 20             	add    $0x20,%esp
c1004765:	e9 b0 01 00 00       	jmp    c100491a <printk+0x352>
c100476a:	8b 45 08             	mov    0x8(%ebp),%eax
c100476d:	83 c0 01             	add    $0x1,%eax
c1004770:	89 45 08             	mov    %eax,0x8(%ebp)
c1004773:	8b 45 08             	mov    0x8(%ebp),%eax
c1004776:	0f b6 00             	movzbl (%eax),%eax
c1004779:	0f be c0             	movsbl %al,%eax
c100477c:	83 f8 78             	cmp    $0x78,%eax
c100477f:	0f 84 9a 00 00 00    	je     c100481f <printk+0x257>
c1004785:	83 f8 78             	cmp    $0x78,%eax
c1004788:	0f 8f 3f 01 00 00    	jg     c10048cd <printk+0x305>
c100478e:	83 f8 6c             	cmp    $0x6c,%eax
c1004791:	0f 84 e0 00 00 00    	je     c1004877 <printk+0x2af>
c1004797:	83 f8 6c             	cmp    $0x6c,%eax
c100479a:	0f 8f 2d 01 00 00    	jg     c10048cd <printk+0x305>
c10047a0:	83 f8 64             	cmp    $0x64,%eax
c10047a3:	74 1c                	je     c10047c1 <printk+0x1f9>
c10047a5:	83 f8 64             	cmp    $0x64,%eax
c10047a8:	0f 8f 1f 01 00 00    	jg     c10048cd <printk+0x305>
c10047ae:	83 f8 4c             	cmp    $0x4c,%eax
c10047b1:	0f 84 c0 00 00 00    	je     c1004877 <printk+0x2af>
c10047b7:	83 f8 58             	cmp    $0x58,%eax
c10047ba:	74 63                	je     c100481f <printk+0x257>
c10047bc:	e9 0c 01 00 00       	jmp    c10048cd <printk+0x305>
c10047c1:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10047c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10047c8:	8b 40 fc             	mov    -0x4(%eax),%eax
c10047cb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10047ce:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10047d2:	74 27                	je     c10047fb <printk+0x233>
c10047d4:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10047d8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10047db:	ba 00 00 00 00       	mov    $0x0,%edx
c10047e0:	83 ec 04             	sub    $0x4,%esp
c10047e3:	6a 01                	push   $0x1
c10047e5:	51                   	push   %ecx
c10047e6:	6a 0a                	push   $0xa
c10047e8:	6a 02                	push   $0x2
c10047ea:	6a 00                	push   $0x0
c10047ec:	52                   	push   %edx
c10047ed:	50                   	push   %eax
c10047ee:	e8 56 fc ff ff       	call   c1004449 <print_num>
c10047f3:	83 c4 20             	add    $0x20,%esp
c10047f6:	e9 d3 00 00 00       	jmp    c10048ce <printk+0x306>
c10047fb:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10047fe:	ba 00 00 00 00       	mov    $0x0,%edx
c1004803:	83 ec 04             	sub    $0x4,%esp
c1004806:	6a 00                	push   $0x0
c1004808:	6a 14                	push   $0x14
c100480a:	6a 0a                	push   $0xa
c100480c:	6a 02                	push   $0x2
c100480e:	6a 00                	push   $0x0
c1004810:	52                   	push   %edx
c1004811:	50                   	push   %eax
c1004812:	e8 32 fc ff ff       	call   c1004449 <print_num>
c1004817:	83 c4 20             	add    $0x20,%esp
c100481a:	e9 af 00 00 00       	jmp    c10048ce <printk+0x306>
c100481f:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004823:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004826:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004829:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100482c:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004830:	74 24                	je     c1004856 <printk+0x28e>
c1004832:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004836:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004839:	ba 00 00 00 00       	mov    $0x0,%edx
c100483e:	83 ec 04             	sub    $0x4,%esp
c1004841:	6a 01                	push   $0x1
c1004843:	51                   	push   %ecx
c1004844:	6a 10                	push   $0x10
c1004846:	6a 02                	push   $0x2
c1004848:	6a 00                	push   $0x0
c100484a:	52                   	push   %edx
c100484b:	50                   	push   %eax
c100484c:	e8 f8 fb ff ff       	call   c1004449 <print_num>
c1004851:	83 c4 20             	add    $0x20,%esp
c1004854:	eb 78                	jmp    c10048ce <printk+0x306>
c1004856:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004859:	ba 00 00 00 00       	mov    $0x0,%edx
c100485e:	83 ec 04             	sub    $0x4,%esp
c1004861:	6a 00                	push   $0x0
c1004863:	6a 14                	push   $0x14
c1004865:	6a 10                	push   $0x10
c1004867:	6a 02                	push   $0x2
c1004869:	6a 00                	push   $0x0
c100486b:	52                   	push   %edx
c100486c:	50                   	push   %eax
c100486d:	e8 d7 fb ff ff       	call   c1004449 <print_num>
c1004872:	83 c4 20             	add    $0x20,%esp
c1004875:	eb 57                	jmp    c10048ce <printk+0x306>
c1004877:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c100487b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100487e:	8b 50 fc             	mov    -0x4(%eax),%edx
c1004881:	8b 40 f8             	mov    -0x8(%eax),%eax
c1004884:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004887:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c100488a:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100488e:	74 20                	je     c10048b0 <printk+0x2e8>
c1004890:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c1004894:	83 ec 04             	sub    $0x4,%esp
c1004897:	6a 01                	push   $0x1
c1004899:	50                   	push   %eax
c100489a:	6a 10                	push   $0x10
c100489c:	6a 02                	push   $0x2
c100489e:	6a 00                	push   $0x0
c10048a0:	ff 75 e4             	pushl  -0x1c(%ebp)
c10048a3:	ff 75 e0             	pushl  -0x20(%ebp)
c10048a6:	e8 9e fb ff ff       	call   c1004449 <print_num>
c10048ab:	83 c4 20             	add    $0x20,%esp
c10048ae:	eb 1e                	jmp    c10048ce <printk+0x306>
c10048b0:	83 ec 04             	sub    $0x4,%esp
c10048b3:	6a 00                	push   $0x0
c10048b5:	6a 14                	push   $0x14
c10048b7:	6a 10                	push   $0x10
c10048b9:	6a 02                	push   $0x2
c10048bb:	6a 00                	push   $0x0
c10048bd:	ff 75 e4             	pushl  -0x1c(%ebp)
c10048c0:	ff 75 e0             	pushl  -0x20(%ebp)
c10048c3:	e8 81 fb ff ff       	call   c1004449 <print_num>
c10048c8:	83 c4 20             	add    $0x20,%esp
c10048cb:	eb 01                	jmp    c10048ce <printk+0x306>
c10048cd:	90                   	nop
c10048ce:	eb 4a                	jmp    c100491a <printk+0x352>
c10048d0:	8b 45 08             	mov    0x8(%ebp),%eax
c10048d3:	0f b6 00             	movzbl (%eax),%eax
c10048d6:	0f be c0             	movsbl %al,%eax
c10048d9:	83 e8 30             	sub    $0x30,%eax
c10048dc:	89 c2                	mov    %eax,%edx
c10048de:	89 d0                	mov    %edx,%eax
c10048e0:	c1 e0 02             	shl    $0x2,%eax
c10048e3:	01 d0                	add    %edx,%eax
c10048e5:	01 c0                	add    %eax,%eax
c10048e7:	89 c2                	mov    %eax,%edx
c10048e9:	8b 45 08             	mov    0x8(%ebp),%eax
c10048ec:	83 c0 01             	add    $0x1,%eax
c10048ef:	89 45 08             	mov    %eax,0x8(%ebp)
c10048f2:	8b 45 08             	mov    0x8(%ebp),%eax
c10048f5:	0f b6 00             	movzbl (%eax),%eax
c10048f8:	01 d0                	add    %edx,%eax
c10048fa:	83 e8 30             	sub    $0x30,%eax
c10048fd:	88 45 f3             	mov    %al,-0xd(%ebp)
c1004900:	e9 e7 fc ff ff       	jmp    c10045ec <printk+0x24>
c1004905:	83 ec 04             	sub    $0x4,%esp
c1004908:	6a 02                	push   $0x2
c100490a:	6a 00                	push   $0x0
c100490c:	68 78 a0 00 c1       	push   $0xc100a078
c1004911:	e8 fc fa ff ff       	call   c1004412 <print_string>
c1004916:	83 c4 10             	add    $0x10,%esp
c1004919:	90                   	nop
c100491a:	8b 45 08             	mov    0x8(%ebp),%eax
c100491d:	83 c0 01             	add    $0x1,%eax
c1004920:	89 45 08             	mov    %eax,0x8(%ebp)
c1004923:	eb 22                	jmp    c1004947 <printk+0x37f>
c1004925:	8b 45 08             	mov    0x8(%ebp),%eax
c1004928:	0f b6 00             	movzbl (%eax),%eax
c100492b:	0f be c0             	movsbl %al,%eax
c100492e:	83 ec 04             	sub    $0x4,%esp
c1004931:	6a 02                	push   $0x2
c1004933:	6a 00                	push   $0x0
c1004935:	50                   	push   %eax
c1004936:	e8 ba f9 ff ff       	call   c10042f5 <print_char>
c100493b:	83 c4 10             	add    $0x10,%esp
c100493e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004941:	83 c0 01             	add    $0x1,%eax
c1004944:	89 45 08             	mov    %eax,0x8(%ebp)
c1004947:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c100494b:	8b 45 08             	mov    0x8(%ebp),%eax
c100494e:	0f b6 00             	movzbl (%eax),%eax
c1004951:	84 c0                	test   %al,%al
c1004953:	0f 85 84 fc ff ff    	jne    c10045dd <printk+0x15>
c1004959:	90                   	nop
c100495a:	90                   	nop
c100495b:	c9                   	leave  
c100495c:	c3                   	ret    

c100495d <cons_putc>:
c100495d:	55                   	push   %ebp
c100495e:	89 e5                	mov    %esp,%ebp
c1004960:	83 ec 08             	sub    $0x8,%esp
c1004963:	83 ec 0c             	sub    $0xc,%esp
c1004966:	ff 75 08             	pushl  0x8(%ebp)
c1004969:	e8 63 f6 ff ff       	call   c1003fd1 <lpt_putc>
c100496e:	83 c4 10             	add    $0x10,%esp
c1004971:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1004975:	74 13                	je     c100498a <cons_putc+0x2d>
c1004977:	83 ec 08             	sub    $0x8,%esp
c100497a:	ff 75 08             	pushl  0x8(%ebp)
c100497d:	68 bc a1 00 c1       	push   $0xc100a1bc
c1004982:	e8 41 fc ff ff       	call   c10045c8 <printk>
c1004987:	83 c4 10             	add    $0x10,%esp
c100498a:	83 ec 0c             	sub    $0xc,%esp
c100498d:	ff 75 08             	pushl  0x8(%ebp)
c1004990:	e8 9f f7 ff ff       	call   c1004134 <serial_putc>
c1004995:	83 c4 10             	add    $0x10,%esp
c1004998:	90                   	nop
c1004999:	c9                   	leave  
c100499a:	c3                   	ret    

c100499b <cons_getc>:
c100499b:	55                   	push   %ebp
c100499c:	89 e5                	mov    %esp,%ebp
c100499e:	83 ec 18             	sub    $0x18,%esp
c10049a1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10049a8:	e8 0e f7 ff ff       	call   c10040bb <serial_intr>
c10049ad:	e8 2f d4 ff ff       	call   c1001de1 <kbd_intr>
c10049b2:	8b 15 20 32 a1 c1    	mov    0xc1a13220,%edx
c10049b8:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c10049bd:	39 c2                	cmp    %eax,%edx
c10049bf:	74 31                	je     c10049f2 <cons_getc+0x57>
c10049c1:	a1 20 32 a1 c1       	mov    0xc1a13220,%eax
c10049c6:	8d 50 01             	lea    0x1(%eax),%edx
c10049c9:	89 15 20 32 a1 c1    	mov    %edx,0xc1a13220
c10049cf:	0f b6 80 20 30 a1 c1 	movzbl -0x3e5ecfe0(%eax),%eax
c10049d6:	0f b6 c0             	movzbl %al,%eax
c10049d9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10049dc:	a1 20 32 a1 c1       	mov    0xc1a13220,%eax
c10049e1:	3d 00 02 00 00       	cmp    $0x200,%eax
c10049e6:	75 0a                	jne    c10049f2 <cons_getc+0x57>
c10049e8:	c7 05 20 32 a1 c1 00 	movl   $0x0,0xc1a13220
c10049ef:	00 00 00 
c10049f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10049f5:	c9                   	leave  
c10049f6:	c3                   	ret    

c10049f7 <hash32>:
c10049f7:	55                   	push   %ebp
c10049f8:	89 e5                	mov    %esp,%ebp
c10049fa:	83 ec 10             	sub    $0x10,%esp
c10049fd:	8b 45 08             	mov    0x8(%ebp),%eax
c1004a00:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1004a06:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004a09:	b8 20 00 00 00       	mov    $0x20,%eax
c1004a0e:	2b 45 0c             	sub    0xc(%ebp),%eax
c1004a11:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1004a14:	89 c1                	mov    %eax,%ecx
c1004a16:	d3 ea                	shr    %cl,%edx
c1004a18:	89 d0                	mov    %edx,%eax
c1004a1a:	c9                   	leave  
c1004a1b:	c3                   	ret    

c1004a1c <sema_init>:
c1004a1c:	55                   	push   %ebp
c1004a1d:	89 e5                	mov    %esp,%ebp
c1004a1f:	83 ec 14             	sub    $0x14,%esp
c1004a22:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004a25:	88 45 ec             	mov    %al,-0x14(%ebp)
c1004a28:	8b 45 08             	mov    0x8(%ebp),%eax
c1004a2b:	0f b6 55 ec          	movzbl -0x14(%ebp),%edx
c1004a2f:	88 10                	mov    %dl,(%eax)
c1004a31:	8b 45 08             	mov    0x8(%ebp),%eax
c1004a34:	83 c0 04             	add    $0x4,%eax
c1004a37:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004a3a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004a3d:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1004a40:	89 50 04             	mov    %edx,0x4(%eax)
c1004a43:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004a46:	8b 50 04             	mov    0x4(%eax),%edx
c1004a49:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004a4c:	89 10                	mov    %edx,(%eax)
c1004a4e:	90                   	nop
c1004a4f:	90                   	nop
c1004a50:	c9                   	leave  
c1004a51:	c3                   	ret    

c1004a52 <lock_init>:
c1004a52:	55                   	push   %ebp
c1004a53:	89 e5                	mov    %esp,%ebp
c1004a55:	8b 45 08             	mov    0x8(%ebp),%eax
c1004a58:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1004a5e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004a61:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004a68:	8b 45 08             	mov    0x8(%ebp),%eax
c1004a6b:	83 c0 04             	add    $0x4,%eax
c1004a6e:	6a 01                	push   $0x1
c1004a70:	50                   	push   %eax
c1004a71:	e8 a6 ff ff ff       	call   c1004a1c <sema_init>
c1004a76:	83 c4 08             	add    $0x8,%esp
c1004a79:	90                   	nop
c1004a7a:	c9                   	leave  
c1004a7b:	c3                   	ret    

c1004a7c <sema_down>:
c1004a7c:	55                   	push   %ebp
c1004a7d:	89 e5                	mov    %esp,%ebp
c1004a7f:	83 ec 38             	sub    $0x38,%esp
c1004a82:	8b 45 08             	mov    0x8(%ebp),%eax
c1004a85:	83 c0 04             	add    $0x4,%eax
c1004a88:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004a8b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004a8e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004a91:	e8 ba c2 ff ff       	call   c1000d50 <intr_save>
c1004a96:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004a99:	e9 95 00 00 00       	jmp    c1004b33 <sema_down+0xb7>
c1004a9e:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004aa3:	83 c0 50             	add    $0x50,%eax
c1004aa6:	39 45 f4             	cmp    %eax,-0xc(%ebp)
c1004aa9:	75 16                	jne    c1004ac1 <sema_down+0x45>
c1004aab:	68 c0 a1 00 c1       	push   $0xc100a1c0
c1004ab0:	68 28 a2 00 c1       	push   $0xc100a228
c1004ab5:	6a 26                	push   $0x26
c1004ab7:	68 f4 a1 00 c1       	push   $0xc100a1f4
c1004abc:	e8 4c b8 ff ff       	call   c100030d <__PANIC>
c1004ac1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004ac4:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004ac7:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004aca:	8b 40 04             	mov    0x4(%eax),%eax
c1004acd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004ad0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004ad3:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1004ad6:	75 c6                	jne    c1004a9e <sema_down+0x22>
c1004ad8:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004add:	83 c0 50             	add    $0x50,%eax
c1004ae0:	8b 55 08             	mov    0x8(%ebp),%edx
c1004ae3:	83 c2 04             	add    $0x4,%edx
c1004ae6:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1004ae9:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004aec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004aef:	8b 00                	mov    (%eax),%eax
c1004af1:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1004af4:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1004af7:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004afa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004afd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1004b00:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1004b03:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1004b06:	89 10                	mov    %edx,(%eax)
c1004b08:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1004b0b:	8b 10                	mov    (%eax),%edx
c1004b0d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004b10:	89 50 04             	mov    %edx,0x4(%eax)
c1004b13:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004b16:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1004b19:	89 50 04             	mov    %edx,0x4(%eax)
c1004b1c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004b1f:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1004b22:	89 10                	mov    %edx,(%eax)
c1004b24:	90                   	nop
c1004b25:	90                   	nop
c1004b26:	83 ec 0c             	sub    $0xc,%esp
c1004b29:	6a 01                	push   $0x1
c1004b2b:	e8 f7 eb ff ff       	call   c1003727 <thread_block>
c1004b30:	83 c4 10             	add    $0x10,%esp
c1004b33:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b36:	0f b6 00             	movzbl (%eax),%eax
c1004b39:	84 c0                	test   %al,%al
c1004b3b:	74 84                	je     c1004ac1 <sema_down+0x45>
c1004b3d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b40:	0f b6 00             	movzbl (%eax),%eax
c1004b43:	8d 50 ff             	lea    -0x1(%eax),%edx
c1004b46:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b49:	88 10                	mov    %dl,(%eax)
c1004b4b:	83 ec 0c             	sub    $0xc,%esp
c1004b4e:	ff 75 ec             	pushl  -0x14(%ebp)
c1004b51:	e8 0d c2 ff ff       	call   c1000d63 <intr_restore>
c1004b56:	83 c4 10             	add    $0x10,%esp
c1004b59:	90                   	nop
c1004b5a:	c9                   	leave  
c1004b5b:	c3                   	ret    

c1004b5c <sema_up>:
c1004b5c:	55                   	push   %ebp
c1004b5d:	89 e5                	mov    %esp,%ebp
c1004b5f:	83 ec 28             	sub    $0x28,%esp
c1004b62:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b65:	83 c0 04             	add    $0x4,%eax
c1004b68:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004b6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004b6e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004b71:	e8 da c1 ff ff       	call   c1000d50 <intr_save>
c1004b76:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004b79:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004b7c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1004b7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004b82:	8b 40 04             	mov    0x4(%eax),%eax
c1004b85:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004b88:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004b8b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1004b8e:	74 41                	je     c1004bd1 <sema_up+0x75>
c1004b90:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004b93:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004b96:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004b99:	8b 40 04             	mov    0x4(%eax),%eax
c1004b9c:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1004b9f:	8b 12                	mov    (%edx),%edx
c1004ba1:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1004ba4:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004ba7:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004baa:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1004bad:	89 50 04             	mov    %edx,0x4(%eax)
c1004bb0:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004bb3:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1004bb6:	89 10                	mov    %edx,(%eax)
c1004bb8:	90                   	nop
c1004bb9:	90                   	nop
c1004bba:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004bbd:	83 e8 50             	sub    $0x50,%eax
c1004bc0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004bc3:	83 ec 0c             	sub    $0xc,%esp
c1004bc6:	ff 75 e8             	pushl  -0x18(%ebp)
c1004bc9:	e8 a6 eb ff ff       	call   c1003774 <thread_unblock>
c1004bce:	83 c4 10             	add    $0x10,%esp
c1004bd1:	8b 45 08             	mov    0x8(%ebp),%eax
c1004bd4:	0f b6 00             	movzbl (%eax),%eax
c1004bd7:	8d 50 01             	lea    0x1(%eax),%edx
c1004bda:	8b 45 08             	mov    0x8(%ebp),%eax
c1004bdd:	88 10                	mov    %dl,(%eax)
c1004bdf:	83 ec 0c             	sub    $0xc,%esp
c1004be2:	ff 75 ec             	pushl  -0x14(%ebp)
c1004be5:	e8 79 c1 ff ff       	call   c1000d63 <intr_restore>
c1004bea:	83 c4 10             	add    $0x10,%esp
c1004bed:	90                   	nop
c1004bee:	c9                   	leave  
c1004bef:	c3                   	ret    

c1004bf0 <lock_acquire>:
c1004bf0:	55                   	push   %ebp
c1004bf1:	89 e5                	mov    %esp,%ebp
c1004bf3:	83 ec 08             	sub    $0x8,%esp
c1004bf6:	8b 45 08             	mov    0x8(%ebp),%eax
c1004bf9:	8b 10                	mov    (%eax),%edx
c1004bfb:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004c00:	39 c2                	cmp    %eax,%edx
c1004c02:	74 29                	je     c1004c2d <lock_acquire+0x3d>
c1004c04:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c07:	83 c0 04             	add    $0x4,%eax
c1004c0a:	83 ec 0c             	sub    $0xc,%esp
c1004c0d:	50                   	push   %eax
c1004c0e:	e8 69 fe ff ff       	call   c1004a7c <sema_down>
c1004c13:	83 c4 10             	add    $0x10,%esp
c1004c16:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c1004c1c:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c1f:	89 10                	mov    %edx,(%eax)
c1004c21:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c24:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
c1004c2b:	eb 0f                	jmp    c1004c3c <lock_acquire+0x4c>
c1004c2d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c30:	8b 40 10             	mov    0x10(%eax),%eax
c1004c33:	8d 50 01             	lea    0x1(%eax),%edx
c1004c36:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c39:	89 50 10             	mov    %edx,0x10(%eax)
c1004c3c:	90                   	nop
c1004c3d:	c9                   	leave  
c1004c3e:	c3                   	ret    

c1004c3f <lock_release>:
c1004c3f:	55                   	push   %ebp
c1004c40:	89 e5                	mov    %esp,%ebp
c1004c42:	83 ec 08             	sub    $0x8,%esp
c1004c45:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c48:	8b 40 10             	mov    0x10(%eax),%eax
c1004c4b:	83 f8 01             	cmp    $0x1,%eax
c1004c4e:	76 11                	jbe    c1004c61 <lock_release+0x22>
c1004c50:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c53:	8b 40 10             	mov    0x10(%eax),%eax
c1004c56:	8d 50 ff             	lea    -0x1(%eax),%edx
c1004c59:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c5c:	89 50 10             	mov    %edx,0x10(%eax)
c1004c5f:	eb 25                	jmp    c1004c86 <lock_release+0x47>
c1004c61:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c64:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1004c6a:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c6d:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004c74:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c77:	83 c0 04             	add    $0x4,%eax
c1004c7a:	83 ec 0c             	sub    $0xc,%esp
c1004c7d:	50                   	push   %eax
c1004c7e:	e8 d9 fe ff ff       	call   c1004b5c <sema_up>
c1004c83:	83 c4 10             	add    $0x10,%esp
c1004c86:	c9                   	leave  
c1004c87:	c3                   	ret    

c1004c88 <waitdisk>:
c1004c88:	55                   	push   %ebp
c1004c89:	89 e5                	mov    %esp,%ebp
c1004c8b:	83 ec 08             	sub    $0x8,%esp
c1004c8e:	90                   	nop
c1004c8f:	83 ec 0c             	sub    $0xc,%esp
c1004c92:	68 f7 01 00 00       	push   $0x1f7
c1004c97:	e8 64 b3 ff ff       	call   c1000000 <inb>
c1004c9c:	83 c4 10             	add    $0x10,%esp
c1004c9f:	0f b6 c0             	movzbl %al,%eax
c1004ca2:	25 c0 00 00 00       	and    $0xc0,%eax
c1004ca7:	83 f8 40             	cmp    $0x40,%eax
c1004caa:	75 e3                	jne    c1004c8f <waitdisk+0x7>
c1004cac:	90                   	nop
c1004cad:	90                   	nop
c1004cae:	c9                   	leave  
c1004caf:	c3                   	ret    

c1004cb0 <insl>:
c1004cb0:	55                   	push   %ebp
c1004cb1:	89 e5                	mov    %esp,%ebp
c1004cb3:	57                   	push   %edi
c1004cb4:	53                   	push   %ebx
c1004cb5:	8b 55 08             	mov    0x8(%ebp),%edx
c1004cb8:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1004cbb:	8b 45 10             	mov    0x10(%ebp),%eax
c1004cbe:	89 cb                	mov    %ecx,%ebx
c1004cc0:	89 df                	mov    %ebx,%edi
c1004cc2:	89 c1                	mov    %eax,%ecx
c1004cc4:	fc                   	cld    
c1004cc5:	f2 6d                	repnz insl (%dx),%es:(%edi)
c1004cc7:	89 c8                	mov    %ecx,%eax
c1004cc9:	89 fb                	mov    %edi,%ebx
c1004ccb:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1004cce:	89 45 10             	mov    %eax,0x10(%ebp)
c1004cd1:	90                   	nop
c1004cd2:	5b                   	pop    %ebx
c1004cd3:	5f                   	pop    %edi
c1004cd4:	5d                   	pop    %ebp
c1004cd5:	c3                   	ret    

c1004cd6 <outsl>:
c1004cd6:	55                   	push   %ebp
c1004cd7:	89 e5                	mov    %esp,%ebp
c1004cd9:	56                   	push   %esi
c1004cda:	53                   	push   %ebx
c1004cdb:	8b 55 08             	mov    0x8(%ebp),%edx
c1004cde:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1004ce1:	8b 45 10             	mov    0x10(%ebp),%eax
c1004ce4:	89 cb                	mov    %ecx,%ebx
c1004ce6:	89 de                	mov    %ebx,%esi
c1004ce8:	89 c1                	mov    %eax,%ecx
c1004cea:	fc                   	cld    
c1004ceb:	f2 6f                	repnz outsl %ds:(%esi),(%dx)
c1004ced:	89 c8                	mov    %ecx,%eax
c1004cef:	89 f3                	mov    %esi,%ebx
c1004cf1:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1004cf4:	89 45 10             	mov    %eax,0x10(%ebp)
c1004cf7:	90                   	nop
c1004cf8:	5b                   	pop    %ebx
c1004cf9:	5e                   	pop    %esi
c1004cfa:	5d                   	pop    %ebp
c1004cfb:	c3                   	ret    

c1004cfc <ide_read_sect>:
c1004cfc:	55                   	push   %ebp
c1004cfd:	89 e5                	mov    %esp,%ebp
c1004cff:	83 ec 08             	sub    $0x8,%esp
c1004d02:	e8 81 ff ff ff       	call   c1004c88 <waitdisk>
c1004d07:	83 ec 08             	sub    $0x8,%esp
c1004d0a:	6a 01                	push   $0x1
c1004d0c:	68 f2 01 00 00       	push   $0x1f2
c1004d11:	e8 26 b3 ff ff       	call   c100003c <outb>
c1004d16:	83 c4 10             	add    $0x10,%esp
c1004d19:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004d1c:	0f b6 c0             	movzbl %al,%eax
c1004d1f:	83 ec 08             	sub    $0x8,%esp
c1004d22:	50                   	push   %eax
c1004d23:	68 f3 01 00 00       	push   $0x1f3
c1004d28:	e8 0f b3 ff ff       	call   c100003c <outb>
c1004d2d:	83 c4 10             	add    $0x10,%esp
c1004d30:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004d33:	c1 e8 08             	shr    $0x8,%eax
c1004d36:	0f b6 c0             	movzbl %al,%eax
c1004d39:	83 ec 08             	sub    $0x8,%esp
c1004d3c:	50                   	push   %eax
c1004d3d:	68 f4 01 00 00       	push   $0x1f4
c1004d42:	e8 f5 b2 ff ff       	call   c100003c <outb>
c1004d47:	83 c4 10             	add    $0x10,%esp
c1004d4a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004d4d:	c1 e8 10             	shr    $0x10,%eax
c1004d50:	0f b6 c0             	movzbl %al,%eax
c1004d53:	83 ec 08             	sub    $0x8,%esp
c1004d56:	50                   	push   %eax
c1004d57:	68 f5 01 00 00       	push   $0x1f5
c1004d5c:	e8 db b2 ff ff       	call   c100003c <outb>
c1004d61:	83 c4 10             	add    $0x10,%esp
c1004d64:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004d67:	c1 e8 18             	shr    $0x18,%eax
c1004d6a:	83 e0 0f             	and    $0xf,%eax
c1004d6d:	83 c8 e0             	or     $0xffffffe0,%eax
c1004d70:	0f b6 c0             	movzbl %al,%eax
c1004d73:	83 ec 08             	sub    $0x8,%esp
c1004d76:	50                   	push   %eax
c1004d77:	68 f6 01 00 00       	push   $0x1f6
c1004d7c:	e8 bb b2 ff ff       	call   c100003c <outb>
c1004d81:	83 c4 10             	add    $0x10,%esp
c1004d84:	83 ec 08             	sub    $0x8,%esp
c1004d87:	6a 20                	push   $0x20
c1004d89:	68 f7 01 00 00       	push   $0x1f7
c1004d8e:	e8 a9 b2 ff ff       	call   c100003c <outb>
c1004d93:	83 c4 10             	add    $0x10,%esp
c1004d96:	e8 ed fe ff ff       	call   c1004c88 <waitdisk>
c1004d9b:	83 ec 04             	sub    $0x4,%esp
c1004d9e:	68 80 00 00 00       	push   $0x80
c1004da3:	ff 75 08             	pushl  0x8(%ebp)
c1004da6:	68 f0 01 00 00       	push   $0x1f0
c1004dab:	e8 00 ff ff ff       	call   c1004cb0 <insl>
c1004db0:	83 c4 10             	add    $0x10,%esp
c1004db3:	90                   	nop
c1004db4:	c9                   	leave  
c1004db5:	c3                   	ret    

c1004db6 <ide_write_sect>:
c1004db6:	55                   	push   %ebp
c1004db7:	89 e5                	mov    %esp,%ebp
c1004db9:	83 ec 08             	sub    $0x8,%esp
c1004dbc:	e8 c7 fe ff ff       	call   c1004c88 <waitdisk>
c1004dc1:	83 ec 08             	sub    $0x8,%esp
c1004dc4:	6a 01                	push   $0x1
c1004dc6:	68 f2 01 00 00       	push   $0x1f2
c1004dcb:	e8 6c b2 ff ff       	call   c100003c <outb>
c1004dd0:	83 c4 10             	add    $0x10,%esp
c1004dd3:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004dd6:	0f b6 c0             	movzbl %al,%eax
c1004dd9:	83 ec 08             	sub    $0x8,%esp
c1004ddc:	50                   	push   %eax
c1004ddd:	68 f3 01 00 00       	push   $0x1f3
c1004de2:	e8 55 b2 ff ff       	call   c100003c <outb>
c1004de7:	83 c4 10             	add    $0x10,%esp
c1004dea:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004ded:	c1 e8 08             	shr    $0x8,%eax
c1004df0:	0f b6 c0             	movzbl %al,%eax
c1004df3:	83 ec 08             	sub    $0x8,%esp
c1004df6:	50                   	push   %eax
c1004df7:	68 f4 01 00 00       	push   $0x1f4
c1004dfc:	e8 3b b2 ff ff       	call   c100003c <outb>
c1004e01:	83 c4 10             	add    $0x10,%esp
c1004e04:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004e07:	c1 e8 10             	shr    $0x10,%eax
c1004e0a:	0f b6 c0             	movzbl %al,%eax
c1004e0d:	83 ec 08             	sub    $0x8,%esp
c1004e10:	50                   	push   %eax
c1004e11:	68 f5 01 00 00       	push   $0x1f5
c1004e16:	e8 21 b2 ff ff       	call   c100003c <outb>
c1004e1b:	83 c4 10             	add    $0x10,%esp
c1004e1e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004e21:	c1 e8 18             	shr    $0x18,%eax
c1004e24:	83 e0 0f             	and    $0xf,%eax
c1004e27:	83 c8 e0             	or     $0xffffffe0,%eax
c1004e2a:	0f b6 c0             	movzbl %al,%eax
c1004e2d:	83 ec 08             	sub    $0x8,%esp
c1004e30:	50                   	push   %eax
c1004e31:	68 f6 01 00 00       	push   $0x1f6
c1004e36:	e8 01 b2 ff ff       	call   c100003c <outb>
c1004e3b:	83 c4 10             	add    $0x10,%esp
c1004e3e:	83 ec 08             	sub    $0x8,%esp
c1004e41:	6a 30                	push   $0x30
c1004e43:	68 f7 01 00 00       	push   $0x1f7
c1004e48:	e8 ef b1 ff ff       	call   c100003c <outb>
c1004e4d:	83 c4 10             	add    $0x10,%esp
c1004e50:	e8 33 fe ff ff       	call   c1004c88 <waitdisk>
c1004e55:	83 ec 04             	sub    $0x4,%esp
c1004e58:	68 80 00 00 00       	push   $0x80
c1004e5d:	ff 75 08             	pushl  0x8(%ebp)
c1004e60:	68 f0 01 00 00       	push   $0x1f0
c1004e65:	e8 6c fe ff ff       	call   c1004cd6 <outsl>
c1004e6a:	83 c4 10             	add    $0x10,%esp
c1004e6d:	90                   	nop
c1004e6e:	c9                   	leave  
c1004e6f:	c3                   	ret    

c1004e70 <ide_read>:
c1004e70:	55                   	push   %ebp
c1004e71:	89 e5                	mov    %esp,%ebp
c1004e73:	83 ec 18             	sub    $0x18,%esp
c1004e76:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004e7d:	eb 22                	jmp    c1004ea1 <ide_read+0x31>
c1004e7f:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004e82:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004e85:	01 d0                	add    %edx,%eax
c1004e87:	83 ec 08             	sub    $0x8,%esp
c1004e8a:	50                   	push   %eax
c1004e8b:	ff 75 08             	pushl  0x8(%ebp)
c1004e8e:	e8 69 fe ff ff       	call   c1004cfc <ide_read_sect>
c1004e93:	83 c4 10             	add    $0x10,%esp
c1004e96:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1004e9d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004ea1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004ea4:	39 45 10             	cmp    %eax,0x10(%ebp)
c1004ea7:	77 d6                	ja     c1004e7f <ide_read+0xf>
c1004ea9:	90                   	nop
c1004eaa:	90                   	nop
c1004eab:	c9                   	leave  
c1004eac:	c3                   	ret    

c1004ead <ide_write>:
c1004ead:	55                   	push   %ebp
c1004eae:	89 e5                	mov    %esp,%ebp
c1004eb0:	83 ec 18             	sub    $0x18,%esp
c1004eb3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004eba:	eb 22                	jmp    c1004ede <ide_write+0x31>
c1004ebc:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004ebf:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004ec2:	01 d0                	add    %edx,%eax
c1004ec4:	83 ec 08             	sub    $0x8,%esp
c1004ec7:	50                   	push   %eax
c1004ec8:	ff 75 08             	pushl  0x8(%ebp)
c1004ecb:	e8 e6 fe ff ff       	call   c1004db6 <ide_write_sect>
c1004ed0:	83 c4 10             	add    $0x10,%esp
c1004ed3:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1004eda:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004ede:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004ee1:	39 45 10             	cmp    %eax,0x10(%ebp)
c1004ee4:	77 d6                	ja     c1004ebc <ide_write+0xf>
c1004ee6:	90                   	nop
c1004ee7:	90                   	nop
c1004ee8:	c9                   	leave  
c1004ee9:	c3                   	ret    

c1004eea <delay>:
c1004eea:	55                   	push   %ebp
c1004eeb:	89 e5                	mov    %esp,%ebp
c1004eed:	83 ec 10             	sub    $0x10,%esp
c1004ef0:	8b 45 08             	mov    0x8(%ebp),%eax
c1004ef3:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004ef6:	eb 17                	jmp    c1004f0f <delay+0x25>
c1004ef8:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c1004eff:	eb 04                	jmp    c1004f05 <delay+0x1b>
c1004f01:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c1004f05:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c1004f09:	75 f6                	jne    c1004f01 <delay+0x17>
c1004f0b:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c1004f0f:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1004f13:	75 e3                	jne    c1004ef8 <delay+0xe>
c1004f15:	90                   	nop
c1004f16:	90                   	nop
c1004f17:	c9                   	leave  
c1004f18:	c3                   	ret    

c1004f19 <read_main_partition>:
c1004f19:	55                   	push   %ebp
c1004f1a:	89 e5                	mov    %esp,%ebp
c1004f1c:	83 ec 18             	sub    $0x18,%esp
c1004f1f:	83 ec 08             	sub    $0x8,%esp
c1004f22:	6a 02                	push   $0x2
c1004f24:	68 00 02 00 00       	push   $0x200
c1004f29:	e8 46 da ff ff       	call   c1002974 <vmm_malloc>
c1004f2e:	83 c4 10             	add    $0x10,%esp
c1004f31:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004f34:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004f37:	83 ec 08             	sub    $0x8,%esp
c1004f3a:	6a 00                	push   $0x0
c1004f3c:	50                   	push   %eax
c1004f3d:	e8 ba fd ff ff       	call   c1004cfc <ide_read_sect>
c1004f42:	83 c4 10             	add    $0x10,%esp
c1004f45:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004f48:	05 be 01 00 00       	add    $0x1be,%eax
c1004f4d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004f50:	e8 28 f3 ff ff       	call   c100427d <clear>
c1004f55:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004f58:	0f b6 00             	movzbl (%eax),%eax
c1004f5b:	0f b6 c0             	movzbl %al,%eax
c1004f5e:	83 ec 08             	sub    $0x8,%esp
c1004f61:	50                   	push   %eax
c1004f62:	68 32 a2 00 c1       	push   $0xc100a232
c1004f67:	e8 5c f6 ff ff       	call   c10045c8 <printk>
c1004f6c:	83 c4 10             	add    $0x10,%esp
c1004f6f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004f72:	0f b6 40 01          	movzbl 0x1(%eax),%eax
c1004f76:	0f b6 c0             	movzbl %al,%eax
c1004f79:	83 ec 08             	sub    $0x8,%esp
c1004f7c:	50                   	push   %eax
c1004f7d:	68 45 a2 00 c1       	push   $0xc100a245
c1004f82:	e8 41 f6 ff ff       	call   c10045c8 <printk>
c1004f87:	83 c4 10             	add    $0x10,%esp
c1004f8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004f8d:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c1004f91:	0f b6 c0             	movzbl %al,%eax
c1004f94:	83 ec 08             	sub    $0x8,%esp
c1004f97:	50                   	push   %eax
c1004f98:	68 5b a2 00 c1       	push   $0xc100a25b
c1004f9d:	e8 26 f6 ff ff       	call   c10045c8 <printk>
c1004fa2:	83 c4 10             	add    $0x10,%esp
c1004fa5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004fa8:	0f b6 40 03          	movzbl 0x3(%eax),%eax
c1004fac:	0f b6 c0             	movzbl %al,%eax
c1004faf:	83 ec 08             	sub    $0x8,%esp
c1004fb2:	50                   	push   %eax
c1004fb3:	68 6f a2 00 c1       	push   $0xc100a26f
c1004fb8:	e8 0b f6 ff ff       	call   c10045c8 <printk>
c1004fbd:	83 c4 10             	add    $0x10,%esp
c1004fc0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004fc3:	0f b6 40 04          	movzbl 0x4(%eax),%eax
c1004fc7:	0f b6 c0             	movzbl %al,%eax
c1004fca:	83 ec 08             	sub    $0x8,%esp
c1004fcd:	50                   	push   %eax
c1004fce:	68 85 a2 00 c1       	push   $0xc100a285
c1004fd3:	e8 f0 f5 ff ff       	call   c10045c8 <printk>
c1004fd8:	83 c4 10             	add    $0x10,%esp
c1004fdb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004fde:	0f b6 40 05          	movzbl 0x5(%eax),%eax
c1004fe2:	0f b6 c0             	movzbl %al,%eax
c1004fe5:	83 ec 08             	sub    $0x8,%esp
c1004fe8:	50                   	push   %eax
c1004fe9:	68 96 a2 00 c1       	push   $0xc100a296
c1004fee:	e8 d5 f5 ff ff       	call   c10045c8 <printk>
c1004ff3:	83 c4 10             	add    $0x10,%esp
c1004ff6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004ff9:	0f b6 40 06          	movzbl 0x6(%eax),%eax
c1004ffd:	0f b6 c0             	movzbl %al,%eax
c1005000:	83 ec 08             	sub    $0x8,%esp
c1005003:	50                   	push   %eax
c1005004:	68 aa a2 00 c1       	push   $0xc100a2aa
c1005009:	e8 ba f5 ff ff       	call   c10045c8 <printk>
c100500e:	83 c4 10             	add    $0x10,%esp
c1005011:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005014:	0f b6 40 07          	movzbl 0x7(%eax),%eax
c1005018:	0f b6 c0             	movzbl %al,%eax
c100501b:	83 ec 08             	sub    $0x8,%esp
c100501e:	50                   	push   %eax
c100501f:	68 bc a2 00 c1       	push   $0xc100a2bc
c1005024:	e8 9f f5 ff ff       	call   c10045c8 <printk>
c1005029:	83 c4 10             	add    $0x10,%esp
c100502c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100502f:	8b 40 08             	mov    0x8(%eax),%eax
c1005032:	83 ec 08             	sub    $0x8,%esp
c1005035:	50                   	push   %eax
c1005036:	68 d0 a2 00 c1       	push   $0xc100a2d0
c100503b:	e8 88 f5 ff ff       	call   c10045c8 <printk>
c1005040:	83 c4 10             	add    $0x10,%esp
c1005043:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005046:	8b 40 0c             	mov    0xc(%eax),%eax
c1005049:	83 ec 08             	sub    $0x8,%esp
c100504c:	50                   	push   %eax
c100504d:	68 e4 a2 00 c1       	push   $0xc100a2e4
c1005052:	e8 71 f5 ff ff       	call   c10045c8 <printk>
c1005057:	83 c4 10             	add    $0x10,%esp
c100505a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100505d:	c9                   	leave  
c100505e:	c3                   	ret    

c100505f <test_ide_io>:
c100505f:	55                   	push   %ebp
c1005060:	89 e5                	mov    %esp,%ebp
c1005062:	83 ec 18             	sub    $0x18,%esp
c1005065:	83 ec 08             	sub    $0x8,%esp
c1005068:	68 00 90 10 00       	push   $0x109000
c100506d:	68 f7 a2 00 c1       	push   $0xc100a2f7
c1005072:	e8 51 f5 ff ff       	call   c10045c8 <printk>
c1005077:	83 c4 10             	add    $0x10,%esp
c100507a:	83 ec 08             	sub    $0x8,%esp
c100507d:	68 0c db 00 c1       	push   $0xc100db0c
c1005082:	68 06 a3 00 c1       	push   $0xc100a306
c1005087:	e8 3c f5 ff ff       	call   c10045c8 <printk>
c100508c:	83 c4 10             	add    $0x10,%esp
c100508f:	b8 00 90 10 00       	mov    $0x109000,%eax
c1005094:	2d 01 fe 0f 00       	sub    $0xffe01,%eax
c1005099:	c1 e8 09             	shr    $0x9,%eax
c100509c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100509f:	b8 0c db 00 c1       	mov    $0xc100db0c,%eax
c10050a4:	05 ff 01 00 3f       	add    $0x3f0001ff,%eax
c10050a9:	c1 e8 09             	shr    $0x9,%eax
c10050ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10050af:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10050b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10050b5:	01 d0                	add    %edx,%eax
c10050b7:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10050ba:	83 ec 08             	sub    $0x8,%esp
c10050bd:	ff 75 ec             	pushl  -0x14(%ebp)
c10050c0:	68 15 a3 00 c1       	push   $0xc100a315
c10050c5:	e8 fe f4 ff ff       	call   c10045c8 <printk>
c10050ca:	83 c4 10             	add    $0x10,%esp
c10050cd:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10050d1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10050d8:	e8 3c fe ff ff       	call   c1004f19 <read_main_partition>
c10050dd:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10050e0:	90                   	nop
c10050e1:	c9                   	leave  
c10050e2:	c3                   	ret    

c10050e3 <hash32>:
c10050e3:	55                   	push   %ebp
c10050e4:	89 e5                	mov    %esp,%ebp
c10050e6:	83 ec 10             	sub    $0x10,%esp
c10050e9:	8b 45 08             	mov    0x8(%ebp),%eax
c10050ec:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10050f2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10050f5:	b8 20 00 00 00       	mov    $0x20,%eax
c10050fa:	2b 45 0c             	sub    0xc(%ebp),%eax
c10050fd:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005100:	89 c1                	mov    %eax,%ecx
c1005102:	d3 ea                	shr    %cl,%edx
c1005104:	89 d0                	mov    %edx,%eax
c1005106:	c9                   	leave  
c1005107:	c3                   	ret    

c1005108 <partition_format>:
c1005108:	55                   	push   %ebp
c1005109:	89 e5                	mov    %esp,%ebp
c100510b:	53                   	push   %ebx
c100510c:	81 ec 44 02 00 00    	sub    $0x244,%esp
c1005112:	e8 02 fe ff ff       	call   c1004f19 <read_main_partition>
c1005117:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100511a:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
c1005121:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
c1005128:	c7 45 e4 11 00 00 00 	movl   $0x11,-0x1c(%ebp)
c100512f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005132:	8b 40 0c             	mov    0xc(%eax),%eax
c1005135:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1005138:	2b 45 e8             	sub    -0x18(%ebp),%eax
c100513b:	2b 45 e4             	sub    -0x1c(%ebp),%eax
c100513e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005141:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005144:	05 ff 0f 00 00       	add    $0xfff,%eax
c1005149:	c1 e8 0c             	shr    $0xc,%eax
c100514c:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100514f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005152:	2b 45 dc             	sub    -0x24(%ebp),%eax
c1005155:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005158:	c7 85 bc fd ff ff 18 	movl   $0x19590318,-0x244(%ebp)
c100515f:	03 59 19 
c1005162:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005165:	8b 40 0c             	mov    0xc(%eax),%eax
c1005168:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
c100516e:	c7 85 c4 fd ff ff e8 	movl   $0x3e8,-0x23c(%ebp)
c1005175:	03 00 00 
c1005178:	c7 85 c8 fd ff ff 00 	movl   $0x800,-0x238(%ebp)
c100517f:	08 00 00 
c1005182:	c7 85 cc fd ff ff 01 	movl   $0x801,-0x234(%ebp)
c1005189:	08 00 00 
c100518c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100518f:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c1005195:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
c100519b:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c10051a1:	01 d0                	add    %edx,%eax
c10051a3:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
c10051a9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10051ac:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
c10051b2:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
c10051b8:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c10051be:	01 d0                	add    %edx,%eax
c10051c0:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
c10051c6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10051c9:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
c10051cf:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
c10051d5:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10051db:	01 d0                	add    %edx,%eax
c10051dd:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
c10051e3:	c7 85 e8 fd ff ff 00 	movl   $0x0,-0x218(%ebp)
c10051ea:	00 00 00 
c10051ed:	c7 85 ec fd ff ff 18 	movl   $0x18,-0x214(%ebp)
c10051f4:	00 00 00 
c10051f7:	e8 81 f0 ff ff       	call   c100427d <clear>
c10051fc:	8b 85 bc fd ff ff    	mov    -0x244(%ebp),%eax
c1005202:	83 ec 08             	sub    $0x8,%esp
c1005205:	50                   	push   %eax
c1005206:	68 28 a3 00 c1       	push   $0xc100a328
c100520b:	e8 b8 f3 ff ff       	call   c10045c8 <printk>
c1005210:	83 c4 10             	add    $0x10,%esp
c1005213:	8b 85 c0 fd ff ff    	mov    -0x240(%ebp),%eax
c1005219:	83 ec 08             	sub    $0x8,%esp
c100521c:	50                   	push   %eax
c100521d:	68 38 a3 00 c1       	push   $0xc100a338
c1005222:	e8 a1 f3 ff ff       	call   c10045c8 <printk>
c1005227:	83 c4 10             	add    $0x10,%esp
c100522a:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
c1005230:	83 ec 08             	sub    $0x8,%esp
c1005233:	50                   	push   %eax
c1005234:	68 4a a3 00 c1       	push   $0xc100a34a
c1005239:	e8 8a f3 ff ff       	call   c10045c8 <printk>
c100523e:	83 c4 10             	add    $0x10,%esp
c1005241:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c1005247:	83 ec 08             	sub    $0x8,%esp
c100524a:	50                   	push   %eax
c100524b:	68 5e a3 00 c1       	push   $0xc100a35e
c1005250:	e8 73 f3 ff ff       	call   c10045c8 <printk>
c1005255:	83 c4 10             	add    $0x10,%esp
c1005258:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c100525e:	83 ec 08             	sub    $0x8,%esp
c1005261:	50                   	push   %eax
c1005262:	68 79 a3 00 c1       	push   $0xc100a379
c1005267:	e8 5c f3 ff ff       	call   c10045c8 <printk>
c100526c:	83 c4 10             	add    $0x10,%esp
c100526f:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1005275:	83 ec 08             	sub    $0x8,%esp
c1005278:	50                   	push   %eax
c1005279:	68 96 a3 00 c1       	push   $0xc100a396
c100527e:	e8 45 f3 ff ff       	call   c10045c8 <printk>
c1005283:	83 c4 10             	add    $0x10,%esp
c1005286:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c100528c:	83 ec 08             	sub    $0x8,%esp
c100528f:	50                   	push   %eax
c1005290:	68 b1 a3 00 c1       	push   $0xc100a3b1
c1005295:	e8 2e f3 ff ff       	call   c10045c8 <printk>
c100529a:	83 c4 10             	add    $0x10,%esp
c100529d:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c10052a3:	83 ec 08             	sub    $0x8,%esp
c10052a6:	50                   	push   %eax
c10052a7:	68 ce a3 00 c1       	push   $0xc100a3ce
c10052ac:	e8 17 f3 ff ff       	call   c10045c8 <printk>
c10052b1:	83 c4 10             	add    $0x10,%esp
c10052b4:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10052ba:	83 ec 08             	sub    $0x8,%esp
c10052bd:	50                   	push   %eax
c10052be:	68 e8 a3 00 c1       	push   $0xc100a3e8
c10052c3:	e8 00 f3 ff ff       	call   c10045c8 <printk>
c10052c8:	83 c4 10             	add    $0x10,%esp
c10052cb:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c10052d1:	83 ec 08             	sub    $0x8,%esp
c10052d4:	50                   	push   %eax
c10052d5:	68 04 a4 00 c1       	push   $0xc100a404
c10052da:	e8 e9 f2 ff ff       	call   c10045c8 <printk>
c10052df:	83 c4 10             	add    $0x10,%esp
c10052e2:	83 ec 04             	sub    $0x4,%esp
c10052e5:	6a 01                	push   $0x1
c10052e7:	68 00 08 00 00       	push   $0x800
c10052ec:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
c10052f2:	50                   	push   %eax
c10052f3:	e8 b5 fb ff ff       	call   c1004ead <ide_write>
c10052f8:	83 c4 10             	add    $0x10,%esp
c10052fb:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c1005301:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c1005307:	39 c2                	cmp    %eax,%edx
c1005309:	0f 43 c2             	cmovae %edx,%eax
c100530c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100530f:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1005315:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
c1005318:	0f 43 45 d4          	cmovae -0x2c(%ebp),%eax
c100531c:	c1 e0 09             	shl    $0x9,%eax
c100531f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1005322:	83 ec 08             	sub    $0x8,%esp
c1005325:	6a 02                	push   $0x2
c1005327:	ff 75 d4             	pushl  -0x2c(%ebp)
c100532a:	e8 45 d6 ff ff       	call   c1002974 <vmm_malloc>
c100532f:	83 c4 10             	add    $0x10,%esp
c1005332:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1005335:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005338:	0f b6 00             	movzbl (%eax),%eax
c100533b:	83 c8 01             	or     $0x1,%eax
c100533e:	89 c2                	mov    %eax,%edx
c1005340:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005343:	88 10                	mov    %dl,(%eax)
c1005345:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005348:	c1 e8 03             	shr    $0x3,%eax
c100534b:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100534e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005351:	83 e0 07             	and    $0x7,%eax
c1005354:	88 45 cb             	mov    %al,-0x35(%ebp)
c1005357:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100535a:	25 ff 01 00 00       	and    $0x1ff,%eax
c100535f:	ba 00 02 00 00       	mov    $0x200,%edx
c1005364:	29 c2                	sub    %eax,%edx
c1005366:	89 d0                	mov    %edx,%eax
c1005368:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100536b:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100536e:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005371:	01 d0                	add    %edx,%eax
c1005373:	83 ec 04             	sub    $0x4,%esp
c1005376:	ff 75 c4             	pushl  -0x3c(%ebp)
c1005379:	6a ff                	push   $0xffffffff
c100537b:	50                   	push   %eax
c100537c:	e8 29 ad ff ff       	call   c10000aa <memset>
c1005381:	83 c4 10             	add    $0x10,%esp
c1005384:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1005388:	eb 38                	jmp    c10053c2 <partition_format+0x2ba>
c100538a:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100538d:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005390:	01 d0                	add    %edx,%eax
c1005392:	0f b6 00             	movzbl (%eax),%eax
c1005395:	89 c2                	mov    %eax,%edx
c1005397:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100539b:	bb 01 00 00 00       	mov    $0x1,%ebx
c10053a0:	89 c1                	mov    %eax,%ecx
c10053a2:	d3 e3                	shl    %cl,%ebx
c10053a4:	89 d8                	mov    %ebx,%eax
c10053a6:	f7 d0                	not    %eax
c10053a8:	89 d1                	mov    %edx,%ecx
c10053aa:	21 c1                	and    %eax,%ecx
c10053ac:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10053af:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10053b2:	01 d0                	add    %edx,%eax
c10053b4:	89 ca                	mov    %ecx,%edx
c10053b6:	88 10                	mov    %dl,(%eax)
c10053b8:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10053bc:	83 c0 01             	add    $0x1,%eax
c10053bf:	88 45 f7             	mov    %al,-0x9(%ebp)
c10053c2:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
c10053c6:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c10053ca:	39 c2                	cmp    %eax,%edx
c10053cc:	7c bc                	jl     c100538a <partition_format+0x282>
c10053ce:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
c10053d4:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c10053da:	83 ec 04             	sub    $0x4,%esp
c10053dd:	52                   	push   %edx
c10053de:	50                   	push   %eax
c10053df:	ff 75 d0             	pushl  -0x30(%ebp)
c10053e2:	e8 c6 fa ff ff       	call   c1004ead <ide_write>
c10053e7:	83 c4 10             	add    $0x10,%esp
c10053ea:	83 ec 04             	sub    $0x4,%esp
c10053ed:	ff 75 d4             	pushl  -0x2c(%ebp)
c10053f0:	6a 00                	push   $0x0
c10053f2:	ff 75 d0             	pushl  -0x30(%ebp)
c10053f5:	e8 b0 ac ff ff       	call   c10000aa <memset>
c10053fa:	83 c4 10             	add    $0x10,%esp
c10053fd:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005400:	0f b6 00             	movzbl (%eax),%eax
c1005403:	83 c8 01             	or     $0x1,%eax
c1005406:	89 c2                	mov    %eax,%edx
c1005408:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100540b:	88 10                	mov    %dl,(%eax)
c100540d:	c7 45 cc 7d 00 00 00 	movl   $0x7d,-0x34(%ebp)
c1005414:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
c1005418:	b8 00 02 00 00       	mov    $0x200,%eax
c100541d:	2b 45 cc             	sub    -0x34(%ebp),%eax
c1005420:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1005423:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005426:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005429:	01 d0                	add    %edx,%eax
c100542b:	83 ec 04             	sub    $0x4,%esp
c100542e:	ff 75 c4             	pushl  -0x3c(%ebp)
c1005431:	6a ff                	push   $0xffffffff
c1005433:	50                   	push   %eax
c1005434:	e8 71 ac ff ff       	call   c10000aa <memset>
c1005439:	83 c4 10             	add    $0x10,%esp
c100543c:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c1005440:	eb 38                	jmp    c100547a <partition_format+0x372>
c1005442:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005445:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005448:	01 d0                	add    %edx,%eax
c100544a:	0f b6 00             	movzbl (%eax),%eax
c100544d:	89 c2                	mov    %eax,%edx
c100544f:	0f be 45 f6          	movsbl -0xa(%ebp),%eax
c1005453:	bb 01 00 00 00       	mov    $0x1,%ebx
c1005458:	89 c1                	mov    %eax,%ecx
c100545a:	d3 e3                	shl    %cl,%ebx
c100545c:	89 d8                	mov    %ebx,%eax
c100545e:	f7 d0                	not    %eax
c1005460:	89 d1                	mov    %edx,%ecx
c1005462:	21 c1                	and    %eax,%ecx
c1005464:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005467:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100546a:	01 d0                	add    %edx,%eax
c100546c:	89 ca                	mov    %ecx,%edx
c100546e:	88 10                	mov    %dl,(%eax)
c1005470:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1005474:	83 c0 01             	add    $0x1,%eax
c1005477:	88 45 f6             	mov    %al,-0xa(%ebp)
c100547a:	0f be 55 f6          	movsbl -0xa(%ebp),%edx
c100547e:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1005482:	39 c2                	cmp    %eax,%edx
c1005484:	7c bc                	jl     c1005442 <partition_format+0x33a>
c1005486:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c100548c:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1005492:	83 ec 04             	sub    $0x4,%esp
c1005495:	52                   	push   %edx
c1005496:	50                   	push   %eax
c1005497:	ff 75 d0             	pushl  -0x30(%ebp)
c100549a:	e8 0e fa ff ff       	call   c1004ead <ide_write>
c100549f:	83 c4 10             	add    $0x10,%esp
c10054a2:	83 ec 04             	sub    $0x4,%esp
c10054a5:	ff 75 d4             	pushl  -0x2c(%ebp)
c10054a8:	6a 00                	push   $0x0
c10054aa:	ff 75 d0             	pushl  -0x30(%ebp)
c10054ad:	e8 f8 ab ff ff       	call   c10000aa <memset>
c10054b2:	83 c4 10             	add    $0x10,%esp
c10054b5:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10054b8:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10054bb:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
c10054c1:	8d 14 00             	lea    (%eax,%eax,1),%edx
c10054c4:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10054c7:	89 50 04             	mov    %edx,0x4(%eax)
c10054ca:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10054cd:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10054d3:	8b 95 e4 fd ff ff    	mov    -0x21c(%ebp),%edx
c10054d9:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10054dc:	89 50 10             	mov    %edx,0x10(%eax)
c10054df:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
c10054e5:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c10054eb:	83 ec 04             	sub    $0x4,%esp
c10054ee:	52                   	push   %edx
c10054ef:	50                   	push   %eax
c10054f0:	ff 75 d0             	pushl  -0x30(%ebp)
c10054f3:	e8 b5 f9 ff ff       	call   c1004ead <ide_write>
c10054f8:	83 c4 10             	add    $0x10,%esp
c10054fb:	83 ec 04             	sub    $0x4,%esp
c10054fe:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005501:	6a 00                	push   $0x0
c1005503:	ff 75 d0             	pushl  -0x30(%ebp)
c1005506:	e8 9f ab ff ff       	call   c10000aa <memset>
c100550b:	83 c4 10             	add    $0x10,%esp
c100550e:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005511:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1005514:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005517:	83 ec 04             	sub    $0x4,%esp
c100551a:	6a 01                	push   $0x1
c100551c:	68 1d a4 00 c1       	push   $0xc100a41d
c1005521:	50                   	push   %eax
c1005522:	e8 e1 ab ff ff       	call   c1000108 <memcpy>
c1005527:	83 c4 10             	add    $0x10,%esp
c100552a:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100552d:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005534:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005537:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100553e:	83 45 bc 18          	addl   $0x18,-0x44(%ebp)
c1005542:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005545:	83 ec 04             	sub    $0x4,%esp
c1005548:	6a 02                	push   $0x2
c100554a:	68 1f a4 00 c1       	push   $0xc100a41f
c100554f:	50                   	push   %eax
c1005550:	e8 b3 ab ff ff       	call   c1000108 <memcpy>
c1005555:	83 c4 10             	add    $0x10,%esp
c1005558:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100555b:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005562:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005565:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100556c:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c1005572:	83 ec 04             	sub    $0x4,%esp
c1005575:	6a 01                	push   $0x1
c1005577:	50                   	push   %eax
c1005578:	ff 75 d0             	pushl  -0x30(%ebp)
c100557b:	e8 2d f9 ff ff       	call   c1004ead <ide_write>
c1005580:	83 c4 10             	add    $0x10,%esp
c1005583:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005586:	83 ec 08             	sub    $0x8,%esp
c1005589:	ff 75 d4             	pushl  -0x2c(%ebp)
c100558c:	50                   	push   %eax
c100558d:	e8 07 d5 ff ff       	call   c1002a99 <vmm_free>
c1005592:	83 c4 10             	add    $0x10,%esp
c1005595:	90                   	nop
c1005596:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1005599:	c9                   	leave  
c100559a:	c3                   	ret    

c100559b <mount_partition>:
c100559b:	55                   	push   %ebp
c100559c:	89 e5                	mov    %esp,%ebp
c100559e:	83 ec 18             	sub    $0x18,%esp
c10055a1:	e8 73 f9 ff ff       	call   c1004f19 <read_main_partition>
c10055a6:	a3 30 32 a1 c1       	mov    %eax,0xc1a13230
c10055ab:	83 ec 08             	sub    $0x8,%esp
c10055ae:	6a 02                	push   $0x2
c10055b0:	68 00 02 00 00       	push   $0x200
c10055b5:	e8 ba d3 ff ff       	call   c1002974 <vmm_malloc>
c10055ba:	83 c4 10             	add    $0x10,%esp
c10055bd:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10055c0:	83 ec 04             	sub    $0x4,%esp
c10055c3:	68 00 02 00 00       	push   $0x200
c10055c8:	6a 00                	push   $0x0
c10055ca:	ff 75 f0             	pushl  -0x10(%ebp)
c10055cd:	e8 d8 aa ff ff       	call   c10000aa <memset>
c10055d2:	83 c4 10             	add    $0x10,%esp
c10055d5:	83 ec 04             	sub    $0x4,%esp
c10055d8:	6a 01                	push   $0x1
c10055da:	68 00 08 00 00       	push   $0x800
c10055df:	ff 75 f0             	pushl  -0x10(%ebp)
c10055e2:	e8 89 f8 ff ff       	call   c1004e70 <ide_read>
c10055e7:	83 c4 10             	add    $0x10,%esp
c10055ea:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10055ef:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10055f2:	89 50 10             	mov    %edx,0x10(%eax)
c10055f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10055f8:	8b 40 14             	mov    0x14(%eax),%eax
c10055fb:	c1 e0 09             	shl    $0x9,%eax
c10055fe:	83 ec 08             	sub    $0x8,%esp
c1005601:	6a 02                	push   $0x2
c1005603:	50                   	push   %eax
c1005604:	e8 6b d3 ff ff       	call   c1002974 <vmm_malloc>
c1005609:	83 c4 10             	add    $0x10,%esp
c100560c:	89 c2                	mov    %eax,%edx
c100560e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005613:	89 50 18             	mov    %edx,0x18(%eax)
c1005616:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005619:	8b 50 14             	mov    0x14(%eax),%edx
c100561c:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005621:	c1 e2 09             	shl    $0x9,%edx
c1005624:	89 50 14             	mov    %edx,0x14(%eax)
c1005627:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100562a:	8b 48 14             	mov    0x14(%eax),%ecx
c100562d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005630:	8b 50 10             	mov    0x10(%eax),%edx
c1005633:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005638:	8b 40 18             	mov    0x18(%eax),%eax
c100563b:	83 ec 04             	sub    $0x4,%esp
c100563e:	51                   	push   %ecx
c100563f:	52                   	push   %edx
c1005640:	50                   	push   %eax
c1005641:	e8 2a f8 ff ff       	call   c1004e70 <ide_read>
c1005646:	83 c4 10             	add    $0x10,%esp
c1005649:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100564c:	8b 40 1c             	mov    0x1c(%eax),%eax
c100564f:	c1 e0 09             	shl    $0x9,%eax
c1005652:	83 ec 08             	sub    $0x8,%esp
c1005655:	6a 02                	push   $0x2
c1005657:	50                   	push   %eax
c1005658:	e8 17 d3 ff ff       	call   c1002974 <vmm_malloc>
c100565d:	83 c4 10             	add    $0x10,%esp
c1005660:	89 c2                	mov    %eax,%edx
c1005662:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005667:	89 50 20             	mov    %edx,0x20(%eax)
c100566a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100566d:	8b 50 1c             	mov    0x1c(%eax),%edx
c1005670:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005675:	c1 e2 09             	shl    $0x9,%edx
c1005678:	89 50 1c             	mov    %edx,0x1c(%eax)
c100567b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100567e:	8b 48 1c             	mov    0x1c(%eax),%ecx
c1005681:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005684:	8b 50 18             	mov    0x18(%eax),%edx
c1005687:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100568c:	8b 40 20             	mov    0x20(%eax),%eax
c100568f:	83 ec 04             	sub    $0x4,%esp
c1005692:	51                   	push   %ecx
c1005693:	52                   	push   %edx
c1005694:	50                   	push   %eax
c1005695:	e8 d6 f7 ff ff       	call   c1004e70 <ide_read>
c100569a:	83 c4 10             	add    $0x10,%esp
c100569d:	e8 db eb ff ff       	call   c100427d <clear>
c10056a2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10056a7:	8b 40 10             	mov    0x10(%eax),%eax
c10056aa:	8b 00                	mov    (%eax),%eax
c10056ac:	83 ec 08             	sub    $0x8,%esp
c10056af:	50                   	push   %eax
c10056b0:	68 28 a3 00 c1       	push   $0xc100a328
c10056b5:	e8 0e ef ff ff       	call   c10045c8 <printk>
c10056ba:	83 c4 10             	add    $0x10,%esp
c10056bd:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10056c2:	8b 40 10             	mov    0x10(%eax),%eax
c10056c5:	8b 40 04             	mov    0x4(%eax),%eax
c10056c8:	83 ec 08             	sub    $0x8,%esp
c10056cb:	50                   	push   %eax
c10056cc:	68 38 a3 00 c1       	push   $0xc100a338
c10056d1:	e8 f2 ee ff ff       	call   c10045c8 <printk>
c10056d6:	83 c4 10             	add    $0x10,%esp
c10056d9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10056de:	8b 40 10             	mov    0x10(%eax),%eax
c10056e1:	8b 40 08             	mov    0x8(%eax),%eax
c10056e4:	83 ec 08             	sub    $0x8,%esp
c10056e7:	50                   	push   %eax
c10056e8:	68 4a a3 00 c1       	push   $0xc100a34a
c10056ed:	e8 d6 ee ff ff       	call   c10045c8 <printk>
c10056f2:	83 c4 10             	add    $0x10,%esp
c10056f5:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10056fa:	8b 40 10             	mov    0x10(%eax),%eax
c10056fd:	8b 40 10             	mov    0x10(%eax),%eax
c1005700:	83 ec 08             	sub    $0x8,%esp
c1005703:	50                   	push   %eax
c1005704:	68 5e a3 00 c1       	push   $0xc100a35e
c1005709:	e8 ba ee ff ff       	call   c10045c8 <printk>
c100570e:	83 c4 10             	add    $0x10,%esp
c1005711:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005716:	8b 40 10             	mov    0x10(%eax),%eax
c1005719:	8b 40 14             	mov    0x14(%eax),%eax
c100571c:	83 ec 08             	sub    $0x8,%esp
c100571f:	50                   	push   %eax
c1005720:	68 79 a3 00 c1       	push   $0xc100a379
c1005725:	e8 9e ee ff ff       	call   c10045c8 <printk>
c100572a:	83 c4 10             	add    $0x10,%esp
c100572d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005732:	8b 40 10             	mov    0x10(%eax),%eax
c1005735:	8b 40 18             	mov    0x18(%eax),%eax
c1005738:	83 ec 08             	sub    $0x8,%esp
c100573b:	50                   	push   %eax
c100573c:	68 96 a3 00 c1       	push   $0xc100a396
c1005741:	e8 82 ee ff ff       	call   c10045c8 <printk>
c1005746:	83 c4 10             	add    $0x10,%esp
c1005749:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100574e:	8b 40 10             	mov    0x10(%eax),%eax
c1005751:	8b 40 1c             	mov    0x1c(%eax),%eax
c1005754:	83 ec 08             	sub    $0x8,%esp
c1005757:	50                   	push   %eax
c1005758:	68 b1 a3 00 c1       	push   $0xc100a3b1
c100575d:	e8 66 ee ff ff       	call   c10045c8 <printk>
c1005762:	83 c4 10             	add    $0x10,%esp
c1005765:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100576a:	8b 40 10             	mov    0x10(%eax),%eax
c100576d:	8b 40 20             	mov    0x20(%eax),%eax
c1005770:	83 ec 08             	sub    $0x8,%esp
c1005773:	50                   	push   %eax
c1005774:	68 ce a3 00 c1       	push   $0xc100a3ce
c1005779:	e8 4a ee ff ff       	call   c10045c8 <printk>
c100577e:	83 c4 10             	add    $0x10,%esp
c1005781:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005786:	8b 40 10             	mov    0x10(%eax),%eax
c1005789:	8b 40 24             	mov    0x24(%eax),%eax
c100578c:	83 ec 08             	sub    $0x8,%esp
c100578f:	50                   	push   %eax
c1005790:	68 e8 a3 00 c1       	push   $0xc100a3e8
c1005795:	e8 2e ee ff ff       	call   c10045c8 <printk>
c100579a:	83 c4 10             	add    $0x10,%esp
c100579d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10057a2:	8b 40 10             	mov    0x10(%eax),%eax
c10057a5:	8b 40 28             	mov    0x28(%eax),%eax
c10057a8:	83 ec 08             	sub    $0x8,%esp
c10057ab:	50                   	push   %eax
c10057ac:	68 04 a4 00 c1       	push   $0xc100a404
c10057b1:	e8 12 ee ff ff       	call   c10045c8 <printk>
c10057b6:	83 c4 10             	add    $0x10,%esp
c10057b9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10057be:	8b 40 18             	mov    0x18(%eax),%eax
c10057c1:	83 ec 08             	sub    $0x8,%esp
c10057c4:	50                   	push   %eax
c10057c5:	68 24 a4 00 c1       	push   $0xc100a424
c10057ca:	e8 f9 ed ff ff       	call   c10045c8 <printk>
c10057cf:	83 c4 10             	add    $0x10,%esp
c10057d2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10057d7:	8b 40 14             	mov    0x14(%eax),%eax
c10057da:	83 ec 08             	sub    $0x8,%esp
c10057dd:	50                   	push   %eax
c10057de:	68 48 a4 00 c1       	push   $0xc100a448
c10057e3:	e8 e0 ed ff ff       	call   c10045c8 <printk>
c10057e8:	83 c4 10             	add    $0x10,%esp
c10057eb:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10057f0:	8b 40 20             	mov    0x20(%eax),%eax
c10057f3:	83 ec 08             	sub    $0x8,%esp
c10057f6:	50                   	push   %eax
c10057f7:	68 78 a4 00 c1       	push   $0xc100a478
c10057fc:	e8 c7 ed ff ff       	call   c10045c8 <printk>
c1005801:	83 c4 10             	add    $0x10,%esp
c1005804:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005809:	8b 40 1c             	mov    0x1c(%eax),%eax
c100580c:	83 ec 08             	sub    $0x8,%esp
c100580f:	50                   	push   %eax
c1005810:	68 9c a4 00 c1       	push   $0xc100a49c
c1005815:	e8 ae ed ff ff       	call   c10045c8 <printk>
c100581a:	83 c4 10             	add    $0x10,%esp
c100581d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005822:	83 ec 0c             	sub    $0xc,%esp
c1005825:	50                   	push   %eax
c1005826:	e8 31 19 00 00       	call   c100715c <open_root_dir>
c100582b:	83 c4 10             	add    $0x10,%esp
c100582e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005835:	eb 1d                	jmp    c1005854 <mount_partition+0x2b9>
c1005837:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100583a:	8d 42 01             	lea    0x1(%edx),%eax
c100583d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005840:	89 d0                	mov    %edx,%eax
c1005842:	01 c0                	add    %eax,%eax
c1005844:	01 d0                	add    %edx,%eax
c1005846:	c1 e0 02             	shl    $0x2,%eax
c1005849:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c100584e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005854:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1005858:	76 dd                	jbe    c1005837 <mount_partition+0x29c>
c100585a:	90                   	nop
c100585b:	90                   	nop
c100585c:	c9                   	leave  
c100585d:	c3                   	ret    

c100585e <path_parse>:
c100585e:	55                   	push   %ebp
c100585f:	89 e5                	mov    %esp,%ebp
c1005861:	8b 45 08             	mov    0x8(%ebp),%eax
c1005864:	0f b6 00             	movzbl (%eax),%eax
c1005867:	3c 2f                	cmp    $0x2f,%al
c1005869:	75 27                	jne    c1005892 <path_parse+0x34>
c100586b:	83 45 08 01          	addl   $0x1,0x8(%ebp)
c100586f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005872:	0f b6 00             	movzbl (%eax),%eax
c1005875:	3c 2f                	cmp    $0x2f,%al
c1005877:	74 f2                	je     c100586b <path_parse+0xd>
c1005879:	eb 17                	jmp    c1005892 <path_parse+0x34>
c100587b:	8b 55 08             	mov    0x8(%ebp),%edx
c100587e:	8d 42 01             	lea    0x1(%edx),%eax
c1005881:	89 45 08             	mov    %eax,0x8(%ebp)
c1005884:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005887:	8d 48 01             	lea    0x1(%eax),%ecx
c100588a:	89 4d 0c             	mov    %ecx,0xc(%ebp)
c100588d:	0f b6 12             	movzbl (%edx),%edx
c1005890:	88 10                	mov    %dl,(%eax)
c1005892:	8b 45 08             	mov    0x8(%ebp),%eax
c1005895:	0f b6 00             	movzbl (%eax),%eax
c1005898:	3c 2f                	cmp    $0x2f,%al
c100589a:	74 0a                	je     c10058a6 <path_parse+0x48>
c100589c:	8b 45 08             	mov    0x8(%ebp),%eax
c100589f:	0f b6 00             	movzbl (%eax),%eax
c10058a2:	84 c0                	test   %al,%al
c10058a4:	75 d5                	jne    c100587b <path_parse+0x1d>
c10058a6:	8b 45 08             	mov    0x8(%ebp),%eax
c10058a9:	0f b6 00             	movzbl (%eax),%eax
c10058ac:	84 c0                	test   %al,%al
c10058ae:	75 07                	jne    c10058b7 <path_parse+0x59>
c10058b0:	b8 00 00 00 00       	mov    $0x0,%eax
c10058b5:	eb 03                	jmp    c10058ba <path_parse+0x5c>
c10058b7:	8b 45 08             	mov    0x8(%ebp),%eax
c10058ba:	5d                   	pop    %ebp
c10058bb:	c3                   	ret    

c10058bc <path_depth_cnt>:
c10058bc:	55                   	push   %ebp
c10058bd:	89 e5                	mov    %esp,%ebp
c10058bf:	83 ec 28             	sub    $0x28,%esp
c10058c2:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10058c6:	75 19                	jne    c10058e1 <path_depth_cnt+0x25>
c10058c8:	68 c9 a4 00 c1       	push   $0xc100a4c9
c10058cd:	68 a4 ab 00 c1       	push   $0xc100aba4
c10058d2:	68 d1 00 00 00       	push   $0xd1
c10058d7:	68 dc a4 00 c1       	push   $0xc100a4dc
c10058dc:	e8 2c aa ff ff       	call   c100030d <__PANIC>
c10058e1:	8b 45 08             	mov    0x8(%ebp),%eax
c10058e4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10058e7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10058ee:	83 ec 08             	sub    $0x8,%esp
c10058f1:	8d 45 e0             	lea    -0x20(%ebp),%eax
c10058f4:	50                   	push   %eax
c10058f5:	ff 75 f4             	pushl  -0xc(%ebp)
c10058f8:	e8 61 ff ff ff       	call   c100585e <path_parse>
c10058fd:	83 c4 10             	add    $0x10,%esp
c1005900:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005903:	eb 32                	jmp    c1005937 <path_depth_cnt+0x7b>
c1005905:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1005909:	83 ec 04             	sub    $0x4,%esp
c100590c:	6a 10                	push   $0x10
c100590e:	6a 00                	push   $0x0
c1005910:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1005913:	50                   	push   %eax
c1005914:	e8 91 a7 ff ff       	call   c10000aa <memset>
c1005919:	83 c4 10             	add    $0x10,%esp
c100591c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1005920:	74 15                	je     c1005937 <path_depth_cnt+0x7b>
c1005922:	83 ec 08             	sub    $0x8,%esp
c1005925:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1005928:	50                   	push   %eax
c1005929:	ff 75 f4             	pushl  -0xc(%ebp)
c100592c:	e8 2d ff ff ff       	call   c100585e <path_parse>
c1005931:	83 c4 10             	add    $0x10,%esp
c1005934:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005937:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c100593b:	84 c0                	test   %al,%al
c100593d:	75 c6                	jne    c1005905 <path_depth_cnt+0x49>
c100593f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005942:	c9                   	leave  
c1005943:	c3                   	ret    

c1005944 <search_file>:
c1005944:	55                   	push   %ebp
c1005945:	89 e5                	mov    %esp,%ebp
c1005947:	57                   	push   %edi
c1005948:	53                   	push   %ebx
c1005949:	83 ec 40             	sub    $0x40,%esp
c100594c:	83 ec 08             	sub    $0x8,%esp
c100594f:	68 0b a5 00 c1       	push   $0xc100a50b
c1005954:	ff 75 08             	pushl  0x8(%ebp)
c1005957:	e8 27 a8 ff ff       	call   c1000183 <strcmp>
c100595c:	83 c4 10             	add    $0x10,%esp
c100595f:	85 c0                	test   %eax,%eax
c1005961:	74 2e                	je     c1005991 <search_file+0x4d>
c1005963:	83 ec 08             	sub    $0x8,%esp
c1005966:	68 0d a5 00 c1       	push   $0xc100a50d
c100596b:	ff 75 08             	pushl  0x8(%ebp)
c100596e:	e8 10 a8 ff ff       	call   c1000183 <strcmp>
c1005973:	83 c4 10             	add    $0x10,%esp
c1005976:	85 c0                	test   %eax,%eax
c1005978:	74 17                	je     c1005991 <search_file+0x4d>
c100597a:	83 ec 08             	sub    $0x8,%esp
c100597d:	68 10 a5 00 c1       	push   $0xc100a510
c1005982:	ff 75 08             	pushl  0x8(%ebp)
c1005985:	e8 f9 a7 ff ff       	call   c1000183 <strcmp>
c100598a:	83 c4 10             	add    $0x10,%esp
c100598d:	85 c0                	test   %eax,%eax
c100598f:	75 2c                	jne    c10059bd <search_file+0x79>
c1005991:	8b 15 34 32 a1 c1    	mov    0xc1a13234,%edx
c1005997:	8b 45 0c             	mov    0xc(%ebp),%eax
c100599a:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c10059a0:	8b 45 0c             	mov    0xc(%ebp),%eax
c10059a3:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c10059aa:	00 00 00 
c10059ad:	8b 45 0c             	mov    0xc(%ebp),%eax
c10059b0:	c6 00 00             	movb   $0x0,(%eax)
c10059b3:	b8 00 00 00 00       	mov    $0x0,%eax
c10059b8:	e9 10 02 00 00       	jmp    c1005bcd <search_file+0x289>
c10059bd:	83 ec 0c             	sub    $0xc,%esp
c10059c0:	ff 75 08             	pushl  0x8(%ebp)
c10059c3:	e8 56 a7 ff ff       	call   c100011e <strlen>
c10059c8:	83 c4 10             	add    $0x10,%esp
c10059cb:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10059ce:	8b 45 08             	mov    0x8(%ebp),%eax
c10059d1:	0f b6 00             	movzbl (%eax),%eax
c10059d4:	3c 2f                	cmp    $0x2f,%al
c10059d6:	75 0f                	jne    c10059e7 <search_file+0xa3>
c10059d8:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c10059dc:	76 09                	jbe    c10059e7 <search_file+0xa3>
c10059de:	81 7d e8 ff 01 00 00 	cmpl   $0x1ff,-0x18(%ebp)
c10059e5:	76 19                	jbe    c1005a00 <search_file+0xbc>
c10059e7:	68 14 a5 00 c1       	push   $0xc100a514
c10059ec:	68 b4 ab 00 c1       	push   $0xc100abb4
c10059f1:	68 ee 00 00 00       	push   $0xee
c10059f6:	68 dc a4 00 c1       	push   $0xc100a4dc
c10059fb:	e8 0d a9 ff ff       	call   c100030d <__PANIC>
c1005a00:	8b 45 08             	mov    0x8(%ebp),%eax
c1005a03:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005a06:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1005a0b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005a0e:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
c1005a15:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
c1005a1c:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
c1005a23:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
c1005a2a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005a2d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005a30:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1005a36:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005a39:	c7 80 04 02 00 00 00 	movl   $0x0,0x204(%eax)
c1005a40:	00 00 00 
c1005a43:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1005a4a:	83 ec 08             	sub    $0x8,%esp
c1005a4d:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1005a50:	50                   	push   %eax
c1005a51:	ff 75 f4             	pushl  -0xc(%ebp)
c1005a54:	e8 05 fe ff ff       	call   c100585e <path_parse>
c1005a59:	83 c4 10             	add    $0x10,%esp
c1005a5c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005a5f:	e9 1b 01 00 00       	jmp    c1005b7f <search_file+0x23b>
c1005a64:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005a67:	83 ec 0c             	sub    $0xc,%esp
c1005a6a:	50                   	push   %eax
c1005a6b:	e8 ae a6 ff ff       	call   c100011e <strlen>
c1005a70:	83 c4 10             	add    $0x10,%esp
c1005a73:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1005a78:	76 19                	jbe    c1005a93 <search_file+0x14f>
c1005a7a:	68 54 a5 00 c1       	push   $0xc100a554
c1005a7f:	68 b4 ab 00 c1       	push   $0xc100abb4
c1005a84:	68 ff 00 00 00       	push   $0xff
c1005a89:	68 dc a4 00 c1       	push   $0xc100a4dc
c1005a8e:	e8 7a a8 ff ff       	call   c100030d <__PANIC>
c1005a93:	8b 55 0c             	mov    0xc(%ebp),%edx
c1005a96:	89 d0                	mov    %edx,%eax
c1005a98:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1005a9d:	89 c3                	mov    %eax,%ebx
c1005a9f:	b8 00 00 00 00       	mov    $0x0,%eax
c1005aa4:	89 df                	mov    %ebx,%edi
c1005aa6:	f2 ae                	repnz scas %es:(%edi),%al
c1005aa8:	89 c8                	mov    %ecx,%eax
c1005aaa:	f7 d0                	not    %eax
c1005aac:	83 e8 01             	sub    $0x1,%eax
c1005aaf:	01 d0                	add    %edx,%eax
c1005ab1:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1005ab6:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005ab9:	83 ec 08             	sub    $0x8,%esp
c1005abc:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1005abf:	52                   	push   %edx
c1005ac0:	50                   	push   %eax
c1005ac1:	e8 0f a7 ff ff       	call   c10001d5 <strcat>
c1005ac6:	83 c4 10             	add    $0x10,%esp
c1005ac9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005ace:	8d 55 d0             	lea    -0x30(%ebp),%edx
c1005ad1:	52                   	push   %edx
c1005ad2:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1005ad5:	52                   	push   %edx
c1005ad6:	ff 75 f0             	pushl  -0x10(%ebp)
c1005ad9:	50                   	push   %eax
c1005ada:	e8 3f 17 00 00       	call   c100721e <search_dir_entry>
c1005adf:	83 c4 10             	add    $0x10,%esp
c1005ae2:	84 c0                	test   %al,%al
c1005ae4:	0f 84 8e 00 00 00    	je     c1005b78 <search_file+0x234>
c1005aea:	83 ec 04             	sub    $0x4,%esp
c1005aed:	6a 10                	push   $0x10
c1005aef:	6a 00                	push   $0x0
c1005af1:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1005af4:	50                   	push   %eax
c1005af5:	e8 b0 a5 ff ff       	call   c10000aa <memset>
c1005afa:	83 c4 10             	add    $0x10,%esp
c1005afd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1005b01:	74 15                	je     c1005b18 <search_file+0x1d4>
c1005b03:	83 ec 08             	sub    $0x8,%esp
c1005b06:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1005b09:	50                   	push   %eax
c1005b0a:	ff 75 f4             	pushl  -0xc(%ebp)
c1005b0d:	e8 4c fd ff ff       	call   c100585e <path_parse>
c1005b12:	83 c4 10             	add    $0x10,%esp
c1005b15:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005b18:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005b1b:	83 f8 02             	cmp    $0x2,%eax
c1005b1e:	75 3e                	jne    c1005b5e <search_file+0x21a>
c1005b20:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005b23:	8b 00                	mov    (%eax),%eax
c1005b25:	8b 00                	mov    (%eax),%eax
c1005b27:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005b2a:	83 ec 0c             	sub    $0xc,%esp
c1005b2d:	ff 75 f0             	pushl  -0x10(%ebp)
c1005b30:	e8 d5 18 00 00       	call   c100740a <dir_close>
c1005b35:	83 c4 10             	add    $0x10,%esp
c1005b38:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005b3b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005b40:	83 ec 08             	sub    $0x8,%esp
c1005b43:	52                   	push   %edx
c1005b44:	50                   	push   %eax
c1005b45:	e8 94 16 00 00       	call   c10071de <dir_open>
c1005b4a:	83 c4 10             	add    $0x10,%esp
c1005b4d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005b50:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005b53:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005b56:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1005b5c:	eb 21                	jmp    c1005b7f <search_file+0x23b>
c1005b5e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005b61:	83 f8 01             	cmp    $0x1,%eax
c1005b64:	75 19                	jne    c1005b7f <search_file+0x23b>
c1005b66:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005b69:	c7 80 04 02 00 00 01 	movl   $0x1,0x204(%eax)
c1005b70:	00 00 00 
c1005b73:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005b76:	eb 55                	jmp    c1005bcd <search_file+0x289>
c1005b78:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005b7d:	eb 4e                	jmp    c1005bcd <search_file+0x289>
c1005b7f:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
c1005b83:	84 c0                	test   %al,%al
c1005b85:	0f 85 d9 fe ff ff    	jne    c1005a64 <search_file+0x120>
c1005b8b:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005b8e:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
c1005b94:	83 ec 0c             	sub    $0xc,%esp
c1005b97:	50                   	push   %eax
c1005b98:	e8 6d 18 00 00       	call   c100740a <dir_close>
c1005b9d:	83 c4 10             	add    $0x10,%esp
c1005ba0:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005ba5:	83 ec 08             	sub    $0x8,%esp
c1005ba8:	ff 75 ec             	pushl  -0x14(%ebp)
c1005bab:	50                   	push   %eax
c1005bac:	e8 2d 16 00 00       	call   c10071de <dir_open>
c1005bb1:	83 c4 10             	add    $0x10,%esp
c1005bb4:	8b 55 0c             	mov    0xc(%ebp),%edx
c1005bb7:	89 82 00 02 00 00    	mov    %eax,0x200(%edx)
c1005bbd:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005bc0:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1005bc7:	00 00 00 
c1005bca:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005bcd:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1005bd0:	5b                   	pop    %ebx
c1005bd1:	5f                   	pop    %edi
c1005bd2:	5d                   	pop    %ebp
c1005bd3:	c3                   	ret    

c1005bd4 <sys_open>:
c1005bd4:	55                   	push   %ebp
c1005bd5:	89 e5                	mov    %esp,%ebp
c1005bd7:	53                   	push   %ebx
c1005bd8:	81 ec 34 02 00 00    	sub    $0x234,%esp
c1005bde:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005be1:	88 85 d4 fd ff ff    	mov    %al,-0x22c(%ebp)
c1005be7:	83 ec 0c             	sub    $0xc,%esp
c1005bea:	ff 75 08             	pushl  0x8(%ebp)
c1005bed:	e8 2c a5 ff ff       	call   c100011e <strlen>
c1005bf2:	83 c4 10             	add    $0x10,%esp
c1005bf5:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005bf8:	8b 45 08             	mov    0x8(%ebp),%eax
c1005bfb:	01 d0                	add    %edx,%eax
c1005bfd:	0f b6 00             	movzbl (%eax),%eax
c1005c00:	3c 2f                	cmp    $0x2f,%al
c1005c02:	75 1d                	jne    c1005c21 <sys_open+0x4d>
c1005c04:	83 ec 08             	sub    $0x8,%esp
c1005c07:	ff 75 08             	pushl  0x8(%ebp)
c1005c0a:	68 81 a5 00 c1       	push   $0xc100a581
c1005c0f:	e8 b4 e9 ff ff       	call   c10045c8 <printk>
c1005c14:	83 c4 10             	add    $0x10,%esp
c1005c17:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005c1c:	e9 35 02 00 00       	jmp    c1005e56 <sys_open+0x282>
c1005c21:	80 bd d4 fd ff ff 07 	cmpb   $0x7,-0x22c(%ebp)
c1005c28:	76 19                	jbe    c1005c43 <sys_open+0x6f>
c1005c2a:	68 9c a5 00 c1       	push   $0xc100a59c
c1005c2f:	68 c0 ab 00 c1       	push   $0xc100abc0
c1005c34:	68 2d 01 00 00       	push   $0x12d
c1005c39:	68 dc a4 00 c1       	push   $0xc100a4dc
c1005c3e:	e8 ca a6 ff ff       	call   c100030d <__PANIC>
c1005c43:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1005c4a:	83 ec 04             	sub    $0x4,%esp
c1005c4d:	68 08 02 00 00       	push   $0x208
c1005c52:	6a 00                	push   $0x0
c1005c54:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005c5a:	50                   	push   %eax
c1005c5b:	e8 4a a4 ff ff       	call   c10000aa <memset>
c1005c60:	83 c4 10             	add    $0x10,%esp
c1005c63:	83 ec 0c             	sub    $0xc,%esp
c1005c66:	ff 75 08             	pushl  0x8(%ebp)
c1005c69:	e8 4e fc ff ff       	call   c10058bc <path_depth_cnt>
c1005c6e:	83 c4 10             	add    $0x10,%esp
c1005c71:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005c74:	83 ec 08             	sub    $0x8,%esp
c1005c77:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005c7d:	50                   	push   %eax
c1005c7e:	ff 75 08             	pushl  0x8(%ebp)
c1005c81:	e8 be fc ff ff       	call   c1005944 <search_file>
c1005c86:	83 c4 10             	add    $0x10,%esp
c1005c89:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005c8c:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
c1005c90:	0f 95 c0             	setne  %al
c1005c93:	88 45 eb             	mov    %al,-0x15(%ebp)
c1005c96:	0f be 45 eb          	movsbl -0x15(%ebp),%eax
c1005c9a:	83 ec 08             	sub    $0x8,%esp
c1005c9d:	50                   	push   %eax
c1005c9e:	68 a7 a5 00 c1       	push   $0xc100a5a7
c1005ca3:	e8 20 e9 ff ff       	call   c10045c8 <printk>
c1005ca8:	83 c4 10             	add    $0x10,%esp
c1005cab:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005cae:	83 f8 02             	cmp    $0x2,%eax
c1005cb1:	75 29                	jne    c1005cdc <sys_open+0x108>
c1005cb3:	83 ec 0c             	sub    $0xc,%esp
c1005cb6:	68 b8 a5 00 c1       	push   $0xc100a5b8
c1005cbb:	e8 08 e9 ff ff       	call   c10045c8 <printk>
c1005cc0:	83 c4 10             	add    $0x10,%esp
c1005cc3:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005cc6:	83 ec 0c             	sub    $0xc,%esp
c1005cc9:	50                   	push   %eax
c1005cca:	e8 3b 17 00 00       	call   c100740a <dir_close>
c1005ccf:	83 c4 10             	add    $0x10,%esp
c1005cd2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005cd7:	e9 7a 01 00 00       	jmp    c1005e56 <sys_open+0x282>
c1005cdc:	83 ec 0c             	sub    $0xc,%esp
c1005cdf:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005ce5:	50                   	push   %eax
c1005ce6:	e8 d1 fb ff ff       	call   c10058bc <path_depth_cnt>
c1005ceb:	83 c4 10             	add    $0x10,%esp
c1005cee:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1005cf1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005cf4:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1005cf7:	74 33                	je     c1005d2c <sys_open+0x158>
c1005cf9:	83 ec 04             	sub    $0x4,%esp
c1005cfc:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005d02:	50                   	push   %eax
c1005d03:	ff 75 08             	pushl  0x8(%ebp)
c1005d06:	68 f8 a5 00 c1       	push   $0xc100a5f8
c1005d0b:	e8 b8 e8 ff ff       	call   c10045c8 <printk>
c1005d10:	83 c4 10             	add    $0x10,%esp
c1005d13:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005d16:	83 ec 0c             	sub    $0xc,%esp
c1005d19:	50                   	push   %eax
c1005d1a:	e8 eb 16 00 00       	call   c100740a <dir_close>
c1005d1f:	83 c4 10             	add    $0x10,%esp
c1005d22:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005d27:	e9 2a 01 00 00       	jmp    c1005e56 <sys_open+0x282>
c1005d2c:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1005d30:	75 56                	jne    c1005d88 <sys_open+0x1b4>
c1005d32:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1005d39:	83 e0 04             	and    $0x4,%eax
c1005d3c:	85 c0                	test   %eax,%eax
c1005d3e:	75 48                	jne    c1005d88 <sys_open+0x1b4>
c1005d40:	83 ec 08             	sub    $0x8,%esp
c1005d43:	6a 2f                	push   $0x2f
c1005d45:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005d4b:	50                   	push   %eax
c1005d4c:	e8 45 a4 ff ff       	call   c1000196 <strrchr>
c1005d51:	83 c4 10             	add    $0x10,%esp
c1005d54:	83 c0 01             	add    $0x1,%eax
c1005d57:	83 ec 04             	sub    $0x4,%esp
c1005d5a:	50                   	push   %eax
c1005d5b:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005d61:	50                   	push   %eax
c1005d62:	68 34 a6 00 c1       	push   $0xc100a634
c1005d67:	e8 5c e8 ff ff       	call   c10045c8 <printk>
c1005d6c:	83 c4 10             	add    $0x10,%esp
c1005d6f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005d72:	83 ec 0c             	sub    $0xc,%esp
c1005d75:	50                   	push   %eax
c1005d76:	e8 8f 16 00 00       	call   c100740a <dir_close>
c1005d7b:	83 c4 10             	add    $0x10,%esp
c1005d7e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005d83:	e9 ce 00 00 00       	jmp    c1005e56 <sys_open+0x282>
c1005d88:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1005d8c:	74 3a                	je     c1005dc8 <sys_open+0x1f4>
c1005d8e:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1005d95:	83 e0 04             	and    $0x4,%eax
c1005d98:	85 c0                	test   %eax,%eax
c1005d9a:	74 2c                	je     c1005dc8 <sys_open+0x1f4>
c1005d9c:	83 ec 08             	sub    $0x8,%esp
c1005d9f:	ff 75 08             	pushl  0x8(%ebp)
c1005da2:	68 54 a6 00 c1       	push   $0xc100a654
c1005da7:	e8 1c e8 ff ff       	call   c10045c8 <printk>
c1005dac:	83 c4 10             	add    $0x10,%esp
c1005daf:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005db2:	83 ec 0c             	sub    $0xc,%esp
c1005db5:	50                   	push   %eax
c1005db6:	e8 4f 16 00 00       	call   c100740a <dir_close>
c1005dbb:	83 c4 10             	add    $0x10,%esp
c1005dbe:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005dc3:	e9 8e 00 00 00       	jmp    c1005e56 <sys_open+0x282>
c1005dc8:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1005dcf:	83 e0 04             	and    $0x4,%eax
c1005dd2:	83 f8 04             	cmp    $0x4,%eax
c1005dd5:	75 4f                	jne    c1005e26 <sys_open+0x252>
c1005dd7:	83 ec 0c             	sub    $0xc,%esp
c1005dda:	68 6b a6 00 c1       	push   $0xc100a66b
c1005ddf:	e8 e4 e7 ff ff       	call   c10045c8 <printk>
c1005de4:	83 c4 10             	add    $0x10,%esp
c1005de7:	0f b6 9d d4 fd ff ff 	movzbl -0x22c(%ebp),%ebx
c1005dee:	83 ec 08             	sub    $0x8,%esp
c1005df1:	6a 2f                	push   $0x2f
c1005df3:	ff 75 08             	pushl  0x8(%ebp)
c1005df6:	e8 9b a3 ff ff       	call   c1000196 <strrchr>
c1005dfb:	83 c4 10             	add    $0x10,%esp
c1005dfe:	8d 50 01             	lea    0x1(%eax),%edx
c1005e01:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005e04:	83 ec 04             	sub    $0x4,%esp
c1005e07:	53                   	push   %ebx
c1005e08:	52                   	push   %edx
c1005e09:	50                   	push   %eax
c1005e0a:	e8 03 25 00 00       	call   c1008312 <file_create>
c1005e0f:	83 c4 10             	add    $0x10,%esp
c1005e12:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005e15:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005e18:	83 ec 0c             	sub    $0xc,%esp
c1005e1b:	50                   	push   %eax
c1005e1c:	e8 e9 15 00 00       	call   c100740a <dir_close>
c1005e21:	83 c4 10             	add    $0x10,%esp
c1005e24:	eb 2d                	jmp    c1005e53 <sys_open+0x27f>
c1005e26:	83 ec 08             	sub    $0x8,%esp
c1005e29:	ff 75 ec             	pushl  -0x14(%ebp)
c1005e2c:	68 7a a6 00 c1       	push   $0xc100a67a
c1005e31:	e8 92 e7 ff ff       	call   c10045c8 <printk>
c1005e36:	83 c4 10             	add    $0x10,%esp
c1005e39:	0f b6 95 d4 fd ff ff 	movzbl -0x22c(%ebp),%edx
c1005e40:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1005e43:	83 ec 08             	sub    $0x8,%esp
c1005e46:	52                   	push   %edx
c1005e47:	50                   	push   %eax
c1005e48:	e8 a7 27 00 00       	call   c10085f4 <file_open>
c1005e4d:	83 c4 10             	add    $0x10,%esp
c1005e50:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005e53:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005e56:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1005e59:	c9                   	leave  
c1005e5a:	c3                   	ret    

c1005e5b <fd_local2global>:
c1005e5b:	55                   	push   %ebp
c1005e5c:	89 e5                	mov    %esp,%ebp
c1005e5e:	83 ec 18             	sub    $0x18,%esp
c1005e61:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1005e66:	8b 55 08             	mov    0x8(%ebp),%edx
c1005e69:	83 c2 18             	add    $0x18,%edx
c1005e6c:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1005e6f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005e72:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1005e76:	78 06                	js     c1005e7e <fd_local2global+0x23>
c1005e78:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1005e7c:	7e 19                	jle    c1005e97 <fd_local2global+0x3c>
c1005e7e:	68 8c a6 00 c1       	push   $0xc100a68c
c1005e83:	68 cc ab 00 c1       	push   $0xc100abcc
c1005e88:	68 6c 01 00 00       	push   $0x16c
c1005e8d:	68 dc a4 00 c1       	push   $0xc100a4dc
c1005e92:	e8 76 a4 ff ff       	call   c100030d <__PANIC>
c1005e97:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005e9a:	c9                   	leave  
c1005e9b:	c3                   	ret    

c1005e9c <sys_close>:
c1005e9c:	55                   	push   %ebp
c1005e9d:	89 e5                	mov    %esp,%ebp
c1005e9f:	83 ec 18             	sub    $0x18,%esp
c1005ea2:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1005ea9:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c1005ead:	7e 44                	jle    c1005ef3 <sys_close+0x57>
c1005eaf:	8b 45 08             	mov    0x8(%ebp),%eax
c1005eb2:	83 ec 0c             	sub    $0xc,%esp
c1005eb5:	50                   	push   %eax
c1005eb6:	e8 a0 ff ff ff       	call   c1005e5b <fd_local2global>
c1005ebb:	83 c4 10             	add    $0x10,%esp
c1005ebe:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005ec1:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005ec4:	89 d0                	mov    %edx,%eax
c1005ec6:	01 c0                	add    %eax,%eax
c1005ec8:	01 d0                	add    %edx,%eax
c1005eca:	c1 e0 02             	shl    $0x2,%eax
c1005ecd:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1005ed2:	83 ec 0c             	sub    $0xc,%esp
c1005ed5:	50                   	push   %eax
c1005ed6:	e8 69 28 00 00       	call   c1008744 <file_close>
c1005edb:	83 c4 10             	add    $0x10,%esp
c1005ede:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005ee1:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1005ee6:	8b 55 08             	mov    0x8(%ebp),%edx
c1005ee9:	83 c2 18             	add    $0x18,%edx
c1005eec:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1005ef3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005ef6:	c9                   	leave  
c1005ef7:	c3                   	ret    

c1005ef8 <sys_write>:
c1005ef8:	55                   	push   %ebp
c1005ef9:	89 e5                	mov    %esp,%ebp
c1005efb:	57                   	push   %edi
c1005efc:	81 ec 14 04 00 00    	sub    $0x414,%esp
c1005f02:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1005f06:	79 1a                	jns    c1005f22 <sys_write+0x2a>
c1005f08:	83 ec 0c             	sub    $0xc,%esp
c1005f0b:	68 b8 a6 00 c1       	push   $0xc100a6b8
c1005f10:	e8 b3 e6 ff ff       	call   c10045c8 <printk>
c1005f15:	83 c4 10             	add    $0x10,%esp
c1005f18:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005f1d:	e9 c4 00 00 00       	jmp    c1005fe6 <sys_write+0xee>
c1005f22:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1005f26:	75 4d                	jne    c1005f75 <sys_write+0x7d>
c1005f28:	c7 85 ec fb ff ff 00 	movl   $0x0,-0x414(%ebp)
c1005f2f:	00 00 00 
c1005f32:	8d 95 f0 fb ff ff    	lea    -0x410(%ebp),%edx
c1005f38:	b8 00 00 00 00       	mov    $0x0,%eax
c1005f3d:	b9 ff 00 00 00       	mov    $0xff,%ecx
c1005f42:	89 d7                	mov    %edx,%edi
c1005f44:	f3 ab                	rep stos %eax,%es:(%edi)
c1005f46:	83 ec 04             	sub    $0x4,%esp
c1005f49:	ff 75 10             	pushl  0x10(%ebp)
c1005f4c:	ff 75 0c             	pushl  0xc(%ebp)
c1005f4f:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c1005f55:	50                   	push   %eax
c1005f56:	e8 ad a1 ff ff       	call   c1000108 <memcpy>
c1005f5b:	83 c4 10             	add    $0x10,%esp
c1005f5e:	83 ec 0c             	sub    $0xc,%esp
c1005f61:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c1005f67:	50                   	push   %eax
c1005f68:	e8 5b e6 ff ff       	call   c10045c8 <printk>
c1005f6d:	83 c4 10             	add    $0x10,%esp
c1005f70:	8b 45 10             	mov    0x10(%ebp),%eax
c1005f73:	eb 71                	jmp    c1005fe6 <sys_write+0xee>
c1005f75:	8b 45 08             	mov    0x8(%ebp),%eax
c1005f78:	83 ec 0c             	sub    $0xc,%esp
c1005f7b:	50                   	push   %eax
c1005f7c:	e8 da fe ff ff       	call   c1005e5b <fd_local2global>
c1005f81:	83 c4 10             	add    $0x10,%esp
c1005f84:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005f87:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005f8a:	89 d0                	mov    %edx,%eax
c1005f8c:	01 c0                	add    %eax,%eax
c1005f8e:	01 d0                	add    %edx,%eax
c1005f90:	c1 e0 02             	shl    $0x2,%eax
c1005f93:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1005f98:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005f9b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005f9e:	8b 40 04             	mov    0x4(%eax),%eax
c1005fa1:	83 e0 01             	and    $0x1,%eax
c1005fa4:	85 c0                	test   %eax,%eax
c1005fa6:	75 0d                	jne    c1005fb5 <sys_write+0xbd>
c1005fa8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005fab:	8b 40 04             	mov    0x4(%eax),%eax
c1005fae:	83 e0 02             	and    $0x2,%eax
c1005fb1:	85 c0                	test   %eax,%eax
c1005fb3:	74 1c                	je     c1005fd1 <sys_write+0xd9>
c1005fb5:	83 ec 04             	sub    $0x4,%esp
c1005fb8:	ff 75 10             	pushl  0x10(%ebp)
c1005fbb:	ff 75 0c             	pushl  0xc(%ebp)
c1005fbe:	ff 75 f0             	pushl  -0x10(%ebp)
c1005fc1:	e8 be 27 00 00       	call   c1008784 <file_write>
c1005fc6:	83 c4 10             	add    $0x10,%esp
c1005fc9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005fcc:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1005fcf:	eb 15                	jmp    c1005fe6 <sys_write+0xee>
c1005fd1:	83 ec 0c             	sub    $0xc,%esp
c1005fd4:	68 d0 a6 00 c1       	push   $0xc100a6d0
c1005fd9:	e8 ea e5 ff ff       	call   c10045c8 <printk>
c1005fde:	83 c4 10             	add    $0x10,%esp
c1005fe1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005fe6:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1005fe9:	c9                   	leave  
c1005fea:	c3                   	ret    

c1005feb <sys_read>:
c1005feb:	55                   	push   %ebp
c1005fec:	89 e5                	mov    %esp,%ebp
c1005fee:	83 ec 18             	sub    $0x18,%esp
c1005ff1:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
c1005ff5:	75 19                	jne    c1006010 <sys_read+0x25>
c1005ff7:	68 16 a7 00 c1       	push   $0xc100a716
c1005ffc:	68 dc ab 00 c1       	push   $0xc100abdc
c1006001:	68 92 01 00 00       	push   $0x192
c1006006:	68 dc a4 00 c1       	push   $0xc100a4dc
c100600b:	e8 fd a2 ff ff       	call   c100030d <__PANIC>
c1006010:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006017:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100601b:	78 0c                	js     c1006029 <sys_read+0x3e>
c100601d:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1006021:	74 06                	je     c1006029 <sys_read+0x3e>
c1006023:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c1006027:	75 15                	jne    c100603e <sys_read+0x53>
c1006029:	83 ec 0c             	sub    $0xc,%esp
c100602c:	68 22 a7 00 c1       	push   $0xc100a722
c1006031:	e8 92 e5 ff ff       	call   c10045c8 <printk>
c1006036:	83 c4 10             	add    $0x10,%esp
c1006039:	e9 a0 00 00 00       	jmp    c10060de <sys_read+0xf3>
c100603e:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006042:	75 62                	jne    c10060a6 <sys_read+0xbb>
c1006044:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006047:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100604a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1006051:	0f b6 05 6c ec 00 c1 	movzbl 0xc100ec6c,%eax
c1006058:	84 c0                	test   %al,%al
c100605a:	75 2d                	jne    c1006089 <sys_read+0x9e>
c100605c:	83 ec 0c             	sub    $0xc,%esp
c100605f:	68 ac 0c 01 c1       	push   $0xc1010cac
c1006064:	e8 13 ea ff ff       	call   c1004a7c <sema_down>
c1006069:	83 c4 10             	add    $0x10,%esp
c100606c:	eb 1b                	jmp    c1006089 <sys_read+0x9e>
c100606e:	0f b6 15 6c ec 00 c1 	movzbl 0xc100ec6c,%edx
c1006075:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006078:	88 10                	mov    %dl,(%eax)
c100607a:	c6 05 6c ec 00 c1 00 	movb   $0x0,0xc100ec6c
c1006081:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1006085:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1006089:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100608c:	3b 45 10             	cmp    0x10(%ebp),%eax
c100608f:	72 dd                	jb     c100606e <sys_read+0x83>
c1006091:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1006095:	74 05                	je     c100609c <sys_read+0xb1>
c1006097:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100609a:	eb 05                	jmp    c10060a1 <sys_read+0xb6>
c100609c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10060a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10060a4:	eb 38                	jmp    c10060de <sys_read+0xf3>
c10060a6:	8b 45 08             	mov    0x8(%ebp),%eax
c10060a9:	83 ec 0c             	sub    $0xc,%esp
c10060ac:	50                   	push   %eax
c10060ad:	e8 a9 fd ff ff       	call   c1005e5b <fd_local2global>
c10060b2:	83 c4 10             	add    $0x10,%esp
c10060b5:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10060b8:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10060bb:	89 d0                	mov    %edx,%eax
c10060bd:	01 c0                	add    %eax,%eax
c10060bf:	01 d0                	add    %edx,%eax
c10060c1:	c1 e0 02             	shl    $0x2,%eax
c10060c4:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c10060c9:	83 ec 04             	sub    $0x4,%esp
c10060cc:	ff 75 10             	pushl  0x10(%ebp)
c10060cf:	ff 75 0c             	pushl  0xc(%ebp)
c10060d2:	50                   	push   %eax
c10060d3:	e8 21 2e 00 00       	call   c1008ef9 <file_read>
c10060d8:	83 c4 10             	add    $0x10,%esp
c10060db:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10060de:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10060e1:	c9                   	leave  
c10060e2:	c3                   	ret    

c10060e3 <sys_lseek>:
c10060e3:	55                   	push   %ebp
c10060e4:	89 e5                	mov    %esp,%ebp
c10060e6:	83 ec 28             	sub    $0x28,%esp
c10060e9:	8b 45 10             	mov    0x10(%ebp),%eax
c10060ec:	88 45 e4             	mov    %al,-0x1c(%ebp)
c10060ef:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10060f3:	79 1a                	jns    c100610f <sys_lseek+0x2c>
c10060f5:	83 ec 0c             	sub    $0xc,%esp
c10060f8:	68 36 a7 00 c1       	push   $0xc100a736
c10060fd:	e8 c6 e4 ff ff       	call   c10045c8 <printk>
c1006102:	83 c4 10             	add    $0x10,%esp
c1006105:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100610a:	e9 be 00 00 00       	jmp    c10061cd <sys_lseek+0xea>
c100610f:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
c1006113:	74 06                	je     c100611b <sys_lseek+0x38>
c1006115:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
c1006119:	76 19                	jbe    c1006134 <sys_lseek+0x51>
c100611b:	68 4b a7 00 c1       	push   $0xc100a74b
c1006120:	68 e8 ab 00 c1       	push   $0xc100abe8
c1006125:	68 b2 01 00 00       	push   $0x1b2
c100612a:	68 dc a4 00 c1       	push   $0xc100a4dc
c100612f:	e8 d9 a1 ff ff       	call   c100030d <__PANIC>
c1006134:	8b 45 08             	mov    0x8(%ebp),%eax
c1006137:	83 ec 0c             	sub    $0xc,%esp
c100613a:	50                   	push   %eax
c100613b:	e8 1b fd ff ff       	call   c1005e5b <fd_local2global>
c1006140:	83 c4 10             	add    $0x10,%esp
c1006143:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006146:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006149:	89 d0                	mov    %edx,%eax
c100614b:	01 c0                	add    %eax,%eax
c100614d:	01 d0                	add    %edx,%eax
c100614f:	c1 e0 02             	shl    $0x2,%eax
c1006152:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1006157:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100615a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006161:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006164:	8b 40 08             	mov    0x8(%eax),%eax
c1006167:	8b 40 04             	mov    0x4(%eax),%eax
c100616a:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100616d:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1006171:	83 f8 03             	cmp    $0x3,%eax
c1006174:	74 2a                	je     c10061a0 <sys_lseek+0xbd>
c1006176:	83 f8 03             	cmp    $0x3,%eax
c1006179:	7f 30                	jg     c10061ab <sys_lseek+0xc8>
c100617b:	83 f8 01             	cmp    $0x1,%eax
c100617e:	74 07                	je     c1006187 <sys_lseek+0xa4>
c1006180:	83 f8 02             	cmp    $0x2,%eax
c1006183:	74 0a                	je     c100618f <sys_lseek+0xac>
c1006185:	eb 24                	jmp    c10061ab <sys_lseek+0xc8>
c1006187:	8b 45 0c             	mov    0xc(%ebp),%eax
c100618a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100618d:	eb 1c                	jmp    c10061ab <sys_lseek+0xc8>
c100618f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006192:	8b 00                	mov    (%eax),%eax
c1006194:	89 c2                	mov    %eax,%edx
c1006196:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006199:	01 d0                	add    %edx,%eax
c100619b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100619e:	eb 0b                	jmp    c10061ab <sys_lseek+0xc8>
c10061a0:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10061a3:	8b 45 0c             	mov    0xc(%ebp),%eax
c10061a6:	01 d0                	add    %edx,%eax
c10061a8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10061ab:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10061af:	78 08                	js     c10061b9 <sys_lseek+0xd6>
c10061b1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10061b4:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c10061b7:	7f 07                	jg     c10061c0 <sys_lseek+0xdd>
c10061b9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10061be:	eb 0d                	jmp    c10061cd <sys_lseek+0xea>
c10061c0:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10061c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10061c6:	89 10                	mov    %edx,(%eax)
c10061c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10061cb:	8b 00                	mov    (%eax),%eax
c10061cd:	c9                   	leave  
c10061ce:	c3                   	ret    

c10061cf <sys_unlink>:
c10061cf:	55                   	push   %ebp
c10061d0:	89 e5                	mov    %esp,%ebp
c10061d2:	81 ec 28 02 00 00    	sub    $0x228,%esp
c10061d8:	83 ec 0c             	sub    $0xc,%esp
c10061db:	ff 75 08             	pushl  0x8(%ebp)
c10061de:	e8 3b 9f ff ff       	call   c100011e <strlen>
c10061e3:	83 c4 10             	add    $0x10,%esp
c10061e6:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c10061eb:	76 19                	jbe    c1006206 <sys_unlink+0x37>
c10061ed:	68 64 a7 00 c1       	push   $0xc100a764
c10061f2:	68 f4 ab 00 c1       	push   $0xc100abf4
c10061f7:	68 cc 01 00 00       	push   $0x1cc
c10061fc:	68 dc a4 00 c1       	push   $0xc100a4dc
c1006201:	e8 07 a1 ff ff       	call   c100030d <__PANIC>
c1006206:	83 ec 04             	sub    $0x4,%esp
c1006209:	68 08 02 00 00       	push   $0x208
c100620e:	6a 00                	push   $0x0
c1006210:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1006216:	50                   	push   %eax
c1006217:	e8 8e 9e ff ff       	call   c10000aa <memset>
c100621c:	83 c4 10             	add    $0x10,%esp
c100621f:	83 ec 08             	sub    $0x8,%esp
c1006222:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1006228:	50                   	push   %eax
c1006229:	ff 75 08             	pushl  0x8(%ebp)
c100622c:	e8 13 f7 ff ff       	call   c1005944 <search_file>
c1006231:	83 c4 10             	add    $0x10,%esp
c1006234:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006237:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c100623b:	75 19                	jne    c1006256 <sys_unlink+0x87>
c100623d:	68 84 a7 00 c1       	push   $0xc100a784
c1006242:	68 f4 ab 00 c1       	push   $0xc100abf4
c1006247:	68 d2 01 00 00       	push   $0x1d2
c100624c:	68 dc a4 00 c1       	push   $0xc100a4dc
c1006251:	e8 b7 a0 ff ff       	call   c100030d <__PANIC>
c1006256:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c100625a:	75 2c                	jne    c1006288 <sys_unlink+0xb9>
c100625c:	83 ec 08             	sub    $0x8,%esp
c100625f:	ff 75 08             	pushl  0x8(%ebp)
c1006262:	68 92 a7 00 c1       	push   $0xc100a792
c1006267:	e8 5c e3 ff ff       	call   c10045c8 <printk>
c100626c:	83 c4 10             	add    $0x10,%esp
c100626f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006272:	83 ec 0c             	sub    $0xc,%esp
c1006275:	50                   	push   %eax
c1006276:	e8 8f 11 00 00       	call   c100740a <dir_close>
c100627b:	83 c4 10             	add    $0x10,%esp
c100627e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006283:	e9 65 01 00 00       	jmp    c10063ed <sys_unlink+0x21e>
c1006288:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100628b:	83 f8 02             	cmp    $0x2,%eax
c100628e:	75 29                	jne    c10062b9 <sys_unlink+0xea>
c1006290:	83 ec 0c             	sub    $0xc,%esp
c1006293:	68 a8 a7 00 c1       	push   $0xc100a7a8
c1006298:	e8 2b e3 ff ff       	call   c10045c8 <printk>
c100629d:	83 c4 10             	add    $0x10,%esp
c10062a0:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10062a3:	83 ec 0c             	sub    $0xc,%esp
c10062a6:	50                   	push   %eax
c10062a7:	e8 5e 11 00 00       	call   c100740a <dir_close>
c10062ac:	83 c4 10             	add    $0x10,%esp
c10062af:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10062b4:	e9 34 01 00 00       	jmp    c10063ed <sys_unlink+0x21e>
c10062b9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10062c0:	eb 37                	jmp    c10062f9 <sys_unlink+0x12a>
c10062c2:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10062c5:	89 d0                	mov    %edx,%eax
c10062c7:	01 c0                	add    %eax,%eax
c10062c9:	01 d0                	add    %edx,%eax
c10062cb:	c1 e0 02             	shl    $0x2,%eax
c10062ce:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c10062d3:	8b 00                	mov    (%eax),%eax
c10062d5:	85 c0                	test   %eax,%eax
c10062d7:	74 1c                	je     c10062f5 <sys_unlink+0x126>
c10062d9:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10062dc:	89 d0                	mov    %edx,%eax
c10062de:	01 c0                	add    %eax,%eax
c10062e0:	01 d0                	add    %edx,%eax
c10062e2:	c1 e0 02             	shl    $0x2,%eax
c10062e5:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c10062ea:	8b 00                	mov    (%eax),%eax
c10062ec:	8b 10                	mov    (%eax),%edx
c10062ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10062f1:	39 c2                	cmp    %eax,%edx
c10062f3:	74 0c                	je     c1006301 <sys_unlink+0x132>
c10062f5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10062f9:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c10062fd:	76 c3                	jbe    c10062c2 <sys_unlink+0xf3>
c10062ff:	eb 01                	jmp    c1006302 <sys_unlink+0x133>
c1006301:	90                   	nop
c1006302:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006306:	77 2c                	ja     c1006334 <sys_unlink+0x165>
c1006308:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100630b:	83 ec 0c             	sub    $0xc,%esp
c100630e:	50                   	push   %eax
c100630f:	e8 f6 10 00 00       	call   c100740a <dir_close>
c1006314:	83 c4 10             	add    $0x10,%esp
c1006317:	83 ec 08             	sub    $0x8,%esp
c100631a:	ff 75 08             	pushl  0x8(%ebp)
c100631d:	68 e8 a7 00 c1       	push   $0xc100a7e8
c1006322:	e8 a1 e2 ff ff       	call   c10045c8 <printk>
c1006327:	83 c4 10             	add    $0x10,%esp
c100632a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100632f:	e9 b9 00 00 00       	jmp    c10063ed <sys_unlink+0x21e>
c1006334:	83 7d f4 20          	cmpl   $0x20,-0xc(%ebp)
c1006338:	74 19                	je     c1006353 <sys_unlink+0x184>
c100633a:	68 11 a8 00 c1       	push   $0xc100a811
c100633f:	68 f4 ab 00 c1       	push   $0xc100abf4
c1006344:	68 eb 01 00 00       	push   $0x1eb
c1006349:	68 dc a4 00 c1       	push   $0xc100a4dc
c100634e:	e8 ba 9f ff ff       	call   c100030d <__PANIC>
c1006353:	83 ec 08             	sub    $0x8,%esp
c1006356:	6a 02                	push   $0x2
c1006358:	68 00 04 00 00       	push   $0x400
c100635d:	e8 12 c6 ff ff       	call   c1002974 <vmm_malloc>
c1006362:	83 c4 10             	add    $0x10,%esp
c1006365:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006368:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100636c:	75 26                	jne    c1006394 <sys_unlink+0x1c5>
c100636e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006371:	83 ec 0c             	sub    $0xc,%esp
c1006374:	50                   	push   %eax
c1006375:	e8 90 10 00 00       	call   c100740a <dir_close>
c100637a:	83 c4 10             	add    $0x10,%esp
c100637d:	83 ec 0c             	sub    $0xc,%esp
c1006380:	68 2c a8 00 c1       	push   $0xc100a82c
c1006385:	e8 3e e2 ff ff       	call   c10045c8 <printk>
c100638a:	83 c4 10             	add    $0x10,%esp
c100638d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006392:	eb 59                	jmp    c10063ed <sys_unlink+0x21e>
c1006394:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006397:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100639a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100639f:	ff 75 ec             	pushl  -0x14(%ebp)
c10063a2:	ff 75 f0             	pushl  -0x10(%ebp)
c10063a5:	ff 75 e8             	pushl  -0x18(%ebp)
c10063a8:	50                   	push   %eax
c10063a9:	e8 3d 15 00 00       	call   c10078eb <delete_dir_entry>
c10063ae:	83 c4 10             	add    $0x10,%esp
c10063b1:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10063b6:	83 ec 08             	sub    $0x8,%esp
c10063b9:	ff 75 f0             	pushl  -0x10(%ebp)
c10063bc:	50                   	push   %eax
c10063bd:	e8 86 32 00 00       	call   c1009648 <inode_release>
c10063c2:	83 c4 10             	add    $0x10,%esp
c10063c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10063c8:	83 ec 08             	sub    $0x8,%esp
c10063cb:	68 00 04 00 00       	push   $0x400
c10063d0:	50                   	push   %eax
c10063d1:	e8 c3 c6 ff ff       	call   c1002a99 <vmm_free>
c10063d6:	83 c4 10             	add    $0x10,%esp
c10063d9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10063dc:	83 ec 0c             	sub    $0xc,%esp
c10063df:	50                   	push   %eax
c10063e0:	e8 25 10 00 00       	call   c100740a <dir_close>
c10063e5:	83 c4 10             	add    $0x10,%esp
c10063e8:	b8 00 00 00 00       	mov    $0x0,%eax
c10063ed:	c9                   	leave  
c10063ee:	c3                   	ret    

c10063ef <sys_mkdir>:
c10063ef:	55                   	push   %ebp
c10063f0:	89 e5                	mov    %esp,%ebp
c10063f2:	53                   	push   %ebx
c10063f3:	81 ec a4 02 00 00    	sub    $0x2a4,%esp
c10063f9:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c10063fd:	83 ec 08             	sub    $0x8,%esp
c1006400:	6a 02                	push   $0x2
c1006402:	68 00 04 00 00       	push   $0x400
c1006407:	e8 68 c5 ff ff       	call   c1002974 <vmm_malloc>
c100640c:	83 c4 10             	add    $0x10,%esp
c100640f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006412:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1006416:	75 1a                	jne    c1006432 <sys_mkdir+0x43>
c1006418:	83 ec 0c             	sub    $0xc,%esp
c100641b:	68 54 a8 00 c1       	push   $0xc100a854
c1006420:	e8 a3 e1 ff ff       	call   c10045c8 <printk>
c1006425:	83 c4 10             	add    $0x10,%esp
c1006428:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100642d:	e9 f2 03 00 00       	jmp    c1006824 <sys_mkdir+0x435>
c1006432:	83 ec 04             	sub    $0x4,%esp
c1006435:	68 08 02 00 00       	push   $0x208
c100643a:	6a 00                	push   $0x0
c100643c:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006442:	50                   	push   %eax
c1006443:	e8 62 9c ff ff       	call   c10000aa <memset>
c1006448:	83 c4 10             	add    $0x10,%esp
c100644b:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
c1006452:	83 ec 08             	sub    $0x8,%esp
c1006455:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c100645b:	50                   	push   %eax
c100645c:	ff 75 08             	pushl  0x8(%ebp)
c100645f:	e8 e0 f4 ff ff       	call   c1005944 <search_file>
c1006464:	83 c4 10             	add    $0x10,%esp
c1006467:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100646a:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c100646e:	74 1c                	je     c100648c <sys_mkdir+0x9d>
c1006470:	83 ec 08             	sub    $0x8,%esp
c1006473:	ff 75 08             	pushl  0x8(%ebp)
c1006476:	68 80 a8 00 c1       	push   $0xc100a880
c100647b:	e8 48 e1 ff ff       	call   c10045c8 <printk>
c1006480:	83 c4 10             	add    $0x10,%esp
c1006483:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1006487:	e9 08 03 00 00       	jmp    c1006794 <sys_mkdir+0x3a5>
c100648c:	83 ec 0c             	sub    $0xc,%esp
c100648f:	ff 75 08             	pushl  0x8(%ebp)
c1006492:	e8 25 f4 ff ff       	call   c10058bc <path_depth_cnt>
c1006497:	83 c4 10             	add    $0x10,%esp
c100649a:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100649d:	83 ec 0c             	sub    $0xc,%esp
c10064a0:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10064a6:	50                   	push   %eax
c10064a7:	e8 10 f4 ff ff       	call   c10058bc <path_depth_cnt>
c10064ac:	83 c4 10             	add    $0x10,%esp
c10064af:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10064b2:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10064b5:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c10064b8:	74 23                	je     c10064dd <sys_mkdir+0xee>
c10064ba:	83 ec 04             	sub    $0x4,%esp
c10064bd:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10064c3:	50                   	push   %eax
c10064c4:	ff 75 08             	pushl  0x8(%ebp)
c10064c7:	68 a8 a8 00 c1       	push   $0xc100a8a8
c10064cc:	e8 f7 e0 ff ff       	call   c10045c8 <printk>
c10064d1:	83 c4 10             	add    $0x10,%esp
c10064d4:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10064d8:	e9 b7 02 00 00       	jmp    c1006794 <sys_mkdir+0x3a5>
c10064dd:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10064e0:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10064e3:	83 ec 08             	sub    $0x8,%esp
c10064e6:	6a 2f                	push   $0x2f
c10064e8:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10064ee:	50                   	push   %eax
c10064ef:	e8 a2 9c ff ff       	call   c1000196 <strrchr>
c10064f4:	83 c4 10             	add    $0x10,%esp
c10064f7:	83 c0 01             	add    $0x1,%eax
c10064fa:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10064fd:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006502:	83 ec 0c             	sub    $0xc,%esp
c1006505:	50                   	push   %eax
c1006506:	e8 f5 1b 00 00       	call   c1008100 <inode_bitmap_alloc>
c100650b:	83 c4 10             	add    $0x10,%esp
c100650e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006511:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006515:	75 19                	jne    c1006530 <sys_mkdir+0x141>
c1006517:	83 ec 0c             	sub    $0xc,%esp
c100651a:	68 dc a8 00 c1       	push   $0xc100a8dc
c100651f:	e8 a4 e0 ff ff       	call   c10045c8 <printk>
c1006524:	83 c4 10             	add    $0x10,%esp
c1006527:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c100652b:	e9 64 02 00 00       	jmp    c1006794 <sys_mkdir+0x3a5>
c1006530:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006533:	83 ec 08             	sub    $0x8,%esp
c1006536:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c100653c:	52                   	push   %edx
c100653d:	50                   	push   %eax
c100653e:	e8 ca 33 00 00       	call   c100990d <inode_init>
c1006543:	83 c4 10             	add    $0x10,%esp
c1006546:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
c100654d:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
c1006554:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006559:	83 ec 0c             	sub    $0xc,%esp
c100655c:	50                   	push   %eax
c100655d:	e8 5e 1c 00 00       	call   c10081c0 <block_bitmap_alloc>
c1006562:	83 c4 10             	add    $0x10,%esp
c1006565:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1006568:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
c100656c:	75 19                	jne    c1006587 <sys_mkdir+0x198>
c100656e:	83 ec 0c             	sub    $0xc,%esp
c1006571:	68 00 a9 00 c1       	push   $0xc100a900
c1006576:	e8 4d e0 ff ff       	call   c10045c8 <printk>
c100657b:	83 c4 10             	add    $0x10,%esp
c100657e:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1006582:	e9 0d 02 00 00       	jmp    c1006794 <sys_mkdir+0x3a5>
c1006587:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100658a:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
c1006590:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1006593:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006598:	8b 40 10             	mov    0x10(%eax),%eax
c100659b:	8b 40 28             	mov    0x28(%eax),%eax
c100659e:	29 c2                	sub    %eax,%edx
c10065a0:	89 d0                	mov    %edx,%eax
c10065a2:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10065a5:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
c10065a9:	75 19                	jne    c10065c4 <sys_mkdir+0x1d5>
c10065ab:	68 3b a9 00 c1       	push   $0xc100a93b
c10065b0:	68 00 ac 00 c1       	push   $0xc100ac00
c10065b5:	68 33 02 00 00       	push   $0x233
c10065ba:	68 dc a4 00 c1       	push   $0xc100a4dc
c10065bf:	e8 49 9d ff ff       	call   c100030d <__PANIC>
c10065c4:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10065c9:	83 ec 04             	sub    $0x4,%esp
c10065cc:	6a 01                	push   $0x1
c10065ce:	ff 75 d8             	pushl  -0x28(%ebp)
c10065d1:	50                   	push   %eax
c10065d2:	e8 b7 1c 00 00       	call   c100828e <bitmap_sync>
c10065d7:	83 c4 10             	add    $0x10,%esp
c10065da:	83 ec 04             	sub    $0x4,%esp
c10065dd:	68 00 04 00 00       	push   $0x400
c10065e2:	6a 00                	push   $0x0
c10065e4:	ff 75 ec             	pushl  -0x14(%ebp)
c10065e7:	e8 be 9a ff ff       	call   c10000aa <memset>
c10065ec:	83 c4 10             	add    $0x10,%esp
c10065ef:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10065f2:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10065f5:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10065f8:	83 ec 04             	sub    $0x4,%esp
c10065fb:	6a 01                	push   $0x1
c10065fd:	68 1d a4 00 c1       	push   $0xc100a41d
c1006602:	50                   	push   %eax
c1006603:	e8 00 9b ff ff       	call   c1000108 <memcpy>
c1006608:	83 c4 10             	add    $0x10,%esp
c100660b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100660e:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006611:	89 50 10             	mov    %edx,0x10(%eax)
c1006614:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006617:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100661e:	83 45 d0 18          	addl   $0x18,-0x30(%ebp)
c1006622:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006625:	83 ec 04             	sub    $0x4,%esp
c1006628:	6a 02                	push   $0x2
c100662a:	68 1f a4 00 c1       	push   $0xc100a41f
c100662f:	50                   	push   %eax
c1006630:	e8 d3 9a ff ff       	call   c1000108 <memcpy>
c1006635:	83 c4 10             	add    $0x10,%esp
c1006638:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100663b:	8b 00                	mov    (%eax),%eax
c100663d:	8b 10                	mov    (%eax),%edx
c100663f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006642:	89 50 10             	mov    %edx,0x10(%eax)
c1006645:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006648:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100664f:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
c1006655:	83 ec 04             	sub    $0x4,%esp
c1006658:	6a 01                	push   $0x1
c100665a:	50                   	push   %eax
c100665b:	ff 75 ec             	pushl  -0x14(%ebp)
c100665e:	e8 4a e8 ff ff       	call   c1004ead <ide_write>
c1006663:	83 c4 10             	add    $0x10,%esp
c1006666:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100666b:	8b 40 10             	mov    0x10(%eax),%eax
c100666e:	8b 40 30             	mov    0x30(%eax),%eax
c1006671:	01 c0                	add    %eax,%eax
c1006673:	89 85 80 fd ff ff    	mov    %eax,-0x280(%ebp)
c1006679:	83 ec 04             	sub    $0x4,%esp
c100667c:	6a 18                	push   $0x18
c100667e:	6a 00                	push   $0x0
c1006680:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c1006686:	50                   	push   %eax
c1006687:	e8 1e 9a ff ff       	call   c10000aa <memset>
c100668c:	83 c4 10             	add    $0x10,%esp
c100668f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006692:	8d 95 64 fd ff ff    	lea    -0x29c(%ebp),%edx
c1006698:	52                   	push   %edx
c1006699:	6a 02                	push   $0x2
c100669b:	50                   	push   %eax
c100669c:	ff 75 dc             	pushl  -0x24(%ebp)
c100669f:	e8 a0 0d 00 00       	call   c1007444 <create_dir_entry>
c10066a4:	83 c4 10             	add    $0x10,%esp
c10066a7:	83 ec 04             	sub    $0x4,%esp
c10066aa:	68 00 04 00 00       	push   $0x400
c10066af:	6a 00                	push   $0x0
c10066b1:	ff 75 ec             	pushl  -0x14(%ebp)
c10066b4:	e8 f1 99 ff ff       	call   c10000aa <memset>
c10066b9:	83 c4 10             	add    $0x10,%esp
c10066bc:	83 ec 04             	sub    $0x4,%esp
c10066bf:	ff 75 ec             	pushl  -0x14(%ebp)
c10066c2:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c10066c8:	50                   	push   %eax
c10066c9:	ff 75 e0             	pushl  -0x20(%ebp)
c10066cc:	e8 df 0d 00 00       	call   c10074b0 <sync_dir_entry>
c10066d1:	83 c4 10             	add    $0x10,%esp
c10066d4:	85 c0                	test   %eax,%eax
c10066d6:	75 19                	jne    c10066f1 <sys_mkdir+0x302>
c10066d8:	83 ec 0c             	sub    $0xc,%esp
c10066db:	68 54 a9 00 c1       	push   $0xc100a954
c10066e0:	e8 e3 de ff ff       	call   c10045c8 <printk>
c10066e5:	83 c4 10             	add    $0x10,%esp
c10066e8:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10066ec:	e9 a3 00 00 00       	jmp    c1006794 <sys_mkdir+0x3a5>
c10066f1:	83 ec 04             	sub    $0x4,%esp
c10066f4:	68 00 04 00 00       	push   $0x400
c10066f9:	6a 00                	push   $0x0
c10066fb:	ff 75 ec             	pushl  -0x14(%ebp)
c10066fe:	e8 a7 99 ff ff       	call   c10000aa <memset>
c1006703:	83 c4 10             	add    $0x10,%esp
c1006706:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006709:	8b 10                	mov    (%eax),%edx
c100670b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006710:	83 ec 04             	sub    $0x4,%esp
c1006713:	ff 75 ec             	pushl  -0x14(%ebp)
c1006716:	52                   	push   %edx
c1006717:	50                   	push   %eax
c1006718:	e8 1e 2c 00 00       	call   c100933b <inode_sync>
c100671d:	83 c4 10             	add    $0x10,%esp
c1006720:	83 ec 04             	sub    $0x4,%esp
c1006723:	68 00 04 00 00       	push   $0x400
c1006728:	6a 00                	push   $0x0
c100672a:	ff 75 ec             	pushl  -0x14(%ebp)
c100672d:	e8 78 99 ff ff       	call   c10000aa <memset>
c1006732:	83 c4 10             	add    $0x10,%esp
c1006735:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100673a:	83 ec 04             	sub    $0x4,%esp
c100673d:	ff 75 ec             	pushl  -0x14(%ebp)
c1006740:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1006746:	52                   	push   %edx
c1006747:	50                   	push   %eax
c1006748:	e8 ee 2b 00 00       	call   c100933b <inode_sync>
c100674d:	83 c4 10             	add    $0x10,%esp
c1006750:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006753:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006758:	83 ec 04             	sub    $0x4,%esp
c100675b:	6a 00                	push   $0x0
c100675d:	52                   	push   %edx
c100675e:	50                   	push   %eax
c100675f:	e8 2a 1b 00 00       	call   c100828e <bitmap_sync>
c1006764:	83 c4 10             	add    $0x10,%esp
c1006767:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100676a:	83 ec 08             	sub    $0x8,%esp
c100676d:	68 00 04 00 00       	push   $0x400
c1006772:	50                   	push   %eax
c1006773:	e8 21 c3 ff ff       	call   c1002a99 <vmm_free>
c1006778:	83 c4 10             	add    $0x10,%esp
c100677b:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100677e:	83 ec 0c             	sub    $0xc,%esp
c1006781:	50                   	push   %eax
c1006782:	e8 83 0c 00 00       	call   c100740a <dir_close>
c1006787:	83 c4 10             	add    $0x10,%esp
c100678a:	b8 00 00 00 00       	mov    $0x0,%eax
c100678f:	e9 90 00 00 00       	jmp    c1006824 <sys_mkdir+0x435>
c1006794:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006798:	83 f8 01             	cmp    $0x1,%eax
c100679b:	74 5e                	je     c10067fb <sys_mkdir+0x40c>
c100679d:	83 f8 02             	cmp    $0x2,%eax
c10067a0:	75 69                	jne    c100680b <sys_mkdir+0x41c>
c10067a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10067a5:	8d 50 07             	lea    0x7(%eax),%edx
c10067a8:	85 c0                	test   %eax,%eax
c10067aa:	0f 48 c2             	cmovs  %edx,%eax
c10067ad:	c1 f8 03             	sar    $0x3,%eax
c10067b0:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10067b3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10067b6:	99                   	cltd   
c10067b7:	c1 ea 1d             	shr    $0x1d,%edx
c10067ba:	01 d0                	add    %edx,%eax
c10067bc:	83 e0 07             	and    $0x7,%eax
c10067bf:	29 d0                	sub    %edx,%eax
c10067c1:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10067c4:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10067c9:	8b 50 20             	mov    0x20(%eax),%edx
c10067cc:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10067cf:	01 d0                	add    %edx,%eax
c10067d1:	0f b6 00             	movzbl (%eax),%eax
c10067d4:	89 c2                	mov    %eax,%edx
c10067d6:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10067d9:	bb 01 00 00 00       	mov    $0x1,%ebx
c10067de:	89 c1                	mov    %eax,%ecx
c10067e0:	d3 e3                	shl    %cl,%ebx
c10067e2:	89 d8                	mov    %ebx,%eax
c10067e4:	f7 d0                	not    %eax
c10067e6:	89 d1                	mov    %edx,%ecx
c10067e8:	21 c1                	and    %eax,%ecx
c10067ea:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10067ef:	8b 50 20             	mov    0x20(%eax),%edx
c10067f2:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10067f5:	01 d0                	add    %edx,%eax
c10067f7:	89 ca                	mov    %ecx,%edx
c10067f9:	88 10                	mov    %dl,(%eax)
c10067fb:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10067fe:	83 ec 0c             	sub    $0xc,%esp
c1006801:	50                   	push   %eax
c1006802:	e8 03 0c 00 00       	call   c100740a <dir_close>
c1006807:	83 c4 10             	add    $0x10,%esp
c100680a:	90                   	nop
c100680b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100680e:	83 ec 08             	sub    $0x8,%esp
c1006811:	68 00 04 00 00       	push   $0x400
c1006816:	50                   	push   %eax
c1006817:	e8 7d c2 ff ff       	call   c1002a99 <vmm_free>
c100681c:	83 c4 10             	add    $0x10,%esp
c100681f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006824:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1006827:	c9                   	leave  
c1006828:	c3                   	ret    

c1006829 <sys_opendir>:
c1006829:	55                   	push   %ebp
c100682a:	89 e5                	mov    %esp,%ebp
c100682c:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1006832:	83 ec 0c             	sub    $0xc,%esp
c1006835:	ff 75 08             	pushl  0x8(%ebp)
c1006838:	e8 e1 98 ff ff       	call   c100011e <strlen>
c100683d:	83 c4 10             	add    $0x10,%esp
c1006840:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1006845:	76 19                	jbe    c1006860 <sys_opendir+0x37>
c1006847:	68 7f a9 00 c1       	push   $0xc100a97f
c100684c:	68 0c ac 00 c1       	push   $0xc100ac0c
c1006851:	68 75 02 00 00       	push   $0x275
c1006856:	68 dc a4 00 c1       	push   $0xc100a4dc
c100685b:	e8 ad 9a ff ff       	call   c100030d <__PANIC>
c1006860:	8b 45 08             	mov    0x8(%ebp),%eax
c1006863:	0f b6 00             	movzbl (%eax),%eax
c1006866:	3c 2f                	cmp    $0x2f,%al
c1006868:	75 21                	jne    c100688b <sys_opendir+0x62>
c100686a:	8b 45 08             	mov    0x8(%ebp),%eax
c100686d:	83 c0 01             	add    $0x1,%eax
c1006870:	0f b6 00             	movzbl (%eax),%eax
c1006873:	84 c0                	test   %al,%al
c1006875:	74 0a                	je     c1006881 <sys_opendir+0x58>
c1006877:	8b 45 08             	mov    0x8(%ebp),%eax
c100687a:	0f b6 00             	movzbl (%eax),%eax
c100687d:	3c 2e                	cmp    $0x2e,%al
c100687f:	75 0a                	jne    c100688b <sys_opendir+0x62>
c1006881:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1006886:	e9 a9 00 00 00       	jmp    c1006934 <sys_opendir+0x10b>
c100688b:	83 ec 04             	sub    $0x4,%esp
c100688e:	68 08 02 00 00       	push   $0x208
c1006893:	6a 00                	push   $0x0
c1006895:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c100689b:	50                   	push   %eax
c100689c:	e8 09 98 ff ff       	call   c10000aa <memset>
c10068a1:	83 c4 10             	add    $0x10,%esp
c10068a4:	83 ec 08             	sub    $0x8,%esp
c10068a7:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c10068ad:	50                   	push   %eax
c10068ae:	ff 75 08             	pushl  0x8(%ebp)
c10068b1:	e8 8e f0 ff ff       	call   c1005944 <search_file>
c10068b6:	83 c4 10             	add    $0x10,%esp
c10068b9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10068bc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10068c3:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10068c7:	75 1c                	jne    c10068e5 <sys_opendir+0xbc>
c10068c9:	83 ec 04             	sub    $0x4,%esp
c10068cc:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c10068d2:	50                   	push   %eax
c10068d3:	ff 75 08             	pushl  0x8(%ebp)
c10068d6:	68 9b a9 00 c1       	push   $0xc100a99b
c10068db:	e8 e8 dc ff ff       	call   c10045c8 <printk>
c10068e0:	83 c4 10             	add    $0x10,%esp
c10068e3:	eb 3d                	jmp    c1006922 <sys_opendir+0xf9>
c10068e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10068e8:	83 f8 01             	cmp    $0x1,%eax
c10068eb:	75 15                	jne    c1006902 <sys_opendir+0xd9>
c10068ed:	83 ec 08             	sub    $0x8,%esp
c10068f0:	ff 75 08             	pushl  0x8(%ebp)
c10068f3:	68 b9 a9 00 c1       	push   $0xc100a9b9
c10068f8:	e8 cb dc ff ff       	call   c10045c8 <printk>
c10068fd:	83 c4 10             	add    $0x10,%esp
c1006900:	eb 20                	jmp    c1006922 <sys_opendir+0xf9>
c1006902:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006905:	83 f8 02             	cmp    $0x2,%eax
c1006908:	75 18                	jne    c1006922 <sys_opendir+0xf9>
c100690a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100690d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006912:	83 ec 08             	sub    $0x8,%esp
c1006915:	52                   	push   %edx
c1006916:	50                   	push   %eax
c1006917:	e8 c2 08 00 00       	call   c10071de <dir_open>
c100691c:	83 c4 10             	add    $0x10,%esp
c100691f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006922:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006925:	83 ec 0c             	sub    $0xc,%esp
c1006928:	50                   	push   %eax
c1006929:	e8 dc 0a 00 00       	call   c100740a <dir_close>
c100692e:	83 c4 10             	add    $0x10,%esp
c1006931:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006934:	c9                   	leave  
c1006935:	c3                   	ret    

c1006936 <sys_closedir>:
c1006936:	55                   	push   %ebp
c1006937:	89 e5                	mov    %esp,%ebp
c1006939:	83 ec 18             	sub    $0x18,%esp
c100693c:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006943:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006947:	74 15                	je     c100695e <sys_closedir+0x28>
c1006949:	83 ec 0c             	sub    $0xc,%esp
c100694c:	ff 75 08             	pushl  0x8(%ebp)
c100694f:	e8 b6 0a 00 00       	call   c100740a <dir_close>
c1006954:	83 c4 10             	add    $0x10,%esp
c1006957:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100695e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006961:	c9                   	leave  
c1006962:	c3                   	ret    

c1006963 <sys_readdir>:
c1006963:	55                   	push   %ebp
c1006964:	89 e5                	mov    %esp,%ebp
c1006966:	83 ec 08             	sub    $0x8,%esp
c1006969:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100696d:	75 19                	jne    c1006988 <sys_readdir+0x25>
c100696f:	68 ce a9 00 c1       	push   $0xc100a9ce
c1006974:	68 18 ac 00 c1       	push   $0xc100ac18
c1006979:	68 98 02 00 00       	push   $0x298
c100697e:	68 dc a4 00 c1       	push   $0xc100a4dc
c1006983:	e8 85 99 ff ff       	call   c100030d <__PANIC>
c1006988:	83 ec 0c             	sub    $0xc,%esp
c100698b:	ff 75 08             	pushl  0x8(%ebp)
c100698e:	e8 fa 13 00 00       	call   c1007d8d <dir_read>
c1006993:	83 c4 10             	add    $0x10,%esp
c1006996:	c9                   	leave  
c1006997:	c3                   	ret    

c1006998 <sys_rewinddir>:
c1006998:	55                   	push   %ebp
c1006999:	89 e5                	mov    %esp,%ebp
c100699b:	8b 45 08             	mov    0x8(%ebp),%eax
c100699e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10069a5:	90                   	nop
c10069a6:	5d                   	pop    %ebp
c10069a7:	c3                   	ret    

c10069a8 <sys_rmdir>:
c10069a8:	55                   	push   %ebp
c10069a9:	89 e5                	mov    %esp,%ebp
c10069ab:	81 ec 28 02 00 00    	sub    $0x228,%esp
c10069b1:	83 ec 04             	sub    $0x4,%esp
c10069b4:	68 08 02 00 00       	push   $0x208
c10069b9:	6a 00                	push   $0x0
c10069bb:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10069c1:	50                   	push   %eax
c10069c2:	e8 e3 96 ff ff       	call   c10000aa <memset>
c10069c7:	83 c4 10             	add    $0x10,%esp
c10069ca:	83 ec 08             	sub    $0x8,%esp
c10069cd:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10069d3:	50                   	push   %eax
c10069d4:	ff 75 08             	pushl  0x8(%ebp)
c10069d7:	e8 68 ef ff ff       	call   c1005944 <search_file>
c10069dc:	83 c4 10             	add    $0x10,%esp
c10069df:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10069e2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c10069e6:	75 19                	jne    c1006a01 <sys_rmdir+0x59>
c10069e8:	68 84 a7 00 c1       	push   $0xc100a784
c10069ed:	68 24 ac 00 c1       	push   $0xc100ac24
c10069f2:	68 a6 02 00 00       	push   $0x2a6
c10069f7:	68 dc a4 00 c1       	push   $0xc100a4dc
c10069fc:	e8 0c 99 ff ff       	call   c100030d <__PANIC>
c1006a01:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006a08:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006a0c:	75 1f                	jne    c1006a2d <sys_rmdir+0x85>
c1006a0e:	83 ec 04             	sub    $0x4,%esp
c1006a11:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1006a17:	50                   	push   %eax
c1006a18:	ff 75 08             	pushl  0x8(%ebp)
c1006a1b:	68 9b a9 00 c1       	push   $0xc100a99b
c1006a20:	e8 a3 db ff ff       	call   c10045c8 <printk>
c1006a25:	83 c4 10             	add    $0x10,%esp
c1006a28:	e9 87 00 00 00       	jmp    c1006ab4 <sys_rmdir+0x10c>
c1006a2d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006a30:	83 f8 01             	cmp    $0x1,%eax
c1006a33:	75 15                	jne    c1006a4a <sys_rmdir+0xa2>
c1006a35:	83 ec 08             	sub    $0x8,%esp
c1006a38:	ff 75 08             	pushl  0x8(%ebp)
c1006a3b:	68 b9 a9 00 c1       	push   $0xc100a9b9
c1006a40:	e8 83 db ff ff       	call   c10045c8 <printk>
c1006a45:	83 c4 10             	add    $0x10,%esp
c1006a48:	eb 6a                	jmp    c1006ab4 <sys_rmdir+0x10c>
c1006a4a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006a4d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006a52:	83 ec 08             	sub    $0x8,%esp
c1006a55:	52                   	push   %edx
c1006a56:	50                   	push   %eax
c1006a57:	e8 82 07 00 00       	call   c10071de <dir_open>
c1006a5c:	83 c4 10             	add    $0x10,%esp
c1006a5f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006a62:	83 ec 0c             	sub    $0xc,%esp
c1006a65:	ff 75 ec             	pushl  -0x14(%ebp)
c1006a68:	e8 f5 14 00 00       	call   c1007f62 <dir_is_empty>
c1006a6d:	83 c4 10             	add    $0x10,%esp
c1006a70:	85 c0                	test   %eax,%eax
c1006a72:	75 15                	jne    c1006a89 <sys_rmdir+0xe1>
c1006a74:	83 ec 08             	sub    $0x8,%esp
c1006a77:	ff 75 08             	pushl  0x8(%ebp)
c1006a7a:	68 dc a9 00 c1       	push   $0xc100a9dc
c1006a7f:	e8 44 db ff ff       	call   c10045c8 <printk>
c1006a84:	83 c4 10             	add    $0x10,%esp
c1006a87:	eb 1d                	jmp    c1006aa6 <sys_rmdir+0xfe>
c1006a89:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006a8c:	83 ec 08             	sub    $0x8,%esp
c1006a8f:	ff 75 ec             	pushl  -0x14(%ebp)
c1006a92:	50                   	push   %eax
c1006a93:	e8 f2 14 00 00       	call   c1007f8a <dir_remove>
c1006a98:	83 c4 10             	add    $0x10,%esp
c1006a9b:	85 c0                	test   %eax,%eax
c1006a9d:	75 07                	jne    c1006aa6 <sys_rmdir+0xfe>
c1006a9f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006aa6:	83 ec 0c             	sub    $0xc,%esp
c1006aa9:	ff 75 ec             	pushl  -0x14(%ebp)
c1006aac:	e8 59 09 00 00       	call   c100740a <dir_close>
c1006ab1:	83 c4 10             	add    $0x10,%esp
c1006ab4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006ab7:	83 ec 0c             	sub    $0xc,%esp
c1006aba:	50                   	push   %eax
c1006abb:	e8 4a 09 00 00       	call   c100740a <dir_close>
c1006ac0:	83 c4 10             	add    $0x10,%esp
c1006ac3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006ac6:	c9                   	leave  
c1006ac7:	c3                   	ret    

c1006ac8 <get_parent_dir_inode_nr>:
c1006ac8:	55                   	push   %ebp
c1006ac9:	89 e5                	mov    %esp,%ebp
c1006acb:	83 ec 18             	sub    $0x18,%esp
c1006ace:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006ad3:	83 ec 08             	sub    $0x8,%esp
c1006ad6:	ff 75 08             	pushl  0x8(%ebp)
c1006ad9:	50                   	push   %eax
c1006ada:	e8 7d 29 00 00       	call   c100945c <inode_open>
c1006adf:	83 c4 10             	add    $0x10,%esp
c1006ae2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006ae5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006ae8:	8b 40 10             	mov    0x10(%eax),%eax
c1006aeb:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006aee:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006af3:	8b 40 10             	mov    0x10(%eax),%eax
c1006af6:	8b 40 28             	mov    0x28(%eax),%eax
c1006af9:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1006afc:	73 19                	jae    c1006b17 <get_parent_dir_inode_nr+0x4f>
c1006afe:	68 24 aa 00 c1       	push   $0xc100aa24
c1006b03:	68 30 ac 00 c1       	push   $0xc100ac30
c1006b08:	68 c1 02 00 00       	push   $0x2c1
c1006b0d:	68 dc a4 00 c1       	push   $0xc100a4dc
c1006b12:	e8 f6 97 ff ff       	call   c100030d <__PANIC>
c1006b17:	83 ec 0c             	sub    $0xc,%esp
c1006b1a:	ff 75 f4             	pushl  -0xc(%ebp)
c1006b1d:	e8 10 2a 00 00       	call   c1009532 <inode_close>
c1006b22:	83 c4 10             	add    $0x10,%esp
c1006b25:	83 ec 04             	sub    $0x4,%esp
c1006b28:	6a 01                	push   $0x1
c1006b2a:	ff 75 f0             	pushl  -0x10(%ebp)
c1006b2d:	ff 75 0c             	pushl  0xc(%ebp)
c1006b30:	e8 3b e3 ff ff       	call   c1004e70 <ide_read>
c1006b35:	83 c4 10             	add    $0x10,%esp
c1006b38:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b3b:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006b3e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006b41:	83 c0 18             	add    $0x18,%eax
c1006b44:	8b 40 10             	mov    0x10(%eax),%eax
c1006b47:	3d ff 0f 00 00       	cmp    $0xfff,%eax
c1006b4c:	77 0e                	ja     c1006b5c <get_parent_dir_inode_nr+0x94>
c1006b4e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006b51:	83 c0 18             	add    $0x18,%eax
c1006b54:	8b 40 14             	mov    0x14(%eax),%eax
c1006b57:	83 f8 02             	cmp    $0x2,%eax
c1006b5a:	74 19                	je     c1006b75 <get_parent_dir_inode_nr+0xad>
c1006b5c:	68 50 aa 00 c1       	push   $0xc100aa50
c1006b61:	68 30 ac 00 c1       	push   $0xc100ac30
c1006b66:	68 c6 02 00 00       	push   $0x2c6
c1006b6b:	68 dc a4 00 c1       	push   $0xc100a4dc
c1006b70:	e8 98 97 ff ff       	call   c100030d <__PANIC>
c1006b75:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006b78:	83 c0 18             	add    $0x18,%eax
c1006b7b:	8b 40 10             	mov    0x10(%eax),%eax
c1006b7e:	c9                   	leave  
c1006b7f:	c3                   	ret    

c1006b80 <get_child_dir_name>:
c1006b80:	55                   	push   %ebp
c1006b81:	89 e5                	mov    %esp,%ebp
c1006b83:	57                   	push   %edi
c1006b84:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1006b8a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006b8f:	83 ec 08             	sub    $0x8,%esp
c1006b92:	ff 75 08             	pushl  0x8(%ebp)
c1006b95:	50                   	push   %eax
c1006b96:	e8 c1 28 00 00       	call   c100945c <inode_open>
c1006b9b:	83 c4 10             	add    $0x10,%esp
c1006b9e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006ba1:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006ba5:	8d 95 ac fd ff ff    	lea    -0x254(%ebp),%edx
c1006bab:	b8 00 00 00 00       	mov    $0x0,%eax
c1006bb0:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1006bb5:	89 d7                	mov    %edx,%edi
c1006bb7:	f3 ab                	rep stos %eax,%es:(%edi)
c1006bb9:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
c1006bc0:	eb 22                	jmp    c1006be4 <get_child_dir_name+0x64>
c1006bc2:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1006bc6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006bca:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1006bcd:	83 c1 04             	add    $0x4,%ecx
c1006bd0:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1006bd3:	89 94 85 ac fd ff ff 	mov    %edx,-0x254(%ebp,%eax,4)
c1006bda:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006bde:	83 c0 01             	add    $0x1,%eax
c1006be1:	88 45 f7             	mov    %al,-0x9(%ebp)
c1006be4:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1006be8:	76 d8                	jbe    c1006bc2 <get_child_dir_name+0x42>
c1006bea:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006bed:	8b 40 40             	mov    0x40(%eax),%eax
c1006bf0:	85 c0                	test   %eax,%eax
c1006bf2:	74 25                	je     c1006c19 <get_child_dir_name+0x99>
c1006bf4:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006bf7:	8b 50 40             	mov    0x40(%eax),%edx
c1006bfa:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
c1006c00:	83 c0 30             	add    $0x30,%eax
c1006c03:	83 ec 04             	sub    $0x4,%esp
c1006c06:	6a 01                	push   $0x1
c1006c08:	52                   	push   %edx
c1006c09:	50                   	push   %eax
c1006c0a:	e8 61 e2 ff ff       	call   c1004e70 <ide_read>
c1006c0f:	83 c4 10             	add    $0x10,%esp
c1006c12:	c7 45 f0 8c 00 00 00 	movl   $0x8c,-0x10(%ebp)
c1006c19:	83 ec 0c             	sub    $0xc,%esp
c1006c1c:	ff 75 e8             	pushl  -0x18(%ebp)
c1006c1f:	e8 0e 29 00 00       	call   c1009532 <inode_close>
c1006c24:	83 c4 10             	add    $0x10,%esp
c1006c27:	8b 45 14             	mov    0x14(%ebp),%eax
c1006c2a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006c2d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006c32:	8b 40 10             	mov    0x10(%eax),%eax
c1006c35:	8b 40 30             	mov    0x30(%eax),%eax
c1006c38:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1006c3b:	b8 00 02 00 00       	mov    $0x200,%eax
c1006c40:	ba 00 00 00 00       	mov    $0x0,%edx
c1006c45:	f7 75 e0             	divl   -0x20(%ebp)
c1006c48:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1006c4b:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006c4f:	e9 bc 00 00 00       	jmp    c1006d10 <get_child_dir_name+0x190>
c1006c54:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006c58:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1006c5f:	85 c0                	test   %eax,%eax
c1006c61:	0f 84 9f 00 00 00    	je     c1006d06 <get_child_dir_name+0x186>
c1006c67:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006c6b:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1006c72:	83 ec 04             	sub    $0x4,%esp
c1006c75:	6a 01                	push   $0x1
c1006c77:	50                   	push   %eax
c1006c78:	ff 75 14             	pushl  0x14(%ebp)
c1006c7b:	e8 f0 e1 ff ff       	call   c1004e70 <ide_read>
c1006c80:	83 c4 10             	add    $0x10,%esp
c1006c83:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
c1006c87:	eb 74                	jmp    c1006cfd <get_child_dir_name+0x17d>
c1006c89:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1006c8d:	89 d0                	mov    %edx,%eax
c1006c8f:	01 c0                	add    %eax,%eax
c1006c91:	01 d0                	add    %edx,%eax
c1006c93:	c1 e0 03             	shl    $0x3,%eax
c1006c96:	89 c2                	mov    %eax,%edx
c1006c98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006c9b:	01 d0                	add    %edx,%eax
c1006c9d:	8b 40 10             	mov    0x10(%eax),%eax
c1006ca0:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1006ca3:	75 4e                	jne    c1006cf3 <get_child_dir_name+0x173>
c1006ca5:	8b 45 10             	mov    0x10(%ebp),%eax
c1006ca8:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1006cad:	89 c2                	mov    %eax,%edx
c1006caf:	b8 00 00 00 00       	mov    $0x0,%eax
c1006cb4:	89 d7                	mov    %edx,%edi
c1006cb6:	f2 ae                	repnz scas %es:(%edi),%al
c1006cb8:	89 c8                	mov    %ecx,%eax
c1006cba:	f7 d0                	not    %eax
c1006cbc:	8d 50 ff             	lea    -0x1(%eax),%edx
c1006cbf:	8b 45 10             	mov    0x10(%ebp),%eax
c1006cc2:	01 d0                	add    %edx,%eax
c1006cc4:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1006cc9:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1006ccd:	89 d0                	mov    %edx,%eax
c1006ccf:	01 c0                	add    %eax,%eax
c1006cd1:	01 d0                	add    %edx,%eax
c1006cd3:	c1 e0 03             	shl    $0x3,%eax
c1006cd6:	89 c2                	mov    %eax,%edx
c1006cd8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006cdb:	01 d0                	add    %edx,%eax
c1006cdd:	83 ec 08             	sub    $0x8,%esp
c1006ce0:	50                   	push   %eax
c1006ce1:	ff 75 10             	pushl  0x10(%ebp)
c1006ce4:	e8 ec 94 ff ff       	call   c10001d5 <strcat>
c1006ce9:	83 c4 10             	add    $0x10,%esp
c1006cec:	b8 00 00 00 00       	mov    $0x0,%eax
c1006cf1:	eb 2f                	jmp    c1006d22 <get_child_dir_name+0x1a2>
c1006cf3:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1006cf7:	83 c0 01             	add    $0x1,%eax
c1006cfa:	88 45 ef             	mov    %al,-0x11(%ebp)
c1006cfd:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1006d01:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1006d04:	77 83                	ja     c1006c89 <get_child_dir_name+0x109>
c1006d06:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006d0a:	83 c0 01             	add    $0x1,%eax
c1006d0d:	88 45 f7             	mov    %al,-0x9(%ebp)
c1006d10:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006d14:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1006d17:	0f 87 37 ff ff ff    	ja     c1006c54 <get_child_dir_name+0xd4>
c1006d1d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006d22:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1006d25:	c9                   	leave  
c1006d26:	c3                   	ret    

c1006d27 <sys_getcwd>:
c1006d27:	55                   	push   %ebp
c1006d28:	89 e5                	mov    %esp,%ebp
c1006d2a:	57                   	push   %edi
c1006d2b:	53                   	push   %ebx
c1006d2c:	81 ec 20 02 00 00    	sub    $0x220,%esp
c1006d32:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006d36:	75 19                	jne    c1006d51 <sys_getcwd+0x2a>
c1006d38:	68 16 a7 00 c1       	push   $0xc100a716
c1006d3d:	68 48 ac 00 c1       	push   $0xc100ac48
c1006d42:	68 f9 02 00 00       	push   $0x2f9
c1006d47:	68 dc a4 00 c1       	push   $0xc100a4dc
c1006d4c:	e8 bc 95 ff ff       	call   c100030d <__PANIC>
c1006d51:	83 ec 08             	sub    $0x8,%esp
c1006d54:	6a 02                	push   $0x2
c1006d56:	68 00 02 00 00       	push   $0x200
c1006d5b:	e8 14 bc ff ff       	call   c1002974 <vmm_malloc>
c1006d60:	83 c4 10             	add    $0x10,%esp
c1006d63:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006d66:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1006d6a:	75 0a                	jne    c1006d76 <sys_getcwd+0x4f>
c1006d6c:	b8 00 00 00 00       	mov    $0x0,%eax
c1006d71:	e9 97 01 00 00       	jmp    c1006f0d <sys_getcwd+0x1e6>
c1006d76:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1006d7d:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1006d82:	8b 80 e4 00 00 00    	mov    0xe4(%eax),%eax
c1006d88:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006d8b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006d8f:	78 09                	js     c1006d9a <sys_getcwd+0x73>
c1006d91:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
c1006d98:	7e 19                	jle    c1006db3 <sys_getcwd+0x8c>
c1006d9a:	68 88 aa 00 c1       	push   $0xc100aa88
c1006d9f:	68 48 ac 00 c1       	push   $0xc100ac48
c1006da4:	68 01 03 00 00       	push   $0x301
c1006da9:	68 dc a4 00 c1       	push   $0xc100a4dc
c1006dae:	e8 5a 95 ff ff       	call   c100030d <__PANIC>
c1006db3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006db7:	75 17                	jne    c1006dd0 <sys_getcwd+0xa9>
c1006db9:	8b 45 08             	mov    0x8(%ebp),%eax
c1006dbc:	c6 00 2f             	movb   $0x2f,(%eax)
c1006dbf:	8b 45 08             	mov    0x8(%ebp),%eax
c1006dc2:	83 c0 01             	add    $0x1,%eax
c1006dc5:	c6 00 00             	movb   $0x0,(%eax)
c1006dc8:	8b 45 08             	mov    0x8(%ebp),%eax
c1006dcb:	e9 3d 01 00 00       	jmp    c1006f0d <sys_getcwd+0x1e6>
c1006dd0:	83 ec 04             	sub    $0x4,%esp
c1006dd3:	ff 75 0c             	pushl  0xc(%ebp)
c1006dd6:	6a 00                	push   $0x0
c1006dd8:	ff 75 08             	pushl  0x8(%ebp)
c1006ddb:	e8 ca 92 ff ff       	call   c10000aa <memset>
c1006de0:	83 c4 10             	add    $0x10,%esp
c1006de3:	c7 85 e6 fd ff ff 00 	movl   $0x0,-0x21a(%ebp)
c1006dea:	00 00 00 
c1006ded:	8d 85 ea fd ff ff    	lea    -0x216(%ebp),%eax
c1006df3:	b9 fc 01 00 00       	mov    $0x1fc,%ecx
c1006df8:	bb 00 00 00 00       	mov    $0x0,%ebx
c1006dfd:	89 18                	mov    %ebx,(%eax)
c1006dff:	89 5c 08 fc          	mov    %ebx,-0x4(%eax,%ecx,1)
c1006e03:	8d 50 04             	lea    0x4(%eax),%edx
c1006e06:	83 e2 fc             	and    $0xfffffffc,%edx
c1006e09:	29 d0                	sub    %edx,%eax
c1006e0b:	01 c1                	add    %eax,%ecx
c1006e0d:	83 e1 fc             	and    $0xfffffffc,%ecx
c1006e10:	c1 e9 02             	shr    $0x2,%ecx
c1006e13:	89 d7                	mov    %edx,%edi
c1006e15:	89 d8                	mov    %ebx,%eax
c1006e17:	f3 ab                	rep stos %eax,%es:(%edi)
c1006e19:	eb 58                	jmp    c1006e73 <sys_getcwd+0x14c>
c1006e1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006e1e:	83 ec 08             	sub    $0x8,%esp
c1006e21:	ff 75 f0             	pushl  -0x10(%ebp)
c1006e24:	50                   	push   %eax
c1006e25:	e8 9e fc ff ff       	call   c1006ac8 <get_parent_dir_inode_nr>
c1006e2a:	83 c4 10             	add    $0x10,%esp
c1006e2d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006e30:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006e33:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006e36:	ff 75 f0             	pushl  -0x10(%ebp)
c1006e39:	8d 8d e6 fd ff ff    	lea    -0x21a(%ebp),%ecx
c1006e3f:	51                   	push   %ecx
c1006e40:	52                   	push   %edx
c1006e41:	50                   	push   %eax
c1006e42:	e8 39 fd ff ff       	call   c1006b80 <get_child_dir_name>
c1006e47:	83 c4 10             	add    $0x10,%esp
c1006e4a:	83 f8 ff             	cmp    $0xffffffff,%eax
c1006e4d:	75 1e                	jne    c1006e6d <sys_getcwd+0x146>
c1006e4f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006e52:	83 ec 08             	sub    $0x8,%esp
c1006e55:	68 00 02 00 00       	push   $0x200
c1006e5a:	50                   	push   %eax
c1006e5b:	e8 39 bc ff ff       	call   c1002a99 <vmm_free>
c1006e60:	83 c4 10             	add    $0x10,%esp
c1006e63:	b8 00 00 00 00       	mov    $0x0,%eax
c1006e68:	e9 a0 00 00 00       	jmp    c1006f0d <sys_getcwd+0x1e6>
c1006e6d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006e70:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006e73:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006e77:	75 a2                	jne    c1006e1b <sys_getcwd+0xf4>
c1006e79:	83 ec 0c             	sub    $0xc,%esp
c1006e7c:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c1006e82:	50                   	push   %eax
c1006e83:	e8 96 92 ff ff       	call   c100011e <strlen>
c1006e88:	83 c4 10             	add    $0x10,%esp
c1006e8b:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1006e8e:	73 49                	jae    c1006ed9 <sys_getcwd+0x1b2>
c1006e90:	68 b8 aa 00 c1       	push   $0xc100aab8
c1006e95:	68 48 ac 00 c1       	push   $0xc100ac48
c1006e9a:	68 17 03 00 00       	push   $0x317
c1006e9f:	68 dc a4 00 c1       	push   $0xc100a4dc
c1006ea4:	e8 64 94 ff ff       	call   c100030d <__PANIC>
c1006ea9:	83 ec 0c             	sub    $0xc,%esp
c1006eac:	ff 75 08             	pushl  0x8(%ebp)
c1006eaf:	e8 6a 92 ff ff       	call   c100011e <strlen>
c1006eb4:	83 c4 10             	add    $0x10,%esp
c1006eb7:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c1006ebb:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c1006ebf:	8b 45 08             	mov    0x8(%ebp),%eax
c1006ec2:	01 d0                	add    %edx,%eax
c1006ec4:	83 ec 08             	sub    $0x8,%esp
c1006ec7:	ff 75 e8             	pushl  -0x18(%ebp)
c1006eca:	50                   	push   %eax
c1006ecb:	e8 4a 93 ff ff       	call   c100021a <strcpy>
c1006ed0:	83 c4 10             	add    $0x10,%esp
c1006ed3:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006ed6:	c6 00 00             	movb   $0x0,(%eax)
c1006ed9:	83 ec 08             	sub    $0x8,%esp
c1006edc:	6a 2f                	push   $0x2f
c1006ede:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c1006ee4:	50                   	push   %eax
c1006ee5:	e8 ac 92 ff ff       	call   c1000196 <strrchr>
c1006eea:	83 c4 10             	add    $0x10,%esp
c1006eed:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006ef0:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1006ef4:	75 b3                	jne    c1006ea9 <sys_getcwd+0x182>
c1006ef6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006ef9:	83 ec 08             	sub    $0x8,%esp
c1006efc:	68 00 02 00 00       	push   $0x200
c1006f01:	50                   	push   %eax
c1006f02:	e8 92 bb ff ff       	call   c1002a99 <vmm_free>
c1006f07:	83 c4 10             	add    $0x10,%esp
c1006f0a:	8b 45 08             	mov    0x8(%ebp),%eax
c1006f0d:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1006f10:	5b                   	pop    %ebx
c1006f11:	5f                   	pop    %edi
c1006f12:	5d                   	pop    %ebp
c1006f13:	c3                   	ret    

c1006f14 <sys_stat>:
c1006f14:	55                   	push   %ebp
c1006f15:	89 e5                	mov    %esp,%ebp
c1006f17:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1006f1d:	83 ec 08             	sub    $0x8,%esp
c1006f20:	68 0b a5 00 c1       	push   $0xc100a50b
c1006f25:	ff 75 08             	pushl  0x8(%ebp)
c1006f28:	e8 56 92 ff ff       	call   c1000183 <strcmp>
c1006f2d:	83 c4 10             	add    $0x10,%esp
c1006f30:	85 c0                	test   %eax,%eax
c1006f32:	74 2e                	je     c1006f62 <sys_stat+0x4e>
c1006f34:	83 ec 08             	sub    $0x8,%esp
c1006f37:	68 0d a5 00 c1       	push   $0xc100a50d
c1006f3c:	ff 75 08             	pushl  0x8(%ebp)
c1006f3f:	e8 3f 92 ff ff       	call   c1000183 <strcmp>
c1006f44:	83 c4 10             	add    $0x10,%esp
c1006f47:	85 c0                	test   %eax,%eax
c1006f49:	74 17                	je     c1006f62 <sys_stat+0x4e>
c1006f4b:	83 ec 08             	sub    $0x8,%esp
c1006f4e:	68 10 a5 00 c1       	push   $0xc100a510
c1006f53:	ff 75 08             	pushl  0x8(%ebp)
c1006f56:	e8 28 92 ff ff       	call   c1000183 <strcmp>
c1006f5b:	83 c4 10             	add    $0x10,%esp
c1006f5e:	85 c0                	test   %eax,%eax
c1006f60:	75 2d                	jne    c1006f8f <sys_stat+0x7b>
c1006f62:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006f65:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
c1006f6c:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006f6f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1006f75:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1006f7a:	8b 00                	mov    (%eax),%eax
c1006f7c:	8b 50 04             	mov    0x4(%eax),%edx
c1006f7f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006f82:	89 50 04             	mov    %edx,0x4(%eax)
c1006f85:	b8 00 00 00 00       	mov    $0x0,%eax
c1006f8a:	e9 af 00 00 00       	jmp    c100703e <sys_stat+0x12a>
c1006f8f:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006f96:	83 ec 04             	sub    $0x4,%esp
c1006f99:	68 08 02 00 00       	push   $0x208
c1006f9e:	6a 00                	push   $0x0
c1006fa0:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1006fa6:	50                   	push   %eax
c1006fa7:	e8 fe 90 ff ff       	call   c10000aa <memset>
c1006fac:	83 c4 10             	add    $0x10,%esp
c1006faf:	83 ec 08             	sub    $0x8,%esp
c1006fb2:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1006fb8:	50                   	push   %eax
c1006fb9:	ff 75 08             	pushl  0x8(%ebp)
c1006fbc:	e8 83 e9 ff ff       	call   c1005944 <search_file>
c1006fc1:	83 c4 10             	add    $0x10,%esp
c1006fc4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006fc7:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006fcb:	74 4c                	je     c1007019 <sys_stat+0x105>
c1006fcd:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006fd0:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006fd5:	83 ec 08             	sub    $0x8,%esp
c1006fd8:	52                   	push   %edx
c1006fd9:	50                   	push   %eax
c1006fda:	e8 7d 24 00 00       	call   c100945c <inode_open>
c1006fdf:	83 c4 10             	add    $0x10,%esp
c1006fe2:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006fe5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006fe8:	8b 50 04             	mov    0x4(%eax),%edx
c1006feb:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006fee:	89 50 04             	mov    %edx,0x4(%eax)
c1006ff1:	83 ec 0c             	sub    $0xc,%esp
c1006ff4:	ff 75 ec             	pushl  -0x14(%ebp)
c1006ff7:	e8 36 25 00 00       	call   c1009532 <inode_close>
c1006ffc:	83 c4 10             	add    $0x10,%esp
c1006fff:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1007002:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007005:	89 50 08             	mov    %edx,0x8(%eax)
c1007008:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100700b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100700e:	89 10                	mov    %edx,(%eax)
c1007010:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007017:	eb 13                	jmp    c100702c <sys_stat+0x118>
c1007019:	83 ec 08             	sub    $0x8,%esp
c100701c:	ff 75 08             	pushl  0x8(%ebp)
c100701f:	68 da aa 00 c1       	push   $0xc100aada
c1007024:	e8 9f d5 ff ff       	call   c10045c8 <printk>
c1007029:	83 c4 10             	add    $0x10,%esp
c100702c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100702f:	83 ec 0c             	sub    $0xc,%esp
c1007032:	50                   	push   %eax
c1007033:	e8 d2 03 00 00       	call   c100740a <dir_close>
c1007038:	83 c4 10             	add    $0x10,%esp
c100703b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100703e:	c9                   	leave  
c100703f:	c3                   	ret    

c1007040 <sys_chdir>:
c1007040:	55                   	push   %ebp
c1007041:	89 e5                	mov    %esp,%ebp
c1007043:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1007049:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007050:	83 ec 04             	sub    $0x4,%esp
c1007053:	68 08 02 00 00       	push   $0x208
c1007058:	6a 00                	push   $0x0
c100705a:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007060:	50                   	push   %eax
c1007061:	e8 44 90 ff ff       	call   c10000aa <memset>
c1007066:	83 c4 10             	add    $0x10,%esp
c1007069:	83 ec 08             	sub    $0x8,%esp
c100706c:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007072:	50                   	push   %eax
c1007073:	ff 75 08             	pushl  0x8(%ebp)
c1007076:	e8 c9 e8 ff ff       	call   c1005944 <search_file>
c100707b:	83 c4 10             	add    $0x10,%esp
c100707e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007081:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007085:	74 32                	je     c10070b9 <sys_chdir+0x79>
c1007087:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100708a:	83 f8 02             	cmp    $0x2,%eax
c100708d:	75 17                	jne    c10070a6 <sys_chdir+0x66>
c100708f:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1007094:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007097:	89 90 e4 00 00 00    	mov    %edx,0xe4(%eax)
c100709d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10070a4:	eb 13                	jmp    c10070b9 <sys_chdir+0x79>
c10070a6:	83 ec 08             	sub    $0x8,%esp
c10070a9:	ff 75 08             	pushl  0x8(%ebp)
c10070ac:	68 f4 aa 00 c1       	push   $0xc100aaf4
c10070b1:	e8 12 d5 ff ff       	call   c10045c8 <printk>
c10070b6:	83 c4 10             	add    $0x10,%esp
c10070b9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10070bc:	83 ec 0c             	sub    $0xc,%esp
c10070bf:	50                   	push   %eax
c10070c0:	e8 45 03 00 00       	call   c100740a <dir_close>
c10070c5:	83 c4 10             	add    $0x10,%esp
c10070c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10070cb:	c9                   	leave  
c10070cc:	c3                   	ret    

c10070cd <fs_init>:
c10070cd:	55                   	push   %ebp
c10070ce:	89 e5                	mov    %esp,%ebp
c10070d0:	83 ec 18             	sub    $0x18,%esp
c10070d3:	e8 c3 e4 ff ff       	call   c100559b <mount_partition>
c10070d8:	e8 a0 d1 ff ff       	call   c100427d <clear>
c10070dd:	83 ec 08             	sub    $0x8,%esp
c10070e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
c10070e3:	50                   	push   %eax
c10070e4:	68 0b a5 00 c1       	push   $0xc100a50b
c10070e9:	e8 26 fe ff ff       	call   c1006f14 <sys_stat>
c10070ee:	83 c4 10             	add    $0x10,%esp
c10070f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10070f4:	83 f8 02             	cmp    $0x2,%eax
c10070f7:	75 07                	jne    c1007100 <fs_init+0x33>
c10070f9:	b9 1d ab 00 c1       	mov    $0xc100ab1d,%ecx
c10070fe:	eb 05                	jmp    c1007105 <fs_init+0x38>
c1007100:	b9 27 ab 00 c1       	mov    $0xc100ab27,%ecx
c1007105:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007108:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100710b:	51                   	push   %ecx
c100710c:	52                   	push   %edx
c100710d:	50                   	push   %eax
c100710e:	68 30 ab 00 c1       	push   $0xc100ab30
c1007113:	e8 b0 d4 ff ff       	call   c10045c8 <printk>
c1007118:	83 c4 10             	add    $0x10,%esp
c100711b:	83 ec 08             	sub    $0x8,%esp
c100711e:	8d 45 ec             	lea    -0x14(%ebp),%eax
c1007121:	50                   	push   %eax
c1007122:	68 63 ab 00 c1       	push   $0xc100ab63
c1007127:	e8 e8 fd ff ff       	call   c1006f14 <sys_stat>
c100712c:	83 c4 10             	add    $0x10,%esp
c100712f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007132:	83 f8 02             	cmp    $0x2,%eax
c1007135:	75 07                	jne    c100713e <fs_init+0x71>
c1007137:	b9 1d ab 00 c1       	mov    $0xc100ab1d,%ecx
c100713c:	eb 05                	jmp    c1007143 <fs_init+0x76>
c100713e:	b9 27 ab 00 c1       	mov    $0xc100ab27,%ecx
c1007143:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007146:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007149:	51                   	push   %ecx
c100714a:	52                   	push   %edx
c100714b:	50                   	push   %eax
c100714c:	68 6c ab 00 c1       	push   $0xc100ab6c
c1007151:	e8 72 d4 ff ff       	call   c10045c8 <printk>
c1007156:	83 c4 10             	add    $0x10,%esp
c1007159:	90                   	nop
c100715a:	c9                   	leave  
c100715b:	c3                   	ret    

c100715c <open_root_dir>:
c100715c:	55                   	push   %ebp
c100715d:	89 e5                	mov    %esp,%ebp
c100715f:	53                   	push   %ebx
c1007160:	83 ec 04             	sub    $0x4,%esp
c1007163:	83 ec 08             	sub    $0x8,%esp
c1007166:	6a 02                	push   $0x2
c1007168:	68 08 02 00 00       	push   $0x208
c100716d:	e8 02 b8 ff ff       	call   c1002974 <vmm_malloc>
c1007172:	83 c4 10             	add    $0x10,%esp
c1007175:	a3 34 32 a1 c1       	mov    %eax,0xc1a13234
c100717a:	8b 45 08             	mov    0x8(%ebp),%eax
c100717d:	8b 40 10             	mov    0x10(%eax),%eax
c1007180:	8b 40 2c             	mov    0x2c(%eax),%eax
c1007183:	83 ec 08             	sub    $0x8,%esp
c1007186:	50                   	push   %eax
c1007187:	68 54 ac 00 c1       	push   $0xc100ac54
c100718c:	e8 37 d4 ff ff       	call   c10045c8 <printk>
c1007191:	83 c4 10             	add    $0x10,%esp
c1007194:	8b 45 08             	mov    0x8(%ebp),%eax
c1007197:	8b 40 10             	mov    0x10(%eax),%eax
c100719a:	8b 40 2c             	mov    0x2c(%eax),%eax
c100719d:	8b 1d 34 32 a1 c1    	mov    0xc1a13234,%ebx
c10071a3:	83 ec 08             	sub    $0x8,%esp
c10071a6:	50                   	push   %eax
c10071a7:	ff 75 08             	pushl  0x8(%ebp)
c10071aa:	e8 ad 22 00 00       	call   c100945c <inode_open>
c10071af:	83 c4 10             	add    $0x10,%esp
c10071b2:	89 03                	mov    %eax,(%ebx)
c10071b4:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c10071b9:	8b 00                	mov    (%eax),%eax
c10071bb:	83 ec 08             	sub    $0x8,%esp
c10071be:	50                   	push   %eax
c10071bf:	68 68 ac 00 c1       	push   $0xc100ac68
c10071c4:	e8 ff d3 ff ff       	call   c10045c8 <printk>
c10071c9:	83 c4 10             	add    $0x10,%esp
c10071cc:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c10071d1:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10071d8:	90                   	nop
c10071d9:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10071dc:	c9                   	leave  
c10071dd:	c3                   	ret    

c10071de <dir_open>:
c10071de:	55                   	push   %ebp
c10071df:	89 e5                	mov    %esp,%ebp
c10071e1:	83 ec 18             	sub    $0x18,%esp
c10071e4:	83 ec 08             	sub    $0x8,%esp
c10071e7:	6a 02                	push   $0x2
c10071e9:	68 08 02 00 00       	push   $0x208
c10071ee:	e8 81 b7 ff ff       	call   c1002974 <vmm_malloc>
c10071f3:	83 c4 10             	add    $0x10,%esp
c10071f6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10071f9:	83 ec 08             	sub    $0x8,%esp
c10071fc:	ff 75 0c             	pushl  0xc(%ebp)
c10071ff:	ff 75 08             	pushl  0x8(%ebp)
c1007202:	e8 55 22 00 00       	call   c100945c <inode_open>
c1007207:	83 c4 10             	add    $0x10,%esp
c100720a:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100720d:	89 02                	mov    %eax,(%edx)
c100720f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007212:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1007219:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100721c:	c9                   	leave  
c100721d:	c3                   	ret    

c100721e <search_dir_entry>:
c100721e:	55                   	push   %ebp
c100721f:	89 e5                	mov    %esp,%ebp
c1007221:	83 ec 28             	sub    $0x28,%esp
c1007224:	c7 45 e8 8c 00 00 00 	movl   $0x8c,-0x18(%ebp)
c100722b:	83 ec 08             	sub    $0x8,%esp
c100722e:	6a 02                	push   $0x2
c1007230:	68 30 02 00 00       	push   $0x230
c1007235:	e8 3a b7 ff ff       	call   c1002974 <vmm_malloc>
c100723a:	83 c4 10             	add    $0x10,%esp
c100723d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007240:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c1007244:	75 1a                	jne    c1007260 <search_dir_entry+0x42>
c1007246:	83 ec 0c             	sub    $0xc,%esp
c1007249:	68 80 ac 00 c1       	push   $0xc100ac80
c100724e:	e8 75 d3 ff ff       	call   c10045c8 <printk>
c1007253:	83 c4 10             	add    $0x10,%esp
c1007256:	b8 00 00 00 00       	mov    $0x0,%eax
c100725b:	e9 a8 01 00 00       	jmp    c1007408 <search_dir_entry+0x1ea>
c1007260:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007267:	eb 23                	jmp    c100728c <search_dir_entry+0x6e>
c1007269:	8b 45 0c             	mov    0xc(%ebp),%eax
c100726c:	8b 00                	mov    (%eax),%eax
c100726e:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007271:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1007278:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100727b:	01 ca                	add    %ecx,%edx
c100727d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c1007280:	83 c1 04             	add    $0x4,%ecx
c1007283:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1007286:	89 02                	mov    %eax,(%edx)
c1007288:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100728c:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1007290:	76 d7                	jbe    c1007269 <search_dir_entry+0x4b>
c1007292:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007299:	8b 45 0c             	mov    0xc(%ebp),%eax
c100729c:	8b 00                	mov    (%eax),%eax
c100729e:	8b 40 40             	mov    0x40(%eax),%eax
c10072a1:	85 c0                	test   %eax,%eax
c10072a3:	74 1d                	je     c10072c2 <search_dir_entry+0xa4>
c10072a5:	8b 45 0c             	mov    0xc(%ebp),%eax
c10072a8:	8b 00                	mov    (%eax),%eax
c10072aa:	8b 40 40             	mov    0x40(%eax),%eax
c10072ad:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10072b0:	83 c2 30             	add    $0x30,%edx
c10072b3:	83 ec 04             	sub    $0x4,%esp
c10072b6:	6a 01                	push   $0x1
c10072b8:	50                   	push   %eax
c10072b9:	52                   	push   %edx
c10072ba:	e8 b1 db ff ff       	call   c1004e70 <ide_read>
c10072bf:	83 c4 10             	add    $0x10,%esp
c10072c2:	83 ec 08             	sub    $0x8,%esp
c10072c5:	6a 02                	push   $0x2
c10072c7:	68 00 02 00 00       	push   $0x200
c10072cc:	e8 a3 b6 ff ff       	call   c1002974 <vmm_malloc>
c10072d1:	83 c4 10             	add    $0x10,%esp
c10072d4:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10072d7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10072da:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10072dd:	8b 45 08             	mov    0x8(%ebp),%eax
c10072e0:	8b 40 10             	mov    0x10(%eax),%eax
c10072e3:	8b 40 30             	mov    0x30(%eax),%eax
c10072e6:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10072e9:	b8 00 02 00 00       	mov    $0x200,%eax
c10072ee:	ba 00 00 00 00       	mov    $0x0,%edx
c10072f3:	f7 75 dc             	divl   -0x24(%ebp)
c10072f6:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10072f9:	e9 d1 00 00 00       	jmp    c10073cf <search_dir_entry+0x1b1>
c10072fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007301:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1007308:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100730b:	01 d0                	add    %edx,%eax
c100730d:	8b 00                	mov    (%eax),%eax
c100730f:	85 c0                	test   %eax,%eax
c1007311:	75 09                	jne    c100731c <search_dir_entry+0xfe>
c1007313:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007317:	e9 b3 00 00 00       	jmp    c10073cf <search_dir_entry+0x1b1>
c100731c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100731f:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1007326:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007329:	01 d0                	add    %edx,%eax
c100732b:	8b 00                	mov    (%eax),%eax
c100732d:	83 ec 04             	sub    $0x4,%esp
c1007330:	6a 01                	push   $0x1
c1007332:	50                   	push   %eax
c1007333:	ff 75 e0             	pushl  -0x20(%ebp)
c1007336:	e8 35 db ff ff       	call   c1004e70 <ide_read>
c100733b:	83 c4 10             	add    $0x10,%esp
c100733e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007345:	eb 61                	jmp    c10073a8 <search_dir_entry+0x18a>
c1007347:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100734a:	83 ec 08             	sub    $0x8,%esp
c100734d:	ff 75 10             	pushl  0x10(%ebp)
c1007350:	50                   	push   %eax
c1007351:	e8 2d 8e ff ff       	call   c1000183 <strcmp>
c1007356:	83 c4 10             	add    $0x10,%esp
c1007359:	85 c0                	test   %eax,%eax
c100735b:	75 43                	jne    c10073a0 <search_dir_entry+0x182>
c100735d:	83 ec 04             	sub    $0x4,%esp
c1007360:	ff 75 dc             	pushl  -0x24(%ebp)
c1007363:	ff 75 f0             	pushl  -0x10(%ebp)
c1007366:	ff 75 14             	pushl  0x14(%ebp)
c1007369:	e8 9a 8d ff ff       	call   c1000108 <memcpy>
c100736e:	83 c4 10             	add    $0x10,%esp
c1007371:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007374:	83 ec 08             	sub    $0x8,%esp
c1007377:	68 00 02 00 00       	push   $0x200
c100737c:	50                   	push   %eax
c100737d:	e8 17 b7 ff ff       	call   c1002a99 <vmm_free>
c1007382:	83 c4 10             	add    $0x10,%esp
c1007385:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007388:	83 ec 08             	sub    $0x8,%esp
c100738b:	68 30 02 00 00       	push   $0x230
c1007390:	50                   	push   %eax
c1007391:	e8 03 b7 ff ff       	call   c1002a99 <vmm_free>
c1007396:	83 c4 10             	add    $0x10,%esp
c1007399:	b8 01 00 00 00       	mov    $0x1,%eax
c100739e:	eb 68                	jmp    c1007408 <search_dir_entry+0x1ea>
c10073a0:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10073a4:	83 45 f0 18          	addl   $0x18,-0x10(%ebp)
c10073a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10073ab:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c10073ae:	72 97                	jb     c1007347 <search_dir_entry+0x129>
c10073b0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10073b4:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10073b7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10073ba:	83 ec 04             	sub    $0x4,%esp
c10073bd:	68 00 02 00 00       	push   $0x200
c10073c2:	6a 00                	push   $0x0
c10073c4:	ff 75 e0             	pushl  -0x20(%ebp)
c10073c7:	e8 de 8c ff ff       	call   c10000aa <memset>
c10073cc:	83 c4 10             	add    $0x10,%esp
c10073cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10073d2:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c10073d5:	0f 82 23 ff ff ff    	jb     c10072fe <search_dir_entry+0xe0>
c10073db:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10073de:	83 ec 08             	sub    $0x8,%esp
c10073e1:	68 00 02 00 00       	push   $0x200
c10073e6:	50                   	push   %eax
c10073e7:	e8 ad b6 ff ff       	call   c1002a99 <vmm_free>
c10073ec:	83 c4 10             	add    $0x10,%esp
c10073ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10073f2:	83 ec 08             	sub    $0x8,%esp
c10073f5:	68 30 02 00 00       	push   $0x230
c10073fa:	50                   	push   %eax
c10073fb:	e8 99 b6 ff ff       	call   c1002a99 <vmm_free>
c1007400:	83 c4 10             	add    $0x10,%esp
c1007403:	b8 00 00 00 00       	mov    $0x0,%eax
c1007408:	c9                   	leave  
c1007409:	c3                   	ret    

c100740a <dir_close>:
c100740a:	55                   	push   %ebp
c100740b:	89 e5                	mov    %esp,%ebp
c100740d:	83 ec 08             	sub    $0x8,%esp
c1007410:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1007415:	39 45 08             	cmp    %eax,0x8(%ebp)
c1007418:	74 27                	je     c1007441 <dir_close+0x37>
c100741a:	8b 45 08             	mov    0x8(%ebp),%eax
c100741d:	8b 00                	mov    (%eax),%eax
c100741f:	83 ec 0c             	sub    $0xc,%esp
c1007422:	50                   	push   %eax
c1007423:	e8 0a 21 00 00       	call   c1009532 <inode_close>
c1007428:	83 c4 10             	add    $0x10,%esp
c100742b:	8b 45 08             	mov    0x8(%ebp),%eax
c100742e:	83 ec 08             	sub    $0x8,%esp
c1007431:	68 08 02 00 00       	push   $0x208
c1007436:	50                   	push   %eax
c1007437:	e8 5d b6 ff ff       	call   c1002a99 <vmm_free>
c100743c:	83 c4 10             	add    $0x10,%esp
c100743f:	eb 01                	jmp    c1007442 <dir_close+0x38>
c1007441:	90                   	nop
c1007442:	c9                   	leave  
c1007443:	c3                   	ret    

c1007444 <create_dir_entry>:
c1007444:	55                   	push   %ebp
c1007445:	89 e5                	mov    %esp,%ebp
c1007447:	83 ec 18             	sub    $0x18,%esp
c100744a:	8b 45 10             	mov    0x10(%ebp),%eax
c100744d:	88 45 f4             	mov    %al,-0xc(%ebp)
c1007450:	83 ec 0c             	sub    $0xc,%esp
c1007453:	ff 75 08             	pushl  0x8(%ebp)
c1007456:	e8 c3 8c ff ff       	call   c100011e <strlen>
c100745b:	83 c4 10             	add    $0x10,%esp
c100745e:	83 f8 10             	cmp    $0x10,%eax
c1007461:	76 16                	jbe    c1007479 <create_dir_entry+0x35>
c1007463:	68 b4 ac 00 c1       	push   $0xc100acb4
c1007468:	68 68 ae 00 c1       	push   $0xc100ae68
c100746d:	6a 72                	push   $0x72
c100746f:	68 dc ac 00 c1       	push   $0xc100acdc
c1007474:	e8 94 8e ff ff       	call   c100030d <__PANIC>
c1007479:	83 ec 0c             	sub    $0xc,%esp
c100747c:	ff 75 08             	pushl  0x8(%ebp)
c100747f:	e8 9a 8c ff ff       	call   c100011e <strlen>
c1007484:	83 c4 10             	add    $0x10,%esp
c1007487:	8b 55 14             	mov    0x14(%ebp),%edx
c100748a:	83 ec 04             	sub    $0x4,%esp
c100748d:	50                   	push   %eax
c100748e:	ff 75 08             	pushl  0x8(%ebp)
c1007491:	52                   	push   %edx
c1007492:	e8 71 8c ff ff       	call   c1000108 <memcpy>
c1007497:	83 c4 10             	add    $0x10,%esp
c100749a:	8b 45 14             	mov    0x14(%ebp),%eax
c100749d:	8b 55 0c             	mov    0xc(%ebp),%edx
c10074a0:	89 50 10             	mov    %edx,0x10(%eax)
c10074a3:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
c10074a7:	8b 45 14             	mov    0x14(%ebp),%eax
c10074aa:	89 50 14             	mov    %edx,0x14(%eax)
c10074ad:	90                   	nop
c10074ae:	c9                   	leave  
c10074af:	c3                   	ret    

c10074b0 <sync_dir_entry>:
c10074b0:	55                   	push   %ebp
c10074b1:	89 e5                	mov    %esp,%ebp
c10074b3:	57                   	push   %edi
c10074b4:	53                   	push   %ebx
c10074b5:	81 ec 60 02 00 00    	sub    $0x260,%esp
c10074bb:	8b 45 08             	mov    0x8(%ebp),%eax
c10074be:	8b 00                	mov    (%eax),%eax
c10074c0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10074c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10074c6:	8b 40 04             	mov    0x4(%eax),%eax
c10074c9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10074cc:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10074d1:	8b 40 10             	mov    0x10(%eax),%eax
c10074d4:	8b 40 30             	mov    0x30(%eax),%eax
c10074d7:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10074da:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10074dd:	ba 00 00 00 00       	mov    $0x0,%edx
c10074e2:	f7 75 e8             	divl   -0x18(%ebp)
c10074e5:	89 d0                	mov    %edx,%eax
c10074e7:	85 c0                	test   %eax,%eax
c10074e9:	74 19                	je     c1007504 <sync_dir_entry+0x54>
c10074eb:	68 0c ad 00 c1       	push   $0xc100ad0c
c10074f0:	68 7c ae 00 c1       	push   $0xc100ae7c
c10074f5:	68 80 00 00 00       	push   $0x80
c10074fa:	68 dc ac 00 c1       	push   $0xc100acdc
c10074ff:	e8 09 8e ff ff       	call   c100030d <__PANIC>
c1007504:	b8 00 02 00 00       	mov    $0x200,%eax
c1007509:	ba 00 00 00 00       	mov    $0x0,%edx
c100750e:	f7 75 e8             	divl   -0x18(%ebp)
c1007511:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007514:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c100751b:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100751f:	8d 95 a0 fd ff ff    	lea    -0x260(%ebp),%edx
c1007525:	b8 00 00 00 00       	mov    $0x0,%eax
c100752a:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100752f:	89 d7                	mov    %edx,%edi
c1007531:	f3 ab                	rep stos %eax,%es:(%edi)
c1007533:	eb 22                	jmp    c1007557 <sync_dir_entry+0xa7>
c1007535:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007539:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100753d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007540:	83 c1 04             	add    $0x4,%ecx
c1007543:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1007546:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c100754d:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007551:	83 c0 01             	add    $0x1,%eax
c1007554:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007557:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c100755b:	76 d8                	jbe    c1007535 <sync_dir_entry+0x85>
c100755d:	8b 45 10             	mov    0x10(%ebp),%eax
c1007560:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007563:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c100756a:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100756e:	e9 52 03 00 00       	jmp    c10078c5 <sync_dir_entry+0x415>
c1007573:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c100757a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100757e:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007585:	85 c0                	test   %eax,%eax
c1007587:	0f 85 80 02 00 00    	jne    c100780d <sync_dir_entry+0x35d>
c100758d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007592:	83 ec 0c             	sub    $0xc,%esp
c1007595:	50                   	push   %eax
c1007596:	e8 25 0c 00 00       	call   c10081c0 <block_bitmap_alloc>
c100759b:	83 c4 10             	add    $0x10,%esp
c100759e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10075a1:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c10075a5:	75 1a                	jne    c10075c1 <sync_dir_entry+0x111>
c10075a7:	83 ec 0c             	sub    $0xc,%esp
c10075aa:	68 2c ad 00 c1       	push   $0xc100ad2c
c10075af:	e8 14 d0 ff ff       	call   c10045c8 <printk>
c10075b4:	83 c4 10             	add    $0x10,%esp
c10075b7:	b8 00 00 00 00       	mov    $0x0,%eax
c10075bc:	e9 23 03 00 00       	jmp    c10078e4 <sync_dir_entry+0x434>
c10075c1:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10075c4:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10075c9:	8b 40 10             	mov    0x10(%eax),%eax
c10075cc:	8b 40 28             	mov    0x28(%eax),%eax
c10075cf:	29 c2                	sub    %eax,%edx
c10075d1:	89 d0                	mov    %edx,%eax
c10075d3:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10075d6:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10075da:	75 19                	jne    c10075f5 <sync_dir_entry+0x145>
c10075dc:	68 5a ad 00 c1       	push   $0xc100ad5a
c10075e1:	68 7c ae 00 c1       	push   $0xc100ae7c
c10075e6:	68 a3 00 00 00       	push   $0xa3
c10075eb:	68 dc ac 00 c1       	push   $0xc100acdc
c10075f0:	e8 18 8d ff ff       	call   c100030d <__PANIC>
c10075f5:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10075f8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10075fd:	83 ec 04             	sub    $0x4,%esp
c1007600:	6a 01                	push   $0x1
c1007602:	52                   	push   %edx
c1007603:	50                   	push   %eax
c1007604:	e8 85 0c 00 00       	call   c100828e <bitmap_sync>
c1007609:	83 c4 10             	add    $0x10,%esp
c100760c:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007613:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007617:	77 27                	ja     c1007640 <sync_dir_entry+0x190>
c1007619:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100761d:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007620:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1007627:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c100762b:	8b 94 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%edx
c1007632:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007635:	83 c1 04             	add    $0x4,%ecx
c1007638:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c100763b:	e9 6d 01 00 00       	jmp    c10077ad <sync_dir_entry+0x2fd>
c1007640:	80 7d f7 0c          	cmpb   $0xc,-0x9(%ebp)
c1007644:	0f 85 37 01 00 00    	jne    c1007781 <sync_dir_entry+0x2d1>
c100764a:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100764d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007650:	89 50 40             	mov    %edx,0x40(%eax)
c1007653:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c100765a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100765f:	83 ec 0c             	sub    $0xc,%esp
c1007662:	50                   	push   %eax
c1007663:	e8 58 0b 00 00       	call   c10081c0 <block_bitmap_alloc>
c1007668:	83 c4 10             	add    $0x10,%esp
c100766b:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100766e:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c1007672:	0f 85 95 00 00 00    	jne    c100770d <sync_dir_entry+0x25d>
c1007678:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100767b:	8b 50 40             	mov    0x40(%eax),%edx
c100767e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007683:	8b 40 10             	mov    0x10(%eax),%eax
c1007686:	8b 40 28             	mov    0x28(%eax),%eax
c1007689:	29 c2                	sub    %eax,%edx
c100768b:	89 d0                	mov    %edx,%eax
c100768d:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007690:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007693:	8d 50 07             	lea    0x7(%eax),%edx
c1007696:	85 c0                	test   %eax,%eax
c1007698:	0f 48 c2             	cmovs  %edx,%eax
c100769b:	c1 f8 03             	sar    $0x3,%eax
c100769e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10076a1:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10076a4:	99                   	cltd   
c10076a5:	c1 ea 1d             	shr    $0x1d,%edx
c10076a8:	01 d0                	add    %edx,%eax
c10076aa:	83 e0 07             	and    $0x7,%eax
c10076ad:	29 d0                	sub    %edx,%eax
c10076af:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10076b2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10076b7:	8b 50 18             	mov    0x18(%eax),%edx
c10076ba:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10076bd:	01 d0                	add    %edx,%eax
c10076bf:	0f b6 00             	movzbl (%eax),%eax
c10076c2:	89 c2                	mov    %eax,%edx
c10076c4:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10076c7:	bb 01 00 00 00       	mov    $0x1,%ebx
c10076cc:	89 c1                	mov    %eax,%ecx
c10076ce:	d3 e3                	shl    %cl,%ebx
c10076d0:	89 d8                	mov    %ebx,%eax
c10076d2:	f7 d0                	not    %eax
c10076d4:	89 d1                	mov    %edx,%ecx
c10076d6:	21 c1                	and    %eax,%ecx
c10076d8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10076dd:	8b 50 18             	mov    0x18(%eax),%edx
c10076e0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10076e3:	01 d0                	add    %edx,%eax
c10076e5:	89 ca                	mov    %ecx,%edx
c10076e7:	88 10                	mov    %dl,(%eax)
c10076e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10076ec:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c10076f3:	83 ec 0c             	sub    $0xc,%esp
c10076f6:	68 2c ad 00 c1       	push   $0xc100ad2c
c10076fb:	e8 c8 ce ff ff       	call   c10045c8 <printk>
c1007700:	83 c4 10             	add    $0x10,%esp
c1007703:	b8 00 00 00 00       	mov    $0x0,%eax
c1007708:	e9 d7 01 00 00       	jmp    c10078e4 <sync_dir_entry+0x434>
c100770d:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007710:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007715:	8b 40 10             	mov    0x10(%eax),%eax
c1007718:	8b 40 28             	mov    0x28(%eax),%eax
c100771b:	29 c2                	sub    %eax,%edx
c100771d:	89 d0                	mov    %edx,%eax
c100771f:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007722:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1007726:	75 19                	jne    c1007741 <sync_dir_entry+0x291>
c1007728:	68 5a ad 00 c1       	push   $0xc100ad5a
c100772d:	68 7c ae 00 c1       	push   $0xc100ae7c
c1007732:	68 ba 00 00 00       	push   $0xba
c1007737:	68 dc ac 00 c1       	push   $0xc100acdc
c100773c:	e8 cc 8b ff ff       	call   c100030d <__PANIC>
c1007741:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1007744:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007749:	83 ec 04             	sub    $0x4,%esp
c100774c:	6a 01                	push   $0x1
c100774e:	52                   	push   %edx
c100774f:	50                   	push   %eax
c1007750:	e8 39 0b 00 00       	call   c100828e <bitmap_sync>
c1007755:	83 c4 10             	add    $0x10,%esp
c1007758:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100775b:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c1007761:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007764:	8b 50 40             	mov    0x40(%eax),%edx
c1007767:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c100776d:	83 c0 30             	add    $0x30,%eax
c1007770:	83 ec 04             	sub    $0x4,%esp
c1007773:	6a 01                	push   $0x1
c1007775:	52                   	push   %edx
c1007776:	50                   	push   %eax
c1007777:	e8 31 d7 ff ff       	call   c1004ead <ide_write>
c100777c:	83 c4 10             	add    $0x10,%esp
c100777f:	eb 2c                	jmp    c10077ad <sync_dir_entry+0x2fd>
c1007781:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007785:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007788:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c100778f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007792:	8b 50 40             	mov    0x40(%eax),%edx
c1007795:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c100779b:	83 c0 30             	add    $0x30,%eax
c100779e:	83 ec 04             	sub    $0x4,%esp
c10077a1:	6a 01                	push   $0x1
c10077a3:	52                   	push   %edx
c10077a4:	50                   	push   %eax
c10077a5:	e8 03 d7 ff ff       	call   c1004ead <ide_write>
c10077aa:	83 c4 10             	add    $0x10,%esp
c10077ad:	83 ec 04             	sub    $0x4,%esp
c10077b0:	68 00 02 00 00       	push   $0x200
c10077b5:	6a 00                	push   $0x0
c10077b7:	ff 75 10             	pushl  0x10(%ebp)
c10077ba:	e8 eb 88 ff ff       	call   c10000aa <memset>
c10077bf:	83 c4 10             	add    $0x10,%esp
c10077c2:	83 ec 04             	sub    $0x4,%esp
c10077c5:	ff 75 e8             	pushl  -0x18(%ebp)
c10077c8:	ff 75 0c             	pushl  0xc(%ebp)
c10077cb:	ff 75 10             	pushl  0x10(%ebp)
c10077ce:	e8 35 89 ff ff       	call   c1000108 <memcpy>
c10077d3:	83 c4 10             	add    $0x10,%esp
c10077d6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10077da:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c10077e1:	83 ec 04             	sub    $0x4,%esp
c10077e4:	6a 01                	push   $0x1
c10077e6:	50                   	push   %eax
c10077e7:	ff 75 10             	pushl  0x10(%ebp)
c10077ea:	e8 be d6 ff ff       	call   c1004ead <ide_write>
c10077ef:	83 c4 10             	add    $0x10,%esp
c10077f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10077f5:	8b 50 04             	mov    0x4(%eax),%edx
c10077f8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10077fb:	01 c2                	add    %eax,%edx
c10077fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007800:	89 50 04             	mov    %edx,0x4(%eax)
c1007803:	b8 01 00 00 00       	mov    $0x1,%eax
c1007808:	e9 d7 00 00 00       	jmp    c10078e4 <sync_dir_entry+0x434>
c100780d:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007811:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007818:	83 ec 04             	sub    $0x4,%esp
c100781b:	6a 01                	push   $0x1
c100781d:	50                   	push   %eax
c100781e:	ff 75 10             	pushl  0x10(%ebp)
c1007821:	e8 4a d6 ff ff       	call   c1004e70 <ide_read>
c1007826:	83 c4 10             	add    $0x10,%esp
c1007829:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c100782d:	eb 7f                	jmp    c10078ae <sync_dir_entry+0x3fe>
c100782f:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1007833:	89 d0                	mov    %edx,%eax
c1007835:	01 c0                	add    %eax,%eax
c1007837:	01 d0                	add    %edx,%eax
c1007839:	c1 e0 03             	shl    $0x3,%eax
c100783c:	89 c2                	mov    %eax,%edx
c100783e:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1007841:	01 d0                	add    %edx,%eax
c1007843:	8b 40 14             	mov    0x14(%eax),%eax
c1007846:	85 c0                	test   %eax,%eax
c1007848:	75 5a                	jne    c10078a4 <sync_dir_entry+0x3f4>
c100784a:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c100784e:	89 d0                	mov    %edx,%eax
c1007850:	01 c0                	add    %eax,%eax
c1007852:	01 d0                	add    %edx,%eax
c1007854:	c1 e0 03             	shl    $0x3,%eax
c1007857:	89 c2                	mov    %eax,%edx
c1007859:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100785c:	01 d0                	add    %edx,%eax
c100785e:	83 ec 04             	sub    $0x4,%esp
c1007861:	ff 75 e8             	pushl  -0x18(%ebp)
c1007864:	ff 75 0c             	pushl  0xc(%ebp)
c1007867:	50                   	push   %eax
c1007868:	e8 9b 88 ff ff       	call   c1000108 <memcpy>
c100786d:	83 c4 10             	add    $0x10,%esp
c1007870:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007874:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c100787b:	83 ec 04             	sub    $0x4,%esp
c100787e:	6a 01                	push   $0x1
c1007880:	50                   	push   %eax
c1007881:	ff 75 10             	pushl  0x10(%ebp)
c1007884:	e8 24 d6 ff ff       	call   c1004ead <ide_write>
c1007889:	83 c4 10             	add    $0x10,%esp
c100788c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100788f:	8b 50 04             	mov    0x4(%eax),%edx
c1007892:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007895:	01 c2                	add    %eax,%edx
c1007897:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100789a:	89 50 04             	mov    %edx,0x4(%eax)
c100789d:	b8 01 00 00 00       	mov    $0x1,%eax
c10078a2:	eb 40                	jmp    c10078e4 <sync_dir_entry+0x434>
c10078a4:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c10078a8:	83 c0 01             	add    $0x1,%eax
c10078ab:	88 45 f6             	mov    %al,-0xa(%ebp)
c10078ae:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c10078b2:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c10078b5:	0f 87 74 ff ff ff    	ja     c100782f <sync_dir_entry+0x37f>
c10078bb:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10078bf:	83 c0 01             	add    $0x1,%eax
c10078c2:	88 45 f7             	mov    %al,-0x9(%ebp)
c10078c5:	80 7d f7 8b          	cmpb   $0x8b,-0x9(%ebp)
c10078c9:	0f 86 a4 fc ff ff    	jbe    c1007573 <sync_dir_entry+0xc3>
c10078cf:	83 ec 0c             	sub    $0xc,%esp
c10078d2:	68 71 ad 00 c1       	push   $0xc100ad71
c10078d7:	e8 ec cc ff ff       	call   c10045c8 <printk>
c10078dc:	83 c4 10             	add    $0x10,%esp
c10078df:	b8 00 00 00 00       	mov    $0x0,%eax
c10078e4:	8d 65 f8             	lea    -0x8(%ebp),%esp
c10078e7:	5b                   	pop    %ebx
c10078e8:	5f                   	pop    %edi
c10078e9:	5d                   	pop    %ebp
c10078ea:	c3                   	ret    

c10078eb <delete_dir_entry>:
c10078eb:	55                   	push   %ebp
c10078ec:	89 e5                	mov    %esp,%ebp
c10078ee:	57                   	push   %edi
c10078ef:	53                   	push   %ebx
c10078f0:	81 ec 60 02 00 00    	sub    $0x260,%esp
c10078f6:	8b 45 0c             	mov    0xc(%ebp),%eax
c10078f9:	8b 00                	mov    (%eax),%eax
c10078fb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10078fe:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007905:	8d 95 98 fd ff ff    	lea    -0x268(%ebp),%edx
c100790b:	b8 00 00 00 00       	mov    $0x0,%eax
c1007910:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007915:	89 d7                	mov    %edx,%edi
c1007917:	f3 ab                	rep stos %eax,%es:(%edi)
c1007919:	eb 1a                	jmp    c1007935 <delete_dir_entry+0x4a>
c100791b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100791e:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007921:	83 c2 04             	add    $0x4,%edx
c1007924:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1007927:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100792a:	89 94 85 98 fd ff ff 	mov    %edx,-0x268(%ebp,%eax,4)
c1007931:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007935:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1007939:	76 e0                	jbe    c100791b <delete_dir_entry+0x30>
c100793b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100793e:	8b 40 40             	mov    0x40(%eax),%eax
c1007941:	85 c0                	test   %eax,%eax
c1007943:	74 1e                	je     c1007963 <delete_dir_entry+0x78>
c1007945:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007948:	8b 50 40             	mov    0x40(%eax),%edx
c100794b:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1007951:	83 c0 30             	add    $0x30,%eax
c1007954:	83 ec 04             	sub    $0x4,%esp
c1007957:	6a 01                	push   $0x1
c1007959:	52                   	push   %edx
c100795a:	50                   	push   %eax
c100795b:	e8 10 d5 ff ff       	call   c1004e70 <ide_read>
c1007960:	83 c4 10             	add    $0x10,%esp
c1007963:	8b 45 08             	mov    0x8(%ebp),%eax
c1007966:	8b 40 10             	mov    0x10(%eax),%eax
c1007969:	8b 40 30             	mov    0x30(%eax),%eax
c100796c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100796f:	b8 00 02 00 00       	mov    $0x200,%eax
c1007974:	ba 00 00 00 00       	mov    $0x0,%edx
c1007979:	f7 75 e0             	divl   -0x20(%ebp)
c100797c:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100797f:	8b 45 14             	mov    0x14(%ebp),%eax
c1007982:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007985:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100798c:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1007990:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007997:	e9 d8 03 00 00       	jmp    c1007d74 <delete_dir_entry+0x489>
c100799c:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c10079a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10079a3:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c10079aa:	85 c0                	test   %eax,%eax
c10079ac:	75 09                	jne    c10079b7 <delete_dir_entry+0xcc>
c10079ae:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10079b2:	e9 bd 03 00 00       	jmp    c1007d74 <delete_dir_entry+0x489>
c10079b7:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
c10079bb:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c10079bf:	88 45 ef             	mov    %al,-0x11(%ebp)
c10079c2:	83 ec 04             	sub    $0x4,%esp
c10079c5:	68 00 02 00 00       	push   $0x200
c10079ca:	6a 00                	push   $0x0
c10079cc:	ff 75 14             	pushl  0x14(%ebp)
c10079cf:	e8 d6 86 ff ff       	call   c10000aa <memset>
c10079d4:	83 c4 10             	add    $0x10,%esp
c10079d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10079da:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c10079e1:	83 ec 04             	sub    $0x4,%esp
c10079e4:	6a 01                	push   $0x1
c10079e6:	50                   	push   %eax
c10079e7:	ff 75 14             	pushl  0x14(%ebp)
c10079ea:	e8 81 d4 ff ff       	call   c1004e70 <ide_read>
c10079ef:	83 c4 10             	add    $0x10,%esp
c10079f2:	e9 0d 01 00 00       	jmp    c1007b04 <delete_dir_entry+0x219>
c10079f7:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c10079fb:	89 d0                	mov    %edx,%eax
c10079fd:	01 c0                	add    %eax,%eax
c10079ff:	01 d0                	add    %edx,%eax
c1007a01:	c1 e0 03             	shl    $0x3,%eax
c1007a04:	89 c2                	mov    %eax,%edx
c1007a06:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007a09:	01 d0                	add    %edx,%eax
c1007a0b:	8b 40 14             	mov    0x14(%eax),%eax
c1007a0e:	85 c0                	test   %eax,%eax
c1007a10:	0f 84 e4 00 00 00    	je     c1007afa <delete_dir_entry+0x20f>
c1007a16:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007a1a:	89 d0                	mov    %edx,%eax
c1007a1c:	01 c0                	add    %eax,%eax
c1007a1e:	01 d0                	add    %edx,%eax
c1007a20:	c1 e0 03             	shl    $0x3,%eax
c1007a23:	89 c2                	mov    %eax,%edx
c1007a25:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007a28:	01 d0                	add    %edx,%eax
c1007a2a:	83 ec 08             	sub    $0x8,%esp
c1007a2d:	68 85 ad 00 c1       	push   $0xc100ad85
c1007a32:	50                   	push   %eax
c1007a33:	e8 4b 87 ff ff       	call   c1000183 <strcmp>
c1007a38:	83 c4 10             	add    $0x10,%esp
c1007a3b:	85 c0                	test   %eax,%eax
c1007a3d:	75 09                	jne    c1007a48 <delete_dir_entry+0x15d>
c1007a3f:	c6 45 ed 01          	movb   $0x1,-0x13(%ebp)
c1007a43:	e9 b2 00 00 00       	jmp    c1007afa <delete_dir_entry+0x20f>
c1007a48:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007a4c:	89 d0                	mov    %edx,%eax
c1007a4e:	01 c0                	add    %eax,%eax
c1007a50:	01 d0                	add    %edx,%eax
c1007a52:	c1 e0 03             	shl    $0x3,%eax
c1007a55:	89 c2                	mov    %eax,%edx
c1007a57:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007a5a:	01 d0                	add    %edx,%eax
c1007a5c:	83 ec 08             	sub    $0x8,%esp
c1007a5f:	68 85 ad 00 c1       	push   $0xc100ad85
c1007a64:	50                   	push   %eax
c1007a65:	e8 19 87 ff ff       	call   c1000183 <strcmp>
c1007a6a:	83 c4 10             	add    $0x10,%esp
c1007a6d:	85 c0                	test   %eax,%eax
c1007a6f:	0f 84 85 00 00 00    	je     c1007afa <delete_dir_entry+0x20f>
c1007a75:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007a79:	89 d0                	mov    %edx,%eax
c1007a7b:	01 c0                	add    %eax,%eax
c1007a7d:	01 d0                	add    %edx,%eax
c1007a7f:	c1 e0 03             	shl    $0x3,%eax
c1007a82:	89 c2                	mov    %eax,%edx
c1007a84:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007a87:	01 d0                	add    %edx,%eax
c1007a89:	83 ec 08             	sub    $0x8,%esp
c1007a8c:	68 87 ad 00 c1       	push   $0xc100ad87
c1007a91:	50                   	push   %eax
c1007a92:	e8 ec 86 ff ff       	call   c1000183 <strcmp>
c1007a97:	83 c4 10             	add    $0x10,%esp
c1007a9a:	85 c0                	test   %eax,%eax
c1007a9c:	74 5c                	je     c1007afa <delete_dir_entry+0x20f>
c1007a9e:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1007aa2:	83 c0 01             	add    $0x1,%eax
c1007aa5:	88 45 ee             	mov    %al,-0x12(%ebp)
c1007aa8:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007aac:	89 d0                	mov    %edx,%eax
c1007aae:	01 c0                	add    %eax,%eax
c1007ab0:	01 d0                	add    %edx,%eax
c1007ab2:	c1 e0 03             	shl    $0x3,%eax
c1007ab5:	89 c2                	mov    %eax,%edx
c1007ab7:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007aba:	01 d0                	add    %edx,%eax
c1007abc:	8b 40 10             	mov    0x10(%eax),%eax
c1007abf:	39 45 10             	cmp    %eax,0x10(%ebp)
c1007ac2:	75 36                	jne    c1007afa <delete_dir_entry+0x20f>
c1007ac4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007ac8:	74 19                	je     c1007ae3 <delete_dir_entry+0x1f8>
c1007aca:	68 8a ad 00 c1       	push   $0xc100ad8a
c1007acf:	68 8c ae 00 c1       	push   $0xc100ae8c
c1007ad4:	68 10 01 00 00       	push   $0x110
c1007ad9:	68 dc ac 00 c1       	push   $0xc100acdc
c1007ade:	e8 2a 88 ff ff       	call   c100030d <__PANIC>
c1007ae3:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007ae7:	89 d0                	mov    %edx,%eax
c1007ae9:	01 c0                	add    %eax,%eax
c1007aeb:	01 d0                	add    %edx,%eax
c1007aed:	c1 e0 03             	shl    $0x3,%eax
c1007af0:	89 c2                	mov    %eax,%edx
c1007af2:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007af5:	01 d0                	add    %edx,%eax
c1007af7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007afa:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007afe:	83 c0 01             	add    $0x1,%eax
c1007b01:	88 45 ef             	mov    %al,-0x11(%ebp)
c1007b04:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007b08:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1007b0b:	0f 87 e6 fe ff ff    	ja     c10079f7 <delete_dir_entry+0x10c>
c1007b11:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007b15:	75 09                	jne    c1007b20 <delete_dir_entry+0x235>
c1007b17:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007b1b:	e9 54 02 00 00       	jmp    c1007d74 <delete_dir_entry+0x489>
c1007b20:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
c1007b24:	75 19                	jne    c1007b3f <delete_dir_entry+0x254>
c1007b26:	68 a2 ad 00 c1       	push   $0xc100ada2
c1007b2b:	68 8c ae 00 c1       	push   $0xc100ae8c
c1007b30:	68 20 01 00 00       	push   $0x120
c1007b35:	68 dc ac 00 c1       	push   $0xc100acdc
c1007b3a:	e8 ce 87 ff ff       	call   c100030d <__PANIC>
c1007b3f:	80 7d ee 01          	cmpb   $0x1,-0x12(%ebp)
c1007b43:	0f 85 98 01 00 00    	jne    c1007ce1 <delete_dir_entry+0x3f6>
c1007b49:	80 7d ed 00          	cmpb   $0x0,-0x13(%ebp)
c1007b4d:	0f 85 8e 01 00 00    	jne    c1007ce1 <delete_dir_entry+0x3f6>
c1007b53:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007b56:	8b 94 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%edx
c1007b5d:	8b 45 08             	mov    0x8(%ebp),%eax
c1007b60:	8b 40 10             	mov    0x10(%eax),%eax
c1007b63:	8b 40 28             	mov    0x28(%eax),%eax
c1007b66:	29 c2                	sub    %eax,%edx
c1007b68:	89 d0                	mov    %edx,%eax
c1007b6a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1007b6d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007b70:	c1 e8 03             	shr    $0x3,%eax
c1007b73:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007b76:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007b79:	83 e0 07             	and    $0x7,%eax
c1007b7c:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1007b7f:	8b 45 08             	mov    0x8(%ebp),%eax
c1007b82:	8b 50 18             	mov    0x18(%eax),%edx
c1007b85:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007b88:	01 d0                	add    %edx,%eax
c1007b8a:	0f b6 00             	movzbl (%eax),%eax
c1007b8d:	89 c2                	mov    %eax,%edx
c1007b8f:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007b92:	bb 01 00 00 00       	mov    $0x1,%ebx
c1007b97:	89 c1                	mov    %eax,%ecx
c1007b99:	d3 e3                	shl    %cl,%ebx
c1007b9b:	89 d8                	mov    %ebx,%eax
c1007b9d:	f7 d0                	not    %eax
c1007b9f:	89 d1                	mov    %edx,%ecx
c1007ba1:	21 c1                	and    %eax,%ecx
c1007ba3:	8b 45 08             	mov    0x8(%ebp),%eax
c1007ba6:	8b 50 18             	mov    0x18(%eax),%edx
c1007ba9:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007bac:	01 d0                	add    %edx,%eax
c1007bae:	89 ca                	mov    %ecx,%edx
c1007bb0:	88 10                	mov    %dl,(%eax)
c1007bb2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007bb7:	83 ec 04             	sub    $0x4,%esp
c1007bba:	6a 01                	push   $0x1
c1007bbc:	ff 75 d4             	pushl  -0x2c(%ebp)
c1007bbf:	50                   	push   %eax
c1007bc0:	e8 c9 06 00 00       	call   c100828e <bitmap_sync>
c1007bc5:	83 c4 10             	add    $0x10,%esp
c1007bc8:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1007bcc:	77 15                	ja     c1007be3 <delete_dir_entry+0x2f8>
c1007bce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007bd1:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007bd4:	83 c2 04             	add    $0x4,%edx
c1007bd7:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1007bde:	e9 2c 01 00 00       	jmp    c1007d0f <delete_dir_entry+0x424>
c1007be3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1007bea:	c7 45 c8 0c 00 00 00 	movl   $0xc,-0x38(%ebp)
c1007bf1:	eb 12                	jmp    c1007c05 <delete_dir_entry+0x31a>
c1007bf3:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1007bf6:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007bfd:	85 c0                	test   %eax,%eax
c1007bff:	74 04                	je     c1007c05 <delete_dir_entry+0x31a>
c1007c01:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1007c05:	81 7d c8 8b 00 00 00 	cmpl   $0x8b,-0x38(%ebp)
c1007c0c:	76 e5                	jbe    c1007bf3 <delete_dir_entry+0x308>
c1007c0e:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1007c12:	75 19                	jne    c1007c2d <delete_dir_entry+0x342>
c1007c14:	68 b5 ad 00 c1       	push   $0xc100adb5
c1007c19:	68 8c ae 00 c1       	push   $0xc100ae8c
c1007c1e:	68 36 01 00 00       	push   $0x136
c1007c23:	68 dc ac 00 c1       	push   $0xc100acdc
c1007c28:	e8 e0 86 ff ff       	call   c100030d <__PANIC>
c1007c2d:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1007c31:	76 31                	jbe    c1007c64 <delete_dir_entry+0x379>
c1007c33:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007c36:	c7 84 85 98 fd ff ff 	movl   $0x0,-0x268(%ebp,%eax,4)
c1007c3d:	00 00 00 00 
c1007c41:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007c44:	8b 50 40             	mov    0x40(%eax),%edx
c1007c47:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1007c4d:	83 c0 30             	add    $0x30,%eax
c1007c50:	83 ec 04             	sub    $0x4,%esp
c1007c53:	6a 01                	push   $0x1
c1007c55:	52                   	push   %edx
c1007c56:	50                   	push   %eax
c1007c57:	e8 51 d2 ff ff       	call   c1004ead <ide_write>
c1007c5c:	83 c4 10             	add    $0x10,%esp
c1007c5f:	e9 ab 00 00 00       	jmp    c1007d0f <delete_dir_entry+0x424>
c1007c64:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007c67:	8b 50 40             	mov    0x40(%eax),%edx
c1007c6a:	8b 45 08             	mov    0x8(%ebp),%eax
c1007c6d:	8b 40 10             	mov    0x10(%eax),%eax
c1007c70:	8b 40 28             	mov    0x28(%eax),%eax
c1007c73:	29 c2                	sub    %eax,%edx
c1007c75:	89 d0                	mov    %edx,%eax
c1007c77:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1007c7a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007c7d:	c1 e8 03             	shr    $0x3,%eax
c1007c80:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007c83:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007c86:	83 e0 07             	and    $0x7,%eax
c1007c89:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1007c8c:	8b 45 08             	mov    0x8(%ebp),%eax
c1007c8f:	8b 50 18             	mov    0x18(%eax),%edx
c1007c92:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007c95:	01 d0                	add    %edx,%eax
c1007c97:	0f b6 00             	movzbl (%eax),%eax
c1007c9a:	89 c2                	mov    %eax,%edx
c1007c9c:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007c9f:	bb 01 00 00 00       	mov    $0x1,%ebx
c1007ca4:	89 c1                	mov    %eax,%ecx
c1007ca6:	d3 e3                	shl    %cl,%ebx
c1007ca8:	89 d8                	mov    %ebx,%eax
c1007caa:	f7 d0                	not    %eax
c1007cac:	89 d1                	mov    %edx,%ecx
c1007cae:	21 c1                	and    %eax,%ecx
c1007cb0:	8b 45 08             	mov    0x8(%ebp),%eax
c1007cb3:	8b 50 18             	mov    0x18(%eax),%edx
c1007cb6:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007cb9:	01 d0                	add    %edx,%eax
c1007cbb:	89 ca                	mov    %ecx,%edx
c1007cbd:	88 10                	mov    %dl,(%eax)
c1007cbf:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007cc4:	83 ec 04             	sub    $0x4,%esp
c1007cc7:	6a 01                	push   $0x1
c1007cc9:	ff 75 d4             	pushl  -0x2c(%ebp)
c1007ccc:	50                   	push   %eax
c1007ccd:	e8 bc 05 00 00       	call   c100828e <bitmap_sync>
c1007cd2:	83 c4 10             	add    $0x10,%esp
c1007cd5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007cd8:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1007cdf:	eb 2e                	jmp    c1007d0f <delete_dir_entry+0x424>
c1007ce1:	83 ec 04             	sub    $0x4,%esp
c1007ce4:	ff 75 e0             	pushl  -0x20(%ebp)
c1007ce7:	6a 00                	push   $0x0
c1007ce9:	ff 75 f0             	pushl  -0x10(%ebp)
c1007cec:	e8 b9 83 ff ff       	call   c10000aa <memset>
c1007cf1:	83 c4 10             	add    $0x10,%esp
c1007cf4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007cf7:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007cfe:	83 ec 04             	sub    $0x4,%esp
c1007d01:	6a 01                	push   $0x1
c1007d03:	50                   	push   %eax
c1007d04:	ff 75 14             	pushl  0x14(%ebp)
c1007d07:	e8 a1 d1 ff ff       	call   c1004ead <ide_write>
c1007d0c:	83 c4 10             	add    $0x10,%esp
c1007d0f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007d12:	8b 40 04             	mov    0x4(%eax),%eax
c1007d15:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c1007d18:	76 19                	jbe    c1007d33 <delete_dir_entry+0x448>
c1007d1a:	68 cc ad 00 c1       	push   $0xc100adcc
c1007d1f:	68 8c ae 00 c1       	push   $0xc100ae8c
c1007d24:	68 4d 01 00 00       	push   $0x14d
c1007d29:	68 dc ac 00 c1       	push   $0xc100acdc
c1007d2e:	e8 da 85 ff ff       	call   c100030d <__PANIC>
c1007d33:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007d36:	8b 40 04             	mov    0x4(%eax),%eax
c1007d39:	2b 45 e0             	sub    -0x20(%ebp),%eax
c1007d3c:	89 c2                	mov    %eax,%edx
c1007d3e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007d41:	89 50 04             	mov    %edx,0x4(%eax)
c1007d44:	83 ec 04             	sub    $0x4,%esp
c1007d47:	68 00 04 00 00       	push   $0x400
c1007d4c:	6a 00                	push   $0x0
c1007d4e:	ff 75 14             	pushl  0x14(%ebp)
c1007d51:	e8 54 83 ff ff       	call   c10000aa <memset>
c1007d56:	83 c4 10             	add    $0x10,%esp
c1007d59:	83 ec 04             	sub    $0x4,%esp
c1007d5c:	ff 75 14             	pushl  0x14(%ebp)
c1007d5f:	ff 75 e4             	pushl  -0x1c(%ebp)
c1007d62:	ff 75 08             	pushl  0x8(%ebp)
c1007d65:	e8 d1 15 00 00       	call   c100933b <inode_sync>
c1007d6a:	83 c4 10             	add    $0x10,%esp
c1007d6d:	b8 01 00 00 00       	mov    $0x1,%eax
c1007d72:	eb 12                	jmp    c1007d86 <delete_dir_entry+0x49b>
c1007d74:	81 7d f4 8b 00 00 00 	cmpl   $0x8b,-0xc(%ebp)
c1007d7b:	0f 86 1b fc ff ff    	jbe    c100799c <delete_dir_entry+0xb1>
c1007d81:	b8 00 00 00 00       	mov    $0x0,%eax
c1007d86:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1007d89:	5b                   	pop    %ebx
c1007d8a:	5f                   	pop    %edi
c1007d8b:	5d                   	pop    %ebp
c1007d8c:	c3                   	ret    

c1007d8d <dir_read>:
c1007d8d:	55                   	push   %ebp
c1007d8e:	89 e5                	mov    %esp,%ebp
c1007d90:	57                   	push   %edi
c1007d91:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1007d97:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d9a:	83 c0 08             	add    $0x8,%eax
c1007d9d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007da0:	8b 45 08             	mov    0x8(%ebp),%eax
c1007da3:	8b 00                	mov    (%eax),%eax
c1007da5:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007da8:	8d 95 a8 fd ff ff    	lea    -0x258(%ebp),%edx
c1007dae:	b8 00 00 00 00       	mov    $0x0,%eax
c1007db3:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007db8:	89 d7                	mov    %edx,%edi
c1007dba:	f3 ab                	rep stos %eax,%es:(%edi)
c1007dbc:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
c1007dc3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1007dca:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007dd1:	eb 1a                	jmp    c1007ded <dir_read+0x60>
c1007dd3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007dd6:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007dd9:	83 c2 04             	add    $0x4,%edx
c1007ddc:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1007ddf:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007de2:	89 94 85 a8 fd ff ff 	mov    %edx,-0x258(%ebp,%eax,4)
c1007de9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1007ded:	83 7d f0 0b          	cmpl   $0xb,-0x10(%ebp)
c1007df1:	76 e0                	jbe    c1007dd3 <dir_read+0x46>
c1007df3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007df6:	8b 40 40             	mov    0x40(%eax),%eax
c1007df9:	85 c0                	test   %eax,%eax
c1007dfb:	74 25                	je     c1007e22 <dir_read+0x95>
c1007dfd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007e00:	8b 50 40             	mov    0x40(%eax),%edx
c1007e03:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
c1007e09:	83 c0 30             	add    $0x30,%eax
c1007e0c:	83 ec 04             	sub    $0x4,%esp
c1007e0f:	6a 01                	push   $0x1
c1007e11:	52                   	push   %edx
c1007e12:	50                   	push   %eax
c1007e13:	e8 58 d0 ff ff       	call   c1004e70 <ide_read>
c1007e18:	83 c4 10             	add    $0x10,%esp
c1007e1b:	c7 45 f4 8c 00 00 00 	movl   $0x8c,-0xc(%ebp)
c1007e22:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1007e29:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1007e30:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007e35:	8b 40 10             	mov    0x10(%eax),%eax
c1007e38:	8b 40 30             	mov    0x30(%eax),%eax
c1007e3b:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007e3e:	b8 00 02 00 00       	mov    $0x200,%eax
c1007e43:	ba 00 00 00 00       	mov    $0x0,%edx
c1007e48:	f7 75 dc             	divl   -0x24(%ebp)
c1007e4b:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007e4e:	e9 f9 00 00 00       	jmp    c1007f4c <dir_read+0x1bf>
c1007e53:	8b 45 08             	mov    0x8(%ebp),%eax
c1007e56:	8b 50 04             	mov    0x4(%eax),%edx
c1007e59:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007e5c:	8b 40 04             	mov    0x4(%eax),%eax
c1007e5f:	39 c2                	cmp    %eax,%edx
c1007e61:	72 0a                	jb     c1007e6d <dir_read+0xe0>
c1007e63:	b8 00 00 00 00       	mov    $0x0,%eax
c1007e68:	e9 f0 00 00 00       	jmp    c1007f5d <dir_read+0x1d0>
c1007e6d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007e70:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1007e77:	85 c0                	test   %eax,%eax
c1007e79:	75 09                	jne    c1007e84 <dir_read+0xf7>
c1007e7b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1007e7f:	e9 c8 00 00 00       	jmp    c1007f4c <dir_read+0x1bf>
c1007e84:	83 ec 04             	sub    $0x4,%esp
c1007e87:	68 00 02 00 00       	push   $0x200
c1007e8c:	6a 00                	push   $0x0
c1007e8e:	ff 75 e4             	pushl  -0x1c(%ebp)
c1007e91:	e8 14 82 ff ff       	call   c10000aa <memset>
c1007e96:	83 c4 10             	add    $0x10,%esp
c1007e99:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007e9c:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1007ea3:	83 ec 04             	sub    $0x4,%esp
c1007ea6:	6a 01                	push   $0x1
c1007ea8:	50                   	push   %eax
c1007ea9:	ff 75 e4             	pushl  -0x1c(%ebp)
c1007eac:	e8 bf cf ff ff       	call   c1004e70 <ide_read>
c1007eb1:	83 c4 10             	add    $0x10,%esp
c1007eb4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007ebb:	eb 7f                	jmp    c1007f3c <dir_read+0x1af>
c1007ebd:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1007ec0:	89 d0                	mov    %edx,%eax
c1007ec2:	01 c0                	add    %eax,%eax
c1007ec4:	01 d0                	add    %edx,%eax
c1007ec6:	c1 e0 03             	shl    $0x3,%eax
c1007ec9:	89 c2                	mov    %eax,%edx
c1007ecb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007ece:	01 d0                	add    %edx,%eax
c1007ed0:	8b 40 14             	mov    0x14(%eax),%eax
c1007ed3:	85 c0                	test   %eax,%eax
c1007ed5:	74 61                	je     c1007f38 <dir_read+0x1ab>
c1007ed7:	8b 45 08             	mov    0x8(%ebp),%eax
c1007eda:	8b 40 04             	mov    0x4(%eax),%eax
c1007edd:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c1007ee0:	73 0c                	jae    c1007eee <dir_read+0x161>
c1007ee2:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1007ee5:	01 45 e8             	add    %eax,-0x18(%ebp)
c1007ee8:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1007eec:	eb 4e                	jmp    c1007f3c <dir_read+0x1af>
c1007eee:	8b 45 08             	mov    0x8(%ebp),%eax
c1007ef1:	8b 40 04             	mov    0x4(%eax),%eax
c1007ef4:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c1007ef7:	74 19                	je     c1007f12 <dir_read+0x185>
c1007ef9:	68 f0 ad 00 c1       	push   $0xc100adf0
c1007efe:	68 a0 ae 00 c1       	push   $0xc100aea0
c1007f03:	68 7f 01 00 00       	push   $0x17f
c1007f08:	68 dc ac 00 c1       	push   $0xc100acdc
c1007f0d:	e8 fb 83 ff ff       	call   c100030d <__PANIC>
c1007f12:	8b 45 08             	mov    0x8(%ebp),%eax
c1007f15:	8b 50 04             	mov    0x4(%eax),%edx
c1007f18:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1007f1b:	01 c2                	add    %eax,%edx
c1007f1d:	8b 45 08             	mov    0x8(%ebp),%eax
c1007f20:	89 50 04             	mov    %edx,0x4(%eax)
c1007f23:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1007f26:	89 d0                	mov    %edx,%eax
c1007f28:	01 c0                	add    %eax,%eax
c1007f2a:	01 d0                	add    %edx,%eax
c1007f2c:	c1 e0 03             	shl    $0x3,%eax
c1007f2f:	89 c2                	mov    %eax,%edx
c1007f31:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007f34:	01 d0                	add    %edx,%eax
c1007f36:	eb 25                	jmp    c1007f5d <dir_read+0x1d0>
c1007f38:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1007f3c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007f3f:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c1007f42:	0f 82 75 ff ff ff    	jb     c1007ebd <dir_read+0x130>
c1007f48:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1007f4c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007f4f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1007f52:	0f 82 fb fe ff ff    	jb     c1007e53 <dir_read+0xc6>
c1007f58:	b8 00 00 00 00       	mov    $0x0,%eax
c1007f5d:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1007f60:	c9                   	leave  
c1007f61:	c3                   	ret    

c1007f62 <dir_is_empty>:
c1007f62:	55                   	push   %ebp
c1007f63:	89 e5                	mov    %esp,%ebp
c1007f65:	83 ec 10             	sub    $0x10,%esp
c1007f68:	8b 45 08             	mov    0x8(%ebp),%eax
c1007f6b:	8b 00                	mov    (%eax),%eax
c1007f6d:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1007f70:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1007f73:	8b 50 04             	mov    0x4(%eax),%edx
c1007f76:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007f7b:	8b 40 10             	mov    0x10(%eax),%eax
c1007f7e:	8b 40 30             	mov    0x30(%eax),%eax
c1007f81:	01 c0                	add    %eax,%eax
c1007f83:	39 c2                	cmp    %eax,%edx
c1007f85:	0f 94 c0             	sete   %al
c1007f88:	c9                   	leave  
c1007f89:	c3                   	ret    

c1007f8a <dir_remove>:
c1007f8a:	55                   	push   %ebp
c1007f8b:	89 e5                	mov    %esp,%ebp
c1007f8d:	83 ec 18             	sub    $0x18,%esp
c1007f90:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007f93:	8b 00                	mov    (%eax),%eax
c1007f95:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007f98:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c1007f9f:	eb 2d                	jmp    c1007fce <dir_remove+0x44>
c1007fa1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007fa4:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007fa7:	83 c2 04             	add    $0x4,%edx
c1007faa:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1007fad:	85 c0                	test   %eax,%eax
c1007faf:	74 19                	je     c1007fca <dir_remove+0x40>
c1007fb1:	68 14 ae 00 c1       	push   $0xc100ae14
c1007fb6:	68 ac ae 00 c1       	push   $0xc100aeac
c1007fbb:	68 96 01 00 00       	push   $0x196
c1007fc0:	68 dc ac 00 c1       	push   $0xc100acdc
c1007fc5:	e8 43 83 ff ff       	call   c100030d <__PANIC>
c1007fca:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007fce:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
c1007fd2:	7e cd                	jle    c1007fa1 <dir_remove+0x17>
c1007fd4:	83 ec 08             	sub    $0x8,%esp
c1007fd7:	6a 02                	push   $0x2
c1007fd9:	68 00 04 00 00       	push   $0x400
c1007fde:	e8 91 a9 ff ff       	call   c1002974 <vmm_malloc>
c1007fe3:	83 c4 10             	add    $0x10,%esp
c1007fe6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007fe9:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1007fed:	75 17                	jne    c1008006 <dir_remove+0x7c>
c1007fef:	83 ec 0c             	sub    $0xc,%esp
c1007ff2:	68 40 ae 00 c1       	push   $0xc100ae40
c1007ff7:	e8 cc c5 ff ff       	call   c10045c8 <printk>
c1007ffc:	83 c4 10             	add    $0x10,%esp
c1007fff:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008004:	eb 4a                	jmp    c1008050 <dir_remove+0xc6>
c1008006:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008009:	8b 10                	mov    (%eax),%edx
c100800b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008010:	ff 75 ec             	pushl  -0x14(%ebp)
c1008013:	52                   	push   %edx
c1008014:	ff 75 08             	pushl  0x8(%ebp)
c1008017:	50                   	push   %eax
c1008018:	e8 ce f8 ff ff       	call   c10078eb <delete_dir_entry>
c100801d:	83 c4 10             	add    $0x10,%esp
c1008020:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008023:	8b 10                	mov    (%eax),%edx
c1008025:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100802a:	83 ec 08             	sub    $0x8,%esp
c100802d:	52                   	push   %edx
c100802e:	50                   	push   %eax
c100802f:	e8 14 16 00 00       	call   c1009648 <inode_release>
c1008034:	83 c4 10             	add    $0x10,%esp
c1008037:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100803a:	83 ec 08             	sub    $0x8,%esp
c100803d:	68 00 04 00 00       	push   $0x400
c1008042:	50                   	push   %eax
c1008043:	e8 51 aa ff ff       	call   c1002a99 <vmm_free>
c1008048:	83 c4 10             	add    $0x10,%esp
c100804b:	b8 00 00 00 00       	mov    $0x0,%eax
c1008050:	c9                   	leave  
c1008051:	c3                   	ret    

c1008052 <hash32>:
c1008052:	55                   	push   %ebp
c1008053:	89 e5                	mov    %esp,%ebp
c1008055:	83 ec 10             	sub    $0x10,%esp
c1008058:	8b 45 08             	mov    0x8(%ebp),%eax
c100805b:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1008061:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1008064:	b8 20 00 00 00       	mov    $0x20,%eax
c1008069:	2b 45 0c             	sub    0xc(%ebp),%eax
c100806c:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100806f:	89 c1                	mov    %eax,%ecx
c1008071:	d3 ea                	shr    %cl,%edx
c1008073:	89 d0                	mov    %edx,%eax
c1008075:	c9                   	leave  
c1008076:	c3                   	ret    

c1008077 <get_free_slot_in_global>:
c1008077:	55                   	push   %ebp
c1008078:	89 e5                	mov    %esp,%ebp
c100807a:	83 ec 10             	sub    $0x10,%esp
c100807d:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
c1008084:	eb 1b                	jmp    c10080a1 <get_free_slot_in_global+0x2a>
c1008086:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1008089:	89 d0                	mov    %edx,%eax
c100808b:	01 c0                	add    %eax,%eax
c100808d:	01 d0                	add    %edx,%eax
c100808f:	c1 e0 02             	shl    $0x2,%eax
c1008092:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008097:	8b 00                	mov    (%eax),%eax
c1008099:	85 c0                	test   %eax,%eax
c100809b:	74 0c                	je     c10080a9 <get_free_slot_in_global+0x32>
c100809d:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c10080a1:	83 7d fc 1f          	cmpl   $0x1f,-0x4(%ebp)
c10080a5:	76 df                	jbe    c1008086 <get_free_slot_in_global+0xf>
c10080a7:	eb 01                	jmp    c10080aa <get_free_slot_in_global+0x33>
c10080a9:	90                   	nop
c10080aa:	83 7d fc 20          	cmpl   $0x20,-0x4(%ebp)
c10080ae:	75 07                	jne    c10080b7 <get_free_slot_in_global+0x40>
c10080b0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10080b5:	eb 03                	jmp    c10080ba <get_free_slot_in_global+0x43>
c10080b7:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10080ba:	c9                   	leave  
c10080bb:	c3                   	ret    

c10080bc <task_fd_install>:
c10080bc:	55                   	push   %ebp
c10080bd:	89 e5                	mov    %esp,%ebp
c10080bf:	83 ec 10             	sub    $0x10,%esp
c10080c2:	c6 45 ff 03          	movb   $0x3,-0x1(%ebp)
c10080c6:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10080cb:	0f be 55 ff          	movsbl -0x1(%ebp),%edx
c10080cf:	83 c2 18             	add    $0x18,%edx
c10080d2:	8b 04 90             	mov    (%eax,%edx,4),%eax
c10080d5:	83 f8 ff             	cmp    $0xffffffff,%eax
c10080d8:	75 14                	jne    c10080ee <task_fd_install+0x32>
c10080da:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10080df:	0f be 4d ff          	movsbl -0x1(%ebp),%ecx
c10080e3:	8b 55 08             	mov    0x8(%ebp),%edx
c10080e6:	83 c1 18             	add    $0x18,%ecx
c10080e9:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c10080ec:	eb 0c                	jmp    c10080fa <task_fd_install+0x3e>
c10080ee:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
c10080f2:	83 c0 01             	add    $0x1,%eax
c10080f5:	88 45 ff             	mov    %al,-0x1(%ebp)
c10080f8:	eb cc                	jmp    c10080c6 <task_fd_install+0xa>
c10080fa:	0f be 45 ff          	movsbl -0x1(%ebp),%eax
c10080fe:	c9                   	leave  
c10080ff:	c3                   	ret    

c1008100 <inode_bitmap_alloc>:
c1008100:	55                   	push   %ebp
c1008101:	89 e5                	mov    %esp,%ebp
c1008103:	53                   	push   %ebx
c1008104:	83 ec 10             	sub    $0x10,%esp
c1008107:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c100810e:	eb 04                	jmp    c1008114 <inode_bitmap_alloc+0x14>
c1008110:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1008114:	8b 45 08             	mov    0x8(%ebp),%eax
c1008117:	8b 50 20             	mov    0x20(%eax),%edx
c100811a:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100811d:	01 d0                	add    %edx,%eax
c100811f:	0f b6 00             	movzbl (%eax),%eax
c1008122:	3c ff                	cmp    $0xff,%al
c1008124:	75 0b                	jne    c1008131 <inode_bitmap_alloc+0x31>
c1008126:	8b 45 08             	mov    0x8(%ebp),%eax
c1008129:	8b 40 1c             	mov    0x1c(%eax),%eax
c100812c:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c100812f:	72 df                	jb     c1008110 <inode_bitmap_alloc+0x10>
c1008131:	8b 45 08             	mov    0x8(%ebp),%eax
c1008134:	8b 40 1c             	mov    0x1c(%eax),%eax
c1008137:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c100813a:	75 07                	jne    c1008143 <inode_bitmap_alloc+0x43>
c100813c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008141:	eb 77                	jmp    c10081ba <inode_bitmap_alloc+0xba>
c1008143:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100814a:	eb 04                	jmp    c1008150 <inode_bitmap_alloc+0x50>
c100814c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008150:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008153:	ba 01 00 00 00       	mov    $0x1,%edx
c1008158:	89 c1                	mov    %eax,%ecx
c100815a:	d3 e2                	shl    %cl,%edx
c100815c:	89 d0                	mov    %edx,%eax
c100815e:	89 c1                	mov    %eax,%ecx
c1008160:	8b 45 08             	mov    0x8(%ebp),%eax
c1008163:	8b 50 20             	mov    0x20(%eax),%edx
c1008166:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008169:	01 d0                	add    %edx,%eax
c100816b:	0f b6 00             	movzbl (%eax),%eax
c100816e:	21 c8                	and    %ecx,%eax
c1008170:	84 c0                	test   %al,%al
c1008172:	75 d8                	jne    c100814c <inode_bitmap_alloc+0x4c>
c1008174:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008177:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c100817e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008181:	01 d0                	add    %edx,%eax
c1008183:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008186:	8b 45 08             	mov    0x8(%ebp),%eax
c1008189:	8b 50 20             	mov    0x20(%eax),%edx
c100818c:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100818f:	01 d0                	add    %edx,%eax
c1008191:	0f b6 00             	movzbl (%eax),%eax
c1008194:	89 c3                	mov    %eax,%ebx
c1008196:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008199:	ba 01 00 00 00       	mov    $0x1,%edx
c100819e:	89 c1                	mov    %eax,%ecx
c10081a0:	d3 e2                	shl    %cl,%edx
c10081a2:	89 d0                	mov    %edx,%eax
c10081a4:	09 c3                	or     %eax,%ebx
c10081a6:	89 d9                	mov    %ebx,%ecx
c10081a8:	8b 45 08             	mov    0x8(%ebp),%eax
c10081ab:	8b 50 20             	mov    0x20(%eax),%edx
c10081ae:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10081b1:	01 d0                	add    %edx,%eax
c10081b3:	89 ca                	mov    %ecx,%edx
c10081b5:	88 10                	mov    %dl,(%eax)
c10081b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10081ba:	83 c4 10             	add    $0x10,%esp
c10081bd:	5b                   	pop    %ebx
c10081be:	5d                   	pop    %ebp
c10081bf:	c3                   	ret    

c10081c0 <block_bitmap_alloc>:
c10081c0:	55                   	push   %ebp
c10081c1:	89 e5                	mov    %esp,%ebp
c10081c3:	53                   	push   %ebx
c10081c4:	83 ec 10             	sub    $0x10,%esp
c10081c7:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c10081ce:	eb 04                	jmp    c10081d4 <block_bitmap_alloc+0x14>
c10081d0:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10081d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10081d7:	8b 50 18             	mov    0x18(%eax),%edx
c10081da:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10081dd:	01 d0                	add    %edx,%eax
c10081df:	0f b6 00             	movzbl (%eax),%eax
c10081e2:	3c ff                	cmp    $0xff,%al
c10081e4:	75 0b                	jne    c10081f1 <block_bitmap_alloc+0x31>
c10081e6:	8b 45 08             	mov    0x8(%ebp),%eax
c10081e9:	8b 40 14             	mov    0x14(%eax),%eax
c10081ec:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10081ef:	72 df                	jb     c10081d0 <block_bitmap_alloc+0x10>
c10081f1:	8b 45 08             	mov    0x8(%ebp),%eax
c10081f4:	8b 40 14             	mov    0x14(%eax),%eax
c10081f7:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10081fa:	75 0a                	jne    c1008206 <block_bitmap_alloc+0x46>
c10081fc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008201:	e9 82 00 00 00       	jmp    c1008288 <block_bitmap_alloc+0xc8>
c1008206:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100820d:	eb 04                	jmp    c1008213 <block_bitmap_alloc+0x53>
c100820f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008213:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008216:	ba 01 00 00 00       	mov    $0x1,%edx
c100821b:	89 c1                	mov    %eax,%ecx
c100821d:	d3 e2                	shl    %cl,%edx
c100821f:	89 d0                	mov    %edx,%eax
c1008221:	89 c1                	mov    %eax,%ecx
c1008223:	8b 45 08             	mov    0x8(%ebp),%eax
c1008226:	8b 50 18             	mov    0x18(%eax),%edx
c1008229:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100822c:	01 d0                	add    %edx,%eax
c100822e:	0f b6 00             	movzbl (%eax),%eax
c1008231:	21 c8                	and    %ecx,%eax
c1008233:	84 c0                	test   %al,%al
c1008235:	75 d8                	jne    c100820f <block_bitmap_alloc+0x4f>
c1008237:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100823a:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c1008241:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008244:	01 d0                	add    %edx,%eax
c1008246:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008249:	8b 45 08             	mov    0x8(%ebp),%eax
c100824c:	8b 50 18             	mov    0x18(%eax),%edx
c100824f:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008252:	01 d0                	add    %edx,%eax
c1008254:	0f b6 00             	movzbl (%eax),%eax
c1008257:	89 c3                	mov    %eax,%ebx
c1008259:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100825c:	ba 01 00 00 00       	mov    $0x1,%edx
c1008261:	89 c1                	mov    %eax,%ecx
c1008263:	d3 e2                	shl    %cl,%edx
c1008265:	89 d0                	mov    %edx,%eax
c1008267:	09 c3                	or     %eax,%ebx
c1008269:	89 d9                	mov    %ebx,%ecx
c100826b:	8b 45 08             	mov    0x8(%ebp),%eax
c100826e:	8b 50 18             	mov    0x18(%eax),%edx
c1008271:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008274:	01 d0                	add    %edx,%eax
c1008276:	89 ca                	mov    %ecx,%edx
c1008278:	88 10                	mov    %dl,(%eax)
c100827a:	8b 45 08             	mov    0x8(%ebp),%eax
c100827d:	8b 40 10             	mov    0x10(%eax),%eax
c1008280:	8b 50 28             	mov    0x28(%eax),%edx
c1008283:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008286:	01 d0                	add    %edx,%eax
c1008288:	83 c4 10             	add    $0x10,%esp
c100828b:	5b                   	pop    %ebx
c100828c:	5d                   	pop    %ebp
c100828d:	c3                   	ret    

c100828e <bitmap_sync>:
c100828e:	55                   	push   %ebp
c100828f:	89 e5                	mov    %esp,%ebp
c1008291:	83 ec 28             	sub    $0x28,%esp
c1008294:	8b 45 10             	mov    0x10(%ebp),%eax
c1008297:	88 45 e4             	mov    %al,-0x1c(%ebp)
c100829a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100829d:	c1 e8 0c             	shr    $0xc,%eax
c10082a0:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10082a3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10082a6:	c1 e0 09             	shl    $0x9,%eax
c10082a9:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10082ac:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10082b0:	85 c0                	test   %eax,%eax
c10082b2:	74 07                	je     c10082bb <bitmap_sync+0x2d>
c10082b4:	83 f8 01             	cmp    $0x1,%eax
c10082b7:	74 23                	je     c10082dc <bitmap_sync+0x4e>
c10082b9:	eb 41                	jmp    c10082fc <bitmap_sync+0x6e>
c10082bb:	8b 45 08             	mov    0x8(%ebp),%eax
c10082be:	8b 40 10             	mov    0x10(%eax),%eax
c10082c1:	8b 50 18             	mov    0x18(%eax),%edx
c10082c4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10082c7:	01 d0                	add    %edx,%eax
c10082c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10082cc:	8b 45 08             	mov    0x8(%ebp),%eax
c10082cf:	8b 50 20             	mov    0x20(%eax),%edx
c10082d2:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10082d5:	01 d0                	add    %edx,%eax
c10082d7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10082da:	eb 20                	jmp    c10082fc <bitmap_sync+0x6e>
c10082dc:	8b 45 08             	mov    0x8(%ebp),%eax
c10082df:	8b 40 10             	mov    0x10(%eax),%eax
c10082e2:	8b 50 10             	mov    0x10(%eax),%edx
c10082e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10082e8:	01 d0                	add    %edx,%eax
c10082ea:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10082ed:	8b 45 08             	mov    0x8(%ebp),%eax
c10082f0:	8b 50 18             	mov    0x18(%eax),%edx
c10082f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10082f6:	01 d0                	add    %edx,%eax
c10082f8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10082fb:	90                   	nop
c10082fc:	83 ec 04             	sub    $0x4,%esp
c10082ff:	6a 01                	push   $0x1
c1008301:	ff 75 f4             	pushl  -0xc(%ebp)
c1008304:	ff 75 f0             	pushl  -0x10(%ebp)
c1008307:	e8 a1 cb ff ff       	call   c1004ead <ide_write>
c100830c:	83 c4 10             	add    $0x10,%esp
c100830f:	90                   	nop
c1008310:	c9                   	leave  
c1008311:	c3                   	ret    

c1008312 <file_create>:
c1008312:	55                   	push   %ebp
c1008313:	89 e5                	mov    %esp,%ebp
c1008315:	83 ec 58             	sub    $0x58,%esp
c1008318:	8b 45 10             	mov    0x10(%ebp),%eax
c100831b:	88 45 b4             	mov    %al,-0x4c(%ebp)
c100831e:	83 ec 08             	sub    $0x8,%esp
c1008321:	6a 02                	push   $0x2
c1008323:	68 00 04 00 00       	push   $0x400
c1008328:	e8 47 a6 ff ff       	call   c1002974 <vmm_malloc>
c100832d:	83 c4 10             	add    $0x10,%esp
c1008330:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008333:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1008337:	75 1a                	jne    c1008353 <file_create+0x41>
c1008339:	83 ec 0c             	sub    $0xc,%esp
c100833c:	68 b8 ae 00 c1       	push   $0xc100aeb8
c1008341:	e8 82 c2 ff ff       	call   c10045c8 <printk>
c1008346:	83 c4 10             	add    $0x10,%esp
c1008349:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100834e:	e9 9f 02 00 00       	jmp    c10085f2 <file_create+0x2e0>
c1008353:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1008357:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100835c:	83 ec 0c             	sub    $0xc,%esp
c100835f:	50                   	push   %eax
c1008360:	e8 9b fd ff ff       	call   c1008100 <inode_bitmap_alloc>
c1008365:	83 c4 10             	add    $0x10,%esp
c1008368:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100836b:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c100836f:	75 1a                	jne    c100838b <file_create+0x79>
c1008371:	83 ec 0c             	sub    $0xc,%esp
c1008374:	68 e8 ae 00 c1       	push   $0xc100aee8
c1008379:	e8 4a c2 ff ff       	call   c10045c8 <printk>
c100837e:	83 c4 10             	add    $0x10,%esp
c1008381:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008386:	e9 67 02 00 00       	jmp    c10085f2 <file_create+0x2e0>
c100838b:	83 ec 08             	sub    $0x8,%esp
c100838e:	6a 02                	push   $0x2
c1008390:	6a 44                	push   $0x44
c1008392:	e8 dd a5 ff ff       	call   c1002974 <vmm_malloc>
c1008397:	83 c4 10             	add    $0x10,%esp
c100839a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100839d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c10083a1:	75 19                	jne    c10083bc <file_create+0xaa>
c10083a3:	83 ec 0c             	sub    $0xc,%esp
c10083a6:	68 10 af 00 c1       	push   $0xc100af10
c10083ab:	e8 18 c2 ff ff       	call   c10045c8 <printk>
c10083b0:	83 c4 10             	add    $0x10,%esp
c10083b3:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10083b7:	e9 88 01 00 00       	jmp    c1008544 <file_create+0x232>
c10083bc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10083bf:	83 ec 08             	sub    $0x8,%esp
c10083c2:	ff 75 e4             	pushl  -0x1c(%ebp)
c10083c5:	50                   	push   %eax
c10083c6:	e8 42 15 00 00       	call   c100990d <inode_init>
c10083cb:	83 c4 10             	add    $0x10,%esp
c10083ce:	e8 a4 fc ff ff       	call   c1008077 <get_free_slot_in_global>
c10083d3:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10083d6:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10083da:	75 19                	jne    c10083f5 <file_create+0xe3>
c10083dc:	83 ec 0c             	sub    $0xc,%esp
c10083df:	68 3b af 00 c1       	push   $0xc100af3b
c10083e4:	e8 df c1 ff ff       	call   c10045c8 <printk>
c10083e9:	83 c4 10             	add    $0x10,%esp
c10083ec:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10083f0:	e9 4f 01 00 00       	jmp    c1008544 <file_create+0x232>
c10083f5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10083f8:	89 d0                	mov    %edx,%eax
c10083fa:	01 c0                	add    %eax,%eax
c10083fc:	01 d0                	add    %edx,%eax
c10083fe:	c1 e0 02             	shl    $0x2,%eax
c1008401:	8d 90 48 32 a1 c1    	lea    -0x3e5ecdb8(%eax),%edx
c1008407:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100840a:	89 02                	mov    %eax,(%edx)
c100840c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100840f:	89 d0                	mov    %edx,%eax
c1008411:	01 c0                	add    %eax,%eax
c1008413:	01 d0                	add    %edx,%eax
c1008415:	c1 e0 02             	shl    $0x2,%eax
c1008418:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c100841d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1008423:	0f b6 4d b4          	movzbl -0x4c(%ebp),%ecx
c1008427:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100842a:	89 d0                	mov    %edx,%eax
c100842c:	01 c0                	add    %eax,%eax
c100842e:	01 d0                	add    %edx,%eax
c1008430:	c1 e0 02             	shl    $0x2,%eax
c1008433:	05 44 32 a1 c1       	add    $0xc1a13244,%eax
c1008438:	89 08                	mov    %ecx,(%eax)
c100843a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100843d:	89 d0                	mov    %edx,%eax
c100843f:	01 c0                	add    %eax,%eax
c1008441:	01 d0                	add    %edx,%eax
c1008443:	c1 e0 02             	shl    $0x2,%eax
c1008446:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c100844b:	8b 00                	mov    (%eax),%eax
c100844d:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1008451:	83 ec 04             	sub    $0x4,%esp
c1008454:	6a 18                	push   $0x18
c1008456:	6a 00                	push   $0x0
c1008458:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c100845b:	50                   	push   %eax
c100845c:	e8 49 7c ff ff       	call   c10000aa <memset>
c1008461:	83 c4 10             	add    $0x10,%esp
c1008464:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008467:	8d 55 c4             	lea    -0x3c(%ebp),%edx
c100846a:	52                   	push   %edx
c100846b:	6a 01                	push   $0x1
c100846d:	50                   	push   %eax
c100846e:	ff 75 0c             	pushl  0xc(%ebp)
c1008471:	e8 ce ef ff ff       	call   c1007444 <create_dir_entry>
c1008476:	83 c4 10             	add    $0x10,%esp
c1008479:	83 ec 04             	sub    $0x4,%esp
c100847c:	ff 75 ec             	pushl  -0x14(%ebp)
c100847f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1008482:	50                   	push   %eax
c1008483:	ff 75 08             	pushl  0x8(%ebp)
c1008486:	e8 25 f0 ff ff       	call   c10074b0 <sync_dir_entry>
c100848b:	83 c4 10             	add    $0x10,%esp
c100848e:	85 c0                	test   %eax,%eax
c1008490:	75 19                	jne    c10084ab <file_create+0x199>
c1008492:	83 ec 0c             	sub    $0xc,%esp
c1008495:	68 54 af 00 c1       	push   $0xc100af54
c100849a:	e8 29 c1 ff ff       	call   c10045c8 <printk>
c100849f:	83 c4 10             	add    $0x10,%esp
c10084a2:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c10084a6:	e9 99 00 00 00       	jmp    c1008544 <file_create+0x232>
c10084ab:	83 ec 04             	sub    $0x4,%esp
c10084ae:	68 00 04 00 00       	push   $0x400
c10084b3:	6a 00                	push   $0x0
c10084b5:	ff 75 ec             	pushl  -0x14(%ebp)
c10084b8:	e8 ed 7b ff ff       	call   c10000aa <memset>
c10084bd:	83 c4 10             	add    $0x10,%esp
c10084c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10084c3:	8b 10                	mov    (%eax),%edx
c10084c5:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10084ca:	83 ec 04             	sub    $0x4,%esp
c10084cd:	ff 75 ec             	pushl  -0x14(%ebp)
c10084d0:	52                   	push   %edx
c10084d1:	50                   	push   %eax
c10084d2:	e8 64 0e 00 00       	call   c100933b <inode_sync>
c10084d7:	83 c4 10             	add    $0x10,%esp
c10084da:	83 ec 04             	sub    $0x4,%esp
c10084dd:	68 00 04 00 00       	push   $0x400
c10084e2:	6a 00                	push   $0x0
c10084e4:	ff 75 ec             	pushl  -0x14(%ebp)
c10084e7:	e8 be 7b ff ff       	call   c10000aa <memset>
c10084ec:	83 c4 10             	add    $0x10,%esp
c10084ef:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10084f4:	83 ec 04             	sub    $0x4,%esp
c10084f7:	ff 75 ec             	pushl  -0x14(%ebp)
c10084fa:	ff 75 e4             	pushl  -0x1c(%ebp)
c10084fd:	50                   	push   %eax
c10084fe:	e8 38 0e 00 00       	call   c100933b <inode_sync>
c1008503:	83 c4 10             	add    $0x10,%esp
c1008506:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008509:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100850e:	83 ec 04             	sub    $0x4,%esp
c1008511:	6a 00                	push   $0x0
c1008513:	52                   	push   %edx
c1008514:	50                   	push   %eax
c1008515:	e8 74 fd ff ff       	call   c100828e <bitmap_sync>
c100851a:	83 c4 10             	add    $0x10,%esp
c100851d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008520:	83 ec 08             	sub    $0x8,%esp
c1008523:	68 00 04 00 00       	push   $0x400
c1008528:	50                   	push   %eax
c1008529:	e8 6b a5 ff ff       	call   c1002a99 <vmm_free>
c100852e:	83 c4 10             	add    $0x10,%esp
c1008531:	83 ec 0c             	sub    $0xc,%esp
c1008534:	ff 75 f0             	pushl  -0x10(%ebp)
c1008537:	e8 80 fb ff ff       	call   c10080bc <task_fd_install>
c100853c:	83 c4 10             	add    $0x10,%esp
c100853f:	e9 ae 00 00 00       	jmp    c10085f2 <file_create+0x2e0>
c1008544:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008548:	83 f8 03             	cmp    $0x3,%eax
c100854b:	74 15                	je     c1008562 <file_create+0x250>
c100854d:	83 f8 03             	cmp    $0x3,%eax
c1008550:	0f 8f 83 00 00 00    	jg     c10085d9 <file_create+0x2c7>
c1008556:	83 f8 01             	cmp    $0x1,%eax
c1008559:	74 39                	je     c1008594 <file_create+0x282>
c100855b:	83 f8 02             	cmp    $0x2,%eax
c100855e:	74 23                	je     c1008583 <file_create+0x271>
c1008560:	eb 77                	jmp    c10085d9 <file_create+0x2c7>
c1008562:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008565:	89 d0                	mov    %edx,%eax
c1008567:	01 c0                	add    %eax,%eax
c1008569:	01 d0                	add    %edx,%eax
c100856b:	c1 e0 02             	shl    $0x2,%eax
c100856e:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1008573:	83 ec 04             	sub    $0x4,%esp
c1008576:	6a 0c                	push   $0xc
c1008578:	6a 00                	push   $0x0
c100857a:	50                   	push   %eax
c100857b:	e8 2a 7b ff ff       	call   c10000aa <memset>
c1008580:	83 c4 10             	add    $0x10,%esp
c1008583:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008586:	83 ec 08             	sub    $0x8,%esp
c1008589:	6a 44                	push   $0x44
c100858b:	50                   	push   %eax
c100858c:	e8 08 a5 ff ff       	call   c1002a99 <vmm_free>
c1008591:	83 c4 10             	add    $0x10,%esp
c1008594:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008597:	8d 50 07             	lea    0x7(%eax),%edx
c100859a:	85 c0                	test   %eax,%eax
c100859c:	0f 48 c2             	cmovs  %edx,%eax
c100859f:	c1 f8 03             	sar    $0x3,%eax
c10085a2:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10085a5:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10085a8:	99                   	cltd   
c10085a9:	c1 ea 1d             	shr    $0x1d,%edx
c10085ac:	01 d0                	add    %edx,%eax
c10085ae:	83 e0 07             	and    $0x7,%eax
c10085b1:	29 d0                	sub    %edx,%eax
c10085b3:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10085b6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10085bb:	8b 50 20             	mov    0x20(%eax),%edx
c10085be:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10085c1:	01 d0                	add    %edx,%eax
c10085c3:	0f b6 10             	movzbl (%eax),%edx
c10085c6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10085cb:	8b 48 20             	mov    0x20(%eax),%ecx
c10085ce:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10085d1:	01 c8                	add    %ecx,%eax
c10085d3:	83 e2 fe             	and    $0xfffffffe,%edx
c10085d6:	88 10                	mov    %dl,(%eax)
c10085d8:	90                   	nop
c10085d9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10085dc:	83 ec 08             	sub    $0x8,%esp
c10085df:	68 00 04 00 00       	push   $0x400
c10085e4:	50                   	push   %eax
c10085e5:	e8 af a4 ff ff       	call   c1002a99 <vmm_free>
c10085ea:	83 c4 10             	add    $0x10,%esp
c10085ed:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10085f2:	c9                   	leave  
c10085f3:	c3                   	ret    

c10085f4 <file_open>:
c10085f4:	55                   	push   %ebp
c10085f5:	89 e5                	mov    %esp,%ebp
c10085f7:	83 ec 28             	sub    $0x28,%esp
c10085fa:	8b 45 0c             	mov    0xc(%ebp),%eax
c10085fd:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1008600:	e8 72 fa ff ff       	call   c1008077 <get_free_slot_in_global>
c1008605:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008608:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c100860c:	75 1a                	jne    c1008628 <file_open+0x34>
c100860e:	83 ec 0c             	sub    $0xc,%esp
c1008611:	68 3b af 00 c1       	push   $0xc100af3b
c1008616:	e8 ad bf ff ff       	call   c10045c8 <printk>
c100861b:	83 c4 10             	add    $0x10,%esp
c100861e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008623:	e9 1a 01 00 00       	jmp    c1008742 <file_open+0x14e>
c1008628:	83 ec 08             	sub    $0x8,%esp
c100862b:	ff 75 08             	pushl  0x8(%ebp)
c100862e:	68 73 af 00 c1       	push   $0xc100af73
c1008633:	e8 90 bf ff ff       	call   c10045c8 <printk>
c1008638:	83 c4 10             	add    $0x10,%esp
c100863b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008640:	83 ec 08             	sub    $0x8,%esp
c1008643:	ff 75 08             	pushl  0x8(%ebp)
c1008646:	50                   	push   %eax
c1008647:	e8 10 0e 00 00       	call   c100945c <inode_open>
c100864c:	83 c4 10             	add    $0x10,%esp
c100864f:	89 c1                	mov    %eax,%ecx
c1008651:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008654:	89 d0                	mov    %edx,%eax
c1008656:	01 c0                	add    %eax,%eax
c1008658:	01 d0                	add    %edx,%eax
c100865a:	c1 e0 02             	shl    $0x2,%eax
c100865d:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008662:	89 08                	mov    %ecx,(%eax)
c1008664:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008667:	89 d0                	mov    %edx,%eax
c1008669:	01 c0                	add    %eax,%eax
c100866b:	01 d0                	add    %edx,%eax
c100866d:	c1 e0 02             	shl    $0x2,%eax
c1008670:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008675:	8b 00                	mov    (%eax),%eax
c1008677:	8b 00                	mov    (%eax),%eax
c1008679:	83 ec 08             	sub    $0x8,%esp
c100867c:	50                   	push   %eax
c100867d:	68 80 af 00 c1       	push   $0xc100af80
c1008682:	e8 41 bf ff ff       	call   c10045c8 <printk>
c1008687:	83 c4 10             	add    $0x10,%esp
c100868a:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100868d:	89 d0                	mov    %edx,%eax
c100868f:	01 c0                	add    %eax,%eax
c1008691:	01 d0                	add    %edx,%eax
c1008693:	c1 e0 02             	shl    $0x2,%eax
c1008696:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c100869b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10086a1:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
c10086a5:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10086a8:	89 d0                	mov    %edx,%eax
c10086aa:	01 c0                	add    %eax,%eax
c10086ac:	01 d0                	add    %edx,%eax
c10086ae:	c1 e0 02             	shl    $0x2,%eax
c10086b1:	05 44 32 a1 c1       	add    $0xc1a13244,%eax
c10086b6:	89 08                	mov    %ecx,(%eax)
c10086b8:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10086bb:	89 d0                	mov    %edx,%eax
c10086bd:	01 c0                	add    %eax,%eax
c10086bf:	01 d0                	add    %edx,%eax
c10086c1:	c1 e0 02             	shl    $0x2,%eax
c10086c4:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c10086c9:	8b 00                	mov    (%eax),%eax
c10086cb:	83 c0 0c             	add    $0xc,%eax
c10086ce:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10086d1:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10086d5:	83 e0 01             	and    $0x1,%eax
c10086d8:	85 c0                	test   %eax,%eax
c10086da:	75 0b                	jne    c10086e7 <file_open+0xf3>
c10086dc:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10086e0:	83 e0 02             	and    $0x2,%eax
c10086e3:	85 c0                	test   %eax,%eax
c10086e5:	74 4d                	je     c1008734 <file_open+0x140>
c10086e7:	e8 64 86 ff ff       	call   c1000d50 <intr_save>
c10086ec:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10086ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10086f2:	0f b6 00             	movzbl (%eax),%eax
c10086f5:	84 c0                	test   %al,%al
c10086f7:	75 16                	jne    c100870f <file_open+0x11b>
c10086f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10086fc:	c6 00 01             	movb   $0x1,(%eax)
c10086ff:	83 ec 0c             	sub    $0xc,%esp
c1008702:	ff 75 ec             	pushl  -0x14(%ebp)
c1008705:	e8 59 86 ff ff       	call   c1000d63 <intr_restore>
c100870a:	83 c4 10             	add    $0x10,%esp
c100870d:	eb 25                	jmp    c1008734 <file_open+0x140>
c100870f:	83 ec 0c             	sub    $0xc,%esp
c1008712:	ff 75 ec             	pushl  -0x14(%ebp)
c1008715:	e8 49 86 ff ff       	call   c1000d63 <intr_restore>
c100871a:	83 c4 10             	add    $0x10,%esp
c100871d:	83 ec 0c             	sub    $0xc,%esp
c1008720:	68 a8 af 00 c1       	push   $0xc100afa8
c1008725:	e8 9e be ff ff       	call   c10045c8 <printk>
c100872a:	83 c4 10             	add    $0x10,%esp
c100872d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008732:	eb 0e                	jmp    c1008742 <file_open+0x14e>
c1008734:	83 ec 0c             	sub    $0xc,%esp
c1008737:	ff 75 f4             	pushl  -0xc(%ebp)
c100873a:	e8 7d f9 ff ff       	call   c10080bc <task_fd_install>
c100873f:	83 c4 10             	add    $0x10,%esp
c1008742:	c9                   	leave  
c1008743:	c3                   	ret    

c1008744 <file_close>:
c1008744:	55                   	push   %ebp
c1008745:	89 e5                	mov    %esp,%ebp
c1008747:	83 ec 08             	sub    $0x8,%esp
c100874a:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100874e:	75 07                	jne    c1008757 <file_close+0x13>
c1008750:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008755:	eb 2b                	jmp    c1008782 <file_close+0x3e>
c1008757:	8b 45 08             	mov    0x8(%ebp),%eax
c100875a:	8b 40 08             	mov    0x8(%eax),%eax
c100875d:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1008761:	8b 45 08             	mov    0x8(%ebp),%eax
c1008764:	8b 40 08             	mov    0x8(%eax),%eax
c1008767:	83 ec 0c             	sub    $0xc,%esp
c100876a:	50                   	push   %eax
c100876b:	e8 c2 0d 00 00       	call   c1009532 <inode_close>
c1008770:	83 c4 10             	add    $0x10,%esp
c1008773:	8b 45 08             	mov    0x8(%ebp),%eax
c1008776:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100877d:	b8 00 00 00 00       	mov    $0x0,%eax
c1008782:	c9                   	leave  
c1008783:	c3                   	ret    

c1008784 <file_write>:
c1008784:	55                   	push   %ebp
c1008785:	89 e5                	mov    %esp,%ebp
c1008787:	83 ec 58             	sub    $0x58,%esp
c100878a:	8b 45 08             	mov    0x8(%ebp),%eax
c100878d:	8b 40 08             	mov    0x8(%eax),%eax
c1008790:	8b 50 04             	mov    0x4(%eax),%edx
c1008793:	8b 45 10             	mov    0x10(%ebp),%eax
c1008796:	01 d0                	add    %edx,%eax
c1008798:	3d 00 18 01 00       	cmp    $0x11800,%eax
c100879d:	76 1a                	jbe    c10087b9 <file_write+0x35>
c100879f:	83 ec 0c             	sub    $0xc,%esp
c10087a2:	68 d4 af 00 c1       	push   $0xc100afd4
c10087a7:	e8 1c be ff ff       	call   c10045c8 <printk>
c10087ac:	83 c4 10             	add    $0x10,%esp
c10087af:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10087b4:	e9 3e 07 00 00       	jmp    c1008ef7 <file_write+0x773>
c10087b9:	83 ec 08             	sub    $0x8,%esp
c10087bc:	6a 02                	push   $0x2
c10087be:	68 00 02 00 00       	push   $0x200
c10087c3:	e8 ac a1 ff ff       	call   c1002974 <vmm_malloc>
c10087c8:	83 c4 10             	add    $0x10,%esp
c10087cb:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10087ce:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c10087d2:	75 1a                	jne    c10087ee <file_write+0x6a>
c10087d4:	83 ec 0c             	sub    $0xc,%esp
c10087d7:	68 0c b0 00 c1       	push   $0xc100b00c
c10087dc:	e8 e7 bd ff ff       	call   c10045c8 <printk>
c10087e1:	83 c4 10             	add    $0x10,%esp
c10087e4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10087e9:	e9 09 07 00 00       	jmp    c1008ef7 <file_write+0x773>
c10087ee:	83 ec 08             	sub    $0x8,%esp
c10087f1:	6a 02                	push   $0x2
c10087f3:	68 30 02 00 00       	push   $0x230
c10087f8:	e8 77 a1 ff ff       	call   c1002974 <vmm_malloc>
c10087fd:	83 c4 10             	add    $0x10,%esp
c1008800:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008803:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c1008807:	75 1a                	jne    c1008823 <file_write+0x9f>
c1008809:	83 ec 0c             	sub    $0xc,%esp
c100880c:	68 38 b0 00 c1       	push   $0xc100b038
c1008811:	e8 b2 bd ff ff       	call   c10045c8 <printk>
c1008816:	83 c4 10             	add    $0x10,%esp
c1008819:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100881e:	e9 d4 06 00 00       	jmp    c1008ef7 <file_write+0x773>
c1008823:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008826:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008829:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008830:	8b 45 10             	mov    0x10(%ebp),%eax
c1008833:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008836:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c100883d:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
c1008844:	8b 45 08             	mov    0x8(%ebp),%eax
c1008847:	8b 40 08             	mov    0x8(%eax),%eax
c100884a:	8b 40 10             	mov    0x10(%eax),%eax
c100884d:	85 c0                	test   %eax,%eax
c100884f:	0f 85 8a 00 00 00    	jne    c10088df <file_write+0x15b>
c1008855:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100885a:	83 ec 0c             	sub    $0xc,%esp
c100885d:	50                   	push   %eax
c100885e:	e8 5d f9 ff ff       	call   c10081c0 <block_bitmap_alloc>
c1008863:	83 c4 10             	add    $0x10,%esp
c1008866:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008869:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c100886d:	75 1a                	jne    c1008889 <file_write+0x105>
c100886f:	83 ec 0c             	sub    $0xc,%esp
c1008872:	68 68 b0 00 c1       	push   $0xc100b068
c1008877:	e8 4c bd ff ff       	call   c10045c8 <printk>
c100887c:	83 c4 10             	add    $0x10,%esp
c100887f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008884:	e9 6e 06 00 00       	jmp    c1008ef7 <file_write+0x773>
c1008889:	8b 45 08             	mov    0x8(%ebp),%eax
c100888c:	8b 40 08             	mov    0x8(%eax),%eax
c100888f:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008892:	89 50 10             	mov    %edx,0x10(%eax)
c1008895:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008898:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100889d:	8b 40 10             	mov    0x10(%eax),%eax
c10088a0:	8b 40 28             	mov    0x28(%eax),%eax
c10088a3:	29 c2                	sub    %eax,%edx
c10088a5:	89 d0                	mov    %edx,%eax
c10088a7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10088aa:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
c10088ae:	75 19                	jne    c10088c9 <file_write+0x145>
c10088b0:	68 8f b0 00 c1       	push   $0xc100b08f
c10088b5:	68 50 b3 00 c1       	push   $0xc100b350
c10088ba:	68 1e 01 00 00       	push   $0x11e
c10088bf:	68 a8 b0 00 c1       	push   $0xc100b0a8
c10088c4:	e8 44 7a ff ff       	call   c100030d <__PANIC>
c10088c9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10088ce:	83 ec 04             	sub    $0x4,%esp
c10088d1:	6a 01                	push   $0x1
c10088d3:	ff 75 d4             	pushl  -0x2c(%ebp)
c10088d6:	50                   	push   %eax
c10088d7:	e8 b2 f9 ff ff       	call   c100828e <bitmap_sync>
c10088dc:	83 c4 10             	add    $0x10,%esp
c10088df:	8b 45 08             	mov    0x8(%ebp),%eax
c10088e2:	8b 40 08             	mov    0x8(%eax),%eax
c10088e5:	8b 40 04             	mov    0x4(%eax),%eax
c10088e8:	c1 e8 09             	shr    $0x9,%eax
c10088eb:	83 c0 01             	add    $0x1,%eax
c10088ee:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10088f1:	8b 45 08             	mov    0x8(%ebp),%eax
c10088f4:	8b 40 08             	mov    0x8(%eax),%eax
c10088f7:	8b 50 04             	mov    0x4(%eax),%edx
c10088fa:	8b 45 10             	mov    0x10(%ebp),%eax
c10088fd:	01 d0                	add    %edx,%eax
c10088ff:	c1 e8 09             	shr    $0x9,%eax
c1008902:	83 c0 01             	add    $0x1,%eax
c1008905:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008908:	81 7d cc 8c 00 00 00 	cmpl   $0x8c,-0x34(%ebp)
c100890f:	76 19                	jbe    c100892a <file_write+0x1a6>
c1008911:	68 d9 b0 00 c1       	push   $0xc100b0d9
c1008916:	68 50 b3 00 c1       	push   $0xc100b350
c100891b:	68 27 01 00 00       	push   $0x127
c1008920:	68 a8 b0 00 c1       	push   $0xc100b0a8
c1008925:	e8 e3 79 ff ff       	call   c100030d <__PANIC>
c100892a:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100892d:	2b 45 d0             	sub    -0x30(%ebp),%eax
c1008930:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1008933:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
c1008937:	0f 85 83 00 00 00    	jne    c10089c0 <file_write+0x23c>
c100893d:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1008941:	77 2e                	ja     c1008971 <file_write+0x1ed>
c1008943:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008946:	83 e8 01             	sub    $0x1,%eax
c1008949:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100894c:	8b 45 08             	mov    0x8(%ebp),%eax
c100894f:	8b 40 08             	mov    0x8(%eax),%eax
c1008952:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008955:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100895c:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100895f:	01 ca                	add    %ecx,%edx
c1008961:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008964:	83 c1 04             	add    $0x4,%ecx
c1008967:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100896a:	89 02                	mov    %eax,(%edx)
c100896c:	e9 24 04 00 00       	jmp    c1008d95 <file_write+0x611>
c1008971:	8b 45 08             	mov    0x8(%ebp),%eax
c1008974:	8b 40 08             	mov    0x8(%eax),%eax
c1008977:	8b 40 40             	mov    0x40(%eax),%eax
c100897a:	85 c0                	test   %eax,%eax
c100897c:	75 19                	jne    c1008997 <file_write+0x213>
c100897e:	68 f8 b0 00 c1       	push   $0xc100b0f8
c1008983:	68 50 b3 00 c1       	push   $0xc100b350
c1008988:	68 35 01 00 00       	push   $0x135
c100898d:	68 a8 b0 00 c1       	push   $0xc100b0a8
c1008992:	e8 76 79 ff ff       	call   c100030d <__PANIC>
c1008997:	8b 45 08             	mov    0x8(%ebp),%eax
c100899a:	8b 40 08             	mov    0x8(%eax),%eax
c100899d:	8b 40 40             	mov    0x40(%eax),%eax
c10089a0:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c10089a3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c10089a6:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10089a9:	83 c2 30             	add    $0x30,%edx
c10089ac:	83 ec 04             	sub    $0x4,%esp
c10089af:	6a 01                	push   $0x1
c10089b1:	50                   	push   %eax
c10089b2:	52                   	push   %edx
c10089b3:	e8 b8 c4 ff ff       	call   c1004e70 <ide_read>
c10089b8:	83 c4 10             	add    $0x10,%esp
c10089bb:	e9 d5 03 00 00       	jmp    c1008d95 <file_write+0x611>
c10089c0:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c10089c4:	0f 87 25 01 00 00    	ja     c1008aef <file_write+0x36b>
c10089ca:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10089cd:	83 e8 01             	sub    $0x1,%eax
c10089d0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10089d3:	8b 45 08             	mov    0x8(%ebp),%eax
c10089d6:	8b 40 08             	mov    0x8(%eax),%eax
c10089d9:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10089dc:	83 c2 04             	add    $0x4,%edx
c10089df:	8b 04 90             	mov    (%eax,%edx,4),%eax
c10089e2:	85 c0                	test   %eax,%eax
c10089e4:	75 19                	jne    c10089ff <file_write+0x27b>
c10089e6:	68 1c b1 00 c1       	push   $0xc100b11c
c10089eb:	68 50 b3 00 c1       	push   $0xc100b350
c10089f0:	68 3f 01 00 00       	push   $0x13f
c10089f5:	68 a8 b0 00 c1       	push   $0xc100b0a8
c10089fa:	e8 0e 79 ff ff       	call   c100030d <__PANIC>
c10089ff:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a02:	8b 40 08             	mov    0x8(%eax),%eax
c1008a05:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008a08:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008a0f:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008a12:	01 ca                	add    %ecx,%edx
c1008a14:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008a17:	83 c1 04             	add    $0x4,%ecx
c1008a1a:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1008a1d:	89 02                	mov    %eax,(%edx)
c1008a1f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008a22:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008a25:	e9 b4 00 00 00       	jmp    c1008ade <file_write+0x35a>
c1008a2a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008a2f:	83 ec 0c             	sub    $0xc,%esp
c1008a32:	50                   	push   %eax
c1008a33:	e8 88 f7 ff ff       	call   c10081c0 <block_bitmap_alloc>
c1008a38:	83 c4 10             	add    $0x10,%esp
c1008a3b:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008a3e:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008a42:	75 1a                	jne    c1008a5e <file_write+0x2da>
c1008a44:	83 ec 0c             	sub    $0xc,%esp
c1008a47:	68 48 b1 00 c1       	push   $0xc100b148
c1008a4c:	e8 77 bb ff ff       	call   c10045c8 <printk>
c1008a51:	83 c4 10             	add    $0x10,%esp
c1008a54:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008a59:	e9 99 04 00 00       	jmp    c1008ef7 <file_write+0x773>
c1008a5e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a61:	8b 40 08             	mov    0x8(%eax),%eax
c1008a64:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008a67:	83 c2 04             	add    $0x4,%edx
c1008a6a:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008a6d:	85 c0                	test   %eax,%eax
c1008a6f:	74 19                	je     c1008a8a <file_write+0x306>
c1008a71:	68 80 b1 00 c1       	push   $0xc100b180
c1008a76:	68 50 b3 00 c1       	push   $0xc100b350
c1008a7b:	68 4c 01 00 00       	push   $0x14c
c1008a80:	68 a8 b0 00 c1       	push   $0xc100b0a8
c1008a85:	e8 83 78 ff ff       	call   c100030d <__PANIC>
c1008a8a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008a8d:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008a94:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008a97:	01 d0                	add    %edx,%eax
c1008a99:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008a9c:	89 10                	mov    %edx,(%eax)
c1008a9e:	8b 55 08             	mov    0x8(%ebp),%edx
c1008aa1:	8b 52 08             	mov    0x8(%edx),%edx
c1008aa4:	8b 00                	mov    (%eax),%eax
c1008aa6:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008aa9:	83 c1 04             	add    $0x4,%ecx
c1008aac:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1008aaf:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008ab2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008ab7:	8b 40 10             	mov    0x10(%eax),%eax
c1008aba:	8b 40 28             	mov    0x28(%eax),%eax
c1008abd:	29 c2                	sub    %eax,%edx
c1008abf:	89 d0                	mov    %edx,%eax
c1008ac1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008ac4:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008ac9:	83 ec 04             	sub    $0x4,%esp
c1008acc:	6a 01                	push   $0x1
c1008ace:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008ad1:	50                   	push   %eax
c1008ad2:	e8 b7 f7 ff ff       	call   c100828e <bitmap_sync>
c1008ad7:	83 c4 10             	add    $0x10,%esp
c1008ada:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008ade:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008ae1:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1008ae4:	0f 82 40 ff ff ff    	jb     c1008a2a <file_write+0x2a6>
c1008aea:	e9 a6 02 00 00       	jmp    c1008d95 <file_write+0x611>
c1008aef:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1008af3:	0f 87 a3 01 00 00    	ja     c1008c9c <file_write+0x518>
c1008af9:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1008afd:	0f 86 99 01 00 00    	jbe    c1008c9c <file_write+0x518>
c1008b03:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008b06:	83 e8 01             	sub    $0x1,%eax
c1008b09:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008b0c:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b0f:	8b 40 08             	mov    0x8(%eax),%eax
c1008b12:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008b15:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008b1c:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008b1f:	01 ca                	add    %ecx,%edx
c1008b21:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008b24:	83 c1 04             	add    $0x4,%ecx
c1008b27:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1008b2a:	89 02                	mov    %eax,(%edx)
c1008b2c:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008b31:	83 ec 0c             	sub    $0xc,%esp
c1008b34:	50                   	push   %eax
c1008b35:	e8 86 f6 ff ff       	call   c10081c0 <block_bitmap_alloc>
c1008b3a:	83 c4 10             	add    $0x10,%esp
c1008b3d:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008b40:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008b44:	75 1a                	jne    c1008b60 <file_write+0x3dc>
c1008b46:	83 ec 0c             	sub    $0xc,%esp
c1008b49:	68 ac b1 00 c1       	push   $0xc100b1ac
c1008b4e:	e8 75 ba ff ff       	call   c10045c8 <printk>
c1008b53:	83 c4 10             	add    $0x10,%esp
c1008b56:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008b5b:	e9 97 03 00 00       	jmp    c1008ef7 <file_write+0x773>
c1008b60:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b63:	8b 40 08             	mov    0x8(%eax),%eax
c1008b66:	8b 40 40             	mov    0x40(%eax),%eax
c1008b69:	85 c0                	test   %eax,%eax
c1008b6b:	74 19                	je     c1008b86 <file_write+0x402>
c1008b6d:	68 e4 b1 00 c1       	push   $0xc100b1e4
c1008b72:	68 50 b3 00 c1       	push   $0xc100b350
c1008b77:	68 63 01 00 00       	push   $0x163
c1008b7c:	68 a8 b0 00 c1       	push   $0xc100b0a8
c1008b81:	e8 87 77 ff ff       	call   c100030d <__PANIC>
c1008b86:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b89:	8b 40 08             	mov    0x8(%eax),%eax
c1008b8c:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008b8f:	89 50 40             	mov    %edx,0x40(%eax)
c1008b92:	8b 40 40             	mov    0x40(%eax),%eax
c1008b95:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1008b98:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008b9b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008b9e:	e9 d0 00 00 00       	jmp    c1008c73 <file_write+0x4ef>
c1008ba3:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008ba8:	83 ec 0c             	sub    $0xc,%esp
c1008bab:	50                   	push   %eax
c1008bac:	e8 0f f6 ff ff       	call   c10081c0 <block_bitmap_alloc>
c1008bb1:	83 c4 10             	add    $0x10,%esp
c1008bb4:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008bb7:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008bbb:	75 1a                	jne    c1008bd7 <file_write+0x453>
c1008bbd:	83 ec 0c             	sub    $0xc,%esp
c1008bc0:	68 ac b1 00 c1       	push   $0xc100b1ac
c1008bc5:	e8 fe b9 ff ff       	call   c10045c8 <printk>
c1008bca:	83 c4 10             	add    $0x10,%esp
c1008bcd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008bd2:	e9 20 03 00 00       	jmp    c1008ef7 <file_write+0x773>
c1008bd7:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1008bdb:	77 53                	ja     c1008c30 <file_write+0x4ac>
c1008bdd:	8b 45 08             	mov    0x8(%ebp),%eax
c1008be0:	8b 40 08             	mov    0x8(%eax),%eax
c1008be3:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008be6:	83 c2 04             	add    $0x4,%edx
c1008be9:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008bec:	85 c0                	test   %eax,%eax
c1008bee:	74 19                	je     c1008c09 <file_write+0x485>
c1008bf0:	68 80 b1 00 c1       	push   $0xc100b180
c1008bf5:	68 50 b3 00 c1       	push   $0xc100b350
c1008bfa:	68 70 01 00 00       	push   $0x170
c1008bff:	68 a8 b0 00 c1       	push   $0xc100b0a8
c1008c04:	e8 04 77 ff ff       	call   c100030d <__PANIC>
c1008c09:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008c0c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008c13:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008c16:	01 d0                	add    %edx,%eax
c1008c18:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008c1b:	89 10                	mov    %edx,(%eax)
c1008c1d:	8b 55 08             	mov    0x8(%ebp),%edx
c1008c20:	8b 52 08             	mov    0x8(%edx),%edx
c1008c23:	8b 00                	mov    (%eax),%eax
c1008c25:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008c28:	83 c1 04             	add    $0x4,%ecx
c1008c2b:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1008c2e:	eb 14                	jmp    c1008c44 <file_write+0x4c0>
c1008c30:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008c33:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008c3a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008c3d:	01 c2                	add    %eax,%edx
c1008c3f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008c42:	89 02                	mov    %eax,(%edx)
c1008c44:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008c47:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008c4c:	8b 40 10             	mov    0x10(%eax),%eax
c1008c4f:	8b 40 28             	mov    0x28(%eax),%eax
c1008c52:	29 c2                	sub    %eax,%edx
c1008c54:	89 d0                	mov    %edx,%eax
c1008c56:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008c59:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008c5e:	83 ec 04             	sub    $0x4,%esp
c1008c61:	6a 01                	push   $0x1
c1008c63:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008c66:	50                   	push   %eax
c1008c67:	e8 22 f6 ff ff       	call   c100828e <bitmap_sync>
c1008c6c:	83 c4 10             	add    $0x10,%esp
c1008c6f:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008c73:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008c76:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1008c79:	0f 82 24 ff ff ff    	jb     c1008ba3 <file_write+0x41f>
c1008c7f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008c82:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008c85:	83 c2 30             	add    $0x30,%edx
c1008c88:	83 ec 04             	sub    $0x4,%esp
c1008c8b:	6a 01                	push   $0x1
c1008c8d:	50                   	push   %eax
c1008c8e:	52                   	push   %edx
c1008c8f:	e8 19 c2 ff ff       	call   c1004ead <ide_write>
c1008c94:	83 c4 10             	add    $0x10,%esp
c1008c97:	e9 f9 00 00 00       	jmp    c1008d95 <file_write+0x611>
c1008c9c:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1008ca0:	0f 86 ef 00 00 00    	jbe    c1008d95 <file_write+0x611>
c1008ca6:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ca9:	8b 40 08             	mov    0x8(%eax),%eax
c1008cac:	8b 40 40             	mov    0x40(%eax),%eax
c1008caf:	85 c0                	test   %eax,%eax
c1008cb1:	75 19                	jne    c1008ccc <file_write+0x548>
c1008cb3:	68 f8 b0 00 c1       	push   $0xc100b0f8
c1008cb8:	68 50 b3 00 c1       	push   $0xc100b350
c1008cbd:	68 7f 01 00 00       	push   $0x17f
c1008cc2:	68 a8 b0 00 c1       	push   $0xc100b0a8
c1008cc7:	e8 41 76 ff ff       	call   c100030d <__PANIC>
c1008ccc:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ccf:	8b 40 08             	mov    0x8(%eax),%eax
c1008cd2:	8b 40 40             	mov    0x40(%eax),%eax
c1008cd5:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1008cd8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008cdb:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008cde:	83 c2 30             	add    $0x30,%edx
c1008ce1:	83 ec 04             	sub    $0x4,%esp
c1008ce4:	6a 01                	push   $0x1
c1008ce6:	50                   	push   %eax
c1008ce7:	52                   	push   %edx
c1008ce8:	e8 83 c1 ff ff       	call   c1004e70 <ide_read>
c1008ced:	83 c4 10             	add    $0x10,%esp
c1008cf0:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008cf3:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008cf6:	eb 79                	jmp    c1008d71 <file_write+0x5ed>
c1008cf8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008cfd:	83 ec 0c             	sub    $0xc,%esp
c1008d00:	50                   	push   %eax
c1008d01:	e8 ba f4 ff ff       	call   c10081c0 <block_bitmap_alloc>
c1008d06:	83 c4 10             	add    $0x10,%esp
c1008d09:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008d0c:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008d10:	75 1a                	jne    c1008d2c <file_write+0x5a8>
c1008d12:	83 ec 0c             	sub    $0xc,%esp
c1008d15:	68 08 b2 00 c1       	push   $0xc100b208
c1008d1a:	e8 a9 b8 ff ff       	call   c10045c8 <printk>
c1008d1f:	83 c4 10             	add    $0x10,%esp
c1008d22:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008d27:	e9 cb 01 00 00       	jmp    c1008ef7 <file_write+0x773>
c1008d2c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008d2f:	8d 50 01             	lea    0x1(%eax),%edx
c1008d32:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1008d35:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008d3c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008d3f:	01 c2                	add    %eax,%edx
c1008d41:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008d44:	89 02                	mov    %eax,(%edx)
c1008d46:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008d49:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008d4e:	8b 40 10             	mov    0x10(%eax),%eax
c1008d51:	8b 40 28             	mov    0x28(%eax),%eax
c1008d54:	29 c2                	sub    %eax,%edx
c1008d56:	89 d0                	mov    %edx,%eax
c1008d58:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008d5b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008d60:	83 ec 04             	sub    $0x4,%esp
c1008d63:	6a 01                	push   $0x1
c1008d65:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008d68:	50                   	push   %eax
c1008d69:	e8 20 f5 ff ff       	call   c100828e <bitmap_sync>
c1008d6e:	83 c4 10             	add    $0x10,%esp
c1008d71:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008d74:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1008d77:	0f 82 7b ff ff ff    	jb     c1008cf8 <file_write+0x574>
c1008d7d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008d80:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008d83:	83 c2 30             	add    $0x30,%edx
c1008d86:	83 ec 04             	sub    $0x4,%esp
c1008d89:	6a 01                	push   $0x1
c1008d8b:	50                   	push   %eax
c1008d8c:	52                   	push   %edx
c1008d8d:	e8 1b c1 ff ff       	call   c1004ead <ide_write>
c1008d92:	83 c4 10             	add    $0x10,%esp
c1008d95:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
c1008d99:	8b 45 08             	mov    0x8(%ebp),%eax
c1008d9c:	8b 40 08             	mov    0x8(%eax),%eax
c1008d9f:	8b 40 04             	mov    0x4(%eax),%eax
c1008da2:	8d 50 ff             	lea    -0x1(%eax),%edx
c1008da5:	8b 45 08             	mov    0x8(%ebp),%eax
c1008da8:	89 10                	mov    %edx,(%eax)
c1008daa:	e9 f6 00 00 00       	jmp    c1008ea5 <file_write+0x721>
c1008daf:	83 ec 04             	sub    $0x4,%esp
c1008db2:	68 00 02 00 00       	push   $0x200
c1008db7:	6a 00                	push   $0x0
c1008db9:	ff 75 e0             	pushl  -0x20(%ebp)
c1008dbc:	e8 e9 72 ff ff       	call   c10000aa <memset>
c1008dc1:	83 c4 10             	add    $0x10,%esp
c1008dc4:	8b 45 08             	mov    0x8(%ebp),%eax
c1008dc7:	8b 40 08             	mov    0x8(%eax),%eax
c1008dca:	8b 40 04             	mov    0x4(%eax),%eax
c1008dcd:	c1 e8 09             	shr    $0x9,%eax
c1008dd0:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1008dd3:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1008dd6:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008ddd:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008de0:	01 d0                	add    %edx,%eax
c1008de2:	8b 00                	mov    (%eax),%eax
c1008de4:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1008de7:	8b 45 08             	mov    0x8(%ebp),%eax
c1008dea:	8b 40 08             	mov    0x8(%eax),%eax
c1008ded:	8b 40 04             	mov    0x4(%eax),%eax
c1008df0:	25 ff 01 00 00       	and    $0x1ff,%eax
c1008df5:	89 45 b8             	mov    %eax,-0x48(%ebp)
c1008df8:	b8 00 02 00 00       	mov    $0x200,%eax
c1008dfd:	2b 45 b8             	sub    -0x48(%ebp),%eax
c1008e00:	89 45 b4             	mov    %eax,-0x4c(%ebp)
c1008e03:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008e06:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
c1008e09:	0f 46 45 b4          	cmovbe -0x4c(%ebp),%eax
c1008e0d:	89 45 b0             	mov    %eax,-0x50(%ebp)
c1008e10:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
c1008e14:	74 17                	je     c1008e2d <file_write+0x6a9>
c1008e16:	83 ec 04             	sub    $0x4,%esp
c1008e19:	6a 01                	push   $0x1
c1008e1b:	ff 75 bc             	pushl  -0x44(%ebp)
c1008e1e:	ff 75 e0             	pushl  -0x20(%ebp)
c1008e21:	e8 4a c0 ff ff       	call   c1004e70 <ide_read>
c1008e26:	83 c4 10             	add    $0x10,%esp
c1008e29:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
c1008e2d:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008e30:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1008e33:	01 d0                	add    %edx,%eax
c1008e35:	83 ec 04             	sub    $0x4,%esp
c1008e38:	ff 75 b0             	pushl  -0x50(%ebp)
c1008e3b:	ff 75 f4             	pushl  -0xc(%ebp)
c1008e3e:	50                   	push   %eax
c1008e3f:	e8 c4 72 ff ff       	call   c1000108 <memcpy>
c1008e44:	83 c4 10             	add    $0x10,%esp
c1008e47:	83 ec 04             	sub    $0x4,%esp
c1008e4a:	6a 01                	push   $0x1
c1008e4c:	ff 75 bc             	pushl  -0x44(%ebp)
c1008e4f:	ff 75 e0             	pushl  -0x20(%ebp)
c1008e52:	e8 56 c0 ff ff       	call   c1004ead <ide_write>
c1008e57:	83 c4 10             	add    $0x10,%esp
c1008e5a:	83 ec 08             	sub    $0x8,%esp
c1008e5d:	ff 75 bc             	pushl  -0x44(%ebp)
c1008e60:	68 3f b2 00 c1       	push   $0xc100b23f
c1008e65:	e8 5e b7 ff ff       	call   c10045c8 <printk>
c1008e6a:	83 c4 10             	add    $0x10,%esp
c1008e6d:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1008e70:	01 45 f4             	add    %eax,-0xc(%ebp)
c1008e73:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e76:	8b 40 08             	mov    0x8(%eax),%eax
c1008e79:	8b 48 04             	mov    0x4(%eax),%ecx
c1008e7c:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e7f:	8b 40 08             	mov    0x8(%eax),%eax
c1008e82:	8b 55 b0             	mov    -0x50(%ebp),%edx
c1008e85:	01 ca                	add    %ecx,%edx
c1008e87:	89 50 04             	mov    %edx,0x4(%eax)
c1008e8a:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e8d:	8b 10                	mov    (%eax),%edx
c1008e8f:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1008e92:	01 c2                	add    %eax,%edx
c1008e94:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e97:	89 10                	mov    %edx,(%eax)
c1008e99:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1008e9c:	01 45 f0             	add    %eax,-0x10(%ebp)
c1008e9f:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1008ea2:	29 45 ec             	sub    %eax,-0x14(%ebp)
c1008ea5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008ea8:	3b 45 10             	cmp    0x10(%ebp),%eax
c1008eab:	0f 82 fe fe ff ff    	jb     c1008daf <file_write+0x62b>
c1008eb1:	8b 45 08             	mov    0x8(%ebp),%eax
c1008eb4:	8b 50 08             	mov    0x8(%eax),%edx
c1008eb7:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008ebc:	83 ec 04             	sub    $0x4,%esp
c1008ebf:	ff 75 e0             	pushl  -0x20(%ebp)
c1008ec2:	52                   	push   %edx
c1008ec3:	50                   	push   %eax
c1008ec4:	e8 72 04 00 00       	call   c100933b <inode_sync>
c1008ec9:	83 c4 10             	add    $0x10,%esp
c1008ecc:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008ecf:	83 ec 08             	sub    $0x8,%esp
c1008ed2:	68 30 02 00 00       	push   $0x230
c1008ed7:	50                   	push   %eax
c1008ed8:	e8 bc 9b ff ff       	call   c1002a99 <vmm_free>
c1008edd:	83 c4 10             	add    $0x10,%esp
c1008ee0:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008ee3:	83 ec 08             	sub    $0x8,%esp
c1008ee6:	68 00 02 00 00       	push   $0x200
c1008eeb:	50                   	push   %eax
c1008eec:	e8 a8 9b ff ff       	call   c1002a99 <vmm_free>
c1008ef1:	83 c4 10             	add    $0x10,%esp
c1008ef4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008ef7:	c9                   	leave  
c1008ef8:	c3                   	ret    

c1008ef9 <file_read>:
c1008ef9:	55                   	push   %ebp
c1008efa:	89 e5                	mov    %esp,%ebp
c1008efc:	83 ec 48             	sub    $0x48,%esp
c1008eff:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008f02:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008f05:	8b 45 10             	mov    0x10(%ebp),%eax
c1008f08:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008f0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008f0e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008f11:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f14:	8b 00                	mov    (%eax),%eax
c1008f16:	83 ec 08             	sub    $0x8,%esp
c1008f19:	50                   	push   %eax
c1008f1a:	68 59 b2 00 c1       	push   $0xc100b259
c1008f1f:	e8 a4 b6 ff ff       	call   c10045c8 <printk>
c1008f24:	83 c4 10             	add    $0x10,%esp
c1008f27:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f2a:	8b 40 08             	mov    0x8(%eax),%eax
c1008f2d:	8b 40 04             	mov    0x4(%eax),%eax
c1008f30:	83 ec 08             	sub    $0x8,%esp
c1008f33:	50                   	push   %eax
c1008f34:	68 68 b2 00 c1       	push   $0xc100b268
c1008f39:	e8 8a b6 ff ff       	call   c10045c8 <printk>
c1008f3e:	83 c4 10             	add    $0x10,%esp
c1008f41:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f44:	8b 10                	mov    (%eax),%edx
c1008f46:	8b 45 10             	mov    0x10(%ebp),%eax
c1008f49:	01 c2                	add    %eax,%edx
c1008f4b:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f4e:	8b 40 08             	mov    0x8(%eax),%eax
c1008f51:	8b 40 04             	mov    0x4(%eax),%eax
c1008f54:	39 c2                	cmp    %eax,%edx
c1008f56:	76 2b                	jbe    c1008f83 <file_read+0x8a>
c1008f58:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f5b:	8b 40 08             	mov    0x8(%eax),%eax
c1008f5e:	8b 50 04             	mov    0x4(%eax),%edx
c1008f61:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f64:	8b 00                	mov    (%eax),%eax
c1008f66:	29 c2                	sub    %eax,%edx
c1008f68:	89 d0                	mov    %edx,%eax
c1008f6a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008f6d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008f70:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008f73:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1008f77:	75 0a                	jne    c1008f83 <file_read+0x8a>
c1008f79:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008f7e:	e9 44 03 00 00       	jmp    c10092c7 <file_read+0x3ce>
c1008f83:	83 ec 08             	sub    $0x8,%esp
c1008f86:	ff 75 f0             	pushl  -0x10(%ebp)
c1008f89:	68 78 b2 00 c1       	push   $0xc100b278
c1008f8e:	e8 35 b6 ff ff       	call   c10045c8 <printk>
c1008f93:	83 c4 10             	add    $0x10,%esp
c1008f96:	83 ec 08             	sub    $0x8,%esp
c1008f99:	6a 02                	push   $0x2
c1008f9b:	68 00 02 00 00       	push   $0x200
c1008fa0:	e8 cf 99 ff ff       	call   c1002974 <vmm_malloc>
c1008fa5:	83 c4 10             	add    $0x10,%esp
c1008fa8:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008fab:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c1008faf:	75 10                	jne    c1008fc1 <file_read+0xc8>
c1008fb1:	83 ec 0c             	sub    $0xc,%esp
c1008fb4:	68 90 b2 00 c1       	push   $0xc100b290
c1008fb9:	e8 0a b6 ff ff       	call   c10045c8 <printk>
c1008fbe:	83 c4 10             	add    $0x10,%esp
c1008fc1:	83 ec 08             	sub    $0x8,%esp
c1008fc4:	6a 02                	push   $0x2
c1008fc6:	68 30 02 00 00       	push   $0x230
c1008fcb:	e8 a4 99 ff ff       	call   c1002974 <vmm_malloc>
c1008fd0:	83 c4 10             	add    $0x10,%esp
c1008fd3:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008fd6:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c1008fda:	75 1a                	jne    c1008ff6 <file_read+0xfd>
c1008fdc:	83 ec 0c             	sub    $0xc,%esp
c1008fdf:	68 bc b2 00 c1       	push   $0xc100b2bc
c1008fe4:	e8 df b5 ff ff       	call   c10045c8 <printk>
c1008fe9:	83 c4 10             	add    $0x10,%esp
c1008fec:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008ff1:	e9 d1 02 00 00       	jmp    c10092c7 <file_read+0x3ce>
c1008ff6:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ff9:	8b 00                	mov    (%eax),%eax
c1008ffb:	c1 e8 09             	shr    $0x9,%eax
c1008ffe:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009001:	8b 45 08             	mov    0x8(%ebp),%eax
c1009004:	8b 10                	mov    (%eax),%edx
c1009006:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009009:	01 d0                	add    %edx,%eax
c100900b:	c1 e8 09             	shr    $0x9,%eax
c100900e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009011:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009014:	2b 45 d4             	sub    -0x2c(%ebp),%eax
c1009017:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100901a:	81 7d d8 8a 00 00 00 	cmpl   $0x8a,-0x28(%ebp)
c1009021:	77 09                	ja     c100902c <file_read+0x133>
c1009023:	81 7d d4 8a 00 00 00 	cmpl   $0x8a,-0x2c(%ebp)
c100902a:	76 19                	jbe    c1009045 <file_read+0x14c>
c100902c:	68 ec b2 00 c1       	push   $0xc100b2ec
c1009031:	68 5c b3 00 c1       	push   $0xc100b35c
c1009036:	68 d1 01 00 00       	push   $0x1d1
c100903b:	68 a8 b0 00 c1       	push   $0xc100b0a8
c1009040:	e8 c8 72 ff ff       	call   c100030d <__PANIC>
c1009045:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
c1009049:	75 7b                	jne    c10090c6 <file_read+0x1cd>
c100904b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100904e:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c1009051:	74 19                	je     c100906c <file_read+0x173>
c1009053:	68 24 b3 00 c1       	push   $0xc100b324
c1009058:	68 5c b3 00 c1       	push   $0xc100b35c
c100905d:	68 d8 01 00 00       	push   $0x1d8
c1009062:	68 a8 b0 00 c1       	push   $0xc100b0a8
c1009067:	e8 a1 72 ff ff       	call   c100030d <__PANIC>
c100906c:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c1009070:	77 2b                	ja     c100909d <file_read+0x1a4>
c1009072:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1009075:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009078:	8b 45 08             	mov    0x8(%ebp),%eax
c100907b:	8b 40 08             	mov    0x8(%eax),%eax
c100907e:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009081:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009088:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100908b:	01 ca                	add    %ecx,%edx
c100908d:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009090:	83 c1 04             	add    $0x4,%ecx
c1009093:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009096:	89 02                	mov    %eax,(%edx)
c1009098:	e9 40 01 00 00       	jmp    c10091dd <file_read+0x2e4>
c100909d:	8b 45 08             	mov    0x8(%ebp),%eax
c10090a0:	8b 40 08             	mov    0x8(%eax),%eax
c10090a3:	8b 40 40             	mov    0x40(%eax),%eax
c10090a6:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10090a9:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10090ac:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10090af:	83 c2 30             	add    $0x30,%edx
c10090b2:	83 ec 04             	sub    $0x4,%esp
c10090b5:	6a 01                	push   $0x1
c10090b7:	50                   	push   %eax
c10090b8:	52                   	push   %edx
c10090b9:	e8 b2 bd ff ff       	call   c1004e70 <ide_read>
c10090be:	83 c4 10             	add    $0x10,%esp
c10090c1:	e9 17 01 00 00       	jmp    c10091dd <file_read+0x2e4>
c10090c6:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c10090ca:	77 39                	ja     c1009105 <file_read+0x20c>
c10090cc:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10090cf:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10090d2:	eb 24                	jmp    c10090f8 <file_read+0x1ff>
c10090d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10090d7:	8b 40 08             	mov    0x8(%eax),%eax
c10090da:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10090dd:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10090e4:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10090e7:	01 ca                	add    %ecx,%edx
c10090e9:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c10090ec:	83 c1 04             	add    $0x4,%ecx
c10090ef:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c10090f2:	89 02                	mov    %eax,(%edx)
c10090f4:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c10090f8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10090fb:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
c10090fe:	76 d4                	jbe    c10090d4 <file_read+0x1db>
c1009100:	e9 d8 00 00 00       	jmp    c10091dd <file_read+0x2e4>
c1009105:	83 7d d8 0b          	cmpl   $0xb,-0x28(%ebp)
c1009109:	0f 87 84 00 00 00    	ja     c1009193 <file_read+0x29a>
c100910f:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c1009113:	76 7e                	jbe    c1009193 <file_read+0x29a>
c1009115:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009118:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100911b:	eb 24                	jmp    c1009141 <file_read+0x248>
c100911d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009120:	8b 40 08             	mov    0x8(%eax),%eax
c1009123:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009126:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100912d:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009130:	01 ca                	add    %ecx,%edx
c1009132:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009135:	83 c1 04             	add    $0x4,%ecx
c1009138:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100913b:	89 02                	mov    %eax,(%edx)
c100913d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009141:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1009145:	76 d6                	jbe    c100911d <file_read+0x224>
c1009147:	8b 45 08             	mov    0x8(%ebp),%eax
c100914a:	8b 40 08             	mov    0x8(%eax),%eax
c100914d:	8b 40 40             	mov    0x40(%eax),%eax
c1009150:	85 c0                	test   %eax,%eax
c1009152:	75 19                	jne    c100916d <file_read+0x274>
c1009154:	68 f8 b0 00 c1       	push   $0xc100b0f8
c1009159:	68 5c b3 00 c1       	push   $0xc100b35c
c100915e:	68 f0 01 00 00       	push   $0x1f0
c1009163:	68 a8 b0 00 c1       	push   $0xc100b0a8
c1009168:	e8 a0 71 ff ff       	call   c100030d <__PANIC>
c100916d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009170:	8b 40 08             	mov    0x8(%eax),%eax
c1009173:	8b 40 40             	mov    0x40(%eax),%eax
c1009176:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009179:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100917c:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100917f:	83 c2 30             	add    $0x30,%edx
c1009182:	83 ec 04             	sub    $0x4,%esp
c1009185:	6a 01                	push   $0x1
c1009187:	50                   	push   %eax
c1009188:	52                   	push   %edx
c1009189:	e8 e2 bc ff ff       	call   c1004e70 <ide_read>
c100918e:	83 c4 10             	add    $0x10,%esp
c1009191:	eb 4a                	jmp    c10091dd <file_read+0x2e4>
c1009193:	8b 45 08             	mov    0x8(%ebp),%eax
c1009196:	8b 40 08             	mov    0x8(%eax),%eax
c1009199:	8b 40 40             	mov    0x40(%eax),%eax
c100919c:	85 c0                	test   %eax,%eax
c100919e:	75 19                	jne    c10091b9 <file_read+0x2c0>
c10091a0:	68 f8 b0 00 c1       	push   $0xc100b0f8
c10091a5:	68 5c b3 00 c1       	push   $0xc100b35c
c10091aa:	68 f7 01 00 00       	push   $0x1f7
c10091af:	68 a8 b0 00 c1       	push   $0xc100b0a8
c10091b4:	e8 54 71 ff ff       	call   c100030d <__PANIC>
c10091b9:	8b 45 08             	mov    0x8(%ebp),%eax
c10091bc:	8b 40 08             	mov    0x8(%eax),%eax
c10091bf:	8b 40 40             	mov    0x40(%eax),%eax
c10091c2:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10091c5:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10091c8:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10091cb:	83 c2 30             	add    $0x30,%edx
c10091ce:	83 ec 04             	sub    $0x4,%esp
c10091d1:	6a 01                	push   $0x1
c10091d3:	50                   	push   %eax
c10091d4:	52                   	push   %edx
c10091d5:	e8 96 bc ff ff       	call   c1004e70 <ide_read>
c10091da:	83 c4 10             	add    $0x10,%esp
c10091dd:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c10091e4:	e9 a7 00 00 00       	jmp    c1009290 <file_read+0x397>
c10091e9:	8b 45 08             	mov    0x8(%ebp),%eax
c10091ec:	8b 00                	mov    (%eax),%eax
c10091ee:	c1 e8 09             	shr    $0x9,%eax
c10091f1:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10091f4:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10091f7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10091fe:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009201:	01 d0                	add    %edx,%eax
c1009203:	8b 00                	mov    (%eax),%eax
c1009205:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009208:	8b 45 08             	mov    0x8(%ebp),%eax
c100920b:	8b 00                	mov    (%eax),%eax
c100920d:	25 ff 01 00 00       	and    $0x1ff,%eax
c1009212:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1009215:	b8 00 02 00 00       	mov    $0x200,%eax
c100921a:	2b 45 c0             	sub    -0x40(%ebp),%eax
c100921d:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1009220:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009223:	39 45 bc             	cmp    %eax,-0x44(%ebp)
c1009226:	0f 46 45 bc          	cmovbe -0x44(%ebp),%eax
c100922a:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100922d:	83 ec 04             	sub    $0x4,%esp
c1009230:	68 00 02 00 00       	push   $0x200
c1009235:	6a 00                	push   $0x0
c1009237:	ff 75 e0             	pushl  -0x20(%ebp)
c100923a:	e8 6b 6e ff ff       	call   c10000aa <memset>
c100923f:	83 c4 10             	add    $0x10,%esp
c1009242:	83 ec 04             	sub    $0x4,%esp
c1009245:	6a 01                	push   $0x1
c1009247:	ff 75 c4             	pushl  -0x3c(%ebp)
c100924a:	ff 75 e0             	pushl  -0x20(%ebp)
c100924d:	e8 1e bc ff ff       	call   c1004e70 <ide_read>
c1009252:	83 c4 10             	add    $0x10,%esp
c1009255:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1009258:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100925b:	01 d0                	add    %edx,%eax
c100925d:	83 ec 04             	sub    $0x4,%esp
c1009260:	ff 75 b8             	pushl  -0x48(%ebp)
c1009263:	50                   	push   %eax
c1009264:	ff 75 f4             	pushl  -0xc(%ebp)
c1009267:	e8 9c 6e ff ff       	call   c1000108 <memcpy>
c100926c:	83 c4 10             	add    $0x10,%esp
c100926f:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009272:	01 45 f4             	add    %eax,-0xc(%ebp)
c1009275:	8b 45 08             	mov    0x8(%ebp),%eax
c1009278:	8b 10                	mov    (%eax),%edx
c100927a:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100927d:	01 c2                	add    %eax,%edx
c100927f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009282:	89 10                	mov    %edx,(%eax)
c1009284:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009287:	01 45 e4             	add    %eax,-0x1c(%ebp)
c100928a:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100928d:	29 45 ec             	sub    %eax,-0x14(%ebp)
c1009290:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009293:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1009296:	0f 82 4d ff ff ff    	jb     c10091e9 <file_read+0x2f0>
c100929c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100929f:	83 ec 08             	sub    $0x8,%esp
c10092a2:	68 30 02 00 00       	push   $0x230
c10092a7:	50                   	push   %eax
c10092a8:	e8 ec 97 ff ff       	call   c1002a99 <vmm_free>
c10092ad:	83 c4 10             	add    $0x10,%esp
c10092b0:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10092b3:	83 ec 08             	sub    $0x8,%esp
c10092b6:	68 00 02 00 00       	push   $0x200
c10092bb:	50                   	push   %eax
c10092bc:	e8 d8 97 ff ff       	call   c1002a99 <vmm_free>
c10092c1:	83 c4 10             	add    $0x10,%esp
c10092c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10092c7:	c9                   	leave  
c10092c8:	c3                   	ret    

c10092c9 <inode_locate>:
c10092c9:	55                   	push   %ebp
c10092ca:	89 e5                	mov    %esp,%ebp
c10092cc:	83 ec 20             	sub    $0x20,%esp
c10092cf:	8b 45 08             	mov    0x8(%ebp),%eax
c10092d2:	8b 40 10             	mov    0x10(%eax),%eax
c10092d5:	8b 40 20             	mov    0x20(%eax),%eax
c10092d8:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10092db:	c7 45 f8 44 00 00 00 	movl   $0x44,-0x8(%ebp)
c10092e2:	8b 45 0c             	mov    0xc(%ebp),%eax
c10092e5:	0f af 45 f8          	imul   -0x8(%ebp),%eax
c10092e9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10092ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10092ef:	c1 e8 09             	shr    $0x9,%eax
c10092f2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10092f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10092f8:	25 ff 01 00 00       	and    $0x1ff,%eax
c10092fd:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009300:	b8 00 02 00 00       	mov    $0x200,%eax
c1009305:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1009308:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100930b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100930e:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1009311:	73 08                	jae    c100931b <inode_locate+0x52>
c1009313:	8b 45 10             	mov    0x10(%ebp),%eax
c1009316:	c6 00 01             	movb   $0x1,(%eax)
c1009319:	eb 06                	jmp    c1009321 <inode_locate+0x58>
c100931b:	8b 45 10             	mov    0x10(%ebp),%eax
c100931e:	c6 00 00             	movb   $0x0,(%eax)
c1009321:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009324:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009327:	01 c2                	add    %eax,%edx
c1009329:	8b 45 10             	mov    0x10(%ebp),%eax
c100932c:	89 50 04             	mov    %edx,0x4(%eax)
c100932f:	8b 45 10             	mov    0x10(%ebp),%eax
c1009332:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009335:	89 50 08             	mov    %edx,0x8(%eax)
c1009338:	90                   	nop
c1009339:	c9                   	leave  
c100933a:	c3                   	ret    

c100933b <inode_sync>:
c100933b:	55                   	push   %ebp
c100933c:	89 e5                	mov    %esp,%ebp
c100933e:	57                   	push   %edi
c100933f:	56                   	push   %esi
c1009340:	53                   	push   %ebx
c1009341:	83 ec 6c             	sub    $0x6c,%esp
c1009344:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009347:	8b 00                	mov    (%eax),%eax
c1009349:	88 45 e7             	mov    %al,-0x19(%ebp)
c100934c:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
c1009350:	8d 55 d4             	lea    -0x2c(%ebp),%edx
c1009353:	52                   	push   %edx
c1009354:	50                   	push   %eax
c1009355:	ff 75 08             	pushl  0x8(%ebp)
c1009358:	e8 6c ff ff ff       	call   c10092c9 <inode_locate>
c100935d:	83 c4 0c             	add    $0xc,%esp
c1009360:	83 ec 04             	sub    $0x4,%esp
c1009363:	6a 44                	push   $0x44
c1009365:	ff 75 0c             	pushl  0xc(%ebp)
c1009368:	8d 45 90             	lea    -0x70(%ebp),%eax
c100936b:	50                   	push   %eax
c100936c:	e8 97 6d ff ff       	call   c1000108 <memcpy>
c1009371:	83 c4 10             	add    $0x10,%esp
c1009374:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
c100937b:	c6 45 9c 00          	movb   $0x0,-0x64(%ebp)
c100937f:	8b 45 10             	mov    0x10(%ebp),%eax
c1009382:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009385:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
c1009389:	84 c0                	test   %al,%al
c100938b:	74 64                	je     c10093f1 <inode_sync+0xb6>
c100938d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009390:	83 ec 04             	sub    $0x4,%esp
c1009393:	6a 02                	push   $0x2
c1009395:	50                   	push   %eax
c1009396:	ff 75 e0             	pushl  -0x20(%ebp)
c1009399:	e8 d2 ba ff ff       	call   c1004e70 <ide_read>
c100939e:	83 c4 10             	add    $0x10,%esp
c10093a1:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10093a4:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10093a7:	01 d0                	add    %edx,%eax
c10093a9:	89 c2                	mov    %eax,%edx
c10093ab:	8d 45 90             	lea    -0x70(%ebp),%eax
c10093ae:	b9 44 00 00 00       	mov    $0x44,%ecx
c10093b3:	8b 18                	mov    (%eax),%ebx
c10093b5:	89 1a                	mov    %ebx,(%edx)
c10093b7:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c10093bb:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c10093bf:	8d 5a 04             	lea    0x4(%edx),%ebx
c10093c2:	83 e3 fc             	and    $0xfffffffc,%ebx
c10093c5:	29 da                	sub    %ebx,%edx
c10093c7:	29 d0                	sub    %edx,%eax
c10093c9:	01 d1                	add    %edx,%ecx
c10093cb:	83 e1 fc             	and    $0xfffffffc,%ecx
c10093ce:	c1 e9 02             	shr    $0x2,%ecx
c10093d1:	89 ca                	mov    %ecx,%edx
c10093d3:	89 df                	mov    %ebx,%edi
c10093d5:	89 c6                	mov    %eax,%esi
c10093d7:	89 d1                	mov    %edx,%ecx
c10093d9:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c10093db:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10093de:	83 ec 04             	sub    $0x4,%esp
c10093e1:	6a 02                	push   $0x2
c10093e3:	50                   	push   %eax
c10093e4:	ff 75 e0             	pushl  -0x20(%ebp)
c10093e7:	e8 c1 ba ff ff       	call   c1004ead <ide_write>
c10093ec:	83 c4 10             	add    $0x10,%esp
c10093ef:	eb 62                	jmp    c1009453 <inode_sync+0x118>
c10093f1:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10093f4:	83 ec 04             	sub    $0x4,%esp
c10093f7:	6a 01                	push   $0x1
c10093f9:	50                   	push   %eax
c10093fa:	ff 75 e0             	pushl  -0x20(%ebp)
c10093fd:	e8 6e ba ff ff       	call   c1004e70 <ide_read>
c1009402:	83 c4 10             	add    $0x10,%esp
c1009405:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009408:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100940b:	01 d0                	add    %edx,%eax
c100940d:	89 c2                	mov    %eax,%edx
c100940f:	8d 45 90             	lea    -0x70(%ebp),%eax
c1009412:	b9 44 00 00 00       	mov    $0x44,%ecx
c1009417:	8b 18                	mov    (%eax),%ebx
c1009419:	89 1a                	mov    %ebx,(%edx)
c100941b:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c100941f:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c1009423:	8d 5a 04             	lea    0x4(%edx),%ebx
c1009426:	83 e3 fc             	and    $0xfffffffc,%ebx
c1009429:	29 da                	sub    %ebx,%edx
c100942b:	29 d0                	sub    %edx,%eax
c100942d:	01 d1                	add    %edx,%ecx
c100942f:	83 e1 fc             	and    $0xfffffffc,%ecx
c1009432:	c1 e9 02             	shr    $0x2,%ecx
c1009435:	89 ca                	mov    %ecx,%edx
c1009437:	89 df                	mov    %ebx,%edi
c1009439:	89 c6                	mov    %eax,%esi
c100943b:	89 d1                	mov    %edx,%ecx
c100943d:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100943f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009442:	83 ec 04             	sub    $0x4,%esp
c1009445:	6a 01                	push   $0x1
c1009447:	50                   	push   %eax
c1009448:	ff 75 e0             	pushl  -0x20(%ebp)
c100944b:	e8 5d ba ff ff       	call   c1004ead <ide_write>
c1009450:	83 c4 10             	add    $0x10,%esp
c1009453:	90                   	nop
c1009454:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1009457:	5b                   	pop    %ebx
c1009458:	5e                   	pop    %esi
c1009459:	5f                   	pop    %edi
c100945a:	5d                   	pop    %ebp
c100945b:	c3                   	ret    

c100945c <inode_open>:
c100945c:	55                   	push   %ebp
c100945d:	89 e5                	mov    %esp,%ebp
c100945f:	83 ec 28             	sub    $0x28,%esp
c1009462:	8d 45 e4             	lea    -0x1c(%ebp),%eax
c1009465:	50                   	push   %eax
c1009466:	ff 75 0c             	pushl  0xc(%ebp)
c1009469:	ff 75 08             	pushl  0x8(%ebp)
c100946c:	e8 58 fe ff ff       	call   c10092c9 <inode_locate>
c1009471:	83 c4 0c             	add    $0xc,%esp
c1009474:	83 ec 08             	sub    $0x8,%esp
c1009477:	6a 02                	push   $0x2
c1009479:	6a 44                	push   $0x44
c100947b:	e8 f4 94 ff ff       	call   c1002974 <vmm_malloc>
c1009480:	83 c4 10             	add    $0x10,%esp
c1009483:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009486:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100948a:	84 c0                	test   %al,%al
c100948c:	74 2b                	je     c10094b9 <inode_open+0x5d>
c100948e:	83 ec 08             	sub    $0x8,%esp
c1009491:	6a 02                	push   $0x2
c1009493:	68 00 04 00 00       	push   $0x400
c1009498:	e8 d7 94 ff ff       	call   c1002974 <vmm_malloc>
c100949d:	83 c4 10             	add    $0x10,%esp
c10094a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10094a3:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10094a6:	83 ec 04             	sub    $0x4,%esp
c10094a9:	6a 02                	push   $0x2
c10094ab:	50                   	push   %eax
c10094ac:	ff 75 f4             	pushl  -0xc(%ebp)
c10094af:	e8 bc b9 ff ff       	call   c1004e70 <ide_read>
c10094b4:	83 c4 10             	add    $0x10,%esp
c10094b7:	eb 29                	jmp    c10094e2 <inode_open+0x86>
c10094b9:	83 ec 08             	sub    $0x8,%esp
c10094bc:	6a 02                	push   $0x2
c10094be:	68 00 02 00 00       	push   $0x200
c10094c3:	e8 ac 94 ff ff       	call   c1002974 <vmm_malloc>
c10094c8:	83 c4 10             	add    $0x10,%esp
c10094cb:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10094ce:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10094d1:	83 ec 04             	sub    $0x4,%esp
c10094d4:	6a 01                	push   $0x1
c10094d6:	50                   	push   %eax
c10094d7:	ff 75 f4             	pushl  -0xc(%ebp)
c10094da:	e8 91 b9 ff ff       	call   c1004e70 <ide_read>
c10094df:	83 c4 10             	add    $0x10,%esp
c10094e2:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10094e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10094e8:	01 d0                	add    %edx,%eax
c10094ea:	83 ec 04             	sub    $0x4,%esp
c10094ed:	6a 44                	push   $0x44
c10094ef:	50                   	push   %eax
c10094f0:	ff 75 f0             	pushl  -0x10(%ebp)
c10094f3:	e8 10 6c ff ff       	call   c1000108 <memcpy>
c10094f8:	83 c4 10             	add    $0x10,%esp
c10094fb:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10094ff:	84 c0                	test   %al,%al
c1009501:	74 16                	je     c1009519 <inode_open+0xbd>
c1009503:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009506:	83 ec 08             	sub    $0x8,%esp
c1009509:	68 00 04 00 00       	push   $0x400
c100950e:	50                   	push   %eax
c100950f:	e8 85 95 ff ff       	call   c1002a99 <vmm_free>
c1009514:	83 c4 10             	add    $0x10,%esp
c1009517:	eb 14                	jmp    c100952d <inode_open+0xd1>
c1009519:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100951c:	83 ec 08             	sub    $0x8,%esp
c100951f:	68 00 02 00 00       	push   $0x200
c1009524:	50                   	push   %eax
c1009525:	e8 6f 95 ff ff       	call   c1002a99 <vmm_free>
c100952a:	83 c4 10             	add    $0x10,%esp
c100952d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009530:	c9                   	leave  
c1009531:	c3                   	ret    

c1009532 <inode_close>:
c1009532:	55                   	push   %ebp
c1009533:	89 e5                	mov    %esp,%ebp
c1009535:	83 ec 08             	sub    $0x8,%esp
c1009538:	8b 45 08             	mov    0x8(%ebp),%eax
c100953b:	83 ec 08             	sub    $0x8,%esp
c100953e:	6a 44                	push   $0x44
c1009540:	50                   	push   %eax
c1009541:	e8 53 95 ff ff       	call   c1002a99 <vmm_free>
c1009546:	83 c4 10             	add    $0x10,%esp
c1009549:	90                   	nop
c100954a:	c9                   	leave  
c100954b:	c3                   	ret    

c100954c <inode_delete>:
c100954c:	55                   	push   %ebp
c100954d:	89 e5                	mov    %esp,%ebp
c100954f:	83 ec 18             	sub    $0x18,%esp
c1009552:	81 7d 0c ff 0f 00 00 	cmpl   $0xfff,0xc(%ebp)
c1009559:	76 16                	jbe    c1009571 <inode_delete+0x25>
c100955b:	68 68 b3 00 c1       	push   $0xc100b368
c1009560:	68 24 b4 00 c1       	push   $0xc100b424
c1009565:	6a 6b                	push   $0x6b
c1009567:	68 78 b3 00 c1       	push   $0xc100b378
c100956c:	e8 9c 6d ff ff       	call   c100030d <__PANIC>
c1009571:	83 ec 04             	sub    $0x4,%esp
c1009574:	8d 45 e8             	lea    -0x18(%ebp),%eax
c1009577:	50                   	push   %eax
c1009578:	ff 75 0c             	pushl  0xc(%ebp)
c100957b:	ff 75 08             	pushl  0x8(%ebp)
c100957e:	e8 46 fd ff ff       	call   c10092c9 <inode_locate>
c1009583:	83 c4 10             	add    $0x10,%esp
c1009586:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009589:	8b 45 08             	mov    0x8(%ebp),%eax
c100958c:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c1009590:	0f b6 c8             	movzbl %al,%ecx
c1009593:	8b 45 08             	mov    0x8(%ebp),%eax
c1009596:	8b 40 0c             	mov    0xc(%eax),%eax
c1009599:	01 c8                	add    %ecx,%eax
c100959b:	39 c2                	cmp    %eax,%edx
c100959d:	76 16                	jbe    c10095b5 <inode_delete+0x69>
c100959f:	68 ac b3 00 c1       	push   $0xc100b3ac
c10095a4:	68 24 b4 00 c1       	push   $0xc100b424
c10095a9:	6a 6e                	push   $0x6e
c10095ab:	68 78 b3 00 c1       	push   $0xc100b378
c10095b0:	e8 58 6d ff ff       	call   c100030d <__PANIC>
c10095b5:	8b 45 10             	mov    0x10(%ebp),%eax
c10095b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10095bb:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
c10095bf:	84 c0                	test   %al,%al
c10095c1:	74 42                	je     c1009605 <inode_delete+0xb9>
c10095c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10095c6:	83 ec 04             	sub    $0x4,%esp
c10095c9:	6a 02                	push   $0x2
c10095cb:	50                   	push   %eax
c10095cc:	ff 75 f4             	pushl  -0xc(%ebp)
c10095cf:	e8 9c b8 ff ff       	call   c1004e70 <ide_read>
c10095d4:	83 c4 10             	add    $0x10,%esp
c10095d7:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10095da:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10095dd:	01 d0                	add    %edx,%eax
c10095df:	83 ec 04             	sub    $0x4,%esp
c10095e2:	6a 44                	push   $0x44
c10095e4:	6a 00                	push   $0x0
c10095e6:	50                   	push   %eax
c10095e7:	e8 be 6a ff ff       	call   c10000aa <memset>
c10095ec:	83 c4 10             	add    $0x10,%esp
c10095ef:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10095f2:	83 ec 04             	sub    $0x4,%esp
c10095f5:	6a 02                	push   $0x2
c10095f7:	50                   	push   %eax
c10095f8:	ff 75 f4             	pushl  -0xc(%ebp)
c10095fb:	e8 ad b8 ff ff       	call   c1004ead <ide_write>
c1009600:	83 c4 10             	add    $0x10,%esp
c1009603:	eb 40                	jmp    c1009645 <inode_delete+0xf9>
c1009605:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009608:	83 ec 04             	sub    $0x4,%esp
c100960b:	6a 01                	push   $0x1
c100960d:	50                   	push   %eax
c100960e:	ff 75 f4             	pushl  -0xc(%ebp)
c1009611:	e8 5a b8 ff ff       	call   c1004e70 <ide_read>
c1009616:	83 c4 10             	add    $0x10,%esp
c1009619:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100961c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100961f:	01 d0                	add    %edx,%eax
c1009621:	83 ec 04             	sub    $0x4,%esp
c1009624:	6a 44                	push   $0x44
c1009626:	6a 00                	push   $0x0
c1009628:	50                   	push   %eax
c1009629:	e8 7c 6a ff ff       	call   c10000aa <memset>
c100962e:	83 c4 10             	add    $0x10,%esp
c1009631:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009634:	83 ec 04             	sub    $0x4,%esp
c1009637:	6a 01                	push   $0x1
c1009639:	50                   	push   %eax
c100963a:	ff 75 f4             	pushl  -0xc(%ebp)
c100963d:	e8 6b b8 ff ff       	call   c1004ead <ide_write>
c1009642:	83 c4 10             	add    $0x10,%esp
c1009645:	90                   	nop
c1009646:	c9                   	leave  
c1009647:	c3                   	ret    

c1009648 <inode_release>:
c1009648:	55                   	push   %ebp
c1009649:	89 e5                	mov    %esp,%ebp
c100964b:	57                   	push   %edi
c100964c:	53                   	push   %ebx
c100964d:	81 ec 50 02 00 00    	sub    $0x250,%esp
c1009653:	83 ec 08             	sub    $0x8,%esp
c1009656:	ff 75 0c             	pushl  0xc(%ebp)
c1009659:	ff 75 08             	pushl  0x8(%ebp)
c100965c:	e8 fb fd ff ff       	call   c100945c <inode_open>
c1009661:	83 c4 10             	add    $0x10,%esp
c1009664:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009667:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100966a:	8b 00                	mov    (%eax),%eax
c100966c:	39 45 0c             	cmp    %eax,0xc(%ebp)
c100966f:	74 19                	je     c100968a <inode_release+0x42>
c1009671:	68 ec b3 00 c1       	push   $0xc100b3ec
c1009676:	68 34 b4 00 c1       	push   $0xc100b434
c100967b:	68 85 00 00 00       	push   $0x85
c1009680:	68 78 b3 00 c1       	push   $0xc100b378
c1009685:	e8 83 6c ff ff       	call   c100030d <__PANIC>
c100968a:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100968e:	c6 45 f6 0c          	movb   $0xc,-0xa(%ebp)
c1009692:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
c1009698:	b8 00 00 00 00       	mov    $0x0,%eax
c100969d:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c10096a2:	89 d7                	mov    %edx,%edi
c10096a4:	f3 ab                	rep stos %eax,%es:(%edi)
c10096a6:	eb 22                	jmp    c10096ca <inode_release+0x82>
c10096a8:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c10096ac:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10096b0:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10096b3:	83 c1 04             	add    $0x4,%ecx
c10096b6:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c10096b9:	89 94 85 b0 fd ff ff 	mov    %edx,-0x250(%ebp,%eax,4)
c10096c0:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10096c4:	83 c0 01             	add    $0x1,%eax
c10096c7:	88 45 f7             	mov    %al,-0x9(%ebp)
c10096ca:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c10096ce:	76 d8                	jbe    c10096a8 <inode_release+0x60>
c10096d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10096d3:	8b 40 40             	mov    0x40(%eax),%eax
c10096d6:	85 c0                	test   %eax,%eax
c10096d8:	0f 84 b2 00 00 00    	je     c1009790 <inode_release+0x148>
c10096de:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10096e1:	8b 50 40             	mov    0x40(%eax),%edx
c10096e4:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
c10096ea:	83 c0 30             	add    $0x30,%eax
c10096ed:	83 ec 04             	sub    $0x4,%esp
c10096f0:	6a 01                	push   $0x1
c10096f2:	52                   	push   %edx
c10096f3:	50                   	push   %eax
c10096f4:	e8 77 b7 ff ff       	call   c1004e70 <ide_read>
c10096f9:	83 c4 10             	add    $0x10,%esp
c10096fc:	c6 45 f6 8c          	movb   $0x8c,-0xa(%ebp)
c1009700:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009703:	8b 50 40             	mov    0x40(%eax),%edx
c1009706:	8b 45 08             	mov    0x8(%ebp),%eax
c1009709:	8b 40 10             	mov    0x10(%eax),%eax
c100970c:	8b 40 28             	mov    0x28(%eax),%eax
c100970f:	29 c2                	sub    %eax,%edx
c1009711:	89 d0                	mov    %edx,%eax
c1009713:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009716:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100971a:	75 19                	jne    c1009735 <inode_release+0xed>
c100971c:	68 0c b4 00 c1       	push   $0xc100b40c
c1009721:	68 34 b4 00 c1       	push   $0xc100b434
c1009726:	68 9d 00 00 00       	push   $0x9d
c100972b:	68 78 b3 00 c1       	push   $0xc100b378
c1009730:	e8 d8 6b ff ff       	call   c100030d <__PANIC>
c1009735:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009738:	c1 e8 03             	shr    $0x3,%eax
c100973b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100973e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009741:	83 e0 07             	and    $0x7,%eax
c1009744:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009747:	8b 45 08             	mov    0x8(%ebp),%eax
c100974a:	8b 50 18             	mov    0x18(%eax),%edx
c100974d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009750:	01 d0                	add    %edx,%eax
c1009752:	0f b6 00             	movzbl (%eax),%eax
c1009755:	89 c2                	mov    %eax,%edx
c1009757:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100975a:	bb 01 00 00 00       	mov    $0x1,%ebx
c100975f:	89 c1                	mov    %eax,%ecx
c1009761:	d3 e3                	shl    %cl,%ebx
c1009763:	89 d8                	mov    %ebx,%eax
c1009765:	f7 d0                	not    %eax
c1009767:	89 d1                	mov    %edx,%ecx
c1009769:	21 c1                	and    %eax,%ecx
c100976b:	8b 45 08             	mov    0x8(%ebp),%eax
c100976e:	8b 50 18             	mov    0x18(%eax),%edx
c1009771:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009774:	01 d0                	add    %edx,%eax
c1009776:	89 ca                	mov    %ecx,%edx
c1009778:	88 10                	mov    %dl,(%eax)
c100977a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100977f:	83 ec 04             	sub    $0x4,%esp
c1009782:	6a 01                	push   $0x1
c1009784:	ff 75 ec             	pushl  -0x14(%ebp)
c1009787:	50                   	push   %eax
c1009788:	e8 01 eb ff ff       	call   c100828e <bitmap_sync>
c100978d:	83 c4 10             	add    $0x10,%esp
c1009790:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1009794:	e9 b9 00 00 00       	jmp    c1009852 <inode_release+0x20a>
c1009799:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100979d:	8b 84 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%eax
c10097a4:	85 c0                	test   %eax,%eax
c10097a6:	0f 84 9c 00 00 00    	je     c1009848 <inode_release+0x200>
c10097ac:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10097b3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10097b7:	8b 94 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%edx
c10097be:	8b 45 08             	mov    0x8(%ebp),%eax
c10097c1:	8b 40 10             	mov    0x10(%eax),%eax
c10097c4:	8b 40 28             	mov    0x28(%eax),%eax
c10097c7:	29 c2                	sub    %eax,%edx
c10097c9:	89 d0                	mov    %edx,%eax
c10097cb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10097ce:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10097d2:	75 19                	jne    c10097ed <inode_release+0x1a5>
c10097d4:	68 0c b4 00 c1       	push   $0xc100b40c
c10097d9:	68 34 b4 00 c1       	push   $0xc100b434
c10097de:	68 aa 00 00 00       	push   $0xaa
c10097e3:	68 78 b3 00 c1       	push   $0xc100b378
c10097e8:	e8 20 6b ff ff       	call   c100030d <__PANIC>
c10097ed:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10097f0:	c1 e8 03             	shr    $0x3,%eax
c10097f3:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10097f6:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10097f9:	83 e0 07             	and    $0x7,%eax
c10097fc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10097ff:	8b 45 08             	mov    0x8(%ebp),%eax
c1009802:	8b 50 18             	mov    0x18(%eax),%edx
c1009805:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009808:	01 d0                	add    %edx,%eax
c100980a:	0f b6 00             	movzbl (%eax),%eax
c100980d:	89 c2                	mov    %eax,%edx
c100980f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009812:	bb 01 00 00 00       	mov    $0x1,%ebx
c1009817:	89 c1                	mov    %eax,%ecx
c1009819:	d3 e3                	shl    %cl,%ebx
c100981b:	89 d8                	mov    %ebx,%eax
c100981d:	f7 d0                	not    %eax
c100981f:	89 d1                	mov    %edx,%ecx
c1009821:	21 c1                	and    %eax,%ecx
c1009823:	8b 45 08             	mov    0x8(%ebp),%eax
c1009826:	8b 50 18             	mov    0x18(%eax),%edx
c1009829:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100982c:	01 d0                	add    %edx,%eax
c100982e:	89 ca                	mov    %ecx,%edx
c1009830:	88 10                	mov    %dl,(%eax)
c1009832:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009837:	83 ec 04             	sub    $0x4,%esp
c100983a:	6a 01                	push   $0x1
c100983c:	ff 75 ec             	pushl  -0x14(%ebp)
c100983f:	50                   	push   %eax
c1009840:	e8 49 ea ff ff       	call   c100828e <bitmap_sync>
c1009845:	83 c4 10             	add    $0x10,%esp
c1009848:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100984c:	83 c0 01             	add    $0x1,%eax
c100984f:	88 45 f7             	mov    %al,-0x9(%ebp)
c1009852:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009856:	3a 45 f6             	cmp    -0xa(%ebp),%al
c1009859:	0f 82 3a ff ff ff    	jb     c1009799 <inode_release+0x151>
c100985f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009862:	c1 e8 03             	shr    $0x3,%eax
c1009865:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009868:	8b 45 0c             	mov    0xc(%ebp),%eax
c100986b:	83 e0 07             	and    $0x7,%eax
c100986e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009871:	8b 45 08             	mov    0x8(%ebp),%eax
c1009874:	8b 50 20             	mov    0x20(%eax),%edx
c1009877:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100987a:	01 d0                	add    %edx,%eax
c100987c:	0f b6 00             	movzbl (%eax),%eax
c100987f:	89 c2                	mov    %eax,%edx
c1009881:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009884:	bb 01 00 00 00       	mov    $0x1,%ebx
c1009889:	89 c1                	mov    %eax,%ecx
c100988b:	d3 e3                	shl    %cl,%ebx
c100988d:	89 d8                	mov    %ebx,%eax
c100988f:	f7 d0                	not    %eax
c1009891:	89 d1                	mov    %edx,%ecx
c1009893:	21 c1                	and    %eax,%ecx
c1009895:	8b 45 08             	mov    0x8(%ebp),%eax
c1009898:	8b 50 20             	mov    0x20(%eax),%edx
c100989b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100989e:	01 d0                	add    %edx,%eax
c10098a0:	89 ca                	mov    %ecx,%edx
c10098a2:	88 10                	mov    %dl,(%eax)
c10098a4:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10098a9:	83 ec 04             	sub    $0x4,%esp
c10098ac:	6a 00                	push   $0x0
c10098ae:	ff 75 0c             	pushl  0xc(%ebp)
c10098b1:	50                   	push   %eax
c10098b2:	e8 d7 e9 ff ff       	call   c100828e <bitmap_sync>
c10098b7:	83 c4 10             	add    $0x10,%esp
c10098ba:	83 ec 08             	sub    $0x8,%esp
c10098bd:	6a 02                	push   $0x2
c10098bf:	68 00 04 00 00       	push   $0x400
c10098c4:	e8 ab 90 ff ff       	call   c1002974 <vmm_malloc>
c10098c9:	83 c4 10             	add    $0x10,%esp
c10098cc:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10098cf:	83 ec 04             	sub    $0x4,%esp
c10098d2:	ff 75 e0             	pushl  -0x20(%ebp)
c10098d5:	ff 75 0c             	pushl  0xc(%ebp)
c10098d8:	ff 75 08             	pushl  0x8(%ebp)
c10098db:	e8 6c fc ff ff       	call   c100954c <inode_delete>
c10098e0:	83 c4 10             	add    $0x10,%esp
c10098e3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10098e6:	83 ec 08             	sub    $0x8,%esp
c10098e9:	68 00 04 00 00       	push   $0x400
c10098ee:	50                   	push   %eax
c10098ef:	e8 a5 91 ff ff       	call   c1002a99 <vmm_free>
c10098f4:	83 c4 10             	add    $0x10,%esp
c10098f7:	83 ec 0c             	sub    $0xc,%esp
c10098fa:	ff 75 f0             	pushl  -0x10(%ebp)
c10098fd:	e8 30 fc ff ff       	call   c1009532 <inode_close>
c1009902:	83 c4 10             	add    $0x10,%esp
c1009905:	90                   	nop
c1009906:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1009909:	5b                   	pop    %ebx
c100990a:	5f                   	pop    %edi
c100990b:	5d                   	pop    %ebp
c100990c:	c3                   	ret    

c100990d <inode_init>:
c100990d:	55                   	push   %ebp
c100990e:	89 e5                	mov    %esp,%ebp
c1009910:	83 ec 10             	sub    $0x10,%esp
c1009913:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009916:	8b 55 08             	mov    0x8(%ebp),%edx
c1009919:	89 10                	mov    %edx,(%eax)
c100991b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100991e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1009925:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009928:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100992f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009932:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1009936:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100993d:	eb 14                	jmp    c1009953 <inode_init+0x46>
c100993f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009942:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009945:	83 c2 04             	add    $0x4,%edx
c1009948:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c100994f:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1009953:	83 7d fc 0c          	cmpl   $0xc,-0x4(%ebp)
c1009957:	7e e6                	jle    c100993f <inode_init+0x32>
c1009959:	90                   	nop
c100995a:	90                   	nop
c100995b:	c9                   	leave  
c100995c:	c3                   	ret    
