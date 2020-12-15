
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
  100252:	68 2c 9a 00 c1       	push   $0xc1009a2c
  100257:	68 98 9a 00 c1       	push   $0xc1009a98
  10025c:	6a 51                	push   $0x51
  10025e:	68 64 9a 00 c1       	push   $0xc1009a64
  100263:	e8 a5 00 f0 c0       	call   c100030d <__PANIC>
  100268:	e8 25 1c f0 c0       	call   c1001e92 <main>
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
c1000285:	68 a0 9a 00 c1       	push   $0xc1009aa0
c100028a:	e8 07 44 00 00       	call   c1004696 <printk>
c100028f:	83 c4 10             	add    $0x10,%esp
c1000292:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1000296:	0f b7 c0             	movzwl %ax,%eax
c1000299:	83 ec 08             	sub    $0x8,%esp
c100029c:	50                   	push   %eax
c100029d:	68 a9 9a 00 c1       	push   $0xc1009aa9
c10002a2:	e8 ef 43 00 00       	call   c1004696 <printk>
c10002a7:	83 c4 10             	add    $0x10,%esp
c10002aa:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c10002ae:	0f b7 c0             	movzwl %ax,%eax
c10002b1:	83 ec 08             	sub    $0x8,%esp
c10002b4:	50                   	push   %eax
c10002b5:	68 b2 9a 00 c1       	push   $0xc1009ab2
c10002ba:	e8 d7 43 00 00       	call   c1004696 <printk>
c10002bf:	83 c4 10             	add    $0x10,%esp
c10002c2:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
c10002c6:	0f b7 c0             	movzwl %ax,%eax
c10002c9:	83 ec 08             	sub    $0x8,%esp
c10002cc:	50                   	push   %eax
c10002cd:	68 bb 9a 00 c1       	push   $0xc1009abb
c10002d2:	e8 bf 43 00 00       	call   c1004696 <printk>
c10002d7:	83 c4 10             	add    $0x10,%esp
c10002da:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
c10002de:	0f b7 c0             	movzwl %ax,%eax
c10002e1:	83 ec 08             	sub    $0x8,%esp
c10002e4:	50                   	push   %eax
c10002e5:	68 c4 9a 00 c1       	push   $0xc1009ac4
c10002ea:	e8 a7 43 00 00       	call   c1004696 <printk>
c10002ef:	83 c4 10             	add    $0x10,%esp
c10002f2:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c10002f6:	0f b7 c0             	movzwl %ax,%eax
c10002f9:	83 ec 08             	sub    $0x8,%esp
c10002fc:	50                   	push   %eax
c10002fd:	68 cd 9a 00 c1       	push   $0xc1009acd
c1000302:	e8 8f 43 00 00       	call   c1004696 <printk>
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
c1000321:	68 d6 9a 00 c1       	push   $0xc1009ad6
c1000326:	e8 6b 43 00 00       	call   c1004696 <printk>
c100032b:	83 c4 10             	add    $0x10,%esp
c100032e:	83 ec 04             	sub    $0x4,%esp
c1000331:	ff 75 14             	pushl  0x14(%ebp)
c1000334:	ff 75 10             	pushl  0x10(%ebp)
c1000337:	68 f4 9a 00 c1       	push   $0xc1009af4
c100033c:	e8 55 43 00 00       	call   c1004696 <printk>
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
c100035e:	68 9b 9b 00 c1       	push   $0xc1009b9b
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
c10003ed:	68 9e 9b 00 c1       	push   $0xc1009b9e
c10003f2:	e8 9f 42 00 00       	call   c1004696 <printk>
c10003f7:	83 c4 10             	add    $0x10,%esp
c10003fa:	83 ec 0c             	sub    $0xc,%esp
c10003fd:	68 a4 9b 00 c1       	push   $0xc1009ba4
c1000402:	e8 8f 42 00 00       	call   c1004696 <printk>
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
c100041c:	68 9e 9b 00 c1       	push   $0xc1009b9e
c1000421:	e8 70 42 00 00       	call   c1004696 <printk>
c1000426:	83 c4 10             	add    $0x10,%esp
c1000429:	83 ec 0c             	sub    $0xc,%esp
c100042c:	68 d4 9b 00 c1       	push   $0xc1009bd4
c1000431:	e8 60 42 00 00       	call   c1004696 <printk>
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
c100046d:	68 f3 9b 00 c1       	push   $0xc1009bf3
c1000472:	e8 1f 42 00 00       	call   c1004696 <printk>
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
c10004a0:	68 9e 9b 00 c1       	push   $0xc1009b9e
c10004a5:	e8 ec 41 00 00       	call   c1004696 <printk>
c10004aa:	83 c4 10             	add    $0x10,%esp
c10004ad:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10004b4:	83 ec 0c             	sub    $0xc,%esp
c10004b7:	68 fe 9b 00 c1       	push   $0xc1009bfe
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
c1000507:	68 1c 9c 00 c1       	push   $0xc1009c1c
c100050c:	e8 85 41 00 00       	call   c1004696 <printk>
c1000511:	83 c4 10             	add    $0x10,%esp
c1000514:	eb 32                	jmp    c1000548 <instr_game+0xbe>
c1000516:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000519:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c100051c:	7d 15                	jge    c1000533 <instr_game+0xa9>
c100051e:	83 ec 0c             	sub    $0xc,%esp
c1000521:	68 4b 9c 00 c1       	push   $0xc1009c4b
c1000526:	e8 6b 41 00 00       	call   c1004696 <printk>
c100052b:	83 c4 10             	add    $0x10,%esp
c100052e:	e9 7a ff ff ff       	jmp    c10004ad <instr_game+0x23>
c1000533:	83 ec 0c             	sub    $0xc,%esp
c1000536:	68 63 9c 00 c1       	push   $0xc1009c63
c100053b:	e8 56 41 00 00       	call   c1004696 <printk>
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
c1000552:	e8 12 45 00 00       	call   c1004a69 <cons_getc>
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
c1000577:	68 7a 9c 00 c1       	push   $0xc1009c7a
c100057c:	e8 15 41 00 00       	call   c1004696 <printk>
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
c10005b8:	e8 6e 44 00 00       	call   c1004a2b <cons_putc>
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
c10005e6:	e8 40 44 00 00       	call   c1004a2b <cons_putc>
c10005eb:	83 c4 10             	add    $0x10,%esp
c10005ee:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
c10005f2:	eb 2c                	jmp    c1000620 <readline+0xbb>
c10005f4:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
c10005f8:	74 06                	je     c1000600 <readline+0x9b>
c10005fa:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
c10005fe:	75 8b                	jne    c100058b <readline+0x26>
c1000600:	83 ec 0c             	sub    $0xc,%esp
c1000603:	ff 75 f0             	pushl  -0x10(%ebp)
c1000606:	e8 20 44 00 00       	call   c1004a2b <cons_putc>
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
c1000995:	68 b2 9c 00 c1       	push   $0xc1009cb2
c100099a:	e8 f7 3c 00 00       	call   c1004696 <printk>
c100099f:	83 c4 10             	add    $0x10,%esp
c10009a2:	8b 45 08             	mov    0x8(%ebp),%eax
c10009a5:	8b 40 04             	mov    0x4(%eax),%eax
c10009a8:	83 ec 08             	sub    $0x8,%esp
c10009ab:	50                   	push   %eax
c10009ac:	68 c2 9c 00 c1       	push   $0xc1009cc2
c10009b1:	e8 e0 3c 00 00       	call   c1004696 <printk>
c10009b6:	83 c4 10             	add    $0x10,%esp
c10009b9:	8b 45 08             	mov    0x8(%ebp),%eax
c10009bc:	8b 40 08             	mov    0x8(%eax),%eax
c10009bf:	83 ec 08             	sub    $0x8,%esp
c10009c2:	50                   	push   %eax
c10009c3:	68 d2 9c 00 c1       	push   $0xc1009cd2
c10009c8:	e8 c9 3c 00 00       	call   c1004696 <printk>
c10009cd:	83 c4 10             	add    $0x10,%esp
c10009d0:	8b 45 08             	mov    0x8(%ebp),%eax
c10009d3:	8b 40 0c             	mov    0xc(%eax),%eax
c10009d6:	83 ec 08             	sub    $0x8,%esp
c10009d9:	50                   	push   %eax
c10009da:	68 e2 9c 00 c1       	push   $0xc1009ce2
c10009df:	e8 b2 3c 00 00       	call   c1004696 <printk>
c10009e4:	83 c4 10             	add    $0x10,%esp
c10009e7:	8b 45 08             	mov    0x8(%ebp),%eax
c10009ea:	8b 40 10             	mov    0x10(%eax),%eax
c10009ed:	83 ec 08             	sub    $0x8,%esp
c10009f0:	50                   	push   %eax
c10009f1:	68 f2 9c 00 c1       	push   $0xc1009cf2
c10009f6:	e8 9b 3c 00 00       	call   c1004696 <printk>
c10009fb:	83 c4 10             	add    $0x10,%esp
c10009fe:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a01:	8b 40 14             	mov    0x14(%eax),%eax
c1000a04:	83 ec 08             	sub    $0x8,%esp
c1000a07:	50                   	push   %eax
c1000a08:	68 02 9d 00 c1       	push   $0xc1009d02
c1000a0d:	e8 84 3c 00 00       	call   c1004696 <printk>
c1000a12:	83 c4 10             	add    $0x10,%esp
c1000a15:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a18:	8b 40 18             	mov    0x18(%eax),%eax
c1000a1b:	83 ec 08             	sub    $0x8,%esp
c1000a1e:	50                   	push   %eax
c1000a1f:	68 12 9d 00 c1       	push   $0xc1009d12
c1000a24:	e8 6d 3c 00 00       	call   c1004696 <printk>
c1000a29:	83 c4 10             	add    $0x10,%esp
c1000a2c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a2f:	8b 40 1c             	mov    0x1c(%eax),%eax
c1000a32:	83 ec 08             	sub    $0x8,%esp
c1000a35:	50                   	push   %eax
c1000a36:	68 22 9d 00 c1       	push   $0xc1009d22
c1000a3b:	e8 56 3c 00 00       	call   c1004696 <printk>
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
c1000a69:	68 32 9d 00 c1       	push   $0xc1009d32
c1000a6e:	e8 23 3c 00 00       	call   c1004696 <printk>
c1000a73:	83 c4 10             	add    $0x10,%esp
c1000a76:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a79:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1000a7d:	0f b7 c0             	movzwl %ax,%eax
c1000a80:	83 ec 08             	sub    $0x8,%esp
c1000a83:	50                   	push   %eax
c1000a84:	68 46 9d 00 c1       	push   $0xc1009d46
c1000a89:	e8 08 3c 00 00       	call   c1004696 <printk>
c1000a8e:	83 c4 10             	add    $0x10,%esp
c1000a91:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a94:	0f b7 40 24          	movzwl 0x24(%eax),%eax
c1000a98:	0f b7 c0             	movzwl %ax,%eax
c1000a9b:	83 ec 08             	sub    $0x8,%esp
c1000a9e:	50                   	push   %eax
c1000a9f:	68 5a 9d 00 c1       	push   $0xc1009d5a
c1000aa4:	e8 ed 3b 00 00       	call   c1004696 <printk>
c1000aa9:	83 c4 10             	add    $0x10,%esp
c1000aac:	8b 45 08             	mov    0x8(%ebp),%eax
c1000aaf:	0f b7 40 20          	movzwl 0x20(%eax),%eax
c1000ab3:	0f b7 c0             	movzwl %ax,%eax
c1000ab6:	83 ec 08             	sub    $0x8,%esp
c1000ab9:	50                   	push   %eax
c1000aba:	68 6e 9d 00 c1       	push   $0xc1009d6e
c1000abf:	e8 d2 3b 00 00       	call   c1004696 <printk>
c1000ac4:	83 c4 10             	add    $0x10,%esp
c1000ac7:	8b 45 08             	mov    0x8(%ebp),%eax
c1000aca:	8b 40 34             	mov    0x34(%eax),%eax
c1000acd:	83 ec 08             	sub    $0x8,%esp
c1000ad0:	50                   	push   %eax
c1000ad1:	68 82 9d 00 c1       	push   $0xc1009d82
c1000ad6:	e8 bb 3b 00 00       	call   c1004696 <printk>
c1000adb:	83 c4 10             	add    $0x10,%esp
c1000ade:	8b 45 08             	mov    0x8(%ebp),%eax
c1000ae1:	8b 40 38             	mov    0x38(%eax),%eax
c1000ae4:	83 ec 08             	sub    $0x8,%esp
c1000ae7:	50                   	push   %eax
c1000ae8:	68 92 9d 00 c1       	push   $0xc1009d92
c1000aed:	e8 a4 3b 00 00       	call   c1004696 <printk>
c1000af2:	83 c4 10             	add    $0x10,%esp
c1000af5:	8b 45 08             	mov    0x8(%ebp),%eax
c1000af8:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
c1000afc:	0f b7 c0             	movzwl %ax,%eax
c1000aff:	83 ec 08             	sub    $0x8,%esp
c1000b02:	50                   	push   %eax
c1000b03:	68 a2 9d 00 c1       	push   $0xc1009da2
c1000b08:	e8 89 3b 00 00       	call   c1004696 <printk>
c1000b0d:	83 c4 10             	add    $0x10,%esp
c1000b10:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b13:	8b 40 40             	mov    0x40(%eax),%eax
c1000b16:	83 ec 08             	sub    $0x8,%esp
c1000b19:	50                   	push   %eax
c1000b1a:	68 b6 9d 00 c1       	push   $0xc1009db6
c1000b1f:	e8 72 3b 00 00       	call   c1004696 <printk>
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
c1000b62:	68 c6 9d 00 c1       	push   $0xc1009dc6
c1000b67:	e8 2a 3b 00 00       	call   c1004696 <printk>
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
c1000b8e:	68 ca 9d 00 c1       	push   $0xc1009dca
c1000b93:	e8 fe 3a 00 00       	call   c1004696 <printk>
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
c1000bd6:	8b 04 85 08 9e 00 c1 	mov    -0x3eff61f8(,%eax,4),%eax
c1000bdd:	ff e0                	jmp    *%eax
c1000bdf:	83 f8 60             	cmp    $0x60,%eax
c1000be2:	0f 85 cb 00 00 00    	jne    c1000cb3 <trap_dispatch+0x115>
c1000be8:	83 ec 0c             	sub    $0xc,%esp
c1000beb:	68 d3 9d 00 c1       	push   $0xc1009dd3
c1000bf0:	e8 a1 3a 00 00       	call   c1004696 <printk>
c1000bf5:	83 c4 10             	add    $0x10,%esp
c1000bf8:	e9 cf 00 00 00       	jmp    c1000ccc <trap_dispatch+0x12e>
c1000bfd:	83 ec 0c             	sub    $0xc,%esp
c1000c00:	68 e3 9d 00 c1       	push   $0xc1009de3
c1000c05:	e8 8c 3a 00 00       	call   c1004696 <printk>
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
c1000c78:	e8 21 2a 00 00       	call   c100369e <schedule>
c1000c7d:	eb 49                	jmp    c1000cc8 <trap_dispatch+0x12a>
c1000c7f:	e8 e5 3d 00 00       	call   c1004a69 <cons_getc>
c1000c84:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000c87:	eb 43                	jmp    c1000ccc <trap_dispatch+0x12e>
c1000c89:	e8 db 3d 00 00       	call   c1004a69 <cons_getc>
c1000c8e:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000c91:	0f b6 05 ac 0c 01 c1 	movzbl 0xc1010cac,%eax
c1000c98:	84 c0                	test   %al,%al
c1000c9a:	75 2f                	jne    c1000ccb <trap_dispatch+0x12d>
c1000c9c:	83 ec 0c             	sub    $0xc,%esp
c1000c9f:	68 ac 0c 01 c1       	push   $0xc1010cac
c1000ca4:	e8 81 3f 00 00       	call   c1004c2a <sema_up>
c1000ca9:	83 c4 10             	add    $0x10,%esp
c1000cac:	e8 ed 29 00 00       	call   c100369e <schedule>
c1000cb1:	eb 18                	jmp    c1000ccb <trap_dispatch+0x12d>
c1000cb3:	83 ec 0c             	sub    $0xc,%esp
c1000cb6:	68 ea 9d 00 c1       	push   $0xc1009dea
c1000cbb:	e8 d6 39 00 00       	call   c1004696 <printk>
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
c100186b:	e8 6e 1c 00 00       	call   c10034de <do_fork>
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
c10018c8:	e8 e7 1f 00 00       	call   c10038b4 <do_execve>
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
c1001910:	e8 fc 29 00 00       	call   c1004311 <print_char>
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
c1001937:	e8 f2 2a 00 00       	call   c100442e <print_string>
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
c1001990:	e8 d0 2a 00 00       	call   c1004465 <print_num>
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
c10019da:	e8 da 46 00 00       	call   c10060b9 <sys_read>
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
c1001a08:	e8 95 42 00 00       	call   c1005ca2 <sys_open>
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
c1001a26:	e8 3f 45 00 00       	call   c1005f6a <sys_close>
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
c1001a5e:	e8 63 45 00 00       	call   c1005fc6 <sys_write>
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
c1001a9a:	e8 12 47 00 00       	call   c10061b1 <sys_lseek>
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
c1001ab8:	e8 e0 47 00 00       	call   c100629d <sys_unlink>
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
c1001ad6:	e8 e2 49 00 00       	call   c10064bd <sys_mkdir>
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
c1001af4:	e8 7d 4f 00 00       	call   c1006a76 <sys_rmdir>
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
c1001b12:	e8 4f 4f 00 00       	call   c1006a66 <sys_rewinddir>
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
c1001b41:	e8 af 52 00 00       	call   c1006df5 <sys_getcwd>
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
c1001b5f:	e8 aa 55 00 00       	call   c100710e <sys_chdir>
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
c1001b8b:	e8 52 54 00 00       	call   c1006fe2 <sys_stat>
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
c1001ba9:	e8 49 4d 00 00       	call   c10068f7 <sys_opendir>
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
c1001bc7:	e8 38 4e 00 00       	call   c1006a04 <sys_closedir>
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
c1001be5:	e8 47 4e 00 00       	call   c1006a31 <sys_readdir>
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
c1001c85:	e9 67 01 00 00       	jmp    c1001df1 <kbd_proc_data+0x18b>
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
c1001cb2:	e9 3a 01 00 00       	jmp    c1001df1 <kbd_proc_data+0x18b>
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
c1001d01:	e9 eb 00 00 00       	jmp    c1001df1 <kbd_proc_data+0x18b>
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
c1001da3:	83 7d f4 08          	cmpl   $0x8,-0xc(%ebp)
c1001da7:	75 0c                	jne    c1001db5 <kbd_proc_data+0x14f>
c1001da9:	e8 36 28 00 00       	call   c10045e4 <backtrace>
c1001dae:	b8 00 00 00 00       	mov    $0x0,%eax
c1001db3:	eb 3c                	jmp    c1001df1 <kbd_proc_data+0x18b>
c1001db5:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001dba:	f7 d0                	not    %eax
c1001dbc:	83 e0 06             	and    $0x6,%eax
c1001dbf:	85 c0                	test   %eax,%eax
c1001dc1:	75 2b                	jne    c1001dee <kbd_proc_data+0x188>
c1001dc3:	81 7d f4 e9 00 00 00 	cmpl   $0xe9,-0xc(%ebp)
c1001dca:	75 22                	jne    c1001dee <kbd_proc_data+0x188>
c1001dcc:	83 ec 0c             	sub    $0xc,%esp
c1001dcf:	68 90 9e 00 c1       	push   $0xc1009e90
c1001dd4:	e8 bd 28 00 00       	call   c1004696 <printk>
c1001dd9:	83 c4 10             	add    $0x10,%esp
c1001ddc:	83 ec 08             	sub    $0x8,%esp
c1001ddf:	6a 03                	push   $0x3
c1001de1:	68 92 00 00 00       	push   $0x92
c1001de6:	e8 51 e2 ff ff       	call   c100003c <outb>
c1001deb:	83 c4 10             	add    $0x10,%esp
c1001dee:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001df1:	c9                   	leave  
c1001df2:	c3                   	ret    

c1001df3 <kbd_intr>:
c1001df3:	55                   	push   %ebp
c1001df4:	89 e5                	mov    %esp,%ebp
c1001df6:	83 ec 08             	sub    $0x8,%esp
c1001df9:	83 ec 0c             	sub    $0xc,%esp
c1001dfc:	68 66 1c 00 c1       	push   $0xc1001c66
c1001e01:	e8 2d 22 00 00       	call   c1004033 <cons_intr>
c1001e06:	83 c4 10             	add    $0x10,%esp
c1001e09:	90                   	nop
c1001e0a:	c9                   	leave  
c1001e0b:	c3                   	ret    

c1001e0c <kbd_init>:
c1001e0c:	55                   	push   %ebp
c1001e0d:	89 e5                	mov    %esp,%ebp
c1001e0f:	83 ec 18             	sub    $0x18,%esp
c1001e12:	c7 05 20 32 a1 c1 00 	movl   $0x0,0xc1a13220
c1001e19:	00 00 00 
c1001e1c:	c7 05 24 32 a1 c1 00 	movl   $0x0,0xc1a13224
c1001e23:	00 00 00 
c1001e26:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1001e2d:	eb 0f                	jmp    c1001e3e <kbd_init+0x32>
c1001e2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001e32:	05 20 30 a1 c1       	add    $0xc1a13020,%eax
c1001e37:	c6 00 00             	movb   $0x0,(%eax)
c1001e3a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1001e3e:	81 7d f4 ff 01 00 00 	cmpl   $0x1ff,-0xc(%ebp)
c1001e45:	7e e8                	jle    c1001e2f <kbd_init+0x23>
c1001e47:	c6 05 6c ec 00 c1 00 	movb   $0x0,0xc100ec6c
c1001e4e:	c7 05 68 ec 00 c1 00 	movl   $0x0,0xc100ec68
c1001e55:	00 00 00 
c1001e58:	e8 96 ff ff ff       	call   c1001df3 <kbd_intr>
c1001e5d:	83 ec 0c             	sub    $0xc,%esp
c1001e60:	6a 01                	push   $0x1
c1001e62:	e8 8b 1e 00 00       	call   c1003cf2 <pic_enable>
c1001e67:	83 c4 10             	add    $0x10,%esp
c1001e6a:	90                   	nop
c1001e6b:	c9                   	leave  
c1001e6c:	c3                   	ret    

c1001e6d <hash32>:
c1001e6d:	55                   	push   %ebp
c1001e6e:	89 e5                	mov    %esp,%ebp
c1001e70:	83 ec 10             	sub    $0x10,%esp
c1001e73:	8b 45 08             	mov    0x8(%ebp),%eax
c1001e76:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1001e7c:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1001e7f:	b8 20 00 00 00       	mov    $0x20,%eax
c1001e84:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001e87:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001e8a:	89 c1                	mov    %eax,%ecx
c1001e8c:	d3 ea                	shr    %cl,%edx
c1001e8e:	89 d0                	mov    %edx,%eax
c1001e90:	c9                   	leave  
c1001e91:	c3                   	ret    

c1001e92 <main>:
c1001e92:	8d 4c 24 04          	lea    0x4(%esp),%ecx
c1001e96:	83 e4 f0             	and    $0xfffffff0,%esp
c1001e99:	ff 71 fc             	pushl  -0x4(%ecx)
c1001e9c:	55                   	push   %ebp
c1001e9d:	89 e5                	mov    %esp,%ebp
c1001e9f:	51                   	push   %ecx
c1001ea0:	83 ec 04             	sub    $0x4,%esp
c1001ea3:	e8 f1 23 00 00       	call   c1004299 <clear>
c1001ea8:	83 ec 0c             	sub    $0xc,%esp
c1001eab:	68 9c 9e 00 c1       	push   $0xc1009e9c
c1001eb0:	e8 e1 27 00 00       	call   c1004696 <printk>
c1001eb5:	83 c4 10             	add    $0x10,%esp
c1001eb8:	e8 b7 e7 ff ff       	call   c1000674 <gdt_init>
c1001ebd:	e8 63 1e 00 00       	call   c1003d25 <pic_init>
c1001ec2:	e8 a1 e8 ff ff       	call   c1000768 <idt_init>
c1001ec7:	e8 21 ee ff ff       	call   c1000ced <enable_interupt>
c1001ecc:	e8 bd 1f 00 00       	call   c1003e8e <serial_init>
c1001ed1:	e8 36 ff ff ff       	call   c1001e0c <kbd_init>
c1001ed6:	e8 dd 09 00 00       	call   c10028b8 <setup_vpt>
c1001edb:	e8 15 04 00 00       	call   c10022f5 <pmm_init>
c1001ee0:	e8 5a 00 00 00       	call   c1001f3f <test_pmm>
c1001ee5:	e8 3e 01 00 00       	call   c1002028 <test_vmm>
c1001eea:	e8 ac 52 00 00       	call   c100719b <fs_init>
c1001eef:	83 ec 0c             	sub    $0xc,%esp
c1001ef2:	68 3a 1f 00 c1       	push   $0xc1001f3a
c1001ef7:	e8 1b 0e 00 00       	call   c1002d17 <kernel_task_init>
c1001efc:	83 c4 10             	add    $0x10,%esp
c1001eff:	e8 95 23 00 00       	call   c1004299 <clear>
c1001f04:	83 ec 0c             	sub    $0xc,%esp
c1001f07:	6a 64                	push   $0x64
c1001f09:	e8 88 22 00 00       	call   c1004196 <timer_init>
c1001f0e:	83 c4 10             	add    $0x10,%esp
c1001f11:	83 ec 08             	sub    $0x8,%esp
c1001f14:	6a 00                	push   $0x0
c1001f16:	68 ac 0c 01 c1       	push   $0xc1010cac
c1001f1b:	e8 ca 2b 00 00       	call   c1004aea <sema_init>
c1001f20:	83 c4 10             	add    $0x10,%esp
c1001f23:	e8 e9 ed ff ff       	call   c1000d11 <intr_enable>
c1001f28:	83 ec 0c             	sub    $0xc,%esp
c1001f2b:	68 2f 00 00 40       	push   $0x4000002f
c1001f30:	e8 99 1a 00 00       	call   c10039ce <user_task_init>
c1001f35:	83 c4 10             	add    $0x10,%esp
c1001f38:	eb fe                	jmp    c1001f38 <main+0xa6>

c1001f3a <kernel_main>:
c1001f3a:	55                   	push   %ebp
c1001f3b:	89 e5                	mov    %esp,%ebp
c1001f3d:	eb fe                	jmp    c1001f3d <kernel_main+0x3>

c1001f3f <test_pmm>:
c1001f3f:	55                   	push   %ebp
c1001f40:	89 e5                	mov    %esp,%ebp
c1001f42:	83 ec 18             	sub    $0x18,%esp
c1001f45:	83 ec 08             	sub    $0x8,%esp
c1001f48:	6a 01                	push   $0x1
c1001f4a:	68 00 02 00 00       	push   $0x200
c1001f4f:	e8 c1 07 00 00       	call   c1002715 <pmm_alloc>
c1001f54:	83 c4 10             	add    $0x10,%esp
c1001f57:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001f5a:	83 ec 08             	sub    $0x8,%esp
c1001f5d:	6a 00                	push   $0x0
c1001f5f:	68 00 20 00 00       	push   $0x2000
c1001f64:	e8 ac 07 00 00       	call   c1002715 <pmm_alloc>
c1001f69:	83 c4 10             	add    $0x10,%esp
c1001f6c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001f6f:	83 ec 08             	sub    $0x8,%esp
c1001f72:	6a 02                	push   $0x2
c1001f74:	68 00 30 00 00       	push   $0x3000
c1001f79:	e8 97 07 00 00       	call   c1002715 <pmm_alloc>
c1001f7e:	83 c4 10             	add    $0x10,%esp
c1001f81:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001f84:	83 ec 08             	sub    $0x8,%esp
c1001f87:	ff 75 f0             	pushl  -0x10(%ebp)
c1001f8a:	68 b2 9e 00 c1       	push   $0xc1009eb2
c1001f8f:	e8 02 27 00 00       	call   c1004696 <printk>
c1001f94:	83 c4 10             	add    $0x10,%esp
c1001f97:	83 ec 08             	sub    $0x8,%esp
c1001f9a:	ff 75 f4             	pushl  -0xc(%ebp)
c1001f9d:	68 c8 9e 00 c1       	push   $0xc1009ec8
c1001fa2:	e8 ef 26 00 00       	call   c1004696 <printk>
c1001fa7:	83 c4 10             	add    $0x10,%esp
c1001faa:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c1001fb0:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c1001fb6:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c1001fbb:	51                   	push   %ecx
c1001fbc:	52                   	push   %edx
c1001fbd:	50                   	push   %eax
c1001fbe:	68 e4 9e 00 c1       	push   $0xc1009ee4
c1001fc3:	e8 ce 26 00 00       	call   c1004696 <printk>
c1001fc8:	83 c4 10             	add    $0x10,%esp
c1001fcb:	83 ec 08             	sub    $0x8,%esp
c1001fce:	68 00 02 00 00       	push   $0x200
c1001fd3:	ff 75 f4             	pushl  -0xc(%ebp)
c1001fd6:	e8 36 08 00 00       	call   c1002811 <pmm_free>
c1001fdb:	83 c4 10             	add    $0x10,%esp
c1001fde:	83 ec 08             	sub    $0x8,%esp
c1001fe1:	68 00 20 00 00       	push   $0x2000
c1001fe6:	ff 75 f0             	pushl  -0x10(%ebp)
c1001fe9:	e8 23 08 00 00       	call   c1002811 <pmm_free>
c1001fee:	83 c4 10             	add    $0x10,%esp
c1001ff1:	83 ec 08             	sub    $0x8,%esp
c1001ff4:	68 00 30 00 00       	push   $0x3000
c1001ff9:	ff 75 ec             	pushl  -0x14(%ebp)
c1001ffc:	e8 10 08 00 00       	call   c1002811 <pmm_free>
c1002001:	83 c4 10             	add    $0x10,%esp
c1002004:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c100200a:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c1002010:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c1002015:	51                   	push   %ecx
c1002016:	52                   	push   %edx
c1002017:	50                   	push   %eax
c1002018:	68 e4 9e 00 c1       	push   $0xc1009ee4
c100201d:	e8 74 26 00 00       	call   c1004696 <printk>
c1002022:	83 c4 10             	add    $0x10,%esp
c1002025:	90                   	nop
c1002026:	c9                   	leave  
c1002027:	c3                   	ret    

c1002028 <test_vmm>:
c1002028:	55                   	push   %ebp
c1002029:	89 e5                	mov    %esp,%ebp
c100202b:	83 ec 38             	sub    $0x38,%esp
c100202e:	83 ec 0c             	sub    $0xc,%esp
c1002031:	68 2b 9f 00 c1       	push   $0xc1009f2b
c1002036:	e8 5b 26 00 00       	call   c1004696 <printk>
c100203b:	83 c4 10             	add    $0x10,%esp
c100203e:	83 ec 08             	sub    $0x8,%esp
c1002041:	6a 00                	push   $0x0
c1002043:	68 00 01 00 00       	push   $0x100
c1002048:	e8 43 09 00 00       	call   c1002990 <vmm_malloc>
c100204d:	83 c4 10             	add    $0x10,%esp
c1002050:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002053:	83 ec 08             	sub    $0x8,%esp
c1002056:	6a 01                	push   $0x1
c1002058:	68 00 20 00 00       	push   $0x2000
c100205d:	e8 2e 09 00 00       	call   c1002990 <vmm_malloc>
c1002062:	83 c4 10             	add    $0x10,%esp
c1002065:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002068:	83 ec 08             	sub    $0x8,%esp
c100206b:	6a 02                	push   $0x2
c100206d:	68 00 30 00 00       	push   $0x3000
c1002072:	e8 19 09 00 00       	call   c1002990 <vmm_malloc>
c1002077:	83 c4 10             	add    $0x10,%esp
c100207a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100207d:	83 ec 08             	sub    $0x8,%esp
c1002080:	ff 75 f4             	pushl  -0xc(%ebp)
c1002083:	68 b2 9e 00 c1       	push   $0xc1009eb2
c1002088:	e8 09 26 00 00       	call   c1004696 <printk>
c100208d:	83 c4 10             	add    $0x10,%esp
c1002090:	83 ec 08             	sub    $0x8,%esp
c1002093:	ff 75 f0             	pushl  -0x10(%ebp)
c1002096:	68 c8 9e 00 c1       	push   $0xc1009ec8
c100209b:	e8 f6 25 00 00       	call   c1004696 <printk>
c10020a0:	83 c4 10             	add    $0x10,%esp
c10020a3:	83 ec 08             	sub    $0x8,%esp
c10020a6:	ff 75 ec             	pushl  -0x14(%ebp)
c10020a9:	68 42 9f 00 c1       	push   $0xc1009f42
c10020ae:	e8 e3 25 00 00       	call   c1004696 <printk>
c10020b3:	83 c4 10             	add    $0x10,%esp
c10020b6:	83 ec 0c             	sub    $0xc,%esp
c10020b9:	68 5d 9f 00 c1       	push   $0xc1009f5d
c10020be:	e8 d3 25 00 00       	call   c1004696 <printk>
c10020c3:	83 c4 10             	add    $0x10,%esp
c10020c6:	83 ec 08             	sub    $0x8,%esp
c10020c9:	6a 00                	push   $0x0
c10020cb:	68 00 01 00 00       	push   $0x100
c10020d0:	e8 bb 08 00 00       	call   c1002990 <vmm_malloc>
c10020d5:	83 c4 10             	add    $0x10,%esp
c10020d8:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10020db:	83 ec 08             	sub    $0x8,%esp
c10020de:	6a 01                	push   $0x1
c10020e0:	68 00 20 00 00       	push   $0x2000
c10020e5:	e8 a6 08 00 00       	call   c1002990 <vmm_malloc>
c10020ea:	83 c4 10             	add    $0x10,%esp
c10020ed:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10020f0:	83 ec 08             	sub    $0x8,%esp
c10020f3:	6a 02                	push   $0x2
c10020f5:	68 00 30 00 00       	push   $0x3000
c10020fa:	e8 91 08 00 00       	call   c1002990 <vmm_malloc>
c10020ff:	83 c4 10             	add    $0x10,%esp
c1002102:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002105:	83 ec 08             	sub    $0x8,%esp
c1002108:	ff 75 e8             	pushl  -0x18(%ebp)
c100210b:	68 b2 9e 00 c1       	push   $0xc1009eb2
c1002110:	e8 81 25 00 00       	call   c1004696 <printk>
c1002115:	83 c4 10             	add    $0x10,%esp
c1002118:	83 ec 08             	sub    $0x8,%esp
c100211b:	ff 75 e4             	pushl  -0x1c(%ebp)
c100211e:	68 c8 9e 00 c1       	push   $0xc1009ec8
c1002123:	e8 6e 25 00 00       	call   c1004696 <printk>
c1002128:	83 c4 10             	add    $0x10,%esp
c100212b:	83 ec 08             	sub    $0x8,%esp
c100212e:	ff 75 e0             	pushl  -0x20(%ebp)
c1002131:	68 42 9f 00 c1       	push   $0xc1009f42
c1002136:	e8 5b 25 00 00       	call   c1004696 <printk>
c100213b:	83 c4 10             	add    $0x10,%esp
c100213e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002141:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1002144:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002147:	c6 00 ff             	movb   $0xff,(%eax)
c100214a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100214d:	0f b6 00             	movzbl (%eax),%eax
c1002150:	0f b6 c0             	movzbl %al,%eax
c1002153:	83 ec 08             	sub    $0x8,%esp
c1002156:	50                   	push   %eax
c1002157:	68 74 9f 00 c1       	push   $0xc1009f74
c100215c:	e8 35 25 00 00       	call   c1004696 <printk>
c1002161:	83 c4 10             	add    $0x10,%esp
c1002164:	83 ec 08             	sub    $0x8,%esp
c1002167:	68 00 01 00 00       	push   $0x100
c100216c:	ff 75 f4             	pushl  -0xc(%ebp)
c100216f:	e8 41 09 00 00       	call   c1002ab5 <vmm_free>
c1002174:	83 c4 10             	add    $0x10,%esp
c1002177:	83 ec 08             	sub    $0x8,%esp
c100217a:	68 00 20 00 00       	push   $0x2000
c100217f:	ff 75 f0             	pushl  -0x10(%ebp)
c1002182:	e8 2e 09 00 00       	call   c1002ab5 <vmm_free>
c1002187:	83 c4 10             	add    $0x10,%esp
c100218a:	83 ec 08             	sub    $0x8,%esp
c100218d:	68 00 30 00 00       	push   $0x3000
c1002192:	ff 75 ec             	pushl  -0x14(%ebp)
c1002195:	e8 1b 09 00 00       	call   c1002ab5 <vmm_free>
c100219a:	83 c4 10             	add    $0x10,%esp
c100219d:	83 ec 08             	sub    $0x8,%esp
c10021a0:	6a 00                	push   $0x0
c10021a2:	68 00 01 00 00       	push   $0x100
c10021a7:	e8 e4 07 00 00       	call   c1002990 <vmm_malloc>
c10021ac:	83 c4 10             	add    $0x10,%esp
c10021af:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10021b2:	83 ec 08             	sub    $0x8,%esp
c10021b5:	6a 01                	push   $0x1
c10021b7:	68 00 20 00 00       	push   $0x2000
c10021bc:	e8 cf 07 00 00       	call   c1002990 <vmm_malloc>
c10021c1:	83 c4 10             	add    $0x10,%esp
c10021c4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10021c7:	83 ec 08             	sub    $0x8,%esp
c10021ca:	6a 02                	push   $0x2
c10021cc:	68 00 30 00 00       	push   $0x3000
c10021d1:	e8 ba 07 00 00       	call   c1002990 <vmm_malloc>
c10021d6:	83 c4 10             	add    $0x10,%esp
c10021d9:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10021dc:	83 ec 08             	sub    $0x8,%esp
c10021df:	ff 75 d8             	pushl  -0x28(%ebp)
c10021e2:	68 b2 9e 00 c1       	push   $0xc1009eb2
c10021e7:	e8 aa 24 00 00       	call   c1004696 <printk>
c10021ec:	83 c4 10             	add    $0x10,%esp
c10021ef:	83 ec 08             	sub    $0x8,%esp
c10021f2:	ff 75 d4             	pushl  -0x2c(%ebp)
c10021f5:	68 c8 9e 00 c1       	push   $0xc1009ec8
c10021fa:	e8 97 24 00 00       	call   c1004696 <printk>
c10021ff:	83 c4 10             	add    $0x10,%esp
c1002202:	83 ec 08             	sub    $0x8,%esp
c1002205:	ff 75 d0             	pushl  -0x30(%ebp)
c1002208:	68 42 9f 00 c1       	push   $0xc1009f42
c100220d:	e8 84 24 00 00       	call   c1004696 <printk>
c1002212:	83 c4 10             	add    $0x10,%esp
c1002215:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1002218:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100221b:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100221e:	c6 00 ff             	movb   $0xff,(%eax)
c1002221:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1002224:	0f b6 00             	movzbl (%eax),%eax
c1002227:	0f b6 c0             	movzbl %al,%eax
c100222a:	83 ec 08             	sub    $0x8,%esp
c100222d:	50                   	push   %eax
c100222e:	68 80 9f 00 c1       	push   $0xc1009f80
c1002233:	e8 5e 24 00 00       	call   c1004696 <printk>
c1002238:	83 c4 10             	add    $0x10,%esp
c100223b:	90                   	nop
c100223c:	c9                   	leave  
c100223d:	c3                   	ret    

c100223e <test_schedule>:
c100223e:	55                   	push   %ebp
c100223f:	89 e5                	mov    %esp,%ebp
c1002241:	83 ec 08             	sub    $0x8,%esp
c1002244:	e8 c8 ea ff ff       	call   c1000d11 <intr_enable>
c1002249:	eb fe                	jmp    c1002249 <test_schedule+0xb>

c100224b <print_task1>:
c100224b:	55                   	push   %ebp
c100224c:	89 e5                	mov    %esp,%ebp
c100224e:	83 ec 18             	sub    $0x18,%esp
c1002251:	8b 45 08             	mov    0x8(%ebp),%eax
c1002254:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002257:	83 ec 08             	sub    $0x8,%esp
c100225a:	ff 75 f4             	pushl  -0xc(%ebp)
c100225d:	68 8c 9f 00 c1       	push   $0xc1009f8c
c1002262:	e8 2f 24 00 00       	call   c1004696 <printk>
c1002267:	83 c4 10             	add    $0x10,%esp
c100226a:	83 ec 0c             	sub    $0xc,%esp
c100226d:	68 40 42 0f 00       	push   $0xf4240
c1002272:	e8 36 00 00 00       	call   c10022ad <delay>
c1002277:	83 c4 10             	add    $0x10,%esp
c100227a:	eb db                	jmp    c1002257 <print_task1+0xc>

c100227c <print_task2>:
c100227c:	55                   	push   %ebp
c100227d:	89 e5                	mov    %esp,%ebp
c100227f:	83 ec 18             	sub    $0x18,%esp
c1002282:	8b 45 08             	mov    0x8(%ebp),%eax
c1002285:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002288:	83 ec 08             	sub    $0x8,%esp
c100228b:	ff 75 f4             	pushl  -0xc(%ebp)
c100228e:	68 8c 9f 00 c1       	push   $0xc1009f8c
c1002293:	e8 fe 23 00 00       	call   c1004696 <printk>
c1002298:	83 c4 10             	add    $0x10,%esp
c100229b:	83 ec 0c             	sub    $0xc,%esp
c100229e:	68 40 42 0f 00       	push   $0xf4240
c10022a3:	e8 05 00 00 00       	call   c10022ad <delay>
c10022a8:	83 c4 10             	add    $0x10,%esp
c10022ab:	eb db                	jmp    c1002288 <print_task2+0xc>

c10022ad <delay>:
c10022ad:	55                   	push   %ebp
c10022ae:	89 e5                	mov    %esp,%ebp
c10022b0:	83 ec 10             	sub    $0x10,%esp
c10022b3:	8b 45 08             	mov    0x8(%ebp),%eax
c10022b6:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10022b9:	eb 17                	jmp    c10022d2 <delay+0x25>
c10022bb:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c10022c2:	eb 04                	jmp    c10022c8 <delay+0x1b>
c10022c4:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c10022c8:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c10022cc:	75 f6                	jne    c10022c4 <delay+0x17>
c10022ce:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c10022d2:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c10022d6:	75 e3                	jne    c10022bb <delay+0xe>
c10022d8:	90                   	nop
c10022d9:	90                   	nop
c10022da:	c9                   	leave  
c10022db:	c3                   	ret    

c10022dc <test_user>:
c10022dc:	55                   	push   %ebp
c10022dd:	89 e5                	mov    %esp,%ebp
c10022df:	83 ec 08             	sub    $0x8,%esp
c10022e2:	83 ec 0c             	sub    $0xc,%esp
c10022e5:	68 2f 00 00 40       	push   $0x4000002f
c10022ea:	e8 df 16 00 00       	call   c10039ce <user_task_init>
c10022ef:	83 c4 10             	add    $0x10,%esp
c10022f2:	90                   	nop
c10022f3:	c9                   	leave  
c10022f4:	c3                   	ret    

c10022f5 <pmm_init>:
c10022f5:	55                   	push   %ebp
c10022f6:	89 e5                	mov    %esp,%ebp
c10022f8:	83 ec 38             	sub    $0x38,%esp
c10022fb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002302:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002309:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002310:	c7 45 d4 04 80 00 c0 	movl   $0xc0008004,-0x2c(%ebp)
c1002317:	b8 00 80 00 c0       	mov    $0xc0008000,%eax
c100231c:	8b 00                	mov    (%eax),%eax
c100231e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002321:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002328:	e9 98 02 00 00       	jmp    c10025c5 <pmm_init+0x2d0>
c100232d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002330:	89 d0                	mov    %edx,%eax
c1002332:	c1 e0 02             	shl    $0x2,%eax
c1002335:	01 d0                	add    %edx,%eax
c1002337:	c1 e0 02             	shl    $0x2,%eax
c100233a:	89 c2                	mov    %eax,%edx
c100233c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100233f:	01 d0                	add    %edx,%eax
c1002341:	8b 50 04             	mov    0x4(%eax),%edx
c1002344:	8b 00                	mov    (%eax),%eax
c1002346:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002349:	e9 40 02 00 00       	jmp    c100258e <pmm_init+0x299>
c100234e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002351:	85 c0                	test   %eax,%eax
c1002353:	0f 88 2e 02 00 00    	js     c1002587 <pmm_init+0x292>
c1002359:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100235c:	89 d0                	mov    %edx,%eax
c100235e:	c1 e0 02             	shl    $0x2,%eax
c1002361:	01 d0                	add    %edx,%eax
c1002363:	c1 e0 02             	shl    $0x2,%eax
c1002366:	89 c2                	mov    %eax,%edx
c1002368:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100236b:	01 d0                	add    %edx,%eax
c100236d:	8b 40 10             	mov    0x10(%eax),%eax
c1002370:	83 f8 01             	cmp    $0x1,%eax
c1002373:	75 59                	jne    c10023ce <pmm_init+0xd9>
c1002375:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002378:	c1 e8 0c             	shr    $0xc,%eax
c100237b:	89 c2                	mov    %eax,%edx
c100237d:	89 d0                	mov    %edx,%eax
c100237f:	01 c0                	add    %eax,%eax
c1002381:	01 d0                	add    %edx,%eax
c1002383:	c1 e0 02             	shl    $0x2,%eax
c1002386:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c100238b:	c6 00 00             	movb   $0x0,(%eax)
c100238e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002391:	c1 e8 0c             	shr    $0xc,%eax
c1002394:	89 c2                	mov    %eax,%edx
c1002396:	89 d0                	mov    %edx,%eax
c1002398:	01 c0                	add    %eax,%eax
c100239a:	01 d0                	add    %edx,%eax
c100239c:	c1 e0 02             	shl    $0x2,%eax
c100239f:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c10023a4:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c10023aa:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10023ad:	c1 e8 0c             	shr    $0xc,%eax
c10023b0:	89 c2                	mov    %eax,%edx
c10023b2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10023b5:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10023ba:	89 c1                	mov    %eax,%ecx
c10023bc:	89 d0                	mov    %edx,%eax
c10023be:	01 c0                	add    %eax,%eax
c10023c0:	01 d0                	add    %edx,%eax
c10023c2:	c1 e0 02             	shl    $0x2,%eax
c10023c5:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c10023ca:	89 08                	mov    %ecx,(%eax)
c10023cc:	eb 57                	jmp    c1002425 <pmm_init+0x130>
c10023ce:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10023d1:	c1 e8 0c             	shr    $0xc,%eax
c10023d4:	89 c2                	mov    %eax,%edx
c10023d6:	89 d0                	mov    %edx,%eax
c10023d8:	01 c0                	add    %eax,%eax
c10023da:	01 d0                	add    %edx,%eax
c10023dc:	c1 e0 02             	shl    $0x2,%eax
c10023df:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10023e4:	c6 00 08             	movb   $0x8,(%eax)
c10023e7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10023ea:	c1 e8 0c             	shr    $0xc,%eax
c10023ed:	89 c2                	mov    %eax,%edx
c10023ef:	89 d0                	mov    %edx,%eax
c10023f1:	01 c0                	add    %eax,%eax
c10023f3:	01 d0                	add    %edx,%eax
c10023f5:	c1 e0 02             	shl    $0x2,%eax
c10023f8:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c10023fd:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1002403:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002406:	c1 e8 0c             	shr    $0xc,%eax
c1002409:	89 c2                	mov    %eax,%edx
c100240b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100240e:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002413:	89 c1                	mov    %eax,%ecx
c1002415:	89 d0                	mov    %edx,%eax
c1002417:	01 c0                	add    %eax,%eax
c1002419:	01 d0                	add    %edx,%eax
c100241b:	c1 e0 02             	shl    $0x2,%eax
c100241e:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c1002423:	89 08                	mov    %ecx,(%eax)
c1002425:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002428:	c1 e8 0c             	shr    $0xc,%eax
c100242b:	89 c2                	mov    %eax,%edx
c100242d:	89 d0                	mov    %edx,%eax
c100242f:	01 c0                	add    %eax,%eax
c1002431:	01 d0                	add    %edx,%eax
c1002433:	c1 e0 02             	shl    $0x2,%eax
c1002436:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c100243b:	8b 00                	mov    (%eax),%eax
c100243d:	3d ff ff ff 00       	cmp    $0xffffff,%eax
c1002442:	77 62                	ja     c10024a6 <pmm_init+0x1b1>
c1002444:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002447:	c1 e8 0c             	shr    $0xc,%eax
c100244a:	89 c1                	mov    %eax,%ecx
c100244c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100244f:	c1 e8 0c             	shr    $0xc,%eax
c1002452:	89 c2                	mov    %eax,%edx
c1002454:	89 c8                	mov    %ecx,%eax
c1002456:	01 c0                	add    %eax,%eax
c1002458:	01 c8                	add    %ecx,%eax
c100245a:	c1 e0 02             	shl    $0x2,%eax
c100245d:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002462:	0f b6 08             	movzbl (%eax),%ecx
c1002465:	89 d0                	mov    %edx,%eax
c1002467:	01 c0                	add    %eax,%eax
c1002469:	01 d0                	add    %edx,%eax
c100246b:	c1 e0 02             	shl    $0x2,%eax
c100246e:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002473:	88 08                	mov    %cl,(%eax)
c1002475:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002478:	c1 e8 0c             	shr    $0xc,%eax
c100247b:	89 c2                	mov    %eax,%edx
c100247d:	89 d0                	mov    %edx,%eax
c100247f:	01 c0                	add    %eax,%eax
c1002481:	01 d0                	add    %edx,%eax
c1002483:	c1 e0 02             	shl    $0x2,%eax
c1002486:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c100248b:	8b 00                	mov    (%eax),%eax
c100248d:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002490:	75 07                	jne    c1002499 <pmm_init+0x1a4>
c1002492:	b8 01 00 00 00       	mov    $0x1,%eax
c1002497:	eb 05                	jmp    c100249e <pmm_init+0x1a9>
c1002499:	b8 00 00 00 00       	mov    $0x0,%eax
c100249e:	01 45 f4             	add    %eax,-0xc(%ebp)
c10024a1:	e9 e1 00 00 00       	jmp    c1002587 <pmm_init+0x292>
c10024a6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024a9:	c1 e8 0c             	shr    $0xc,%eax
c10024ac:	89 c2                	mov    %eax,%edx
c10024ae:	89 d0                	mov    %edx,%eax
c10024b0:	01 c0                	add    %eax,%eax
c10024b2:	01 d0                	add    %edx,%eax
c10024b4:	c1 e0 02             	shl    $0x2,%eax
c10024b7:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c10024bc:	8b 00                	mov    (%eax),%eax
c10024be:	3d ff ff ff 37       	cmp    $0x37ffffff,%eax
c10024c3:	77 62                	ja     c1002527 <pmm_init+0x232>
c10024c5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024c8:	c1 e8 0c             	shr    $0xc,%eax
c10024cb:	89 c2                	mov    %eax,%edx
c10024cd:	89 d0                	mov    %edx,%eax
c10024cf:	01 c0                	add    %eax,%eax
c10024d1:	01 d0                	add    %edx,%eax
c10024d3:	c1 e0 02             	shl    $0x2,%eax
c10024d6:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10024db:	0f b6 08             	movzbl (%eax),%ecx
c10024de:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024e1:	c1 e8 0c             	shr    $0xc,%eax
c10024e4:	89 c2                	mov    %eax,%edx
c10024e6:	83 c9 10             	or     $0x10,%ecx
c10024e9:	89 d0                	mov    %edx,%eax
c10024eb:	01 c0                	add    %eax,%eax
c10024ed:	01 d0                	add    %edx,%eax
c10024ef:	c1 e0 02             	shl    $0x2,%eax
c10024f2:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10024f7:	88 08                	mov    %cl,(%eax)
c10024f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024fc:	c1 e8 0c             	shr    $0xc,%eax
c10024ff:	89 c2                	mov    %eax,%edx
c1002501:	89 d0                	mov    %edx,%eax
c1002503:	01 c0                	add    %eax,%eax
c1002505:	01 d0                	add    %edx,%eax
c1002507:	c1 e0 02             	shl    $0x2,%eax
c100250a:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c100250f:	8b 00                	mov    (%eax),%eax
c1002511:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002514:	75 07                	jne    c100251d <pmm_init+0x228>
c1002516:	b8 01 00 00 00       	mov    $0x1,%eax
c100251b:	eb 05                	jmp    c1002522 <pmm_init+0x22d>
c100251d:	b8 00 00 00 00       	mov    $0x0,%eax
c1002522:	01 45 f0             	add    %eax,-0x10(%ebp)
c1002525:	eb 60                	jmp    c1002587 <pmm_init+0x292>
c1002527:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100252a:	c1 e8 0c             	shr    $0xc,%eax
c100252d:	89 c2                	mov    %eax,%edx
c100252f:	89 d0                	mov    %edx,%eax
c1002531:	01 c0                	add    %eax,%eax
c1002533:	01 d0                	add    %edx,%eax
c1002535:	c1 e0 02             	shl    $0x2,%eax
c1002538:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c100253d:	0f b6 08             	movzbl (%eax),%ecx
c1002540:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002543:	c1 e8 0c             	shr    $0xc,%eax
c1002546:	89 c2                	mov    %eax,%edx
c1002548:	83 c9 20             	or     $0x20,%ecx
c100254b:	89 d0                	mov    %edx,%eax
c100254d:	01 c0                	add    %eax,%eax
c100254f:	01 d0                	add    %edx,%eax
c1002551:	c1 e0 02             	shl    $0x2,%eax
c1002554:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002559:	88 08                	mov    %cl,(%eax)
c100255b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100255e:	c1 e8 0c             	shr    $0xc,%eax
c1002561:	89 c2                	mov    %eax,%edx
c1002563:	89 d0                	mov    %edx,%eax
c1002565:	01 c0                	add    %eax,%eax
c1002567:	01 d0                	add    %edx,%eax
c1002569:	c1 e0 02             	shl    $0x2,%eax
c100256c:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c1002571:	8b 00                	mov    (%eax),%eax
c1002573:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002576:	75 07                	jne    c100257f <pmm_init+0x28a>
c1002578:	b8 01 00 00 00       	mov    $0x1,%eax
c100257d:	eb 05                	jmp    c1002584 <pmm_init+0x28f>
c100257f:	b8 00 00 00 00       	mov    $0x0,%eax
c1002584:	01 45 ec             	add    %eax,-0x14(%ebp)
c1002587:	81 45 e0 00 10 00 00 	addl   $0x1000,-0x20(%ebp)
c100258e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002591:	89 d0                	mov    %edx,%eax
c1002593:	c1 e0 02             	shl    $0x2,%eax
c1002596:	01 d0                	add    %edx,%eax
c1002598:	c1 e0 02             	shl    $0x2,%eax
c100259b:	89 c2                	mov    %eax,%edx
c100259d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10025a0:	01 d0                	add    %edx,%eax
c10025a2:	8b 50 0c             	mov    0xc(%eax),%edx
c10025a5:	8b 40 08             	mov    0x8(%eax),%eax
c10025a8:	89 c2                	mov    %eax,%edx
c10025aa:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025ad:	01 d0                	add    %edx,%eax
c10025af:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10025b4:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c10025b7:	0f 82 91 fd ff ff    	jb     c100234e <pmm_init+0x59>
c10025bd:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c10025c1:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c10025c5:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c10025c9:	0f 85 5e fd ff ff    	jne    c100232d <pmm_init+0x38>
c10025cf:	c7 05 f0 0c 61 c1 00 	movl   $0x1000,0xc1610cf0
c10025d6:	10 00 00 
c10025d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10025dc:	a3 f4 0c 61 c1       	mov    %eax,0xc1610cf4
c10025e1:	c7 05 ec 0c 61 c1 e0 	movl   $0xc1010ce0,0xc1610cec
c10025e8:	0c 01 c1 
c10025eb:	c7 05 e4 0c 61 c1 00 	movl   $0x37000,0xc1610ce4
c10025f2:	70 03 00 
c10025f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10025f8:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c10025fd:	8b 15 f0 0c 61 c1    	mov    0xc1610cf0,%edx
c1002603:	89 d0                	mov    %edx,%eax
c1002605:	01 c0                	add    %eax,%eax
c1002607:	01 d0                	add    %edx,%eax
c1002609:	c1 e0 02             	shl    $0x2,%eax
c100260c:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002611:	a3 e0 0c 61 c1       	mov    %eax,0xc1610ce0
c1002616:	c7 05 c4 0c 01 c1 00 	movl   $0x48000,0xc1010cc4
c100261d:	80 04 00 
c1002620:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002623:	a3 c8 0c 01 c1       	mov    %eax,0xc1010cc8
c1002628:	8b 15 e4 0c 61 c1    	mov    0xc1610ce4,%edx
c100262e:	a1 f0 0c 61 c1       	mov    0xc1610cf0,%eax
c1002633:	01 c2                	add    %eax,%edx
c1002635:	89 d0                	mov    %edx,%eax
c1002637:	01 c0                	add    %eax,%eax
c1002639:	01 d0                	add    %edx,%eax
c100263b:	c1 e0 02             	shl    $0x2,%eax
c100263e:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002643:	a3 c0 0c 01 c1       	mov    %eax,0xc1010cc0
c1002648:	c7 45 d0 00 00 00 40 	movl   $0x40000000,-0x30(%ebp)
c100264f:	90                   	nop
c1002650:	c7 45 dc 00 00 00 01 	movl   $0x1000000,-0x24(%ebp)
c1002657:	eb 39                	jmp    c1002692 <pmm_init+0x39d>
c1002659:	8b 0d e0 0c 61 c1    	mov    0xc1610ce0,%ecx
c100265f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002662:	2d 00 00 00 01       	sub    $0x1000000,%eax
c1002667:	c1 e8 0c             	shr    $0xc,%eax
c100266a:	89 c2                	mov    %eax,%edx
c100266c:	89 d0                	mov    %edx,%eax
c100266e:	01 c0                	add    %eax,%eax
c1002670:	01 d0                	add    %edx,%eax
c1002672:	c1 e0 02             	shl    $0x2,%eax
c1002675:	01 c8                	add    %ecx,%eax
c1002677:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c100267e:	a1 e8 0c 61 c1       	mov    0xc1610ce8,%eax
c1002683:	83 e8 01             	sub    $0x1,%eax
c1002686:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c100268b:	81 45 dc 00 10 00 00 	addl   $0x1000,-0x24(%ebp)
c1002692:	b8 c0 33 a1 c1       	mov    $0xc1a133c0,%eax
c1002697:	05 ff 0f 00 40       	add    $0x40000fff,%eax
c100269c:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10026a1:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c10026a4:	72 b3                	jb     c1002659 <pmm_init+0x364>
c10026a6:	c7 45 d8 00 e0 ff 37 	movl   $0x37ffe000,-0x28(%ebp)
c10026ad:	eb 39                	jmp    c10026e8 <pmm_init+0x3f3>
c10026af:	8b 0d e0 0c 61 c1    	mov    0xc1610ce0,%ecx
c10026b5:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10026b8:	2d 00 00 00 01       	sub    $0x1000000,%eax
c10026bd:	c1 e8 0c             	shr    $0xc,%eax
c10026c0:	89 c2                	mov    %eax,%edx
c10026c2:	89 d0                	mov    %edx,%eax
c10026c4:	01 c0                	add    %eax,%eax
c10026c6:	01 d0                	add    %edx,%eax
c10026c8:	c1 e0 02             	shl    $0x2,%eax
c10026cb:	01 c8                	add    %ecx,%eax
c10026cd:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10026d4:	a1 e8 0c 61 c1       	mov    0xc1610ce8,%eax
c10026d9:	83 e8 01             	sub    $0x1,%eax
c10026dc:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c10026e1:	81 45 d8 00 10 00 00 	addl   $0x1000,-0x28(%ebp)
c10026e8:	81 7d d8 ff ff ff 37 	cmpl   $0x37ffffff,-0x28(%ebp)
c10026ef:	76 be                	jbe    c10026af <pmm_init+0x3ba>
c10026f1:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c10026f7:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c10026fd:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c1002702:	51                   	push   %ecx
c1002703:	52                   	push   %edx
c1002704:	50                   	push   %eax
c1002705:	68 90 9f 00 c1       	push   $0xc1009f90
c100270a:	e8 87 1f 00 00       	call   c1004696 <printk>
c100270f:	83 c4 10             	add    $0x10,%esp
c1002712:	90                   	nop
c1002713:	c9                   	leave  
c1002714:	c3                   	ret    

c1002715 <pmm_alloc>:
c1002715:	55                   	push   %ebp
c1002716:	89 e5                	mov    %esp,%ebp
c1002718:	83 ec 24             	sub    $0x24,%esp
c100271b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100271e:	88 45 dc             	mov    %al,-0x24(%ebp)
c1002721:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002728:	8b 45 08             	mov    0x8(%ebp),%eax
c100272b:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002730:	c1 e8 0c             	shr    $0xc,%eax
c1002733:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002736:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
c100273a:	75 09                	jne    c1002745 <pmm_alloc+0x30>
c100273c:	c7 45 f0 ec 0c 61 c1 	movl   $0xc1610cec,-0x10(%ebp)
c1002743:	eb 16                	jmp    c100275b <pmm_alloc+0x46>
c1002745:	80 7d dc 01          	cmpb   $0x1,-0x24(%ebp)
c1002749:	75 09                	jne    c1002754 <pmm_alloc+0x3f>
c100274b:	c7 45 f0 e0 0c 61 c1 	movl   $0xc1610ce0,-0x10(%ebp)
c1002752:	eb 07                	jmp    c100275b <pmm_alloc+0x46>
c1002754:	c7 45 f0 c0 0c 01 c1 	movl   $0xc1010cc0,-0x10(%ebp)
c100275b:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1002762:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002769:	eb 43                	jmp    c10027ae <pmm_alloc+0x99>
c100276b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100276e:	8b 08                	mov    (%eax),%ecx
c1002770:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002773:	89 d0                	mov    %edx,%eax
c1002775:	01 c0                	add    %eax,%eax
c1002777:	01 d0                	add    %edx,%eax
c1002779:	c1 e0 02             	shl    $0x2,%eax
c100277c:	01 c8                	add    %ecx,%eax
c100277e:	8b 40 04             	mov    0x4(%eax),%eax
c1002781:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002784:	75 0c                	jne    c1002792 <pmm_alloc+0x7d>
c1002786:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100278a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100278d:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002790:	eb 10                	jmp    c10027a2 <pmm_alloc+0x8d>
c1002792:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002795:	83 c0 01             	add    $0x1,%eax
c1002798:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100279b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10027a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10027a5:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c10027a8:	74 11                	je     c10027bb <pmm_alloc+0xa6>
c10027aa:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10027ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10027b1:	8b 40 04             	mov    0x4(%eax),%eax
c10027b4:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c10027b7:	72 b2                	jb     c100276b <pmm_alloc+0x56>
c10027b9:	eb 01                	jmp    c10027bc <pmm_alloc+0xa7>
c10027bb:	90                   	nop
c10027bc:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10027bf:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10027c2:	eb 2d                	jmp    c10027f1 <pmm_alloc+0xdc>
c10027c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10027c7:	8b 08                	mov    (%eax),%ecx
c10027c9:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10027cc:	89 d0                	mov    %edx,%eax
c10027ce:	01 c0                	add    %eax,%eax
c10027d0:	01 d0                	add    %edx,%eax
c10027d2:	c1 e0 02             	shl    $0x2,%eax
c10027d5:	01 c8                	add    %ecx,%eax
c10027d7:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10027de:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10027e1:	8b 40 08             	mov    0x8(%eax),%eax
c10027e4:	8d 50 ff             	lea    -0x1(%eax),%edx
c10027e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10027ea:	89 50 08             	mov    %edx,0x8(%eax)
c10027ed:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c10027f1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10027f4:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c10027f7:	76 cb                	jbe    c10027c4 <pmm_alloc+0xaf>
c10027f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10027fc:	8b 08                	mov    (%eax),%ecx
c10027fe:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002801:	89 d0                	mov    %edx,%eax
c1002803:	01 c0                	add    %eax,%eax
c1002805:	01 d0                	add    %edx,%eax
c1002807:	c1 e0 02             	shl    $0x2,%eax
c100280a:	01 c8                	add    %ecx,%eax
c100280c:	8b 40 08             	mov    0x8(%eax),%eax
c100280f:	c9                   	leave  
c1002810:	c3                   	ret    

c1002811 <pmm_free>:
c1002811:	55                   	push   %ebp
c1002812:	89 e5                	mov    %esp,%ebp
c1002814:	83 ec 20             	sub    $0x20,%esp
c1002817:	8b 45 0c             	mov    0xc(%ebp),%eax
c100281a:	05 ff 0f 00 00       	add    $0xfff,%eax
c100281f:	c1 e8 0c             	shr    $0xc,%eax
c1002822:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002825:	81 7d 08 ff ff ff 00 	cmpl   $0xffffff,0x8(%ebp)
c100282c:	77 09                	ja     c1002837 <pmm_free+0x26>
c100282e:	c7 45 fc ec 0c 61 c1 	movl   $0xc1610cec,-0x4(%ebp)
c1002835:	eb 27                	jmp    c100285e <pmm_free+0x4d>
c1002837:	81 7d 08 ff ff ff 37 	cmpl   $0x37ffffff,0x8(%ebp)
c100283e:	77 10                	ja     c1002850 <pmm_free+0x3f>
c1002840:	81 6d 08 00 00 00 01 	subl   $0x1000000,0x8(%ebp)
c1002847:	c7 45 fc e0 0c 61 c1 	movl   $0xc1610ce0,-0x4(%ebp)
c100284e:	eb 0e                	jmp    c100285e <pmm_free+0x4d>
c1002850:	81 6d 08 00 00 00 38 	subl   $0x38000000,0x8(%ebp)
c1002857:	c7 45 fc c0 0c 01 c1 	movl   $0xc1010cc0,-0x4(%ebp)
c100285e:	8b 45 08             	mov    0x8(%ebp),%eax
c1002861:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002866:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002869:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100286c:	c1 e8 0c             	shr    $0xc,%eax
c100286f:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002872:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002879:	eb 31                	jmp    c10028ac <pmm_free+0x9b>
c100287b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100287e:	8b 08                	mov    (%eax),%ecx
c1002880:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1002883:	89 d0                	mov    %edx,%eax
c1002885:	01 c0                	add    %eax,%eax
c1002887:	01 d0                	add    %edx,%eax
c1002889:	c1 e0 02             	shl    $0x2,%eax
c100288c:	01 c8                	add    %ecx,%eax
c100288e:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
c1002895:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002898:	8b 40 08             	mov    0x8(%eax),%eax
c100289b:	8d 50 01             	lea    0x1(%eax),%edx
c100289e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10028a1:	89 50 08             	mov    %edx,0x8(%eax)
c10028a4:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10028a8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10028ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028af:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c10028b2:	72 c7                	jb     c100287b <pmm_free+0x6a>
c10028b4:	90                   	nop
c10028b5:	90                   	nop
c10028b6:	c9                   	leave  
c10028b7:	c3                   	ret    

c10028b8 <setup_vpt>:
c10028b8:	55                   	push   %ebp
c10028b9:	89 e5                	mov    %esp,%ebp
c10028bb:	83 ec 28             	sub    $0x28,%esp
c10028be:	c7 45 e0 e0 00 00 00 	movl   $0xe0,-0x20(%ebp)
c10028c5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10028cc:	eb 27                	jmp    c10028f5 <setup_vpt+0x3d>
c10028ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028d1:	c1 e0 0c             	shl    $0xc,%eax
c10028d4:	05 00 30 93 c1       	add    $0xc1933000,%eax
c10028d9:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c10028df:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028e2:	05 00 03 00 00       	add    $0x300,%eax
c10028e7:	83 ca 03             	or     $0x3,%edx
c10028ea:	89 14 85 00 10 61 c1 	mov    %edx,-0x3e9ef000(,%eax,4)
c10028f1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10028f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028f8:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c10028fb:	72 d1                	jb     c10028ce <setup_vpt+0x16>
c10028fd:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002904:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100290b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002912:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002919:	eb 3d                	jmp    c1002958 <setup_vpt+0xa0>
c100291b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100291e:	8d 50 01             	lea    0x1(%eax),%edx
c1002921:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1002924:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1002927:	83 ca 03             	or     $0x3,%edx
c100292a:	8b 4d ec             	mov    -0x14(%ebp),%ecx
c100292d:	c1 e1 0a             	shl    $0xa,%ecx
c1002930:	01 c8                	add    %ecx,%eax
c1002932:	89 14 85 00 30 93 c1 	mov    %edx,-0x3e6cd000(,%eax,4)
c1002939:	81 7d e8 00 04 00 00 	cmpl   $0x400,-0x18(%ebp)
c1002940:	75 0b                	jne    c100294d <setup_vpt+0x95>
c1002942:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002946:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c100294d:	81 45 f0 00 10 00 00 	addl   $0x1000,-0x10(%ebp)
c1002954:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1002958:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100295b:	c1 e0 0a             	shl    $0xa,%eax
c100295e:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1002961:	72 b8                	jb     c100291b <setup_vpt+0x63>
c1002963:	b8 60 1d 00 40       	mov    $0x40001d60,%eax
c1002968:	68 00 00 00 40       	push   $0x40000000
c100296d:	50                   	push   %eax
c100296e:	68 00 00 00 40       	push   $0x40000000
c1002973:	68 00 10 61 c1       	push   $0xc1611000
c1002978:	e8 30 02 00 00       	call   c1002bad <vmm_map>
c100297d:	83 c4 10             	add    $0x10,%esp
c1002980:	b8 00 10 61 c1       	mov    $0xc1611000,%eax
c1002985:	05 00 00 00 40       	add    $0x40000000,%eax
c100298a:	0f 22 d8             	mov    %eax,%cr3
c100298d:	90                   	nop
c100298e:	c9                   	leave  
c100298f:	c3                   	ret    

c1002990 <vmm_malloc>:
c1002990:	55                   	push   %ebp
c1002991:	89 e5                	mov    %esp,%ebp
c1002993:	53                   	push   %ebx
c1002994:	83 ec 34             	sub    $0x34,%esp
c1002997:	8b 45 0c             	mov    0xc(%ebp),%eax
c100299a:	88 45 d4             	mov    %al,-0x2c(%ebp)
c100299d:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
c10029a1:	83 ec 08             	sub    $0x8,%esp
c10029a4:	50                   	push   %eax
c10029a5:	ff 75 08             	pushl  0x8(%ebp)
c10029a8:	e8 68 fd ff ff       	call   c1002715 <pmm_alloc>
c10029ad:	83 c4 10             	add    $0x10,%esp
c10029b0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10029b3:	8b 45 08             	mov    0x8(%ebp),%eax
c10029b6:	05 ff 0f 00 00       	add    $0xfff,%eax
c10029bb:	c1 e8 0c             	shr    $0xc,%eax
c10029be:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10029c1:	80 7d d4 02          	cmpb   $0x2,-0x2c(%ebp)
c10029c5:	0f 85 db 00 00 00    	jne    c1002aa6 <vmm_malloc+0x116>
c10029cb:	a1 f4 ca 00 c1       	mov    0xc100caf4,%eax
c10029d0:	a3 00 20 93 c1       	mov    %eax,0xc1932000
c10029d5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10029dc:	eb 5d                	jmp    c1002a3b <vmm_malloc+0xab>
c10029de:	8b 15 f4 ca 00 c1    	mov    0xc100caf4,%edx
c10029e4:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c10029e9:	29 c2                	sub    %eax,%edx
c10029eb:	89 d0                	mov    %edx,%eax
c10029ed:	c1 e8 16             	shr    $0x16,%eax
c10029f0:	89 c3                	mov    %eax,%ebx
c10029f2:	8b 15 f4 ca 00 c1    	mov    0xc100caf4,%edx
c10029f8:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c10029fd:	29 c2                	sub    %eax,%edx
c10029ff:	89 d0                	mov    %edx,%eax
c1002a01:	c1 e8 0c             	shr    $0xc,%eax
c1002a04:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002a09:	89 c1                	mov    %eax,%ecx
c1002a0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002a0e:	83 c8 07             	or     $0x7,%eax
c1002a11:	89 c2                	mov    %eax,%edx
c1002a13:	89 d8                	mov    %ebx,%eax
c1002a15:	c1 e0 0a             	shl    $0xa,%eax
c1002a18:	01 c8                	add    %ecx,%eax
c1002a1a:	89 14 85 00 20 91 c1 	mov    %edx,-0x3e6ee000(,%eax,4)
c1002a21:	a1 f4 ca 00 c1       	mov    0xc100caf4,%eax
c1002a26:	05 00 10 00 00       	add    $0x1000,%eax
c1002a2b:	a3 f4 ca 00 c1       	mov    %eax,0xc100caf4
c1002a30:	81 45 f4 00 10 00 00 	addl   $0x1000,-0xc(%ebp)
c1002a37:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002a3b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002a3e:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1002a41:	72 9b                	jb     c10029de <vmm_malloc+0x4e>
c1002a43:	8b 15 f4 ca 00 c1    	mov    0xc100caf4,%edx
c1002a49:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002a4e:	29 c2                	sub    %eax,%edx
c1002a50:	89 d0                	mov    %edx,%eax
c1002a52:	05 ff ff 3f 00       	add    $0x3fffff,%eax
c1002a57:	c1 e8 16             	shr    $0x16,%eax
c1002a5a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002a5d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002a64:	eb 2e                	jmp    c1002a94 <vmm_malloc+0x104>
c1002a66:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a69:	c1 e0 0c             	shl    $0xc,%eax
c1002a6c:	05 00 20 91 c1       	add    $0xc1912000,%eax
c1002a71:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002a77:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002a7c:	c1 e8 16             	shr    $0x16,%eax
c1002a7f:	89 c1                	mov    %eax,%ecx
c1002a81:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a84:	01 c8                	add    %ecx,%eax
c1002a86:	83 ca 07             	or     $0x7,%edx
c1002a89:	89 14 85 00 10 61 c1 	mov    %edx,-0x3e9ef000(,%eax,4)
c1002a90:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002a94:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a97:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002a9a:	72 ca                	jb     c1002a66 <vmm_malloc+0xd6>
c1002a9c:	a1 00 20 93 c1       	mov    0xc1932000,%eax
c1002aa1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002aa4:	eb 07                	jmp    c1002aad <vmm_malloc+0x11d>
c1002aa6:	81 6d f4 00 00 00 40 	subl   $0x40000000,-0xc(%ebp)
c1002aad:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002ab0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002ab3:	c9                   	leave  
c1002ab4:	c3                   	ret    

c1002ab5 <vmm_free>:
c1002ab5:	55                   	push   %ebp
c1002ab6:	89 e5                	mov    %esp,%ebp
c1002ab8:	53                   	push   %ebx
c1002ab9:	83 ec 14             	sub    $0x14,%esp
c1002abc:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002abf:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002ac4:	c1 e8 0c             	shr    $0xc,%eax
c1002ac7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002aca:	8b 45 08             	mov    0x8(%ebp),%eax
c1002acd:	05 00 00 00 40       	add    $0x40000000,%eax
c1002ad2:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002ad5:	81 7d ec ff ff ff 37 	cmpl   $0x37ffffff,-0x14(%ebp)
c1002adc:	0f 86 ae 00 00 00    	jbe    c1002b90 <vmm_free+0xdb>
c1002ae2:	8b 45 08             	mov    0x8(%ebp),%eax
c1002ae5:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002aea:	89 c2                	mov    %eax,%edx
c1002aec:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002af1:	29 c2                	sub    %eax,%edx
c1002af3:	89 d0                	mov    %edx,%eax
c1002af5:	c1 e8 16             	shr    $0x16,%eax
c1002af8:	89 c2                	mov    %eax,%edx
c1002afa:	8b 45 08             	mov    0x8(%ebp),%eax
c1002afd:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002b02:	89 c1                	mov    %eax,%ecx
c1002b04:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002b09:	29 c1                	sub    %eax,%ecx
c1002b0b:	89 c8                	mov    %ecx,%eax
c1002b0d:	c1 e8 0c             	shr    $0xc,%eax
c1002b10:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002b15:	c1 e2 0a             	shl    $0xa,%edx
c1002b18:	01 d0                	add    %edx,%eax
c1002b1a:	8b 04 85 00 20 91 c1 	mov    -0x3e6ee000(,%eax,4),%eax
c1002b21:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002b26:	83 ec 08             	sub    $0x8,%esp
c1002b29:	ff 75 0c             	pushl  0xc(%ebp)
c1002b2c:	50                   	push   %eax
c1002b2d:	e8 df fc ff ff       	call   c1002811 <pmm_free>
c1002b32:	83 c4 10             	add    $0x10,%esp
c1002b35:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002b3c:	eb 48                	jmp    c1002b86 <vmm_free+0xd1>
c1002b3e:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002b43:	8b 55 08             	mov    0x8(%ebp),%edx
c1002b46:	29 c2                	sub    %eax,%edx
c1002b48:	89 d0                	mov    %edx,%eax
c1002b4a:	c1 e8 16             	shr    $0x16,%eax
c1002b4d:	89 c3                	mov    %eax,%ebx
c1002b4f:	a1 f0 ca 00 c1       	mov    0xc100caf0,%eax
c1002b54:	8b 55 08             	mov    0x8(%ebp),%edx
c1002b57:	29 c2                	sub    %eax,%edx
c1002b59:	89 d0                	mov    %edx,%eax
c1002b5b:	c1 e8 0c             	shr    $0xc,%eax
c1002b5e:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002b63:	89 c1                	mov    %eax,%ecx
c1002b65:	8b 45 08             	mov    0x8(%ebp),%eax
c1002b68:	83 c8 06             	or     $0x6,%eax
c1002b6b:	89 c2                	mov    %eax,%edx
c1002b6d:	89 d8                	mov    %ebx,%eax
c1002b6f:	c1 e0 0a             	shl    $0xa,%eax
c1002b72:	01 c8                	add    %ecx,%eax
c1002b74:	89 14 85 00 20 91 c1 	mov    %edx,-0x3e6ee000(,%eax,4)
c1002b7b:	81 45 08 00 10 00 00 	addl   $0x1000,0x8(%ebp)
c1002b82:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002b86:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002b89:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002b8c:	72 b0                	jb     c1002b3e <vmm_free+0x89>
c1002b8e:	eb 17                	jmp    c1002ba7 <vmm_free+0xf2>
c1002b90:	8b 45 08             	mov    0x8(%ebp),%eax
c1002b93:	05 00 00 00 40       	add    $0x40000000,%eax
c1002b98:	83 ec 08             	sub    $0x8,%esp
c1002b9b:	ff 75 0c             	pushl  0xc(%ebp)
c1002b9e:	50                   	push   %eax
c1002b9f:	e8 6d fc ff ff       	call   c1002811 <pmm_free>
c1002ba4:	83 c4 10             	add    $0x10,%esp
c1002ba7:	90                   	nop
c1002ba8:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002bab:	c9                   	leave  
c1002bac:	c3                   	ret    

c1002bad <vmm_map>:
c1002bad:	55                   	push   %ebp
c1002bae:	89 e5                	mov    %esp,%ebp
c1002bb0:	53                   	push   %ebx
c1002bb1:	83 ec 20             	sub    $0x20,%esp
c1002bb4:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002bb7:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002bbc:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002bbf:	8b 45 10             	mov    0x10(%ebp),%eax
c1002bc2:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002bc7:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002bcc:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002bcf:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002bd2:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002bd5:	81 65 14 00 f0 ff ff 	andl   $0xfffff000,0x14(%ebp)
c1002bdc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002bdf:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002be2:	c1 e8 0c             	shr    $0xc,%eax
c1002be5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002be8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002bef:	eb 43                	jmp    c1002c34 <vmm_map+0x87>
c1002bf1:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002bf4:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002bf7:	c1 e8 16             	shr    $0x16,%eax
c1002bfa:	89 c3                	mov    %eax,%ebx
c1002bfc:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002bff:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002c02:	c1 e8 0c             	shr    $0xc,%eax
c1002c05:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002c0a:	89 c1                	mov    %eax,%ecx
c1002c0c:	8b 45 14             	mov    0x14(%ebp),%eax
c1002c0f:	83 c8 07             	or     $0x7,%eax
c1002c12:	89 c2                	mov    %eax,%edx
c1002c14:	89 d8                	mov    %ebx,%eax
c1002c16:	c1 e0 0a             	shl    $0xa,%eax
c1002c19:	01 c8                	add    %ecx,%eax
c1002c1b:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002c22:	81 45 14 00 10 00 00 	addl   $0x1000,0x14(%ebp)
c1002c29:	81 45 f8 00 10 00 00 	addl   $0x1000,-0x8(%ebp)
c1002c30:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002c34:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002c37:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002c3a:	72 b5                	jb     c1002bf1 <vmm_map+0x44>
c1002c3c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002c3f:	05 ff 03 00 00       	add    $0x3ff,%eax
c1002c44:	c1 e8 0a             	shr    $0xa,%eax
c1002c47:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002c4a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002c51:	eb 33                	jmp    c1002c86 <vmm_map+0xd9>
c1002c53:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002c56:	c1 e0 0c             	shl    $0xc,%eax
c1002c59:	05 00 20 61 c1       	add    $0xc1612000,%eax
c1002c5e:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002c64:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002c67:	c1 e8 16             	shr    $0x16,%eax
c1002c6a:	89 c1                	mov    %eax,%ecx
c1002c6c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002c6f:	01 c8                	add    %ecx,%eax
c1002c71:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
c1002c78:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c7b:	01 c8                	add    %ecx,%eax
c1002c7d:	83 ca 07             	or     $0x7,%edx
c1002c80:	89 10                	mov    %edx,(%eax)
c1002c82:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002c86:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002c89:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002c8c:	72 c5                	jb     c1002c53 <vmm_map+0xa6>
c1002c8e:	90                   	nop
c1002c8f:	90                   	nop
c1002c90:	83 c4 20             	add    $0x20,%esp
c1002c93:	5b                   	pop    %ebx
c1002c94:	5d                   	pop    %ebp
c1002c95:	c3                   	ret    

c1002c96 <setup_pgdir>:
c1002c96:	55                   	push   %ebp
c1002c97:	89 e5                	mov    %esp,%ebp
c1002c99:	57                   	push   %edi
c1002c9a:	56                   	push   %esi
c1002c9b:	53                   	push   %ebx
c1002c9c:	83 ec 1c             	sub    $0x1c,%esp
c1002c9f:	83 ec 08             	sub    $0x8,%esp
c1002ca2:	6a 01                	push   $0x1
c1002ca4:	68 00 10 00 00       	push   $0x1000
c1002ca9:	e8 e2 fc ff ff       	call   c1002990 <vmm_malloc>
c1002cae:	83 c4 10             	add    $0x10,%esp
c1002cb1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002cb4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002cb7:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1002cbc:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002cc1:	8b 0b                	mov    (%ebx),%ecx
c1002cc3:	89 08                	mov    %ecx,(%eax)
c1002cc5:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002cc9:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002ccd:	8d 78 04             	lea    0x4(%eax),%edi
c1002cd0:	83 e7 fc             	and    $0xfffffffc,%edi
c1002cd3:	29 f8                	sub    %edi,%eax
c1002cd5:	29 c3                	sub    %eax,%ebx
c1002cd7:	01 c2                	add    %eax,%edx
c1002cd9:	83 e2 fc             	and    $0xfffffffc,%edx
c1002cdc:	89 d0                	mov    %edx,%eax
c1002cde:	c1 e8 02             	shr    $0x2,%eax
c1002ce1:	89 de                	mov    %ebx,%esi
c1002ce3:	89 c1                	mov    %eax,%ecx
c1002ce5:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002ce7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002cea:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002ced:	5b                   	pop    %ebx
c1002cee:	5e                   	pop    %esi
c1002cef:	5f                   	pop    %edi
c1002cf0:	5d                   	pop    %ebp
c1002cf1:	c3                   	ret    

c1002cf2 <hash32>:
c1002cf2:	55                   	push   %ebp
c1002cf3:	89 e5                	mov    %esp,%ebp
c1002cf5:	83 ec 10             	sub    $0x10,%esp
c1002cf8:	8b 45 08             	mov    0x8(%ebp),%eax
c1002cfb:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1002d01:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002d04:	b8 20 00 00 00       	mov    $0x20,%eax
c1002d09:	2b 45 0c             	sub    0xc(%ebp),%eax
c1002d0c:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002d0f:	89 c1                	mov    %eax,%ecx
c1002d11:	d3 ea                	shr    %cl,%edx
c1002d13:	89 d0                	mov    %edx,%eax
c1002d15:	c9                   	leave  
c1002d16:	c3                   	ret    

c1002d17 <kernel_task_init>:
c1002d17:	55                   	push   %ebp
c1002d18:	89 e5                	mov    %esp,%ebp
c1002d1a:	83 ec 28             	sub    $0x28,%esp
c1002d1d:	c7 45 ec 84 0c 01 c1 	movl   $0xc1010c84,-0x14(%ebp)
c1002d24:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d27:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002d2a:	89 50 04             	mov    %edx,0x4(%eax)
c1002d2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d30:	8b 50 04             	mov    0x4(%eax),%edx
c1002d33:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d36:	89 10                	mov    %edx,(%eax)
c1002d38:	90                   	nop
c1002d39:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002d40:	eb 27                	jmp    c1002d69 <kernel_task_init+0x52>
c1002d42:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002d45:	c1 e0 03             	shl    $0x3,%eax
c1002d48:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c1002d4d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002d50:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002d53:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1002d56:	89 50 04             	mov    %edx,0x4(%eax)
c1002d59:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002d5c:	8b 50 04             	mov    0x4(%eax),%edx
c1002d5f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002d62:	89 10                	mov    %edx,(%eax)
c1002d64:	90                   	nop
c1002d65:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002d69:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%ebp)
c1002d70:	7e d0                	jle    c1002d42 <kernel_task_init+0x2b>
c1002d72:	83 ec 0c             	sub    $0xc,%esp
c1002d75:	6a 01                	push   $0x1
c1002d77:	e8 c5 05 00 00       	call   c1003341 <alloc_task>
c1002d7c:	83 c4 10             	add    $0x10,%esp
c1002d7f:	a3 00 30 a1 c1       	mov    %eax,0xc1a13000
c1002d84:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002d89:	85 c0                	test   %eax,%eax
c1002d8b:	75 10                	jne    c1002d9d <kernel_task_init+0x86>
c1002d8d:	83 ec 0c             	sub    $0xc,%esp
c1002d90:	68 d8 9f 00 c1       	push   $0xc1009fd8
c1002d95:	e8 fc 18 00 00       	call   c1004696 <printk>
c1002d9a:	83 c4 10             	add    $0x10,%esp
c1002d9d:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002da2:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c1002da8:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002dad:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1002db4:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002db9:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1002dc0:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002dc5:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1002dcc:	c7 05 80 0c 01 c1 00 	movl   $0x0,0xc1010c80
c1002dd3:	00 00 00 
c1002dd6:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ddb:	83 ec 08             	sub    $0x8,%esp
c1002dde:	68 eb 9f 00 c1       	push   $0xc1009feb
c1002de3:	50                   	push   %eax
c1002de4:	e8 3f 03 00 00       	call   c1003128 <set_task_name>
c1002de9:	83 c4 10             	add    $0x10,%esp
c1002dec:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002df1:	89 c2                	mov    %eax,%edx
c1002df3:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002df8:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1002dfe:	89 50 24             	mov    %edx,0x24(%eax)
c1002e01:	ba 00 10 61 c1       	mov    $0xc1611000,%edx
c1002e06:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e0b:	81 c2 00 00 00 40    	add    $0x40000000,%edx
c1002e11:	89 50 28             	mov    %edx,0x28(%eax)
c1002e14:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e19:	c7 80 e4 00 00 00 00 	movl   $0x0,0xe4(%eax)
c1002e20:	00 00 00 
c1002e23:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e28:	8b 40 24             	mov    0x24(%eax),%eax
c1002e2b:	8d 50 b4             	lea    -0x4c(%eax),%edx
c1002e2e:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e33:	89 50 2c             	mov    %edx,0x2c(%eax)
c1002e36:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e3b:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e3e:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1002e45:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e4a:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e4d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1002e54:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e59:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e5c:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1002e63:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e68:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e6b:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c1002e72:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e77:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e7a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1002e80:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e85:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e88:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c1002e8f:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002e94:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e97:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1002e9e:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ea3:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002ea6:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1002ead:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002eb2:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002eb5:	66 c7 40 3c 08 00    	movw   $0x8,0x3c(%eax)
c1002ebb:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ec0:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002ec3:	66 c7 40 48 10 00    	movw   $0x10,0x48(%eax)
c1002ec9:	8b 15 00 30 a1 c1    	mov    0xc1a13000,%edx
c1002ecf:	8b 52 2c             	mov    0x2c(%edx),%edx
c1002ed2:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c1002ed6:	66 89 42 24          	mov    %ax,0x24(%edx)
c1002eda:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002edf:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002ee2:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1002ee6:	66 89 50 28          	mov    %dx,0x28(%eax)
c1002eea:	8b 15 00 30 a1 c1    	mov    0xc1a13000,%edx
c1002ef0:	8b 52 2c             	mov    0x2c(%edx),%edx
c1002ef3:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1002ef7:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1002efb:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f00:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002f03:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1002f09:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f0e:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002f11:	8b 55 08             	mov    0x8(%ebp),%edx
c1002f14:	89 50 38             	mov    %edx,0x38(%eax)
c1002f17:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f1c:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002f1f:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1002f26:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f2b:	8b 50 24             	mov    0x24(%eax),%edx
c1002f2e:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f33:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002f36:	83 ea 4c             	sub    $0x4c,%edx
c1002f39:	89 50 44             	mov    %edx,0x44(%eax)
c1002f3c:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f41:	8b 50 2c             	mov    0x2c(%eax),%edx
c1002f44:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f49:	8b 52 38             	mov    0x38(%edx),%edx
c1002f4c:	89 50 30             	mov    %edx,0x30(%eax)
c1002f4f:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f54:	8b 50 2c             	mov    0x2c(%eax),%edx
c1002f57:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f5c:	89 50 34             	mov    %edx,0x34(%eax)
c1002f5f:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f64:	8b 50 2c             	mov    0x2c(%eax),%edx
c1002f67:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f6c:	8b 52 10             	mov    0x10(%edx),%edx
c1002f6f:	89 50 38             	mov    %edx,0x38(%eax)
c1002f72:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f77:	8b 50 2c             	mov    0x2c(%eax),%edx
c1002f7a:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f7f:	8b 52 14             	mov    0x14(%edx),%edx
c1002f82:	89 50 40             	mov    %edx,0x40(%eax)
c1002f85:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f8a:	83 c0 50             	add    $0x50,%eax
c1002f8d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002f90:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f93:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002f96:	89 50 04             	mov    %edx,0x4(%eax)
c1002f99:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f9c:	8b 50 04             	mov    0x4(%eax),%edx
c1002f9f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002fa2:	89 10                	mov    %edx,(%eax)
c1002fa4:	90                   	nop
c1002fa5:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002faa:	83 c0 50             	add    $0x50,%eax
c1002fad:	83 ec 0c             	sub    $0xc,%esp
c1002fb0:	50                   	push   %eax
c1002fb1:	e8 dc 01 00 00       	call   c1003192 <add_link>
c1002fb6:	83 c4 10             	add    $0x10,%esp
c1002fb9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002fc0:	eb 16                	jmp    c1002fd8 <kernel_task_init+0x2c1>
c1002fc2:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fc7:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1002fca:	83 c2 18             	add    $0x18,%edx
c1002fcd:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1002fd4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002fd8:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1002fdc:	7e e4                	jle    c1002fc2 <kernel_task_init+0x2ab>
c1002fde:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fe3:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1002fe8:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fed:	83 ec 0c             	sub    $0xc,%esp
c1002ff0:	50                   	push   %eax
c1002ff1:	e8 1f 02 00 00       	call   c1003215 <add_pid_hash>
c1002ff6:	83 c4 10             	add    $0x10,%esp
c1002ff9:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ffe:	83 ec 0c             	sub    $0xc,%esp
c1003001:	50                   	push   %eax
c1003002:	e8 b3 05 00 00       	call   c10035ba <wakeup_task>
c1003007:	83 c4 10             	add    $0x10,%esp
c100300a:	c7 05 8c 0c 01 c1 01 	movl   $0x1,0xc1010c8c
c1003011:	00 00 00 
c1003014:	90                   	nop
c1003015:	c9                   	leave  
c1003016:	c3                   	ret    

c1003017 <set_pid_bit>:
c1003017:	55                   	push   %ebp
c1003018:	89 e5                	mov    %esp,%ebp
c100301a:	83 ec 10             	sub    $0x10,%esp
c100301d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003020:	8d 50 07             	lea    0x7(%eax),%edx
c1003023:	85 c0                	test   %eax,%eax
c1003025:	0f 48 c2             	cmovs  %edx,%eax
c1003028:	c1 f8 03             	sar    $0x3,%eax
c100302b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100302e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003031:	99                   	cltd   
c1003032:	c1 ea 1d             	shr    $0x1d,%edx
c1003035:	01 d0                	add    %edx,%eax
c1003037:	83 e0 07             	and    $0x7,%eax
c100303a:	29 d0                	sub    %edx,%eax
c100303c:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100303f:	90                   	nop
c1003040:	c9                   	leave  
c1003041:	c3                   	ret    

c1003042 <clear_pid_bit>:
c1003042:	55                   	push   %ebp
c1003043:	89 e5                	mov    %esp,%ebp
c1003045:	83 ec 10             	sub    $0x10,%esp
c1003048:	8b 45 08             	mov    0x8(%ebp),%eax
c100304b:	8d 50 07             	lea    0x7(%eax),%edx
c100304e:	85 c0                	test   %eax,%eax
c1003050:	0f 48 c2             	cmovs  %edx,%eax
c1003053:	c1 f8 03             	sar    $0x3,%eax
c1003056:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003059:	8b 45 08             	mov    0x8(%ebp),%eax
c100305c:	99                   	cltd   
c100305d:	c1 ea 1d             	shr    $0x1d,%edx
c1003060:	01 d0                	add    %edx,%eax
c1003062:	83 e0 07             	and    $0x7,%eax
c1003065:	29 d0                	sub    %edx,%eax
c1003067:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100306a:	90                   	nop
c100306b:	c9                   	leave  
c100306c:	c3                   	ret    

c100306d <find_free_pid>:
c100306d:	55                   	push   %ebp
c100306e:	89 e5                	mov    %esp,%ebp
c1003070:	83 ec 10             	sub    $0x10,%esp
c1003073:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100307a:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1003081:	eb 1b                	jmp    c100309e <find_free_pid+0x31>
c1003083:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100308a:	eb 08                	jmp    c1003094 <find_free_pid+0x27>
c100308c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003090:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1003094:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
c1003098:	7e f2                	jle    c100308c <find_free_pid+0x1f>
c100309a:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100309e:	81 7d f8 00 80 00 00 	cmpl   $0x8000,-0x8(%ebp)
c10030a5:	75 dc                	jne    c1003083 <find_free_pid+0x16>
c10030a7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10030ac:	c9                   	leave  
c10030ad:	c3                   	ret    

c10030ae <alloc_pid>:
c10030ae:	55                   	push   %ebp
c10030af:	89 e5                	mov    %esp,%ebp
c10030b1:	83 ec 10             	sub    $0x10,%esp
c10030b4:	a1 00 cb 00 c1       	mov    0xc100cb00,%eax
c10030b9:	85 c0                	test   %eax,%eax
c10030bb:	75 07                	jne    c10030c4 <alloc_pid+0x16>
c10030bd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10030c2:	eb 44                	jmp    c1003108 <alloc_pid+0x5a>
c10030c4:	81 7d fc ff 7f 00 00 	cmpl   $0x7fff,-0x4(%ebp)
c10030cb:	75 07                	jne    c10030d4 <alloc_pid+0x26>
c10030cd:	e8 9b ff ff ff       	call   c100306d <find_free_pid>
c10030d2:	eb 08                	jmp    c10030dc <alloc_pid+0x2e>
c10030d4:	a1 80 0c 01 c1       	mov    0xc1010c80,%eax
c10030d9:	83 c0 01             	add    $0x1,%eax
c10030dc:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10030df:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c10030e3:	78 18                	js     c10030fd <alloc_pid+0x4f>
c10030e5:	ff 75 fc             	pushl  -0x4(%ebp)
c10030e8:	e8 2a ff ff ff       	call   c1003017 <set_pid_bit>
c10030ed:	83 c4 04             	add    $0x4,%esp
c10030f0:	a1 00 cb 00 c1       	mov    0xc100cb00,%eax
c10030f5:	83 e8 01             	sub    $0x1,%eax
c10030f8:	a3 00 cb 00 c1       	mov    %eax,0xc100cb00
c10030fd:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003100:	a3 80 0c 01 c1       	mov    %eax,0xc1010c80
c1003105:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003108:	c9                   	leave  
c1003109:	c3                   	ret    

c100310a <free_pid>:
c100310a:	55                   	push   %ebp
c100310b:	89 e5                	mov    %esp,%ebp
c100310d:	ff 75 08             	pushl  0x8(%ebp)
c1003110:	e8 2d ff ff ff       	call   c1003042 <clear_pid_bit>
c1003115:	83 c4 04             	add    $0x4,%esp
c1003118:	a1 00 cb 00 c1       	mov    0xc100cb00,%eax
c100311d:	83 c0 01             	add    $0x1,%eax
c1003120:	a3 00 cb 00 c1       	mov    %eax,0xc100cb00
c1003125:	90                   	nop
c1003126:	c9                   	leave  
c1003127:	c3                   	ret    

c1003128 <set_task_name>:
c1003128:	55                   	push   %ebp
c1003129:	89 e5                	mov    %esp,%ebp
c100312b:	83 ec 08             	sub    $0x8,%esp
c100312e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003131:	83 c0 10             	add    $0x10,%eax
c1003134:	83 ec 04             	sub    $0x4,%esp
c1003137:	6a 14                	push   $0x14
c1003139:	6a 00                	push   $0x0
c100313b:	50                   	push   %eax
c100313c:	e8 69 cf ff ff       	call   c10000aa <memset>
c1003141:	83 c4 10             	add    $0x10,%esp
c1003144:	8b 45 08             	mov    0x8(%ebp),%eax
c1003147:	83 c0 10             	add    $0x10,%eax
c100314a:	83 ec 04             	sub    $0x4,%esp
c100314d:	6a 14                	push   $0x14
c100314f:	ff 75 0c             	pushl  0xc(%ebp)
c1003152:	50                   	push   %eax
c1003153:	e8 b0 cf ff ff       	call   c1000108 <memcpy>
c1003158:	83 c4 10             	add    $0x10,%esp
c100315b:	c9                   	leave  
c100315c:	c3                   	ret    

c100315d <get_task_name>:
c100315d:	55                   	push   %ebp
c100315e:	89 e5                	mov    %esp,%ebp
c1003160:	83 ec 08             	sub    $0x8,%esp
c1003163:	83 ec 04             	sub    $0x4,%esp
c1003166:	6a 15                	push   $0x15
c1003168:	6a 00                	push   $0x0
c100316a:	68 90 0c 01 c1       	push   $0xc1010c90
c100316f:	e8 36 cf ff ff       	call   c10000aa <memset>
c1003174:	83 c4 10             	add    $0x10,%esp
c1003177:	8b 45 08             	mov    0x8(%ebp),%eax
c100317a:	83 c0 10             	add    $0x10,%eax
c100317d:	83 ec 04             	sub    $0x4,%esp
c1003180:	6a 14                	push   $0x14
c1003182:	50                   	push   %eax
c1003183:	68 90 0c 01 c1       	push   $0xc1010c90
c1003188:	e8 7b cf ff ff       	call   c1000108 <memcpy>
c100318d:	83 c4 10             	add    $0x10,%esp
c1003190:	c9                   	leave  
c1003191:	c3                   	ret    

c1003192 <add_link>:
c1003192:	55                   	push   %ebp
c1003193:	89 e5                	mov    %esp,%ebp
c1003195:	83 ec 20             	sub    $0x20,%esp
c1003198:	c7 45 fc 84 0c 01 c1 	movl   $0xc1010c84,-0x4(%ebp)
c100319f:	8b 45 08             	mov    0x8(%ebp),%eax
c10031a2:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10031a5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10031a8:	8b 00                	mov    (%eax),%eax
c10031aa:	8b 55 f8             	mov    -0x8(%ebp),%edx
c10031ad:	89 55 f4             	mov    %edx,-0xc(%ebp)
c10031b0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10031b3:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10031b6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10031b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10031bc:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10031bf:	89 10                	mov    %edx,(%eax)
c10031c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10031c4:	8b 10                	mov    (%eax),%edx
c10031c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10031c9:	89 50 04             	mov    %edx,0x4(%eax)
c10031cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10031cf:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10031d2:	89 50 04             	mov    %edx,0x4(%eax)
c10031d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10031d8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10031db:	89 10                	mov    %edx,(%eax)
c10031dd:	90                   	nop
c10031de:	90                   	nop
c10031df:	90                   	nop
c10031e0:	c9                   	leave  
c10031e1:	c3                   	ret    

c10031e2 <remove_link>:
c10031e2:	55                   	push   %ebp
c10031e3:	89 e5                	mov    %esp,%ebp
c10031e5:	83 ec 10             	sub    $0x10,%esp
c10031e8:	8b 45 08             	mov    0x8(%ebp),%eax
c10031eb:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10031ee:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10031f1:	8b 40 04             	mov    0x4(%eax),%eax
c10031f4:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10031f7:	8b 12                	mov    (%edx),%edx
c10031f9:	89 55 f8             	mov    %edx,-0x8(%ebp)
c10031fc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10031ff:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1003202:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003205:	89 50 04             	mov    %edx,0x4(%eax)
c1003208:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100320b:	8b 55 f8             	mov    -0x8(%ebp),%edx
c100320e:	89 10                	mov    %edx,(%eax)
c1003210:	90                   	nop
c1003211:	90                   	nop
c1003212:	90                   	nop
c1003213:	c9                   	leave  
c1003214:	c3                   	ret    

c1003215 <add_pid_hash>:
c1003215:	55                   	push   %ebp
c1003216:	89 e5                	mov    %esp,%ebp
c1003218:	53                   	push   %ebx
c1003219:	83 ec 20             	sub    $0x20,%esp
c100321c:	8b 45 08             	mov    0x8(%ebp),%eax
c100321f:	8d 58 58             	lea    0x58(%eax),%ebx
c1003222:	8b 45 08             	mov    0x8(%ebp),%eax
c1003225:	8b 40 0c             	mov    0xc(%eax),%eax
c1003228:	6a 0a                	push   $0xa
c100322a:	50                   	push   %eax
c100322b:	e8 c2 fa ff ff       	call   c1002cf2 <hash32>
c1003230:	83 c4 08             	add    $0x8,%esp
c1003233:	c1 e0 03             	shl    $0x3,%eax
c1003236:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c100323b:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100323e:	89 5d f4             	mov    %ebx,-0xc(%ebp)
c1003241:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1003244:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003247:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100324a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100324d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003250:	8b 40 04             	mov    0x4(%eax),%eax
c1003253:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003256:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1003259:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100325c:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c100325f:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003262:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003265:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003268:	89 10                	mov    %edx,(%eax)
c100326a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100326d:	8b 10                	mov    (%eax),%edx
c100326f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003272:	89 50 04             	mov    %edx,0x4(%eax)
c1003275:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003278:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100327b:	89 50 04             	mov    %edx,0x4(%eax)
c100327e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003281:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003284:	89 10                	mov    %edx,(%eax)
c1003286:	90                   	nop
c1003287:	90                   	nop
c1003288:	90                   	nop
c1003289:	90                   	nop
c100328a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100328d:	c9                   	leave  
c100328e:	c3                   	ret    

c100328f <remove_pid_hash>:
c100328f:	55                   	push   %ebp
c1003290:	89 e5                	mov    %esp,%ebp
c1003292:	83 ec 18             	sub    $0x18,%esp
c1003295:	83 ec 0c             	sub    $0xc,%esp
c1003298:	ff 75 08             	pushl  0x8(%ebp)
c100329b:	e8 36 00 00 00       	call   c10032d6 <find_task>
c10032a0:	83 c4 10             	add    $0x10,%esp
c10032a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10032a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10032a9:	83 c0 58             	add    $0x58,%eax
c10032ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10032af:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10032b2:	8b 40 04             	mov    0x4(%eax),%eax
c10032b5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10032b8:	8b 12                	mov    (%edx),%edx
c10032ba:	89 55 ec             	mov    %edx,-0x14(%ebp)
c10032bd:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10032c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10032c3:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10032c6:	89 50 04             	mov    %edx,0x4(%eax)
c10032c9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10032cc:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10032cf:	89 10                	mov    %edx,(%eax)
c10032d1:	90                   	nop
c10032d2:	90                   	nop
c10032d3:	90                   	nop
c10032d4:	c9                   	leave  
c10032d5:	c3                   	ret    

c10032d6 <find_task>:
c10032d6:	55                   	push   %ebp
c10032d7:	89 e5                	mov    %esp,%ebp
c10032d9:	83 ec 10             	sub    $0x10,%esp
c10032dc:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10032e0:	79 07                	jns    c10032e9 <find_task+0x13>
c10032e2:	b8 00 00 00 00       	mov    $0x0,%eax
c10032e7:	eb 56                	jmp    c100333f <find_task+0x69>
c10032e9:	8b 45 08             	mov    0x8(%ebp),%eax
c10032ec:	6a 0a                	push   $0xa
c10032ee:	50                   	push   %eax
c10032ef:	e8 fe f9 ff ff       	call   c1002cf2 <hash32>
c10032f4:	83 c4 08             	add    $0x8,%esp
c10032f7:	c1 e0 03             	shl    $0x3,%eax
c10032fa:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c10032ff:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003302:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1003305:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003308:	eb 19                	jmp    c1003323 <find_task+0x4d>
c100330a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100330d:	83 e8 58             	sub    $0x58,%eax
c1003310:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003313:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003316:	8b 40 0c             	mov    0xc(%eax),%eax
c1003319:	39 45 08             	cmp    %eax,0x8(%ebp)
c100331c:	75 05                	jne    c1003323 <find_task+0x4d>
c100331e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003321:	eb 1c                	jmp    c100333f <find_task+0x69>
c1003323:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003326:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003329:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100332c:	8b 40 04             	mov    0x4(%eax),%eax
c100332f:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003332:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003335:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1003338:	75 d0                	jne    c100330a <find_task+0x34>
c100333a:	b8 00 00 00 00       	mov    $0x0,%eax
c100333f:	c9                   	leave  
c1003340:	c3                   	ret    

c1003341 <alloc_task>:
c1003341:	55                   	push   %ebp
c1003342:	89 e5                	mov    %esp,%ebp
c1003344:	83 ec 18             	sub    $0x18,%esp
c1003347:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c100334b:	75 17                	jne    c1003364 <alloc_task+0x23>
c100334d:	83 ec 08             	sub    $0x8,%esp
c1003350:	6a 01                	push   $0x1
c1003352:	68 e8 00 00 00       	push   $0xe8
c1003357:	e8 34 f6 ff ff       	call   c1002990 <vmm_malloc>
c100335c:	83 c4 10             	add    $0x10,%esp
c100335f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003362:	eb 15                	jmp    c1003379 <alloc_task+0x38>
c1003364:	83 ec 08             	sub    $0x8,%esp
c1003367:	6a 02                	push   $0x2
c1003369:	68 e8 00 00 00       	push   $0xe8
c100336e:	e8 1d f6 ff ff       	call   c1002990 <vmm_malloc>
c1003373:	83 c4 10             	add    $0x10,%esp
c1003376:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003379:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100337d:	0f 84 8c 00 00 00    	je     c100340f <alloc_task+0xce>
c1003383:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003386:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c100338c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100338f:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003396:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003399:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c10033a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033a3:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
c10033aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033ad:	83 c0 10             	add    $0x10,%eax
c10033b0:	83 ec 04             	sub    $0x4,%esp
c10033b3:	6a 14                	push   $0x14
c10033b5:	6a 00                	push   $0x0
c10033b7:	50                   	push   %eax
c10033b8:	e8 ed cc ff ff       	call   c10000aa <memset>
c10033bd:	83 c4 10             	add    $0x10,%esp
c10033c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033c3:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
c10033ca:	ba 00 10 61 c1       	mov    $0xc1611000,%edx
c10033cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033d2:	89 50 28             	mov    %edx,0x28(%eax)
c10033d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033d8:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
c10033df:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033e2:	83 c0 30             	add    $0x30,%eax
c10033e5:	83 ec 04             	sub    $0x4,%esp
c10033e8:	6a 20                	push   $0x20
c10033ea:	6a 00                	push   $0x0
c10033ec:	50                   	push   %eax
c10033ed:	e8 b8 cc ff ff       	call   c10000aa <memset>
c10033f2:	83 c4 10             	add    $0x10,%esp
c10033f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033f8:	c7 80 e0 00 00 00 11 	movl   $0x19971211,0xe0(%eax)
c10033ff:	12 97 19 
c1003402:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003405:	c7 80 e4 00 00 00 00 	movl   $0x0,0xe4(%eax)
c100340c:	00 00 00 
c100340f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003412:	c9                   	leave  
c1003413:	c3                   	ret    

c1003414 <forkret>:
c1003414:	55                   	push   %ebp
c1003415:	89 e5                	mov    %esp,%ebp
c1003417:	83 ec 08             	sub    $0x8,%esp
c100341a:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100341f:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003422:	83 ec 0c             	sub    $0xc,%esp
c1003425:	50                   	push   %eax
c1003426:	e8 6b d9 ff ff       	call   c1000d96 <forkrets>
c100342b:	83 c4 10             	add    $0x10,%esp
c100342e:	90                   	nop
c100342f:	c9                   	leave  
c1003430:	c3                   	ret    

c1003431 <copy_thread>:
c1003431:	55                   	push   %ebp
c1003432:	89 e5                	mov    %esp,%ebp
c1003434:	57                   	push   %edi
c1003435:	56                   	push   %esi
c1003436:	53                   	push   %ebx
c1003437:	8b 45 08             	mov    0x8(%ebp),%eax
c100343a:	8b 40 24             	mov    0x24(%eax),%eax
c100343d:	83 e8 4c             	sub    $0x4c,%eax
c1003440:	89 c2                	mov    %eax,%edx
c1003442:	8b 45 08             	mov    0x8(%ebp),%eax
c1003445:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003448:	8b 45 08             	mov    0x8(%ebp),%eax
c100344b:	8b 40 24             	mov    0x24(%eax),%eax
c100344e:	8d 50 b4             	lea    -0x4c(%eax),%edx
c1003451:	8b 45 08             	mov    0x8(%ebp),%eax
c1003454:	89 50 24             	mov    %edx,0x24(%eax)
c1003457:	8b 45 08             	mov    0x8(%ebp),%eax
c100345a:	8b 40 2c             	mov    0x2c(%eax),%eax
c100345d:	8b 55 10             	mov    0x10(%ebp),%edx
c1003460:	89 d3                	mov    %edx,%ebx
c1003462:	ba 4c 00 00 00       	mov    $0x4c,%edx
c1003467:	8b 0b                	mov    (%ebx),%ecx
c1003469:	89 08                	mov    %ecx,(%eax)
c100346b:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c100346f:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003473:	8d 78 04             	lea    0x4(%eax),%edi
c1003476:	83 e7 fc             	and    $0xfffffffc,%edi
c1003479:	29 f8                	sub    %edi,%eax
c100347b:	29 c3                	sub    %eax,%ebx
c100347d:	01 c2                	add    %eax,%edx
c100347f:	83 e2 fc             	and    $0xfffffffc,%edx
c1003482:	89 d0                	mov    %edx,%eax
c1003484:	c1 e8 02             	shr    $0x2,%eax
c1003487:	89 de                	mov    %ebx,%esi
c1003489:	89 c1                	mov    %eax,%ecx
c100348b:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100348d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003490:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003493:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c100349a:	8b 45 08             	mov    0x8(%ebp),%eax
c100349d:	8b 40 2c             	mov    0x2c(%eax),%eax
c10034a0:	8b 55 0c             	mov    0xc(%ebp),%edx
c10034a3:	89 50 44             	mov    %edx,0x44(%eax)
c10034a6:	8b 45 10             	mov    0x10(%ebp),%eax
c10034a9:	8b 50 38             	mov    0x38(%eax),%edx
c10034ac:	8b 45 08             	mov    0x8(%ebp),%eax
c10034af:	89 50 30             	mov    %edx,0x30(%eax)
c10034b2:	8b 45 10             	mov    0x10(%ebp),%eax
c10034b5:	8b 50 10             	mov    0x10(%eax),%edx
c10034b8:	8b 45 08             	mov    0x8(%ebp),%eax
c10034bb:	89 50 38             	mov    %edx,0x38(%eax)
c10034be:	8b 45 10             	mov    0x10(%ebp),%eax
c10034c1:	8b 50 14             	mov    0x14(%eax),%edx
c10034c4:	8b 45 08             	mov    0x8(%ebp),%eax
c10034c7:	89 50 40             	mov    %edx,0x40(%eax)
c10034ca:	8b 45 08             	mov    0x8(%ebp),%eax
c10034cd:	8b 40 2c             	mov    0x2c(%eax),%eax
c10034d0:	89 c2                	mov    %eax,%edx
c10034d2:	8b 45 08             	mov    0x8(%ebp),%eax
c10034d5:	89 50 34             	mov    %edx,0x34(%eax)
c10034d8:	90                   	nop
c10034d9:	5b                   	pop    %ebx
c10034da:	5e                   	pop    %esi
c10034db:	5f                   	pop    %edi
c10034dc:	5d                   	pop    %ebp
c10034dd:	c3                   	ret    

c10034de <do_fork>:
c10034de:	55                   	push   %ebp
c10034df:	89 e5                	mov    %esp,%ebp
c10034e1:	83 ec 18             	sub    $0x18,%esp
c10034e4:	a1 8c 0c 01 c1       	mov    0xc1010c8c,%eax
c10034e9:	3d 00 80 00 00       	cmp    $0x8000,%eax
c10034ee:	76 0a                	jbe    c10034fa <do_fork+0x1c>
c10034f0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10034f5:	e9 be 00 00 00       	jmp    c10035b8 <do_fork+0xda>
c10034fa:	83 ec 0c             	sub    $0xc,%esp
c10034fd:	6a 01                	push   $0x1
c10034ff:	e8 3d fe ff ff       	call   c1003341 <alloc_task>
c1003504:	83 c4 10             	add    $0x10,%esp
c1003507:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100350a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100350e:	75 0a                	jne    c100351a <do_fork+0x3c>
c1003510:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003515:	e9 9e 00 00 00       	jmp    c10035b8 <do_fork+0xda>
c100351a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100351d:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c1003523:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003526:	89 50 24             	mov    %edx,0x24(%eax)
c1003529:	83 ec 04             	sub    $0x4,%esp
c100352c:	ff 75 10             	pushl  0x10(%ebp)
c100352f:	ff 75 0c             	pushl  0xc(%ebp)
c1003532:	ff 75 f4             	pushl  -0xc(%ebp)
c1003535:	e8 f7 fe ff ff       	call   c1003431 <copy_thread>
c100353a:	83 c4 10             	add    $0x10,%esp
c100353d:	e8 6c fb ff ff       	call   c10030ae <alloc_pid>
c1003542:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003545:	89 42 0c             	mov    %eax,0xc(%edx)
c1003548:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100354b:	8b 40 0c             	mov    0xc(%eax),%eax
c100354e:	85 c0                	test   %eax,%eax
c1003550:	79 07                	jns    c1003559 <do_fork+0x7b>
c1003552:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003557:	eb 5f                	jmp    c10035b8 <do_fork+0xda>
c1003559:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100355c:	83 c0 50             	add    $0x50,%eax
c100355f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003562:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003565:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003568:	89 50 04             	mov    %edx,0x4(%eax)
c100356b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100356e:	8b 50 04             	mov    0x4(%eax),%edx
c1003571:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003574:	89 10                	mov    %edx,(%eax)
c1003576:	90                   	nop
c1003577:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100357a:	83 c0 50             	add    $0x50,%eax
c100357d:	83 ec 0c             	sub    $0xc,%esp
c1003580:	50                   	push   %eax
c1003581:	e8 0c fc ff ff       	call   c1003192 <add_link>
c1003586:	83 c4 10             	add    $0x10,%esp
c1003589:	83 ec 0c             	sub    $0xc,%esp
c100358c:	ff 75 f4             	pushl  -0xc(%ebp)
c100358f:	e8 81 fc ff ff       	call   c1003215 <add_pid_hash>
c1003594:	83 c4 10             	add    $0x10,%esp
c1003597:	a1 8c 0c 01 c1       	mov    0xc1010c8c,%eax
c100359c:	83 c0 01             	add    $0x1,%eax
c100359f:	a3 8c 0c 01 c1       	mov    %eax,0xc1010c8c
c10035a4:	83 ec 0c             	sub    $0xc,%esp
c10035a7:	ff 75 f4             	pushl  -0xc(%ebp)
c10035aa:	e8 0b 00 00 00       	call   c10035ba <wakeup_task>
c10035af:	83 c4 10             	add    $0x10,%esp
c10035b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10035b5:	8b 40 0c             	mov    0xc(%eax),%eax
c10035b8:	c9                   	leave  
c10035b9:	c3                   	ret    

c10035ba <wakeup_task>:
c10035ba:	55                   	push   %ebp
c10035bb:	89 e5                	mov    %esp,%ebp
c10035bd:	8b 45 08             	mov    0x8(%ebp),%eax
c10035c0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10035c6:	90                   	nop
c10035c7:	5d                   	pop    %ebp
c10035c8:	c3                   	ret    

c10035c9 <kernel_thread>:
c10035c9:	55                   	push   %ebp
c10035ca:	89 e5                	mov    %esp,%ebp
c10035cc:	83 ec 58             	sub    $0x58,%esp
c10035cf:	83 ec 04             	sub    $0x4,%esp
c10035d2:	6a 4c                	push   $0x4c
c10035d4:	6a 00                	push   $0x0
c10035d6:	8d 45 ac             	lea    -0x54(%ebp),%eax
c10035d9:	50                   	push   %eax
c10035da:	e8 cb ca ff ff       	call   c10000aa <memset>
c10035df:	83 c4 10             	add    $0x10,%esp
c10035e2:	66 c7 45 e8 08 00    	movw   $0x8,-0x18(%ebp)
c10035e8:	66 c7 45 f4 10 00    	movw   $0x10,-0xc(%ebp)
c10035ee:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10035f2:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
c10035f6:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
c10035fa:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
c10035fe:	8b 45 08             	mov    0x8(%ebp),%eax
c1003601:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1003604:	8b 45 0c             	mov    0xc(%ebp),%eax
c1003607:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100360a:	b8 58 3c 00 c1       	mov    $0xc1003c58,%eax
c100360f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003612:	83 ec 04             	sub    $0x4,%esp
c1003615:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003618:	50                   	push   %eax
c1003619:	6a 00                	push   $0x0
c100361b:	ff 75 10             	pushl  0x10(%ebp)
c100361e:	e8 bb fe ff ff       	call   c10034de <do_fork>
c1003623:	83 c4 10             	add    $0x10,%esp
c1003626:	c9                   	leave  
c1003627:	c3                   	ret    

c1003628 <task_run>:
c1003628:	55                   	push   %ebp
c1003629:	89 e5                	mov    %esp,%ebp
c100362b:	83 ec 18             	sub    $0x18,%esp
c100362e:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003633:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003636:	74 63                	je     c100369b <task_run+0x73>
c1003638:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100363d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003640:	8b 45 08             	mov    0x8(%ebp),%eax
c1003643:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1003648:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100364d:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003650:	75 07                	jne    c1003659 <task_run+0x31>
c1003652:	e8 ba d6 ff ff       	call   c1000d11 <intr_enable>
c1003657:	eb 05                	jmp    c100365e <task_run+0x36>
c1003659:	e8 d2 d6 ff ff       	call   c1000d30 <intr_disable>
c100365e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003661:	8b 40 24             	mov    0x24(%eax),%eax
c1003664:	83 ec 0c             	sub    $0xc,%esp
c1003667:	50                   	push   %eax
c1003668:	e8 e6 d2 ff ff       	call   c1000953 <set_ts_esp0>
c100366d:	83 c4 10             	add    $0x10,%esp
c1003670:	8b 45 08             	mov    0x8(%ebp),%eax
c1003673:	8b 40 28             	mov    0x28(%eax),%eax
c1003676:	83 ec 0c             	sub    $0xc,%esp
c1003679:	50                   	push   %eax
c100367a:	e8 d7 cb ff ff       	call   c1000256 <lcr3>
c100367f:	83 c4 10             	add    $0x10,%esp
c1003682:	8b 45 08             	mov    0x8(%ebp),%eax
c1003685:	8d 50 30             	lea    0x30(%eax),%edx
c1003688:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100368b:	83 c0 30             	add    $0x30,%eax
c100368e:	83 ec 08             	sub    $0x8,%esp
c1003691:	52                   	push   %edx
c1003692:	50                   	push   %eax
c1003693:	e8 c5 05 00 00       	call   c1003c5d <switch_to>
c1003698:	83 c4 10             	add    $0x10,%esp
c100369b:	90                   	nop
c100369c:	c9                   	leave  
c100369d:	c3                   	ret    

c100369e <schedule>:
c100369e:	55                   	push   %ebp
c100369f:	89 e5                	mov    %esp,%ebp
c10036a1:	83 ec 18             	sub    $0x18,%esp
c10036a4:	c7 45 ec 84 0c 01 c1 	movl   $0xc1010c84,-0x14(%ebp)
c10036ab:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10036ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10036b1:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10036b6:	8b 00                	mov    (%eax),%eax
c10036b8:	85 c0                	test   %eax,%eax
c10036ba:	75 0c                	jne    c10036c8 <schedule+0x2a>
c10036bc:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10036c1:	8b 40 04             	mov    0x4(%eax),%eax
c10036c4:	85 c0                	test   %eax,%eax
c10036c6:	74 0b                	je     c10036d3 <schedule+0x35>
c10036c8:	0f b6 05 ac 0c 01 c1 	movzbl 0xc1010cac,%eax
c10036cf:	3c 01                	cmp    $0x1,%al
c10036d1:	75 48                	jne    c100371b <schedule+0x7d>
c10036d3:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10036d8:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c10036df:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10036e4:	83 c0 50             	add    $0x50,%eax
c10036e7:	50                   	push   %eax
c10036e8:	e8 a5 fa ff ff       	call   c1003192 <add_link>
c10036ed:	83 c4 04             	add    $0x4,%esp
c10036f0:	eb 29                	jmp    c100371b <schedule+0x7d>
c10036f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036f5:	83 e8 50             	sub    $0x50,%eax
c10036f8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10036fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10036fe:	8b 00                	mov    (%eax),%eax
c1003700:	85 c0                	test   %eax,%eax
c1003702:	75 17                	jne    c100371b <schedule+0x7d>
c1003704:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003707:	8b 40 04             	mov    0x4(%eax),%eax
c100370a:	85 c0                	test   %eax,%eax
c100370c:	74 0d                	je     c100371b <schedule+0x7d>
c100370e:	ff 75 f4             	pushl  -0xc(%ebp)
c1003711:	e8 cc fa ff ff       	call   c10031e2 <remove_link>
c1003716:	83 c4 04             	add    $0x4,%esp
c1003719:	eb 17                	jmp    c1003732 <schedule+0x94>
c100371b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100371e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003721:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003724:	8b 40 04             	mov    0x4(%eax),%eax
c1003727:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100372a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100372d:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1003730:	75 c0                	jne    c10036f2 <schedule+0x54>
c1003732:	83 ec 0c             	sub    $0xc,%esp
c1003735:	ff 75 f0             	pushl  -0x10(%ebp)
c1003738:	e8 eb fe ff ff       	call   c1003628 <task_run>
c100373d:	83 c4 10             	add    $0x10,%esp
c1003740:	90                   	nop
c1003741:	c9                   	leave  
c1003742:	c3                   	ret    

c1003743 <thread_block>:
c1003743:	55                   	push   %ebp
c1003744:	89 e5                	mov    %esp,%ebp
c1003746:	83 ec 18             	sub    $0x18,%esp
c1003749:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c100374d:	74 19                	je     c1003768 <thread_block+0x25>
c100374f:	68 f1 9f 00 c1       	push   $0xc1009ff1
c1003754:	68 14 a1 00 c1       	push   $0xc100a114
c1003759:	68 a4 01 00 00       	push   $0x1a4
c100375e:	68 04 a0 00 c1       	push   $0xc100a004
c1003763:	e8 a5 cb ff ff       	call   c100030d <__PANIC>
c1003768:	e8 e3 d5 ff ff       	call   c1000d50 <intr_save>
c100376d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003770:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003775:	8b 55 08             	mov    0x8(%ebp),%edx
c1003778:	89 10                	mov    %edx,(%eax)
c100377a:	e8 1f ff ff ff       	call   c100369e <schedule>
c100377f:	83 ec 0c             	sub    $0xc,%esp
c1003782:	ff 75 f4             	pushl  -0xc(%ebp)
c1003785:	e8 d9 d5 ff ff       	call   c1000d63 <intr_restore>
c100378a:	83 c4 10             	add    $0x10,%esp
c100378d:	90                   	nop
c100378e:	c9                   	leave  
c100378f:	c3                   	ret    

c1003790 <thread_unblock>:
c1003790:	55                   	push   %ebp
c1003791:	89 e5                	mov    %esp,%ebp
c1003793:	83 ec 18             	sub    $0x18,%esp
c1003796:	c7 45 f0 84 0c 01 c1 	movl   $0xc1010c84,-0x10(%ebp)
c100379d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10037a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10037a3:	e8 a8 d5 ff ff       	call   c1000d50 <intr_save>
c10037a8:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10037ab:	8b 45 08             	mov    0x8(%ebp),%eax
c10037ae:	8b 00                	mov    (%eax),%eax
c10037b0:	83 f8 01             	cmp    $0x1,%eax
c10037b3:	74 19                	je     c10037ce <thread_unblock+0x3e>
c10037b5:	68 35 a0 00 c1       	push   $0xc100a035
c10037ba:	68 24 a1 00 c1       	push   $0xc100a124
c10037bf:	68 b5 01 00 00       	push   $0x1b5
c10037c4:	68 04 a0 00 c1       	push   $0xc100a004
c10037c9:	e8 3f cb ff ff       	call   c100030d <__PANIC>
c10037ce:	8b 45 08             	mov    0x8(%ebp),%eax
c10037d1:	8b 00                	mov    (%eax),%eax
c10037d3:	85 c0                	test   %eax,%eax
c10037d5:	74 58                	je     c100382f <thread_unblock+0x9f>
c10037d7:	eb 24                	jmp    c10037fd <thread_unblock+0x6d>
c10037d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037dc:	83 e8 50             	sub    $0x50,%eax
c10037df:	39 45 08             	cmp    %eax,0x8(%ebp)
c10037e2:	75 19                	jne    c10037fd <thread_unblock+0x6d>
c10037e4:	68 4c a0 00 c1       	push   $0xc100a04c
c10037e9:	68 24 a1 00 c1       	push   $0xc100a124
c10037ee:	68 ba 01 00 00       	push   $0x1ba
c10037f3:	68 04 a0 00 c1       	push   $0xc100a004
c10037f8:	e8 10 cb ff ff       	call   c100030d <__PANIC>
c10037fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003800:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003803:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003806:	8b 40 04             	mov    0x4(%eax),%eax
c1003809:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100380c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100380f:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1003812:	75 c5                	jne    c10037d9 <thread_unblock+0x49>
c1003814:	8b 45 08             	mov    0x8(%ebp),%eax
c1003817:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100381d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003820:	83 c0 50             	add    $0x50,%eax
c1003823:	83 ec 0c             	sub    $0xc,%esp
c1003826:	50                   	push   %eax
c1003827:	e8 66 f9 ff ff       	call   c1003192 <add_link>
c100382c:	83 c4 10             	add    $0x10,%esp
c100382f:	83 ec 0c             	sub    $0xc,%esp
c1003832:	ff 75 ec             	pushl  -0x14(%ebp)
c1003835:	e8 29 d5 ff ff       	call   c1000d63 <intr_restore>
c100383a:	83 c4 10             	add    $0x10,%esp
c100383d:	90                   	nop
c100383e:	c9                   	leave  
c100383f:	c3                   	ret    

c1003840 <print_taskinfo>:
c1003840:	55                   	push   %ebp
c1003841:	89 e5                	mov    %esp,%ebp
c1003843:	83 ec 08             	sub    $0x8,%esp
c1003846:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100384b:	83 ec 0c             	sub    $0xc,%esp
c100384e:	50                   	push   %eax
c100384f:	e8 09 f9 ff ff       	call   c100315d <get_task_name>
c1003854:	83 c4 10             	add    $0x10,%esp
c1003857:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c100385d:	8b 52 0c             	mov    0xc(%edx),%edx
c1003860:	83 ec 04             	sub    $0x4,%esp
c1003863:	50                   	push   %eax
c1003864:	52                   	push   %edx
c1003865:	68 80 a0 00 c1       	push   $0xc100a080
c100386a:	e8 27 0e 00 00       	call   c1004696 <printk>
c100386f:	83 c4 10             	add    $0x10,%esp
c1003872:	83 ec 08             	sub    $0x8,%esp
c1003875:	ff 75 08             	pushl  0x8(%ebp)
c1003878:	68 a2 a0 00 c1       	push   $0xc100a0a2
c100387d:	e8 14 0e 00 00       	call   c1004696 <printk>
c1003882:	83 c4 10             	add    $0x10,%esp
c1003885:	83 ec 0c             	sub    $0xc,%esp
c1003888:	68 af a0 00 c1       	push   $0xc100a0af
c100388d:	e8 04 0e 00 00       	call   c1004696 <printk>
c1003892:	83 c4 10             	add    $0x10,%esp
c1003895:	b8 00 00 00 00       	mov    $0x0,%eax
c100389a:	c9                   	leave  
c100389b:	c3                   	ret    

c100389c <do_exit>:
c100389c:	55                   	push   %ebp
c100389d:	89 e5                	mov    %esp,%ebp
c100389f:	83 ec 08             	sub    $0x8,%esp
c10038a2:	83 ec 0c             	sub    $0xc,%esp
c10038a5:	68 cb a0 00 c1       	push   $0xc100a0cb
c10038aa:	e8 e7 0d 00 00       	call   c1004696 <printk>
c10038af:	83 c4 10             	add    $0x10,%esp
c10038b2:	eb fe                	jmp    c10038b2 <do_exit+0x16>

c10038b4 <do_execve>:
c10038b4:	55                   	push   %ebp
c10038b5:	89 e5                	mov    %esp,%ebp
c10038b7:	b8 00 00 00 00       	mov    $0x0,%eax
c10038bc:	5d                   	pop    %ebp
c10038bd:	c3                   	ret    

c10038be <kernel_execve>:
c10038be:	55                   	push   %ebp
c10038bf:	89 e5                	mov    %esp,%ebp
c10038c1:	83 ec 18             	sub    $0x18,%esp
c10038c4:	83 ec 0c             	sub    $0xc,%esp
c10038c7:	ff 75 08             	pushl  0x8(%ebp)
c10038ca:	e8 4f c8 ff ff       	call   c100011e <strlen>
c10038cf:	83 c4 10             	add    $0x10,%esp
c10038d2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10038d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10038d8:	c9                   	leave  
c10038d9:	c3                   	ret    

c10038da <user_main>:
c10038da:	55                   	push   %ebp
c10038db:	89 e5                	mov    %esp,%ebp
c10038dd:	90                   	nop
c10038de:	5d                   	pop    %ebp
c10038df:	c3                   	ret    

c10038e0 <set_user_cr3>:
c10038e0:	55                   	push   %ebp
c10038e1:	89 e5                	mov    %esp,%ebp
c10038e3:	57                   	push   %edi
c10038e4:	56                   	push   %esi
c10038e5:	53                   	push   %ebx
c10038e6:	83 ec 2c             	sub    $0x2c,%esp
c10038e9:	83 ec 08             	sub    $0x8,%esp
c10038ec:	6a 02                	push   $0x2
c10038ee:	68 00 10 00 00       	push   $0x1000
c10038f3:	e8 98 f0 ff ff       	call   c1002990 <vmm_malloc>
c10038f8:	83 c4 10             	add    $0x10,%esp
c10038fb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10038fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003901:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1003906:	ba 00 10 00 00       	mov    $0x1000,%edx
c100390b:	8b 0b                	mov    (%ebx),%ecx
c100390d:	89 08                	mov    %ecx,(%eax)
c100390f:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003913:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003917:	8d 78 04             	lea    0x4(%eax),%edi
c100391a:	83 e7 fc             	and    $0xfffffffc,%edi
c100391d:	29 f8                	sub    %edi,%eax
c100391f:	29 c3                	sub    %eax,%ebx
c1003921:	01 c2                	add    %eax,%edx
c1003923:	83 e2 fc             	and    $0xfffffffc,%edx
c1003926:	89 d0                	mov    %edx,%eax
c1003928:	c1 e8 02             	shr    $0x2,%eax
c100392b:	89 de                	mov    %ebx,%esi
c100392d:	89 c1                	mov    %eax,%ecx
c100392f:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003931:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003934:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003937:	a1 00 1c 61 c1       	mov    0xc1611c00,%eax
c100393c:	83 ec 08             	sub    $0x8,%esp
c100393f:	50                   	push   %eax
c1003940:	68 d7 a0 00 c1       	push   $0xc100a0d7
c1003945:	e8 4c 0d 00 00       	call   c1004696 <printk>
c100394a:	83 c4 10             	add    $0x10,%esp
c100394d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003950:	05 00 0c 00 00       	add    $0xc00,%eax
c1003955:	8b 00                	mov    (%eax),%eax
c1003957:	83 ec 08             	sub    $0x8,%esp
c100395a:	50                   	push   %eax
c100395b:	68 eb a0 00 c1       	push   $0xc100a0eb
c1003960:	e8 31 0d 00 00       	call   c1004696 <printk>
c1003965:	83 c4 10             	add    $0x10,%esp
c1003968:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100396b:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100396e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003971:	c1 e8 16             	shr    $0x16,%eax
c1003974:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100397b:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100397e:	01 d0                	add    %edx,%eax
c1003980:	8b 00                	mov    (%eax),%eax
c1003982:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003987:	2d 00 00 00 40       	sub    $0x40000000,%eax
c100398c:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100398f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003992:	c1 e8 0c             	shr    $0xc,%eax
c1003995:	25 ff 03 00 00       	and    $0x3ff,%eax
c100399a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10039a1:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10039a4:	01 d0                	add    %edx,%eax
c10039a6:	8b 00                	mov    (%eax),%eax
c10039a8:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10039ad:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10039b0:	83 ec 08             	sub    $0x8,%esp
c10039b3:	ff 75 d4             	pushl  -0x2c(%ebp)
c10039b6:	68 fb a0 00 c1       	push   $0xc100a0fb
c10039bb:	e8 d6 0c 00 00       	call   c1004696 <printk>
c10039c0:	83 c4 10             	add    $0x10,%esp
c10039c3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10039c6:	8d 65 f4             	lea    -0xc(%ebp),%esp
c10039c9:	5b                   	pop    %ebx
c10039ca:	5e                   	pop    %esi
c10039cb:	5f                   	pop    %edi
c10039cc:	5d                   	pop    %ebp
c10039cd:	c3                   	ret    

c10039ce <user_task_init>:
c10039ce:	55                   	push   %ebp
c10039cf:	89 e5                	mov    %esp,%ebp
c10039d1:	53                   	push   %ebx
c10039d2:	83 ec 14             	sub    $0x14,%esp
c10039d5:	83 ec 0c             	sub    $0xc,%esp
c10039d8:	6a 00                	push   $0x0
c10039da:	e8 62 f9 ff ff       	call   c1003341 <alloc_task>
c10039df:	83 c4 10             	add    $0x10,%esp
c10039e2:	a3 0c 30 a1 c1       	mov    %eax,0xc1a1300c
c10039e7:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10039ec:	85 c0                	test   %eax,%eax
c10039ee:	75 10                	jne    c1003a00 <user_task_init+0x32>
c10039f0:	83 ec 0c             	sub    $0xc,%esp
c10039f3:	68 d8 9f 00 c1       	push   $0xc1009fd8
c10039f8:	e8 99 0c 00 00       	call   c1004696 <printk>
c10039fd:	83 c4 10             	add    $0x10,%esp
c1003a00:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a05:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c1003a0b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a10:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003a17:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a1c:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1003a23:	8b 1d 0c 30 a1 c1    	mov    0xc1a1300c,%ebx
c1003a29:	e8 80 f6 ff ff       	call   c10030ae <alloc_pid>
c1003a2e:	89 43 0c             	mov    %eax,0xc(%ebx)
c1003a31:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a36:	83 ec 08             	sub    $0x8,%esp
c1003a39:	68 09 a1 00 c1       	push   $0xc100a109
c1003a3e:	50                   	push   %eax
c1003a3f:	e8 e4 f6 ff ff       	call   c1003128 <set_task_name>
c1003a44:	83 c4 10             	add    $0x10,%esp
c1003a47:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a4c:	c7 40 24 00 00 00 f8 	movl   $0xf8000000,0x24(%eax)
c1003a53:	8b 1d 0c 30 a1 c1    	mov    0xc1a1300c,%ebx
c1003a59:	e8 82 fe ff ff       	call   c10038e0 <set_user_cr3>
c1003a5e:	89 43 28             	mov    %eax,0x28(%ebx)
c1003a61:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a66:	8d 90 b4 0f 00 00    	lea    0xfb4(%eax),%edx
c1003a6c:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a71:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003a74:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a79:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003a7c:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1003a83:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a88:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003a8b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1003a92:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003a97:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003a9a:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1003aa1:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003aa6:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003aa9:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c1003ab0:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ab5:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003ab8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003abe:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ac3:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003ac6:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c1003acd:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ad2:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003ad5:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1003adc:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ae1:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003ae4:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1003aeb:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003af0:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003af3:	66 c7 40 3c 1b 00    	movw   $0x1b,0x3c(%eax)
c1003af9:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003afe:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b01:	66 c7 40 48 23 00    	movw   $0x23,0x48(%eax)
c1003b07:	8b 15 0c 30 a1 c1    	mov    0xc1a1300c,%edx
c1003b0d:	8b 52 2c             	mov    0x2c(%edx),%edx
c1003b10:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c1003b14:	66 89 42 24          	mov    %ax,0x24(%edx)
c1003b18:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b1d:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b20:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1003b24:	66 89 50 28          	mov    %dx,0x28(%eax)
c1003b28:	8b 15 0c 30 a1 c1    	mov    0xc1a1300c,%edx
c1003b2e:	8b 52 2c             	mov    0x2c(%edx),%edx
c1003b31:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1003b35:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1003b39:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b3e:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b41:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1003b47:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b4c:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b4f:	8b 55 08             	mov    0x8(%ebp),%edx
c1003b52:	89 50 38             	mov    %edx,0x38(%eax)
c1003b55:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b5a:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b5d:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1003b64:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b69:	89 c2                	mov    %eax,%edx
c1003b6b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b70:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003b73:	81 c2 b4 0f 00 00    	add    $0xfb4,%edx
c1003b79:	89 50 44             	mov    %edx,0x44(%eax)
c1003b7c:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b81:	8b 50 2c             	mov    0x2c(%eax),%edx
c1003b84:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b89:	8b 52 38             	mov    0x38(%edx),%edx
c1003b8c:	89 50 30             	mov    %edx,0x30(%eax)
c1003b8f:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b94:	8b 50 2c             	mov    0x2c(%eax),%edx
c1003b97:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003b9c:	89 50 34             	mov    %edx,0x34(%eax)
c1003b9f:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ba4:	8b 50 2c             	mov    0x2c(%eax),%edx
c1003ba7:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003bac:	8b 52 10             	mov    0x10(%edx),%edx
c1003baf:	89 50 38             	mov    %edx,0x38(%eax)
c1003bb2:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003bb7:	8b 50 2c             	mov    0x2c(%eax),%edx
c1003bba:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003bbf:	8b 52 14             	mov    0x14(%edx),%edx
c1003bc2:	89 50 40             	mov    %edx,0x40(%eax)
c1003bc5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003bcc:	eb 16                	jmp    c1003be4 <user_task_init+0x216>
c1003bce:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003bd3:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003bd6:	83 c2 18             	add    $0x18,%edx
c1003bd9:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1003be0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003be4:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1003be8:	7e e4                	jle    c1003bce <user_task_init+0x200>
c1003bea:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003bef:	83 c0 50             	add    $0x50,%eax
c1003bf2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003bf5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003bf8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003bfb:	89 50 04             	mov    %edx,0x4(%eax)
c1003bfe:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c01:	8b 50 04             	mov    0x4(%eax),%edx
c1003c04:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c07:	89 10                	mov    %edx,(%eax)
c1003c09:	90                   	nop
c1003c0a:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c0f:	83 ec 0c             	sub    $0xc,%esp
c1003c12:	50                   	push   %eax
c1003c13:	e8 fd f5 ff ff       	call   c1003215 <add_pid_hash>
c1003c18:	83 c4 10             	add    $0x10,%esp
c1003c1b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c20:	83 ec 0c             	sub    $0xc,%esp
c1003c23:	50                   	push   %eax
c1003c24:	e8 91 f9 ff ff       	call   c10035ba <wakeup_task>
c1003c29:	83 c4 10             	add    $0x10,%esp
c1003c2c:	a1 8c 0c 01 c1       	mov    0xc1010c8c,%eax
c1003c31:	83 c0 01             	add    $0x1,%eax
c1003c34:	a3 8c 0c 01 c1       	mov    %eax,0xc1010c8c
c1003c39:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c3e:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1003c43:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003c48:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003c4b:	89 c4                	mov    %eax,%esp
c1003c4d:	e9 39 d1 ff ff       	jmp    c1000d8b <__trapret>
c1003c52:	90                   	nop
c1003c53:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1003c56:	c9                   	leave  
c1003c57:	c3                   	ret    

c1003c58 <kernel_thread_entry>:
c1003c58:	fb                   	sti    
c1003c59:	52                   	push   %edx
c1003c5a:	ff d3                	call   *%ebx
c1003c5c:	c3                   	ret    

c1003c5d <switch_to>:
c1003c5d:	8b 44 24 04          	mov    0x4(%esp),%eax
c1003c61:	8f 00                	popl   (%eax)
c1003c63:	89 60 04             	mov    %esp,0x4(%eax)
c1003c66:	89 58 08             	mov    %ebx,0x8(%eax)
c1003c69:	89 48 0c             	mov    %ecx,0xc(%eax)
c1003c6c:	89 50 10             	mov    %edx,0x10(%eax)
c1003c6f:	89 70 14             	mov    %esi,0x14(%eax)
c1003c72:	89 78 18             	mov    %edi,0x18(%eax)
c1003c75:	89 68 1c             	mov    %ebp,0x1c(%eax)
c1003c78:	8b 44 24 04          	mov    0x4(%esp),%eax
c1003c7c:	8b 68 1c             	mov    0x1c(%eax),%ebp
c1003c7f:	8b 78 18             	mov    0x18(%eax),%edi
c1003c82:	8b 70 14             	mov    0x14(%eax),%esi
c1003c85:	8b 50 10             	mov    0x10(%eax),%edx
c1003c88:	8b 48 0c             	mov    0xc(%eax),%ecx
c1003c8b:	8b 58 08             	mov    0x8(%eax),%ebx
c1003c8e:	8b 60 04             	mov    0x4(%eax),%esp
c1003c91:	ff 30                	pushl  (%eax)
c1003c93:	c3                   	ret    

c1003c94 <pic_setmask>:
c1003c94:	55                   	push   %ebp
c1003c95:	89 e5                	mov    %esp,%ebp
c1003c97:	83 ec 28             	sub    $0x28,%esp
c1003c9a:	8b 45 08             	mov    0x8(%ebp),%eax
c1003c9d:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
c1003ca1:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1003ca5:	66 a3 04 db 00 c1    	mov    %ax,0xc100db04
c1003cab:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1003caf:	88 45 f7             	mov    %al,-0x9(%ebp)
c1003cb2:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1003cb6:	66 c1 e8 08          	shr    $0x8,%ax
c1003cba:	88 45 f6             	mov    %al,-0xa(%ebp)
c1003cbd:	0f b6 05 a5 0c 01 c1 	movzbl 0xc1010ca5,%eax
c1003cc4:	84 c0                	test   %al,%al
c1003cc6:	74 27                	je     c1003cef <pic_setmask+0x5b>
c1003cc8:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1003ccc:	83 ec 08             	sub    $0x8,%esp
c1003ccf:	50                   	push   %eax
c1003cd0:	6a 21                	push   $0x21
c1003cd2:	e8 65 c3 ff ff       	call   c100003c <outb>
c1003cd7:	83 c4 10             	add    $0x10,%esp
c1003cda:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1003cde:	83 ec 08             	sub    $0x8,%esp
c1003ce1:	50                   	push   %eax
c1003ce2:	68 a1 00 00 00       	push   $0xa1
c1003ce7:	e8 50 c3 ff ff       	call   c100003c <outb>
c1003cec:	83 c4 10             	add    $0x10,%esp
c1003cef:	90                   	nop
c1003cf0:	c9                   	leave  
c1003cf1:	c3                   	ret    

c1003cf2 <pic_enable>:
c1003cf2:	55                   	push   %ebp
c1003cf3:	89 e5                	mov    %esp,%ebp
c1003cf5:	83 ec 08             	sub    $0x8,%esp
c1003cf8:	8b 45 08             	mov    0x8(%ebp),%eax
c1003cfb:	ba 01 00 00 00       	mov    $0x1,%edx
c1003d00:	89 c1                	mov    %eax,%ecx
c1003d02:	d3 e2                	shl    %cl,%edx
c1003d04:	89 d0                	mov    %edx,%eax
c1003d06:	f7 d0                	not    %eax
c1003d08:	89 c2                	mov    %eax,%edx
c1003d0a:	0f b7 05 04 db 00 c1 	movzwl 0xc100db04,%eax
c1003d11:	21 d0                	and    %edx,%eax
c1003d13:	0f b7 c0             	movzwl %ax,%eax
c1003d16:	83 ec 0c             	sub    $0xc,%esp
c1003d19:	50                   	push   %eax
c1003d1a:	e8 75 ff ff ff       	call   c1003c94 <pic_setmask>
c1003d1f:	83 c4 10             	add    $0x10,%esp
c1003d22:	90                   	nop
c1003d23:	c9                   	leave  
c1003d24:	c3                   	ret    

c1003d25 <pic_init>:
c1003d25:	55                   	push   %ebp
c1003d26:	89 e5                	mov    %esp,%ebp
c1003d28:	83 ec 08             	sub    $0x8,%esp
c1003d2b:	c6 05 a5 0c 01 c1 01 	movb   $0x1,0xc1010ca5
c1003d32:	83 ec 08             	sub    $0x8,%esp
c1003d35:	68 ff 00 00 00       	push   $0xff
c1003d3a:	6a 21                	push   $0x21
c1003d3c:	e8 fb c2 ff ff       	call   c100003c <outb>
c1003d41:	83 c4 10             	add    $0x10,%esp
c1003d44:	83 ec 08             	sub    $0x8,%esp
c1003d47:	68 ff 00 00 00       	push   $0xff
c1003d4c:	68 a1 00 00 00       	push   $0xa1
c1003d51:	e8 e6 c2 ff ff       	call   c100003c <outb>
c1003d56:	83 c4 10             	add    $0x10,%esp
c1003d59:	83 ec 08             	sub    $0x8,%esp
c1003d5c:	6a 11                	push   $0x11
c1003d5e:	6a 20                	push   $0x20
c1003d60:	e8 d7 c2 ff ff       	call   c100003c <outb>
c1003d65:	83 c4 10             	add    $0x10,%esp
c1003d68:	83 ec 08             	sub    $0x8,%esp
c1003d6b:	6a 11                	push   $0x11
c1003d6d:	68 a0 00 00 00       	push   $0xa0
c1003d72:	e8 c5 c2 ff ff       	call   c100003c <outb>
c1003d77:	83 c4 10             	add    $0x10,%esp
c1003d7a:	83 ec 08             	sub    $0x8,%esp
c1003d7d:	6a 20                	push   $0x20
c1003d7f:	6a 21                	push   $0x21
c1003d81:	e8 b6 c2 ff ff       	call   c100003c <outb>
c1003d86:	83 c4 10             	add    $0x10,%esp
c1003d89:	83 ec 08             	sub    $0x8,%esp
c1003d8c:	6a 28                	push   $0x28
c1003d8e:	68 a1 00 00 00       	push   $0xa1
c1003d93:	e8 a4 c2 ff ff       	call   c100003c <outb>
c1003d98:	83 c4 10             	add    $0x10,%esp
c1003d9b:	83 ec 08             	sub    $0x8,%esp
c1003d9e:	6a 04                	push   $0x4
c1003da0:	6a 21                	push   $0x21
c1003da2:	e8 95 c2 ff ff       	call   c100003c <outb>
c1003da7:	83 c4 10             	add    $0x10,%esp
c1003daa:	83 ec 08             	sub    $0x8,%esp
c1003dad:	6a 02                	push   $0x2
c1003daf:	68 a1 00 00 00       	push   $0xa1
c1003db4:	e8 83 c2 ff ff       	call   c100003c <outb>
c1003db9:	83 c4 10             	add    $0x10,%esp
c1003dbc:	83 ec 08             	sub    $0x8,%esp
c1003dbf:	6a 03                	push   $0x3
c1003dc1:	6a 21                	push   $0x21
c1003dc3:	e8 74 c2 ff ff       	call   c100003c <outb>
c1003dc8:	83 c4 10             	add    $0x10,%esp
c1003dcb:	83 ec 08             	sub    $0x8,%esp
c1003dce:	6a 03                	push   $0x3
c1003dd0:	68 a1 00 00 00       	push   $0xa1
c1003dd5:	e8 62 c2 ff ff       	call   c100003c <outb>
c1003dda:	83 c4 10             	add    $0x10,%esp
c1003ddd:	83 ec 08             	sub    $0x8,%esp
c1003de0:	6a 68                	push   $0x68
c1003de2:	6a 20                	push   $0x20
c1003de4:	e8 53 c2 ff ff       	call   c100003c <outb>
c1003de9:	83 c4 10             	add    $0x10,%esp
c1003dec:	83 ec 08             	sub    $0x8,%esp
c1003def:	6a 68                	push   $0x68
c1003df1:	68 a0 00 00 00       	push   $0xa0
c1003df6:	e8 41 c2 ff ff       	call   c100003c <outb>
c1003dfb:	83 c4 10             	add    $0x10,%esp
c1003dfe:	83 ec 08             	sub    $0x8,%esp
c1003e01:	6a 0a                	push   $0xa
c1003e03:	6a 20                	push   $0x20
c1003e05:	e8 32 c2 ff ff       	call   c100003c <outb>
c1003e0a:	83 c4 10             	add    $0x10,%esp
c1003e0d:	83 ec 08             	sub    $0x8,%esp
c1003e10:	6a 0a                	push   $0xa
c1003e12:	68 a0 00 00 00       	push   $0xa0
c1003e17:	e8 20 c2 ff ff       	call   c100003c <outb>
c1003e1c:	83 c4 10             	add    $0x10,%esp
c1003e1f:	0f b7 05 04 db 00 c1 	movzwl 0xc100db04,%eax
c1003e26:	66 83 f8 ff          	cmp    $0xffff,%ax
c1003e2a:	74 16                	je     c1003e42 <pic_init+0x11d>
c1003e2c:	0f b7 05 04 db 00 c1 	movzwl 0xc100db04,%eax
c1003e33:	0f b7 c0             	movzwl %ax,%eax
c1003e36:	83 ec 0c             	sub    $0xc,%esp
c1003e39:	50                   	push   %eax
c1003e3a:	e8 55 fe ff ff       	call   c1003c94 <pic_setmask>
c1003e3f:	83 c4 10             	add    $0x10,%esp
c1003e42:	90                   	nop
c1003e43:	c9                   	leave  
c1003e44:	c3                   	ret    

c1003e45 <delay>:
c1003e45:	55                   	push   %ebp
c1003e46:	89 e5                	mov    %esp,%ebp
c1003e48:	83 ec 08             	sub    $0x8,%esp
c1003e4b:	83 ec 0c             	sub    $0xc,%esp
c1003e4e:	68 84 00 00 00       	push   $0x84
c1003e53:	e8 a8 c1 ff ff       	call   c1000000 <inb>
c1003e58:	83 c4 10             	add    $0x10,%esp
c1003e5b:	83 ec 0c             	sub    $0xc,%esp
c1003e5e:	68 84 00 00 00       	push   $0x84
c1003e63:	e8 98 c1 ff ff       	call   c1000000 <inb>
c1003e68:	83 c4 10             	add    $0x10,%esp
c1003e6b:	83 ec 0c             	sub    $0xc,%esp
c1003e6e:	68 84 00 00 00       	push   $0x84
c1003e73:	e8 88 c1 ff ff       	call   c1000000 <inb>
c1003e78:	83 c4 10             	add    $0x10,%esp
c1003e7b:	83 ec 0c             	sub    $0xc,%esp
c1003e7e:	68 84 00 00 00       	push   $0x84
c1003e83:	e8 78 c1 ff ff       	call   c1000000 <inb>
c1003e88:	83 c4 10             	add    $0x10,%esp
c1003e8b:	90                   	nop
c1003e8c:	c9                   	leave  
c1003e8d:	c3                   	ret    

c1003e8e <serial_init>:
c1003e8e:	55                   	push   %ebp
c1003e8f:	89 e5                	mov    %esp,%ebp
c1003e91:	83 ec 08             	sub    $0x8,%esp
c1003e94:	83 ec 08             	sub    $0x8,%esp
c1003e97:	6a 00                	push   $0x0
c1003e99:	68 fa 03 00 00       	push   $0x3fa
c1003e9e:	e8 99 c1 ff ff       	call   c100003c <outb>
c1003ea3:	83 c4 10             	add    $0x10,%esp
c1003ea6:	83 ec 08             	sub    $0x8,%esp
c1003ea9:	68 80 00 00 00       	push   $0x80
c1003eae:	68 fb 03 00 00       	push   $0x3fb
c1003eb3:	e8 84 c1 ff ff       	call   c100003c <outb>
c1003eb8:	83 c4 10             	add    $0x10,%esp
c1003ebb:	83 ec 08             	sub    $0x8,%esp
c1003ebe:	6a 0c                	push   $0xc
c1003ec0:	68 f8 03 00 00       	push   $0x3f8
c1003ec5:	e8 72 c1 ff ff       	call   c100003c <outb>
c1003eca:	83 c4 10             	add    $0x10,%esp
c1003ecd:	83 ec 08             	sub    $0x8,%esp
c1003ed0:	6a 00                	push   $0x0
c1003ed2:	68 f9 03 00 00       	push   $0x3f9
c1003ed7:	e8 60 c1 ff ff       	call   c100003c <outb>
c1003edc:	83 c4 10             	add    $0x10,%esp
c1003edf:	83 ec 08             	sub    $0x8,%esp
c1003ee2:	6a 03                	push   $0x3
c1003ee4:	68 fb 03 00 00       	push   $0x3fb
c1003ee9:	e8 4e c1 ff ff       	call   c100003c <outb>
c1003eee:	83 c4 10             	add    $0x10,%esp
c1003ef1:	83 ec 08             	sub    $0x8,%esp
c1003ef4:	6a 00                	push   $0x0
c1003ef6:	68 fc 03 00 00       	push   $0x3fc
c1003efb:	e8 3c c1 ff ff       	call   c100003c <outb>
c1003f00:	83 c4 10             	add    $0x10,%esp
c1003f03:	83 ec 08             	sub    $0x8,%esp
c1003f06:	6a 01                	push   $0x1
c1003f08:	68 f9 03 00 00       	push   $0x3f9
c1003f0d:	e8 2a c1 ff ff       	call   c100003c <outb>
c1003f12:	83 c4 10             	add    $0x10,%esp
c1003f15:	83 ec 0c             	sub    $0xc,%esp
c1003f18:	68 fd 03 00 00       	push   $0x3fd
c1003f1d:	e8 de c0 ff ff       	call   c1000000 <inb>
c1003f22:	83 c4 10             	add    $0x10,%esp
c1003f25:	3c ff                	cmp    $0xff,%al
c1003f27:	0f 95 c0             	setne  %al
c1003f2a:	a2 a6 0c 01 c1       	mov    %al,0xc1010ca6
c1003f2f:	83 ec 0c             	sub    $0xc,%esp
c1003f32:	68 fa 03 00 00       	push   $0x3fa
c1003f37:	e8 c4 c0 ff ff       	call   c1000000 <inb>
c1003f3c:	83 c4 10             	add    $0x10,%esp
c1003f3f:	83 ec 0c             	sub    $0xc,%esp
c1003f42:	68 f8 03 00 00       	push   $0x3f8
c1003f47:	e8 b4 c0 ff ff       	call   c1000000 <inb>
c1003f4c:	83 c4 10             	add    $0x10,%esp
c1003f4f:	0f b6 05 a6 0c 01 c1 	movzbl 0xc1010ca6,%eax
c1003f56:	84 c0                	test   %al,%al
c1003f58:	74 1d                	je     c1003f77 <serial_init+0xe9>
c1003f5a:	83 ec 0c             	sub    $0xc,%esp
c1003f5d:	68 33 a1 00 c1       	push   $0xc100a133
c1003f62:	e8 2f 07 00 00       	call   c1004696 <printk>
c1003f67:	83 c4 10             	add    $0x10,%esp
c1003f6a:	83 ec 0c             	sub    $0xc,%esp
c1003f6d:	6a 04                	push   $0x4
c1003f6f:	e8 7e fd ff ff       	call   c1003cf2 <pic_enable>
c1003f74:	83 c4 10             	add    $0x10,%esp
c1003f77:	90                   	nop
c1003f78:	c9                   	leave  
c1003f79:	c3                   	ret    

c1003f7a <lpt_putc_sub>:
c1003f7a:	55                   	push   %ebp
c1003f7b:	89 e5                	mov    %esp,%ebp
c1003f7d:	83 ec 18             	sub    $0x18,%esp
c1003f80:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003f87:	eb 09                	jmp    c1003f92 <lpt_putc_sub+0x18>
c1003f89:	e8 b7 fe ff ff       	call   c1003e45 <delay>
c1003f8e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003f92:	83 ec 0c             	sub    $0xc,%esp
c1003f95:	68 79 03 00 00       	push   $0x379
c1003f9a:	e8 61 c0 ff ff       	call   c1000000 <inb>
c1003f9f:	83 c4 10             	add    $0x10,%esp
c1003fa2:	84 c0                	test   %al,%al
c1003fa4:	78 09                	js     c1003faf <lpt_putc_sub+0x35>
c1003fa6:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c1003fad:	7e da                	jle    c1003f89 <lpt_putc_sub+0xf>
c1003faf:	8b 45 08             	mov    0x8(%ebp),%eax
c1003fb2:	0f b6 c0             	movzbl %al,%eax
c1003fb5:	83 ec 08             	sub    $0x8,%esp
c1003fb8:	50                   	push   %eax
c1003fb9:	68 78 03 00 00       	push   $0x378
c1003fbe:	e8 79 c0 ff ff       	call   c100003c <outb>
c1003fc3:	83 c4 10             	add    $0x10,%esp
c1003fc6:	83 ec 08             	sub    $0x8,%esp
c1003fc9:	6a 0d                	push   $0xd
c1003fcb:	68 7a 03 00 00       	push   $0x37a
c1003fd0:	e8 67 c0 ff ff       	call   c100003c <outb>
c1003fd5:	83 c4 10             	add    $0x10,%esp
c1003fd8:	83 ec 08             	sub    $0x8,%esp
c1003fdb:	6a 08                	push   $0x8
c1003fdd:	68 7a 03 00 00       	push   $0x37a
c1003fe2:	e8 55 c0 ff ff       	call   c100003c <outb>
c1003fe7:	83 c4 10             	add    $0x10,%esp
c1003fea:	90                   	nop
c1003feb:	c9                   	leave  
c1003fec:	c3                   	ret    

c1003fed <lpt_putc>:
c1003fed:	55                   	push   %ebp
c1003fee:	89 e5                	mov    %esp,%ebp
c1003ff0:	83 ec 08             	sub    $0x8,%esp
c1003ff3:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1003ff7:	74 10                	je     c1004009 <lpt_putc+0x1c>
c1003ff9:	83 ec 0c             	sub    $0xc,%esp
c1003ffc:	ff 75 08             	pushl  0x8(%ebp)
c1003fff:	e8 76 ff ff ff       	call   c1003f7a <lpt_putc_sub>
c1004004:	83 c4 10             	add    $0x10,%esp
c1004007:	eb 27                	jmp    c1004030 <lpt_putc+0x43>
c1004009:	83 ec 0c             	sub    $0xc,%esp
c100400c:	6a 08                	push   $0x8
c100400e:	e8 67 ff ff ff       	call   c1003f7a <lpt_putc_sub>
c1004013:	83 c4 10             	add    $0x10,%esp
c1004016:	83 ec 0c             	sub    $0xc,%esp
c1004019:	6a 20                	push   $0x20
c100401b:	e8 5a ff ff ff       	call   c1003f7a <lpt_putc_sub>
c1004020:	83 c4 10             	add    $0x10,%esp
c1004023:	83 ec 0c             	sub    $0xc,%esp
c1004026:	6a 08                	push   $0x8
c1004028:	e8 4d ff ff ff       	call   c1003f7a <lpt_putc_sub>
c100402d:	83 c4 10             	add    $0x10,%esp
c1004030:	90                   	nop
c1004031:	c9                   	leave  
c1004032:	c3                   	ret    

c1004033 <cons_intr>:
c1004033:	55                   	push   %ebp
c1004034:	89 e5                	mov    %esp,%ebp
c1004036:	83 ec 18             	sub    $0x18,%esp
c1004039:	eb 3b                	jmp    c1004076 <cons_intr+0x43>
c100403b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100403f:	74 35                	je     c1004076 <cons_intr+0x43>
c1004041:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c1004046:	8d 50 01             	lea    0x1(%eax),%edx
c1004049:	89 15 24 32 a1 c1    	mov    %edx,0xc1a13224
c100404f:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004052:	88 90 20 30 a1 c1    	mov    %dl,-0x3e5ecfe0(%eax)
c1004058:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100405b:	a2 6c ec 00 c1       	mov    %al,0xc100ec6c
c1004060:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c1004065:	3d 00 02 00 00       	cmp    $0x200,%eax
c100406a:	75 0a                	jne    c1004076 <cons_intr+0x43>
c100406c:	c7 05 24 32 a1 c1 00 	movl   $0x0,0xc1a13224
c1004073:	00 00 00 
c1004076:	8b 45 08             	mov    0x8(%ebp),%eax
c1004079:	ff d0                	call   *%eax
c100407b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100407e:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c1004082:	75 b7                	jne    c100403b <cons_intr+0x8>
c1004084:	90                   	nop
c1004085:	90                   	nop
c1004086:	c9                   	leave  
c1004087:	c3                   	ret    

c1004088 <serial_proc_data>:
c1004088:	55                   	push   %ebp
c1004089:	89 e5                	mov    %esp,%ebp
c100408b:	83 ec 18             	sub    $0x18,%esp
c100408e:	83 ec 0c             	sub    $0xc,%esp
c1004091:	68 fd 03 00 00       	push   $0x3fd
c1004096:	e8 65 bf ff ff       	call   c1000000 <inb>
c100409b:	83 c4 10             	add    $0x10,%esp
c100409e:	0f b6 c0             	movzbl %al,%eax
c10040a1:	83 e0 01             	and    $0x1,%eax
c10040a4:	85 c0                	test   %eax,%eax
c10040a6:	75 07                	jne    c10040af <serial_proc_data+0x27>
c10040a8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10040ad:	eb 26                	jmp    c10040d5 <serial_proc_data+0x4d>
c10040af:	83 ec 0c             	sub    $0xc,%esp
c10040b2:	68 f8 03 00 00       	push   $0x3f8
c10040b7:	e8 44 bf ff ff       	call   c1000000 <inb>
c10040bc:	83 c4 10             	add    $0x10,%esp
c10040bf:	0f b6 c0             	movzbl %al,%eax
c10040c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10040c5:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
c10040c9:	75 07                	jne    c10040d2 <serial_proc_data+0x4a>
c10040cb:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
c10040d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10040d5:	c9                   	leave  
c10040d6:	c3                   	ret    

c10040d7 <serial_intr>:
c10040d7:	55                   	push   %ebp
c10040d8:	89 e5                	mov    %esp,%ebp
c10040da:	83 ec 08             	sub    $0x8,%esp
c10040dd:	0f b6 05 a6 0c 01 c1 	movzbl 0xc1010ca6,%eax
c10040e4:	84 c0                	test   %al,%al
c10040e6:	74 10                	je     c10040f8 <serial_intr+0x21>
c10040e8:	83 ec 0c             	sub    $0xc,%esp
c10040eb:	68 88 40 00 c1       	push   $0xc1004088
c10040f0:	e8 3e ff ff ff       	call   c1004033 <cons_intr>
c10040f5:	83 c4 10             	add    $0x10,%esp
c10040f8:	90                   	nop
c10040f9:	c9                   	leave  
c10040fa:	c3                   	ret    

c10040fb <serial_putc_sub>:
c10040fb:	55                   	push   %ebp
c10040fc:	89 e5                	mov    %esp,%ebp
c10040fe:	83 ec 18             	sub    $0x18,%esp
c1004101:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004108:	eb 09                	jmp    c1004113 <serial_putc_sub+0x18>
c100410a:	e8 36 fd ff ff       	call   c1003e45 <delay>
c100410f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004113:	83 ec 0c             	sub    $0xc,%esp
c1004116:	68 fd 03 00 00       	push   $0x3fd
c100411b:	e8 e0 be ff ff       	call   c1000000 <inb>
c1004120:	83 c4 10             	add    $0x10,%esp
c1004123:	0f b6 c0             	movzbl %al,%eax
c1004126:	83 e0 20             	and    $0x20,%eax
c1004129:	85 c0                	test   %eax,%eax
c100412b:	75 09                	jne    c1004136 <serial_putc_sub+0x3b>
c100412d:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c1004134:	7e d4                	jle    c100410a <serial_putc_sub+0xf>
c1004136:	8b 45 08             	mov    0x8(%ebp),%eax
c1004139:	0f b6 c0             	movzbl %al,%eax
c100413c:	83 ec 08             	sub    $0x8,%esp
c100413f:	50                   	push   %eax
c1004140:	68 f8 03 00 00       	push   $0x3f8
c1004145:	e8 f2 be ff ff       	call   c100003c <outb>
c100414a:	83 c4 10             	add    $0x10,%esp
c100414d:	90                   	nop
c100414e:	c9                   	leave  
c100414f:	c3                   	ret    

c1004150 <serial_putc>:
c1004150:	55                   	push   %ebp
c1004151:	89 e5                	mov    %esp,%ebp
c1004153:	83 ec 08             	sub    $0x8,%esp
c1004156:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c100415a:	74 10                	je     c100416c <serial_putc+0x1c>
c100415c:	83 ec 0c             	sub    $0xc,%esp
c100415f:	ff 75 08             	pushl  0x8(%ebp)
c1004162:	e8 94 ff ff ff       	call   c10040fb <serial_putc_sub>
c1004167:	83 c4 10             	add    $0x10,%esp
c100416a:	eb 27                	jmp    c1004193 <serial_putc+0x43>
c100416c:	83 ec 0c             	sub    $0xc,%esp
c100416f:	6a 08                	push   $0x8
c1004171:	e8 85 ff ff ff       	call   c10040fb <serial_putc_sub>
c1004176:	83 c4 10             	add    $0x10,%esp
c1004179:	83 ec 0c             	sub    $0xc,%esp
c100417c:	6a 20                	push   $0x20
c100417e:	e8 78 ff ff ff       	call   c10040fb <serial_putc_sub>
c1004183:	83 c4 10             	add    $0x10,%esp
c1004186:	83 ec 0c             	sub    $0xc,%esp
c1004189:	6a 08                	push   $0x8
c100418b:	e8 6b ff ff ff       	call   c10040fb <serial_putc_sub>
c1004190:	83 c4 10             	add    $0x10,%esp
c1004193:	90                   	nop
c1004194:	c9                   	leave  
c1004195:	c3                   	ret    

c1004196 <timer_init>:
c1004196:	55                   	push   %ebp
c1004197:	89 e5                	mov    %esp,%ebp
c1004199:	83 ec 18             	sub    $0x18,%esp
c100419c:	b8 dc 34 12 00       	mov    $0x1234dc,%eax
c10041a1:	ba 00 00 00 00       	mov    $0x0,%edx
c10041a6:	f7 75 08             	divl   0x8(%ebp)
c10041a9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10041ac:	83 ec 08             	sub    $0x8,%esp
c10041af:	6a 36                	push   $0x36
c10041b1:	6a 43                	push   $0x43
c10041b3:	e8 84 be ff ff       	call   c100003c <outb>
c10041b8:	83 c4 10             	add    $0x10,%esp
c10041bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041be:	88 45 f3             	mov    %al,-0xd(%ebp)
c10041c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041c4:	c1 e8 08             	shr    $0x8,%eax
c10041c7:	88 45 f2             	mov    %al,-0xe(%ebp)
c10041ca:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c10041ce:	83 ec 08             	sub    $0x8,%esp
c10041d1:	50                   	push   %eax
c10041d2:	6a 40                	push   $0x40
c10041d4:	e8 63 be ff ff       	call   c100003c <outb>
c10041d9:	83 c4 10             	add    $0x10,%esp
c10041dc:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
c10041e0:	83 ec 08             	sub    $0x8,%esp
c10041e3:	50                   	push   %eax
c10041e4:	6a 40                	push   $0x40
c10041e6:	e8 51 be ff ff       	call   c100003c <outb>
c10041eb:	83 c4 10             	add    $0x10,%esp
c10041ee:	c7 05 2c 32 a1 c1 00 	movl   $0x0,0xc1a1322c
c10041f5:	00 00 00 
c10041f8:	c7 05 28 32 a1 c1 00 	movl   $0x0,0xc1a13228
c10041ff:	00 00 00 
c1004202:	83 ec 0c             	sub    $0xc,%esp
c1004205:	6a 00                	push   $0x0
c1004207:	e8 e6 fa ff ff       	call   c1003cf2 <pic_enable>
c100420c:	83 c4 10             	add    $0x10,%esp
c100420f:	90                   	nop
c1004210:	c9                   	leave  
c1004211:	c3                   	ret    

c1004212 <print_cursor>:
c1004212:	55                   	push   %ebp
c1004213:	89 e5                	mov    %esp,%ebp
c1004215:	83 ec 28             	sub    $0x28,%esp
c1004218:	8b 55 08             	mov    0x8(%ebp),%edx
c100421b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100421e:	88 55 e4             	mov    %dl,-0x1c(%ebp)
c1004221:	88 45 e0             	mov    %al,-0x20(%ebp)
c1004224:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
c1004228:	89 d0                	mov    %edx,%eax
c100422a:	c1 e0 02             	shl    $0x2,%eax
c100422d:	01 d0                	add    %edx,%eax
c100422f:	c1 e0 04             	shl    $0x4,%eax
c1004232:	89 c2                	mov    %eax,%edx
c1004234:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1004238:	01 d0                	add    %edx,%eax
c100423a:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c100423e:	83 ec 08             	sub    $0x8,%esp
c1004241:	6a 0e                	push   $0xe
c1004243:	68 d4 03 00 00       	push   $0x3d4
c1004248:	e8 ef bd ff ff       	call   c100003c <outb>
c100424d:	83 c4 10             	add    $0x10,%esp
c1004250:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004254:	66 c1 e8 08          	shr    $0x8,%ax
c1004258:	0f b6 c0             	movzbl %al,%eax
c100425b:	83 ec 08             	sub    $0x8,%esp
c100425e:	50                   	push   %eax
c100425f:	68 d5 03 00 00       	push   $0x3d5
c1004264:	e8 d3 bd ff ff       	call   c100003c <outb>
c1004269:	83 c4 10             	add    $0x10,%esp
c100426c:	83 ec 08             	sub    $0x8,%esp
c100426f:	6a 0f                	push   $0xf
c1004271:	68 d4 03 00 00       	push   $0x3d4
c1004276:	e8 c1 bd ff ff       	call   c100003c <outb>
c100427b:	83 c4 10             	add    $0x10,%esp
c100427e:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004282:	0f b6 c0             	movzbl %al,%eax
c1004285:	83 ec 08             	sub    $0x8,%esp
c1004288:	50                   	push   %eax
c1004289:	68 d5 03 00 00       	push   $0x3d5
c100428e:	e8 a9 bd ff ff       	call   c100003c <outb>
c1004293:	83 c4 10             	add    $0x10,%esp
c1004296:	90                   	nop
c1004297:	c9                   	leave  
c1004298:	c3                   	ret    

c1004299 <clear>:
c1004299:	55                   	push   %ebp
c100429a:	89 e5                	mov    %esp,%ebp
c100429c:	83 ec 18             	sub    $0x18,%esp
c100429f:	66 c7 45 f4 00 0f    	movw   $0xf00,-0xc(%ebp)
c10042a5:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10042a9:	83 c8 20             	or     $0x20,%eax
c10042ac:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c10042b0:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c10042b6:	eb 1f                	jmp    c10042d7 <clear+0x3e>
c10042b8:	a1 08 db 00 c1       	mov    0xc100db08,%eax
c10042bd:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
c10042c1:	01 d2                	add    %edx,%edx
c10042c3:	01 c2                	add    %eax,%edx
c10042c5:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c10042c9:	66 89 02             	mov    %ax,(%edx)
c10042cc:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10042d0:	83 c0 01             	add    $0x1,%eax
c10042d3:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10042d7:	66 81 7d f6 cf 07    	cmpw   $0x7cf,-0xa(%ebp)
c10042dd:	76 d9                	jbe    c10042b8 <clear+0x1f>
c10042df:	c6 05 a7 0c 01 c1 00 	movb   $0x0,0xc1010ca7
c10042e6:	c6 05 a8 0c 01 c1 00 	movb   $0x0,0xc1010ca8
c10042ed:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c10042f4:	0f b6 d0             	movzbl %al,%edx
c10042f7:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c10042fe:	0f b6 c0             	movzbl %al,%eax
c1004301:	83 ec 08             	sub    $0x8,%esp
c1004304:	52                   	push   %edx
c1004305:	50                   	push   %eax
c1004306:	e8 07 ff ff ff       	call   c1004212 <print_cursor>
c100430b:	83 c4 10             	add    $0x10,%esp
c100430e:	90                   	nop
c100430f:	c9                   	leave  
c1004310:	c3                   	ret    

c1004311 <print_char>:
c1004311:	55                   	push   %ebp
c1004312:	89 e5                	mov    %esp,%ebp
c1004314:	83 ec 28             	sub    $0x28,%esp
c1004317:	8b 45 08             	mov    0x8(%ebp),%eax
c100431a:	88 45 e4             	mov    %al,-0x1c(%ebp)
c100431d:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1004323:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c1004329:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c1004330:	3c 18                	cmp    $0x18,%al
c1004332:	76 05                	jbe    c1004339 <print_char+0x28>
c1004334:	e8 60 ff ff ff       	call   c1004299 <clear>
c1004339:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c1004340:	0f b6 d0             	movzbl %al,%edx
c1004343:	89 d0                	mov    %edx,%eax
c1004345:	c1 e0 02             	shl    $0x2,%eax
c1004348:	01 d0                	add    %edx,%eax
c100434a:	c1 e0 04             	shl    $0x4,%eax
c100434d:	89 c2                	mov    %eax,%edx
c100434f:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c1004356:	0f b6 c0             	movzbl %al,%eax
c1004359:	01 d0                	add    %edx,%eax
c100435b:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c100435f:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
c1004363:	83 f8 09             	cmp    $0x9,%eax
c1004366:	74 20                	je     c1004388 <print_char+0x77>
c1004368:	83 f8 0a             	cmp    $0xa,%eax
c100436b:	75 2f                	jne    c100439c <print_char+0x8b>
c100436d:	c6 05 a8 0c 01 c1 00 	movb   $0x0,0xc1010ca8
c1004374:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c100437b:	83 c0 01             	add    $0x1,%eax
c100437e:	a2 a7 0c 01 c1       	mov    %al,0xc1010ca7
c1004383:	e9 82 00 00 00       	jmp    c100440a <print_char+0xf9>
c1004388:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c100438f:	83 c0 08             	add    $0x8,%eax
c1004392:	83 e0 f8             	and    $0xfffffff8,%eax
c1004395:	a2 a8 0c 01 c1       	mov    %al,0xc1010ca8
c100439a:	eb 6e                	jmp    c100440a <print_char+0xf9>
c100439c:	66 0f be 45 e4       	movsbw -0x1c(%ebp),%ax
c10043a1:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
c10043a5:	8b 45 0c             	mov    0xc(%ebp),%eax
c10043a8:	c1 e0 04             	shl    $0x4,%eax
c10043ab:	0f b6 c0             	movzbl %al,%eax
c10043ae:	8b 55 10             	mov    0x10(%ebp),%edx
c10043b1:	83 e2 0f             	and    $0xf,%edx
c10043b4:	09 d0                	or     %edx,%eax
c10043b6:	c1 e0 08             	shl    $0x8,%eax
c10043b9:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10043bd:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10043c1:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c10043c5:	a1 08 db 00 c1       	mov    0xc100db08,%eax
c10043ca:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c10043ce:	01 d2                	add    %edx,%edx
c10043d0:	01 c2                	add    %eax,%edx
c10043d2:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10043d6:	66 89 02             	mov    %ax,(%edx)
c10043d9:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c10043e0:	83 c0 01             	add    $0x1,%eax
c10043e3:	a2 a8 0c 01 c1       	mov    %al,0xc1010ca8
c10043e8:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c10043ef:	3c 4f                	cmp    $0x4f,%al
c10043f1:	76 16                	jbe    c1004409 <print_char+0xf8>
c10043f3:	c6 05 a8 0c 01 c1 00 	movb   $0x0,0xc1010ca8
c10043fa:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c1004401:	83 c0 01             	add    $0x1,%eax
c1004404:	a2 a7 0c 01 c1       	mov    %al,0xc1010ca7
c1004409:	90                   	nop
c100440a:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c1004411:	0f b6 d0             	movzbl %al,%edx
c1004414:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c100441b:	0f b6 c0             	movzbl %al,%eax
c100441e:	83 ec 08             	sub    $0x8,%esp
c1004421:	52                   	push   %edx
c1004422:	50                   	push   %eax
c1004423:	e8 ea fd ff ff       	call   c1004212 <print_cursor>
c1004428:	83 c4 10             	add    $0x10,%esp
c100442b:	90                   	nop
c100442c:	c9                   	leave  
c100442d:	c3                   	ret    

c100442e <print_string>:
c100442e:	55                   	push   %ebp
c100442f:	89 e5                	mov    %esp,%ebp
c1004431:	83 ec 08             	sub    $0x8,%esp
c1004434:	eb 21                	jmp    c1004457 <print_string+0x29>
c1004436:	8b 45 08             	mov    0x8(%ebp),%eax
c1004439:	8d 50 01             	lea    0x1(%eax),%edx
c100443c:	89 55 08             	mov    %edx,0x8(%ebp)
c100443f:	0f b6 00             	movzbl (%eax),%eax
c1004442:	0f be c0             	movsbl %al,%eax
c1004445:	83 ec 04             	sub    $0x4,%esp
c1004448:	ff 75 10             	pushl  0x10(%ebp)
c100444b:	ff 75 0c             	pushl  0xc(%ebp)
c100444e:	50                   	push   %eax
c100444f:	e8 bd fe ff ff       	call   c1004311 <print_char>
c1004454:	83 c4 10             	add    $0x10,%esp
c1004457:	8b 45 08             	mov    0x8(%ebp),%eax
c100445a:	0f b6 00             	movzbl (%eax),%eax
c100445d:	84 c0                	test   %al,%al
c100445f:	75 d5                	jne    c1004436 <print_string+0x8>
c1004461:	90                   	nop
c1004462:	90                   	nop
c1004463:	c9                   	leave  
c1004464:	c3                   	ret    

c1004465 <print_num>:
c1004465:	55                   	push   %ebp
c1004466:	89 e5                	mov    %esp,%ebp
c1004468:	83 ec 48             	sub    $0x48,%esp
c100446b:	8b 4d 18             	mov    0x18(%ebp),%ecx
c100446e:	8b 55 1c             	mov    0x1c(%ebp),%edx
c1004471:	8b 45 08             	mov    0x8(%ebp),%eax
c1004474:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1004477:	8b 45 0c             	mov    0xc(%ebp),%eax
c100447a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100447d:	89 c8                	mov    %ecx,%eax
c100447f:	88 45 bc             	mov    %al,-0x44(%ebp)
c1004482:	89 d0                	mov    %edx,%eax
c1004484:	88 45 b8             	mov    %al,-0x48(%ebp)
c1004487:	0f be 45 b8          	movsbl -0x48(%ebp),%eax
c100448b:	c6 44 05 c8 00       	movb   $0x0,-0x38(%ebp,%eax,1)
c1004490:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
c1004494:	83 e8 01             	sub    $0x1,%eax
c1004497:	88 45 f7             	mov    %al,-0x9(%ebp)
c100449a:	e9 c0 00 00 00       	jmp    c100455f <print_num+0xfa>
c100449f:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
c10044a3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10044a6:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10044a9:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c10044ac:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10044af:	89 55 ec             	mov    %edx,-0x14(%ebp)
c10044b2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10044b5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10044b8:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10044bc:	74 1c                	je     c10044da <print_num+0x75>
c10044be:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10044c1:	ba 00 00 00 00       	mov    $0x0,%edx
c10044c6:	f7 75 e4             	divl   -0x1c(%ebp)
c10044c9:	89 55 f0             	mov    %edx,-0x10(%ebp)
c10044cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10044cf:	ba 00 00 00 00       	mov    $0x0,%edx
c10044d4:	f7 75 e4             	divl   -0x1c(%ebp)
c10044d7:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10044da:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10044dd:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10044e0:	f7 75 e4             	divl   -0x1c(%ebp)
c10044e3:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10044e6:	89 55 dc             	mov    %edx,-0x24(%ebp)
c10044e9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10044ec:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10044ef:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10044f2:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c10044f5:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10044f8:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10044fc:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1004500:	80 7d bc 0a          	cmpb   $0xa,-0x44(%ebp)
c1004504:	75 16                	jne    c100451c <print_num+0xb7>
c1004506:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100450a:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100450f:	8d 50 30             	lea    0x30(%eax),%edx
c1004512:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004516:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c100451a:	eb 39                	jmp    c1004555 <print_num+0xf0>
c100451c:	80 7d bc 10          	cmpb   $0x10,-0x44(%ebp)
c1004520:	75 33                	jne    c1004555 <print_num+0xf0>
c1004522:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004526:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100452b:	3c 09                	cmp    $0x9,%al
c100452d:	7e 10                	jle    c100453f <print_num+0xda>
c100452f:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004533:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004538:	83 c0 37             	add    $0x37,%eax
c100453b:	89 c2                	mov    %eax,%edx
c100453d:	eb 0e                	jmp    c100454d <print_num+0xe8>
c100453f:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004543:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004548:	83 c0 30             	add    $0x30,%eax
c100454b:	89 c2                	mov    %eax,%edx
c100454d:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004551:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1004555:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004559:	83 e8 01             	sub    $0x1,%eax
c100455c:	88 45 f7             	mov    %al,-0x9(%ebp)
c100455f:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
c1004563:	0f 89 36 ff ff ff    	jns    c100449f <print_num+0x3a>
c1004569:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
c100456d:	75 5e                	jne    c10045cd <print_num+0x168>
c100456f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1004576:	90                   	nop
c1004577:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100457a:	8d 50 01             	lea    0x1(%eax),%edx
c100457d:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1004580:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004585:	3c 30                	cmp    $0x30,%al
c1004587:	74 ee                	je     c1004577 <print_num+0x112>
c1004589:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c100458d:	8d 55 c8             	lea    -0x38(%ebp),%edx
c1004590:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004593:	01 d0                	add    %edx,%eax
c1004595:	0f b6 00             	movzbl (%eax),%eax
c1004598:	84 c0                	test   %al,%al
c100459a:	74 1c                	je     c10045b8 <print_num+0x153>
c100459c:	8d 55 c8             	lea    -0x38(%ebp),%edx
c100459f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10045a2:	01 d0                	add    %edx,%eax
c10045a4:	83 ec 04             	sub    $0x4,%esp
c10045a7:	ff 75 14             	pushl  0x14(%ebp)
c10045aa:	ff 75 10             	pushl  0x10(%ebp)
c10045ad:	50                   	push   %eax
c10045ae:	e8 7b fe ff ff       	call   c100442e <print_string>
c10045b3:	83 c4 10             	add    $0x10,%esp
c10045b6:	eb 2a                	jmp    c10045e2 <print_num+0x17d>
c10045b8:	83 ec 04             	sub    $0x4,%esp
c10045bb:	ff 75 14             	pushl  0x14(%ebp)
c10045be:	ff 75 10             	pushl  0x10(%ebp)
c10045c1:	6a 30                	push   $0x30
c10045c3:	e8 49 fd ff ff       	call   c1004311 <print_char>
c10045c8:	83 c4 10             	add    $0x10,%esp
c10045cb:	eb 15                	jmp    c10045e2 <print_num+0x17d>
c10045cd:	83 ec 04             	sub    $0x4,%esp
c10045d0:	ff 75 14             	pushl  0x14(%ebp)
c10045d3:	ff 75 10             	pushl  0x10(%ebp)
c10045d6:	8d 45 c8             	lea    -0x38(%ebp),%eax
c10045d9:	50                   	push   %eax
c10045da:	e8 4f fe ff ff       	call   c100442e <print_string>
c10045df:	83 c4 10             	add    $0x10,%esp
c10045e2:	c9                   	leave  
c10045e3:	c3                   	ret    

c10045e4 <backtrace>:
c10045e4:	55                   	push   %ebp
c10045e5:	89 e5                	mov    %esp,%ebp
c10045e7:	83 ec 18             	sub    $0x18,%esp
c10045ea:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c10045f1:	3c 15                	cmp    $0x15,%al
c10045f3:	0f 86 9a 00 00 00    	jbe    c1004693 <backtrace+0xaf>
c10045f9:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c1004600:	83 e8 01             	sub    $0x1,%eax
c1004603:	a2 a8 0c 01 c1       	mov    %al,0xc1010ca8
c1004608:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c100460e:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c1004614:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c100461b:	3c 18                	cmp    $0x18,%al
c100461d:	76 05                	jbe    c1004624 <backtrace+0x40>
c100461f:	e8 75 fc ff ff       	call   c1004299 <clear>
c1004624:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c100462b:	0f b6 d0             	movzbl %al,%edx
c100462e:	89 d0                	mov    %edx,%eax
c1004630:	c1 e0 02             	shl    $0x2,%eax
c1004633:	01 d0                	add    %edx,%eax
c1004635:	c1 e0 04             	shl    $0x4,%eax
c1004638:	89 c2                	mov    %eax,%edx
c100463a:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c1004641:	0f b6 c0             	movzbl %al,%eax
c1004644:	01 d0                	add    %edx,%eax
c1004646:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c100464a:	66 c7 45 f4 20 00    	movw   $0x20,-0xc(%ebp)
c1004650:	66 c7 45 f6 00 02    	movw   $0x200,-0xa(%ebp)
c1004656:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c100465a:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c100465e:	a1 08 db 00 c1       	mov    0xc100db08,%eax
c1004663:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c1004667:	01 d2                	add    %edx,%edx
c1004669:	01 c2                	add    %eax,%edx
c100466b:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c100466f:	66 89 02             	mov    %ax,(%edx)
c1004672:	0f b6 05 a8 0c 01 c1 	movzbl 0xc1010ca8,%eax
c1004679:	0f b6 d0             	movzbl %al,%edx
c100467c:	0f b6 05 a7 0c 01 c1 	movzbl 0xc1010ca7,%eax
c1004683:	0f b6 c0             	movzbl %al,%eax
c1004686:	83 ec 08             	sub    $0x8,%esp
c1004689:	52                   	push   %edx
c100468a:	50                   	push   %eax
c100468b:	e8 82 fb ff ff       	call   c1004212 <print_cursor>
c1004690:	83 c4 10             	add    $0x10,%esp
c1004693:	90                   	nop
c1004694:	c9                   	leave  
c1004695:	c3                   	ret    

c1004696 <printk>:
c1004696:	55                   	push   %ebp
c1004697:	89 e5                	mov    %esp,%ebp
c1004699:	83 ec 38             	sub    $0x38,%esp
c100469c:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c10046a0:	8d 45 0c             	lea    0xc(%ebp),%eax
c10046a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10046a6:	e9 6e 03 00 00       	jmp    c1004a19 <printk+0x383>
c10046ab:	8b 45 08             	mov    0x8(%ebp),%eax
c10046ae:	0f b6 00             	movzbl (%eax),%eax
c10046b1:	3c 25                	cmp    $0x25,%al
c10046b3:	0f 85 3a 03 00 00    	jne    c10049f3 <printk+0x35d>
c10046b9:	90                   	nop
c10046ba:	8b 45 08             	mov    0x8(%ebp),%eax
c10046bd:	83 c0 01             	add    $0x1,%eax
c10046c0:	89 45 08             	mov    %eax,0x8(%ebp)
c10046c3:	8b 45 08             	mov    0x8(%ebp),%eax
c10046c6:	0f b6 00             	movzbl (%eax),%eax
c10046c9:	0f be c0             	movsbl %al,%eax
c10046cc:	83 e8 30             	sub    $0x30,%eax
c10046cf:	83 f8 48             	cmp    $0x48,%eax
c10046d2:	0f 87 fb 02 00 00    	ja     c10049d3 <printk+0x33d>
c10046d8:	8b 04 85 64 a1 00 c1 	mov    -0x3eff5e9c(,%eax,4),%eax
c10046df:	ff e0                	jmp    *%eax
c10046e1:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10046e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10046e8:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
c10046ec:	88 45 d7             	mov    %al,-0x29(%ebp)
c10046ef:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
c10046f3:	83 ec 04             	sub    $0x4,%esp
c10046f6:	6a 02                	push   $0x2
c10046f8:	6a 00                	push   $0x0
c10046fa:	50                   	push   %eax
c10046fb:	e8 11 fc ff ff       	call   c1004311 <print_char>
c1004700:	83 c4 10             	add    $0x10,%esp
c1004703:	e9 e0 02 00 00       	jmp    c10049e8 <printk+0x352>
c1004708:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c100470c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100470f:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004712:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1004715:	83 ec 04             	sub    $0x4,%esp
c1004718:	6a 02                	push   $0x2
c100471a:	6a 00                	push   $0x0
c100471c:	ff 75 dc             	pushl  -0x24(%ebp)
c100471f:	e8 0a fd ff ff       	call   c100442e <print_string>
c1004724:	83 c4 10             	add    $0x10,%esp
c1004727:	e9 bc 02 00 00       	jmp    c10049e8 <printk+0x352>
c100472c:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004730:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004733:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004736:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004739:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100473d:	74 23                	je     c1004762 <printk+0xcc>
c100473f:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004743:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004746:	99                   	cltd   
c1004747:	83 ec 04             	sub    $0x4,%esp
c100474a:	6a 01                	push   $0x1
c100474c:	51                   	push   %ecx
c100474d:	6a 0a                	push   $0xa
c100474f:	6a 02                	push   $0x2
c1004751:	6a 00                	push   $0x0
c1004753:	52                   	push   %edx
c1004754:	50                   	push   %eax
c1004755:	e8 0b fd ff ff       	call   c1004465 <print_num>
c100475a:	83 c4 20             	add    $0x20,%esp
c100475d:	e9 86 02 00 00       	jmp    c10049e8 <printk+0x352>
c1004762:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004765:	99                   	cltd   
c1004766:	83 ec 04             	sub    $0x4,%esp
c1004769:	6a 00                	push   $0x0
c100476b:	6a 14                	push   $0x14
c100476d:	6a 0a                	push   $0xa
c100476f:	6a 02                	push   $0x2
c1004771:	6a 00                	push   $0x0
c1004773:	52                   	push   %edx
c1004774:	50                   	push   %eax
c1004775:	e8 eb fc ff ff       	call   c1004465 <print_num>
c100477a:	83 c4 20             	add    $0x20,%esp
c100477d:	e9 66 02 00 00       	jmp    c10049e8 <printk+0x352>
c1004782:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004786:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004789:	8b 40 fc             	mov    -0x4(%eax),%eax
c100478c:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100478f:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004793:	74 23                	je     c10047b8 <printk+0x122>
c1004795:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004799:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100479c:	99                   	cltd   
c100479d:	83 ec 04             	sub    $0x4,%esp
c10047a0:	6a 01                	push   $0x1
c10047a2:	51                   	push   %ecx
c10047a3:	6a 10                	push   $0x10
c10047a5:	6a 02                	push   $0x2
c10047a7:	6a 00                	push   $0x0
c10047a9:	52                   	push   %edx
c10047aa:	50                   	push   %eax
c10047ab:	e8 b5 fc ff ff       	call   c1004465 <print_num>
c10047b0:	83 c4 20             	add    $0x20,%esp
c10047b3:	e9 30 02 00 00       	jmp    c10049e8 <printk+0x352>
c10047b8:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10047bb:	99                   	cltd   
c10047bc:	83 ec 04             	sub    $0x4,%esp
c10047bf:	6a 00                	push   $0x0
c10047c1:	6a 14                	push   $0x14
c10047c3:	6a 10                	push   $0x10
c10047c5:	6a 02                	push   $0x2
c10047c7:	6a 00                	push   $0x0
c10047c9:	52                   	push   %edx
c10047ca:	50                   	push   %eax
c10047cb:	e8 95 fc ff ff       	call   c1004465 <print_num>
c10047d0:	83 c4 20             	add    $0x20,%esp
c10047d3:	e9 10 02 00 00       	jmp    c10049e8 <printk+0x352>
c10047d8:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c10047dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10047df:	8b 50 fc             	mov    -0x4(%eax),%edx
c10047e2:	8b 40 f8             	mov    -0x8(%eax),%eax
c10047e5:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10047e8:	89 55 cc             	mov    %edx,-0x34(%ebp)
c10047eb:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10047ef:	74 25                	je     c1004816 <printk+0x180>
c10047f1:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10047f5:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10047f8:	8b 55 cc             	mov    -0x34(%ebp),%edx
c10047fb:	83 ec 04             	sub    $0x4,%esp
c10047fe:	6a 01                	push   $0x1
c1004800:	51                   	push   %ecx
c1004801:	6a 10                	push   $0x10
c1004803:	6a 02                	push   $0x2
c1004805:	6a 00                	push   $0x0
c1004807:	52                   	push   %edx
c1004808:	50                   	push   %eax
c1004809:	e8 57 fc ff ff       	call   c1004465 <print_num>
c100480e:	83 c4 20             	add    $0x20,%esp
c1004811:	e9 d2 01 00 00       	jmp    c10049e8 <printk+0x352>
c1004816:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004819:	8b 55 cc             	mov    -0x34(%ebp),%edx
c100481c:	83 ec 04             	sub    $0x4,%esp
c100481f:	6a 00                	push   $0x0
c1004821:	6a 14                	push   $0x14
c1004823:	6a 10                	push   $0x10
c1004825:	6a 02                	push   $0x2
c1004827:	6a 00                	push   $0x0
c1004829:	52                   	push   %edx
c100482a:	50                   	push   %eax
c100482b:	e8 35 fc ff ff       	call   c1004465 <print_num>
c1004830:	83 c4 20             	add    $0x20,%esp
c1004833:	e9 b0 01 00 00       	jmp    c10049e8 <printk+0x352>
c1004838:	8b 45 08             	mov    0x8(%ebp),%eax
c100483b:	83 c0 01             	add    $0x1,%eax
c100483e:	89 45 08             	mov    %eax,0x8(%ebp)
c1004841:	8b 45 08             	mov    0x8(%ebp),%eax
c1004844:	0f b6 00             	movzbl (%eax),%eax
c1004847:	0f be c0             	movsbl %al,%eax
c100484a:	83 f8 78             	cmp    $0x78,%eax
c100484d:	0f 84 9a 00 00 00    	je     c10048ed <printk+0x257>
c1004853:	83 f8 78             	cmp    $0x78,%eax
c1004856:	0f 8f 3f 01 00 00    	jg     c100499b <printk+0x305>
c100485c:	83 f8 6c             	cmp    $0x6c,%eax
c100485f:	0f 84 e0 00 00 00    	je     c1004945 <printk+0x2af>
c1004865:	83 f8 6c             	cmp    $0x6c,%eax
c1004868:	0f 8f 2d 01 00 00    	jg     c100499b <printk+0x305>
c100486e:	83 f8 64             	cmp    $0x64,%eax
c1004871:	74 1c                	je     c100488f <printk+0x1f9>
c1004873:	83 f8 64             	cmp    $0x64,%eax
c1004876:	0f 8f 1f 01 00 00    	jg     c100499b <printk+0x305>
c100487c:	83 f8 4c             	cmp    $0x4c,%eax
c100487f:	0f 84 c0 00 00 00    	je     c1004945 <printk+0x2af>
c1004885:	83 f8 58             	cmp    $0x58,%eax
c1004888:	74 63                	je     c10048ed <printk+0x257>
c100488a:	e9 0c 01 00 00       	jmp    c100499b <printk+0x305>
c100488f:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004893:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004896:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004899:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100489c:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10048a0:	74 27                	je     c10048c9 <printk+0x233>
c10048a2:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10048a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10048a9:	ba 00 00 00 00       	mov    $0x0,%edx
c10048ae:	83 ec 04             	sub    $0x4,%esp
c10048b1:	6a 01                	push   $0x1
c10048b3:	51                   	push   %ecx
c10048b4:	6a 0a                	push   $0xa
c10048b6:	6a 02                	push   $0x2
c10048b8:	6a 00                	push   $0x0
c10048ba:	52                   	push   %edx
c10048bb:	50                   	push   %eax
c10048bc:	e8 a4 fb ff ff       	call   c1004465 <print_num>
c10048c1:	83 c4 20             	add    $0x20,%esp
c10048c4:	e9 d3 00 00 00       	jmp    c100499c <printk+0x306>
c10048c9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10048cc:	ba 00 00 00 00       	mov    $0x0,%edx
c10048d1:	83 ec 04             	sub    $0x4,%esp
c10048d4:	6a 00                	push   $0x0
c10048d6:	6a 14                	push   $0x14
c10048d8:	6a 0a                	push   $0xa
c10048da:	6a 02                	push   $0x2
c10048dc:	6a 00                	push   $0x0
c10048de:	52                   	push   %edx
c10048df:	50                   	push   %eax
c10048e0:	e8 80 fb ff ff       	call   c1004465 <print_num>
c10048e5:	83 c4 20             	add    $0x20,%esp
c10048e8:	e9 af 00 00 00       	jmp    c100499c <printk+0x306>
c10048ed:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10048f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10048f4:	8b 40 fc             	mov    -0x4(%eax),%eax
c10048f7:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10048fa:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10048fe:	74 24                	je     c1004924 <printk+0x28e>
c1004900:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004904:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004907:	ba 00 00 00 00       	mov    $0x0,%edx
c100490c:	83 ec 04             	sub    $0x4,%esp
c100490f:	6a 01                	push   $0x1
c1004911:	51                   	push   %ecx
c1004912:	6a 10                	push   $0x10
c1004914:	6a 02                	push   $0x2
c1004916:	6a 00                	push   $0x0
c1004918:	52                   	push   %edx
c1004919:	50                   	push   %eax
c100491a:	e8 46 fb ff ff       	call   c1004465 <print_num>
c100491f:	83 c4 20             	add    $0x20,%esp
c1004922:	eb 78                	jmp    c100499c <printk+0x306>
c1004924:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004927:	ba 00 00 00 00       	mov    $0x0,%edx
c100492c:	83 ec 04             	sub    $0x4,%esp
c100492f:	6a 00                	push   $0x0
c1004931:	6a 14                	push   $0x14
c1004933:	6a 10                	push   $0x10
c1004935:	6a 02                	push   $0x2
c1004937:	6a 00                	push   $0x0
c1004939:	52                   	push   %edx
c100493a:	50                   	push   %eax
c100493b:	e8 25 fb ff ff       	call   c1004465 <print_num>
c1004940:	83 c4 20             	add    $0x20,%esp
c1004943:	eb 57                	jmp    c100499c <printk+0x306>
c1004945:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1004949:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100494c:	8b 50 fc             	mov    -0x4(%eax),%edx
c100494f:	8b 40 f8             	mov    -0x8(%eax),%eax
c1004952:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004955:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1004958:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100495c:	74 20                	je     c100497e <printk+0x2e8>
c100495e:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c1004962:	83 ec 04             	sub    $0x4,%esp
c1004965:	6a 01                	push   $0x1
c1004967:	50                   	push   %eax
c1004968:	6a 10                	push   $0x10
c100496a:	6a 02                	push   $0x2
c100496c:	6a 00                	push   $0x0
c100496e:	ff 75 e4             	pushl  -0x1c(%ebp)
c1004971:	ff 75 e0             	pushl  -0x20(%ebp)
c1004974:	e8 ec fa ff ff       	call   c1004465 <print_num>
c1004979:	83 c4 20             	add    $0x20,%esp
c100497c:	eb 1e                	jmp    c100499c <printk+0x306>
c100497e:	83 ec 04             	sub    $0x4,%esp
c1004981:	6a 00                	push   $0x0
c1004983:	6a 14                	push   $0x14
c1004985:	6a 10                	push   $0x10
c1004987:	6a 02                	push   $0x2
c1004989:	6a 00                	push   $0x0
c100498b:	ff 75 e4             	pushl  -0x1c(%ebp)
c100498e:	ff 75 e0             	pushl  -0x20(%ebp)
c1004991:	e8 cf fa ff ff       	call   c1004465 <print_num>
c1004996:	83 c4 20             	add    $0x20,%esp
c1004999:	eb 01                	jmp    c100499c <printk+0x306>
c100499b:	90                   	nop
c100499c:	eb 4a                	jmp    c10049e8 <printk+0x352>
c100499e:	8b 45 08             	mov    0x8(%ebp),%eax
c10049a1:	0f b6 00             	movzbl (%eax),%eax
c10049a4:	0f be c0             	movsbl %al,%eax
c10049a7:	83 e8 30             	sub    $0x30,%eax
c10049aa:	89 c2                	mov    %eax,%edx
c10049ac:	89 d0                	mov    %edx,%eax
c10049ae:	c1 e0 02             	shl    $0x2,%eax
c10049b1:	01 d0                	add    %edx,%eax
c10049b3:	01 c0                	add    %eax,%eax
c10049b5:	89 c2                	mov    %eax,%edx
c10049b7:	8b 45 08             	mov    0x8(%ebp),%eax
c10049ba:	83 c0 01             	add    $0x1,%eax
c10049bd:	89 45 08             	mov    %eax,0x8(%ebp)
c10049c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10049c3:	0f b6 00             	movzbl (%eax),%eax
c10049c6:	01 d0                	add    %edx,%eax
c10049c8:	83 e8 30             	sub    $0x30,%eax
c10049cb:	88 45 f3             	mov    %al,-0xd(%ebp)
c10049ce:	e9 e7 fc ff ff       	jmp    c10046ba <printk+0x24>
c10049d3:	83 ec 04             	sub    $0x4,%esp
c10049d6:	6a 02                	push   $0x2
c10049d8:	6a 00                	push   $0x0
c10049da:	68 44 a1 00 c1       	push   $0xc100a144
c10049df:	e8 4a fa ff ff       	call   c100442e <print_string>
c10049e4:	83 c4 10             	add    $0x10,%esp
c10049e7:	90                   	nop
c10049e8:	8b 45 08             	mov    0x8(%ebp),%eax
c10049eb:	83 c0 01             	add    $0x1,%eax
c10049ee:	89 45 08             	mov    %eax,0x8(%ebp)
c10049f1:	eb 22                	jmp    c1004a15 <printk+0x37f>
c10049f3:	8b 45 08             	mov    0x8(%ebp),%eax
c10049f6:	0f b6 00             	movzbl (%eax),%eax
c10049f9:	0f be c0             	movsbl %al,%eax
c10049fc:	83 ec 04             	sub    $0x4,%esp
c10049ff:	6a 02                	push   $0x2
c1004a01:	6a 00                	push   $0x0
c1004a03:	50                   	push   %eax
c1004a04:	e8 08 f9 ff ff       	call   c1004311 <print_char>
c1004a09:	83 c4 10             	add    $0x10,%esp
c1004a0c:	8b 45 08             	mov    0x8(%ebp),%eax
c1004a0f:	83 c0 01             	add    $0x1,%eax
c1004a12:	89 45 08             	mov    %eax,0x8(%ebp)
c1004a15:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c1004a19:	8b 45 08             	mov    0x8(%ebp),%eax
c1004a1c:	0f b6 00             	movzbl (%eax),%eax
c1004a1f:	84 c0                	test   %al,%al
c1004a21:	0f 85 84 fc ff ff    	jne    c10046ab <printk+0x15>
c1004a27:	90                   	nop
c1004a28:	90                   	nop
c1004a29:	c9                   	leave  
c1004a2a:	c3                   	ret    

c1004a2b <cons_putc>:
c1004a2b:	55                   	push   %ebp
c1004a2c:	89 e5                	mov    %esp,%ebp
c1004a2e:	83 ec 08             	sub    $0x8,%esp
c1004a31:	83 ec 0c             	sub    $0xc,%esp
c1004a34:	ff 75 08             	pushl  0x8(%ebp)
c1004a37:	e8 b1 f5 ff ff       	call   c1003fed <lpt_putc>
c1004a3c:	83 c4 10             	add    $0x10,%esp
c1004a3f:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1004a43:	74 13                	je     c1004a58 <cons_putc+0x2d>
c1004a45:	83 ec 08             	sub    $0x8,%esp
c1004a48:	ff 75 08             	pushl  0x8(%ebp)
c1004a4b:	68 88 a2 00 c1       	push   $0xc100a288
c1004a50:	e8 41 fc ff ff       	call   c1004696 <printk>
c1004a55:	83 c4 10             	add    $0x10,%esp
c1004a58:	83 ec 0c             	sub    $0xc,%esp
c1004a5b:	ff 75 08             	pushl  0x8(%ebp)
c1004a5e:	e8 ed f6 ff ff       	call   c1004150 <serial_putc>
c1004a63:	83 c4 10             	add    $0x10,%esp
c1004a66:	90                   	nop
c1004a67:	c9                   	leave  
c1004a68:	c3                   	ret    

c1004a69 <cons_getc>:
c1004a69:	55                   	push   %ebp
c1004a6a:	89 e5                	mov    %esp,%ebp
c1004a6c:	83 ec 18             	sub    $0x18,%esp
c1004a6f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004a76:	e8 5c f6 ff ff       	call   c10040d7 <serial_intr>
c1004a7b:	e8 73 d3 ff ff       	call   c1001df3 <kbd_intr>
c1004a80:	8b 15 20 32 a1 c1    	mov    0xc1a13220,%edx
c1004a86:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c1004a8b:	39 c2                	cmp    %eax,%edx
c1004a8d:	74 31                	je     c1004ac0 <cons_getc+0x57>
c1004a8f:	a1 20 32 a1 c1       	mov    0xc1a13220,%eax
c1004a94:	8d 50 01             	lea    0x1(%eax),%edx
c1004a97:	89 15 20 32 a1 c1    	mov    %edx,0xc1a13220
c1004a9d:	0f b6 80 20 30 a1 c1 	movzbl -0x3e5ecfe0(%eax),%eax
c1004aa4:	0f b6 c0             	movzbl %al,%eax
c1004aa7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004aaa:	a1 20 32 a1 c1       	mov    0xc1a13220,%eax
c1004aaf:	3d 00 02 00 00       	cmp    $0x200,%eax
c1004ab4:	75 0a                	jne    c1004ac0 <cons_getc+0x57>
c1004ab6:	c7 05 20 32 a1 c1 00 	movl   $0x0,0xc1a13220
c1004abd:	00 00 00 
c1004ac0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004ac3:	c9                   	leave  
c1004ac4:	c3                   	ret    

c1004ac5 <hash32>:
c1004ac5:	55                   	push   %ebp
c1004ac6:	89 e5                	mov    %esp,%ebp
c1004ac8:	83 ec 10             	sub    $0x10,%esp
c1004acb:	8b 45 08             	mov    0x8(%ebp),%eax
c1004ace:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1004ad4:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004ad7:	b8 20 00 00 00       	mov    $0x20,%eax
c1004adc:	2b 45 0c             	sub    0xc(%ebp),%eax
c1004adf:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1004ae2:	89 c1                	mov    %eax,%ecx
c1004ae4:	d3 ea                	shr    %cl,%edx
c1004ae6:	89 d0                	mov    %edx,%eax
c1004ae8:	c9                   	leave  
c1004ae9:	c3                   	ret    

c1004aea <sema_init>:
c1004aea:	55                   	push   %ebp
c1004aeb:	89 e5                	mov    %esp,%ebp
c1004aed:	83 ec 14             	sub    $0x14,%esp
c1004af0:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004af3:	88 45 ec             	mov    %al,-0x14(%ebp)
c1004af6:	8b 45 08             	mov    0x8(%ebp),%eax
c1004af9:	0f b6 55 ec          	movzbl -0x14(%ebp),%edx
c1004afd:	88 10                	mov    %dl,(%eax)
c1004aff:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b02:	83 c0 04             	add    $0x4,%eax
c1004b05:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004b08:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004b0b:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1004b0e:	89 50 04             	mov    %edx,0x4(%eax)
c1004b11:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004b14:	8b 50 04             	mov    0x4(%eax),%edx
c1004b17:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004b1a:	89 10                	mov    %edx,(%eax)
c1004b1c:	90                   	nop
c1004b1d:	90                   	nop
c1004b1e:	c9                   	leave  
c1004b1f:	c3                   	ret    

c1004b20 <lock_init>:
c1004b20:	55                   	push   %ebp
c1004b21:	89 e5                	mov    %esp,%ebp
c1004b23:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b26:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1004b2c:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b2f:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004b36:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b39:	83 c0 04             	add    $0x4,%eax
c1004b3c:	6a 01                	push   $0x1
c1004b3e:	50                   	push   %eax
c1004b3f:	e8 a6 ff ff ff       	call   c1004aea <sema_init>
c1004b44:	83 c4 08             	add    $0x8,%esp
c1004b47:	90                   	nop
c1004b48:	c9                   	leave  
c1004b49:	c3                   	ret    

c1004b4a <sema_down>:
c1004b4a:	55                   	push   %ebp
c1004b4b:	89 e5                	mov    %esp,%ebp
c1004b4d:	83 ec 38             	sub    $0x38,%esp
c1004b50:	8b 45 08             	mov    0x8(%ebp),%eax
c1004b53:	83 c0 04             	add    $0x4,%eax
c1004b56:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004b59:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004b5c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004b5f:	e8 ec c1 ff ff       	call   c1000d50 <intr_save>
c1004b64:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004b67:	e9 95 00 00 00       	jmp    c1004c01 <sema_down+0xb7>
c1004b6c:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004b71:	83 c0 50             	add    $0x50,%eax
c1004b74:	39 45 f4             	cmp    %eax,-0xc(%ebp)
c1004b77:	75 16                	jne    c1004b8f <sema_down+0x45>
c1004b79:	68 8c a2 00 c1       	push   $0xc100a28c
c1004b7e:	68 f4 a2 00 c1       	push   $0xc100a2f4
c1004b83:	6a 26                	push   $0x26
c1004b85:	68 c0 a2 00 c1       	push   $0xc100a2c0
c1004b8a:	e8 7e b7 ff ff       	call   c100030d <__PANIC>
c1004b8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004b92:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004b95:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004b98:	8b 40 04             	mov    0x4(%eax),%eax
c1004b9b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004b9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004ba1:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1004ba4:	75 c6                	jne    c1004b6c <sema_down+0x22>
c1004ba6:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004bab:	83 c0 50             	add    $0x50,%eax
c1004bae:	8b 55 08             	mov    0x8(%ebp),%edx
c1004bb1:	83 c2 04             	add    $0x4,%edx
c1004bb4:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1004bb7:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004bba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004bbd:	8b 00                	mov    (%eax),%eax
c1004bbf:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1004bc2:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1004bc5:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004bc8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004bcb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1004bce:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1004bd1:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1004bd4:	89 10                	mov    %edx,(%eax)
c1004bd6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1004bd9:	8b 10                	mov    (%eax),%edx
c1004bdb:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004bde:	89 50 04             	mov    %edx,0x4(%eax)
c1004be1:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004be4:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1004be7:	89 50 04             	mov    %edx,0x4(%eax)
c1004bea:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004bed:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1004bf0:	89 10                	mov    %edx,(%eax)
c1004bf2:	90                   	nop
c1004bf3:	90                   	nop
c1004bf4:	83 ec 0c             	sub    $0xc,%esp
c1004bf7:	6a 01                	push   $0x1
c1004bf9:	e8 45 eb ff ff       	call   c1003743 <thread_block>
c1004bfe:	83 c4 10             	add    $0x10,%esp
c1004c01:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c04:	0f b6 00             	movzbl (%eax),%eax
c1004c07:	84 c0                	test   %al,%al
c1004c09:	74 84                	je     c1004b8f <sema_down+0x45>
c1004c0b:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c0e:	0f b6 00             	movzbl (%eax),%eax
c1004c11:	8d 50 ff             	lea    -0x1(%eax),%edx
c1004c14:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c17:	88 10                	mov    %dl,(%eax)
c1004c19:	83 ec 0c             	sub    $0xc,%esp
c1004c1c:	ff 75 ec             	pushl  -0x14(%ebp)
c1004c1f:	e8 3f c1 ff ff       	call   c1000d63 <intr_restore>
c1004c24:	83 c4 10             	add    $0x10,%esp
c1004c27:	90                   	nop
c1004c28:	c9                   	leave  
c1004c29:	c3                   	ret    

c1004c2a <sema_up>:
c1004c2a:	55                   	push   %ebp
c1004c2b:	89 e5                	mov    %esp,%ebp
c1004c2d:	83 ec 28             	sub    $0x28,%esp
c1004c30:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c33:	83 c0 04             	add    $0x4,%eax
c1004c36:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004c39:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004c3c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004c3f:	e8 0c c1 ff ff       	call   c1000d50 <intr_save>
c1004c44:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004c47:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004c4a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1004c4d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004c50:	8b 40 04             	mov    0x4(%eax),%eax
c1004c53:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004c56:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004c59:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1004c5c:	74 41                	je     c1004c9f <sema_up+0x75>
c1004c5e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004c61:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004c64:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004c67:	8b 40 04             	mov    0x4(%eax),%eax
c1004c6a:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1004c6d:	8b 12                	mov    (%edx),%edx
c1004c6f:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1004c72:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004c75:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004c78:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1004c7b:	89 50 04             	mov    %edx,0x4(%eax)
c1004c7e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004c81:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1004c84:	89 10                	mov    %edx,(%eax)
c1004c86:	90                   	nop
c1004c87:	90                   	nop
c1004c88:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004c8b:	83 e8 50             	sub    $0x50,%eax
c1004c8e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004c91:	83 ec 0c             	sub    $0xc,%esp
c1004c94:	ff 75 e8             	pushl  -0x18(%ebp)
c1004c97:	e8 f4 ea ff ff       	call   c1003790 <thread_unblock>
c1004c9c:	83 c4 10             	add    $0x10,%esp
c1004c9f:	8b 45 08             	mov    0x8(%ebp),%eax
c1004ca2:	0f b6 00             	movzbl (%eax),%eax
c1004ca5:	8d 50 01             	lea    0x1(%eax),%edx
c1004ca8:	8b 45 08             	mov    0x8(%ebp),%eax
c1004cab:	88 10                	mov    %dl,(%eax)
c1004cad:	83 ec 0c             	sub    $0xc,%esp
c1004cb0:	ff 75 ec             	pushl  -0x14(%ebp)
c1004cb3:	e8 ab c0 ff ff       	call   c1000d63 <intr_restore>
c1004cb8:	83 c4 10             	add    $0x10,%esp
c1004cbb:	90                   	nop
c1004cbc:	c9                   	leave  
c1004cbd:	c3                   	ret    

c1004cbe <lock_acquire>:
c1004cbe:	55                   	push   %ebp
c1004cbf:	89 e5                	mov    %esp,%ebp
c1004cc1:	83 ec 08             	sub    $0x8,%esp
c1004cc4:	8b 45 08             	mov    0x8(%ebp),%eax
c1004cc7:	8b 10                	mov    (%eax),%edx
c1004cc9:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004cce:	39 c2                	cmp    %eax,%edx
c1004cd0:	74 29                	je     c1004cfb <lock_acquire+0x3d>
c1004cd2:	8b 45 08             	mov    0x8(%ebp),%eax
c1004cd5:	83 c0 04             	add    $0x4,%eax
c1004cd8:	83 ec 0c             	sub    $0xc,%esp
c1004cdb:	50                   	push   %eax
c1004cdc:	e8 69 fe ff ff       	call   c1004b4a <sema_down>
c1004ce1:	83 c4 10             	add    $0x10,%esp
c1004ce4:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c1004cea:	8b 45 08             	mov    0x8(%ebp),%eax
c1004ced:	89 10                	mov    %edx,(%eax)
c1004cef:	8b 45 08             	mov    0x8(%ebp),%eax
c1004cf2:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
c1004cf9:	eb 0f                	jmp    c1004d0a <lock_acquire+0x4c>
c1004cfb:	8b 45 08             	mov    0x8(%ebp),%eax
c1004cfe:	8b 40 10             	mov    0x10(%eax),%eax
c1004d01:	8d 50 01             	lea    0x1(%eax),%edx
c1004d04:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d07:	89 50 10             	mov    %edx,0x10(%eax)
c1004d0a:	90                   	nop
c1004d0b:	c9                   	leave  
c1004d0c:	c3                   	ret    

c1004d0d <lock_release>:
c1004d0d:	55                   	push   %ebp
c1004d0e:	89 e5                	mov    %esp,%ebp
c1004d10:	83 ec 08             	sub    $0x8,%esp
c1004d13:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d16:	8b 40 10             	mov    0x10(%eax),%eax
c1004d19:	83 f8 01             	cmp    $0x1,%eax
c1004d1c:	76 11                	jbe    c1004d2f <lock_release+0x22>
c1004d1e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d21:	8b 40 10             	mov    0x10(%eax),%eax
c1004d24:	8d 50 ff             	lea    -0x1(%eax),%edx
c1004d27:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d2a:	89 50 10             	mov    %edx,0x10(%eax)
c1004d2d:	eb 25                	jmp    c1004d54 <lock_release+0x47>
c1004d2f:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d32:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1004d38:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d3b:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004d42:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d45:	83 c0 04             	add    $0x4,%eax
c1004d48:	83 ec 0c             	sub    $0xc,%esp
c1004d4b:	50                   	push   %eax
c1004d4c:	e8 d9 fe ff ff       	call   c1004c2a <sema_up>
c1004d51:	83 c4 10             	add    $0x10,%esp
c1004d54:	c9                   	leave  
c1004d55:	c3                   	ret    

c1004d56 <waitdisk>:
c1004d56:	55                   	push   %ebp
c1004d57:	89 e5                	mov    %esp,%ebp
c1004d59:	83 ec 08             	sub    $0x8,%esp
c1004d5c:	90                   	nop
c1004d5d:	83 ec 0c             	sub    $0xc,%esp
c1004d60:	68 f7 01 00 00       	push   $0x1f7
c1004d65:	e8 96 b2 ff ff       	call   c1000000 <inb>
c1004d6a:	83 c4 10             	add    $0x10,%esp
c1004d6d:	0f b6 c0             	movzbl %al,%eax
c1004d70:	25 c0 00 00 00       	and    $0xc0,%eax
c1004d75:	83 f8 40             	cmp    $0x40,%eax
c1004d78:	75 e3                	jne    c1004d5d <waitdisk+0x7>
c1004d7a:	90                   	nop
c1004d7b:	90                   	nop
c1004d7c:	c9                   	leave  
c1004d7d:	c3                   	ret    

c1004d7e <insl>:
c1004d7e:	55                   	push   %ebp
c1004d7f:	89 e5                	mov    %esp,%ebp
c1004d81:	57                   	push   %edi
c1004d82:	53                   	push   %ebx
c1004d83:	8b 55 08             	mov    0x8(%ebp),%edx
c1004d86:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1004d89:	8b 45 10             	mov    0x10(%ebp),%eax
c1004d8c:	89 cb                	mov    %ecx,%ebx
c1004d8e:	89 df                	mov    %ebx,%edi
c1004d90:	89 c1                	mov    %eax,%ecx
c1004d92:	fc                   	cld    
c1004d93:	f2 6d                	repnz insl (%dx),%es:(%edi)
c1004d95:	89 c8                	mov    %ecx,%eax
c1004d97:	89 fb                	mov    %edi,%ebx
c1004d99:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1004d9c:	89 45 10             	mov    %eax,0x10(%ebp)
c1004d9f:	90                   	nop
c1004da0:	5b                   	pop    %ebx
c1004da1:	5f                   	pop    %edi
c1004da2:	5d                   	pop    %ebp
c1004da3:	c3                   	ret    

c1004da4 <outsl>:
c1004da4:	55                   	push   %ebp
c1004da5:	89 e5                	mov    %esp,%ebp
c1004da7:	56                   	push   %esi
c1004da8:	53                   	push   %ebx
c1004da9:	8b 55 08             	mov    0x8(%ebp),%edx
c1004dac:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1004daf:	8b 45 10             	mov    0x10(%ebp),%eax
c1004db2:	89 cb                	mov    %ecx,%ebx
c1004db4:	89 de                	mov    %ebx,%esi
c1004db6:	89 c1                	mov    %eax,%ecx
c1004db8:	fc                   	cld    
c1004db9:	f2 6f                	repnz outsl %ds:(%esi),(%dx)
c1004dbb:	89 c8                	mov    %ecx,%eax
c1004dbd:	89 f3                	mov    %esi,%ebx
c1004dbf:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1004dc2:	89 45 10             	mov    %eax,0x10(%ebp)
c1004dc5:	90                   	nop
c1004dc6:	5b                   	pop    %ebx
c1004dc7:	5e                   	pop    %esi
c1004dc8:	5d                   	pop    %ebp
c1004dc9:	c3                   	ret    

c1004dca <ide_read_sect>:
c1004dca:	55                   	push   %ebp
c1004dcb:	89 e5                	mov    %esp,%ebp
c1004dcd:	83 ec 08             	sub    $0x8,%esp
c1004dd0:	e8 81 ff ff ff       	call   c1004d56 <waitdisk>
c1004dd5:	83 ec 08             	sub    $0x8,%esp
c1004dd8:	6a 01                	push   $0x1
c1004dda:	68 f2 01 00 00       	push   $0x1f2
c1004ddf:	e8 58 b2 ff ff       	call   c100003c <outb>
c1004de4:	83 c4 10             	add    $0x10,%esp
c1004de7:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004dea:	0f b6 c0             	movzbl %al,%eax
c1004ded:	83 ec 08             	sub    $0x8,%esp
c1004df0:	50                   	push   %eax
c1004df1:	68 f3 01 00 00       	push   $0x1f3
c1004df6:	e8 41 b2 ff ff       	call   c100003c <outb>
c1004dfb:	83 c4 10             	add    $0x10,%esp
c1004dfe:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004e01:	c1 e8 08             	shr    $0x8,%eax
c1004e04:	0f b6 c0             	movzbl %al,%eax
c1004e07:	83 ec 08             	sub    $0x8,%esp
c1004e0a:	50                   	push   %eax
c1004e0b:	68 f4 01 00 00       	push   $0x1f4
c1004e10:	e8 27 b2 ff ff       	call   c100003c <outb>
c1004e15:	83 c4 10             	add    $0x10,%esp
c1004e18:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004e1b:	c1 e8 10             	shr    $0x10,%eax
c1004e1e:	0f b6 c0             	movzbl %al,%eax
c1004e21:	83 ec 08             	sub    $0x8,%esp
c1004e24:	50                   	push   %eax
c1004e25:	68 f5 01 00 00       	push   $0x1f5
c1004e2a:	e8 0d b2 ff ff       	call   c100003c <outb>
c1004e2f:	83 c4 10             	add    $0x10,%esp
c1004e32:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004e35:	c1 e8 18             	shr    $0x18,%eax
c1004e38:	83 e0 0f             	and    $0xf,%eax
c1004e3b:	83 c8 e0             	or     $0xffffffe0,%eax
c1004e3e:	0f b6 c0             	movzbl %al,%eax
c1004e41:	83 ec 08             	sub    $0x8,%esp
c1004e44:	50                   	push   %eax
c1004e45:	68 f6 01 00 00       	push   $0x1f6
c1004e4a:	e8 ed b1 ff ff       	call   c100003c <outb>
c1004e4f:	83 c4 10             	add    $0x10,%esp
c1004e52:	83 ec 08             	sub    $0x8,%esp
c1004e55:	6a 20                	push   $0x20
c1004e57:	68 f7 01 00 00       	push   $0x1f7
c1004e5c:	e8 db b1 ff ff       	call   c100003c <outb>
c1004e61:	83 c4 10             	add    $0x10,%esp
c1004e64:	e8 ed fe ff ff       	call   c1004d56 <waitdisk>
c1004e69:	83 ec 04             	sub    $0x4,%esp
c1004e6c:	68 80 00 00 00       	push   $0x80
c1004e71:	ff 75 08             	pushl  0x8(%ebp)
c1004e74:	68 f0 01 00 00       	push   $0x1f0
c1004e79:	e8 00 ff ff ff       	call   c1004d7e <insl>
c1004e7e:	83 c4 10             	add    $0x10,%esp
c1004e81:	90                   	nop
c1004e82:	c9                   	leave  
c1004e83:	c3                   	ret    

c1004e84 <ide_write_sect>:
c1004e84:	55                   	push   %ebp
c1004e85:	89 e5                	mov    %esp,%ebp
c1004e87:	83 ec 08             	sub    $0x8,%esp
c1004e8a:	e8 c7 fe ff ff       	call   c1004d56 <waitdisk>
c1004e8f:	83 ec 08             	sub    $0x8,%esp
c1004e92:	6a 01                	push   $0x1
c1004e94:	68 f2 01 00 00       	push   $0x1f2
c1004e99:	e8 9e b1 ff ff       	call   c100003c <outb>
c1004e9e:	83 c4 10             	add    $0x10,%esp
c1004ea1:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004ea4:	0f b6 c0             	movzbl %al,%eax
c1004ea7:	83 ec 08             	sub    $0x8,%esp
c1004eaa:	50                   	push   %eax
c1004eab:	68 f3 01 00 00       	push   $0x1f3
c1004eb0:	e8 87 b1 ff ff       	call   c100003c <outb>
c1004eb5:	83 c4 10             	add    $0x10,%esp
c1004eb8:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004ebb:	c1 e8 08             	shr    $0x8,%eax
c1004ebe:	0f b6 c0             	movzbl %al,%eax
c1004ec1:	83 ec 08             	sub    $0x8,%esp
c1004ec4:	50                   	push   %eax
c1004ec5:	68 f4 01 00 00       	push   $0x1f4
c1004eca:	e8 6d b1 ff ff       	call   c100003c <outb>
c1004ecf:	83 c4 10             	add    $0x10,%esp
c1004ed2:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004ed5:	c1 e8 10             	shr    $0x10,%eax
c1004ed8:	0f b6 c0             	movzbl %al,%eax
c1004edb:	83 ec 08             	sub    $0x8,%esp
c1004ede:	50                   	push   %eax
c1004edf:	68 f5 01 00 00       	push   $0x1f5
c1004ee4:	e8 53 b1 ff ff       	call   c100003c <outb>
c1004ee9:	83 c4 10             	add    $0x10,%esp
c1004eec:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004eef:	c1 e8 18             	shr    $0x18,%eax
c1004ef2:	83 e0 0f             	and    $0xf,%eax
c1004ef5:	83 c8 e0             	or     $0xffffffe0,%eax
c1004ef8:	0f b6 c0             	movzbl %al,%eax
c1004efb:	83 ec 08             	sub    $0x8,%esp
c1004efe:	50                   	push   %eax
c1004eff:	68 f6 01 00 00       	push   $0x1f6
c1004f04:	e8 33 b1 ff ff       	call   c100003c <outb>
c1004f09:	83 c4 10             	add    $0x10,%esp
c1004f0c:	83 ec 08             	sub    $0x8,%esp
c1004f0f:	6a 30                	push   $0x30
c1004f11:	68 f7 01 00 00       	push   $0x1f7
c1004f16:	e8 21 b1 ff ff       	call   c100003c <outb>
c1004f1b:	83 c4 10             	add    $0x10,%esp
c1004f1e:	e8 33 fe ff ff       	call   c1004d56 <waitdisk>
c1004f23:	83 ec 04             	sub    $0x4,%esp
c1004f26:	68 80 00 00 00       	push   $0x80
c1004f2b:	ff 75 08             	pushl  0x8(%ebp)
c1004f2e:	68 f0 01 00 00       	push   $0x1f0
c1004f33:	e8 6c fe ff ff       	call   c1004da4 <outsl>
c1004f38:	83 c4 10             	add    $0x10,%esp
c1004f3b:	90                   	nop
c1004f3c:	c9                   	leave  
c1004f3d:	c3                   	ret    

c1004f3e <ide_read>:
c1004f3e:	55                   	push   %ebp
c1004f3f:	89 e5                	mov    %esp,%ebp
c1004f41:	83 ec 18             	sub    $0x18,%esp
c1004f44:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004f4b:	eb 22                	jmp    c1004f6f <ide_read+0x31>
c1004f4d:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004f50:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004f53:	01 d0                	add    %edx,%eax
c1004f55:	83 ec 08             	sub    $0x8,%esp
c1004f58:	50                   	push   %eax
c1004f59:	ff 75 08             	pushl  0x8(%ebp)
c1004f5c:	e8 69 fe ff ff       	call   c1004dca <ide_read_sect>
c1004f61:	83 c4 10             	add    $0x10,%esp
c1004f64:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1004f6b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004f6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004f72:	39 45 10             	cmp    %eax,0x10(%ebp)
c1004f75:	77 d6                	ja     c1004f4d <ide_read+0xf>
c1004f77:	90                   	nop
c1004f78:	90                   	nop
c1004f79:	c9                   	leave  
c1004f7a:	c3                   	ret    

c1004f7b <ide_write>:
c1004f7b:	55                   	push   %ebp
c1004f7c:	89 e5                	mov    %esp,%ebp
c1004f7e:	83 ec 18             	sub    $0x18,%esp
c1004f81:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004f88:	eb 22                	jmp    c1004fac <ide_write+0x31>
c1004f8a:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004f8d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004f90:	01 d0                	add    %edx,%eax
c1004f92:	83 ec 08             	sub    $0x8,%esp
c1004f95:	50                   	push   %eax
c1004f96:	ff 75 08             	pushl  0x8(%ebp)
c1004f99:	e8 e6 fe ff ff       	call   c1004e84 <ide_write_sect>
c1004f9e:	83 c4 10             	add    $0x10,%esp
c1004fa1:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1004fa8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004fac:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004faf:	39 45 10             	cmp    %eax,0x10(%ebp)
c1004fb2:	77 d6                	ja     c1004f8a <ide_write+0xf>
c1004fb4:	90                   	nop
c1004fb5:	90                   	nop
c1004fb6:	c9                   	leave  
c1004fb7:	c3                   	ret    

c1004fb8 <delay>:
c1004fb8:	55                   	push   %ebp
c1004fb9:	89 e5                	mov    %esp,%ebp
c1004fbb:	83 ec 10             	sub    $0x10,%esp
c1004fbe:	8b 45 08             	mov    0x8(%ebp),%eax
c1004fc1:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004fc4:	eb 17                	jmp    c1004fdd <delay+0x25>
c1004fc6:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c1004fcd:	eb 04                	jmp    c1004fd3 <delay+0x1b>
c1004fcf:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c1004fd3:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c1004fd7:	75 f6                	jne    c1004fcf <delay+0x17>
c1004fd9:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c1004fdd:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1004fe1:	75 e3                	jne    c1004fc6 <delay+0xe>
c1004fe3:	90                   	nop
c1004fe4:	90                   	nop
c1004fe5:	c9                   	leave  
c1004fe6:	c3                   	ret    

c1004fe7 <read_main_partition>:
c1004fe7:	55                   	push   %ebp
c1004fe8:	89 e5                	mov    %esp,%ebp
c1004fea:	83 ec 18             	sub    $0x18,%esp
c1004fed:	83 ec 08             	sub    $0x8,%esp
c1004ff0:	6a 02                	push   $0x2
c1004ff2:	68 00 02 00 00       	push   $0x200
c1004ff7:	e8 94 d9 ff ff       	call   c1002990 <vmm_malloc>
c1004ffc:	83 c4 10             	add    $0x10,%esp
c1004fff:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005002:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005005:	83 ec 08             	sub    $0x8,%esp
c1005008:	6a 00                	push   $0x0
c100500a:	50                   	push   %eax
c100500b:	e8 ba fd ff ff       	call   c1004dca <ide_read_sect>
c1005010:	83 c4 10             	add    $0x10,%esp
c1005013:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005016:	05 be 01 00 00       	add    $0x1be,%eax
c100501b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100501e:	e8 76 f2 ff ff       	call   c1004299 <clear>
c1005023:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005026:	0f b6 00             	movzbl (%eax),%eax
c1005029:	0f b6 c0             	movzbl %al,%eax
c100502c:	83 ec 08             	sub    $0x8,%esp
c100502f:	50                   	push   %eax
c1005030:	68 fe a2 00 c1       	push   $0xc100a2fe
c1005035:	e8 5c f6 ff ff       	call   c1004696 <printk>
c100503a:	83 c4 10             	add    $0x10,%esp
c100503d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005040:	0f b6 40 01          	movzbl 0x1(%eax),%eax
c1005044:	0f b6 c0             	movzbl %al,%eax
c1005047:	83 ec 08             	sub    $0x8,%esp
c100504a:	50                   	push   %eax
c100504b:	68 11 a3 00 c1       	push   $0xc100a311
c1005050:	e8 41 f6 ff ff       	call   c1004696 <printk>
c1005055:	83 c4 10             	add    $0x10,%esp
c1005058:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100505b:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c100505f:	0f b6 c0             	movzbl %al,%eax
c1005062:	83 ec 08             	sub    $0x8,%esp
c1005065:	50                   	push   %eax
c1005066:	68 27 a3 00 c1       	push   $0xc100a327
c100506b:	e8 26 f6 ff ff       	call   c1004696 <printk>
c1005070:	83 c4 10             	add    $0x10,%esp
c1005073:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005076:	0f b6 40 03          	movzbl 0x3(%eax),%eax
c100507a:	0f b6 c0             	movzbl %al,%eax
c100507d:	83 ec 08             	sub    $0x8,%esp
c1005080:	50                   	push   %eax
c1005081:	68 3b a3 00 c1       	push   $0xc100a33b
c1005086:	e8 0b f6 ff ff       	call   c1004696 <printk>
c100508b:	83 c4 10             	add    $0x10,%esp
c100508e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005091:	0f b6 40 04          	movzbl 0x4(%eax),%eax
c1005095:	0f b6 c0             	movzbl %al,%eax
c1005098:	83 ec 08             	sub    $0x8,%esp
c100509b:	50                   	push   %eax
c100509c:	68 51 a3 00 c1       	push   $0xc100a351
c10050a1:	e8 f0 f5 ff ff       	call   c1004696 <printk>
c10050a6:	83 c4 10             	add    $0x10,%esp
c10050a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10050ac:	0f b6 40 05          	movzbl 0x5(%eax),%eax
c10050b0:	0f b6 c0             	movzbl %al,%eax
c10050b3:	83 ec 08             	sub    $0x8,%esp
c10050b6:	50                   	push   %eax
c10050b7:	68 62 a3 00 c1       	push   $0xc100a362
c10050bc:	e8 d5 f5 ff ff       	call   c1004696 <printk>
c10050c1:	83 c4 10             	add    $0x10,%esp
c10050c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10050c7:	0f b6 40 06          	movzbl 0x6(%eax),%eax
c10050cb:	0f b6 c0             	movzbl %al,%eax
c10050ce:	83 ec 08             	sub    $0x8,%esp
c10050d1:	50                   	push   %eax
c10050d2:	68 76 a3 00 c1       	push   $0xc100a376
c10050d7:	e8 ba f5 ff ff       	call   c1004696 <printk>
c10050dc:	83 c4 10             	add    $0x10,%esp
c10050df:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10050e2:	0f b6 40 07          	movzbl 0x7(%eax),%eax
c10050e6:	0f b6 c0             	movzbl %al,%eax
c10050e9:	83 ec 08             	sub    $0x8,%esp
c10050ec:	50                   	push   %eax
c10050ed:	68 88 a3 00 c1       	push   $0xc100a388
c10050f2:	e8 9f f5 ff ff       	call   c1004696 <printk>
c10050f7:	83 c4 10             	add    $0x10,%esp
c10050fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10050fd:	8b 40 08             	mov    0x8(%eax),%eax
c1005100:	83 ec 08             	sub    $0x8,%esp
c1005103:	50                   	push   %eax
c1005104:	68 9c a3 00 c1       	push   $0xc100a39c
c1005109:	e8 88 f5 ff ff       	call   c1004696 <printk>
c100510e:	83 c4 10             	add    $0x10,%esp
c1005111:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005114:	8b 40 0c             	mov    0xc(%eax),%eax
c1005117:	83 ec 08             	sub    $0x8,%esp
c100511a:	50                   	push   %eax
c100511b:	68 b0 a3 00 c1       	push   $0xc100a3b0
c1005120:	e8 71 f5 ff ff       	call   c1004696 <printk>
c1005125:	83 c4 10             	add    $0x10,%esp
c1005128:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100512b:	c9                   	leave  
c100512c:	c3                   	ret    

c100512d <test_ide_io>:
c100512d:	55                   	push   %ebp
c100512e:	89 e5                	mov    %esp,%ebp
c1005130:	83 ec 18             	sub    $0x18,%esp
c1005133:	83 ec 08             	sub    $0x8,%esp
c1005136:	68 00 90 10 00       	push   $0x109000
c100513b:	68 c3 a3 00 c1       	push   $0xc100a3c3
c1005140:	e8 51 f5 ff ff       	call   c1004696 <printk>
c1005145:	83 c4 10             	add    $0x10,%esp
c1005148:	83 ec 08             	sub    $0x8,%esp
c100514b:	68 0c db 00 c1       	push   $0xc100db0c
c1005150:	68 d2 a3 00 c1       	push   $0xc100a3d2
c1005155:	e8 3c f5 ff ff       	call   c1004696 <printk>
c100515a:	83 c4 10             	add    $0x10,%esp
c100515d:	b8 00 90 10 00       	mov    $0x109000,%eax
c1005162:	2d 01 fe 0f 00       	sub    $0xffe01,%eax
c1005167:	c1 e8 09             	shr    $0x9,%eax
c100516a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100516d:	b8 0c db 00 c1       	mov    $0xc100db0c,%eax
c1005172:	05 ff 01 00 3f       	add    $0x3f0001ff,%eax
c1005177:	c1 e8 09             	shr    $0x9,%eax
c100517a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100517d:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005180:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005183:	01 d0                	add    %edx,%eax
c1005185:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005188:	83 ec 08             	sub    $0x8,%esp
c100518b:	ff 75 ec             	pushl  -0x14(%ebp)
c100518e:	68 e1 a3 00 c1       	push   $0xc100a3e1
c1005193:	e8 fe f4 ff ff       	call   c1004696 <printk>
c1005198:	83 c4 10             	add    $0x10,%esp
c100519b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c100519f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10051a6:	e8 3c fe ff ff       	call   c1004fe7 <read_main_partition>
c10051ab:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10051ae:	90                   	nop
c10051af:	c9                   	leave  
c10051b0:	c3                   	ret    

c10051b1 <hash32>:
c10051b1:	55                   	push   %ebp
c10051b2:	89 e5                	mov    %esp,%ebp
c10051b4:	83 ec 10             	sub    $0x10,%esp
c10051b7:	8b 45 08             	mov    0x8(%ebp),%eax
c10051ba:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10051c0:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10051c3:	b8 20 00 00 00       	mov    $0x20,%eax
c10051c8:	2b 45 0c             	sub    0xc(%ebp),%eax
c10051cb:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10051ce:	89 c1                	mov    %eax,%ecx
c10051d0:	d3 ea                	shr    %cl,%edx
c10051d2:	89 d0                	mov    %edx,%eax
c10051d4:	c9                   	leave  
c10051d5:	c3                   	ret    

c10051d6 <partition_format>:
c10051d6:	55                   	push   %ebp
c10051d7:	89 e5                	mov    %esp,%ebp
c10051d9:	53                   	push   %ebx
c10051da:	81 ec 44 02 00 00    	sub    $0x244,%esp
c10051e0:	e8 02 fe ff ff       	call   c1004fe7 <read_main_partition>
c10051e5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10051e8:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
c10051ef:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
c10051f6:	c7 45 e4 11 00 00 00 	movl   $0x11,-0x1c(%ebp)
c10051fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005200:	8b 40 0c             	mov    0xc(%eax),%eax
c1005203:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1005206:	2b 45 e8             	sub    -0x18(%ebp),%eax
c1005209:	2b 45 e4             	sub    -0x1c(%ebp),%eax
c100520c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100520f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005212:	05 ff 0f 00 00       	add    $0xfff,%eax
c1005217:	c1 e8 0c             	shr    $0xc,%eax
c100521a:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100521d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005220:	2b 45 dc             	sub    -0x24(%ebp),%eax
c1005223:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005226:	c7 85 bc fd ff ff 18 	movl   $0x19590318,-0x244(%ebp)
c100522d:	03 59 19 
c1005230:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005233:	8b 40 0c             	mov    0xc(%eax),%eax
c1005236:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
c100523c:	c7 85 c4 fd ff ff e8 	movl   $0x3e8,-0x23c(%ebp)
c1005243:	03 00 00 
c1005246:	c7 85 c8 fd ff ff 00 	movl   $0x800,-0x238(%ebp)
c100524d:	08 00 00 
c1005250:	c7 85 cc fd ff ff 01 	movl   $0x801,-0x234(%ebp)
c1005257:	08 00 00 
c100525a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100525d:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c1005263:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
c1005269:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c100526f:	01 d0                	add    %edx,%eax
c1005271:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
c1005277:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100527a:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
c1005280:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
c1005286:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c100528c:	01 d0                	add    %edx,%eax
c100528e:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
c1005294:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005297:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
c100529d:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
c10052a3:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10052a9:	01 d0                	add    %edx,%eax
c10052ab:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
c10052b1:	c7 85 e8 fd ff ff 00 	movl   $0x0,-0x218(%ebp)
c10052b8:	00 00 00 
c10052bb:	c7 85 ec fd ff ff 18 	movl   $0x18,-0x214(%ebp)
c10052c2:	00 00 00 
c10052c5:	e8 cf ef ff ff       	call   c1004299 <clear>
c10052ca:	8b 85 bc fd ff ff    	mov    -0x244(%ebp),%eax
c10052d0:	83 ec 08             	sub    $0x8,%esp
c10052d3:	50                   	push   %eax
c10052d4:	68 f4 a3 00 c1       	push   $0xc100a3f4
c10052d9:	e8 b8 f3 ff ff       	call   c1004696 <printk>
c10052de:	83 c4 10             	add    $0x10,%esp
c10052e1:	8b 85 c0 fd ff ff    	mov    -0x240(%ebp),%eax
c10052e7:	83 ec 08             	sub    $0x8,%esp
c10052ea:	50                   	push   %eax
c10052eb:	68 04 a4 00 c1       	push   $0xc100a404
c10052f0:	e8 a1 f3 ff ff       	call   c1004696 <printk>
c10052f5:	83 c4 10             	add    $0x10,%esp
c10052f8:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
c10052fe:	83 ec 08             	sub    $0x8,%esp
c1005301:	50                   	push   %eax
c1005302:	68 16 a4 00 c1       	push   $0xc100a416
c1005307:	e8 8a f3 ff ff       	call   c1004696 <printk>
c100530c:	83 c4 10             	add    $0x10,%esp
c100530f:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c1005315:	83 ec 08             	sub    $0x8,%esp
c1005318:	50                   	push   %eax
c1005319:	68 2a a4 00 c1       	push   $0xc100a42a
c100531e:	e8 73 f3 ff ff       	call   c1004696 <printk>
c1005323:	83 c4 10             	add    $0x10,%esp
c1005326:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c100532c:	83 ec 08             	sub    $0x8,%esp
c100532f:	50                   	push   %eax
c1005330:	68 45 a4 00 c1       	push   $0xc100a445
c1005335:	e8 5c f3 ff ff       	call   c1004696 <printk>
c100533a:	83 c4 10             	add    $0x10,%esp
c100533d:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1005343:	83 ec 08             	sub    $0x8,%esp
c1005346:	50                   	push   %eax
c1005347:	68 62 a4 00 c1       	push   $0xc100a462
c100534c:	e8 45 f3 ff ff       	call   c1004696 <printk>
c1005351:	83 c4 10             	add    $0x10,%esp
c1005354:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c100535a:	83 ec 08             	sub    $0x8,%esp
c100535d:	50                   	push   %eax
c100535e:	68 7d a4 00 c1       	push   $0xc100a47d
c1005363:	e8 2e f3 ff ff       	call   c1004696 <printk>
c1005368:	83 c4 10             	add    $0x10,%esp
c100536b:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c1005371:	83 ec 08             	sub    $0x8,%esp
c1005374:	50                   	push   %eax
c1005375:	68 9a a4 00 c1       	push   $0xc100a49a
c100537a:	e8 17 f3 ff ff       	call   c1004696 <printk>
c100537f:	83 c4 10             	add    $0x10,%esp
c1005382:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1005388:	83 ec 08             	sub    $0x8,%esp
c100538b:	50                   	push   %eax
c100538c:	68 b4 a4 00 c1       	push   $0xc100a4b4
c1005391:	e8 00 f3 ff ff       	call   c1004696 <printk>
c1005396:	83 c4 10             	add    $0x10,%esp
c1005399:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c100539f:	83 ec 08             	sub    $0x8,%esp
c10053a2:	50                   	push   %eax
c10053a3:	68 d0 a4 00 c1       	push   $0xc100a4d0
c10053a8:	e8 e9 f2 ff ff       	call   c1004696 <printk>
c10053ad:	83 c4 10             	add    $0x10,%esp
c10053b0:	83 ec 04             	sub    $0x4,%esp
c10053b3:	6a 01                	push   $0x1
c10053b5:	68 00 08 00 00       	push   $0x800
c10053ba:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
c10053c0:	50                   	push   %eax
c10053c1:	e8 b5 fb ff ff       	call   c1004f7b <ide_write>
c10053c6:	83 c4 10             	add    $0x10,%esp
c10053c9:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c10053cf:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c10053d5:	39 c2                	cmp    %eax,%edx
c10053d7:	0f 43 c2             	cmovae %edx,%eax
c10053da:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10053dd:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10053e3:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
c10053e6:	0f 43 45 d4          	cmovae -0x2c(%ebp),%eax
c10053ea:	c1 e0 09             	shl    $0x9,%eax
c10053ed:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10053f0:	83 ec 08             	sub    $0x8,%esp
c10053f3:	6a 02                	push   $0x2
c10053f5:	ff 75 d4             	pushl  -0x2c(%ebp)
c10053f8:	e8 93 d5 ff ff       	call   c1002990 <vmm_malloc>
c10053fd:	83 c4 10             	add    $0x10,%esp
c1005400:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1005403:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005406:	0f b6 00             	movzbl (%eax),%eax
c1005409:	83 c8 01             	or     $0x1,%eax
c100540c:	89 c2                	mov    %eax,%edx
c100540e:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005411:	88 10                	mov    %dl,(%eax)
c1005413:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005416:	c1 e8 03             	shr    $0x3,%eax
c1005419:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100541c:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100541f:	83 e0 07             	and    $0x7,%eax
c1005422:	88 45 cb             	mov    %al,-0x35(%ebp)
c1005425:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005428:	25 ff 01 00 00       	and    $0x1ff,%eax
c100542d:	ba 00 02 00 00       	mov    $0x200,%edx
c1005432:	29 c2                	sub    %eax,%edx
c1005434:	89 d0                	mov    %edx,%eax
c1005436:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1005439:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100543c:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100543f:	01 d0                	add    %edx,%eax
c1005441:	83 ec 04             	sub    $0x4,%esp
c1005444:	ff 75 c4             	pushl  -0x3c(%ebp)
c1005447:	6a ff                	push   $0xffffffff
c1005449:	50                   	push   %eax
c100544a:	e8 5b ac ff ff       	call   c10000aa <memset>
c100544f:	83 c4 10             	add    $0x10,%esp
c1005452:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1005456:	eb 38                	jmp    c1005490 <partition_format+0x2ba>
c1005458:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100545b:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100545e:	01 d0                	add    %edx,%eax
c1005460:	0f b6 00             	movzbl (%eax),%eax
c1005463:	89 c2                	mov    %eax,%edx
c1005465:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005469:	bb 01 00 00 00       	mov    $0x1,%ebx
c100546e:	89 c1                	mov    %eax,%ecx
c1005470:	d3 e3                	shl    %cl,%ebx
c1005472:	89 d8                	mov    %ebx,%eax
c1005474:	f7 d0                	not    %eax
c1005476:	89 d1                	mov    %edx,%ecx
c1005478:	21 c1                	and    %eax,%ecx
c100547a:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100547d:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005480:	01 d0                	add    %edx,%eax
c1005482:	89 ca                	mov    %ecx,%edx
c1005484:	88 10                	mov    %dl,(%eax)
c1005486:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100548a:	83 c0 01             	add    $0x1,%eax
c100548d:	88 45 f7             	mov    %al,-0x9(%ebp)
c1005490:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
c1005494:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1005498:	39 c2                	cmp    %eax,%edx
c100549a:	7c bc                	jl     c1005458 <partition_format+0x282>
c100549c:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
c10054a2:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c10054a8:	83 ec 04             	sub    $0x4,%esp
c10054ab:	52                   	push   %edx
c10054ac:	50                   	push   %eax
c10054ad:	ff 75 d0             	pushl  -0x30(%ebp)
c10054b0:	e8 c6 fa ff ff       	call   c1004f7b <ide_write>
c10054b5:	83 c4 10             	add    $0x10,%esp
c10054b8:	83 ec 04             	sub    $0x4,%esp
c10054bb:	ff 75 d4             	pushl  -0x2c(%ebp)
c10054be:	6a 00                	push   $0x0
c10054c0:	ff 75 d0             	pushl  -0x30(%ebp)
c10054c3:	e8 e2 ab ff ff       	call   c10000aa <memset>
c10054c8:	83 c4 10             	add    $0x10,%esp
c10054cb:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10054ce:	0f b6 00             	movzbl (%eax),%eax
c10054d1:	83 c8 01             	or     $0x1,%eax
c10054d4:	89 c2                	mov    %eax,%edx
c10054d6:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10054d9:	88 10                	mov    %dl,(%eax)
c10054db:	c7 45 cc 7d 00 00 00 	movl   $0x7d,-0x34(%ebp)
c10054e2:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
c10054e6:	b8 00 02 00 00       	mov    $0x200,%eax
c10054eb:	2b 45 cc             	sub    -0x34(%ebp),%eax
c10054ee:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c10054f1:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10054f4:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10054f7:	01 d0                	add    %edx,%eax
c10054f9:	83 ec 04             	sub    $0x4,%esp
c10054fc:	ff 75 c4             	pushl  -0x3c(%ebp)
c10054ff:	6a ff                	push   $0xffffffff
c1005501:	50                   	push   %eax
c1005502:	e8 a3 ab ff ff       	call   c10000aa <memset>
c1005507:	83 c4 10             	add    $0x10,%esp
c100550a:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c100550e:	eb 38                	jmp    c1005548 <partition_format+0x372>
c1005510:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005513:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005516:	01 d0                	add    %edx,%eax
c1005518:	0f b6 00             	movzbl (%eax),%eax
c100551b:	89 c2                	mov    %eax,%edx
c100551d:	0f be 45 f6          	movsbl -0xa(%ebp),%eax
c1005521:	bb 01 00 00 00       	mov    $0x1,%ebx
c1005526:	89 c1                	mov    %eax,%ecx
c1005528:	d3 e3                	shl    %cl,%ebx
c100552a:	89 d8                	mov    %ebx,%eax
c100552c:	f7 d0                	not    %eax
c100552e:	89 d1                	mov    %edx,%ecx
c1005530:	21 c1                	and    %eax,%ecx
c1005532:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005535:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005538:	01 d0                	add    %edx,%eax
c100553a:	89 ca                	mov    %ecx,%edx
c100553c:	88 10                	mov    %dl,(%eax)
c100553e:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1005542:	83 c0 01             	add    $0x1,%eax
c1005545:	88 45 f6             	mov    %al,-0xa(%ebp)
c1005548:	0f be 55 f6          	movsbl -0xa(%ebp),%edx
c100554c:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1005550:	39 c2                	cmp    %eax,%edx
c1005552:	7c bc                	jl     c1005510 <partition_format+0x33a>
c1005554:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c100555a:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1005560:	83 ec 04             	sub    $0x4,%esp
c1005563:	52                   	push   %edx
c1005564:	50                   	push   %eax
c1005565:	ff 75 d0             	pushl  -0x30(%ebp)
c1005568:	e8 0e fa ff ff       	call   c1004f7b <ide_write>
c100556d:	83 c4 10             	add    $0x10,%esp
c1005570:	83 ec 04             	sub    $0x4,%esp
c1005573:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005576:	6a 00                	push   $0x0
c1005578:	ff 75 d0             	pushl  -0x30(%ebp)
c100557b:	e8 2a ab ff ff       	call   c10000aa <memset>
c1005580:	83 c4 10             	add    $0x10,%esp
c1005583:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005586:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1005589:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
c100558f:	8d 14 00             	lea    (%eax,%eax,1),%edx
c1005592:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1005595:	89 50 04             	mov    %edx,0x4(%eax)
c1005598:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100559b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10055a1:	8b 95 e4 fd ff ff    	mov    -0x21c(%ebp),%edx
c10055a7:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10055aa:	89 50 10             	mov    %edx,0x10(%eax)
c10055ad:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
c10055b3:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c10055b9:	83 ec 04             	sub    $0x4,%esp
c10055bc:	52                   	push   %edx
c10055bd:	50                   	push   %eax
c10055be:	ff 75 d0             	pushl  -0x30(%ebp)
c10055c1:	e8 b5 f9 ff ff       	call   c1004f7b <ide_write>
c10055c6:	83 c4 10             	add    $0x10,%esp
c10055c9:	83 ec 04             	sub    $0x4,%esp
c10055cc:	ff 75 d4             	pushl  -0x2c(%ebp)
c10055cf:	6a 00                	push   $0x0
c10055d1:	ff 75 d0             	pushl  -0x30(%ebp)
c10055d4:	e8 d1 aa ff ff       	call   c10000aa <memset>
c10055d9:	83 c4 10             	add    $0x10,%esp
c10055dc:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10055df:	89 45 bc             	mov    %eax,-0x44(%ebp)
c10055e2:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10055e5:	83 ec 04             	sub    $0x4,%esp
c10055e8:	6a 01                	push   $0x1
c10055ea:	68 e9 a4 00 c1       	push   $0xc100a4e9
c10055ef:	50                   	push   %eax
c10055f0:	e8 13 ab ff ff       	call   c1000108 <memcpy>
c10055f5:	83 c4 10             	add    $0x10,%esp
c10055f8:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10055fb:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005602:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005605:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100560c:	83 45 bc 18          	addl   $0x18,-0x44(%ebp)
c1005610:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005613:	83 ec 04             	sub    $0x4,%esp
c1005616:	6a 02                	push   $0x2
c1005618:	68 eb a4 00 c1       	push   $0xc100a4eb
c100561d:	50                   	push   %eax
c100561e:	e8 e5 aa ff ff       	call   c1000108 <memcpy>
c1005623:	83 c4 10             	add    $0x10,%esp
c1005626:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005629:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005630:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005633:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100563a:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c1005640:	83 ec 04             	sub    $0x4,%esp
c1005643:	6a 01                	push   $0x1
c1005645:	50                   	push   %eax
c1005646:	ff 75 d0             	pushl  -0x30(%ebp)
c1005649:	e8 2d f9 ff ff       	call   c1004f7b <ide_write>
c100564e:	83 c4 10             	add    $0x10,%esp
c1005651:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005654:	83 ec 08             	sub    $0x8,%esp
c1005657:	ff 75 d4             	pushl  -0x2c(%ebp)
c100565a:	50                   	push   %eax
c100565b:	e8 55 d4 ff ff       	call   c1002ab5 <vmm_free>
c1005660:	83 c4 10             	add    $0x10,%esp
c1005663:	90                   	nop
c1005664:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1005667:	c9                   	leave  
c1005668:	c3                   	ret    

c1005669 <mount_partition>:
c1005669:	55                   	push   %ebp
c100566a:	89 e5                	mov    %esp,%ebp
c100566c:	83 ec 18             	sub    $0x18,%esp
c100566f:	e8 73 f9 ff ff       	call   c1004fe7 <read_main_partition>
c1005674:	a3 30 32 a1 c1       	mov    %eax,0xc1a13230
c1005679:	83 ec 08             	sub    $0x8,%esp
c100567c:	6a 02                	push   $0x2
c100567e:	68 00 02 00 00       	push   $0x200
c1005683:	e8 08 d3 ff ff       	call   c1002990 <vmm_malloc>
c1005688:	83 c4 10             	add    $0x10,%esp
c100568b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100568e:	83 ec 04             	sub    $0x4,%esp
c1005691:	68 00 02 00 00       	push   $0x200
c1005696:	6a 00                	push   $0x0
c1005698:	ff 75 f0             	pushl  -0x10(%ebp)
c100569b:	e8 0a aa ff ff       	call   c10000aa <memset>
c10056a0:	83 c4 10             	add    $0x10,%esp
c10056a3:	83 ec 04             	sub    $0x4,%esp
c10056a6:	6a 01                	push   $0x1
c10056a8:	68 00 08 00 00       	push   $0x800
c10056ad:	ff 75 f0             	pushl  -0x10(%ebp)
c10056b0:	e8 89 f8 ff ff       	call   c1004f3e <ide_read>
c10056b5:	83 c4 10             	add    $0x10,%esp
c10056b8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10056bd:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10056c0:	89 50 10             	mov    %edx,0x10(%eax)
c10056c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10056c6:	8b 40 14             	mov    0x14(%eax),%eax
c10056c9:	c1 e0 09             	shl    $0x9,%eax
c10056cc:	83 ec 08             	sub    $0x8,%esp
c10056cf:	6a 02                	push   $0x2
c10056d1:	50                   	push   %eax
c10056d2:	e8 b9 d2 ff ff       	call   c1002990 <vmm_malloc>
c10056d7:	83 c4 10             	add    $0x10,%esp
c10056da:	89 c2                	mov    %eax,%edx
c10056dc:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10056e1:	89 50 18             	mov    %edx,0x18(%eax)
c10056e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10056e7:	8b 50 14             	mov    0x14(%eax),%edx
c10056ea:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10056ef:	c1 e2 09             	shl    $0x9,%edx
c10056f2:	89 50 14             	mov    %edx,0x14(%eax)
c10056f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10056f8:	8b 48 14             	mov    0x14(%eax),%ecx
c10056fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10056fe:	8b 50 10             	mov    0x10(%eax),%edx
c1005701:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005706:	8b 40 18             	mov    0x18(%eax),%eax
c1005709:	83 ec 04             	sub    $0x4,%esp
c100570c:	51                   	push   %ecx
c100570d:	52                   	push   %edx
c100570e:	50                   	push   %eax
c100570f:	e8 2a f8 ff ff       	call   c1004f3e <ide_read>
c1005714:	83 c4 10             	add    $0x10,%esp
c1005717:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100571a:	8b 40 1c             	mov    0x1c(%eax),%eax
c100571d:	c1 e0 09             	shl    $0x9,%eax
c1005720:	83 ec 08             	sub    $0x8,%esp
c1005723:	6a 02                	push   $0x2
c1005725:	50                   	push   %eax
c1005726:	e8 65 d2 ff ff       	call   c1002990 <vmm_malloc>
c100572b:	83 c4 10             	add    $0x10,%esp
c100572e:	89 c2                	mov    %eax,%edx
c1005730:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005735:	89 50 20             	mov    %edx,0x20(%eax)
c1005738:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100573b:	8b 50 1c             	mov    0x1c(%eax),%edx
c100573e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005743:	c1 e2 09             	shl    $0x9,%edx
c1005746:	89 50 1c             	mov    %edx,0x1c(%eax)
c1005749:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100574c:	8b 48 1c             	mov    0x1c(%eax),%ecx
c100574f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005752:	8b 50 18             	mov    0x18(%eax),%edx
c1005755:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100575a:	8b 40 20             	mov    0x20(%eax),%eax
c100575d:	83 ec 04             	sub    $0x4,%esp
c1005760:	51                   	push   %ecx
c1005761:	52                   	push   %edx
c1005762:	50                   	push   %eax
c1005763:	e8 d6 f7 ff ff       	call   c1004f3e <ide_read>
c1005768:	83 c4 10             	add    $0x10,%esp
c100576b:	e8 29 eb ff ff       	call   c1004299 <clear>
c1005770:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005775:	8b 40 10             	mov    0x10(%eax),%eax
c1005778:	8b 00                	mov    (%eax),%eax
c100577a:	83 ec 08             	sub    $0x8,%esp
c100577d:	50                   	push   %eax
c100577e:	68 f4 a3 00 c1       	push   $0xc100a3f4
c1005783:	e8 0e ef ff ff       	call   c1004696 <printk>
c1005788:	83 c4 10             	add    $0x10,%esp
c100578b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005790:	8b 40 10             	mov    0x10(%eax),%eax
c1005793:	8b 40 04             	mov    0x4(%eax),%eax
c1005796:	83 ec 08             	sub    $0x8,%esp
c1005799:	50                   	push   %eax
c100579a:	68 04 a4 00 c1       	push   $0xc100a404
c100579f:	e8 f2 ee ff ff       	call   c1004696 <printk>
c10057a4:	83 c4 10             	add    $0x10,%esp
c10057a7:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10057ac:	8b 40 10             	mov    0x10(%eax),%eax
c10057af:	8b 40 08             	mov    0x8(%eax),%eax
c10057b2:	83 ec 08             	sub    $0x8,%esp
c10057b5:	50                   	push   %eax
c10057b6:	68 16 a4 00 c1       	push   $0xc100a416
c10057bb:	e8 d6 ee ff ff       	call   c1004696 <printk>
c10057c0:	83 c4 10             	add    $0x10,%esp
c10057c3:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10057c8:	8b 40 10             	mov    0x10(%eax),%eax
c10057cb:	8b 40 10             	mov    0x10(%eax),%eax
c10057ce:	83 ec 08             	sub    $0x8,%esp
c10057d1:	50                   	push   %eax
c10057d2:	68 2a a4 00 c1       	push   $0xc100a42a
c10057d7:	e8 ba ee ff ff       	call   c1004696 <printk>
c10057dc:	83 c4 10             	add    $0x10,%esp
c10057df:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10057e4:	8b 40 10             	mov    0x10(%eax),%eax
c10057e7:	8b 40 14             	mov    0x14(%eax),%eax
c10057ea:	83 ec 08             	sub    $0x8,%esp
c10057ed:	50                   	push   %eax
c10057ee:	68 45 a4 00 c1       	push   $0xc100a445
c10057f3:	e8 9e ee ff ff       	call   c1004696 <printk>
c10057f8:	83 c4 10             	add    $0x10,%esp
c10057fb:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005800:	8b 40 10             	mov    0x10(%eax),%eax
c1005803:	8b 40 18             	mov    0x18(%eax),%eax
c1005806:	83 ec 08             	sub    $0x8,%esp
c1005809:	50                   	push   %eax
c100580a:	68 62 a4 00 c1       	push   $0xc100a462
c100580f:	e8 82 ee ff ff       	call   c1004696 <printk>
c1005814:	83 c4 10             	add    $0x10,%esp
c1005817:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100581c:	8b 40 10             	mov    0x10(%eax),%eax
c100581f:	8b 40 1c             	mov    0x1c(%eax),%eax
c1005822:	83 ec 08             	sub    $0x8,%esp
c1005825:	50                   	push   %eax
c1005826:	68 7d a4 00 c1       	push   $0xc100a47d
c100582b:	e8 66 ee ff ff       	call   c1004696 <printk>
c1005830:	83 c4 10             	add    $0x10,%esp
c1005833:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005838:	8b 40 10             	mov    0x10(%eax),%eax
c100583b:	8b 40 20             	mov    0x20(%eax),%eax
c100583e:	83 ec 08             	sub    $0x8,%esp
c1005841:	50                   	push   %eax
c1005842:	68 9a a4 00 c1       	push   $0xc100a49a
c1005847:	e8 4a ee ff ff       	call   c1004696 <printk>
c100584c:	83 c4 10             	add    $0x10,%esp
c100584f:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005854:	8b 40 10             	mov    0x10(%eax),%eax
c1005857:	8b 40 24             	mov    0x24(%eax),%eax
c100585a:	83 ec 08             	sub    $0x8,%esp
c100585d:	50                   	push   %eax
c100585e:	68 b4 a4 00 c1       	push   $0xc100a4b4
c1005863:	e8 2e ee ff ff       	call   c1004696 <printk>
c1005868:	83 c4 10             	add    $0x10,%esp
c100586b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005870:	8b 40 10             	mov    0x10(%eax),%eax
c1005873:	8b 40 28             	mov    0x28(%eax),%eax
c1005876:	83 ec 08             	sub    $0x8,%esp
c1005879:	50                   	push   %eax
c100587a:	68 d0 a4 00 c1       	push   $0xc100a4d0
c100587f:	e8 12 ee ff ff       	call   c1004696 <printk>
c1005884:	83 c4 10             	add    $0x10,%esp
c1005887:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100588c:	8b 40 18             	mov    0x18(%eax),%eax
c100588f:	83 ec 08             	sub    $0x8,%esp
c1005892:	50                   	push   %eax
c1005893:	68 f0 a4 00 c1       	push   $0xc100a4f0
c1005898:	e8 f9 ed ff ff       	call   c1004696 <printk>
c100589d:	83 c4 10             	add    $0x10,%esp
c10058a0:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10058a5:	8b 40 14             	mov    0x14(%eax),%eax
c10058a8:	83 ec 08             	sub    $0x8,%esp
c10058ab:	50                   	push   %eax
c10058ac:	68 14 a5 00 c1       	push   $0xc100a514
c10058b1:	e8 e0 ed ff ff       	call   c1004696 <printk>
c10058b6:	83 c4 10             	add    $0x10,%esp
c10058b9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10058be:	8b 40 20             	mov    0x20(%eax),%eax
c10058c1:	83 ec 08             	sub    $0x8,%esp
c10058c4:	50                   	push   %eax
c10058c5:	68 44 a5 00 c1       	push   $0xc100a544
c10058ca:	e8 c7 ed ff ff       	call   c1004696 <printk>
c10058cf:	83 c4 10             	add    $0x10,%esp
c10058d2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10058d7:	8b 40 1c             	mov    0x1c(%eax),%eax
c10058da:	83 ec 08             	sub    $0x8,%esp
c10058dd:	50                   	push   %eax
c10058de:	68 68 a5 00 c1       	push   $0xc100a568
c10058e3:	e8 ae ed ff ff       	call   c1004696 <printk>
c10058e8:	83 c4 10             	add    $0x10,%esp
c10058eb:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10058f0:	83 ec 0c             	sub    $0xc,%esp
c10058f3:	50                   	push   %eax
c10058f4:	e8 31 19 00 00       	call   c100722a <open_root_dir>
c10058f9:	83 c4 10             	add    $0x10,%esp
c10058fc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005903:	eb 1d                	jmp    c1005922 <mount_partition+0x2b9>
c1005905:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005908:	8d 42 01             	lea    0x1(%edx),%eax
c100590b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100590e:	89 d0                	mov    %edx,%eax
c1005910:	01 c0                	add    %eax,%eax
c1005912:	01 d0                	add    %edx,%eax
c1005914:	c1 e0 02             	shl    $0x2,%eax
c1005917:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c100591c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005922:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1005926:	76 dd                	jbe    c1005905 <mount_partition+0x29c>
c1005928:	90                   	nop
c1005929:	90                   	nop
c100592a:	c9                   	leave  
c100592b:	c3                   	ret    

c100592c <path_parse>:
c100592c:	55                   	push   %ebp
c100592d:	89 e5                	mov    %esp,%ebp
c100592f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005932:	0f b6 00             	movzbl (%eax),%eax
c1005935:	3c 2f                	cmp    $0x2f,%al
c1005937:	75 27                	jne    c1005960 <path_parse+0x34>
c1005939:	83 45 08 01          	addl   $0x1,0x8(%ebp)
c100593d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005940:	0f b6 00             	movzbl (%eax),%eax
c1005943:	3c 2f                	cmp    $0x2f,%al
c1005945:	74 f2                	je     c1005939 <path_parse+0xd>
c1005947:	eb 17                	jmp    c1005960 <path_parse+0x34>
c1005949:	8b 55 08             	mov    0x8(%ebp),%edx
c100594c:	8d 42 01             	lea    0x1(%edx),%eax
c100594f:	89 45 08             	mov    %eax,0x8(%ebp)
c1005952:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005955:	8d 48 01             	lea    0x1(%eax),%ecx
c1005958:	89 4d 0c             	mov    %ecx,0xc(%ebp)
c100595b:	0f b6 12             	movzbl (%edx),%edx
c100595e:	88 10                	mov    %dl,(%eax)
c1005960:	8b 45 08             	mov    0x8(%ebp),%eax
c1005963:	0f b6 00             	movzbl (%eax),%eax
c1005966:	3c 2f                	cmp    $0x2f,%al
c1005968:	74 0a                	je     c1005974 <path_parse+0x48>
c100596a:	8b 45 08             	mov    0x8(%ebp),%eax
c100596d:	0f b6 00             	movzbl (%eax),%eax
c1005970:	84 c0                	test   %al,%al
c1005972:	75 d5                	jne    c1005949 <path_parse+0x1d>
c1005974:	8b 45 08             	mov    0x8(%ebp),%eax
c1005977:	0f b6 00             	movzbl (%eax),%eax
c100597a:	84 c0                	test   %al,%al
c100597c:	75 07                	jne    c1005985 <path_parse+0x59>
c100597e:	b8 00 00 00 00       	mov    $0x0,%eax
c1005983:	eb 03                	jmp    c1005988 <path_parse+0x5c>
c1005985:	8b 45 08             	mov    0x8(%ebp),%eax
c1005988:	5d                   	pop    %ebp
c1005989:	c3                   	ret    

c100598a <path_depth_cnt>:
c100598a:	55                   	push   %ebp
c100598b:	89 e5                	mov    %esp,%ebp
c100598d:	83 ec 28             	sub    $0x28,%esp
c1005990:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1005994:	75 19                	jne    c10059af <path_depth_cnt+0x25>
c1005996:	68 95 a5 00 c1       	push   $0xc100a595
c100599b:	68 70 ac 00 c1       	push   $0xc100ac70
c10059a0:	68 d1 00 00 00       	push   $0xd1
c10059a5:	68 a8 a5 00 c1       	push   $0xc100a5a8
c10059aa:	e8 5e a9 ff ff       	call   c100030d <__PANIC>
c10059af:	8b 45 08             	mov    0x8(%ebp),%eax
c10059b2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10059b5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10059bc:	83 ec 08             	sub    $0x8,%esp
c10059bf:	8d 45 e0             	lea    -0x20(%ebp),%eax
c10059c2:	50                   	push   %eax
c10059c3:	ff 75 f4             	pushl  -0xc(%ebp)
c10059c6:	e8 61 ff ff ff       	call   c100592c <path_parse>
c10059cb:	83 c4 10             	add    $0x10,%esp
c10059ce:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10059d1:	eb 32                	jmp    c1005a05 <path_depth_cnt+0x7b>
c10059d3:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10059d7:	83 ec 04             	sub    $0x4,%esp
c10059da:	6a 10                	push   $0x10
c10059dc:	6a 00                	push   $0x0
c10059de:	8d 45 e0             	lea    -0x20(%ebp),%eax
c10059e1:	50                   	push   %eax
c10059e2:	e8 c3 a6 ff ff       	call   c10000aa <memset>
c10059e7:	83 c4 10             	add    $0x10,%esp
c10059ea:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10059ee:	74 15                	je     c1005a05 <path_depth_cnt+0x7b>
c10059f0:	83 ec 08             	sub    $0x8,%esp
c10059f3:	8d 45 e0             	lea    -0x20(%ebp),%eax
c10059f6:	50                   	push   %eax
c10059f7:	ff 75 f4             	pushl  -0xc(%ebp)
c10059fa:	e8 2d ff ff ff       	call   c100592c <path_parse>
c10059ff:	83 c4 10             	add    $0x10,%esp
c1005a02:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005a05:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1005a09:	84 c0                	test   %al,%al
c1005a0b:	75 c6                	jne    c10059d3 <path_depth_cnt+0x49>
c1005a0d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005a10:	c9                   	leave  
c1005a11:	c3                   	ret    

c1005a12 <search_file>:
c1005a12:	55                   	push   %ebp
c1005a13:	89 e5                	mov    %esp,%ebp
c1005a15:	57                   	push   %edi
c1005a16:	53                   	push   %ebx
c1005a17:	83 ec 40             	sub    $0x40,%esp
c1005a1a:	83 ec 08             	sub    $0x8,%esp
c1005a1d:	68 d7 a5 00 c1       	push   $0xc100a5d7
c1005a22:	ff 75 08             	pushl  0x8(%ebp)
c1005a25:	e8 59 a7 ff ff       	call   c1000183 <strcmp>
c1005a2a:	83 c4 10             	add    $0x10,%esp
c1005a2d:	85 c0                	test   %eax,%eax
c1005a2f:	74 2e                	je     c1005a5f <search_file+0x4d>
c1005a31:	83 ec 08             	sub    $0x8,%esp
c1005a34:	68 d9 a5 00 c1       	push   $0xc100a5d9
c1005a39:	ff 75 08             	pushl  0x8(%ebp)
c1005a3c:	e8 42 a7 ff ff       	call   c1000183 <strcmp>
c1005a41:	83 c4 10             	add    $0x10,%esp
c1005a44:	85 c0                	test   %eax,%eax
c1005a46:	74 17                	je     c1005a5f <search_file+0x4d>
c1005a48:	83 ec 08             	sub    $0x8,%esp
c1005a4b:	68 dc a5 00 c1       	push   $0xc100a5dc
c1005a50:	ff 75 08             	pushl  0x8(%ebp)
c1005a53:	e8 2b a7 ff ff       	call   c1000183 <strcmp>
c1005a58:	83 c4 10             	add    $0x10,%esp
c1005a5b:	85 c0                	test   %eax,%eax
c1005a5d:	75 2c                	jne    c1005a8b <search_file+0x79>
c1005a5f:	8b 15 34 32 a1 c1    	mov    0xc1a13234,%edx
c1005a65:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005a68:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1005a6e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005a71:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1005a78:	00 00 00 
c1005a7b:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005a7e:	c6 00 00             	movb   $0x0,(%eax)
c1005a81:	b8 00 00 00 00       	mov    $0x0,%eax
c1005a86:	e9 10 02 00 00       	jmp    c1005c9b <search_file+0x289>
c1005a8b:	83 ec 0c             	sub    $0xc,%esp
c1005a8e:	ff 75 08             	pushl  0x8(%ebp)
c1005a91:	e8 88 a6 ff ff       	call   c100011e <strlen>
c1005a96:	83 c4 10             	add    $0x10,%esp
c1005a99:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005a9c:	8b 45 08             	mov    0x8(%ebp),%eax
c1005a9f:	0f b6 00             	movzbl (%eax),%eax
c1005aa2:	3c 2f                	cmp    $0x2f,%al
c1005aa4:	75 0f                	jne    c1005ab5 <search_file+0xa3>
c1005aa6:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1005aaa:	76 09                	jbe    c1005ab5 <search_file+0xa3>
c1005aac:	81 7d e8 ff 01 00 00 	cmpl   $0x1ff,-0x18(%ebp)
c1005ab3:	76 19                	jbe    c1005ace <search_file+0xbc>
c1005ab5:	68 e0 a5 00 c1       	push   $0xc100a5e0
c1005aba:	68 80 ac 00 c1       	push   $0xc100ac80
c1005abf:	68 ee 00 00 00       	push   $0xee
c1005ac4:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1005ac9:	e8 3f a8 ff ff       	call   c100030d <__PANIC>
c1005ace:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ad1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005ad4:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1005ad9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005adc:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
c1005ae3:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
c1005aea:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
c1005af1:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
c1005af8:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005afb:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005afe:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1005b04:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005b07:	c7 80 04 02 00 00 00 	movl   $0x0,0x204(%eax)
c1005b0e:	00 00 00 
c1005b11:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1005b18:	83 ec 08             	sub    $0x8,%esp
c1005b1b:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1005b1e:	50                   	push   %eax
c1005b1f:	ff 75 f4             	pushl  -0xc(%ebp)
c1005b22:	e8 05 fe ff ff       	call   c100592c <path_parse>
c1005b27:	83 c4 10             	add    $0x10,%esp
c1005b2a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005b2d:	e9 1b 01 00 00       	jmp    c1005c4d <search_file+0x23b>
c1005b32:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005b35:	83 ec 0c             	sub    $0xc,%esp
c1005b38:	50                   	push   %eax
c1005b39:	e8 e0 a5 ff ff       	call   c100011e <strlen>
c1005b3e:	83 c4 10             	add    $0x10,%esp
c1005b41:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1005b46:	76 19                	jbe    c1005b61 <search_file+0x14f>
c1005b48:	68 20 a6 00 c1       	push   $0xc100a620
c1005b4d:	68 80 ac 00 c1       	push   $0xc100ac80
c1005b52:	68 ff 00 00 00       	push   $0xff
c1005b57:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1005b5c:	e8 ac a7 ff ff       	call   c100030d <__PANIC>
c1005b61:	8b 55 0c             	mov    0xc(%ebp),%edx
c1005b64:	89 d0                	mov    %edx,%eax
c1005b66:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1005b6b:	89 c3                	mov    %eax,%ebx
c1005b6d:	b8 00 00 00 00       	mov    $0x0,%eax
c1005b72:	89 df                	mov    %ebx,%edi
c1005b74:	f2 ae                	repnz scas %es:(%edi),%al
c1005b76:	89 c8                	mov    %ecx,%eax
c1005b78:	f7 d0                	not    %eax
c1005b7a:	83 e8 01             	sub    $0x1,%eax
c1005b7d:	01 d0                	add    %edx,%eax
c1005b7f:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1005b84:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005b87:	83 ec 08             	sub    $0x8,%esp
c1005b8a:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1005b8d:	52                   	push   %edx
c1005b8e:	50                   	push   %eax
c1005b8f:	e8 41 a6 ff ff       	call   c10001d5 <strcat>
c1005b94:	83 c4 10             	add    $0x10,%esp
c1005b97:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005b9c:	8d 55 d0             	lea    -0x30(%ebp),%edx
c1005b9f:	52                   	push   %edx
c1005ba0:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1005ba3:	52                   	push   %edx
c1005ba4:	ff 75 f0             	pushl  -0x10(%ebp)
c1005ba7:	50                   	push   %eax
c1005ba8:	e8 3f 17 00 00       	call   c10072ec <search_dir_entry>
c1005bad:	83 c4 10             	add    $0x10,%esp
c1005bb0:	84 c0                	test   %al,%al
c1005bb2:	0f 84 8e 00 00 00    	je     c1005c46 <search_file+0x234>
c1005bb8:	83 ec 04             	sub    $0x4,%esp
c1005bbb:	6a 10                	push   $0x10
c1005bbd:	6a 00                	push   $0x0
c1005bbf:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1005bc2:	50                   	push   %eax
c1005bc3:	e8 e2 a4 ff ff       	call   c10000aa <memset>
c1005bc8:	83 c4 10             	add    $0x10,%esp
c1005bcb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1005bcf:	74 15                	je     c1005be6 <search_file+0x1d4>
c1005bd1:	83 ec 08             	sub    $0x8,%esp
c1005bd4:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1005bd7:	50                   	push   %eax
c1005bd8:	ff 75 f4             	pushl  -0xc(%ebp)
c1005bdb:	e8 4c fd ff ff       	call   c100592c <path_parse>
c1005be0:	83 c4 10             	add    $0x10,%esp
c1005be3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005be6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005be9:	83 f8 02             	cmp    $0x2,%eax
c1005bec:	75 3e                	jne    c1005c2c <search_file+0x21a>
c1005bee:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005bf1:	8b 00                	mov    (%eax),%eax
c1005bf3:	8b 00                	mov    (%eax),%eax
c1005bf5:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005bf8:	83 ec 0c             	sub    $0xc,%esp
c1005bfb:	ff 75 f0             	pushl  -0x10(%ebp)
c1005bfe:	e8 d5 18 00 00       	call   c10074d8 <dir_close>
c1005c03:	83 c4 10             	add    $0x10,%esp
c1005c06:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005c09:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005c0e:	83 ec 08             	sub    $0x8,%esp
c1005c11:	52                   	push   %edx
c1005c12:	50                   	push   %eax
c1005c13:	e8 94 16 00 00       	call   c10072ac <dir_open>
c1005c18:	83 c4 10             	add    $0x10,%esp
c1005c1b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005c1e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005c21:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005c24:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1005c2a:	eb 21                	jmp    c1005c4d <search_file+0x23b>
c1005c2c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005c2f:	83 f8 01             	cmp    $0x1,%eax
c1005c32:	75 19                	jne    c1005c4d <search_file+0x23b>
c1005c34:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005c37:	c7 80 04 02 00 00 01 	movl   $0x1,0x204(%eax)
c1005c3e:	00 00 00 
c1005c41:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005c44:	eb 55                	jmp    c1005c9b <search_file+0x289>
c1005c46:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005c4b:	eb 4e                	jmp    c1005c9b <search_file+0x289>
c1005c4d:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
c1005c51:	84 c0                	test   %al,%al
c1005c53:	0f 85 d9 fe ff ff    	jne    c1005b32 <search_file+0x120>
c1005c59:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005c5c:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
c1005c62:	83 ec 0c             	sub    $0xc,%esp
c1005c65:	50                   	push   %eax
c1005c66:	e8 6d 18 00 00       	call   c10074d8 <dir_close>
c1005c6b:	83 c4 10             	add    $0x10,%esp
c1005c6e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005c73:	83 ec 08             	sub    $0x8,%esp
c1005c76:	ff 75 ec             	pushl  -0x14(%ebp)
c1005c79:	50                   	push   %eax
c1005c7a:	e8 2d 16 00 00       	call   c10072ac <dir_open>
c1005c7f:	83 c4 10             	add    $0x10,%esp
c1005c82:	8b 55 0c             	mov    0xc(%ebp),%edx
c1005c85:	89 82 00 02 00 00    	mov    %eax,0x200(%edx)
c1005c8b:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005c8e:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1005c95:	00 00 00 
c1005c98:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005c9b:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1005c9e:	5b                   	pop    %ebx
c1005c9f:	5f                   	pop    %edi
c1005ca0:	5d                   	pop    %ebp
c1005ca1:	c3                   	ret    

c1005ca2 <sys_open>:
c1005ca2:	55                   	push   %ebp
c1005ca3:	89 e5                	mov    %esp,%ebp
c1005ca5:	53                   	push   %ebx
c1005ca6:	81 ec 34 02 00 00    	sub    $0x234,%esp
c1005cac:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005caf:	88 85 d4 fd ff ff    	mov    %al,-0x22c(%ebp)
c1005cb5:	83 ec 0c             	sub    $0xc,%esp
c1005cb8:	ff 75 08             	pushl  0x8(%ebp)
c1005cbb:	e8 5e a4 ff ff       	call   c100011e <strlen>
c1005cc0:	83 c4 10             	add    $0x10,%esp
c1005cc3:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005cc6:	8b 45 08             	mov    0x8(%ebp),%eax
c1005cc9:	01 d0                	add    %edx,%eax
c1005ccb:	0f b6 00             	movzbl (%eax),%eax
c1005cce:	3c 2f                	cmp    $0x2f,%al
c1005cd0:	75 1d                	jne    c1005cef <sys_open+0x4d>
c1005cd2:	83 ec 08             	sub    $0x8,%esp
c1005cd5:	ff 75 08             	pushl  0x8(%ebp)
c1005cd8:	68 4d a6 00 c1       	push   $0xc100a64d
c1005cdd:	e8 b4 e9 ff ff       	call   c1004696 <printk>
c1005ce2:	83 c4 10             	add    $0x10,%esp
c1005ce5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005cea:	e9 35 02 00 00       	jmp    c1005f24 <sys_open+0x282>
c1005cef:	80 bd d4 fd ff ff 07 	cmpb   $0x7,-0x22c(%ebp)
c1005cf6:	76 19                	jbe    c1005d11 <sys_open+0x6f>
c1005cf8:	68 68 a6 00 c1       	push   $0xc100a668
c1005cfd:	68 8c ac 00 c1       	push   $0xc100ac8c
c1005d02:	68 2d 01 00 00       	push   $0x12d
c1005d07:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1005d0c:	e8 fc a5 ff ff       	call   c100030d <__PANIC>
c1005d11:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1005d18:	83 ec 04             	sub    $0x4,%esp
c1005d1b:	68 08 02 00 00       	push   $0x208
c1005d20:	6a 00                	push   $0x0
c1005d22:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005d28:	50                   	push   %eax
c1005d29:	e8 7c a3 ff ff       	call   c10000aa <memset>
c1005d2e:	83 c4 10             	add    $0x10,%esp
c1005d31:	83 ec 0c             	sub    $0xc,%esp
c1005d34:	ff 75 08             	pushl  0x8(%ebp)
c1005d37:	e8 4e fc ff ff       	call   c100598a <path_depth_cnt>
c1005d3c:	83 c4 10             	add    $0x10,%esp
c1005d3f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005d42:	83 ec 08             	sub    $0x8,%esp
c1005d45:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005d4b:	50                   	push   %eax
c1005d4c:	ff 75 08             	pushl  0x8(%ebp)
c1005d4f:	e8 be fc ff ff       	call   c1005a12 <search_file>
c1005d54:	83 c4 10             	add    $0x10,%esp
c1005d57:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005d5a:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
c1005d5e:	0f 95 c0             	setne  %al
c1005d61:	88 45 eb             	mov    %al,-0x15(%ebp)
c1005d64:	0f be 45 eb          	movsbl -0x15(%ebp),%eax
c1005d68:	83 ec 08             	sub    $0x8,%esp
c1005d6b:	50                   	push   %eax
c1005d6c:	68 73 a6 00 c1       	push   $0xc100a673
c1005d71:	e8 20 e9 ff ff       	call   c1004696 <printk>
c1005d76:	83 c4 10             	add    $0x10,%esp
c1005d79:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005d7c:	83 f8 02             	cmp    $0x2,%eax
c1005d7f:	75 29                	jne    c1005daa <sys_open+0x108>
c1005d81:	83 ec 0c             	sub    $0xc,%esp
c1005d84:	68 84 a6 00 c1       	push   $0xc100a684
c1005d89:	e8 08 e9 ff ff       	call   c1004696 <printk>
c1005d8e:	83 c4 10             	add    $0x10,%esp
c1005d91:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005d94:	83 ec 0c             	sub    $0xc,%esp
c1005d97:	50                   	push   %eax
c1005d98:	e8 3b 17 00 00       	call   c10074d8 <dir_close>
c1005d9d:	83 c4 10             	add    $0x10,%esp
c1005da0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005da5:	e9 7a 01 00 00       	jmp    c1005f24 <sys_open+0x282>
c1005daa:	83 ec 0c             	sub    $0xc,%esp
c1005dad:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005db3:	50                   	push   %eax
c1005db4:	e8 d1 fb ff ff       	call   c100598a <path_depth_cnt>
c1005db9:	83 c4 10             	add    $0x10,%esp
c1005dbc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1005dbf:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005dc2:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1005dc5:	74 33                	je     c1005dfa <sys_open+0x158>
c1005dc7:	83 ec 04             	sub    $0x4,%esp
c1005dca:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005dd0:	50                   	push   %eax
c1005dd1:	ff 75 08             	pushl  0x8(%ebp)
c1005dd4:	68 c4 a6 00 c1       	push   $0xc100a6c4
c1005dd9:	e8 b8 e8 ff ff       	call   c1004696 <printk>
c1005dde:	83 c4 10             	add    $0x10,%esp
c1005de1:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005de4:	83 ec 0c             	sub    $0xc,%esp
c1005de7:	50                   	push   %eax
c1005de8:	e8 eb 16 00 00       	call   c10074d8 <dir_close>
c1005ded:	83 c4 10             	add    $0x10,%esp
c1005df0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005df5:	e9 2a 01 00 00       	jmp    c1005f24 <sys_open+0x282>
c1005dfa:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1005dfe:	75 56                	jne    c1005e56 <sys_open+0x1b4>
c1005e00:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1005e07:	83 e0 04             	and    $0x4,%eax
c1005e0a:	85 c0                	test   %eax,%eax
c1005e0c:	75 48                	jne    c1005e56 <sys_open+0x1b4>
c1005e0e:	83 ec 08             	sub    $0x8,%esp
c1005e11:	6a 2f                	push   $0x2f
c1005e13:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005e19:	50                   	push   %eax
c1005e1a:	e8 77 a3 ff ff       	call   c1000196 <strrchr>
c1005e1f:	83 c4 10             	add    $0x10,%esp
c1005e22:	83 c0 01             	add    $0x1,%eax
c1005e25:	83 ec 04             	sub    $0x4,%esp
c1005e28:	50                   	push   %eax
c1005e29:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1005e2f:	50                   	push   %eax
c1005e30:	68 00 a7 00 c1       	push   $0xc100a700
c1005e35:	e8 5c e8 ff ff       	call   c1004696 <printk>
c1005e3a:	83 c4 10             	add    $0x10,%esp
c1005e3d:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005e40:	83 ec 0c             	sub    $0xc,%esp
c1005e43:	50                   	push   %eax
c1005e44:	e8 8f 16 00 00       	call   c10074d8 <dir_close>
c1005e49:	83 c4 10             	add    $0x10,%esp
c1005e4c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005e51:	e9 ce 00 00 00       	jmp    c1005f24 <sys_open+0x282>
c1005e56:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1005e5a:	74 3a                	je     c1005e96 <sys_open+0x1f4>
c1005e5c:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1005e63:	83 e0 04             	and    $0x4,%eax
c1005e66:	85 c0                	test   %eax,%eax
c1005e68:	74 2c                	je     c1005e96 <sys_open+0x1f4>
c1005e6a:	83 ec 08             	sub    $0x8,%esp
c1005e6d:	ff 75 08             	pushl  0x8(%ebp)
c1005e70:	68 20 a7 00 c1       	push   $0xc100a720
c1005e75:	e8 1c e8 ff ff       	call   c1004696 <printk>
c1005e7a:	83 c4 10             	add    $0x10,%esp
c1005e7d:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005e80:	83 ec 0c             	sub    $0xc,%esp
c1005e83:	50                   	push   %eax
c1005e84:	e8 4f 16 00 00       	call   c10074d8 <dir_close>
c1005e89:	83 c4 10             	add    $0x10,%esp
c1005e8c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005e91:	e9 8e 00 00 00       	jmp    c1005f24 <sys_open+0x282>
c1005e96:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1005e9d:	83 e0 04             	and    $0x4,%eax
c1005ea0:	83 f8 04             	cmp    $0x4,%eax
c1005ea3:	75 4f                	jne    c1005ef4 <sys_open+0x252>
c1005ea5:	83 ec 0c             	sub    $0xc,%esp
c1005ea8:	68 37 a7 00 c1       	push   $0xc100a737
c1005ead:	e8 e4 e7 ff ff       	call   c1004696 <printk>
c1005eb2:	83 c4 10             	add    $0x10,%esp
c1005eb5:	0f b6 9d d4 fd ff ff 	movzbl -0x22c(%ebp),%ebx
c1005ebc:	83 ec 08             	sub    $0x8,%esp
c1005ebf:	6a 2f                	push   $0x2f
c1005ec1:	ff 75 08             	pushl  0x8(%ebp)
c1005ec4:	e8 cd a2 ff ff       	call   c1000196 <strrchr>
c1005ec9:	83 c4 10             	add    $0x10,%esp
c1005ecc:	8d 50 01             	lea    0x1(%eax),%edx
c1005ecf:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005ed2:	83 ec 04             	sub    $0x4,%esp
c1005ed5:	53                   	push   %ebx
c1005ed6:	52                   	push   %edx
c1005ed7:	50                   	push   %eax
c1005ed8:	e8 03 25 00 00       	call   c10083e0 <file_create>
c1005edd:	83 c4 10             	add    $0x10,%esp
c1005ee0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005ee3:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005ee6:	83 ec 0c             	sub    $0xc,%esp
c1005ee9:	50                   	push   %eax
c1005eea:	e8 e9 15 00 00       	call   c10074d8 <dir_close>
c1005eef:	83 c4 10             	add    $0x10,%esp
c1005ef2:	eb 2d                	jmp    c1005f21 <sys_open+0x27f>
c1005ef4:	83 ec 08             	sub    $0x8,%esp
c1005ef7:	ff 75 ec             	pushl  -0x14(%ebp)
c1005efa:	68 46 a7 00 c1       	push   $0xc100a746
c1005eff:	e8 92 e7 ff ff       	call   c1004696 <printk>
c1005f04:	83 c4 10             	add    $0x10,%esp
c1005f07:	0f b6 95 d4 fd ff ff 	movzbl -0x22c(%ebp),%edx
c1005f0e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1005f11:	83 ec 08             	sub    $0x8,%esp
c1005f14:	52                   	push   %edx
c1005f15:	50                   	push   %eax
c1005f16:	e8 a7 27 00 00       	call   c10086c2 <file_open>
c1005f1b:	83 c4 10             	add    $0x10,%esp
c1005f1e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005f21:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005f24:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1005f27:	c9                   	leave  
c1005f28:	c3                   	ret    

c1005f29 <fd_local2global>:
c1005f29:	55                   	push   %ebp
c1005f2a:	89 e5                	mov    %esp,%ebp
c1005f2c:	83 ec 18             	sub    $0x18,%esp
c1005f2f:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1005f34:	8b 55 08             	mov    0x8(%ebp),%edx
c1005f37:	83 c2 18             	add    $0x18,%edx
c1005f3a:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1005f3d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005f40:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1005f44:	78 06                	js     c1005f4c <fd_local2global+0x23>
c1005f46:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1005f4a:	7e 19                	jle    c1005f65 <fd_local2global+0x3c>
c1005f4c:	68 58 a7 00 c1       	push   $0xc100a758
c1005f51:	68 98 ac 00 c1       	push   $0xc100ac98
c1005f56:	68 6c 01 00 00       	push   $0x16c
c1005f5b:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1005f60:	e8 a8 a3 ff ff       	call   c100030d <__PANIC>
c1005f65:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005f68:	c9                   	leave  
c1005f69:	c3                   	ret    

c1005f6a <sys_close>:
c1005f6a:	55                   	push   %ebp
c1005f6b:	89 e5                	mov    %esp,%ebp
c1005f6d:	83 ec 18             	sub    $0x18,%esp
c1005f70:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1005f77:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c1005f7b:	7e 44                	jle    c1005fc1 <sys_close+0x57>
c1005f7d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005f80:	83 ec 0c             	sub    $0xc,%esp
c1005f83:	50                   	push   %eax
c1005f84:	e8 a0 ff ff ff       	call   c1005f29 <fd_local2global>
c1005f89:	83 c4 10             	add    $0x10,%esp
c1005f8c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005f8f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005f92:	89 d0                	mov    %edx,%eax
c1005f94:	01 c0                	add    %eax,%eax
c1005f96:	01 d0                	add    %edx,%eax
c1005f98:	c1 e0 02             	shl    $0x2,%eax
c1005f9b:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1005fa0:	83 ec 0c             	sub    $0xc,%esp
c1005fa3:	50                   	push   %eax
c1005fa4:	e8 69 28 00 00       	call   c1008812 <file_close>
c1005fa9:	83 c4 10             	add    $0x10,%esp
c1005fac:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005faf:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1005fb4:	8b 55 08             	mov    0x8(%ebp),%edx
c1005fb7:	83 c2 18             	add    $0x18,%edx
c1005fba:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1005fc1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005fc4:	c9                   	leave  
c1005fc5:	c3                   	ret    

c1005fc6 <sys_write>:
c1005fc6:	55                   	push   %ebp
c1005fc7:	89 e5                	mov    %esp,%ebp
c1005fc9:	57                   	push   %edi
c1005fca:	81 ec 14 04 00 00    	sub    $0x414,%esp
c1005fd0:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1005fd4:	79 1a                	jns    c1005ff0 <sys_write+0x2a>
c1005fd6:	83 ec 0c             	sub    $0xc,%esp
c1005fd9:	68 84 a7 00 c1       	push   $0xc100a784
c1005fde:	e8 b3 e6 ff ff       	call   c1004696 <printk>
c1005fe3:	83 c4 10             	add    $0x10,%esp
c1005fe6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005feb:	e9 c4 00 00 00       	jmp    c10060b4 <sys_write+0xee>
c1005ff0:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1005ff4:	75 4d                	jne    c1006043 <sys_write+0x7d>
c1005ff6:	c7 85 ec fb ff ff 00 	movl   $0x0,-0x414(%ebp)
c1005ffd:	00 00 00 
c1006000:	8d 95 f0 fb ff ff    	lea    -0x410(%ebp),%edx
c1006006:	b8 00 00 00 00       	mov    $0x0,%eax
c100600b:	b9 ff 00 00 00       	mov    $0xff,%ecx
c1006010:	89 d7                	mov    %edx,%edi
c1006012:	f3 ab                	rep stos %eax,%es:(%edi)
c1006014:	83 ec 04             	sub    $0x4,%esp
c1006017:	ff 75 10             	pushl  0x10(%ebp)
c100601a:	ff 75 0c             	pushl  0xc(%ebp)
c100601d:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c1006023:	50                   	push   %eax
c1006024:	e8 df a0 ff ff       	call   c1000108 <memcpy>
c1006029:	83 c4 10             	add    $0x10,%esp
c100602c:	83 ec 0c             	sub    $0xc,%esp
c100602f:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c1006035:	50                   	push   %eax
c1006036:	e8 5b e6 ff ff       	call   c1004696 <printk>
c100603b:	83 c4 10             	add    $0x10,%esp
c100603e:	8b 45 10             	mov    0x10(%ebp),%eax
c1006041:	eb 71                	jmp    c10060b4 <sys_write+0xee>
c1006043:	8b 45 08             	mov    0x8(%ebp),%eax
c1006046:	83 ec 0c             	sub    $0xc,%esp
c1006049:	50                   	push   %eax
c100604a:	e8 da fe ff ff       	call   c1005f29 <fd_local2global>
c100604f:	83 c4 10             	add    $0x10,%esp
c1006052:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006055:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006058:	89 d0                	mov    %edx,%eax
c100605a:	01 c0                	add    %eax,%eax
c100605c:	01 d0                	add    %edx,%eax
c100605e:	c1 e0 02             	shl    $0x2,%eax
c1006061:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1006066:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006069:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100606c:	8b 40 04             	mov    0x4(%eax),%eax
c100606f:	83 e0 01             	and    $0x1,%eax
c1006072:	85 c0                	test   %eax,%eax
c1006074:	75 0d                	jne    c1006083 <sys_write+0xbd>
c1006076:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006079:	8b 40 04             	mov    0x4(%eax),%eax
c100607c:	83 e0 02             	and    $0x2,%eax
c100607f:	85 c0                	test   %eax,%eax
c1006081:	74 1c                	je     c100609f <sys_write+0xd9>
c1006083:	83 ec 04             	sub    $0x4,%esp
c1006086:	ff 75 10             	pushl  0x10(%ebp)
c1006089:	ff 75 0c             	pushl  0xc(%ebp)
c100608c:	ff 75 f0             	pushl  -0x10(%ebp)
c100608f:	e8 be 27 00 00       	call   c1008852 <file_write>
c1006094:	83 c4 10             	add    $0x10,%esp
c1006097:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100609a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100609d:	eb 15                	jmp    c10060b4 <sys_write+0xee>
c100609f:	83 ec 0c             	sub    $0xc,%esp
c10060a2:	68 9c a7 00 c1       	push   $0xc100a79c
c10060a7:	e8 ea e5 ff ff       	call   c1004696 <printk>
c10060ac:	83 c4 10             	add    $0x10,%esp
c10060af:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10060b4:	8b 7d fc             	mov    -0x4(%ebp),%edi
c10060b7:	c9                   	leave  
c10060b8:	c3                   	ret    

c10060b9 <sys_read>:
c10060b9:	55                   	push   %ebp
c10060ba:	89 e5                	mov    %esp,%ebp
c10060bc:	83 ec 18             	sub    $0x18,%esp
c10060bf:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
c10060c3:	75 19                	jne    c10060de <sys_read+0x25>
c10060c5:	68 e2 a7 00 c1       	push   $0xc100a7e2
c10060ca:	68 a8 ac 00 c1       	push   $0xc100aca8
c10060cf:	68 92 01 00 00       	push   $0x192
c10060d4:	68 a8 a5 00 c1       	push   $0xc100a5a8
c10060d9:	e8 2f a2 ff ff       	call   c100030d <__PANIC>
c10060de:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10060e5:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10060e9:	78 0c                	js     c10060f7 <sys_read+0x3e>
c10060eb:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c10060ef:	74 06                	je     c10060f7 <sys_read+0x3e>
c10060f1:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c10060f5:	75 15                	jne    c100610c <sys_read+0x53>
c10060f7:	83 ec 0c             	sub    $0xc,%esp
c10060fa:	68 ee a7 00 c1       	push   $0xc100a7ee
c10060ff:	e8 92 e5 ff ff       	call   c1004696 <printk>
c1006104:	83 c4 10             	add    $0x10,%esp
c1006107:	e9 a0 00 00 00       	jmp    c10061ac <sys_read+0xf3>
c100610c:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006110:	75 62                	jne    c1006174 <sys_read+0xbb>
c1006112:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006115:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006118:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100611f:	0f b6 05 6c ec 00 c1 	movzbl 0xc100ec6c,%eax
c1006126:	84 c0                	test   %al,%al
c1006128:	75 2d                	jne    c1006157 <sys_read+0x9e>
c100612a:	83 ec 0c             	sub    $0xc,%esp
c100612d:	68 ac 0c 01 c1       	push   $0xc1010cac
c1006132:	e8 13 ea ff ff       	call   c1004b4a <sema_down>
c1006137:	83 c4 10             	add    $0x10,%esp
c100613a:	eb 1b                	jmp    c1006157 <sys_read+0x9e>
c100613c:	0f b6 15 6c ec 00 c1 	movzbl 0xc100ec6c,%edx
c1006143:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006146:	88 10                	mov    %dl,(%eax)
c1006148:	c6 05 6c ec 00 c1 00 	movb   $0x0,0xc100ec6c
c100614f:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1006153:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1006157:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100615a:	3b 45 10             	cmp    0x10(%ebp),%eax
c100615d:	72 dd                	jb     c100613c <sys_read+0x83>
c100615f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1006163:	74 05                	je     c100616a <sys_read+0xb1>
c1006165:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006168:	eb 05                	jmp    c100616f <sys_read+0xb6>
c100616a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100616f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006172:	eb 38                	jmp    c10061ac <sys_read+0xf3>
c1006174:	8b 45 08             	mov    0x8(%ebp),%eax
c1006177:	83 ec 0c             	sub    $0xc,%esp
c100617a:	50                   	push   %eax
c100617b:	e8 a9 fd ff ff       	call   c1005f29 <fd_local2global>
c1006180:	83 c4 10             	add    $0x10,%esp
c1006183:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006186:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1006189:	89 d0                	mov    %edx,%eax
c100618b:	01 c0                	add    %eax,%eax
c100618d:	01 d0                	add    %edx,%eax
c100618f:	c1 e0 02             	shl    $0x2,%eax
c1006192:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1006197:	83 ec 04             	sub    $0x4,%esp
c100619a:	ff 75 10             	pushl  0x10(%ebp)
c100619d:	ff 75 0c             	pushl  0xc(%ebp)
c10061a0:	50                   	push   %eax
c10061a1:	e8 21 2e 00 00       	call   c1008fc7 <file_read>
c10061a6:	83 c4 10             	add    $0x10,%esp
c10061a9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10061ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10061af:	c9                   	leave  
c10061b0:	c3                   	ret    

c10061b1 <sys_lseek>:
c10061b1:	55                   	push   %ebp
c10061b2:	89 e5                	mov    %esp,%ebp
c10061b4:	83 ec 28             	sub    $0x28,%esp
c10061b7:	8b 45 10             	mov    0x10(%ebp),%eax
c10061ba:	88 45 e4             	mov    %al,-0x1c(%ebp)
c10061bd:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10061c1:	79 1a                	jns    c10061dd <sys_lseek+0x2c>
c10061c3:	83 ec 0c             	sub    $0xc,%esp
c10061c6:	68 02 a8 00 c1       	push   $0xc100a802
c10061cb:	e8 c6 e4 ff ff       	call   c1004696 <printk>
c10061d0:	83 c4 10             	add    $0x10,%esp
c10061d3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10061d8:	e9 be 00 00 00       	jmp    c100629b <sys_lseek+0xea>
c10061dd:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
c10061e1:	74 06                	je     c10061e9 <sys_lseek+0x38>
c10061e3:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
c10061e7:	76 19                	jbe    c1006202 <sys_lseek+0x51>
c10061e9:	68 17 a8 00 c1       	push   $0xc100a817
c10061ee:	68 b4 ac 00 c1       	push   $0xc100acb4
c10061f3:	68 b2 01 00 00       	push   $0x1b2
c10061f8:	68 a8 a5 00 c1       	push   $0xc100a5a8
c10061fd:	e8 0b a1 ff ff       	call   c100030d <__PANIC>
c1006202:	8b 45 08             	mov    0x8(%ebp),%eax
c1006205:	83 ec 0c             	sub    $0xc,%esp
c1006208:	50                   	push   %eax
c1006209:	e8 1b fd ff ff       	call   c1005f29 <fd_local2global>
c100620e:	83 c4 10             	add    $0x10,%esp
c1006211:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006214:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006217:	89 d0                	mov    %edx,%eax
c1006219:	01 c0                	add    %eax,%eax
c100621b:	01 d0                	add    %edx,%eax
c100621d:	c1 e0 02             	shl    $0x2,%eax
c1006220:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1006225:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006228:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100622f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006232:	8b 40 08             	mov    0x8(%eax),%eax
c1006235:	8b 40 04             	mov    0x4(%eax),%eax
c1006238:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100623b:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100623f:	83 f8 03             	cmp    $0x3,%eax
c1006242:	74 2a                	je     c100626e <sys_lseek+0xbd>
c1006244:	83 f8 03             	cmp    $0x3,%eax
c1006247:	7f 30                	jg     c1006279 <sys_lseek+0xc8>
c1006249:	83 f8 01             	cmp    $0x1,%eax
c100624c:	74 07                	je     c1006255 <sys_lseek+0xa4>
c100624e:	83 f8 02             	cmp    $0x2,%eax
c1006251:	74 0a                	je     c100625d <sys_lseek+0xac>
c1006253:	eb 24                	jmp    c1006279 <sys_lseek+0xc8>
c1006255:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006258:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100625b:	eb 1c                	jmp    c1006279 <sys_lseek+0xc8>
c100625d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006260:	8b 00                	mov    (%eax),%eax
c1006262:	89 c2                	mov    %eax,%edx
c1006264:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006267:	01 d0                	add    %edx,%eax
c1006269:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100626c:	eb 0b                	jmp    c1006279 <sys_lseek+0xc8>
c100626e:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1006271:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006274:	01 d0                	add    %edx,%eax
c1006276:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006279:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100627d:	78 08                	js     c1006287 <sys_lseek+0xd6>
c100627f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006282:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1006285:	7f 07                	jg     c100628e <sys_lseek+0xdd>
c1006287:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100628c:	eb 0d                	jmp    c100629b <sys_lseek+0xea>
c100628e:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006291:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006294:	89 10                	mov    %edx,(%eax)
c1006296:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006299:	8b 00                	mov    (%eax),%eax
c100629b:	c9                   	leave  
c100629c:	c3                   	ret    

c100629d <sys_unlink>:
c100629d:	55                   	push   %ebp
c100629e:	89 e5                	mov    %esp,%ebp
c10062a0:	81 ec 28 02 00 00    	sub    $0x228,%esp
c10062a6:	83 ec 0c             	sub    $0xc,%esp
c10062a9:	ff 75 08             	pushl  0x8(%ebp)
c10062ac:	e8 6d 9e ff ff       	call   c100011e <strlen>
c10062b1:	83 c4 10             	add    $0x10,%esp
c10062b4:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c10062b9:	76 19                	jbe    c10062d4 <sys_unlink+0x37>
c10062bb:	68 30 a8 00 c1       	push   $0xc100a830
c10062c0:	68 c0 ac 00 c1       	push   $0xc100acc0
c10062c5:	68 cc 01 00 00       	push   $0x1cc
c10062ca:	68 a8 a5 00 c1       	push   $0xc100a5a8
c10062cf:	e8 39 a0 ff ff       	call   c100030d <__PANIC>
c10062d4:	83 ec 04             	sub    $0x4,%esp
c10062d7:	68 08 02 00 00       	push   $0x208
c10062dc:	6a 00                	push   $0x0
c10062de:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c10062e4:	50                   	push   %eax
c10062e5:	e8 c0 9d ff ff       	call   c10000aa <memset>
c10062ea:	83 c4 10             	add    $0x10,%esp
c10062ed:	83 ec 08             	sub    $0x8,%esp
c10062f0:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c10062f6:	50                   	push   %eax
c10062f7:	ff 75 08             	pushl  0x8(%ebp)
c10062fa:	e8 13 f7 ff ff       	call   c1005a12 <search_file>
c10062ff:	83 c4 10             	add    $0x10,%esp
c1006302:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006305:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1006309:	75 19                	jne    c1006324 <sys_unlink+0x87>
c100630b:	68 50 a8 00 c1       	push   $0xc100a850
c1006310:	68 c0 ac 00 c1       	push   $0xc100acc0
c1006315:	68 d2 01 00 00       	push   $0x1d2
c100631a:	68 a8 a5 00 c1       	push   $0xc100a5a8
c100631f:	e8 e9 9f ff ff       	call   c100030d <__PANIC>
c1006324:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006328:	75 2c                	jne    c1006356 <sys_unlink+0xb9>
c100632a:	83 ec 08             	sub    $0x8,%esp
c100632d:	ff 75 08             	pushl  0x8(%ebp)
c1006330:	68 5e a8 00 c1       	push   $0xc100a85e
c1006335:	e8 5c e3 ff ff       	call   c1004696 <printk>
c100633a:	83 c4 10             	add    $0x10,%esp
c100633d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006340:	83 ec 0c             	sub    $0xc,%esp
c1006343:	50                   	push   %eax
c1006344:	e8 8f 11 00 00       	call   c10074d8 <dir_close>
c1006349:	83 c4 10             	add    $0x10,%esp
c100634c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006351:	e9 65 01 00 00       	jmp    c10064bb <sys_unlink+0x21e>
c1006356:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006359:	83 f8 02             	cmp    $0x2,%eax
c100635c:	75 29                	jne    c1006387 <sys_unlink+0xea>
c100635e:	83 ec 0c             	sub    $0xc,%esp
c1006361:	68 74 a8 00 c1       	push   $0xc100a874
c1006366:	e8 2b e3 ff ff       	call   c1004696 <printk>
c100636b:	83 c4 10             	add    $0x10,%esp
c100636e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006371:	83 ec 0c             	sub    $0xc,%esp
c1006374:	50                   	push   %eax
c1006375:	e8 5e 11 00 00       	call   c10074d8 <dir_close>
c100637a:	83 c4 10             	add    $0x10,%esp
c100637d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006382:	e9 34 01 00 00       	jmp    c10064bb <sys_unlink+0x21e>
c1006387:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100638e:	eb 37                	jmp    c10063c7 <sys_unlink+0x12a>
c1006390:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006393:	89 d0                	mov    %edx,%eax
c1006395:	01 c0                	add    %eax,%eax
c1006397:	01 d0                	add    %edx,%eax
c1006399:	c1 e0 02             	shl    $0x2,%eax
c100639c:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c10063a1:	8b 00                	mov    (%eax),%eax
c10063a3:	85 c0                	test   %eax,%eax
c10063a5:	74 1c                	je     c10063c3 <sys_unlink+0x126>
c10063a7:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10063aa:	89 d0                	mov    %edx,%eax
c10063ac:	01 c0                	add    %eax,%eax
c10063ae:	01 d0                	add    %edx,%eax
c10063b0:	c1 e0 02             	shl    $0x2,%eax
c10063b3:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c10063b8:	8b 00                	mov    (%eax),%eax
c10063ba:	8b 10                	mov    (%eax),%edx
c10063bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10063bf:	39 c2                	cmp    %eax,%edx
c10063c1:	74 0c                	je     c10063cf <sys_unlink+0x132>
c10063c3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10063c7:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c10063cb:	76 c3                	jbe    c1006390 <sys_unlink+0xf3>
c10063cd:	eb 01                	jmp    c10063d0 <sys_unlink+0x133>
c10063cf:	90                   	nop
c10063d0:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c10063d4:	77 2c                	ja     c1006402 <sys_unlink+0x165>
c10063d6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10063d9:	83 ec 0c             	sub    $0xc,%esp
c10063dc:	50                   	push   %eax
c10063dd:	e8 f6 10 00 00       	call   c10074d8 <dir_close>
c10063e2:	83 c4 10             	add    $0x10,%esp
c10063e5:	83 ec 08             	sub    $0x8,%esp
c10063e8:	ff 75 08             	pushl  0x8(%ebp)
c10063eb:	68 b4 a8 00 c1       	push   $0xc100a8b4
c10063f0:	e8 a1 e2 ff ff       	call   c1004696 <printk>
c10063f5:	83 c4 10             	add    $0x10,%esp
c10063f8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10063fd:	e9 b9 00 00 00       	jmp    c10064bb <sys_unlink+0x21e>
c1006402:	83 7d f4 20          	cmpl   $0x20,-0xc(%ebp)
c1006406:	74 19                	je     c1006421 <sys_unlink+0x184>
c1006408:	68 dd a8 00 c1       	push   $0xc100a8dd
c100640d:	68 c0 ac 00 c1       	push   $0xc100acc0
c1006412:	68 eb 01 00 00       	push   $0x1eb
c1006417:	68 a8 a5 00 c1       	push   $0xc100a5a8
c100641c:	e8 ec 9e ff ff       	call   c100030d <__PANIC>
c1006421:	83 ec 08             	sub    $0x8,%esp
c1006424:	6a 02                	push   $0x2
c1006426:	68 00 04 00 00       	push   $0x400
c100642b:	e8 60 c5 ff ff       	call   c1002990 <vmm_malloc>
c1006430:	83 c4 10             	add    $0x10,%esp
c1006433:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006436:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100643a:	75 26                	jne    c1006462 <sys_unlink+0x1c5>
c100643c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100643f:	83 ec 0c             	sub    $0xc,%esp
c1006442:	50                   	push   %eax
c1006443:	e8 90 10 00 00       	call   c10074d8 <dir_close>
c1006448:	83 c4 10             	add    $0x10,%esp
c100644b:	83 ec 0c             	sub    $0xc,%esp
c100644e:	68 f8 a8 00 c1       	push   $0xc100a8f8
c1006453:	e8 3e e2 ff ff       	call   c1004696 <printk>
c1006458:	83 c4 10             	add    $0x10,%esp
c100645b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006460:	eb 59                	jmp    c10064bb <sys_unlink+0x21e>
c1006462:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006465:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006468:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100646d:	ff 75 ec             	pushl  -0x14(%ebp)
c1006470:	ff 75 f0             	pushl  -0x10(%ebp)
c1006473:	ff 75 e8             	pushl  -0x18(%ebp)
c1006476:	50                   	push   %eax
c1006477:	e8 3d 15 00 00       	call   c10079b9 <delete_dir_entry>
c100647c:	83 c4 10             	add    $0x10,%esp
c100647f:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006484:	83 ec 08             	sub    $0x8,%esp
c1006487:	ff 75 f0             	pushl  -0x10(%ebp)
c100648a:	50                   	push   %eax
c100648b:	e8 86 32 00 00       	call   c1009716 <inode_release>
c1006490:	83 c4 10             	add    $0x10,%esp
c1006493:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006496:	83 ec 08             	sub    $0x8,%esp
c1006499:	68 00 04 00 00       	push   $0x400
c100649e:	50                   	push   %eax
c100649f:	e8 11 c6 ff ff       	call   c1002ab5 <vmm_free>
c10064a4:	83 c4 10             	add    $0x10,%esp
c10064a7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10064aa:	83 ec 0c             	sub    $0xc,%esp
c10064ad:	50                   	push   %eax
c10064ae:	e8 25 10 00 00       	call   c10074d8 <dir_close>
c10064b3:	83 c4 10             	add    $0x10,%esp
c10064b6:	b8 00 00 00 00       	mov    $0x0,%eax
c10064bb:	c9                   	leave  
c10064bc:	c3                   	ret    

c10064bd <sys_mkdir>:
c10064bd:	55                   	push   %ebp
c10064be:	89 e5                	mov    %esp,%ebp
c10064c0:	53                   	push   %ebx
c10064c1:	81 ec a4 02 00 00    	sub    $0x2a4,%esp
c10064c7:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c10064cb:	83 ec 08             	sub    $0x8,%esp
c10064ce:	6a 02                	push   $0x2
c10064d0:	68 00 04 00 00       	push   $0x400
c10064d5:	e8 b6 c4 ff ff       	call   c1002990 <vmm_malloc>
c10064da:	83 c4 10             	add    $0x10,%esp
c10064dd:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10064e0:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10064e4:	75 1a                	jne    c1006500 <sys_mkdir+0x43>
c10064e6:	83 ec 0c             	sub    $0xc,%esp
c10064e9:	68 20 a9 00 c1       	push   $0xc100a920
c10064ee:	e8 a3 e1 ff ff       	call   c1004696 <printk>
c10064f3:	83 c4 10             	add    $0x10,%esp
c10064f6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10064fb:	e9 f2 03 00 00       	jmp    c10068f2 <sys_mkdir+0x435>
c1006500:	83 ec 04             	sub    $0x4,%esp
c1006503:	68 08 02 00 00       	push   $0x208
c1006508:	6a 00                	push   $0x0
c100650a:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006510:	50                   	push   %eax
c1006511:	e8 94 9b ff ff       	call   c10000aa <memset>
c1006516:	83 c4 10             	add    $0x10,%esp
c1006519:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
c1006520:	83 ec 08             	sub    $0x8,%esp
c1006523:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006529:	50                   	push   %eax
c100652a:	ff 75 08             	pushl  0x8(%ebp)
c100652d:	e8 e0 f4 ff ff       	call   c1005a12 <search_file>
c1006532:	83 c4 10             	add    $0x10,%esp
c1006535:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006538:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c100653c:	74 1c                	je     c100655a <sys_mkdir+0x9d>
c100653e:	83 ec 08             	sub    $0x8,%esp
c1006541:	ff 75 08             	pushl  0x8(%ebp)
c1006544:	68 4c a9 00 c1       	push   $0xc100a94c
c1006549:	e8 48 e1 ff ff       	call   c1004696 <printk>
c100654e:	83 c4 10             	add    $0x10,%esp
c1006551:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1006555:	e9 08 03 00 00       	jmp    c1006862 <sys_mkdir+0x3a5>
c100655a:	83 ec 0c             	sub    $0xc,%esp
c100655d:	ff 75 08             	pushl  0x8(%ebp)
c1006560:	e8 25 f4 ff ff       	call   c100598a <path_depth_cnt>
c1006565:	83 c4 10             	add    $0x10,%esp
c1006568:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100656b:	83 ec 0c             	sub    $0xc,%esp
c100656e:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006574:	50                   	push   %eax
c1006575:	e8 10 f4 ff ff       	call   c100598a <path_depth_cnt>
c100657a:	83 c4 10             	add    $0x10,%esp
c100657d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006580:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006583:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1006586:	74 23                	je     c10065ab <sys_mkdir+0xee>
c1006588:	83 ec 04             	sub    $0x4,%esp
c100658b:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006591:	50                   	push   %eax
c1006592:	ff 75 08             	pushl  0x8(%ebp)
c1006595:	68 74 a9 00 c1       	push   $0xc100a974
c100659a:	e8 f7 e0 ff ff       	call   c1004696 <printk>
c100659f:	83 c4 10             	add    $0x10,%esp
c10065a2:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10065a6:	e9 b7 02 00 00       	jmp    c1006862 <sys_mkdir+0x3a5>
c10065ab:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10065ae:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10065b1:	83 ec 08             	sub    $0x8,%esp
c10065b4:	6a 2f                	push   $0x2f
c10065b6:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10065bc:	50                   	push   %eax
c10065bd:	e8 d4 9b ff ff       	call   c1000196 <strrchr>
c10065c2:	83 c4 10             	add    $0x10,%esp
c10065c5:	83 c0 01             	add    $0x1,%eax
c10065c8:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10065cb:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10065d0:	83 ec 0c             	sub    $0xc,%esp
c10065d3:	50                   	push   %eax
c10065d4:	e8 f5 1b 00 00       	call   c10081ce <inode_bitmap_alloc>
c10065d9:	83 c4 10             	add    $0x10,%esp
c10065dc:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10065df:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10065e3:	75 19                	jne    c10065fe <sys_mkdir+0x141>
c10065e5:	83 ec 0c             	sub    $0xc,%esp
c10065e8:	68 a8 a9 00 c1       	push   $0xc100a9a8
c10065ed:	e8 a4 e0 ff ff       	call   c1004696 <printk>
c10065f2:	83 c4 10             	add    $0x10,%esp
c10065f5:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10065f9:	e9 64 02 00 00       	jmp    c1006862 <sys_mkdir+0x3a5>
c10065fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006601:	83 ec 08             	sub    $0x8,%esp
c1006604:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c100660a:	52                   	push   %edx
c100660b:	50                   	push   %eax
c100660c:	e8 ca 33 00 00       	call   c10099db <inode_init>
c1006611:	83 c4 10             	add    $0x10,%esp
c1006614:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
c100661b:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
c1006622:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006627:	83 ec 0c             	sub    $0xc,%esp
c100662a:	50                   	push   %eax
c100662b:	e8 5e 1c 00 00       	call   c100828e <block_bitmap_alloc>
c1006630:	83 c4 10             	add    $0x10,%esp
c1006633:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1006636:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
c100663a:	75 19                	jne    c1006655 <sys_mkdir+0x198>
c100663c:	83 ec 0c             	sub    $0xc,%esp
c100663f:	68 cc a9 00 c1       	push   $0xc100a9cc
c1006644:	e8 4d e0 ff ff       	call   c1004696 <printk>
c1006649:	83 c4 10             	add    $0x10,%esp
c100664c:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1006650:	e9 0d 02 00 00       	jmp    c1006862 <sys_mkdir+0x3a5>
c1006655:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1006658:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
c100665e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1006661:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006666:	8b 40 10             	mov    0x10(%eax),%eax
c1006669:	8b 40 28             	mov    0x28(%eax),%eax
c100666c:	29 c2                	sub    %eax,%edx
c100666e:	89 d0                	mov    %edx,%eax
c1006670:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1006673:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
c1006677:	75 19                	jne    c1006692 <sys_mkdir+0x1d5>
c1006679:	68 07 aa 00 c1       	push   $0xc100aa07
c100667e:	68 cc ac 00 c1       	push   $0xc100accc
c1006683:	68 33 02 00 00       	push   $0x233
c1006688:	68 a8 a5 00 c1       	push   $0xc100a5a8
c100668d:	e8 7b 9c ff ff       	call   c100030d <__PANIC>
c1006692:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006697:	83 ec 04             	sub    $0x4,%esp
c100669a:	6a 01                	push   $0x1
c100669c:	ff 75 d8             	pushl  -0x28(%ebp)
c100669f:	50                   	push   %eax
c10066a0:	e8 b7 1c 00 00       	call   c100835c <bitmap_sync>
c10066a5:	83 c4 10             	add    $0x10,%esp
c10066a8:	83 ec 04             	sub    $0x4,%esp
c10066ab:	68 00 04 00 00       	push   $0x400
c10066b0:	6a 00                	push   $0x0
c10066b2:	ff 75 ec             	pushl  -0x14(%ebp)
c10066b5:	e8 f0 99 ff ff       	call   c10000aa <memset>
c10066ba:	83 c4 10             	add    $0x10,%esp
c10066bd:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10066c0:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10066c3:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10066c6:	83 ec 04             	sub    $0x4,%esp
c10066c9:	6a 01                	push   $0x1
c10066cb:	68 e9 a4 00 c1       	push   $0xc100a4e9
c10066d0:	50                   	push   %eax
c10066d1:	e8 32 9a ff ff       	call   c1000108 <memcpy>
c10066d6:	83 c4 10             	add    $0x10,%esp
c10066d9:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10066dc:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10066df:	89 50 10             	mov    %edx,0x10(%eax)
c10066e2:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10066e5:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c10066ec:	83 45 d0 18          	addl   $0x18,-0x30(%ebp)
c10066f0:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10066f3:	83 ec 04             	sub    $0x4,%esp
c10066f6:	6a 02                	push   $0x2
c10066f8:	68 eb a4 00 c1       	push   $0xc100a4eb
c10066fd:	50                   	push   %eax
c10066fe:	e8 05 9a ff ff       	call   c1000108 <memcpy>
c1006703:	83 c4 10             	add    $0x10,%esp
c1006706:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006709:	8b 00                	mov    (%eax),%eax
c100670b:	8b 10                	mov    (%eax),%edx
c100670d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006710:	89 50 10             	mov    %edx,0x10(%eax)
c1006713:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006716:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100671d:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
c1006723:	83 ec 04             	sub    $0x4,%esp
c1006726:	6a 01                	push   $0x1
c1006728:	50                   	push   %eax
c1006729:	ff 75 ec             	pushl  -0x14(%ebp)
c100672c:	e8 4a e8 ff ff       	call   c1004f7b <ide_write>
c1006731:	83 c4 10             	add    $0x10,%esp
c1006734:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006739:	8b 40 10             	mov    0x10(%eax),%eax
c100673c:	8b 40 30             	mov    0x30(%eax),%eax
c100673f:	01 c0                	add    %eax,%eax
c1006741:	89 85 80 fd ff ff    	mov    %eax,-0x280(%ebp)
c1006747:	83 ec 04             	sub    $0x4,%esp
c100674a:	6a 18                	push   $0x18
c100674c:	6a 00                	push   $0x0
c100674e:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c1006754:	50                   	push   %eax
c1006755:	e8 50 99 ff ff       	call   c10000aa <memset>
c100675a:	83 c4 10             	add    $0x10,%esp
c100675d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006760:	8d 95 64 fd ff ff    	lea    -0x29c(%ebp),%edx
c1006766:	52                   	push   %edx
c1006767:	6a 02                	push   $0x2
c1006769:	50                   	push   %eax
c100676a:	ff 75 dc             	pushl  -0x24(%ebp)
c100676d:	e8 a0 0d 00 00       	call   c1007512 <create_dir_entry>
c1006772:	83 c4 10             	add    $0x10,%esp
c1006775:	83 ec 04             	sub    $0x4,%esp
c1006778:	68 00 04 00 00       	push   $0x400
c100677d:	6a 00                	push   $0x0
c100677f:	ff 75 ec             	pushl  -0x14(%ebp)
c1006782:	e8 23 99 ff ff       	call   c10000aa <memset>
c1006787:	83 c4 10             	add    $0x10,%esp
c100678a:	83 ec 04             	sub    $0x4,%esp
c100678d:	ff 75 ec             	pushl  -0x14(%ebp)
c1006790:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c1006796:	50                   	push   %eax
c1006797:	ff 75 e0             	pushl  -0x20(%ebp)
c100679a:	e8 df 0d 00 00       	call   c100757e <sync_dir_entry>
c100679f:	83 c4 10             	add    $0x10,%esp
c10067a2:	85 c0                	test   %eax,%eax
c10067a4:	75 19                	jne    c10067bf <sys_mkdir+0x302>
c10067a6:	83 ec 0c             	sub    $0xc,%esp
c10067a9:	68 20 aa 00 c1       	push   $0xc100aa20
c10067ae:	e8 e3 de ff ff       	call   c1004696 <printk>
c10067b3:	83 c4 10             	add    $0x10,%esp
c10067b6:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10067ba:	e9 a3 00 00 00       	jmp    c1006862 <sys_mkdir+0x3a5>
c10067bf:	83 ec 04             	sub    $0x4,%esp
c10067c2:	68 00 04 00 00       	push   $0x400
c10067c7:	6a 00                	push   $0x0
c10067c9:	ff 75 ec             	pushl  -0x14(%ebp)
c10067cc:	e8 d9 98 ff ff       	call   c10000aa <memset>
c10067d1:	83 c4 10             	add    $0x10,%esp
c10067d4:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10067d7:	8b 10                	mov    (%eax),%edx
c10067d9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10067de:	83 ec 04             	sub    $0x4,%esp
c10067e1:	ff 75 ec             	pushl  -0x14(%ebp)
c10067e4:	52                   	push   %edx
c10067e5:	50                   	push   %eax
c10067e6:	e8 1e 2c 00 00       	call   c1009409 <inode_sync>
c10067eb:	83 c4 10             	add    $0x10,%esp
c10067ee:	83 ec 04             	sub    $0x4,%esp
c10067f1:	68 00 04 00 00       	push   $0x400
c10067f6:	6a 00                	push   $0x0
c10067f8:	ff 75 ec             	pushl  -0x14(%ebp)
c10067fb:	e8 aa 98 ff ff       	call   c10000aa <memset>
c1006800:	83 c4 10             	add    $0x10,%esp
c1006803:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006808:	83 ec 04             	sub    $0x4,%esp
c100680b:	ff 75 ec             	pushl  -0x14(%ebp)
c100680e:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1006814:	52                   	push   %edx
c1006815:	50                   	push   %eax
c1006816:	e8 ee 2b 00 00       	call   c1009409 <inode_sync>
c100681b:	83 c4 10             	add    $0x10,%esp
c100681e:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006821:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006826:	83 ec 04             	sub    $0x4,%esp
c1006829:	6a 00                	push   $0x0
c100682b:	52                   	push   %edx
c100682c:	50                   	push   %eax
c100682d:	e8 2a 1b 00 00       	call   c100835c <bitmap_sync>
c1006832:	83 c4 10             	add    $0x10,%esp
c1006835:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006838:	83 ec 08             	sub    $0x8,%esp
c100683b:	68 00 04 00 00       	push   $0x400
c1006840:	50                   	push   %eax
c1006841:	e8 6f c2 ff ff       	call   c1002ab5 <vmm_free>
c1006846:	83 c4 10             	add    $0x10,%esp
c1006849:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100684c:	83 ec 0c             	sub    $0xc,%esp
c100684f:	50                   	push   %eax
c1006850:	e8 83 0c 00 00       	call   c10074d8 <dir_close>
c1006855:	83 c4 10             	add    $0x10,%esp
c1006858:	b8 00 00 00 00       	mov    $0x0,%eax
c100685d:	e9 90 00 00 00       	jmp    c10068f2 <sys_mkdir+0x435>
c1006862:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006866:	83 f8 01             	cmp    $0x1,%eax
c1006869:	74 5e                	je     c10068c9 <sys_mkdir+0x40c>
c100686b:	83 f8 02             	cmp    $0x2,%eax
c100686e:	75 69                	jne    c10068d9 <sys_mkdir+0x41c>
c1006870:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006873:	8d 50 07             	lea    0x7(%eax),%edx
c1006876:	85 c0                	test   %eax,%eax
c1006878:	0f 48 c2             	cmovs  %edx,%eax
c100687b:	c1 f8 03             	sar    $0x3,%eax
c100687e:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1006881:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006884:	99                   	cltd   
c1006885:	c1 ea 1d             	shr    $0x1d,%edx
c1006888:	01 d0                	add    %edx,%eax
c100688a:	83 e0 07             	and    $0x7,%eax
c100688d:	29 d0                	sub    %edx,%eax
c100688f:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1006892:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006897:	8b 50 20             	mov    0x20(%eax),%edx
c100689a:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100689d:	01 d0                	add    %edx,%eax
c100689f:	0f b6 00             	movzbl (%eax),%eax
c10068a2:	89 c2                	mov    %eax,%edx
c10068a4:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10068a7:	bb 01 00 00 00       	mov    $0x1,%ebx
c10068ac:	89 c1                	mov    %eax,%ecx
c10068ae:	d3 e3                	shl    %cl,%ebx
c10068b0:	89 d8                	mov    %ebx,%eax
c10068b2:	f7 d0                	not    %eax
c10068b4:	89 d1                	mov    %edx,%ecx
c10068b6:	21 c1                	and    %eax,%ecx
c10068b8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10068bd:	8b 50 20             	mov    0x20(%eax),%edx
c10068c0:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10068c3:	01 d0                	add    %edx,%eax
c10068c5:	89 ca                	mov    %ecx,%edx
c10068c7:	88 10                	mov    %dl,(%eax)
c10068c9:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10068cc:	83 ec 0c             	sub    $0xc,%esp
c10068cf:	50                   	push   %eax
c10068d0:	e8 03 0c 00 00       	call   c10074d8 <dir_close>
c10068d5:	83 c4 10             	add    $0x10,%esp
c10068d8:	90                   	nop
c10068d9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10068dc:	83 ec 08             	sub    $0x8,%esp
c10068df:	68 00 04 00 00       	push   $0x400
c10068e4:	50                   	push   %eax
c10068e5:	e8 cb c1 ff ff       	call   c1002ab5 <vmm_free>
c10068ea:	83 c4 10             	add    $0x10,%esp
c10068ed:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10068f2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10068f5:	c9                   	leave  
c10068f6:	c3                   	ret    

c10068f7 <sys_opendir>:
c10068f7:	55                   	push   %ebp
c10068f8:	89 e5                	mov    %esp,%ebp
c10068fa:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1006900:	83 ec 0c             	sub    $0xc,%esp
c1006903:	ff 75 08             	pushl  0x8(%ebp)
c1006906:	e8 13 98 ff ff       	call   c100011e <strlen>
c100690b:	83 c4 10             	add    $0x10,%esp
c100690e:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1006913:	76 19                	jbe    c100692e <sys_opendir+0x37>
c1006915:	68 4b aa 00 c1       	push   $0xc100aa4b
c100691a:	68 d8 ac 00 c1       	push   $0xc100acd8
c100691f:	68 75 02 00 00       	push   $0x275
c1006924:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1006929:	e8 df 99 ff ff       	call   c100030d <__PANIC>
c100692e:	8b 45 08             	mov    0x8(%ebp),%eax
c1006931:	0f b6 00             	movzbl (%eax),%eax
c1006934:	3c 2f                	cmp    $0x2f,%al
c1006936:	75 21                	jne    c1006959 <sys_opendir+0x62>
c1006938:	8b 45 08             	mov    0x8(%ebp),%eax
c100693b:	83 c0 01             	add    $0x1,%eax
c100693e:	0f b6 00             	movzbl (%eax),%eax
c1006941:	84 c0                	test   %al,%al
c1006943:	74 0a                	je     c100694f <sys_opendir+0x58>
c1006945:	8b 45 08             	mov    0x8(%ebp),%eax
c1006948:	0f b6 00             	movzbl (%eax),%eax
c100694b:	3c 2e                	cmp    $0x2e,%al
c100694d:	75 0a                	jne    c1006959 <sys_opendir+0x62>
c100694f:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1006954:	e9 a9 00 00 00       	jmp    c1006a02 <sys_opendir+0x10b>
c1006959:	83 ec 04             	sub    $0x4,%esp
c100695c:	68 08 02 00 00       	push   $0x208
c1006961:	6a 00                	push   $0x0
c1006963:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1006969:	50                   	push   %eax
c100696a:	e8 3b 97 ff ff       	call   c10000aa <memset>
c100696f:	83 c4 10             	add    $0x10,%esp
c1006972:	83 ec 08             	sub    $0x8,%esp
c1006975:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c100697b:	50                   	push   %eax
c100697c:	ff 75 08             	pushl  0x8(%ebp)
c100697f:	e8 8e f0 ff ff       	call   c1005a12 <search_file>
c1006984:	83 c4 10             	add    $0x10,%esp
c1006987:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100698a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006991:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006995:	75 1c                	jne    c10069b3 <sys_opendir+0xbc>
c1006997:	83 ec 04             	sub    $0x4,%esp
c100699a:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c10069a0:	50                   	push   %eax
c10069a1:	ff 75 08             	pushl  0x8(%ebp)
c10069a4:	68 67 aa 00 c1       	push   $0xc100aa67
c10069a9:	e8 e8 dc ff ff       	call   c1004696 <printk>
c10069ae:	83 c4 10             	add    $0x10,%esp
c10069b1:	eb 3d                	jmp    c10069f0 <sys_opendir+0xf9>
c10069b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10069b6:	83 f8 01             	cmp    $0x1,%eax
c10069b9:	75 15                	jne    c10069d0 <sys_opendir+0xd9>
c10069bb:	83 ec 08             	sub    $0x8,%esp
c10069be:	ff 75 08             	pushl  0x8(%ebp)
c10069c1:	68 85 aa 00 c1       	push   $0xc100aa85
c10069c6:	e8 cb dc ff ff       	call   c1004696 <printk>
c10069cb:	83 c4 10             	add    $0x10,%esp
c10069ce:	eb 20                	jmp    c10069f0 <sys_opendir+0xf9>
c10069d0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10069d3:	83 f8 02             	cmp    $0x2,%eax
c10069d6:	75 18                	jne    c10069f0 <sys_opendir+0xf9>
c10069d8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10069db:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10069e0:	83 ec 08             	sub    $0x8,%esp
c10069e3:	52                   	push   %edx
c10069e4:	50                   	push   %eax
c10069e5:	e8 c2 08 00 00       	call   c10072ac <dir_open>
c10069ea:	83 c4 10             	add    $0x10,%esp
c10069ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10069f0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10069f3:	83 ec 0c             	sub    $0xc,%esp
c10069f6:	50                   	push   %eax
c10069f7:	e8 dc 0a 00 00       	call   c10074d8 <dir_close>
c10069fc:	83 c4 10             	add    $0x10,%esp
c10069ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006a02:	c9                   	leave  
c1006a03:	c3                   	ret    

c1006a04 <sys_closedir>:
c1006a04:	55                   	push   %ebp
c1006a05:	89 e5                	mov    %esp,%ebp
c1006a07:	83 ec 18             	sub    $0x18,%esp
c1006a0a:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006a11:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006a15:	74 15                	je     c1006a2c <sys_closedir+0x28>
c1006a17:	83 ec 0c             	sub    $0xc,%esp
c1006a1a:	ff 75 08             	pushl  0x8(%ebp)
c1006a1d:	e8 b6 0a 00 00       	call   c10074d8 <dir_close>
c1006a22:	83 c4 10             	add    $0x10,%esp
c1006a25:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006a2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006a2f:	c9                   	leave  
c1006a30:	c3                   	ret    

c1006a31 <sys_readdir>:
c1006a31:	55                   	push   %ebp
c1006a32:	89 e5                	mov    %esp,%ebp
c1006a34:	83 ec 08             	sub    $0x8,%esp
c1006a37:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006a3b:	75 19                	jne    c1006a56 <sys_readdir+0x25>
c1006a3d:	68 9a aa 00 c1       	push   $0xc100aa9a
c1006a42:	68 e4 ac 00 c1       	push   $0xc100ace4
c1006a47:	68 98 02 00 00       	push   $0x298
c1006a4c:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1006a51:	e8 b7 98 ff ff       	call   c100030d <__PANIC>
c1006a56:	83 ec 0c             	sub    $0xc,%esp
c1006a59:	ff 75 08             	pushl  0x8(%ebp)
c1006a5c:	e8 fa 13 00 00       	call   c1007e5b <dir_read>
c1006a61:	83 c4 10             	add    $0x10,%esp
c1006a64:	c9                   	leave  
c1006a65:	c3                   	ret    

c1006a66 <sys_rewinddir>:
c1006a66:	55                   	push   %ebp
c1006a67:	89 e5                	mov    %esp,%ebp
c1006a69:	8b 45 08             	mov    0x8(%ebp),%eax
c1006a6c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1006a73:	90                   	nop
c1006a74:	5d                   	pop    %ebp
c1006a75:	c3                   	ret    

c1006a76 <sys_rmdir>:
c1006a76:	55                   	push   %ebp
c1006a77:	89 e5                	mov    %esp,%ebp
c1006a79:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1006a7f:	83 ec 04             	sub    $0x4,%esp
c1006a82:	68 08 02 00 00       	push   $0x208
c1006a87:	6a 00                	push   $0x0
c1006a89:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1006a8f:	50                   	push   %eax
c1006a90:	e8 15 96 ff ff       	call   c10000aa <memset>
c1006a95:	83 c4 10             	add    $0x10,%esp
c1006a98:	83 ec 08             	sub    $0x8,%esp
c1006a9b:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1006aa1:	50                   	push   %eax
c1006aa2:	ff 75 08             	pushl  0x8(%ebp)
c1006aa5:	e8 68 ef ff ff       	call   c1005a12 <search_file>
c1006aaa:	83 c4 10             	add    $0x10,%esp
c1006aad:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006ab0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1006ab4:	75 19                	jne    c1006acf <sys_rmdir+0x59>
c1006ab6:	68 50 a8 00 c1       	push   $0xc100a850
c1006abb:	68 f0 ac 00 c1       	push   $0xc100acf0
c1006ac0:	68 a6 02 00 00       	push   $0x2a6
c1006ac5:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1006aca:	e8 3e 98 ff ff       	call   c100030d <__PANIC>
c1006acf:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006ad6:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006ada:	75 1f                	jne    c1006afb <sys_rmdir+0x85>
c1006adc:	83 ec 04             	sub    $0x4,%esp
c1006adf:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1006ae5:	50                   	push   %eax
c1006ae6:	ff 75 08             	pushl  0x8(%ebp)
c1006ae9:	68 67 aa 00 c1       	push   $0xc100aa67
c1006aee:	e8 a3 db ff ff       	call   c1004696 <printk>
c1006af3:	83 c4 10             	add    $0x10,%esp
c1006af6:	e9 87 00 00 00       	jmp    c1006b82 <sys_rmdir+0x10c>
c1006afb:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006afe:	83 f8 01             	cmp    $0x1,%eax
c1006b01:	75 15                	jne    c1006b18 <sys_rmdir+0xa2>
c1006b03:	83 ec 08             	sub    $0x8,%esp
c1006b06:	ff 75 08             	pushl  0x8(%ebp)
c1006b09:	68 85 aa 00 c1       	push   $0xc100aa85
c1006b0e:	e8 83 db ff ff       	call   c1004696 <printk>
c1006b13:	83 c4 10             	add    $0x10,%esp
c1006b16:	eb 6a                	jmp    c1006b82 <sys_rmdir+0x10c>
c1006b18:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006b1b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006b20:	83 ec 08             	sub    $0x8,%esp
c1006b23:	52                   	push   %edx
c1006b24:	50                   	push   %eax
c1006b25:	e8 82 07 00 00       	call   c10072ac <dir_open>
c1006b2a:	83 c4 10             	add    $0x10,%esp
c1006b2d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006b30:	83 ec 0c             	sub    $0xc,%esp
c1006b33:	ff 75 ec             	pushl  -0x14(%ebp)
c1006b36:	e8 f5 14 00 00       	call   c1008030 <dir_is_empty>
c1006b3b:	83 c4 10             	add    $0x10,%esp
c1006b3e:	85 c0                	test   %eax,%eax
c1006b40:	75 15                	jne    c1006b57 <sys_rmdir+0xe1>
c1006b42:	83 ec 08             	sub    $0x8,%esp
c1006b45:	ff 75 08             	pushl  0x8(%ebp)
c1006b48:	68 a8 aa 00 c1       	push   $0xc100aaa8
c1006b4d:	e8 44 db ff ff       	call   c1004696 <printk>
c1006b52:	83 c4 10             	add    $0x10,%esp
c1006b55:	eb 1d                	jmp    c1006b74 <sys_rmdir+0xfe>
c1006b57:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006b5a:	83 ec 08             	sub    $0x8,%esp
c1006b5d:	ff 75 ec             	pushl  -0x14(%ebp)
c1006b60:	50                   	push   %eax
c1006b61:	e8 f2 14 00 00       	call   c1008058 <dir_remove>
c1006b66:	83 c4 10             	add    $0x10,%esp
c1006b69:	85 c0                	test   %eax,%eax
c1006b6b:	75 07                	jne    c1006b74 <sys_rmdir+0xfe>
c1006b6d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006b74:	83 ec 0c             	sub    $0xc,%esp
c1006b77:	ff 75 ec             	pushl  -0x14(%ebp)
c1006b7a:	e8 59 09 00 00       	call   c10074d8 <dir_close>
c1006b7f:	83 c4 10             	add    $0x10,%esp
c1006b82:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006b85:	83 ec 0c             	sub    $0xc,%esp
c1006b88:	50                   	push   %eax
c1006b89:	e8 4a 09 00 00       	call   c10074d8 <dir_close>
c1006b8e:	83 c4 10             	add    $0x10,%esp
c1006b91:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006b94:	c9                   	leave  
c1006b95:	c3                   	ret    

c1006b96 <get_parent_dir_inode_nr>:
c1006b96:	55                   	push   %ebp
c1006b97:	89 e5                	mov    %esp,%ebp
c1006b99:	83 ec 18             	sub    $0x18,%esp
c1006b9c:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006ba1:	83 ec 08             	sub    $0x8,%esp
c1006ba4:	ff 75 08             	pushl  0x8(%ebp)
c1006ba7:	50                   	push   %eax
c1006ba8:	e8 7d 29 00 00       	call   c100952a <inode_open>
c1006bad:	83 c4 10             	add    $0x10,%esp
c1006bb0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006bb3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006bb6:	8b 40 10             	mov    0x10(%eax),%eax
c1006bb9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006bbc:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006bc1:	8b 40 10             	mov    0x10(%eax),%eax
c1006bc4:	8b 40 28             	mov    0x28(%eax),%eax
c1006bc7:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1006bca:	73 19                	jae    c1006be5 <get_parent_dir_inode_nr+0x4f>
c1006bcc:	68 f0 aa 00 c1       	push   $0xc100aaf0
c1006bd1:	68 fc ac 00 c1       	push   $0xc100acfc
c1006bd6:	68 c1 02 00 00       	push   $0x2c1
c1006bdb:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1006be0:	e8 28 97 ff ff       	call   c100030d <__PANIC>
c1006be5:	83 ec 0c             	sub    $0xc,%esp
c1006be8:	ff 75 f4             	pushl  -0xc(%ebp)
c1006beb:	e8 10 2a 00 00       	call   c1009600 <inode_close>
c1006bf0:	83 c4 10             	add    $0x10,%esp
c1006bf3:	83 ec 04             	sub    $0x4,%esp
c1006bf6:	6a 01                	push   $0x1
c1006bf8:	ff 75 f0             	pushl  -0x10(%ebp)
c1006bfb:	ff 75 0c             	pushl  0xc(%ebp)
c1006bfe:	e8 3b e3 ff ff       	call   c1004f3e <ide_read>
c1006c03:	83 c4 10             	add    $0x10,%esp
c1006c06:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c09:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006c0c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006c0f:	83 c0 18             	add    $0x18,%eax
c1006c12:	8b 40 10             	mov    0x10(%eax),%eax
c1006c15:	3d ff 0f 00 00       	cmp    $0xfff,%eax
c1006c1a:	77 0e                	ja     c1006c2a <get_parent_dir_inode_nr+0x94>
c1006c1c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006c1f:	83 c0 18             	add    $0x18,%eax
c1006c22:	8b 40 14             	mov    0x14(%eax),%eax
c1006c25:	83 f8 02             	cmp    $0x2,%eax
c1006c28:	74 19                	je     c1006c43 <get_parent_dir_inode_nr+0xad>
c1006c2a:	68 1c ab 00 c1       	push   $0xc100ab1c
c1006c2f:	68 fc ac 00 c1       	push   $0xc100acfc
c1006c34:	68 c6 02 00 00       	push   $0x2c6
c1006c39:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1006c3e:	e8 ca 96 ff ff       	call   c100030d <__PANIC>
c1006c43:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006c46:	83 c0 18             	add    $0x18,%eax
c1006c49:	8b 40 10             	mov    0x10(%eax),%eax
c1006c4c:	c9                   	leave  
c1006c4d:	c3                   	ret    

c1006c4e <get_child_dir_name>:
c1006c4e:	55                   	push   %ebp
c1006c4f:	89 e5                	mov    %esp,%ebp
c1006c51:	57                   	push   %edi
c1006c52:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1006c58:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006c5d:	83 ec 08             	sub    $0x8,%esp
c1006c60:	ff 75 08             	pushl  0x8(%ebp)
c1006c63:	50                   	push   %eax
c1006c64:	e8 c1 28 00 00       	call   c100952a <inode_open>
c1006c69:	83 c4 10             	add    $0x10,%esp
c1006c6c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006c6f:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006c73:	8d 95 ac fd ff ff    	lea    -0x254(%ebp),%edx
c1006c79:	b8 00 00 00 00       	mov    $0x0,%eax
c1006c7e:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1006c83:	89 d7                	mov    %edx,%edi
c1006c85:	f3 ab                	rep stos %eax,%es:(%edi)
c1006c87:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
c1006c8e:	eb 22                	jmp    c1006cb2 <get_child_dir_name+0x64>
c1006c90:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1006c94:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006c98:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1006c9b:	83 c1 04             	add    $0x4,%ecx
c1006c9e:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1006ca1:	89 94 85 ac fd ff ff 	mov    %edx,-0x254(%ebp,%eax,4)
c1006ca8:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006cac:	83 c0 01             	add    $0x1,%eax
c1006caf:	88 45 f7             	mov    %al,-0x9(%ebp)
c1006cb2:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1006cb6:	76 d8                	jbe    c1006c90 <get_child_dir_name+0x42>
c1006cb8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006cbb:	8b 40 40             	mov    0x40(%eax),%eax
c1006cbe:	85 c0                	test   %eax,%eax
c1006cc0:	74 25                	je     c1006ce7 <get_child_dir_name+0x99>
c1006cc2:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006cc5:	8b 50 40             	mov    0x40(%eax),%edx
c1006cc8:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
c1006cce:	83 c0 30             	add    $0x30,%eax
c1006cd1:	83 ec 04             	sub    $0x4,%esp
c1006cd4:	6a 01                	push   $0x1
c1006cd6:	52                   	push   %edx
c1006cd7:	50                   	push   %eax
c1006cd8:	e8 61 e2 ff ff       	call   c1004f3e <ide_read>
c1006cdd:	83 c4 10             	add    $0x10,%esp
c1006ce0:	c7 45 f0 8c 00 00 00 	movl   $0x8c,-0x10(%ebp)
c1006ce7:	83 ec 0c             	sub    $0xc,%esp
c1006cea:	ff 75 e8             	pushl  -0x18(%ebp)
c1006ced:	e8 0e 29 00 00       	call   c1009600 <inode_close>
c1006cf2:	83 c4 10             	add    $0x10,%esp
c1006cf5:	8b 45 14             	mov    0x14(%ebp),%eax
c1006cf8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006cfb:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006d00:	8b 40 10             	mov    0x10(%eax),%eax
c1006d03:	8b 40 30             	mov    0x30(%eax),%eax
c1006d06:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1006d09:	b8 00 02 00 00       	mov    $0x200,%eax
c1006d0e:	ba 00 00 00 00       	mov    $0x0,%edx
c1006d13:	f7 75 e0             	divl   -0x20(%ebp)
c1006d16:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1006d19:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006d1d:	e9 bc 00 00 00       	jmp    c1006dde <get_child_dir_name+0x190>
c1006d22:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006d26:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1006d2d:	85 c0                	test   %eax,%eax
c1006d2f:	0f 84 9f 00 00 00    	je     c1006dd4 <get_child_dir_name+0x186>
c1006d35:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006d39:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1006d40:	83 ec 04             	sub    $0x4,%esp
c1006d43:	6a 01                	push   $0x1
c1006d45:	50                   	push   %eax
c1006d46:	ff 75 14             	pushl  0x14(%ebp)
c1006d49:	e8 f0 e1 ff ff       	call   c1004f3e <ide_read>
c1006d4e:	83 c4 10             	add    $0x10,%esp
c1006d51:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
c1006d55:	eb 74                	jmp    c1006dcb <get_child_dir_name+0x17d>
c1006d57:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1006d5b:	89 d0                	mov    %edx,%eax
c1006d5d:	01 c0                	add    %eax,%eax
c1006d5f:	01 d0                	add    %edx,%eax
c1006d61:	c1 e0 03             	shl    $0x3,%eax
c1006d64:	89 c2                	mov    %eax,%edx
c1006d66:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006d69:	01 d0                	add    %edx,%eax
c1006d6b:	8b 40 10             	mov    0x10(%eax),%eax
c1006d6e:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1006d71:	75 4e                	jne    c1006dc1 <get_child_dir_name+0x173>
c1006d73:	8b 45 10             	mov    0x10(%ebp),%eax
c1006d76:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1006d7b:	89 c2                	mov    %eax,%edx
c1006d7d:	b8 00 00 00 00       	mov    $0x0,%eax
c1006d82:	89 d7                	mov    %edx,%edi
c1006d84:	f2 ae                	repnz scas %es:(%edi),%al
c1006d86:	89 c8                	mov    %ecx,%eax
c1006d88:	f7 d0                	not    %eax
c1006d8a:	8d 50 ff             	lea    -0x1(%eax),%edx
c1006d8d:	8b 45 10             	mov    0x10(%ebp),%eax
c1006d90:	01 d0                	add    %edx,%eax
c1006d92:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1006d97:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1006d9b:	89 d0                	mov    %edx,%eax
c1006d9d:	01 c0                	add    %eax,%eax
c1006d9f:	01 d0                	add    %edx,%eax
c1006da1:	c1 e0 03             	shl    $0x3,%eax
c1006da4:	89 c2                	mov    %eax,%edx
c1006da6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006da9:	01 d0                	add    %edx,%eax
c1006dab:	83 ec 08             	sub    $0x8,%esp
c1006dae:	50                   	push   %eax
c1006daf:	ff 75 10             	pushl  0x10(%ebp)
c1006db2:	e8 1e 94 ff ff       	call   c10001d5 <strcat>
c1006db7:	83 c4 10             	add    $0x10,%esp
c1006dba:	b8 00 00 00 00       	mov    $0x0,%eax
c1006dbf:	eb 2f                	jmp    c1006df0 <get_child_dir_name+0x1a2>
c1006dc1:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1006dc5:	83 c0 01             	add    $0x1,%eax
c1006dc8:	88 45 ef             	mov    %al,-0x11(%ebp)
c1006dcb:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1006dcf:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1006dd2:	77 83                	ja     c1006d57 <get_child_dir_name+0x109>
c1006dd4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006dd8:	83 c0 01             	add    $0x1,%eax
c1006ddb:	88 45 f7             	mov    %al,-0x9(%ebp)
c1006dde:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006de2:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1006de5:	0f 87 37 ff ff ff    	ja     c1006d22 <get_child_dir_name+0xd4>
c1006deb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006df0:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1006df3:	c9                   	leave  
c1006df4:	c3                   	ret    

c1006df5 <sys_getcwd>:
c1006df5:	55                   	push   %ebp
c1006df6:	89 e5                	mov    %esp,%ebp
c1006df8:	57                   	push   %edi
c1006df9:	53                   	push   %ebx
c1006dfa:	81 ec 20 02 00 00    	sub    $0x220,%esp
c1006e00:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006e04:	75 19                	jne    c1006e1f <sys_getcwd+0x2a>
c1006e06:	68 e2 a7 00 c1       	push   $0xc100a7e2
c1006e0b:	68 14 ad 00 c1       	push   $0xc100ad14
c1006e10:	68 f9 02 00 00       	push   $0x2f9
c1006e15:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1006e1a:	e8 ee 94 ff ff       	call   c100030d <__PANIC>
c1006e1f:	83 ec 08             	sub    $0x8,%esp
c1006e22:	6a 02                	push   $0x2
c1006e24:	68 00 02 00 00       	push   $0x200
c1006e29:	e8 62 bb ff ff       	call   c1002990 <vmm_malloc>
c1006e2e:	83 c4 10             	add    $0x10,%esp
c1006e31:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006e34:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1006e38:	75 0a                	jne    c1006e44 <sys_getcwd+0x4f>
c1006e3a:	b8 00 00 00 00       	mov    $0x0,%eax
c1006e3f:	e9 97 01 00 00       	jmp    c1006fdb <sys_getcwd+0x1e6>
c1006e44:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1006e4b:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1006e50:	8b 80 e4 00 00 00    	mov    0xe4(%eax),%eax
c1006e56:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006e59:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006e5d:	78 09                	js     c1006e68 <sys_getcwd+0x73>
c1006e5f:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
c1006e66:	7e 19                	jle    c1006e81 <sys_getcwd+0x8c>
c1006e68:	68 54 ab 00 c1       	push   $0xc100ab54
c1006e6d:	68 14 ad 00 c1       	push   $0xc100ad14
c1006e72:	68 01 03 00 00       	push   $0x301
c1006e77:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1006e7c:	e8 8c 94 ff ff       	call   c100030d <__PANIC>
c1006e81:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006e85:	75 17                	jne    c1006e9e <sys_getcwd+0xa9>
c1006e87:	8b 45 08             	mov    0x8(%ebp),%eax
c1006e8a:	c6 00 2f             	movb   $0x2f,(%eax)
c1006e8d:	8b 45 08             	mov    0x8(%ebp),%eax
c1006e90:	83 c0 01             	add    $0x1,%eax
c1006e93:	c6 00 00             	movb   $0x0,(%eax)
c1006e96:	8b 45 08             	mov    0x8(%ebp),%eax
c1006e99:	e9 3d 01 00 00       	jmp    c1006fdb <sys_getcwd+0x1e6>
c1006e9e:	83 ec 04             	sub    $0x4,%esp
c1006ea1:	ff 75 0c             	pushl  0xc(%ebp)
c1006ea4:	6a 00                	push   $0x0
c1006ea6:	ff 75 08             	pushl  0x8(%ebp)
c1006ea9:	e8 fc 91 ff ff       	call   c10000aa <memset>
c1006eae:	83 c4 10             	add    $0x10,%esp
c1006eb1:	c7 85 e6 fd ff ff 00 	movl   $0x0,-0x21a(%ebp)
c1006eb8:	00 00 00 
c1006ebb:	8d 85 ea fd ff ff    	lea    -0x216(%ebp),%eax
c1006ec1:	b9 fc 01 00 00       	mov    $0x1fc,%ecx
c1006ec6:	bb 00 00 00 00       	mov    $0x0,%ebx
c1006ecb:	89 18                	mov    %ebx,(%eax)
c1006ecd:	89 5c 08 fc          	mov    %ebx,-0x4(%eax,%ecx,1)
c1006ed1:	8d 50 04             	lea    0x4(%eax),%edx
c1006ed4:	83 e2 fc             	and    $0xfffffffc,%edx
c1006ed7:	29 d0                	sub    %edx,%eax
c1006ed9:	01 c1                	add    %eax,%ecx
c1006edb:	83 e1 fc             	and    $0xfffffffc,%ecx
c1006ede:	c1 e9 02             	shr    $0x2,%ecx
c1006ee1:	89 d7                	mov    %edx,%edi
c1006ee3:	89 d8                	mov    %ebx,%eax
c1006ee5:	f3 ab                	rep stos %eax,%es:(%edi)
c1006ee7:	eb 58                	jmp    c1006f41 <sys_getcwd+0x14c>
c1006ee9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006eec:	83 ec 08             	sub    $0x8,%esp
c1006eef:	ff 75 f0             	pushl  -0x10(%ebp)
c1006ef2:	50                   	push   %eax
c1006ef3:	e8 9e fc ff ff       	call   c1006b96 <get_parent_dir_inode_nr>
c1006ef8:	83 c4 10             	add    $0x10,%esp
c1006efb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006efe:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006f01:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006f04:	ff 75 f0             	pushl  -0x10(%ebp)
c1006f07:	8d 8d e6 fd ff ff    	lea    -0x21a(%ebp),%ecx
c1006f0d:	51                   	push   %ecx
c1006f0e:	52                   	push   %edx
c1006f0f:	50                   	push   %eax
c1006f10:	e8 39 fd ff ff       	call   c1006c4e <get_child_dir_name>
c1006f15:	83 c4 10             	add    $0x10,%esp
c1006f18:	83 f8 ff             	cmp    $0xffffffff,%eax
c1006f1b:	75 1e                	jne    c1006f3b <sys_getcwd+0x146>
c1006f1d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006f20:	83 ec 08             	sub    $0x8,%esp
c1006f23:	68 00 02 00 00       	push   $0x200
c1006f28:	50                   	push   %eax
c1006f29:	e8 87 bb ff ff       	call   c1002ab5 <vmm_free>
c1006f2e:	83 c4 10             	add    $0x10,%esp
c1006f31:	b8 00 00 00 00       	mov    $0x0,%eax
c1006f36:	e9 a0 00 00 00       	jmp    c1006fdb <sys_getcwd+0x1e6>
c1006f3b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006f3e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006f41:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006f45:	75 a2                	jne    c1006ee9 <sys_getcwd+0xf4>
c1006f47:	83 ec 0c             	sub    $0xc,%esp
c1006f4a:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c1006f50:	50                   	push   %eax
c1006f51:	e8 c8 91 ff ff       	call   c100011e <strlen>
c1006f56:	83 c4 10             	add    $0x10,%esp
c1006f59:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1006f5c:	73 49                	jae    c1006fa7 <sys_getcwd+0x1b2>
c1006f5e:	68 84 ab 00 c1       	push   $0xc100ab84
c1006f63:	68 14 ad 00 c1       	push   $0xc100ad14
c1006f68:	68 17 03 00 00       	push   $0x317
c1006f6d:	68 a8 a5 00 c1       	push   $0xc100a5a8
c1006f72:	e8 96 93 ff ff       	call   c100030d <__PANIC>
c1006f77:	83 ec 0c             	sub    $0xc,%esp
c1006f7a:	ff 75 08             	pushl  0x8(%ebp)
c1006f7d:	e8 9c 91 ff ff       	call   c100011e <strlen>
c1006f82:	83 c4 10             	add    $0x10,%esp
c1006f85:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c1006f89:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c1006f8d:	8b 45 08             	mov    0x8(%ebp),%eax
c1006f90:	01 d0                	add    %edx,%eax
c1006f92:	83 ec 08             	sub    $0x8,%esp
c1006f95:	ff 75 e8             	pushl  -0x18(%ebp)
c1006f98:	50                   	push   %eax
c1006f99:	e8 7c 92 ff ff       	call   c100021a <strcpy>
c1006f9e:	83 c4 10             	add    $0x10,%esp
c1006fa1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006fa4:	c6 00 00             	movb   $0x0,(%eax)
c1006fa7:	83 ec 08             	sub    $0x8,%esp
c1006faa:	6a 2f                	push   $0x2f
c1006fac:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c1006fb2:	50                   	push   %eax
c1006fb3:	e8 de 91 ff ff       	call   c1000196 <strrchr>
c1006fb8:	83 c4 10             	add    $0x10,%esp
c1006fbb:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006fbe:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1006fc2:	75 b3                	jne    c1006f77 <sys_getcwd+0x182>
c1006fc4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006fc7:	83 ec 08             	sub    $0x8,%esp
c1006fca:	68 00 02 00 00       	push   $0x200
c1006fcf:	50                   	push   %eax
c1006fd0:	e8 e0 ba ff ff       	call   c1002ab5 <vmm_free>
c1006fd5:	83 c4 10             	add    $0x10,%esp
c1006fd8:	8b 45 08             	mov    0x8(%ebp),%eax
c1006fdb:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1006fde:	5b                   	pop    %ebx
c1006fdf:	5f                   	pop    %edi
c1006fe0:	5d                   	pop    %ebp
c1006fe1:	c3                   	ret    

c1006fe2 <sys_stat>:
c1006fe2:	55                   	push   %ebp
c1006fe3:	89 e5                	mov    %esp,%ebp
c1006fe5:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1006feb:	83 ec 08             	sub    $0x8,%esp
c1006fee:	68 d7 a5 00 c1       	push   $0xc100a5d7
c1006ff3:	ff 75 08             	pushl  0x8(%ebp)
c1006ff6:	e8 88 91 ff ff       	call   c1000183 <strcmp>
c1006ffb:	83 c4 10             	add    $0x10,%esp
c1006ffe:	85 c0                	test   %eax,%eax
c1007000:	74 2e                	je     c1007030 <sys_stat+0x4e>
c1007002:	83 ec 08             	sub    $0x8,%esp
c1007005:	68 d9 a5 00 c1       	push   $0xc100a5d9
c100700a:	ff 75 08             	pushl  0x8(%ebp)
c100700d:	e8 71 91 ff ff       	call   c1000183 <strcmp>
c1007012:	83 c4 10             	add    $0x10,%esp
c1007015:	85 c0                	test   %eax,%eax
c1007017:	74 17                	je     c1007030 <sys_stat+0x4e>
c1007019:	83 ec 08             	sub    $0x8,%esp
c100701c:	68 dc a5 00 c1       	push   $0xc100a5dc
c1007021:	ff 75 08             	pushl  0x8(%ebp)
c1007024:	e8 5a 91 ff ff       	call   c1000183 <strcmp>
c1007029:	83 c4 10             	add    $0x10,%esp
c100702c:	85 c0                	test   %eax,%eax
c100702e:	75 2d                	jne    c100705d <sys_stat+0x7b>
c1007030:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007033:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
c100703a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100703d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1007043:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1007048:	8b 00                	mov    (%eax),%eax
c100704a:	8b 50 04             	mov    0x4(%eax),%edx
c100704d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007050:	89 50 04             	mov    %edx,0x4(%eax)
c1007053:	b8 00 00 00 00       	mov    $0x0,%eax
c1007058:	e9 af 00 00 00       	jmp    c100710c <sys_stat+0x12a>
c100705d:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007064:	83 ec 04             	sub    $0x4,%esp
c1007067:	68 08 02 00 00       	push   $0x208
c100706c:	6a 00                	push   $0x0
c100706e:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007074:	50                   	push   %eax
c1007075:	e8 30 90 ff ff       	call   c10000aa <memset>
c100707a:	83 c4 10             	add    $0x10,%esp
c100707d:	83 ec 08             	sub    $0x8,%esp
c1007080:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007086:	50                   	push   %eax
c1007087:	ff 75 08             	pushl  0x8(%ebp)
c100708a:	e8 83 e9 ff ff       	call   c1005a12 <search_file>
c100708f:	83 c4 10             	add    $0x10,%esp
c1007092:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007095:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007099:	74 4c                	je     c10070e7 <sys_stat+0x105>
c100709b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100709e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10070a3:	83 ec 08             	sub    $0x8,%esp
c10070a6:	52                   	push   %edx
c10070a7:	50                   	push   %eax
c10070a8:	e8 7d 24 00 00       	call   c100952a <inode_open>
c10070ad:	83 c4 10             	add    $0x10,%esp
c10070b0:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10070b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10070b6:	8b 50 04             	mov    0x4(%eax),%edx
c10070b9:	8b 45 0c             	mov    0xc(%ebp),%eax
c10070bc:	89 50 04             	mov    %edx,0x4(%eax)
c10070bf:	83 ec 0c             	sub    $0xc,%esp
c10070c2:	ff 75 ec             	pushl  -0x14(%ebp)
c10070c5:	e8 36 25 00 00       	call   c1009600 <inode_close>
c10070ca:	83 c4 10             	add    $0x10,%esp
c10070cd:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10070d0:	8b 45 0c             	mov    0xc(%ebp),%eax
c10070d3:	89 50 08             	mov    %edx,0x8(%eax)
c10070d6:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10070d9:	8b 45 0c             	mov    0xc(%ebp),%eax
c10070dc:	89 10                	mov    %edx,(%eax)
c10070de:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10070e5:	eb 13                	jmp    c10070fa <sys_stat+0x118>
c10070e7:	83 ec 08             	sub    $0x8,%esp
c10070ea:	ff 75 08             	pushl  0x8(%ebp)
c10070ed:	68 a6 ab 00 c1       	push   $0xc100aba6
c10070f2:	e8 9f d5 ff ff       	call   c1004696 <printk>
c10070f7:	83 c4 10             	add    $0x10,%esp
c10070fa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10070fd:	83 ec 0c             	sub    $0xc,%esp
c1007100:	50                   	push   %eax
c1007101:	e8 d2 03 00 00       	call   c10074d8 <dir_close>
c1007106:	83 c4 10             	add    $0x10,%esp
c1007109:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100710c:	c9                   	leave  
c100710d:	c3                   	ret    

c100710e <sys_chdir>:
c100710e:	55                   	push   %ebp
c100710f:	89 e5                	mov    %esp,%ebp
c1007111:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1007117:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c100711e:	83 ec 04             	sub    $0x4,%esp
c1007121:	68 08 02 00 00       	push   $0x208
c1007126:	6a 00                	push   $0x0
c1007128:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c100712e:	50                   	push   %eax
c100712f:	e8 76 8f ff ff       	call   c10000aa <memset>
c1007134:	83 c4 10             	add    $0x10,%esp
c1007137:	83 ec 08             	sub    $0x8,%esp
c100713a:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007140:	50                   	push   %eax
c1007141:	ff 75 08             	pushl  0x8(%ebp)
c1007144:	e8 c9 e8 ff ff       	call   c1005a12 <search_file>
c1007149:	83 c4 10             	add    $0x10,%esp
c100714c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100714f:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007153:	74 32                	je     c1007187 <sys_chdir+0x79>
c1007155:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007158:	83 f8 02             	cmp    $0x2,%eax
c100715b:	75 17                	jne    c1007174 <sys_chdir+0x66>
c100715d:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1007162:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007165:	89 90 e4 00 00 00    	mov    %edx,0xe4(%eax)
c100716b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007172:	eb 13                	jmp    c1007187 <sys_chdir+0x79>
c1007174:	83 ec 08             	sub    $0x8,%esp
c1007177:	ff 75 08             	pushl  0x8(%ebp)
c100717a:	68 c0 ab 00 c1       	push   $0xc100abc0
c100717f:	e8 12 d5 ff ff       	call   c1004696 <printk>
c1007184:	83 c4 10             	add    $0x10,%esp
c1007187:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100718a:	83 ec 0c             	sub    $0xc,%esp
c100718d:	50                   	push   %eax
c100718e:	e8 45 03 00 00       	call   c10074d8 <dir_close>
c1007193:	83 c4 10             	add    $0x10,%esp
c1007196:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007199:	c9                   	leave  
c100719a:	c3                   	ret    

c100719b <fs_init>:
c100719b:	55                   	push   %ebp
c100719c:	89 e5                	mov    %esp,%ebp
c100719e:	83 ec 18             	sub    $0x18,%esp
c10071a1:	e8 c3 e4 ff ff       	call   c1005669 <mount_partition>
c10071a6:	e8 ee d0 ff ff       	call   c1004299 <clear>
c10071ab:	83 ec 08             	sub    $0x8,%esp
c10071ae:	8d 45 ec             	lea    -0x14(%ebp),%eax
c10071b1:	50                   	push   %eax
c10071b2:	68 d7 a5 00 c1       	push   $0xc100a5d7
c10071b7:	e8 26 fe ff ff       	call   c1006fe2 <sys_stat>
c10071bc:	83 c4 10             	add    $0x10,%esp
c10071bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10071c2:	83 f8 02             	cmp    $0x2,%eax
c10071c5:	75 07                	jne    c10071ce <fs_init+0x33>
c10071c7:	b9 e9 ab 00 c1       	mov    $0xc100abe9,%ecx
c10071cc:	eb 05                	jmp    c10071d3 <fs_init+0x38>
c10071ce:	b9 f3 ab 00 c1       	mov    $0xc100abf3,%ecx
c10071d3:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10071d6:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10071d9:	51                   	push   %ecx
c10071da:	52                   	push   %edx
c10071db:	50                   	push   %eax
c10071dc:	68 fc ab 00 c1       	push   $0xc100abfc
c10071e1:	e8 b0 d4 ff ff       	call   c1004696 <printk>
c10071e6:	83 c4 10             	add    $0x10,%esp
c10071e9:	83 ec 08             	sub    $0x8,%esp
c10071ec:	8d 45 ec             	lea    -0x14(%ebp),%eax
c10071ef:	50                   	push   %eax
c10071f0:	68 2f ac 00 c1       	push   $0xc100ac2f
c10071f5:	e8 e8 fd ff ff       	call   c1006fe2 <sys_stat>
c10071fa:	83 c4 10             	add    $0x10,%esp
c10071fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007200:	83 f8 02             	cmp    $0x2,%eax
c1007203:	75 07                	jne    c100720c <fs_init+0x71>
c1007205:	b9 e9 ab 00 c1       	mov    $0xc100abe9,%ecx
c100720a:	eb 05                	jmp    c1007211 <fs_init+0x76>
c100720c:	b9 f3 ab 00 c1       	mov    $0xc100abf3,%ecx
c1007211:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007214:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007217:	51                   	push   %ecx
c1007218:	52                   	push   %edx
c1007219:	50                   	push   %eax
c100721a:	68 38 ac 00 c1       	push   $0xc100ac38
c100721f:	e8 72 d4 ff ff       	call   c1004696 <printk>
c1007224:	83 c4 10             	add    $0x10,%esp
c1007227:	90                   	nop
c1007228:	c9                   	leave  
c1007229:	c3                   	ret    

c100722a <open_root_dir>:
c100722a:	55                   	push   %ebp
c100722b:	89 e5                	mov    %esp,%ebp
c100722d:	53                   	push   %ebx
c100722e:	83 ec 04             	sub    $0x4,%esp
c1007231:	83 ec 08             	sub    $0x8,%esp
c1007234:	6a 02                	push   $0x2
c1007236:	68 08 02 00 00       	push   $0x208
c100723b:	e8 50 b7 ff ff       	call   c1002990 <vmm_malloc>
c1007240:	83 c4 10             	add    $0x10,%esp
c1007243:	a3 34 32 a1 c1       	mov    %eax,0xc1a13234
c1007248:	8b 45 08             	mov    0x8(%ebp),%eax
c100724b:	8b 40 10             	mov    0x10(%eax),%eax
c100724e:	8b 40 2c             	mov    0x2c(%eax),%eax
c1007251:	83 ec 08             	sub    $0x8,%esp
c1007254:	50                   	push   %eax
c1007255:	68 20 ad 00 c1       	push   $0xc100ad20
c100725a:	e8 37 d4 ff ff       	call   c1004696 <printk>
c100725f:	83 c4 10             	add    $0x10,%esp
c1007262:	8b 45 08             	mov    0x8(%ebp),%eax
c1007265:	8b 40 10             	mov    0x10(%eax),%eax
c1007268:	8b 40 2c             	mov    0x2c(%eax),%eax
c100726b:	8b 1d 34 32 a1 c1    	mov    0xc1a13234,%ebx
c1007271:	83 ec 08             	sub    $0x8,%esp
c1007274:	50                   	push   %eax
c1007275:	ff 75 08             	pushl  0x8(%ebp)
c1007278:	e8 ad 22 00 00       	call   c100952a <inode_open>
c100727d:	83 c4 10             	add    $0x10,%esp
c1007280:	89 03                	mov    %eax,(%ebx)
c1007282:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1007287:	8b 00                	mov    (%eax),%eax
c1007289:	83 ec 08             	sub    $0x8,%esp
c100728c:	50                   	push   %eax
c100728d:	68 34 ad 00 c1       	push   $0xc100ad34
c1007292:	e8 ff d3 ff ff       	call   c1004696 <printk>
c1007297:	83 c4 10             	add    $0x10,%esp
c100729a:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c100729f:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10072a6:	90                   	nop
c10072a7:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10072aa:	c9                   	leave  
c10072ab:	c3                   	ret    

c10072ac <dir_open>:
c10072ac:	55                   	push   %ebp
c10072ad:	89 e5                	mov    %esp,%ebp
c10072af:	83 ec 18             	sub    $0x18,%esp
c10072b2:	83 ec 08             	sub    $0x8,%esp
c10072b5:	6a 02                	push   $0x2
c10072b7:	68 08 02 00 00       	push   $0x208
c10072bc:	e8 cf b6 ff ff       	call   c1002990 <vmm_malloc>
c10072c1:	83 c4 10             	add    $0x10,%esp
c10072c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10072c7:	83 ec 08             	sub    $0x8,%esp
c10072ca:	ff 75 0c             	pushl  0xc(%ebp)
c10072cd:	ff 75 08             	pushl  0x8(%ebp)
c10072d0:	e8 55 22 00 00       	call   c100952a <inode_open>
c10072d5:	83 c4 10             	add    $0x10,%esp
c10072d8:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10072db:	89 02                	mov    %eax,(%edx)
c10072dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10072e0:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10072e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10072ea:	c9                   	leave  
c10072eb:	c3                   	ret    

c10072ec <search_dir_entry>:
c10072ec:	55                   	push   %ebp
c10072ed:	89 e5                	mov    %esp,%ebp
c10072ef:	83 ec 28             	sub    $0x28,%esp
c10072f2:	c7 45 e8 8c 00 00 00 	movl   $0x8c,-0x18(%ebp)
c10072f9:	83 ec 08             	sub    $0x8,%esp
c10072fc:	6a 02                	push   $0x2
c10072fe:	68 30 02 00 00       	push   $0x230
c1007303:	e8 88 b6 ff ff       	call   c1002990 <vmm_malloc>
c1007308:	83 c4 10             	add    $0x10,%esp
c100730b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100730e:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c1007312:	75 1a                	jne    c100732e <search_dir_entry+0x42>
c1007314:	83 ec 0c             	sub    $0xc,%esp
c1007317:	68 4c ad 00 c1       	push   $0xc100ad4c
c100731c:	e8 75 d3 ff ff       	call   c1004696 <printk>
c1007321:	83 c4 10             	add    $0x10,%esp
c1007324:	b8 00 00 00 00       	mov    $0x0,%eax
c1007329:	e9 a8 01 00 00       	jmp    c10074d6 <search_dir_entry+0x1ea>
c100732e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007335:	eb 23                	jmp    c100735a <search_dir_entry+0x6e>
c1007337:	8b 45 0c             	mov    0xc(%ebp),%eax
c100733a:	8b 00                	mov    (%eax),%eax
c100733c:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100733f:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1007346:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1007349:	01 ca                	add    %ecx,%edx
c100734b:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c100734e:	83 c1 04             	add    $0x4,%ecx
c1007351:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1007354:	89 02                	mov    %eax,(%edx)
c1007356:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100735a:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c100735e:	76 d7                	jbe    c1007337 <search_dir_entry+0x4b>
c1007360:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007367:	8b 45 0c             	mov    0xc(%ebp),%eax
c100736a:	8b 00                	mov    (%eax),%eax
c100736c:	8b 40 40             	mov    0x40(%eax),%eax
c100736f:	85 c0                	test   %eax,%eax
c1007371:	74 1d                	je     c1007390 <search_dir_entry+0xa4>
c1007373:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007376:	8b 00                	mov    (%eax),%eax
c1007378:	8b 40 40             	mov    0x40(%eax),%eax
c100737b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100737e:	83 c2 30             	add    $0x30,%edx
c1007381:	83 ec 04             	sub    $0x4,%esp
c1007384:	6a 01                	push   $0x1
c1007386:	50                   	push   %eax
c1007387:	52                   	push   %edx
c1007388:	e8 b1 db ff ff       	call   c1004f3e <ide_read>
c100738d:	83 c4 10             	add    $0x10,%esp
c1007390:	83 ec 08             	sub    $0x8,%esp
c1007393:	6a 02                	push   $0x2
c1007395:	68 00 02 00 00       	push   $0x200
c100739a:	e8 f1 b5 ff ff       	call   c1002990 <vmm_malloc>
c100739f:	83 c4 10             	add    $0x10,%esp
c10073a2:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10073a5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10073a8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10073ab:	8b 45 08             	mov    0x8(%ebp),%eax
c10073ae:	8b 40 10             	mov    0x10(%eax),%eax
c10073b1:	8b 40 30             	mov    0x30(%eax),%eax
c10073b4:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10073b7:	b8 00 02 00 00       	mov    $0x200,%eax
c10073bc:	ba 00 00 00 00       	mov    $0x0,%edx
c10073c1:	f7 75 dc             	divl   -0x24(%ebp)
c10073c4:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10073c7:	e9 d1 00 00 00       	jmp    c100749d <search_dir_entry+0x1b1>
c10073cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10073cf:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10073d6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10073d9:	01 d0                	add    %edx,%eax
c10073db:	8b 00                	mov    (%eax),%eax
c10073dd:	85 c0                	test   %eax,%eax
c10073df:	75 09                	jne    c10073ea <search_dir_entry+0xfe>
c10073e1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10073e5:	e9 b3 00 00 00       	jmp    c100749d <search_dir_entry+0x1b1>
c10073ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10073ed:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10073f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10073f7:	01 d0                	add    %edx,%eax
c10073f9:	8b 00                	mov    (%eax),%eax
c10073fb:	83 ec 04             	sub    $0x4,%esp
c10073fe:	6a 01                	push   $0x1
c1007400:	50                   	push   %eax
c1007401:	ff 75 e0             	pushl  -0x20(%ebp)
c1007404:	e8 35 db ff ff       	call   c1004f3e <ide_read>
c1007409:	83 c4 10             	add    $0x10,%esp
c100740c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007413:	eb 61                	jmp    c1007476 <search_dir_entry+0x18a>
c1007415:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007418:	83 ec 08             	sub    $0x8,%esp
c100741b:	ff 75 10             	pushl  0x10(%ebp)
c100741e:	50                   	push   %eax
c100741f:	e8 5f 8d ff ff       	call   c1000183 <strcmp>
c1007424:	83 c4 10             	add    $0x10,%esp
c1007427:	85 c0                	test   %eax,%eax
c1007429:	75 43                	jne    c100746e <search_dir_entry+0x182>
c100742b:	83 ec 04             	sub    $0x4,%esp
c100742e:	ff 75 dc             	pushl  -0x24(%ebp)
c1007431:	ff 75 f0             	pushl  -0x10(%ebp)
c1007434:	ff 75 14             	pushl  0x14(%ebp)
c1007437:	e8 cc 8c ff ff       	call   c1000108 <memcpy>
c100743c:	83 c4 10             	add    $0x10,%esp
c100743f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007442:	83 ec 08             	sub    $0x8,%esp
c1007445:	68 00 02 00 00       	push   $0x200
c100744a:	50                   	push   %eax
c100744b:	e8 65 b6 ff ff       	call   c1002ab5 <vmm_free>
c1007450:	83 c4 10             	add    $0x10,%esp
c1007453:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007456:	83 ec 08             	sub    $0x8,%esp
c1007459:	68 30 02 00 00       	push   $0x230
c100745e:	50                   	push   %eax
c100745f:	e8 51 b6 ff ff       	call   c1002ab5 <vmm_free>
c1007464:	83 c4 10             	add    $0x10,%esp
c1007467:	b8 01 00 00 00       	mov    $0x1,%eax
c100746c:	eb 68                	jmp    c10074d6 <search_dir_entry+0x1ea>
c100746e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1007472:	83 45 f0 18          	addl   $0x18,-0x10(%ebp)
c1007476:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007479:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c100747c:	72 97                	jb     c1007415 <search_dir_entry+0x129>
c100747e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007482:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007485:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007488:	83 ec 04             	sub    $0x4,%esp
c100748b:	68 00 02 00 00       	push   $0x200
c1007490:	6a 00                	push   $0x0
c1007492:	ff 75 e0             	pushl  -0x20(%ebp)
c1007495:	e8 10 8c ff ff       	call   c10000aa <memset>
c100749a:	83 c4 10             	add    $0x10,%esp
c100749d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10074a0:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c10074a3:	0f 82 23 ff ff ff    	jb     c10073cc <search_dir_entry+0xe0>
c10074a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10074ac:	83 ec 08             	sub    $0x8,%esp
c10074af:	68 00 02 00 00       	push   $0x200
c10074b4:	50                   	push   %eax
c10074b5:	e8 fb b5 ff ff       	call   c1002ab5 <vmm_free>
c10074ba:	83 c4 10             	add    $0x10,%esp
c10074bd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10074c0:	83 ec 08             	sub    $0x8,%esp
c10074c3:	68 30 02 00 00       	push   $0x230
c10074c8:	50                   	push   %eax
c10074c9:	e8 e7 b5 ff ff       	call   c1002ab5 <vmm_free>
c10074ce:	83 c4 10             	add    $0x10,%esp
c10074d1:	b8 00 00 00 00       	mov    $0x0,%eax
c10074d6:	c9                   	leave  
c10074d7:	c3                   	ret    

c10074d8 <dir_close>:
c10074d8:	55                   	push   %ebp
c10074d9:	89 e5                	mov    %esp,%ebp
c10074db:	83 ec 08             	sub    $0x8,%esp
c10074de:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c10074e3:	39 45 08             	cmp    %eax,0x8(%ebp)
c10074e6:	74 27                	je     c100750f <dir_close+0x37>
c10074e8:	8b 45 08             	mov    0x8(%ebp),%eax
c10074eb:	8b 00                	mov    (%eax),%eax
c10074ed:	83 ec 0c             	sub    $0xc,%esp
c10074f0:	50                   	push   %eax
c10074f1:	e8 0a 21 00 00       	call   c1009600 <inode_close>
c10074f6:	83 c4 10             	add    $0x10,%esp
c10074f9:	8b 45 08             	mov    0x8(%ebp),%eax
c10074fc:	83 ec 08             	sub    $0x8,%esp
c10074ff:	68 08 02 00 00       	push   $0x208
c1007504:	50                   	push   %eax
c1007505:	e8 ab b5 ff ff       	call   c1002ab5 <vmm_free>
c100750a:	83 c4 10             	add    $0x10,%esp
c100750d:	eb 01                	jmp    c1007510 <dir_close+0x38>
c100750f:	90                   	nop
c1007510:	c9                   	leave  
c1007511:	c3                   	ret    

c1007512 <create_dir_entry>:
c1007512:	55                   	push   %ebp
c1007513:	89 e5                	mov    %esp,%ebp
c1007515:	83 ec 18             	sub    $0x18,%esp
c1007518:	8b 45 10             	mov    0x10(%ebp),%eax
c100751b:	88 45 f4             	mov    %al,-0xc(%ebp)
c100751e:	83 ec 0c             	sub    $0xc,%esp
c1007521:	ff 75 08             	pushl  0x8(%ebp)
c1007524:	e8 f5 8b ff ff       	call   c100011e <strlen>
c1007529:	83 c4 10             	add    $0x10,%esp
c100752c:	83 f8 10             	cmp    $0x10,%eax
c100752f:	76 16                	jbe    c1007547 <create_dir_entry+0x35>
c1007531:	68 80 ad 00 c1       	push   $0xc100ad80
c1007536:	68 34 af 00 c1       	push   $0xc100af34
c100753b:	6a 72                	push   $0x72
c100753d:	68 a8 ad 00 c1       	push   $0xc100ada8
c1007542:	e8 c6 8d ff ff       	call   c100030d <__PANIC>
c1007547:	83 ec 0c             	sub    $0xc,%esp
c100754a:	ff 75 08             	pushl  0x8(%ebp)
c100754d:	e8 cc 8b ff ff       	call   c100011e <strlen>
c1007552:	83 c4 10             	add    $0x10,%esp
c1007555:	8b 55 14             	mov    0x14(%ebp),%edx
c1007558:	83 ec 04             	sub    $0x4,%esp
c100755b:	50                   	push   %eax
c100755c:	ff 75 08             	pushl  0x8(%ebp)
c100755f:	52                   	push   %edx
c1007560:	e8 a3 8b ff ff       	call   c1000108 <memcpy>
c1007565:	83 c4 10             	add    $0x10,%esp
c1007568:	8b 45 14             	mov    0x14(%ebp),%eax
c100756b:	8b 55 0c             	mov    0xc(%ebp),%edx
c100756e:	89 50 10             	mov    %edx,0x10(%eax)
c1007571:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
c1007575:	8b 45 14             	mov    0x14(%ebp),%eax
c1007578:	89 50 14             	mov    %edx,0x14(%eax)
c100757b:	90                   	nop
c100757c:	c9                   	leave  
c100757d:	c3                   	ret    

c100757e <sync_dir_entry>:
c100757e:	55                   	push   %ebp
c100757f:	89 e5                	mov    %esp,%ebp
c1007581:	57                   	push   %edi
c1007582:	53                   	push   %ebx
c1007583:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1007589:	8b 45 08             	mov    0x8(%ebp),%eax
c100758c:	8b 00                	mov    (%eax),%eax
c100758e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007591:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007594:	8b 40 04             	mov    0x4(%eax),%eax
c1007597:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100759a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100759f:	8b 40 10             	mov    0x10(%eax),%eax
c10075a2:	8b 40 30             	mov    0x30(%eax),%eax
c10075a5:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10075a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10075ab:	ba 00 00 00 00       	mov    $0x0,%edx
c10075b0:	f7 75 e8             	divl   -0x18(%ebp)
c10075b3:	89 d0                	mov    %edx,%eax
c10075b5:	85 c0                	test   %eax,%eax
c10075b7:	74 19                	je     c10075d2 <sync_dir_entry+0x54>
c10075b9:	68 d8 ad 00 c1       	push   $0xc100add8
c10075be:	68 48 af 00 c1       	push   $0xc100af48
c10075c3:	68 80 00 00 00       	push   $0x80
c10075c8:	68 a8 ad 00 c1       	push   $0xc100ada8
c10075cd:	e8 3b 8d ff ff       	call   c100030d <__PANIC>
c10075d2:	b8 00 02 00 00       	mov    $0x200,%eax
c10075d7:	ba 00 00 00 00       	mov    $0x0,%edx
c10075dc:	f7 75 e8             	divl   -0x18(%ebp)
c10075df:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10075e2:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c10075e9:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c10075ed:	8d 95 a0 fd ff ff    	lea    -0x260(%ebp),%edx
c10075f3:	b8 00 00 00 00       	mov    $0x0,%eax
c10075f8:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c10075fd:	89 d7                	mov    %edx,%edi
c10075ff:	f3 ab                	rep stos %eax,%es:(%edi)
c1007601:	eb 22                	jmp    c1007625 <sync_dir_entry+0xa7>
c1007603:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007607:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100760b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100760e:	83 c1 04             	add    $0x4,%ecx
c1007611:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1007614:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c100761b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100761f:	83 c0 01             	add    $0x1,%eax
c1007622:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007625:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007629:	76 d8                	jbe    c1007603 <sync_dir_entry+0x85>
c100762b:	8b 45 10             	mov    0x10(%ebp),%eax
c100762e:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007631:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007638:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100763c:	e9 52 03 00 00       	jmp    c1007993 <sync_dir_entry+0x415>
c1007641:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007648:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100764c:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007653:	85 c0                	test   %eax,%eax
c1007655:	0f 85 80 02 00 00    	jne    c10078db <sync_dir_entry+0x35d>
c100765b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007660:	83 ec 0c             	sub    $0xc,%esp
c1007663:	50                   	push   %eax
c1007664:	e8 25 0c 00 00       	call   c100828e <block_bitmap_alloc>
c1007669:	83 c4 10             	add    $0x10,%esp
c100766c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100766f:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c1007673:	75 1a                	jne    c100768f <sync_dir_entry+0x111>
c1007675:	83 ec 0c             	sub    $0xc,%esp
c1007678:	68 f8 ad 00 c1       	push   $0xc100adf8
c100767d:	e8 14 d0 ff ff       	call   c1004696 <printk>
c1007682:	83 c4 10             	add    $0x10,%esp
c1007685:	b8 00 00 00 00       	mov    $0x0,%eax
c100768a:	e9 23 03 00 00       	jmp    c10079b2 <sync_dir_entry+0x434>
c100768f:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007692:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007697:	8b 40 10             	mov    0x10(%eax),%eax
c100769a:	8b 40 28             	mov    0x28(%eax),%eax
c100769d:	29 c2                	sub    %eax,%edx
c100769f:	89 d0                	mov    %edx,%eax
c10076a1:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10076a4:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10076a8:	75 19                	jne    c10076c3 <sync_dir_entry+0x145>
c10076aa:	68 26 ae 00 c1       	push   $0xc100ae26
c10076af:	68 48 af 00 c1       	push   $0xc100af48
c10076b4:	68 a3 00 00 00       	push   $0xa3
c10076b9:	68 a8 ad 00 c1       	push   $0xc100ada8
c10076be:	e8 4a 8c ff ff       	call   c100030d <__PANIC>
c10076c3:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10076c6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10076cb:	83 ec 04             	sub    $0x4,%esp
c10076ce:	6a 01                	push   $0x1
c10076d0:	52                   	push   %edx
c10076d1:	50                   	push   %eax
c10076d2:	e8 85 0c 00 00       	call   c100835c <bitmap_sync>
c10076d7:	83 c4 10             	add    $0x10,%esp
c10076da:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c10076e1:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c10076e5:	77 27                	ja     c100770e <sync_dir_entry+0x190>
c10076e7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10076eb:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10076ee:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c10076f5:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c10076f9:	8b 94 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%edx
c1007700:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007703:	83 c1 04             	add    $0x4,%ecx
c1007706:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c1007709:	e9 6d 01 00 00       	jmp    c100787b <sync_dir_entry+0x2fd>
c100770e:	80 7d f7 0c          	cmpb   $0xc,-0x9(%ebp)
c1007712:	0f 85 37 01 00 00    	jne    c100784f <sync_dir_entry+0x2d1>
c1007718:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100771b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100771e:	89 50 40             	mov    %edx,0x40(%eax)
c1007721:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1007728:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100772d:	83 ec 0c             	sub    $0xc,%esp
c1007730:	50                   	push   %eax
c1007731:	e8 58 0b 00 00       	call   c100828e <block_bitmap_alloc>
c1007736:	83 c4 10             	add    $0x10,%esp
c1007739:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100773c:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c1007740:	0f 85 95 00 00 00    	jne    c10077db <sync_dir_entry+0x25d>
c1007746:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007749:	8b 50 40             	mov    0x40(%eax),%edx
c100774c:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007751:	8b 40 10             	mov    0x10(%eax),%eax
c1007754:	8b 40 28             	mov    0x28(%eax),%eax
c1007757:	29 c2                	sub    %eax,%edx
c1007759:	89 d0                	mov    %edx,%eax
c100775b:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100775e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007761:	8d 50 07             	lea    0x7(%eax),%edx
c1007764:	85 c0                	test   %eax,%eax
c1007766:	0f 48 c2             	cmovs  %edx,%eax
c1007769:	c1 f8 03             	sar    $0x3,%eax
c100776c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100776f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007772:	99                   	cltd   
c1007773:	c1 ea 1d             	shr    $0x1d,%edx
c1007776:	01 d0                	add    %edx,%eax
c1007778:	83 e0 07             	and    $0x7,%eax
c100777b:	29 d0                	sub    %edx,%eax
c100777d:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007780:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007785:	8b 50 18             	mov    0x18(%eax),%edx
c1007788:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100778b:	01 d0                	add    %edx,%eax
c100778d:	0f b6 00             	movzbl (%eax),%eax
c1007790:	89 c2                	mov    %eax,%edx
c1007792:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007795:	bb 01 00 00 00       	mov    $0x1,%ebx
c100779a:	89 c1                	mov    %eax,%ecx
c100779c:	d3 e3                	shl    %cl,%ebx
c100779e:	89 d8                	mov    %ebx,%eax
c10077a0:	f7 d0                	not    %eax
c10077a2:	89 d1                	mov    %edx,%ecx
c10077a4:	21 c1                	and    %eax,%ecx
c10077a6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10077ab:	8b 50 18             	mov    0x18(%eax),%edx
c10077ae:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10077b1:	01 d0                	add    %edx,%eax
c10077b3:	89 ca                	mov    %ecx,%edx
c10077b5:	88 10                	mov    %dl,(%eax)
c10077b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10077ba:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c10077c1:	83 ec 0c             	sub    $0xc,%esp
c10077c4:	68 f8 ad 00 c1       	push   $0xc100adf8
c10077c9:	e8 c8 ce ff ff       	call   c1004696 <printk>
c10077ce:	83 c4 10             	add    $0x10,%esp
c10077d1:	b8 00 00 00 00       	mov    $0x0,%eax
c10077d6:	e9 d7 01 00 00       	jmp    c10079b2 <sync_dir_entry+0x434>
c10077db:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10077de:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10077e3:	8b 40 10             	mov    0x10(%eax),%eax
c10077e6:	8b 40 28             	mov    0x28(%eax),%eax
c10077e9:	29 c2                	sub    %eax,%edx
c10077eb:	89 d0                	mov    %edx,%eax
c10077ed:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10077f0:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10077f4:	75 19                	jne    c100780f <sync_dir_entry+0x291>
c10077f6:	68 26 ae 00 c1       	push   $0xc100ae26
c10077fb:	68 48 af 00 c1       	push   $0xc100af48
c1007800:	68 ba 00 00 00       	push   $0xba
c1007805:	68 a8 ad 00 c1       	push   $0xc100ada8
c100780a:	e8 fe 8a ff ff       	call   c100030d <__PANIC>
c100780f:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1007812:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007817:	83 ec 04             	sub    $0x4,%esp
c100781a:	6a 01                	push   $0x1
c100781c:	52                   	push   %edx
c100781d:	50                   	push   %eax
c100781e:	e8 39 0b 00 00       	call   c100835c <bitmap_sync>
c1007823:	83 c4 10             	add    $0x10,%esp
c1007826:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007829:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c100782f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007832:	8b 50 40             	mov    0x40(%eax),%edx
c1007835:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c100783b:	83 c0 30             	add    $0x30,%eax
c100783e:	83 ec 04             	sub    $0x4,%esp
c1007841:	6a 01                	push   $0x1
c1007843:	52                   	push   %edx
c1007844:	50                   	push   %eax
c1007845:	e8 31 d7 ff ff       	call   c1004f7b <ide_write>
c100784a:	83 c4 10             	add    $0x10,%esp
c100784d:	eb 2c                	jmp    c100787b <sync_dir_entry+0x2fd>
c100784f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007853:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007856:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c100785d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007860:	8b 50 40             	mov    0x40(%eax),%edx
c1007863:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c1007869:	83 c0 30             	add    $0x30,%eax
c100786c:	83 ec 04             	sub    $0x4,%esp
c100786f:	6a 01                	push   $0x1
c1007871:	52                   	push   %edx
c1007872:	50                   	push   %eax
c1007873:	e8 03 d7 ff ff       	call   c1004f7b <ide_write>
c1007878:	83 c4 10             	add    $0x10,%esp
c100787b:	83 ec 04             	sub    $0x4,%esp
c100787e:	68 00 02 00 00       	push   $0x200
c1007883:	6a 00                	push   $0x0
c1007885:	ff 75 10             	pushl  0x10(%ebp)
c1007888:	e8 1d 88 ff ff       	call   c10000aa <memset>
c100788d:	83 c4 10             	add    $0x10,%esp
c1007890:	83 ec 04             	sub    $0x4,%esp
c1007893:	ff 75 e8             	pushl  -0x18(%ebp)
c1007896:	ff 75 0c             	pushl  0xc(%ebp)
c1007899:	ff 75 10             	pushl  0x10(%ebp)
c100789c:	e8 67 88 ff ff       	call   c1000108 <memcpy>
c10078a1:	83 c4 10             	add    $0x10,%esp
c10078a4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10078a8:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c10078af:	83 ec 04             	sub    $0x4,%esp
c10078b2:	6a 01                	push   $0x1
c10078b4:	50                   	push   %eax
c10078b5:	ff 75 10             	pushl  0x10(%ebp)
c10078b8:	e8 be d6 ff ff       	call   c1004f7b <ide_write>
c10078bd:	83 c4 10             	add    $0x10,%esp
c10078c0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10078c3:	8b 50 04             	mov    0x4(%eax),%edx
c10078c6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10078c9:	01 c2                	add    %eax,%edx
c10078cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10078ce:	89 50 04             	mov    %edx,0x4(%eax)
c10078d1:	b8 01 00 00 00       	mov    $0x1,%eax
c10078d6:	e9 d7 00 00 00       	jmp    c10079b2 <sync_dir_entry+0x434>
c10078db:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10078df:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c10078e6:	83 ec 04             	sub    $0x4,%esp
c10078e9:	6a 01                	push   $0x1
c10078eb:	50                   	push   %eax
c10078ec:	ff 75 10             	pushl  0x10(%ebp)
c10078ef:	e8 4a d6 ff ff       	call   c1004f3e <ide_read>
c10078f4:	83 c4 10             	add    $0x10,%esp
c10078f7:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c10078fb:	eb 7f                	jmp    c100797c <sync_dir_entry+0x3fe>
c10078fd:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1007901:	89 d0                	mov    %edx,%eax
c1007903:	01 c0                	add    %eax,%eax
c1007905:	01 d0                	add    %edx,%eax
c1007907:	c1 e0 03             	shl    $0x3,%eax
c100790a:	89 c2                	mov    %eax,%edx
c100790c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100790f:	01 d0                	add    %edx,%eax
c1007911:	8b 40 14             	mov    0x14(%eax),%eax
c1007914:	85 c0                	test   %eax,%eax
c1007916:	75 5a                	jne    c1007972 <sync_dir_entry+0x3f4>
c1007918:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c100791c:	89 d0                	mov    %edx,%eax
c100791e:	01 c0                	add    %eax,%eax
c1007920:	01 d0                	add    %edx,%eax
c1007922:	c1 e0 03             	shl    $0x3,%eax
c1007925:	89 c2                	mov    %eax,%edx
c1007927:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100792a:	01 d0                	add    %edx,%eax
c100792c:	83 ec 04             	sub    $0x4,%esp
c100792f:	ff 75 e8             	pushl  -0x18(%ebp)
c1007932:	ff 75 0c             	pushl  0xc(%ebp)
c1007935:	50                   	push   %eax
c1007936:	e8 cd 87 ff ff       	call   c1000108 <memcpy>
c100793b:	83 c4 10             	add    $0x10,%esp
c100793e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007942:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007949:	83 ec 04             	sub    $0x4,%esp
c100794c:	6a 01                	push   $0x1
c100794e:	50                   	push   %eax
c100794f:	ff 75 10             	pushl  0x10(%ebp)
c1007952:	e8 24 d6 ff ff       	call   c1004f7b <ide_write>
c1007957:	83 c4 10             	add    $0x10,%esp
c100795a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100795d:	8b 50 04             	mov    0x4(%eax),%edx
c1007960:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007963:	01 c2                	add    %eax,%edx
c1007965:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007968:	89 50 04             	mov    %edx,0x4(%eax)
c100796b:	b8 01 00 00 00       	mov    $0x1,%eax
c1007970:	eb 40                	jmp    c10079b2 <sync_dir_entry+0x434>
c1007972:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1007976:	83 c0 01             	add    $0x1,%eax
c1007979:	88 45 f6             	mov    %al,-0xa(%ebp)
c100797c:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1007980:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1007983:	0f 87 74 ff ff ff    	ja     c10078fd <sync_dir_entry+0x37f>
c1007989:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100798d:	83 c0 01             	add    $0x1,%eax
c1007990:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007993:	80 7d f7 8b          	cmpb   $0x8b,-0x9(%ebp)
c1007997:	0f 86 a4 fc ff ff    	jbe    c1007641 <sync_dir_entry+0xc3>
c100799d:	83 ec 0c             	sub    $0xc,%esp
c10079a0:	68 3d ae 00 c1       	push   $0xc100ae3d
c10079a5:	e8 ec cc ff ff       	call   c1004696 <printk>
c10079aa:	83 c4 10             	add    $0x10,%esp
c10079ad:	b8 00 00 00 00       	mov    $0x0,%eax
c10079b2:	8d 65 f8             	lea    -0x8(%ebp),%esp
c10079b5:	5b                   	pop    %ebx
c10079b6:	5f                   	pop    %edi
c10079b7:	5d                   	pop    %ebp
c10079b8:	c3                   	ret    

c10079b9 <delete_dir_entry>:
c10079b9:	55                   	push   %ebp
c10079ba:	89 e5                	mov    %esp,%ebp
c10079bc:	57                   	push   %edi
c10079bd:	53                   	push   %ebx
c10079be:	81 ec 60 02 00 00    	sub    $0x260,%esp
c10079c4:	8b 45 0c             	mov    0xc(%ebp),%eax
c10079c7:	8b 00                	mov    (%eax),%eax
c10079c9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10079cc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10079d3:	8d 95 98 fd ff ff    	lea    -0x268(%ebp),%edx
c10079d9:	b8 00 00 00 00       	mov    $0x0,%eax
c10079de:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c10079e3:	89 d7                	mov    %edx,%edi
c10079e5:	f3 ab                	rep stos %eax,%es:(%edi)
c10079e7:	eb 1a                	jmp    c1007a03 <delete_dir_entry+0x4a>
c10079e9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10079ec:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10079ef:	83 c2 04             	add    $0x4,%edx
c10079f2:	8b 14 90             	mov    (%eax,%edx,4),%edx
c10079f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10079f8:	89 94 85 98 fd ff ff 	mov    %edx,-0x268(%ebp,%eax,4)
c10079ff:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007a03:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1007a07:	76 e0                	jbe    c10079e9 <delete_dir_entry+0x30>
c1007a09:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007a0c:	8b 40 40             	mov    0x40(%eax),%eax
c1007a0f:	85 c0                	test   %eax,%eax
c1007a11:	74 1e                	je     c1007a31 <delete_dir_entry+0x78>
c1007a13:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007a16:	8b 50 40             	mov    0x40(%eax),%edx
c1007a19:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1007a1f:	83 c0 30             	add    $0x30,%eax
c1007a22:	83 ec 04             	sub    $0x4,%esp
c1007a25:	6a 01                	push   $0x1
c1007a27:	52                   	push   %edx
c1007a28:	50                   	push   %eax
c1007a29:	e8 10 d5 ff ff       	call   c1004f3e <ide_read>
c1007a2e:	83 c4 10             	add    $0x10,%esp
c1007a31:	8b 45 08             	mov    0x8(%ebp),%eax
c1007a34:	8b 40 10             	mov    0x10(%eax),%eax
c1007a37:	8b 40 30             	mov    0x30(%eax),%eax
c1007a3a:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007a3d:	b8 00 02 00 00       	mov    $0x200,%eax
c1007a42:	ba 00 00 00 00       	mov    $0x0,%edx
c1007a47:	f7 75 e0             	divl   -0x20(%ebp)
c1007a4a:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007a4d:	8b 45 14             	mov    0x14(%ebp),%eax
c1007a50:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007a53:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1007a5a:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1007a5e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007a65:	e9 d8 03 00 00       	jmp    c1007e42 <delete_dir_entry+0x489>
c1007a6a:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1007a6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007a71:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007a78:	85 c0                	test   %eax,%eax
c1007a7a:	75 09                	jne    c1007a85 <delete_dir_entry+0xcc>
c1007a7c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007a80:	e9 bd 03 00 00       	jmp    c1007e42 <delete_dir_entry+0x489>
c1007a85:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
c1007a89:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1007a8d:	88 45 ef             	mov    %al,-0x11(%ebp)
c1007a90:	83 ec 04             	sub    $0x4,%esp
c1007a93:	68 00 02 00 00       	push   $0x200
c1007a98:	6a 00                	push   $0x0
c1007a9a:	ff 75 14             	pushl  0x14(%ebp)
c1007a9d:	e8 08 86 ff ff       	call   c10000aa <memset>
c1007aa2:	83 c4 10             	add    $0x10,%esp
c1007aa5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007aa8:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007aaf:	83 ec 04             	sub    $0x4,%esp
c1007ab2:	6a 01                	push   $0x1
c1007ab4:	50                   	push   %eax
c1007ab5:	ff 75 14             	pushl  0x14(%ebp)
c1007ab8:	e8 81 d4 ff ff       	call   c1004f3e <ide_read>
c1007abd:	83 c4 10             	add    $0x10,%esp
c1007ac0:	e9 0d 01 00 00       	jmp    c1007bd2 <delete_dir_entry+0x219>
c1007ac5:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007ac9:	89 d0                	mov    %edx,%eax
c1007acb:	01 c0                	add    %eax,%eax
c1007acd:	01 d0                	add    %edx,%eax
c1007acf:	c1 e0 03             	shl    $0x3,%eax
c1007ad2:	89 c2                	mov    %eax,%edx
c1007ad4:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007ad7:	01 d0                	add    %edx,%eax
c1007ad9:	8b 40 14             	mov    0x14(%eax),%eax
c1007adc:	85 c0                	test   %eax,%eax
c1007ade:	0f 84 e4 00 00 00    	je     c1007bc8 <delete_dir_entry+0x20f>
c1007ae4:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007ae8:	89 d0                	mov    %edx,%eax
c1007aea:	01 c0                	add    %eax,%eax
c1007aec:	01 d0                	add    %edx,%eax
c1007aee:	c1 e0 03             	shl    $0x3,%eax
c1007af1:	89 c2                	mov    %eax,%edx
c1007af3:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007af6:	01 d0                	add    %edx,%eax
c1007af8:	83 ec 08             	sub    $0x8,%esp
c1007afb:	68 51 ae 00 c1       	push   $0xc100ae51
c1007b00:	50                   	push   %eax
c1007b01:	e8 7d 86 ff ff       	call   c1000183 <strcmp>
c1007b06:	83 c4 10             	add    $0x10,%esp
c1007b09:	85 c0                	test   %eax,%eax
c1007b0b:	75 09                	jne    c1007b16 <delete_dir_entry+0x15d>
c1007b0d:	c6 45 ed 01          	movb   $0x1,-0x13(%ebp)
c1007b11:	e9 b2 00 00 00       	jmp    c1007bc8 <delete_dir_entry+0x20f>
c1007b16:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007b1a:	89 d0                	mov    %edx,%eax
c1007b1c:	01 c0                	add    %eax,%eax
c1007b1e:	01 d0                	add    %edx,%eax
c1007b20:	c1 e0 03             	shl    $0x3,%eax
c1007b23:	89 c2                	mov    %eax,%edx
c1007b25:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007b28:	01 d0                	add    %edx,%eax
c1007b2a:	83 ec 08             	sub    $0x8,%esp
c1007b2d:	68 51 ae 00 c1       	push   $0xc100ae51
c1007b32:	50                   	push   %eax
c1007b33:	e8 4b 86 ff ff       	call   c1000183 <strcmp>
c1007b38:	83 c4 10             	add    $0x10,%esp
c1007b3b:	85 c0                	test   %eax,%eax
c1007b3d:	0f 84 85 00 00 00    	je     c1007bc8 <delete_dir_entry+0x20f>
c1007b43:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007b47:	89 d0                	mov    %edx,%eax
c1007b49:	01 c0                	add    %eax,%eax
c1007b4b:	01 d0                	add    %edx,%eax
c1007b4d:	c1 e0 03             	shl    $0x3,%eax
c1007b50:	89 c2                	mov    %eax,%edx
c1007b52:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007b55:	01 d0                	add    %edx,%eax
c1007b57:	83 ec 08             	sub    $0x8,%esp
c1007b5a:	68 53 ae 00 c1       	push   $0xc100ae53
c1007b5f:	50                   	push   %eax
c1007b60:	e8 1e 86 ff ff       	call   c1000183 <strcmp>
c1007b65:	83 c4 10             	add    $0x10,%esp
c1007b68:	85 c0                	test   %eax,%eax
c1007b6a:	74 5c                	je     c1007bc8 <delete_dir_entry+0x20f>
c1007b6c:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1007b70:	83 c0 01             	add    $0x1,%eax
c1007b73:	88 45 ee             	mov    %al,-0x12(%ebp)
c1007b76:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007b7a:	89 d0                	mov    %edx,%eax
c1007b7c:	01 c0                	add    %eax,%eax
c1007b7e:	01 d0                	add    %edx,%eax
c1007b80:	c1 e0 03             	shl    $0x3,%eax
c1007b83:	89 c2                	mov    %eax,%edx
c1007b85:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007b88:	01 d0                	add    %edx,%eax
c1007b8a:	8b 40 10             	mov    0x10(%eax),%eax
c1007b8d:	39 45 10             	cmp    %eax,0x10(%ebp)
c1007b90:	75 36                	jne    c1007bc8 <delete_dir_entry+0x20f>
c1007b92:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007b96:	74 19                	je     c1007bb1 <delete_dir_entry+0x1f8>
c1007b98:	68 56 ae 00 c1       	push   $0xc100ae56
c1007b9d:	68 58 af 00 c1       	push   $0xc100af58
c1007ba2:	68 10 01 00 00       	push   $0x110
c1007ba7:	68 a8 ad 00 c1       	push   $0xc100ada8
c1007bac:	e8 5c 87 ff ff       	call   c100030d <__PANIC>
c1007bb1:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007bb5:	89 d0                	mov    %edx,%eax
c1007bb7:	01 c0                	add    %eax,%eax
c1007bb9:	01 d0                	add    %edx,%eax
c1007bbb:	c1 e0 03             	shl    $0x3,%eax
c1007bbe:	89 c2                	mov    %eax,%edx
c1007bc0:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007bc3:	01 d0                	add    %edx,%eax
c1007bc5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007bc8:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007bcc:	83 c0 01             	add    $0x1,%eax
c1007bcf:	88 45 ef             	mov    %al,-0x11(%ebp)
c1007bd2:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007bd6:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1007bd9:	0f 87 e6 fe ff ff    	ja     c1007ac5 <delete_dir_entry+0x10c>
c1007bdf:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007be3:	75 09                	jne    c1007bee <delete_dir_entry+0x235>
c1007be5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007be9:	e9 54 02 00 00       	jmp    c1007e42 <delete_dir_entry+0x489>
c1007bee:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
c1007bf2:	75 19                	jne    c1007c0d <delete_dir_entry+0x254>
c1007bf4:	68 6e ae 00 c1       	push   $0xc100ae6e
c1007bf9:	68 58 af 00 c1       	push   $0xc100af58
c1007bfe:	68 20 01 00 00       	push   $0x120
c1007c03:	68 a8 ad 00 c1       	push   $0xc100ada8
c1007c08:	e8 00 87 ff ff       	call   c100030d <__PANIC>
c1007c0d:	80 7d ee 01          	cmpb   $0x1,-0x12(%ebp)
c1007c11:	0f 85 98 01 00 00    	jne    c1007daf <delete_dir_entry+0x3f6>
c1007c17:	80 7d ed 00          	cmpb   $0x0,-0x13(%ebp)
c1007c1b:	0f 85 8e 01 00 00    	jne    c1007daf <delete_dir_entry+0x3f6>
c1007c21:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007c24:	8b 94 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%edx
c1007c2b:	8b 45 08             	mov    0x8(%ebp),%eax
c1007c2e:	8b 40 10             	mov    0x10(%eax),%eax
c1007c31:	8b 40 28             	mov    0x28(%eax),%eax
c1007c34:	29 c2                	sub    %eax,%edx
c1007c36:	89 d0                	mov    %edx,%eax
c1007c38:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1007c3b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007c3e:	c1 e8 03             	shr    $0x3,%eax
c1007c41:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007c44:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007c47:	83 e0 07             	and    $0x7,%eax
c1007c4a:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1007c4d:	8b 45 08             	mov    0x8(%ebp),%eax
c1007c50:	8b 50 18             	mov    0x18(%eax),%edx
c1007c53:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007c56:	01 d0                	add    %edx,%eax
c1007c58:	0f b6 00             	movzbl (%eax),%eax
c1007c5b:	89 c2                	mov    %eax,%edx
c1007c5d:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007c60:	bb 01 00 00 00       	mov    $0x1,%ebx
c1007c65:	89 c1                	mov    %eax,%ecx
c1007c67:	d3 e3                	shl    %cl,%ebx
c1007c69:	89 d8                	mov    %ebx,%eax
c1007c6b:	f7 d0                	not    %eax
c1007c6d:	89 d1                	mov    %edx,%ecx
c1007c6f:	21 c1                	and    %eax,%ecx
c1007c71:	8b 45 08             	mov    0x8(%ebp),%eax
c1007c74:	8b 50 18             	mov    0x18(%eax),%edx
c1007c77:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007c7a:	01 d0                	add    %edx,%eax
c1007c7c:	89 ca                	mov    %ecx,%edx
c1007c7e:	88 10                	mov    %dl,(%eax)
c1007c80:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007c85:	83 ec 04             	sub    $0x4,%esp
c1007c88:	6a 01                	push   $0x1
c1007c8a:	ff 75 d4             	pushl  -0x2c(%ebp)
c1007c8d:	50                   	push   %eax
c1007c8e:	e8 c9 06 00 00       	call   c100835c <bitmap_sync>
c1007c93:	83 c4 10             	add    $0x10,%esp
c1007c96:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1007c9a:	77 15                	ja     c1007cb1 <delete_dir_entry+0x2f8>
c1007c9c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007c9f:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007ca2:	83 c2 04             	add    $0x4,%edx
c1007ca5:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1007cac:	e9 2c 01 00 00       	jmp    c1007ddd <delete_dir_entry+0x424>
c1007cb1:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1007cb8:	c7 45 c8 0c 00 00 00 	movl   $0xc,-0x38(%ebp)
c1007cbf:	eb 12                	jmp    c1007cd3 <delete_dir_entry+0x31a>
c1007cc1:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1007cc4:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007ccb:	85 c0                	test   %eax,%eax
c1007ccd:	74 04                	je     c1007cd3 <delete_dir_entry+0x31a>
c1007ccf:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1007cd3:	81 7d c8 8b 00 00 00 	cmpl   $0x8b,-0x38(%ebp)
c1007cda:	76 e5                	jbe    c1007cc1 <delete_dir_entry+0x308>
c1007cdc:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1007ce0:	75 19                	jne    c1007cfb <delete_dir_entry+0x342>
c1007ce2:	68 81 ae 00 c1       	push   $0xc100ae81
c1007ce7:	68 58 af 00 c1       	push   $0xc100af58
c1007cec:	68 36 01 00 00       	push   $0x136
c1007cf1:	68 a8 ad 00 c1       	push   $0xc100ada8
c1007cf6:	e8 12 86 ff ff       	call   c100030d <__PANIC>
c1007cfb:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1007cff:	76 31                	jbe    c1007d32 <delete_dir_entry+0x379>
c1007d01:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007d04:	c7 84 85 98 fd ff ff 	movl   $0x0,-0x268(%ebp,%eax,4)
c1007d0b:	00 00 00 00 
c1007d0f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007d12:	8b 50 40             	mov    0x40(%eax),%edx
c1007d15:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1007d1b:	83 c0 30             	add    $0x30,%eax
c1007d1e:	83 ec 04             	sub    $0x4,%esp
c1007d21:	6a 01                	push   $0x1
c1007d23:	52                   	push   %edx
c1007d24:	50                   	push   %eax
c1007d25:	e8 51 d2 ff ff       	call   c1004f7b <ide_write>
c1007d2a:	83 c4 10             	add    $0x10,%esp
c1007d2d:	e9 ab 00 00 00       	jmp    c1007ddd <delete_dir_entry+0x424>
c1007d32:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007d35:	8b 50 40             	mov    0x40(%eax),%edx
c1007d38:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d3b:	8b 40 10             	mov    0x10(%eax),%eax
c1007d3e:	8b 40 28             	mov    0x28(%eax),%eax
c1007d41:	29 c2                	sub    %eax,%edx
c1007d43:	89 d0                	mov    %edx,%eax
c1007d45:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1007d48:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007d4b:	c1 e8 03             	shr    $0x3,%eax
c1007d4e:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007d51:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007d54:	83 e0 07             	and    $0x7,%eax
c1007d57:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1007d5a:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d5d:	8b 50 18             	mov    0x18(%eax),%edx
c1007d60:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007d63:	01 d0                	add    %edx,%eax
c1007d65:	0f b6 00             	movzbl (%eax),%eax
c1007d68:	89 c2                	mov    %eax,%edx
c1007d6a:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007d6d:	bb 01 00 00 00       	mov    $0x1,%ebx
c1007d72:	89 c1                	mov    %eax,%ecx
c1007d74:	d3 e3                	shl    %cl,%ebx
c1007d76:	89 d8                	mov    %ebx,%eax
c1007d78:	f7 d0                	not    %eax
c1007d7a:	89 d1                	mov    %edx,%ecx
c1007d7c:	21 c1                	and    %eax,%ecx
c1007d7e:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d81:	8b 50 18             	mov    0x18(%eax),%edx
c1007d84:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007d87:	01 d0                	add    %edx,%eax
c1007d89:	89 ca                	mov    %ecx,%edx
c1007d8b:	88 10                	mov    %dl,(%eax)
c1007d8d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007d92:	83 ec 04             	sub    $0x4,%esp
c1007d95:	6a 01                	push   $0x1
c1007d97:	ff 75 d4             	pushl  -0x2c(%ebp)
c1007d9a:	50                   	push   %eax
c1007d9b:	e8 bc 05 00 00       	call   c100835c <bitmap_sync>
c1007da0:	83 c4 10             	add    $0x10,%esp
c1007da3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007da6:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1007dad:	eb 2e                	jmp    c1007ddd <delete_dir_entry+0x424>
c1007daf:	83 ec 04             	sub    $0x4,%esp
c1007db2:	ff 75 e0             	pushl  -0x20(%ebp)
c1007db5:	6a 00                	push   $0x0
c1007db7:	ff 75 f0             	pushl  -0x10(%ebp)
c1007dba:	e8 eb 82 ff ff       	call   c10000aa <memset>
c1007dbf:	83 c4 10             	add    $0x10,%esp
c1007dc2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007dc5:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007dcc:	83 ec 04             	sub    $0x4,%esp
c1007dcf:	6a 01                	push   $0x1
c1007dd1:	50                   	push   %eax
c1007dd2:	ff 75 14             	pushl  0x14(%ebp)
c1007dd5:	e8 a1 d1 ff ff       	call   c1004f7b <ide_write>
c1007dda:	83 c4 10             	add    $0x10,%esp
c1007ddd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007de0:	8b 40 04             	mov    0x4(%eax),%eax
c1007de3:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c1007de6:	76 19                	jbe    c1007e01 <delete_dir_entry+0x448>
c1007de8:	68 98 ae 00 c1       	push   $0xc100ae98
c1007ded:	68 58 af 00 c1       	push   $0xc100af58
c1007df2:	68 4d 01 00 00       	push   $0x14d
c1007df7:	68 a8 ad 00 c1       	push   $0xc100ada8
c1007dfc:	e8 0c 85 ff ff       	call   c100030d <__PANIC>
c1007e01:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007e04:	8b 40 04             	mov    0x4(%eax),%eax
c1007e07:	2b 45 e0             	sub    -0x20(%ebp),%eax
c1007e0a:	89 c2                	mov    %eax,%edx
c1007e0c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007e0f:	89 50 04             	mov    %edx,0x4(%eax)
c1007e12:	83 ec 04             	sub    $0x4,%esp
c1007e15:	68 00 04 00 00       	push   $0x400
c1007e1a:	6a 00                	push   $0x0
c1007e1c:	ff 75 14             	pushl  0x14(%ebp)
c1007e1f:	e8 86 82 ff ff       	call   c10000aa <memset>
c1007e24:	83 c4 10             	add    $0x10,%esp
c1007e27:	83 ec 04             	sub    $0x4,%esp
c1007e2a:	ff 75 14             	pushl  0x14(%ebp)
c1007e2d:	ff 75 e4             	pushl  -0x1c(%ebp)
c1007e30:	ff 75 08             	pushl  0x8(%ebp)
c1007e33:	e8 d1 15 00 00       	call   c1009409 <inode_sync>
c1007e38:	83 c4 10             	add    $0x10,%esp
c1007e3b:	b8 01 00 00 00       	mov    $0x1,%eax
c1007e40:	eb 12                	jmp    c1007e54 <delete_dir_entry+0x49b>
c1007e42:	81 7d f4 8b 00 00 00 	cmpl   $0x8b,-0xc(%ebp)
c1007e49:	0f 86 1b fc ff ff    	jbe    c1007a6a <delete_dir_entry+0xb1>
c1007e4f:	b8 00 00 00 00       	mov    $0x0,%eax
c1007e54:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1007e57:	5b                   	pop    %ebx
c1007e58:	5f                   	pop    %edi
c1007e59:	5d                   	pop    %ebp
c1007e5a:	c3                   	ret    

c1007e5b <dir_read>:
c1007e5b:	55                   	push   %ebp
c1007e5c:	89 e5                	mov    %esp,%ebp
c1007e5e:	57                   	push   %edi
c1007e5f:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1007e65:	8b 45 08             	mov    0x8(%ebp),%eax
c1007e68:	83 c0 08             	add    $0x8,%eax
c1007e6b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007e6e:	8b 45 08             	mov    0x8(%ebp),%eax
c1007e71:	8b 00                	mov    (%eax),%eax
c1007e73:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007e76:	8d 95 a8 fd ff ff    	lea    -0x258(%ebp),%edx
c1007e7c:	b8 00 00 00 00       	mov    $0x0,%eax
c1007e81:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007e86:	89 d7                	mov    %edx,%edi
c1007e88:	f3 ab                	rep stos %eax,%es:(%edi)
c1007e8a:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
c1007e91:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1007e98:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007e9f:	eb 1a                	jmp    c1007ebb <dir_read+0x60>
c1007ea1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007ea4:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007ea7:	83 c2 04             	add    $0x4,%edx
c1007eaa:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1007ead:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007eb0:	89 94 85 a8 fd ff ff 	mov    %edx,-0x258(%ebp,%eax,4)
c1007eb7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1007ebb:	83 7d f0 0b          	cmpl   $0xb,-0x10(%ebp)
c1007ebf:	76 e0                	jbe    c1007ea1 <dir_read+0x46>
c1007ec1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007ec4:	8b 40 40             	mov    0x40(%eax),%eax
c1007ec7:	85 c0                	test   %eax,%eax
c1007ec9:	74 25                	je     c1007ef0 <dir_read+0x95>
c1007ecb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007ece:	8b 50 40             	mov    0x40(%eax),%edx
c1007ed1:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
c1007ed7:	83 c0 30             	add    $0x30,%eax
c1007eda:	83 ec 04             	sub    $0x4,%esp
c1007edd:	6a 01                	push   $0x1
c1007edf:	52                   	push   %edx
c1007ee0:	50                   	push   %eax
c1007ee1:	e8 58 d0 ff ff       	call   c1004f3e <ide_read>
c1007ee6:	83 c4 10             	add    $0x10,%esp
c1007ee9:	c7 45 f4 8c 00 00 00 	movl   $0x8c,-0xc(%ebp)
c1007ef0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1007ef7:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1007efe:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007f03:	8b 40 10             	mov    0x10(%eax),%eax
c1007f06:	8b 40 30             	mov    0x30(%eax),%eax
c1007f09:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007f0c:	b8 00 02 00 00       	mov    $0x200,%eax
c1007f11:	ba 00 00 00 00       	mov    $0x0,%edx
c1007f16:	f7 75 dc             	divl   -0x24(%ebp)
c1007f19:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007f1c:	e9 f9 00 00 00       	jmp    c100801a <dir_read+0x1bf>
c1007f21:	8b 45 08             	mov    0x8(%ebp),%eax
c1007f24:	8b 50 04             	mov    0x4(%eax),%edx
c1007f27:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007f2a:	8b 40 04             	mov    0x4(%eax),%eax
c1007f2d:	39 c2                	cmp    %eax,%edx
c1007f2f:	72 0a                	jb     c1007f3b <dir_read+0xe0>
c1007f31:	b8 00 00 00 00       	mov    $0x0,%eax
c1007f36:	e9 f0 00 00 00       	jmp    c100802b <dir_read+0x1d0>
c1007f3b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007f3e:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1007f45:	85 c0                	test   %eax,%eax
c1007f47:	75 09                	jne    c1007f52 <dir_read+0xf7>
c1007f49:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1007f4d:	e9 c8 00 00 00       	jmp    c100801a <dir_read+0x1bf>
c1007f52:	83 ec 04             	sub    $0x4,%esp
c1007f55:	68 00 02 00 00       	push   $0x200
c1007f5a:	6a 00                	push   $0x0
c1007f5c:	ff 75 e4             	pushl  -0x1c(%ebp)
c1007f5f:	e8 46 81 ff ff       	call   c10000aa <memset>
c1007f64:	83 c4 10             	add    $0x10,%esp
c1007f67:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007f6a:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1007f71:	83 ec 04             	sub    $0x4,%esp
c1007f74:	6a 01                	push   $0x1
c1007f76:	50                   	push   %eax
c1007f77:	ff 75 e4             	pushl  -0x1c(%ebp)
c1007f7a:	e8 bf cf ff ff       	call   c1004f3e <ide_read>
c1007f7f:	83 c4 10             	add    $0x10,%esp
c1007f82:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007f89:	eb 7f                	jmp    c100800a <dir_read+0x1af>
c1007f8b:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1007f8e:	89 d0                	mov    %edx,%eax
c1007f90:	01 c0                	add    %eax,%eax
c1007f92:	01 d0                	add    %edx,%eax
c1007f94:	c1 e0 03             	shl    $0x3,%eax
c1007f97:	89 c2                	mov    %eax,%edx
c1007f99:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007f9c:	01 d0                	add    %edx,%eax
c1007f9e:	8b 40 14             	mov    0x14(%eax),%eax
c1007fa1:	85 c0                	test   %eax,%eax
c1007fa3:	74 61                	je     c1008006 <dir_read+0x1ab>
c1007fa5:	8b 45 08             	mov    0x8(%ebp),%eax
c1007fa8:	8b 40 04             	mov    0x4(%eax),%eax
c1007fab:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c1007fae:	73 0c                	jae    c1007fbc <dir_read+0x161>
c1007fb0:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1007fb3:	01 45 e8             	add    %eax,-0x18(%ebp)
c1007fb6:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1007fba:	eb 4e                	jmp    c100800a <dir_read+0x1af>
c1007fbc:	8b 45 08             	mov    0x8(%ebp),%eax
c1007fbf:	8b 40 04             	mov    0x4(%eax),%eax
c1007fc2:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c1007fc5:	74 19                	je     c1007fe0 <dir_read+0x185>
c1007fc7:	68 bc ae 00 c1       	push   $0xc100aebc
c1007fcc:	68 6c af 00 c1       	push   $0xc100af6c
c1007fd1:	68 7f 01 00 00       	push   $0x17f
c1007fd6:	68 a8 ad 00 c1       	push   $0xc100ada8
c1007fdb:	e8 2d 83 ff ff       	call   c100030d <__PANIC>
c1007fe0:	8b 45 08             	mov    0x8(%ebp),%eax
c1007fe3:	8b 50 04             	mov    0x4(%eax),%edx
c1007fe6:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1007fe9:	01 c2                	add    %eax,%edx
c1007feb:	8b 45 08             	mov    0x8(%ebp),%eax
c1007fee:	89 50 04             	mov    %edx,0x4(%eax)
c1007ff1:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1007ff4:	89 d0                	mov    %edx,%eax
c1007ff6:	01 c0                	add    %eax,%eax
c1007ff8:	01 d0                	add    %edx,%eax
c1007ffa:	c1 e0 03             	shl    $0x3,%eax
c1007ffd:	89 c2                	mov    %eax,%edx
c1007fff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008002:	01 d0                	add    %edx,%eax
c1008004:	eb 25                	jmp    c100802b <dir_read+0x1d0>
c1008006:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c100800a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100800d:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c1008010:	0f 82 75 ff ff ff    	jb     c1007f8b <dir_read+0x130>
c1008016:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100801a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100801d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1008020:	0f 82 fb fe ff ff    	jb     c1007f21 <dir_read+0xc6>
c1008026:	b8 00 00 00 00       	mov    $0x0,%eax
c100802b:	8b 7d fc             	mov    -0x4(%ebp),%edi
c100802e:	c9                   	leave  
c100802f:	c3                   	ret    

c1008030 <dir_is_empty>:
c1008030:	55                   	push   %ebp
c1008031:	89 e5                	mov    %esp,%ebp
c1008033:	83 ec 10             	sub    $0x10,%esp
c1008036:	8b 45 08             	mov    0x8(%ebp),%eax
c1008039:	8b 00                	mov    (%eax),%eax
c100803b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100803e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1008041:	8b 50 04             	mov    0x4(%eax),%edx
c1008044:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008049:	8b 40 10             	mov    0x10(%eax),%eax
c100804c:	8b 40 30             	mov    0x30(%eax),%eax
c100804f:	01 c0                	add    %eax,%eax
c1008051:	39 c2                	cmp    %eax,%edx
c1008053:	0f 94 c0             	sete   %al
c1008056:	c9                   	leave  
c1008057:	c3                   	ret    

c1008058 <dir_remove>:
c1008058:	55                   	push   %ebp
c1008059:	89 e5                	mov    %esp,%ebp
c100805b:	83 ec 18             	sub    $0x18,%esp
c100805e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008061:	8b 00                	mov    (%eax),%eax
c1008063:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008066:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c100806d:	eb 2d                	jmp    c100809c <dir_remove+0x44>
c100806f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008072:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008075:	83 c2 04             	add    $0x4,%edx
c1008078:	8b 04 90             	mov    (%eax,%edx,4),%eax
c100807b:	85 c0                	test   %eax,%eax
c100807d:	74 19                	je     c1008098 <dir_remove+0x40>
c100807f:	68 e0 ae 00 c1       	push   $0xc100aee0
c1008084:	68 78 af 00 c1       	push   $0xc100af78
c1008089:	68 96 01 00 00       	push   $0x196
c100808e:	68 a8 ad 00 c1       	push   $0xc100ada8
c1008093:	e8 75 82 ff ff       	call   c100030d <__PANIC>
c1008098:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100809c:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
c10080a0:	7e cd                	jle    c100806f <dir_remove+0x17>
c10080a2:	83 ec 08             	sub    $0x8,%esp
c10080a5:	6a 02                	push   $0x2
c10080a7:	68 00 04 00 00       	push   $0x400
c10080ac:	e8 df a8 ff ff       	call   c1002990 <vmm_malloc>
c10080b1:	83 c4 10             	add    $0x10,%esp
c10080b4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10080b7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10080bb:	75 17                	jne    c10080d4 <dir_remove+0x7c>
c10080bd:	83 ec 0c             	sub    $0xc,%esp
c10080c0:	68 0c af 00 c1       	push   $0xc100af0c
c10080c5:	e8 cc c5 ff ff       	call   c1004696 <printk>
c10080ca:	83 c4 10             	add    $0x10,%esp
c10080cd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10080d2:	eb 4a                	jmp    c100811e <dir_remove+0xc6>
c10080d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10080d7:	8b 10                	mov    (%eax),%edx
c10080d9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10080de:	ff 75 ec             	pushl  -0x14(%ebp)
c10080e1:	52                   	push   %edx
c10080e2:	ff 75 08             	pushl  0x8(%ebp)
c10080e5:	50                   	push   %eax
c10080e6:	e8 ce f8 ff ff       	call   c10079b9 <delete_dir_entry>
c10080eb:	83 c4 10             	add    $0x10,%esp
c10080ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10080f1:	8b 10                	mov    (%eax),%edx
c10080f3:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10080f8:	83 ec 08             	sub    $0x8,%esp
c10080fb:	52                   	push   %edx
c10080fc:	50                   	push   %eax
c10080fd:	e8 14 16 00 00       	call   c1009716 <inode_release>
c1008102:	83 c4 10             	add    $0x10,%esp
c1008105:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008108:	83 ec 08             	sub    $0x8,%esp
c100810b:	68 00 04 00 00       	push   $0x400
c1008110:	50                   	push   %eax
c1008111:	e8 9f a9 ff ff       	call   c1002ab5 <vmm_free>
c1008116:	83 c4 10             	add    $0x10,%esp
c1008119:	b8 00 00 00 00       	mov    $0x0,%eax
c100811e:	c9                   	leave  
c100811f:	c3                   	ret    

c1008120 <hash32>:
c1008120:	55                   	push   %ebp
c1008121:	89 e5                	mov    %esp,%ebp
c1008123:	83 ec 10             	sub    $0x10,%esp
c1008126:	8b 45 08             	mov    0x8(%ebp),%eax
c1008129:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100812f:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1008132:	b8 20 00 00 00       	mov    $0x20,%eax
c1008137:	2b 45 0c             	sub    0xc(%ebp),%eax
c100813a:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100813d:	89 c1                	mov    %eax,%ecx
c100813f:	d3 ea                	shr    %cl,%edx
c1008141:	89 d0                	mov    %edx,%eax
c1008143:	c9                   	leave  
c1008144:	c3                   	ret    

c1008145 <get_free_slot_in_global>:
c1008145:	55                   	push   %ebp
c1008146:	89 e5                	mov    %esp,%ebp
c1008148:	83 ec 10             	sub    $0x10,%esp
c100814b:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
c1008152:	eb 1b                	jmp    c100816f <get_free_slot_in_global+0x2a>
c1008154:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1008157:	89 d0                	mov    %edx,%eax
c1008159:	01 c0                	add    %eax,%eax
c100815b:	01 d0                	add    %edx,%eax
c100815d:	c1 e0 02             	shl    $0x2,%eax
c1008160:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008165:	8b 00                	mov    (%eax),%eax
c1008167:	85 c0                	test   %eax,%eax
c1008169:	74 0c                	je     c1008177 <get_free_slot_in_global+0x32>
c100816b:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100816f:	83 7d fc 1f          	cmpl   $0x1f,-0x4(%ebp)
c1008173:	76 df                	jbe    c1008154 <get_free_slot_in_global+0xf>
c1008175:	eb 01                	jmp    c1008178 <get_free_slot_in_global+0x33>
c1008177:	90                   	nop
c1008178:	83 7d fc 20          	cmpl   $0x20,-0x4(%ebp)
c100817c:	75 07                	jne    c1008185 <get_free_slot_in_global+0x40>
c100817e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008183:	eb 03                	jmp    c1008188 <get_free_slot_in_global+0x43>
c1008185:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1008188:	c9                   	leave  
c1008189:	c3                   	ret    

c100818a <task_fd_install>:
c100818a:	55                   	push   %ebp
c100818b:	89 e5                	mov    %esp,%ebp
c100818d:	83 ec 10             	sub    $0x10,%esp
c1008190:	c6 45 ff 03          	movb   $0x3,-0x1(%ebp)
c1008194:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1008199:	0f be 55 ff          	movsbl -0x1(%ebp),%edx
c100819d:	83 c2 18             	add    $0x18,%edx
c10081a0:	8b 04 90             	mov    (%eax,%edx,4),%eax
c10081a3:	83 f8 ff             	cmp    $0xffffffff,%eax
c10081a6:	75 14                	jne    c10081bc <task_fd_install+0x32>
c10081a8:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10081ad:	0f be 4d ff          	movsbl -0x1(%ebp),%ecx
c10081b1:	8b 55 08             	mov    0x8(%ebp),%edx
c10081b4:	83 c1 18             	add    $0x18,%ecx
c10081b7:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c10081ba:	eb 0c                	jmp    c10081c8 <task_fd_install+0x3e>
c10081bc:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
c10081c0:	83 c0 01             	add    $0x1,%eax
c10081c3:	88 45 ff             	mov    %al,-0x1(%ebp)
c10081c6:	eb cc                	jmp    c1008194 <task_fd_install+0xa>
c10081c8:	0f be 45 ff          	movsbl -0x1(%ebp),%eax
c10081cc:	c9                   	leave  
c10081cd:	c3                   	ret    

c10081ce <inode_bitmap_alloc>:
c10081ce:	55                   	push   %ebp
c10081cf:	89 e5                	mov    %esp,%ebp
c10081d1:	53                   	push   %ebx
c10081d2:	83 ec 10             	sub    $0x10,%esp
c10081d5:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c10081dc:	eb 04                	jmp    c10081e2 <inode_bitmap_alloc+0x14>
c10081de:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10081e2:	8b 45 08             	mov    0x8(%ebp),%eax
c10081e5:	8b 50 20             	mov    0x20(%eax),%edx
c10081e8:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10081eb:	01 d0                	add    %edx,%eax
c10081ed:	0f b6 00             	movzbl (%eax),%eax
c10081f0:	3c ff                	cmp    $0xff,%al
c10081f2:	75 0b                	jne    c10081ff <inode_bitmap_alloc+0x31>
c10081f4:	8b 45 08             	mov    0x8(%ebp),%eax
c10081f7:	8b 40 1c             	mov    0x1c(%eax),%eax
c10081fa:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10081fd:	72 df                	jb     c10081de <inode_bitmap_alloc+0x10>
c10081ff:	8b 45 08             	mov    0x8(%ebp),%eax
c1008202:	8b 40 1c             	mov    0x1c(%eax),%eax
c1008205:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1008208:	75 07                	jne    c1008211 <inode_bitmap_alloc+0x43>
c100820a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100820f:	eb 77                	jmp    c1008288 <inode_bitmap_alloc+0xba>
c1008211:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008218:	eb 04                	jmp    c100821e <inode_bitmap_alloc+0x50>
c100821a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100821e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008221:	ba 01 00 00 00       	mov    $0x1,%edx
c1008226:	89 c1                	mov    %eax,%ecx
c1008228:	d3 e2                	shl    %cl,%edx
c100822a:	89 d0                	mov    %edx,%eax
c100822c:	89 c1                	mov    %eax,%ecx
c100822e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008231:	8b 50 20             	mov    0x20(%eax),%edx
c1008234:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008237:	01 d0                	add    %edx,%eax
c1008239:	0f b6 00             	movzbl (%eax),%eax
c100823c:	21 c8                	and    %ecx,%eax
c100823e:	84 c0                	test   %al,%al
c1008240:	75 d8                	jne    c100821a <inode_bitmap_alloc+0x4c>
c1008242:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008245:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c100824c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100824f:	01 d0                	add    %edx,%eax
c1008251:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008254:	8b 45 08             	mov    0x8(%ebp),%eax
c1008257:	8b 50 20             	mov    0x20(%eax),%edx
c100825a:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100825d:	01 d0                	add    %edx,%eax
c100825f:	0f b6 00             	movzbl (%eax),%eax
c1008262:	89 c3                	mov    %eax,%ebx
c1008264:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008267:	ba 01 00 00 00       	mov    $0x1,%edx
c100826c:	89 c1                	mov    %eax,%ecx
c100826e:	d3 e2                	shl    %cl,%edx
c1008270:	89 d0                	mov    %edx,%eax
c1008272:	09 c3                	or     %eax,%ebx
c1008274:	89 d9                	mov    %ebx,%ecx
c1008276:	8b 45 08             	mov    0x8(%ebp),%eax
c1008279:	8b 50 20             	mov    0x20(%eax),%edx
c100827c:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100827f:	01 d0                	add    %edx,%eax
c1008281:	89 ca                	mov    %ecx,%edx
c1008283:	88 10                	mov    %dl,(%eax)
c1008285:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008288:	83 c4 10             	add    $0x10,%esp
c100828b:	5b                   	pop    %ebx
c100828c:	5d                   	pop    %ebp
c100828d:	c3                   	ret    

c100828e <block_bitmap_alloc>:
c100828e:	55                   	push   %ebp
c100828f:	89 e5                	mov    %esp,%ebp
c1008291:	53                   	push   %ebx
c1008292:	83 ec 10             	sub    $0x10,%esp
c1008295:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c100829c:	eb 04                	jmp    c10082a2 <block_bitmap_alloc+0x14>
c100829e:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10082a2:	8b 45 08             	mov    0x8(%ebp),%eax
c10082a5:	8b 50 18             	mov    0x18(%eax),%edx
c10082a8:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10082ab:	01 d0                	add    %edx,%eax
c10082ad:	0f b6 00             	movzbl (%eax),%eax
c10082b0:	3c ff                	cmp    $0xff,%al
c10082b2:	75 0b                	jne    c10082bf <block_bitmap_alloc+0x31>
c10082b4:	8b 45 08             	mov    0x8(%ebp),%eax
c10082b7:	8b 40 14             	mov    0x14(%eax),%eax
c10082ba:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10082bd:	72 df                	jb     c100829e <block_bitmap_alloc+0x10>
c10082bf:	8b 45 08             	mov    0x8(%ebp),%eax
c10082c2:	8b 40 14             	mov    0x14(%eax),%eax
c10082c5:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10082c8:	75 0a                	jne    c10082d4 <block_bitmap_alloc+0x46>
c10082ca:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10082cf:	e9 82 00 00 00       	jmp    c1008356 <block_bitmap_alloc+0xc8>
c10082d4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10082db:	eb 04                	jmp    c10082e1 <block_bitmap_alloc+0x53>
c10082dd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10082e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10082e4:	ba 01 00 00 00       	mov    $0x1,%edx
c10082e9:	89 c1                	mov    %eax,%ecx
c10082eb:	d3 e2                	shl    %cl,%edx
c10082ed:	89 d0                	mov    %edx,%eax
c10082ef:	89 c1                	mov    %eax,%ecx
c10082f1:	8b 45 08             	mov    0x8(%ebp),%eax
c10082f4:	8b 50 18             	mov    0x18(%eax),%edx
c10082f7:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10082fa:	01 d0                	add    %edx,%eax
c10082fc:	0f b6 00             	movzbl (%eax),%eax
c10082ff:	21 c8                	and    %ecx,%eax
c1008301:	84 c0                	test   %al,%al
c1008303:	75 d8                	jne    c10082dd <block_bitmap_alloc+0x4f>
c1008305:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008308:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c100830f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008312:	01 d0                	add    %edx,%eax
c1008314:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008317:	8b 45 08             	mov    0x8(%ebp),%eax
c100831a:	8b 50 18             	mov    0x18(%eax),%edx
c100831d:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008320:	01 d0                	add    %edx,%eax
c1008322:	0f b6 00             	movzbl (%eax),%eax
c1008325:	89 c3                	mov    %eax,%ebx
c1008327:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100832a:	ba 01 00 00 00       	mov    $0x1,%edx
c100832f:	89 c1                	mov    %eax,%ecx
c1008331:	d3 e2                	shl    %cl,%edx
c1008333:	89 d0                	mov    %edx,%eax
c1008335:	09 c3                	or     %eax,%ebx
c1008337:	89 d9                	mov    %ebx,%ecx
c1008339:	8b 45 08             	mov    0x8(%ebp),%eax
c100833c:	8b 50 18             	mov    0x18(%eax),%edx
c100833f:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008342:	01 d0                	add    %edx,%eax
c1008344:	89 ca                	mov    %ecx,%edx
c1008346:	88 10                	mov    %dl,(%eax)
c1008348:	8b 45 08             	mov    0x8(%ebp),%eax
c100834b:	8b 40 10             	mov    0x10(%eax),%eax
c100834e:	8b 50 28             	mov    0x28(%eax),%edx
c1008351:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008354:	01 d0                	add    %edx,%eax
c1008356:	83 c4 10             	add    $0x10,%esp
c1008359:	5b                   	pop    %ebx
c100835a:	5d                   	pop    %ebp
c100835b:	c3                   	ret    

c100835c <bitmap_sync>:
c100835c:	55                   	push   %ebp
c100835d:	89 e5                	mov    %esp,%ebp
c100835f:	83 ec 28             	sub    $0x28,%esp
c1008362:	8b 45 10             	mov    0x10(%ebp),%eax
c1008365:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1008368:	8b 45 0c             	mov    0xc(%ebp),%eax
c100836b:	c1 e8 0c             	shr    $0xc,%eax
c100836e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008371:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008374:	c1 e0 09             	shl    $0x9,%eax
c1008377:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100837a:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100837e:	85 c0                	test   %eax,%eax
c1008380:	74 07                	je     c1008389 <bitmap_sync+0x2d>
c1008382:	83 f8 01             	cmp    $0x1,%eax
c1008385:	74 23                	je     c10083aa <bitmap_sync+0x4e>
c1008387:	eb 41                	jmp    c10083ca <bitmap_sync+0x6e>
c1008389:	8b 45 08             	mov    0x8(%ebp),%eax
c100838c:	8b 40 10             	mov    0x10(%eax),%eax
c100838f:	8b 50 18             	mov    0x18(%eax),%edx
c1008392:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008395:	01 d0                	add    %edx,%eax
c1008397:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100839a:	8b 45 08             	mov    0x8(%ebp),%eax
c100839d:	8b 50 20             	mov    0x20(%eax),%edx
c10083a0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10083a3:	01 d0                	add    %edx,%eax
c10083a5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10083a8:	eb 20                	jmp    c10083ca <bitmap_sync+0x6e>
c10083aa:	8b 45 08             	mov    0x8(%ebp),%eax
c10083ad:	8b 40 10             	mov    0x10(%eax),%eax
c10083b0:	8b 50 10             	mov    0x10(%eax),%edx
c10083b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10083b6:	01 d0                	add    %edx,%eax
c10083b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10083bb:	8b 45 08             	mov    0x8(%ebp),%eax
c10083be:	8b 50 18             	mov    0x18(%eax),%edx
c10083c1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10083c4:	01 d0                	add    %edx,%eax
c10083c6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10083c9:	90                   	nop
c10083ca:	83 ec 04             	sub    $0x4,%esp
c10083cd:	6a 01                	push   $0x1
c10083cf:	ff 75 f4             	pushl  -0xc(%ebp)
c10083d2:	ff 75 f0             	pushl  -0x10(%ebp)
c10083d5:	e8 a1 cb ff ff       	call   c1004f7b <ide_write>
c10083da:	83 c4 10             	add    $0x10,%esp
c10083dd:	90                   	nop
c10083de:	c9                   	leave  
c10083df:	c3                   	ret    

c10083e0 <file_create>:
c10083e0:	55                   	push   %ebp
c10083e1:	89 e5                	mov    %esp,%ebp
c10083e3:	83 ec 58             	sub    $0x58,%esp
c10083e6:	8b 45 10             	mov    0x10(%ebp),%eax
c10083e9:	88 45 b4             	mov    %al,-0x4c(%ebp)
c10083ec:	83 ec 08             	sub    $0x8,%esp
c10083ef:	6a 02                	push   $0x2
c10083f1:	68 00 04 00 00       	push   $0x400
c10083f6:	e8 95 a5 ff ff       	call   c1002990 <vmm_malloc>
c10083fb:	83 c4 10             	add    $0x10,%esp
c10083fe:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008401:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1008405:	75 1a                	jne    c1008421 <file_create+0x41>
c1008407:	83 ec 0c             	sub    $0xc,%esp
c100840a:	68 84 af 00 c1       	push   $0xc100af84
c100840f:	e8 82 c2 ff ff       	call   c1004696 <printk>
c1008414:	83 c4 10             	add    $0x10,%esp
c1008417:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100841c:	e9 9f 02 00 00       	jmp    c10086c0 <file_create+0x2e0>
c1008421:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1008425:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100842a:	83 ec 0c             	sub    $0xc,%esp
c100842d:	50                   	push   %eax
c100842e:	e8 9b fd ff ff       	call   c10081ce <inode_bitmap_alloc>
c1008433:	83 c4 10             	add    $0x10,%esp
c1008436:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008439:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c100843d:	75 1a                	jne    c1008459 <file_create+0x79>
c100843f:	83 ec 0c             	sub    $0xc,%esp
c1008442:	68 b4 af 00 c1       	push   $0xc100afb4
c1008447:	e8 4a c2 ff ff       	call   c1004696 <printk>
c100844c:	83 c4 10             	add    $0x10,%esp
c100844f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008454:	e9 67 02 00 00       	jmp    c10086c0 <file_create+0x2e0>
c1008459:	83 ec 08             	sub    $0x8,%esp
c100845c:	6a 02                	push   $0x2
c100845e:	6a 44                	push   $0x44
c1008460:	e8 2b a5 ff ff       	call   c1002990 <vmm_malloc>
c1008465:	83 c4 10             	add    $0x10,%esp
c1008468:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100846b:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c100846f:	75 19                	jne    c100848a <file_create+0xaa>
c1008471:	83 ec 0c             	sub    $0xc,%esp
c1008474:	68 dc af 00 c1       	push   $0xc100afdc
c1008479:	e8 18 c2 ff ff       	call   c1004696 <printk>
c100847e:	83 c4 10             	add    $0x10,%esp
c1008481:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1008485:	e9 88 01 00 00       	jmp    c1008612 <file_create+0x232>
c100848a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100848d:	83 ec 08             	sub    $0x8,%esp
c1008490:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008493:	50                   	push   %eax
c1008494:	e8 42 15 00 00       	call   c10099db <inode_init>
c1008499:	83 c4 10             	add    $0x10,%esp
c100849c:	e8 a4 fc ff ff       	call   c1008145 <get_free_slot_in_global>
c10084a1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10084a4:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10084a8:	75 19                	jne    c10084c3 <file_create+0xe3>
c10084aa:	83 ec 0c             	sub    $0xc,%esp
c10084ad:	68 07 b0 00 c1       	push   $0xc100b007
c10084b2:	e8 df c1 ff ff       	call   c1004696 <printk>
c10084b7:	83 c4 10             	add    $0x10,%esp
c10084ba:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10084be:	e9 4f 01 00 00       	jmp    c1008612 <file_create+0x232>
c10084c3:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10084c6:	89 d0                	mov    %edx,%eax
c10084c8:	01 c0                	add    %eax,%eax
c10084ca:	01 d0                	add    %edx,%eax
c10084cc:	c1 e0 02             	shl    $0x2,%eax
c10084cf:	8d 90 48 32 a1 c1    	lea    -0x3e5ecdb8(%eax),%edx
c10084d5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10084d8:	89 02                	mov    %eax,(%edx)
c10084da:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10084dd:	89 d0                	mov    %edx,%eax
c10084df:	01 c0                	add    %eax,%eax
c10084e1:	01 d0                	add    %edx,%eax
c10084e3:	c1 e0 02             	shl    $0x2,%eax
c10084e6:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c10084eb:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10084f1:	0f b6 4d b4          	movzbl -0x4c(%ebp),%ecx
c10084f5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10084f8:	89 d0                	mov    %edx,%eax
c10084fa:	01 c0                	add    %eax,%eax
c10084fc:	01 d0                	add    %edx,%eax
c10084fe:	c1 e0 02             	shl    $0x2,%eax
c1008501:	05 44 32 a1 c1       	add    $0xc1a13244,%eax
c1008506:	89 08                	mov    %ecx,(%eax)
c1008508:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100850b:	89 d0                	mov    %edx,%eax
c100850d:	01 c0                	add    %eax,%eax
c100850f:	01 d0                	add    %edx,%eax
c1008511:	c1 e0 02             	shl    $0x2,%eax
c1008514:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008519:	8b 00                	mov    (%eax),%eax
c100851b:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c100851f:	83 ec 04             	sub    $0x4,%esp
c1008522:	6a 18                	push   $0x18
c1008524:	6a 00                	push   $0x0
c1008526:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1008529:	50                   	push   %eax
c100852a:	e8 7b 7b ff ff       	call   c10000aa <memset>
c100852f:	83 c4 10             	add    $0x10,%esp
c1008532:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008535:	8d 55 c4             	lea    -0x3c(%ebp),%edx
c1008538:	52                   	push   %edx
c1008539:	6a 01                	push   $0x1
c100853b:	50                   	push   %eax
c100853c:	ff 75 0c             	pushl  0xc(%ebp)
c100853f:	e8 ce ef ff ff       	call   c1007512 <create_dir_entry>
c1008544:	83 c4 10             	add    $0x10,%esp
c1008547:	83 ec 04             	sub    $0x4,%esp
c100854a:	ff 75 ec             	pushl  -0x14(%ebp)
c100854d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1008550:	50                   	push   %eax
c1008551:	ff 75 08             	pushl  0x8(%ebp)
c1008554:	e8 25 f0 ff ff       	call   c100757e <sync_dir_entry>
c1008559:	83 c4 10             	add    $0x10,%esp
c100855c:	85 c0                	test   %eax,%eax
c100855e:	75 19                	jne    c1008579 <file_create+0x199>
c1008560:	83 ec 0c             	sub    $0xc,%esp
c1008563:	68 20 b0 00 c1       	push   $0xc100b020
c1008568:	e8 29 c1 ff ff       	call   c1004696 <printk>
c100856d:	83 c4 10             	add    $0x10,%esp
c1008570:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c1008574:	e9 99 00 00 00       	jmp    c1008612 <file_create+0x232>
c1008579:	83 ec 04             	sub    $0x4,%esp
c100857c:	68 00 04 00 00       	push   $0x400
c1008581:	6a 00                	push   $0x0
c1008583:	ff 75 ec             	pushl  -0x14(%ebp)
c1008586:	e8 1f 7b ff ff       	call   c10000aa <memset>
c100858b:	83 c4 10             	add    $0x10,%esp
c100858e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008591:	8b 10                	mov    (%eax),%edx
c1008593:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008598:	83 ec 04             	sub    $0x4,%esp
c100859b:	ff 75 ec             	pushl  -0x14(%ebp)
c100859e:	52                   	push   %edx
c100859f:	50                   	push   %eax
c10085a0:	e8 64 0e 00 00       	call   c1009409 <inode_sync>
c10085a5:	83 c4 10             	add    $0x10,%esp
c10085a8:	83 ec 04             	sub    $0x4,%esp
c10085ab:	68 00 04 00 00       	push   $0x400
c10085b0:	6a 00                	push   $0x0
c10085b2:	ff 75 ec             	pushl  -0x14(%ebp)
c10085b5:	e8 f0 7a ff ff       	call   c10000aa <memset>
c10085ba:	83 c4 10             	add    $0x10,%esp
c10085bd:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10085c2:	83 ec 04             	sub    $0x4,%esp
c10085c5:	ff 75 ec             	pushl  -0x14(%ebp)
c10085c8:	ff 75 e4             	pushl  -0x1c(%ebp)
c10085cb:	50                   	push   %eax
c10085cc:	e8 38 0e 00 00       	call   c1009409 <inode_sync>
c10085d1:	83 c4 10             	add    $0x10,%esp
c10085d4:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10085d7:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10085dc:	83 ec 04             	sub    $0x4,%esp
c10085df:	6a 00                	push   $0x0
c10085e1:	52                   	push   %edx
c10085e2:	50                   	push   %eax
c10085e3:	e8 74 fd ff ff       	call   c100835c <bitmap_sync>
c10085e8:	83 c4 10             	add    $0x10,%esp
c10085eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10085ee:	83 ec 08             	sub    $0x8,%esp
c10085f1:	68 00 04 00 00       	push   $0x400
c10085f6:	50                   	push   %eax
c10085f7:	e8 b9 a4 ff ff       	call   c1002ab5 <vmm_free>
c10085fc:	83 c4 10             	add    $0x10,%esp
c10085ff:	83 ec 0c             	sub    $0xc,%esp
c1008602:	ff 75 f0             	pushl  -0x10(%ebp)
c1008605:	e8 80 fb ff ff       	call   c100818a <task_fd_install>
c100860a:	83 c4 10             	add    $0x10,%esp
c100860d:	e9 ae 00 00 00       	jmp    c10086c0 <file_create+0x2e0>
c1008612:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008616:	83 f8 03             	cmp    $0x3,%eax
c1008619:	74 15                	je     c1008630 <file_create+0x250>
c100861b:	83 f8 03             	cmp    $0x3,%eax
c100861e:	0f 8f 83 00 00 00    	jg     c10086a7 <file_create+0x2c7>
c1008624:	83 f8 01             	cmp    $0x1,%eax
c1008627:	74 39                	je     c1008662 <file_create+0x282>
c1008629:	83 f8 02             	cmp    $0x2,%eax
c100862c:	74 23                	je     c1008651 <file_create+0x271>
c100862e:	eb 77                	jmp    c10086a7 <file_create+0x2c7>
c1008630:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008633:	89 d0                	mov    %edx,%eax
c1008635:	01 c0                	add    %eax,%eax
c1008637:	01 d0                	add    %edx,%eax
c1008639:	c1 e0 02             	shl    $0x2,%eax
c100863c:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1008641:	83 ec 04             	sub    $0x4,%esp
c1008644:	6a 0c                	push   $0xc
c1008646:	6a 00                	push   $0x0
c1008648:	50                   	push   %eax
c1008649:	e8 5c 7a ff ff       	call   c10000aa <memset>
c100864e:	83 c4 10             	add    $0x10,%esp
c1008651:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008654:	83 ec 08             	sub    $0x8,%esp
c1008657:	6a 44                	push   $0x44
c1008659:	50                   	push   %eax
c100865a:	e8 56 a4 ff ff       	call   c1002ab5 <vmm_free>
c100865f:	83 c4 10             	add    $0x10,%esp
c1008662:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008665:	8d 50 07             	lea    0x7(%eax),%edx
c1008668:	85 c0                	test   %eax,%eax
c100866a:	0f 48 c2             	cmovs  %edx,%eax
c100866d:	c1 f8 03             	sar    $0x3,%eax
c1008670:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008673:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008676:	99                   	cltd   
c1008677:	c1 ea 1d             	shr    $0x1d,%edx
c100867a:	01 d0                	add    %edx,%eax
c100867c:	83 e0 07             	and    $0x7,%eax
c100867f:	29 d0                	sub    %edx,%eax
c1008681:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008684:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008689:	8b 50 20             	mov    0x20(%eax),%edx
c100868c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100868f:	01 d0                	add    %edx,%eax
c1008691:	0f b6 10             	movzbl (%eax),%edx
c1008694:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008699:	8b 48 20             	mov    0x20(%eax),%ecx
c100869c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100869f:	01 c8                	add    %ecx,%eax
c10086a1:	83 e2 fe             	and    $0xfffffffe,%edx
c10086a4:	88 10                	mov    %dl,(%eax)
c10086a6:	90                   	nop
c10086a7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10086aa:	83 ec 08             	sub    $0x8,%esp
c10086ad:	68 00 04 00 00       	push   $0x400
c10086b2:	50                   	push   %eax
c10086b3:	e8 fd a3 ff ff       	call   c1002ab5 <vmm_free>
c10086b8:	83 c4 10             	add    $0x10,%esp
c10086bb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10086c0:	c9                   	leave  
c10086c1:	c3                   	ret    

c10086c2 <file_open>:
c10086c2:	55                   	push   %ebp
c10086c3:	89 e5                	mov    %esp,%ebp
c10086c5:	83 ec 28             	sub    $0x28,%esp
c10086c8:	8b 45 0c             	mov    0xc(%ebp),%eax
c10086cb:	88 45 e4             	mov    %al,-0x1c(%ebp)
c10086ce:	e8 72 fa ff ff       	call   c1008145 <get_free_slot_in_global>
c10086d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10086d6:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c10086da:	75 1a                	jne    c10086f6 <file_open+0x34>
c10086dc:	83 ec 0c             	sub    $0xc,%esp
c10086df:	68 07 b0 00 c1       	push   $0xc100b007
c10086e4:	e8 ad bf ff ff       	call   c1004696 <printk>
c10086e9:	83 c4 10             	add    $0x10,%esp
c10086ec:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10086f1:	e9 1a 01 00 00       	jmp    c1008810 <file_open+0x14e>
c10086f6:	83 ec 08             	sub    $0x8,%esp
c10086f9:	ff 75 08             	pushl  0x8(%ebp)
c10086fc:	68 3f b0 00 c1       	push   $0xc100b03f
c1008701:	e8 90 bf ff ff       	call   c1004696 <printk>
c1008706:	83 c4 10             	add    $0x10,%esp
c1008709:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100870e:	83 ec 08             	sub    $0x8,%esp
c1008711:	ff 75 08             	pushl  0x8(%ebp)
c1008714:	50                   	push   %eax
c1008715:	e8 10 0e 00 00       	call   c100952a <inode_open>
c100871a:	83 c4 10             	add    $0x10,%esp
c100871d:	89 c1                	mov    %eax,%ecx
c100871f:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008722:	89 d0                	mov    %edx,%eax
c1008724:	01 c0                	add    %eax,%eax
c1008726:	01 d0                	add    %edx,%eax
c1008728:	c1 e0 02             	shl    $0x2,%eax
c100872b:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008730:	89 08                	mov    %ecx,(%eax)
c1008732:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008735:	89 d0                	mov    %edx,%eax
c1008737:	01 c0                	add    %eax,%eax
c1008739:	01 d0                	add    %edx,%eax
c100873b:	c1 e0 02             	shl    $0x2,%eax
c100873e:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008743:	8b 00                	mov    (%eax),%eax
c1008745:	8b 00                	mov    (%eax),%eax
c1008747:	83 ec 08             	sub    $0x8,%esp
c100874a:	50                   	push   %eax
c100874b:	68 4c b0 00 c1       	push   $0xc100b04c
c1008750:	e8 41 bf ff ff       	call   c1004696 <printk>
c1008755:	83 c4 10             	add    $0x10,%esp
c1008758:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100875b:	89 d0                	mov    %edx,%eax
c100875d:	01 c0                	add    %eax,%eax
c100875f:	01 d0                	add    %edx,%eax
c1008761:	c1 e0 02             	shl    $0x2,%eax
c1008764:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1008769:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100876f:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
c1008773:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008776:	89 d0                	mov    %edx,%eax
c1008778:	01 c0                	add    %eax,%eax
c100877a:	01 d0                	add    %edx,%eax
c100877c:	c1 e0 02             	shl    $0x2,%eax
c100877f:	05 44 32 a1 c1       	add    $0xc1a13244,%eax
c1008784:	89 08                	mov    %ecx,(%eax)
c1008786:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008789:	89 d0                	mov    %edx,%eax
c100878b:	01 c0                	add    %eax,%eax
c100878d:	01 d0                	add    %edx,%eax
c100878f:	c1 e0 02             	shl    $0x2,%eax
c1008792:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008797:	8b 00                	mov    (%eax),%eax
c1008799:	83 c0 0c             	add    $0xc,%eax
c100879c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100879f:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10087a3:	83 e0 01             	and    $0x1,%eax
c10087a6:	85 c0                	test   %eax,%eax
c10087a8:	75 0b                	jne    c10087b5 <file_open+0xf3>
c10087aa:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10087ae:	83 e0 02             	and    $0x2,%eax
c10087b1:	85 c0                	test   %eax,%eax
c10087b3:	74 4d                	je     c1008802 <file_open+0x140>
c10087b5:	e8 96 85 ff ff       	call   c1000d50 <intr_save>
c10087ba:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10087bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10087c0:	0f b6 00             	movzbl (%eax),%eax
c10087c3:	84 c0                	test   %al,%al
c10087c5:	75 16                	jne    c10087dd <file_open+0x11b>
c10087c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10087ca:	c6 00 01             	movb   $0x1,(%eax)
c10087cd:	83 ec 0c             	sub    $0xc,%esp
c10087d0:	ff 75 ec             	pushl  -0x14(%ebp)
c10087d3:	e8 8b 85 ff ff       	call   c1000d63 <intr_restore>
c10087d8:	83 c4 10             	add    $0x10,%esp
c10087db:	eb 25                	jmp    c1008802 <file_open+0x140>
c10087dd:	83 ec 0c             	sub    $0xc,%esp
c10087e0:	ff 75 ec             	pushl  -0x14(%ebp)
c10087e3:	e8 7b 85 ff ff       	call   c1000d63 <intr_restore>
c10087e8:	83 c4 10             	add    $0x10,%esp
c10087eb:	83 ec 0c             	sub    $0xc,%esp
c10087ee:	68 74 b0 00 c1       	push   $0xc100b074
c10087f3:	e8 9e be ff ff       	call   c1004696 <printk>
c10087f8:	83 c4 10             	add    $0x10,%esp
c10087fb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008800:	eb 0e                	jmp    c1008810 <file_open+0x14e>
c1008802:	83 ec 0c             	sub    $0xc,%esp
c1008805:	ff 75 f4             	pushl  -0xc(%ebp)
c1008808:	e8 7d f9 ff ff       	call   c100818a <task_fd_install>
c100880d:	83 c4 10             	add    $0x10,%esp
c1008810:	c9                   	leave  
c1008811:	c3                   	ret    

c1008812 <file_close>:
c1008812:	55                   	push   %ebp
c1008813:	89 e5                	mov    %esp,%ebp
c1008815:	83 ec 08             	sub    $0x8,%esp
c1008818:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100881c:	75 07                	jne    c1008825 <file_close+0x13>
c100881e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008823:	eb 2b                	jmp    c1008850 <file_close+0x3e>
c1008825:	8b 45 08             	mov    0x8(%ebp),%eax
c1008828:	8b 40 08             	mov    0x8(%eax),%eax
c100882b:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c100882f:	8b 45 08             	mov    0x8(%ebp),%eax
c1008832:	8b 40 08             	mov    0x8(%eax),%eax
c1008835:	83 ec 0c             	sub    $0xc,%esp
c1008838:	50                   	push   %eax
c1008839:	e8 c2 0d 00 00       	call   c1009600 <inode_close>
c100883e:	83 c4 10             	add    $0x10,%esp
c1008841:	8b 45 08             	mov    0x8(%ebp),%eax
c1008844:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100884b:	b8 00 00 00 00       	mov    $0x0,%eax
c1008850:	c9                   	leave  
c1008851:	c3                   	ret    

c1008852 <file_write>:
c1008852:	55                   	push   %ebp
c1008853:	89 e5                	mov    %esp,%ebp
c1008855:	83 ec 58             	sub    $0x58,%esp
c1008858:	8b 45 08             	mov    0x8(%ebp),%eax
c100885b:	8b 40 08             	mov    0x8(%eax),%eax
c100885e:	8b 50 04             	mov    0x4(%eax),%edx
c1008861:	8b 45 10             	mov    0x10(%ebp),%eax
c1008864:	01 d0                	add    %edx,%eax
c1008866:	3d 00 18 01 00       	cmp    $0x11800,%eax
c100886b:	76 1a                	jbe    c1008887 <file_write+0x35>
c100886d:	83 ec 0c             	sub    $0xc,%esp
c1008870:	68 a0 b0 00 c1       	push   $0xc100b0a0
c1008875:	e8 1c be ff ff       	call   c1004696 <printk>
c100887a:	83 c4 10             	add    $0x10,%esp
c100887d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008882:	e9 3e 07 00 00       	jmp    c1008fc5 <file_write+0x773>
c1008887:	83 ec 08             	sub    $0x8,%esp
c100888a:	6a 02                	push   $0x2
c100888c:	68 00 02 00 00       	push   $0x200
c1008891:	e8 fa a0 ff ff       	call   c1002990 <vmm_malloc>
c1008896:	83 c4 10             	add    $0x10,%esp
c1008899:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100889c:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c10088a0:	75 1a                	jne    c10088bc <file_write+0x6a>
c10088a2:	83 ec 0c             	sub    $0xc,%esp
c10088a5:	68 d8 b0 00 c1       	push   $0xc100b0d8
c10088aa:	e8 e7 bd ff ff       	call   c1004696 <printk>
c10088af:	83 c4 10             	add    $0x10,%esp
c10088b2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10088b7:	e9 09 07 00 00       	jmp    c1008fc5 <file_write+0x773>
c10088bc:	83 ec 08             	sub    $0x8,%esp
c10088bf:	6a 02                	push   $0x2
c10088c1:	68 30 02 00 00       	push   $0x230
c10088c6:	e8 c5 a0 ff ff       	call   c1002990 <vmm_malloc>
c10088cb:	83 c4 10             	add    $0x10,%esp
c10088ce:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10088d1:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c10088d5:	75 1a                	jne    c10088f1 <file_write+0x9f>
c10088d7:	83 ec 0c             	sub    $0xc,%esp
c10088da:	68 04 b1 00 c1       	push   $0xc100b104
c10088df:	e8 b2 bd ff ff       	call   c1004696 <printk>
c10088e4:	83 c4 10             	add    $0x10,%esp
c10088e7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10088ec:	e9 d4 06 00 00       	jmp    c1008fc5 <file_write+0x773>
c10088f1:	8b 45 0c             	mov    0xc(%ebp),%eax
c10088f4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10088f7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10088fe:	8b 45 10             	mov    0x10(%ebp),%eax
c1008901:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008904:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c100890b:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
c1008912:	8b 45 08             	mov    0x8(%ebp),%eax
c1008915:	8b 40 08             	mov    0x8(%eax),%eax
c1008918:	8b 40 10             	mov    0x10(%eax),%eax
c100891b:	85 c0                	test   %eax,%eax
c100891d:	0f 85 8a 00 00 00    	jne    c10089ad <file_write+0x15b>
c1008923:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008928:	83 ec 0c             	sub    $0xc,%esp
c100892b:	50                   	push   %eax
c100892c:	e8 5d f9 ff ff       	call   c100828e <block_bitmap_alloc>
c1008931:	83 c4 10             	add    $0x10,%esp
c1008934:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008937:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c100893b:	75 1a                	jne    c1008957 <file_write+0x105>
c100893d:	83 ec 0c             	sub    $0xc,%esp
c1008940:	68 34 b1 00 c1       	push   $0xc100b134
c1008945:	e8 4c bd ff ff       	call   c1004696 <printk>
c100894a:	83 c4 10             	add    $0x10,%esp
c100894d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008952:	e9 6e 06 00 00       	jmp    c1008fc5 <file_write+0x773>
c1008957:	8b 45 08             	mov    0x8(%ebp),%eax
c100895a:	8b 40 08             	mov    0x8(%eax),%eax
c100895d:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008960:	89 50 10             	mov    %edx,0x10(%eax)
c1008963:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008966:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100896b:	8b 40 10             	mov    0x10(%eax),%eax
c100896e:	8b 40 28             	mov    0x28(%eax),%eax
c1008971:	29 c2                	sub    %eax,%edx
c1008973:	89 d0                	mov    %edx,%eax
c1008975:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008978:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
c100897c:	75 19                	jne    c1008997 <file_write+0x145>
c100897e:	68 5b b1 00 c1       	push   $0xc100b15b
c1008983:	68 1c b4 00 c1       	push   $0xc100b41c
c1008988:	68 1e 01 00 00       	push   $0x11e
c100898d:	68 74 b1 00 c1       	push   $0xc100b174
c1008992:	e8 76 79 ff ff       	call   c100030d <__PANIC>
c1008997:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100899c:	83 ec 04             	sub    $0x4,%esp
c100899f:	6a 01                	push   $0x1
c10089a1:	ff 75 d4             	pushl  -0x2c(%ebp)
c10089a4:	50                   	push   %eax
c10089a5:	e8 b2 f9 ff ff       	call   c100835c <bitmap_sync>
c10089aa:	83 c4 10             	add    $0x10,%esp
c10089ad:	8b 45 08             	mov    0x8(%ebp),%eax
c10089b0:	8b 40 08             	mov    0x8(%eax),%eax
c10089b3:	8b 40 04             	mov    0x4(%eax),%eax
c10089b6:	c1 e8 09             	shr    $0x9,%eax
c10089b9:	83 c0 01             	add    $0x1,%eax
c10089bc:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10089bf:	8b 45 08             	mov    0x8(%ebp),%eax
c10089c2:	8b 40 08             	mov    0x8(%eax),%eax
c10089c5:	8b 50 04             	mov    0x4(%eax),%edx
c10089c8:	8b 45 10             	mov    0x10(%ebp),%eax
c10089cb:	01 d0                	add    %edx,%eax
c10089cd:	c1 e8 09             	shr    $0x9,%eax
c10089d0:	83 c0 01             	add    $0x1,%eax
c10089d3:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10089d6:	81 7d cc 8c 00 00 00 	cmpl   $0x8c,-0x34(%ebp)
c10089dd:	76 19                	jbe    c10089f8 <file_write+0x1a6>
c10089df:	68 a5 b1 00 c1       	push   $0xc100b1a5
c10089e4:	68 1c b4 00 c1       	push   $0xc100b41c
c10089e9:	68 27 01 00 00       	push   $0x127
c10089ee:	68 74 b1 00 c1       	push   $0xc100b174
c10089f3:	e8 15 79 ff ff       	call   c100030d <__PANIC>
c10089f8:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10089fb:	2b 45 d0             	sub    -0x30(%ebp),%eax
c10089fe:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1008a01:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
c1008a05:	0f 85 83 00 00 00    	jne    c1008a8e <file_write+0x23c>
c1008a0b:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1008a0f:	77 2e                	ja     c1008a3f <file_write+0x1ed>
c1008a11:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008a14:	83 e8 01             	sub    $0x1,%eax
c1008a17:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008a1a:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a1d:	8b 40 08             	mov    0x8(%eax),%eax
c1008a20:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008a23:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008a2a:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008a2d:	01 ca                	add    %ecx,%edx
c1008a2f:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008a32:	83 c1 04             	add    $0x4,%ecx
c1008a35:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1008a38:	89 02                	mov    %eax,(%edx)
c1008a3a:	e9 24 04 00 00       	jmp    c1008e63 <file_write+0x611>
c1008a3f:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a42:	8b 40 08             	mov    0x8(%eax),%eax
c1008a45:	8b 40 40             	mov    0x40(%eax),%eax
c1008a48:	85 c0                	test   %eax,%eax
c1008a4a:	75 19                	jne    c1008a65 <file_write+0x213>
c1008a4c:	68 c4 b1 00 c1       	push   $0xc100b1c4
c1008a51:	68 1c b4 00 c1       	push   $0xc100b41c
c1008a56:	68 35 01 00 00       	push   $0x135
c1008a5b:	68 74 b1 00 c1       	push   $0xc100b174
c1008a60:	e8 a8 78 ff ff       	call   c100030d <__PANIC>
c1008a65:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a68:	8b 40 08             	mov    0x8(%eax),%eax
c1008a6b:	8b 40 40             	mov    0x40(%eax),%eax
c1008a6e:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1008a71:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008a74:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008a77:	83 c2 30             	add    $0x30,%edx
c1008a7a:	83 ec 04             	sub    $0x4,%esp
c1008a7d:	6a 01                	push   $0x1
c1008a7f:	50                   	push   %eax
c1008a80:	52                   	push   %edx
c1008a81:	e8 b8 c4 ff ff       	call   c1004f3e <ide_read>
c1008a86:	83 c4 10             	add    $0x10,%esp
c1008a89:	e9 d5 03 00 00       	jmp    c1008e63 <file_write+0x611>
c1008a8e:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1008a92:	0f 87 25 01 00 00    	ja     c1008bbd <file_write+0x36b>
c1008a98:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008a9b:	83 e8 01             	sub    $0x1,%eax
c1008a9e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008aa1:	8b 45 08             	mov    0x8(%ebp),%eax
c1008aa4:	8b 40 08             	mov    0x8(%eax),%eax
c1008aa7:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008aaa:	83 c2 04             	add    $0x4,%edx
c1008aad:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008ab0:	85 c0                	test   %eax,%eax
c1008ab2:	75 19                	jne    c1008acd <file_write+0x27b>
c1008ab4:	68 e8 b1 00 c1       	push   $0xc100b1e8
c1008ab9:	68 1c b4 00 c1       	push   $0xc100b41c
c1008abe:	68 3f 01 00 00       	push   $0x13f
c1008ac3:	68 74 b1 00 c1       	push   $0xc100b174
c1008ac8:	e8 40 78 ff ff       	call   c100030d <__PANIC>
c1008acd:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ad0:	8b 40 08             	mov    0x8(%eax),%eax
c1008ad3:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008ad6:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008add:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008ae0:	01 ca                	add    %ecx,%edx
c1008ae2:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008ae5:	83 c1 04             	add    $0x4,%ecx
c1008ae8:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1008aeb:	89 02                	mov    %eax,(%edx)
c1008aed:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008af0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008af3:	e9 b4 00 00 00       	jmp    c1008bac <file_write+0x35a>
c1008af8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008afd:	83 ec 0c             	sub    $0xc,%esp
c1008b00:	50                   	push   %eax
c1008b01:	e8 88 f7 ff ff       	call   c100828e <block_bitmap_alloc>
c1008b06:	83 c4 10             	add    $0x10,%esp
c1008b09:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008b0c:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008b10:	75 1a                	jne    c1008b2c <file_write+0x2da>
c1008b12:	83 ec 0c             	sub    $0xc,%esp
c1008b15:	68 14 b2 00 c1       	push   $0xc100b214
c1008b1a:	e8 77 bb ff ff       	call   c1004696 <printk>
c1008b1f:	83 c4 10             	add    $0x10,%esp
c1008b22:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008b27:	e9 99 04 00 00       	jmp    c1008fc5 <file_write+0x773>
c1008b2c:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b2f:	8b 40 08             	mov    0x8(%eax),%eax
c1008b32:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008b35:	83 c2 04             	add    $0x4,%edx
c1008b38:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008b3b:	85 c0                	test   %eax,%eax
c1008b3d:	74 19                	je     c1008b58 <file_write+0x306>
c1008b3f:	68 4c b2 00 c1       	push   $0xc100b24c
c1008b44:	68 1c b4 00 c1       	push   $0xc100b41c
c1008b49:	68 4c 01 00 00       	push   $0x14c
c1008b4e:	68 74 b1 00 c1       	push   $0xc100b174
c1008b53:	e8 b5 77 ff ff       	call   c100030d <__PANIC>
c1008b58:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008b5b:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008b62:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008b65:	01 d0                	add    %edx,%eax
c1008b67:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008b6a:	89 10                	mov    %edx,(%eax)
c1008b6c:	8b 55 08             	mov    0x8(%ebp),%edx
c1008b6f:	8b 52 08             	mov    0x8(%edx),%edx
c1008b72:	8b 00                	mov    (%eax),%eax
c1008b74:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008b77:	83 c1 04             	add    $0x4,%ecx
c1008b7a:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1008b7d:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008b80:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008b85:	8b 40 10             	mov    0x10(%eax),%eax
c1008b88:	8b 40 28             	mov    0x28(%eax),%eax
c1008b8b:	29 c2                	sub    %eax,%edx
c1008b8d:	89 d0                	mov    %edx,%eax
c1008b8f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008b92:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008b97:	83 ec 04             	sub    $0x4,%esp
c1008b9a:	6a 01                	push   $0x1
c1008b9c:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008b9f:	50                   	push   %eax
c1008ba0:	e8 b7 f7 ff ff       	call   c100835c <bitmap_sync>
c1008ba5:	83 c4 10             	add    $0x10,%esp
c1008ba8:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008bac:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008baf:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1008bb2:	0f 82 40 ff ff ff    	jb     c1008af8 <file_write+0x2a6>
c1008bb8:	e9 a6 02 00 00       	jmp    c1008e63 <file_write+0x611>
c1008bbd:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1008bc1:	0f 87 a3 01 00 00    	ja     c1008d6a <file_write+0x518>
c1008bc7:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1008bcb:	0f 86 99 01 00 00    	jbe    c1008d6a <file_write+0x518>
c1008bd1:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008bd4:	83 e8 01             	sub    $0x1,%eax
c1008bd7:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008bda:	8b 45 08             	mov    0x8(%ebp),%eax
c1008bdd:	8b 40 08             	mov    0x8(%eax),%eax
c1008be0:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008be3:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008bea:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008bed:	01 ca                	add    %ecx,%edx
c1008bef:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008bf2:	83 c1 04             	add    $0x4,%ecx
c1008bf5:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1008bf8:	89 02                	mov    %eax,(%edx)
c1008bfa:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008bff:	83 ec 0c             	sub    $0xc,%esp
c1008c02:	50                   	push   %eax
c1008c03:	e8 86 f6 ff ff       	call   c100828e <block_bitmap_alloc>
c1008c08:	83 c4 10             	add    $0x10,%esp
c1008c0b:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008c0e:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008c12:	75 1a                	jne    c1008c2e <file_write+0x3dc>
c1008c14:	83 ec 0c             	sub    $0xc,%esp
c1008c17:	68 78 b2 00 c1       	push   $0xc100b278
c1008c1c:	e8 75 ba ff ff       	call   c1004696 <printk>
c1008c21:	83 c4 10             	add    $0x10,%esp
c1008c24:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008c29:	e9 97 03 00 00       	jmp    c1008fc5 <file_write+0x773>
c1008c2e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008c31:	8b 40 08             	mov    0x8(%eax),%eax
c1008c34:	8b 40 40             	mov    0x40(%eax),%eax
c1008c37:	85 c0                	test   %eax,%eax
c1008c39:	74 19                	je     c1008c54 <file_write+0x402>
c1008c3b:	68 b0 b2 00 c1       	push   $0xc100b2b0
c1008c40:	68 1c b4 00 c1       	push   $0xc100b41c
c1008c45:	68 63 01 00 00       	push   $0x163
c1008c4a:	68 74 b1 00 c1       	push   $0xc100b174
c1008c4f:	e8 b9 76 ff ff       	call   c100030d <__PANIC>
c1008c54:	8b 45 08             	mov    0x8(%ebp),%eax
c1008c57:	8b 40 08             	mov    0x8(%eax),%eax
c1008c5a:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008c5d:	89 50 40             	mov    %edx,0x40(%eax)
c1008c60:	8b 40 40             	mov    0x40(%eax),%eax
c1008c63:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1008c66:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008c69:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008c6c:	e9 d0 00 00 00       	jmp    c1008d41 <file_write+0x4ef>
c1008c71:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008c76:	83 ec 0c             	sub    $0xc,%esp
c1008c79:	50                   	push   %eax
c1008c7a:	e8 0f f6 ff ff       	call   c100828e <block_bitmap_alloc>
c1008c7f:	83 c4 10             	add    $0x10,%esp
c1008c82:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008c85:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008c89:	75 1a                	jne    c1008ca5 <file_write+0x453>
c1008c8b:	83 ec 0c             	sub    $0xc,%esp
c1008c8e:	68 78 b2 00 c1       	push   $0xc100b278
c1008c93:	e8 fe b9 ff ff       	call   c1004696 <printk>
c1008c98:	83 c4 10             	add    $0x10,%esp
c1008c9b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008ca0:	e9 20 03 00 00       	jmp    c1008fc5 <file_write+0x773>
c1008ca5:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1008ca9:	77 53                	ja     c1008cfe <file_write+0x4ac>
c1008cab:	8b 45 08             	mov    0x8(%ebp),%eax
c1008cae:	8b 40 08             	mov    0x8(%eax),%eax
c1008cb1:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008cb4:	83 c2 04             	add    $0x4,%edx
c1008cb7:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008cba:	85 c0                	test   %eax,%eax
c1008cbc:	74 19                	je     c1008cd7 <file_write+0x485>
c1008cbe:	68 4c b2 00 c1       	push   $0xc100b24c
c1008cc3:	68 1c b4 00 c1       	push   $0xc100b41c
c1008cc8:	68 70 01 00 00       	push   $0x170
c1008ccd:	68 74 b1 00 c1       	push   $0xc100b174
c1008cd2:	e8 36 76 ff ff       	call   c100030d <__PANIC>
c1008cd7:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008cda:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008ce1:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008ce4:	01 d0                	add    %edx,%eax
c1008ce6:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008ce9:	89 10                	mov    %edx,(%eax)
c1008ceb:	8b 55 08             	mov    0x8(%ebp),%edx
c1008cee:	8b 52 08             	mov    0x8(%edx),%edx
c1008cf1:	8b 00                	mov    (%eax),%eax
c1008cf3:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008cf6:	83 c1 04             	add    $0x4,%ecx
c1008cf9:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1008cfc:	eb 14                	jmp    c1008d12 <file_write+0x4c0>
c1008cfe:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008d01:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008d08:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008d0b:	01 c2                	add    %eax,%edx
c1008d0d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008d10:	89 02                	mov    %eax,(%edx)
c1008d12:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008d15:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008d1a:	8b 40 10             	mov    0x10(%eax),%eax
c1008d1d:	8b 40 28             	mov    0x28(%eax),%eax
c1008d20:	29 c2                	sub    %eax,%edx
c1008d22:	89 d0                	mov    %edx,%eax
c1008d24:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008d27:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008d2c:	83 ec 04             	sub    $0x4,%esp
c1008d2f:	6a 01                	push   $0x1
c1008d31:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008d34:	50                   	push   %eax
c1008d35:	e8 22 f6 ff ff       	call   c100835c <bitmap_sync>
c1008d3a:	83 c4 10             	add    $0x10,%esp
c1008d3d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008d41:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008d44:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1008d47:	0f 82 24 ff ff ff    	jb     c1008c71 <file_write+0x41f>
c1008d4d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008d50:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008d53:	83 c2 30             	add    $0x30,%edx
c1008d56:	83 ec 04             	sub    $0x4,%esp
c1008d59:	6a 01                	push   $0x1
c1008d5b:	50                   	push   %eax
c1008d5c:	52                   	push   %edx
c1008d5d:	e8 19 c2 ff ff       	call   c1004f7b <ide_write>
c1008d62:	83 c4 10             	add    $0x10,%esp
c1008d65:	e9 f9 00 00 00       	jmp    c1008e63 <file_write+0x611>
c1008d6a:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1008d6e:	0f 86 ef 00 00 00    	jbe    c1008e63 <file_write+0x611>
c1008d74:	8b 45 08             	mov    0x8(%ebp),%eax
c1008d77:	8b 40 08             	mov    0x8(%eax),%eax
c1008d7a:	8b 40 40             	mov    0x40(%eax),%eax
c1008d7d:	85 c0                	test   %eax,%eax
c1008d7f:	75 19                	jne    c1008d9a <file_write+0x548>
c1008d81:	68 c4 b1 00 c1       	push   $0xc100b1c4
c1008d86:	68 1c b4 00 c1       	push   $0xc100b41c
c1008d8b:	68 7f 01 00 00       	push   $0x17f
c1008d90:	68 74 b1 00 c1       	push   $0xc100b174
c1008d95:	e8 73 75 ff ff       	call   c100030d <__PANIC>
c1008d9a:	8b 45 08             	mov    0x8(%ebp),%eax
c1008d9d:	8b 40 08             	mov    0x8(%eax),%eax
c1008da0:	8b 40 40             	mov    0x40(%eax),%eax
c1008da3:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1008da6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008da9:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008dac:	83 c2 30             	add    $0x30,%edx
c1008daf:	83 ec 04             	sub    $0x4,%esp
c1008db2:	6a 01                	push   $0x1
c1008db4:	50                   	push   %eax
c1008db5:	52                   	push   %edx
c1008db6:	e8 83 c1 ff ff       	call   c1004f3e <ide_read>
c1008dbb:	83 c4 10             	add    $0x10,%esp
c1008dbe:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008dc1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008dc4:	eb 79                	jmp    c1008e3f <file_write+0x5ed>
c1008dc6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008dcb:	83 ec 0c             	sub    $0xc,%esp
c1008dce:	50                   	push   %eax
c1008dcf:	e8 ba f4 ff ff       	call   c100828e <block_bitmap_alloc>
c1008dd4:	83 c4 10             	add    $0x10,%esp
c1008dd7:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008dda:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008dde:	75 1a                	jne    c1008dfa <file_write+0x5a8>
c1008de0:	83 ec 0c             	sub    $0xc,%esp
c1008de3:	68 d4 b2 00 c1       	push   $0xc100b2d4
c1008de8:	e8 a9 b8 ff ff       	call   c1004696 <printk>
c1008ded:	83 c4 10             	add    $0x10,%esp
c1008df0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008df5:	e9 cb 01 00 00       	jmp    c1008fc5 <file_write+0x773>
c1008dfa:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008dfd:	8d 50 01             	lea    0x1(%eax),%edx
c1008e00:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1008e03:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008e0a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008e0d:	01 c2                	add    %eax,%edx
c1008e0f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008e12:	89 02                	mov    %eax,(%edx)
c1008e14:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008e17:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008e1c:	8b 40 10             	mov    0x10(%eax),%eax
c1008e1f:	8b 40 28             	mov    0x28(%eax),%eax
c1008e22:	29 c2                	sub    %eax,%edx
c1008e24:	89 d0                	mov    %edx,%eax
c1008e26:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008e29:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008e2e:	83 ec 04             	sub    $0x4,%esp
c1008e31:	6a 01                	push   $0x1
c1008e33:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008e36:	50                   	push   %eax
c1008e37:	e8 20 f5 ff ff       	call   c100835c <bitmap_sync>
c1008e3c:	83 c4 10             	add    $0x10,%esp
c1008e3f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008e42:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1008e45:	0f 82 7b ff ff ff    	jb     c1008dc6 <file_write+0x574>
c1008e4b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008e4e:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008e51:	83 c2 30             	add    $0x30,%edx
c1008e54:	83 ec 04             	sub    $0x4,%esp
c1008e57:	6a 01                	push   $0x1
c1008e59:	50                   	push   %eax
c1008e5a:	52                   	push   %edx
c1008e5b:	e8 1b c1 ff ff       	call   c1004f7b <ide_write>
c1008e60:	83 c4 10             	add    $0x10,%esp
c1008e63:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
c1008e67:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e6a:	8b 40 08             	mov    0x8(%eax),%eax
c1008e6d:	8b 40 04             	mov    0x4(%eax),%eax
c1008e70:	8d 50 ff             	lea    -0x1(%eax),%edx
c1008e73:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e76:	89 10                	mov    %edx,(%eax)
c1008e78:	e9 f6 00 00 00       	jmp    c1008f73 <file_write+0x721>
c1008e7d:	83 ec 04             	sub    $0x4,%esp
c1008e80:	68 00 02 00 00       	push   $0x200
c1008e85:	6a 00                	push   $0x0
c1008e87:	ff 75 e0             	pushl  -0x20(%ebp)
c1008e8a:	e8 1b 72 ff ff       	call   c10000aa <memset>
c1008e8f:	83 c4 10             	add    $0x10,%esp
c1008e92:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e95:	8b 40 08             	mov    0x8(%eax),%eax
c1008e98:	8b 40 04             	mov    0x4(%eax),%eax
c1008e9b:	c1 e8 09             	shr    $0x9,%eax
c1008e9e:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1008ea1:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1008ea4:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008eab:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008eae:	01 d0                	add    %edx,%eax
c1008eb0:	8b 00                	mov    (%eax),%eax
c1008eb2:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1008eb5:	8b 45 08             	mov    0x8(%ebp),%eax
c1008eb8:	8b 40 08             	mov    0x8(%eax),%eax
c1008ebb:	8b 40 04             	mov    0x4(%eax),%eax
c1008ebe:	25 ff 01 00 00       	and    $0x1ff,%eax
c1008ec3:	89 45 b8             	mov    %eax,-0x48(%ebp)
c1008ec6:	b8 00 02 00 00       	mov    $0x200,%eax
c1008ecb:	2b 45 b8             	sub    -0x48(%ebp),%eax
c1008ece:	89 45 b4             	mov    %eax,-0x4c(%ebp)
c1008ed1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008ed4:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
c1008ed7:	0f 46 45 b4          	cmovbe -0x4c(%ebp),%eax
c1008edb:	89 45 b0             	mov    %eax,-0x50(%ebp)
c1008ede:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
c1008ee2:	74 17                	je     c1008efb <file_write+0x6a9>
c1008ee4:	83 ec 04             	sub    $0x4,%esp
c1008ee7:	6a 01                	push   $0x1
c1008ee9:	ff 75 bc             	pushl  -0x44(%ebp)
c1008eec:	ff 75 e0             	pushl  -0x20(%ebp)
c1008eef:	e8 4a c0 ff ff       	call   c1004f3e <ide_read>
c1008ef4:	83 c4 10             	add    $0x10,%esp
c1008ef7:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
c1008efb:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008efe:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1008f01:	01 d0                	add    %edx,%eax
c1008f03:	83 ec 04             	sub    $0x4,%esp
c1008f06:	ff 75 b0             	pushl  -0x50(%ebp)
c1008f09:	ff 75 f4             	pushl  -0xc(%ebp)
c1008f0c:	50                   	push   %eax
c1008f0d:	e8 f6 71 ff ff       	call   c1000108 <memcpy>
c1008f12:	83 c4 10             	add    $0x10,%esp
c1008f15:	83 ec 04             	sub    $0x4,%esp
c1008f18:	6a 01                	push   $0x1
c1008f1a:	ff 75 bc             	pushl  -0x44(%ebp)
c1008f1d:	ff 75 e0             	pushl  -0x20(%ebp)
c1008f20:	e8 56 c0 ff ff       	call   c1004f7b <ide_write>
c1008f25:	83 c4 10             	add    $0x10,%esp
c1008f28:	83 ec 08             	sub    $0x8,%esp
c1008f2b:	ff 75 bc             	pushl  -0x44(%ebp)
c1008f2e:	68 0b b3 00 c1       	push   $0xc100b30b
c1008f33:	e8 5e b7 ff ff       	call   c1004696 <printk>
c1008f38:	83 c4 10             	add    $0x10,%esp
c1008f3b:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1008f3e:	01 45 f4             	add    %eax,-0xc(%ebp)
c1008f41:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f44:	8b 40 08             	mov    0x8(%eax),%eax
c1008f47:	8b 48 04             	mov    0x4(%eax),%ecx
c1008f4a:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f4d:	8b 40 08             	mov    0x8(%eax),%eax
c1008f50:	8b 55 b0             	mov    -0x50(%ebp),%edx
c1008f53:	01 ca                	add    %ecx,%edx
c1008f55:	89 50 04             	mov    %edx,0x4(%eax)
c1008f58:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f5b:	8b 10                	mov    (%eax),%edx
c1008f5d:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1008f60:	01 c2                	add    %eax,%edx
c1008f62:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f65:	89 10                	mov    %edx,(%eax)
c1008f67:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1008f6a:	01 45 f0             	add    %eax,-0x10(%ebp)
c1008f6d:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1008f70:	29 45 ec             	sub    %eax,-0x14(%ebp)
c1008f73:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008f76:	3b 45 10             	cmp    0x10(%ebp),%eax
c1008f79:	0f 82 fe fe ff ff    	jb     c1008e7d <file_write+0x62b>
c1008f7f:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f82:	8b 50 08             	mov    0x8(%eax),%edx
c1008f85:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008f8a:	83 ec 04             	sub    $0x4,%esp
c1008f8d:	ff 75 e0             	pushl  -0x20(%ebp)
c1008f90:	52                   	push   %edx
c1008f91:	50                   	push   %eax
c1008f92:	e8 72 04 00 00       	call   c1009409 <inode_sync>
c1008f97:	83 c4 10             	add    $0x10,%esp
c1008f9a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008f9d:	83 ec 08             	sub    $0x8,%esp
c1008fa0:	68 30 02 00 00       	push   $0x230
c1008fa5:	50                   	push   %eax
c1008fa6:	e8 0a 9b ff ff       	call   c1002ab5 <vmm_free>
c1008fab:	83 c4 10             	add    $0x10,%esp
c1008fae:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008fb1:	83 ec 08             	sub    $0x8,%esp
c1008fb4:	68 00 02 00 00       	push   $0x200
c1008fb9:	50                   	push   %eax
c1008fba:	e8 f6 9a ff ff       	call   c1002ab5 <vmm_free>
c1008fbf:	83 c4 10             	add    $0x10,%esp
c1008fc2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008fc5:	c9                   	leave  
c1008fc6:	c3                   	ret    

c1008fc7 <file_read>:
c1008fc7:	55                   	push   %ebp
c1008fc8:	89 e5                	mov    %esp,%ebp
c1008fca:	83 ec 48             	sub    $0x48,%esp
c1008fcd:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008fd0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008fd3:	8b 45 10             	mov    0x10(%ebp),%eax
c1008fd6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008fd9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008fdc:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008fdf:	8b 45 08             	mov    0x8(%ebp),%eax
c1008fe2:	8b 00                	mov    (%eax),%eax
c1008fe4:	83 ec 08             	sub    $0x8,%esp
c1008fe7:	50                   	push   %eax
c1008fe8:	68 25 b3 00 c1       	push   $0xc100b325
c1008fed:	e8 a4 b6 ff ff       	call   c1004696 <printk>
c1008ff2:	83 c4 10             	add    $0x10,%esp
c1008ff5:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ff8:	8b 40 08             	mov    0x8(%eax),%eax
c1008ffb:	8b 40 04             	mov    0x4(%eax),%eax
c1008ffe:	83 ec 08             	sub    $0x8,%esp
c1009001:	50                   	push   %eax
c1009002:	68 34 b3 00 c1       	push   $0xc100b334
c1009007:	e8 8a b6 ff ff       	call   c1004696 <printk>
c100900c:	83 c4 10             	add    $0x10,%esp
c100900f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009012:	8b 10                	mov    (%eax),%edx
c1009014:	8b 45 10             	mov    0x10(%ebp),%eax
c1009017:	01 c2                	add    %eax,%edx
c1009019:	8b 45 08             	mov    0x8(%ebp),%eax
c100901c:	8b 40 08             	mov    0x8(%eax),%eax
c100901f:	8b 40 04             	mov    0x4(%eax),%eax
c1009022:	39 c2                	cmp    %eax,%edx
c1009024:	76 2b                	jbe    c1009051 <file_read+0x8a>
c1009026:	8b 45 08             	mov    0x8(%ebp),%eax
c1009029:	8b 40 08             	mov    0x8(%eax),%eax
c100902c:	8b 50 04             	mov    0x4(%eax),%edx
c100902f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009032:	8b 00                	mov    (%eax),%eax
c1009034:	29 c2                	sub    %eax,%edx
c1009036:	89 d0                	mov    %edx,%eax
c1009038:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100903b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100903e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009041:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1009045:	75 0a                	jne    c1009051 <file_read+0x8a>
c1009047:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100904c:	e9 44 03 00 00       	jmp    c1009395 <file_read+0x3ce>
c1009051:	83 ec 08             	sub    $0x8,%esp
c1009054:	ff 75 f0             	pushl  -0x10(%ebp)
c1009057:	68 44 b3 00 c1       	push   $0xc100b344
c100905c:	e8 35 b6 ff ff       	call   c1004696 <printk>
c1009061:	83 c4 10             	add    $0x10,%esp
c1009064:	83 ec 08             	sub    $0x8,%esp
c1009067:	6a 02                	push   $0x2
c1009069:	68 00 02 00 00       	push   $0x200
c100906e:	e8 1d 99 ff ff       	call   c1002990 <vmm_malloc>
c1009073:	83 c4 10             	add    $0x10,%esp
c1009076:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009079:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c100907d:	75 10                	jne    c100908f <file_read+0xc8>
c100907f:	83 ec 0c             	sub    $0xc,%esp
c1009082:	68 5c b3 00 c1       	push   $0xc100b35c
c1009087:	e8 0a b6 ff ff       	call   c1004696 <printk>
c100908c:	83 c4 10             	add    $0x10,%esp
c100908f:	83 ec 08             	sub    $0x8,%esp
c1009092:	6a 02                	push   $0x2
c1009094:	68 30 02 00 00       	push   $0x230
c1009099:	e8 f2 98 ff ff       	call   c1002990 <vmm_malloc>
c100909e:	83 c4 10             	add    $0x10,%esp
c10090a1:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10090a4:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c10090a8:	75 1a                	jne    c10090c4 <file_read+0xfd>
c10090aa:	83 ec 0c             	sub    $0xc,%esp
c10090ad:	68 88 b3 00 c1       	push   $0xc100b388
c10090b2:	e8 df b5 ff ff       	call   c1004696 <printk>
c10090b7:	83 c4 10             	add    $0x10,%esp
c10090ba:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10090bf:	e9 d1 02 00 00       	jmp    c1009395 <file_read+0x3ce>
c10090c4:	8b 45 08             	mov    0x8(%ebp),%eax
c10090c7:	8b 00                	mov    (%eax),%eax
c10090c9:	c1 e8 09             	shr    $0x9,%eax
c10090cc:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10090cf:	8b 45 08             	mov    0x8(%ebp),%eax
c10090d2:	8b 10                	mov    (%eax),%edx
c10090d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10090d7:	01 d0                	add    %edx,%eax
c10090d9:	c1 e8 09             	shr    $0x9,%eax
c10090dc:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10090df:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10090e2:	2b 45 d4             	sub    -0x2c(%ebp),%eax
c10090e5:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10090e8:	81 7d d8 8a 00 00 00 	cmpl   $0x8a,-0x28(%ebp)
c10090ef:	77 09                	ja     c10090fa <file_read+0x133>
c10090f1:	81 7d d4 8a 00 00 00 	cmpl   $0x8a,-0x2c(%ebp)
c10090f8:	76 19                	jbe    c1009113 <file_read+0x14c>
c10090fa:	68 b8 b3 00 c1       	push   $0xc100b3b8
c10090ff:	68 28 b4 00 c1       	push   $0xc100b428
c1009104:	68 d1 01 00 00       	push   $0x1d1
c1009109:	68 74 b1 00 c1       	push   $0xc100b174
c100910e:	e8 fa 71 ff ff       	call   c100030d <__PANIC>
c1009113:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
c1009117:	75 7b                	jne    c1009194 <file_read+0x1cd>
c1009119:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100911c:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c100911f:	74 19                	je     c100913a <file_read+0x173>
c1009121:	68 f0 b3 00 c1       	push   $0xc100b3f0
c1009126:	68 28 b4 00 c1       	push   $0xc100b428
c100912b:	68 d8 01 00 00       	push   $0x1d8
c1009130:	68 74 b1 00 c1       	push   $0xc100b174
c1009135:	e8 d3 71 ff ff       	call   c100030d <__PANIC>
c100913a:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100913e:	77 2b                	ja     c100916b <file_read+0x1a4>
c1009140:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1009143:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009146:	8b 45 08             	mov    0x8(%ebp),%eax
c1009149:	8b 40 08             	mov    0x8(%eax),%eax
c100914c:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100914f:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009156:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009159:	01 ca                	add    %ecx,%edx
c100915b:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100915e:	83 c1 04             	add    $0x4,%ecx
c1009161:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009164:	89 02                	mov    %eax,(%edx)
c1009166:	e9 40 01 00 00       	jmp    c10092ab <file_read+0x2e4>
c100916b:	8b 45 08             	mov    0x8(%ebp),%eax
c100916e:	8b 40 08             	mov    0x8(%eax),%eax
c1009171:	8b 40 40             	mov    0x40(%eax),%eax
c1009174:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009177:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100917a:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100917d:	83 c2 30             	add    $0x30,%edx
c1009180:	83 ec 04             	sub    $0x4,%esp
c1009183:	6a 01                	push   $0x1
c1009185:	50                   	push   %eax
c1009186:	52                   	push   %edx
c1009187:	e8 b2 bd ff ff       	call   c1004f3e <ide_read>
c100918c:	83 c4 10             	add    $0x10,%esp
c100918f:	e9 17 01 00 00       	jmp    c10092ab <file_read+0x2e4>
c1009194:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c1009198:	77 39                	ja     c10091d3 <file_read+0x20c>
c100919a:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100919d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10091a0:	eb 24                	jmp    c10091c6 <file_read+0x1ff>
c10091a2:	8b 45 08             	mov    0x8(%ebp),%eax
c10091a5:	8b 40 08             	mov    0x8(%eax),%eax
c10091a8:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10091ab:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10091b2:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10091b5:	01 ca                	add    %ecx,%edx
c10091b7:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c10091ba:	83 c1 04             	add    $0x4,%ecx
c10091bd:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c10091c0:	89 02                	mov    %eax,(%edx)
c10091c2:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c10091c6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10091c9:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
c10091cc:	76 d4                	jbe    c10091a2 <file_read+0x1db>
c10091ce:	e9 d8 00 00 00       	jmp    c10092ab <file_read+0x2e4>
c10091d3:	83 7d d8 0b          	cmpl   $0xb,-0x28(%ebp)
c10091d7:	0f 87 84 00 00 00    	ja     c1009261 <file_read+0x29a>
c10091dd:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c10091e1:	76 7e                	jbe    c1009261 <file_read+0x29a>
c10091e3:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10091e6:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10091e9:	eb 24                	jmp    c100920f <file_read+0x248>
c10091eb:	8b 45 08             	mov    0x8(%ebp),%eax
c10091ee:	8b 40 08             	mov    0x8(%eax),%eax
c10091f1:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10091f4:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10091fb:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10091fe:	01 ca                	add    %ecx,%edx
c1009200:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009203:	83 c1 04             	add    $0x4,%ecx
c1009206:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009209:	89 02                	mov    %eax,(%edx)
c100920b:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c100920f:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1009213:	76 d6                	jbe    c10091eb <file_read+0x224>
c1009215:	8b 45 08             	mov    0x8(%ebp),%eax
c1009218:	8b 40 08             	mov    0x8(%eax),%eax
c100921b:	8b 40 40             	mov    0x40(%eax),%eax
c100921e:	85 c0                	test   %eax,%eax
c1009220:	75 19                	jne    c100923b <file_read+0x274>
c1009222:	68 c4 b1 00 c1       	push   $0xc100b1c4
c1009227:	68 28 b4 00 c1       	push   $0xc100b428
c100922c:	68 f0 01 00 00       	push   $0x1f0
c1009231:	68 74 b1 00 c1       	push   $0xc100b174
c1009236:	e8 d2 70 ff ff       	call   c100030d <__PANIC>
c100923b:	8b 45 08             	mov    0x8(%ebp),%eax
c100923e:	8b 40 08             	mov    0x8(%eax),%eax
c1009241:	8b 40 40             	mov    0x40(%eax),%eax
c1009244:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009247:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100924a:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100924d:	83 c2 30             	add    $0x30,%edx
c1009250:	83 ec 04             	sub    $0x4,%esp
c1009253:	6a 01                	push   $0x1
c1009255:	50                   	push   %eax
c1009256:	52                   	push   %edx
c1009257:	e8 e2 bc ff ff       	call   c1004f3e <ide_read>
c100925c:	83 c4 10             	add    $0x10,%esp
c100925f:	eb 4a                	jmp    c10092ab <file_read+0x2e4>
c1009261:	8b 45 08             	mov    0x8(%ebp),%eax
c1009264:	8b 40 08             	mov    0x8(%eax),%eax
c1009267:	8b 40 40             	mov    0x40(%eax),%eax
c100926a:	85 c0                	test   %eax,%eax
c100926c:	75 19                	jne    c1009287 <file_read+0x2c0>
c100926e:	68 c4 b1 00 c1       	push   $0xc100b1c4
c1009273:	68 28 b4 00 c1       	push   $0xc100b428
c1009278:	68 f7 01 00 00       	push   $0x1f7
c100927d:	68 74 b1 00 c1       	push   $0xc100b174
c1009282:	e8 86 70 ff ff       	call   c100030d <__PANIC>
c1009287:	8b 45 08             	mov    0x8(%ebp),%eax
c100928a:	8b 40 08             	mov    0x8(%eax),%eax
c100928d:	8b 40 40             	mov    0x40(%eax),%eax
c1009290:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009293:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1009296:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009299:	83 c2 30             	add    $0x30,%edx
c100929c:	83 ec 04             	sub    $0x4,%esp
c100929f:	6a 01                	push   $0x1
c10092a1:	50                   	push   %eax
c10092a2:	52                   	push   %edx
c10092a3:	e8 96 bc ff ff       	call   c1004f3e <ide_read>
c10092a8:	83 c4 10             	add    $0x10,%esp
c10092ab:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c10092b2:	e9 a7 00 00 00       	jmp    c100935e <file_read+0x397>
c10092b7:	8b 45 08             	mov    0x8(%ebp),%eax
c10092ba:	8b 00                	mov    (%eax),%eax
c10092bc:	c1 e8 09             	shr    $0x9,%eax
c10092bf:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10092c2:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10092c5:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10092cc:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10092cf:	01 d0                	add    %edx,%eax
c10092d1:	8b 00                	mov    (%eax),%eax
c10092d3:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c10092d6:	8b 45 08             	mov    0x8(%ebp),%eax
c10092d9:	8b 00                	mov    (%eax),%eax
c10092db:	25 ff 01 00 00       	and    $0x1ff,%eax
c10092e0:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10092e3:	b8 00 02 00 00       	mov    $0x200,%eax
c10092e8:	2b 45 c0             	sub    -0x40(%ebp),%eax
c10092eb:	89 45 bc             	mov    %eax,-0x44(%ebp)
c10092ee:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10092f1:	39 45 bc             	cmp    %eax,-0x44(%ebp)
c10092f4:	0f 46 45 bc          	cmovbe -0x44(%ebp),%eax
c10092f8:	89 45 b8             	mov    %eax,-0x48(%ebp)
c10092fb:	83 ec 04             	sub    $0x4,%esp
c10092fe:	68 00 02 00 00       	push   $0x200
c1009303:	6a 00                	push   $0x0
c1009305:	ff 75 e0             	pushl  -0x20(%ebp)
c1009308:	e8 9d 6d ff ff       	call   c10000aa <memset>
c100930d:	83 c4 10             	add    $0x10,%esp
c1009310:	83 ec 04             	sub    $0x4,%esp
c1009313:	6a 01                	push   $0x1
c1009315:	ff 75 c4             	pushl  -0x3c(%ebp)
c1009318:	ff 75 e0             	pushl  -0x20(%ebp)
c100931b:	e8 1e bc ff ff       	call   c1004f3e <ide_read>
c1009320:	83 c4 10             	add    $0x10,%esp
c1009323:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1009326:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1009329:	01 d0                	add    %edx,%eax
c100932b:	83 ec 04             	sub    $0x4,%esp
c100932e:	ff 75 b8             	pushl  -0x48(%ebp)
c1009331:	50                   	push   %eax
c1009332:	ff 75 f4             	pushl  -0xc(%ebp)
c1009335:	e8 ce 6d ff ff       	call   c1000108 <memcpy>
c100933a:	83 c4 10             	add    $0x10,%esp
c100933d:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009340:	01 45 f4             	add    %eax,-0xc(%ebp)
c1009343:	8b 45 08             	mov    0x8(%ebp),%eax
c1009346:	8b 10                	mov    (%eax),%edx
c1009348:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100934b:	01 c2                	add    %eax,%edx
c100934d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009350:	89 10                	mov    %edx,(%eax)
c1009352:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009355:	01 45 e4             	add    %eax,-0x1c(%ebp)
c1009358:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100935b:	29 45 ec             	sub    %eax,-0x14(%ebp)
c100935e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009361:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1009364:	0f 82 4d ff ff ff    	jb     c10092b7 <file_read+0x2f0>
c100936a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100936d:	83 ec 08             	sub    $0x8,%esp
c1009370:	68 30 02 00 00       	push   $0x230
c1009375:	50                   	push   %eax
c1009376:	e8 3a 97 ff ff       	call   c1002ab5 <vmm_free>
c100937b:	83 c4 10             	add    $0x10,%esp
c100937e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009381:	83 ec 08             	sub    $0x8,%esp
c1009384:	68 00 02 00 00       	push   $0x200
c1009389:	50                   	push   %eax
c100938a:	e8 26 97 ff ff       	call   c1002ab5 <vmm_free>
c100938f:	83 c4 10             	add    $0x10,%esp
c1009392:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009395:	c9                   	leave  
c1009396:	c3                   	ret    

c1009397 <inode_locate>:
c1009397:	55                   	push   %ebp
c1009398:	89 e5                	mov    %esp,%ebp
c100939a:	83 ec 20             	sub    $0x20,%esp
c100939d:	8b 45 08             	mov    0x8(%ebp),%eax
c10093a0:	8b 40 10             	mov    0x10(%eax),%eax
c10093a3:	8b 40 20             	mov    0x20(%eax),%eax
c10093a6:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10093a9:	c7 45 f8 44 00 00 00 	movl   $0x44,-0x8(%ebp)
c10093b0:	8b 45 0c             	mov    0xc(%ebp),%eax
c10093b3:	0f af 45 f8          	imul   -0x8(%ebp),%eax
c10093b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10093ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10093bd:	c1 e8 09             	shr    $0x9,%eax
c10093c0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10093c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10093c6:	25 ff 01 00 00       	and    $0x1ff,%eax
c10093cb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10093ce:	b8 00 02 00 00       	mov    $0x200,%eax
c10093d3:	2b 45 ec             	sub    -0x14(%ebp),%eax
c10093d6:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10093d9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10093dc:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c10093df:	73 08                	jae    c10093e9 <inode_locate+0x52>
c10093e1:	8b 45 10             	mov    0x10(%ebp),%eax
c10093e4:	c6 00 01             	movb   $0x1,(%eax)
c10093e7:	eb 06                	jmp    c10093ef <inode_locate+0x58>
c10093e9:	8b 45 10             	mov    0x10(%ebp),%eax
c10093ec:	c6 00 00             	movb   $0x0,(%eax)
c10093ef:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10093f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10093f5:	01 c2                	add    %eax,%edx
c10093f7:	8b 45 10             	mov    0x10(%ebp),%eax
c10093fa:	89 50 04             	mov    %edx,0x4(%eax)
c10093fd:	8b 45 10             	mov    0x10(%ebp),%eax
c1009400:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009403:	89 50 08             	mov    %edx,0x8(%eax)
c1009406:	90                   	nop
c1009407:	c9                   	leave  
c1009408:	c3                   	ret    

c1009409 <inode_sync>:
c1009409:	55                   	push   %ebp
c100940a:	89 e5                	mov    %esp,%ebp
c100940c:	57                   	push   %edi
c100940d:	56                   	push   %esi
c100940e:	53                   	push   %ebx
c100940f:	83 ec 6c             	sub    $0x6c,%esp
c1009412:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009415:	8b 00                	mov    (%eax),%eax
c1009417:	88 45 e7             	mov    %al,-0x19(%ebp)
c100941a:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
c100941e:	8d 55 d4             	lea    -0x2c(%ebp),%edx
c1009421:	52                   	push   %edx
c1009422:	50                   	push   %eax
c1009423:	ff 75 08             	pushl  0x8(%ebp)
c1009426:	e8 6c ff ff ff       	call   c1009397 <inode_locate>
c100942b:	83 c4 0c             	add    $0xc,%esp
c100942e:	83 ec 04             	sub    $0x4,%esp
c1009431:	6a 44                	push   $0x44
c1009433:	ff 75 0c             	pushl  0xc(%ebp)
c1009436:	8d 45 90             	lea    -0x70(%ebp),%eax
c1009439:	50                   	push   %eax
c100943a:	e8 c9 6c ff ff       	call   c1000108 <memcpy>
c100943f:	83 c4 10             	add    $0x10,%esp
c1009442:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
c1009449:	c6 45 9c 00          	movb   $0x0,-0x64(%ebp)
c100944d:	8b 45 10             	mov    0x10(%ebp),%eax
c1009450:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009453:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
c1009457:	84 c0                	test   %al,%al
c1009459:	74 64                	je     c10094bf <inode_sync+0xb6>
c100945b:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100945e:	83 ec 04             	sub    $0x4,%esp
c1009461:	6a 02                	push   $0x2
c1009463:	50                   	push   %eax
c1009464:	ff 75 e0             	pushl  -0x20(%ebp)
c1009467:	e8 d2 ba ff ff       	call   c1004f3e <ide_read>
c100946c:	83 c4 10             	add    $0x10,%esp
c100946f:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009472:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009475:	01 d0                	add    %edx,%eax
c1009477:	89 c2                	mov    %eax,%edx
c1009479:	8d 45 90             	lea    -0x70(%ebp),%eax
c100947c:	b9 44 00 00 00       	mov    $0x44,%ecx
c1009481:	8b 18                	mov    (%eax),%ebx
c1009483:	89 1a                	mov    %ebx,(%edx)
c1009485:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c1009489:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c100948d:	8d 5a 04             	lea    0x4(%edx),%ebx
c1009490:	83 e3 fc             	and    $0xfffffffc,%ebx
c1009493:	29 da                	sub    %ebx,%edx
c1009495:	29 d0                	sub    %edx,%eax
c1009497:	01 d1                	add    %edx,%ecx
c1009499:	83 e1 fc             	and    $0xfffffffc,%ecx
c100949c:	c1 e9 02             	shr    $0x2,%ecx
c100949f:	89 ca                	mov    %ecx,%edx
c10094a1:	89 df                	mov    %ebx,%edi
c10094a3:	89 c6                	mov    %eax,%esi
c10094a5:	89 d1                	mov    %edx,%ecx
c10094a7:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c10094a9:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10094ac:	83 ec 04             	sub    $0x4,%esp
c10094af:	6a 02                	push   $0x2
c10094b1:	50                   	push   %eax
c10094b2:	ff 75 e0             	pushl  -0x20(%ebp)
c10094b5:	e8 c1 ba ff ff       	call   c1004f7b <ide_write>
c10094ba:	83 c4 10             	add    $0x10,%esp
c10094bd:	eb 62                	jmp    c1009521 <inode_sync+0x118>
c10094bf:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10094c2:	83 ec 04             	sub    $0x4,%esp
c10094c5:	6a 01                	push   $0x1
c10094c7:	50                   	push   %eax
c10094c8:	ff 75 e0             	pushl  -0x20(%ebp)
c10094cb:	e8 6e ba ff ff       	call   c1004f3e <ide_read>
c10094d0:	83 c4 10             	add    $0x10,%esp
c10094d3:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10094d6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10094d9:	01 d0                	add    %edx,%eax
c10094db:	89 c2                	mov    %eax,%edx
c10094dd:	8d 45 90             	lea    -0x70(%ebp),%eax
c10094e0:	b9 44 00 00 00       	mov    $0x44,%ecx
c10094e5:	8b 18                	mov    (%eax),%ebx
c10094e7:	89 1a                	mov    %ebx,(%edx)
c10094e9:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c10094ed:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c10094f1:	8d 5a 04             	lea    0x4(%edx),%ebx
c10094f4:	83 e3 fc             	and    $0xfffffffc,%ebx
c10094f7:	29 da                	sub    %ebx,%edx
c10094f9:	29 d0                	sub    %edx,%eax
c10094fb:	01 d1                	add    %edx,%ecx
c10094fd:	83 e1 fc             	and    $0xfffffffc,%ecx
c1009500:	c1 e9 02             	shr    $0x2,%ecx
c1009503:	89 ca                	mov    %ecx,%edx
c1009505:	89 df                	mov    %ebx,%edi
c1009507:	89 c6                	mov    %eax,%esi
c1009509:	89 d1                	mov    %edx,%ecx
c100950b:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100950d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009510:	83 ec 04             	sub    $0x4,%esp
c1009513:	6a 01                	push   $0x1
c1009515:	50                   	push   %eax
c1009516:	ff 75 e0             	pushl  -0x20(%ebp)
c1009519:	e8 5d ba ff ff       	call   c1004f7b <ide_write>
c100951e:	83 c4 10             	add    $0x10,%esp
c1009521:	90                   	nop
c1009522:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1009525:	5b                   	pop    %ebx
c1009526:	5e                   	pop    %esi
c1009527:	5f                   	pop    %edi
c1009528:	5d                   	pop    %ebp
c1009529:	c3                   	ret    

c100952a <inode_open>:
c100952a:	55                   	push   %ebp
c100952b:	89 e5                	mov    %esp,%ebp
c100952d:	83 ec 28             	sub    $0x28,%esp
c1009530:	8d 45 e4             	lea    -0x1c(%ebp),%eax
c1009533:	50                   	push   %eax
c1009534:	ff 75 0c             	pushl  0xc(%ebp)
c1009537:	ff 75 08             	pushl  0x8(%ebp)
c100953a:	e8 58 fe ff ff       	call   c1009397 <inode_locate>
c100953f:	83 c4 0c             	add    $0xc,%esp
c1009542:	83 ec 08             	sub    $0x8,%esp
c1009545:	6a 02                	push   $0x2
c1009547:	6a 44                	push   $0x44
c1009549:	e8 42 94 ff ff       	call   c1002990 <vmm_malloc>
c100954e:	83 c4 10             	add    $0x10,%esp
c1009551:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009554:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009558:	84 c0                	test   %al,%al
c100955a:	74 2b                	je     c1009587 <inode_open+0x5d>
c100955c:	83 ec 08             	sub    $0x8,%esp
c100955f:	6a 02                	push   $0x2
c1009561:	68 00 04 00 00       	push   $0x400
c1009566:	e8 25 94 ff ff       	call   c1002990 <vmm_malloc>
c100956b:	83 c4 10             	add    $0x10,%esp
c100956e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009571:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009574:	83 ec 04             	sub    $0x4,%esp
c1009577:	6a 02                	push   $0x2
c1009579:	50                   	push   %eax
c100957a:	ff 75 f4             	pushl  -0xc(%ebp)
c100957d:	e8 bc b9 ff ff       	call   c1004f3e <ide_read>
c1009582:	83 c4 10             	add    $0x10,%esp
c1009585:	eb 29                	jmp    c10095b0 <inode_open+0x86>
c1009587:	83 ec 08             	sub    $0x8,%esp
c100958a:	6a 02                	push   $0x2
c100958c:	68 00 02 00 00       	push   $0x200
c1009591:	e8 fa 93 ff ff       	call   c1002990 <vmm_malloc>
c1009596:	83 c4 10             	add    $0x10,%esp
c1009599:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100959c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100959f:	83 ec 04             	sub    $0x4,%esp
c10095a2:	6a 01                	push   $0x1
c10095a4:	50                   	push   %eax
c10095a5:	ff 75 f4             	pushl  -0xc(%ebp)
c10095a8:	e8 91 b9 ff ff       	call   c1004f3e <ide_read>
c10095ad:	83 c4 10             	add    $0x10,%esp
c10095b0:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10095b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10095b6:	01 d0                	add    %edx,%eax
c10095b8:	83 ec 04             	sub    $0x4,%esp
c10095bb:	6a 44                	push   $0x44
c10095bd:	50                   	push   %eax
c10095be:	ff 75 f0             	pushl  -0x10(%ebp)
c10095c1:	e8 42 6b ff ff       	call   c1000108 <memcpy>
c10095c6:	83 c4 10             	add    $0x10,%esp
c10095c9:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10095cd:	84 c0                	test   %al,%al
c10095cf:	74 16                	je     c10095e7 <inode_open+0xbd>
c10095d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10095d4:	83 ec 08             	sub    $0x8,%esp
c10095d7:	68 00 04 00 00       	push   $0x400
c10095dc:	50                   	push   %eax
c10095dd:	e8 d3 94 ff ff       	call   c1002ab5 <vmm_free>
c10095e2:	83 c4 10             	add    $0x10,%esp
c10095e5:	eb 14                	jmp    c10095fb <inode_open+0xd1>
c10095e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10095ea:	83 ec 08             	sub    $0x8,%esp
c10095ed:	68 00 02 00 00       	push   $0x200
c10095f2:	50                   	push   %eax
c10095f3:	e8 bd 94 ff ff       	call   c1002ab5 <vmm_free>
c10095f8:	83 c4 10             	add    $0x10,%esp
c10095fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10095fe:	c9                   	leave  
c10095ff:	c3                   	ret    

c1009600 <inode_close>:
c1009600:	55                   	push   %ebp
c1009601:	89 e5                	mov    %esp,%ebp
c1009603:	83 ec 08             	sub    $0x8,%esp
c1009606:	8b 45 08             	mov    0x8(%ebp),%eax
c1009609:	83 ec 08             	sub    $0x8,%esp
c100960c:	6a 44                	push   $0x44
c100960e:	50                   	push   %eax
c100960f:	e8 a1 94 ff ff       	call   c1002ab5 <vmm_free>
c1009614:	83 c4 10             	add    $0x10,%esp
c1009617:	90                   	nop
c1009618:	c9                   	leave  
c1009619:	c3                   	ret    

c100961a <inode_delete>:
c100961a:	55                   	push   %ebp
c100961b:	89 e5                	mov    %esp,%ebp
c100961d:	83 ec 18             	sub    $0x18,%esp
c1009620:	81 7d 0c ff 0f 00 00 	cmpl   $0xfff,0xc(%ebp)
c1009627:	76 16                	jbe    c100963f <inode_delete+0x25>
c1009629:	68 34 b4 00 c1       	push   $0xc100b434
c100962e:	68 f0 b4 00 c1       	push   $0xc100b4f0
c1009633:	6a 6b                	push   $0x6b
c1009635:	68 44 b4 00 c1       	push   $0xc100b444
c100963a:	e8 ce 6c ff ff       	call   c100030d <__PANIC>
c100963f:	83 ec 04             	sub    $0x4,%esp
c1009642:	8d 45 e8             	lea    -0x18(%ebp),%eax
c1009645:	50                   	push   %eax
c1009646:	ff 75 0c             	pushl  0xc(%ebp)
c1009649:	ff 75 08             	pushl  0x8(%ebp)
c100964c:	e8 46 fd ff ff       	call   c1009397 <inode_locate>
c1009651:	83 c4 10             	add    $0x10,%esp
c1009654:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009657:	8b 45 08             	mov    0x8(%ebp),%eax
c100965a:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c100965e:	0f b6 c8             	movzbl %al,%ecx
c1009661:	8b 45 08             	mov    0x8(%ebp),%eax
c1009664:	8b 40 0c             	mov    0xc(%eax),%eax
c1009667:	01 c8                	add    %ecx,%eax
c1009669:	39 c2                	cmp    %eax,%edx
c100966b:	76 16                	jbe    c1009683 <inode_delete+0x69>
c100966d:	68 78 b4 00 c1       	push   $0xc100b478
c1009672:	68 f0 b4 00 c1       	push   $0xc100b4f0
c1009677:	6a 6e                	push   $0x6e
c1009679:	68 44 b4 00 c1       	push   $0xc100b444
c100967e:	e8 8a 6c ff ff       	call   c100030d <__PANIC>
c1009683:	8b 45 10             	mov    0x10(%ebp),%eax
c1009686:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009689:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
c100968d:	84 c0                	test   %al,%al
c100968f:	74 42                	je     c10096d3 <inode_delete+0xb9>
c1009691:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009694:	83 ec 04             	sub    $0x4,%esp
c1009697:	6a 02                	push   $0x2
c1009699:	50                   	push   %eax
c100969a:	ff 75 f4             	pushl  -0xc(%ebp)
c100969d:	e8 9c b8 ff ff       	call   c1004f3e <ide_read>
c10096a2:	83 c4 10             	add    $0x10,%esp
c10096a5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10096a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10096ab:	01 d0                	add    %edx,%eax
c10096ad:	83 ec 04             	sub    $0x4,%esp
c10096b0:	6a 44                	push   $0x44
c10096b2:	6a 00                	push   $0x0
c10096b4:	50                   	push   %eax
c10096b5:	e8 f0 69 ff ff       	call   c10000aa <memset>
c10096ba:	83 c4 10             	add    $0x10,%esp
c10096bd:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10096c0:	83 ec 04             	sub    $0x4,%esp
c10096c3:	6a 02                	push   $0x2
c10096c5:	50                   	push   %eax
c10096c6:	ff 75 f4             	pushl  -0xc(%ebp)
c10096c9:	e8 ad b8 ff ff       	call   c1004f7b <ide_write>
c10096ce:	83 c4 10             	add    $0x10,%esp
c10096d1:	eb 40                	jmp    c1009713 <inode_delete+0xf9>
c10096d3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10096d6:	83 ec 04             	sub    $0x4,%esp
c10096d9:	6a 01                	push   $0x1
c10096db:	50                   	push   %eax
c10096dc:	ff 75 f4             	pushl  -0xc(%ebp)
c10096df:	e8 5a b8 ff ff       	call   c1004f3e <ide_read>
c10096e4:	83 c4 10             	add    $0x10,%esp
c10096e7:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10096ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10096ed:	01 d0                	add    %edx,%eax
c10096ef:	83 ec 04             	sub    $0x4,%esp
c10096f2:	6a 44                	push   $0x44
c10096f4:	6a 00                	push   $0x0
c10096f6:	50                   	push   %eax
c10096f7:	e8 ae 69 ff ff       	call   c10000aa <memset>
c10096fc:	83 c4 10             	add    $0x10,%esp
c10096ff:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009702:	83 ec 04             	sub    $0x4,%esp
c1009705:	6a 01                	push   $0x1
c1009707:	50                   	push   %eax
c1009708:	ff 75 f4             	pushl  -0xc(%ebp)
c100970b:	e8 6b b8 ff ff       	call   c1004f7b <ide_write>
c1009710:	83 c4 10             	add    $0x10,%esp
c1009713:	90                   	nop
c1009714:	c9                   	leave  
c1009715:	c3                   	ret    

c1009716 <inode_release>:
c1009716:	55                   	push   %ebp
c1009717:	89 e5                	mov    %esp,%ebp
c1009719:	57                   	push   %edi
c100971a:	53                   	push   %ebx
c100971b:	81 ec 50 02 00 00    	sub    $0x250,%esp
c1009721:	83 ec 08             	sub    $0x8,%esp
c1009724:	ff 75 0c             	pushl  0xc(%ebp)
c1009727:	ff 75 08             	pushl  0x8(%ebp)
c100972a:	e8 fb fd ff ff       	call   c100952a <inode_open>
c100972f:	83 c4 10             	add    $0x10,%esp
c1009732:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009735:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009738:	8b 00                	mov    (%eax),%eax
c100973a:	39 45 0c             	cmp    %eax,0xc(%ebp)
c100973d:	74 19                	je     c1009758 <inode_release+0x42>
c100973f:	68 b8 b4 00 c1       	push   $0xc100b4b8
c1009744:	68 00 b5 00 c1       	push   $0xc100b500
c1009749:	68 85 00 00 00       	push   $0x85
c100974e:	68 44 b4 00 c1       	push   $0xc100b444
c1009753:	e8 b5 6b ff ff       	call   c100030d <__PANIC>
c1009758:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100975c:	c6 45 f6 0c          	movb   $0xc,-0xa(%ebp)
c1009760:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
c1009766:	b8 00 00 00 00       	mov    $0x0,%eax
c100976b:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1009770:	89 d7                	mov    %edx,%edi
c1009772:	f3 ab                	rep stos %eax,%es:(%edi)
c1009774:	eb 22                	jmp    c1009798 <inode_release+0x82>
c1009776:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c100977a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100977e:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009781:	83 c1 04             	add    $0x4,%ecx
c1009784:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1009787:	89 94 85 b0 fd ff ff 	mov    %edx,-0x250(%ebp,%eax,4)
c100978e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009792:	83 c0 01             	add    $0x1,%eax
c1009795:	88 45 f7             	mov    %al,-0x9(%ebp)
c1009798:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c100979c:	76 d8                	jbe    c1009776 <inode_release+0x60>
c100979e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10097a1:	8b 40 40             	mov    0x40(%eax),%eax
c10097a4:	85 c0                	test   %eax,%eax
c10097a6:	0f 84 b2 00 00 00    	je     c100985e <inode_release+0x148>
c10097ac:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10097af:	8b 50 40             	mov    0x40(%eax),%edx
c10097b2:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
c10097b8:	83 c0 30             	add    $0x30,%eax
c10097bb:	83 ec 04             	sub    $0x4,%esp
c10097be:	6a 01                	push   $0x1
c10097c0:	52                   	push   %edx
c10097c1:	50                   	push   %eax
c10097c2:	e8 77 b7 ff ff       	call   c1004f3e <ide_read>
c10097c7:	83 c4 10             	add    $0x10,%esp
c10097ca:	c6 45 f6 8c          	movb   $0x8c,-0xa(%ebp)
c10097ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10097d1:	8b 50 40             	mov    0x40(%eax),%edx
c10097d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10097d7:	8b 40 10             	mov    0x10(%eax),%eax
c10097da:	8b 40 28             	mov    0x28(%eax),%eax
c10097dd:	29 c2                	sub    %eax,%edx
c10097df:	89 d0                	mov    %edx,%eax
c10097e1:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10097e4:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10097e8:	75 19                	jne    c1009803 <inode_release+0xed>
c10097ea:	68 d8 b4 00 c1       	push   $0xc100b4d8
c10097ef:	68 00 b5 00 c1       	push   $0xc100b500
c10097f4:	68 9d 00 00 00       	push   $0x9d
c10097f9:	68 44 b4 00 c1       	push   $0xc100b444
c10097fe:	e8 0a 6b ff ff       	call   c100030d <__PANIC>
c1009803:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009806:	c1 e8 03             	shr    $0x3,%eax
c1009809:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100980c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100980f:	83 e0 07             	and    $0x7,%eax
c1009812:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009815:	8b 45 08             	mov    0x8(%ebp),%eax
c1009818:	8b 50 18             	mov    0x18(%eax),%edx
c100981b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100981e:	01 d0                	add    %edx,%eax
c1009820:	0f b6 00             	movzbl (%eax),%eax
c1009823:	89 c2                	mov    %eax,%edx
c1009825:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009828:	bb 01 00 00 00       	mov    $0x1,%ebx
c100982d:	89 c1                	mov    %eax,%ecx
c100982f:	d3 e3                	shl    %cl,%ebx
c1009831:	89 d8                	mov    %ebx,%eax
c1009833:	f7 d0                	not    %eax
c1009835:	89 d1                	mov    %edx,%ecx
c1009837:	21 c1                	and    %eax,%ecx
c1009839:	8b 45 08             	mov    0x8(%ebp),%eax
c100983c:	8b 50 18             	mov    0x18(%eax),%edx
c100983f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009842:	01 d0                	add    %edx,%eax
c1009844:	89 ca                	mov    %ecx,%edx
c1009846:	88 10                	mov    %dl,(%eax)
c1009848:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100984d:	83 ec 04             	sub    $0x4,%esp
c1009850:	6a 01                	push   $0x1
c1009852:	ff 75 ec             	pushl  -0x14(%ebp)
c1009855:	50                   	push   %eax
c1009856:	e8 01 eb ff ff       	call   c100835c <bitmap_sync>
c100985b:	83 c4 10             	add    $0x10,%esp
c100985e:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1009862:	e9 b9 00 00 00       	jmp    c1009920 <inode_release+0x20a>
c1009867:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100986b:	8b 84 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%eax
c1009872:	85 c0                	test   %eax,%eax
c1009874:	0f 84 9c 00 00 00    	je     c1009916 <inode_release+0x200>
c100987a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1009881:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009885:	8b 94 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%edx
c100988c:	8b 45 08             	mov    0x8(%ebp),%eax
c100988f:	8b 40 10             	mov    0x10(%eax),%eax
c1009892:	8b 40 28             	mov    0x28(%eax),%eax
c1009895:	29 c2                	sub    %eax,%edx
c1009897:	89 d0                	mov    %edx,%eax
c1009899:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100989c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10098a0:	75 19                	jne    c10098bb <inode_release+0x1a5>
c10098a2:	68 d8 b4 00 c1       	push   $0xc100b4d8
c10098a7:	68 00 b5 00 c1       	push   $0xc100b500
c10098ac:	68 aa 00 00 00       	push   $0xaa
c10098b1:	68 44 b4 00 c1       	push   $0xc100b444
c10098b6:	e8 52 6a ff ff       	call   c100030d <__PANIC>
c10098bb:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10098be:	c1 e8 03             	shr    $0x3,%eax
c10098c1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10098c4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10098c7:	83 e0 07             	and    $0x7,%eax
c10098ca:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10098cd:	8b 45 08             	mov    0x8(%ebp),%eax
c10098d0:	8b 50 18             	mov    0x18(%eax),%edx
c10098d3:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10098d6:	01 d0                	add    %edx,%eax
c10098d8:	0f b6 00             	movzbl (%eax),%eax
c10098db:	89 c2                	mov    %eax,%edx
c10098dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10098e0:	bb 01 00 00 00       	mov    $0x1,%ebx
c10098e5:	89 c1                	mov    %eax,%ecx
c10098e7:	d3 e3                	shl    %cl,%ebx
c10098e9:	89 d8                	mov    %ebx,%eax
c10098eb:	f7 d0                	not    %eax
c10098ed:	89 d1                	mov    %edx,%ecx
c10098ef:	21 c1                	and    %eax,%ecx
c10098f1:	8b 45 08             	mov    0x8(%ebp),%eax
c10098f4:	8b 50 18             	mov    0x18(%eax),%edx
c10098f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10098fa:	01 d0                	add    %edx,%eax
c10098fc:	89 ca                	mov    %ecx,%edx
c10098fe:	88 10                	mov    %dl,(%eax)
c1009900:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009905:	83 ec 04             	sub    $0x4,%esp
c1009908:	6a 01                	push   $0x1
c100990a:	ff 75 ec             	pushl  -0x14(%ebp)
c100990d:	50                   	push   %eax
c100990e:	e8 49 ea ff ff       	call   c100835c <bitmap_sync>
c1009913:	83 c4 10             	add    $0x10,%esp
c1009916:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100991a:	83 c0 01             	add    $0x1,%eax
c100991d:	88 45 f7             	mov    %al,-0x9(%ebp)
c1009920:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009924:	3a 45 f6             	cmp    -0xa(%ebp),%al
c1009927:	0f 82 3a ff ff ff    	jb     c1009867 <inode_release+0x151>
c100992d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009930:	c1 e8 03             	shr    $0x3,%eax
c1009933:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009936:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009939:	83 e0 07             	and    $0x7,%eax
c100993c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100993f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009942:	8b 50 20             	mov    0x20(%eax),%edx
c1009945:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009948:	01 d0                	add    %edx,%eax
c100994a:	0f b6 00             	movzbl (%eax),%eax
c100994d:	89 c2                	mov    %eax,%edx
c100994f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009952:	bb 01 00 00 00       	mov    $0x1,%ebx
c1009957:	89 c1                	mov    %eax,%ecx
c1009959:	d3 e3                	shl    %cl,%ebx
c100995b:	89 d8                	mov    %ebx,%eax
c100995d:	f7 d0                	not    %eax
c100995f:	89 d1                	mov    %edx,%ecx
c1009961:	21 c1                	and    %eax,%ecx
c1009963:	8b 45 08             	mov    0x8(%ebp),%eax
c1009966:	8b 50 20             	mov    0x20(%eax),%edx
c1009969:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100996c:	01 d0                	add    %edx,%eax
c100996e:	89 ca                	mov    %ecx,%edx
c1009970:	88 10                	mov    %dl,(%eax)
c1009972:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009977:	83 ec 04             	sub    $0x4,%esp
c100997a:	6a 00                	push   $0x0
c100997c:	ff 75 0c             	pushl  0xc(%ebp)
c100997f:	50                   	push   %eax
c1009980:	e8 d7 e9 ff ff       	call   c100835c <bitmap_sync>
c1009985:	83 c4 10             	add    $0x10,%esp
c1009988:	83 ec 08             	sub    $0x8,%esp
c100998b:	6a 02                	push   $0x2
c100998d:	68 00 04 00 00       	push   $0x400
c1009992:	e8 f9 8f ff ff       	call   c1002990 <vmm_malloc>
c1009997:	83 c4 10             	add    $0x10,%esp
c100999a:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100999d:	83 ec 04             	sub    $0x4,%esp
c10099a0:	ff 75 e0             	pushl  -0x20(%ebp)
c10099a3:	ff 75 0c             	pushl  0xc(%ebp)
c10099a6:	ff 75 08             	pushl  0x8(%ebp)
c10099a9:	e8 6c fc ff ff       	call   c100961a <inode_delete>
c10099ae:	83 c4 10             	add    $0x10,%esp
c10099b1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10099b4:	83 ec 08             	sub    $0x8,%esp
c10099b7:	68 00 04 00 00       	push   $0x400
c10099bc:	50                   	push   %eax
c10099bd:	e8 f3 90 ff ff       	call   c1002ab5 <vmm_free>
c10099c2:	83 c4 10             	add    $0x10,%esp
c10099c5:	83 ec 0c             	sub    $0xc,%esp
c10099c8:	ff 75 f0             	pushl  -0x10(%ebp)
c10099cb:	e8 30 fc ff ff       	call   c1009600 <inode_close>
c10099d0:	83 c4 10             	add    $0x10,%esp
c10099d3:	90                   	nop
c10099d4:	8d 65 f8             	lea    -0x8(%ebp),%esp
c10099d7:	5b                   	pop    %ebx
c10099d8:	5f                   	pop    %edi
c10099d9:	5d                   	pop    %ebp
c10099da:	c3                   	ret    

c10099db <inode_init>:
c10099db:	55                   	push   %ebp
c10099dc:	89 e5                	mov    %esp,%ebp
c10099de:	83 ec 10             	sub    $0x10,%esp
c10099e1:	8b 45 0c             	mov    0xc(%ebp),%eax
c10099e4:	8b 55 08             	mov    0x8(%ebp),%edx
c10099e7:	89 10                	mov    %edx,(%eax)
c10099e9:	8b 45 0c             	mov    0xc(%ebp),%eax
c10099ec:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10099f3:	8b 45 0c             	mov    0xc(%ebp),%eax
c10099f6:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c10099fd:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009a00:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1009a04:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1009a0b:	eb 14                	jmp    c1009a21 <inode_init+0x46>
c1009a0d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009a10:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009a13:	83 c2 04             	add    $0x4,%edx
c1009a16:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1009a1d:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1009a21:	83 7d fc 0c          	cmpl   $0xc,-0x4(%ebp)
c1009a25:	7e e6                	jle    c1009a0d <inode_init+0x32>
c1009a27:	90                   	nop
c1009a28:	90                   	nop
c1009a29:	c9                   	leave  
c1009a2a:	c3                   	ret    
