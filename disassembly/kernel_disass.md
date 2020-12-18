
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
  100252:	68 b4 9f 00 c1       	push   $0xc1009fb4
  100257:	68 20 a0 00 c1       	push   $0xc100a020
  10025c:	6a 51                	push   $0x51
  10025e:	68 ec 9f 00 c1       	push   $0xc1009fec
  100263:	e8 a5 00 f0 c0       	call   c100030d <__PANIC>
  100268:	e8 84 1c f0 c0       	call   c1001ef1 <main>
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

4000002f <test_fork>:
4000002f:	55                   	push   %ebp
40000030:	89 e5                	mov    %esp,%ebp
40000032:	83 ec 18             	sub    $0x18,%esp
40000035:	e8 d2 02 00 00       	call   4000030c <fork>
4000003a:	89 45 f4             	mov    %eax,-0xc(%ebp)
4000003d:	83 ec 08             	sub    $0x8,%esp
40000040:	ff 75 f4             	pushl  -0xc(%ebp)
40000043:	68 e8 14 00 40       	push   $0x400014e8
40000048:	e8 ce 02 00 00       	call   4000031b <printf>
4000004d:	83 c4 10             	add    $0x10,%esp
40000050:	eb fe                	jmp    40000050 <test_fork+0x21>

40000052 <user_main>:
40000052:	55                   	push   %ebp
40000053:	89 e5                	mov    %esp,%ebp
40000055:	83 ec 48             	sub    $0x48,%esp
40000058:	c7 45 c6 48 65 6c 6c 	movl   $0x6c6c6548,-0x3a(%ebp)
4000005f:	c7 45 ca 6f 2c 49 27 	movl   $0x27492c6f,-0x36(%ebp)
40000066:	c7 45 ce 6d 20 61 20 	movl   $0x2061206d,-0x32(%ebp)
4000006d:	c7 45 d2 55 73 65 72 	movl   $0x72657355,-0x2e(%ebp)
40000074:	c7 45 d6 20 46 75 6e 	movl   $0x6e754620,-0x2a(%ebp)
4000007b:	c7 45 da 63 74 69 6f 	movl   $0x6f697463,-0x26(%ebp)
40000082:	c7 45 de 6e 21 4e 69 	movl   $0x694e216e,-0x22(%ebp)
40000089:	c7 45 e2 63 65 20 74 	movl   $0x74206563,-0x1e(%ebp)
40000090:	c7 45 e6 6f 20 6d 65 	movl   $0x656d206f,-0x1a(%ebp)
40000097:	c7 45 ea 65 74 20 79 	movl   $0x79207465,-0x16(%ebp)
4000009e:	c7 45 ee 6f 75 21 0a 	movl   $0xa21756f,-0x12(%ebp)
400000a5:	c7 45 f2 00 00 00 00 	movl   $0x0,-0xe(%ebp)
400000ac:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
400000b2:	e8 78 ff ff ff       	call   4000002f <test_fork>
400000b7:	90                   	nop
400000b8:	c9                   	leave  
400000b9:	c3                   	ret    

400000ba <user_syscall>:
400000ba:	55                   	push   %ebp
400000bb:	89 e5                	mov    %esp,%ebp
400000bd:	57                   	push   %edi
400000be:	56                   	push   %esi
400000bf:	53                   	push   %ebx
400000c0:	83 ec 20             	sub    $0x20,%esp
400000c3:	8d 45 0c             	lea    0xc(%ebp),%eax
400000c6:	89 45 f0             	mov    %eax,-0x10(%ebp)
400000c9:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
400000d0:	eb 15                	jmp    400000e7 <user_syscall+0x2d>
400000d2:	83 45 f0 04          	addl   $0x4,-0x10(%ebp)
400000d6:	8b 45 f0             	mov    -0x10(%ebp),%eax
400000d9:	8b 50 fc             	mov    -0x4(%eax),%edx
400000dc:	8b 45 ec             	mov    -0x14(%ebp),%eax
400000df:	89 54 85 d4          	mov    %edx,-0x2c(%ebp,%eax,4)
400000e3:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
400000e7:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
400000eb:	7e e5                	jle    400000d2 <user_syscall+0x18>
400000ed:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
400000f4:	8b 45 08             	mov    0x8(%ebp),%eax
400000f7:	8b 55 d4             	mov    -0x2c(%ebp),%edx
400000fa:	8b 4d d8             	mov    -0x28(%ebp),%ecx
400000fd:	8b 5d dc             	mov    -0x24(%ebp),%ebx
40000100:	8b 7d e0             	mov    -0x20(%ebp),%edi
40000103:	8b 75 e4             	mov    -0x1c(%ebp),%esi
40000106:	cd 80                	int    $0x80
40000108:	89 45 e8             	mov    %eax,-0x18(%ebp)
4000010b:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000010e:	83 c4 20             	add    $0x20,%esp
40000111:	5b                   	pop    %ebx
40000112:	5e                   	pop    %esi
40000113:	5f                   	pop    %edi
40000114:	5d                   	pop    %ebp
40000115:	c3                   	ret    

40000116 <user_sys_getpid>:
40000116:	55                   	push   %ebp
40000117:	89 e5                	mov    %esp,%ebp
40000119:	6a 12                	push   $0x12
4000011b:	e8 9a ff ff ff       	call   400000ba <user_syscall>
40000120:	83 c4 04             	add    $0x4,%esp
40000123:	c9                   	leave  
40000124:	c3                   	ret    

40000125 <user_print_char>:
40000125:	55                   	push   %ebp
40000126:	89 e5                	mov    %esp,%ebp
40000128:	83 ec 04             	sub    $0x4,%esp
4000012b:	8b 45 08             	mov    0x8(%ebp),%eax
4000012e:	88 45 fc             	mov    %al,-0x4(%ebp)
40000131:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
40000135:	50                   	push   %eax
40000136:	6a 24                	push   $0x24
40000138:	e8 7d ff ff ff       	call   400000ba <user_syscall>
4000013d:	83 c4 08             	add    $0x8,%esp
40000140:	90                   	nop
40000141:	c9                   	leave  
40000142:	c3                   	ret    

40000143 <user_print_string>:
40000143:	55                   	push   %ebp
40000144:	89 e5                	mov    %esp,%ebp
40000146:	ff 75 08             	pushl  0x8(%ebp)
40000149:	6a 25                	push   $0x25
4000014b:	e8 6a ff ff ff       	call   400000ba <user_syscall>
40000150:	83 c4 08             	add    $0x8,%esp
40000153:	90                   	nop
40000154:	c9                   	leave  
40000155:	c3                   	ret    

40000156 <user_print_num>:
40000156:	55                   	push   %ebp
40000157:	89 e5                	mov    %esp,%ebp
40000159:	83 ec 08             	sub    $0x8,%esp
4000015c:	8b 55 0c             	mov    0xc(%ebp),%edx
4000015f:	8b 45 10             	mov    0x10(%ebp),%eax
40000162:	88 55 fc             	mov    %dl,-0x4(%ebp)
40000165:	88 45 f8             	mov    %al,-0x8(%ebp)
40000168:	0f be 55 f8          	movsbl -0x8(%ebp),%edx
4000016c:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
40000170:	ff 75 14             	pushl  0x14(%ebp)
40000173:	52                   	push   %edx
40000174:	50                   	push   %eax
40000175:	ff 75 08             	pushl  0x8(%ebp)
40000178:	6a 26                	push   $0x26
4000017a:	e8 3b ff ff ff       	call   400000ba <user_syscall>
4000017f:	83 c4 14             	add    $0x14,%esp
40000182:	90                   	nop
40000183:	c9                   	leave  
40000184:	c3                   	ret    

40000185 <user_backtrace>:
40000185:	55                   	push   %ebp
40000186:	89 e5                	mov    %esp,%ebp
40000188:	6a 27                	push   $0x27
4000018a:	e8 2b ff ff ff       	call   400000ba <user_syscall>
4000018f:	83 c4 04             	add    $0x4,%esp
40000192:	90                   	nop
40000193:	c9                   	leave  
40000194:	c3                   	ret    

40000195 <read>:
40000195:	55                   	push   %ebp
40000196:	89 e5                	mov    %esp,%ebp
40000198:	ff 75 10             	pushl  0x10(%ebp)
4000019b:	ff 75 0c             	pushl  0xc(%ebp)
4000019e:	ff 75 08             	pushl  0x8(%ebp)
400001a1:	6a 18                	push   $0x18
400001a3:	e8 12 ff ff ff       	call   400000ba <user_syscall>
400001a8:	83 c4 10             	add    $0x10,%esp
400001ab:	c9                   	leave  
400001ac:	c3                   	ret    

400001ad <open>:
400001ad:	55                   	push   %ebp
400001ae:	89 e5                	mov    %esp,%ebp
400001b0:	83 ec 04             	sub    $0x4,%esp
400001b3:	8b 45 0c             	mov    0xc(%ebp),%eax
400001b6:	88 45 fc             	mov    %al,-0x4(%ebp)
400001b9:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
400001bd:	50                   	push   %eax
400001be:	ff 75 08             	pushl  0x8(%ebp)
400001c1:	6a 28                	push   $0x28
400001c3:	e8 f2 fe ff ff       	call   400000ba <user_syscall>
400001c8:	83 c4 0c             	add    $0xc,%esp
400001cb:	c9                   	leave  
400001cc:	c3                   	ret    

400001cd <close>:
400001cd:	55                   	push   %ebp
400001ce:	89 e5                	mov    %esp,%ebp
400001d0:	ff 75 08             	pushl  0x8(%ebp)
400001d3:	6a 29                	push   $0x29
400001d5:	e8 e0 fe ff ff       	call   400000ba <user_syscall>
400001da:	83 c4 08             	add    $0x8,%esp
400001dd:	c9                   	leave  
400001de:	c3                   	ret    

400001df <write>:
400001df:	55                   	push   %ebp
400001e0:	89 e5                	mov    %esp,%ebp
400001e2:	ff 75 10             	pushl  0x10(%ebp)
400001e5:	ff 75 0c             	pushl  0xc(%ebp)
400001e8:	ff 75 08             	pushl  0x8(%ebp)
400001eb:	6a 2a                	push   $0x2a
400001ed:	e8 c8 fe ff ff       	call   400000ba <user_syscall>
400001f2:	83 c4 10             	add    $0x10,%esp
400001f5:	c9                   	leave  
400001f6:	c3                   	ret    

400001f7 <lseek>:
400001f7:	55                   	push   %ebp
400001f8:	89 e5                	mov    %esp,%ebp
400001fa:	83 ec 04             	sub    $0x4,%esp
400001fd:	8b 45 10             	mov    0x10(%ebp),%eax
40000200:	88 45 fc             	mov    %al,-0x4(%ebp)
40000203:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
40000207:	50                   	push   %eax
40000208:	ff 75 0c             	pushl  0xc(%ebp)
4000020b:	ff 75 08             	pushl  0x8(%ebp)
4000020e:	6a 2b                	push   $0x2b
40000210:	e8 a5 fe ff ff       	call   400000ba <user_syscall>
40000215:	83 c4 10             	add    $0x10,%esp
40000218:	c9                   	leave  
40000219:	c3                   	ret    

4000021a <unlink>:
4000021a:	55                   	push   %ebp
4000021b:	89 e5                	mov    %esp,%ebp
4000021d:	ff 75 08             	pushl  0x8(%ebp)
40000220:	6a 2c                	push   $0x2c
40000222:	e8 93 fe ff ff       	call   400000ba <user_syscall>
40000227:	83 c4 08             	add    $0x8,%esp
4000022a:	c9                   	leave  
4000022b:	c3                   	ret    

4000022c <mkdir>:
4000022c:	55                   	push   %ebp
4000022d:	89 e5                	mov    %esp,%ebp
4000022f:	ff 75 08             	pushl  0x8(%ebp)
40000232:	6a 2d                	push   $0x2d
40000234:	e8 81 fe ff ff       	call   400000ba <user_syscall>
40000239:	83 c4 08             	add    $0x8,%esp
4000023c:	c9                   	leave  
4000023d:	c3                   	ret    

4000023e <rmdir>:
4000023e:	55                   	push   %ebp
4000023f:	89 e5                	mov    %esp,%ebp
40000241:	ff 75 08             	pushl  0x8(%ebp)
40000244:	6a 2e                	push   $0x2e
40000246:	e8 6f fe ff ff       	call   400000ba <user_syscall>
4000024b:	83 c4 08             	add    $0x8,%esp
4000024e:	c9                   	leave  
4000024f:	c3                   	ret    

40000250 <rewinddir>:
40000250:	55                   	push   %ebp
40000251:	89 e5                	mov    %esp,%ebp
40000253:	ff 75 08             	pushl  0x8(%ebp)
40000256:	6a 2f                	push   $0x2f
40000258:	e8 5d fe ff ff       	call   400000ba <user_syscall>
4000025d:	83 c4 08             	add    $0x8,%esp
40000260:	90                   	nop
40000261:	c9                   	leave  
40000262:	c3                   	ret    

40000263 <getcwd>:
40000263:	55                   	push   %ebp
40000264:	89 e5                	mov    %esp,%ebp
40000266:	ff 75 0c             	pushl  0xc(%ebp)
40000269:	ff 75 08             	pushl  0x8(%ebp)
4000026c:	6a 30                	push   $0x30
4000026e:	e8 47 fe ff ff       	call   400000ba <user_syscall>
40000273:	83 c4 0c             	add    $0xc,%esp
40000276:	c9                   	leave  
40000277:	c3                   	ret    

40000278 <chdir>:
40000278:	55                   	push   %ebp
40000279:	89 e5                	mov    %esp,%ebp
4000027b:	ff 75 08             	pushl  0x8(%ebp)
4000027e:	6a 31                	push   $0x31
40000280:	e8 35 fe ff ff       	call   400000ba <user_syscall>
40000285:	83 c4 08             	add    $0x8,%esp
40000288:	c9                   	leave  
40000289:	c3                   	ret    

4000028a <stat>:
4000028a:	55                   	push   %ebp
4000028b:	89 e5                	mov    %esp,%ebp
4000028d:	ff 75 0c             	pushl  0xc(%ebp)
40000290:	ff 75 08             	pushl  0x8(%ebp)
40000293:	6a 32                	push   $0x32
40000295:	e8 20 fe ff ff       	call   400000ba <user_syscall>
4000029a:	83 c4 0c             	add    $0xc,%esp
4000029d:	c9                   	leave  
4000029e:	c3                   	ret    

4000029f <opendir>:
4000029f:	55                   	push   %ebp
400002a0:	89 e5                	mov    %esp,%ebp
400002a2:	ff 75 08             	pushl  0x8(%ebp)
400002a5:	6a 33                	push   $0x33
400002a7:	e8 0e fe ff ff       	call   400000ba <user_syscall>
400002ac:	83 c4 08             	add    $0x8,%esp
400002af:	c9                   	leave  
400002b0:	c3                   	ret    

400002b1 <closedir>:
400002b1:	55                   	push   %ebp
400002b2:	89 e5                	mov    %esp,%ebp
400002b4:	ff 75 08             	pushl  0x8(%ebp)
400002b7:	6a 34                	push   $0x34
400002b9:	e8 fc fd ff ff       	call   400000ba <user_syscall>
400002be:	83 c4 08             	add    $0x8,%esp
400002c1:	c9                   	leave  
400002c2:	c3                   	ret    

400002c3 <readdir>:
400002c3:	55                   	push   %ebp
400002c4:	89 e5                	mov    %esp,%ebp
400002c6:	ff 75 08             	pushl  0x8(%ebp)
400002c9:	6a 35                	push   $0x35
400002cb:	e8 ea fd ff ff       	call   400000ba <user_syscall>
400002d0:	83 c4 08             	add    $0x8,%esp
400002d3:	c9                   	leave  
400002d4:	c3                   	ret    

400002d5 <ps>:
400002d5:	55                   	push   %ebp
400002d6:	89 e5                	mov    %esp,%ebp
400002d8:	6a 36                	push   $0x36
400002da:	e8 db fd ff ff       	call   400000ba <user_syscall>
400002df:	83 c4 04             	add    $0x4,%esp
400002e2:	c9                   	leave  
400002e3:	c3                   	ret    

400002e4 <malloc>:
400002e4:	55                   	push   %ebp
400002e5:	89 e5                	mov    %esp,%ebp
400002e7:	ff 75 08             	pushl  0x8(%ebp)
400002ea:	6a 37                	push   $0x37
400002ec:	e8 c9 fd ff ff       	call   400000ba <user_syscall>
400002f1:	83 c4 08             	add    $0x8,%esp
400002f4:	c9                   	leave  
400002f5:	c3                   	ret    

400002f6 <free>:
400002f6:	55                   	push   %ebp
400002f7:	89 e5                	mov    %esp,%ebp
400002f9:	ff 75 0c             	pushl  0xc(%ebp)
400002fc:	ff 75 08             	pushl  0x8(%ebp)
400002ff:	6a 38                	push   $0x38
40000301:	e8 b4 fd ff ff       	call   400000ba <user_syscall>
40000306:	83 c4 0c             	add    $0xc,%esp
40000309:	90                   	nop
4000030a:	c9                   	leave  
4000030b:	c3                   	ret    

4000030c <fork>:
4000030c:	55                   	push   %ebp
4000030d:	89 e5                	mov    %esp,%ebp
4000030f:	6a 02                	push   $0x2
40000311:	e8 a4 fd ff ff       	call   400000ba <user_syscall>
40000316:	83 c4 04             	add    $0x4,%esp
40000319:	c9                   	leave  
4000031a:	c3                   	ret    

4000031b <printf>:
4000031b:	55                   	push   %ebp
4000031c:	89 e5                	mov    %esp,%ebp
4000031e:	83 ec 38             	sub    $0x38,%esp
40000321:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
40000325:	8d 45 0c             	lea    0xc(%ebp),%eax
40000328:	89 45 f4             	mov    %eax,-0xc(%ebp)
4000032b:	e9 da 02 00 00       	jmp    4000060a <printf+0x2ef>
40000330:	8b 45 08             	mov    0x8(%ebp),%eax
40000333:	0f b6 00             	movzbl (%eax),%eax
40000336:	3c 25                	cmp    $0x25,%al
40000338:	0f 85 aa 02 00 00    	jne    400005e8 <printf+0x2cd>
4000033e:	90                   	nop
4000033f:	8b 45 08             	mov    0x8(%ebp),%eax
40000342:	83 c0 01             	add    $0x1,%eax
40000345:	89 45 08             	mov    %eax,0x8(%ebp)
40000348:	8b 45 08             	mov    0x8(%ebp),%eax
4000034b:	0f b6 00             	movzbl (%eax),%eax
4000034e:	0f be c0             	movsbl %al,%eax
40000351:	83 e8 30             	sub    $0x30,%eax
40000354:	83 f8 48             	cmp    $0x48,%eax
40000357:	0f 87 6f 02 00 00    	ja     400005cc <printf+0x2b1>
4000035d:	8b 04 85 18 15 00 40 	mov    0x40001518(,%eax,4),%eax
40000364:	ff e0                	jmp    *%eax
40000366:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
4000036a:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000036d:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
40000371:	88 45 d7             	mov    %al,-0x29(%ebp)
40000374:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
40000378:	83 ec 0c             	sub    $0xc,%esp
4000037b:	50                   	push   %eax
4000037c:	e8 a4 fd ff ff       	call   40000125 <user_print_char>
40000381:	83 c4 10             	add    $0x10,%esp
40000384:	e9 54 02 00 00       	jmp    400005dd <printf+0x2c2>
40000389:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
4000038d:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000390:	8b 40 fc             	mov    -0x4(%eax),%eax
40000393:	89 45 dc             	mov    %eax,-0x24(%ebp)
40000396:	83 ec 0c             	sub    $0xc,%esp
40000399:	ff 75 dc             	pushl  -0x24(%ebp)
4000039c:	e8 a2 fd ff ff       	call   40000143 <user_print_string>
400003a1:	83 c4 10             	add    $0x10,%esp
400003a4:	e9 34 02 00 00       	jmp    400005dd <printf+0x2c2>
400003a9:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400003ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
400003b0:	8b 40 fc             	mov    -0x4(%eax),%eax
400003b3:	89 45 d8             	mov    %eax,-0x28(%ebp)
400003b6:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400003ba:	74 19                	je     400003d5 <printf+0xba>
400003bc:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
400003c0:	6a 01                	push   $0x1
400003c2:	50                   	push   %eax
400003c3:	6a 0a                	push   $0xa
400003c5:	ff 75 d8             	pushl  -0x28(%ebp)
400003c8:	e8 89 fd ff ff       	call   40000156 <user_print_num>
400003cd:	83 c4 10             	add    $0x10,%esp
400003d0:	e9 08 02 00 00       	jmp    400005dd <printf+0x2c2>
400003d5:	6a 00                	push   $0x0
400003d7:	6a 14                	push   $0x14
400003d9:	6a 0a                	push   $0xa
400003db:	ff 75 d8             	pushl  -0x28(%ebp)
400003de:	e8 73 fd ff ff       	call   40000156 <user_print_num>
400003e3:	83 c4 10             	add    $0x10,%esp
400003e6:	e9 f2 01 00 00       	jmp    400005dd <printf+0x2c2>
400003eb:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400003ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
400003f2:	8b 40 fc             	mov    -0x4(%eax),%eax
400003f5:	89 45 d0             	mov    %eax,-0x30(%ebp)
400003f8:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400003fc:	74 19                	je     40000417 <printf+0xfc>
400003fe:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
40000402:	6a 01                	push   $0x1
40000404:	50                   	push   %eax
40000405:	6a 10                	push   $0x10
40000407:	ff 75 d0             	pushl  -0x30(%ebp)
4000040a:	e8 47 fd ff ff       	call   40000156 <user_print_num>
4000040f:	83 c4 10             	add    $0x10,%esp
40000412:	e9 c6 01 00 00       	jmp    400005dd <printf+0x2c2>
40000417:	6a 00                	push   $0x0
40000419:	6a 14                	push   $0x14
4000041b:	6a 10                	push   $0x10
4000041d:	ff 75 d0             	pushl  -0x30(%ebp)
40000420:	e8 31 fd ff ff       	call   40000156 <user_print_num>
40000425:	83 c4 10             	add    $0x10,%esp
40000428:	e9 b0 01 00 00       	jmp    400005dd <printf+0x2c2>
4000042d:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
40000431:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000434:	8b 50 fc             	mov    -0x4(%eax),%edx
40000437:	8b 40 f8             	mov    -0x8(%eax),%eax
4000043a:	89 45 c8             	mov    %eax,-0x38(%ebp)
4000043d:	89 55 cc             	mov    %edx,-0x34(%ebp)
40000440:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000444:	74 1a                	je     40000460 <printf+0x145>
40000446:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
4000044a:	8b 45 c8             	mov    -0x38(%ebp),%eax
4000044d:	6a 01                	push   $0x1
4000044f:	52                   	push   %edx
40000450:	6a 10                	push   $0x10
40000452:	50                   	push   %eax
40000453:	e8 fe fc ff ff       	call   40000156 <user_print_num>
40000458:	83 c4 10             	add    $0x10,%esp
4000045b:	e9 7d 01 00 00       	jmp    400005dd <printf+0x2c2>
40000460:	8b 45 c8             	mov    -0x38(%ebp),%eax
40000463:	6a 00                	push   $0x0
40000465:	6a 14                	push   $0x14
40000467:	6a 10                	push   $0x10
40000469:	50                   	push   %eax
4000046a:	e8 e7 fc ff ff       	call   40000156 <user_print_num>
4000046f:	83 c4 10             	add    $0x10,%esp
40000472:	e9 66 01 00 00       	jmp    400005dd <printf+0x2c2>
40000477:	8b 45 08             	mov    0x8(%ebp),%eax
4000047a:	83 c0 01             	add    $0x1,%eax
4000047d:	89 45 08             	mov    %eax,0x8(%ebp)
40000480:	8b 45 08             	mov    0x8(%ebp),%eax
40000483:	0f b6 00             	movzbl (%eax),%eax
40000486:	0f be c0             	movsbl %al,%eax
40000489:	83 f8 78             	cmp    $0x78,%eax
4000048c:	0f 84 80 00 00 00    	je     40000512 <printf+0x1f7>
40000492:	83 f8 78             	cmp    $0x78,%eax
40000495:	0f 8f f9 00 00 00    	jg     40000594 <printf+0x279>
4000049b:	83 f8 6c             	cmp    $0x6c,%eax
4000049e:	0f 84 ac 00 00 00    	je     40000550 <printf+0x235>
400004a4:	83 f8 6c             	cmp    $0x6c,%eax
400004a7:	0f 8f e7 00 00 00    	jg     40000594 <printf+0x279>
400004ad:	83 f8 64             	cmp    $0x64,%eax
400004b0:	74 1c                	je     400004ce <printf+0x1b3>
400004b2:	83 f8 64             	cmp    $0x64,%eax
400004b5:	0f 8f d9 00 00 00    	jg     40000594 <printf+0x279>
400004bb:	83 f8 4c             	cmp    $0x4c,%eax
400004be:	0f 84 8c 00 00 00    	je     40000550 <printf+0x235>
400004c4:	83 f8 58             	cmp    $0x58,%eax
400004c7:	74 49                	je     40000512 <printf+0x1f7>
400004c9:	e9 c6 00 00 00       	jmp    40000594 <printf+0x279>
400004ce:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400004d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
400004d5:	8b 40 fc             	mov    -0x4(%eax),%eax
400004d8:	89 45 ec             	mov    %eax,-0x14(%ebp)
400004db:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400004df:	74 1a                	je     400004fb <printf+0x1e0>
400004e1:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
400004e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
400004e8:	6a 01                	push   $0x1
400004ea:	52                   	push   %edx
400004eb:	6a 0a                	push   $0xa
400004ed:	50                   	push   %eax
400004ee:	e8 63 fc ff ff       	call   40000156 <user_print_num>
400004f3:	83 c4 10             	add    $0x10,%esp
400004f6:	e9 9a 00 00 00       	jmp    40000595 <printf+0x27a>
400004fb:	8b 45 ec             	mov    -0x14(%ebp),%eax
400004fe:	6a 00                	push   $0x0
40000500:	6a 14                	push   $0x14
40000502:	6a 0a                	push   $0xa
40000504:	50                   	push   %eax
40000505:	e8 4c fc ff ff       	call   40000156 <user_print_num>
4000050a:	83 c4 10             	add    $0x10,%esp
4000050d:	e9 83 00 00 00       	jmp    40000595 <printf+0x27a>
40000512:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000516:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000519:	8b 40 fc             	mov    -0x4(%eax),%eax
4000051c:	89 45 e8             	mov    %eax,-0x18(%ebp)
4000051f:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000523:	74 17                	je     4000053c <printf+0x221>
40000525:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
40000529:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000052c:	6a 01                	push   $0x1
4000052e:	52                   	push   %edx
4000052f:	6a 10                	push   $0x10
40000531:	50                   	push   %eax
40000532:	e8 1f fc ff ff       	call   40000156 <user_print_num>
40000537:	83 c4 10             	add    $0x10,%esp
4000053a:	eb 59                	jmp    40000595 <printf+0x27a>
4000053c:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000053f:	6a 00                	push   $0x0
40000541:	6a 14                	push   $0x14
40000543:	6a 10                	push   $0x10
40000545:	50                   	push   %eax
40000546:	e8 0b fc ff ff       	call   40000156 <user_print_num>
4000054b:	83 c4 10             	add    $0x10,%esp
4000054e:	eb 45                	jmp    40000595 <printf+0x27a>
40000550:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
40000554:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000557:	8b 50 fc             	mov    -0x4(%eax),%edx
4000055a:	8b 40 f8             	mov    -0x8(%eax),%eax
4000055d:	89 45 e0             	mov    %eax,-0x20(%ebp)
40000560:	89 55 e4             	mov    %edx,-0x1c(%ebp)
40000563:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000567:	74 17                	je     40000580 <printf+0x265>
40000569:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
4000056d:	8b 45 e0             	mov    -0x20(%ebp),%eax
40000570:	6a 01                	push   $0x1
40000572:	52                   	push   %edx
40000573:	6a 10                	push   $0x10
40000575:	50                   	push   %eax
40000576:	e8 db fb ff ff       	call   40000156 <user_print_num>
4000057b:	83 c4 10             	add    $0x10,%esp
4000057e:	eb 15                	jmp    40000595 <printf+0x27a>
40000580:	8b 45 e0             	mov    -0x20(%ebp),%eax
40000583:	6a 00                	push   $0x0
40000585:	6a 14                	push   $0x14
40000587:	6a 10                	push   $0x10
40000589:	50                   	push   %eax
4000058a:	e8 c7 fb ff ff       	call   40000156 <user_print_num>
4000058f:	83 c4 10             	add    $0x10,%esp
40000592:	eb 01                	jmp    40000595 <printf+0x27a>
40000594:	90                   	nop
40000595:	eb 46                	jmp    400005dd <printf+0x2c2>
40000597:	8b 45 08             	mov    0x8(%ebp),%eax
4000059a:	0f b6 00             	movzbl (%eax),%eax
4000059d:	0f be c0             	movsbl %al,%eax
400005a0:	83 e8 30             	sub    $0x30,%eax
400005a3:	89 c2                	mov    %eax,%edx
400005a5:	89 d0                	mov    %edx,%eax
400005a7:	c1 e0 02             	shl    $0x2,%eax
400005aa:	01 d0                	add    %edx,%eax
400005ac:	01 c0                	add    %eax,%eax
400005ae:	89 c2                	mov    %eax,%edx
400005b0:	8b 45 08             	mov    0x8(%ebp),%eax
400005b3:	83 c0 01             	add    $0x1,%eax
400005b6:	89 45 08             	mov    %eax,0x8(%ebp)
400005b9:	8b 45 08             	mov    0x8(%ebp),%eax
400005bc:	0f b6 00             	movzbl (%eax),%eax
400005bf:	01 d0                	add    %edx,%eax
400005c1:	83 e8 30             	sub    $0x30,%eax
400005c4:	88 45 f3             	mov    %al,-0xd(%ebp)
400005c7:	e9 73 fd ff ff       	jmp    4000033f <printf+0x24>
400005cc:	83 ec 0c             	sub    $0xc,%esp
400005cf:	68 f8 14 00 40       	push   $0x400014f8
400005d4:	e8 6a fb ff ff       	call   40000143 <user_print_string>
400005d9:	83 c4 10             	add    $0x10,%esp
400005dc:	90                   	nop
400005dd:	8b 45 08             	mov    0x8(%ebp),%eax
400005e0:	83 c0 01             	add    $0x1,%eax
400005e3:	89 45 08             	mov    %eax,0x8(%ebp)
400005e6:	eb 1e                	jmp    40000606 <printf+0x2eb>
400005e8:	8b 45 08             	mov    0x8(%ebp),%eax
400005eb:	0f b6 00             	movzbl (%eax),%eax
400005ee:	0f be c0             	movsbl %al,%eax
400005f1:	83 ec 0c             	sub    $0xc,%esp
400005f4:	50                   	push   %eax
400005f5:	e8 2b fb ff ff       	call   40000125 <user_print_char>
400005fa:	83 c4 10             	add    $0x10,%esp
400005fd:	8b 45 08             	mov    0x8(%ebp),%eax
40000600:	83 c0 01             	add    $0x1,%eax
40000603:	89 45 08             	mov    %eax,0x8(%ebp)
40000606:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
4000060a:	8b 45 08             	mov    0x8(%ebp),%eax
4000060d:	0f b6 00             	movzbl (%eax),%eax
40000610:	84 c0                	test   %al,%al
40000612:	0f 85 18 fd ff ff    	jne    40000330 <printf+0x15>
40000618:	90                   	nop
40000619:	90                   	nop
4000061a:	c9                   	leave  
4000061b:	c3                   	ret    

4000061c <print_prompt>:
4000061c:	55                   	push   %ebp
4000061d:	89 e5                	mov    %esp,%ebp
4000061f:	83 ec 08             	sub    $0x8,%esp
40000622:	83 ec 08             	sub    $0x8,%esp
40000625:	68 a0 19 00 40       	push   $0x400019a0
4000062a:	68 3c 16 00 40       	push   $0x4000163c
4000062f:	e8 e7 fc ff ff       	call   4000031b <printf>
40000634:	83 c4 10             	add    $0x10,%esp
40000637:	90                   	nop
40000638:	c9                   	leave  
40000639:	c3                   	ret    

4000063a <user_readline>:
4000063a:	55                   	push   %ebp
4000063b:	89 e5                	mov    %esp,%ebp
4000063d:	83 ec 18             	sub    $0x18,%esp
40000640:	8b 45 08             	mov    0x8(%ebp),%eax
40000643:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000646:	eb 6a                	jmp    400006b2 <user_readline+0x78>
40000648:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000064b:	0f b6 00             	movzbl (%eax),%eax
4000064e:	0f be c0             	movsbl %al,%eax
40000651:	83 f8 0d             	cmp    $0xd,%eax
40000654:	74 0f                	je     40000665 <user_readline+0x2b>
40000656:	83 f8 0d             	cmp    $0xd,%eax
40000659:	7f 34                	jg     4000068f <user_readline+0x55>
4000065b:	83 f8 08             	cmp    $0x8,%eax
4000065e:	74 1a                	je     4000067a <user_readline+0x40>
40000660:	83 f8 0a             	cmp    $0xa,%eax
40000663:	75 2a                	jne    4000068f <user_readline+0x55>
40000665:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000668:	c6 00 00             	movb   $0x0,(%eax)
4000066b:	83 ec 0c             	sub    $0xc,%esp
4000066e:	6a 0a                	push   $0xa
40000670:	e8 b0 fa ff ff       	call   40000125 <user_print_char>
40000675:	83 c4 10             	add    $0x10,%esp
40000678:	eb 6e                	jmp    400006e8 <user_readline+0xae>
4000067a:	8b 45 08             	mov    0x8(%ebp),%eax
4000067d:	0f b6 00             	movzbl (%eax),%eax
40000680:	3c 08                	cmp    $0x8,%al
40000682:	74 2e                	je     400006b2 <user_readline+0x78>
40000684:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
40000688:	e8 f8 fa ff ff       	call   40000185 <user_backtrace>
4000068d:	eb 23                	jmp    400006b2 <user_readline+0x78>
4000068f:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000692:	0f b6 00             	movzbl (%eax),%eax
40000695:	84 c0                	test   %al,%al
40000697:	74 19                	je     400006b2 <user_readline+0x78>
40000699:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000069c:	0f b6 00             	movzbl (%eax),%eax
4000069f:	0f be c0             	movsbl %al,%eax
400006a2:	83 ec 0c             	sub    $0xc,%esp
400006a5:	50                   	push   %eax
400006a6:	e8 7a fa ff ff       	call   40000125 <user_print_char>
400006ab:	83 c4 10             	add    $0x10,%esp
400006ae:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
400006b2:	83 ec 04             	sub    $0x4,%esp
400006b5:	6a 01                	push   $0x1
400006b7:	ff 75 f4             	pushl  -0xc(%ebp)
400006ba:	6a 00                	push   $0x0
400006bc:	e8 d4 fa ff ff       	call   40000195 <read>
400006c1:	83 c4 10             	add    $0x10,%esp
400006c4:	83 f8 ff             	cmp    $0xffffffff,%eax
400006c7:	74 0f                	je     400006d8 <user_readline+0x9e>
400006c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006cc:	2b 45 08             	sub    0x8(%ebp),%eax
400006cf:	39 45 0c             	cmp    %eax,0xc(%ebp)
400006d2:	0f 8f 70 ff ff ff    	jg     40000648 <user_readline+0xe>
400006d8:	83 ec 0c             	sub    $0xc,%esp
400006db:	68 54 16 00 40       	push   $0x40001654
400006e0:	e8 36 fc ff ff       	call   4000031b <printf>
400006e5:	83 c4 10             	add    $0x10,%esp
400006e8:	c9                   	leave  
400006e9:	c3                   	ret    

400006ea <cmd_parse>:
400006ea:	55                   	push   %ebp
400006eb:	89 e5                	mov    %esp,%ebp
400006ed:	83 ec 14             	sub    $0x14,%esp
400006f0:	8b 45 10             	mov    0x10(%ebp),%eax
400006f3:	88 45 ec             	mov    %al,-0x14(%ebp)
400006f6:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
400006fd:	eb 19                	jmp    40000718 <cmd_parse+0x2e>
400006ff:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000702:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000709:	8b 45 0c             	mov    0xc(%ebp),%eax
4000070c:	01 d0                	add    %edx,%eax
4000070e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
40000714:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
40000718:	83 7d fc 0f          	cmpl   $0xf,-0x4(%ebp)
4000071c:	7e e1                	jle    400006ff <cmd_parse+0x15>
4000071e:	8b 45 08             	mov    0x8(%ebp),%eax
40000721:	89 45 f8             	mov    %eax,-0x8(%ebp)
40000724:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000072b:	eb 6f                	jmp    4000079c <cmd_parse+0xb2>
4000072d:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
40000731:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000734:	0f b6 00             	movzbl (%eax),%eax
40000737:	38 45 ec             	cmp    %al,-0x14(%ebp)
4000073a:	74 f1                	je     4000072d <cmd_parse+0x43>
4000073c:	8b 45 f8             	mov    -0x8(%ebp),%eax
4000073f:	0f b6 00             	movzbl (%eax),%eax
40000742:	84 c0                	test   %al,%al
40000744:	74 62                	je     400007a8 <cmd_parse+0xbe>
40000746:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000749:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000750:	8b 45 0c             	mov    0xc(%ebp),%eax
40000753:	01 c2                	add    %eax,%edx
40000755:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000758:	89 02                	mov    %eax,(%edx)
4000075a:	eb 04                	jmp    40000760 <cmd_parse+0x76>
4000075c:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
40000760:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000763:	0f b6 00             	movzbl (%eax),%eax
40000766:	84 c0                	test   %al,%al
40000768:	74 0b                	je     40000775 <cmd_parse+0x8b>
4000076a:	8b 45 f8             	mov    -0x8(%ebp),%eax
4000076d:	0f b6 00             	movzbl (%eax),%eax
40000770:	38 45 ec             	cmp    %al,-0x14(%ebp)
40000773:	75 e7                	jne    4000075c <cmd_parse+0x72>
40000775:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000778:	0f b6 00             	movzbl (%eax),%eax
4000077b:	84 c0                	test   %al,%al
4000077d:	74 0c                	je     4000078b <cmd_parse+0xa1>
4000077f:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000782:	8d 50 01             	lea    0x1(%eax),%edx
40000785:	89 55 f8             	mov    %edx,-0x8(%ebp)
40000788:	c6 00 00             	movb   $0x0,(%eax)
4000078b:	83 7d f4 10          	cmpl   $0x10,-0xc(%ebp)
4000078f:	7e 07                	jle    40000798 <cmd_parse+0xae>
40000791:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
40000796:	eb 14                	jmp    400007ac <cmd_parse+0xc2>
40000798:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
4000079c:	8b 45 f8             	mov    -0x8(%ebp),%eax
4000079f:	0f b6 00             	movzbl (%eax),%eax
400007a2:	84 c0                	test   %al,%al
400007a4:	75 8b                	jne    40000731 <cmd_parse+0x47>
400007a6:	eb 01                	jmp    400007a9 <cmd_parse+0xbf>
400007a8:	90                   	nop
400007a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
400007ac:	c9                   	leave  
400007ad:	c3                   	ret    

400007ae <my_shell>:
400007ae:	55                   	push   %ebp
400007af:	89 e5                	mov    %esp,%ebp
400007b1:	83 ec 08             	sub    $0x8,%esp
400007b4:	c6 05 a0 19 00 40 2f 	movb   $0x2f,0x400019a0
400007bb:	c6 05 a1 19 00 40 00 	movb   $0x0,0x400019a1
400007c2:	e8 55 fe ff ff       	call   4000061c <print_prompt>
400007c7:	83 ec 04             	sub    $0x4,%esp
400007ca:	68 00 02 00 00       	push   $0x200
400007cf:	6a 00                	push   $0x0
400007d1:	68 a0 1b 00 40       	push   $0x40001ba0
400007d6:	e8 73 02 00 00       	call   40000a4e <user_memset>
400007db:	83 c4 10             	add    $0x10,%esp
400007de:	83 ec 04             	sub    $0x4,%esp
400007e1:	68 00 02 00 00       	push   $0x200
400007e6:	6a 00                	push   $0x0
400007e8:	68 a0 1d 00 40       	push   $0x40001da0
400007ed:	e8 5c 02 00 00       	call   40000a4e <user_memset>
400007f2:	83 c4 10             	add    $0x10,%esp
400007f5:	83 ec 08             	sub    $0x8,%esp
400007f8:	68 80 00 00 00       	push   $0x80
400007fd:	68 a0 1d 00 40       	push   $0x40001da0
40000802:	e8 33 fe ff ff       	call   4000063a <user_readline>
40000807:	83 c4 10             	add    $0x10,%esp
4000080a:	0f b6 05 a0 1d 00 40 	movzbl 0x40001da0,%eax
40000811:	84 c0                	test   %al,%al
40000813:	0f 84 03 02 00 00    	je     40000a1c <my_shell+0x26e>
40000819:	c7 05 e4 14 00 40 ff 	movl   $0xffffffff,0x400014e4
40000820:	ff ff ff 
40000823:	83 ec 04             	sub    $0x4,%esp
40000826:	6a 20                	push   $0x20
40000828:	68 20 1e 00 40       	push   $0x40001e20
4000082d:	68 a0 1d 00 40       	push   $0x40001da0
40000832:	e8 b3 fe ff ff       	call   400006ea <cmd_parse>
40000837:	83 c4 10             	add    $0x10,%esp
4000083a:	a3 e4 14 00 40       	mov    %eax,0x400014e4
4000083f:	a1 e4 14 00 40       	mov    0x400014e4,%eax
40000844:	83 f8 ff             	cmp    $0xffffffff,%eax
40000847:	75 17                	jne    40000860 <my_shell+0xb2>
40000849:	83 ec 08             	sub    $0x8,%esp
4000084c:	6a 10                	push   $0x10
4000084e:	68 9c 16 00 40       	push   $0x4000169c
40000853:	e8 c3 fa ff ff       	call   4000031b <printf>
40000858:	83 c4 10             	add    $0x10,%esp
4000085b:	e9 bd 01 00 00       	jmp    40000a1d <my_shell+0x26f>
40000860:	a1 20 1e 00 40       	mov    0x40001e20,%eax
40000865:	83 ec 08             	sub    $0x8,%esp
40000868:	50                   	push   %eax
40000869:	68 b8 16 00 40       	push   $0x400016b8
4000086e:	e8 7e 02 00 00       	call   40000af1 <user_strcmp>
40000873:	83 c4 10             	add    $0x10,%esp
40000876:	85 c0                	test   %eax,%eax
40000878:	75 1b                	jne    40000895 <my_shell+0xe7>
4000087a:	a1 e4 14 00 40       	mov    0x400014e4,%eax
4000087f:	83 ec 08             	sub    $0x8,%esp
40000882:	68 20 1e 00 40       	push   $0x40001e20
40000887:	50                   	push   %eax
40000888:	e8 b6 06 00 00       	call   40000f43 <buildin_ls>
4000088d:	83 c4 10             	add    $0x10,%esp
40000890:	e9 2d ff ff ff       	jmp    400007c2 <my_shell+0x14>
40000895:	a1 20 1e 00 40       	mov    0x40001e20,%eax
4000089a:	83 ec 08             	sub    $0x8,%esp
4000089d:	50                   	push   %eax
4000089e:	68 bb 16 00 40       	push   $0x400016bb
400008a3:	e8 49 02 00 00       	call   40000af1 <user_strcmp>
400008a8:	83 c4 10             	add    $0x10,%esp
400008ab:	85 c0                	test   %eax,%eax
400008ad:	75 4f                	jne    400008fe <my_shell+0x150>
400008af:	a1 e4 14 00 40       	mov    0x400014e4,%eax
400008b4:	83 ec 08             	sub    $0x8,%esp
400008b7:	68 20 1e 00 40       	push   $0x40001e20
400008bc:	50                   	push   %eax
400008bd:	e8 f7 05 00 00       	call   40000eb9 <buildin_cd>
400008c2:	83 c4 10             	add    $0x10,%esp
400008c5:	85 c0                	test   %eax,%eax
400008c7:	0f 84 f5 fe ff ff    	je     400007c2 <my_shell+0x14>
400008cd:	83 ec 04             	sub    $0x4,%esp
400008d0:	68 00 02 00 00       	push   $0x200
400008d5:	6a 00                	push   $0x0
400008d7:	68 a0 19 00 40       	push   $0x400019a0
400008dc:	e8 6d 01 00 00       	call   40000a4e <user_memset>
400008e1:	83 c4 10             	add    $0x10,%esp
400008e4:	83 ec 08             	sub    $0x8,%esp
400008e7:	68 a0 1b 00 40       	push   $0x40001ba0
400008ec:	68 a0 19 00 40       	push   $0x400019a0
400008f1:	e8 c8 02 00 00       	call   40000bbe <user_strcpy>
400008f6:	83 c4 10             	add    $0x10,%esp
400008f9:	e9 c4 fe ff ff       	jmp    400007c2 <my_shell+0x14>
400008fe:	a1 20 1e 00 40       	mov    0x40001e20,%eax
40000903:	83 ec 08             	sub    $0x8,%esp
40000906:	50                   	push   %eax
40000907:	68 be 16 00 40       	push   $0x400016be
4000090c:	e8 e0 01 00 00       	call   40000af1 <user_strcmp>
40000911:	83 c4 10             	add    $0x10,%esp
40000914:	85 c0                	test   %eax,%eax
40000916:	75 1b                	jne    40000933 <my_shell+0x185>
40000918:	a1 e4 14 00 40       	mov    0x400014e4,%eax
4000091d:	83 ec 08             	sub    $0x8,%esp
40000920:	68 20 1e 00 40       	push   $0x40001e20
40000925:	50                   	push   %eax
40000926:	e8 dd 09 00 00       	call   40001308 <buildin_ps>
4000092b:	83 c4 10             	add    $0x10,%esp
4000092e:	e9 8f fe ff ff       	jmp    400007c2 <my_shell+0x14>
40000933:	a1 20 1e 00 40       	mov    0x40001e20,%eax
40000938:	83 ec 08             	sub    $0x8,%esp
4000093b:	50                   	push   %eax
4000093c:	68 c1 16 00 40       	push   $0x400016c1
40000941:	e8 ab 01 00 00       	call   40000af1 <user_strcmp>
40000946:	83 c4 10             	add    $0x10,%esp
40000949:	85 c0                	test   %eax,%eax
4000094b:	75 1b                	jne    40000968 <my_shell+0x1ba>
4000094d:	a1 e4 14 00 40       	mov    0x400014e4,%eax
40000952:	83 ec 08             	sub    $0x8,%esp
40000955:	68 20 1e 00 40       	push   $0x40001e20
4000095a:	50                   	push   %eax
4000095b:	e8 f9 04 00 00       	call   40000e59 <buildin_pwd>
40000960:	83 c4 10             	add    $0x10,%esp
40000963:	e9 5a fe ff ff       	jmp    400007c2 <my_shell+0x14>
40000968:	a1 20 1e 00 40       	mov    0x40001e20,%eax
4000096d:	83 ec 08             	sub    $0x8,%esp
40000970:	50                   	push   %eax
40000971:	68 c5 16 00 40       	push   $0x400016c5
40000976:	e8 76 01 00 00       	call   40000af1 <user_strcmp>
4000097b:	83 c4 10             	add    $0x10,%esp
4000097e:	85 c0                	test   %eax,%eax
40000980:	75 1b                	jne    4000099d <my_shell+0x1ef>
40000982:	a1 e4 14 00 40       	mov    0x400014e4,%eax
40000987:	83 ec 08             	sub    $0x8,%esp
4000098a:	68 20 1e 00 40       	push   $0x40001e20
4000098f:	50                   	push   %eax
40000990:	e8 98 09 00 00       	call   4000132d <buildin_mkdir>
40000995:	83 c4 10             	add    $0x10,%esp
40000998:	e9 25 fe ff ff       	jmp    400007c2 <my_shell+0x14>
4000099d:	a1 20 1e 00 40       	mov    0x40001e20,%eax
400009a2:	83 ec 08             	sub    $0x8,%esp
400009a5:	50                   	push   %eax
400009a6:	68 cb 16 00 40       	push   $0x400016cb
400009ab:	e8 41 01 00 00       	call   40000af1 <user_strcmp>
400009b0:	83 c4 10             	add    $0x10,%esp
400009b3:	85 c0                	test   %eax,%eax
400009b5:	75 1b                	jne    400009d2 <my_shell+0x224>
400009b7:	a1 e4 14 00 40       	mov    0x400014e4,%eax
400009bc:	83 ec 08             	sub    $0x8,%esp
400009bf:	68 20 1e 00 40       	push   $0x40001e20
400009c4:	50                   	push   %eax
400009c5:	e8 f5 09 00 00       	call   400013bf <buildin_rmdir>
400009ca:	83 c4 10             	add    $0x10,%esp
400009cd:	e9 f0 fd ff ff       	jmp    400007c2 <my_shell+0x14>
400009d2:	a1 20 1e 00 40       	mov    0x40001e20,%eax
400009d7:	83 ec 08             	sub    $0x8,%esp
400009da:	50                   	push   %eax
400009db:	68 d1 16 00 40       	push   $0x400016d1
400009e0:	e8 0c 01 00 00       	call   40000af1 <user_strcmp>
400009e5:	83 c4 10             	add    $0x10,%esp
400009e8:	85 c0                	test   %eax,%eax
400009ea:	75 1b                	jne    40000a07 <my_shell+0x259>
400009ec:	a1 e4 14 00 40       	mov    0x400014e4,%eax
400009f1:	83 ec 08             	sub    $0x8,%esp
400009f4:	68 20 1e 00 40       	push   $0x40001e20
400009f9:	50                   	push   %eax
400009fa:	e8 52 0a 00 00       	call   40001451 <buildin_rm>
400009ff:	83 c4 10             	add    $0x10,%esp
40000a02:	e9 bb fd ff ff       	jmp    400007c2 <my_shell+0x14>
40000a07:	83 ec 0c             	sub    $0xc,%esp
40000a0a:	68 d4 16 00 40       	push   $0x400016d4
40000a0f:	e8 07 f9 ff ff       	call   4000031b <printf>
40000a14:	83 c4 10             	add    $0x10,%esp
40000a17:	e9 a6 fd ff ff       	jmp    400007c2 <my_shell+0x14>
40000a1c:	90                   	nop
40000a1d:	e9 a0 fd ff ff       	jmp    400007c2 <my_shell+0x14>

40000a22 <__memset>:
40000a22:	55                   	push   %ebp
40000a23:	89 e5                	mov    %esp,%ebp
40000a25:	57                   	push   %edi
40000a26:	83 ec 14             	sub    $0x14,%esp
40000a29:	8b 45 0c             	mov    0xc(%ebp),%eax
40000a2c:	88 45 e8             	mov    %al,-0x18(%ebp)
40000a2f:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000a32:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
40000a36:	8b 55 08             	mov    0x8(%ebp),%edx
40000a39:	89 d7                	mov    %edx,%edi
40000a3b:	f3 aa                	rep stos %al,%es:(%edi)
40000a3d:	89 fa                	mov    %edi,%edx
40000a3f:	89 4d f8             	mov    %ecx,-0x8(%ebp)
40000a42:	89 55 f4             	mov    %edx,-0xc(%ebp)
40000a45:	8b 45 08             	mov    0x8(%ebp),%eax
40000a48:	83 c4 14             	add    $0x14,%esp
40000a4b:	5f                   	pop    %edi
40000a4c:	5d                   	pop    %ebp
40000a4d:	c3                   	ret    

40000a4e <user_memset>:
40000a4e:	55                   	push   %ebp
40000a4f:	89 e5                	mov    %esp,%ebp
40000a51:	83 ec 04             	sub    $0x4,%esp
40000a54:	8b 45 0c             	mov    0xc(%ebp),%eax
40000a57:	88 45 fc             	mov    %al,-0x4(%ebp)
40000a5a:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
40000a5e:	ff 75 10             	pushl  0x10(%ebp)
40000a61:	50                   	push   %eax
40000a62:	ff 75 08             	pushl  0x8(%ebp)
40000a65:	e8 b8 ff ff ff       	call   40000a22 <__memset>
40000a6a:	83 c4 0c             	add    $0xc,%esp
40000a6d:	c9                   	leave  
40000a6e:	c3                   	ret    

40000a6f <user_strcat>:
40000a6f:	55                   	push   %ebp
40000a70:	89 e5                	mov    %esp,%ebp
40000a72:	83 ec 10             	sub    $0x10,%esp
40000a75:	8b 45 08             	mov    0x8(%ebp),%eax
40000a78:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000a7b:	90                   	nop
40000a7c:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000a7f:	8d 50 01             	lea    0x1(%eax),%edx
40000a82:	89 55 fc             	mov    %edx,-0x4(%ebp)
40000a85:	0f b6 00             	movzbl (%eax),%eax
40000a88:	84 c0                	test   %al,%al
40000a8a:	75 f0                	jne    40000a7c <user_strcat+0xd>
40000a8c:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
40000a90:	90                   	nop
40000a91:	8b 55 0c             	mov    0xc(%ebp),%edx
40000a94:	8d 42 01             	lea    0x1(%edx),%eax
40000a97:	89 45 0c             	mov    %eax,0xc(%ebp)
40000a9a:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000a9d:	8d 48 01             	lea    0x1(%eax),%ecx
40000aa0:	89 4d fc             	mov    %ecx,-0x4(%ebp)
40000aa3:	0f b6 12             	movzbl (%edx),%edx
40000aa6:	88 10                	mov    %dl,(%eax)
40000aa8:	0f b6 00             	movzbl (%eax),%eax
40000aab:	84 c0                	test   %al,%al
40000aad:	75 e2                	jne    40000a91 <user_strcat+0x22>
40000aaf:	8b 45 08             	mov    0x8(%ebp),%eax
40000ab2:	c9                   	leave  
40000ab3:	c3                   	ret    

40000ab4 <__strcmp>:
40000ab4:	55                   	push   %ebp
40000ab5:	89 e5                	mov    %esp,%ebp
40000ab7:	57                   	push   %edi
40000ab8:	56                   	push   %esi
40000ab9:	83 ec 10             	sub    $0x10,%esp
40000abc:	8b 55 08             	mov    0x8(%ebp),%edx
40000abf:	8b 45 0c             	mov    0xc(%ebp),%eax
40000ac2:	89 d1                	mov    %edx,%ecx
40000ac4:	89 c2                	mov    %eax,%edx
40000ac6:	89 ce                	mov    %ecx,%esi
40000ac8:	89 d7                	mov    %edx,%edi
40000aca:	ac                   	lods   %ds:(%esi),%al
40000acb:	ae                   	scas   %es:(%edi),%al
40000acc:	75 08                	jne    40000ad6 <__strcmp+0x22>
40000ace:	84 c0                	test   %al,%al
40000ad0:	75 f8                	jne    40000aca <__strcmp+0x16>
40000ad2:	31 c0                	xor    %eax,%eax
40000ad4:	eb 04                	jmp    40000ada <__strcmp+0x26>
40000ad6:	19 c0                	sbb    %eax,%eax
40000ad8:	0c 01                	or     $0x1,%al
40000ada:	89 fa                	mov    %edi,%edx
40000adc:	89 f1                	mov    %esi,%ecx
40000ade:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000ae1:	89 4d f0             	mov    %ecx,-0x10(%ebp)
40000ae4:	89 55 ec             	mov    %edx,-0x14(%ebp)
40000ae7:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000aea:	83 c4 10             	add    $0x10,%esp
40000aed:	5e                   	pop    %esi
40000aee:	5f                   	pop    %edi
40000aef:	5d                   	pop    %ebp
40000af0:	c3                   	ret    

40000af1 <user_strcmp>:
40000af1:	55                   	push   %ebp
40000af2:	89 e5                	mov    %esp,%ebp
40000af4:	ff 75 0c             	pushl  0xc(%ebp)
40000af7:	ff 75 08             	pushl  0x8(%ebp)
40000afa:	e8 b5 ff ff ff       	call   40000ab4 <__strcmp>
40000aff:	83 c4 08             	add    $0x8,%esp
40000b02:	c9                   	leave  
40000b03:	c3                   	ret    

40000b04 <user_strrchr>:
40000b04:	55                   	push   %ebp
40000b05:	89 e5                	mov    %esp,%ebp
40000b07:	83 ec 14             	sub    $0x14,%esp
40000b0a:	8b 45 0c             	mov    0xc(%ebp),%eax
40000b0d:	88 45 ec             	mov    %al,-0x14(%ebp)
40000b10:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000b17:	eb 1b                	jmp    40000b34 <user_strrchr+0x30>
40000b19:	8b 45 08             	mov    0x8(%ebp),%eax
40000b1c:	0f b6 00             	movzbl (%eax),%eax
40000b1f:	0f be d0             	movsbl %al,%edx
40000b22:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
40000b26:	39 c2                	cmp    %eax,%edx
40000b28:	75 06                	jne    40000b30 <user_strrchr+0x2c>
40000b2a:	8b 45 08             	mov    0x8(%ebp),%eax
40000b2d:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000b30:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000b34:	8b 45 08             	mov    0x8(%ebp),%eax
40000b37:	0f b6 00             	movzbl (%eax),%eax
40000b3a:	84 c0                	test   %al,%al
40000b3c:	75 db                	jne    40000b19 <user_strrchr+0x15>
40000b3e:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000b41:	c9                   	leave  
40000b42:	c3                   	ret    

40000b43 <user_strlen>:
40000b43:	55                   	push   %ebp
40000b44:	89 e5                	mov    %esp,%ebp
40000b46:	83 ec 10             	sub    $0x10,%esp
40000b49:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000b50:	eb 04                	jmp    40000b56 <user_strlen+0x13>
40000b52:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
40000b56:	8b 45 08             	mov    0x8(%ebp),%eax
40000b59:	8d 50 01             	lea    0x1(%eax),%edx
40000b5c:	89 55 08             	mov    %edx,0x8(%ebp)
40000b5f:	0f b6 00             	movzbl (%eax),%eax
40000b62:	84 c0                	test   %al,%al
40000b64:	75 ec                	jne    40000b52 <user_strlen+0xf>
40000b66:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000b69:	c9                   	leave  
40000b6a:	c3                   	ret    

40000b6b <__memcpy>:
40000b6b:	55                   	push   %ebp
40000b6c:	89 e5                	mov    %esp,%ebp
40000b6e:	57                   	push   %edi
40000b6f:	56                   	push   %esi
40000b70:	83 ec 10             	sub    $0x10,%esp
40000b73:	8b 45 10             	mov    0x10(%ebp),%eax
40000b76:	c1 e8 02             	shr    $0x2,%eax
40000b79:	89 c1                	mov    %eax,%ecx
40000b7b:	8b 55 08             	mov    0x8(%ebp),%edx
40000b7e:	8b 45 0c             	mov    0xc(%ebp),%eax
40000b81:	89 d7                	mov    %edx,%edi
40000b83:	89 c6                	mov    %eax,%esi
40000b85:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
40000b87:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000b8a:	83 e1 03             	and    $0x3,%ecx
40000b8d:	74 02                	je     40000b91 <__memcpy+0x26>
40000b8f:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
40000b91:	89 f0                	mov    %esi,%eax
40000b93:	89 fa                	mov    %edi,%edx
40000b95:	89 4d f4             	mov    %ecx,-0xc(%ebp)
40000b98:	89 55 f0             	mov    %edx,-0x10(%ebp)
40000b9b:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000b9e:	8b 45 08             	mov    0x8(%ebp),%eax
40000ba1:	83 c4 10             	add    $0x10,%esp
40000ba4:	5e                   	pop    %esi
40000ba5:	5f                   	pop    %edi
40000ba6:	5d                   	pop    %ebp
40000ba7:	c3                   	ret    

40000ba8 <user_memcpy>:
40000ba8:	55                   	push   %ebp
40000ba9:	89 e5                	mov    %esp,%ebp
40000bab:	ff 75 10             	pushl  0x10(%ebp)
40000bae:	ff 75 0c             	pushl  0xc(%ebp)
40000bb1:	ff 75 08             	pushl  0x8(%ebp)
40000bb4:	e8 b2 ff ff ff       	call   40000b6b <__memcpy>
40000bb9:	83 c4 0c             	add    $0xc,%esp
40000bbc:	c9                   	leave  
40000bbd:	c3                   	ret    

40000bbe <user_strcpy>:
40000bbe:	55                   	push   %ebp
40000bbf:	89 e5                	mov    %esp,%ebp
40000bc1:	83 ec 10             	sub    $0x10,%esp
40000bc4:	8b 45 08             	mov    0x8(%ebp),%eax
40000bc7:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000bca:	90                   	nop
40000bcb:	8b 55 0c             	mov    0xc(%ebp),%edx
40000bce:	8d 42 01             	lea    0x1(%edx),%eax
40000bd1:	89 45 0c             	mov    %eax,0xc(%ebp)
40000bd4:	8b 45 08             	mov    0x8(%ebp),%eax
40000bd7:	8d 48 01             	lea    0x1(%eax),%ecx
40000bda:	89 4d 08             	mov    %ecx,0x8(%ebp)
40000bdd:	0f b6 12             	movzbl (%edx),%edx
40000be0:	88 10                	mov    %dl,(%eax)
40000be2:	0f b6 00             	movzbl (%eax),%eax
40000be5:	84 c0                	test   %al,%al
40000be7:	75 e2                	jne    40000bcb <user_strcpy+0xd>
40000be9:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000bec:	c9                   	leave  
40000bed:	c3                   	ret    

40000bee <path_parse>:
40000bee:	55                   	push   %ebp
40000bef:	89 e5                	mov    %esp,%ebp
40000bf1:	8b 45 08             	mov    0x8(%ebp),%eax
40000bf4:	0f b6 00             	movzbl (%eax),%eax
40000bf7:	3c 2f                	cmp    $0x2f,%al
40000bf9:	75 27                	jne    40000c22 <path_parse+0x34>
40000bfb:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000bff:	8b 45 08             	mov    0x8(%ebp),%eax
40000c02:	0f b6 00             	movzbl (%eax),%eax
40000c05:	3c 2f                	cmp    $0x2f,%al
40000c07:	74 f2                	je     40000bfb <path_parse+0xd>
40000c09:	eb 17                	jmp    40000c22 <path_parse+0x34>
40000c0b:	8b 55 08             	mov    0x8(%ebp),%edx
40000c0e:	8d 42 01             	lea    0x1(%edx),%eax
40000c11:	89 45 08             	mov    %eax,0x8(%ebp)
40000c14:	8b 45 0c             	mov    0xc(%ebp),%eax
40000c17:	8d 48 01             	lea    0x1(%eax),%ecx
40000c1a:	89 4d 0c             	mov    %ecx,0xc(%ebp)
40000c1d:	0f b6 12             	movzbl (%edx),%edx
40000c20:	88 10                	mov    %dl,(%eax)
40000c22:	8b 45 08             	mov    0x8(%ebp),%eax
40000c25:	0f b6 00             	movzbl (%eax),%eax
40000c28:	3c 2f                	cmp    $0x2f,%al
40000c2a:	74 0a                	je     40000c36 <path_parse+0x48>
40000c2c:	8b 45 08             	mov    0x8(%ebp),%eax
40000c2f:	0f b6 00             	movzbl (%eax),%eax
40000c32:	84 c0                	test   %al,%al
40000c34:	75 d5                	jne    40000c0b <path_parse+0x1d>
40000c36:	8b 45 08             	mov    0x8(%ebp),%eax
40000c39:	0f b6 00             	movzbl (%eax),%eax
40000c3c:	84 c0                	test   %al,%al
40000c3e:	75 07                	jne    40000c47 <path_parse+0x59>
40000c40:	b8 00 00 00 00       	mov    $0x0,%eax
40000c45:	eb 03                	jmp    40000c4a <path_parse+0x5c>
40000c47:	8b 45 08             	mov    0x8(%ebp),%eax
40000c4a:	5d                   	pop    %ebp
40000c4b:	c3                   	ret    

40000c4c <wash_path>:
40000c4c:	55                   	push   %ebp
40000c4d:	89 e5                	mov    %esp,%ebp
40000c4f:	83 ec 28             	sub    $0x28,%esp
40000c52:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
40000c59:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
40000c60:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
40000c67:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
40000c6e:	8b 45 08             	mov    0x8(%ebp),%eax
40000c71:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000c74:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000c77:	50                   	push   %eax
40000c78:	ff 75 f4             	pushl  -0xc(%ebp)
40000c7b:	e8 6e ff ff ff       	call   40000bee <path_parse>
40000c80:	83 c4 08             	add    $0x8,%esp
40000c83:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000c86:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000c8a:	84 c0                	test   %al,%al
40000c8c:	75 14                	jne    40000ca2 <wash_path+0x56>
40000c8e:	8b 45 0c             	mov    0xc(%ebp),%eax
40000c91:	c6 00 2f             	movb   $0x2f,(%eax)
40000c94:	8b 45 0c             	mov    0xc(%ebp),%eax
40000c97:	83 c0 01             	add    $0x1,%eax
40000c9a:	c6 00 00             	movb   $0x0,(%eax)
40000c9d:	e9 f2 00 00 00       	jmp    40000d94 <wash_path+0x148>
40000ca2:	8b 45 0c             	mov    0xc(%ebp),%eax
40000ca5:	c6 00 00             	movb   $0x0,(%eax)
40000ca8:	83 ec 08             	sub    $0x8,%esp
40000cab:	68 e8 16 00 40       	push   $0x400016e8
40000cb0:	ff 75 0c             	pushl  0xc(%ebp)
40000cb3:	e8 b7 fd ff ff       	call   40000a6f <user_strcat>
40000cb8:	83 c4 10             	add    $0x10,%esp
40000cbb:	e9 c8 00 00 00       	jmp    40000d88 <wash_path+0x13c>
40000cc0:	83 ec 08             	sub    $0x8,%esp
40000cc3:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000cc6:	50                   	push   %eax
40000cc7:	68 ea 16 00 40       	push   $0x400016ea
40000ccc:	e8 20 fe ff ff       	call   40000af1 <user_strcmp>
40000cd1:	83 c4 10             	add    $0x10,%esp
40000cd4:	85 c0                	test   %eax,%eax
40000cd6:	75 2e                	jne    40000d06 <wash_path+0xba>
40000cd8:	83 ec 08             	sub    $0x8,%esp
40000cdb:	6a 2f                	push   $0x2f
40000cdd:	ff 75 0c             	pushl  0xc(%ebp)
40000ce0:	e8 1f fe ff ff       	call   40000b04 <user_strrchr>
40000ce5:	83 c4 10             	add    $0x10,%esp
40000ce8:	89 45 f0             	mov    %eax,-0x10(%ebp)
40000ceb:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000cee:	3b 45 0c             	cmp    0xc(%ebp),%eax
40000cf1:	74 08                	je     40000cfb <wash_path+0xaf>
40000cf3:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000cf6:	c6 00 00             	movb   $0x0,(%eax)
40000cf9:	eb 5f                	jmp    40000d5a <wash_path+0x10e>
40000cfb:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000cfe:	83 c0 01             	add    $0x1,%eax
40000d01:	c6 00 00             	movb   $0x0,(%eax)
40000d04:	eb 54                	jmp    40000d5a <wash_path+0x10e>
40000d06:	83 ec 08             	sub    $0x8,%esp
40000d09:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000d0c:	50                   	push   %eax
40000d0d:	68 ed 16 00 40       	push   $0x400016ed
40000d12:	e8 da fd ff ff       	call   40000af1 <user_strcmp>
40000d17:	83 c4 10             	add    $0x10,%esp
40000d1a:	85 c0                	test   %eax,%eax
40000d1c:	74 3c                	je     40000d5a <wash_path+0x10e>
40000d1e:	83 ec 08             	sub    $0x8,%esp
40000d21:	68 e8 16 00 40       	push   $0x400016e8
40000d26:	ff 75 0c             	pushl  0xc(%ebp)
40000d29:	e8 c3 fd ff ff       	call   40000af1 <user_strcmp>
40000d2e:	83 c4 10             	add    $0x10,%esp
40000d31:	85 c0                	test   %eax,%eax
40000d33:	74 13                	je     40000d48 <wash_path+0xfc>
40000d35:	83 ec 08             	sub    $0x8,%esp
40000d38:	68 e8 16 00 40       	push   $0x400016e8
40000d3d:	ff 75 0c             	pushl  0xc(%ebp)
40000d40:	e8 2a fd ff ff       	call   40000a6f <user_strcat>
40000d45:	83 c4 10             	add    $0x10,%esp
40000d48:	83 ec 08             	sub    $0x8,%esp
40000d4b:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000d4e:	50                   	push   %eax
40000d4f:	ff 75 0c             	pushl  0xc(%ebp)
40000d52:	e8 18 fd ff ff       	call   40000a6f <user_strcat>
40000d57:	83 c4 10             	add    $0x10,%esp
40000d5a:	83 ec 04             	sub    $0x4,%esp
40000d5d:	6a 10                	push   $0x10
40000d5f:	6a 00                	push   $0x0
40000d61:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000d64:	50                   	push   %eax
40000d65:	e8 e4 fc ff ff       	call   40000a4e <user_memset>
40000d6a:	83 c4 10             	add    $0x10,%esp
40000d6d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
40000d71:	74 15                	je     40000d88 <wash_path+0x13c>
40000d73:	83 ec 08             	sub    $0x8,%esp
40000d76:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000d79:	50                   	push   %eax
40000d7a:	ff 75 f4             	pushl  -0xc(%ebp)
40000d7d:	e8 6c fe ff ff       	call   40000bee <path_parse>
40000d82:	83 c4 10             	add    $0x10,%esp
40000d85:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000d88:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000d8c:	84 c0                	test   %al,%al
40000d8e:	0f 85 2c ff ff ff    	jne    40000cc0 <wash_path+0x74>
40000d94:	c9                   	leave  
40000d95:	c3                   	ret    

40000d96 <make_clear_abs_path>:
40000d96:	55                   	push   %ebp
40000d97:	89 e5                	mov    %esp,%ebp
40000d99:	57                   	push   %edi
40000d9a:	81 ec 04 02 00 00    	sub    $0x204,%esp
40000da0:	c7 85 f8 fd ff ff 00 	movl   $0x0,-0x208(%ebp)
40000da7:	00 00 00 
40000daa:	8d 95 fc fd ff ff    	lea    -0x204(%ebp),%edx
40000db0:	b8 00 00 00 00       	mov    $0x0,%eax
40000db5:	b9 7f 00 00 00       	mov    $0x7f,%ecx
40000dba:	89 d7                	mov    %edx,%edi
40000dbc:	f3 ab                	rep stos %eax,%es:(%edi)
40000dbe:	8b 45 08             	mov    0x8(%ebp),%eax
40000dc1:	0f b6 00             	movzbl (%eax),%eax
40000dc4:	3c 2f                	cmp    $0x2f,%al
40000dc6:	74 61                	je     40000e29 <make_clear_abs_path+0x93>
40000dc8:	83 ec 04             	sub    $0x4,%esp
40000dcb:	68 00 02 00 00       	push   $0x200
40000dd0:	6a 00                	push   $0x0
40000dd2:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000dd8:	50                   	push   %eax
40000dd9:	e8 70 fc ff ff       	call   40000a4e <user_memset>
40000dde:	83 c4 10             	add    $0x10,%esp
40000de1:	83 ec 08             	sub    $0x8,%esp
40000de4:	68 00 02 00 00       	push   $0x200
40000de9:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000def:	50                   	push   %eax
40000df0:	e8 6e f4 ff ff       	call   40000263 <getcwd>
40000df5:	83 c4 10             	add    $0x10,%esp
40000df8:	85 c0                	test   %eax,%eax
40000dfa:	74 2d                	je     40000e29 <make_clear_abs_path+0x93>
40000dfc:	0f b6 85 f8 fd ff ff 	movzbl -0x208(%ebp),%eax
40000e03:	3c 2f                	cmp    $0x2f,%al
40000e05:	75 0b                	jne    40000e12 <make_clear_abs_path+0x7c>
40000e07:	0f b6 85 f9 fd ff ff 	movzbl -0x207(%ebp),%eax
40000e0e:	84 c0                	test   %al,%al
40000e10:	74 17                	je     40000e29 <make_clear_abs_path+0x93>
40000e12:	83 ec 08             	sub    $0x8,%esp
40000e15:	68 e8 16 00 40       	push   $0x400016e8
40000e1a:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000e20:	50                   	push   %eax
40000e21:	e8 49 fc ff ff       	call   40000a6f <user_strcat>
40000e26:	83 c4 10             	add    $0x10,%esp
40000e29:	83 ec 08             	sub    $0x8,%esp
40000e2c:	ff 75 08             	pushl  0x8(%ebp)
40000e2f:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000e35:	50                   	push   %eax
40000e36:	e8 34 fc ff ff       	call   40000a6f <user_strcat>
40000e3b:	83 c4 10             	add    $0x10,%esp
40000e3e:	83 ec 08             	sub    $0x8,%esp
40000e41:	ff 75 0c             	pushl  0xc(%ebp)
40000e44:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000e4a:	50                   	push   %eax
40000e4b:	e8 fc fd ff ff       	call   40000c4c <wash_path>
40000e50:	83 c4 10             	add    $0x10,%esp
40000e53:	90                   	nop
40000e54:	8b 7d fc             	mov    -0x4(%ebp),%edi
40000e57:	c9                   	leave  
40000e58:	c3                   	ret    

40000e59 <buildin_pwd>:
40000e59:	55                   	push   %ebp
40000e5a:	89 e5                	mov    %esp,%ebp
40000e5c:	83 ec 08             	sub    $0x8,%esp
40000e5f:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40000e63:	74 12                	je     40000e77 <buildin_pwd+0x1e>
40000e65:	83 ec 0c             	sub    $0xc,%esp
40000e68:	68 ef 16 00 40       	push   $0x400016ef
40000e6d:	e8 a9 f4 ff ff       	call   4000031b <printf>
40000e72:	83 c4 10             	add    $0x10,%esp
40000e75:	eb 40                	jmp    40000eb7 <buildin_pwd+0x5e>
40000e77:	83 ec 08             	sub    $0x8,%esp
40000e7a:	68 00 02 00 00       	push   $0x200
40000e7f:	68 a0 1b 00 40       	push   $0x40001ba0
40000e84:	e8 da f3 ff ff       	call   40000263 <getcwd>
40000e89:	83 c4 10             	add    $0x10,%esp
40000e8c:	85 c0                	test   %eax,%eax
40000e8e:	74 17                	je     40000ea7 <buildin_pwd+0x4e>
40000e90:	83 ec 08             	sub    $0x8,%esp
40000e93:	68 a0 1b 00 40       	push   $0x40001ba0
40000e98:	68 0a 17 00 40       	push   $0x4000170a
40000e9d:	e8 79 f4 ff ff       	call   4000031b <printf>
40000ea2:	83 c4 10             	add    $0x10,%esp
40000ea5:	eb 10                	jmp    40000eb7 <buildin_pwd+0x5e>
40000ea7:	83 ec 0c             	sub    $0xc,%esp
40000eaa:	68 10 17 00 40       	push   $0x40001710
40000eaf:	e8 67 f4 ff ff       	call   4000031b <printf>
40000eb4:	83 c4 10             	add    $0x10,%esp
40000eb7:	c9                   	leave  
40000eb8:	c3                   	ret    

40000eb9 <buildin_cd>:
40000eb9:	55                   	push   %ebp
40000eba:	89 e5                	mov    %esp,%ebp
40000ebc:	83 ec 08             	sub    $0x8,%esp
40000ebf:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40000ec3:	7e 17                	jle    40000edc <buildin_cd+0x23>
40000ec5:	83 ec 0c             	sub    $0xc,%esp
40000ec8:	68 39 17 00 40       	push   $0x40001739
40000ecd:	e8 49 f4 ff ff       	call   4000031b <printf>
40000ed2:	83 c4 10             	add    $0x10,%esp
40000ed5:	b8 00 00 00 00       	mov    $0x0,%eax
40000eda:	eb 65                	jmp    40000f41 <buildin_cd+0x88>
40000edc:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40000ee0:	75 10                	jne    40000ef2 <buildin_cd+0x39>
40000ee2:	c6 05 a0 1b 00 40 2f 	movb   $0x2f,0x40001ba0
40000ee9:	c6 05 a1 1b 00 40 00 	movb   $0x0,0x40001ba1
40000ef0:	eb 19                	jmp    40000f0b <buildin_cd+0x52>
40000ef2:	8b 45 0c             	mov    0xc(%ebp),%eax
40000ef5:	83 c0 04             	add    $0x4,%eax
40000ef8:	8b 00                	mov    (%eax),%eax
40000efa:	83 ec 08             	sub    $0x8,%esp
40000efd:	68 a0 1b 00 40       	push   $0x40001ba0
40000f02:	50                   	push   %eax
40000f03:	e8 8e fe ff ff       	call   40000d96 <make_clear_abs_path>
40000f08:	83 c4 10             	add    $0x10,%esp
40000f0b:	83 ec 0c             	sub    $0xc,%esp
40000f0e:	68 a0 1b 00 40       	push   $0x40001ba0
40000f13:	e8 60 f3 ff ff       	call   40000278 <chdir>
40000f18:	83 c4 10             	add    $0x10,%esp
40000f1b:	83 f8 ff             	cmp    $0xffffffff,%eax
40000f1e:	75 1c                	jne    40000f3c <buildin_cd+0x83>
40000f20:	83 ec 08             	sub    $0x8,%esp
40000f23:	68 a0 1b 00 40       	push   $0x40001ba0
40000f28:	68 57 17 00 40       	push   $0x40001757
40000f2d:	e8 e9 f3 ff ff       	call   4000031b <printf>
40000f32:	83 c4 10             	add    $0x10,%esp
40000f35:	b8 00 00 00 00       	mov    $0x0,%eax
40000f3a:	eb 05                	jmp    40000f41 <buildin_cd+0x88>
40000f3c:	b8 a0 1b 00 40       	mov    $0x40001ba0,%eax
40000f41:	c9                   	leave  
40000f42:	c3                   	ret    

40000f43 <buildin_ls>:
40000f43:	55                   	push   %ebp
40000f44:	89 e5                	mov    %esp,%ebp
40000f46:	57                   	push   %edi
40000f47:	53                   	push   %ebx
40000f48:	81 ec 30 02 00 00    	sub    $0x230,%esp
40000f4e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
40000f55:	83 ec 04             	sub    $0x4,%esp
40000f58:	6a 0c                	push   $0xc
40000f5a:	6a 00                	push   $0x0
40000f5c:	8d 45 c8             	lea    -0x38(%ebp),%eax
40000f5f:	50                   	push   %eax
40000f60:	e8 e9 fa ff ff       	call   40000a4e <user_memset>
40000f65:	83 c4 10             	add    $0x10,%esp
40000f68:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
40000f6c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
40000f73:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
40000f7a:	e9 e9 00 00 00       	jmp    40001068 <buildin_ls+0x125>
40000f7f:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000f82:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000f89:	8b 45 0c             	mov    0xc(%ebp),%eax
40000f8c:	01 d0                	add    %edx,%eax
40000f8e:	8b 00                	mov    (%eax),%eax
40000f90:	0f b6 00             	movzbl (%eax),%eax
40000f93:	3c 2d                	cmp    $0x2d,%al
40000f95:	0f 85 91 00 00 00    	jne    4000102c <buildin_ls+0xe9>
40000f9b:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000f9e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000fa5:	8b 45 0c             	mov    0xc(%ebp),%eax
40000fa8:	01 d0                	add    %edx,%eax
40000faa:	8b 00                	mov    (%eax),%eax
40000fac:	83 ec 08             	sub    $0x8,%esp
40000faf:	50                   	push   %eax
40000fb0:	68 71 17 00 40       	push   $0x40001771
40000fb5:	e8 37 fb ff ff       	call   40000af1 <user_strcmp>
40000fba:	83 c4 10             	add    $0x10,%esp
40000fbd:	85 c0                	test   %eax,%eax
40000fbf:	75 09                	jne    40000fca <buildin_ls+0x87>
40000fc1:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
40000fc5:	e9 9a 00 00 00       	jmp    40001064 <buildin_ls+0x121>
40000fca:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000fcd:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000fd4:	8b 45 0c             	mov    0xc(%ebp),%eax
40000fd7:	01 d0                	add    %edx,%eax
40000fd9:	8b 00                	mov    (%eax),%eax
40000fdb:	83 ec 08             	sub    $0x8,%esp
40000fde:	50                   	push   %eax
40000fdf:	68 74 17 00 40       	push   $0x40001774
40000fe4:	e8 08 fb ff ff       	call   40000af1 <user_strcmp>
40000fe9:	83 c4 10             	add    $0x10,%esp
40000fec:	85 c0                	test   %eax,%eax
40000fee:	75 15                	jne    40001005 <buildin_ls+0xc2>
40000ff0:	83 ec 0c             	sub    $0xc,%esp
40000ff3:	68 78 17 00 40       	push   $0x40001778
40000ff8:	e8 1e f3 ff ff       	call   4000031b <printf>
40000ffd:	83 c4 10             	add    $0x10,%esp
40001000:	e9 fc 02 00 00       	jmp    40001301 <buildin_ls+0x3be>
40001005:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001008:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
4000100f:	8b 45 0c             	mov    0xc(%ebp),%eax
40001012:	01 d0                	add    %edx,%eax
40001014:	8b 00                	mov    (%eax),%eax
40001016:	83 ec 08             	sub    $0x8,%esp
40001019:	50                   	push   %eax
4000101a:	68 e8 17 00 40       	push   $0x400017e8
4000101f:	e8 f7 f2 ff ff       	call   4000031b <printf>
40001024:	83 c4 10             	add    $0x10,%esp
40001027:	e9 d5 02 00 00       	jmp    40001301 <buildin_ls+0x3be>
4000102c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
40001030:	75 1d                	jne    4000104f <buildin_ls+0x10c>
40001032:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001035:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
4000103c:	8b 45 0c             	mov    0xc(%ebp),%eax
4000103f:	01 d0                	add    %edx,%eax
40001041:	8b 00                	mov    (%eax),%eax
40001043:	89 45 f4             	mov    %eax,-0xc(%ebp)
40001046:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
4000104d:	eb 15                	jmp    40001064 <buildin_ls+0x121>
4000104f:	83 ec 0c             	sub    $0xc,%esp
40001052:	68 21 18 00 40       	push   $0x40001821
40001057:	e8 bf f2 ff ff       	call   4000031b <printf>
4000105c:	83 c4 10             	add    $0x10,%esp
4000105f:	e9 9d 02 00 00       	jmp    40001301 <buildin_ls+0x3be>
40001064:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
40001068:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000106b:	3b 45 08             	cmp    0x8(%ebp),%eax
4000106e:	0f 8c 0b ff ff ff    	jl     40000f7f <buildin_ls+0x3c>
40001074:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
40001078:	75 37                	jne    400010b1 <buildin_ls+0x16e>
4000107a:	83 ec 08             	sub    $0x8,%esp
4000107d:	68 00 02 00 00       	push   $0x200
40001082:	68 a0 1b 00 40       	push   $0x40001ba0
40001087:	e8 d7 f1 ff ff       	call   40000263 <getcwd>
4000108c:	83 c4 10             	add    $0x10,%esp
4000108f:	85 c0                	test   %eax,%eax
40001091:	74 09                	je     4000109c <buildin_ls+0x159>
40001093:	c7 45 f4 a0 1b 00 40 	movl   $0x40001ba0,-0xc(%ebp)
4000109a:	eb 2f                	jmp    400010cb <buildin_ls+0x188>
4000109c:	83 ec 0c             	sub    $0xc,%esp
4000109f:	68 3c 18 00 40       	push   $0x4000183c
400010a4:	e8 72 f2 ff ff       	call   4000031b <printf>
400010a9:	83 c4 10             	add    $0x10,%esp
400010ac:	e9 50 02 00 00       	jmp    40001301 <buildin_ls+0x3be>
400010b1:	83 ec 08             	sub    $0x8,%esp
400010b4:	68 a0 1b 00 40       	push   $0x40001ba0
400010b9:	ff 75 f4             	pushl  -0xc(%ebp)
400010bc:	e8 d5 fc ff ff       	call   40000d96 <make_clear_abs_path>
400010c1:	83 c4 10             	add    $0x10,%esp
400010c4:	c7 45 f4 a0 1b 00 40 	movl   $0x40001ba0,-0xc(%ebp)
400010cb:	83 ec 08             	sub    $0x8,%esp
400010ce:	8d 45 c8             	lea    -0x38(%ebp),%eax
400010d1:	50                   	push   %eax
400010d2:	ff 75 f4             	pushl  -0xc(%ebp)
400010d5:	e8 b0 f1 ff ff       	call   4000028a <stat>
400010da:	83 c4 10             	add    $0x10,%esp
400010dd:	83 f8 ff             	cmp    $0xffffffff,%eax
400010e0:	75 18                	jne    400010fa <buildin_ls+0x1b7>
400010e2:	83 ec 08             	sub    $0x8,%esp
400010e5:	ff 75 f4             	pushl  -0xc(%ebp)
400010e8:	68 60 18 00 40       	push   $0x40001860
400010ed:	e8 29 f2 ff ff       	call   4000031b <printf>
400010f2:	83 c4 10             	add    $0x10,%esp
400010f5:	e9 07 02 00 00       	jmp    40001301 <buildin_ls+0x3be>
400010fa:	8b 45 d0             	mov    -0x30(%ebp),%eax
400010fd:	83 f8 02             	cmp    $0x2,%eax
40001100:	0f 85 c8 01 00 00    	jne    400012ce <buildin_ls+0x38b>
40001106:	83 ec 0c             	sub    $0xc,%esp
40001109:	ff 75 f4             	pushl  -0xc(%ebp)
4000110c:	e8 8e f1 ff ff       	call   4000029f <opendir>
40001111:	83 c4 10             	add    $0x10,%esp
40001114:	89 45 dc             	mov    %eax,-0x24(%ebp)
40001117:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
4000111e:	c7 85 c8 fd ff ff 00 	movl   $0x0,-0x238(%ebp)
40001125:	00 00 00 
40001128:	8d 95 cc fd ff ff    	lea    -0x234(%ebp),%edx
4000112e:	b8 00 00 00 00       	mov    $0x0,%eax
40001133:	b9 7f 00 00 00       	mov    $0x7f,%ecx
40001138:	89 d7                	mov    %edx,%edi
4000113a:	f3 ab                	rep stos %eax,%es:(%edi)
4000113c:	83 ec 0c             	sub    $0xc,%esp
4000113f:	ff 75 f4             	pushl  -0xc(%ebp)
40001142:	e8 fc f9 ff ff       	call   40000b43 <user_strlen>
40001147:	83 c4 10             	add    $0x10,%esp
4000114a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
4000114d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
40001150:	83 e8 01             	sub    $0x1,%eax
40001153:	89 45 d4             	mov    %eax,-0x2c(%ebp)
40001156:	8b 45 e4             	mov    -0x1c(%ebp),%eax
40001159:	83 ec 04             	sub    $0x4,%esp
4000115c:	50                   	push   %eax
4000115d:	ff 75 f4             	pushl  -0xc(%ebp)
40001160:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
40001166:	50                   	push   %eax
40001167:	e8 3c fa ff ff       	call   40000ba8 <user_memcpy>
4000116c:	83 c4 10             	add    $0x10,%esp
4000116f:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
40001175:	8b 45 d4             	mov    -0x2c(%ebp),%eax
40001178:	01 d0                	add    %edx,%eax
4000117a:	0f b6 00             	movzbl (%eax),%eax
4000117d:	3c 2f                	cmp    $0x2f,%al
4000117f:	74 12                	je     40001193 <buildin_ls+0x250>
40001181:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
40001187:	8b 45 e4             	mov    -0x1c(%ebp),%eax
4000118a:	01 d0                	add    %edx,%eax
4000118c:	c6 00 2f             	movb   $0x2f,(%eax)
4000118f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
40001193:	83 ec 0c             	sub    $0xc,%esp
40001196:	ff 75 dc             	pushl  -0x24(%ebp)
40001199:	e8 b2 f0 ff ff       	call   40000250 <rewinddir>
4000119e:	83 c4 10             	add    $0x10,%esp
400011a1:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400011a5:	0f 84 ec 00 00 00    	je     40001297 <buildin_ls+0x354>
400011ab:	8b 45 cc             	mov    -0x34(%ebp),%eax
400011ae:	83 ec 08             	sub    $0x8,%esp
400011b1:	50                   	push   %eax
400011b2:	68 91 18 00 40       	push   $0x40001891
400011b7:	e8 5f f1 ff ff       	call   4000031b <printf>
400011bc:	83 c4 10             	add    $0x10,%esp
400011bf:	e9 a2 00 00 00       	jmp    40001266 <buildin_ls+0x323>
400011c4:	c6 45 e3 64          	movb   $0x64,-0x1d(%ebp)
400011c8:	8b 45 d8             	mov    -0x28(%ebp),%eax
400011cb:	8b 40 14             	mov    0x14(%eax),%eax
400011ce:	83 f8 01             	cmp    $0x1,%eax
400011d1:	75 04                	jne    400011d7 <buildin_ls+0x294>
400011d3:	c6 45 e3 2d          	movb   $0x2d,-0x1d(%ebp)
400011d7:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
400011dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
400011e0:	01 d0                	add    %edx,%eax
400011e2:	c6 00 00             	movb   $0x0,(%eax)
400011e5:	8b 45 d8             	mov    -0x28(%ebp),%eax
400011e8:	83 ec 08             	sub    $0x8,%esp
400011eb:	50                   	push   %eax
400011ec:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
400011f2:	50                   	push   %eax
400011f3:	e8 77 f8 ff ff       	call   40000a6f <user_strcat>
400011f8:	83 c4 10             	add    $0x10,%esp
400011fb:	83 ec 04             	sub    $0x4,%esp
400011fe:	6a 0c                	push   $0xc
40001200:	6a 00                	push   $0x0
40001202:	8d 45 c8             	lea    -0x38(%ebp),%eax
40001205:	50                   	push   %eax
40001206:	e8 43 f8 ff ff       	call   40000a4e <user_memset>
4000120b:	83 c4 10             	add    $0x10,%esp
4000120e:	83 ec 08             	sub    $0x8,%esp
40001211:	8d 45 c8             	lea    -0x38(%ebp),%eax
40001214:	50                   	push   %eax
40001215:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
4000121b:	50                   	push   %eax
4000121c:	e8 69 f0 ff ff       	call   4000028a <stat>
40001221:	83 c4 10             	add    $0x10,%esp
40001224:	83 f8 ff             	cmp    $0xffffffff,%eax
40001227:	75 19                	jne    40001242 <buildin_ls+0x2ff>
40001229:	8b 45 d8             	mov    -0x28(%ebp),%eax
4000122c:	83 ec 08             	sub    $0x8,%esp
4000122f:	50                   	push   %eax
40001230:	68 60 18 00 40       	push   $0x40001860
40001235:	e8 e1 f0 ff ff       	call   4000031b <printf>
4000123a:	83 c4 10             	add    $0x10,%esp
4000123d:	e9 bf 00 00 00       	jmp    40001301 <buildin_ls+0x3be>
40001242:	8b 5d d8             	mov    -0x28(%ebp),%ebx
40001245:	8b 4d cc             	mov    -0x34(%ebp),%ecx
40001248:	8b 45 d8             	mov    -0x28(%ebp),%eax
4000124b:	8b 50 10             	mov    0x10(%eax),%edx
4000124e:	0f be 45 e3          	movsbl -0x1d(%ebp),%eax
40001252:	83 ec 0c             	sub    $0xc,%esp
40001255:	53                   	push   %ebx
40001256:	51                   	push   %ecx
40001257:	52                   	push   %edx
40001258:	50                   	push   %eax
40001259:	68 9c 18 00 40       	push   $0x4000189c
4000125e:	e8 b8 f0 ff ff       	call   4000031b <printf>
40001263:	83 c4 20             	add    $0x20,%esp
40001266:	83 ec 0c             	sub    $0xc,%esp
40001269:	ff 75 dc             	pushl  -0x24(%ebp)
4000126c:	e8 52 f0 ff ff       	call   400002c3 <readdir>
40001271:	83 c4 10             	add    $0x10,%esp
40001274:	89 45 d8             	mov    %eax,-0x28(%ebp)
40001277:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
4000127b:	0f 85 43 ff ff ff    	jne    400011c4 <buildin_ls+0x281>
40001281:	eb 3b                	jmp    400012be <buildin_ls+0x37b>
40001283:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001286:	83 ec 08             	sub    $0x8,%esp
40001289:	50                   	push   %eax
4000128a:	68 ac 18 00 40       	push   $0x400018ac
4000128f:	e8 87 f0 ff ff       	call   4000031b <printf>
40001294:	83 c4 10             	add    $0x10,%esp
40001297:	83 ec 0c             	sub    $0xc,%esp
4000129a:	ff 75 dc             	pushl  -0x24(%ebp)
4000129d:	e8 21 f0 ff ff       	call   400002c3 <readdir>
400012a2:	83 c4 10             	add    $0x10,%esp
400012a5:	89 45 d8             	mov    %eax,-0x28(%ebp)
400012a8:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
400012ac:	75 d5                	jne    40001283 <buildin_ls+0x340>
400012ae:	83 ec 0c             	sub    $0xc,%esp
400012b1:	68 b0 18 00 40       	push   $0x400018b0
400012b6:	e8 60 f0 ff ff       	call   4000031b <printf>
400012bb:	83 c4 10             	add    $0x10,%esp
400012be:	83 ec 0c             	sub    $0xc,%esp
400012c1:	ff 75 dc             	pushl  -0x24(%ebp)
400012c4:	e8 e8 ef ff ff       	call   400002b1 <closedir>
400012c9:	83 c4 10             	add    $0x10,%esp
400012cc:	eb 33                	jmp    40001301 <buildin_ls+0x3be>
400012ce:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400012d2:	74 1a                	je     400012ee <buildin_ls+0x3ab>
400012d4:	8b 55 cc             	mov    -0x34(%ebp),%edx
400012d7:	8b 45 c8             	mov    -0x38(%ebp),%eax
400012da:	ff 75 f4             	pushl  -0xc(%ebp)
400012dd:	52                   	push   %edx
400012de:	50                   	push   %eax
400012df:	68 b2 18 00 40       	push   $0x400018b2
400012e4:	e8 32 f0 ff ff       	call   4000031b <printf>
400012e9:	83 c4 10             	add    $0x10,%esp
400012ec:	eb 13                	jmp    40001301 <buildin_ls+0x3be>
400012ee:	83 ec 08             	sub    $0x8,%esp
400012f1:	ff 75 f4             	pushl  -0xc(%ebp)
400012f4:	68 0a 17 00 40       	push   $0x4000170a
400012f9:	e8 1d f0 ff ff       	call   4000031b <printf>
400012fe:	83 c4 10             	add    $0x10,%esp
40001301:	8d 65 f8             	lea    -0x8(%ebp),%esp
40001304:	5b                   	pop    %ebx
40001305:	5f                   	pop    %edi
40001306:	5d                   	pop    %ebp
40001307:	c3                   	ret    

40001308 <buildin_ps>:
40001308:	55                   	push   %ebp
40001309:	89 e5                	mov    %esp,%ebp
4000130b:	83 ec 08             	sub    $0x8,%esp
4000130e:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40001312:	74 12                	je     40001326 <buildin_ps+0x1e>
40001314:	83 ec 0c             	sub    $0xc,%esp
40001317:	68 c1 18 00 40       	push   $0x400018c1
4000131c:	e8 fa ef ff ff       	call   4000031b <printf>
40001321:	83 c4 10             	add    $0x10,%esp
40001324:	eb 05                	jmp    4000132b <buildin_ps+0x23>
40001326:	e8 aa ef ff ff       	call   400002d5 <ps>
4000132b:	c9                   	leave  
4000132c:	c3                   	ret    

4000132d <buildin_mkdir>:
4000132d:	55                   	push   %ebp
4000132e:	89 e5                	mov    %esp,%ebp
40001330:	83 ec 18             	sub    $0x18,%esp
40001333:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
4000133a:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
4000133e:	74 12                	je     40001352 <buildin_mkdir+0x25>
40001340:	83 ec 0c             	sub    $0xc,%esp
40001343:	68 dc 18 00 40       	push   $0x400018dc
40001348:	e8 ce ef ff ff       	call   4000031b <printf>
4000134d:	83 c4 10             	add    $0x10,%esp
40001350:	eb 68                	jmp    400013ba <buildin_mkdir+0x8d>
40001352:	8b 45 0c             	mov    0xc(%ebp),%eax
40001355:	83 c0 04             	add    $0x4,%eax
40001358:	8b 00                	mov    (%eax),%eax
4000135a:	83 ec 08             	sub    $0x8,%esp
4000135d:	68 a0 1b 00 40       	push   $0x40001ba0
40001362:	50                   	push   %eax
40001363:	e8 2e fa ff ff       	call   40000d96 <make_clear_abs_path>
40001368:	83 c4 10             	add    $0x10,%esp
4000136b:	83 ec 08             	sub    $0x8,%esp
4000136e:	68 a0 1b 00 40       	push   $0x40001ba0
40001373:	68 e8 16 00 40       	push   $0x400016e8
40001378:	e8 74 f7 ff ff       	call   40000af1 <user_strcmp>
4000137d:	83 c4 10             	add    $0x10,%esp
40001380:	85 c0                	test   %eax,%eax
40001382:	74 36                	je     400013ba <buildin_mkdir+0x8d>
40001384:	83 ec 0c             	sub    $0xc,%esp
40001387:	68 a0 1b 00 40       	push   $0x40001ba0
4000138c:	e8 9b ee ff ff       	call   4000022c <mkdir>
40001391:	83 c4 10             	add    $0x10,%esp
40001394:	85 c0                	test   %eax,%eax
40001396:	75 09                	jne    400013a1 <buildin_mkdir+0x74>
40001398:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000139f:	eb 19                	jmp    400013ba <buildin_mkdir+0x8d>
400013a1:	8b 45 0c             	mov    0xc(%ebp),%eax
400013a4:	83 c0 04             	add    $0x4,%eax
400013a7:	8b 00                	mov    (%eax),%eax
400013a9:	83 ec 08             	sub    $0x8,%esp
400013ac:	50                   	push   %eax
400013ad:	68 00 19 00 40       	push   $0x40001900
400013b2:	e8 64 ef ff ff       	call   4000031b <printf>
400013b7:	83 c4 10             	add    $0x10,%esp
400013ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
400013bd:	c9                   	leave  
400013be:	c3                   	ret    

400013bf <buildin_rmdir>:
400013bf:	55                   	push   %ebp
400013c0:	89 e5                	mov    %esp,%ebp
400013c2:	83 ec 18             	sub    $0x18,%esp
400013c5:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
400013cc:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
400013d0:	74 12                	je     400013e4 <buildin_rmdir+0x25>
400013d2:	83 ec 0c             	sub    $0xc,%esp
400013d5:	68 24 19 00 40       	push   $0x40001924
400013da:	e8 3c ef ff ff       	call   4000031b <printf>
400013df:	83 c4 10             	add    $0x10,%esp
400013e2:	eb 68                	jmp    4000144c <buildin_rmdir+0x8d>
400013e4:	8b 45 0c             	mov    0xc(%ebp),%eax
400013e7:	83 c0 04             	add    $0x4,%eax
400013ea:	8b 00                	mov    (%eax),%eax
400013ec:	83 ec 08             	sub    $0x8,%esp
400013ef:	68 a0 1b 00 40       	push   $0x40001ba0
400013f4:	50                   	push   %eax
400013f5:	e8 9c f9 ff ff       	call   40000d96 <make_clear_abs_path>
400013fa:	83 c4 10             	add    $0x10,%esp
400013fd:	83 ec 08             	sub    $0x8,%esp
40001400:	68 a0 1b 00 40       	push   $0x40001ba0
40001405:	68 e8 16 00 40       	push   $0x400016e8
4000140a:	e8 e2 f6 ff ff       	call   40000af1 <user_strcmp>
4000140f:	83 c4 10             	add    $0x10,%esp
40001412:	85 c0                	test   %eax,%eax
40001414:	74 36                	je     4000144c <buildin_rmdir+0x8d>
40001416:	83 ec 0c             	sub    $0xc,%esp
40001419:	68 a0 1b 00 40       	push   $0x40001ba0
4000141e:	e8 1b ee ff ff       	call   4000023e <rmdir>
40001423:	83 c4 10             	add    $0x10,%esp
40001426:	85 c0                	test   %eax,%eax
40001428:	75 09                	jne    40001433 <buildin_rmdir+0x74>
4000142a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
40001431:	eb 19                	jmp    4000144c <buildin_rmdir+0x8d>
40001433:	8b 45 0c             	mov    0xc(%ebp),%eax
40001436:	83 c0 04             	add    $0x4,%eax
40001439:	8b 00                	mov    (%eax),%eax
4000143b:	83 ec 08             	sub    $0x8,%esp
4000143e:	50                   	push   %eax
4000143f:	68 45 19 00 40       	push   $0x40001945
40001444:	e8 d2 ee ff ff       	call   4000031b <printf>
40001449:	83 c4 10             	add    $0x10,%esp
4000144c:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000144f:	c9                   	leave  
40001450:	c3                   	ret    

40001451 <buildin_rm>:
40001451:	55                   	push   %ebp
40001452:	89 e5                	mov    %esp,%ebp
40001454:	83 ec 18             	sub    $0x18,%esp
40001457:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
4000145e:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40001462:	74 12                	je     40001476 <buildin_rm+0x25>
40001464:	83 ec 0c             	sub    $0xc,%esp
40001467:	68 5f 19 00 40       	push   $0x4000195f
4000146c:	e8 aa ee ff ff       	call   4000031b <printf>
40001471:	83 c4 10             	add    $0x10,%esp
40001474:	eb 68                	jmp    400014de <buildin_rm+0x8d>
40001476:	8b 45 0c             	mov    0xc(%ebp),%eax
40001479:	83 c0 04             	add    $0x4,%eax
4000147c:	8b 00                	mov    (%eax),%eax
4000147e:	83 ec 08             	sub    $0x8,%esp
40001481:	68 a0 1b 00 40       	push   $0x40001ba0
40001486:	50                   	push   %eax
40001487:	e8 0a f9 ff ff       	call   40000d96 <make_clear_abs_path>
4000148c:	83 c4 10             	add    $0x10,%esp
4000148f:	83 ec 08             	sub    $0x8,%esp
40001492:	68 a0 1b 00 40       	push   $0x40001ba0
40001497:	68 e8 16 00 40       	push   $0x400016e8
4000149c:	e8 50 f6 ff ff       	call   40000af1 <user_strcmp>
400014a1:	83 c4 10             	add    $0x10,%esp
400014a4:	85 c0                	test   %eax,%eax
400014a6:	74 36                	je     400014de <buildin_rm+0x8d>
400014a8:	83 ec 0c             	sub    $0xc,%esp
400014ab:	68 a0 1b 00 40       	push   $0x40001ba0
400014b0:	e8 65 ed ff ff       	call   4000021a <unlink>
400014b5:	83 c4 10             	add    $0x10,%esp
400014b8:	85 c0                	test   %eax,%eax
400014ba:	75 09                	jne    400014c5 <buildin_rm+0x74>
400014bc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400014c3:	eb 19                	jmp    400014de <buildin_rm+0x8d>
400014c5:	8b 45 0c             	mov    0xc(%ebp),%eax
400014c8:	83 c0 04             	add    $0x4,%eax
400014cb:	8b 00                	mov    (%eax),%eax
400014cd:	83 ec 08             	sub    $0x8,%esp
400014d0:	50                   	push   %eax
400014d1:	68 7d 19 00 40       	push   $0x4000197d
400014d6:	e8 40 ee ff ff       	call   4000031b <printf>
400014db:	83 c4 10             	add    $0x10,%esp
400014de:	8b 45 f4             	mov    -0xc(%ebp),%eax
400014e1:	c9                   	leave  
400014e2:	c3                   	ret    

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
c1000285:	68 28 a0 00 c1       	push   $0xc100a028
c100028a:	e8 89 49 00 00       	call   c1004c18 <printk>
c100028f:	83 c4 10             	add    $0x10,%esp
c1000292:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1000296:	0f b7 c0             	movzwl %ax,%eax
c1000299:	83 ec 08             	sub    $0x8,%esp
c100029c:	50                   	push   %eax
c100029d:	68 31 a0 00 c1       	push   $0xc100a031
c10002a2:	e8 71 49 00 00       	call   c1004c18 <printk>
c10002a7:	83 c4 10             	add    $0x10,%esp
c10002aa:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c10002ae:	0f b7 c0             	movzwl %ax,%eax
c10002b1:	83 ec 08             	sub    $0x8,%esp
c10002b4:	50                   	push   %eax
c10002b5:	68 3a a0 00 c1       	push   $0xc100a03a
c10002ba:	e8 59 49 00 00       	call   c1004c18 <printk>
c10002bf:	83 c4 10             	add    $0x10,%esp
c10002c2:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
c10002c6:	0f b7 c0             	movzwl %ax,%eax
c10002c9:	83 ec 08             	sub    $0x8,%esp
c10002cc:	50                   	push   %eax
c10002cd:	68 43 a0 00 c1       	push   $0xc100a043
c10002d2:	e8 41 49 00 00       	call   c1004c18 <printk>
c10002d7:	83 c4 10             	add    $0x10,%esp
c10002da:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
c10002de:	0f b7 c0             	movzwl %ax,%eax
c10002e1:	83 ec 08             	sub    $0x8,%esp
c10002e4:	50                   	push   %eax
c10002e5:	68 4c a0 00 c1       	push   $0xc100a04c
c10002ea:	e8 29 49 00 00       	call   c1004c18 <printk>
c10002ef:	83 c4 10             	add    $0x10,%esp
c10002f2:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c10002f6:	0f b7 c0             	movzwl %ax,%eax
c10002f9:	83 ec 08             	sub    $0x8,%esp
c10002fc:	50                   	push   %eax
c10002fd:	68 55 a0 00 c1       	push   $0xc100a055
c1000302:	e8 11 49 00 00       	call   c1004c18 <printk>
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
c1000321:	68 5e a0 00 c1       	push   $0xc100a05e
c1000326:	e8 ed 48 00 00       	call   c1004c18 <printk>
c100032b:	83 c4 10             	add    $0x10,%esp
c100032e:	83 ec 04             	sub    $0x4,%esp
c1000331:	ff 75 14             	pushl  0x14(%ebp)
c1000334:	ff 75 10             	pushl  0x10(%ebp)
c1000337:	68 7c a0 00 c1       	push   $0xc100a07c
c100033c:	e8 d7 48 00 00       	call   c1004c18 <printk>
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
c100035e:	68 23 a1 00 c1       	push   $0xc100a123
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
c10003ed:	68 26 a1 00 c1       	push   $0xc100a126
c10003f2:	e8 21 48 00 00       	call   c1004c18 <printk>
c10003f7:	83 c4 10             	add    $0x10,%esp
c10003fa:	83 ec 0c             	sub    $0xc,%esp
c10003fd:	68 2c a1 00 c1       	push   $0xc100a12c
c1000402:	e8 11 48 00 00       	call   c1004c18 <printk>
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
c100041c:	68 26 a1 00 c1       	push   $0xc100a126
c1000421:	e8 f2 47 00 00       	call   c1004c18 <printk>
c1000426:	83 c4 10             	add    $0x10,%esp
c1000429:	83 ec 0c             	sub    $0xc,%esp
c100042c:	68 5c a1 00 c1       	push   $0xc100a15c
c1000431:	e8 e2 47 00 00       	call   c1004c18 <printk>
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
c100046d:	68 7b a1 00 c1       	push   $0xc100a17b
c1000472:	e8 a1 47 00 00       	call   c1004c18 <printk>
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
c10004a0:	68 26 a1 00 c1       	push   $0xc100a126
c10004a5:	e8 6e 47 00 00       	call   c1004c18 <printk>
c10004aa:	83 c4 10             	add    $0x10,%esp
c10004ad:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10004b4:	83 ec 0c             	sub    $0xc,%esp
c10004b7:	68 86 a1 00 c1       	push   $0xc100a186
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
c1000507:	68 a4 a1 00 c1       	push   $0xc100a1a4
c100050c:	e8 07 47 00 00       	call   c1004c18 <printk>
c1000511:	83 c4 10             	add    $0x10,%esp
c1000514:	eb 32                	jmp    c1000548 <instr_game+0xbe>
c1000516:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000519:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c100051c:	7d 15                	jge    c1000533 <instr_game+0xa9>
c100051e:	83 ec 0c             	sub    $0xc,%esp
c1000521:	68 d3 a1 00 c1       	push   $0xc100a1d3
c1000526:	e8 ed 46 00 00       	call   c1004c18 <printk>
c100052b:	83 c4 10             	add    $0x10,%esp
c100052e:	e9 7a ff ff ff       	jmp    c10004ad <instr_game+0x23>
c1000533:	83 ec 0c             	sub    $0xc,%esp
c1000536:	68 eb a1 00 c1       	push   $0xc100a1eb
c100053b:	e8 d8 46 00 00       	call   c1004c18 <printk>
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
c1000552:	e8 94 4a 00 00       	call   c1004feb <cons_getc>
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
c1000577:	68 02 a2 00 c1       	push   $0xc100a202
c100057c:	e8 97 46 00 00       	call   c1004c18 <printk>
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
c10005b8:	e8 f0 49 00 00       	call   c1004fad <cons_putc>
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
c10005e6:	e8 c2 49 00 00       	call   c1004fad <cons_putc>
c10005eb:	83 c4 10             	add    $0x10,%esp
c10005ee:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
c10005f2:	eb 2c                	jmp    c1000620 <readline+0xbb>
c10005f4:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
c10005f8:	74 06                	je     c1000600 <readline+0x9b>
c10005fa:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
c10005fe:	75 8b                	jne    c100058b <readline+0x26>
c1000600:	83 ec 0c             	sub    $0xc,%esp
c1000603:	ff 75 f0             	pushl  -0x10(%ebp)
c1000606:	e8 a2 49 00 00       	call   c1004fad <cons_putc>
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
c1000995:	68 3a a2 00 c1       	push   $0xc100a23a
c100099a:	e8 79 42 00 00       	call   c1004c18 <printk>
c100099f:	83 c4 10             	add    $0x10,%esp
c10009a2:	8b 45 08             	mov    0x8(%ebp),%eax
c10009a5:	8b 40 04             	mov    0x4(%eax),%eax
c10009a8:	83 ec 08             	sub    $0x8,%esp
c10009ab:	50                   	push   %eax
c10009ac:	68 4a a2 00 c1       	push   $0xc100a24a
c10009b1:	e8 62 42 00 00       	call   c1004c18 <printk>
c10009b6:	83 c4 10             	add    $0x10,%esp
c10009b9:	8b 45 08             	mov    0x8(%ebp),%eax
c10009bc:	8b 40 08             	mov    0x8(%eax),%eax
c10009bf:	83 ec 08             	sub    $0x8,%esp
c10009c2:	50                   	push   %eax
c10009c3:	68 5a a2 00 c1       	push   $0xc100a25a
c10009c8:	e8 4b 42 00 00       	call   c1004c18 <printk>
c10009cd:	83 c4 10             	add    $0x10,%esp
c10009d0:	8b 45 08             	mov    0x8(%ebp),%eax
c10009d3:	8b 40 0c             	mov    0xc(%eax),%eax
c10009d6:	83 ec 08             	sub    $0x8,%esp
c10009d9:	50                   	push   %eax
c10009da:	68 6a a2 00 c1       	push   $0xc100a26a
c10009df:	e8 34 42 00 00       	call   c1004c18 <printk>
c10009e4:	83 c4 10             	add    $0x10,%esp
c10009e7:	8b 45 08             	mov    0x8(%ebp),%eax
c10009ea:	8b 40 10             	mov    0x10(%eax),%eax
c10009ed:	83 ec 08             	sub    $0x8,%esp
c10009f0:	50                   	push   %eax
c10009f1:	68 7a a2 00 c1       	push   $0xc100a27a
c10009f6:	e8 1d 42 00 00       	call   c1004c18 <printk>
c10009fb:	83 c4 10             	add    $0x10,%esp
c10009fe:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a01:	8b 40 14             	mov    0x14(%eax),%eax
c1000a04:	83 ec 08             	sub    $0x8,%esp
c1000a07:	50                   	push   %eax
c1000a08:	68 8a a2 00 c1       	push   $0xc100a28a
c1000a0d:	e8 06 42 00 00       	call   c1004c18 <printk>
c1000a12:	83 c4 10             	add    $0x10,%esp
c1000a15:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a18:	8b 40 18             	mov    0x18(%eax),%eax
c1000a1b:	83 ec 08             	sub    $0x8,%esp
c1000a1e:	50                   	push   %eax
c1000a1f:	68 9a a2 00 c1       	push   $0xc100a29a
c1000a24:	e8 ef 41 00 00       	call   c1004c18 <printk>
c1000a29:	83 c4 10             	add    $0x10,%esp
c1000a2c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a2f:	8b 40 1c             	mov    0x1c(%eax),%eax
c1000a32:	83 ec 08             	sub    $0x8,%esp
c1000a35:	50                   	push   %eax
c1000a36:	68 aa a2 00 c1       	push   $0xc100a2aa
c1000a3b:	e8 d8 41 00 00       	call   c1004c18 <printk>
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
c1000a69:	68 ba a2 00 c1       	push   $0xc100a2ba
c1000a6e:	e8 a5 41 00 00       	call   c1004c18 <printk>
c1000a73:	83 c4 10             	add    $0x10,%esp
c1000a76:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a79:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1000a7d:	0f b7 c0             	movzwl %ax,%eax
c1000a80:	83 ec 08             	sub    $0x8,%esp
c1000a83:	50                   	push   %eax
c1000a84:	68 ce a2 00 c1       	push   $0xc100a2ce
c1000a89:	e8 8a 41 00 00       	call   c1004c18 <printk>
c1000a8e:	83 c4 10             	add    $0x10,%esp
c1000a91:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a94:	0f b7 40 24          	movzwl 0x24(%eax),%eax
c1000a98:	0f b7 c0             	movzwl %ax,%eax
c1000a9b:	83 ec 08             	sub    $0x8,%esp
c1000a9e:	50                   	push   %eax
c1000a9f:	68 e2 a2 00 c1       	push   $0xc100a2e2
c1000aa4:	e8 6f 41 00 00       	call   c1004c18 <printk>
c1000aa9:	83 c4 10             	add    $0x10,%esp
c1000aac:	8b 45 08             	mov    0x8(%ebp),%eax
c1000aaf:	0f b7 40 20          	movzwl 0x20(%eax),%eax
c1000ab3:	0f b7 c0             	movzwl %ax,%eax
c1000ab6:	83 ec 08             	sub    $0x8,%esp
c1000ab9:	50                   	push   %eax
c1000aba:	68 f6 a2 00 c1       	push   $0xc100a2f6
c1000abf:	e8 54 41 00 00       	call   c1004c18 <printk>
c1000ac4:	83 c4 10             	add    $0x10,%esp
c1000ac7:	8b 45 08             	mov    0x8(%ebp),%eax
c1000aca:	8b 40 34             	mov    0x34(%eax),%eax
c1000acd:	83 ec 08             	sub    $0x8,%esp
c1000ad0:	50                   	push   %eax
c1000ad1:	68 0a a3 00 c1       	push   $0xc100a30a
c1000ad6:	e8 3d 41 00 00       	call   c1004c18 <printk>
c1000adb:	83 c4 10             	add    $0x10,%esp
c1000ade:	8b 45 08             	mov    0x8(%ebp),%eax
c1000ae1:	8b 40 38             	mov    0x38(%eax),%eax
c1000ae4:	83 ec 08             	sub    $0x8,%esp
c1000ae7:	50                   	push   %eax
c1000ae8:	68 1a a3 00 c1       	push   $0xc100a31a
c1000aed:	e8 26 41 00 00       	call   c1004c18 <printk>
c1000af2:	83 c4 10             	add    $0x10,%esp
c1000af5:	8b 45 08             	mov    0x8(%ebp),%eax
c1000af8:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
c1000afc:	0f b7 c0             	movzwl %ax,%eax
c1000aff:	83 ec 08             	sub    $0x8,%esp
c1000b02:	50                   	push   %eax
c1000b03:	68 2a a3 00 c1       	push   $0xc100a32a
c1000b08:	e8 0b 41 00 00       	call   c1004c18 <printk>
c1000b0d:	83 c4 10             	add    $0x10,%esp
c1000b10:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b13:	8b 40 40             	mov    0x40(%eax),%eax
c1000b16:	83 ec 08             	sub    $0x8,%esp
c1000b19:	50                   	push   %eax
c1000b1a:	68 3e a3 00 c1       	push   $0xc100a33e
c1000b1f:	e8 f4 40 00 00       	call   c1004c18 <printk>
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
c1000b62:	68 4e a3 00 c1       	push   $0xc100a34e
c1000b67:	e8 ac 40 00 00       	call   c1004c18 <printk>
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
c1000b8e:	68 52 a3 00 c1       	push   $0xc100a352
c1000b93:	e8 80 40 00 00       	call   c1004c18 <printk>
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
c1000bd6:	8b 04 85 90 a3 00 c1 	mov    -0x3eff5c70(,%eax,4),%eax
c1000bdd:	ff e0                	jmp    *%eax
c1000bdf:	83 f8 60             	cmp    $0x60,%eax
c1000be2:	0f 85 cb 00 00 00    	jne    c1000cb3 <trap_dispatch+0x115>
c1000be8:	83 ec 0c             	sub    $0xc,%esp
c1000beb:	68 5b a3 00 c1       	push   $0xc100a35b
c1000bf0:	e8 23 40 00 00       	call   c1004c18 <printk>
c1000bf5:	83 c4 10             	add    $0x10,%esp
c1000bf8:	e9 cf 00 00 00       	jmp    c1000ccc <trap_dispatch+0x12e>
c1000bfd:	83 ec 0c             	sub    $0xc,%esp
c1000c00:	68 6b a3 00 c1       	push   $0xc100a36b
c1000c05:	e8 0e 40 00 00       	call   c1004c18 <printk>
c1000c0a:	83 c4 10             	add    $0x10,%esp
c1000c0d:	e9 ba 00 00 00       	jmp    c1000ccc <trap_dispatch+0x12e>
c1000c12:	83 ec 0c             	sub    $0xc,%esp
c1000c15:	ff 75 08             	pushl  0x8(%ebp)
c1000c18:	e8 43 10 00 00       	call   c1001c60 <syscall_trap>
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
c1000c78:	e8 51 2d 00 00       	call   c10039ce <schedule>
c1000c7d:	eb 49                	jmp    c1000cc8 <trap_dispatch+0x12a>
c1000c7f:	e8 67 43 00 00       	call   c1004feb <cons_getc>
c1000c84:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000c87:	eb 43                	jmp    c1000ccc <trap_dispatch+0x12e>
c1000c89:	e8 5d 43 00 00       	call   c1004feb <cons_getc>
c1000c8e:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000c91:	0f b6 05 b4 0c 01 c1 	movzbl 0xc1010cb4,%eax
c1000c98:	84 c0                	test   %al,%al
c1000c9a:	75 2f                	jne    c1000ccb <trap_dispatch+0x12d>
c1000c9c:	83 ec 0c             	sub    $0xc,%esp
c1000c9f:	68 b4 0c 01 c1       	push   $0xc1010cb4
c1000ca4:	e8 03 45 00 00       	call   c10051ac <sema_up>
c1000ca9:	83 c4 10             	add    $0x10,%esp
c1000cac:	e8 1d 2d 00 00       	call   c10039ce <schedule>
c1000cb1:	eb 18                	jmp    c1000ccb <trap_dispatch+0x12d>
c1000cb3:	83 ec 0c             	sub    $0xc,%esp
c1000cb6:	68 72 a3 00 c1       	push   $0xc100a372
c1000cbb:	e8 58 3f 00 00       	call   c1004c18 <printk>
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
c1001851:	8b 40 34             	mov    0x34(%eax),%eax
c1001854:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001857:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100185a:	8b 40 44             	mov    0x44(%eax),%eax
c100185d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001860:	83 ec 04             	sub    $0x4,%esp
c1001863:	ff 75 f4             	pushl  -0xc(%ebp)
c1001866:	ff 75 f0             	pushl  -0x10(%ebp)
c1001869:	6a 00                	push   $0x0
c100186b:	e8 2d 1f 00 00       	call   c100379d <do_fork>
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
c10018c8:	e8 17 23 00 00       	call   c1003be4 <do_execve>
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
c1001910:	e8 7e 2f 00 00       	call   c1004893 <print_char>
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
c1001937:	e8 74 30 00 00       	call   c10049b0 <print_string>
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
c1001990:	e8 52 30 00 00       	call   c10049e7 <print_num>
c1001995:	83 c4 20             	add    $0x20,%esp
c1001998:	b8 00 00 00 00       	mov    $0x0,%eax
c100199d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10019a0:	c9                   	leave  
c10019a1:	c3                   	ret    

c10019a2 <sys_backtrace>:
c10019a2:	55                   	push   %ebp
c10019a3:	89 e5                	mov    %esp,%ebp
c10019a5:	83 ec 08             	sub    $0x8,%esp
c10019a8:	e8 b9 31 00 00       	call   c1004b66 <backtrace>
c10019ad:	b8 00 00 00 00       	mov    $0x0,%eax
c10019b2:	c9                   	leave  
c10019b3:	c3                   	ret    

c10019b4 <sys_pgdir>:
c10019b4:	55                   	push   %ebp
c10019b5:	89 e5                	mov    %esp,%ebp
c10019b7:	b8 00 00 00 00       	mov    $0x0,%eax
c10019bc:	5d                   	pop    %ebp
c10019bd:	c3                   	ret    

c10019be <sys_fdread>:
c10019be:	55                   	push   %ebp
c10019bf:	89 e5                	mov    %esp,%ebp
c10019c1:	83 ec 18             	sub    $0x18,%esp
c10019c4:	8b 45 08             	mov    0x8(%ebp),%eax
c10019c7:	8b 00                	mov    (%eax),%eax
c10019c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10019cc:	8b 45 08             	mov    0x8(%ebp),%eax
c10019cf:	83 c0 04             	add    $0x4,%eax
c10019d2:	8b 00                	mov    (%eax),%eax
c10019d4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10019d7:	8b 45 08             	mov    0x8(%ebp),%eax
c10019da:	8b 40 08             	mov    0x8(%eax),%eax
c10019dd:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10019e0:	83 ec 04             	sub    $0x4,%esp
c10019e3:	ff 75 ec             	pushl  -0x14(%ebp)
c10019e6:	ff 75 f0             	pushl  -0x10(%ebp)
c10019e9:	ff 75 f4             	pushl  -0xc(%ebp)
c10019ec:	e8 4a 4c 00 00       	call   c100663b <sys_read>
c10019f1:	83 c4 10             	add    $0x10,%esp
c10019f4:	c9                   	leave  
c10019f5:	c3                   	ret    

c10019f6 <syscall_open>:
c10019f6:	55                   	push   %ebp
c10019f7:	89 e5                	mov    %esp,%ebp
c10019f9:	83 ec 18             	sub    $0x18,%esp
c10019fc:	8b 45 08             	mov    0x8(%ebp),%eax
c10019ff:	8b 00                	mov    (%eax),%eax
c1001a01:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a04:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a07:	83 c0 04             	add    $0x4,%eax
c1001a0a:	8b 00                	mov    (%eax),%eax
c1001a0c:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001a0f:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001a13:	83 ec 08             	sub    $0x8,%esp
c1001a16:	50                   	push   %eax
c1001a17:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a1a:	e8 05 48 00 00       	call   c1006224 <sys_open>
c1001a1f:	83 c4 10             	add    $0x10,%esp
c1001a22:	c9                   	leave  
c1001a23:	c3                   	ret    

c1001a24 <syscall_close>:
c1001a24:	55                   	push   %ebp
c1001a25:	89 e5                	mov    %esp,%ebp
c1001a27:	83 ec 18             	sub    $0x18,%esp
c1001a2a:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a2d:	8b 00                	mov    (%eax),%eax
c1001a2f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a32:	83 ec 0c             	sub    $0xc,%esp
c1001a35:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a38:	e8 af 4a 00 00       	call   c10064ec <sys_close>
c1001a3d:	83 c4 10             	add    $0x10,%esp
c1001a40:	c9                   	leave  
c1001a41:	c3                   	ret    

c1001a42 <syscall_write>:
c1001a42:	55                   	push   %ebp
c1001a43:	89 e5                	mov    %esp,%ebp
c1001a45:	83 ec 18             	sub    $0x18,%esp
c1001a48:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a4b:	8b 00                	mov    (%eax),%eax
c1001a4d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a50:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a53:	83 c0 04             	add    $0x4,%eax
c1001a56:	8b 00                	mov    (%eax),%eax
c1001a58:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001a5b:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a5e:	8b 40 08             	mov    0x8(%eax),%eax
c1001a61:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001a64:	83 ec 04             	sub    $0x4,%esp
c1001a67:	ff 75 ec             	pushl  -0x14(%ebp)
c1001a6a:	ff 75 f0             	pushl  -0x10(%ebp)
c1001a6d:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a70:	e8 d3 4a 00 00       	call   c1006548 <sys_write>
c1001a75:	83 c4 10             	add    $0x10,%esp
c1001a78:	c9                   	leave  
c1001a79:	c3                   	ret    

c1001a7a <syscall_lseek>:
c1001a7a:	55                   	push   %ebp
c1001a7b:	89 e5                	mov    %esp,%ebp
c1001a7d:	83 ec 18             	sub    $0x18,%esp
c1001a80:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a83:	8b 00                	mov    (%eax),%eax
c1001a85:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a88:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a8b:	83 c0 04             	add    $0x4,%eax
c1001a8e:	8b 00                	mov    (%eax),%eax
c1001a90:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001a93:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a96:	83 c0 08             	add    $0x8,%eax
c1001a99:	8b 00                	mov    (%eax),%eax
c1001a9b:	88 45 ef             	mov    %al,-0x11(%ebp)
c1001a9e:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1001aa2:	83 ec 04             	sub    $0x4,%esp
c1001aa5:	50                   	push   %eax
c1001aa6:	ff 75 f0             	pushl  -0x10(%ebp)
c1001aa9:	ff 75 f4             	pushl  -0xc(%ebp)
c1001aac:	e8 82 4c 00 00       	call   c1006733 <sys_lseek>
c1001ab1:	83 c4 10             	add    $0x10,%esp
c1001ab4:	c9                   	leave  
c1001ab5:	c3                   	ret    

c1001ab6 <syscall_unlink>:
c1001ab6:	55                   	push   %ebp
c1001ab7:	89 e5                	mov    %esp,%ebp
c1001ab9:	83 ec 18             	sub    $0x18,%esp
c1001abc:	8b 45 08             	mov    0x8(%ebp),%eax
c1001abf:	8b 00                	mov    (%eax),%eax
c1001ac1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001ac4:	83 ec 0c             	sub    $0xc,%esp
c1001ac7:	ff 75 f4             	pushl  -0xc(%ebp)
c1001aca:	e8 50 4d 00 00       	call   c100681f <sys_unlink>
c1001acf:	83 c4 10             	add    $0x10,%esp
c1001ad2:	c9                   	leave  
c1001ad3:	c3                   	ret    

c1001ad4 <syscall_mkdir>:
c1001ad4:	55                   	push   %ebp
c1001ad5:	89 e5                	mov    %esp,%ebp
c1001ad7:	83 ec 18             	sub    $0x18,%esp
c1001ada:	8b 45 08             	mov    0x8(%ebp),%eax
c1001add:	8b 00                	mov    (%eax),%eax
c1001adf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001ae2:	83 ec 0c             	sub    $0xc,%esp
c1001ae5:	ff 75 f4             	pushl  -0xc(%ebp)
c1001ae8:	e8 52 4f 00 00       	call   c1006a3f <sys_mkdir>
c1001aed:	83 c4 10             	add    $0x10,%esp
c1001af0:	c9                   	leave  
c1001af1:	c3                   	ret    

c1001af2 <syscall_rmdir>:
c1001af2:	55                   	push   %ebp
c1001af3:	89 e5                	mov    %esp,%ebp
c1001af5:	83 ec 18             	sub    $0x18,%esp
c1001af8:	8b 45 08             	mov    0x8(%ebp),%eax
c1001afb:	8b 00                	mov    (%eax),%eax
c1001afd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b00:	83 ec 0c             	sub    $0xc,%esp
c1001b03:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b06:	e8 ed 54 00 00       	call   c1006ff8 <sys_rmdir>
c1001b0b:	83 c4 10             	add    $0x10,%esp
c1001b0e:	c9                   	leave  
c1001b0f:	c3                   	ret    

c1001b10 <syscall_rewinddir>:
c1001b10:	55                   	push   %ebp
c1001b11:	89 e5                	mov    %esp,%ebp
c1001b13:	83 ec 18             	sub    $0x18,%esp
c1001b16:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b19:	8b 00                	mov    (%eax),%eax
c1001b1b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b1e:	83 ec 0c             	sub    $0xc,%esp
c1001b21:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b24:	e8 bf 54 00 00       	call   c1006fe8 <sys_rewinddir>
c1001b29:	83 c4 10             	add    $0x10,%esp
c1001b2c:	b8 00 00 00 00       	mov    $0x0,%eax
c1001b31:	c9                   	leave  
c1001b32:	c3                   	ret    

c1001b33 <syscall_getcwd>:
c1001b33:	55                   	push   %ebp
c1001b34:	89 e5                	mov    %esp,%ebp
c1001b36:	83 ec 18             	sub    $0x18,%esp
c1001b39:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b3c:	8b 00                	mov    (%eax),%eax
c1001b3e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b41:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b44:	8b 40 04             	mov    0x4(%eax),%eax
c1001b47:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001b4a:	83 ec 08             	sub    $0x8,%esp
c1001b4d:	ff 75 f0             	pushl  -0x10(%ebp)
c1001b50:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b53:	e8 1f 58 00 00       	call   c1007377 <sys_getcwd>
c1001b58:	83 c4 10             	add    $0x10,%esp
c1001b5b:	c9                   	leave  
c1001b5c:	c3                   	ret    

c1001b5d <syscall_chdir>:
c1001b5d:	55                   	push   %ebp
c1001b5e:	89 e5                	mov    %esp,%ebp
c1001b60:	83 ec 18             	sub    $0x18,%esp
c1001b63:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b66:	8b 00                	mov    (%eax),%eax
c1001b68:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b6b:	83 ec 0c             	sub    $0xc,%esp
c1001b6e:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b71:	e8 1a 5b 00 00       	call   c1007690 <sys_chdir>
c1001b76:	83 c4 10             	add    $0x10,%esp
c1001b79:	c9                   	leave  
c1001b7a:	c3                   	ret    

c1001b7b <syscall_stat>:
c1001b7b:	55                   	push   %ebp
c1001b7c:	89 e5                	mov    %esp,%ebp
c1001b7e:	83 ec 18             	sub    $0x18,%esp
c1001b81:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b84:	8b 00                	mov    (%eax),%eax
c1001b86:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b89:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b8c:	83 c0 04             	add    $0x4,%eax
c1001b8f:	8b 00                	mov    (%eax),%eax
c1001b91:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001b94:	83 ec 08             	sub    $0x8,%esp
c1001b97:	ff 75 f0             	pushl  -0x10(%ebp)
c1001b9a:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b9d:	e8 c2 59 00 00       	call   c1007564 <sys_stat>
c1001ba2:	83 c4 10             	add    $0x10,%esp
c1001ba5:	c9                   	leave  
c1001ba6:	c3                   	ret    

c1001ba7 <syscall_opendir>:
c1001ba7:	55                   	push   %ebp
c1001ba8:	89 e5                	mov    %esp,%ebp
c1001baa:	83 ec 18             	sub    $0x18,%esp
c1001bad:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bb0:	8b 00                	mov    (%eax),%eax
c1001bb2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bb5:	83 ec 0c             	sub    $0xc,%esp
c1001bb8:	ff 75 f4             	pushl  -0xc(%ebp)
c1001bbb:	e8 b9 52 00 00       	call   c1006e79 <sys_opendir>
c1001bc0:	83 c4 10             	add    $0x10,%esp
c1001bc3:	c9                   	leave  
c1001bc4:	c3                   	ret    

c1001bc5 <syscall_closedir>:
c1001bc5:	55                   	push   %ebp
c1001bc6:	89 e5                	mov    %esp,%ebp
c1001bc8:	83 ec 18             	sub    $0x18,%esp
c1001bcb:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bce:	8b 00                	mov    (%eax),%eax
c1001bd0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bd3:	83 ec 0c             	sub    $0xc,%esp
c1001bd6:	ff 75 f4             	pushl  -0xc(%ebp)
c1001bd9:	e8 a8 53 00 00       	call   c1006f86 <sys_closedir>
c1001bde:	83 c4 10             	add    $0x10,%esp
c1001be1:	c9                   	leave  
c1001be2:	c3                   	ret    

c1001be3 <syscall_readdir>:
c1001be3:	55                   	push   %ebp
c1001be4:	89 e5                	mov    %esp,%ebp
c1001be6:	83 ec 18             	sub    $0x18,%esp
c1001be9:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bec:	8b 00                	mov    (%eax),%eax
c1001bee:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bf1:	83 ec 0c             	sub    $0xc,%esp
c1001bf4:	ff 75 f4             	pushl  -0xc(%ebp)
c1001bf7:	e8 b7 53 00 00       	call   c1006fb3 <sys_readdir>
c1001bfc:	83 c4 10             	add    $0x10,%esp
c1001bff:	c9                   	leave  
c1001c00:	c3                   	ret    

c1001c01 <syscall_print_task>:
c1001c01:	55                   	push   %ebp
c1001c02:	89 e5                	mov    %esp,%ebp
c1001c04:	83 ec 08             	sub    $0x8,%esp
c1001c07:	e8 1c 25 00 00       	call   c1004128 <sys_print_task>
c1001c0c:	b8 00 00 00 00       	mov    $0x0,%eax
c1001c11:	c9                   	leave  
c1001c12:	c3                   	ret    

c1001c13 <syscall_malloc>:
c1001c13:	55                   	push   %ebp
c1001c14:	89 e5                	mov    %esp,%ebp
c1001c16:	83 ec 18             	sub    $0x18,%esp
c1001c19:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c1c:	8b 00                	mov    (%eax),%eax
c1001c1e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c21:	83 ec 0c             	sub    $0xc,%esp
c1001c24:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c27:	e8 ea 11 00 00       	call   c1002e16 <sys_malloc>
c1001c2c:	83 c4 10             	add    $0x10,%esp
c1001c2f:	c9                   	leave  
c1001c30:	c3                   	ret    

c1001c31 <syscall_free>:
c1001c31:	55                   	push   %ebp
c1001c32:	89 e5                	mov    %esp,%ebp
c1001c34:	83 ec 18             	sub    $0x18,%esp
c1001c37:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c3a:	8b 00                	mov    (%eax),%eax
c1001c3c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c3f:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c42:	8b 40 04             	mov    0x4(%eax),%eax
c1001c45:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001c48:	83 ec 08             	sub    $0x8,%esp
c1001c4b:	ff 75 f0             	pushl  -0x10(%ebp)
c1001c4e:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c51:	e8 1f 12 00 00       	call   c1002e75 <sys_free>
c1001c56:	83 c4 10             	add    $0x10,%esp
c1001c59:	b8 00 00 00 00       	mov    $0x0,%eax
c1001c5e:	c9                   	leave  
c1001c5f:	c3                   	ret    

c1001c60 <syscall_trap>:
c1001c60:	55                   	push   %ebp
c1001c61:	89 e5                	mov    %esp,%ebp
c1001c63:	83 ec 28             	sub    $0x28,%esp
c1001c66:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c69:	8b 40 1c             	mov    0x1c(%eax),%eax
c1001c6c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c6f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1001c73:	78 60                	js     c1001cd5 <syscall_trap+0x75>
c1001c75:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001c78:	83 f8 38             	cmp    $0x38,%eax
c1001c7b:	77 58                	ja     c1001cd5 <syscall_trap+0x75>
c1001c7d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001c80:	8b 04 85 00 c5 00 c1 	mov    -0x3eff3b00(,%eax,4),%eax
c1001c87:	85 c0                	test   %eax,%eax
c1001c89:	74 4a                	je     c1001cd5 <syscall_trap+0x75>
c1001c8b:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c8e:	8b 40 14             	mov    0x14(%eax),%eax
c1001c91:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1001c94:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c97:	8b 40 18             	mov    0x18(%eax),%eax
c1001c9a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1001c9d:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ca0:	8b 40 10             	mov    0x10(%eax),%eax
c1001ca3:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1001ca6:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ca9:	8b 00                	mov    (%eax),%eax
c1001cab:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001cae:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cb1:	8b 40 04             	mov    0x4(%eax),%eax
c1001cb4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001cb7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001cba:	8b 04 85 00 c5 00 c1 	mov    -0x3eff3b00(,%eax,4),%eax
c1001cc1:	83 ec 0c             	sub    $0xc,%esp
c1001cc4:	8d 55 e0             	lea    -0x20(%ebp),%edx
c1001cc7:	52                   	push   %edx
c1001cc8:	ff d0                	call   *%eax
c1001cca:	83 c4 10             	add    $0x10,%esp
c1001ccd:	89 c2                	mov    %eax,%edx
c1001ccf:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cd2:	89 50 1c             	mov    %edx,0x1c(%eax)
c1001cd5:	c9                   	leave  
c1001cd6:	c3                   	ret    

c1001cd7 <kbd_proc_data>:
c1001cd7:	55                   	push   %ebp
c1001cd8:	89 e5                	mov    %esp,%ebp
c1001cda:	83 ec 18             	sub    $0x18,%esp
c1001cdd:	83 ec 0c             	sub    $0xc,%esp
c1001ce0:	6a 64                	push   $0x64
c1001ce2:	e8 19 e3 ff ff       	call   c1000000 <inb>
c1001ce7:	83 c4 10             	add    $0x10,%esp
c1001cea:	83 e0 01             	and    $0x1,%eax
c1001ced:	85 c0                	test   %eax,%eax
c1001cef:	75 0a                	jne    c1001cfb <kbd_proc_data+0x24>
c1001cf1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1001cf6:	e9 55 01 00 00       	jmp    c1001e50 <kbd_proc_data+0x179>
c1001cfb:	83 ec 0c             	sub    $0xc,%esp
c1001cfe:	6a 60                	push   $0x60
c1001d00:	e8 fb e2 ff ff       	call   c1000000 <inb>
c1001d05:	83 c4 10             	add    $0x10,%esp
c1001d08:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001d0b:	80 7d f3 e0          	cmpb   $0xe0,-0xd(%ebp)
c1001d0f:	75 17                	jne    c1001d28 <kbd_proc_data+0x51>
c1001d11:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d16:	83 c8 40             	or     $0x40,%eax
c1001d19:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001d1e:	b8 00 00 00 00       	mov    $0x0,%eax
c1001d23:	e9 28 01 00 00       	jmp    c1001e50 <kbd_proc_data+0x179>
c1001d28:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d2c:	84 c0                	test   %al,%al
c1001d2e:	79 47                	jns    c1001d77 <kbd_proc_data+0xa0>
c1001d30:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d35:	83 e0 40             	and    $0x40,%eax
c1001d38:	85 c0                	test   %eax,%eax
c1001d3a:	75 09                	jne    c1001d45 <kbd_proc_data+0x6e>
c1001d3c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d40:	83 e0 7f             	and    $0x7f,%eax
c1001d43:	eb 04                	jmp    c1001d49 <kbd_proc_data+0x72>
c1001d45:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d49:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001d4c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d50:	0f b6 80 00 c6 00 c1 	movzbl -0x3eff3a00(%eax),%eax
c1001d57:	83 c8 40             	or     $0x40,%eax
c1001d5a:	0f b6 c0             	movzbl %al,%eax
c1001d5d:	f7 d0                	not    %eax
c1001d5f:	89 c2                	mov    %eax,%edx
c1001d61:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d66:	21 d0                	and    %edx,%eax
c1001d68:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001d6d:	b8 00 00 00 00       	mov    $0x0,%eax
c1001d72:	e9 d9 00 00 00       	jmp    c1001e50 <kbd_proc_data+0x179>
c1001d77:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d7c:	83 e0 40             	and    $0x40,%eax
c1001d7f:	85 c0                	test   %eax,%eax
c1001d81:	74 11                	je     c1001d94 <kbd_proc_data+0xbd>
c1001d83:	80 4d f3 80          	orb    $0x80,-0xd(%ebp)
c1001d87:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d8c:	83 e0 bf             	and    $0xffffffbf,%eax
c1001d8f:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001d94:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d98:	0f b6 80 00 c6 00 c1 	movzbl -0x3eff3a00(%eax),%eax
c1001d9f:	0f b6 d0             	movzbl %al,%edx
c1001da2:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001da7:	09 d0                	or     %edx,%eax
c1001da9:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001dae:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001db2:	0f b6 80 00 c7 00 c1 	movzbl -0x3eff3900(%eax),%eax
c1001db9:	0f b6 d0             	movzbl %al,%edx
c1001dbc:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001dc1:	31 d0                	xor    %edx,%eax
c1001dc3:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001dc8:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001dcd:	83 e0 03             	and    $0x3,%eax
c1001dd0:	8b 14 85 00 cb 00 c1 	mov    -0x3eff3500(,%eax,4),%edx
c1001dd7:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001ddb:	01 d0                	add    %edx,%eax
c1001ddd:	0f b6 00             	movzbl (%eax),%eax
c1001de0:	0f b6 c0             	movzbl %al,%eax
c1001de3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001de6:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001deb:	83 e0 08             	and    $0x8,%eax
c1001dee:	85 c0                	test   %eax,%eax
c1001df0:	74 22                	je     c1001e14 <kbd_proc_data+0x13d>
c1001df2:	83 7d f4 60          	cmpl   $0x60,-0xc(%ebp)
c1001df6:	7e 0c                	jle    c1001e04 <kbd_proc_data+0x12d>
c1001df8:	83 7d f4 7a          	cmpl   $0x7a,-0xc(%ebp)
c1001dfc:	7f 06                	jg     c1001e04 <kbd_proc_data+0x12d>
c1001dfe:	83 6d f4 20          	subl   $0x20,-0xc(%ebp)
c1001e02:	eb 10                	jmp    c1001e14 <kbd_proc_data+0x13d>
c1001e04:	83 7d f4 40          	cmpl   $0x40,-0xc(%ebp)
c1001e08:	7e 0a                	jle    c1001e14 <kbd_proc_data+0x13d>
c1001e0a:	83 7d f4 5a          	cmpl   $0x5a,-0xc(%ebp)
c1001e0e:	7f 04                	jg     c1001e14 <kbd_proc_data+0x13d>
c1001e10:	83 45 f4 20          	addl   $0x20,-0xc(%ebp)
c1001e14:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001e19:	f7 d0                	not    %eax
c1001e1b:	83 e0 06             	and    $0x6,%eax
c1001e1e:	85 c0                	test   %eax,%eax
c1001e20:	75 2b                	jne    c1001e4d <kbd_proc_data+0x176>
c1001e22:	81 7d f4 e9 00 00 00 	cmpl   $0xe9,-0xc(%ebp)
c1001e29:	75 22                	jne    c1001e4d <kbd_proc_data+0x176>
c1001e2b:	83 ec 0c             	sub    $0xc,%esp
c1001e2e:	68 18 a4 00 c1       	push   $0xc100a418
c1001e33:	e8 e0 2d 00 00       	call   c1004c18 <printk>
c1001e38:	83 c4 10             	add    $0x10,%esp
c1001e3b:	83 ec 08             	sub    $0x8,%esp
c1001e3e:	6a 03                	push   $0x3
c1001e40:	68 92 00 00 00       	push   $0x92
c1001e45:	e8 f2 e1 ff ff       	call   c100003c <outb>
c1001e4a:	83 c4 10             	add    $0x10,%esp
c1001e4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001e50:	c9                   	leave  
c1001e51:	c3                   	ret    

c1001e52 <kbd_intr>:
c1001e52:	55                   	push   %ebp
c1001e53:	89 e5                	mov    %esp,%ebp
c1001e55:	83 ec 08             	sub    $0x8,%esp
c1001e58:	83 ec 0c             	sub    $0xc,%esp
c1001e5b:	68 d7 1c 00 c1       	push   $0xc1001cd7
c1001e60:	e8 50 27 00 00       	call   c10045b5 <cons_intr>
c1001e65:	83 c4 10             	add    $0x10,%esp
c1001e68:	90                   	nop
c1001e69:	c9                   	leave  
c1001e6a:	c3                   	ret    

c1001e6b <kbd_init>:
c1001e6b:	55                   	push   %ebp
c1001e6c:	89 e5                	mov    %esp,%ebp
c1001e6e:	83 ec 18             	sub    $0x18,%esp
c1001e71:	c7 05 20 32 a1 c1 00 	movl   $0x0,0xc1a13220
c1001e78:	00 00 00 
c1001e7b:	c7 05 24 32 a1 c1 00 	movl   $0x0,0xc1a13224
c1001e82:	00 00 00 
c1001e85:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1001e8c:	eb 0f                	jmp    c1001e9d <kbd_init+0x32>
c1001e8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001e91:	05 20 30 a1 c1       	add    $0xc1a13020,%eax
c1001e96:	c6 00 00             	movb   $0x0,(%eax)
c1001e99:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1001e9d:	81 7d f4 ff 01 00 00 	cmpl   $0x1ff,-0xc(%ebp)
c1001ea4:	7e e8                	jle    c1001e8e <kbd_init+0x23>
c1001ea6:	c6 05 6c ec 00 c1 00 	movb   $0x0,0xc100ec6c
c1001ead:	c7 05 68 ec 00 c1 00 	movl   $0x0,0xc100ec68
c1001eb4:	00 00 00 
c1001eb7:	e8 96 ff ff ff       	call   c1001e52 <kbd_intr>
c1001ebc:	83 ec 0c             	sub    $0xc,%esp
c1001ebf:	6a 01                	push   $0x1
c1001ec1:	e8 ae 23 00 00       	call   c1004274 <pic_enable>
c1001ec6:	83 c4 10             	add    $0x10,%esp
c1001ec9:	90                   	nop
c1001eca:	c9                   	leave  
c1001ecb:	c3                   	ret    

c1001ecc <hash32>:
c1001ecc:	55                   	push   %ebp
c1001ecd:	89 e5                	mov    %esp,%ebp
c1001ecf:	83 ec 10             	sub    $0x10,%esp
c1001ed2:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ed5:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1001edb:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1001ede:	b8 20 00 00 00       	mov    $0x20,%eax
c1001ee3:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001ee6:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001ee9:	89 c1                	mov    %eax,%ecx
c1001eeb:	d3 ea                	shr    %cl,%edx
c1001eed:	89 d0                	mov    %edx,%eax
c1001eef:	c9                   	leave  
c1001ef0:	c3                   	ret    

c1001ef1 <main>:
c1001ef1:	8d 4c 24 04          	lea    0x4(%esp),%ecx
c1001ef5:	83 e4 f0             	and    $0xfffffff0,%esp
c1001ef8:	ff 71 fc             	pushl  -0x4(%ecx)
c1001efb:	55                   	push   %ebp
c1001efc:	89 e5                	mov    %esp,%ebp
c1001efe:	51                   	push   %ecx
c1001eff:	83 ec 04             	sub    $0x4,%esp
c1001f02:	e8 14 29 00 00       	call   c100481b <clear>
c1001f07:	83 ec 0c             	sub    $0xc,%esp
c1001f0a:	68 24 a4 00 c1       	push   $0xc100a424
c1001f0f:	e8 04 2d 00 00       	call   c1004c18 <printk>
c1001f14:	83 c4 10             	add    $0x10,%esp
c1001f17:	e8 58 e7 ff ff       	call   c1000674 <gdt_init>
c1001f1c:	e8 86 23 00 00       	call   c10042a7 <pic_init>
c1001f21:	e8 42 e8 ff ff       	call   c1000768 <idt_init>
c1001f26:	e8 c2 ed ff ff       	call   c1000ced <enable_interupt>
c1001f2b:	e8 e0 24 00 00       	call   c1004410 <serial_init>
c1001f30:	e8 36 ff ff ff       	call   c1001e6b <kbd_init>
c1001f35:	e8 a2 0a 00 00       	call   c10029dc <setup_vpt>
c1001f3a:	e8 b5 04 00 00       	call   c10023f4 <pmm_init>
c1001f3f:	e8 fa 00 00 00       	call   c100203e <test_pmm>
c1001f44:	e8 de 01 00 00       	call   c1002127 <test_vmm>
c1001f49:	e8 cf 57 00 00       	call   c100771d <fs_init>
c1001f4e:	83 ec 0c             	sub    $0xc,%esp
c1001f51:	68 39 20 00 c1       	push   $0xc1002039
c1001f56:	e8 9a 0f 00 00       	call   c1002ef5 <kernel_task_init>
c1001f5b:	83 c4 10             	add    $0x10,%esp
c1001f5e:	e8 b8 28 00 00       	call   c100481b <clear>
c1001f63:	83 ec 0c             	sub    $0xc,%esp
c1001f66:	6a 64                	push   $0x64
c1001f68:	e8 ab 27 00 00       	call   c1004718 <timer_init>
c1001f6d:	83 c4 10             	add    $0x10,%esp
c1001f70:	83 ec 08             	sub    $0x8,%esp
c1001f73:	6a 00                	push   $0x0
c1001f75:	68 b4 0c 01 c1       	push   $0xc1010cb4
c1001f7a:	e8 ed 30 00 00       	call   c100506c <sema_init>
c1001f7f:	83 c4 10             	add    $0x10,%esp
c1001f82:	e8 8a ed ff ff       	call   c1000d11 <intr_enable>
c1001f87:	83 ec 0c             	sub    $0xc,%esp
c1001f8a:	68 52 00 00 40       	push   $0x40000052
c1001f8f:	e8 a2 1e 00 00       	call   c1003e36 <user_task_init>
c1001f94:	83 c4 10             	add    $0x10,%esp
c1001f97:	eb fe                	jmp    c1001f97 <main+0xa6>

c1001f99 <write2fs>:
c1001f99:	55                   	push   %ebp
c1001f9a:	89 e5                	mov    %esp,%ebp
c1001f9c:	83 ec 18             	sub    $0x18,%esp
c1001f9f:	c7 45 f4 18 22 00 00 	movl   $0x2218,-0xc(%ebp)
c1001fa6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001fa9:	05 ff 01 00 00       	add    $0x1ff,%eax
c1001fae:	c1 e8 09             	shr    $0x9,%eax
c1001fb1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001fb4:	83 ec 08             	sub    $0x8,%esp
c1001fb7:	6a 01                	push   $0x1
c1001fb9:	ff 75 f4             	pushl  -0xc(%ebp)
c1001fbc:	e8 f3 0a 00 00       	call   c1002ab4 <vmm_malloc>
c1001fc1:	83 c4 10             	add    $0x10,%esp
c1001fc4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001fc7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1001fca:	83 ec 04             	sub    $0x4,%esp
c1001fcd:	ff 75 f0             	pushl  -0x10(%ebp)
c1001fd0:	68 f4 01 00 00       	push   $0x1f4
c1001fd5:	50                   	push   %eax
c1001fd6:	e8 e5 34 00 00       	call   c10054c0 <ide_read>
c1001fdb:	83 c4 10             	add    $0x10,%esp
c1001fde:	83 ec 08             	sub    $0x8,%esp
c1001fe1:	6a 06                	push   $0x6
c1001fe3:	68 3a a4 00 c1       	push   $0xc100a43a
c1001fe8:	e8 37 42 00 00       	call   c1006224 <sys_open>
c1001fed:	83 c4 10             	add    $0x10,%esp
c1001ff0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1001ff3:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1001ff7:	74 2c                	je     c1002025 <write2fs+0x8c>
c1001ff9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1001ffc:	83 ec 04             	sub    $0x4,%esp
c1001fff:	ff 75 f4             	pushl  -0xc(%ebp)
c1002002:	50                   	push   %eax
c1002003:	ff 75 e8             	pushl  -0x18(%ebp)
c1002006:	e8 3d 45 00 00       	call   c1006548 <sys_write>
c100200b:	83 c4 10             	add    $0x10,%esp
c100200e:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002011:	75 12                	jne    c1002025 <write2fs+0x8c>
c1002013:	83 ec 0c             	sub    $0xc,%esp
c1002016:	68 47 a4 00 c1       	push   $0xc100a447
c100201b:	e8 f8 2b 00 00       	call   c1004c18 <printk>
c1002020:	83 c4 10             	add    $0x10,%esp
c1002023:	eb fe                	jmp    c1002023 <write2fs+0x8a>
c1002025:	83 ec 08             	sub    $0x8,%esp
c1002028:	ff 75 f4             	pushl  -0xc(%ebp)
c100202b:	ff 75 ec             	pushl  -0x14(%ebp)
c100202e:	e8 a6 0b 00 00       	call   c1002bd9 <vmm_free>
c1002033:	83 c4 10             	add    $0x10,%esp
c1002036:	90                   	nop
c1002037:	c9                   	leave  
c1002038:	c3                   	ret    

c1002039 <kernel_main>:
c1002039:	55                   	push   %ebp
c100203a:	89 e5                	mov    %esp,%ebp
c100203c:	eb fe                	jmp    c100203c <kernel_main+0x3>

c100203e <test_pmm>:
c100203e:	55                   	push   %ebp
c100203f:	89 e5                	mov    %esp,%ebp
c1002041:	83 ec 18             	sub    $0x18,%esp
c1002044:	83 ec 08             	sub    $0x8,%esp
c1002047:	6a 01                	push   $0x1
c1002049:	68 00 02 00 00       	push   $0x200
c100204e:	e8 c1 07 00 00       	call   c1002814 <pmm_alloc>
c1002053:	83 c4 10             	add    $0x10,%esp
c1002056:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002059:	83 ec 08             	sub    $0x8,%esp
c100205c:	6a 00                	push   $0x0
c100205e:	68 00 20 00 00       	push   $0x2000
c1002063:	e8 ac 07 00 00       	call   c1002814 <pmm_alloc>
c1002068:	83 c4 10             	add    $0x10,%esp
c100206b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100206e:	83 ec 08             	sub    $0x8,%esp
c1002071:	6a 02                	push   $0x2
c1002073:	68 00 30 00 00       	push   $0x3000
c1002078:	e8 97 07 00 00       	call   c1002814 <pmm_alloc>
c100207d:	83 c4 10             	add    $0x10,%esp
c1002080:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002083:	83 ec 08             	sub    $0x8,%esp
c1002086:	ff 75 f0             	pushl  -0x10(%ebp)
c1002089:	68 5a a4 00 c1       	push   $0xc100a45a
c100208e:	e8 85 2b 00 00       	call   c1004c18 <printk>
c1002093:	83 c4 10             	add    $0x10,%esp
c1002096:	83 ec 08             	sub    $0x8,%esp
c1002099:	ff 75 f4             	pushl  -0xc(%ebp)
c100209c:	68 70 a4 00 c1       	push   $0xc100a470
c10020a1:	e8 72 2b 00 00       	call   c1004c18 <printk>
c10020a6:	83 c4 10             	add    $0x10,%esp
c10020a9:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c10020af:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c10020b5:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c10020ba:	51                   	push   %ecx
c10020bb:	52                   	push   %edx
c10020bc:	50                   	push   %eax
c10020bd:	68 8c a4 00 c1       	push   $0xc100a48c
c10020c2:	e8 51 2b 00 00       	call   c1004c18 <printk>
c10020c7:	83 c4 10             	add    $0x10,%esp
c10020ca:	83 ec 08             	sub    $0x8,%esp
c10020cd:	68 00 02 00 00       	push   $0x200
c10020d2:	ff 75 f4             	pushl  -0xc(%ebp)
c10020d5:	e8 36 08 00 00       	call   c1002910 <pmm_free>
c10020da:	83 c4 10             	add    $0x10,%esp
c10020dd:	83 ec 08             	sub    $0x8,%esp
c10020e0:	68 00 20 00 00       	push   $0x2000
c10020e5:	ff 75 f0             	pushl  -0x10(%ebp)
c10020e8:	e8 23 08 00 00       	call   c1002910 <pmm_free>
c10020ed:	83 c4 10             	add    $0x10,%esp
c10020f0:	83 ec 08             	sub    $0x8,%esp
c10020f3:	68 00 30 00 00       	push   $0x3000
c10020f8:	ff 75 ec             	pushl  -0x14(%ebp)
c10020fb:	e8 10 08 00 00       	call   c1002910 <pmm_free>
c1002100:	83 c4 10             	add    $0x10,%esp
c1002103:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c1002109:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c100210f:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c1002114:	51                   	push   %ecx
c1002115:	52                   	push   %edx
c1002116:	50                   	push   %eax
c1002117:	68 8c a4 00 c1       	push   $0xc100a48c
c100211c:	e8 f7 2a 00 00       	call   c1004c18 <printk>
c1002121:	83 c4 10             	add    $0x10,%esp
c1002124:	90                   	nop
c1002125:	c9                   	leave  
c1002126:	c3                   	ret    

c1002127 <test_vmm>:
c1002127:	55                   	push   %ebp
c1002128:	89 e5                	mov    %esp,%ebp
c100212a:	83 ec 38             	sub    $0x38,%esp
c100212d:	83 ec 0c             	sub    $0xc,%esp
c1002130:	68 d3 a4 00 c1       	push   $0xc100a4d3
c1002135:	e8 de 2a 00 00       	call   c1004c18 <printk>
c100213a:	83 c4 10             	add    $0x10,%esp
c100213d:	83 ec 08             	sub    $0x8,%esp
c1002140:	6a 00                	push   $0x0
c1002142:	68 00 01 00 00       	push   $0x100
c1002147:	e8 68 09 00 00       	call   c1002ab4 <vmm_malloc>
c100214c:	83 c4 10             	add    $0x10,%esp
c100214f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002152:	83 ec 08             	sub    $0x8,%esp
c1002155:	6a 01                	push   $0x1
c1002157:	68 00 20 00 00       	push   $0x2000
c100215c:	e8 53 09 00 00       	call   c1002ab4 <vmm_malloc>
c1002161:	83 c4 10             	add    $0x10,%esp
c1002164:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002167:	83 ec 08             	sub    $0x8,%esp
c100216a:	6a 02                	push   $0x2
c100216c:	68 00 30 00 00       	push   $0x3000
c1002171:	e8 3e 09 00 00       	call   c1002ab4 <vmm_malloc>
c1002176:	83 c4 10             	add    $0x10,%esp
c1002179:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100217c:	83 ec 08             	sub    $0x8,%esp
c100217f:	ff 75 f4             	pushl  -0xc(%ebp)
c1002182:	68 5a a4 00 c1       	push   $0xc100a45a
c1002187:	e8 8c 2a 00 00       	call   c1004c18 <printk>
c100218c:	83 c4 10             	add    $0x10,%esp
c100218f:	83 ec 08             	sub    $0x8,%esp
c1002192:	ff 75 f0             	pushl  -0x10(%ebp)
c1002195:	68 70 a4 00 c1       	push   $0xc100a470
c100219a:	e8 79 2a 00 00       	call   c1004c18 <printk>
c100219f:	83 c4 10             	add    $0x10,%esp
c10021a2:	83 ec 08             	sub    $0x8,%esp
c10021a5:	ff 75 ec             	pushl  -0x14(%ebp)
c10021a8:	68 ea a4 00 c1       	push   $0xc100a4ea
c10021ad:	e8 66 2a 00 00       	call   c1004c18 <printk>
c10021b2:	83 c4 10             	add    $0x10,%esp
c10021b5:	83 ec 0c             	sub    $0xc,%esp
c10021b8:	68 05 a5 00 c1       	push   $0xc100a505
c10021bd:	e8 56 2a 00 00       	call   c1004c18 <printk>
c10021c2:	83 c4 10             	add    $0x10,%esp
c10021c5:	83 ec 08             	sub    $0x8,%esp
c10021c8:	6a 00                	push   $0x0
c10021ca:	68 00 01 00 00       	push   $0x100
c10021cf:	e8 e0 08 00 00       	call   c1002ab4 <vmm_malloc>
c10021d4:	83 c4 10             	add    $0x10,%esp
c10021d7:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10021da:	83 ec 08             	sub    $0x8,%esp
c10021dd:	6a 01                	push   $0x1
c10021df:	68 00 20 00 00       	push   $0x2000
c10021e4:	e8 cb 08 00 00       	call   c1002ab4 <vmm_malloc>
c10021e9:	83 c4 10             	add    $0x10,%esp
c10021ec:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10021ef:	83 ec 08             	sub    $0x8,%esp
c10021f2:	6a 02                	push   $0x2
c10021f4:	68 00 30 00 00       	push   $0x3000
c10021f9:	e8 b6 08 00 00       	call   c1002ab4 <vmm_malloc>
c10021fe:	83 c4 10             	add    $0x10,%esp
c1002201:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002204:	83 ec 08             	sub    $0x8,%esp
c1002207:	ff 75 e8             	pushl  -0x18(%ebp)
c100220a:	68 5a a4 00 c1       	push   $0xc100a45a
c100220f:	e8 04 2a 00 00       	call   c1004c18 <printk>
c1002214:	83 c4 10             	add    $0x10,%esp
c1002217:	83 ec 08             	sub    $0x8,%esp
c100221a:	ff 75 e4             	pushl  -0x1c(%ebp)
c100221d:	68 70 a4 00 c1       	push   $0xc100a470
c1002222:	e8 f1 29 00 00       	call   c1004c18 <printk>
c1002227:	83 c4 10             	add    $0x10,%esp
c100222a:	83 ec 08             	sub    $0x8,%esp
c100222d:	ff 75 e0             	pushl  -0x20(%ebp)
c1002230:	68 ea a4 00 c1       	push   $0xc100a4ea
c1002235:	e8 de 29 00 00       	call   c1004c18 <printk>
c100223a:	83 c4 10             	add    $0x10,%esp
c100223d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002240:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1002243:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002246:	c6 00 ff             	movb   $0xff,(%eax)
c1002249:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100224c:	0f b6 00             	movzbl (%eax),%eax
c100224f:	0f b6 c0             	movzbl %al,%eax
c1002252:	83 ec 08             	sub    $0x8,%esp
c1002255:	50                   	push   %eax
c1002256:	68 1c a5 00 c1       	push   $0xc100a51c
c100225b:	e8 b8 29 00 00       	call   c1004c18 <printk>
c1002260:	83 c4 10             	add    $0x10,%esp
c1002263:	83 ec 08             	sub    $0x8,%esp
c1002266:	68 00 01 00 00       	push   $0x100
c100226b:	ff 75 f4             	pushl  -0xc(%ebp)
c100226e:	e8 66 09 00 00       	call   c1002bd9 <vmm_free>
c1002273:	83 c4 10             	add    $0x10,%esp
c1002276:	83 ec 08             	sub    $0x8,%esp
c1002279:	68 00 20 00 00       	push   $0x2000
c100227e:	ff 75 f0             	pushl  -0x10(%ebp)
c1002281:	e8 53 09 00 00       	call   c1002bd9 <vmm_free>
c1002286:	83 c4 10             	add    $0x10,%esp
c1002289:	83 ec 08             	sub    $0x8,%esp
c100228c:	68 00 30 00 00       	push   $0x3000
c1002291:	ff 75 ec             	pushl  -0x14(%ebp)
c1002294:	e8 40 09 00 00       	call   c1002bd9 <vmm_free>
c1002299:	83 c4 10             	add    $0x10,%esp
c100229c:	83 ec 08             	sub    $0x8,%esp
c100229f:	6a 00                	push   $0x0
c10022a1:	68 00 01 00 00       	push   $0x100
c10022a6:	e8 09 08 00 00       	call   c1002ab4 <vmm_malloc>
c10022ab:	83 c4 10             	add    $0x10,%esp
c10022ae:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10022b1:	83 ec 08             	sub    $0x8,%esp
c10022b4:	6a 01                	push   $0x1
c10022b6:	68 00 20 00 00       	push   $0x2000
c10022bb:	e8 f4 07 00 00       	call   c1002ab4 <vmm_malloc>
c10022c0:	83 c4 10             	add    $0x10,%esp
c10022c3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10022c6:	83 ec 08             	sub    $0x8,%esp
c10022c9:	6a 02                	push   $0x2
c10022cb:	68 00 30 00 00       	push   $0x3000
c10022d0:	e8 df 07 00 00       	call   c1002ab4 <vmm_malloc>
c10022d5:	83 c4 10             	add    $0x10,%esp
c10022d8:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10022db:	83 ec 08             	sub    $0x8,%esp
c10022de:	ff 75 d8             	pushl  -0x28(%ebp)
c10022e1:	68 5a a4 00 c1       	push   $0xc100a45a
c10022e6:	e8 2d 29 00 00       	call   c1004c18 <printk>
c10022eb:	83 c4 10             	add    $0x10,%esp
c10022ee:	83 ec 08             	sub    $0x8,%esp
c10022f1:	ff 75 d4             	pushl  -0x2c(%ebp)
c10022f4:	68 70 a4 00 c1       	push   $0xc100a470
c10022f9:	e8 1a 29 00 00       	call   c1004c18 <printk>
c10022fe:	83 c4 10             	add    $0x10,%esp
c1002301:	83 ec 08             	sub    $0x8,%esp
c1002304:	ff 75 d0             	pushl  -0x30(%ebp)
c1002307:	68 ea a4 00 c1       	push   $0xc100a4ea
c100230c:	e8 07 29 00 00       	call   c1004c18 <printk>
c1002311:	83 c4 10             	add    $0x10,%esp
c1002314:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1002317:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100231a:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100231d:	c6 00 ff             	movb   $0xff,(%eax)
c1002320:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1002323:	0f b6 00             	movzbl (%eax),%eax
c1002326:	0f b6 c0             	movzbl %al,%eax
c1002329:	83 ec 08             	sub    $0x8,%esp
c100232c:	50                   	push   %eax
c100232d:	68 28 a5 00 c1       	push   $0xc100a528
c1002332:	e8 e1 28 00 00       	call   c1004c18 <printk>
c1002337:	83 c4 10             	add    $0x10,%esp
c100233a:	90                   	nop
c100233b:	c9                   	leave  
c100233c:	c3                   	ret    

c100233d <test_schedule>:
c100233d:	55                   	push   %ebp
c100233e:	89 e5                	mov    %esp,%ebp
c1002340:	83 ec 08             	sub    $0x8,%esp
c1002343:	e8 c9 e9 ff ff       	call   c1000d11 <intr_enable>
c1002348:	eb fe                	jmp    c1002348 <test_schedule+0xb>

c100234a <print_task1>:
c100234a:	55                   	push   %ebp
c100234b:	89 e5                	mov    %esp,%ebp
c100234d:	83 ec 18             	sub    $0x18,%esp
c1002350:	8b 45 08             	mov    0x8(%ebp),%eax
c1002353:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002356:	83 ec 08             	sub    $0x8,%esp
c1002359:	ff 75 f4             	pushl  -0xc(%ebp)
c100235c:	68 34 a5 00 c1       	push   $0xc100a534
c1002361:	e8 b2 28 00 00       	call   c1004c18 <printk>
c1002366:	83 c4 10             	add    $0x10,%esp
c1002369:	83 ec 0c             	sub    $0xc,%esp
c100236c:	68 40 42 0f 00       	push   $0xf4240
c1002371:	e8 36 00 00 00       	call   c10023ac <delay>
c1002376:	83 c4 10             	add    $0x10,%esp
c1002379:	eb db                	jmp    c1002356 <print_task1+0xc>

c100237b <print_task2>:
c100237b:	55                   	push   %ebp
c100237c:	89 e5                	mov    %esp,%ebp
c100237e:	83 ec 18             	sub    $0x18,%esp
c1002381:	8b 45 08             	mov    0x8(%ebp),%eax
c1002384:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002387:	83 ec 08             	sub    $0x8,%esp
c100238a:	ff 75 f4             	pushl  -0xc(%ebp)
c100238d:	68 34 a5 00 c1       	push   $0xc100a534
c1002392:	e8 81 28 00 00       	call   c1004c18 <printk>
c1002397:	83 c4 10             	add    $0x10,%esp
c100239a:	83 ec 0c             	sub    $0xc,%esp
c100239d:	68 40 42 0f 00       	push   $0xf4240
c10023a2:	e8 05 00 00 00       	call   c10023ac <delay>
c10023a7:	83 c4 10             	add    $0x10,%esp
c10023aa:	eb db                	jmp    c1002387 <print_task2+0xc>

c10023ac <delay>:
c10023ac:	55                   	push   %ebp
c10023ad:	89 e5                	mov    %esp,%ebp
c10023af:	83 ec 10             	sub    $0x10,%esp
c10023b2:	8b 45 08             	mov    0x8(%ebp),%eax
c10023b5:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10023b8:	eb 17                	jmp    c10023d1 <delay+0x25>
c10023ba:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c10023c1:	eb 04                	jmp    c10023c7 <delay+0x1b>
c10023c3:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c10023c7:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c10023cb:	75 f6                	jne    c10023c3 <delay+0x17>
c10023cd:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c10023d1:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c10023d5:	75 e3                	jne    c10023ba <delay+0xe>
c10023d7:	90                   	nop
c10023d8:	90                   	nop
c10023d9:	c9                   	leave  
c10023da:	c3                   	ret    

c10023db <test_user>:
c10023db:	55                   	push   %ebp
c10023dc:	89 e5                	mov    %esp,%ebp
c10023de:	83 ec 08             	sub    $0x8,%esp
c10023e1:	83 ec 0c             	sub    $0xc,%esp
c10023e4:	68 52 00 00 40       	push   $0x40000052
c10023e9:	e8 48 1a 00 00       	call   c1003e36 <user_task_init>
c10023ee:	83 c4 10             	add    $0x10,%esp
c10023f1:	90                   	nop
c10023f2:	c9                   	leave  
c10023f3:	c3                   	ret    

c10023f4 <pmm_init>:
c10023f4:	55                   	push   %ebp
c10023f5:	89 e5                	mov    %esp,%ebp
c10023f7:	83 ec 38             	sub    $0x38,%esp
c10023fa:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002401:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002408:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100240f:	c7 45 d4 04 80 00 c0 	movl   $0xc0008004,-0x2c(%ebp)
c1002416:	b8 00 80 00 c0       	mov    $0xc0008000,%eax
c100241b:	8b 00                	mov    (%eax),%eax
c100241d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002420:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002427:	e9 98 02 00 00       	jmp    c10026c4 <pmm_init+0x2d0>
c100242c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100242f:	89 d0                	mov    %edx,%eax
c1002431:	c1 e0 02             	shl    $0x2,%eax
c1002434:	01 d0                	add    %edx,%eax
c1002436:	c1 e0 02             	shl    $0x2,%eax
c1002439:	89 c2                	mov    %eax,%edx
c100243b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100243e:	01 d0                	add    %edx,%eax
c1002440:	8b 50 04             	mov    0x4(%eax),%edx
c1002443:	8b 00                	mov    (%eax),%eax
c1002445:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002448:	e9 40 02 00 00       	jmp    c100268d <pmm_init+0x299>
c100244d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002450:	85 c0                	test   %eax,%eax
c1002452:	0f 88 2e 02 00 00    	js     c1002686 <pmm_init+0x292>
c1002458:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100245b:	89 d0                	mov    %edx,%eax
c100245d:	c1 e0 02             	shl    $0x2,%eax
c1002460:	01 d0                	add    %edx,%eax
c1002462:	c1 e0 02             	shl    $0x2,%eax
c1002465:	89 c2                	mov    %eax,%edx
c1002467:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100246a:	01 d0                	add    %edx,%eax
c100246c:	8b 40 10             	mov    0x10(%eax),%eax
c100246f:	83 f8 01             	cmp    $0x1,%eax
c1002472:	75 59                	jne    c10024cd <pmm_init+0xd9>
c1002474:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002477:	c1 e8 0c             	shr    $0xc,%eax
c100247a:	89 c2                	mov    %eax,%edx
c100247c:	89 d0                	mov    %edx,%eax
c100247e:	01 c0                	add    %eax,%eax
c1002480:	01 d0                	add    %edx,%eax
c1002482:	c1 e0 02             	shl    $0x2,%eax
c1002485:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c100248a:	c6 00 00             	movb   $0x0,(%eax)
c100248d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002490:	c1 e8 0c             	shr    $0xc,%eax
c1002493:	89 c2                	mov    %eax,%edx
c1002495:	89 d0                	mov    %edx,%eax
c1002497:	01 c0                	add    %eax,%eax
c1002499:	01 d0                	add    %edx,%eax
c100249b:	c1 e0 02             	shl    $0x2,%eax
c100249e:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c10024a3:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c10024a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024ac:	c1 e8 0c             	shr    $0xc,%eax
c10024af:	89 c2                	mov    %eax,%edx
c10024b1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024b4:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10024b9:	89 c1                	mov    %eax,%ecx
c10024bb:	89 d0                	mov    %edx,%eax
c10024bd:	01 c0                	add    %eax,%eax
c10024bf:	01 d0                	add    %edx,%eax
c10024c1:	c1 e0 02             	shl    $0x2,%eax
c10024c4:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c10024c9:	89 08                	mov    %ecx,(%eax)
c10024cb:	eb 57                	jmp    c1002524 <pmm_init+0x130>
c10024cd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024d0:	c1 e8 0c             	shr    $0xc,%eax
c10024d3:	89 c2                	mov    %eax,%edx
c10024d5:	89 d0                	mov    %edx,%eax
c10024d7:	01 c0                	add    %eax,%eax
c10024d9:	01 d0                	add    %edx,%eax
c10024db:	c1 e0 02             	shl    $0x2,%eax
c10024de:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10024e3:	c6 00 08             	movb   $0x8,(%eax)
c10024e6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024e9:	c1 e8 0c             	shr    $0xc,%eax
c10024ec:	89 c2                	mov    %eax,%edx
c10024ee:	89 d0                	mov    %edx,%eax
c10024f0:	01 c0                	add    %eax,%eax
c10024f2:	01 d0                	add    %edx,%eax
c10024f4:	c1 e0 02             	shl    $0x2,%eax
c10024f7:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c10024fc:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1002502:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002505:	c1 e8 0c             	shr    $0xc,%eax
c1002508:	89 c2                	mov    %eax,%edx
c100250a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100250d:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002512:	89 c1                	mov    %eax,%ecx
c1002514:	89 d0                	mov    %edx,%eax
c1002516:	01 c0                	add    %eax,%eax
c1002518:	01 d0                	add    %edx,%eax
c100251a:	c1 e0 02             	shl    $0x2,%eax
c100251d:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c1002522:	89 08                	mov    %ecx,(%eax)
c1002524:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002527:	c1 e8 0c             	shr    $0xc,%eax
c100252a:	89 c2                	mov    %eax,%edx
c100252c:	89 d0                	mov    %edx,%eax
c100252e:	01 c0                	add    %eax,%eax
c1002530:	01 d0                	add    %edx,%eax
c1002532:	c1 e0 02             	shl    $0x2,%eax
c1002535:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c100253a:	8b 00                	mov    (%eax),%eax
c100253c:	3d ff ff ff 00       	cmp    $0xffffff,%eax
c1002541:	77 62                	ja     c10025a5 <pmm_init+0x1b1>
c1002543:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002546:	c1 e8 0c             	shr    $0xc,%eax
c1002549:	89 c1                	mov    %eax,%ecx
c100254b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100254e:	c1 e8 0c             	shr    $0xc,%eax
c1002551:	89 c2                	mov    %eax,%edx
c1002553:	89 c8                	mov    %ecx,%eax
c1002555:	01 c0                	add    %eax,%eax
c1002557:	01 c8                	add    %ecx,%eax
c1002559:	c1 e0 02             	shl    $0x2,%eax
c100255c:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002561:	0f b6 08             	movzbl (%eax),%ecx
c1002564:	89 d0                	mov    %edx,%eax
c1002566:	01 c0                	add    %eax,%eax
c1002568:	01 d0                	add    %edx,%eax
c100256a:	c1 e0 02             	shl    $0x2,%eax
c100256d:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002572:	88 08                	mov    %cl,(%eax)
c1002574:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002577:	c1 e8 0c             	shr    $0xc,%eax
c100257a:	89 c2                	mov    %eax,%edx
c100257c:	89 d0                	mov    %edx,%eax
c100257e:	01 c0                	add    %eax,%eax
c1002580:	01 d0                	add    %edx,%eax
c1002582:	c1 e0 02             	shl    $0x2,%eax
c1002585:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c100258a:	8b 00                	mov    (%eax),%eax
c100258c:	83 f8 ff             	cmp    $0xffffffff,%eax
c100258f:	75 07                	jne    c1002598 <pmm_init+0x1a4>
c1002591:	b8 01 00 00 00       	mov    $0x1,%eax
c1002596:	eb 05                	jmp    c100259d <pmm_init+0x1a9>
c1002598:	b8 00 00 00 00       	mov    $0x0,%eax
c100259d:	01 45 f4             	add    %eax,-0xc(%ebp)
c10025a0:	e9 e1 00 00 00       	jmp    c1002686 <pmm_init+0x292>
c10025a5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025a8:	c1 e8 0c             	shr    $0xc,%eax
c10025ab:	89 c2                	mov    %eax,%edx
c10025ad:	89 d0                	mov    %edx,%eax
c10025af:	01 c0                	add    %eax,%eax
c10025b1:	01 d0                	add    %edx,%eax
c10025b3:	c1 e0 02             	shl    $0x2,%eax
c10025b6:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c10025bb:	8b 00                	mov    (%eax),%eax
c10025bd:	3d ff ff ff 37       	cmp    $0x37ffffff,%eax
c10025c2:	77 62                	ja     c1002626 <pmm_init+0x232>
c10025c4:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025c7:	c1 e8 0c             	shr    $0xc,%eax
c10025ca:	89 c2                	mov    %eax,%edx
c10025cc:	89 d0                	mov    %edx,%eax
c10025ce:	01 c0                	add    %eax,%eax
c10025d0:	01 d0                	add    %edx,%eax
c10025d2:	c1 e0 02             	shl    $0x2,%eax
c10025d5:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10025da:	0f b6 08             	movzbl (%eax),%ecx
c10025dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025e0:	c1 e8 0c             	shr    $0xc,%eax
c10025e3:	89 c2                	mov    %eax,%edx
c10025e5:	83 c9 10             	or     $0x10,%ecx
c10025e8:	89 d0                	mov    %edx,%eax
c10025ea:	01 c0                	add    %eax,%eax
c10025ec:	01 d0                	add    %edx,%eax
c10025ee:	c1 e0 02             	shl    $0x2,%eax
c10025f1:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10025f6:	88 08                	mov    %cl,(%eax)
c10025f8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025fb:	c1 e8 0c             	shr    $0xc,%eax
c10025fe:	89 c2                	mov    %eax,%edx
c1002600:	89 d0                	mov    %edx,%eax
c1002602:	01 c0                	add    %eax,%eax
c1002604:	01 d0                	add    %edx,%eax
c1002606:	c1 e0 02             	shl    $0x2,%eax
c1002609:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c100260e:	8b 00                	mov    (%eax),%eax
c1002610:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002613:	75 07                	jne    c100261c <pmm_init+0x228>
c1002615:	b8 01 00 00 00       	mov    $0x1,%eax
c100261a:	eb 05                	jmp    c1002621 <pmm_init+0x22d>
c100261c:	b8 00 00 00 00       	mov    $0x0,%eax
c1002621:	01 45 f0             	add    %eax,-0x10(%ebp)
c1002624:	eb 60                	jmp    c1002686 <pmm_init+0x292>
c1002626:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002629:	c1 e8 0c             	shr    $0xc,%eax
c100262c:	89 c2                	mov    %eax,%edx
c100262e:	89 d0                	mov    %edx,%eax
c1002630:	01 c0                	add    %eax,%eax
c1002632:	01 d0                	add    %edx,%eax
c1002634:	c1 e0 02             	shl    $0x2,%eax
c1002637:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c100263c:	0f b6 08             	movzbl (%eax),%ecx
c100263f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002642:	c1 e8 0c             	shr    $0xc,%eax
c1002645:	89 c2                	mov    %eax,%edx
c1002647:	83 c9 20             	or     $0x20,%ecx
c100264a:	89 d0                	mov    %edx,%eax
c100264c:	01 c0                	add    %eax,%eax
c100264e:	01 d0                	add    %edx,%eax
c1002650:	c1 e0 02             	shl    $0x2,%eax
c1002653:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002658:	88 08                	mov    %cl,(%eax)
c100265a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100265d:	c1 e8 0c             	shr    $0xc,%eax
c1002660:	89 c2                	mov    %eax,%edx
c1002662:	89 d0                	mov    %edx,%eax
c1002664:	01 c0                	add    %eax,%eax
c1002666:	01 d0                	add    %edx,%eax
c1002668:	c1 e0 02             	shl    $0x2,%eax
c100266b:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c1002670:	8b 00                	mov    (%eax),%eax
c1002672:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002675:	75 07                	jne    c100267e <pmm_init+0x28a>
c1002677:	b8 01 00 00 00       	mov    $0x1,%eax
c100267c:	eb 05                	jmp    c1002683 <pmm_init+0x28f>
c100267e:	b8 00 00 00 00       	mov    $0x0,%eax
c1002683:	01 45 ec             	add    %eax,-0x14(%ebp)
c1002686:	81 45 e0 00 10 00 00 	addl   $0x1000,-0x20(%ebp)
c100268d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002690:	89 d0                	mov    %edx,%eax
c1002692:	c1 e0 02             	shl    $0x2,%eax
c1002695:	01 d0                	add    %edx,%eax
c1002697:	c1 e0 02             	shl    $0x2,%eax
c100269a:	89 c2                	mov    %eax,%edx
c100269c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100269f:	01 d0                	add    %edx,%eax
c10026a1:	8b 50 0c             	mov    0xc(%eax),%edx
c10026a4:	8b 40 08             	mov    0x8(%eax),%eax
c10026a7:	89 c2                	mov    %eax,%edx
c10026a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026ac:	01 d0                	add    %edx,%eax
c10026ae:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10026b3:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c10026b6:	0f 82 91 fd ff ff    	jb     c100244d <pmm_init+0x59>
c10026bc:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c10026c0:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c10026c4:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c10026c8:	0f 85 5e fd ff ff    	jne    c100242c <pmm_init+0x38>
c10026ce:	c7 05 f0 0c 61 c1 00 	movl   $0x1000,0xc1610cf0
c10026d5:	10 00 00 
c10026d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10026db:	a3 f4 0c 61 c1       	mov    %eax,0xc1610cf4
c10026e0:	c7 05 ec 0c 61 c1 e0 	movl   $0xc1010ce0,0xc1610cec
c10026e7:	0c 01 c1 
c10026ea:	c7 05 e4 0c 61 c1 00 	movl   $0x37000,0xc1610ce4
c10026f1:	70 03 00 
c10026f4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10026f7:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c10026fc:	8b 15 f0 0c 61 c1    	mov    0xc1610cf0,%edx
c1002702:	89 d0                	mov    %edx,%eax
c1002704:	01 c0                	add    %eax,%eax
c1002706:	01 d0                	add    %edx,%eax
c1002708:	c1 e0 02             	shl    $0x2,%eax
c100270b:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002710:	a3 e0 0c 61 c1       	mov    %eax,0xc1610ce0
c1002715:	c7 05 c4 0c 01 c1 00 	movl   $0x48000,0xc1010cc4
c100271c:	80 04 00 
c100271f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002722:	a3 c8 0c 01 c1       	mov    %eax,0xc1010cc8
c1002727:	8b 15 e4 0c 61 c1    	mov    0xc1610ce4,%edx
c100272d:	a1 f0 0c 61 c1       	mov    0xc1610cf0,%eax
c1002732:	01 c2                	add    %eax,%edx
c1002734:	89 d0                	mov    %edx,%eax
c1002736:	01 c0                	add    %eax,%eax
c1002738:	01 d0                	add    %edx,%eax
c100273a:	c1 e0 02             	shl    $0x2,%eax
c100273d:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002742:	a3 c0 0c 01 c1       	mov    %eax,0xc1010cc0
c1002747:	c7 45 d0 00 00 00 40 	movl   $0x40000000,-0x30(%ebp)
c100274e:	90                   	nop
c100274f:	c7 45 dc 00 00 00 01 	movl   $0x1000000,-0x24(%ebp)
c1002756:	eb 39                	jmp    c1002791 <pmm_init+0x39d>
c1002758:	8b 0d e0 0c 61 c1    	mov    0xc1610ce0,%ecx
c100275e:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002761:	2d 00 00 00 01       	sub    $0x1000000,%eax
c1002766:	c1 e8 0c             	shr    $0xc,%eax
c1002769:	89 c2                	mov    %eax,%edx
c100276b:	89 d0                	mov    %edx,%eax
c100276d:	01 c0                	add    %eax,%eax
c100276f:	01 d0                	add    %edx,%eax
c1002771:	c1 e0 02             	shl    $0x2,%eax
c1002774:	01 c8                	add    %ecx,%eax
c1002776:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c100277d:	a1 e8 0c 61 c1       	mov    0xc1610ce8,%eax
c1002782:	83 e8 01             	sub    $0x1,%eax
c1002785:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c100278a:	81 45 dc 00 10 00 00 	addl   $0x1000,-0x24(%ebp)
c1002791:	b8 c0 33 a1 c1       	mov    $0xc1a133c0,%eax
c1002796:	05 ff 0f 00 40       	add    $0x40000fff,%eax
c100279b:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10027a0:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c10027a3:	72 b3                	jb     c1002758 <pmm_init+0x364>
c10027a5:	c7 45 d8 00 e0 ff 37 	movl   $0x37ffe000,-0x28(%ebp)
c10027ac:	eb 39                	jmp    c10027e7 <pmm_init+0x3f3>
c10027ae:	8b 0d e0 0c 61 c1    	mov    0xc1610ce0,%ecx
c10027b4:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10027b7:	2d 00 00 00 01       	sub    $0x1000000,%eax
c10027bc:	c1 e8 0c             	shr    $0xc,%eax
c10027bf:	89 c2                	mov    %eax,%edx
c10027c1:	89 d0                	mov    %edx,%eax
c10027c3:	01 c0                	add    %eax,%eax
c10027c5:	01 d0                	add    %edx,%eax
c10027c7:	c1 e0 02             	shl    $0x2,%eax
c10027ca:	01 c8                	add    %ecx,%eax
c10027cc:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10027d3:	a1 e8 0c 61 c1       	mov    0xc1610ce8,%eax
c10027d8:	83 e8 01             	sub    $0x1,%eax
c10027db:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c10027e0:	81 45 d8 00 10 00 00 	addl   $0x1000,-0x28(%ebp)
c10027e7:	81 7d d8 ff ff ff 37 	cmpl   $0x37ffffff,-0x28(%ebp)
c10027ee:	76 be                	jbe    c10027ae <pmm_init+0x3ba>
c10027f0:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c10027f6:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c10027fc:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c1002801:	51                   	push   %ecx
c1002802:	52                   	push   %edx
c1002803:	50                   	push   %eax
c1002804:	68 38 a5 00 c1       	push   $0xc100a538
c1002809:	e8 0a 24 00 00       	call   c1004c18 <printk>
c100280e:	83 c4 10             	add    $0x10,%esp
c1002811:	90                   	nop
c1002812:	c9                   	leave  
c1002813:	c3                   	ret    

c1002814 <pmm_alloc>:
c1002814:	55                   	push   %ebp
c1002815:	89 e5                	mov    %esp,%ebp
c1002817:	83 ec 24             	sub    $0x24,%esp
c100281a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100281d:	88 45 dc             	mov    %al,-0x24(%ebp)
c1002820:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002827:	8b 45 08             	mov    0x8(%ebp),%eax
c100282a:	05 ff 0f 00 00       	add    $0xfff,%eax
c100282f:	c1 e8 0c             	shr    $0xc,%eax
c1002832:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002835:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
c1002839:	75 09                	jne    c1002844 <pmm_alloc+0x30>
c100283b:	c7 45 f0 ec 0c 61 c1 	movl   $0xc1610cec,-0x10(%ebp)
c1002842:	eb 16                	jmp    c100285a <pmm_alloc+0x46>
c1002844:	80 7d dc 01          	cmpb   $0x1,-0x24(%ebp)
c1002848:	75 09                	jne    c1002853 <pmm_alloc+0x3f>
c100284a:	c7 45 f0 e0 0c 61 c1 	movl   $0xc1610ce0,-0x10(%ebp)
c1002851:	eb 07                	jmp    c100285a <pmm_alloc+0x46>
c1002853:	c7 45 f0 c0 0c 01 c1 	movl   $0xc1010cc0,-0x10(%ebp)
c100285a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1002861:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002868:	eb 43                	jmp    c10028ad <pmm_alloc+0x99>
c100286a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100286d:	8b 08                	mov    (%eax),%ecx
c100286f:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002872:	89 d0                	mov    %edx,%eax
c1002874:	01 c0                	add    %eax,%eax
c1002876:	01 d0                	add    %edx,%eax
c1002878:	c1 e0 02             	shl    $0x2,%eax
c100287b:	01 c8                	add    %ecx,%eax
c100287d:	8b 40 04             	mov    0x4(%eax),%eax
c1002880:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002883:	75 0c                	jne    c1002891 <pmm_alloc+0x7d>
c1002885:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002889:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100288c:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100288f:	eb 10                	jmp    c10028a1 <pmm_alloc+0x8d>
c1002891:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002894:	83 c0 01             	add    $0x1,%eax
c1002897:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100289a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10028a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028a4:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c10028a7:	74 11                	je     c10028ba <pmm_alloc+0xa6>
c10028a9:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10028ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10028b0:	8b 40 04             	mov    0x4(%eax),%eax
c10028b3:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c10028b6:	72 b2                	jb     c100286a <pmm_alloc+0x56>
c10028b8:	eb 01                	jmp    c10028bb <pmm_alloc+0xa7>
c10028ba:	90                   	nop
c10028bb:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10028be:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10028c1:	eb 2d                	jmp    c10028f0 <pmm_alloc+0xdc>
c10028c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10028c6:	8b 08                	mov    (%eax),%ecx
c10028c8:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10028cb:	89 d0                	mov    %edx,%eax
c10028cd:	01 c0                	add    %eax,%eax
c10028cf:	01 d0                	add    %edx,%eax
c10028d1:	c1 e0 02             	shl    $0x2,%eax
c10028d4:	01 c8                	add    %ecx,%eax
c10028d6:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10028dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10028e0:	8b 40 08             	mov    0x8(%eax),%eax
c10028e3:	8d 50 ff             	lea    -0x1(%eax),%edx
c10028e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10028e9:	89 50 08             	mov    %edx,0x8(%eax)
c10028ec:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c10028f0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10028f3:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c10028f6:	76 cb                	jbe    c10028c3 <pmm_alloc+0xaf>
c10028f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10028fb:	8b 08                	mov    (%eax),%ecx
c10028fd:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002900:	89 d0                	mov    %edx,%eax
c1002902:	01 c0                	add    %eax,%eax
c1002904:	01 d0                	add    %edx,%eax
c1002906:	c1 e0 02             	shl    $0x2,%eax
c1002909:	01 c8                	add    %ecx,%eax
c100290b:	8b 40 08             	mov    0x8(%eax),%eax
c100290e:	c9                   	leave  
c100290f:	c3                   	ret    

c1002910 <pmm_free>:
c1002910:	55                   	push   %ebp
c1002911:	89 e5                	mov    %esp,%ebp
c1002913:	83 ec 20             	sub    $0x20,%esp
c1002916:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002919:	05 ff 0f 00 00       	add    $0xfff,%eax
c100291e:	c1 e8 0c             	shr    $0xc,%eax
c1002921:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002924:	81 7d 08 ff ff ff 00 	cmpl   $0xffffff,0x8(%ebp)
c100292b:	77 09                	ja     c1002936 <pmm_free+0x26>
c100292d:	c7 45 fc ec 0c 61 c1 	movl   $0xc1610cec,-0x4(%ebp)
c1002934:	eb 27                	jmp    c100295d <pmm_free+0x4d>
c1002936:	81 7d 08 ff ff ff 37 	cmpl   $0x37ffffff,0x8(%ebp)
c100293d:	77 10                	ja     c100294f <pmm_free+0x3f>
c100293f:	81 6d 08 00 00 00 01 	subl   $0x1000000,0x8(%ebp)
c1002946:	c7 45 fc e0 0c 61 c1 	movl   $0xc1610ce0,-0x4(%ebp)
c100294d:	eb 0e                	jmp    c100295d <pmm_free+0x4d>
c100294f:	81 6d 08 00 00 00 38 	subl   $0x38000000,0x8(%ebp)
c1002956:	c7 45 fc c0 0c 01 c1 	movl   $0xc1010cc0,-0x4(%ebp)
c100295d:	8b 45 08             	mov    0x8(%ebp),%eax
c1002960:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002965:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002968:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100296b:	c1 e8 0c             	shr    $0xc,%eax
c100296e:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002971:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002978:	eb 31                	jmp    c10029ab <pmm_free+0x9b>
c100297a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100297d:	8b 08                	mov    (%eax),%ecx
c100297f:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1002982:	89 d0                	mov    %edx,%eax
c1002984:	01 c0                	add    %eax,%eax
c1002986:	01 d0                	add    %edx,%eax
c1002988:	c1 e0 02             	shl    $0x2,%eax
c100298b:	01 c8                	add    %ecx,%eax
c100298d:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
c1002994:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002997:	8b 40 08             	mov    0x8(%eax),%eax
c100299a:	8d 50 01             	lea    0x1(%eax),%edx
c100299d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10029a0:	89 50 08             	mov    %edx,0x8(%eax)
c10029a3:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10029a7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10029ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10029ae:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c10029b1:	72 c7                	jb     c100297a <pmm_free+0x6a>
c10029b3:	90                   	nop
c10029b4:	90                   	nop
c10029b5:	c9                   	leave  
c10029b6:	c3                   	ret    

c10029b7 <hash32>:
c10029b7:	55                   	push   %ebp
c10029b8:	89 e5                	mov    %esp,%ebp
c10029ba:	83 ec 10             	sub    $0x10,%esp
c10029bd:	8b 45 08             	mov    0x8(%ebp),%eax
c10029c0:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10029c6:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10029c9:	b8 20 00 00 00       	mov    $0x20,%eax
c10029ce:	2b 45 0c             	sub    0xc(%ebp),%eax
c10029d1:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10029d4:	89 c1                	mov    %eax,%ecx
c10029d6:	d3 ea                	shr    %cl,%edx
c10029d8:	89 d0                	mov    %edx,%eax
c10029da:	c9                   	leave  
c10029db:	c3                   	ret    

c10029dc <setup_vpt>:
c10029dc:	55                   	push   %ebp
c10029dd:	89 e5                	mov    %esp,%ebp
c10029df:	83 ec 28             	sub    $0x28,%esp
c10029e2:	c7 45 e0 e0 00 00 00 	movl   $0xe0,-0x20(%ebp)
c10029e9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10029f0:	eb 27                	jmp    c1002a19 <setup_vpt+0x3d>
c10029f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10029f5:	c1 e0 0c             	shl    $0xc,%eax
c10029f8:	05 00 30 93 c1       	add    $0xc1933000,%eax
c10029fd:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002a03:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002a06:	05 00 03 00 00       	add    $0x300,%eax
c1002a0b:	83 ca 03             	or     $0x3,%edx
c1002a0e:	89 14 85 00 10 61 c1 	mov    %edx,-0x3e9ef000(,%eax,4)
c1002a15:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002a19:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002a1c:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002a1f:	72 d1                	jb     c10029f2 <setup_vpt+0x16>
c1002a21:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002a28:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002a2f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002a36:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002a3d:	eb 3d                	jmp    c1002a7c <setup_vpt+0xa0>
c1002a3f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002a42:	8d 50 01             	lea    0x1(%eax),%edx
c1002a45:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1002a48:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1002a4b:	83 ca 03             	or     $0x3,%edx
c1002a4e:	8b 4d ec             	mov    -0x14(%ebp),%ecx
c1002a51:	c1 e1 0a             	shl    $0xa,%ecx
c1002a54:	01 c8                	add    %ecx,%eax
c1002a56:	89 14 85 00 30 93 c1 	mov    %edx,-0x3e6cd000(,%eax,4)
c1002a5d:	81 7d e8 00 04 00 00 	cmpl   $0x400,-0x18(%ebp)
c1002a64:	75 0b                	jne    c1002a71 <setup_vpt+0x95>
c1002a66:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002a6a:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002a71:	81 45 f0 00 10 00 00 	addl   $0x1000,-0x10(%ebp)
c1002a78:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1002a7c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002a7f:	c1 e0 0a             	shl    $0xa,%eax
c1002a82:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1002a85:	72 b8                	jb     c1002a3f <setup_vpt+0x63>
c1002a87:	b8 60 1e 00 40       	mov    $0x40001e60,%eax
c1002a8c:	68 00 00 00 40       	push   $0x40000000
c1002a91:	50                   	push   %eax
c1002a92:	68 00 00 00 40       	push   $0x40000000
c1002a97:	68 00 10 61 c1       	push   $0xc1611000
c1002a9c:	e8 30 02 00 00       	call   c1002cd1 <vmm_map>
c1002aa1:	83 c4 10             	add    $0x10,%esp
c1002aa4:	b8 00 10 61 c1       	mov    $0xc1611000,%eax
c1002aa9:	05 00 00 00 40       	add    $0x40000000,%eax
c1002aae:	0f 22 d8             	mov    %eax,%cr3
c1002ab1:	90                   	nop
c1002ab2:	c9                   	leave  
c1002ab3:	c3                   	ret    

c1002ab4 <vmm_malloc>:
c1002ab4:	55                   	push   %ebp
c1002ab5:	89 e5                	mov    %esp,%ebp
c1002ab7:	53                   	push   %ebx
c1002ab8:	83 ec 34             	sub    $0x34,%esp
c1002abb:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002abe:	88 45 d4             	mov    %al,-0x2c(%ebp)
c1002ac1:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
c1002ac5:	83 ec 08             	sub    $0x8,%esp
c1002ac8:	50                   	push   %eax
c1002ac9:	ff 75 08             	pushl  0x8(%ebp)
c1002acc:	e8 43 fd ff ff       	call   c1002814 <pmm_alloc>
c1002ad1:	83 c4 10             	add    $0x10,%esp
c1002ad4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002ad7:	8b 45 08             	mov    0x8(%ebp),%eax
c1002ada:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002adf:	c1 e8 0c             	shr    $0xc,%eax
c1002ae2:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002ae5:	80 7d d4 02          	cmpb   $0x2,-0x2c(%ebp)
c1002ae9:	0f 85 db 00 00 00    	jne    c1002bca <vmm_malloc+0x116>
c1002aef:	a1 14 cb 00 c1       	mov    0xc100cb14,%eax
c1002af4:	a3 00 20 93 c1       	mov    %eax,0xc1932000
c1002af9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002b00:	eb 5d                	jmp    c1002b5f <vmm_malloc+0xab>
c1002b02:	8b 15 14 cb 00 c1    	mov    0xc100cb14,%edx
c1002b08:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002b0d:	29 c2                	sub    %eax,%edx
c1002b0f:	89 d0                	mov    %edx,%eax
c1002b11:	c1 e8 16             	shr    $0x16,%eax
c1002b14:	89 c3                	mov    %eax,%ebx
c1002b16:	8b 15 14 cb 00 c1    	mov    0xc100cb14,%edx
c1002b1c:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002b21:	29 c2                	sub    %eax,%edx
c1002b23:	89 d0                	mov    %edx,%eax
c1002b25:	c1 e8 0c             	shr    $0xc,%eax
c1002b28:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002b2d:	89 c1                	mov    %eax,%ecx
c1002b2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002b32:	83 c8 07             	or     $0x7,%eax
c1002b35:	89 c2                	mov    %eax,%edx
c1002b37:	89 d8                	mov    %ebx,%eax
c1002b39:	c1 e0 0a             	shl    $0xa,%eax
c1002b3c:	01 c8                	add    %ecx,%eax
c1002b3e:	89 14 85 00 20 91 c1 	mov    %edx,-0x3e6ee000(,%eax,4)
c1002b45:	a1 14 cb 00 c1       	mov    0xc100cb14,%eax
c1002b4a:	05 00 10 00 00       	add    $0x1000,%eax
c1002b4f:	a3 14 cb 00 c1       	mov    %eax,0xc100cb14
c1002b54:	81 45 f4 00 10 00 00 	addl   $0x1000,-0xc(%ebp)
c1002b5b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002b5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002b62:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1002b65:	72 9b                	jb     c1002b02 <vmm_malloc+0x4e>
c1002b67:	8b 15 14 cb 00 c1    	mov    0xc100cb14,%edx
c1002b6d:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002b72:	29 c2                	sub    %eax,%edx
c1002b74:	89 d0                	mov    %edx,%eax
c1002b76:	05 ff ff 3f 00       	add    $0x3fffff,%eax
c1002b7b:	c1 e8 16             	shr    $0x16,%eax
c1002b7e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002b81:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002b88:	eb 2e                	jmp    c1002bb8 <vmm_malloc+0x104>
c1002b8a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002b8d:	c1 e0 0c             	shl    $0xc,%eax
c1002b90:	05 00 20 91 c1       	add    $0xc1912000,%eax
c1002b95:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002b9b:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002ba0:	c1 e8 16             	shr    $0x16,%eax
c1002ba3:	89 c1                	mov    %eax,%ecx
c1002ba5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002ba8:	01 c8                	add    %ecx,%eax
c1002baa:	83 ca 07             	or     $0x7,%edx
c1002bad:	89 14 85 00 10 61 c1 	mov    %edx,-0x3e9ef000(,%eax,4)
c1002bb4:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002bb8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002bbb:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002bbe:	72 ca                	jb     c1002b8a <vmm_malloc+0xd6>
c1002bc0:	a1 00 20 93 c1       	mov    0xc1932000,%eax
c1002bc5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002bc8:	eb 07                	jmp    c1002bd1 <vmm_malloc+0x11d>
c1002bca:	81 6d f4 00 00 00 40 	subl   $0x40000000,-0xc(%ebp)
c1002bd1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002bd4:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002bd7:	c9                   	leave  
c1002bd8:	c3                   	ret    

c1002bd9 <vmm_free>:
c1002bd9:	55                   	push   %ebp
c1002bda:	89 e5                	mov    %esp,%ebp
c1002bdc:	53                   	push   %ebx
c1002bdd:	83 ec 14             	sub    $0x14,%esp
c1002be0:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002be3:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002be8:	c1 e8 0c             	shr    $0xc,%eax
c1002beb:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002bee:	8b 45 08             	mov    0x8(%ebp),%eax
c1002bf1:	05 00 00 00 40       	add    $0x40000000,%eax
c1002bf6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002bf9:	81 7d ec ff ff ff 37 	cmpl   $0x37ffffff,-0x14(%ebp)
c1002c00:	0f 86 ae 00 00 00    	jbe    c1002cb4 <vmm_free+0xdb>
c1002c06:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c09:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002c0e:	89 c2                	mov    %eax,%edx
c1002c10:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002c15:	29 c2                	sub    %eax,%edx
c1002c17:	89 d0                	mov    %edx,%eax
c1002c19:	c1 e8 16             	shr    $0x16,%eax
c1002c1c:	89 c2                	mov    %eax,%edx
c1002c1e:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c21:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002c26:	89 c1                	mov    %eax,%ecx
c1002c28:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002c2d:	29 c1                	sub    %eax,%ecx
c1002c2f:	89 c8                	mov    %ecx,%eax
c1002c31:	c1 e8 0c             	shr    $0xc,%eax
c1002c34:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002c39:	c1 e2 0a             	shl    $0xa,%edx
c1002c3c:	01 d0                	add    %edx,%eax
c1002c3e:	8b 04 85 00 20 91 c1 	mov    -0x3e6ee000(,%eax,4),%eax
c1002c45:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002c4a:	83 ec 08             	sub    $0x8,%esp
c1002c4d:	ff 75 0c             	pushl  0xc(%ebp)
c1002c50:	50                   	push   %eax
c1002c51:	e8 ba fc ff ff       	call   c1002910 <pmm_free>
c1002c56:	83 c4 10             	add    $0x10,%esp
c1002c59:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002c60:	eb 48                	jmp    c1002caa <vmm_free+0xd1>
c1002c62:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002c67:	8b 55 08             	mov    0x8(%ebp),%edx
c1002c6a:	29 c2                	sub    %eax,%edx
c1002c6c:	89 d0                	mov    %edx,%eax
c1002c6e:	c1 e8 16             	shr    $0x16,%eax
c1002c71:	89 c3                	mov    %eax,%ebx
c1002c73:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002c78:	8b 55 08             	mov    0x8(%ebp),%edx
c1002c7b:	29 c2                	sub    %eax,%edx
c1002c7d:	89 d0                	mov    %edx,%eax
c1002c7f:	c1 e8 0c             	shr    $0xc,%eax
c1002c82:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002c87:	89 c1                	mov    %eax,%ecx
c1002c89:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c8c:	83 c8 06             	or     $0x6,%eax
c1002c8f:	89 c2                	mov    %eax,%edx
c1002c91:	89 d8                	mov    %ebx,%eax
c1002c93:	c1 e0 0a             	shl    $0xa,%eax
c1002c96:	01 c8                	add    %ecx,%eax
c1002c98:	89 14 85 00 20 91 c1 	mov    %edx,-0x3e6ee000(,%eax,4)
c1002c9f:	81 45 08 00 10 00 00 	addl   $0x1000,0x8(%ebp)
c1002ca6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002caa:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002cad:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002cb0:	72 b0                	jb     c1002c62 <vmm_free+0x89>
c1002cb2:	eb 17                	jmp    c1002ccb <vmm_free+0xf2>
c1002cb4:	8b 45 08             	mov    0x8(%ebp),%eax
c1002cb7:	05 00 00 00 40       	add    $0x40000000,%eax
c1002cbc:	83 ec 08             	sub    $0x8,%esp
c1002cbf:	ff 75 0c             	pushl  0xc(%ebp)
c1002cc2:	50                   	push   %eax
c1002cc3:	e8 48 fc ff ff       	call   c1002910 <pmm_free>
c1002cc8:	83 c4 10             	add    $0x10,%esp
c1002ccb:	90                   	nop
c1002ccc:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002ccf:	c9                   	leave  
c1002cd0:	c3                   	ret    

c1002cd1 <vmm_map>:
c1002cd1:	55                   	push   %ebp
c1002cd2:	89 e5                	mov    %esp,%ebp
c1002cd4:	53                   	push   %ebx
c1002cd5:	83 ec 20             	sub    $0x20,%esp
c1002cd8:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002cdb:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002ce0:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002ce3:	8b 45 10             	mov    0x10(%ebp),%eax
c1002ce6:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002ceb:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002cf0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002cf3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002cf6:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002cf9:	81 65 14 00 f0 ff ff 	andl   $0xfffff000,0x14(%ebp)
c1002d00:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002d03:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002d06:	c1 e8 0c             	shr    $0xc,%eax
c1002d09:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002d0c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002d13:	eb 43                	jmp    c1002d58 <vmm_map+0x87>
c1002d15:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002d18:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002d1b:	c1 e8 16             	shr    $0x16,%eax
c1002d1e:	89 c3                	mov    %eax,%ebx
c1002d20:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002d23:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002d26:	c1 e8 0c             	shr    $0xc,%eax
c1002d29:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002d2e:	89 c1                	mov    %eax,%ecx
c1002d30:	8b 45 14             	mov    0x14(%ebp),%eax
c1002d33:	83 c8 07             	or     $0x7,%eax
c1002d36:	89 c2                	mov    %eax,%edx
c1002d38:	89 d8                	mov    %ebx,%eax
c1002d3a:	c1 e0 0a             	shl    $0xa,%eax
c1002d3d:	01 c8                	add    %ecx,%eax
c1002d3f:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002d46:	81 45 14 00 10 00 00 	addl   $0x1000,0x14(%ebp)
c1002d4d:	81 45 f8 00 10 00 00 	addl   $0x1000,-0x8(%ebp)
c1002d54:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002d58:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002d5b:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002d5e:	72 b5                	jb     c1002d15 <vmm_map+0x44>
c1002d60:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002d63:	05 ff 03 00 00       	add    $0x3ff,%eax
c1002d68:	c1 e8 0a             	shr    $0xa,%eax
c1002d6b:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002d6e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002d75:	eb 33                	jmp    c1002daa <vmm_map+0xd9>
c1002d77:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002d7a:	c1 e0 0c             	shl    $0xc,%eax
c1002d7d:	05 00 20 61 c1       	add    $0xc1612000,%eax
c1002d82:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002d88:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d8b:	c1 e8 16             	shr    $0x16,%eax
c1002d8e:	89 c1                	mov    %eax,%ecx
c1002d90:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002d93:	01 c8                	add    %ecx,%eax
c1002d95:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
c1002d9c:	8b 45 08             	mov    0x8(%ebp),%eax
c1002d9f:	01 c8                	add    %ecx,%eax
c1002da1:	83 ca 07             	or     $0x7,%edx
c1002da4:	89 10                	mov    %edx,(%eax)
c1002da6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002daa:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002dad:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002db0:	72 c5                	jb     c1002d77 <vmm_map+0xa6>
c1002db2:	90                   	nop
c1002db3:	90                   	nop
c1002db4:	83 c4 20             	add    $0x20,%esp
c1002db7:	5b                   	pop    %ebx
c1002db8:	5d                   	pop    %ebp
c1002db9:	c3                   	ret    

c1002dba <setup_pgdir>:
c1002dba:	55                   	push   %ebp
c1002dbb:	89 e5                	mov    %esp,%ebp
c1002dbd:	57                   	push   %edi
c1002dbe:	56                   	push   %esi
c1002dbf:	53                   	push   %ebx
c1002dc0:	83 ec 1c             	sub    $0x1c,%esp
c1002dc3:	83 ec 08             	sub    $0x8,%esp
c1002dc6:	6a 01                	push   $0x1
c1002dc8:	68 00 10 00 00       	push   $0x1000
c1002dcd:	e8 e2 fc ff ff       	call   c1002ab4 <vmm_malloc>
c1002dd2:	83 c4 10             	add    $0x10,%esp
c1002dd5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002dd8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002ddb:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1002de0:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002de5:	8b 0b                	mov    (%ebx),%ecx
c1002de7:	89 08                	mov    %ecx,(%eax)
c1002de9:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002ded:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002df1:	8d 78 04             	lea    0x4(%eax),%edi
c1002df4:	83 e7 fc             	and    $0xfffffffc,%edi
c1002df7:	29 f8                	sub    %edi,%eax
c1002df9:	29 c3                	sub    %eax,%ebx
c1002dfb:	01 c2                	add    %eax,%edx
c1002dfd:	83 e2 fc             	and    $0xfffffffc,%edx
c1002e00:	89 d0                	mov    %edx,%eax
c1002e02:	c1 e8 02             	shr    $0x2,%eax
c1002e05:	89 de                	mov    %ebx,%esi
c1002e07:	89 c1                	mov    %eax,%ecx
c1002e09:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002e0b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002e0e:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002e11:	5b                   	pop    %ebx
c1002e12:	5e                   	pop    %esi
c1002e13:	5f                   	pop    %edi
c1002e14:	5d                   	pop    %ebp
c1002e15:	c3                   	ret    

c1002e16 <sys_malloc>:
c1002e16:	55                   	push   %ebp
c1002e17:	89 e5                	mov    %esp,%ebp
c1002e19:	57                   	push   %edi
c1002e1a:	56                   	push   %esi
c1002e1b:	53                   	push   %ebx
c1002e1c:	83 ec 1c             	sub    $0x1c,%esp
c1002e1f:	83 ec 08             	sub    $0x8,%esp
c1002e22:	6a 02                	push   $0x2
c1002e24:	ff 75 08             	pushl  0x8(%ebp)
c1002e27:	e8 88 fc ff ff       	call   c1002ab4 <vmm_malloc>
c1002e2c:	83 c4 10             	add    $0x10,%esp
c1002e2f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002e32:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1002e37:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e3a:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1002e3f:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002e44:	8b 0b                	mov    (%ebx),%ecx
c1002e46:	89 08                	mov    %ecx,(%eax)
c1002e48:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002e4c:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002e50:	8d 78 04             	lea    0x4(%eax),%edi
c1002e53:	83 e7 fc             	and    $0xfffffffc,%edi
c1002e56:	29 f8                	sub    %edi,%eax
c1002e58:	29 c3                	sub    %eax,%ebx
c1002e5a:	01 c2                	add    %eax,%edx
c1002e5c:	83 e2 fc             	and    $0xfffffffc,%edx
c1002e5f:	89 d0                	mov    %edx,%eax
c1002e61:	c1 e8 02             	shr    $0x2,%eax
c1002e64:	89 de                	mov    %ebx,%esi
c1002e66:	89 c1                	mov    %eax,%ecx
c1002e68:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002e6a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002e6d:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002e70:	5b                   	pop    %ebx
c1002e71:	5e                   	pop    %esi
c1002e72:	5f                   	pop    %edi
c1002e73:	5d                   	pop    %ebp
c1002e74:	c3                   	ret    

c1002e75 <sys_free>:
c1002e75:	55                   	push   %ebp
c1002e76:	89 e5                	mov    %esp,%ebp
c1002e78:	57                   	push   %edi
c1002e79:	56                   	push   %esi
c1002e7a:	53                   	push   %ebx
c1002e7b:	83 ec 0c             	sub    $0xc,%esp
c1002e7e:	83 ec 08             	sub    $0x8,%esp
c1002e81:	ff 75 0c             	pushl  0xc(%ebp)
c1002e84:	ff 75 08             	pushl  0x8(%ebp)
c1002e87:	e8 4d fd ff ff       	call   c1002bd9 <vmm_free>
c1002e8c:	83 c4 10             	add    $0x10,%esp
c1002e8f:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1002e94:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e97:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1002e9c:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002ea1:	8b 0b                	mov    (%ebx),%ecx
c1002ea3:	89 08                	mov    %ecx,(%eax)
c1002ea5:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002ea9:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002ead:	8d 78 04             	lea    0x4(%eax),%edi
c1002eb0:	83 e7 fc             	and    $0xfffffffc,%edi
c1002eb3:	29 f8                	sub    %edi,%eax
c1002eb5:	29 c3                	sub    %eax,%ebx
c1002eb7:	01 c2                	add    %eax,%edx
c1002eb9:	83 e2 fc             	and    $0xfffffffc,%edx
c1002ebc:	89 d0                	mov    %edx,%eax
c1002ebe:	c1 e8 02             	shr    $0x2,%eax
c1002ec1:	89 de                	mov    %ebx,%esi
c1002ec3:	89 c1                	mov    %eax,%ecx
c1002ec5:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002ec7:	90                   	nop
c1002ec8:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002ecb:	5b                   	pop    %ebx
c1002ecc:	5e                   	pop    %esi
c1002ecd:	5f                   	pop    %edi
c1002ece:	5d                   	pop    %ebp
c1002ecf:	c3                   	ret    

c1002ed0 <hash32>:
c1002ed0:	55                   	push   %ebp
c1002ed1:	89 e5                	mov    %esp,%ebp
c1002ed3:	83 ec 10             	sub    $0x10,%esp
c1002ed6:	8b 45 08             	mov    0x8(%ebp),%eax
c1002ed9:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1002edf:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002ee2:	b8 20 00 00 00       	mov    $0x20,%eax
c1002ee7:	2b 45 0c             	sub    0xc(%ebp),%eax
c1002eea:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002eed:	89 c1                	mov    %eax,%ecx
c1002eef:	d3 ea                	shr    %cl,%edx
c1002ef1:	89 d0                	mov    %edx,%eax
c1002ef3:	c9                   	leave  
c1002ef4:	c3                   	ret    

c1002ef5 <kernel_task_init>:
c1002ef5:	55                   	push   %ebp
c1002ef6:	89 e5                	mov    %esp,%ebp
c1002ef8:	83 ec 28             	sub    $0x28,%esp
c1002efb:	c7 45 e8 84 0c 01 c1 	movl   $0xc1010c84,-0x18(%ebp)
c1002f02:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002f05:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1002f08:	89 50 04             	mov    %edx,0x4(%eax)
c1002f0b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002f0e:	8b 50 04             	mov    0x4(%eax),%edx
c1002f11:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002f14:	89 10                	mov    %edx,(%eax)
c1002f16:	90                   	nop
c1002f17:	c7 45 ec 8c 0c 01 c1 	movl   $0xc1010c8c,-0x14(%ebp)
c1002f1e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002f21:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002f24:	89 50 04             	mov    %edx,0x4(%eax)
c1002f27:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002f2a:	8b 50 04             	mov    0x4(%eax),%edx
c1002f2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002f30:	89 10                	mov    %edx,(%eax)
c1002f32:	90                   	nop
c1002f33:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002f3a:	eb 27                	jmp    c1002f63 <kernel_task_init+0x6e>
c1002f3c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002f3f:	c1 e0 03             	shl    $0x3,%eax
c1002f42:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c1002f47:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002f4a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f4d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002f50:	89 50 04             	mov    %edx,0x4(%eax)
c1002f53:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f56:	8b 50 04             	mov    0x4(%eax),%edx
c1002f59:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f5c:	89 10                	mov    %edx,(%eax)
c1002f5e:	90                   	nop
c1002f5f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002f63:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%ebp)
c1002f6a:	7e d0                	jle    c1002f3c <kernel_task_init+0x47>
c1002f6c:	83 ec 0c             	sub    $0xc,%esp
c1002f6f:	6a 01                	push   $0x1
c1002f71:	e8 43 06 00 00       	call   c10035b9 <alloc_task>
c1002f76:	83 c4 10             	add    $0x10,%esp
c1002f79:	a3 00 30 a1 c1       	mov    %eax,0xc1a13000
c1002f7e:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f83:	85 c0                	test   %eax,%eax
c1002f85:	75 10                	jne    c1002f97 <kernel_task_init+0xa2>
c1002f87:	83 ec 0c             	sub    $0xc,%esp
c1002f8a:	68 80 a5 00 c1       	push   $0xc100a580
c1002f8f:	e8 84 1c 00 00       	call   c1004c18 <printk>
c1002f94:	83 c4 10             	add    $0x10,%esp
c1002f97:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002f9c:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c1002fa2:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fa7:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1002fae:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fb3:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1002fba:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fbf:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1002fc6:	c7 05 80 0c 01 c1 00 	movl   $0x0,0xc1010c80
c1002fcd:	00 00 00 
c1002fd0:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002fd5:	83 ec 08             	sub    $0x8,%esp
c1002fd8:	68 93 a5 00 c1       	push   $0xc100a593
c1002fdd:	50                   	push   %eax
c1002fde:	e8 6d 03 00 00       	call   c1003350 <set_task_name>
c1002fe3:	83 c4 10             	add    $0x10,%esp
c1002fe6:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002feb:	89 c2                	mov    %eax,%edx
c1002fed:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ff2:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1002ff8:	89 50 24             	mov    %edx,0x24(%eax)
c1002ffb:	ba 00 10 61 c1       	mov    $0xc1611000,%edx
c1003000:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003005:	81 c2 00 00 00 40    	add    $0x40000000,%edx
c100300b:	89 50 28             	mov    %edx,0x28(%eax)
c100300e:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003013:	c7 80 f4 00 00 00 00 	movl   $0x0,0xf4(%eax)
c100301a:	00 00 00 
c100301d:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003022:	8b 40 24             	mov    0x24(%eax),%eax
c1003025:	8d 50 b4             	lea    -0x4c(%eax),%edx
c1003028:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100302d:	89 50 34             	mov    %edx,0x34(%eax)
c1003030:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003035:	8b 40 34             	mov    0x34(%eax),%eax
c1003038:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c100303f:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003044:	8b 40 34             	mov    0x34(%eax),%eax
c1003047:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100304e:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003053:	8b 40 34             	mov    0x34(%eax),%eax
c1003056:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c100305d:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003062:	8b 40 34             	mov    0x34(%eax),%eax
c1003065:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c100306c:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003071:	8b 40 34             	mov    0x34(%eax),%eax
c1003074:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100307a:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100307f:	8b 40 34             	mov    0x34(%eax),%eax
c1003082:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c1003089:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100308e:	8b 40 34             	mov    0x34(%eax),%eax
c1003091:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1003098:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100309d:	8b 40 34             	mov    0x34(%eax),%eax
c10030a0:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c10030a7:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030ac:	8b 40 34             	mov    0x34(%eax),%eax
c10030af:	66 c7 40 3c 08 00    	movw   $0x8,0x3c(%eax)
c10030b5:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030ba:	8b 40 34             	mov    0x34(%eax),%eax
c10030bd:	66 c7 40 48 10 00    	movw   $0x10,0x48(%eax)
c10030c3:	8b 15 00 30 a1 c1    	mov    0xc1a13000,%edx
c10030c9:	8b 52 34             	mov    0x34(%edx),%edx
c10030cc:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c10030d0:	66 89 42 24          	mov    %ax,0x24(%edx)
c10030d4:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030d9:	8b 40 34             	mov    0x34(%eax),%eax
c10030dc:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c10030e0:	66 89 50 28          	mov    %dx,0x28(%eax)
c10030e4:	8b 15 00 30 a1 c1    	mov    0xc1a13000,%edx
c10030ea:	8b 52 34             	mov    0x34(%edx),%edx
c10030ed:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c10030f1:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c10030f5:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030fa:	8b 40 34             	mov    0x34(%eax),%eax
c10030fd:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1003103:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003108:	8b 40 34             	mov    0x34(%eax),%eax
c100310b:	ba 8c 36 00 c1       	mov    $0xc100368c,%edx
c1003110:	89 50 38             	mov    %edx,0x38(%eax)
c1003113:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003118:	8b 40 34             	mov    0x34(%eax),%eax
c100311b:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1003122:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003127:	8b 50 24             	mov    0x24(%eax),%edx
c100312a:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100312f:	8b 40 34             	mov    0x34(%eax),%eax
c1003132:	83 ea 4c             	sub    $0x4c,%edx
c1003135:	89 50 44             	mov    %edx,0x44(%eax)
c1003138:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100313d:	8b 55 08             	mov    0x8(%ebp),%edx
c1003140:	89 50 38             	mov    %edx,0x38(%eax)
c1003143:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003148:	8b 50 34             	mov    0x34(%eax),%edx
c100314b:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003150:	89 50 3c             	mov    %edx,0x3c(%eax)
c1003153:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003158:	8b 50 34             	mov    0x34(%eax),%edx
c100315b:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003160:	8b 52 10             	mov    0x10(%edx),%edx
c1003163:	89 50 40             	mov    %edx,0x40(%eax)
c1003166:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100316b:	8b 50 34             	mov    0x34(%eax),%edx
c100316e:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003173:	8b 52 14             	mov    0x14(%edx),%edx
c1003176:	89 50 48             	mov    %edx,0x48(%eax)
c1003179:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100317e:	83 c0 58             	add    $0x58,%eax
c1003181:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1003184:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003187:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100318a:	89 50 04             	mov    %edx,0x4(%eax)
c100318d:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003190:	8b 50 04             	mov    0x4(%eax),%edx
c1003193:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003196:	89 10                	mov    %edx,(%eax)
c1003198:	90                   	nop
c1003199:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100319e:	83 c0 58             	add    $0x58,%eax
c10031a1:	83 ec 0c             	sub    $0xc,%esp
c10031a4:	50                   	push   %eax
c10031a5:	e8 10 02 00 00       	call   c10033ba <add_link>
c10031aa:	83 c4 10             	add    $0x10,%esp
c10031ad:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031b2:	83 c0 60             	add    $0x60,%eax
c10031b5:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10031b8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10031bb:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10031be:	89 50 04             	mov    %edx,0x4(%eax)
c10031c1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10031c4:	8b 50 04             	mov    0x4(%eax),%edx
c10031c7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10031ca:	89 10                	mov    %edx,(%eax)
c10031cc:	90                   	nop
c10031cd:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031d2:	83 c0 60             	add    $0x60,%eax
c10031d5:	83 ec 0c             	sub    $0xc,%esp
c10031d8:	50                   	push   %eax
c10031d9:	e8 2c 02 00 00       	call   c100340a <add_all_link>
c10031de:	83 c4 10             	add    $0x10,%esp
c10031e1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10031e8:	eb 16                	jmp    c1003200 <kernel_task_init+0x30b>
c10031ea:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031ef:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10031f2:	83 c2 1c             	add    $0x1c,%edx
c10031f5:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c10031fc:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1003200:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1003204:	7e e4                	jle    c10031ea <kernel_task_init+0x2f5>
c1003206:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100320b:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1003210:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003215:	83 ec 0c             	sub    $0xc,%esp
c1003218:	50                   	push   %eax
c1003219:	e8 6f 02 00 00       	call   c100348d <add_pid_hash>
c100321e:	83 c4 10             	add    $0x10,%esp
c1003221:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003226:	83 ec 0c             	sub    $0xc,%esp
c1003229:	50                   	push   %eax
c100322a:	e8 bb 06 00 00       	call   c10038ea <wakeup_task>
c100322f:	83 c4 10             	add    $0x10,%esp
c1003232:	c7 05 94 0c 01 c1 01 	movl   $0x1,0xc1010c94
c1003239:	00 00 00 
c100323c:	90                   	nop
c100323d:	c9                   	leave  
c100323e:	c3                   	ret    

c100323f <set_pid_bit>:
c100323f:	55                   	push   %ebp
c1003240:	89 e5                	mov    %esp,%ebp
c1003242:	83 ec 10             	sub    $0x10,%esp
c1003245:	8b 45 08             	mov    0x8(%ebp),%eax
c1003248:	8d 50 07             	lea    0x7(%eax),%edx
c100324b:	85 c0                	test   %eax,%eax
c100324d:	0f 48 c2             	cmovs  %edx,%eax
c1003250:	c1 f8 03             	sar    $0x3,%eax
c1003253:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003256:	8b 45 08             	mov    0x8(%ebp),%eax
c1003259:	99                   	cltd   
c100325a:	c1 ea 1d             	shr    $0x1d,%edx
c100325d:	01 d0                	add    %edx,%eax
c100325f:	83 e0 07             	and    $0x7,%eax
c1003262:	29 d0                	sub    %edx,%eax
c1003264:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003267:	90                   	nop
c1003268:	c9                   	leave  
c1003269:	c3                   	ret    

c100326a <clear_pid_bit>:
c100326a:	55                   	push   %ebp
c100326b:	89 e5                	mov    %esp,%ebp
c100326d:	83 ec 10             	sub    $0x10,%esp
c1003270:	8b 45 08             	mov    0x8(%ebp),%eax
c1003273:	8d 50 07             	lea    0x7(%eax),%edx
c1003276:	85 c0                	test   %eax,%eax
c1003278:	0f 48 c2             	cmovs  %edx,%eax
c100327b:	c1 f8 03             	sar    $0x3,%eax
c100327e:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003281:	8b 45 08             	mov    0x8(%ebp),%eax
c1003284:	99                   	cltd   
c1003285:	c1 ea 1d             	shr    $0x1d,%edx
c1003288:	01 d0                	add    %edx,%eax
c100328a:	83 e0 07             	and    $0x7,%eax
c100328d:	29 d0                	sub    %edx,%eax
c100328f:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003292:	90                   	nop
c1003293:	c9                   	leave  
c1003294:	c3                   	ret    

c1003295 <find_free_pid>:
c1003295:	55                   	push   %ebp
c1003296:	89 e5                	mov    %esp,%ebp
c1003298:	83 ec 10             	sub    $0x10,%esp
c100329b:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c10032a2:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c10032a9:	eb 1b                	jmp    c10032c6 <find_free_pid+0x31>
c10032ab:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10032b2:	eb 08                	jmp    c10032bc <find_free_pid+0x27>
c10032b4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10032b8:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10032bc:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
c10032c0:	7e f2                	jle    c10032b4 <find_free_pid+0x1f>
c10032c2:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c10032c6:	81 7d f8 00 80 00 00 	cmpl   $0x8000,-0x8(%ebp)
c10032cd:	75 dc                	jne    c10032ab <find_free_pid+0x16>
c10032cf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10032d4:	c9                   	leave  
c10032d5:	c3                   	ret    

c10032d6 <alloc_pid>:
c10032d6:	55                   	push   %ebp
c10032d7:	89 e5                	mov    %esp,%ebp
c10032d9:	83 ec 10             	sub    $0x10,%esp
c10032dc:	a1 20 cb 00 c1       	mov    0xc100cb20,%eax
c10032e1:	85 c0                	test   %eax,%eax
c10032e3:	75 07                	jne    c10032ec <alloc_pid+0x16>
c10032e5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10032ea:	eb 44                	jmp    c1003330 <alloc_pid+0x5a>
c10032ec:	81 7d fc ff 7f 00 00 	cmpl   $0x7fff,-0x4(%ebp)
c10032f3:	75 07                	jne    c10032fc <alloc_pid+0x26>
c10032f5:	e8 9b ff ff ff       	call   c1003295 <find_free_pid>
c10032fa:	eb 08                	jmp    c1003304 <alloc_pid+0x2e>
c10032fc:	a1 80 0c 01 c1       	mov    0xc1010c80,%eax
c1003301:	83 c0 01             	add    $0x1,%eax
c1003304:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003307:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c100330b:	78 18                	js     c1003325 <alloc_pid+0x4f>
c100330d:	ff 75 fc             	pushl  -0x4(%ebp)
c1003310:	e8 2a ff ff ff       	call   c100323f <set_pid_bit>
c1003315:	83 c4 04             	add    $0x4,%esp
c1003318:	a1 20 cb 00 c1       	mov    0xc100cb20,%eax
c100331d:	83 e8 01             	sub    $0x1,%eax
c1003320:	a3 20 cb 00 c1       	mov    %eax,0xc100cb20
c1003325:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003328:	a3 80 0c 01 c1       	mov    %eax,0xc1010c80
c100332d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003330:	c9                   	leave  
c1003331:	c3                   	ret    

c1003332 <free_pid>:
c1003332:	55                   	push   %ebp
c1003333:	89 e5                	mov    %esp,%ebp
c1003335:	ff 75 08             	pushl  0x8(%ebp)
c1003338:	e8 2d ff ff ff       	call   c100326a <clear_pid_bit>
c100333d:	83 c4 04             	add    $0x4,%esp
c1003340:	a1 20 cb 00 c1       	mov    0xc100cb20,%eax
c1003345:	83 c0 01             	add    $0x1,%eax
c1003348:	a3 20 cb 00 c1       	mov    %eax,0xc100cb20
c100334d:	90                   	nop
c100334e:	c9                   	leave  
c100334f:	c3                   	ret    

c1003350 <set_task_name>:
c1003350:	55                   	push   %ebp
c1003351:	89 e5                	mov    %esp,%ebp
c1003353:	83 ec 08             	sub    $0x8,%esp
c1003356:	8b 45 08             	mov    0x8(%ebp),%eax
c1003359:	83 c0 10             	add    $0x10,%eax
c100335c:	83 ec 04             	sub    $0x4,%esp
c100335f:	6a 14                	push   $0x14
c1003361:	6a 00                	push   $0x0
c1003363:	50                   	push   %eax
c1003364:	e8 41 cd ff ff       	call   c10000aa <memset>
c1003369:	83 c4 10             	add    $0x10,%esp
c100336c:	8b 45 08             	mov    0x8(%ebp),%eax
c100336f:	83 c0 10             	add    $0x10,%eax
c1003372:	83 ec 04             	sub    $0x4,%esp
c1003375:	6a 14                	push   $0x14
c1003377:	ff 75 0c             	pushl  0xc(%ebp)
c100337a:	50                   	push   %eax
c100337b:	e8 88 cd ff ff       	call   c1000108 <memcpy>
c1003380:	83 c4 10             	add    $0x10,%esp
c1003383:	c9                   	leave  
c1003384:	c3                   	ret    

c1003385 <get_task_name>:
c1003385:	55                   	push   %ebp
c1003386:	89 e5                	mov    %esp,%ebp
c1003388:	83 ec 08             	sub    $0x8,%esp
c100338b:	83 ec 04             	sub    $0x4,%esp
c100338e:	6a 15                	push   $0x15
c1003390:	6a 00                	push   $0x0
c1003392:	68 98 0c 01 c1       	push   $0xc1010c98
c1003397:	e8 0e cd ff ff       	call   c10000aa <memset>
c100339c:	83 c4 10             	add    $0x10,%esp
c100339f:	8b 45 08             	mov    0x8(%ebp),%eax
c10033a2:	83 c0 10             	add    $0x10,%eax
c10033a5:	83 ec 04             	sub    $0x4,%esp
c10033a8:	6a 14                	push   $0x14
c10033aa:	50                   	push   %eax
c10033ab:	68 98 0c 01 c1       	push   $0xc1010c98
c10033b0:	e8 53 cd ff ff       	call   c1000108 <memcpy>
c10033b5:	83 c4 10             	add    $0x10,%esp
c10033b8:	c9                   	leave  
c10033b9:	c3                   	ret    

c10033ba <add_link>:
c10033ba:	55                   	push   %ebp
c10033bb:	89 e5                	mov    %esp,%ebp
c10033bd:	83 ec 20             	sub    $0x20,%esp
c10033c0:	c7 45 fc 84 0c 01 c1 	movl   $0xc1010c84,-0x4(%ebp)
c10033c7:	8b 45 08             	mov    0x8(%ebp),%eax
c10033ca:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10033cd:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10033d0:	8b 00                	mov    (%eax),%eax
c10033d2:	8b 55 f8             	mov    -0x8(%ebp),%edx
c10033d5:	89 55 f4             	mov    %edx,-0xc(%ebp)
c10033d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10033db:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10033de:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10033e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10033e4:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10033e7:	89 10                	mov    %edx,(%eax)
c10033e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10033ec:	8b 10                	mov    (%eax),%edx
c10033ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10033f1:	89 50 04             	mov    %edx,0x4(%eax)
c10033f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10033f7:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10033fa:	89 50 04             	mov    %edx,0x4(%eax)
c10033fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003400:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003403:	89 10                	mov    %edx,(%eax)
c1003405:	90                   	nop
c1003406:	90                   	nop
c1003407:	90                   	nop
c1003408:	c9                   	leave  
c1003409:	c3                   	ret    

c100340a <add_all_link>:
c100340a:	55                   	push   %ebp
c100340b:	89 e5                	mov    %esp,%ebp
c100340d:	83 ec 20             	sub    $0x20,%esp
c1003410:	c7 45 fc 8c 0c 01 c1 	movl   $0xc1010c8c,-0x4(%ebp)
c1003417:	8b 45 08             	mov    0x8(%ebp),%eax
c100341a:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100341d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003420:	8b 00                	mov    (%eax),%eax
c1003422:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1003425:	89 55 f4             	mov    %edx,-0xc(%ebp)
c1003428:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100342b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100342e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003431:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003434:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003437:	89 10                	mov    %edx,(%eax)
c1003439:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100343c:	8b 10                	mov    (%eax),%edx
c100343e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003441:	89 50 04             	mov    %edx,0x4(%eax)
c1003444:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003447:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100344a:	89 50 04             	mov    %edx,0x4(%eax)
c100344d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003450:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003453:	89 10                	mov    %edx,(%eax)
c1003455:	90                   	nop
c1003456:	90                   	nop
c1003457:	90                   	nop
c1003458:	c9                   	leave  
c1003459:	c3                   	ret    

c100345a <remove_link>:
c100345a:	55                   	push   %ebp
c100345b:	89 e5                	mov    %esp,%ebp
c100345d:	83 ec 10             	sub    $0x10,%esp
c1003460:	8b 45 08             	mov    0x8(%ebp),%eax
c1003463:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003466:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003469:	8b 40 04             	mov    0x4(%eax),%eax
c100346c:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100346f:	8b 12                	mov    (%edx),%edx
c1003471:	89 55 f8             	mov    %edx,-0x8(%ebp)
c1003474:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003477:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100347a:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100347d:	89 50 04             	mov    %edx,0x4(%eax)
c1003480:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003483:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1003486:	89 10                	mov    %edx,(%eax)
c1003488:	90                   	nop
c1003489:	90                   	nop
c100348a:	90                   	nop
c100348b:	c9                   	leave  
c100348c:	c3                   	ret    

c100348d <add_pid_hash>:
c100348d:	55                   	push   %ebp
c100348e:	89 e5                	mov    %esp,%ebp
c1003490:	53                   	push   %ebx
c1003491:	83 ec 20             	sub    $0x20,%esp
c1003494:	8b 45 08             	mov    0x8(%ebp),%eax
c1003497:	8d 58 68             	lea    0x68(%eax),%ebx
c100349a:	8b 45 08             	mov    0x8(%ebp),%eax
c100349d:	8b 40 0c             	mov    0xc(%eax),%eax
c10034a0:	6a 0a                	push   $0xa
c10034a2:	50                   	push   %eax
c10034a3:	e8 28 fa ff ff       	call   c1002ed0 <hash32>
c10034a8:	83 c4 08             	add    $0x8,%esp
c10034ab:	c1 e0 03             	shl    $0x3,%eax
c10034ae:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c10034b3:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10034b6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
c10034b9:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10034bc:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10034bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10034c2:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10034c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10034c8:	8b 40 04             	mov    0x4(%eax),%eax
c10034cb:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10034ce:	89 55 e8             	mov    %edx,-0x18(%ebp)
c10034d1:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10034d4:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c10034d7:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10034da:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10034dd:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10034e0:	89 10                	mov    %edx,(%eax)
c10034e2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10034e5:	8b 10                	mov    (%eax),%edx
c10034e7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10034ea:	89 50 04             	mov    %edx,0x4(%eax)
c10034ed:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10034f0:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10034f3:	89 50 04             	mov    %edx,0x4(%eax)
c10034f6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10034f9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10034fc:	89 10                	mov    %edx,(%eax)
c10034fe:	90                   	nop
c10034ff:	90                   	nop
c1003500:	90                   	nop
c1003501:	90                   	nop
c1003502:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1003505:	c9                   	leave  
c1003506:	c3                   	ret    

c1003507 <remove_pid_hash>:
c1003507:	55                   	push   %ebp
c1003508:	89 e5                	mov    %esp,%ebp
c100350a:	83 ec 18             	sub    $0x18,%esp
c100350d:	83 ec 0c             	sub    $0xc,%esp
c1003510:	ff 75 08             	pushl  0x8(%ebp)
c1003513:	e8 36 00 00 00       	call   c100354e <find_task>
c1003518:	83 c4 10             	add    $0x10,%esp
c100351b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100351e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003521:	83 c0 68             	add    $0x68,%eax
c1003524:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003527:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100352a:	8b 40 04             	mov    0x4(%eax),%eax
c100352d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003530:	8b 12                	mov    (%edx),%edx
c1003532:	89 55 ec             	mov    %edx,-0x14(%ebp)
c1003535:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003538:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100353b:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100353e:	89 50 04             	mov    %edx,0x4(%eax)
c1003541:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003544:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003547:	89 10                	mov    %edx,(%eax)
c1003549:	90                   	nop
c100354a:	90                   	nop
c100354b:	90                   	nop
c100354c:	c9                   	leave  
c100354d:	c3                   	ret    

c100354e <find_task>:
c100354e:	55                   	push   %ebp
c100354f:	89 e5                	mov    %esp,%ebp
c1003551:	83 ec 10             	sub    $0x10,%esp
c1003554:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1003558:	79 07                	jns    c1003561 <find_task+0x13>
c100355a:	b8 00 00 00 00       	mov    $0x0,%eax
c100355f:	eb 56                	jmp    c10035b7 <find_task+0x69>
c1003561:	8b 45 08             	mov    0x8(%ebp),%eax
c1003564:	6a 0a                	push   $0xa
c1003566:	50                   	push   %eax
c1003567:	e8 64 f9 ff ff       	call   c1002ed0 <hash32>
c100356c:	83 c4 08             	add    $0x8,%esp
c100356f:	c1 e0 03             	shl    $0x3,%eax
c1003572:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c1003577:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100357a:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100357d:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003580:	eb 19                	jmp    c100359b <find_task+0x4d>
c1003582:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003585:	83 e8 68             	sub    $0x68,%eax
c1003588:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100358b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100358e:	8b 40 0c             	mov    0xc(%eax),%eax
c1003591:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003594:	75 05                	jne    c100359b <find_task+0x4d>
c1003596:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003599:	eb 1c                	jmp    c10035b7 <find_task+0x69>
c100359b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100359e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10035a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10035a4:	8b 40 04             	mov    0x4(%eax),%eax
c10035a7:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10035aa:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10035ad:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c10035b0:	75 d0                	jne    c1003582 <find_task+0x34>
c10035b2:	b8 00 00 00 00       	mov    $0x0,%eax
c10035b7:	c9                   	leave  
c10035b8:	c3                   	ret    

c10035b9 <alloc_task>:
c10035b9:	55                   	push   %ebp
c10035ba:	89 e5                	mov    %esp,%ebp
c10035bc:	83 ec 18             	sub    $0x18,%esp
c10035bf:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c10035c3:	75 17                	jne    c10035dc <alloc_task+0x23>
c10035c5:	83 ec 08             	sub    $0x8,%esp
c10035c8:	6a 01                	push   $0x1
c10035ca:	68 00 20 00 00       	push   $0x2000
c10035cf:	e8 e0 f4 ff ff       	call   c1002ab4 <vmm_malloc>
c10035d4:	83 c4 10             	add    $0x10,%esp
c10035d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10035da:	eb 15                	jmp    c10035f1 <alloc_task+0x38>
c10035dc:	83 ec 08             	sub    $0x8,%esp
c10035df:	6a 02                	push   $0x2
c10035e1:	68 00 20 00 00       	push   $0x2000
c10035e6:	e8 c9 f4 ff ff       	call   c1002ab4 <vmm_malloc>
c10035eb:	83 c4 10             	add    $0x10,%esp
c10035ee:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10035f1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10035f5:	0f 84 8c 00 00 00    	je     c1003687 <alloc_task+0xce>
c10035fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10035fe:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c1003604:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003607:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c100360e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003611:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1003618:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100361b:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
c1003622:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003625:	83 c0 10             	add    $0x10,%eax
c1003628:	83 ec 04             	sub    $0x4,%esp
c100362b:	6a 14                	push   $0x14
c100362d:	6a 00                	push   $0x0
c100362f:	50                   	push   %eax
c1003630:	e8 75 ca ff ff       	call   c10000aa <memset>
c1003635:	83 c4 10             	add    $0x10,%esp
c1003638:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100363b:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
c1003642:	ba 00 10 61 c1       	mov    $0xc1611000,%edx
c1003647:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100364a:	89 50 28             	mov    %edx,0x28(%eax)
c100364d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003650:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
c1003657:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100365a:	83 c0 38             	add    $0x38,%eax
c100365d:	83 ec 04             	sub    $0x4,%esp
c1003660:	6a 20                	push   $0x20
c1003662:	6a 00                	push   $0x0
c1003664:	50                   	push   %eax
c1003665:	e8 40 ca ff ff       	call   c10000aa <memset>
c100366a:	83 c4 10             	add    $0x10,%esp
c100366d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003670:	c7 80 f0 00 00 00 11 	movl   $0x19971211,0xf0(%eax)
c1003677:	12 97 19 
c100367a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100367d:	c7 80 f4 00 00 00 00 	movl   $0x0,0xf4(%eax)
c1003684:	00 00 00 
c1003687:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100368a:	c9                   	leave  
c100368b:	c3                   	ret    

c100368c <forkret>:
c100368c:	55                   	push   %ebp
c100368d:	89 e5                	mov    %esp,%ebp
c100368f:	83 ec 08             	sub    $0x8,%esp
c1003692:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003697:	8b 40 34             	mov    0x34(%eax),%eax
c100369a:	83 ec 0c             	sub    $0xc,%esp
c100369d:	50                   	push   %eax
c100369e:	e8 f3 d6 ff ff       	call   c1000d96 <forkrets>
c10036a3:	83 c4 10             	add    $0x10,%esp
c10036a6:	90                   	nop
c10036a7:	c9                   	leave  
c10036a8:	c3                   	ret    

c10036a9 <copy_thread>:
c10036a9:	55                   	push   %ebp
c10036aa:	89 e5                	mov    %esp,%ebp
c10036ac:	57                   	push   %edi
c10036ad:	56                   	push   %esi
c10036ae:	53                   	push   %ebx
c10036af:	83 ec 0c             	sub    $0xc,%esp
c10036b2:	8b 45 08             	mov    0x8(%ebp),%eax
c10036b5:	8b 40 24             	mov    0x24(%eax),%eax
c10036b8:	83 e8 4c             	sub    $0x4c,%eax
c10036bb:	89 c2                	mov    %eax,%edx
c10036bd:	8b 45 08             	mov    0x8(%ebp),%eax
c10036c0:	89 50 34             	mov    %edx,0x34(%eax)
c10036c3:	8b 45 08             	mov    0x8(%ebp),%eax
c10036c6:	8b 40 34             	mov    0x34(%eax),%eax
c10036c9:	8b 55 10             	mov    0x10(%ebp),%edx
c10036cc:	89 d3                	mov    %edx,%ebx
c10036ce:	ba 4c 00 00 00       	mov    $0x4c,%edx
c10036d3:	8b 0b                	mov    (%ebx),%ecx
c10036d5:	89 08                	mov    %ecx,(%eax)
c10036d7:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c10036db:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c10036df:	8d 78 04             	lea    0x4(%eax),%edi
c10036e2:	83 e7 fc             	and    $0xfffffffc,%edi
c10036e5:	29 f8                	sub    %edi,%eax
c10036e7:	29 c3                	sub    %eax,%ebx
c10036e9:	01 c2                	add    %eax,%edx
c10036eb:	83 e2 fc             	and    $0xfffffffc,%edx
c10036ee:	89 d0                	mov    %edx,%eax
c10036f0:	c1 e8 02             	shr    $0x2,%eax
c10036f3:	89 de                	mov    %ebx,%esi
c10036f5:	89 c1                	mov    %eax,%ecx
c10036f7:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c10036f9:	8b 45 08             	mov    0x8(%ebp),%eax
c10036fc:	8b 40 34             	mov    0x34(%eax),%eax
c10036ff:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1003706:	8b 45 08             	mov    0x8(%ebp),%eax
c1003709:	8b 40 34             	mov    0x34(%eax),%eax
c100370c:	8b 50 40             	mov    0x40(%eax),%edx
c100370f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003712:	8b 40 34             	mov    0x34(%eax),%eax
c1003715:	80 ce 02             	or     $0x2,%dh
c1003718:	89 50 40             	mov    %edx,0x40(%eax)
c100371b:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003720:	05 f8 00 00 00       	add    $0xf8,%eax
c1003725:	89 c2                	mov    %eax,%edx
c1003727:	8b 45 08             	mov    0x8(%ebp),%eax
c100372a:	05 f8 00 00 00       	add    $0xf8,%eax
c100372f:	83 ec 04             	sub    $0x4,%esp
c1003732:	68 08 0f 00 00       	push   $0xf08
c1003737:	52                   	push   %edx
c1003738:	50                   	push   %eax
c1003739:	e8 ca c9 ff ff       	call   c1000108 <memcpy>
c100373e:	83 c4 10             	add    $0x10,%esp
c1003741:	8b 45 08             	mov    0x8(%ebp),%eax
c1003744:	8b 40 34             	mov    0x34(%eax),%eax
c1003747:	8b 40 44             	mov    0x44(%eax),%eax
c100374a:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c1003750:	29 d0                	sub    %edx,%eax
c1003752:	89 c1                	mov    %eax,%ecx
c1003754:	8b 55 08             	mov    0x8(%ebp),%edx
c1003757:	8b 45 08             	mov    0x8(%ebp),%eax
c100375a:	8b 40 34             	mov    0x34(%eax),%eax
c100375d:	01 ca                	add    %ecx,%edx
c100375f:	89 50 44             	mov    %edx,0x44(%eax)
c1003762:	ba 8c 36 00 c1       	mov    $0xc100368c,%edx
c1003767:	8b 45 08             	mov    0x8(%ebp),%eax
c100376a:	89 50 38             	mov    %edx,0x38(%eax)
c100376d:	8b 45 10             	mov    0x10(%ebp),%eax
c1003770:	8b 50 10             	mov    0x10(%eax),%edx
c1003773:	8b 45 08             	mov    0x8(%ebp),%eax
c1003776:	89 50 40             	mov    %edx,0x40(%eax)
c1003779:	8b 45 10             	mov    0x10(%ebp),%eax
c100377c:	8b 50 14             	mov    0x14(%eax),%edx
c100377f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003782:	89 50 48             	mov    %edx,0x48(%eax)
c1003785:	8b 45 08             	mov    0x8(%ebp),%eax
c1003788:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c100378e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003791:	89 50 3c             	mov    %edx,0x3c(%eax)
c1003794:	90                   	nop
c1003795:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003798:	5b                   	pop    %ebx
c1003799:	5e                   	pop    %esi
c100379a:	5f                   	pop    %edi
c100379b:	5d                   	pop    %ebp
c100379c:	c3                   	ret    

c100379d <do_fork>:
c100379d:	55                   	push   %ebp
c100379e:	89 e5                	mov    %esp,%ebp
c10037a0:	83 ec 18             	sub    $0x18,%esp
c10037a3:	a1 94 0c 01 c1       	mov    0xc1010c94,%eax
c10037a8:	3d 00 80 00 00       	cmp    $0x8000,%eax
c10037ad:	76 0a                	jbe    c10037b9 <do_fork+0x1c>
c10037af:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10037b4:	e9 2f 01 00 00       	jmp    c10038e8 <do_fork+0x14b>
c10037b9:	83 ec 0c             	sub    $0xc,%esp
c10037bc:	6a 00                	push   $0x0
c10037be:	e8 f6 fd ff ff       	call   c10035b9 <alloc_task>
c10037c3:	83 c4 10             	add    $0x10,%esp
c10037c6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10037c9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10037cd:	75 0a                	jne    c10037d9 <do_fork+0x3c>
c10037cf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10037d4:	e9 0f 01 00 00       	jmp    c10038e8 <do_fork+0x14b>
c10037d9:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c10037df:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037e2:	89 50 30             	mov    %edx,0x30(%eax)
c10037e5:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10037ea:	8b 00                	mov    (%eax),%eax
c10037ec:	85 c0                	test   %eax,%eax
c10037ee:	74 19                	je     c1003809 <do_fork+0x6c>
c10037f0:	68 9f a5 00 c1       	push   $0xc100a59f
c10037f5:	68 0c a7 00 c1       	push   $0xc100a70c
c10037fa:	68 59 01 00 00       	push   $0x159
c10037ff:	68 b4 a5 00 c1       	push   $0xc100a5b4
c1003804:	e8 04 cb ff ff       	call   c100030d <__PANIC>
c1003809:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100380c:	8d 90 00 20 00 00    	lea    0x2000(%eax),%edx
c1003812:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003815:	89 50 24             	mov    %edx,0x24(%eax)
c1003818:	83 ec 0c             	sub    $0xc,%esp
c100381b:	ff 75 f4             	pushl  -0xc(%ebp)
c100381e:	e8 eb 04 00 00       	call   c1003d0e <copy_user_cr3>
c1003823:	83 c4 10             	add    $0x10,%esp
c1003826:	83 ec 04             	sub    $0x4,%esp
c1003829:	ff 75 10             	pushl  0x10(%ebp)
c100382c:	ff 75 0c             	pushl  0xc(%ebp)
c100382f:	ff 75 f4             	pushl  -0xc(%ebp)
c1003832:	e8 72 fe ff ff       	call   c10036a9 <copy_thread>
c1003837:	83 c4 10             	add    $0x10,%esp
c100383a:	e8 97 fa ff ff       	call   c10032d6 <alloc_pid>
c100383f:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003842:	89 42 0c             	mov    %eax,0xc(%edx)
c1003845:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003848:	8b 40 0c             	mov    0xc(%eax),%eax
c100384b:	85 c0                	test   %eax,%eax
c100384d:	79 0a                	jns    c1003859 <do_fork+0xbc>
c100384f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003854:	e9 8f 00 00 00       	jmp    c10038e8 <do_fork+0x14b>
c1003859:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100385c:	83 c0 58             	add    $0x58,%eax
c100385f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003862:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003865:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003868:	89 50 04             	mov    %edx,0x4(%eax)
c100386b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100386e:	8b 50 04             	mov    0x4(%eax),%edx
c1003871:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003874:	89 10                	mov    %edx,(%eax)
c1003876:	90                   	nop
c1003877:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100387a:	83 c0 58             	add    $0x58,%eax
c100387d:	83 ec 0c             	sub    $0xc,%esp
c1003880:	50                   	push   %eax
c1003881:	e8 34 fb ff ff       	call   c10033ba <add_link>
c1003886:	83 c4 10             	add    $0x10,%esp
c1003889:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100388c:	83 c0 60             	add    $0x60,%eax
c100388f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003892:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003895:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003898:	89 50 04             	mov    %edx,0x4(%eax)
c100389b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100389e:	8b 50 04             	mov    0x4(%eax),%edx
c10038a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10038a4:	89 10                	mov    %edx,(%eax)
c10038a6:	90                   	nop
c10038a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038aa:	83 c0 60             	add    $0x60,%eax
c10038ad:	83 ec 0c             	sub    $0xc,%esp
c10038b0:	50                   	push   %eax
c10038b1:	e8 54 fb ff ff       	call   c100340a <add_all_link>
c10038b6:	83 c4 10             	add    $0x10,%esp
c10038b9:	83 ec 0c             	sub    $0xc,%esp
c10038bc:	ff 75 f4             	pushl  -0xc(%ebp)
c10038bf:	e8 c9 fb ff ff       	call   c100348d <add_pid_hash>
c10038c4:	83 c4 10             	add    $0x10,%esp
c10038c7:	a1 94 0c 01 c1       	mov    0xc1010c94,%eax
c10038cc:	83 c0 01             	add    $0x1,%eax
c10038cf:	a3 94 0c 01 c1       	mov    %eax,0xc1010c94
c10038d4:	83 ec 0c             	sub    $0xc,%esp
c10038d7:	ff 75 f4             	pushl  -0xc(%ebp)
c10038da:	e8 0b 00 00 00       	call   c10038ea <wakeup_task>
c10038df:	83 c4 10             	add    $0x10,%esp
c10038e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038e5:	8b 40 0c             	mov    0xc(%eax),%eax
c10038e8:	c9                   	leave  
c10038e9:	c3                   	ret    

c10038ea <wakeup_task>:
c10038ea:	55                   	push   %ebp
c10038eb:	89 e5                	mov    %esp,%ebp
c10038ed:	8b 45 08             	mov    0x8(%ebp),%eax
c10038f0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10038f6:	90                   	nop
c10038f7:	5d                   	pop    %ebp
c10038f8:	c3                   	ret    

c10038f9 <kernel_thread>:
c10038f9:	55                   	push   %ebp
c10038fa:	89 e5                	mov    %esp,%ebp
c10038fc:	83 ec 58             	sub    $0x58,%esp
c10038ff:	83 ec 04             	sub    $0x4,%esp
c1003902:	6a 4c                	push   $0x4c
c1003904:	6a 00                	push   $0x0
c1003906:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003909:	50                   	push   %eax
c100390a:	e8 9b c7 ff ff       	call   c10000aa <memset>
c100390f:	83 c4 10             	add    $0x10,%esp
c1003912:	66 c7 45 e8 08 00    	movw   $0x8,-0x18(%ebp)
c1003918:	66 c7 45 f4 10 00    	movw   $0x10,-0xc(%ebp)
c100391e:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1003922:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
c1003926:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
c100392a:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
c100392e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003931:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1003934:	8b 45 0c             	mov    0xc(%ebp),%eax
c1003937:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100393a:	b8 da 41 00 c1       	mov    $0xc10041da,%eax
c100393f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003942:	83 ec 04             	sub    $0x4,%esp
c1003945:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003948:	50                   	push   %eax
c1003949:	6a 00                	push   $0x0
c100394b:	ff 75 10             	pushl  0x10(%ebp)
c100394e:	e8 4a fe ff ff       	call   c100379d <do_fork>
c1003953:	83 c4 10             	add    $0x10,%esp
c1003956:	c9                   	leave  
c1003957:	c3                   	ret    

c1003958 <task_run>:
c1003958:	55                   	push   %ebp
c1003959:	89 e5                	mov    %esp,%ebp
c100395b:	83 ec 18             	sub    $0x18,%esp
c100395e:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003963:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003966:	74 63                	je     c10039cb <task_run+0x73>
c1003968:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100396d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003970:	8b 45 08             	mov    0x8(%ebp),%eax
c1003973:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1003978:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100397d:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003980:	75 07                	jne    c1003989 <task_run+0x31>
c1003982:	e8 8a d3 ff ff       	call   c1000d11 <intr_enable>
c1003987:	eb 05                	jmp    c100398e <task_run+0x36>
c1003989:	e8 a2 d3 ff ff       	call   c1000d30 <intr_disable>
c100398e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003991:	8b 40 24             	mov    0x24(%eax),%eax
c1003994:	83 ec 0c             	sub    $0xc,%esp
c1003997:	50                   	push   %eax
c1003998:	e8 b6 cf ff ff       	call   c1000953 <set_ts_esp0>
c100399d:	83 c4 10             	add    $0x10,%esp
c10039a0:	8b 45 08             	mov    0x8(%ebp),%eax
c10039a3:	8b 40 28             	mov    0x28(%eax),%eax
c10039a6:	83 ec 0c             	sub    $0xc,%esp
c10039a9:	50                   	push   %eax
c10039aa:	e8 a7 c8 ff ff       	call   c1000256 <lcr3>
c10039af:	83 c4 10             	add    $0x10,%esp
c10039b2:	8b 45 08             	mov    0x8(%ebp),%eax
c10039b5:	8d 50 38             	lea    0x38(%eax),%edx
c10039b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10039bb:	83 c0 38             	add    $0x38,%eax
c10039be:	83 ec 08             	sub    $0x8,%esp
c10039c1:	52                   	push   %edx
c10039c2:	50                   	push   %eax
c10039c3:	e8 17 08 00 00       	call   c10041df <switch_to>
c10039c8:	83 c4 10             	add    $0x10,%esp
c10039cb:	90                   	nop
c10039cc:	c9                   	leave  
c10039cd:	c3                   	ret    

c10039ce <schedule>:
c10039ce:	55                   	push   %ebp
c10039cf:	89 e5                	mov    %esp,%ebp
c10039d1:	83 ec 18             	sub    $0x18,%esp
c10039d4:	c7 45 ec 84 0c 01 c1 	movl   $0xc1010c84,-0x14(%ebp)
c10039db:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10039de:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10039e1:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10039e6:	8b 00                	mov    (%eax),%eax
c10039e8:	85 c0                	test   %eax,%eax
c10039ea:	75 0c                	jne    c10039f8 <schedule+0x2a>
c10039ec:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10039f1:	8b 40 04             	mov    0x4(%eax),%eax
c10039f4:	85 c0                	test   %eax,%eax
c10039f6:	74 0b                	je     c1003a03 <schedule+0x35>
c10039f8:	0f b6 05 b4 0c 01 c1 	movzbl 0xc1010cb4,%eax
c10039ff:	3c 01                	cmp    $0x1,%al
c1003a01:	75 48                	jne    c1003a4b <schedule+0x7d>
c1003a03:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003a08:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003a0f:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003a14:	83 c0 58             	add    $0x58,%eax
c1003a17:	50                   	push   %eax
c1003a18:	e8 9d f9 ff ff       	call   c10033ba <add_link>
c1003a1d:	83 c4 04             	add    $0x4,%esp
c1003a20:	eb 29                	jmp    c1003a4b <schedule+0x7d>
c1003a22:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003a25:	83 e8 58             	sub    $0x58,%eax
c1003a28:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003a2b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003a2e:	8b 00                	mov    (%eax),%eax
c1003a30:	85 c0                	test   %eax,%eax
c1003a32:	75 17                	jne    c1003a4b <schedule+0x7d>
c1003a34:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003a37:	8b 40 04             	mov    0x4(%eax),%eax
c1003a3a:	85 c0                	test   %eax,%eax
c1003a3c:	74 0d                	je     c1003a4b <schedule+0x7d>
c1003a3e:	ff 75 f4             	pushl  -0xc(%ebp)
c1003a41:	e8 14 fa ff ff       	call   c100345a <remove_link>
c1003a46:	83 c4 04             	add    $0x4,%esp
c1003a49:	eb 17                	jmp    c1003a62 <schedule+0x94>
c1003a4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003a4e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003a51:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003a54:	8b 40 04             	mov    0x4(%eax),%eax
c1003a57:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003a5a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003a5d:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1003a60:	75 c0                	jne    c1003a22 <schedule+0x54>
c1003a62:	83 ec 0c             	sub    $0xc,%esp
c1003a65:	ff 75 f0             	pushl  -0x10(%ebp)
c1003a68:	e8 eb fe ff ff       	call   c1003958 <task_run>
c1003a6d:	83 c4 10             	add    $0x10,%esp
c1003a70:	90                   	nop
c1003a71:	c9                   	leave  
c1003a72:	c3                   	ret    

c1003a73 <thread_block>:
c1003a73:	55                   	push   %ebp
c1003a74:	89 e5                	mov    %esp,%ebp
c1003a76:	83 ec 18             	sub    $0x18,%esp
c1003a79:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1003a7d:	74 19                	je     c1003a98 <thread_block+0x25>
c1003a7f:	68 e5 a5 00 c1       	push   $0xc100a5e5
c1003a84:	68 14 a7 00 c1       	push   $0xc100a714
c1003a89:	68 be 01 00 00       	push   $0x1be
c1003a8e:	68 b4 a5 00 c1       	push   $0xc100a5b4
c1003a93:	e8 75 c8 ff ff       	call   c100030d <__PANIC>
c1003a98:	e8 b3 d2 ff ff       	call   c1000d50 <intr_save>
c1003a9d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003aa0:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003aa5:	8b 55 08             	mov    0x8(%ebp),%edx
c1003aa8:	89 10                	mov    %edx,(%eax)
c1003aaa:	e8 1f ff ff ff       	call   c10039ce <schedule>
c1003aaf:	83 ec 0c             	sub    $0xc,%esp
c1003ab2:	ff 75 f4             	pushl  -0xc(%ebp)
c1003ab5:	e8 a9 d2 ff ff       	call   c1000d63 <intr_restore>
c1003aba:	83 c4 10             	add    $0x10,%esp
c1003abd:	90                   	nop
c1003abe:	c9                   	leave  
c1003abf:	c3                   	ret    

c1003ac0 <thread_unblock>:
c1003ac0:	55                   	push   %ebp
c1003ac1:	89 e5                	mov    %esp,%ebp
c1003ac3:	83 ec 18             	sub    $0x18,%esp
c1003ac6:	c7 45 f0 84 0c 01 c1 	movl   $0xc1010c84,-0x10(%ebp)
c1003acd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003ad0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003ad3:	e8 78 d2 ff ff       	call   c1000d50 <intr_save>
c1003ad8:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003adb:	8b 45 08             	mov    0x8(%ebp),%eax
c1003ade:	8b 00                	mov    (%eax),%eax
c1003ae0:	83 f8 01             	cmp    $0x1,%eax
c1003ae3:	74 19                	je     c1003afe <thread_unblock+0x3e>
c1003ae5:	68 f5 a5 00 c1       	push   $0xc100a5f5
c1003aea:	68 24 a7 00 c1       	push   $0xc100a724
c1003aef:	68 cf 01 00 00       	push   $0x1cf
c1003af4:	68 b4 a5 00 c1       	push   $0xc100a5b4
c1003af9:	e8 0f c8 ff ff       	call   c100030d <__PANIC>
c1003afe:	8b 45 08             	mov    0x8(%ebp),%eax
c1003b01:	8b 00                	mov    (%eax),%eax
c1003b03:	85 c0                	test   %eax,%eax
c1003b05:	74 58                	je     c1003b5f <thread_unblock+0x9f>
c1003b07:	eb 24                	jmp    c1003b2d <thread_unblock+0x6d>
c1003b09:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003b0c:	83 e8 58             	sub    $0x58,%eax
c1003b0f:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003b12:	75 19                	jne    c1003b2d <thread_unblock+0x6d>
c1003b14:	68 0c a6 00 c1       	push   $0xc100a60c
c1003b19:	68 24 a7 00 c1       	push   $0xc100a724
c1003b1e:	68 d4 01 00 00       	push   $0x1d4
c1003b23:	68 b4 a5 00 c1       	push   $0xc100a5b4
c1003b28:	e8 e0 c7 ff ff       	call   c100030d <__PANIC>
c1003b2d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003b30:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003b33:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003b36:	8b 40 04             	mov    0x4(%eax),%eax
c1003b39:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003b3c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003b3f:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1003b42:	75 c5                	jne    c1003b09 <thread_unblock+0x49>
c1003b44:	8b 45 08             	mov    0x8(%ebp),%eax
c1003b47:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003b4d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003b50:	83 c0 58             	add    $0x58,%eax
c1003b53:	83 ec 0c             	sub    $0xc,%esp
c1003b56:	50                   	push   %eax
c1003b57:	e8 5e f8 ff ff       	call   c10033ba <add_link>
c1003b5c:	83 c4 10             	add    $0x10,%esp
c1003b5f:	83 ec 0c             	sub    $0xc,%esp
c1003b62:	ff 75 ec             	pushl  -0x14(%ebp)
c1003b65:	e8 f9 d1 ff ff       	call   c1000d63 <intr_restore>
c1003b6a:	83 c4 10             	add    $0x10,%esp
c1003b6d:	90                   	nop
c1003b6e:	c9                   	leave  
c1003b6f:	c3                   	ret    

c1003b70 <print_taskinfo>:
c1003b70:	55                   	push   %ebp
c1003b71:	89 e5                	mov    %esp,%ebp
c1003b73:	83 ec 08             	sub    $0x8,%esp
c1003b76:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003b7b:	83 ec 0c             	sub    $0xc,%esp
c1003b7e:	50                   	push   %eax
c1003b7f:	e8 01 f8 ff ff       	call   c1003385 <get_task_name>
c1003b84:	83 c4 10             	add    $0x10,%esp
c1003b87:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c1003b8d:	8b 52 0c             	mov    0xc(%edx),%edx
c1003b90:	83 ec 04             	sub    $0x4,%esp
c1003b93:	50                   	push   %eax
c1003b94:	52                   	push   %edx
c1003b95:	68 40 a6 00 c1       	push   $0xc100a640
c1003b9a:	e8 79 10 00 00       	call   c1004c18 <printk>
c1003b9f:	83 c4 10             	add    $0x10,%esp
c1003ba2:	83 ec 08             	sub    $0x8,%esp
c1003ba5:	ff 75 08             	pushl  0x8(%ebp)
c1003ba8:	68 62 a6 00 c1       	push   $0xc100a662
c1003bad:	e8 66 10 00 00       	call   c1004c18 <printk>
c1003bb2:	83 c4 10             	add    $0x10,%esp
c1003bb5:	83 ec 0c             	sub    $0xc,%esp
c1003bb8:	68 6f a6 00 c1       	push   $0xc100a66f
c1003bbd:	e8 56 10 00 00       	call   c1004c18 <printk>
c1003bc2:	83 c4 10             	add    $0x10,%esp
c1003bc5:	b8 00 00 00 00       	mov    $0x0,%eax
c1003bca:	c9                   	leave  
c1003bcb:	c3                   	ret    

c1003bcc <do_exit>:
c1003bcc:	55                   	push   %ebp
c1003bcd:	89 e5                	mov    %esp,%ebp
c1003bcf:	83 ec 08             	sub    $0x8,%esp
c1003bd2:	83 ec 0c             	sub    $0xc,%esp
c1003bd5:	68 8b a6 00 c1       	push   $0xc100a68b
c1003bda:	e8 39 10 00 00       	call   c1004c18 <printk>
c1003bdf:	83 c4 10             	add    $0x10,%esp
c1003be2:	eb fe                	jmp    c1003be2 <do_exit+0x16>

c1003be4 <do_execve>:
c1003be4:	55                   	push   %ebp
c1003be5:	89 e5                	mov    %esp,%ebp
c1003be7:	b8 00 00 00 00       	mov    $0x0,%eax
c1003bec:	5d                   	pop    %ebp
c1003bed:	c3                   	ret    

c1003bee <kernel_execve>:
c1003bee:	55                   	push   %ebp
c1003bef:	89 e5                	mov    %esp,%ebp
c1003bf1:	83 ec 18             	sub    $0x18,%esp
c1003bf4:	83 ec 0c             	sub    $0xc,%esp
c1003bf7:	ff 75 08             	pushl  0x8(%ebp)
c1003bfa:	e8 1f c5 ff ff       	call   c100011e <strlen>
c1003bff:	83 c4 10             	add    $0x10,%esp
c1003c02:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003c05:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c08:	c9                   	leave  
c1003c09:	c3                   	ret    

c1003c0a <user_main>:
c1003c0a:	55                   	push   %ebp
c1003c0b:	89 e5                	mov    %esp,%ebp
c1003c0d:	90                   	nop
c1003c0e:	5d                   	pop    %ebp
c1003c0f:	c3                   	ret    

c1003c10 <set_user_cr3>:
c1003c10:	55                   	push   %ebp
c1003c11:	89 e5                	mov    %esp,%ebp
c1003c13:	57                   	push   %edi
c1003c14:	56                   	push   %esi
c1003c15:	53                   	push   %ebx
c1003c16:	83 ec 2c             	sub    $0x2c,%esp
c1003c19:	83 ec 08             	sub    $0x8,%esp
c1003c1c:	6a 02                	push   $0x2
c1003c1e:	68 00 10 00 00       	push   $0x1000
c1003c23:	e8 8c ee ff ff       	call   c1002ab4 <vmm_malloc>
c1003c28:	83 c4 10             	add    $0x10,%esp
c1003c2b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003c2e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003c31:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1003c36:	ba 00 10 00 00       	mov    $0x1000,%edx
c1003c3b:	8b 0b                	mov    (%ebx),%ecx
c1003c3d:	89 08                	mov    %ecx,(%eax)
c1003c3f:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003c43:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003c47:	8d 78 04             	lea    0x4(%eax),%edi
c1003c4a:	83 e7 fc             	and    $0xfffffffc,%edi
c1003c4d:	29 f8                	sub    %edi,%eax
c1003c4f:	29 c3                	sub    %eax,%ebx
c1003c51:	01 c2                	add    %eax,%edx
c1003c53:	83 e2 fc             	and    $0xfffffffc,%edx
c1003c56:	89 d0                	mov    %edx,%eax
c1003c58:	c1 e8 02             	shr    $0x2,%eax
c1003c5b:	89 de                	mov    %ebx,%esi
c1003c5d:	89 c1                	mov    %eax,%ecx
c1003c5f:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003c61:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003c64:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003c67:	a1 00 1c 61 c1       	mov    0xc1611c00,%eax
c1003c6c:	83 ec 08             	sub    $0x8,%esp
c1003c6f:	50                   	push   %eax
c1003c70:	68 97 a6 00 c1       	push   $0xc100a697
c1003c75:	e8 9e 0f 00 00       	call   c1004c18 <printk>
c1003c7a:	83 c4 10             	add    $0x10,%esp
c1003c7d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003c80:	05 00 0c 00 00       	add    $0xc00,%eax
c1003c85:	8b 00                	mov    (%eax),%eax
c1003c87:	83 ec 08             	sub    $0x8,%esp
c1003c8a:	50                   	push   %eax
c1003c8b:	68 ab a6 00 c1       	push   $0xc100a6ab
c1003c90:	e8 83 0f 00 00       	call   c1004c18 <printk>
c1003c95:	83 c4 10             	add    $0x10,%esp
c1003c98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003c9b:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1003c9e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003ca1:	c1 e8 16             	shr    $0x16,%eax
c1003ca4:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003cab:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003cae:	01 d0                	add    %edx,%eax
c1003cb0:	8b 00                	mov    (%eax),%eax
c1003cb2:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003cb7:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1003cbc:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1003cbf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003cc2:	c1 e8 0c             	shr    $0xc,%eax
c1003cc5:	25 ff 03 00 00       	and    $0x3ff,%eax
c1003cca:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003cd1:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1003cd4:	01 d0                	add    %edx,%eax
c1003cd6:	8b 00                	mov    (%eax),%eax
c1003cd8:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003cdd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1003ce0:	83 ec 08             	sub    $0x8,%esp
c1003ce3:	ff 75 d4             	pushl  -0x2c(%ebp)
c1003ce6:	68 bb a6 00 c1       	push   $0xc100a6bb
c1003ceb:	e8 28 0f 00 00       	call   c1004c18 <printk>
c1003cf0:	83 c4 10             	add    $0x10,%esp
c1003cf3:	8b 45 08             	mov    0x8(%ebp),%eax
c1003cf6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1003cf9:	89 50 28             	mov    %edx,0x28(%eax)
c1003cfc:	8b 45 08             	mov    0x8(%ebp),%eax
c1003cff:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003d02:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003d05:	90                   	nop
c1003d06:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003d09:	5b                   	pop    %ebx
c1003d0a:	5e                   	pop    %esi
c1003d0b:	5f                   	pop    %edi
c1003d0c:	5d                   	pop    %ebp
c1003d0d:	c3                   	ret    

c1003d0e <copy_user_cr3>:
c1003d0e:	55                   	push   %ebp
c1003d0f:	89 e5                	mov    %esp,%ebp
c1003d11:	57                   	push   %edi
c1003d12:	56                   	push   %esi
c1003d13:	53                   	push   %ebx
c1003d14:	83 ec 2c             	sub    $0x2c,%esp
c1003d17:	83 ec 08             	sub    $0x8,%esp
c1003d1a:	6a 02                	push   $0x2
c1003d1c:	68 00 10 00 00       	push   $0x1000
c1003d21:	e8 8e ed ff ff       	call   c1002ab4 <vmm_malloc>
c1003d26:	83 c4 10             	add    $0x10,%esp
c1003d29:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003d2c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003d2f:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1003d34:	ba 00 10 00 00       	mov    $0x1000,%edx
c1003d39:	8b 0b                	mov    (%ebx),%ecx
c1003d3b:	89 08                	mov    %ecx,(%eax)
c1003d3d:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003d41:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003d45:	8d 78 04             	lea    0x4(%eax),%edi
c1003d48:	83 e7 fc             	and    $0xfffffffc,%edi
c1003d4b:	29 f8                	sub    %edi,%eax
c1003d4d:	29 c3                	sub    %eax,%ebx
c1003d4f:	01 c2                	add    %eax,%edx
c1003d51:	83 e2 fc             	and    $0xfffffffc,%edx
c1003d54:	89 d0                	mov    %edx,%eax
c1003d56:	c1 e8 02             	shr    $0x2,%eax
c1003d59:	89 de                	mov    %ebx,%esi
c1003d5b:	89 c1                	mov    %eax,%ecx
c1003d5d:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003d5f:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003d64:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d67:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1003d6a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003d6d:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1003d70:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1003d77:	eb 51                	jmp    c1003dca <copy_user_cr3+0xbc>
c1003d79:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003d7c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003d83:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003d86:	01 d0                	add    %edx,%eax
c1003d88:	8b 00                	mov    (%eax),%eax
c1003d8a:	83 e0 01             	and    $0x1,%eax
c1003d8d:	85 c0                	test   %eax,%eax
c1003d8f:	74 13                	je     c1003da4 <copy_user_cr3+0x96>
c1003d91:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003d94:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003d9b:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003d9e:	01 d0                	add    %edx,%eax
c1003da0:	8b 00                	mov    (%eax),%eax
c1003da2:	eb 11                	jmp    c1003db5 <copy_user_cr3+0xa7>
c1003da4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003da7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003dae:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1003db1:	01 d0                	add    %edx,%eax
c1003db3:	8b 00                	mov    (%eax),%eax
c1003db5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003db8:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1003dbf:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1003dc2:	01 ca                	add    %ecx,%edx
c1003dc4:	89 02                	mov    %eax,(%edx)
c1003dc6:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1003dca:	81 7d e4 ff 03 00 00 	cmpl   $0x3ff,-0x1c(%ebp)
c1003dd1:	7e a6                	jle    c1003d79 <copy_user_cr3+0x6b>
c1003dd3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003dd6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1003dd9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003ddc:	c1 e8 16             	shr    $0x16,%eax
c1003ddf:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003de6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1003de9:	01 d0                	add    %edx,%eax
c1003deb:	8b 00                	mov    (%eax),%eax
c1003ded:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003df2:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1003df7:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1003dfa:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003dfd:	c1 e8 0c             	shr    $0xc,%eax
c1003e00:	25 ff 03 00 00       	and    $0x3ff,%eax
c1003e05:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003e0c:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1003e0f:	01 d0                	add    %edx,%eax
c1003e11:	8b 00                	mov    (%eax),%eax
c1003e13:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003e18:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1003e1b:	8b 45 08             	mov    0x8(%ebp),%eax
c1003e1e:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1003e21:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003e24:	8b 45 08             	mov    0x8(%ebp),%eax
c1003e27:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1003e2a:	89 50 28             	mov    %edx,0x28(%eax)
c1003e2d:	90                   	nop
c1003e2e:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003e31:	5b                   	pop    %ebx
c1003e32:	5e                   	pop    %esi
c1003e33:	5f                   	pop    %edi
c1003e34:	5d                   	pop    %ebp
c1003e35:	c3                   	ret    

c1003e36 <user_task_init>:
c1003e36:	55                   	push   %ebp
c1003e37:	89 e5                	mov    %esp,%ebp
c1003e39:	53                   	push   %ebx
c1003e3a:	83 ec 14             	sub    $0x14,%esp
c1003e3d:	83 ec 0c             	sub    $0xc,%esp
c1003e40:	6a 00                	push   $0x0
c1003e42:	e8 72 f7 ff ff       	call   c10035b9 <alloc_task>
c1003e47:	83 c4 10             	add    $0x10,%esp
c1003e4a:	a3 0c 30 a1 c1       	mov    %eax,0xc1a1300c
c1003e4f:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003e54:	85 c0                	test   %eax,%eax
c1003e56:	75 10                	jne    c1003e68 <user_task_init+0x32>
c1003e58:	83 ec 0c             	sub    $0xc,%esp
c1003e5b:	68 80 a5 00 c1       	push   $0xc100a580
c1003e60:	e8 b3 0d 00 00       	call   c1004c18 <printk>
c1003e65:	83 c4 10             	add    $0x10,%esp
c1003e68:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003e6d:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c1003e73:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003e78:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003e7f:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003e84:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1003e8b:	8b 1d 0c 30 a1 c1    	mov    0xc1a1300c,%ebx
c1003e91:	e8 40 f4 ff ff       	call   c10032d6 <alloc_pid>
c1003e96:	89 43 0c             	mov    %eax,0xc(%ebx)
c1003e99:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003e9e:	83 ec 08             	sub    $0x8,%esp
c1003ea1:	68 c9 a6 00 c1       	push   $0xc100a6c9
c1003ea6:	50                   	push   %eax
c1003ea7:	e8 a4 f4 ff ff       	call   c1003350 <set_task_name>
c1003eac:	83 c4 10             	add    $0x10,%esp
c1003eaf:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003eb4:	89 c2                	mov    %eax,%edx
c1003eb6:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ebb:	81 c2 00 20 00 00    	add    $0x2000,%edx
c1003ec1:	89 50 24             	mov    %edx,0x24(%eax)
c1003ec4:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ec9:	83 ec 0c             	sub    $0xc,%esp
c1003ecc:	50                   	push   %eax
c1003ecd:	e8 3e fd ff ff       	call   c1003c10 <set_user_cr3>
c1003ed2:	83 c4 10             	add    $0x10,%esp
c1003ed5:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003eda:	8d 90 b4 1f 00 00    	lea    0x1fb4(%eax),%edx
c1003ee0:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ee5:	89 50 34             	mov    %edx,0x34(%eax)
c1003ee8:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003eed:	8b 40 34             	mov    0x34(%eax),%eax
c1003ef0:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1003ef7:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003efc:	8b 40 34             	mov    0x34(%eax),%eax
c1003eff:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1003f06:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f0b:	8b 40 34             	mov    0x34(%eax),%eax
c1003f0e:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1003f15:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f1a:	8b 40 34             	mov    0x34(%eax),%eax
c1003f1d:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c1003f24:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f29:	8b 40 34             	mov    0x34(%eax),%eax
c1003f2c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003f32:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f37:	8b 40 34             	mov    0x34(%eax),%eax
c1003f3a:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c1003f41:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f46:	8b 40 34             	mov    0x34(%eax),%eax
c1003f49:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1003f50:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f55:	8b 40 34             	mov    0x34(%eax),%eax
c1003f58:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1003f5f:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f64:	8b 40 34             	mov    0x34(%eax),%eax
c1003f67:	66 c7 40 3c 1b 00    	movw   $0x1b,0x3c(%eax)
c1003f6d:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f72:	8b 40 34             	mov    0x34(%eax),%eax
c1003f75:	66 c7 40 48 23 00    	movw   $0x23,0x48(%eax)
c1003f7b:	8b 15 0c 30 a1 c1    	mov    0xc1a1300c,%edx
c1003f81:	8b 52 34             	mov    0x34(%edx),%edx
c1003f84:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c1003f88:	66 89 42 24          	mov    %ax,0x24(%edx)
c1003f8c:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f91:	8b 40 34             	mov    0x34(%eax),%eax
c1003f94:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1003f98:	66 89 50 28          	mov    %dx,0x28(%eax)
c1003f9c:	8b 15 0c 30 a1 c1    	mov    0xc1a1300c,%edx
c1003fa2:	8b 52 34             	mov    0x34(%edx),%edx
c1003fa5:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1003fa9:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1003fad:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fb2:	8b 40 34             	mov    0x34(%eax),%eax
c1003fb5:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1003fbb:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fc0:	8b 40 34             	mov    0x34(%eax),%eax
c1003fc3:	8b 55 08             	mov    0x8(%ebp),%edx
c1003fc6:	89 50 38             	mov    %edx,0x38(%eax)
c1003fc9:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fce:	8b 40 34             	mov    0x34(%eax),%eax
c1003fd1:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1003fd8:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fdd:	89 c2                	mov    %eax,%edx
c1003fdf:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fe4:	8b 40 34             	mov    0x34(%eax),%eax
c1003fe7:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1003fed:	89 50 44             	mov    %edx,0x44(%eax)
c1003ff0:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ff5:	8b 15 8b 0d 00 c1    	mov    0xc1000d8b,%edx
c1003ffb:	89 50 38             	mov    %edx,0x38(%eax)
c1003ffe:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004003:	89 c2                	mov    %eax,%edx
c1004005:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100400a:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1004010:	89 50 3c             	mov    %edx,0x3c(%eax)
c1004013:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004018:	8b 50 34             	mov    0x34(%eax),%edx
c100401b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004020:	8b 52 10             	mov    0x10(%edx),%edx
c1004023:	89 50 40             	mov    %edx,0x40(%eax)
c1004026:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100402b:	8b 50 34             	mov    0x34(%eax),%edx
c100402e:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004033:	8b 52 14             	mov    0x14(%edx),%edx
c1004036:	89 50 48             	mov    %edx,0x48(%eax)
c1004039:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004040:	eb 16                	jmp    c1004058 <user_task_init+0x222>
c1004042:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004047:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100404a:	83 c2 1c             	add    $0x1c,%edx
c100404d:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1004054:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004058:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c100405c:	7e e4                	jle    c1004042 <user_task_init+0x20c>
c100405e:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004063:	83 c0 58             	add    $0x58,%eax
c1004066:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004069:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100406c:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100406f:	89 50 04             	mov    %edx,0x4(%eax)
c1004072:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004075:	8b 50 04             	mov    0x4(%eax),%edx
c1004078:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100407b:	89 10                	mov    %edx,(%eax)
c100407d:	90                   	nop
c100407e:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004083:	83 c0 60             	add    $0x60,%eax
c1004086:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004089:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100408c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100408f:	89 50 04             	mov    %edx,0x4(%eax)
c1004092:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004095:	8b 50 04             	mov    0x4(%eax),%edx
c1004098:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100409b:	89 10                	mov    %edx,(%eax)
c100409d:	90                   	nop
c100409e:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040a3:	83 c0 60             	add    $0x60,%eax
c10040a6:	83 ec 0c             	sub    $0xc,%esp
c10040a9:	50                   	push   %eax
c10040aa:	e8 5b f3 ff ff       	call   c100340a <add_all_link>
c10040af:	83 c4 10             	add    $0x10,%esp
c10040b2:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040b7:	83 ec 0c             	sub    $0xc,%esp
c10040ba:	50                   	push   %eax
c10040bb:	e8 cd f3 ff ff       	call   c100348d <add_pid_hash>
c10040c0:	83 c4 10             	add    $0x10,%esp
c10040c3:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040c8:	83 ec 0c             	sub    $0xc,%esp
c10040cb:	50                   	push   %eax
c10040cc:	e8 19 f8 ff ff       	call   c10038ea <wakeup_task>
c10040d1:	83 c4 10             	add    $0x10,%esp
c10040d4:	a1 94 0c 01 c1       	mov    0xc1010c94,%eax
c10040d9:	83 c0 01             	add    $0x1,%eax
c10040dc:	a3 94 0c 01 c1       	mov    %eax,0xc1010c94
c10040e1:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040e6:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c10040eb:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040f0:	8b 40 24             	mov    0x24(%eax),%eax
c10040f3:	83 ec 0c             	sub    $0xc,%esp
c10040f6:	50                   	push   %eax
c10040f7:	e8 57 c8 ff ff       	call   c1000953 <set_ts_esp0>
c10040fc:	83 c4 10             	add    $0x10,%esp
c10040ff:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004104:	8b 40 28             	mov    0x28(%eax),%eax
c1004107:	83 ec 0c             	sub    $0xc,%esp
c100410a:	50                   	push   %eax
c100410b:	e8 46 c1 ff ff       	call   c1000256 <lcr3>
c1004110:	83 c4 10             	add    $0x10,%esp
c1004113:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004118:	8b 40 34             	mov    0x34(%eax),%eax
c100411b:	89 c4                	mov    %eax,%esp
c100411d:	e9 69 cc ff ff       	jmp    c1000d8b <__trapret>
c1004122:	90                   	nop
c1004123:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1004126:	c9                   	leave  
c1004127:	c3                   	ret    

c1004128 <sys_print_task>:
c1004128:	55                   	push   %ebp
c1004129:	89 e5                	mov    %esp,%ebp
c100412b:	83 ec 18             	sub    $0x18,%esp
c100412e:	c7 45 f0 8c 0c 01 c1 	movl   $0xc1010c8c,-0x10(%ebp)
c1004135:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004138:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100413b:	83 ec 0c             	sub    $0xc,%esp
c100413e:	68 d3 a6 00 c1       	push   $0xc100a6d3
c1004143:	e8 d0 0a 00 00       	call   c1004c18 <printk>
c1004148:	83 c4 10             	add    $0x10,%esp
c100414b:	eb 6e                	jmp    c10041bb <sys_print_task+0x93>
c100414d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004150:	83 e8 60             	sub    $0x60,%eax
c1004153:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004156:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004159:	8d 50 10             	lea    0x10(%eax),%edx
c100415c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100415f:	8b 40 0c             	mov    0xc(%eax),%eax
c1004162:	83 ec 04             	sub    $0x4,%esp
c1004165:	52                   	push   %edx
c1004166:	50                   	push   %eax
c1004167:	68 e5 a6 00 c1       	push   $0xc100a6e5
c100416c:	e8 a7 0a 00 00       	call   c1004c18 <printk>
c1004171:	83 c4 10             	add    $0x10,%esp
c1004174:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004177:	8b 00                	mov    (%eax),%eax
c1004179:	83 f8 ff             	cmp    $0xffffffff,%eax
c100417c:	75 12                	jne    c1004190 <sys_print_task+0x68>
c100417e:	83 ec 0c             	sub    $0xc,%esp
c1004181:	68 ed a6 00 c1       	push   $0xc100a6ed
c1004186:	e8 8d 0a 00 00       	call   c1004c18 <printk>
c100418b:	83 c4 10             	add    $0x10,%esp
c100418e:	eb 2b                	jmp    c10041bb <sys_print_task+0x93>
c1004190:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004193:	8b 00                	mov    (%eax),%eax
c1004195:	85 c0                	test   %eax,%eax
c1004197:	75 12                	jne    c10041ab <sys_print_task+0x83>
c1004199:	83 ec 0c             	sub    $0xc,%esp
c100419c:	68 f9 a6 00 c1       	push   $0xc100a6f9
c10041a1:	e8 72 0a 00 00       	call   c1004c18 <printk>
c10041a6:	83 c4 10             	add    $0x10,%esp
c10041a9:	eb 10                	jmp    c10041bb <sys_print_task+0x93>
c10041ab:	83 ec 0c             	sub    $0xc,%esp
c10041ae:	68 03 a7 00 c1       	push   $0xc100a703
c10041b3:	e8 60 0a 00 00       	call   c1004c18 <printk>
c10041b8:	83 c4 10             	add    $0x10,%esp
c10041bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041be:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10041c1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10041c4:	8b 40 04             	mov    0x4(%eax),%eax
c10041c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10041ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041cd:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c10041d0:	0f 85 77 ff ff ff    	jne    c100414d <sys_print_task+0x25>
c10041d6:	90                   	nop
c10041d7:	90                   	nop
c10041d8:	c9                   	leave  
c10041d9:	c3                   	ret    

c10041da <kernel_thread_entry>:
c10041da:	fb                   	sti    
c10041db:	52                   	push   %edx
c10041dc:	ff d3                	call   *%ebx
c10041de:	c3                   	ret    

c10041df <switch_to>:
c10041df:	8b 44 24 04          	mov    0x4(%esp),%eax
c10041e3:	8f 00                	popl   (%eax)
c10041e5:	89 60 04             	mov    %esp,0x4(%eax)
c10041e8:	89 58 08             	mov    %ebx,0x8(%eax)
c10041eb:	89 48 0c             	mov    %ecx,0xc(%eax)
c10041ee:	89 50 10             	mov    %edx,0x10(%eax)
c10041f1:	89 70 14             	mov    %esi,0x14(%eax)
c10041f4:	89 78 18             	mov    %edi,0x18(%eax)
c10041f7:	89 68 1c             	mov    %ebp,0x1c(%eax)
c10041fa:	8b 44 24 04          	mov    0x4(%esp),%eax
c10041fe:	8b 68 1c             	mov    0x1c(%eax),%ebp
c1004201:	8b 78 18             	mov    0x18(%eax),%edi
c1004204:	8b 70 14             	mov    0x14(%eax),%esi
c1004207:	8b 50 10             	mov    0x10(%eax),%edx
c100420a:	8b 48 0c             	mov    0xc(%eax),%ecx
c100420d:	8b 58 08             	mov    0x8(%eax),%ebx
c1004210:	8b 60 04             	mov    0x4(%eax),%esp
c1004213:	ff 30                	pushl  (%eax)
c1004215:	c3                   	ret    

c1004216 <pic_setmask>:
c1004216:	55                   	push   %ebp
c1004217:	89 e5                	mov    %esp,%ebp
c1004219:	83 ec 28             	sub    $0x28,%esp
c100421c:	8b 45 08             	mov    0x8(%ebp),%eax
c100421f:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
c1004223:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004227:	66 a3 24 db 00 c1    	mov    %ax,0xc100db24
c100422d:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004231:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004234:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004238:	66 c1 e8 08          	shr    $0x8,%ax
c100423c:	88 45 f6             	mov    %al,-0xa(%ebp)
c100423f:	0f b6 05 ad 0c 01 c1 	movzbl 0xc1010cad,%eax
c1004246:	84 c0                	test   %al,%al
c1004248:	74 27                	je     c1004271 <pic_setmask+0x5b>
c100424a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100424e:	83 ec 08             	sub    $0x8,%esp
c1004251:	50                   	push   %eax
c1004252:	6a 21                	push   $0x21
c1004254:	e8 e3 bd ff ff       	call   c100003c <outb>
c1004259:	83 c4 10             	add    $0x10,%esp
c100425c:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1004260:	83 ec 08             	sub    $0x8,%esp
c1004263:	50                   	push   %eax
c1004264:	68 a1 00 00 00       	push   $0xa1
c1004269:	e8 ce bd ff ff       	call   c100003c <outb>
c100426e:	83 c4 10             	add    $0x10,%esp
c1004271:	90                   	nop
c1004272:	c9                   	leave  
c1004273:	c3                   	ret    

c1004274 <pic_enable>:
c1004274:	55                   	push   %ebp
c1004275:	89 e5                	mov    %esp,%ebp
c1004277:	83 ec 08             	sub    $0x8,%esp
c100427a:	8b 45 08             	mov    0x8(%ebp),%eax
c100427d:	ba 01 00 00 00       	mov    $0x1,%edx
c1004282:	89 c1                	mov    %eax,%ecx
c1004284:	d3 e2                	shl    %cl,%edx
c1004286:	89 d0                	mov    %edx,%eax
c1004288:	f7 d0                	not    %eax
c100428a:	89 c2                	mov    %eax,%edx
c100428c:	0f b7 05 24 db 00 c1 	movzwl 0xc100db24,%eax
c1004293:	21 d0                	and    %edx,%eax
c1004295:	0f b7 c0             	movzwl %ax,%eax
c1004298:	83 ec 0c             	sub    $0xc,%esp
c100429b:	50                   	push   %eax
c100429c:	e8 75 ff ff ff       	call   c1004216 <pic_setmask>
c10042a1:	83 c4 10             	add    $0x10,%esp
c10042a4:	90                   	nop
c10042a5:	c9                   	leave  
c10042a6:	c3                   	ret    

c10042a7 <pic_init>:
c10042a7:	55                   	push   %ebp
c10042a8:	89 e5                	mov    %esp,%ebp
c10042aa:	83 ec 08             	sub    $0x8,%esp
c10042ad:	c6 05 ad 0c 01 c1 01 	movb   $0x1,0xc1010cad
c10042b4:	83 ec 08             	sub    $0x8,%esp
c10042b7:	68 ff 00 00 00       	push   $0xff
c10042bc:	6a 21                	push   $0x21
c10042be:	e8 79 bd ff ff       	call   c100003c <outb>
c10042c3:	83 c4 10             	add    $0x10,%esp
c10042c6:	83 ec 08             	sub    $0x8,%esp
c10042c9:	68 ff 00 00 00       	push   $0xff
c10042ce:	68 a1 00 00 00       	push   $0xa1
c10042d3:	e8 64 bd ff ff       	call   c100003c <outb>
c10042d8:	83 c4 10             	add    $0x10,%esp
c10042db:	83 ec 08             	sub    $0x8,%esp
c10042de:	6a 11                	push   $0x11
c10042e0:	6a 20                	push   $0x20
c10042e2:	e8 55 bd ff ff       	call   c100003c <outb>
c10042e7:	83 c4 10             	add    $0x10,%esp
c10042ea:	83 ec 08             	sub    $0x8,%esp
c10042ed:	6a 11                	push   $0x11
c10042ef:	68 a0 00 00 00       	push   $0xa0
c10042f4:	e8 43 bd ff ff       	call   c100003c <outb>
c10042f9:	83 c4 10             	add    $0x10,%esp
c10042fc:	83 ec 08             	sub    $0x8,%esp
c10042ff:	6a 20                	push   $0x20
c1004301:	6a 21                	push   $0x21
c1004303:	e8 34 bd ff ff       	call   c100003c <outb>
c1004308:	83 c4 10             	add    $0x10,%esp
c100430b:	83 ec 08             	sub    $0x8,%esp
c100430e:	6a 28                	push   $0x28
c1004310:	68 a1 00 00 00       	push   $0xa1
c1004315:	e8 22 bd ff ff       	call   c100003c <outb>
c100431a:	83 c4 10             	add    $0x10,%esp
c100431d:	83 ec 08             	sub    $0x8,%esp
c1004320:	6a 04                	push   $0x4
c1004322:	6a 21                	push   $0x21
c1004324:	e8 13 bd ff ff       	call   c100003c <outb>
c1004329:	83 c4 10             	add    $0x10,%esp
c100432c:	83 ec 08             	sub    $0x8,%esp
c100432f:	6a 02                	push   $0x2
c1004331:	68 a1 00 00 00       	push   $0xa1
c1004336:	e8 01 bd ff ff       	call   c100003c <outb>
c100433b:	83 c4 10             	add    $0x10,%esp
c100433e:	83 ec 08             	sub    $0x8,%esp
c1004341:	6a 03                	push   $0x3
c1004343:	6a 21                	push   $0x21
c1004345:	e8 f2 bc ff ff       	call   c100003c <outb>
c100434a:	83 c4 10             	add    $0x10,%esp
c100434d:	83 ec 08             	sub    $0x8,%esp
c1004350:	6a 03                	push   $0x3
c1004352:	68 a1 00 00 00       	push   $0xa1
c1004357:	e8 e0 bc ff ff       	call   c100003c <outb>
c100435c:	83 c4 10             	add    $0x10,%esp
c100435f:	83 ec 08             	sub    $0x8,%esp
c1004362:	6a 68                	push   $0x68
c1004364:	6a 20                	push   $0x20
c1004366:	e8 d1 bc ff ff       	call   c100003c <outb>
c100436b:	83 c4 10             	add    $0x10,%esp
c100436e:	83 ec 08             	sub    $0x8,%esp
c1004371:	6a 68                	push   $0x68
c1004373:	68 a0 00 00 00       	push   $0xa0
c1004378:	e8 bf bc ff ff       	call   c100003c <outb>
c100437d:	83 c4 10             	add    $0x10,%esp
c1004380:	83 ec 08             	sub    $0x8,%esp
c1004383:	6a 0a                	push   $0xa
c1004385:	6a 20                	push   $0x20
c1004387:	e8 b0 bc ff ff       	call   c100003c <outb>
c100438c:	83 c4 10             	add    $0x10,%esp
c100438f:	83 ec 08             	sub    $0x8,%esp
c1004392:	6a 0a                	push   $0xa
c1004394:	68 a0 00 00 00       	push   $0xa0
c1004399:	e8 9e bc ff ff       	call   c100003c <outb>
c100439e:	83 c4 10             	add    $0x10,%esp
c10043a1:	0f b7 05 24 db 00 c1 	movzwl 0xc100db24,%eax
c10043a8:	66 83 f8 ff          	cmp    $0xffff,%ax
c10043ac:	74 16                	je     c10043c4 <pic_init+0x11d>
c10043ae:	0f b7 05 24 db 00 c1 	movzwl 0xc100db24,%eax
c10043b5:	0f b7 c0             	movzwl %ax,%eax
c10043b8:	83 ec 0c             	sub    $0xc,%esp
c10043bb:	50                   	push   %eax
c10043bc:	e8 55 fe ff ff       	call   c1004216 <pic_setmask>
c10043c1:	83 c4 10             	add    $0x10,%esp
c10043c4:	90                   	nop
c10043c5:	c9                   	leave  
c10043c6:	c3                   	ret    

c10043c7 <delay>:
c10043c7:	55                   	push   %ebp
c10043c8:	89 e5                	mov    %esp,%ebp
c10043ca:	83 ec 08             	sub    $0x8,%esp
c10043cd:	83 ec 0c             	sub    $0xc,%esp
c10043d0:	68 84 00 00 00       	push   $0x84
c10043d5:	e8 26 bc ff ff       	call   c1000000 <inb>
c10043da:	83 c4 10             	add    $0x10,%esp
c10043dd:	83 ec 0c             	sub    $0xc,%esp
c10043e0:	68 84 00 00 00       	push   $0x84
c10043e5:	e8 16 bc ff ff       	call   c1000000 <inb>
c10043ea:	83 c4 10             	add    $0x10,%esp
c10043ed:	83 ec 0c             	sub    $0xc,%esp
c10043f0:	68 84 00 00 00       	push   $0x84
c10043f5:	e8 06 bc ff ff       	call   c1000000 <inb>
c10043fa:	83 c4 10             	add    $0x10,%esp
c10043fd:	83 ec 0c             	sub    $0xc,%esp
c1004400:	68 84 00 00 00       	push   $0x84
c1004405:	e8 f6 bb ff ff       	call   c1000000 <inb>
c100440a:	83 c4 10             	add    $0x10,%esp
c100440d:	90                   	nop
c100440e:	c9                   	leave  
c100440f:	c3                   	ret    

c1004410 <serial_init>:
c1004410:	55                   	push   %ebp
c1004411:	89 e5                	mov    %esp,%ebp
c1004413:	83 ec 08             	sub    $0x8,%esp
c1004416:	83 ec 08             	sub    $0x8,%esp
c1004419:	6a 00                	push   $0x0
c100441b:	68 fa 03 00 00       	push   $0x3fa
c1004420:	e8 17 bc ff ff       	call   c100003c <outb>
c1004425:	83 c4 10             	add    $0x10,%esp
c1004428:	83 ec 08             	sub    $0x8,%esp
c100442b:	68 80 00 00 00       	push   $0x80
c1004430:	68 fb 03 00 00       	push   $0x3fb
c1004435:	e8 02 bc ff ff       	call   c100003c <outb>
c100443a:	83 c4 10             	add    $0x10,%esp
c100443d:	83 ec 08             	sub    $0x8,%esp
c1004440:	6a 0c                	push   $0xc
c1004442:	68 f8 03 00 00       	push   $0x3f8
c1004447:	e8 f0 bb ff ff       	call   c100003c <outb>
c100444c:	83 c4 10             	add    $0x10,%esp
c100444f:	83 ec 08             	sub    $0x8,%esp
c1004452:	6a 00                	push   $0x0
c1004454:	68 f9 03 00 00       	push   $0x3f9
c1004459:	e8 de bb ff ff       	call   c100003c <outb>
c100445e:	83 c4 10             	add    $0x10,%esp
c1004461:	83 ec 08             	sub    $0x8,%esp
c1004464:	6a 03                	push   $0x3
c1004466:	68 fb 03 00 00       	push   $0x3fb
c100446b:	e8 cc bb ff ff       	call   c100003c <outb>
c1004470:	83 c4 10             	add    $0x10,%esp
c1004473:	83 ec 08             	sub    $0x8,%esp
c1004476:	6a 00                	push   $0x0
c1004478:	68 fc 03 00 00       	push   $0x3fc
c100447d:	e8 ba bb ff ff       	call   c100003c <outb>
c1004482:	83 c4 10             	add    $0x10,%esp
c1004485:	83 ec 08             	sub    $0x8,%esp
c1004488:	6a 01                	push   $0x1
c100448a:	68 f9 03 00 00       	push   $0x3f9
c100448f:	e8 a8 bb ff ff       	call   c100003c <outb>
c1004494:	83 c4 10             	add    $0x10,%esp
c1004497:	83 ec 0c             	sub    $0xc,%esp
c100449a:	68 fd 03 00 00       	push   $0x3fd
c100449f:	e8 5c bb ff ff       	call   c1000000 <inb>
c10044a4:	83 c4 10             	add    $0x10,%esp
c10044a7:	3c ff                	cmp    $0xff,%al
c10044a9:	0f 95 c0             	setne  %al
c10044ac:	a2 ae 0c 01 c1       	mov    %al,0xc1010cae
c10044b1:	83 ec 0c             	sub    $0xc,%esp
c10044b4:	68 fa 03 00 00       	push   $0x3fa
c10044b9:	e8 42 bb ff ff       	call   c1000000 <inb>
c10044be:	83 c4 10             	add    $0x10,%esp
c10044c1:	83 ec 0c             	sub    $0xc,%esp
c10044c4:	68 f8 03 00 00       	push   $0x3f8
c10044c9:	e8 32 bb ff ff       	call   c1000000 <inb>
c10044ce:	83 c4 10             	add    $0x10,%esp
c10044d1:	0f b6 05 ae 0c 01 c1 	movzbl 0xc1010cae,%eax
c10044d8:	84 c0                	test   %al,%al
c10044da:	74 1d                	je     c10044f9 <serial_init+0xe9>
c10044dc:	83 ec 0c             	sub    $0xc,%esp
c10044df:	68 33 a7 00 c1       	push   $0xc100a733
c10044e4:	e8 2f 07 00 00       	call   c1004c18 <printk>
c10044e9:	83 c4 10             	add    $0x10,%esp
c10044ec:	83 ec 0c             	sub    $0xc,%esp
c10044ef:	6a 04                	push   $0x4
c10044f1:	e8 7e fd ff ff       	call   c1004274 <pic_enable>
c10044f6:	83 c4 10             	add    $0x10,%esp
c10044f9:	90                   	nop
c10044fa:	c9                   	leave  
c10044fb:	c3                   	ret    

c10044fc <lpt_putc_sub>:
c10044fc:	55                   	push   %ebp
c10044fd:	89 e5                	mov    %esp,%ebp
c10044ff:	83 ec 18             	sub    $0x18,%esp
c1004502:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004509:	eb 09                	jmp    c1004514 <lpt_putc_sub+0x18>
c100450b:	e8 b7 fe ff ff       	call   c10043c7 <delay>
c1004510:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004514:	83 ec 0c             	sub    $0xc,%esp
c1004517:	68 79 03 00 00       	push   $0x379
c100451c:	e8 df ba ff ff       	call   c1000000 <inb>
c1004521:	83 c4 10             	add    $0x10,%esp
c1004524:	84 c0                	test   %al,%al
c1004526:	78 09                	js     c1004531 <lpt_putc_sub+0x35>
c1004528:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c100452f:	7e da                	jle    c100450b <lpt_putc_sub+0xf>
c1004531:	8b 45 08             	mov    0x8(%ebp),%eax
c1004534:	0f b6 c0             	movzbl %al,%eax
c1004537:	83 ec 08             	sub    $0x8,%esp
c100453a:	50                   	push   %eax
c100453b:	68 78 03 00 00       	push   $0x378
c1004540:	e8 f7 ba ff ff       	call   c100003c <outb>
c1004545:	83 c4 10             	add    $0x10,%esp
c1004548:	83 ec 08             	sub    $0x8,%esp
c100454b:	6a 0d                	push   $0xd
c100454d:	68 7a 03 00 00       	push   $0x37a
c1004552:	e8 e5 ba ff ff       	call   c100003c <outb>
c1004557:	83 c4 10             	add    $0x10,%esp
c100455a:	83 ec 08             	sub    $0x8,%esp
c100455d:	6a 08                	push   $0x8
c100455f:	68 7a 03 00 00       	push   $0x37a
c1004564:	e8 d3 ba ff ff       	call   c100003c <outb>
c1004569:	83 c4 10             	add    $0x10,%esp
c100456c:	90                   	nop
c100456d:	c9                   	leave  
c100456e:	c3                   	ret    

c100456f <lpt_putc>:
c100456f:	55                   	push   %ebp
c1004570:	89 e5                	mov    %esp,%ebp
c1004572:	83 ec 08             	sub    $0x8,%esp
c1004575:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1004579:	74 10                	je     c100458b <lpt_putc+0x1c>
c100457b:	83 ec 0c             	sub    $0xc,%esp
c100457e:	ff 75 08             	pushl  0x8(%ebp)
c1004581:	e8 76 ff ff ff       	call   c10044fc <lpt_putc_sub>
c1004586:	83 c4 10             	add    $0x10,%esp
c1004589:	eb 27                	jmp    c10045b2 <lpt_putc+0x43>
c100458b:	83 ec 0c             	sub    $0xc,%esp
c100458e:	6a 08                	push   $0x8
c1004590:	e8 67 ff ff ff       	call   c10044fc <lpt_putc_sub>
c1004595:	83 c4 10             	add    $0x10,%esp
c1004598:	83 ec 0c             	sub    $0xc,%esp
c100459b:	6a 20                	push   $0x20
c100459d:	e8 5a ff ff ff       	call   c10044fc <lpt_putc_sub>
c10045a2:	83 c4 10             	add    $0x10,%esp
c10045a5:	83 ec 0c             	sub    $0xc,%esp
c10045a8:	6a 08                	push   $0x8
c10045aa:	e8 4d ff ff ff       	call   c10044fc <lpt_putc_sub>
c10045af:	83 c4 10             	add    $0x10,%esp
c10045b2:	90                   	nop
c10045b3:	c9                   	leave  
c10045b4:	c3                   	ret    

c10045b5 <cons_intr>:
c10045b5:	55                   	push   %ebp
c10045b6:	89 e5                	mov    %esp,%ebp
c10045b8:	83 ec 18             	sub    $0x18,%esp
c10045bb:	eb 3b                	jmp    c10045f8 <cons_intr+0x43>
c10045bd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10045c1:	74 35                	je     c10045f8 <cons_intr+0x43>
c10045c3:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c10045c8:	8d 50 01             	lea    0x1(%eax),%edx
c10045cb:	89 15 24 32 a1 c1    	mov    %edx,0xc1a13224
c10045d1:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10045d4:	88 90 20 30 a1 c1    	mov    %dl,-0x3e5ecfe0(%eax)
c10045da:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10045dd:	a2 6c ec 00 c1       	mov    %al,0xc100ec6c
c10045e2:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c10045e7:	3d 00 02 00 00       	cmp    $0x200,%eax
c10045ec:	75 0a                	jne    c10045f8 <cons_intr+0x43>
c10045ee:	c7 05 24 32 a1 c1 00 	movl   $0x0,0xc1a13224
c10045f5:	00 00 00 
c10045f8:	8b 45 08             	mov    0x8(%ebp),%eax
c10045fb:	ff d0                	call   *%eax
c10045fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004600:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c1004604:	75 b7                	jne    c10045bd <cons_intr+0x8>
c1004606:	90                   	nop
c1004607:	90                   	nop
c1004608:	c9                   	leave  
c1004609:	c3                   	ret    

c100460a <serial_proc_data>:
c100460a:	55                   	push   %ebp
c100460b:	89 e5                	mov    %esp,%ebp
c100460d:	83 ec 18             	sub    $0x18,%esp
c1004610:	83 ec 0c             	sub    $0xc,%esp
c1004613:	68 fd 03 00 00       	push   $0x3fd
c1004618:	e8 e3 b9 ff ff       	call   c1000000 <inb>
c100461d:	83 c4 10             	add    $0x10,%esp
c1004620:	0f b6 c0             	movzbl %al,%eax
c1004623:	83 e0 01             	and    $0x1,%eax
c1004626:	85 c0                	test   %eax,%eax
c1004628:	75 07                	jne    c1004631 <serial_proc_data+0x27>
c100462a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100462f:	eb 26                	jmp    c1004657 <serial_proc_data+0x4d>
c1004631:	83 ec 0c             	sub    $0xc,%esp
c1004634:	68 f8 03 00 00       	push   $0x3f8
c1004639:	e8 c2 b9 ff ff       	call   c1000000 <inb>
c100463e:	83 c4 10             	add    $0x10,%esp
c1004641:	0f b6 c0             	movzbl %al,%eax
c1004644:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004647:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
c100464b:	75 07                	jne    c1004654 <serial_proc_data+0x4a>
c100464d:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
c1004654:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004657:	c9                   	leave  
c1004658:	c3                   	ret    

c1004659 <serial_intr>:
c1004659:	55                   	push   %ebp
c100465a:	89 e5                	mov    %esp,%ebp
c100465c:	83 ec 08             	sub    $0x8,%esp
c100465f:	0f b6 05 ae 0c 01 c1 	movzbl 0xc1010cae,%eax
c1004666:	84 c0                	test   %al,%al
c1004668:	74 10                	je     c100467a <serial_intr+0x21>
c100466a:	83 ec 0c             	sub    $0xc,%esp
c100466d:	68 0a 46 00 c1       	push   $0xc100460a
c1004672:	e8 3e ff ff ff       	call   c10045b5 <cons_intr>
c1004677:	83 c4 10             	add    $0x10,%esp
c100467a:	90                   	nop
c100467b:	c9                   	leave  
c100467c:	c3                   	ret    

c100467d <serial_putc_sub>:
c100467d:	55                   	push   %ebp
c100467e:	89 e5                	mov    %esp,%ebp
c1004680:	83 ec 18             	sub    $0x18,%esp
c1004683:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100468a:	eb 09                	jmp    c1004695 <serial_putc_sub+0x18>
c100468c:	e8 36 fd ff ff       	call   c10043c7 <delay>
c1004691:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004695:	83 ec 0c             	sub    $0xc,%esp
c1004698:	68 fd 03 00 00       	push   $0x3fd
c100469d:	e8 5e b9 ff ff       	call   c1000000 <inb>
c10046a2:	83 c4 10             	add    $0x10,%esp
c10046a5:	0f b6 c0             	movzbl %al,%eax
c10046a8:	83 e0 20             	and    $0x20,%eax
c10046ab:	85 c0                	test   %eax,%eax
c10046ad:	75 09                	jne    c10046b8 <serial_putc_sub+0x3b>
c10046af:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c10046b6:	7e d4                	jle    c100468c <serial_putc_sub+0xf>
c10046b8:	8b 45 08             	mov    0x8(%ebp),%eax
c10046bb:	0f b6 c0             	movzbl %al,%eax
c10046be:	83 ec 08             	sub    $0x8,%esp
c10046c1:	50                   	push   %eax
c10046c2:	68 f8 03 00 00       	push   $0x3f8
c10046c7:	e8 70 b9 ff ff       	call   c100003c <outb>
c10046cc:	83 c4 10             	add    $0x10,%esp
c10046cf:	90                   	nop
c10046d0:	c9                   	leave  
c10046d1:	c3                   	ret    

c10046d2 <serial_putc>:
c10046d2:	55                   	push   %ebp
c10046d3:	89 e5                	mov    %esp,%ebp
c10046d5:	83 ec 08             	sub    $0x8,%esp
c10046d8:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c10046dc:	74 10                	je     c10046ee <serial_putc+0x1c>
c10046de:	83 ec 0c             	sub    $0xc,%esp
c10046e1:	ff 75 08             	pushl  0x8(%ebp)
c10046e4:	e8 94 ff ff ff       	call   c100467d <serial_putc_sub>
c10046e9:	83 c4 10             	add    $0x10,%esp
c10046ec:	eb 27                	jmp    c1004715 <serial_putc+0x43>
c10046ee:	83 ec 0c             	sub    $0xc,%esp
c10046f1:	6a 08                	push   $0x8
c10046f3:	e8 85 ff ff ff       	call   c100467d <serial_putc_sub>
c10046f8:	83 c4 10             	add    $0x10,%esp
c10046fb:	83 ec 0c             	sub    $0xc,%esp
c10046fe:	6a 20                	push   $0x20
c1004700:	e8 78 ff ff ff       	call   c100467d <serial_putc_sub>
c1004705:	83 c4 10             	add    $0x10,%esp
c1004708:	83 ec 0c             	sub    $0xc,%esp
c100470b:	6a 08                	push   $0x8
c100470d:	e8 6b ff ff ff       	call   c100467d <serial_putc_sub>
c1004712:	83 c4 10             	add    $0x10,%esp
c1004715:	90                   	nop
c1004716:	c9                   	leave  
c1004717:	c3                   	ret    

c1004718 <timer_init>:
c1004718:	55                   	push   %ebp
c1004719:	89 e5                	mov    %esp,%ebp
c100471b:	83 ec 18             	sub    $0x18,%esp
c100471e:	b8 dc 34 12 00       	mov    $0x1234dc,%eax
c1004723:	ba 00 00 00 00       	mov    $0x0,%edx
c1004728:	f7 75 08             	divl   0x8(%ebp)
c100472b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100472e:	83 ec 08             	sub    $0x8,%esp
c1004731:	6a 36                	push   $0x36
c1004733:	6a 43                	push   $0x43
c1004735:	e8 02 b9 ff ff       	call   c100003c <outb>
c100473a:	83 c4 10             	add    $0x10,%esp
c100473d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004740:	88 45 f3             	mov    %al,-0xd(%ebp)
c1004743:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004746:	c1 e8 08             	shr    $0x8,%eax
c1004749:	88 45 f2             	mov    %al,-0xe(%ebp)
c100474c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1004750:	83 ec 08             	sub    $0x8,%esp
c1004753:	50                   	push   %eax
c1004754:	6a 40                	push   $0x40
c1004756:	e8 e1 b8 ff ff       	call   c100003c <outb>
c100475b:	83 c4 10             	add    $0x10,%esp
c100475e:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
c1004762:	83 ec 08             	sub    $0x8,%esp
c1004765:	50                   	push   %eax
c1004766:	6a 40                	push   $0x40
c1004768:	e8 cf b8 ff ff       	call   c100003c <outb>
c100476d:	83 c4 10             	add    $0x10,%esp
c1004770:	c7 05 2c 32 a1 c1 00 	movl   $0x0,0xc1a1322c
c1004777:	00 00 00 
c100477a:	c7 05 28 32 a1 c1 00 	movl   $0x0,0xc1a13228
c1004781:	00 00 00 
c1004784:	83 ec 0c             	sub    $0xc,%esp
c1004787:	6a 00                	push   $0x0
c1004789:	e8 e6 fa ff ff       	call   c1004274 <pic_enable>
c100478e:	83 c4 10             	add    $0x10,%esp
c1004791:	90                   	nop
c1004792:	c9                   	leave  
c1004793:	c3                   	ret    

c1004794 <print_cursor>:
c1004794:	55                   	push   %ebp
c1004795:	89 e5                	mov    %esp,%ebp
c1004797:	83 ec 28             	sub    $0x28,%esp
c100479a:	8b 55 08             	mov    0x8(%ebp),%edx
c100479d:	8b 45 0c             	mov    0xc(%ebp),%eax
c10047a0:	88 55 e4             	mov    %dl,-0x1c(%ebp)
c10047a3:	88 45 e0             	mov    %al,-0x20(%ebp)
c10047a6:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
c10047aa:	89 d0                	mov    %edx,%eax
c10047ac:	c1 e0 02             	shl    $0x2,%eax
c10047af:	01 d0                	add    %edx,%eax
c10047b1:	c1 e0 04             	shl    $0x4,%eax
c10047b4:	89 c2                	mov    %eax,%edx
c10047b6:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c10047ba:	01 d0                	add    %edx,%eax
c10047bc:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10047c0:	83 ec 08             	sub    $0x8,%esp
c10047c3:	6a 0e                	push   $0xe
c10047c5:	68 d4 03 00 00       	push   $0x3d4
c10047ca:	e8 6d b8 ff ff       	call   c100003c <outb>
c10047cf:	83 c4 10             	add    $0x10,%esp
c10047d2:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10047d6:	66 c1 e8 08          	shr    $0x8,%ax
c10047da:	0f b6 c0             	movzbl %al,%eax
c10047dd:	83 ec 08             	sub    $0x8,%esp
c10047e0:	50                   	push   %eax
c10047e1:	68 d5 03 00 00       	push   $0x3d5
c10047e6:	e8 51 b8 ff ff       	call   c100003c <outb>
c10047eb:	83 c4 10             	add    $0x10,%esp
c10047ee:	83 ec 08             	sub    $0x8,%esp
c10047f1:	6a 0f                	push   $0xf
c10047f3:	68 d4 03 00 00       	push   $0x3d4
c10047f8:	e8 3f b8 ff ff       	call   c100003c <outb>
c10047fd:	83 c4 10             	add    $0x10,%esp
c1004800:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004804:	0f b6 c0             	movzbl %al,%eax
c1004807:	83 ec 08             	sub    $0x8,%esp
c100480a:	50                   	push   %eax
c100480b:	68 d5 03 00 00       	push   $0x3d5
c1004810:	e8 27 b8 ff ff       	call   c100003c <outb>
c1004815:	83 c4 10             	add    $0x10,%esp
c1004818:	90                   	nop
c1004819:	c9                   	leave  
c100481a:	c3                   	ret    

c100481b <clear>:
c100481b:	55                   	push   %ebp
c100481c:	89 e5                	mov    %esp,%ebp
c100481e:	83 ec 18             	sub    $0x18,%esp
c1004821:	66 c7 45 f4 00 0f    	movw   $0xf00,-0xc(%ebp)
c1004827:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c100482b:	83 c8 20             	or     $0x20,%eax
c100482e:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1004832:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1004838:	eb 1f                	jmp    c1004859 <clear+0x3e>
c100483a:	a1 28 db 00 c1       	mov    0xc100db28,%eax
c100483f:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
c1004843:	01 d2                	add    %edx,%edx
c1004845:	01 c2                	add    %eax,%edx
c1004847:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c100484b:	66 89 02             	mov    %ax,(%edx)
c100484e:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004852:	83 c0 01             	add    $0x1,%eax
c1004855:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c1004859:	66 81 7d f6 cf 07    	cmpw   $0x7cf,-0xa(%ebp)
c100485f:	76 d9                	jbe    c100483a <clear+0x1f>
c1004861:	c6 05 af 0c 01 c1 00 	movb   $0x0,0xc1010caf
c1004868:	c6 05 b0 0c 01 c1 00 	movb   $0x0,0xc1010cb0
c100486f:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004876:	0f b6 d0             	movzbl %al,%edx
c1004879:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004880:	0f b6 c0             	movzbl %al,%eax
c1004883:	83 ec 08             	sub    $0x8,%esp
c1004886:	52                   	push   %edx
c1004887:	50                   	push   %eax
c1004888:	e8 07 ff ff ff       	call   c1004794 <print_cursor>
c100488d:	83 c4 10             	add    $0x10,%esp
c1004890:	90                   	nop
c1004891:	c9                   	leave  
c1004892:	c3                   	ret    

c1004893 <print_char>:
c1004893:	55                   	push   %ebp
c1004894:	89 e5                	mov    %esp,%ebp
c1004896:	83 ec 28             	sub    $0x28,%esp
c1004899:	8b 45 08             	mov    0x8(%ebp),%eax
c100489c:	88 45 e4             	mov    %al,-0x1c(%ebp)
c100489f:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c10048a5:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c10048ab:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c10048b2:	3c 18                	cmp    $0x18,%al
c10048b4:	76 05                	jbe    c10048bb <print_char+0x28>
c10048b6:	e8 60 ff ff ff       	call   c100481b <clear>
c10048bb:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c10048c2:	0f b6 d0             	movzbl %al,%edx
c10048c5:	89 d0                	mov    %edx,%eax
c10048c7:	c1 e0 02             	shl    $0x2,%eax
c10048ca:	01 d0                	add    %edx,%eax
c10048cc:	c1 e0 04             	shl    $0x4,%eax
c10048cf:	89 c2                	mov    %eax,%edx
c10048d1:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c10048d8:	0f b6 c0             	movzbl %al,%eax
c10048db:	01 d0                	add    %edx,%eax
c10048dd:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c10048e1:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
c10048e5:	83 f8 09             	cmp    $0x9,%eax
c10048e8:	74 20                	je     c100490a <print_char+0x77>
c10048ea:	83 f8 0a             	cmp    $0xa,%eax
c10048ed:	75 2f                	jne    c100491e <print_char+0x8b>
c10048ef:	c6 05 b0 0c 01 c1 00 	movb   $0x0,0xc1010cb0
c10048f6:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c10048fd:	83 c0 01             	add    $0x1,%eax
c1004900:	a2 af 0c 01 c1       	mov    %al,0xc1010caf
c1004905:	e9 82 00 00 00       	jmp    c100498c <print_char+0xf9>
c100490a:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004911:	83 c0 08             	add    $0x8,%eax
c1004914:	83 e0 f8             	and    $0xfffffff8,%eax
c1004917:	a2 b0 0c 01 c1       	mov    %al,0xc1010cb0
c100491c:	eb 6e                	jmp    c100498c <print_char+0xf9>
c100491e:	66 0f be 45 e4       	movsbw -0x1c(%ebp),%ax
c1004923:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
c1004927:	8b 45 0c             	mov    0xc(%ebp),%eax
c100492a:	c1 e0 04             	shl    $0x4,%eax
c100492d:	0f b6 c0             	movzbl %al,%eax
c1004930:	8b 55 10             	mov    0x10(%ebp),%edx
c1004933:	83 e2 0f             	and    $0xf,%edx
c1004936:	09 d0                	or     %edx,%eax
c1004938:	c1 e0 08             	shl    $0x8,%eax
c100493b:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c100493f:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004943:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c1004947:	a1 28 db 00 c1       	mov    0xc100db28,%eax
c100494c:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c1004950:	01 d2                	add    %edx,%edx
c1004952:	01 c2                	add    %eax,%edx
c1004954:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1004958:	66 89 02             	mov    %ax,(%edx)
c100495b:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004962:	83 c0 01             	add    $0x1,%eax
c1004965:	a2 b0 0c 01 c1       	mov    %al,0xc1010cb0
c100496a:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004971:	3c 4f                	cmp    $0x4f,%al
c1004973:	76 16                	jbe    c100498b <print_char+0xf8>
c1004975:	c6 05 b0 0c 01 c1 00 	movb   $0x0,0xc1010cb0
c100497c:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004983:	83 c0 01             	add    $0x1,%eax
c1004986:	a2 af 0c 01 c1       	mov    %al,0xc1010caf
c100498b:	90                   	nop
c100498c:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004993:	0f b6 d0             	movzbl %al,%edx
c1004996:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c100499d:	0f b6 c0             	movzbl %al,%eax
c10049a0:	83 ec 08             	sub    $0x8,%esp
c10049a3:	52                   	push   %edx
c10049a4:	50                   	push   %eax
c10049a5:	e8 ea fd ff ff       	call   c1004794 <print_cursor>
c10049aa:	83 c4 10             	add    $0x10,%esp
c10049ad:	90                   	nop
c10049ae:	c9                   	leave  
c10049af:	c3                   	ret    

c10049b0 <print_string>:
c10049b0:	55                   	push   %ebp
c10049b1:	89 e5                	mov    %esp,%ebp
c10049b3:	83 ec 08             	sub    $0x8,%esp
c10049b6:	eb 21                	jmp    c10049d9 <print_string+0x29>
c10049b8:	8b 45 08             	mov    0x8(%ebp),%eax
c10049bb:	8d 50 01             	lea    0x1(%eax),%edx
c10049be:	89 55 08             	mov    %edx,0x8(%ebp)
c10049c1:	0f b6 00             	movzbl (%eax),%eax
c10049c4:	0f be c0             	movsbl %al,%eax
c10049c7:	83 ec 04             	sub    $0x4,%esp
c10049ca:	ff 75 10             	pushl  0x10(%ebp)
c10049cd:	ff 75 0c             	pushl  0xc(%ebp)
c10049d0:	50                   	push   %eax
c10049d1:	e8 bd fe ff ff       	call   c1004893 <print_char>
c10049d6:	83 c4 10             	add    $0x10,%esp
c10049d9:	8b 45 08             	mov    0x8(%ebp),%eax
c10049dc:	0f b6 00             	movzbl (%eax),%eax
c10049df:	84 c0                	test   %al,%al
c10049e1:	75 d5                	jne    c10049b8 <print_string+0x8>
c10049e3:	90                   	nop
c10049e4:	90                   	nop
c10049e5:	c9                   	leave  
c10049e6:	c3                   	ret    

c10049e7 <print_num>:
c10049e7:	55                   	push   %ebp
c10049e8:	89 e5                	mov    %esp,%ebp
c10049ea:	83 ec 48             	sub    $0x48,%esp
c10049ed:	8b 4d 18             	mov    0x18(%ebp),%ecx
c10049f0:	8b 55 1c             	mov    0x1c(%ebp),%edx
c10049f3:	8b 45 08             	mov    0x8(%ebp),%eax
c10049f6:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10049f9:	8b 45 0c             	mov    0xc(%ebp),%eax
c10049fc:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c10049ff:	89 c8                	mov    %ecx,%eax
c1004a01:	88 45 bc             	mov    %al,-0x44(%ebp)
c1004a04:	89 d0                	mov    %edx,%eax
c1004a06:	88 45 b8             	mov    %al,-0x48(%ebp)
c1004a09:	0f be 45 b8          	movsbl -0x48(%ebp),%eax
c1004a0d:	c6 44 05 c8 00       	movb   $0x0,-0x38(%ebp,%eax,1)
c1004a12:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
c1004a16:	83 e8 01             	sub    $0x1,%eax
c1004a19:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004a1c:	e9 c0 00 00 00       	jmp    c1004ae1 <print_num+0xfa>
c1004a21:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
c1004a25:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1004a28:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1004a2b:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c1004a2e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004a31:	89 55 ec             	mov    %edx,-0x14(%ebp)
c1004a34:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a37:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004a3a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1004a3e:	74 1c                	je     c1004a5c <print_num+0x75>
c1004a40:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a43:	ba 00 00 00 00       	mov    $0x0,%edx
c1004a48:	f7 75 e4             	divl   -0x1c(%ebp)
c1004a4b:	89 55 f0             	mov    %edx,-0x10(%ebp)
c1004a4e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a51:	ba 00 00 00 00       	mov    $0x0,%edx
c1004a56:	f7 75 e4             	divl   -0x1c(%ebp)
c1004a59:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004a5c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004a5f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004a62:	f7 75 e4             	divl   -0x1c(%ebp)
c1004a65:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004a68:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1004a6b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004a6e:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1004a71:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1004a74:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c1004a77:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1004a7a:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004a7e:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1004a82:	80 7d bc 0a          	cmpb   $0xa,-0x44(%ebp)
c1004a86:	75 16                	jne    c1004a9e <print_num+0xb7>
c1004a88:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004a8c:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004a91:	8d 50 30             	lea    0x30(%eax),%edx
c1004a94:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004a98:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1004a9c:	eb 39                	jmp    c1004ad7 <print_num+0xf0>
c1004a9e:	80 7d bc 10          	cmpb   $0x10,-0x44(%ebp)
c1004aa2:	75 33                	jne    c1004ad7 <print_num+0xf0>
c1004aa4:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004aa8:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004aad:	3c 09                	cmp    $0x9,%al
c1004aaf:	7e 10                	jle    c1004ac1 <print_num+0xda>
c1004ab1:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004ab5:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004aba:	83 c0 37             	add    $0x37,%eax
c1004abd:	89 c2                	mov    %eax,%edx
c1004abf:	eb 0e                	jmp    c1004acf <print_num+0xe8>
c1004ac1:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004ac5:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004aca:	83 c0 30             	add    $0x30,%eax
c1004acd:	89 c2                	mov    %eax,%edx
c1004acf:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004ad3:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1004ad7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004adb:	83 e8 01             	sub    $0x1,%eax
c1004ade:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004ae1:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
c1004ae5:	0f 89 36 ff ff ff    	jns    c1004a21 <print_num+0x3a>
c1004aeb:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
c1004aef:	75 5e                	jne    c1004b4f <print_num+0x168>
c1004af1:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1004af8:	90                   	nop
c1004af9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004afc:	8d 50 01             	lea    0x1(%eax),%edx
c1004aff:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1004b02:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004b07:	3c 30                	cmp    $0x30,%al
c1004b09:	74 ee                	je     c1004af9 <print_num+0x112>
c1004b0b:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c1004b0f:	8d 55 c8             	lea    -0x38(%ebp),%edx
c1004b12:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004b15:	01 d0                	add    %edx,%eax
c1004b17:	0f b6 00             	movzbl (%eax),%eax
c1004b1a:	84 c0                	test   %al,%al
c1004b1c:	74 1c                	je     c1004b3a <print_num+0x153>
c1004b1e:	8d 55 c8             	lea    -0x38(%ebp),%edx
c1004b21:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004b24:	01 d0                	add    %edx,%eax
c1004b26:	83 ec 04             	sub    $0x4,%esp
c1004b29:	ff 75 14             	pushl  0x14(%ebp)
c1004b2c:	ff 75 10             	pushl  0x10(%ebp)
c1004b2f:	50                   	push   %eax
c1004b30:	e8 7b fe ff ff       	call   c10049b0 <print_string>
c1004b35:	83 c4 10             	add    $0x10,%esp
c1004b38:	eb 2a                	jmp    c1004b64 <print_num+0x17d>
c1004b3a:	83 ec 04             	sub    $0x4,%esp
c1004b3d:	ff 75 14             	pushl  0x14(%ebp)
c1004b40:	ff 75 10             	pushl  0x10(%ebp)
c1004b43:	6a 30                	push   $0x30
c1004b45:	e8 49 fd ff ff       	call   c1004893 <print_char>
c1004b4a:	83 c4 10             	add    $0x10,%esp
c1004b4d:	eb 15                	jmp    c1004b64 <print_num+0x17d>
c1004b4f:	83 ec 04             	sub    $0x4,%esp
c1004b52:	ff 75 14             	pushl  0x14(%ebp)
c1004b55:	ff 75 10             	pushl  0x10(%ebp)
c1004b58:	8d 45 c8             	lea    -0x38(%ebp),%eax
c1004b5b:	50                   	push   %eax
c1004b5c:	e8 4f fe ff ff       	call   c10049b0 <print_string>
c1004b61:	83 c4 10             	add    $0x10,%esp
c1004b64:	c9                   	leave  
c1004b65:	c3                   	ret    

c1004b66 <backtrace>:
c1004b66:	55                   	push   %ebp
c1004b67:	89 e5                	mov    %esp,%ebp
c1004b69:	83 ec 18             	sub    $0x18,%esp
c1004b6c:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004b73:	3c 15                	cmp    $0x15,%al
c1004b75:	0f 86 9a 00 00 00    	jbe    c1004c15 <backtrace+0xaf>
c1004b7b:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004b82:	83 e8 01             	sub    $0x1,%eax
c1004b85:	a2 b0 0c 01 c1       	mov    %al,0xc1010cb0
c1004b8a:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1004b90:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c1004b96:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004b9d:	3c 18                	cmp    $0x18,%al
c1004b9f:	76 05                	jbe    c1004ba6 <backtrace+0x40>
c1004ba1:	e8 75 fc ff ff       	call   c100481b <clear>
c1004ba6:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004bad:	0f b6 d0             	movzbl %al,%edx
c1004bb0:	89 d0                	mov    %edx,%eax
c1004bb2:	c1 e0 02             	shl    $0x2,%eax
c1004bb5:	01 d0                	add    %edx,%eax
c1004bb7:	c1 e0 04             	shl    $0x4,%eax
c1004bba:	89 c2                	mov    %eax,%edx
c1004bbc:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004bc3:	0f b6 c0             	movzbl %al,%eax
c1004bc6:	01 d0                	add    %edx,%eax
c1004bc8:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1004bcc:	66 c7 45 f4 20 00    	movw   $0x20,-0xc(%ebp)
c1004bd2:	66 c7 45 f6 00 02    	movw   $0x200,-0xa(%ebp)
c1004bd8:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004bdc:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c1004be0:	a1 28 db 00 c1       	mov    0xc100db28,%eax
c1004be5:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c1004be9:	01 d2                	add    %edx,%edx
c1004beb:	01 c2                	add    %eax,%edx
c1004bed:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1004bf1:	66 89 02             	mov    %ax,(%edx)
c1004bf4:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004bfb:	0f b6 d0             	movzbl %al,%edx
c1004bfe:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004c05:	0f b6 c0             	movzbl %al,%eax
c1004c08:	83 ec 08             	sub    $0x8,%esp
c1004c0b:	52                   	push   %edx
c1004c0c:	50                   	push   %eax
c1004c0d:	e8 82 fb ff ff       	call   c1004794 <print_cursor>
c1004c12:	83 c4 10             	add    $0x10,%esp
c1004c15:	90                   	nop
c1004c16:	c9                   	leave  
c1004c17:	c3                   	ret    

c1004c18 <printk>:
c1004c18:	55                   	push   %ebp
c1004c19:	89 e5                	mov    %esp,%ebp
c1004c1b:	83 ec 38             	sub    $0x38,%esp
c1004c1e:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c1004c22:	8d 45 0c             	lea    0xc(%ebp),%eax
c1004c25:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004c28:	e9 6e 03 00 00       	jmp    c1004f9b <printk+0x383>
c1004c2d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c30:	0f b6 00             	movzbl (%eax),%eax
c1004c33:	3c 25                	cmp    $0x25,%al
c1004c35:	0f 85 3a 03 00 00    	jne    c1004f75 <printk+0x35d>
c1004c3b:	90                   	nop
c1004c3c:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c3f:	83 c0 01             	add    $0x1,%eax
c1004c42:	89 45 08             	mov    %eax,0x8(%ebp)
c1004c45:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c48:	0f b6 00             	movzbl (%eax),%eax
c1004c4b:	0f be c0             	movsbl %al,%eax
c1004c4e:	83 e8 30             	sub    $0x30,%eax
c1004c51:	83 f8 48             	cmp    $0x48,%eax
c1004c54:	0f 87 fb 02 00 00    	ja     c1004f55 <printk+0x33d>
c1004c5a:	8b 04 85 64 a7 00 c1 	mov    -0x3eff589c(,%eax,4),%eax
c1004c61:	ff e0                	jmp    *%eax
c1004c63:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004c67:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004c6a:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
c1004c6e:	88 45 d7             	mov    %al,-0x29(%ebp)
c1004c71:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
c1004c75:	83 ec 04             	sub    $0x4,%esp
c1004c78:	6a 02                	push   $0x2
c1004c7a:	6a 00                	push   $0x0
c1004c7c:	50                   	push   %eax
c1004c7d:	e8 11 fc ff ff       	call   c1004893 <print_char>
c1004c82:	83 c4 10             	add    $0x10,%esp
c1004c85:	e9 e0 02 00 00       	jmp    c1004f6a <printk+0x352>
c1004c8a:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004c8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004c91:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004c94:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1004c97:	83 ec 04             	sub    $0x4,%esp
c1004c9a:	6a 02                	push   $0x2
c1004c9c:	6a 00                	push   $0x0
c1004c9e:	ff 75 dc             	pushl  -0x24(%ebp)
c1004ca1:	e8 0a fd ff ff       	call   c10049b0 <print_string>
c1004ca6:	83 c4 10             	add    $0x10,%esp
c1004ca9:	e9 bc 02 00 00       	jmp    c1004f6a <printk+0x352>
c1004cae:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004cb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004cb5:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004cb8:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004cbb:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004cbf:	74 23                	je     c1004ce4 <printk+0xcc>
c1004cc1:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004cc5:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004cc8:	99                   	cltd   
c1004cc9:	83 ec 04             	sub    $0x4,%esp
c1004ccc:	6a 01                	push   $0x1
c1004cce:	51                   	push   %ecx
c1004ccf:	6a 0a                	push   $0xa
c1004cd1:	6a 02                	push   $0x2
c1004cd3:	6a 00                	push   $0x0
c1004cd5:	52                   	push   %edx
c1004cd6:	50                   	push   %eax
c1004cd7:	e8 0b fd ff ff       	call   c10049e7 <print_num>
c1004cdc:	83 c4 20             	add    $0x20,%esp
c1004cdf:	e9 86 02 00 00       	jmp    c1004f6a <printk+0x352>
c1004ce4:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004ce7:	99                   	cltd   
c1004ce8:	83 ec 04             	sub    $0x4,%esp
c1004ceb:	6a 00                	push   $0x0
c1004ced:	6a 14                	push   $0x14
c1004cef:	6a 0a                	push   $0xa
c1004cf1:	6a 02                	push   $0x2
c1004cf3:	6a 00                	push   $0x0
c1004cf5:	52                   	push   %edx
c1004cf6:	50                   	push   %eax
c1004cf7:	e8 eb fc ff ff       	call   c10049e7 <print_num>
c1004cfc:	83 c4 20             	add    $0x20,%esp
c1004cff:	e9 66 02 00 00       	jmp    c1004f6a <printk+0x352>
c1004d04:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004d08:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004d0b:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004d0e:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1004d11:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004d15:	74 23                	je     c1004d3a <printk+0x122>
c1004d17:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004d1b:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1004d1e:	99                   	cltd   
c1004d1f:	83 ec 04             	sub    $0x4,%esp
c1004d22:	6a 01                	push   $0x1
c1004d24:	51                   	push   %ecx
c1004d25:	6a 10                	push   $0x10
c1004d27:	6a 02                	push   $0x2
c1004d29:	6a 00                	push   $0x0
c1004d2b:	52                   	push   %edx
c1004d2c:	50                   	push   %eax
c1004d2d:	e8 b5 fc ff ff       	call   c10049e7 <print_num>
c1004d32:	83 c4 20             	add    $0x20,%esp
c1004d35:	e9 30 02 00 00       	jmp    c1004f6a <printk+0x352>
c1004d3a:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1004d3d:	99                   	cltd   
c1004d3e:	83 ec 04             	sub    $0x4,%esp
c1004d41:	6a 00                	push   $0x0
c1004d43:	6a 14                	push   $0x14
c1004d45:	6a 10                	push   $0x10
c1004d47:	6a 02                	push   $0x2
c1004d49:	6a 00                	push   $0x0
c1004d4b:	52                   	push   %edx
c1004d4c:	50                   	push   %eax
c1004d4d:	e8 95 fc ff ff       	call   c10049e7 <print_num>
c1004d52:	83 c4 20             	add    $0x20,%esp
c1004d55:	e9 10 02 00 00       	jmp    c1004f6a <printk+0x352>
c1004d5a:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1004d5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004d61:	8b 50 fc             	mov    -0x4(%eax),%edx
c1004d64:	8b 40 f8             	mov    -0x8(%eax),%eax
c1004d67:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1004d6a:	89 55 cc             	mov    %edx,-0x34(%ebp)
c1004d6d:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004d71:	74 25                	je     c1004d98 <printk+0x180>
c1004d73:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004d77:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004d7a:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1004d7d:	83 ec 04             	sub    $0x4,%esp
c1004d80:	6a 01                	push   $0x1
c1004d82:	51                   	push   %ecx
c1004d83:	6a 10                	push   $0x10
c1004d85:	6a 02                	push   $0x2
c1004d87:	6a 00                	push   $0x0
c1004d89:	52                   	push   %edx
c1004d8a:	50                   	push   %eax
c1004d8b:	e8 57 fc ff ff       	call   c10049e7 <print_num>
c1004d90:	83 c4 20             	add    $0x20,%esp
c1004d93:	e9 d2 01 00 00       	jmp    c1004f6a <printk+0x352>
c1004d98:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004d9b:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1004d9e:	83 ec 04             	sub    $0x4,%esp
c1004da1:	6a 00                	push   $0x0
c1004da3:	6a 14                	push   $0x14
c1004da5:	6a 10                	push   $0x10
c1004da7:	6a 02                	push   $0x2
c1004da9:	6a 00                	push   $0x0
c1004dab:	52                   	push   %edx
c1004dac:	50                   	push   %eax
c1004dad:	e8 35 fc ff ff       	call   c10049e7 <print_num>
c1004db2:	83 c4 20             	add    $0x20,%esp
c1004db5:	e9 b0 01 00 00       	jmp    c1004f6a <printk+0x352>
c1004dba:	8b 45 08             	mov    0x8(%ebp),%eax
c1004dbd:	83 c0 01             	add    $0x1,%eax
c1004dc0:	89 45 08             	mov    %eax,0x8(%ebp)
c1004dc3:	8b 45 08             	mov    0x8(%ebp),%eax
c1004dc6:	0f b6 00             	movzbl (%eax),%eax
c1004dc9:	0f be c0             	movsbl %al,%eax
c1004dcc:	83 f8 78             	cmp    $0x78,%eax
c1004dcf:	0f 84 9a 00 00 00    	je     c1004e6f <printk+0x257>
c1004dd5:	83 f8 78             	cmp    $0x78,%eax
c1004dd8:	0f 8f 3f 01 00 00    	jg     c1004f1d <printk+0x305>
c1004dde:	83 f8 6c             	cmp    $0x6c,%eax
c1004de1:	0f 84 e0 00 00 00    	je     c1004ec7 <printk+0x2af>
c1004de7:	83 f8 6c             	cmp    $0x6c,%eax
c1004dea:	0f 8f 2d 01 00 00    	jg     c1004f1d <printk+0x305>
c1004df0:	83 f8 64             	cmp    $0x64,%eax
c1004df3:	74 1c                	je     c1004e11 <printk+0x1f9>
c1004df5:	83 f8 64             	cmp    $0x64,%eax
c1004df8:	0f 8f 1f 01 00 00    	jg     c1004f1d <printk+0x305>
c1004dfe:	83 f8 4c             	cmp    $0x4c,%eax
c1004e01:	0f 84 c0 00 00 00    	je     c1004ec7 <printk+0x2af>
c1004e07:	83 f8 58             	cmp    $0x58,%eax
c1004e0a:	74 63                	je     c1004e6f <printk+0x257>
c1004e0c:	e9 0c 01 00 00       	jmp    c1004f1d <printk+0x305>
c1004e11:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004e15:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004e18:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004e1b:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004e1e:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004e22:	74 27                	je     c1004e4b <printk+0x233>
c1004e24:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004e28:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004e2b:	ba 00 00 00 00       	mov    $0x0,%edx
c1004e30:	83 ec 04             	sub    $0x4,%esp
c1004e33:	6a 01                	push   $0x1
c1004e35:	51                   	push   %ecx
c1004e36:	6a 0a                	push   $0xa
c1004e38:	6a 02                	push   $0x2
c1004e3a:	6a 00                	push   $0x0
c1004e3c:	52                   	push   %edx
c1004e3d:	50                   	push   %eax
c1004e3e:	e8 a4 fb ff ff       	call   c10049e7 <print_num>
c1004e43:	83 c4 20             	add    $0x20,%esp
c1004e46:	e9 d3 00 00 00       	jmp    c1004f1e <printk+0x306>
c1004e4b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004e4e:	ba 00 00 00 00       	mov    $0x0,%edx
c1004e53:	83 ec 04             	sub    $0x4,%esp
c1004e56:	6a 00                	push   $0x0
c1004e58:	6a 14                	push   $0x14
c1004e5a:	6a 0a                	push   $0xa
c1004e5c:	6a 02                	push   $0x2
c1004e5e:	6a 00                	push   $0x0
c1004e60:	52                   	push   %edx
c1004e61:	50                   	push   %eax
c1004e62:	e8 80 fb ff ff       	call   c10049e7 <print_num>
c1004e67:	83 c4 20             	add    $0x20,%esp
c1004e6a:	e9 af 00 00 00       	jmp    c1004f1e <printk+0x306>
c1004e6f:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1004e73:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004e76:	8b 40 fc             	mov    -0x4(%eax),%eax
c1004e79:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004e7c:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004e80:	74 24                	je     c1004ea6 <printk+0x28e>
c1004e82:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1004e86:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004e89:	ba 00 00 00 00       	mov    $0x0,%edx
c1004e8e:	83 ec 04             	sub    $0x4,%esp
c1004e91:	6a 01                	push   $0x1
c1004e93:	51                   	push   %ecx
c1004e94:	6a 10                	push   $0x10
c1004e96:	6a 02                	push   $0x2
c1004e98:	6a 00                	push   $0x0
c1004e9a:	52                   	push   %edx
c1004e9b:	50                   	push   %eax
c1004e9c:	e8 46 fb ff ff       	call   c10049e7 <print_num>
c1004ea1:	83 c4 20             	add    $0x20,%esp
c1004ea4:	eb 78                	jmp    c1004f1e <printk+0x306>
c1004ea6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004ea9:	ba 00 00 00 00       	mov    $0x0,%edx
c1004eae:	83 ec 04             	sub    $0x4,%esp
c1004eb1:	6a 00                	push   $0x0
c1004eb3:	6a 14                	push   $0x14
c1004eb5:	6a 10                	push   $0x10
c1004eb7:	6a 02                	push   $0x2
c1004eb9:	6a 00                	push   $0x0
c1004ebb:	52                   	push   %edx
c1004ebc:	50                   	push   %eax
c1004ebd:	e8 25 fb ff ff       	call   c10049e7 <print_num>
c1004ec2:	83 c4 20             	add    $0x20,%esp
c1004ec5:	eb 57                	jmp    c1004f1e <printk+0x306>
c1004ec7:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1004ecb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004ece:	8b 50 fc             	mov    -0x4(%eax),%edx
c1004ed1:	8b 40 f8             	mov    -0x8(%eax),%eax
c1004ed4:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004ed7:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1004eda:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1004ede:	74 20                	je     c1004f00 <printk+0x2e8>
c1004ee0:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c1004ee4:	83 ec 04             	sub    $0x4,%esp
c1004ee7:	6a 01                	push   $0x1
c1004ee9:	50                   	push   %eax
c1004eea:	6a 10                	push   $0x10
c1004eec:	6a 02                	push   $0x2
c1004eee:	6a 00                	push   $0x0
c1004ef0:	ff 75 e4             	pushl  -0x1c(%ebp)
c1004ef3:	ff 75 e0             	pushl  -0x20(%ebp)
c1004ef6:	e8 ec fa ff ff       	call   c10049e7 <print_num>
c1004efb:	83 c4 20             	add    $0x20,%esp
c1004efe:	eb 1e                	jmp    c1004f1e <printk+0x306>
c1004f00:	83 ec 04             	sub    $0x4,%esp
c1004f03:	6a 00                	push   $0x0
c1004f05:	6a 14                	push   $0x14
c1004f07:	6a 10                	push   $0x10
c1004f09:	6a 02                	push   $0x2
c1004f0b:	6a 00                	push   $0x0
c1004f0d:	ff 75 e4             	pushl  -0x1c(%ebp)
c1004f10:	ff 75 e0             	pushl  -0x20(%ebp)
c1004f13:	e8 cf fa ff ff       	call   c10049e7 <print_num>
c1004f18:	83 c4 20             	add    $0x20,%esp
c1004f1b:	eb 01                	jmp    c1004f1e <printk+0x306>
c1004f1d:	90                   	nop
c1004f1e:	eb 4a                	jmp    c1004f6a <printk+0x352>
c1004f20:	8b 45 08             	mov    0x8(%ebp),%eax
c1004f23:	0f b6 00             	movzbl (%eax),%eax
c1004f26:	0f be c0             	movsbl %al,%eax
c1004f29:	83 e8 30             	sub    $0x30,%eax
c1004f2c:	89 c2                	mov    %eax,%edx
c1004f2e:	89 d0                	mov    %edx,%eax
c1004f30:	c1 e0 02             	shl    $0x2,%eax
c1004f33:	01 d0                	add    %edx,%eax
c1004f35:	01 c0                	add    %eax,%eax
c1004f37:	89 c2                	mov    %eax,%edx
c1004f39:	8b 45 08             	mov    0x8(%ebp),%eax
c1004f3c:	83 c0 01             	add    $0x1,%eax
c1004f3f:	89 45 08             	mov    %eax,0x8(%ebp)
c1004f42:	8b 45 08             	mov    0x8(%ebp),%eax
c1004f45:	0f b6 00             	movzbl (%eax),%eax
c1004f48:	01 d0                	add    %edx,%eax
c1004f4a:	83 e8 30             	sub    $0x30,%eax
c1004f4d:	88 45 f3             	mov    %al,-0xd(%ebp)
c1004f50:	e9 e7 fc ff ff       	jmp    c1004c3c <printk+0x24>
c1004f55:	83 ec 04             	sub    $0x4,%esp
c1004f58:	6a 02                	push   $0x2
c1004f5a:	6a 00                	push   $0x0
c1004f5c:	68 44 a7 00 c1       	push   $0xc100a744
c1004f61:	e8 4a fa ff ff       	call   c10049b0 <print_string>
c1004f66:	83 c4 10             	add    $0x10,%esp
c1004f69:	90                   	nop
c1004f6a:	8b 45 08             	mov    0x8(%ebp),%eax
c1004f6d:	83 c0 01             	add    $0x1,%eax
c1004f70:	89 45 08             	mov    %eax,0x8(%ebp)
c1004f73:	eb 22                	jmp    c1004f97 <printk+0x37f>
c1004f75:	8b 45 08             	mov    0x8(%ebp),%eax
c1004f78:	0f b6 00             	movzbl (%eax),%eax
c1004f7b:	0f be c0             	movsbl %al,%eax
c1004f7e:	83 ec 04             	sub    $0x4,%esp
c1004f81:	6a 02                	push   $0x2
c1004f83:	6a 00                	push   $0x0
c1004f85:	50                   	push   %eax
c1004f86:	e8 08 f9 ff ff       	call   c1004893 <print_char>
c1004f8b:	83 c4 10             	add    $0x10,%esp
c1004f8e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004f91:	83 c0 01             	add    $0x1,%eax
c1004f94:	89 45 08             	mov    %eax,0x8(%ebp)
c1004f97:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c1004f9b:	8b 45 08             	mov    0x8(%ebp),%eax
c1004f9e:	0f b6 00             	movzbl (%eax),%eax
c1004fa1:	84 c0                	test   %al,%al
c1004fa3:	0f 85 84 fc ff ff    	jne    c1004c2d <printk+0x15>
c1004fa9:	90                   	nop
c1004faa:	90                   	nop
c1004fab:	c9                   	leave  
c1004fac:	c3                   	ret    

c1004fad <cons_putc>:
c1004fad:	55                   	push   %ebp
c1004fae:	89 e5                	mov    %esp,%ebp
c1004fb0:	83 ec 08             	sub    $0x8,%esp
c1004fb3:	83 ec 0c             	sub    $0xc,%esp
c1004fb6:	ff 75 08             	pushl  0x8(%ebp)
c1004fb9:	e8 b1 f5 ff ff       	call   c100456f <lpt_putc>
c1004fbe:	83 c4 10             	add    $0x10,%esp
c1004fc1:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1004fc5:	74 13                	je     c1004fda <cons_putc+0x2d>
c1004fc7:	83 ec 08             	sub    $0x8,%esp
c1004fca:	ff 75 08             	pushl  0x8(%ebp)
c1004fcd:	68 88 a8 00 c1       	push   $0xc100a888
c1004fd2:	e8 41 fc ff ff       	call   c1004c18 <printk>
c1004fd7:	83 c4 10             	add    $0x10,%esp
c1004fda:	83 ec 0c             	sub    $0xc,%esp
c1004fdd:	ff 75 08             	pushl  0x8(%ebp)
c1004fe0:	e8 ed f6 ff ff       	call   c10046d2 <serial_putc>
c1004fe5:	83 c4 10             	add    $0x10,%esp
c1004fe8:	90                   	nop
c1004fe9:	c9                   	leave  
c1004fea:	c3                   	ret    

c1004feb <cons_getc>:
c1004feb:	55                   	push   %ebp
c1004fec:	89 e5                	mov    %esp,%ebp
c1004fee:	83 ec 18             	sub    $0x18,%esp
c1004ff1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004ff8:	e8 5c f6 ff ff       	call   c1004659 <serial_intr>
c1004ffd:	e8 50 ce ff ff       	call   c1001e52 <kbd_intr>
c1005002:	8b 15 20 32 a1 c1    	mov    0xc1a13220,%edx
c1005008:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c100500d:	39 c2                	cmp    %eax,%edx
c100500f:	74 31                	je     c1005042 <cons_getc+0x57>
c1005011:	a1 20 32 a1 c1       	mov    0xc1a13220,%eax
c1005016:	8d 50 01             	lea    0x1(%eax),%edx
c1005019:	89 15 20 32 a1 c1    	mov    %edx,0xc1a13220
c100501f:	0f b6 80 20 30 a1 c1 	movzbl -0x3e5ecfe0(%eax),%eax
c1005026:	0f b6 c0             	movzbl %al,%eax
c1005029:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100502c:	a1 20 32 a1 c1       	mov    0xc1a13220,%eax
c1005031:	3d 00 02 00 00       	cmp    $0x200,%eax
c1005036:	75 0a                	jne    c1005042 <cons_getc+0x57>
c1005038:	c7 05 20 32 a1 c1 00 	movl   $0x0,0xc1a13220
c100503f:	00 00 00 
c1005042:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005045:	c9                   	leave  
c1005046:	c3                   	ret    

c1005047 <hash32>:
c1005047:	55                   	push   %ebp
c1005048:	89 e5                	mov    %esp,%ebp
c100504a:	83 ec 10             	sub    $0x10,%esp
c100504d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005050:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1005056:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005059:	b8 20 00 00 00       	mov    $0x20,%eax
c100505e:	2b 45 0c             	sub    0xc(%ebp),%eax
c1005061:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005064:	89 c1                	mov    %eax,%ecx
c1005066:	d3 ea                	shr    %cl,%edx
c1005068:	89 d0                	mov    %edx,%eax
c100506a:	c9                   	leave  
c100506b:	c3                   	ret    

c100506c <sema_init>:
c100506c:	55                   	push   %ebp
c100506d:	89 e5                	mov    %esp,%ebp
c100506f:	83 ec 14             	sub    $0x14,%esp
c1005072:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005075:	88 45 ec             	mov    %al,-0x14(%ebp)
c1005078:	8b 45 08             	mov    0x8(%ebp),%eax
c100507b:	0f b6 55 ec          	movzbl -0x14(%ebp),%edx
c100507f:	88 10                	mov    %dl,(%eax)
c1005081:	8b 45 08             	mov    0x8(%ebp),%eax
c1005084:	83 c0 04             	add    $0x4,%eax
c1005087:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100508a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100508d:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005090:	89 50 04             	mov    %edx,0x4(%eax)
c1005093:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005096:	8b 50 04             	mov    0x4(%eax),%edx
c1005099:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100509c:	89 10                	mov    %edx,(%eax)
c100509e:	90                   	nop
c100509f:	90                   	nop
c10050a0:	c9                   	leave  
c10050a1:	c3                   	ret    

c10050a2 <lock_init>:
c10050a2:	55                   	push   %ebp
c10050a3:	89 e5                	mov    %esp,%ebp
c10050a5:	8b 45 08             	mov    0x8(%ebp),%eax
c10050a8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10050ae:	8b 45 08             	mov    0x8(%ebp),%eax
c10050b1:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c10050b8:	8b 45 08             	mov    0x8(%ebp),%eax
c10050bb:	83 c0 04             	add    $0x4,%eax
c10050be:	6a 01                	push   $0x1
c10050c0:	50                   	push   %eax
c10050c1:	e8 a6 ff ff ff       	call   c100506c <sema_init>
c10050c6:	83 c4 08             	add    $0x8,%esp
c10050c9:	90                   	nop
c10050ca:	c9                   	leave  
c10050cb:	c3                   	ret    

c10050cc <sema_down>:
c10050cc:	55                   	push   %ebp
c10050cd:	89 e5                	mov    %esp,%ebp
c10050cf:	83 ec 38             	sub    $0x38,%esp
c10050d2:	8b 45 08             	mov    0x8(%ebp),%eax
c10050d5:	83 c0 04             	add    $0x4,%eax
c10050d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10050db:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10050de:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10050e1:	e8 6a bc ff ff       	call   c1000d50 <intr_save>
c10050e6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10050e9:	e9 95 00 00 00       	jmp    c1005183 <sema_down+0xb7>
c10050ee:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10050f3:	83 c0 58             	add    $0x58,%eax
c10050f6:	39 45 f4             	cmp    %eax,-0xc(%ebp)
c10050f9:	75 16                	jne    c1005111 <sema_down+0x45>
c10050fb:	68 8c a8 00 c1       	push   $0xc100a88c
c1005100:	68 f4 a8 00 c1       	push   $0xc100a8f4
c1005105:	6a 26                	push   $0x26
c1005107:	68 c0 a8 00 c1       	push   $0xc100a8c0
c100510c:	e8 fc b1 ff ff       	call   c100030d <__PANIC>
c1005111:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005114:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005117:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100511a:	8b 40 04             	mov    0x4(%eax),%eax
c100511d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005120:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005123:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1005126:	75 c6                	jne    c10050ee <sema_down+0x22>
c1005128:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100512d:	83 c0 58             	add    $0x58,%eax
c1005130:	8b 55 08             	mov    0x8(%ebp),%edx
c1005133:	83 c2 04             	add    $0x4,%edx
c1005136:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1005139:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100513c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100513f:	8b 00                	mov    (%eax),%eax
c1005141:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005144:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005147:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100514a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100514d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1005150:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1005153:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005156:	89 10                	mov    %edx,(%eax)
c1005158:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100515b:	8b 10                	mov    (%eax),%edx
c100515d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005160:	89 50 04             	mov    %edx,0x4(%eax)
c1005163:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005166:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1005169:	89 50 04             	mov    %edx,0x4(%eax)
c100516c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100516f:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1005172:	89 10                	mov    %edx,(%eax)
c1005174:	90                   	nop
c1005175:	90                   	nop
c1005176:	83 ec 0c             	sub    $0xc,%esp
c1005179:	6a 01                	push   $0x1
c100517b:	e8 f3 e8 ff ff       	call   c1003a73 <thread_block>
c1005180:	83 c4 10             	add    $0x10,%esp
c1005183:	8b 45 08             	mov    0x8(%ebp),%eax
c1005186:	0f b6 00             	movzbl (%eax),%eax
c1005189:	84 c0                	test   %al,%al
c100518b:	74 84                	je     c1005111 <sema_down+0x45>
c100518d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005190:	0f b6 00             	movzbl (%eax),%eax
c1005193:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005196:	8b 45 08             	mov    0x8(%ebp),%eax
c1005199:	88 10                	mov    %dl,(%eax)
c100519b:	83 ec 0c             	sub    $0xc,%esp
c100519e:	ff 75 ec             	pushl  -0x14(%ebp)
c10051a1:	e8 bd bb ff ff       	call   c1000d63 <intr_restore>
c10051a6:	83 c4 10             	add    $0x10,%esp
c10051a9:	90                   	nop
c10051aa:	c9                   	leave  
c10051ab:	c3                   	ret    

c10051ac <sema_up>:
c10051ac:	55                   	push   %ebp
c10051ad:	89 e5                	mov    %esp,%ebp
c10051af:	83 ec 28             	sub    $0x28,%esp
c10051b2:	8b 45 08             	mov    0x8(%ebp),%eax
c10051b5:	83 c0 04             	add    $0x4,%eax
c10051b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10051bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10051be:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10051c1:	e8 8a bb ff ff       	call   c1000d50 <intr_save>
c10051c6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10051c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10051cc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10051cf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10051d2:	8b 40 04             	mov    0x4(%eax),%eax
c10051d5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10051d8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10051db:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c10051de:	74 41                	je     c1005221 <sema_up+0x75>
c10051e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10051e3:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10051e6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10051e9:	8b 40 04             	mov    0x4(%eax),%eax
c10051ec:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10051ef:	8b 12                	mov    (%edx),%edx
c10051f1:	89 55 dc             	mov    %edx,-0x24(%ebp)
c10051f4:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10051f7:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10051fa:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10051fd:	89 50 04             	mov    %edx,0x4(%eax)
c1005200:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005203:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005206:	89 10                	mov    %edx,(%eax)
c1005208:	90                   	nop
c1005209:	90                   	nop
c100520a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100520d:	83 e8 58             	sub    $0x58,%eax
c1005210:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005213:	83 ec 0c             	sub    $0xc,%esp
c1005216:	ff 75 e8             	pushl  -0x18(%ebp)
c1005219:	e8 a2 e8 ff ff       	call   c1003ac0 <thread_unblock>
c100521e:	83 c4 10             	add    $0x10,%esp
c1005221:	8b 45 08             	mov    0x8(%ebp),%eax
c1005224:	0f b6 00             	movzbl (%eax),%eax
c1005227:	8d 50 01             	lea    0x1(%eax),%edx
c100522a:	8b 45 08             	mov    0x8(%ebp),%eax
c100522d:	88 10                	mov    %dl,(%eax)
c100522f:	83 ec 0c             	sub    $0xc,%esp
c1005232:	ff 75 ec             	pushl  -0x14(%ebp)
c1005235:	e8 29 bb ff ff       	call   c1000d63 <intr_restore>
c100523a:	83 c4 10             	add    $0x10,%esp
c100523d:	90                   	nop
c100523e:	c9                   	leave  
c100523f:	c3                   	ret    

c1005240 <lock_acquire>:
c1005240:	55                   	push   %ebp
c1005241:	89 e5                	mov    %esp,%ebp
c1005243:	83 ec 08             	sub    $0x8,%esp
c1005246:	8b 45 08             	mov    0x8(%ebp),%eax
c1005249:	8b 10                	mov    (%eax),%edx
c100524b:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1005250:	39 c2                	cmp    %eax,%edx
c1005252:	74 29                	je     c100527d <lock_acquire+0x3d>
c1005254:	8b 45 08             	mov    0x8(%ebp),%eax
c1005257:	83 c0 04             	add    $0x4,%eax
c100525a:	83 ec 0c             	sub    $0xc,%esp
c100525d:	50                   	push   %eax
c100525e:	e8 69 fe ff ff       	call   c10050cc <sema_down>
c1005263:	83 c4 10             	add    $0x10,%esp
c1005266:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c100526c:	8b 45 08             	mov    0x8(%ebp),%eax
c100526f:	89 10                	mov    %edx,(%eax)
c1005271:	8b 45 08             	mov    0x8(%ebp),%eax
c1005274:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
c100527b:	eb 0f                	jmp    c100528c <lock_acquire+0x4c>
c100527d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005280:	8b 40 10             	mov    0x10(%eax),%eax
c1005283:	8d 50 01             	lea    0x1(%eax),%edx
c1005286:	8b 45 08             	mov    0x8(%ebp),%eax
c1005289:	89 50 10             	mov    %edx,0x10(%eax)
c100528c:	90                   	nop
c100528d:	c9                   	leave  
c100528e:	c3                   	ret    

c100528f <lock_release>:
c100528f:	55                   	push   %ebp
c1005290:	89 e5                	mov    %esp,%ebp
c1005292:	83 ec 08             	sub    $0x8,%esp
c1005295:	8b 45 08             	mov    0x8(%ebp),%eax
c1005298:	8b 40 10             	mov    0x10(%eax),%eax
c100529b:	83 f8 01             	cmp    $0x1,%eax
c100529e:	76 11                	jbe    c10052b1 <lock_release+0x22>
c10052a0:	8b 45 08             	mov    0x8(%ebp),%eax
c10052a3:	8b 40 10             	mov    0x10(%eax),%eax
c10052a6:	8d 50 ff             	lea    -0x1(%eax),%edx
c10052a9:	8b 45 08             	mov    0x8(%ebp),%eax
c10052ac:	89 50 10             	mov    %edx,0x10(%eax)
c10052af:	eb 25                	jmp    c10052d6 <lock_release+0x47>
c10052b1:	8b 45 08             	mov    0x8(%ebp),%eax
c10052b4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10052ba:	8b 45 08             	mov    0x8(%ebp),%eax
c10052bd:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c10052c4:	8b 45 08             	mov    0x8(%ebp),%eax
c10052c7:	83 c0 04             	add    $0x4,%eax
c10052ca:	83 ec 0c             	sub    $0xc,%esp
c10052cd:	50                   	push   %eax
c10052ce:	e8 d9 fe ff ff       	call   c10051ac <sema_up>
c10052d3:	83 c4 10             	add    $0x10,%esp
c10052d6:	c9                   	leave  
c10052d7:	c3                   	ret    

c10052d8 <waitdisk>:
c10052d8:	55                   	push   %ebp
c10052d9:	89 e5                	mov    %esp,%ebp
c10052db:	83 ec 08             	sub    $0x8,%esp
c10052de:	90                   	nop
c10052df:	83 ec 0c             	sub    $0xc,%esp
c10052e2:	68 f7 01 00 00       	push   $0x1f7
c10052e7:	e8 14 ad ff ff       	call   c1000000 <inb>
c10052ec:	83 c4 10             	add    $0x10,%esp
c10052ef:	0f b6 c0             	movzbl %al,%eax
c10052f2:	25 c0 00 00 00       	and    $0xc0,%eax
c10052f7:	83 f8 40             	cmp    $0x40,%eax
c10052fa:	75 e3                	jne    c10052df <waitdisk+0x7>
c10052fc:	90                   	nop
c10052fd:	90                   	nop
c10052fe:	c9                   	leave  
c10052ff:	c3                   	ret    

c1005300 <insl>:
c1005300:	55                   	push   %ebp
c1005301:	89 e5                	mov    %esp,%ebp
c1005303:	57                   	push   %edi
c1005304:	53                   	push   %ebx
c1005305:	8b 55 08             	mov    0x8(%ebp),%edx
c1005308:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c100530b:	8b 45 10             	mov    0x10(%ebp),%eax
c100530e:	89 cb                	mov    %ecx,%ebx
c1005310:	89 df                	mov    %ebx,%edi
c1005312:	89 c1                	mov    %eax,%ecx
c1005314:	fc                   	cld    
c1005315:	f2 6d                	repnz insl (%dx),%es:(%edi)
c1005317:	89 c8                	mov    %ecx,%eax
c1005319:	89 fb                	mov    %edi,%ebx
c100531b:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c100531e:	89 45 10             	mov    %eax,0x10(%ebp)
c1005321:	90                   	nop
c1005322:	5b                   	pop    %ebx
c1005323:	5f                   	pop    %edi
c1005324:	5d                   	pop    %ebp
c1005325:	c3                   	ret    

c1005326 <outsl>:
c1005326:	55                   	push   %ebp
c1005327:	89 e5                	mov    %esp,%ebp
c1005329:	56                   	push   %esi
c100532a:	53                   	push   %ebx
c100532b:	8b 55 08             	mov    0x8(%ebp),%edx
c100532e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1005331:	8b 45 10             	mov    0x10(%ebp),%eax
c1005334:	89 cb                	mov    %ecx,%ebx
c1005336:	89 de                	mov    %ebx,%esi
c1005338:	89 c1                	mov    %eax,%ecx
c100533a:	fc                   	cld    
c100533b:	f2 6f                	repnz outsl %ds:(%esi),(%dx)
c100533d:	89 c8                	mov    %ecx,%eax
c100533f:	89 f3                	mov    %esi,%ebx
c1005341:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1005344:	89 45 10             	mov    %eax,0x10(%ebp)
c1005347:	90                   	nop
c1005348:	5b                   	pop    %ebx
c1005349:	5e                   	pop    %esi
c100534a:	5d                   	pop    %ebp
c100534b:	c3                   	ret    

c100534c <ide_read_sect>:
c100534c:	55                   	push   %ebp
c100534d:	89 e5                	mov    %esp,%ebp
c100534f:	83 ec 08             	sub    $0x8,%esp
c1005352:	e8 81 ff ff ff       	call   c10052d8 <waitdisk>
c1005357:	83 ec 08             	sub    $0x8,%esp
c100535a:	6a 01                	push   $0x1
c100535c:	68 f2 01 00 00       	push   $0x1f2
c1005361:	e8 d6 ac ff ff       	call   c100003c <outb>
c1005366:	83 c4 10             	add    $0x10,%esp
c1005369:	8b 45 0c             	mov    0xc(%ebp),%eax
c100536c:	0f b6 c0             	movzbl %al,%eax
c100536f:	83 ec 08             	sub    $0x8,%esp
c1005372:	50                   	push   %eax
c1005373:	68 f3 01 00 00       	push   $0x1f3
c1005378:	e8 bf ac ff ff       	call   c100003c <outb>
c100537d:	83 c4 10             	add    $0x10,%esp
c1005380:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005383:	c1 e8 08             	shr    $0x8,%eax
c1005386:	0f b6 c0             	movzbl %al,%eax
c1005389:	83 ec 08             	sub    $0x8,%esp
c100538c:	50                   	push   %eax
c100538d:	68 f4 01 00 00       	push   $0x1f4
c1005392:	e8 a5 ac ff ff       	call   c100003c <outb>
c1005397:	83 c4 10             	add    $0x10,%esp
c100539a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100539d:	c1 e8 10             	shr    $0x10,%eax
c10053a0:	0f b6 c0             	movzbl %al,%eax
c10053a3:	83 ec 08             	sub    $0x8,%esp
c10053a6:	50                   	push   %eax
c10053a7:	68 f5 01 00 00       	push   $0x1f5
c10053ac:	e8 8b ac ff ff       	call   c100003c <outb>
c10053b1:	83 c4 10             	add    $0x10,%esp
c10053b4:	8b 45 0c             	mov    0xc(%ebp),%eax
c10053b7:	c1 e8 18             	shr    $0x18,%eax
c10053ba:	83 e0 0f             	and    $0xf,%eax
c10053bd:	83 c8 e0             	or     $0xffffffe0,%eax
c10053c0:	0f b6 c0             	movzbl %al,%eax
c10053c3:	83 ec 08             	sub    $0x8,%esp
c10053c6:	50                   	push   %eax
c10053c7:	68 f6 01 00 00       	push   $0x1f6
c10053cc:	e8 6b ac ff ff       	call   c100003c <outb>
c10053d1:	83 c4 10             	add    $0x10,%esp
c10053d4:	83 ec 08             	sub    $0x8,%esp
c10053d7:	6a 20                	push   $0x20
c10053d9:	68 f7 01 00 00       	push   $0x1f7
c10053de:	e8 59 ac ff ff       	call   c100003c <outb>
c10053e3:	83 c4 10             	add    $0x10,%esp
c10053e6:	e8 ed fe ff ff       	call   c10052d8 <waitdisk>
c10053eb:	83 ec 04             	sub    $0x4,%esp
c10053ee:	68 80 00 00 00       	push   $0x80
c10053f3:	ff 75 08             	pushl  0x8(%ebp)
c10053f6:	68 f0 01 00 00       	push   $0x1f0
c10053fb:	e8 00 ff ff ff       	call   c1005300 <insl>
c1005400:	83 c4 10             	add    $0x10,%esp
c1005403:	90                   	nop
c1005404:	c9                   	leave  
c1005405:	c3                   	ret    

c1005406 <ide_write_sect>:
c1005406:	55                   	push   %ebp
c1005407:	89 e5                	mov    %esp,%ebp
c1005409:	83 ec 08             	sub    $0x8,%esp
c100540c:	e8 c7 fe ff ff       	call   c10052d8 <waitdisk>
c1005411:	83 ec 08             	sub    $0x8,%esp
c1005414:	6a 01                	push   $0x1
c1005416:	68 f2 01 00 00       	push   $0x1f2
c100541b:	e8 1c ac ff ff       	call   c100003c <outb>
c1005420:	83 c4 10             	add    $0x10,%esp
c1005423:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005426:	0f b6 c0             	movzbl %al,%eax
c1005429:	83 ec 08             	sub    $0x8,%esp
c100542c:	50                   	push   %eax
c100542d:	68 f3 01 00 00       	push   $0x1f3
c1005432:	e8 05 ac ff ff       	call   c100003c <outb>
c1005437:	83 c4 10             	add    $0x10,%esp
c100543a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100543d:	c1 e8 08             	shr    $0x8,%eax
c1005440:	0f b6 c0             	movzbl %al,%eax
c1005443:	83 ec 08             	sub    $0x8,%esp
c1005446:	50                   	push   %eax
c1005447:	68 f4 01 00 00       	push   $0x1f4
c100544c:	e8 eb ab ff ff       	call   c100003c <outb>
c1005451:	83 c4 10             	add    $0x10,%esp
c1005454:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005457:	c1 e8 10             	shr    $0x10,%eax
c100545a:	0f b6 c0             	movzbl %al,%eax
c100545d:	83 ec 08             	sub    $0x8,%esp
c1005460:	50                   	push   %eax
c1005461:	68 f5 01 00 00       	push   $0x1f5
c1005466:	e8 d1 ab ff ff       	call   c100003c <outb>
c100546b:	83 c4 10             	add    $0x10,%esp
c100546e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005471:	c1 e8 18             	shr    $0x18,%eax
c1005474:	83 e0 0f             	and    $0xf,%eax
c1005477:	83 c8 e0             	or     $0xffffffe0,%eax
c100547a:	0f b6 c0             	movzbl %al,%eax
c100547d:	83 ec 08             	sub    $0x8,%esp
c1005480:	50                   	push   %eax
c1005481:	68 f6 01 00 00       	push   $0x1f6
c1005486:	e8 b1 ab ff ff       	call   c100003c <outb>
c100548b:	83 c4 10             	add    $0x10,%esp
c100548e:	83 ec 08             	sub    $0x8,%esp
c1005491:	6a 30                	push   $0x30
c1005493:	68 f7 01 00 00       	push   $0x1f7
c1005498:	e8 9f ab ff ff       	call   c100003c <outb>
c100549d:	83 c4 10             	add    $0x10,%esp
c10054a0:	e8 33 fe ff ff       	call   c10052d8 <waitdisk>
c10054a5:	83 ec 04             	sub    $0x4,%esp
c10054a8:	68 80 00 00 00       	push   $0x80
c10054ad:	ff 75 08             	pushl  0x8(%ebp)
c10054b0:	68 f0 01 00 00       	push   $0x1f0
c10054b5:	e8 6c fe ff ff       	call   c1005326 <outsl>
c10054ba:	83 c4 10             	add    $0x10,%esp
c10054bd:	90                   	nop
c10054be:	c9                   	leave  
c10054bf:	c3                   	ret    

c10054c0 <ide_read>:
c10054c0:	55                   	push   %ebp
c10054c1:	89 e5                	mov    %esp,%ebp
c10054c3:	83 ec 18             	sub    $0x18,%esp
c10054c6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10054cd:	eb 22                	jmp    c10054f1 <ide_read+0x31>
c10054cf:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10054d2:	8b 45 0c             	mov    0xc(%ebp),%eax
c10054d5:	01 d0                	add    %edx,%eax
c10054d7:	83 ec 08             	sub    $0x8,%esp
c10054da:	50                   	push   %eax
c10054db:	ff 75 08             	pushl  0x8(%ebp)
c10054de:	e8 69 fe ff ff       	call   c100534c <ide_read_sect>
c10054e3:	83 c4 10             	add    $0x10,%esp
c10054e6:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c10054ed:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10054f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10054f4:	39 45 10             	cmp    %eax,0x10(%ebp)
c10054f7:	77 d6                	ja     c10054cf <ide_read+0xf>
c10054f9:	90                   	nop
c10054fa:	90                   	nop
c10054fb:	c9                   	leave  
c10054fc:	c3                   	ret    

c10054fd <ide_write>:
c10054fd:	55                   	push   %ebp
c10054fe:	89 e5                	mov    %esp,%ebp
c1005500:	83 ec 18             	sub    $0x18,%esp
c1005503:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100550a:	eb 22                	jmp    c100552e <ide_write+0x31>
c100550c:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100550f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005512:	01 d0                	add    %edx,%eax
c1005514:	83 ec 08             	sub    $0x8,%esp
c1005517:	50                   	push   %eax
c1005518:	ff 75 08             	pushl  0x8(%ebp)
c100551b:	e8 e6 fe ff ff       	call   c1005406 <ide_write_sect>
c1005520:	83 c4 10             	add    $0x10,%esp
c1005523:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c100552a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100552e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005531:	39 45 10             	cmp    %eax,0x10(%ebp)
c1005534:	77 d6                	ja     c100550c <ide_write+0xf>
c1005536:	90                   	nop
c1005537:	90                   	nop
c1005538:	c9                   	leave  
c1005539:	c3                   	ret    

c100553a <delay>:
c100553a:	55                   	push   %ebp
c100553b:	89 e5                	mov    %esp,%ebp
c100553d:	83 ec 10             	sub    $0x10,%esp
c1005540:	8b 45 08             	mov    0x8(%ebp),%eax
c1005543:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005546:	eb 17                	jmp    c100555f <delay+0x25>
c1005548:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c100554f:	eb 04                	jmp    c1005555 <delay+0x1b>
c1005551:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c1005555:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c1005559:	75 f6                	jne    c1005551 <delay+0x17>
c100555b:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c100555f:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1005563:	75 e3                	jne    c1005548 <delay+0xe>
c1005565:	90                   	nop
c1005566:	90                   	nop
c1005567:	c9                   	leave  
c1005568:	c3                   	ret    

c1005569 <read_main_partition>:
c1005569:	55                   	push   %ebp
c100556a:	89 e5                	mov    %esp,%ebp
c100556c:	83 ec 18             	sub    $0x18,%esp
c100556f:	83 ec 08             	sub    $0x8,%esp
c1005572:	6a 02                	push   $0x2
c1005574:	68 00 02 00 00       	push   $0x200
c1005579:	e8 36 d5 ff ff       	call   c1002ab4 <vmm_malloc>
c100557e:	83 c4 10             	add    $0x10,%esp
c1005581:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005584:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005587:	83 ec 08             	sub    $0x8,%esp
c100558a:	6a 00                	push   $0x0
c100558c:	50                   	push   %eax
c100558d:	e8 ba fd ff ff       	call   c100534c <ide_read_sect>
c1005592:	83 c4 10             	add    $0x10,%esp
c1005595:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005598:	05 be 01 00 00       	add    $0x1be,%eax
c100559d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10055a0:	e8 76 f2 ff ff       	call   c100481b <clear>
c10055a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10055a8:	0f b6 00             	movzbl (%eax),%eax
c10055ab:	0f b6 c0             	movzbl %al,%eax
c10055ae:	83 ec 08             	sub    $0x8,%esp
c10055b1:	50                   	push   %eax
c10055b2:	68 fe a8 00 c1       	push   $0xc100a8fe
c10055b7:	e8 5c f6 ff ff       	call   c1004c18 <printk>
c10055bc:	83 c4 10             	add    $0x10,%esp
c10055bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10055c2:	0f b6 40 01          	movzbl 0x1(%eax),%eax
c10055c6:	0f b6 c0             	movzbl %al,%eax
c10055c9:	83 ec 08             	sub    $0x8,%esp
c10055cc:	50                   	push   %eax
c10055cd:	68 11 a9 00 c1       	push   $0xc100a911
c10055d2:	e8 41 f6 ff ff       	call   c1004c18 <printk>
c10055d7:	83 c4 10             	add    $0x10,%esp
c10055da:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10055dd:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c10055e1:	0f b6 c0             	movzbl %al,%eax
c10055e4:	83 ec 08             	sub    $0x8,%esp
c10055e7:	50                   	push   %eax
c10055e8:	68 27 a9 00 c1       	push   $0xc100a927
c10055ed:	e8 26 f6 ff ff       	call   c1004c18 <printk>
c10055f2:	83 c4 10             	add    $0x10,%esp
c10055f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10055f8:	0f b6 40 03          	movzbl 0x3(%eax),%eax
c10055fc:	0f b6 c0             	movzbl %al,%eax
c10055ff:	83 ec 08             	sub    $0x8,%esp
c1005602:	50                   	push   %eax
c1005603:	68 3b a9 00 c1       	push   $0xc100a93b
c1005608:	e8 0b f6 ff ff       	call   c1004c18 <printk>
c100560d:	83 c4 10             	add    $0x10,%esp
c1005610:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005613:	0f b6 40 04          	movzbl 0x4(%eax),%eax
c1005617:	0f b6 c0             	movzbl %al,%eax
c100561a:	83 ec 08             	sub    $0x8,%esp
c100561d:	50                   	push   %eax
c100561e:	68 51 a9 00 c1       	push   $0xc100a951
c1005623:	e8 f0 f5 ff ff       	call   c1004c18 <printk>
c1005628:	83 c4 10             	add    $0x10,%esp
c100562b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100562e:	0f b6 40 05          	movzbl 0x5(%eax),%eax
c1005632:	0f b6 c0             	movzbl %al,%eax
c1005635:	83 ec 08             	sub    $0x8,%esp
c1005638:	50                   	push   %eax
c1005639:	68 62 a9 00 c1       	push   $0xc100a962
c100563e:	e8 d5 f5 ff ff       	call   c1004c18 <printk>
c1005643:	83 c4 10             	add    $0x10,%esp
c1005646:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005649:	0f b6 40 06          	movzbl 0x6(%eax),%eax
c100564d:	0f b6 c0             	movzbl %al,%eax
c1005650:	83 ec 08             	sub    $0x8,%esp
c1005653:	50                   	push   %eax
c1005654:	68 76 a9 00 c1       	push   $0xc100a976
c1005659:	e8 ba f5 ff ff       	call   c1004c18 <printk>
c100565e:	83 c4 10             	add    $0x10,%esp
c1005661:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005664:	0f b6 40 07          	movzbl 0x7(%eax),%eax
c1005668:	0f b6 c0             	movzbl %al,%eax
c100566b:	83 ec 08             	sub    $0x8,%esp
c100566e:	50                   	push   %eax
c100566f:	68 88 a9 00 c1       	push   $0xc100a988
c1005674:	e8 9f f5 ff ff       	call   c1004c18 <printk>
c1005679:	83 c4 10             	add    $0x10,%esp
c100567c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100567f:	8b 40 08             	mov    0x8(%eax),%eax
c1005682:	83 ec 08             	sub    $0x8,%esp
c1005685:	50                   	push   %eax
c1005686:	68 9c a9 00 c1       	push   $0xc100a99c
c100568b:	e8 88 f5 ff ff       	call   c1004c18 <printk>
c1005690:	83 c4 10             	add    $0x10,%esp
c1005693:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005696:	8b 40 0c             	mov    0xc(%eax),%eax
c1005699:	83 ec 08             	sub    $0x8,%esp
c100569c:	50                   	push   %eax
c100569d:	68 b0 a9 00 c1       	push   $0xc100a9b0
c10056a2:	e8 71 f5 ff ff       	call   c1004c18 <printk>
c10056a7:	83 c4 10             	add    $0x10,%esp
c10056aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10056ad:	c9                   	leave  
c10056ae:	c3                   	ret    

c10056af <test_ide_io>:
c10056af:	55                   	push   %ebp
c10056b0:	89 e5                	mov    %esp,%ebp
c10056b2:	83 ec 18             	sub    $0x18,%esp
c10056b5:	83 ec 08             	sub    $0x8,%esp
c10056b8:	68 00 90 10 00       	push   $0x109000
c10056bd:	68 c3 a9 00 c1       	push   $0xc100a9c3
c10056c2:	e8 51 f5 ff ff       	call   c1004c18 <printk>
c10056c7:	83 c4 10             	add    $0x10,%esp
c10056ca:	83 ec 08             	sub    $0x8,%esp
c10056cd:	68 2c db 00 c1       	push   $0xc100db2c
c10056d2:	68 d2 a9 00 c1       	push   $0xc100a9d2
c10056d7:	e8 3c f5 ff ff       	call   c1004c18 <printk>
c10056dc:	83 c4 10             	add    $0x10,%esp
c10056df:	b8 00 90 10 00       	mov    $0x109000,%eax
c10056e4:	2d 01 fe 0f 00       	sub    $0xffe01,%eax
c10056e9:	c1 e8 09             	shr    $0x9,%eax
c10056ec:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10056ef:	b8 2c db 00 c1       	mov    $0xc100db2c,%eax
c10056f4:	05 ff 01 00 3f       	add    $0x3f0001ff,%eax
c10056f9:	c1 e8 09             	shr    $0x9,%eax
c10056fc:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10056ff:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005702:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005705:	01 d0                	add    %edx,%eax
c1005707:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100570a:	83 ec 08             	sub    $0x8,%esp
c100570d:	ff 75 ec             	pushl  -0x14(%ebp)
c1005710:	68 e1 a9 00 c1       	push   $0xc100a9e1
c1005715:	e8 fe f4 ff ff       	call   c1004c18 <printk>
c100571a:	83 c4 10             	add    $0x10,%esp
c100571d:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1005721:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1005728:	e8 3c fe ff ff       	call   c1005569 <read_main_partition>
c100572d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005730:	90                   	nop
c1005731:	c9                   	leave  
c1005732:	c3                   	ret    

c1005733 <hash32>:
c1005733:	55                   	push   %ebp
c1005734:	89 e5                	mov    %esp,%ebp
c1005736:	83 ec 10             	sub    $0x10,%esp
c1005739:	8b 45 08             	mov    0x8(%ebp),%eax
c100573c:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1005742:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005745:	b8 20 00 00 00       	mov    $0x20,%eax
c100574a:	2b 45 0c             	sub    0xc(%ebp),%eax
c100574d:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005750:	89 c1                	mov    %eax,%ecx
c1005752:	d3 ea                	shr    %cl,%edx
c1005754:	89 d0                	mov    %edx,%eax
c1005756:	c9                   	leave  
c1005757:	c3                   	ret    

c1005758 <partition_format>:
c1005758:	55                   	push   %ebp
c1005759:	89 e5                	mov    %esp,%ebp
c100575b:	53                   	push   %ebx
c100575c:	81 ec 44 02 00 00    	sub    $0x244,%esp
c1005762:	e8 02 fe ff ff       	call   c1005569 <read_main_partition>
c1005767:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100576a:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
c1005771:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
c1005778:	c7 45 e4 11 00 00 00 	movl   $0x11,-0x1c(%ebp)
c100577f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005782:	8b 40 0c             	mov    0xc(%eax),%eax
c1005785:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1005788:	2b 45 e8             	sub    -0x18(%ebp),%eax
c100578b:	2b 45 e4             	sub    -0x1c(%ebp),%eax
c100578e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005791:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005794:	05 ff 0f 00 00       	add    $0xfff,%eax
c1005799:	c1 e8 0c             	shr    $0xc,%eax
c100579c:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100579f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10057a2:	2b 45 dc             	sub    -0x24(%ebp),%eax
c10057a5:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10057a8:	c7 85 bc fd ff ff 18 	movl   $0x19590318,-0x244(%ebp)
c10057af:	03 59 19 
c10057b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10057b5:	8b 40 0c             	mov    0xc(%eax),%eax
c10057b8:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
c10057be:	c7 85 c4 fd ff ff e8 	movl   $0x3e8,-0x23c(%ebp)
c10057c5:	03 00 00 
c10057c8:	c7 85 c8 fd ff ff 00 	movl   $0x800,-0x238(%ebp)
c10057cf:	08 00 00 
c10057d2:	c7 85 cc fd ff ff 01 	movl   $0x801,-0x234(%ebp)
c10057d9:	08 00 00 
c10057dc:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10057df:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c10057e5:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
c10057eb:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c10057f1:	01 d0                	add    %edx,%eax
c10057f3:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
c10057f9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10057fc:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
c1005802:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
c1005808:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c100580e:	01 d0                	add    %edx,%eax
c1005810:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
c1005816:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005819:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
c100581f:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
c1005825:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c100582b:	01 d0                	add    %edx,%eax
c100582d:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
c1005833:	c7 85 e8 fd ff ff 00 	movl   $0x0,-0x218(%ebp)
c100583a:	00 00 00 
c100583d:	c7 85 ec fd ff ff 18 	movl   $0x18,-0x214(%ebp)
c1005844:	00 00 00 
c1005847:	e8 cf ef ff ff       	call   c100481b <clear>
c100584c:	8b 85 bc fd ff ff    	mov    -0x244(%ebp),%eax
c1005852:	83 ec 08             	sub    $0x8,%esp
c1005855:	50                   	push   %eax
c1005856:	68 f4 a9 00 c1       	push   $0xc100a9f4
c100585b:	e8 b8 f3 ff ff       	call   c1004c18 <printk>
c1005860:	83 c4 10             	add    $0x10,%esp
c1005863:	8b 85 c0 fd ff ff    	mov    -0x240(%ebp),%eax
c1005869:	83 ec 08             	sub    $0x8,%esp
c100586c:	50                   	push   %eax
c100586d:	68 04 aa 00 c1       	push   $0xc100aa04
c1005872:	e8 a1 f3 ff ff       	call   c1004c18 <printk>
c1005877:	83 c4 10             	add    $0x10,%esp
c100587a:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
c1005880:	83 ec 08             	sub    $0x8,%esp
c1005883:	50                   	push   %eax
c1005884:	68 16 aa 00 c1       	push   $0xc100aa16
c1005889:	e8 8a f3 ff ff       	call   c1004c18 <printk>
c100588e:	83 c4 10             	add    $0x10,%esp
c1005891:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c1005897:	83 ec 08             	sub    $0x8,%esp
c100589a:	50                   	push   %eax
c100589b:	68 2a aa 00 c1       	push   $0xc100aa2a
c10058a0:	e8 73 f3 ff ff       	call   c1004c18 <printk>
c10058a5:	83 c4 10             	add    $0x10,%esp
c10058a8:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c10058ae:	83 ec 08             	sub    $0x8,%esp
c10058b1:	50                   	push   %eax
c10058b2:	68 45 aa 00 c1       	push   $0xc100aa45
c10058b7:	e8 5c f3 ff ff       	call   c1004c18 <printk>
c10058bc:	83 c4 10             	add    $0x10,%esp
c10058bf:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c10058c5:	83 ec 08             	sub    $0x8,%esp
c10058c8:	50                   	push   %eax
c10058c9:	68 62 aa 00 c1       	push   $0xc100aa62
c10058ce:	e8 45 f3 ff ff       	call   c1004c18 <printk>
c10058d3:	83 c4 10             	add    $0x10,%esp
c10058d6:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c10058dc:	83 ec 08             	sub    $0x8,%esp
c10058df:	50                   	push   %eax
c10058e0:	68 7d aa 00 c1       	push   $0xc100aa7d
c10058e5:	e8 2e f3 ff ff       	call   c1004c18 <printk>
c10058ea:	83 c4 10             	add    $0x10,%esp
c10058ed:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c10058f3:	83 ec 08             	sub    $0x8,%esp
c10058f6:	50                   	push   %eax
c10058f7:	68 9a aa 00 c1       	push   $0xc100aa9a
c10058fc:	e8 17 f3 ff ff       	call   c1004c18 <printk>
c1005901:	83 c4 10             	add    $0x10,%esp
c1005904:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c100590a:	83 ec 08             	sub    $0x8,%esp
c100590d:	50                   	push   %eax
c100590e:	68 b4 aa 00 c1       	push   $0xc100aab4
c1005913:	e8 00 f3 ff ff       	call   c1004c18 <printk>
c1005918:	83 c4 10             	add    $0x10,%esp
c100591b:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c1005921:	83 ec 08             	sub    $0x8,%esp
c1005924:	50                   	push   %eax
c1005925:	68 d0 aa 00 c1       	push   $0xc100aad0
c100592a:	e8 e9 f2 ff ff       	call   c1004c18 <printk>
c100592f:	83 c4 10             	add    $0x10,%esp
c1005932:	83 ec 04             	sub    $0x4,%esp
c1005935:	6a 01                	push   $0x1
c1005937:	68 00 08 00 00       	push   $0x800
c100593c:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
c1005942:	50                   	push   %eax
c1005943:	e8 b5 fb ff ff       	call   c10054fd <ide_write>
c1005948:	83 c4 10             	add    $0x10,%esp
c100594b:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c1005951:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c1005957:	39 c2                	cmp    %eax,%edx
c1005959:	0f 43 c2             	cmovae %edx,%eax
c100595c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100595f:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1005965:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
c1005968:	0f 43 45 d4          	cmovae -0x2c(%ebp),%eax
c100596c:	c1 e0 09             	shl    $0x9,%eax
c100596f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1005972:	83 ec 08             	sub    $0x8,%esp
c1005975:	6a 02                	push   $0x2
c1005977:	ff 75 d4             	pushl  -0x2c(%ebp)
c100597a:	e8 35 d1 ff ff       	call   c1002ab4 <vmm_malloc>
c100597f:	83 c4 10             	add    $0x10,%esp
c1005982:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1005985:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005988:	0f b6 00             	movzbl (%eax),%eax
c100598b:	83 c8 01             	or     $0x1,%eax
c100598e:	89 c2                	mov    %eax,%edx
c1005990:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005993:	88 10                	mov    %dl,(%eax)
c1005995:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005998:	c1 e8 03             	shr    $0x3,%eax
c100599b:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100599e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10059a1:	83 e0 07             	and    $0x7,%eax
c10059a4:	88 45 cb             	mov    %al,-0x35(%ebp)
c10059a7:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10059aa:	25 ff 01 00 00       	and    $0x1ff,%eax
c10059af:	ba 00 02 00 00       	mov    $0x200,%edx
c10059b4:	29 c2                	sub    %eax,%edx
c10059b6:	89 d0                	mov    %edx,%eax
c10059b8:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c10059bb:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10059be:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10059c1:	01 d0                	add    %edx,%eax
c10059c3:	83 ec 04             	sub    $0x4,%esp
c10059c6:	ff 75 c4             	pushl  -0x3c(%ebp)
c10059c9:	6a ff                	push   $0xffffffff
c10059cb:	50                   	push   %eax
c10059cc:	e8 d9 a6 ff ff       	call   c10000aa <memset>
c10059d1:	83 c4 10             	add    $0x10,%esp
c10059d4:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c10059d8:	eb 38                	jmp    c1005a12 <partition_format+0x2ba>
c10059da:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10059dd:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10059e0:	01 d0                	add    %edx,%eax
c10059e2:	0f b6 00             	movzbl (%eax),%eax
c10059e5:	89 c2                	mov    %eax,%edx
c10059e7:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10059eb:	bb 01 00 00 00       	mov    $0x1,%ebx
c10059f0:	89 c1                	mov    %eax,%ecx
c10059f2:	d3 e3                	shl    %cl,%ebx
c10059f4:	89 d8                	mov    %ebx,%eax
c10059f6:	f7 d0                	not    %eax
c10059f8:	89 d1                	mov    %edx,%ecx
c10059fa:	21 c1                	and    %eax,%ecx
c10059fc:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10059ff:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005a02:	01 d0                	add    %edx,%eax
c1005a04:	89 ca                	mov    %ecx,%edx
c1005a06:	88 10                	mov    %dl,(%eax)
c1005a08:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1005a0c:	83 c0 01             	add    $0x1,%eax
c1005a0f:	88 45 f7             	mov    %al,-0x9(%ebp)
c1005a12:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
c1005a16:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1005a1a:	39 c2                	cmp    %eax,%edx
c1005a1c:	7c bc                	jl     c10059da <partition_format+0x282>
c1005a1e:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
c1005a24:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c1005a2a:	83 ec 04             	sub    $0x4,%esp
c1005a2d:	52                   	push   %edx
c1005a2e:	50                   	push   %eax
c1005a2f:	ff 75 d0             	pushl  -0x30(%ebp)
c1005a32:	e8 c6 fa ff ff       	call   c10054fd <ide_write>
c1005a37:	83 c4 10             	add    $0x10,%esp
c1005a3a:	83 ec 04             	sub    $0x4,%esp
c1005a3d:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005a40:	6a 00                	push   $0x0
c1005a42:	ff 75 d0             	pushl  -0x30(%ebp)
c1005a45:	e8 60 a6 ff ff       	call   c10000aa <memset>
c1005a4a:	83 c4 10             	add    $0x10,%esp
c1005a4d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005a50:	0f b6 00             	movzbl (%eax),%eax
c1005a53:	83 c8 01             	or     $0x1,%eax
c1005a56:	89 c2                	mov    %eax,%edx
c1005a58:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005a5b:	88 10                	mov    %dl,(%eax)
c1005a5d:	c7 45 cc 7d 00 00 00 	movl   $0x7d,-0x34(%ebp)
c1005a64:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
c1005a68:	b8 00 02 00 00       	mov    $0x200,%eax
c1005a6d:	2b 45 cc             	sub    -0x34(%ebp),%eax
c1005a70:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1005a73:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005a76:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005a79:	01 d0                	add    %edx,%eax
c1005a7b:	83 ec 04             	sub    $0x4,%esp
c1005a7e:	ff 75 c4             	pushl  -0x3c(%ebp)
c1005a81:	6a ff                	push   $0xffffffff
c1005a83:	50                   	push   %eax
c1005a84:	e8 21 a6 ff ff       	call   c10000aa <memset>
c1005a89:	83 c4 10             	add    $0x10,%esp
c1005a8c:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c1005a90:	eb 38                	jmp    c1005aca <partition_format+0x372>
c1005a92:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005a95:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005a98:	01 d0                	add    %edx,%eax
c1005a9a:	0f b6 00             	movzbl (%eax),%eax
c1005a9d:	89 c2                	mov    %eax,%edx
c1005a9f:	0f be 45 f6          	movsbl -0xa(%ebp),%eax
c1005aa3:	bb 01 00 00 00       	mov    $0x1,%ebx
c1005aa8:	89 c1                	mov    %eax,%ecx
c1005aaa:	d3 e3                	shl    %cl,%ebx
c1005aac:	89 d8                	mov    %ebx,%eax
c1005aae:	f7 d0                	not    %eax
c1005ab0:	89 d1                	mov    %edx,%ecx
c1005ab2:	21 c1                	and    %eax,%ecx
c1005ab4:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005ab7:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005aba:	01 d0                	add    %edx,%eax
c1005abc:	89 ca                	mov    %ecx,%edx
c1005abe:	88 10                	mov    %dl,(%eax)
c1005ac0:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1005ac4:	83 c0 01             	add    $0x1,%eax
c1005ac7:	88 45 f6             	mov    %al,-0xa(%ebp)
c1005aca:	0f be 55 f6          	movsbl -0xa(%ebp),%edx
c1005ace:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1005ad2:	39 c2                	cmp    %eax,%edx
c1005ad4:	7c bc                	jl     c1005a92 <partition_format+0x33a>
c1005ad6:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c1005adc:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1005ae2:	83 ec 04             	sub    $0x4,%esp
c1005ae5:	52                   	push   %edx
c1005ae6:	50                   	push   %eax
c1005ae7:	ff 75 d0             	pushl  -0x30(%ebp)
c1005aea:	e8 0e fa ff ff       	call   c10054fd <ide_write>
c1005aef:	83 c4 10             	add    $0x10,%esp
c1005af2:	83 ec 04             	sub    $0x4,%esp
c1005af5:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005af8:	6a 00                	push   $0x0
c1005afa:	ff 75 d0             	pushl  -0x30(%ebp)
c1005afd:	e8 a8 a5 ff ff       	call   c10000aa <memset>
c1005b02:	83 c4 10             	add    $0x10,%esp
c1005b05:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005b08:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1005b0b:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
c1005b11:	8d 14 00             	lea    (%eax,%eax,1),%edx
c1005b14:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1005b17:	89 50 04             	mov    %edx,0x4(%eax)
c1005b1a:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1005b1d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005b23:	8b 95 e4 fd ff ff    	mov    -0x21c(%ebp),%edx
c1005b29:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1005b2c:	89 50 10             	mov    %edx,0x10(%eax)
c1005b2f:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
c1005b35:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c1005b3b:	83 ec 04             	sub    $0x4,%esp
c1005b3e:	52                   	push   %edx
c1005b3f:	50                   	push   %eax
c1005b40:	ff 75 d0             	pushl  -0x30(%ebp)
c1005b43:	e8 b5 f9 ff ff       	call   c10054fd <ide_write>
c1005b48:	83 c4 10             	add    $0x10,%esp
c1005b4b:	83 ec 04             	sub    $0x4,%esp
c1005b4e:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005b51:	6a 00                	push   $0x0
c1005b53:	ff 75 d0             	pushl  -0x30(%ebp)
c1005b56:	e8 4f a5 ff ff       	call   c10000aa <memset>
c1005b5b:	83 c4 10             	add    $0x10,%esp
c1005b5e:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005b61:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1005b64:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005b67:	83 ec 04             	sub    $0x4,%esp
c1005b6a:	6a 01                	push   $0x1
c1005b6c:	68 e9 aa 00 c1       	push   $0xc100aae9
c1005b71:	50                   	push   %eax
c1005b72:	e8 91 a5 ff ff       	call   c1000108 <memcpy>
c1005b77:	83 c4 10             	add    $0x10,%esp
c1005b7a:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005b7d:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005b84:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005b87:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1005b8e:	83 45 bc 18          	addl   $0x18,-0x44(%ebp)
c1005b92:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005b95:	83 ec 04             	sub    $0x4,%esp
c1005b98:	6a 02                	push   $0x2
c1005b9a:	68 eb aa 00 c1       	push   $0xc100aaeb
c1005b9f:	50                   	push   %eax
c1005ba0:	e8 63 a5 ff ff       	call   c1000108 <memcpy>
c1005ba5:	83 c4 10             	add    $0x10,%esp
c1005ba8:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005bab:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005bb2:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005bb5:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1005bbc:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c1005bc2:	83 ec 04             	sub    $0x4,%esp
c1005bc5:	6a 01                	push   $0x1
c1005bc7:	50                   	push   %eax
c1005bc8:	ff 75 d0             	pushl  -0x30(%ebp)
c1005bcb:	e8 2d f9 ff ff       	call   c10054fd <ide_write>
c1005bd0:	83 c4 10             	add    $0x10,%esp
c1005bd3:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005bd6:	83 ec 08             	sub    $0x8,%esp
c1005bd9:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005bdc:	50                   	push   %eax
c1005bdd:	e8 f7 cf ff ff       	call   c1002bd9 <vmm_free>
c1005be2:	83 c4 10             	add    $0x10,%esp
c1005be5:	90                   	nop
c1005be6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1005be9:	c9                   	leave  
c1005bea:	c3                   	ret    

c1005beb <mount_partition>:
c1005beb:	55                   	push   %ebp
c1005bec:	89 e5                	mov    %esp,%ebp
c1005bee:	83 ec 18             	sub    $0x18,%esp
c1005bf1:	e8 73 f9 ff ff       	call   c1005569 <read_main_partition>
c1005bf6:	a3 30 32 a1 c1       	mov    %eax,0xc1a13230
c1005bfb:	83 ec 08             	sub    $0x8,%esp
c1005bfe:	6a 02                	push   $0x2
c1005c00:	68 00 02 00 00       	push   $0x200
c1005c05:	e8 aa ce ff ff       	call   c1002ab4 <vmm_malloc>
c1005c0a:	83 c4 10             	add    $0x10,%esp
c1005c0d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005c10:	83 ec 04             	sub    $0x4,%esp
c1005c13:	68 00 02 00 00       	push   $0x200
c1005c18:	6a 00                	push   $0x0
c1005c1a:	ff 75 f0             	pushl  -0x10(%ebp)
c1005c1d:	e8 88 a4 ff ff       	call   c10000aa <memset>
c1005c22:	83 c4 10             	add    $0x10,%esp
c1005c25:	83 ec 04             	sub    $0x4,%esp
c1005c28:	6a 01                	push   $0x1
c1005c2a:	68 00 08 00 00       	push   $0x800
c1005c2f:	ff 75 f0             	pushl  -0x10(%ebp)
c1005c32:	e8 89 f8 ff ff       	call   c10054c0 <ide_read>
c1005c37:	83 c4 10             	add    $0x10,%esp
c1005c3a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005c3f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005c42:	89 50 10             	mov    %edx,0x10(%eax)
c1005c45:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005c48:	8b 40 14             	mov    0x14(%eax),%eax
c1005c4b:	c1 e0 09             	shl    $0x9,%eax
c1005c4e:	83 ec 08             	sub    $0x8,%esp
c1005c51:	6a 02                	push   $0x2
c1005c53:	50                   	push   %eax
c1005c54:	e8 5b ce ff ff       	call   c1002ab4 <vmm_malloc>
c1005c59:	83 c4 10             	add    $0x10,%esp
c1005c5c:	89 c2                	mov    %eax,%edx
c1005c5e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005c63:	89 50 18             	mov    %edx,0x18(%eax)
c1005c66:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005c69:	8b 50 14             	mov    0x14(%eax),%edx
c1005c6c:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005c71:	c1 e2 09             	shl    $0x9,%edx
c1005c74:	89 50 14             	mov    %edx,0x14(%eax)
c1005c77:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005c7a:	8b 48 14             	mov    0x14(%eax),%ecx
c1005c7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005c80:	8b 50 10             	mov    0x10(%eax),%edx
c1005c83:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005c88:	8b 40 18             	mov    0x18(%eax),%eax
c1005c8b:	83 ec 04             	sub    $0x4,%esp
c1005c8e:	51                   	push   %ecx
c1005c8f:	52                   	push   %edx
c1005c90:	50                   	push   %eax
c1005c91:	e8 2a f8 ff ff       	call   c10054c0 <ide_read>
c1005c96:	83 c4 10             	add    $0x10,%esp
c1005c99:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005c9c:	8b 40 1c             	mov    0x1c(%eax),%eax
c1005c9f:	c1 e0 09             	shl    $0x9,%eax
c1005ca2:	83 ec 08             	sub    $0x8,%esp
c1005ca5:	6a 02                	push   $0x2
c1005ca7:	50                   	push   %eax
c1005ca8:	e8 07 ce ff ff       	call   c1002ab4 <vmm_malloc>
c1005cad:	83 c4 10             	add    $0x10,%esp
c1005cb0:	89 c2                	mov    %eax,%edx
c1005cb2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005cb7:	89 50 20             	mov    %edx,0x20(%eax)
c1005cba:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005cbd:	8b 50 1c             	mov    0x1c(%eax),%edx
c1005cc0:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005cc5:	c1 e2 09             	shl    $0x9,%edx
c1005cc8:	89 50 1c             	mov    %edx,0x1c(%eax)
c1005ccb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005cce:	8b 48 1c             	mov    0x1c(%eax),%ecx
c1005cd1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005cd4:	8b 50 18             	mov    0x18(%eax),%edx
c1005cd7:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005cdc:	8b 40 20             	mov    0x20(%eax),%eax
c1005cdf:	83 ec 04             	sub    $0x4,%esp
c1005ce2:	51                   	push   %ecx
c1005ce3:	52                   	push   %edx
c1005ce4:	50                   	push   %eax
c1005ce5:	e8 d6 f7 ff ff       	call   c10054c0 <ide_read>
c1005cea:	83 c4 10             	add    $0x10,%esp
c1005ced:	e8 29 eb ff ff       	call   c100481b <clear>
c1005cf2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005cf7:	8b 40 10             	mov    0x10(%eax),%eax
c1005cfa:	8b 00                	mov    (%eax),%eax
c1005cfc:	83 ec 08             	sub    $0x8,%esp
c1005cff:	50                   	push   %eax
c1005d00:	68 f4 a9 00 c1       	push   $0xc100a9f4
c1005d05:	e8 0e ef ff ff       	call   c1004c18 <printk>
c1005d0a:	83 c4 10             	add    $0x10,%esp
c1005d0d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005d12:	8b 40 10             	mov    0x10(%eax),%eax
c1005d15:	8b 40 04             	mov    0x4(%eax),%eax
c1005d18:	83 ec 08             	sub    $0x8,%esp
c1005d1b:	50                   	push   %eax
c1005d1c:	68 04 aa 00 c1       	push   $0xc100aa04
c1005d21:	e8 f2 ee ff ff       	call   c1004c18 <printk>
c1005d26:	83 c4 10             	add    $0x10,%esp
c1005d29:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005d2e:	8b 40 10             	mov    0x10(%eax),%eax
c1005d31:	8b 40 08             	mov    0x8(%eax),%eax
c1005d34:	83 ec 08             	sub    $0x8,%esp
c1005d37:	50                   	push   %eax
c1005d38:	68 16 aa 00 c1       	push   $0xc100aa16
c1005d3d:	e8 d6 ee ff ff       	call   c1004c18 <printk>
c1005d42:	83 c4 10             	add    $0x10,%esp
c1005d45:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005d4a:	8b 40 10             	mov    0x10(%eax),%eax
c1005d4d:	8b 40 10             	mov    0x10(%eax),%eax
c1005d50:	83 ec 08             	sub    $0x8,%esp
c1005d53:	50                   	push   %eax
c1005d54:	68 2a aa 00 c1       	push   $0xc100aa2a
c1005d59:	e8 ba ee ff ff       	call   c1004c18 <printk>
c1005d5e:	83 c4 10             	add    $0x10,%esp
c1005d61:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005d66:	8b 40 10             	mov    0x10(%eax),%eax
c1005d69:	8b 40 14             	mov    0x14(%eax),%eax
c1005d6c:	83 ec 08             	sub    $0x8,%esp
c1005d6f:	50                   	push   %eax
c1005d70:	68 45 aa 00 c1       	push   $0xc100aa45
c1005d75:	e8 9e ee ff ff       	call   c1004c18 <printk>
c1005d7a:	83 c4 10             	add    $0x10,%esp
c1005d7d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005d82:	8b 40 10             	mov    0x10(%eax),%eax
c1005d85:	8b 40 18             	mov    0x18(%eax),%eax
c1005d88:	83 ec 08             	sub    $0x8,%esp
c1005d8b:	50                   	push   %eax
c1005d8c:	68 62 aa 00 c1       	push   $0xc100aa62
c1005d91:	e8 82 ee ff ff       	call   c1004c18 <printk>
c1005d96:	83 c4 10             	add    $0x10,%esp
c1005d99:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005d9e:	8b 40 10             	mov    0x10(%eax),%eax
c1005da1:	8b 40 1c             	mov    0x1c(%eax),%eax
c1005da4:	83 ec 08             	sub    $0x8,%esp
c1005da7:	50                   	push   %eax
c1005da8:	68 7d aa 00 c1       	push   $0xc100aa7d
c1005dad:	e8 66 ee ff ff       	call   c1004c18 <printk>
c1005db2:	83 c4 10             	add    $0x10,%esp
c1005db5:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005dba:	8b 40 10             	mov    0x10(%eax),%eax
c1005dbd:	8b 40 20             	mov    0x20(%eax),%eax
c1005dc0:	83 ec 08             	sub    $0x8,%esp
c1005dc3:	50                   	push   %eax
c1005dc4:	68 9a aa 00 c1       	push   $0xc100aa9a
c1005dc9:	e8 4a ee ff ff       	call   c1004c18 <printk>
c1005dce:	83 c4 10             	add    $0x10,%esp
c1005dd1:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005dd6:	8b 40 10             	mov    0x10(%eax),%eax
c1005dd9:	8b 40 24             	mov    0x24(%eax),%eax
c1005ddc:	83 ec 08             	sub    $0x8,%esp
c1005ddf:	50                   	push   %eax
c1005de0:	68 b4 aa 00 c1       	push   $0xc100aab4
c1005de5:	e8 2e ee ff ff       	call   c1004c18 <printk>
c1005dea:	83 c4 10             	add    $0x10,%esp
c1005ded:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005df2:	8b 40 10             	mov    0x10(%eax),%eax
c1005df5:	8b 40 28             	mov    0x28(%eax),%eax
c1005df8:	83 ec 08             	sub    $0x8,%esp
c1005dfb:	50                   	push   %eax
c1005dfc:	68 d0 aa 00 c1       	push   $0xc100aad0
c1005e01:	e8 12 ee ff ff       	call   c1004c18 <printk>
c1005e06:	83 c4 10             	add    $0x10,%esp
c1005e09:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005e0e:	8b 40 18             	mov    0x18(%eax),%eax
c1005e11:	83 ec 08             	sub    $0x8,%esp
c1005e14:	50                   	push   %eax
c1005e15:	68 f0 aa 00 c1       	push   $0xc100aaf0
c1005e1a:	e8 f9 ed ff ff       	call   c1004c18 <printk>
c1005e1f:	83 c4 10             	add    $0x10,%esp
c1005e22:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005e27:	8b 40 14             	mov    0x14(%eax),%eax
c1005e2a:	83 ec 08             	sub    $0x8,%esp
c1005e2d:	50                   	push   %eax
c1005e2e:	68 14 ab 00 c1       	push   $0xc100ab14
c1005e33:	e8 e0 ed ff ff       	call   c1004c18 <printk>
c1005e38:	83 c4 10             	add    $0x10,%esp
c1005e3b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005e40:	8b 40 20             	mov    0x20(%eax),%eax
c1005e43:	83 ec 08             	sub    $0x8,%esp
c1005e46:	50                   	push   %eax
c1005e47:	68 44 ab 00 c1       	push   $0xc100ab44
c1005e4c:	e8 c7 ed ff ff       	call   c1004c18 <printk>
c1005e51:	83 c4 10             	add    $0x10,%esp
c1005e54:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005e59:	8b 40 1c             	mov    0x1c(%eax),%eax
c1005e5c:	83 ec 08             	sub    $0x8,%esp
c1005e5f:	50                   	push   %eax
c1005e60:	68 68 ab 00 c1       	push   $0xc100ab68
c1005e65:	e8 ae ed ff ff       	call   c1004c18 <printk>
c1005e6a:	83 c4 10             	add    $0x10,%esp
c1005e6d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005e72:	83 ec 0c             	sub    $0xc,%esp
c1005e75:	50                   	push   %eax
c1005e76:	e8 36 19 00 00       	call   c10077b1 <open_root_dir>
c1005e7b:	83 c4 10             	add    $0x10,%esp
c1005e7e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005e85:	eb 1d                	jmp    c1005ea4 <mount_partition+0x2b9>
c1005e87:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005e8a:	8d 42 01             	lea    0x1(%edx),%eax
c1005e8d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005e90:	89 d0                	mov    %edx,%eax
c1005e92:	01 c0                	add    %eax,%eax
c1005e94:	01 d0                	add    %edx,%eax
c1005e96:	c1 e0 02             	shl    $0x2,%eax
c1005e99:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1005e9e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005ea4:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1005ea8:	76 dd                	jbe    c1005e87 <mount_partition+0x29c>
c1005eaa:	90                   	nop
c1005eab:	90                   	nop
c1005eac:	c9                   	leave  
c1005ead:	c3                   	ret    

c1005eae <path_parse>:
c1005eae:	55                   	push   %ebp
c1005eaf:	89 e5                	mov    %esp,%ebp
c1005eb1:	8b 45 08             	mov    0x8(%ebp),%eax
c1005eb4:	0f b6 00             	movzbl (%eax),%eax
c1005eb7:	3c 2f                	cmp    $0x2f,%al
c1005eb9:	75 27                	jne    c1005ee2 <path_parse+0x34>
c1005ebb:	83 45 08 01          	addl   $0x1,0x8(%ebp)
c1005ebf:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ec2:	0f b6 00             	movzbl (%eax),%eax
c1005ec5:	3c 2f                	cmp    $0x2f,%al
c1005ec7:	74 f2                	je     c1005ebb <path_parse+0xd>
c1005ec9:	eb 17                	jmp    c1005ee2 <path_parse+0x34>
c1005ecb:	8b 55 08             	mov    0x8(%ebp),%edx
c1005ece:	8d 42 01             	lea    0x1(%edx),%eax
c1005ed1:	89 45 08             	mov    %eax,0x8(%ebp)
c1005ed4:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005ed7:	8d 48 01             	lea    0x1(%eax),%ecx
c1005eda:	89 4d 0c             	mov    %ecx,0xc(%ebp)
c1005edd:	0f b6 12             	movzbl (%edx),%edx
c1005ee0:	88 10                	mov    %dl,(%eax)
c1005ee2:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ee5:	0f b6 00             	movzbl (%eax),%eax
c1005ee8:	3c 2f                	cmp    $0x2f,%al
c1005eea:	74 0a                	je     c1005ef6 <path_parse+0x48>
c1005eec:	8b 45 08             	mov    0x8(%ebp),%eax
c1005eef:	0f b6 00             	movzbl (%eax),%eax
c1005ef2:	84 c0                	test   %al,%al
c1005ef4:	75 d5                	jne    c1005ecb <path_parse+0x1d>
c1005ef6:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ef9:	0f b6 00             	movzbl (%eax),%eax
c1005efc:	84 c0                	test   %al,%al
c1005efe:	75 07                	jne    c1005f07 <path_parse+0x59>
c1005f00:	b8 00 00 00 00       	mov    $0x0,%eax
c1005f05:	eb 03                	jmp    c1005f0a <path_parse+0x5c>
c1005f07:	8b 45 08             	mov    0x8(%ebp),%eax
c1005f0a:	5d                   	pop    %ebp
c1005f0b:	c3                   	ret    

c1005f0c <path_depth_cnt>:
c1005f0c:	55                   	push   %ebp
c1005f0d:	89 e5                	mov    %esp,%ebp
c1005f0f:	83 ec 28             	sub    $0x28,%esp
c1005f12:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1005f16:	75 19                	jne    c1005f31 <path_depth_cnt+0x25>
c1005f18:	68 95 ab 00 c1       	push   $0xc100ab95
c1005f1d:	68 70 b2 00 c1       	push   $0xc100b270
c1005f22:	68 d1 00 00 00       	push   $0xd1
c1005f27:	68 a8 ab 00 c1       	push   $0xc100aba8
c1005f2c:	e8 dc a3 ff ff       	call   c100030d <__PANIC>
c1005f31:	8b 45 08             	mov    0x8(%ebp),%eax
c1005f34:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005f37:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1005f3e:	83 ec 08             	sub    $0x8,%esp
c1005f41:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1005f44:	50                   	push   %eax
c1005f45:	ff 75 f4             	pushl  -0xc(%ebp)
c1005f48:	e8 61 ff ff ff       	call   c1005eae <path_parse>
c1005f4d:	83 c4 10             	add    $0x10,%esp
c1005f50:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005f53:	eb 32                	jmp    c1005f87 <path_depth_cnt+0x7b>
c1005f55:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1005f59:	83 ec 04             	sub    $0x4,%esp
c1005f5c:	6a 10                	push   $0x10
c1005f5e:	6a 00                	push   $0x0
c1005f60:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1005f63:	50                   	push   %eax
c1005f64:	e8 41 a1 ff ff       	call   c10000aa <memset>
c1005f69:	83 c4 10             	add    $0x10,%esp
c1005f6c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1005f70:	74 15                	je     c1005f87 <path_depth_cnt+0x7b>
c1005f72:	83 ec 08             	sub    $0x8,%esp
c1005f75:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1005f78:	50                   	push   %eax
c1005f79:	ff 75 f4             	pushl  -0xc(%ebp)
c1005f7c:	e8 2d ff ff ff       	call   c1005eae <path_parse>
c1005f81:	83 c4 10             	add    $0x10,%esp
c1005f84:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005f87:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1005f8b:	84 c0                	test   %al,%al
c1005f8d:	75 c6                	jne    c1005f55 <path_depth_cnt+0x49>
c1005f8f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005f92:	c9                   	leave  
c1005f93:	c3                   	ret    

c1005f94 <search_file>:
c1005f94:	55                   	push   %ebp
c1005f95:	89 e5                	mov    %esp,%ebp
c1005f97:	57                   	push   %edi
c1005f98:	53                   	push   %ebx
c1005f99:	83 ec 40             	sub    $0x40,%esp
c1005f9c:	83 ec 08             	sub    $0x8,%esp
c1005f9f:	68 d7 ab 00 c1       	push   $0xc100abd7
c1005fa4:	ff 75 08             	pushl  0x8(%ebp)
c1005fa7:	e8 d7 a1 ff ff       	call   c1000183 <strcmp>
c1005fac:	83 c4 10             	add    $0x10,%esp
c1005faf:	85 c0                	test   %eax,%eax
c1005fb1:	74 2e                	je     c1005fe1 <search_file+0x4d>
c1005fb3:	83 ec 08             	sub    $0x8,%esp
c1005fb6:	68 d9 ab 00 c1       	push   $0xc100abd9
c1005fbb:	ff 75 08             	pushl  0x8(%ebp)
c1005fbe:	e8 c0 a1 ff ff       	call   c1000183 <strcmp>
c1005fc3:	83 c4 10             	add    $0x10,%esp
c1005fc6:	85 c0                	test   %eax,%eax
c1005fc8:	74 17                	je     c1005fe1 <search_file+0x4d>
c1005fca:	83 ec 08             	sub    $0x8,%esp
c1005fcd:	68 dc ab 00 c1       	push   $0xc100abdc
c1005fd2:	ff 75 08             	pushl  0x8(%ebp)
c1005fd5:	e8 a9 a1 ff ff       	call   c1000183 <strcmp>
c1005fda:	83 c4 10             	add    $0x10,%esp
c1005fdd:	85 c0                	test   %eax,%eax
c1005fdf:	75 2c                	jne    c100600d <search_file+0x79>
c1005fe1:	8b 15 34 32 a1 c1    	mov    0xc1a13234,%edx
c1005fe7:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005fea:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1005ff0:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005ff3:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1005ffa:	00 00 00 
c1005ffd:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006000:	c6 00 00             	movb   $0x0,(%eax)
c1006003:	b8 00 00 00 00       	mov    $0x0,%eax
c1006008:	e9 10 02 00 00       	jmp    c100621d <search_file+0x289>
c100600d:	83 ec 0c             	sub    $0xc,%esp
c1006010:	ff 75 08             	pushl  0x8(%ebp)
c1006013:	e8 06 a1 ff ff       	call   c100011e <strlen>
c1006018:	83 c4 10             	add    $0x10,%esp
c100601b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100601e:	8b 45 08             	mov    0x8(%ebp),%eax
c1006021:	0f b6 00             	movzbl (%eax),%eax
c1006024:	3c 2f                	cmp    $0x2f,%al
c1006026:	75 0f                	jne    c1006037 <search_file+0xa3>
c1006028:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c100602c:	76 09                	jbe    c1006037 <search_file+0xa3>
c100602e:	81 7d e8 ff 01 00 00 	cmpl   $0x1ff,-0x18(%ebp)
c1006035:	76 19                	jbe    c1006050 <search_file+0xbc>
c1006037:	68 e0 ab 00 c1       	push   $0xc100abe0
c100603c:	68 80 b2 00 c1       	push   $0xc100b280
c1006041:	68 ee 00 00 00       	push   $0xee
c1006046:	68 a8 ab 00 c1       	push   $0xc100aba8
c100604b:	e8 bd a2 ff ff       	call   c100030d <__PANIC>
c1006050:	8b 45 08             	mov    0x8(%ebp),%eax
c1006053:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006056:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c100605b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100605e:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
c1006065:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
c100606c:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
c1006073:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
c100607a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100607d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006080:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006086:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006089:	c7 80 04 02 00 00 00 	movl   $0x0,0x204(%eax)
c1006090:	00 00 00 
c1006093:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100609a:	83 ec 08             	sub    $0x8,%esp
c100609d:	8d 45 c0             	lea    -0x40(%ebp),%eax
c10060a0:	50                   	push   %eax
c10060a1:	ff 75 f4             	pushl  -0xc(%ebp)
c10060a4:	e8 05 fe ff ff       	call   c1005eae <path_parse>
c10060a9:	83 c4 10             	add    $0x10,%esp
c10060ac:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10060af:	e9 1b 01 00 00       	jmp    c10061cf <search_file+0x23b>
c10060b4:	8b 45 0c             	mov    0xc(%ebp),%eax
c10060b7:	83 ec 0c             	sub    $0xc,%esp
c10060ba:	50                   	push   %eax
c10060bb:	e8 5e a0 ff ff       	call   c100011e <strlen>
c10060c0:	83 c4 10             	add    $0x10,%esp
c10060c3:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c10060c8:	76 19                	jbe    c10060e3 <search_file+0x14f>
c10060ca:	68 20 ac 00 c1       	push   $0xc100ac20
c10060cf:	68 80 b2 00 c1       	push   $0xc100b280
c10060d4:	68 ff 00 00 00       	push   $0xff
c10060d9:	68 a8 ab 00 c1       	push   $0xc100aba8
c10060de:	e8 2a a2 ff ff       	call   c100030d <__PANIC>
c10060e3:	8b 55 0c             	mov    0xc(%ebp),%edx
c10060e6:	89 d0                	mov    %edx,%eax
c10060e8:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c10060ed:	89 c3                	mov    %eax,%ebx
c10060ef:	b8 00 00 00 00       	mov    $0x0,%eax
c10060f4:	89 df                	mov    %ebx,%edi
c10060f6:	f2 ae                	repnz scas %es:(%edi),%al
c10060f8:	89 c8                	mov    %ecx,%eax
c10060fa:	f7 d0                	not    %eax
c10060fc:	83 e8 01             	sub    $0x1,%eax
c10060ff:	01 d0                	add    %edx,%eax
c1006101:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1006106:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006109:	83 ec 08             	sub    $0x8,%esp
c100610c:	8d 55 c0             	lea    -0x40(%ebp),%edx
c100610f:	52                   	push   %edx
c1006110:	50                   	push   %eax
c1006111:	e8 bf a0 ff ff       	call   c10001d5 <strcat>
c1006116:	83 c4 10             	add    $0x10,%esp
c1006119:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100611e:	8d 55 d0             	lea    -0x30(%ebp),%edx
c1006121:	52                   	push   %edx
c1006122:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1006125:	52                   	push   %edx
c1006126:	ff 75 f0             	pushl  -0x10(%ebp)
c1006129:	50                   	push   %eax
c100612a:	e8 44 17 00 00       	call   c1007873 <search_dir_entry>
c100612f:	83 c4 10             	add    $0x10,%esp
c1006132:	84 c0                	test   %al,%al
c1006134:	0f 84 8e 00 00 00    	je     c10061c8 <search_file+0x234>
c100613a:	83 ec 04             	sub    $0x4,%esp
c100613d:	6a 10                	push   $0x10
c100613f:	6a 00                	push   $0x0
c1006141:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006144:	50                   	push   %eax
c1006145:	e8 60 9f ff ff       	call   c10000aa <memset>
c100614a:	83 c4 10             	add    $0x10,%esp
c100614d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006151:	74 15                	je     c1006168 <search_file+0x1d4>
c1006153:	83 ec 08             	sub    $0x8,%esp
c1006156:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006159:	50                   	push   %eax
c100615a:	ff 75 f4             	pushl  -0xc(%ebp)
c100615d:	e8 4c fd ff ff       	call   c1005eae <path_parse>
c1006162:	83 c4 10             	add    $0x10,%esp
c1006165:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006168:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100616b:	83 f8 02             	cmp    $0x2,%eax
c100616e:	75 3e                	jne    c10061ae <search_file+0x21a>
c1006170:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006173:	8b 00                	mov    (%eax),%eax
c1006175:	8b 00                	mov    (%eax),%eax
c1006177:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100617a:	83 ec 0c             	sub    $0xc,%esp
c100617d:	ff 75 f0             	pushl  -0x10(%ebp)
c1006180:	e8 da 18 00 00       	call   c1007a5f <dir_close>
c1006185:	83 c4 10             	add    $0x10,%esp
c1006188:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100618b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006190:	83 ec 08             	sub    $0x8,%esp
c1006193:	52                   	push   %edx
c1006194:	50                   	push   %eax
c1006195:	e8 99 16 00 00       	call   c1007833 <dir_open>
c100619a:	83 c4 10             	add    $0x10,%esp
c100619d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10061a0:	8b 45 0c             	mov    0xc(%ebp),%eax
c10061a3:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10061a6:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c10061ac:	eb 21                	jmp    c10061cf <search_file+0x23b>
c10061ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10061b1:	83 f8 01             	cmp    $0x1,%eax
c10061b4:	75 19                	jne    c10061cf <search_file+0x23b>
c10061b6:	8b 45 0c             	mov    0xc(%ebp),%eax
c10061b9:	c7 80 04 02 00 00 01 	movl   $0x1,0x204(%eax)
c10061c0:	00 00 00 
c10061c3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10061c6:	eb 55                	jmp    c100621d <search_file+0x289>
c10061c8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10061cd:	eb 4e                	jmp    c100621d <search_file+0x289>
c10061cf:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
c10061d3:	84 c0                	test   %al,%al
c10061d5:	0f 85 d9 fe ff ff    	jne    c10060b4 <search_file+0x120>
c10061db:	8b 45 0c             	mov    0xc(%ebp),%eax
c10061de:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
c10061e4:	83 ec 0c             	sub    $0xc,%esp
c10061e7:	50                   	push   %eax
c10061e8:	e8 72 18 00 00       	call   c1007a5f <dir_close>
c10061ed:	83 c4 10             	add    $0x10,%esp
c10061f0:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10061f5:	83 ec 08             	sub    $0x8,%esp
c10061f8:	ff 75 ec             	pushl  -0x14(%ebp)
c10061fb:	50                   	push   %eax
c10061fc:	e8 32 16 00 00       	call   c1007833 <dir_open>
c1006201:	83 c4 10             	add    $0x10,%esp
c1006204:	8b 55 0c             	mov    0xc(%ebp),%edx
c1006207:	89 82 00 02 00 00    	mov    %eax,0x200(%edx)
c100620d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006210:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1006217:	00 00 00 
c100621a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100621d:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1006220:	5b                   	pop    %ebx
c1006221:	5f                   	pop    %edi
c1006222:	5d                   	pop    %ebp
c1006223:	c3                   	ret    

c1006224 <sys_open>:
c1006224:	55                   	push   %ebp
c1006225:	89 e5                	mov    %esp,%ebp
c1006227:	53                   	push   %ebx
c1006228:	81 ec 34 02 00 00    	sub    $0x234,%esp
c100622e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006231:	88 85 d4 fd ff ff    	mov    %al,-0x22c(%ebp)
c1006237:	83 ec 0c             	sub    $0xc,%esp
c100623a:	ff 75 08             	pushl  0x8(%ebp)
c100623d:	e8 dc 9e ff ff       	call   c100011e <strlen>
c1006242:	83 c4 10             	add    $0x10,%esp
c1006245:	8d 50 ff             	lea    -0x1(%eax),%edx
c1006248:	8b 45 08             	mov    0x8(%ebp),%eax
c100624b:	01 d0                	add    %edx,%eax
c100624d:	0f b6 00             	movzbl (%eax),%eax
c1006250:	3c 2f                	cmp    $0x2f,%al
c1006252:	75 1d                	jne    c1006271 <sys_open+0x4d>
c1006254:	83 ec 08             	sub    $0x8,%esp
c1006257:	ff 75 08             	pushl  0x8(%ebp)
c100625a:	68 4d ac 00 c1       	push   $0xc100ac4d
c100625f:	e8 b4 e9 ff ff       	call   c1004c18 <printk>
c1006264:	83 c4 10             	add    $0x10,%esp
c1006267:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100626c:	e9 35 02 00 00       	jmp    c10064a6 <sys_open+0x282>
c1006271:	80 bd d4 fd ff ff 07 	cmpb   $0x7,-0x22c(%ebp)
c1006278:	76 19                	jbe    c1006293 <sys_open+0x6f>
c100627a:	68 68 ac 00 c1       	push   $0xc100ac68
c100627f:	68 8c b2 00 c1       	push   $0xc100b28c
c1006284:	68 2d 01 00 00       	push   $0x12d
c1006289:	68 a8 ab 00 c1       	push   $0xc100aba8
c100628e:	e8 7a a0 ff ff       	call   c100030d <__PANIC>
c1006293:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c100629a:	83 ec 04             	sub    $0x4,%esp
c100629d:	68 08 02 00 00       	push   $0x208
c10062a2:	6a 00                	push   $0x0
c10062a4:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c10062aa:	50                   	push   %eax
c10062ab:	e8 fa 9d ff ff       	call   c10000aa <memset>
c10062b0:	83 c4 10             	add    $0x10,%esp
c10062b3:	83 ec 0c             	sub    $0xc,%esp
c10062b6:	ff 75 08             	pushl  0x8(%ebp)
c10062b9:	e8 4e fc ff ff       	call   c1005f0c <path_depth_cnt>
c10062be:	83 c4 10             	add    $0x10,%esp
c10062c1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10062c4:	83 ec 08             	sub    $0x8,%esp
c10062c7:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c10062cd:	50                   	push   %eax
c10062ce:	ff 75 08             	pushl  0x8(%ebp)
c10062d1:	e8 be fc ff ff       	call   c1005f94 <search_file>
c10062d6:	83 c4 10             	add    $0x10,%esp
c10062d9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10062dc:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
c10062e0:	0f 95 c0             	setne  %al
c10062e3:	88 45 eb             	mov    %al,-0x15(%ebp)
c10062e6:	0f be 45 eb          	movsbl -0x15(%ebp),%eax
c10062ea:	83 ec 08             	sub    $0x8,%esp
c10062ed:	50                   	push   %eax
c10062ee:	68 73 ac 00 c1       	push   $0xc100ac73
c10062f3:	e8 20 e9 ff ff       	call   c1004c18 <printk>
c10062f8:	83 c4 10             	add    $0x10,%esp
c10062fb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10062fe:	83 f8 02             	cmp    $0x2,%eax
c1006301:	75 29                	jne    c100632c <sys_open+0x108>
c1006303:	83 ec 0c             	sub    $0xc,%esp
c1006306:	68 84 ac 00 c1       	push   $0xc100ac84
c100630b:	e8 08 e9 ff ff       	call   c1004c18 <printk>
c1006310:	83 c4 10             	add    $0x10,%esp
c1006313:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006316:	83 ec 0c             	sub    $0xc,%esp
c1006319:	50                   	push   %eax
c100631a:	e8 40 17 00 00       	call   c1007a5f <dir_close>
c100631f:	83 c4 10             	add    $0x10,%esp
c1006322:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006327:	e9 7a 01 00 00       	jmp    c10064a6 <sys_open+0x282>
c100632c:	83 ec 0c             	sub    $0xc,%esp
c100632f:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006335:	50                   	push   %eax
c1006336:	e8 d1 fb ff ff       	call   c1005f0c <path_depth_cnt>
c100633b:	83 c4 10             	add    $0x10,%esp
c100633e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006341:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006344:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1006347:	74 33                	je     c100637c <sys_open+0x158>
c1006349:	83 ec 04             	sub    $0x4,%esp
c100634c:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006352:	50                   	push   %eax
c1006353:	ff 75 08             	pushl  0x8(%ebp)
c1006356:	68 c4 ac 00 c1       	push   $0xc100acc4
c100635b:	e8 b8 e8 ff ff       	call   c1004c18 <printk>
c1006360:	83 c4 10             	add    $0x10,%esp
c1006363:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006366:	83 ec 0c             	sub    $0xc,%esp
c1006369:	50                   	push   %eax
c100636a:	e8 f0 16 00 00       	call   c1007a5f <dir_close>
c100636f:	83 c4 10             	add    $0x10,%esp
c1006372:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006377:	e9 2a 01 00 00       	jmp    c10064a6 <sys_open+0x282>
c100637c:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006380:	75 56                	jne    c10063d8 <sys_open+0x1b4>
c1006382:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006389:	83 e0 04             	and    $0x4,%eax
c100638c:	85 c0                	test   %eax,%eax
c100638e:	75 48                	jne    c10063d8 <sys_open+0x1b4>
c1006390:	83 ec 08             	sub    $0x8,%esp
c1006393:	6a 2f                	push   $0x2f
c1006395:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c100639b:	50                   	push   %eax
c100639c:	e8 f5 9d ff ff       	call   c1000196 <strrchr>
c10063a1:	83 c4 10             	add    $0x10,%esp
c10063a4:	83 c0 01             	add    $0x1,%eax
c10063a7:	83 ec 04             	sub    $0x4,%esp
c10063aa:	50                   	push   %eax
c10063ab:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c10063b1:	50                   	push   %eax
c10063b2:	68 00 ad 00 c1       	push   $0xc100ad00
c10063b7:	e8 5c e8 ff ff       	call   c1004c18 <printk>
c10063bc:	83 c4 10             	add    $0x10,%esp
c10063bf:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10063c2:	83 ec 0c             	sub    $0xc,%esp
c10063c5:	50                   	push   %eax
c10063c6:	e8 94 16 00 00       	call   c1007a5f <dir_close>
c10063cb:	83 c4 10             	add    $0x10,%esp
c10063ce:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10063d3:	e9 ce 00 00 00       	jmp    c10064a6 <sys_open+0x282>
c10063d8:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c10063dc:	74 3a                	je     c1006418 <sys_open+0x1f4>
c10063de:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c10063e5:	83 e0 04             	and    $0x4,%eax
c10063e8:	85 c0                	test   %eax,%eax
c10063ea:	74 2c                	je     c1006418 <sys_open+0x1f4>
c10063ec:	83 ec 08             	sub    $0x8,%esp
c10063ef:	ff 75 08             	pushl  0x8(%ebp)
c10063f2:	68 20 ad 00 c1       	push   $0xc100ad20
c10063f7:	e8 1c e8 ff ff       	call   c1004c18 <printk>
c10063fc:	83 c4 10             	add    $0x10,%esp
c10063ff:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006402:	83 ec 0c             	sub    $0xc,%esp
c1006405:	50                   	push   %eax
c1006406:	e8 54 16 00 00       	call   c1007a5f <dir_close>
c100640b:	83 c4 10             	add    $0x10,%esp
c100640e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006413:	e9 8e 00 00 00       	jmp    c10064a6 <sys_open+0x282>
c1006418:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c100641f:	83 e0 04             	and    $0x4,%eax
c1006422:	83 f8 04             	cmp    $0x4,%eax
c1006425:	75 4f                	jne    c1006476 <sys_open+0x252>
c1006427:	83 ec 0c             	sub    $0xc,%esp
c100642a:	68 37 ad 00 c1       	push   $0xc100ad37
c100642f:	e8 e4 e7 ff ff       	call   c1004c18 <printk>
c1006434:	83 c4 10             	add    $0x10,%esp
c1006437:	0f b6 9d d4 fd ff ff 	movzbl -0x22c(%ebp),%ebx
c100643e:	83 ec 08             	sub    $0x8,%esp
c1006441:	6a 2f                	push   $0x2f
c1006443:	ff 75 08             	pushl  0x8(%ebp)
c1006446:	e8 4b 9d ff ff       	call   c1000196 <strrchr>
c100644b:	83 c4 10             	add    $0x10,%esp
c100644e:	8d 50 01             	lea    0x1(%eax),%edx
c1006451:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006454:	83 ec 04             	sub    $0x4,%esp
c1006457:	53                   	push   %ebx
c1006458:	52                   	push   %edx
c1006459:	50                   	push   %eax
c100645a:	e8 08 25 00 00       	call   c1008967 <file_create>
c100645f:	83 c4 10             	add    $0x10,%esp
c1006462:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006465:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006468:	83 ec 0c             	sub    $0xc,%esp
c100646b:	50                   	push   %eax
c100646c:	e8 ee 15 00 00       	call   c1007a5f <dir_close>
c1006471:	83 c4 10             	add    $0x10,%esp
c1006474:	eb 2d                	jmp    c10064a3 <sys_open+0x27f>
c1006476:	83 ec 08             	sub    $0x8,%esp
c1006479:	ff 75 ec             	pushl  -0x14(%ebp)
c100647c:	68 46 ad 00 c1       	push   $0xc100ad46
c1006481:	e8 92 e7 ff ff       	call   c1004c18 <printk>
c1006486:	83 c4 10             	add    $0x10,%esp
c1006489:	0f b6 95 d4 fd ff ff 	movzbl -0x22c(%ebp),%edx
c1006490:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006493:	83 ec 08             	sub    $0x8,%esp
c1006496:	52                   	push   %edx
c1006497:	50                   	push   %eax
c1006498:	e8 ac 27 00 00       	call   c1008c49 <file_open>
c100649d:	83 c4 10             	add    $0x10,%esp
c10064a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10064a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10064a6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10064a9:	c9                   	leave  
c10064aa:	c3                   	ret    

c10064ab <fd_local2global>:
c10064ab:	55                   	push   %ebp
c10064ac:	89 e5                	mov    %esp,%ebp
c10064ae:	83 ec 18             	sub    $0x18,%esp
c10064b1:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10064b6:	8b 55 08             	mov    0x8(%ebp),%edx
c10064b9:	83 c2 1c             	add    $0x1c,%edx
c10064bc:	8b 04 90             	mov    (%eax,%edx,4),%eax
c10064bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10064c2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10064c6:	78 06                	js     c10064ce <fd_local2global+0x23>
c10064c8:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c10064cc:	7e 19                	jle    c10064e7 <fd_local2global+0x3c>
c10064ce:	68 58 ad 00 c1       	push   $0xc100ad58
c10064d3:	68 98 b2 00 c1       	push   $0xc100b298
c10064d8:	68 6c 01 00 00       	push   $0x16c
c10064dd:	68 a8 ab 00 c1       	push   $0xc100aba8
c10064e2:	e8 26 9e ff ff       	call   c100030d <__PANIC>
c10064e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10064ea:	c9                   	leave  
c10064eb:	c3                   	ret    

c10064ec <sys_close>:
c10064ec:	55                   	push   %ebp
c10064ed:	89 e5                	mov    %esp,%ebp
c10064ef:	83 ec 18             	sub    $0x18,%esp
c10064f2:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10064f9:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c10064fd:	7e 44                	jle    c1006543 <sys_close+0x57>
c10064ff:	8b 45 08             	mov    0x8(%ebp),%eax
c1006502:	83 ec 0c             	sub    $0xc,%esp
c1006505:	50                   	push   %eax
c1006506:	e8 a0 ff ff ff       	call   c10064ab <fd_local2global>
c100650b:	83 c4 10             	add    $0x10,%esp
c100650e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006511:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006514:	89 d0                	mov    %edx,%eax
c1006516:	01 c0                	add    %eax,%eax
c1006518:	01 d0                	add    %edx,%eax
c100651a:	c1 e0 02             	shl    $0x2,%eax
c100651d:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1006522:	83 ec 0c             	sub    $0xc,%esp
c1006525:	50                   	push   %eax
c1006526:	e8 6e 28 00 00       	call   c1008d99 <file_close>
c100652b:	83 c4 10             	add    $0x10,%esp
c100652e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006531:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1006536:	8b 55 08             	mov    0x8(%ebp),%edx
c1006539:	83 c2 1c             	add    $0x1c,%edx
c100653c:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1006543:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006546:	c9                   	leave  
c1006547:	c3                   	ret    

c1006548 <sys_write>:
c1006548:	55                   	push   %ebp
c1006549:	89 e5                	mov    %esp,%ebp
c100654b:	57                   	push   %edi
c100654c:	81 ec 14 04 00 00    	sub    $0x414,%esp
c1006552:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006556:	79 1a                	jns    c1006572 <sys_write+0x2a>
c1006558:	83 ec 0c             	sub    $0xc,%esp
c100655b:	68 84 ad 00 c1       	push   $0xc100ad84
c1006560:	e8 b3 e6 ff ff       	call   c1004c18 <printk>
c1006565:	83 c4 10             	add    $0x10,%esp
c1006568:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100656d:	e9 c4 00 00 00       	jmp    c1006636 <sys_write+0xee>
c1006572:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1006576:	75 4d                	jne    c10065c5 <sys_write+0x7d>
c1006578:	c7 85 ec fb ff ff 00 	movl   $0x0,-0x414(%ebp)
c100657f:	00 00 00 
c1006582:	8d 95 f0 fb ff ff    	lea    -0x410(%ebp),%edx
c1006588:	b8 00 00 00 00       	mov    $0x0,%eax
c100658d:	b9 ff 00 00 00       	mov    $0xff,%ecx
c1006592:	89 d7                	mov    %edx,%edi
c1006594:	f3 ab                	rep stos %eax,%es:(%edi)
c1006596:	83 ec 04             	sub    $0x4,%esp
c1006599:	ff 75 10             	pushl  0x10(%ebp)
c100659c:	ff 75 0c             	pushl  0xc(%ebp)
c100659f:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c10065a5:	50                   	push   %eax
c10065a6:	e8 5d 9b ff ff       	call   c1000108 <memcpy>
c10065ab:	83 c4 10             	add    $0x10,%esp
c10065ae:	83 ec 0c             	sub    $0xc,%esp
c10065b1:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c10065b7:	50                   	push   %eax
c10065b8:	e8 5b e6 ff ff       	call   c1004c18 <printk>
c10065bd:	83 c4 10             	add    $0x10,%esp
c10065c0:	8b 45 10             	mov    0x10(%ebp),%eax
c10065c3:	eb 71                	jmp    c1006636 <sys_write+0xee>
c10065c5:	8b 45 08             	mov    0x8(%ebp),%eax
c10065c8:	83 ec 0c             	sub    $0xc,%esp
c10065cb:	50                   	push   %eax
c10065cc:	e8 da fe ff ff       	call   c10064ab <fd_local2global>
c10065d1:	83 c4 10             	add    $0x10,%esp
c10065d4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10065d7:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10065da:	89 d0                	mov    %edx,%eax
c10065dc:	01 c0                	add    %eax,%eax
c10065de:	01 d0                	add    %edx,%eax
c10065e0:	c1 e0 02             	shl    $0x2,%eax
c10065e3:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c10065e8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10065eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10065ee:	8b 40 04             	mov    0x4(%eax),%eax
c10065f1:	83 e0 01             	and    $0x1,%eax
c10065f4:	85 c0                	test   %eax,%eax
c10065f6:	75 0d                	jne    c1006605 <sys_write+0xbd>
c10065f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10065fb:	8b 40 04             	mov    0x4(%eax),%eax
c10065fe:	83 e0 02             	and    $0x2,%eax
c1006601:	85 c0                	test   %eax,%eax
c1006603:	74 1c                	je     c1006621 <sys_write+0xd9>
c1006605:	83 ec 04             	sub    $0x4,%esp
c1006608:	ff 75 10             	pushl  0x10(%ebp)
c100660b:	ff 75 0c             	pushl  0xc(%ebp)
c100660e:	ff 75 f0             	pushl  -0x10(%ebp)
c1006611:	e8 c3 27 00 00       	call   c1008dd9 <file_write>
c1006616:	83 c4 10             	add    $0x10,%esp
c1006619:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100661c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100661f:	eb 15                	jmp    c1006636 <sys_write+0xee>
c1006621:	83 ec 0c             	sub    $0xc,%esp
c1006624:	68 9c ad 00 c1       	push   $0xc100ad9c
c1006629:	e8 ea e5 ff ff       	call   c1004c18 <printk>
c100662e:	83 c4 10             	add    $0x10,%esp
c1006631:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006636:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1006639:	c9                   	leave  
c100663a:	c3                   	ret    

c100663b <sys_read>:
c100663b:	55                   	push   %ebp
c100663c:	89 e5                	mov    %esp,%ebp
c100663e:	83 ec 18             	sub    $0x18,%esp
c1006641:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
c1006645:	75 19                	jne    c1006660 <sys_read+0x25>
c1006647:	68 e2 ad 00 c1       	push   $0xc100ade2
c100664c:	68 a8 b2 00 c1       	push   $0xc100b2a8
c1006651:	68 92 01 00 00       	push   $0x192
c1006656:	68 a8 ab 00 c1       	push   $0xc100aba8
c100665b:	e8 ad 9c ff ff       	call   c100030d <__PANIC>
c1006660:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006667:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100666b:	78 0c                	js     c1006679 <sys_read+0x3e>
c100666d:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1006671:	74 06                	je     c1006679 <sys_read+0x3e>
c1006673:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c1006677:	75 15                	jne    c100668e <sys_read+0x53>
c1006679:	83 ec 0c             	sub    $0xc,%esp
c100667c:	68 ee ad 00 c1       	push   $0xc100adee
c1006681:	e8 92 e5 ff ff       	call   c1004c18 <printk>
c1006686:	83 c4 10             	add    $0x10,%esp
c1006689:	e9 a0 00 00 00       	jmp    c100672e <sys_read+0xf3>
c100668e:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006692:	75 62                	jne    c10066f6 <sys_read+0xbb>
c1006694:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006697:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100669a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10066a1:	0f b6 05 6c ec 00 c1 	movzbl 0xc100ec6c,%eax
c10066a8:	84 c0                	test   %al,%al
c10066aa:	75 2d                	jne    c10066d9 <sys_read+0x9e>
c10066ac:	83 ec 0c             	sub    $0xc,%esp
c10066af:	68 b4 0c 01 c1       	push   $0xc1010cb4
c10066b4:	e8 13 ea ff ff       	call   c10050cc <sema_down>
c10066b9:	83 c4 10             	add    $0x10,%esp
c10066bc:	eb 1b                	jmp    c10066d9 <sys_read+0x9e>
c10066be:	0f b6 15 6c ec 00 c1 	movzbl 0xc100ec6c,%edx
c10066c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10066c8:	88 10                	mov    %dl,(%eax)
c10066ca:	c6 05 6c ec 00 c1 00 	movb   $0x0,0xc100ec6c
c10066d1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10066d5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10066d9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10066dc:	3b 45 10             	cmp    0x10(%ebp),%eax
c10066df:	72 dd                	jb     c10066be <sys_read+0x83>
c10066e1:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10066e5:	74 05                	je     c10066ec <sys_read+0xb1>
c10066e7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10066ea:	eb 05                	jmp    c10066f1 <sys_read+0xb6>
c10066ec:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10066f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10066f4:	eb 38                	jmp    c100672e <sys_read+0xf3>
c10066f6:	8b 45 08             	mov    0x8(%ebp),%eax
c10066f9:	83 ec 0c             	sub    $0xc,%esp
c10066fc:	50                   	push   %eax
c10066fd:	e8 a9 fd ff ff       	call   c10064ab <fd_local2global>
c1006702:	83 c4 10             	add    $0x10,%esp
c1006705:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006708:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100670b:	89 d0                	mov    %edx,%eax
c100670d:	01 c0                	add    %eax,%eax
c100670f:	01 d0                	add    %edx,%eax
c1006711:	c1 e0 02             	shl    $0x2,%eax
c1006714:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1006719:	83 ec 04             	sub    $0x4,%esp
c100671c:	ff 75 10             	pushl  0x10(%ebp)
c100671f:	ff 75 0c             	pushl  0xc(%ebp)
c1006722:	50                   	push   %eax
c1006723:	e8 26 2e 00 00       	call   c100954e <file_read>
c1006728:	83 c4 10             	add    $0x10,%esp
c100672b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100672e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006731:	c9                   	leave  
c1006732:	c3                   	ret    

c1006733 <sys_lseek>:
c1006733:	55                   	push   %ebp
c1006734:	89 e5                	mov    %esp,%ebp
c1006736:	83 ec 28             	sub    $0x28,%esp
c1006739:	8b 45 10             	mov    0x10(%ebp),%eax
c100673c:	88 45 e4             	mov    %al,-0x1c(%ebp)
c100673f:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006743:	79 1a                	jns    c100675f <sys_lseek+0x2c>
c1006745:	83 ec 0c             	sub    $0xc,%esp
c1006748:	68 02 ae 00 c1       	push   $0xc100ae02
c100674d:	e8 c6 e4 ff ff       	call   c1004c18 <printk>
c1006752:	83 c4 10             	add    $0x10,%esp
c1006755:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100675a:	e9 be 00 00 00       	jmp    c100681d <sys_lseek+0xea>
c100675f:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
c1006763:	74 06                	je     c100676b <sys_lseek+0x38>
c1006765:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
c1006769:	76 19                	jbe    c1006784 <sys_lseek+0x51>
c100676b:	68 17 ae 00 c1       	push   $0xc100ae17
c1006770:	68 b4 b2 00 c1       	push   $0xc100b2b4
c1006775:	68 b2 01 00 00       	push   $0x1b2
c100677a:	68 a8 ab 00 c1       	push   $0xc100aba8
c100677f:	e8 89 9b ff ff       	call   c100030d <__PANIC>
c1006784:	8b 45 08             	mov    0x8(%ebp),%eax
c1006787:	83 ec 0c             	sub    $0xc,%esp
c100678a:	50                   	push   %eax
c100678b:	e8 1b fd ff ff       	call   c10064ab <fd_local2global>
c1006790:	83 c4 10             	add    $0x10,%esp
c1006793:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006796:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006799:	89 d0                	mov    %edx,%eax
c100679b:	01 c0                	add    %eax,%eax
c100679d:	01 d0                	add    %edx,%eax
c100679f:	c1 e0 02             	shl    $0x2,%eax
c10067a2:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c10067a7:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10067aa:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10067b1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10067b4:	8b 40 08             	mov    0x8(%eax),%eax
c10067b7:	8b 40 04             	mov    0x4(%eax),%eax
c10067ba:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10067bd:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10067c1:	83 f8 03             	cmp    $0x3,%eax
c10067c4:	74 2a                	je     c10067f0 <sys_lseek+0xbd>
c10067c6:	83 f8 03             	cmp    $0x3,%eax
c10067c9:	7f 30                	jg     c10067fb <sys_lseek+0xc8>
c10067cb:	83 f8 01             	cmp    $0x1,%eax
c10067ce:	74 07                	je     c10067d7 <sys_lseek+0xa4>
c10067d0:	83 f8 02             	cmp    $0x2,%eax
c10067d3:	74 0a                	je     c10067df <sys_lseek+0xac>
c10067d5:	eb 24                	jmp    c10067fb <sys_lseek+0xc8>
c10067d7:	8b 45 0c             	mov    0xc(%ebp),%eax
c10067da:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10067dd:	eb 1c                	jmp    c10067fb <sys_lseek+0xc8>
c10067df:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10067e2:	8b 00                	mov    (%eax),%eax
c10067e4:	89 c2                	mov    %eax,%edx
c10067e6:	8b 45 0c             	mov    0xc(%ebp),%eax
c10067e9:	01 d0                	add    %edx,%eax
c10067eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10067ee:	eb 0b                	jmp    c10067fb <sys_lseek+0xc8>
c10067f0:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10067f3:	8b 45 0c             	mov    0xc(%ebp),%eax
c10067f6:	01 d0                	add    %edx,%eax
c10067f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10067fb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10067ff:	78 08                	js     c1006809 <sys_lseek+0xd6>
c1006801:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006804:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1006807:	7f 07                	jg     c1006810 <sys_lseek+0xdd>
c1006809:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100680e:	eb 0d                	jmp    c100681d <sys_lseek+0xea>
c1006810:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006813:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006816:	89 10                	mov    %edx,(%eax)
c1006818:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100681b:	8b 00                	mov    (%eax),%eax
c100681d:	c9                   	leave  
c100681e:	c3                   	ret    

c100681f <sys_unlink>:
c100681f:	55                   	push   %ebp
c1006820:	89 e5                	mov    %esp,%ebp
c1006822:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1006828:	83 ec 0c             	sub    $0xc,%esp
c100682b:	ff 75 08             	pushl  0x8(%ebp)
c100682e:	e8 eb 98 ff ff       	call   c100011e <strlen>
c1006833:	83 c4 10             	add    $0x10,%esp
c1006836:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c100683b:	76 19                	jbe    c1006856 <sys_unlink+0x37>
c100683d:	68 30 ae 00 c1       	push   $0xc100ae30
c1006842:	68 c0 b2 00 c1       	push   $0xc100b2c0
c1006847:	68 cc 01 00 00       	push   $0x1cc
c100684c:	68 a8 ab 00 c1       	push   $0xc100aba8
c1006851:	e8 b7 9a ff ff       	call   c100030d <__PANIC>
c1006856:	83 ec 04             	sub    $0x4,%esp
c1006859:	68 08 02 00 00       	push   $0x208
c100685e:	6a 00                	push   $0x0
c1006860:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1006866:	50                   	push   %eax
c1006867:	e8 3e 98 ff ff       	call   c10000aa <memset>
c100686c:	83 c4 10             	add    $0x10,%esp
c100686f:	83 ec 08             	sub    $0x8,%esp
c1006872:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1006878:	50                   	push   %eax
c1006879:	ff 75 08             	pushl  0x8(%ebp)
c100687c:	e8 13 f7 ff ff       	call   c1005f94 <search_file>
c1006881:	83 c4 10             	add    $0x10,%esp
c1006884:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006887:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c100688b:	75 19                	jne    c10068a6 <sys_unlink+0x87>
c100688d:	68 50 ae 00 c1       	push   $0xc100ae50
c1006892:	68 c0 b2 00 c1       	push   $0xc100b2c0
c1006897:	68 d2 01 00 00       	push   $0x1d2
c100689c:	68 a8 ab 00 c1       	push   $0xc100aba8
c10068a1:	e8 67 9a ff ff       	call   c100030d <__PANIC>
c10068a6:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10068aa:	75 2c                	jne    c10068d8 <sys_unlink+0xb9>
c10068ac:	83 ec 08             	sub    $0x8,%esp
c10068af:	ff 75 08             	pushl  0x8(%ebp)
c10068b2:	68 5e ae 00 c1       	push   $0xc100ae5e
c10068b7:	e8 5c e3 ff ff       	call   c1004c18 <printk>
c10068bc:	83 c4 10             	add    $0x10,%esp
c10068bf:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10068c2:	83 ec 0c             	sub    $0xc,%esp
c10068c5:	50                   	push   %eax
c10068c6:	e8 94 11 00 00       	call   c1007a5f <dir_close>
c10068cb:	83 c4 10             	add    $0x10,%esp
c10068ce:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10068d3:	e9 65 01 00 00       	jmp    c1006a3d <sys_unlink+0x21e>
c10068d8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10068db:	83 f8 02             	cmp    $0x2,%eax
c10068de:	75 29                	jne    c1006909 <sys_unlink+0xea>
c10068e0:	83 ec 0c             	sub    $0xc,%esp
c10068e3:	68 74 ae 00 c1       	push   $0xc100ae74
c10068e8:	e8 2b e3 ff ff       	call   c1004c18 <printk>
c10068ed:	83 c4 10             	add    $0x10,%esp
c10068f0:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10068f3:	83 ec 0c             	sub    $0xc,%esp
c10068f6:	50                   	push   %eax
c10068f7:	e8 63 11 00 00       	call   c1007a5f <dir_close>
c10068fc:	83 c4 10             	add    $0x10,%esp
c10068ff:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006904:	e9 34 01 00 00       	jmp    c1006a3d <sys_unlink+0x21e>
c1006909:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006910:	eb 37                	jmp    c1006949 <sys_unlink+0x12a>
c1006912:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006915:	89 d0                	mov    %edx,%eax
c1006917:	01 c0                	add    %eax,%eax
c1006919:	01 d0                	add    %edx,%eax
c100691b:	c1 e0 02             	shl    $0x2,%eax
c100691e:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1006923:	8b 00                	mov    (%eax),%eax
c1006925:	85 c0                	test   %eax,%eax
c1006927:	74 1c                	je     c1006945 <sys_unlink+0x126>
c1006929:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100692c:	89 d0                	mov    %edx,%eax
c100692e:	01 c0                	add    %eax,%eax
c1006930:	01 d0                	add    %edx,%eax
c1006932:	c1 e0 02             	shl    $0x2,%eax
c1006935:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c100693a:	8b 00                	mov    (%eax),%eax
c100693c:	8b 10                	mov    (%eax),%edx
c100693e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006941:	39 c2                	cmp    %eax,%edx
c1006943:	74 0c                	je     c1006951 <sys_unlink+0x132>
c1006945:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1006949:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c100694d:	76 c3                	jbe    c1006912 <sys_unlink+0xf3>
c100694f:	eb 01                	jmp    c1006952 <sys_unlink+0x133>
c1006951:	90                   	nop
c1006952:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006956:	77 2c                	ja     c1006984 <sys_unlink+0x165>
c1006958:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100695b:	83 ec 0c             	sub    $0xc,%esp
c100695e:	50                   	push   %eax
c100695f:	e8 fb 10 00 00       	call   c1007a5f <dir_close>
c1006964:	83 c4 10             	add    $0x10,%esp
c1006967:	83 ec 08             	sub    $0x8,%esp
c100696a:	ff 75 08             	pushl  0x8(%ebp)
c100696d:	68 b4 ae 00 c1       	push   $0xc100aeb4
c1006972:	e8 a1 e2 ff ff       	call   c1004c18 <printk>
c1006977:	83 c4 10             	add    $0x10,%esp
c100697a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100697f:	e9 b9 00 00 00       	jmp    c1006a3d <sys_unlink+0x21e>
c1006984:	83 7d f4 20          	cmpl   $0x20,-0xc(%ebp)
c1006988:	74 19                	je     c10069a3 <sys_unlink+0x184>
c100698a:	68 dd ae 00 c1       	push   $0xc100aedd
c100698f:	68 c0 b2 00 c1       	push   $0xc100b2c0
c1006994:	68 eb 01 00 00       	push   $0x1eb
c1006999:	68 a8 ab 00 c1       	push   $0xc100aba8
c100699e:	e8 6a 99 ff ff       	call   c100030d <__PANIC>
c10069a3:	83 ec 08             	sub    $0x8,%esp
c10069a6:	6a 02                	push   $0x2
c10069a8:	68 00 04 00 00       	push   $0x400
c10069ad:	e8 02 c1 ff ff       	call   c1002ab4 <vmm_malloc>
c10069b2:	83 c4 10             	add    $0x10,%esp
c10069b5:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10069b8:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10069bc:	75 26                	jne    c10069e4 <sys_unlink+0x1c5>
c10069be:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10069c1:	83 ec 0c             	sub    $0xc,%esp
c10069c4:	50                   	push   %eax
c10069c5:	e8 95 10 00 00       	call   c1007a5f <dir_close>
c10069ca:	83 c4 10             	add    $0x10,%esp
c10069cd:	83 ec 0c             	sub    $0xc,%esp
c10069d0:	68 f8 ae 00 c1       	push   $0xc100aef8
c10069d5:	e8 3e e2 ff ff       	call   c1004c18 <printk>
c10069da:	83 c4 10             	add    $0x10,%esp
c10069dd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10069e2:	eb 59                	jmp    c1006a3d <sys_unlink+0x21e>
c10069e4:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10069e7:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10069ea:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10069ef:	ff 75 ec             	pushl  -0x14(%ebp)
c10069f2:	ff 75 f0             	pushl  -0x10(%ebp)
c10069f5:	ff 75 e8             	pushl  -0x18(%ebp)
c10069f8:	50                   	push   %eax
c10069f9:	e8 42 15 00 00       	call   c1007f40 <delete_dir_entry>
c10069fe:	83 c4 10             	add    $0x10,%esp
c1006a01:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006a06:	83 ec 08             	sub    $0x8,%esp
c1006a09:	ff 75 f0             	pushl  -0x10(%ebp)
c1006a0c:	50                   	push   %eax
c1006a0d:	e8 8b 32 00 00       	call   c1009c9d <inode_release>
c1006a12:	83 c4 10             	add    $0x10,%esp
c1006a15:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006a18:	83 ec 08             	sub    $0x8,%esp
c1006a1b:	68 00 04 00 00       	push   $0x400
c1006a20:	50                   	push   %eax
c1006a21:	e8 b3 c1 ff ff       	call   c1002bd9 <vmm_free>
c1006a26:	83 c4 10             	add    $0x10,%esp
c1006a29:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006a2c:	83 ec 0c             	sub    $0xc,%esp
c1006a2f:	50                   	push   %eax
c1006a30:	e8 2a 10 00 00       	call   c1007a5f <dir_close>
c1006a35:	83 c4 10             	add    $0x10,%esp
c1006a38:	b8 00 00 00 00       	mov    $0x0,%eax
c1006a3d:	c9                   	leave  
c1006a3e:	c3                   	ret    

c1006a3f <sys_mkdir>:
c1006a3f:	55                   	push   %ebp
c1006a40:	89 e5                	mov    %esp,%ebp
c1006a42:	53                   	push   %ebx
c1006a43:	81 ec a4 02 00 00    	sub    $0x2a4,%esp
c1006a49:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006a4d:	83 ec 08             	sub    $0x8,%esp
c1006a50:	6a 02                	push   $0x2
c1006a52:	68 00 04 00 00       	push   $0x400
c1006a57:	e8 58 c0 ff ff       	call   c1002ab4 <vmm_malloc>
c1006a5c:	83 c4 10             	add    $0x10,%esp
c1006a5f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006a62:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1006a66:	75 1a                	jne    c1006a82 <sys_mkdir+0x43>
c1006a68:	83 ec 0c             	sub    $0xc,%esp
c1006a6b:	68 20 af 00 c1       	push   $0xc100af20
c1006a70:	e8 a3 e1 ff ff       	call   c1004c18 <printk>
c1006a75:	83 c4 10             	add    $0x10,%esp
c1006a78:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006a7d:	e9 f2 03 00 00       	jmp    c1006e74 <sys_mkdir+0x435>
c1006a82:	83 ec 04             	sub    $0x4,%esp
c1006a85:	68 08 02 00 00       	push   $0x208
c1006a8a:	6a 00                	push   $0x0
c1006a8c:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006a92:	50                   	push   %eax
c1006a93:	e8 12 96 ff ff       	call   c10000aa <memset>
c1006a98:	83 c4 10             	add    $0x10,%esp
c1006a9b:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
c1006aa2:	83 ec 08             	sub    $0x8,%esp
c1006aa5:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006aab:	50                   	push   %eax
c1006aac:	ff 75 08             	pushl  0x8(%ebp)
c1006aaf:	e8 e0 f4 ff ff       	call   c1005f94 <search_file>
c1006ab4:	83 c4 10             	add    $0x10,%esp
c1006ab7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006aba:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006abe:	74 1c                	je     c1006adc <sys_mkdir+0x9d>
c1006ac0:	83 ec 08             	sub    $0x8,%esp
c1006ac3:	ff 75 08             	pushl  0x8(%ebp)
c1006ac6:	68 4c af 00 c1       	push   $0xc100af4c
c1006acb:	e8 48 e1 ff ff       	call   c1004c18 <printk>
c1006ad0:	83 c4 10             	add    $0x10,%esp
c1006ad3:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1006ad7:	e9 08 03 00 00       	jmp    c1006de4 <sys_mkdir+0x3a5>
c1006adc:	83 ec 0c             	sub    $0xc,%esp
c1006adf:	ff 75 08             	pushl  0x8(%ebp)
c1006ae2:	e8 25 f4 ff ff       	call   c1005f0c <path_depth_cnt>
c1006ae7:	83 c4 10             	add    $0x10,%esp
c1006aea:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006aed:	83 ec 0c             	sub    $0xc,%esp
c1006af0:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006af6:	50                   	push   %eax
c1006af7:	e8 10 f4 ff ff       	call   c1005f0c <path_depth_cnt>
c1006afc:	83 c4 10             	add    $0x10,%esp
c1006aff:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006b02:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006b05:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1006b08:	74 23                	je     c1006b2d <sys_mkdir+0xee>
c1006b0a:	83 ec 04             	sub    $0x4,%esp
c1006b0d:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006b13:	50                   	push   %eax
c1006b14:	ff 75 08             	pushl  0x8(%ebp)
c1006b17:	68 74 af 00 c1       	push   $0xc100af74
c1006b1c:	e8 f7 e0 ff ff       	call   c1004c18 <printk>
c1006b21:	83 c4 10             	add    $0x10,%esp
c1006b24:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1006b28:	e9 b7 02 00 00       	jmp    c1006de4 <sys_mkdir+0x3a5>
c1006b2d:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1006b30:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1006b33:	83 ec 08             	sub    $0x8,%esp
c1006b36:	6a 2f                	push   $0x2f
c1006b38:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006b3e:	50                   	push   %eax
c1006b3f:	e8 52 96 ff ff       	call   c1000196 <strrchr>
c1006b44:	83 c4 10             	add    $0x10,%esp
c1006b47:	83 c0 01             	add    $0x1,%eax
c1006b4a:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1006b4d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006b52:	83 ec 0c             	sub    $0xc,%esp
c1006b55:	50                   	push   %eax
c1006b56:	e8 fa 1b 00 00       	call   c1008755 <inode_bitmap_alloc>
c1006b5b:	83 c4 10             	add    $0x10,%esp
c1006b5e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006b61:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006b65:	75 19                	jne    c1006b80 <sys_mkdir+0x141>
c1006b67:	83 ec 0c             	sub    $0xc,%esp
c1006b6a:	68 a8 af 00 c1       	push   $0xc100afa8
c1006b6f:	e8 a4 e0 ff ff       	call   c1004c18 <printk>
c1006b74:	83 c4 10             	add    $0x10,%esp
c1006b77:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1006b7b:	e9 64 02 00 00       	jmp    c1006de4 <sys_mkdir+0x3a5>
c1006b80:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006b83:	83 ec 08             	sub    $0x8,%esp
c1006b86:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1006b8c:	52                   	push   %edx
c1006b8d:	50                   	push   %eax
c1006b8e:	e8 cf 33 00 00       	call   c1009f62 <inode_init>
c1006b93:	83 c4 10             	add    $0x10,%esp
c1006b96:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
c1006b9d:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
c1006ba4:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006ba9:	83 ec 0c             	sub    $0xc,%esp
c1006bac:	50                   	push   %eax
c1006bad:	e8 63 1c 00 00       	call   c1008815 <block_bitmap_alloc>
c1006bb2:	83 c4 10             	add    $0x10,%esp
c1006bb5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1006bb8:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
c1006bbc:	75 19                	jne    c1006bd7 <sys_mkdir+0x198>
c1006bbe:	83 ec 0c             	sub    $0xc,%esp
c1006bc1:	68 cc af 00 c1       	push   $0xc100afcc
c1006bc6:	e8 4d e0 ff ff       	call   c1004c18 <printk>
c1006bcb:	83 c4 10             	add    $0x10,%esp
c1006bce:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1006bd2:	e9 0d 02 00 00       	jmp    c1006de4 <sys_mkdir+0x3a5>
c1006bd7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1006bda:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
c1006be0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1006be3:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006be8:	8b 40 10             	mov    0x10(%eax),%eax
c1006beb:	8b 40 28             	mov    0x28(%eax),%eax
c1006bee:	29 c2                	sub    %eax,%edx
c1006bf0:	89 d0                	mov    %edx,%eax
c1006bf2:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1006bf5:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
c1006bf9:	75 19                	jne    c1006c14 <sys_mkdir+0x1d5>
c1006bfb:	68 07 b0 00 c1       	push   $0xc100b007
c1006c00:	68 cc b2 00 c1       	push   $0xc100b2cc
c1006c05:	68 33 02 00 00       	push   $0x233
c1006c0a:	68 a8 ab 00 c1       	push   $0xc100aba8
c1006c0f:	e8 f9 96 ff ff       	call   c100030d <__PANIC>
c1006c14:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006c19:	83 ec 04             	sub    $0x4,%esp
c1006c1c:	6a 01                	push   $0x1
c1006c1e:	ff 75 d8             	pushl  -0x28(%ebp)
c1006c21:	50                   	push   %eax
c1006c22:	e8 bc 1c 00 00       	call   c10088e3 <bitmap_sync>
c1006c27:	83 c4 10             	add    $0x10,%esp
c1006c2a:	83 ec 04             	sub    $0x4,%esp
c1006c2d:	68 00 04 00 00       	push   $0x400
c1006c32:	6a 00                	push   $0x0
c1006c34:	ff 75 ec             	pushl  -0x14(%ebp)
c1006c37:	e8 6e 94 ff ff       	call   c10000aa <memset>
c1006c3c:	83 c4 10             	add    $0x10,%esp
c1006c3f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006c42:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1006c45:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006c48:	83 ec 04             	sub    $0x4,%esp
c1006c4b:	6a 01                	push   $0x1
c1006c4d:	68 e9 aa 00 c1       	push   $0xc100aae9
c1006c52:	50                   	push   %eax
c1006c53:	e8 b0 94 ff ff       	call   c1000108 <memcpy>
c1006c58:	83 c4 10             	add    $0x10,%esp
c1006c5b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006c5e:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006c61:	89 50 10             	mov    %edx,0x10(%eax)
c1006c64:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006c67:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1006c6e:	83 45 d0 18          	addl   $0x18,-0x30(%ebp)
c1006c72:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006c75:	83 ec 04             	sub    $0x4,%esp
c1006c78:	6a 02                	push   $0x2
c1006c7a:	68 eb aa 00 c1       	push   $0xc100aaeb
c1006c7f:	50                   	push   %eax
c1006c80:	e8 83 94 ff ff       	call   c1000108 <memcpy>
c1006c85:	83 c4 10             	add    $0x10,%esp
c1006c88:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006c8b:	8b 00                	mov    (%eax),%eax
c1006c8d:	8b 10                	mov    (%eax),%edx
c1006c8f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006c92:	89 50 10             	mov    %edx,0x10(%eax)
c1006c95:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006c98:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1006c9f:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
c1006ca5:	83 ec 04             	sub    $0x4,%esp
c1006ca8:	6a 01                	push   $0x1
c1006caa:	50                   	push   %eax
c1006cab:	ff 75 ec             	pushl  -0x14(%ebp)
c1006cae:	e8 4a e8 ff ff       	call   c10054fd <ide_write>
c1006cb3:	83 c4 10             	add    $0x10,%esp
c1006cb6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006cbb:	8b 40 10             	mov    0x10(%eax),%eax
c1006cbe:	8b 40 30             	mov    0x30(%eax),%eax
c1006cc1:	01 c0                	add    %eax,%eax
c1006cc3:	89 85 80 fd ff ff    	mov    %eax,-0x280(%ebp)
c1006cc9:	83 ec 04             	sub    $0x4,%esp
c1006ccc:	6a 18                	push   $0x18
c1006cce:	6a 00                	push   $0x0
c1006cd0:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c1006cd6:	50                   	push   %eax
c1006cd7:	e8 ce 93 ff ff       	call   c10000aa <memset>
c1006cdc:	83 c4 10             	add    $0x10,%esp
c1006cdf:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006ce2:	8d 95 64 fd ff ff    	lea    -0x29c(%ebp),%edx
c1006ce8:	52                   	push   %edx
c1006ce9:	6a 02                	push   $0x2
c1006ceb:	50                   	push   %eax
c1006cec:	ff 75 dc             	pushl  -0x24(%ebp)
c1006cef:	e8 a5 0d 00 00       	call   c1007a99 <create_dir_entry>
c1006cf4:	83 c4 10             	add    $0x10,%esp
c1006cf7:	83 ec 04             	sub    $0x4,%esp
c1006cfa:	68 00 04 00 00       	push   $0x400
c1006cff:	6a 00                	push   $0x0
c1006d01:	ff 75 ec             	pushl  -0x14(%ebp)
c1006d04:	e8 a1 93 ff ff       	call   c10000aa <memset>
c1006d09:	83 c4 10             	add    $0x10,%esp
c1006d0c:	83 ec 04             	sub    $0x4,%esp
c1006d0f:	ff 75 ec             	pushl  -0x14(%ebp)
c1006d12:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c1006d18:	50                   	push   %eax
c1006d19:	ff 75 e0             	pushl  -0x20(%ebp)
c1006d1c:	e8 e4 0d 00 00       	call   c1007b05 <sync_dir_entry>
c1006d21:	83 c4 10             	add    $0x10,%esp
c1006d24:	85 c0                	test   %eax,%eax
c1006d26:	75 19                	jne    c1006d41 <sys_mkdir+0x302>
c1006d28:	83 ec 0c             	sub    $0xc,%esp
c1006d2b:	68 20 b0 00 c1       	push   $0xc100b020
c1006d30:	e8 e3 de ff ff       	call   c1004c18 <printk>
c1006d35:	83 c4 10             	add    $0x10,%esp
c1006d38:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1006d3c:	e9 a3 00 00 00       	jmp    c1006de4 <sys_mkdir+0x3a5>
c1006d41:	83 ec 04             	sub    $0x4,%esp
c1006d44:	68 00 04 00 00       	push   $0x400
c1006d49:	6a 00                	push   $0x0
c1006d4b:	ff 75 ec             	pushl  -0x14(%ebp)
c1006d4e:	e8 57 93 ff ff       	call   c10000aa <memset>
c1006d53:	83 c4 10             	add    $0x10,%esp
c1006d56:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006d59:	8b 10                	mov    (%eax),%edx
c1006d5b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006d60:	83 ec 04             	sub    $0x4,%esp
c1006d63:	ff 75 ec             	pushl  -0x14(%ebp)
c1006d66:	52                   	push   %edx
c1006d67:	50                   	push   %eax
c1006d68:	e8 23 2c 00 00       	call   c1009990 <inode_sync>
c1006d6d:	83 c4 10             	add    $0x10,%esp
c1006d70:	83 ec 04             	sub    $0x4,%esp
c1006d73:	68 00 04 00 00       	push   $0x400
c1006d78:	6a 00                	push   $0x0
c1006d7a:	ff 75 ec             	pushl  -0x14(%ebp)
c1006d7d:	e8 28 93 ff ff       	call   c10000aa <memset>
c1006d82:	83 c4 10             	add    $0x10,%esp
c1006d85:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006d8a:	83 ec 04             	sub    $0x4,%esp
c1006d8d:	ff 75 ec             	pushl  -0x14(%ebp)
c1006d90:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1006d96:	52                   	push   %edx
c1006d97:	50                   	push   %eax
c1006d98:	e8 f3 2b 00 00       	call   c1009990 <inode_sync>
c1006d9d:	83 c4 10             	add    $0x10,%esp
c1006da0:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006da3:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006da8:	83 ec 04             	sub    $0x4,%esp
c1006dab:	6a 00                	push   $0x0
c1006dad:	52                   	push   %edx
c1006dae:	50                   	push   %eax
c1006daf:	e8 2f 1b 00 00       	call   c10088e3 <bitmap_sync>
c1006db4:	83 c4 10             	add    $0x10,%esp
c1006db7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006dba:	83 ec 08             	sub    $0x8,%esp
c1006dbd:	68 00 04 00 00       	push   $0x400
c1006dc2:	50                   	push   %eax
c1006dc3:	e8 11 be ff ff       	call   c1002bd9 <vmm_free>
c1006dc8:	83 c4 10             	add    $0x10,%esp
c1006dcb:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1006dce:	83 ec 0c             	sub    $0xc,%esp
c1006dd1:	50                   	push   %eax
c1006dd2:	e8 88 0c 00 00       	call   c1007a5f <dir_close>
c1006dd7:	83 c4 10             	add    $0x10,%esp
c1006dda:	b8 00 00 00 00       	mov    $0x0,%eax
c1006ddf:	e9 90 00 00 00       	jmp    c1006e74 <sys_mkdir+0x435>
c1006de4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1006de8:	83 f8 01             	cmp    $0x1,%eax
c1006deb:	74 5e                	je     c1006e4b <sys_mkdir+0x40c>
c1006ded:	83 f8 02             	cmp    $0x2,%eax
c1006df0:	75 69                	jne    c1006e5b <sys_mkdir+0x41c>
c1006df2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006df5:	8d 50 07             	lea    0x7(%eax),%edx
c1006df8:	85 c0                	test   %eax,%eax
c1006dfa:	0f 48 c2             	cmovs  %edx,%eax
c1006dfd:	c1 f8 03             	sar    $0x3,%eax
c1006e00:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1006e03:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006e06:	99                   	cltd   
c1006e07:	c1 ea 1d             	shr    $0x1d,%edx
c1006e0a:	01 d0                	add    %edx,%eax
c1006e0c:	83 e0 07             	and    $0x7,%eax
c1006e0f:	29 d0                	sub    %edx,%eax
c1006e11:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1006e14:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006e19:	8b 50 20             	mov    0x20(%eax),%edx
c1006e1c:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006e1f:	01 d0                	add    %edx,%eax
c1006e21:	0f b6 00             	movzbl (%eax),%eax
c1006e24:	89 c2                	mov    %eax,%edx
c1006e26:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1006e29:	bb 01 00 00 00       	mov    $0x1,%ebx
c1006e2e:	89 c1                	mov    %eax,%ecx
c1006e30:	d3 e3                	shl    %cl,%ebx
c1006e32:	89 d8                	mov    %ebx,%eax
c1006e34:	f7 d0                	not    %eax
c1006e36:	89 d1                	mov    %edx,%ecx
c1006e38:	21 c1                	and    %eax,%ecx
c1006e3a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006e3f:	8b 50 20             	mov    0x20(%eax),%edx
c1006e42:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006e45:	01 d0                	add    %edx,%eax
c1006e47:	89 ca                	mov    %ecx,%edx
c1006e49:	88 10                	mov    %dl,(%eax)
c1006e4b:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1006e4e:	83 ec 0c             	sub    $0xc,%esp
c1006e51:	50                   	push   %eax
c1006e52:	e8 08 0c 00 00       	call   c1007a5f <dir_close>
c1006e57:	83 c4 10             	add    $0x10,%esp
c1006e5a:	90                   	nop
c1006e5b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006e5e:	83 ec 08             	sub    $0x8,%esp
c1006e61:	68 00 04 00 00       	push   $0x400
c1006e66:	50                   	push   %eax
c1006e67:	e8 6d bd ff ff       	call   c1002bd9 <vmm_free>
c1006e6c:	83 c4 10             	add    $0x10,%esp
c1006e6f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006e74:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1006e77:	c9                   	leave  
c1006e78:	c3                   	ret    

c1006e79 <sys_opendir>:
c1006e79:	55                   	push   %ebp
c1006e7a:	89 e5                	mov    %esp,%ebp
c1006e7c:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1006e82:	83 ec 0c             	sub    $0xc,%esp
c1006e85:	ff 75 08             	pushl  0x8(%ebp)
c1006e88:	e8 91 92 ff ff       	call   c100011e <strlen>
c1006e8d:	83 c4 10             	add    $0x10,%esp
c1006e90:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1006e95:	76 19                	jbe    c1006eb0 <sys_opendir+0x37>
c1006e97:	68 4b b0 00 c1       	push   $0xc100b04b
c1006e9c:	68 d8 b2 00 c1       	push   $0xc100b2d8
c1006ea1:	68 75 02 00 00       	push   $0x275
c1006ea6:	68 a8 ab 00 c1       	push   $0xc100aba8
c1006eab:	e8 5d 94 ff ff       	call   c100030d <__PANIC>
c1006eb0:	8b 45 08             	mov    0x8(%ebp),%eax
c1006eb3:	0f b6 00             	movzbl (%eax),%eax
c1006eb6:	3c 2f                	cmp    $0x2f,%al
c1006eb8:	75 21                	jne    c1006edb <sys_opendir+0x62>
c1006eba:	8b 45 08             	mov    0x8(%ebp),%eax
c1006ebd:	83 c0 01             	add    $0x1,%eax
c1006ec0:	0f b6 00             	movzbl (%eax),%eax
c1006ec3:	84 c0                	test   %al,%al
c1006ec5:	74 0a                	je     c1006ed1 <sys_opendir+0x58>
c1006ec7:	8b 45 08             	mov    0x8(%ebp),%eax
c1006eca:	0f b6 00             	movzbl (%eax),%eax
c1006ecd:	3c 2e                	cmp    $0x2e,%al
c1006ecf:	75 0a                	jne    c1006edb <sys_opendir+0x62>
c1006ed1:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1006ed6:	e9 a9 00 00 00       	jmp    c1006f84 <sys_opendir+0x10b>
c1006edb:	83 ec 04             	sub    $0x4,%esp
c1006ede:	68 08 02 00 00       	push   $0x208
c1006ee3:	6a 00                	push   $0x0
c1006ee5:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1006eeb:	50                   	push   %eax
c1006eec:	e8 b9 91 ff ff       	call   c10000aa <memset>
c1006ef1:	83 c4 10             	add    $0x10,%esp
c1006ef4:	83 ec 08             	sub    $0x8,%esp
c1006ef7:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1006efd:	50                   	push   %eax
c1006efe:	ff 75 08             	pushl  0x8(%ebp)
c1006f01:	e8 8e f0 ff ff       	call   c1005f94 <search_file>
c1006f06:	83 c4 10             	add    $0x10,%esp
c1006f09:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006f0c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006f13:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006f17:	75 1c                	jne    c1006f35 <sys_opendir+0xbc>
c1006f19:	83 ec 04             	sub    $0x4,%esp
c1006f1c:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1006f22:	50                   	push   %eax
c1006f23:	ff 75 08             	pushl  0x8(%ebp)
c1006f26:	68 67 b0 00 c1       	push   $0xc100b067
c1006f2b:	e8 e8 dc ff ff       	call   c1004c18 <printk>
c1006f30:	83 c4 10             	add    $0x10,%esp
c1006f33:	eb 3d                	jmp    c1006f72 <sys_opendir+0xf9>
c1006f35:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006f38:	83 f8 01             	cmp    $0x1,%eax
c1006f3b:	75 15                	jne    c1006f52 <sys_opendir+0xd9>
c1006f3d:	83 ec 08             	sub    $0x8,%esp
c1006f40:	ff 75 08             	pushl  0x8(%ebp)
c1006f43:	68 85 b0 00 c1       	push   $0xc100b085
c1006f48:	e8 cb dc ff ff       	call   c1004c18 <printk>
c1006f4d:	83 c4 10             	add    $0x10,%esp
c1006f50:	eb 20                	jmp    c1006f72 <sys_opendir+0xf9>
c1006f52:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006f55:	83 f8 02             	cmp    $0x2,%eax
c1006f58:	75 18                	jne    c1006f72 <sys_opendir+0xf9>
c1006f5a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006f5d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006f62:	83 ec 08             	sub    $0x8,%esp
c1006f65:	52                   	push   %edx
c1006f66:	50                   	push   %eax
c1006f67:	e8 c7 08 00 00       	call   c1007833 <dir_open>
c1006f6c:	83 c4 10             	add    $0x10,%esp
c1006f6f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006f72:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006f75:	83 ec 0c             	sub    $0xc,%esp
c1006f78:	50                   	push   %eax
c1006f79:	e8 e1 0a 00 00       	call   c1007a5f <dir_close>
c1006f7e:	83 c4 10             	add    $0x10,%esp
c1006f81:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006f84:	c9                   	leave  
c1006f85:	c3                   	ret    

c1006f86 <sys_closedir>:
c1006f86:	55                   	push   %ebp
c1006f87:	89 e5                	mov    %esp,%ebp
c1006f89:	83 ec 18             	sub    $0x18,%esp
c1006f8c:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006f93:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006f97:	74 15                	je     c1006fae <sys_closedir+0x28>
c1006f99:	83 ec 0c             	sub    $0xc,%esp
c1006f9c:	ff 75 08             	pushl  0x8(%ebp)
c1006f9f:	e8 bb 0a 00 00       	call   c1007a5f <dir_close>
c1006fa4:	83 c4 10             	add    $0x10,%esp
c1006fa7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006fae:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006fb1:	c9                   	leave  
c1006fb2:	c3                   	ret    

c1006fb3 <sys_readdir>:
c1006fb3:	55                   	push   %ebp
c1006fb4:	89 e5                	mov    %esp,%ebp
c1006fb6:	83 ec 08             	sub    $0x8,%esp
c1006fb9:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006fbd:	75 19                	jne    c1006fd8 <sys_readdir+0x25>
c1006fbf:	68 9a b0 00 c1       	push   $0xc100b09a
c1006fc4:	68 e4 b2 00 c1       	push   $0xc100b2e4
c1006fc9:	68 98 02 00 00       	push   $0x298
c1006fce:	68 a8 ab 00 c1       	push   $0xc100aba8
c1006fd3:	e8 35 93 ff ff       	call   c100030d <__PANIC>
c1006fd8:	83 ec 0c             	sub    $0xc,%esp
c1006fdb:	ff 75 08             	pushl  0x8(%ebp)
c1006fde:	e8 ff 13 00 00       	call   c10083e2 <dir_read>
c1006fe3:	83 c4 10             	add    $0x10,%esp
c1006fe6:	c9                   	leave  
c1006fe7:	c3                   	ret    

c1006fe8 <sys_rewinddir>:
c1006fe8:	55                   	push   %ebp
c1006fe9:	89 e5                	mov    %esp,%ebp
c1006feb:	8b 45 08             	mov    0x8(%ebp),%eax
c1006fee:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1006ff5:	90                   	nop
c1006ff6:	5d                   	pop    %ebp
c1006ff7:	c3                   	ret    

c1006ff8 <sys_rmdir>:
c1006ff8:	55                   	push   %ebp
c1006ff9:	89 e5                	mov    %esp,%ebp
c1006ffb:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1007001:	83 ec 04             	sub    $0x4,%esp
c1007004:	68 08 02 00 00       	push   $0x208
c1007009:	6a 00                	push   $0x0
c100700b:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007011:	50                   	push   %eax
c1007012:	e8 93 90 ff ff       	call   c10000aa <memset>
c1007017:	83 c4 10             	add    $0x10,%esp
c100701a:	83 ec 08             	sub    $0x8,%esp
c100701d:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007023:	50                   	push   %eax
c1007024:	ff 75 08             	pushl  0x8(%ebp)
c1007027:	e8 68 ef ff ff       	call   c1005f94 <search_file>
c100702c:	83 c4 10             	add    $0x10,%esp
c100702f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007032:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007036:	75 19                	jne    c1007051 <sys_rmdir+0x59>
c1007038:	68 50 ae 00 c1       	push   $0xc100ae50
c100703d:	68 f0 b2 00 c1       	push   $0xc100b2f0
c1007042:	68 a6 02 00 00       	push   $0x2a6
c1007047:	68 a8 ab 00 c1       	push   $0xc100aba8
c100704c:	e8 bc 92 ff ff       	call   c100030d <__PANIC>
c1007051:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007058:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c100705c:	75 1f                	jne    c100707d <sys_rmdir+0x85>
c100705e:	83 ec 04             	sub    $0x4,%esp
c1007061:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007067:	50                   	push   %eax
c1007068:	ff 75 08             	pushl  0x8(%ebp)
c100706b:	68 67 b0 00 c1       	push   $0xc100b067
c1007070:	e8 a3 db ff ff       	call   c1004c18 <printk>
c1007075:	83 c4 10             	add    $0x10,%esp
c1007078:	e9 87 00 00 00       	jmp    c1007104 <sys_rmdir+0x10c>
c100707d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007080:	83 f8 01             	cmp    $0x1,%eax
c1007083:	75 15                	jne    c100709a <sys_rmdir+0xa2>
c1007085:	83 ec 08             	sub    $0x8,%esp
c1007088:	ff 75 08             	pushl  0x8(%ebp)
c100708b:	68 85 b0 00 c1       	push   $0xc100b085
c1007090:	e8 83 db ff ff       	call   c1004c18 <printk>
c1007095:	83 c4 10             	add    $0x10,%esp
c1007098:	eb 6a                	jmp    c1007104 <sys_rmdir+0x10c>
c100709a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100709d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10070a2:	83 ec 08             	sub    $0x8,%esp
c10070a5:	52                   	push   %edx
c10070a6:	50                   	push   %eax
c10070a7:	e8 87 07 00 00       	call   c1007833 <dir_open>
c10070ac:	83 c4 10             	add    $0x10,%esp
c10070af:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10070b2:	83 ec 0c             	sub    $0xc,%esp
c10070b5:	ff 75 ec             	pushl  -0x14(%ebp)
c10070b8:	e8 fa 14 00 00       	call   c10085b7 <dir_is_empty>
c10070bd:	83 c4 10             	add    $0x10,%esp
c10070c0:	85 c0                	test   %eax,%eax
c10070c2:	75 15                	jne    c10070d9 <sys_rmdir+0xe1>
c10070c4:	83 ec 08             	sub    $0x8,%esp
c10070c7:	ff 75 08             	pushl  0x8(%ebp)
c10070ca:	68 a8 b0 00 c1       	push   $0xc100b0a8
c10070cf:	e8 44 db ff ff       	call   c1004c18 <printk>
c10070d4:	83 c4 10             	add    $0x10,%esp
c10070d7:	eb 1d                	jmp    c10070f6 <sys_rmdir+0xfe>
c10070d9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10070dc:	83 ec 08             	sub    $0x8,%esp
c10070df:	ff 75 ec             	pushl  -0x14(%ebp)
c10070e2:	50                   	push   %eax
c10070e3:	e8 f7 14 00 00       	call   c10085df <dir_remove>
c10070e8:	83 c4 10             	add    $0x10,%esp
c10070eb:	85 c0                	test   %eax,%eax
c10070ed:	75 07                	jne    c10070f6 <sys_rmdir+0xfe>
c10070ef:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10070f6:	83 ec 0c             	sub    $0xc,%esp
c10070f9:	ff 75 ec             	pushl  -0x14(%ebp)
c10070fc:	e8 5e 09 00 00       	call   c1007a5f <dir_close>
c1007101:	83 c4 10             	add    $0x10,%esp
c1007104:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007107:	83 ec 0c             	sub    $0xc,%esp
c100710a:	50                   	push   %eax
c100710b:	e8 4f 09 00 00       	call   c1007a5f <dir_close>
c1007110:	83 c4 10             	add    $0x10,%esp
c1007113:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007116:	c9                   	leave  
c1007117:	c3                   	ret    

c1007118 <get_parent_dir_inode_nr>:
c1007118:	55                   	push   %ebp
c1007119:	89 e5                	mov    %esp,%ebp
c100711b:	83 ec 18             	sub    $0x18,%esp
c100711e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007123:	83 ec 08             	sub    $0x8,%esp
c1007126:	ff 75 08             	pushl  0x8(%ebp)
c1007129:	50                   	push   %eax
c100712a:	e8 82 29 00 00       	call   c1009ab1 <inode_open>
c100712f:	83 c4 10             	add    $0x10,%esp
c1007132:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007135:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007138:	8b 40 10             	mov    0x10(%eax),%eax
c100713b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100713e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007143:	8b 40 10             	mov    0x10(%eax),%eax
c1007146:	8b 40 28             	mov    0x28(%eax),%eax
c1007149:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c100714c:	73 19                	jae    c1007167 <get_parent_dir_inode_nr+0x4f>
c100714e:	68 f0 b0 00 c1       	push   $0xc100b0f0
c1007153:	68 fc b2 00 c1       	push   $0xc100b2fc
c1007158:	68 c1 02 00 00       	push   $0x2c1
c100715d:	68 a8 ab 00 c1       	push   $0xc100aba8
c1007162:	e8 a6 91 ff ff       	call   c100030d <__PANIC>
c1007167:	83 ec 0c             	sub    $0xc,%esp
c100716a:	ff 75 f4             	pushl  -0xc(%ebp)
c100716d:	e8 15 2a 00 00       	call   c1009b87 <inode_close>
c1007172:	83 c4 10             	add    $0x10,%esp
c1007175:	83 ec 04             	sub    $0x4,%esp
c1007178:	6a 01                	push   $0x1
c100717a:	ff 75 f0             	pushl  -0x10(%ebp)
c100717d:	ff 75 0c             	pushl  0xc(%ebp)
c1007180:	e8 3b e3 ff ff       	call   c10054c0 <ide_read>
c1007185:	83 c4 10             	add    $0x10,%esp
c1007188:	8b 45 0c             	mov    0xc(%ebp),%eax
c100718b:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100718e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007191:	83 c0 18             	add    $0x18,%eax
c1007194:	8b 40 10             	mov    0x10(%eax),%eax
c1007197:	3d ff 0f 00 00       	cmp    $0xfff,%eax
c100719c:	77 0e                	ja     c10071ac <get_parent_dir_inode_nr+0x94>
c100719e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10071a1:	83 c0 18             	add    $0x18,%eax
c10071a4:	8b 40 14             	mov    0x14(%eax),%eax
c10071a7:	83 f8 02             	cmp    $0x2,%eax
c10071aa:	74 19                	je     c10071c5 <get_parent_dir_inode_nr+0xad>
c10071ac:	68 1c b1 00 c1       	push   $0xc100b11c
c10071b1:	68 fc b2 00 c1       	push   $0xc100b2fc
c10071b6:	68 c6 02 00 00       	push   $0x2c6
c10071bb:	68 a8 ab 00 c1       	push   $0xc100aba8
c10071c0:	e8 48 91 ff ff       	call   c100030d <__PANIC>
c10071c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10071c8:	83 c0 18             	add    $0x18,%eax
c10071cb:	8b 40 10             	mov    0x10(%eax),%eax
c10071ce:	c9                   	leave  
c10071cf:	c3                   	ret    

c10071d0 <get_child_dir_name>:
c10071d0:	55                   	push   %ebp
c10071d1:	89 e5                	mov    %esp,%ebp
c10071d3:	57                   	push   %edi
c10071d4:	81 ec 54 02 00 00    	sub    $0x254,%esp
c10071da:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10071df:	83 ec 08             	sub    $0x8,%esp
c10071e2:	ff 75 08             	pushl  0x8(%ebp)
c10071e5:	50                   	push   %eax
c10071e6:	e8 c6 28 00 00       	call   c1009ab1 <inode_open>
c10071eb:	83 c4 10             	add    $0x10,%esp
c10071ee:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10071f1:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c10071f5:	8d 95 ac fd ff ff    	lea    -0x254(%ebp),%edx
c10071fb:	b8 00 00 00 00       	mov    $0x0,%eax
c1007200:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007205:	89 d7                	mov    %edx,%edi
c1007207:	f3 ab                	rep stos %eax,%es:(%edi)
c1007209:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
c1007210:	eb 22                	jmp    c1007234 <get_child_dir_name+0x64>
c1007212:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007216:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100721a:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100721d:	83 c1 04             	add    $0x4,%ecx
c1007220:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1007223:	89 94 85 ac fd ff ff 	mov    %edx,-0x254(%ebp,%eax,4)
c100722a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100722e:	83 c0 01             	add    $0x1,%eax
c1007231:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007234:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007238:	76 d8                	jbe    c1007212 <get_child_dir_name+0x42>
c100723a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100723d:	8b 40 40             	mov    0x40(%eax),%eax
c1007240:	85 c0                	test   %eax,%eax
c1007242:	74 25                	je     c1007269 <get_child_dir_name+0x99>
c1007244:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007247:	8b 50 40             	mov    0x40(%eax),%edx
c100724a:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
c1007250:	83 c0 30             	add    $0x30,%eax
c1007253:	83 ec 04             	sub    $0x4,%esp
c1007256:	6a 01                	push   $0x1
c1007258:	52                   	push   %edx
c1007259:	50                   	push   %eax
c100725a:	e8 61 e2 ff ff       	call   c10054c0 <ide_read>
c100725f:	83 c4 10             	add    $0x10,%esp
c1007262:	c7 45 f0 8c 00 00 00 	movl   $0x8c,-0x10(%ebp)
c1007269:	83 ec 0c             	sub    $0xc,%esp
c100726c:	ff 75 e8             	pushl  -0x18(%ebp)
c100726f:	e8 13 29 00 00       	call   c1009b87 <inode_close>
c1007274:	83 c4 10             	add    $0x10,%esp
c1007277:	8b 45 14             	mov    0x14(%ebp),%eax
c100727a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100727d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007282:	8b 40 10             	mov    0x10(%eax),%eax
c1007285:	8b 40 30             	mov    0x30(%eax),%eax
c1007288:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100728b:	b8 00 02 00 00       	mov    $0x200,%eax
c1007290:	ba 00 00 00 00       	mov    $0x0,%edx
c1007295:	f7 75 e0             	divl   -0x20(%ebp)
c1007298:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100729b:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100729f:	e9 bc 00 00 00       	jmp    c1007360 <get_child_dir_name+0x190>
c10072a4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10072a8:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c10072af:	85 c0                	test   %eax,%eax
c10072b1:	0f 84 9f 00 00 00    	je     c1007356 <get_child_dir_name+0x186>
c10072b7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10072bb:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c10072c2:	83 ec 04             	sub    $0x4,%esp
c10072c5:	6a 01                	push   $0x1
c10072c7:	50                   	push   %eax
c10072c8:	ff 75 14             	pushl  0x14(%ebp)
c10072cb:	e8 f0 e1 ff ff       	call   c10054c0 <ide_read>
c10072d0:	83 c4 10             	add    $0x10,%esp
c10072d3:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
c10072d7:	eb 74                	jmp    c100734d <get_child_dir_name+0x17d>
c10072d9:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c10072dd:	89 d0                	mov    %edx,%eax
c10072df:	01 c0                	add    %eax,%eax
c10072e1:	01 d0                	add    %edx,%eax
c10072e3:	c1 e0 03             	shl    $0x3,%eax
c10072e6:	89 c2                	mov    %eax,%edx
c10072e8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10072eb:	01 d0                	add    %edx,%eax
c10072ed:	8b 40 10             	mov    0x10(%eax),%eax
c10072f0:	39 45 0c             	cmp    %eax,0xc(%ebp)
c10072f3:	75 4e                	jne    c1007343 <get_child_dir_name+0x173>
c10072f5:	8b 45 10             	mov    0x10(%ebp),%eax
c10072f8:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c10072fd:	89 c2                	mov    %eax,%edx
c10072ff:	b8 00 00 00 00       	mov    $0x0,%eax
c1007304:	89 d7                	mov    %edx,%edi
c1007306:	f2 ae                	repnz scas %es:(%edi),%al
c1007308:	89 c8                	mov    %ecx,%eax
c100730a:	f7 d0                	not    %eax
c100730c:	8d 50 ff             	lea    -0x1(%eax),%edx
c100730f:	8b 45 10             	mov    0x10(%ebp),%eax
c1007312:	01 d0                	add    %edx,%eax
c1007314:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1007319:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c100731d:	89 d0                	mov    %edx,%eax
c100731f:	01 c0                	add    %eax,%eax
c1007321:	01 d0                	add    %edx,%eax
c1007323:	c1 e0 03             	shl    $0x3,%eax
c1007326:	89 c2                	mov    %eax,%edx
c1007328:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100732b:	01 d0                	add    %edx,%eax
c100732d:	83 ec 08             	sub    $0x8,%esp
c1007330:	50                   	push   %eax
c1007331:	ff 75 10             	pushl  0x10(%ebp)
c1007334:	e8 9c 8e ff ff       	call   c10001d5 <strcat>
c1007339:	83 c4 10             	add    $0x10,%esp
c100733c:	b8 00 00 00 00       	mov    $0x0,%eax
c1007341:	eb 2f                	jmp    c1007372 <get_child_dir_name+0x1a2>
c1007343:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007347:	83 c0 01             	add    $0x1,%eax
c100734a:	88 45 ef             	mov    %al,-0x11(%ebp)
c100734d:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007351:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1007354:	77 83                	ja     c10072d9 <get_child_dir_name+0x109>
c1007356:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100735a:	83 c0 01             	add    $0x1,%eax
c100735d:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007360:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007364:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1007367:	0f 87 37 ff ff ff    	ja     c10072a4 <get_child_dir_name+0xd4>
c100736d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007372:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1007375:	c9                   	leave  
c1007376:	c3                   	ret    

c1007377 <sys_getcwd>:
c1007377:	55                   	push   %ebp
c1007378:	89 e5                	mov    %esp,%ebp
c100737a:	57                   	push   %edi
c100737b:	53                   	push   %ebx
c100737c:	81 ec 20 02 00 00    	sub    $0x220,%esp
c1007382:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007386:	75 19                	jne    c10073a1 <sys_getcwd+0x2a>
c1007388:	68 e2 ad 00 c1       	push   $0xc100ade2
c100738d:	68 14 b3 00 c1       	push   $0xc100b314
c1007392:	68 f9 02 00 00       	push   $0x2f9
c1007397:	68 a8 ab 00 c1       	push   $0xc100aba8
c100739c:	e8 6c 8f ff ff       	call   c100030d <__PANIC>
c10073a1:	83 ec 08             	sub    $0x8,%esp
c10073a4:	6a 02                	push   $0x2
c10073a6:	68 00 02 00 00       	push   $0x200
c10073ab:	e8 04 b7 ff ff       	call   c1002ab4 <vmm_malloc>
c10073b0:	83 c4 10             	add    $0x10,%esp
c10073b3:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10073b6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c10073ba:	75 0a                	jne    c10073c6 <sys_getcwd+0x4f>
c10073bc:	b8 00 00 00 00       	mov    $0x0,%eax
c10073c1:	e9 97 01 00 00       	jmp    c100755d <sys_getcwd+0x1e6>
c10073c6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10073cd:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10073d2:	8b 80 f4 00 00 00    	mov    0xf4(%eax),%eax
c10073d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10073db:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10073df:	78 09                	js     c10073ea <sys_getcwd+0x73>
c10073e1:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
c10073e8:	7e 19                	jle    c1007403 <sys_getcwd+0x8c>
c10073ea:	68 54 b1 00 c1       	push   $0xc100b154
c10073ef:	68 14 b3 00 c1       	push   $0xc100b314
c10073f4:	68 01 03 00 00       	push   $0x301
c10073f9:	68 a8 ab 00 c1       	push   $0xc100aba8
c10073fe:	e8 0a 8f ff ff       	call   c100030d <__PANIC>
c1007403:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1007407:	75 17                	jne    c1007420 <sys_getcwd+0xa9>
c1007409:	8b 45 08             	mov    0x8(%ebp),%eax
c100740c:	c6 00 2f             	movb   $0x2f,(%eax)
c100740f:	8b 45 08             	mov    0x8(%ebp),%eax
c1007412:	83 c0 01             	add    $0x1,%eax
c1007415:	c6 00 00             	movb   $0x0,(%eax)
c1007418:	8b 45 08             	mov    0x8(%ebp),%eax
c100741b:	e9 3d 01 00 00       	jmp    c100755d <sys_getcwd+0x1e6>
c1007420:	83 ec 04             	sub    $0x4,%esp
c1007423:	ff 75 0c             	pushl  0xc(%ebp)
c1007426:	6a 00                	push   $0x0
c1007428:	ff 75 08             	pushl  0x8(%ebp)
c100742b:	e8 7a 8c ff ff       	call   c10000aa <memset>
c1007430:	83 c4 10             	add    $0x10,%esp
c1007433:	c7 85 e6 fd ff ff 00 	movl   $0x0,-0x21a(%ebp)
c100743a:	00 00 00 
c100743d:	8d 85 ea fd ff ff    	lea    -0x216(%ebp),%eax
c1007443:	b9 fc 01 00 00       	mov    $0x1fc,%ecx
c1007448:	bb 00 00 00 00       	mov    $0x0,%ebx
c100744d:	89 18                	mov    %ebx,(%eax)
c100744f:	89 5c 08 fc          	mov    %ebx,-0x4(%eax,%ecx,1)
c1007453:	8d 50 04             	lea    0x4(%eax),%edx
c1007456:	83 e2 fc             	and    $0xfffffffc,%edx
c1007459:	29 d0                	sub    %edx,%eax
c100745b:	01 c1                	add    %eax,%ecx
c100745d:	83 e1 fc             	and    $0xfffffffc,%ecx
c1007460:	c1 e9 02             	shr    $0x2,%ecx
c1007463:	89 d7                	mov    %edx,%edi
c1007465:	89 d8                	mov    %ebx,%eax
c1007467:	f3 ab                	rep stos %eax,%es:(%edi)
c1007469:	eb 58                	jmp    c10074c3 <sys_getcwd+0x14c>
c100746b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100746e:	83 ec 08             	sub    $0x8,%esp
c1007471:	ff 75 f0             	pushl  -0x10(%ebp)
c1007474:	50                   	push   %eax
c1007475:	e8 9e fc ff ff       	call   c1007118 <get_parent_dir_inode_nr>
c100747a:	83 c4 10             	add    $0x10,%esp
c100747d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007480:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007483:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007486:	ff 75 f0             	pushl  -0x10(%ebp)
c1007489:	8d 8d e6 fd ff ff    	lea    -0x21a(%ebp),%ecx
c100748f:	51                   	push   %ecx
c1007490:	52                   	push   %edx
c1007491:	50                   	push   %eax
c1007492:	e8 39 fd ff ff       	call   c10071d0 <get_child_dir_name>
c1007497:	83 c4 10             	add    $0x10,%esp
c100749a:	83 f8 ff             	cmp    $0xffffffff,%eax
c100749d:	75 1e                	jne    c10074bd <sys_getcwd+0x146>
c100749f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10074a2:	83 ec 08             	sub    $0x8,%esp
c10074a5:	68 00 02 00 00       	push   $0x200
c10074aa:	50                   	push   %eax
c10074ab:	e8 29 b7 ff ff       	call   c1002bd9 <vmm_free>
c10074b0:	83 c4 10             	add    $0x10,%esp
c10074b3:	b8 00 00 00 00       	mov    $0x0,%eax
c10074b8:	e9 a0 00 00 00       	jmp    c100755d <sys_getcwd+0x1e6>
c10074bd:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10074c0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10074c3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10074c7:	75 a2                	jne    c100746b <sys_getcwd+0xf4>
c10074c9:	83 ec 0c             	sub    $0xc,%esp
c10074cc:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c10074d2:	50                   	push   %eax
c10074d3:	e8 46 8c ff ff       	call   c100011e <strlen>
c10074d8:	83 c4 10             	add    $0x10,%esp
c10074db:	39 45 0c             	cmp    %eax,0xc(%ebp)
c10074de:	73 49                	jae    c1007529 <sys_getcwd+0x1b2>
c10074e0:	68 84 b1 00 c1       	push   $0xc100b184
c10074e5:	68 14 b3 00 c1       	push   $0xc100b314
c10074ea:	68 17 03 00 00       	push   $0x317
c10074ef:	68 a8 ab 00 c1       	push   $0xc100aba8
c10074f4:	e8 14 8e ff ff       	call   c100030d <__PANIC>
c10074f9:	83 ec 0c             	sub    $0xc,%esp
c10074fc:	ff 75 08             	pushl  0x8(%ebp)
c10074ff:	e8 1a 8c ff ff       	call   c100011e <strlen>
c1007504:	83 c4 10             	add    $0x10,%esp
c1007507:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c100750b:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c100750f:	8b 45 08             	mov    0x8(%ebp),%eax
c1007512:	01 d0                	add    %edx,%eax
c1007514:	83 ec 08             	sub    $0x8,%esp
c1007517:	ff 75 e8             	pushl  -0x18(%ebp)
c100751a:	50                   	push   %eax
c100751b:	e8 fa 8c ff ff       	call   c100021a <strcpy>
c1007520:	83 c4 10             	add    $0x10,%esp
c1007523:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007526:	c6 00 00             	movb   $0x0,(%eax)
c1007529:	83 ec 08             	sub    $0x8,%esp
c100752c:	6a 2f                	push   $0x2f
c100752e:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c1007534:	50                   	push   %eax
c1007535:	e8 5c 8c ff ff       	call   c1000196 <strrchr>
c100753a:	83 c4 10             	add    $0x10,%esp
c100753d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007540:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1007544:	75 b3                	jne    c10074f9 <sys_getcwd+0x182>
c1007546:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007549:	83 ec 08             	sub    $0x8,%esp
c100754c:	68 00 02 00 00       	push   $0x200
c1007551:	50                   	push   %eax
c1007552:	e8 82 b6 ff ff       	call   c1002bd9 <vmm_free>
c1007557:	83 c4 10             	add    $0x10,%esp
c100755a:	8b 45 08             	mov    0x8(%ebp),%eax
c100755d:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1007560:	5b                   	pop    %ebx
c1007561:	5f                   	pop    %edi
c1007562:	5d                   	pop    %ebp
c1007563:	c3                   	ret    

c1007564 <sys_stat>:
c1007564:	55                   	push   %ebp
c1007565:	89 e5                	mov    %esp,%ebp
c1007567:	81 ec 28 02 00 00    	sub    $0x228,%esp
c100756d:	83 ec 08             	sub    $0x8,%esp
c1007570:	68 d7 ab 00 c1       	push   $0xc100abd7
c1007575:	ff 75 08             	pushl  0x8(%ebp)
c1007578:	e8 06 8c ff ff       	call   c1000183 <strcmp>
c100757d:	83 c4 10             	add    $0x10,%esp
c1007580:	85 c0                	test   %eax,%eax
c1007582:	74 2e                	je     c10075b2 <sys_stat+0x4e>
c1007584:	83 ec 08             	sub    $0x8,%esp
c1007587:	68 d9 ab 00 c1       	push   $0xc100abd9
c100758c:	ff 75 08             	pushl  0x8(%ebp)
c100758f:	e8 ef 8b ff ff       	call   c1000183 <strcmp>
c1007594:	83 c4 10             	add    $0x10,%esp
c1007597:	85 c0                	test   %eax,%eax
c1007599:	74 17                	je     c10075b2 <sys_stat+0x4e>
c100759b:	83 ec 08             	sub    $0x8,%esp
c100759e:	68 dc ab 00 c1       	push   $0xc100abdc
c10075a3:	ff 75 08             	pushl  0x8(%ebp)
c10075a6:	e8 d8 8b ff ff       	call   c1000183 <strcmp>
c10075ab:	83 c4 10             	add    $0x10,%esp
c10075ae:	85 c0                	test   %eax,%eax
c10075b0:	75 2d                	jne    c10075df <sys_stat+0x7b>
c10075b2:	8b 45 0c             	mov    0xc(%ebp),%eax
c10075b5:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
c10075bc:	8b 45 0c             	mov    0xc(%ebp),%eax
c10075bf:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10075c5:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c10075ca:	8b 00                	mov    (%eax),%eax
c10075cc:	8b 50 04             	mov    0x4(%eax),%edx
c10075cf:	8b 45 0c             	mov    0xc(%ebp),%eax
c10075d2:	89 50 04             	mov    %edx,0x4(%eax)
c10075d5:	b8 00 00 00 00       	mov    $0x0,%eax
c10075da:	e9 af 00 00 00       	jmp    c100768e <sys_stat+0x12a>
c10075df:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10075e6:	83 ec 04             	sub    $0x4,%esp
c10075e9:	68 08 02 00 00       	push   $0x208
c10075ee:	6a 00                	push   $0x0
c10075f0:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10075f6:	50                   	push   %eax
c10075f7:	e8 ae 8a ff ff       	call   c10000aa <memset>
c10075fc:	83 c4 10             	add    $0x10,%esp
c10075ff:	83 ec 08             	sub    $0x8,%esp
c1007602:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007608:	50                   	push   %eax
c1007609:	ff 75 08             	pushl  0x8(%ebp)
c100760c:	e8 83 e9 ff ff       	call   c1005f94 <search_file>
c1007611:	83 c4 10             	add    $0x10,%esp
c1007614:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007617:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c100761b:	74 4c                	je     c1007669 <sys_stat+0x105>
c100761d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007620:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007625:	83 ec 08             	sub    $0x8,%esp
c1007628:	52                   	push   %edx
c1007629:	50                   	push   %eax
c100762a:	e8 82 24 00 00       	call   c1009ab1 <inode_open>
c100762f:	83 c4 10             	add    $0x10,%esp
c1007632:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007635:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007638:	8b 50 04             	mov    0x4(%eax),%edx
c100763b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100763e:	89 50 04             	mov    %edx,0x4(%eax)
c1007641:	83 ec 0c             	sub    $0xc,%esp
c1007644:	ff 75 ec             	pushl  -0x14(%ebp)
c1007647:	e8 3b 25 00 00       	call   c1009b87 <inode_close>
c100764c:	83 c4 10             	add    $0x10,%esp
c100764f:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1007652:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007655:	89 50 08             	mov    %edx,0x8(%eax)
c1007658:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100765b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100765e:	89 10                	mov    %edx,(%eax)
c1007660:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007667:	eb 13                	jmp    c100767c <sys_stat+0x118>
c1007669:	83 ec 08             	sub    $0x8,%esp
c100766c:	ff 75 08             	pushl  0x8(%ebp)
c100766f:	68 a6 b1 00 c1       	push   $0xc100b1a6
c1007674:	e8 9f d5 ff ff       	call   c1004c18 <printk>
c1007679:	83 c4 10             	add    $0x10,%esp
c100767c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100767f:	83 ec 0c             	sub    $0xc,%esp
c1007682:	50                   	push   %eax
c1007683:	e8 d7 03 00 00       	call   c1007a5f <dir_close>
c1007688:	83 c4 10             	add    $0x10,%esp
c100768b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100768e:	c9                   	leave  
c100768f:	c3                   	ret    

c1007690 <sys_chdir>:
c1007690:	55                   	push   %ebp
c1007691:	89 e5                	mov    %esp,%ebp
c1007693:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1007699:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10076a0:	83 ec 04             	sub    $0x4,%esp
c10076a3:	68 08 02 00 00       	push   $0x208
c10076a8:	6a 00                	push   $0x0
c10076aa:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c10076b0:	50                   	push   %eax
c10076b1:	e8 f4 89 ff ff       	call   c10000aa <memset>
c10076b6:	83 c4 10             	add    $0x10,%esp
c10076b9:	83 ec 08             	sub    $0x8,%esp
c10076bc:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c10076c2:	50                   	push   %eax
c10076c3:	ff 75 08             	pushl  0x8(%ebp)
c10076c6:	e8 c9 e8 ff ff       	call   c1005f94 <search_file>
c10076cb:	83 c4 10             	add    $0x10,%esp
c10076ce:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10076d1:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10076d5:	74 32                	je     c1007709 <sys_chdir+0x79>
c10076d7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10076da:	83 f8 02             	cmp    $0x2,%eax
c10076dd:	75 17                	jne    c10076f6 <sys_chdir+0x66>
c10076df:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10076e4:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10076e7:	89 90 f4 00 00 00    	mov    %edx,0xf4(%eax)
c10076ed:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10076f4:	eb 13                	jmp    c1007709 <sys_chdir+0x79>
c10076f6:	83 ec 08             	sub    $0x8,%esp
c10076f9:	ff 75 08             	pushl  0x8(%ebp)
c10076fc:	68 c0 b1 00 c1       	push   $0xc100b1c0
c1007701:	e8 12 d5 ff ff       	call   c1004c18 <printk>
c1007706:	83 c4 10             	add    $0x10,%esp
c1007709:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100770c:	83 ec 0c             	sub    $0xc,%esp
c100770f:	50                   	push   %eax
c1007710:	e8 4a 03 00 00       	call   c1007a5f <dir_close>
c1007715:	83 c4 10             	add    $0x10,%esp
c1007718:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100771b:	c9                   	leave  
c100771c:	c3                   	ret    

c100771d <fs_init>:
c100771d:	55                   	push   %ebp
c100771e:	89 e5                	mov    %esp,%ebp
c1007720:	83 ec 18             	sub    $0x18,%esp
c1007723:	e8 30 e0 ff ff       	call   c1005758 <partition_format>
c1007728:	e8 be e4 ff ff       	call   c1005beb <mount_partition>
c100772d:	e8 e9 d0 ff ff       	call   c100481b <clear>
c1007732:	83 ec 08             	sub    $0x8,%esp
c1007735:	8d 45 ec             	lea    -0x14(%ebp),%eax
c1007738:	50                   	push   %eax
c1007739:	68 d7 ab 00 c1       	push   $0xc100abd7
c100773e:	e8 21 fe ff ff       	call   c1007564 <sys_stat>
c1007743:	83 c4 10             	add    $0x10,%esp
c1007746:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007749:	83 f8 02             	cmp    $0x2,%eax
c100774c:	75 07                	jne    c1007755 <fs_init+0x38>
c100774e:	b9 e9 b1 00 c1       	mov    $0xc100b1e9,%ecx
c1007753:	eb 05                	jmp    c100775a <fs_init+0x3d>
c1007755:	b9 f3 b1 00 c1       	mov    $0xc100b1f3,%ecx
c100775a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100775d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007760:	51                   	push   %ecx
c1007761:	52                   	push   %edx
c1007762:	50                   	push   %eax
c1007763:	68 fc b1 00 c1       	push   $0xc100b1fc
c1007768:	e8 ab d4 ff ff       	call   c1004c18 <printk>
c100776d:	83 c4 10             	add    $0x10,%esp
c1007770:	83 ec 08             	sub    $0x8,%esp
c1007773:	8d 45 ec             	lea    -0x14(%ebp),%eax
c1007776:	50                   	push   %eax
c1007777:	68 2f b2 00 c1       	push   $0xc100b22f
c100777c:	e8 e3 fd ff ff       	call   c1007564 <sys_stat>
c1007781:	83 c4 10             	add    $0x10,%esp
c1007784:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007787:	83 f8 02             	cmp    $0x2,%eax
c100778a:	75 07                	jne    c1007793 <fs_init+0x76>
c100778c:	b9 e9 b1 00 c1       	mov    $0xc100b1e9,%ecx
c1007791:	eb 05                	jmp    c1007798 <fs_init+0x7b>
c1007793:	b9 f3 b1 00 c1       	mov    $0xc100b1f3,%ecx
c1007798:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100779b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100779e:	51                   	push   %ecx
c100779f:	52                   	push   %edx
c10077a0:	50                   	push   %eax
c10077a1:	68 38 b2 00 c1       	push   $0xc100b238
c10077a6:	e8 6d d4 ff ff       	call   c1004c18 <printk>
c10077ab:	83 c4 10             	add    $0x10,%esp
c10077ae:	90                   	nop
c10077af:	c9                   	leave  
c10077b0:	c3                   	ret    

c10077b1 <open_root_dir>:
c10077b1:	55                   	push   %ebp
c10077b2:	89 e5                	mov    %esp,%ebp
c10077b4:	53                   	push   %ebx
c10077b5:	83 ec 04             	sub    $0x4,%esp
c10077b8:	83 ec 08             	sub    $0x8,%esp
c10077bb:	6a 02                	push   $0x2
c10077bd:	68 08 02 00 00       	push   $0x208
c10077c2:	e8 ed b2 ff ff       	call   c1002ab4 <vmm_malloc>
c10077c7:	83 c4 10             	add    $0x10,%esp
c10077ca:	a3 34 32 a1 c1       	mov    %eax,0xc1a13234
c10077cf:	8b 45 08             	mov    0x8(%ebp),%eax
c10077d2:	8b 40 10             	mov    0x10(%eax),%eax
c10077d5:	8b 40 2c             	mov    0x2c(%eax),%eax
c10077d8:	83 ec 08             	sub    $0x8,%esp
c10077db:	50                   	push   %eax
c10077dc:	68 20 b3 00 c1       	push   $0xc100b320
c10077e1:	e8 32 d4 ff ff       	call   c1004c18 <printk>
c10077e6:	83 c4 10             	add    $0x10,%esp
c10077e9:	8b 45 08             	mov    0x8(%ebp),%eax
c10077ec:	8b 40 10             	mov    0x10(%eax),%eax
c10077ef:	8b 40 2c             	mov    0x2c(%eax),%eax
c10077f2:	8b 1d 34 32 a1 c1    	mov    0xc1a13234,%ebx
c10077f8:	83 ec 08             	sub    $0x8,%esp
c10077fb:	50                   	push   %eax
c10077fc:	ff 75 08             	pushl  0x8(%ebp)
c10077ff:	e8 ad 22 00 00       	call   c1009ab1 <inode_open>
c1007804:	83 c4 10             	add    $0x10,%esp
c1007807:	89 03                	mov    %eax,(%ebx)
c1007809:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c100780e:	8b 00                	mov    (%eax),%eax
c1007810:	83 ec 08             	sub    $0x8,%esp
c1007813:	50                   	push   %eax
c1007814:	68 34 b3 00 c1       	push   $0xc100b334
c1007819:	e8 fa d3 ff ff       	call   c1004c18 <printk>
c100781e:	83 c4 10             	add    $0x10,%esp
c1007821:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1007826:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100782d:	90                   	nop
c100782e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1007831:	c9                   	leave  
c1007832:	c3                   	ret    

c1007833 <dir_open>:
c1007833:	55                   	push   %ebp
c1007834:	89 e5                	mov    %esp,%ebp
c1007836:	83 ec 18             	sub    $0x18,%esp
c1007839:	83 ec 08             	sub    $0x8,%esp
c100783c:	6a 02                	push   $0x2
c100783e:	68 08 02 00 00       	push   $0x208
c1007843:	e8 6c b2 ff ff       	call   c1002ab4 <vmm_malloc>
c1007848:	83 c4 10             	add    $0x10,%esp
c100784b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100784e:	83 ec 08             	sub    $0x8,%esp
c1007851:	ff 75 0c             	pushl  0xc(%ebp)
c1007854:	ff 75 08             	pushl  0x8(%ebp)
c1007857:	e8 55 22 00 00       	call   c1009ab1 <inode_open>
c100785c:	83 c4 10             	add    $0x10,%esp
c100785f:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007862:	89 02                	mov    %eax,(%edx)
c1007864:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007867:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100786e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007871:	c9                   	leave  
c1007872:	c3                   	ret    

c1007873 <search_dir_entry>:
c1007873:	55                   	push   %ebp
c1007874:	89 e5                	mov    %esp,%ebp
c1007876:	83 ec 28             	sub    $0x28,%esp
c1007879:	c7 45 e8 8c 00 00 00 	movl   $0x8c,-0x18(%ebp)
c1007880:	83 ec 08             	sub    $0x8,%esp
c1007883:	6a 02                	push   $0x2
c1007885:	68 30 02 00 00       	push   $0x230
c100788a:	e8 25 b2 ff ff       	call   c1002ab4 <vmm_malloc>
c100788f:	83 c4 10             	add    $0x10,%esp
c1007892:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007895:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c1007899:	75 1a                	jne    c10078b5 <search_dir_entry+0x42>
c100789b:	83 ec 0c             	sub    $0xc,%esp
c100789e:	68 4c b3 00 c1       	push   $0xc100b34c
c10078a3:	e8 70 d3 ff ff       	call   c1004c18 <printk>
c10078a8:	83 c4 10             	add    $0x10,%esp
c10078ab:	b8 00 00 00 00       	mov    $0x0,%eax
c10078b0:	e9 a8 01 00 00       	jmp    c1007a5d <search_dir_entry+0x1ea>
c10078b5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10078bc:	eb 23                	jmp    c10078e1 <search_dir_entry+0x6e>
c10078be:	8b 45 0c             	mov    0xc(%ebp),%eax
c10078c1:	8b 00                	mov    (%eax),%eax
c10078c3:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10078c6:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10078cd:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10078d0:	01 ca                	add    %ecx,%edx
c10078d2:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c10078d5:	83 c1 04             	add    $0x4,%ecx
c10078d8:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c10078db:	89 02                	mov    %eax,(%edx)
c10078dd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10078e1:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c10078e5:	76 d7                	jbe    c10078be <search_dir_entry+0x4b>
c10078e7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10078ee:	8b 45 0c             	mov    0xc(%ebp),%eax
c10078f1:	8b 00                	mov    (%eax),%eax
c10078f3:	8b 40 40             	mov    0x40(%eax),%eax
c10078f6:	85 c0                	test   %eax,%eax
c10078f8:	74 1d                	je     c1007917 <search_dir_entry+0xa4>
c10078fa:	8b 45 0c             	mov    0xc(%ebp),%eax
c10078fd:	8b 00                	mov    (%eax),%eax
c10078ff:	8b 40 40             	mov    0x40(%eax),%eax
c1007902:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1007905:	83 c2 30             	add    $0x30,%edx
c1007908:	83 ec 04             	sub    $0x4,%esp
c100790b:	6a 01                	push   $0x1
c100790d:	50                   	push   %eax
c100790e:	52                   	push   %edx
c100790f:	e8 ac db ff ff       	call   c10054c0 <ide_read>
c1007914:	83 c4 10             	add    $0x10,%esp
c1007917:	83 ec 08             	sub    $0x8,%esp
c100791a:	6a 02                	push   $0x2
c100791c:	68 00 02 00 00       	push   $0x200
c1007921:	e8 8e b1 ff ff       	call   c1002ab4 <vmm_malloc>
c1007926:	83 c4 10             	add    $0x10,%esp
c1007929:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100792c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100792f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007932:	8b 45 08             	mov    0x8(%ebp),%eax
c1007935:	8b 40 10             	mov    0x10(%eax),%eax
c1007938:	8b 40 30             	mov    0x30(%eax),%eax
c100793b:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100793e:	b8 00 02 00 00       	mov    $0x200,%eax
c1007943:	ba 00 00 00 00       	mov    $0x0,%edx
c1007948:	f7 75 dc             	divl   -0x24(%ebp)
c100794b:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100794e:	e9 d1 00 00 00       	jmp    c1007a24 <search_dir_entry+0x1b1>
c1007953:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007956:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100795d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007960:	01 d0                	add    %edx,%eax
c1007962:	8b 00                	mov    (%eax),%eax
c1007964:	85 c0                	test   %eax,%eax
c1007966:	75 09                	jne    c1007971 <search_dir_entry+0xfe>
c1007968:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100796c:	e9 b3 00 00 00       	jmp    c1007a24 <search_dir_entry+0x1b1>
c1007971:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007974:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100797b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100797e:	01 d0                	add    %edx,%eax
c1007980:	8b 00                	mov    (%eax),%eax
c1007982:	83 ec 04             	sub    $0x4,%esp
c1007985:	6a 01                	push   $0x1
c1007987:	50                   	push   %eax
c1007988:	ff 75 e0             	pushl  -0x20(%ebp)
c100798b:	e8 30 db ff ff       	call   c10054c0 <ide_read>
c1007990:	83 c4 10             	add    $0x10,%esp
c1007993:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100799a:	eb 61                	jmp    c10079fd <search_dir_entry+0x18a>
c100799c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100799f:	83 ec 08             	sub    $0x8,%esp
c10079a2:	ff 75 10             	pushl  0x10(%ebp)
c10079a5:	50                   	push   %eax
c10079a6:	e8 d8 87 ff ff       	call   c1000183 <strcmp>
c10079ab:	83 c4 10             	add    $0x10,%esp
c10079ae:	85 c0                	test   %eax,%eax
c10079b0:	75 43                	jne    c10079f5 <search_dir_entry+0x182>
c10079b2:	83 ec 04             	sub    $0x4,%esp
c10079b5:	ff 75 dc             	pushl  -0x24(%ebp)
c10079b8:	ff 75 f0             	pushl  -0x10(%ebp)
c10079bb:	ff 75 14             	pushl  0x14(%ebp)
c10079be:	e8 45 87 ff ff       	call   c1000108 <memcpy>
c10079c3:	83 c4 10             	add    $0x10,%esp
c10079c6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10079c9:	83 ec 08             	sub    $0x8,%esp
c10079cc:	68 00 02 00 00       	push   $0x200
c10079d1:	50                   	push   %eax
c10079d2:	e8 02 b2 ff ff       	call   c1002bd9 <vmm_free>
c10079d7:	83 c4 10             	add    $0x10,%esp
c10079da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10079dd:	83 ec 08             	sub    $0x8,%esp
c10079e0:	68 30 02 00 00       	push   $0x230
c10079e5:	50                   	push   %eax
c10079e6:	e8 ee b1 ff ff       	call   c1002bd9 <vmm_free>
c10079eb:	83 c4 10             	add    $0x10,%esp
c10079ee:	b8 01 00 00 00       	mov    $0x1,%eax
c10079f3:	eb 68                	jmp    c1007a5d <search_dir_entry+0x1ea>
c10079f5:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10079f9:	83 45 f0 18          	addl   $0x18,-0x10(%ebp)
c10079fd:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007a00:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c1007a03:	72 97                	jb     c100799c <search_dir_entry+0x129>
c1007a05:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007a09:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007a0c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007a0f:	83 ec 04             	sub    $0x4,%esp
c1007a12:	68 00 02 00 00       	push   $0x200
c1007a17:	6a 00                	push   $0x0
c1007a19:	ff 75 e0             	pushl  -0x20(%ebp)
c1007a1c:	e8 89 86 ff ff       	call   c10000aa <memset>
c1007a21:	83 c4 10             	add    $0x10,%esp
c1007a24:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007a27:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1007a2a:	0f 82 23 ff ff ff    	jb     c1007953 <search_dir_entry+0xe0>
c1007a30:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007a33:	83 ec 08             	sub    $0x8,%esp
c1007a36:	68 00 02 00 00       	push   $0x200
c1007a3b:	50                   	push   %eax
c1007a3c:	e8 98 b1 ff ff       	call   c1002bd9 <vmm_free>
c1007a41:	83 c4 10             	add    $0x10,%esp
c1007a44:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007a47:	83 ec 08             	sub    $0x8,%esp
c1007a4a:	68 30 02 00 00       	push   $0x230
c1007a4f:	50                   	push   %eax
c1007a50:	e8 84 b1 ff ff       	call   c1002bd9 <vmm_free>
c1007a55:	83 c4 10             	add    $0x10,%esp
c1007a58:	b8 00 00 00 00       	mov    $0x0,%eax
c1007a5d:	c9                   	leave  
c1007a5e:	c3                   	ret    

c1007a5f <dir_close>:
c1007a5f:	55                   	push   %ebp
c1007a60:	89 e5                	mov    %esp,%ebp
c1007a62:	83 ec 08             	sub    $0x8,%esp
c1007a65:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1007a6a:	39 45 08             	cmp    %eax,0x8(%ebp)
c1007a6d:	74 27                	je     c1007a96 <dir_close+0x37>
c1007a6f:	8b 45 08             	mov    0x8(%ebp),%eax
c1007a72:	8b 00                	mov    (%eax),%eax
c1007a74:	83 ec 0c             	sub    $0xc,%esp
c1007a77:	50                   	push   %eax
c1007a78:	e8 0a 21 00 00       	call   c1009b87 <inode_close>
c1007a7d:	83 c4 10             	add    $0x10,%esp
c1007a80:	8b 45 08             	mov    0x8(%ebp),%eax
c1007a83:	83 ec 08             	sub    $0x8,%esp
c1007a86:	68 08 02 00 00       	push   $0x208
c1007a8b:	50                   	push   %eax
c1007a8c:	e8 48 b1 ff ff       	call   c1002bd9 <vmm_free>
c1007a91:	83 c4 10             	add    $0x10,%esp
c1007a94:	eb 01                	jmp    c1007a97 <dir_close+0x38>
c1007a96:	90                   	nop
c1007a97:	c9                   	leave  
c1007a98:	c3                   	ret    

c1007a99 <create_dir_entry>:
c1007a99:	55                   	push   %ebp
c1007a9a:	89 e5                	mov    %esp,%ebp
c1007a9c:	83 ec 18             	sub    $0x18,%esp
c1007a9f:	8b 45 10             	mov    0x10(%ebp),%eax
c1007aa2:	88 45 f4             	mov    %al,-0xc(%ebp)
c1007aa5:	83 ec 0c             	sub    $0xc,%esp
c1007aa8:	ff 75 08             	pushl  0x8(%ebp)
c1007aab:	e8 6e 86 ff ff       	call   c100011e <strlen>
c1007ab0:	83 c4 10             	add    $0x10,%esp
c1007ab3:	83 f8 10             	cmp    $0x10,%eax
c1007ab6:	76 16                	jbe    c1007ace <create_dir_entry+0x35>
c1007ab8:	68 80 b3 00 c1       	push   $0xc100b380
c1007abd:	68 34 b5 00 c1       	push   $0xc100b534
c1007ac2:	6a 72                	push   $0x72
c1007ac4:	68 a8 b3 00 c1       	push   $0xc100b3a8
c1007ac9:	e8 3f 88 ff ff       	call   c100030d <__PANIC>
c1007ace:	83 ec 0c             	sub    $0xc,%esp
c1007ad1:	ff 75 08             	pushl  0x8(%ebp)
c1007ad4:	e8 45 86 ff ff       	call   c100011e <strlen>
c1007ad9:	83 c4 10             	add    $0x10,%esp
c1007adc:	8b 55 14             	mov    0x14(%ebp),%edx
c1007adf:	83 ec 04             	sub    $0x4,%esp
c1007ae2:	50                   	push   %eax
c1007ae3:	ff 75 08             	pushl  0x8(%ebp)
c1007ae6:	52                   	push   %edx
c1007ae7:	e8 1c 86 ff ff       	call   c1000108 <memcpy>
c1007aec:	83 c4 10             	add    $0x10,%esp
c1007aef:	8b 45 14             	mov    0x14(%ebp),%eax
c1007af2:	8b 55 0c             	mov    0xc(%ebp),%edx
c1007af5:	89 50 10             	mov    %edx,0x10(%eax)
c1007af8:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
c1007afc:	8b 45 14             	mov    0x14(%ebp),%eax
c1007aff:	89 50 14             	mov    %edx,0x14(%eax)
c1007b02:	90                   	nop
c1007b03:	c9                   	leave  
c1007b04:	c3                   	ret    

c1007b05 <sync_dir_entry>:
c1007b05:	55                   	push   %ebp
c1007b06:	89 e5                	mov    %esp,%ebp
c1007b08:	57                   	push   %edi
c1007b09:	53                   	push   %ebx
c1007b0a:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1007b10:	8b 45 08             	mov    0x8(%ebp),%eax
c1007b13:	8b 00                	mov    (%eax),%eax
c1007b15:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007b18:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007b1b:	8b 40 04             	mov    0x4(%eax),%eax
c1007b1e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007b21:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007b26:	8b 40 10             	mov    0x10(%eax),%eax
c1007b29:	8b 40 30             	mov    0x30(%eax),%eax
c1007b2c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007b2f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007b32:	ba 00 00 00 00       	mov    $0x0,%edx
c1007b37:	f7 75 e8             	divl   -0x18(%ebp)
c1007b3a:	89 d0                	mov    %edx,%eax
c1007b3c:	85 c0                	test   %eax,%eax
c1007b3e:	74 19                	je     c1007b59 <sync_dir_entry+0x54>
c1007b40:	68 d8 b3 00 c1       	push   $0xc100b3d8
c1007b45:	68 48 b5 00 c1       	push   $0xc100b548
c1007b4a:	68 80 00 00 00       	push   $0x80
c1007b4f:	68 a8 b3 00 c1       	push   $0xc100b3a8
c1007b54:	e8 b4 87 ff ff       	call   c100030d <__PANIC>
c1007b59:	b8 00 02 00 00       	mov    $0x200,%eax
c1007b5e:	ba 00 00 00 00       	mov    $0x0,%edx
c1007b63:	f7 75 e8             	divl   -0x18(%ebp)
c1007b66:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007b69:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1007b70:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007b74:	8d 95 a0 fd ff ff    	lea    -0x260(%ebp),%edx
c1007b7a:	b8 00 00 00 00       	mov    $0x0,%eax
c1007b7f:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007b84:	89 d7                	mov    %edx,%edi
c1007b86:	f3 ab                	rep stos %eax,%es:(%edi)
c1007b88:	eb 22                	jmp    c1007bac <sync_dir_entry+0xa7>
c1007b8a:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007b8e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007b92:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007b95:	83 c1 04             	add    $0x4,%ecx
c1007b98:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1007b9b:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1007ba2:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007ba6:	83 c0 01             	add    $0x1,%eax
c1007ba9:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007bac:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007bb0:	76 d8                	jbe    c1007b8a <sync_dir_entry+0x85>
c1007bb2:	8b 45 10             	mov    0x10(%ebp),%eax
c1007bb5:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007bb8:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007bbf:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007bc3:	e9 52 03 00 00       	jmp    c1007f1a <sync_dir_entry+0x415>
c1007bc8:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007bcf:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007bd3:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007bda:	85 c0                	test   %eax,%eax
c1007bdc:	0f 85 80 02 00 00    	jne    c1007e62 <sync_dir_entry+0x35d>
c1007be2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007be7:	83 ec 0c             	sub    $0xc,%esp
c1007bea:	50                   	push   %eax
c1007beb:	e8 25 0c 00 00       	call   c1008815 <block_bitmap_alloc>
c1007bf0:	83 c4 10             	add    $0x10,%esp
c1007bf3:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007bf6:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c1007bfa:	75 1a                	jne    c1007c16 <sync_dir_entry+0x111>
c1007bfc:	83 ec 0c             	sub    $0xc,%esp
c1007bff:	68 f8 b3 00 c1       	push   $0xc100b3f8
c1007c04:	e8 0f d0 ff ff       	call   c1004c18 <printk>
c1007c09:	83 c4 10             	add    $0x10,%esp
c1007c0c:	b8 00 00 00 00       	mov    $0x0,%eax
c1007c11:	e9 23 03 00 00       	jmp    c1007f39 <sync_dir_entry+0x434>
c1007c16:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007c19:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007c1e:	8b 40 10             	mov    0x10(%eax),%eax
c1007c21:	8b 40 28             	mov    0x28(%eax),%eax
c1007c24:	29 c2                	sub    %eax,%edx
c1007c26:	89 d0                	mov    %edx,%eax
c1007c28:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007c2b:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1007c2f:	75 19                	jne    c1007c4a <sync_dir_entry+0x145>
c1007c31:	68 26 b4 00 c1       	push   $0xc100b426
c1007c36:	68 48 b5 00 c1       	push   $0xc100b548
c1007c3b:	68 a3 00 00 00       	push   $0xa3
c1007c40:	68 a8 b3 00 c1       	push   $0xc100b3a8
c1007c45:	e8 c3 86 ff ff       	call   c100030d <__PANIC>
c1007c4a:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1007c4d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007c52:	83 ec 04             	sub    $0x4,%esp
c1007c55:	6a 01                	push   $0x1
c1007c57:	52                   	push   %edx
c1007c58:	50                   	push   %eax
c1007c59:	e8 85 0c 00 00       	call   c10088e3 <bitmap_sync>
c1007c5e:	83 c4 10             	add    $0x10,%esp
c1007c61:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007c68:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007c6c:	77 27                	ja     c1007c95 <sync_dir_entry+0x190>
c1007c6e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007c72:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007c75:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1007c7c:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007c80:	8b 94 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%edx
c1007c87:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007c8a:	83 c1 04             	add    $0x4,%ecx
c1007c8d:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c1007c90:	e9 6d 01 00 00       	jmp    c1007e02 <sync_dir_entry+0x2fd>
c1007c95:	80 7d f7 0c          	cmpb   $0xc,-0x9(%ebp)
c1007c99:	0f 85 37 01 00 00    	jne    c1007dd6 <sync_dir_entry+0x2d1>
c1007c9f:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007ca2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007ca5:	89 50 40             	mov    %edx,0x40(%eax)
c1007ca8:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1007caf:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007cb4:	83 ec 0c             	sub    $0xc,%esp
c1007cb7:	50                   	push   %eax
c1007cb8:	e8 58 0b 00 00       	call   c1008815 <block_bitmap_alloc>
c1007cbd:	83 c4 10             	add    $0x10,%esp
c1007cc0:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007cc3:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c1007cc7:	0f 85 95 00 00 00    	jne    c1007d62 <sync_dir_entry+0x25d>
c1007ccd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007cd0:	8b 50 40             	mov    0x40(%eax),%edx
c1007cd3:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007cd8:	8b 40 10             	mov    0x10(%eax),%eax
c1007cdb:	8b 40 28             	mov    0x28(%eax),%eax
c1007cde:	29 c2                	sub    %eax,%edx
c1007ce0:	89 d0                	mov    %edx,%eax
c1007ce2:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007ce5:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007ce8:	8d 50 07             	lea    0x7(%eax),%edx
c1007ceb:	85 c0                	test   %eax,%eax
c1007ced:	0f 48 c2             	cmovs  %edx,%eax
c1007cf0:	c1 f8 03             	sar    $0x3,%eax
c1007cf3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1007cf6:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1007cf9:	99                   	cltd   
c1007cfa:	c1 ea 1d             	shr    $0x1d,%edx
c1007cfd:	01 d0                	add    %edx,%eax
c1007cff:	83 e0 07             	and    $0x7,%eax
c1007d02:	29 d0                	sub    %edx,%eax
c1007d04:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007d07:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007d0c:	8b 50 18             	mov    0x18(%eax),%edx
c1007d0f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007d12:	01 d0                	add    %edx,%eax
c1007d14:	0f b6 00             	movzbl (%eax),%eax
c1007d17:	89 c2                	mov    %eax,%edx
c1007d19:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007d1c:	bb 01 00 00 00       	mov    $0x1,%ebx
c1007d21:	89 c1                	mov    %eax,%ecx
c1007d23:	d3 e3                	shl    %cl,%ebx
c1007d25:	89 d8                	mov    %ebx,%eax
c1007d27:	f7 d0                	not    %eax
c1007d29:	89 d1                	mov    %edx,%ecx
c1007d2b:	21 c1                	and    %eax,%ecx
c1007d2d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007d32:	8b 50 18             	mov    0x18(%eax),%edx
c1007d35:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1007d38:	01 d0                	add    %edx,%eax
c1007d3a:	89 ca                	mov    %ecx,%edx
c1007d3c:	88 10                	mov    %dl,(%eax)
c1007d3e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007d41:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1007d48:	83 ec 0c             	sub    $0xc,%esp
c1007d4b:	68 f8 b3 00 c1       	push   $0xc100b3f8
c1007d50:	e8 c3 ce ff ff       	call   c1004c18 <printk>
c1007d55:	83 c4 10             	add    $0x10,%esp
c1007d58:	b8 00 00 00 00       	mov    $0x0,%eax
c1007d5d:	e9 d7 01 00 00       	jmp    c1007f39 <sync_dir_entry+0x434>
c1007d62:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007d65:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007d6a:	8b 40 10             	mov    0x10(%eax),%eax
c1007d6d:	8b 40 28             	mov    0x28(%eax),%eax
c1007d70:	29 c2                	sub    %eax,%edx
c1007d72:	89 d0                	mov    %edx,%eax
c1007d74:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007d77:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1007d7b:	75 19                	jne    c1007d96 <sync_dir_entry+0x291>
c1007d7d:	68 26 b4 00 c1       	push   $0xc100b426
c1007d82:	68 48 b5 00 c1       	push   $0xc100b548
c1007d87:	68 ba 00 00 00       	push   $0xba
c1007d8c:	68 a8 b3 00 c1       	push   $0xc100b3a8
c1007d91:	e8 77 85 ff ff       	call   c100030d <__PANIC>
c1007d96:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1007d99:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007d9e:	83 ec 04             	sub    $0x4,%esp
c1007da1:	6a 01                	push   $0x1
c1007da3:	52                   	push   %edx
c1007da4:	50                   	push   %eax
c1007da5:	e8 39 0b 00 00       	call   c10088e3 <bitmap_sync>
c1007daa:	83 c4 10             	add    $0x10,%esp
c1007dad:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007db0:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c1007db6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007db9:	8b 50 40             	mov    0x40(%eax),%edx
c1007dbc:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c1007dc2:	83 c0 30             	add    $0x30,%eax
c1007dc5:	83 ec 04             	sub    $0x4,%esp
c1007dc8:	6a 01                	push   $0x1
c1007dca:	52                   	push   %edx
c1007dcb:	50                   	push   %eax
c1007dcc:	e8 2c d7 ff ff       	call   c10054fd <ide_write>
c1007dd1:	83 c4 10             	add    $0x10,%esp
c1007dd4:	eb 2c                	jmp    c1007e02 <sync_dir_entry+0x2fd>
c1007dd6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007dda:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007ddd:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1007de4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007de7:	8b 50 40             	mov    0x40(%eax),%edx
c1007dea:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c1007df0:	83 c0 30             	add    $0x30,%eax
c1007df3:	83 ec 04             	sub    $0x4,%esp
c1007df6:	6a 01                	push   $0x1
c1007df8:	52                   	push   %edx
c1007df9:	50                   	push   %eax
c1007dfa:	e8 fe d6 ff ff       	call   c10054fd <ide_write>
c1007dff:	83 c4 10             	add    $0x10,%esp
c1007e02:	83 ec 04             	sub    $0x4,%esp
c1007e05:	68 00 02 00 00       	push   $0x200
c1007e0a:	6a 00                	push   $0x0
c1007e0c:	ff 75 10             	pushl  0x10(%ebp)
c1007e0f:	e8 96 82 ff ff       	call   c10000aa <memset>
c1007e14:	83 c4 10             	add    $0x10,%esp
c1007e17:	83 ec 04             	sub    $0x4,%esp
c1007e1a:	ff 75 e8             	pushl  -0x18(%ebp)
c1007e1d:	ff 75 0c             	pushl  0xc(%ebp)
c1007e20:	ff 75 10             	pushl  0x10(%ebp)
c1007e23:	e8 e0 82 ff ff       	call   c1000108 <memcpy>
c1007e28:	83 c4 10             	add    $0x10,%esp
c1007e2b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007e2f:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007e36:	83 ec 04             	sub    $0x4,%esp
c1007e39:	6a 01                	push   $0x1
c1007e3b:	50                   	push   %eax
c1007e3c:	ff 75 10             	pushl  0x10(%ebp)
c1007e3f:	e8 b9 d6 ff ff       	call   c10054fd <ide_write>
c1007e44:	83 c4 10             	add    $0x10,%esp
c1007e47:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007e4a:	8b 50 04             	mov    0x4(%eax),%edx
c1007e4d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007e50:	01 c2                	add    %eax,%edx
c1007e52:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007e55:	89 50 04             	mov    %edx,0x4(%eax)
c1007e58:	b8 01 00 00 00       	mov    $0x1,%eax
c1007e5d:	e9 d7 00 00 00       	jmp    c1007f39 <sync_dir_entry+0x434>
c1007e62:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007e66:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007e6d:	83 ec 04             	sub    $0x4,%esp
c1007e70:	6a 01                	push   $0x1
c1007e72:	50                   	push   %eax
c1007e73:	ff 75 10             	pushl  0x10(%ebp)
c1007e76:	e8 45 d6 ff ff       	call   c10054c0 <ide_read>
c1007e7b:	83 c4 10             	add    $0x10,%esp
c1007e7e:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c1007e82:	eb 7f                	jmp    c1007f03 <sync_dir_entry+0x3fe>
c1007e84:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1007e88:	89 d0                	mov    %edx,%eax
c1007e8a:	01 c0                	add    %eax,%eax
c1007e8c:	01 d0                	add    %edx,%eax
c1007e8e:	c1 e0 03             	shl    $0x3,%eax
c1007e91:	89 c2                	mov    %eax,%edx
c1007e93:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1007e96:	01 d0                	add    %edx,%eax
c1007e98:	8b 40 14             	mov    0x14(%eax),%eax
c1007e9b:	85 c0                	test   %eax,%eax
c1007e9d:	75 5a                	jne    c1007ef9 <sync_dir_entry+0x3f4>
c1007e9f:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1007ea3:	89 d0                	mov    %edx,%eax
c1007ea5:	01 c0                	add    %eax,%eax
c1007ea7:	01 d0                	add    %edx,%eax
c1007ea9:	c1 e0 03             	shl    $0x3,%eax
c1007eac:	89 c2                	mov    %eax,%edx
c1007eae:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1007eb1:	01 d0                	add    %edx,%eax
c1007eb3:	83 ec 04             	sub    $0x4,%esp
c1007eb6:	ff 75 e8             	pushl  -0x18(%ebp)
c1007eb9:	ff 75 0c             	pushl  0xc(%ebp)
c1007ebc:	50                   	push   %eax
c1007ebd:	e8 46 82 ff ff       	call   c1000108 <memcpy>
c1007ec2:	83 c4 10             	add    $0x10,%esp
c1007ec5:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007ec9:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007ed0:	83 ec 04             	sub    $0x4,%esp
c1007ed3:	6a 01                	push   $0x1
c1007ed5:	50                   	push   %eax
c1007ed6:	ff 75 10             	pushl  0x10(%ebp)
c1007ed9:	e8 1f d6 ff ff       	call   c10054fd <ide_write>
c1007ede:	83 c4 10             	add    $0x10,%esp
c1007ee1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007ee4:	8b 50 04             	mov    0x4(%eax),%edx
c1007ee7:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007eea:	01 c2                	add    %eax,%edx
c1007eec:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007eef:	89 50 04             	mov    %edx,0x4(%eax)
c1007ef2:	b8 01 00 00 00       	mov    $0x1,%eax
c1007ef7:	eb 40                	jmp    c1007f39 <sync_dir_entry+0x434>
c1007ef9:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1007efd:	83 c0 01             	add    $0x1,%eax
c1007f00:	88 45 f6             	mov    %al,-0xa(%ebp)
c1007f03:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1007f07:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1007f0a:	0f 87 74 ff ff ff    	ja     c1007e84 <sync_dir_entry+0x37f>
c1007f10:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007f14:	83 c0 01             	add    $0x1,%eax
c1007f17:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007f1a:	80 7d f7 8b          	cmpb   $0x8b,-0x9(%ebp)
c1007f1e:	0f 86 a4 fc ff ff    	jbe    c1007bc8 <sync_dir_entry+0xc3>
c1007f24:	83 ec 0c             	sub    $0xc,%esp
c1007f27:	68 3d b4 00 c1       	push   $0xc100b43d
c1007f2c:	e8 e7 cc ff ff       	call   c1004c18 <printk>
c1007f31:	83 c4 10             	add    $0x10,%esp
c1007f34:	b8 00 00 00 00       	mov    $0x0,%eax
c1007f39:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1007f3c:	5b                   	pop    %ebx
c1007f3d:	5f                   	pop    %edi
c1007f3e:	5d                   	pop    %ebp
c1007f3f:	c3                   	ret    

c1007f40 <delete_dir_entry>:
c1007f40:	55                   	push   %ebp
c1007f41:	89 e5                	mov    %esp,%ebp
c1007f43:	57                   	push   %edi
c1007f44:	53                   	push   %ebx
c1007f45:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1007f4b:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007f4e:	8b 00                	mov    (%eax),%eax
c1007f50:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007f53:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007f5a:	8d 95 98 fd ff ff    	lea    -0x268(%ebp),%edx
c1007f60:	b8 00 00 00 00       	mov    $0x0,%eax
c1007f65:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007f6a:	89 d7                	mov    %edx,%edi
c1007f6c:	f3 ab                	rep stos %eax,%es:(%edi)
c1007f6e:	eb 1a                	jmp    c1007f8a <delete_dir_entry+0x4a>
c1007f70:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007f73:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007f76:	83 c2 04             	add    $0x4,%edx
c1007f79:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1007f7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007f7f:	89 94 85 98 fd ff ff 	mov    %edx,-0x268(%ebp,%eax,4)
c1007f86:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007f8a:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1007f8e:	76 e0                	jbe    c1007f70 <delete_dir_entry+0x30>
c1007f90:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007f93:	8b 40 40             	mov    0x40(%eax),%eax
c1007f96:	85 c0                	test   %eax,%eax
c1007f98:	74 1e                	je     c1007fb8 <delete_dir_entry+0x78>
c1007f9a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007f9d:	8b 50 40             	mov    0x40(%eax),%edx
c1007fa0:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1007fa6:	83 c0 30             	add    $0x30,%eax
c1007fa9:	83 ec 04             	sub    $0x4,%esp
c1007fac:	6a 01                	push   $0x1
c1007fae:	52                   	push   %edx
c1007faf:	50                   	push   %eax
c1007fb0:	e8 0b d5 ff ff       	call   c10054c0 <ide_read>
c1007fb5:	83 c4 10             	add    $0x10,%esp
c1007fb8:	8b 45 08             	mov    0x8(%ebp),%eax
c1007fbb:	8b 40 10             	mov    0x10(%eax),%eax
c1007fbe:	8b 40 30             	mov    0x30(%eax),%eax
c1007fc1:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007fc4:	b8 00 02 00 00       	mov    $0x200,%eax
c1007fc9:	ba 00 00 00 00       	mov    $0x0,%edx
c1007fce:	f7 75 e0             	divl   -0x20(%ebp)
c1007fd1:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007fd4:	8b 45 14             	mov    0x14(%ebp),%eax
c1007fd7:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007fda:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1007fe1:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1007fe5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007fec:	e9 d8 03 00 00       	jmp    c10083c9 <delete_dir_entry+0x489>
c1007ff1:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1007ff5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007ff8:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1007fff:	85 c0                	test   %eax,%eax
c1008001:	75 09                	jne    c100800c <delete_dir_entry+0xcc>
c1008003:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008007:	e9 bd 03 00 00       	jmp    c10083c9 <delete_dir_entry+0x489>
c100800c:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
c1008010:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1008014:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008017:	83 ec 04             	sub    $0x4,%esp
c100801a:	68 00 02 00 00       	push   $0x200
c100801f:	6a 00                	push   $0x0
c1008021:	ff 75 14             	pushl  0x14(%ebp)
c1008024:	e8 81 80 ff ff       	call   c10000aa <memset>
c1008029:	83 c4 10             	add    $0x10,%esp
c100802c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100802f:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008036:	83 ec 04             	sub    $0x4,%esp
c1008039:	6a 01                	push   $0x1
c100803b:	50                   	push   %eax
c100803c:	ff 75 14             	pushl  0x14(%ebp)
c100803f:	e8 7c d4 ff ff       	call   c10054c0 <ide_read>
c1008044:	83 c4 10             	add    $0x10,%esp
c1008047:	e9 0d 01 00 00       	jmp    c1008159 <delete_dir_entry+0x219>
c100804c:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008050:	89 d0                	mov    %edx,%eax
c1008052:	01 c0                	add    %eax,%eax
c1008054:	01 d0                	add    %edx,%eax
c1008056:	c1 e0 03             	shl    $0x3,%eax
c1008059:	89 c2                	mov    %eax,%edx
c100805b:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100805e:	01 d0                	add    %edx,%eax
c1008060:	8b 40 14             	mov    0x14(%eax),%eax
c1008063:	85 c0                	test   %eax,%eax
c1008065:	0f 84 e4 00 00 00    	je     c100814f <delete_dir_entry+0x20f>
c100806b:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c100806f:	89 d0                	mov    %edx,%eax
c1008071:	01 c0                	add    %eax,%eax
c1008073:	01 d0                	add    %edx,%eax
c1008075:	c1 e0 03             	shl    $0x3,%eax
c1008078:	89 c2                	mov    %eax,%edx
c100807a:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100807d:	01 d0                	add    %edx,%eax
c100807f:	83 ec 08             	sub    $0x8,%esp
c1008082:	68 51 b4 00 c1       	push   $0xc100b451
c1008087:	50                   	push   %eax
c1008088:	e8 f6 80 ff ff       	call   c1000183 <strcmp>
c100808d:	83 c4 10             	add    $0x10,%esp
c1008090:	85 c0                	test   %eax,%eax
c1008092:	75 09                	jne    c100809d <delete_dir_entry+0x15d>
c1008094:	c6 45 ed 01          	movb   $0x1,-0x13(%ebp)
c1008098:	e9 b2 00 00 00       	jmp    c100814f <delete_dir_entry+0x20f>
c100809d:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c10080a1:	89 d0                	mov    %edx,%eax
c10080a3:	01 c0                	add    %eax,%eax
c10080a5:	01 d0                	add    %edx,%eax
c10080a7:	c1 e0 03             	shl    $0x3,%eax
c10080aa:	89 c2                	mov    %eax,%edx
c10080ac:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10080af:	01 d0                	add    %edx,%eax
c10080b1:	83 ec 08             	sub    $0x8,%esp
c10080b4:	68 51 b4 00 c1       	push   $0xc100b451
c10080b9:	50                   	push   %eax
c10080ba:	e8 c4 80 ff ff       	call   c1000183 <strcmp>
c10080bf:	83 c4 10             	add    $0x10,%esp
c10080c2:	85 c0                	test   %eax,%eax
c10080c4:	0f 84 85 00 00 00    	je     c100814f <delete_dir_entry+0x20f>
c10080ca:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c10080ce:	89 d0                	mov    %edx,%eax
c10080d0:	01 c0                	add    %eax,%eax
c10080d2:	01 d0                	add    %edx,%eax
c10080d4:	c1 e0 03             	shl    $0x3,%eax
c10080d7:	89 c2                	mov    %eax,%edx
c10080d9:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10080dc:	01 d0                	add    %edx,%eax
c10080de:	83 ec 08             	sub    $0x8,%esp
c10080e1:	68 53 b4 00 c1       	push   $0xc100b453
c10080e6:	50                   	push   %eax
c10080e7:	e8 97 80 ff ff       	call   c1000183 <strcmp>
c10080ec:	83 c4 10             	add    $0x10,%esp
c10080ef:	85 c0                	test   %eax,%eax
c10080f1:	74 5c                	je     c100814f <delete_dir_entry+0x20f>
c10080f3:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c10080f7:	83 c0 01             	add    $0x1,%eax
c10080fa:	88 45 ee             	mov    %al,-0x12(%ebp)
c10080fd:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008101:	89 d0                	mov    %edx,%eax
c1008103:	01 c0                	add    %eax,%eax
c1008105:	01 d0                	add    %edx,%eax
c1008107:	c1 e0 03             	shl    $0x3,%eax
c100810a:	89 c2                	mov    %eax,%edx
c100810c:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100810f:	01 d0                	add    %edx,%eax
c1008111:	8b 40 10             	mov    0x10(%eax),%eax
c1008114:	39 45 10             	cmp    %eax,0x10(%ebp)
c1008117:	75 36                	jne    c100814f <delete_dir_entry+0x20f>
c1008119:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c100811d:	74 19                	je     c1008138 <delete_dir_entry+0x1f8>
c100811f:	68 56 b4 00 c1       	push   $0xc100b456
c1008124:	68 58 b5 00 c1       	push   $0xc100b558
c1008129:	68 10 01 00 00       	push   $0x110
c100812e:	68 a8 b3 00 c1       	push   $0xc100b3a8
c1008133:	e8 d5 81 ff ff       	call   c100030d <__PANIC>
c1008138:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c100813c:	89 d0                	mov    %edx,%eax
c100813e:	01 c0                	add    %eax,%eax
c1008140:	01 d0                	add    %edx,%eax
c1008142:	c1 e0 03             	shl    $0x3,%eax
c1008145:	89 c2                	mov    %eax,%edx
c1008147:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100814a:	01 d0                	add    %edx,%eax
c100814c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100814f:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008153:	83 c0 01             	add    $0x1,%eax
c1008156:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008159:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c100815d:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1008160:	0f 87 e6 fe ff ff    	ja     c100804c <delete_dir_entry+0x10c>
c1008166:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c100816a:	75 09                	jne    c1008175 <delete_dir_entry+0x235>
c100816c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008170:	e9 54 02 00 00       	jmp    c10083c9 <delete_dir_entry+0x489>
c1008175:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
c1008179:	75 19                	jne    c1008194 <delete_dir_entry+0x254>
c100817b:	68 6e b4 00 c1       	push   $0xc100b46e
c1008180:	68 58 b5 00 c1       	push   $0xc100b558
c1008185:	68 20 01 00 00       	push   $0x120
c100818a:	68 a8 b3 00 c1       	push   $0xc100b3a8
c100818f:	e8 79 81 ff ff       	call   c100030d <__PANIC>
c1008194:	80 7d ee 01          	cmpb   $0x1,-0x12(%ebp)
c1008198:	0f 85 98 01 00 00    	jne    c1008336 <delete_dir_entry+0x3f6>
c100819e:	80 7d ed 00          	cmpb   $0x0,-0x13(%ebp)
c10081a2:	0f 85 8e 01 00 00    	jne    c1008336 <delete_dir_entry+0x3f6>
c10081a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10081ab:	8b 94 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%edx
c10081b2:	8b 45 08             	mov    0x8(%ebp),%eax
c10081b5:	8b 40 10             	mov    0x10(%eax),%eax
c10081b8:	8b 40 28             	mov    0x28(%eax),%eax
c10081bb:	29 c2                	sub    %eax,%edx
c10081bd:	89 d0                	mov    %edx,%eax
c10081bf:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10081c2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10081c5:	c1 e8 03             	shr    $0x3,%eax
c10081c8:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10081cb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10081ce:	83 e0 07             	and    $0x7,%eax
c10081d1:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10081d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10081d7:	8b 50 18             	mov    0x18(%eax),%edx
c10081da:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10081dd:	01 d0                	add    %edx,%eax
c10081df:	0f b6 00             	movzbl (%eax),%eax
c10081e2:	89 c2                	mov    %eax,%edx
c10081e4:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10081e7:	bb 01 00 00 00       	mov    $0x1,%ebx
c10081ec:	89 c1                	mov    %eax,%ecx
c10081ee:	d3 e3                	shl    %cl,%ebx
c10081f0:	89 d8                	mov    %ebx,%eax
c10081f2:	f7 d0                	not    %eax
c10081f4:	89 d1                	mov    %edx,%ecx
c10081f6:	21 c1                	and    %eax,%ecx
c10081f8:	8b 45 08             	mov    0x8(%ebp),%eax
c10081fb:	8b 50 18             	mov    0x18(%eax),%edx
c10081fe:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008201:	01 d0                	add    %edx,%eax
c1008203:	89 ca                	mov    %ecx,%edx
c1008205:	88 10                	mov    %dl,(%eax)
c1008207:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100820c:	83 ec 04             	sub    $0x4,%esp
c100820f:	6a 01                	push   $0x1
c1008211:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008214:	50                   	push   %eax
c1008215:	e8 c9 06 00 00       	call   c10088e3 <bitmap_sync>
c100821a:	83 c4 10             	add    $0x10,%esp
c100821d:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1008221:	77 15                	ja     c1008238 <delete_dir_entry+0x2f8>
c1008223:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008226:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008229:	83 c2 04             	add    $0x4,%edx
c100822c:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1008233:	e9 2c 01 00 00       	jmp    c1008364 <delete_dir_entry+0x424>
c1008238:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c100823f:	c7 45 c8 0c 00 00 00 	movl   $0xc,-0x38(%ebp)
c1008246:	eb 12                	jmp    c100825a <delete_dir_entry+0x31a>
c1008248:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100824b:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008252:	85 c0                	test   %eax,%eax
c1008254:	74 04                	je     c100825a <delete_dir_entry+0x31a>
c1008256:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c100825a:	81 7d c8 8b 00 00 00 	cmpl   $0x8b,-0x38(%ebp)
c1008261:	76 e5                	jbe    c1008248 <delete_dir_entry+0x308>
c1008263:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1008267:	75 19                	jne    c1008282 <delete_dir_entry+0x342>
c1008269:	68 81 b4 00 c1       	push   $0xc100b481
c100826e:	68 58 b5 00 c1       	push   $0xc100b558
c1008273:	68 36 01 00 00       	push   $0x136
c1008278:	68 a8 b3 00 c1       	push   $0xc100b3a8
c100827d:	e8 8b 80 ff ff       	call   c100030d <__PANIC>
c1008282:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1008286:	76 31                	jbe    c10082b9 <delete_dir_entry+0x379>
c1008288:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100828b:	c7 84 85 98 fd ff ff 	movl   $0x0,-0x268(%ebp,%eax,4)
c1008292:	00 00 00 00 
c1008296:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008299:	8b 50 40             	mov    0x40(%eax),%edx
c100829c:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c10082a2:	83 c0 30             	add    $0x30,%eax
c10082a5:	83 ec 04             	sub    $0x4,%esp
c10082a8:	6a 01                	push   $0x1
c10082aa:	52                   	push   %edx
c10082ab:	50                   	push   %eax
c10082ac:	e8 4c d2 ff ff       	call   c10054fd <ide_write>
c10082b1:	83 c4 10             	add    $0x10,%esp
c10082b4:	e9 ab 00 00 00       	jmp    c1008364 <delete_dir_entry+0x424>
c10082b9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10082bc:	8b 50 40             	mov    0x40(%eax),%edx
c10082bf:	8b 45 08             	mov    0x8(%ebp),%eax
c10082c2:	8b 40 10             	mov    0x10(%eax),%eax
c10082c5:	8b 40 28             	mov    0x28(%eax),%eax
c10082c8:	29 c2                	sub    %eax,%edx
c10082ca:	89 d0                	mov    %edx,%eax
c10082cc:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10082cf:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10082d2:	c1 e8 03             	shr    $0x3,%eax
c10082d5:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10082d8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10082db:	83 e0 07             	and    $0x7,%eax
c10082de:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10082e1:	8b 45 08             	mov    0x8(%ebp),%eax
c10082e4:	8b 50 18             	mov    0x18(%eax),%edx
c10082e7:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10082ea:	01 d0                	add    %edx,%eax
c10082ec:	0f b6 00             	movzbl (%eax),%eax
c10082ef:	89 c2                	mov    %eax,%edx
c10082f1:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10082f4:	bb 01 00 00 00       	mov    $0x1,%ebx
c10082f9:	89 c1                	mov    %eax,%ecx
c10082fb:	d3 e3                	shl    %cl,%ebx
c10082fd:	89 d8                	mov    %ebx,%eax
c10082ff:	f7 d0                	not    %eax
c1008301:	89 d1                	mov    %edx,%ecx
c1008303:	21 c1                	and    %eax,%ecx
c1008305:	8b 45 08             	mov    0x8(%ebp),%eax
c1008308:	8b 50 18             	mov    0x18(%eax),%edx
c100830b:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100830e:	01 d0                	add    %edx,%eax
c1008310:	89 ca                	mov    %ecx,%edx
c1008312:	88 10                	mov    %dl,(%eax)
c1008314:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008319:	83 ec 04             	sub    $0x4,%esp
c100831c:	6a 01                	push   $0x1
c100831e:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008321:	50                   	push   %eax
c1008322:	e8 bc 05 00 00       	call   c10088e3 <bitmap_sync>
c1008327:	83 c4 10             	add    $0x10,%esp
c100832a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100832d:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1008334:	eb 2e                	jmp    c1008364 <delete_dir_entry+0x424>
c1008336:	83 ec 04             	sub    $0x4,%esp
c1008339:	ff 75 e0             	pushl  -0x20(%ebp)
c100833c:	6a 00                	push   $0x0
c100833e:	ff 75 f0             	pushl  -0x10(%ebp)
c1008341:	e8 64 7d ff ff       	call   c10000aa <memset>
c1008346:	83 c4 10             	add    $0x10,%esp
c1008349:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100834c:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008353:	83 ec 04             	sub    $0x4,%esp
c1008356:	6a 01                	push   $0x1
c1008358:	50                   	push   %eax
c1008359:	ff 75 14             	pushl  0x14(%ebp)
c100835c:	e8 9c d1 ff ff       	call   c10054fd <ide_write>
c1008361:	83 c4 10             	add    $0x10,%esp
c1008364:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008367:	8b 40 04             	mov    0x4(%eax),%eax
c100836a:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c100836d:	76 19                	jbe    c1008388 <delete_dir_entry+0x448>
c100836f:	68 98 b4 00 c1       	push   $0xc100b498
c1008374:	68 58 b5 00 c1       	push   $0xc100b558
c1008379:	68 4d 01 00 00       	push   $0x14d
c100837e:	68 a8 b3 00 c1       	push   $0xc100b3a8
c1008383:	e8 85 7f ff ff       	call   c100030d <__PANIC>
c1008388:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100838b:	8b 40 04             	mov    0x4(%eax),%eax
c100838e:	2b 45 e0             	sub    -0x20(%ebp),%eax
c1008391:	89 c2                	mov    %eax,%edx
c1008393:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008396:	89 50 04             	mov    %edx,0x4(%eax)
c1008399:	83 ec 04             	sub    $0x4,%esp
c100839c:	68 00 04 00 00       	push   $0x400
c10083a1:	6a 00                	push   $0x0
c10083a3:	ff 75 14             	pushl  0x14(%ebp)
c10083a6:	e8 ff 7c ff ff       	call   c10000aa <memset>
c10083ab:	83 c4 10             	add    $0x10,%esp
c10083ae:	83 ec 04             	sub    $0x4,%esp
c10083b1:	ff 75 14             	pushl  0x14(%ebp)
c10083b4:	ff 75 e4             	pushl  -0x1c(%ebp)
c10083b7:	ff 75 08             	pushl  0x8(%ebp)
c10083ba:	e8 d1 15 00 00       	call   c1009990 <inode_sync>
c10083bf:	83 c4 10             	add    $0x10,%esp
c10083c2:	b8 01 00 00 00       	mov    $0x1,%eax
c10083c7:	eb 12                	jmp    c10083db <delete_dir_entry+0x49b>
c10083c9:	81 7d f4 8b 00 00 00 	cmpl   $0x8b,-0xc(%ebp)
c10083d0:	0f 86 1b fc ff ff    	jbe    c1007ff1 <delete_dir_entry+0xb1>
c10083d6:	b8 00 00 00 00       	mov    $0x0,%eax
c10083db:	8d 65 f8             	lea    -0x8(%ebp),%esp
c10083de:	5b                   	pop    %ebx
c10083df:	5f                   	pop    %edi
c10083e0:	5d                   	pop    %ebp
c10083e1:	c3                   	ret    

c10083e2 <dir_read>:
c10083e2:	55                   	push   %ebp
c10083e3:	89 e5                	mov    %esp,%ebp
c10083e5:	57                   	push   %edi
c10083e6:	81 ec 54 02 00 00    	sub    $0x254,%esp
c10083ec:	8b 45 08             	mov    0x8(%ebp),%eax
c10083ef:	83 c0 08             	add    $0x8,%eax
c10083f2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10083f5:	8b 45 08             	mov    0x8(%ebp),%eax
c10083f8:	8b 00                	mov    (%eax),%eax
c10083fa:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10083fd:	8d 95 a8 fd ff ff    	lea    -0x258(%ebp),%edx
c1008403:	b8 00 00 00 00       	mov    $0x0,%eax
c1008408:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100840d:	89 d7                	mov    %edx,%edi
c100840f:	f3 ab                	rep stos %eax,%es:(%edi)
c1008411:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
c1008418:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100841f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1008426:	eb 1a                	jmp    c1008442 <dir_read+0x60>
c1008428:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100842b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100842e:	83 c2 04             	add    $0x4,%edx
c1008431:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1008434:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008437:	89 94 85 a8 fd ff ff 	mov    %edx,-0x258(%ebp,%eax,4)
c100843e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1008442:	83 7d f0 0b          	cmpl   $0xb,-0x10(%ebp)
c1008446:	76 e0                	jbe    c1008428 <dir_read+0x46>
c1008448:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100844b:	8b 40 40             	mov    0x40(%eax),%eax
c100844e:	85 c0                	test   %eax,%eax
c1008450:	74 25                	je     c1008477 <dir_read+0x95>
c1008452:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008455:	8b 50 40             	mov    0x40(%eax),%edx
c1008458:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
c100845e:	83 c0 30             	add    $0x30,%eax
c1008461:	83 ec 04             	sub    $0x4,%esp
c1008464:	6a 01                	push   $0x1
c1008466:	52                   	push   %edx
c1008467:	50                   	push   %eax
c1008468:	e8 53 d0 ff ff       	call   c10054c0 <ide_read>
c100846d:	83 c4 10             	add    $0x10,%esp
c1008470:	c7 45 f4 8c 00 00 00 	movl   $0x8c,-0xc(%ebp)
c1008477:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100847e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1008485:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100848a:	8b 40 10             	mov    0x10(%eax),%eax
c100848d:	8b 40 30             	mov    0x30(%eax),%eax
c1008490:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008493:	b8 00 02 00 00       	mov    $0x200,%eax
c1008498:	ba 00 00 00 00       	mov    $0x0,%edx
c100849d:	f7 75 dc             	divl   -0x24(%ebp)
c10084a0:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10084a3:	e9 f9 00 00 00       	jmp    c10085a1 <dir_read+0x1bf>
c10084a8:	8b 45 08             	mov    0x8(%ebp),%eax
c10084ab:	8b 50 04             	mov    0x4(%eax),%edx
c10084ae:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10084b1:	8b 40 04             	mov    0x4(%eax),%eax
c10084b4:	39 c2                	cmp    %eax,%edx
c10084b6:	72 0a                	jb     c10084c2 <dir_read+0xe0>
c10084b8:	b8 00 00 00 00       	mov    $0x0,%eax
c10084bd:	e9 f0 00 00 00       	jmp    c10085b2 <dir_read+0x1d0>
c10084c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10084c5:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c10084cc:	85 c0                	test   %eax,%eax
c10084ce:	75 09                	jne    c10084d9 <dir_read+0xf7>
c10084d0:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10084d4:	e9 c8 00 00 00       	jmp    c10085a1 <dir_read+0x1bf>
c10084d9:	83 ec 04             	sub    $0x4,%esp
c10084dc:	68 00 02 00 00       	push   $0x200
c10084e1:	6a 00                	push   $0x0
c10084e3:	ff 75 e4             	pushl  -0x1c(%ebp)
c10084e6:	e8 bf 7b ff ff       	call   c10000aa <memset>
c10084eb:	83 c4 10             	add    $0x10,%esp
c10084ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10084f1:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c10084f8:	83 ec 04             	sub    $0x4,%esp
c10084fb:	6a 01                	push   $0x1
c10084fd:	50                   	push   %eax
c10084fe:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008501:	e8 ba cf ff ff       	call   c10054c0 <ide_read>
c1008506:	83 c4 10             	add    $0x10,%esp
c1008509:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1008510:	eb 7f                	jmp    c1008591 <dir_read+0x1af>
c1008512:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1008515:	89 d0                	mov    %edx,%eax
c1008517:	01 c0                	add    %eax,%eax
c1008519:	01 d0                	add    %edx,%eax
c100851b:	c1 e0 03             	shl    $0x3,%eax
c100851e:	89 c2                	mov    %eax,%edx
c1008520:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008523:	01 d0                	add    %edx,%eax
c1008525:	8b 40 14             	mov    0x14(%eax),%eax
c1008528:	85 c0                	test   %eax,%eax
c100852a:	74 61                	je     c100858d <dir_read+0x1ab>
c100852c:	8b 45 08             	mov    0x8(%ebp),%eax
c100852f:	8b 40 04             	mov    0x4(%eax),%eax
c1008532:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c1008535:	73 0c                	jae    c1008543 <dir_read+0x161>
c1008537:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100853a:	01 45 e8             	add    %eax,-0x18(%ebp)
c100853d:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1008541:	eb 4e                	jmp    c1008591 <dir_read+0x1af>
c1008543:	8b 45 08             	mov    0x8(%ebp),%eax
c1008546:	8b 40 04             	mov    0x4(%eax),%eax
c1008549:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c100854c:	74 19                	je     c1008567 <dir_read+0x185>
c100854e:	68 bc b4 00 c1       	push   $0xc100b4bc
c1008553:	68 6c b5 00 c1       	push   $0xc100b56c
c1008558:	68 7f 01 00 00       	push   $0x17f
c100855d:	68 a8 b3 00 c1       	push   $0xc100b3a8
c1008562:	e8 a6 7d ff ff       	call   c100030d <__PANIC>
c1008567:	8b 45 08             	mov    0x8(%ebp),%eax
c100856a:	8b 50 04             	mov    0x4(%eax),%edx
c100856d:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008570:	01 c2                	add    %eax,%edx
c1008572:	8b 45 08             	mov    0x8(%ebp),%eax
c1008575:	89 50 04             	mov    %edx,0x4(%eax)
c1008578:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100857b:	89 d0                	mov    %edx,%eax
c100857d:	01 c0                	add    %eax,%eax
c100857f:	01 d0                	add    %edx,%eax
c1008581:	c1 e0 03             	shl    $0x3,%eax
c1008584:	89 c2                	mov    %eax,%edx
c1008586:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008589:	01 d0                	add    %edx,%eax
c100858b:	eb 25                	jmp    c10085b2 <dir_read+0x1d0>
c100858d:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1008591:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008594:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c1008597:	0f 82 75 ff ff ff    	jb     c1008512 <dir_read+0x130>
c100859d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10085a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10085a4:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c10085a7:	0f 82 fb fe ff ff    	jb     c10084a8 <dir_read+0xc6>
c10085ad:	b8 00 00 00 00       	mov    $0x0,%eax
c10085b2:	8b 7d fc             	mov    -0x4(%ebp),%edi
c10085b5:	c9                   	leave  
c10085b6:	c3                   	ret    

c10085b7 <dir_is_empty>:
c10085b7:	55                   	push   %ebp
c10085b8:	89 e5                	mov    %esp,%ebp
c10085ba:	83 ec 10             	sub    $0x10,%esp
c10085bd:	8b 45 08             	mov    0x8(%ebp),%eax
c10085c0:	8b 00                	mov    (%eax),%eax
c10085c2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10085c5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10085c8:	8b 50 04             	mov    0x4(%eax),%edx
c10085cb:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10085d0:	8b 40 10             	mov    0x10(%eax),%eax
c10085d3:	8b 40 30             	mov    0x30(%eax),%eax
c10085d6:	01 c0                	add    %eax,%eax
c10085d8:	39 c2                	cmp    %eax,%edx
c10085da:	0f 94 c0             	sete   %al
c10085dd:	c9                   	leave  
c10085de:	c3                   	ret    

c10085df <dir_remove>:
c10085df:	55                   	push   %ebp
c10085e0:	89 e5                	mov    %esp,%ebp
c10085e2:	83 ec 18             	sub    $0x18,%esp
c10085e5:	8b 45 0c             	mov    0xc(%ebp),%eax
c10085e8:	8b 00                	mov    (%eax),%eax
c10085ea:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10085ed:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c10085f4:	eb 2d                	jmp    c1008623 <dir_remove+0x44>
c10085f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10085f9:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10085fc:	83 c2 04             	add    $0x4,%edx
c10085ff:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008602:	85 c0                	test   %eax,%eax
c1008604:	74 19                	je     c100861f <dir_remove+0x40>
c1008606:	68 e0 b4 00 c1       	push   $0xc100b4e0
c100860b:	68 78 b5 00 c1       	push   $0xc100b578
c1008610:	68 96 01 00 00       	push   $0x196
c1008615:	68 a8 b3 00 c1       	push   $0xc100b3a8
c100861a:	e8 ee 7c ff ff       	call   c100030d <__PANIC>
c100861f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008623:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
c1008627:	7e cd                	jle    c10085f6 <dir_remove+0x17>
c1008629:	83 ec 08             	sub    $0x8,%esp
c100862c:	6a 02                	push   $0x2
c100862e:	68 00 04 00 00       	push   $0x400
c1008633:	e8 7c a4 ff ff       	call   c1002ab4 <vmm_malloc>
c1008638:	83 c4 10             	add    $0x10,%esp
c100863b:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100863e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1008642:	75 17                	jne    c100865b <dir_remove+0x7c>
c1008644:	83 ec 0c             	sub    $0xc,%esp
c1008647:	68 0c b5 00 c1       	push   $0xc100b50c
c100864c:	e8 c7 c5 ff ff       	call   c1004c18 <printk>
c1008651:	83 c4 10             	add    $0x10,%esp
c1008654:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008659:	eb 4a                	jmp    c10086a5 <dir_remove+0xc6>
c100865b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100865e:	8b 10                	mov    (%eax),%edx
c1008660:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008665:	ff 75 ec             	pushl  -0x14(%ebp)
c1008668:	52                   	push   %edx
c1008669:	ff 75 08             	pushl  0x8(%ebp)
c100866c:	50                   	push   %eax
c100866d:	e8 ce f8 ff ff       	call   c1007f40 <delete_dir_entry>
c1008672:	83 c4 10             	add    $0x10,%esp
c1008675:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008678:	8b 10                	mov    (%eax),%edx
c100867a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100867f:	83 ec 08             	sub    $0x8,%esp
c1008682:	52                   	push   %edx
c1008683:	50                   	push   %eax
c1008684:	e8 14 16 00 00       	call   c1009c9d <inode_release>
c1008689:	83 c4 10             	add    $0x10,%esp
c100868c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100868f:	83 ec 08             	sub    $0x8,%esp
c1008692:	68 00 04 00 00       	push   $0x400
c1008697:	50                   	push   %eax
c1008698:	e8 3c a5 ff ff       	call   c1002bd9 <vmm_free>
c100869d:	83 c4 10             	add    $0x10,%esp
c10086a0:	b8 00 00 00 00       	mov    $0x0,%eax
c10086a5:	c9                   	leave  
c10086a6:	c3                   	ret    

c10086a7 <hash32>:
c10086a7:	55                   	push   %ebp
c10086a8:	89 e5                	mov    %esp,%ebp
c10086aa:	83 ec 10             	sub    $0x10,%esp
c10086ad:	8b 45 08             	mov    0x8(%ebp),%eax
c10086b0:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10086b6:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10086b9:	b8 20 00 00 00       	mov    $0x20,%eax
c10086be:	2b 45 0c             	sub    0xc(%ebp),%eax
c10086c1:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10086c4:	89 c1                	mov    %eax,%ecx
c10086c6:	d3 ea                	shr    %cl,%edx
c10086c8:	89 d0                	mov    %edx,%eax
c10086ca:	c9                   	leave  
c10086cb:	c3                   	ret    

c10086cc <get_free_slot_in_global>:
c10086cc:	55                   	push   %ebp
c10086cd:	89 e5                	mov    %esp,%ebp
c10086cf:	83 ec 10             	sub    $0x10,%esp
c10086d2:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
c10086d9:	eb 1b                	jmp    c10086f6 <get_free_slot_in_global+0x2a>
c10086db:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10086de:	89 d0                	mov    %edx,%eax
c10086e0:	01 c0                	add    %eax,%eax
c10086e2:	01 d0                	add    %edx,%eax
c10086e4:	c1 e0 02             	shl    $0x2,%eax
c10086e7:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c10086ec:	8b 00                	mov    (%eax),%eax
c10086ee:	85 c0                	test   %eax,%eax
c10086f0:	74 0c                	je     c10086fe <get_free_slot_in_global+0x32>
c10086f2:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c10086f6:	83 7d fc 1f          	cmpl   $0x1f,-0x4(%ebp)
c10086fa:	76 df                	jbe    c10086db <get_free_slot_in_global+0xf>
c10086fc:	eb 01                	jmp    c10086ff <get_free_slot_in_global+0x33>
c10086fe:	90                   	nop
c10086ff:	83 7d fc 20          	cmpl   $0x20,-0x4(%ebp)
c1008703:	75 07                	jne    c100870c <get_free_slot_in_global+0x40>
c1008705:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100870a:	eb 03                	jmp    c100870f <get_free_slot_in_global+0x43>
c100870c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100870f:	c9                   	leave  
c1008710:	c3                   	ret    

c1008711 <task_fd_install>:
c1008711:	55                   	push   %ebp
c1008712:	89 e5                	mov    %esp,%ebp
c1008714:	83 ec 10             	sub    $0x10,%esp
c1008717:	c6 45 ff 03          	movb   $0x3,-0x1(%ebp)
c100871b:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1008720:	0f be 55 ff          	movsbl -0x1(%ebp),%edx
c1008724:	83 c2 1c             	add    $0x1c,%edx
c1008727:	8b 04 90             	mov    (%eax,%edx,4),%eax
c100872a:	83 f8 ff             	cmp    $0xffffffff,%eax
c100872d:	75 14                	jne    c1008743 <task_fd_install+0x32>
c100872f:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1008734:	0f be 4d ff          	movsbl -0x1(%ebp),%ecx
c1008738:	8b 55 08             	mov    0x8(%ebp),%edx
c100873b:	83 c1 1c             	add    $0x1c,%ecx
c100873e:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c1008741:	eb 0c                	jmp    c100874f <task_fd_install+0x3e>
c1008743:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
c1008747:	83 c0 01             	add    $0x1,%eax
c100874a:	88 45 ff             	mov    %al,-0x1(%ebp)
c100874d:	eb cc                	jmp    c100871b <task_fd_install+0xa>
c100874f:	0f be 45 ff          	movsbl -0x1(%ebp),%eax
c1008753:	c9                   	leave  
c1008754:	c3                   	ret    

c1008755 <inode_bitmap_alloc>:
c1008755:	55                   	push   %ebp
c1008756:	89 e5                	mov    %esp,%ebp
c1008758:	53                   	push   %ebx
c1008759:	83 ec 10             	sub    $0x10,%esp
c100875c:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1008763:	eb 04                	jmp    c1008769 <inode_bitmap_alloc+0x14>
c1008765:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1008769:	8b 45 08             	mov    0x8(%ebp),%eax
c100876c:	8b 50 20             	mov    0x20(%eax),%edx
c100876f:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008772:	01 d0                	add    %edx,%eax
c1008774:	0f b6 00             	movzbl (%eax),%eax
c1008777:	3c ff                	cmp    $0xff,%al
c1008779:	75 0b                	jne    c1008786 <inode_bitmap_alloc+0x31>
c100877b:	8b 45 08             	mov    0x8(%ebp),%eax
c100877e:	8b 40 1c             	mov    0x1c(%eax),%eax
c1008781:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1008784:	72 df                	jb     c1008765 <inode_bitmap_alloc+0x10>
c1008786:	8b 45 08             	mov    0x8(%ebp),%eax
c1008789:	8b 40 1c             	mov    0x1c(%eax),%eax
c100878c:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c100878f:	75 07                	jne    c1008798 <inode_bitmap_alloc+0x43>
c1008791:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008796:	eb 77                	jmp    c100880f <inode_bitmap_alloc+0xba>
c1008798:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100879f:	eb 04                	jmp    c10087a5 <inode_bitmap_alloc+0x50>
c10087a1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10087a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10087a8:	ba 01 00 00 00       	mov    $0x1,%edx
c10087ad:	89 c1                	mov    %eax,%ecx
c10087af:	d3 e2                	shl    %cl,%edx
c10087b1:	89 d0                	mov    %edx,%eax
c10087b3:	89 c1                	mov    %eax,%ecx
c10087b5:	8b 45 08             	mov    0x8(%ebp),%eax
c10087b8:	8b 50 20             	mov    0x20(%eax),%edx
c10087bb:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10087be:	01 d0                	add    %edx,%eax
c10087c0:	0f b6 00             	movzbl (%eax),%eax
c10087c3:	21 c8                	and    %ecx,%eax
c10087c5:	84 c0                	test   %al,%al
c10087c7:	75 d8                	jne    c10087a1 <inode_bitmap_alloc+0x4c>
c10087c9:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10087cc:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c10087d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10087d6:	01 d0                	add    %edx,%eax
c10087d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10087db:	8b 45 08             	mov    0x8(%ebp),%eax
c10087de:	8b 50 20             	mov    0x20(%eax),%edx
c10087e1:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10087e4:	01 d0                	add    %edx,%eax
c10087e6:	0f b6 00             	movzbl (%eax),%eax
c10087e9:	89 c3                	mov    %eax,%ebx
c10087eb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10087ee:	ba 01 00 00 00       	mov    $0x1,%edx
c10087f3:	89 c1                	mov    %eax,%ecx
c10087f5:	d3 e2                	shl    %cl,%edx
c10087f7:	89 d0                	mov    %edx,%eax
c10087f9:	09 c3                	or     %eax,%ebx
c10087fb:	89 d9                	mov    %ebx,%ecx
c10087fd:	8b 45 08             	mov    0x8(%ebp),%eax
c1008800:	8b 50 20             	mov    0x20(%eax),%edx
c1008803:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008806:	01 d0                	add    %edx,%eax
c1008808:	89 ca                	mov    %ecx,%edx
c100880a:	88 10                	mov    %dl,(%eax)
c100880c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100880f:	83 c4 10             	add    $0x10,%esp
c1008812:	5b                   	pop    %ebx
c1008813:	5d                   	pop    %ebp
c1008814:	c3                   	ret    

c1008815 <block_bitmap_alloc>:
c1008815:	55                   	push   %ebp
c1008816:	89 e5                	mov    %esp,%ebp
c1008818:	53                   	push   %ebx
c1008819:	83 ec 10             	sub    $0x10,%esp
c100881c:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1008823:	eb 04                	jmp    c1008829 <block_bitmap_alloc+0x14>
c1008825:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1008829:	8b 45 08             	mov    0x8(%ebp),%eax
c100882c:	8b 50 18             	mov    0x18(%eax),%edx
c100882f:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008832:	01 d0                	add    %edx,%eax
c1008834:	0f b6 00             	movzbl (%eax),%eax
c1008837:	3c ff                	cmp    $0xff,%al
c1008839:	75 0b                	jne    c1008846 <block_bitmap_alloc+0x31>
c100883b:	8b 45 08             	mov    0x8(%ebp),%eax
c100883e:	8b 40 14             	mov    0x14(%eax),%eax
c1008841:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1008844:	72 df                	jb     c1008825 <block_bitmap_alloc+0x10>
c1008846:	8b 45 08             	mov    0x8(%ebp),%eax
c1008849:	8b 40 14             	mov    0x14(%eax),%eax
c100884c:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c100884f:	75 0a                	jne    c100885b <block_bitmap_alloc+0x46>
c1008851:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008856:	e9 82 00 00 00       	jmp    c10088dd <block_bitmap_alloc+0xc8>
c100885b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008862:	eb 04                	jmp    c1008868 <block_bitmap_alloc+0x53>
c1008864:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008868:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100886b:	ba 01 00 00 00       	mov    $0x1,%edx
c1008870:	89 c1                	mov    %eax,%ecx
c1008872:	d3 e2                	shl    %cl,%edx
c1008874:	89 d0                	mov    %edx,%eax
c1008876:	89 c1                	mov    %eax,%ecx
c1008878:	8b 45 08             	mov    0x8(%ebp),%eax
c100887b:	8b 50 18             	mov    0x18(%eax),%edx
c100887e:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008881:	01 d0                	add    %edx,%eax
c1008883:	0f b6 00             	movzbl (%eax),%eax
c1008886:	21 c8                	and    %ecx,%eax
c1008888:	84 c0                	test   %al,%al
c100888a:	75 d8                	jne    c1008864 <block_bitmap_alloc+0x4f>
c100888c:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100888f:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c1008896:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008899:	01 d0                	add    %edx,%eax
c100889b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100889e:	8b 45 08             	mov    0x8(%ebp),%eax
c10088a1:	8b 50 18             	mov    0x18(%eax),%edx
c10088a4:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10088a7:	01 d0                	add    %edx,%eax
c10088a9:	0f b6 00             	movzbl (%eax),%eax
c10088ac:	89 c3                	mov    %eax,%ebx
c10088ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10088b1:	ba 01 00 00 00       	mov    $0x1,%edx
c10088b6:	89 c1                	mov    %eax,%ecx
c10088b8:	d3 e2                	shl    %cl,%edx
c10088ba:	89 d0                	mov    %edx,%eax
c10088bc:	09 c3                	or     %eax,%ebx
c10088be:	89 d9                	mov    %ebx,%ecx
c10088c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10088c3:	8b 50 18             	mov    0x18(%eax),%edx
c10088c6:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10088c9:	01 d0                	add    %edx,%eax
c10088cb:	89 ca                	mov    %ecx,%edx
c10088cd:	88 10                	mov    %dl,(%eax)
c10088cf:	8b 45 08             	mov    0x8(%ebp),%eax
c10088d2:	8b 40 10             	mov    0x10(%eax),%eax
c10088d5:	8b 50 28             	mov    0x28(%eax),%edx
c10088d8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10088db:	01 d0                	add    %edx,%eax
c10088dd:	83 c4 10             	add    $0x10,%esp
c10088e0:	5b                   	pop    %ebx
c10088e1:	5d                   	pop    %ebp
c10088e2:	c3                   	ret    

c10088e3 <bitmap_sync>:
c10088e3:	55                   	push   %ebp
c10088e4:	89 e5                	mov    %esp,%ebp
c10088e6:	83 ec 28             	sub    $0x28,%esp
c10088e9:	8b 45 10             	mov    0x10(%ebp),%eax
c10088ec:	88 45 e4             	mov    %al,-0x1c(%ebp)
c10088ef:	8b 45 0c             	mov    0xc(%ebp),%eax
c10088f2:	c1 e8 0c             	shr    $0xc,%eax
c10088f5:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10088f8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10088fb:	c1 e0 09             	shl    $0x9,%eax
c10088fe:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008901:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1008905:	85 c0                	test   %eax,%eax
c1008907:	74 07                	je     c1008910 <bitmap_sync+0x2d>
c1008909:	83 f8 01             	cmp    $0x1,%eax
c100890c:	74 23                	je     c1008931 <bitmap_sync+0x4e>
c100890e:	eb 41                	jmp    c1008951 <bitmap_sync+0x6e>
c1008910:	8b 45 08             	mov    0x8(%ebp),%eax
c1008913:	8b 40 10             	mov    0x10(%eax),%eax
c1008916:	8b 50 18             	mov    0x18(%eax),%edx
c1008919:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100891c:	01 d0                	add    %edx,%eax
c100891e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008921:	8b 45 08             	mov    0x8(%ebp),%eax
c1008924:	8b 50 20             	mov    0x20(%eax),%edx
c1008927:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100892a:	01 d0                	add    %edx,%eax
c100892c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100892f:	eb 20                	jmp    c1008951 <bitmap_sync+0x6e>
c1008931:	8b 45 08             	mov    0x8(%ebp),%eax
c1008934:	8b 40 10             	mov    0x10(%eax),%eax
c1008937:	8b 50 10             	mov    0x10(%eax),%edx
c100893a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100893d:	01 d0                	add    %edx,%eax
c100893f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008942:	8b 45 08             	mov    0x8(%ebp),%eax
c1008945:	8b 50 18             	mov    0x18(%eax),%edx
c1008948:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100894b:	01 d0                	add    %edx,%eax
c100894d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008950:	90                   	nop
c1008951:	83 ec 04             	sub    $0x4,%esp
c1008954:	6a 01                	push   $0x1
c1008956:	ff 75 f4             	pushl  -0xc(%ebp)
c1008959:	ff 75 f0             	pushl  -0x10(%ebp)
c100895c:	e8 9c cb ff ff       	call   c10054fd <ide_write>
c1008961:	83 c4 10             	add    $0x10,%esp
c1008964:	90                   	nop
c1008965:	c9                   	leave  
c1008966:	c3                   	ret    

c1008967 <file_create>:
c1008967:	55                   	push   %ebp
c1008968:	89 e5                	mov    %esp,%ebp
c100896a:	83 ec 58             	sub    $0x58,%esp
c100896d:	8b 45 10             	mov    0x10(%ebp),%eax
c1008970:	88 45 b4             	mov    %al,-0x4c(%ebp)
c1008973:	83 ec 08             	sub    $0x8,%esp
c1008976:	6a 02                	push   $0x2
c1008978:	68 00 04 00 00       	push   $0x400
c100897d:	e8 32 a1 ff ff       	call   c1002ab4 <vmm_malloc>
c1008982:	83 c4 10             	add    $0x10,%esp
c1008985:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008988:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100898c:	75 1a                	jne    c10089a8 <file_create+0x41>
c100898e:	83 ec 0c             	sub    $0xc,%esp
c1008991:	68 84 b5 00 c1       	push   $0xc100b584
c1008996:	e8 7d c2 ff ff       	call   c1004c18 <printk>
c100899b:	83 c4 10             	add    $0x10,%esp
c100899e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10089a3:	e9 9f 02 00 00       	jmp    c1008c47 <file_create+0x2e0>
c10089a8:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c10089ac:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10089b1:	83 ec 0c             	sub    $0xc,%esp
c10089b4:	50                   	push   %eax
c10089b5:	e8 9b fd ff ff       	call   c1008755 <inode_bitmap_alloc>
c10089ba:	83 c4 10             	add    $0x10,%esp
c10089bd:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10089c0:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c10089c4:	75 1a                	jne    c10089e0 <file_create+0x79>
c10089c6:	83 ec 0c             	sub    $0xc,%esp
c10089c9:	68 b4 b5 00 c1       	push   $0xc100b5b4
c10089ce:	e8 45 c2 ff ff       	call   c1004c18 <printk>
c10089d3:	83 c4 10             	add    $0x10,%esp
c10089d6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10089db:	e9 67 02 00 00       	jmp    c1008c47 <file_create+0x2e0>
c10089e0:	83 ec 08             	sub    $0x8,%esp
c10089e3:	6a 02                	push   $0x2
c10089e5:	6a 44                	push   $0x44
c10089e7:	e8 c8 a0 ff ff       	call   c1002ab4 <vmm_malloc>
c10089ec:	83 c4 10             	add    $0x10,%esp
c10089ef:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10089f2:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c10089f6:	75 19                	jne    c1008a11 <file_create+0xaa>
c10089f8:	83 ec 0c             	sub    $0xc,%esp
c10089fb:	68 dc b5 00 c1       	push   $0xc100b5dc
c1008a00:	e8 13 c2 ff ff       	call   c1004c18 <printk>
c1008a05:	83 c4 10             	add    $0x10,%esp
c1008a08:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1008a0c:	e9 88 01 00 00       	jmp    c1008b99 <file_create+0x232>
c1008a11:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008a14:	83 ec 08             	sub    $0x8,%esp
c1008a17:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008a1a:	50                   	push   %eax
c1008a1b:	e8 42 15 00 00       	call   c1009f62 <inode_init>
c1008a20:	83 c4 10             	add    $0x10,%esp
c1008a23:	e8 a4 fc ff ff       	call   c10086cc <get_free_slot_in_global>
c1008a28:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008a2b:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1008a2f:	75 19                	jne    c1008a4a <file_create+0xe3>
c1008a31:	83 ec 0c             	sub    $0xc,%esp
c1008a34:	68 07 b6 00 c1       	push   $0xc100b607
c1008a39:	e8 da c1 ff ff       	call   c1004c18 <printk>
c1008a3e:	83 c4 10             	add    $0x10,%esp
c1008a41:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1008a45:	e9 4f 01 00 00       	jmp    c1008b99 <file_create+0x232>
c1008a4a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008a4d:	89 d0                	mov    %edx,%eax
c1008a4f:	01 c0                	add    %eax,%eax
c1008a51:	01 d0                	add    %edx,%eax
c1008a53:	c1 e0 02             	shl    $0x2,%eax
c1008a56:	8d 90 48 32 a1 c1    	lea    -0x3e5ecdb8(%eax),%edx
c1008a5c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008a5f:	89 02                	mov    %eax,(%edx)
c1008a61:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008a64:	89 d0                	mov    %edx,%eax
c1008a66:	01 c0                	add    %eax,%eax
c1008a68:	01 d0                	add    %edx,%eax
c1008a6a:	c1 e0 02             	shl    $0x2,%eax
c1008a6d:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1008a72:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1008a78:	0f b6 4d b4          	movzbl -0x4c(%ebp),%ecx
c1008a7c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008a7f:	89 d0                	mov    %edx,%eax
c1008a81:	01 c0                	add    %eax,%eax
c1008a83:	01 d0                	add    %edx,%eax
c1008a85:	c1 e0 02             	shl    $0x2,%eax
c1008a88:	05 44 32 a1 c1       	add    $0xc1a13244,%eax
c1008a8d:	89 08                	mov    %ecx,(%eax)
c1008a8f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008a92:	89 d0                	mov    %edx,%eax
c1008a94:	01 c0                	add    %eax,%eax
c1008a96:	01 d0                	add    %edx,%eax
c1008a98:	c1 e0 02             	shl    $0x2,%eax
c1008a9b:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008aa0:	8b 00                	mov    (%eax),%eax
c1008aa2:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1008aa6:	83 ec 04             	sub    $0x4,%esp
c1008aa9:	6a 18                	push   $0x18
c1008aab:	6a 00                	push   $0x0
c1008aad:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1008ab0:	50                   	push   %eax
c1008ab1:	e8 f4 75 ff ff       	call   c10000aa <memset>
c1008ab6:	83 c4 10             	add    $0x10,%esp
c1008ab9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008abc:	8d 55 c4             	lea    -0x3c(%ebp),%edx
c1008abf:	52                   	push   %edx
c1008ac0:	6a 01                	push   $0x1
c1008ac2:	50                   	push   %eax
c1008ac3:	ff 75 0c             	pushl  0xc(%ebp)
c1008ac6:	e8 ce ef ff ff       	call   c1007a99 <create_dir_entry>
c1008acb:	83 c4 10             	add    $0x10,%esp
c1008ace:	83 ec 04             	sub    $0x4,%esp
c1008ad1:	ff 75 ec             	pushl  -0x14(%ebp)
c1008ad4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1008ad7:	50                   	push   %eax
c1008ad8:	ff 75 08             	pushl  0x8(%ebp)
c1008adb:	e8 25 f0 ff ff       	call   c1007b05 <sync_dir_entry>
c1008ae0:	83 c4 10             	add    $0x10,%esp
c1008ae3:	85 c0                	test   %eax,%eax
c1008ae5:	75 19                	jne    c1008b00 <file_create+0x199>
c1008ae7:	83 ec 0c             	sub    $0xc,%esp
c1008aea:	68 20 b6 00 c1       	push   $0xc100b620
c1008aef:	e8 24 c1 ff ff       	call   c1004c18 <printk>
c1008af4:	83 c4 10             	add    $0x10,%esp
c1008af7:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c1008afb:	e9 99 00 00 00       	jmp    c1008b99 <file_create+0x232>
c1008b00:	83 ec 04             	sub    $0x4,%esp
c1008b03:	68 00 04 00 00       	push   $0x400
c1008b08:	6a 00                	push   $0x0
c1008b0a:	ff 75 ec             	pushl  -0x14(%ebp)
c1008b0d:	e8 98 75 ff ff       	call   c10000aa <memset>
c1008b12:	83 c4 10             	add    $0x10,%esp
c1008b15:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b18:	8b 10                	mov    (%eax),%edx
c1008b1a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008b1f:	83 ec 04             	sub    $0x4,%esp
c1008b22:	ff 75 ec             	pushl  -0x14(%ebp)
c1008b25:	52                   	push   %edx
c1008b26:	50                   	push   %eax
c1008b27:	e8 64 0e 00 00       	call   c1009990 <inode_sync>
c1008b2c:	83 c4 10             	add    $0x10,%esp
c1008b2f:	83 ec 04             	sub    $0x4,%esp
c1008b32:	68 00 04 00 00       	push   $0x400
c1008b37:	6a 00                	push   $0x0
c1008b39:	ff 75 ec             	pushl  -0x14(%ebp)
c1008b3c:	e8 69 75 ff ff       	call   c10000aa <memset>
c1008b41:	83 c4 10             	add    $0x10,%esp
c1008b44:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008b49:	83 ec 04             	sub    $0x4,%esp
c1008b4c:	ff 75 ec             	pushl  -0x14(%ebp)
c1008b4f:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008b52:	50                   	push   %eax
c1008b53:	e8 38 0e 00 00       	call   c1009990 <inode_sync>
c1008b58:	83 c4 10             	add    $0x10,%esp
c1008b5b:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008b5e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008b63:	83 ec 04             	sub    $0x4,%esp
c1008b66:	6a 00                	push   $0x0
c1008b68:	52                   	push   %edx
c1008b69:	50                   	push   %eax
c1008b6a:	e8 74 fd ff ff       	call   c10088e3 <bitmap_sync>
c1008b6f:	83 c4 10             	add    $0x10,%esp
c1008b72:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008b75:	83 ec 08             	sub    $0x8,%esp
c1008b78:	68 00 04 00 00       	push   $0x400
c1008b7d:	50                   	push   %eax
c1008b7e:	e8 56 a0 ff ff       	call   c1002bd9 <vmm_free>
c1008b83:	83 c4 10             	add    $0x10,%esp
c1008b86:	83 ec 0c             	sub    $0xc,%esp
c1008b89:	ff 75 f0             	pushl  -0x10(%ebp)
c1008b8c:	e8 80 fb ff ff       	call   c1008711 <task_fd_install>
c1008b91:	83 c4 10             	add    $0x10,%esp
c1008b94:	e9 ae 00 00 00       	jmp    c1008c47 <file_create+0x2e0>
c1008b99:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008b9d:	83 f8 03             	cmp    $0x3,%eax
c1008ba0:	74 15                	je     c1008bb7 <file_create+0x250>
c1008ba2:	83 f8 03             	cmp    $0x3,%eax
c1008ba5:	0f 8f 83 00 00 00    	jg     c1008c2e <file_create+0x2c7>
c1008bab:	83 f8 01             	cmp    $0x1,%eax
c1008bae:	74 39                	je     c1008be9 <file_create+0x282>
c1008bb0:	83 f8 02             	cmp    $0x2,%eax
c1008bb3:	74 23                	je     c1008bd8 <file_create+0x271>
c1008bb5:	eb 77                	jmp    c1008c2e <file_create+0x2c7>
c1008bb7:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008bba:	89 d0                	mov    %edx,%eax
c1008bbc:	01 c0                	add    %eax,%eax
c1008bbe:	01 d0                	add    %edx,%eax
c1008bc0:	c1 e0 02             	shl    $0x2,%eax
c1008bc3:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1008bc8:	83 ec 04             	sub    $0x4,%esp
c1008bcb:	6a 0c                	push   $0xc
c1008bcd:	6a 00                	push   $0x0
c1008bcf:	50                   	push   %eax
c1008bd0:	e8 d5 74 ff ff       	call   c10000aa <memset>
c1008bd5:	83 c4 10             	add    $0x10,%esp
c1008bd8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008bdb:	83 ec 08             	sub    $0x8,%esp
c1008bde:	6a 44                	push   $0x44
c1008be0:	50                   	push   %eax
c1008be1:	e8 f3 9f ff ff       	call   c1002bd9 <vmm_free>
c1008be6:	83 c4 10             	add    $0x10,%esp
c1008be9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008bec:	8d 50 07             	lea    0x7(%eax),%edx
c1008bef:	85 c0                	test   %eax,%eax
c1008bf1:	0f 48 c2             	cmovs  %edx,%eax
c1008bf4:	c1 f8 03             	sar    $0x3,%eax
c1008bf7:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008bfa:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008bfd:	99                   	cltd   
c1008bfe:	c1 ea 1d             	shr    $0x1d,%edx
c1008c01:	01 d0                	add    %edx,%eax
c1008c03:	83 e0 07             	and    $0x7,%eax
c1008c06:	29 d0                	sub    %edx,%eax
c1008c08:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008c0b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008c10:	8b 50 20             	mov    0x20(%eax),%edx
c1008c13:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008c16:	01 d0                	add    %edx,%eax
c1008c18:	0f b6 10             	movzbl (%eax),%edx
c1008c1b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008c20:	8b 48 20             	mov    0x20(%eax),%ecx
c1008c23:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008c26:	01 c8                	add    %ecx,%eax
c1008c28:	83 e2 fe             	and    $0xfffffffe,%edx
c1008c2b:	88 10                	mov    %dl,(%eax)
c1008c2d:	90                   	nop
c1008c2e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008c31:	83 ec 08             	sub    $0x8,%esp
c1008c34:	68 00 04 00 00       	push   $0x400
c1008c39:	50                   	push   %eax
c1008c3a:	e8 9a 9f ff ff       	call   c1002bd9 <vmm_free>
c1008c3f:	83 c4 10             	add    $0x10,%esp
c1008c42:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008c47:	c9                   	leave  
c1008c48:	c3                   	ret    

c1008c49 <file_open>:
c1008c49:	55                   	push   %ebp
c1008c4a:	89 e5                	mov    %esp,%ebp
c1008c4c:	83 ec 28             	sub    $0x28,%esp
c1008c4f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008c52:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1008c55:	e8 72 fa ff ff       	call   c10086cc <get_free_slot_in_global>
c1008c5a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008c5d:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c1008c61:	75 1a                	jne    c1008c7d <file_open+0x34>
c1008c63:	83 ec 0c             	sub    $0xc,%esp
c1008c66:	68 07 b6 00 c1       	push   $0xc100b607
c1008c6b:	e8 a8 bf ff ff       	call   c1004c18 <printk>
c1008c70:	83 c4 10             	add    $0x10,%esp
c1008c73:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008c78:	e9 1a 01 00 00       	jmp    c1008d97 <file_open+0x14e>
c1008c7d:	83 ec 08             	sub    $0x8,%esp
c1008c80:	ff 75 08             	pushl  0x8(%ebp)
c1008c83:	68 3f b6 00 c1       	push   $0xc100b63f
c1008c88:	e8 8b bf ff ff       	call   c1004c18 <printk>
c1008c8d:	83 c4 10             	add    $0x10,%esp
c1008c90:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008c95:	83 ec 08             	sub    $0x8,%esp
c1008c98:	ff 75 08             	pushl  0x8(%ebp)
c1008c9b:	50                   	push   %eax
c1008c9c:	e8 10 0e 00 00       	call   c1009ab1 <inode_open>
c1008ca1:	83 c4 10             	add    $0x10,%esp
c1008ca4:	89 c1                	mov    %eax,%ecx
c1008ca6:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008ca9:	89 d0                	mov    %edx,%eax
c1008cab:	01 c0                	add    %eax,%eax
c1008cad:	01 d0                	add    %edx,%eax
c1008caf:	c1 e0 02             	shl    $0x2,%eax
c1008cb2:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008cb7:	89 08                	mov    %ecx,(%eax)
c1008cb9:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008cbc:	89 d0                	mov    %edx,%eax
c1008cbe:	01 c0                	add    %eax,%eax
c1008cc0:	01 d0                	add    %edx,%eax
c1008cc2:	c1 e0 02             	shl    $0x2,%eax
c1008cc5:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008cca:	8b 00                	mov    (%eax),%eax
c1008ccc:	8b 00                	mov    (%eax),%eax
c1008cce:	83 ec 08             	sub    $0x8,%esp
c1008cd1:	50                   	push   %eax
c1008cd2:	68 4c b6 00 c1       	push   $0xc100b64c
c1008cd7:	e8 3c bf ff ff       	call   c1004c18 <printk>
c1008cdc:	83 c4 10             	add    $0x10,%esp
c1008cdf:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008ce2:	89 d0                	mov    %edx,%eax
c1008ce4:	01 c0                	add    %eax,%eax
c1008ce6:	01 d0                	add    %edx,%eax
c1008ce8:	c1 e0 02             	shl    $0x2,%eax
c1008ceb:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1008cf0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1008cf6:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
c1008cfa:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008cfd:	89 d0                	mov    %edx,%eax
c1008cff:	01 c0                	add    %eax,%eax
c1008d01:	01 d0                	add    %edx,%eax
c1008d03:	c1 e0 02             	shl    $0x2,%eax
c1008d06:	05 44 32 a1 c1       	add    $0xc1a13244,%eax
c1008d0b:	89 08                	mov    %ecx,(%eax)
c1008d0d:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008d10:	89 d0                	mov    %edx,%eax
c1008d12:	01 c0                	add    %eax,%eax
c1008d14:	01 d0                	add    %edx,%eax
c1008d16:	c1 e0 02             	shl    $0x2,%eax
c1008d19:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008d1e:	8b 00                	mov    (%eax),%eax
c1008d20:	83 c0 0c             	add    $0xc,%eax
c1008d23:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008d26:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1008d2a:	83 e0 01             	and    $0x1,%eax
c1008d2d:	85 c0                	test   %eax,%eax
c1008d2f:	75 0b                	jne    c1008d3c <file_open+0xf3>
c1008d31:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1008d35:	83 e0 02             	and    $0x2,%eax
c1008d38:	85 c0                	test   %eax,%eax
c1008d3a:	74 4d                	je     c1008d89 <file_open+0x140>
c1008d3c:	e8 0f 80 ff ff       	call   c1000d50 <intr_save>
c1008d41:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008d44:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008d47:	0f b6 00             	movzbl (%eax),%eax
c1008d4a:	84 c0                	test   %al,%al
c1008d4c:	75 16                	jne    c1008d64 <file_open+0x11b>
c1008d4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008d51:	c6 00 01             	movb   $0x1,(%eax)
c1008d54:	83 ec 0c             	sub    $0xc,%esp
c1008d57:	ff 75 ec             	pushl  -0x14(%ebp)
c1008d5a:	e8 04 80 ff ff       	call   c1000d63 <intr_restore>
c1008d5f:	83 c4 10             	add    $0x10,%esp
c1008d62:	eb 25                	jmp    c1008d89 <file_open+0x140>
c1008d64:	83 ec 0c             	sub    $0xc,%esp
c1008d67:	ff 75 ec             	pushl  -0x14(%ebp)
c1008d6a:	e8 f4 7f ff ff       	call   c1000d63 <intr_restore>
c1008d6f:	83 c4 10             	add    $0x10,%esp
c1008d72:	83 ec 0c             	sub    $0xc,%esp
c1008d75:	68 74 b6 00 c1       	push   $0xc100b674
c1008d7a:	e8 99 be ff ff       	call   c1004c18 <printk>
c1008d7f:	83 c4 10             	add    $0x10,%esp
c1008d82:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008d87:	eb 0e                	jmp    c1008d97 <file_open+0x14e>
c1008d89:	83 ec 0c             	sub    $0xc,%esp
c1008d8c:	ff 75 f4             	pushl  -0xc(%ebp)
c1008d8f:	e8 7d f9 ff ff       	call   c1008711 <task_fd_install>
c1008d94:	83 c4 10             	add    $0x10,%esp
c1008d97:	c9                   	leave  
c1008d98:	c3                   	ret    

c1008d99 <file_close>:
c1008d99:	55                   	push   %ebp
c1008d9a:	89 e5                	mov    %esp,%ebp
c1008d9c:	83 ec 08             	sub    $0x8,%esp
c1008d9f:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1008da3:	75 07                	jne    c1008dac <file_close+0x13>
c1008da5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008daa:	eb 2b                	jmp    c1008dd7 <file_close+0x3e>
c1008dac:	8b 45 08             	mov    0x8(%ebp),%eax
c1008daf:	8b 40 08             	mov    0x8(%eax),%eax
c1008db2:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1008db6:	8b 45 08             	mov    0x8(%ebp),%eax
c1008db9:	8b 40 08             	mov    0x8(%eax),%eax
c1008dbc:	83 ec 0c             	sub    $0xc,%esp
c1008dbf:	50                   	push   %eax
c1008dc0:	e8 c2 0d 00 00       	call   c1009b87 <inode_close>
c1008dc5:	83 c4 10             	add    $0x10,%esp
c1008dc8:	8b 45 08             	mov    0x8(%ebp),%eax
c1008dcb:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1008dd2:	b8 00 00 00 00       	mov    $0x0,%eax
c1008dd7:	c9                   	leave  
c1008dd8:	c3                   	ret    

c1008dd9 <file_write>:
c1008dd9:	55                   	push   %ebp
c1008dda:	89 e5                	mov    %esp,%ebp
c1008ddc:	83 ec 58             	sub    $0x58,%esp
c1008ddf:	8b 45 08             	mov    0x8(%ebp),%eax
c1008de2:	8b 40 08             	mov    0x8(%eax),%eax
c1008de5:	8b 50 04             	mov    0x4(%eax),%edx
c1008de8:	8b 45 10             	mov    0x10(%ebp),%eax
c1008deb:	01 d0                	add    %edx,%eax
c1008ded:	3d 00 18 01 00       	cmp    $0x11800,%eax
c1008df2:	76 1a                	jbe    c1008e0e <file_write+0x35>
c1008df4:	83 ec 0c             	sub    $0xc,%esp
c1008df7:	68 a0 b6 00 c1       	push   $0xc100b6a0
c1008dfc:	e8 17 be ff ff       	call   c1004c18 <printk>
c1008e01:	83 c4 10             	add    $0x10,%esp
c1008e04:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008e09:	e9 3e 07 00 00       	jmp    c100954c <file_write+0x773>
c1008e0e:	83 ec 08             	sub    $0x8,%esp
c1008e11:	6a 02                	push   $0x2
c1008e13:	68 00 02 00 00       	push   $0x200
c1008e18:	e8 97 9c ff ff       	call   c1002ab4 <vmm_malloc>
c1008e1d:	83 c4 10             	add    $0x10,%esp
c1008e20:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008e23:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c1008e27:	75 1a                	jne    c1008e43 <file_write+0x6a>
c1008e29:	83 ec 0c             	sub    $0xc,%esp
c1008e2c:	68 d8 b6 00 c1       	push   $0xc100b6d8
c1008e31:	e8 e2 bd ff ff       	call   c1004c18 <printk>
c1008e36:	83 c4 10             	add    $0x10,%esp
c1008e39:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008e3e:	e9 09 07 00 00       	jmp    c100954c <file_write+0x773>
c1008e43:	83 ec 08             	sub    $0x8,%esp
c1008e46:	6a 02                	push   $0x2
c1008e48:	68 30 02 00 00       	push   $0x230
c1008e4d:	e8 62 9c ff ff       	call   c1002ab4 <vmm_malloc>
c1008e52:	83 c4 10             	add    $0x10,%esp
c1008e55:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008e58:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c1008e5c:	75 1a                	jne    c1008e78 <file_write+0x9f>
c1008e5e:	83 ec 0c             	sub    $0xc,%esp
c1008e61:	68 04 b7 00 c1       	push   $0xc100b704
c1008e66:	e8 ad bd ff ff       	call   c1004c18 <printk>
c1008e6b:	83 c4 10             	add    $0x10,%esp
c1008e6e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008e73:	e9 d4 06 00 00       	jmp    c100954c <file_write+0x773>
c1008e78:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008e7b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008e7e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008e85:	8b 45 10             	mov    0x10(%ebp),%eax
c1008e88:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008e8b:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1008e92:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
c1008e99:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e9c:	8b 40 08             	mov    0x8(%eax),%eax
c1008e9f:	8b 40 10             	mov    0x10(%eax),%eax
c1008ea2:	85 c0                	test   %eax,%eax
c1008ea4:	0f 85 8a 00 00 00    	jne    c1008f34 <file_write+0x15b>
c1008eaa:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008eaf:	83 ec 0c             	sub    $0xc,%esp
c1008eb2:	50                   	push   %eax
c1008eb3:	e8 5d f9 ff ff       	call   c1008815 <block_bitmap_alloc>
c1008eb8:	83 c4 10             	add    $0x10,%esp
c1008ebb:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008ebe:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008ec2:	75 1a                	jne    c1008ede <file_write+0x105>
c1008ec4:	83 ec 0c             	sub    $0xc,%esp
c1008ec7:	68 34 b7 00 c1       	push   $0xc100b734
c1008ecc:	e8 47 bd ff ff       	call   c1004c18 <printk>
c1008ed1:	83 c4 10             	add    $0x10,%esp
c1008ed4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008ed9:	e9 6e 06 00 00       	jmp    c100954c <file_write+0x773>
c1008ede:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ee1:	8b 40 08             	mov    0x8(%eax),%eax
c1008ee4:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008ee7:	89 50 10             	mov    %edx,0x10(%eax)
c1008eea:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008eed:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008ef2:	8b 40 10             	mov    0x10(%eax),%eax
c1008ef5:	8b 40 28             	mov    0x28(%eax),%eax
c1008ef8:	29 c2                	sub    %eax,%edx
c1008efa:	89 d0                	mov    %edx,%eax
c1008efc:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008eff:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
c1008f03:	75 19                	jne    c1008f1e <file_write+0x145>
c1008f05:	68 5b b7 00 c1       	push   $0xc100b75b
c1008f0a:	68 1c ba 00 c1       	push   $0xc100ba1c
c1008f0f:	68 1e 01 00 00       	push   $0x11e
c1008f14:	68 74 b7 00 c1       	push   $0xc100b774
c1008f19:	e8 ef 73 ff ff       	call   c100030d <__PANIC>
c1008f1e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008f23:	83 ec 04             	sub    $0x4,%esp
c1008f26:	6a 01                	push   $0x1
c1008f28:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008f2b:	50                   	push   %eax
c1008f2c:	e8 b2 f9 ff ff       	call   c10088e3 <bitmap_sync>
c1008f31:	83 c4 10             	add    $0x10,%esp
c1008f34:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f37:	8b 40 08             	mov    0x8(%eax),%eax
c1008f3a:	8b 40 04             	mov    0x4(%eax),%eax
c1008f3d:	c1 e8 09             	shr    $0x9,%eax
c1008f40:	83 c0 01             	add    $0x1,%eax
c1008f43:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008f46:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f49:	8b 40 08             	mov    0x8(%eax),%eax
c1008f4c:	8b 50 04             	mov    0x4(%eax),%edx
c1008f4f:	8b 45 10             	mov    0x10(%ebp),%eax
c1008f52:	01 d0                	add    %edx,%eax
c1008f54:	c1 e8 09             	shr    $0x9,%eax
c1008f57:	83 c0 01             	add    $0x1,%eax
c1008f5a:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008f5d:	81 7d cc 8c 00 00 00 	cmpl   $0x8c,-0x34(%ebp)
c1008f64:	76 19                	jbe    c1008f7f <file_write+0x1a6>
c1008f66:	68 a5 b7 00 c1       	push   $0xc100b7a5
c1008f6b:	68 1c ba 00 c1       	push   $0xc100ba1c
c1008f70:	68 27 01 00 00       	push   $0x127
c1008f75:	68 74 b7 00 c1       	push   $0xc100b774
c1008f7a:	e8 8e 73 ff ff       	call   c100030d <__PANIC>
c1008f7f:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008f82:	2b 45 d0             	sub    -0x30(%ebp),%eax
c1008f85:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1008f88:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
c1008f8c:	0f 85 83 00 00 00    	jne    c1009015 <file_write+0x23c>
c1008f92:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1008f96:	77 2e                	ja     c1008fc6 <file_write+0x1ed>
c1008f98:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008f9b:	83 e8 01             	sub    $0x1,%eax
c1008f9e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008fa1:	8b 45 08             	mov    0x8(%ebp),%eax
c1008fa4:	8b 40 08             	mov    0x8(%eax),%eax
c1008fa7:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008faa:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008fb1:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008fb4:	01 ca                	add    %ecx,%edx
c1008fb6:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1008fb9:	83 c1 04             	add    $0x4,%ecx
c1008fbc:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1008fbf:	89 02                	mov    %eax,(%edx)
c1008fc1:	e9 24 04 00 00       	jmp    c10093ea <file_write+0x611>
c1008fc6:	8b 45 08             	mov    0x8(%ebp),%eax
c1008fc9:	8b 40 08             	mov    0x8(%eax),%eax
c1008fcc:	8b 40 40             	mov    0x40(%eax),%eax
c1008fcf:	85 c0                	test   %eax,%eax
c1008fd1:	75 19                	jne    c1008fec <file_write+0x213>
c1008fd3:	68 c4 b7 00 c1       	push   $0xc100b7c4
c1008fd8:	68 1c ba 00 c1       	push   $0xc100ba1c
c1008fdd:	68 35 01 00 00       	push   $0x135
c1008fe2:	68 74 b7 00 c1       	push   $0xc100b774
c1008fe7:	e8 21 73 ff ff       	call   c100030d <__PANIC>
c1008fec:	8b 45 08             	mov    0x8(%ebp),%eax
c1008fef:	8b 40 08             	mov    0x8(%eax),%eax
c1008ff2:	8b 40 40             	mov    0x40(%eax),%eax
c1008ff5:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1008ff8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1008ffb:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1008ffe:	83 c2 30             	add    $0x30,%edx
c1009001:	83 ec 04             	sub    $0x4,%esp
c1009004:	6a 01                	push   $0x1
c1009006:	50                   	push   %eax
c1009007:	52                   	push   %edx
c1009008:	e8 b3 c4 ff ff       	call   c10054c0 <ide_read>
c100900d:	83 c4 10             	add    $0x10,%esp
c1009010:	e9 d5 03 00 00       	jmp    c10093ea <file_write+0x611>
c1009015:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009019:	0f 87 25 01 00 00    	ja     c1009144 <file_write+0x36b>
c100901f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009022:	83 e8 01             	sub    $0x1,%eax
c1009025:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009028:	8b 45 08             	mov    0x8(%ebp),%eax
c100902b:	8b 40 08             	mov    0x8(%eax),%eax
c100902e:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009031:	83 c2 04             	add    $0x4,%edx
c1009034:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009037:	85 c0                	test   %eax,%eax
c1009039:	75 19                	jne    c1009054 <file_write+0x27b>
c100903b:	68 e8 b7 00 c1       	push   $0xc100b7e8
c1009040:	68 1c ba 00 c1       	push   $0xc100ba1c
c1009045:	68 3f 01 00 00       	push   $0x13f
c100904a:	68 74 b7 00 c1       	push   $0xc100b774
c100904f:	e8 b9 72 ff ff       	call   c100030d <__PANIC>
c1009054:	8b 45 08             	mov    0x8(%ebp),%eax
c1009057:	8b 40 08             	mov    0x8(%eax),%eax
c100905a:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100905d:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009064:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009067:	01 ca                	add    %ecx,%edx
c1009069:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100906c:	83 c1 04             	add    $0x4,%ecx
c100906f:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009072:	89 02                	mov    %eax,(%edx)
c1009074:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009077:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100907a:	e9 b4 00 00 00       	jmp    c1009133 <file_write+0x35a>
c100907f:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009084:	83 ec 0c             	sub    $0xc,%esp
c1009087:	50                   	push   %eax
c1009088:	e8 88 f7 ff ff       	call   c1008815 <block_bitmap_alloc>
c100908d:	83 c4 10             	add    $0x10,%esp
c1009090:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009093:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009097:	75 1a                	jne    c10090b3 <file_write+0x2da>
c1009099:	83 ec 0c             	sub    $0xc,%esp
c100909c:	68 14 b8 00 c1       	push   $0xc100b814
c10090a1:	e8 72 bb ff ff       	call   c1004c18 <printk>
c10090a6:	83 c4 10             	add    $0x10,%esp
c10090a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10090ae:	e9 99 04 00 00       	jmp    c100954c <file_write+0x773>
c10090b3:	8b 45 08             	mov    0x8(%ebp),%eax
c10090b6:	8b 40 08             	mov    0x8(%eax),%eax
c10090b9:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10090bc:	83 c2 04             	add    $0x4,%edx
c10090bf:	8b 04 90             	mov    (%eax,%edx,4),%eax
c10090c2:	85 c0                	test   %eax,%eax
c10090c4:	74 19                	je     c10090df <file_write+0x306>
c10090c6:	68 4c b8 00 c1       	push   $0xc100b84c
c10090cb:	68 1c ba 00 c1       	push   $0xc100ba1c
c10090d0:	68 4c 01 00 00       	push   $0x14c
c10090d5:	68 74 b7 00 c1       	push   $0xc100b774
c10090da:	e8 2e 72 ff ff       	call   c100030d <__PANIC>
c10090df:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10090e2:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10090e9:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10090ec:	01 d0                	add    %edx,%eax
c10090ee:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10090f1:	89 10                	mov    %edx,(%eax)
c10090f3:	8b 55 08             	mov    0x8(%ebp),%edx
c10090f6:	8b 52 08             	mov    0x8(%edx),%edx
c10090f9:	8b 00                	mov    (%eax),%eax
c10090fb:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c10090fe:	83 c1 04             	add    $0x4,%ecx
c1009101:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1009104:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009107:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100910c:	8b 40 10             	mov    0x10(%eax),%eax
c100910f:	8b 40 28             	mov    0x28(%eax),%eax
c1009112:	29 c2                	sub    %eax,%edx
c1009114:	89 d0                	mov    %edx,%eax
c1009116:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009119:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100911e:	83 ec 04             	sub    $0x4,%esp
c1009121:	6a 01                	push   $0x1
c1009123:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009126:	50                   	push   %eax
c1009127:	e8 b7 f7 ff ff       	call   c10088e3 <bitmap_sync>
c100912c:	83 c4 10             	add    $0x10,%esp
c100912f:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009133:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009136:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009139:	0f 82 40 ff ff ff    	jb     c100907f <file_write+0x2a6>
c100913f:	e9 a6 02 00 00       	jmp    c10093ea <file_write+0x611>
c1009144:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009148:	0f 87 a3 01 00 00    	ja     c10092f1 <file_write+0x518>
c100914e:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009152:	0f 86 99 01 00 00    	jbe    c10092f1 <file_write+0x518>
c1009158:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100915b:	83 e8 01             	sub    $0x1,%eax
c100915e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009161:	8b 45 08             	mov    0x8(%ebp),%eax
c1009164:	8b 40 08             	mov    0x8(%eax),%eax
c1009167:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100916a:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009171:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009174:	01 ca                	add    %ecx,%edx
c1009176:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009179:	83 c1 04             	add    $0x4,%ecx
c100917c:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100917f:	89 02                	mov    %eax,(%edx)
c1009181:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009186:	83 ec 0c             	sub    $0xc,%esp
c1009189:	50                   	push   %eax
c100918a:	e8 86 f6 ff ff       	call   c1008815 <block_bitmap_alloc>
c100918f:	83 c4 10             	add    $0x10,%esp
c1009192:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009195:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009199:	75 1a                	jne    c10091b5 <file_write+0x3dc>
c100919b:	83 ec 0c             	sub    $0xc,%esp
c100919e:	68 78 b8 00 c1       	push   $0xc100b878
c10091a3:	e8 70 ba ff ff       	call   c1004c18 <printk>
c10091a8:	83 c4 10             	add    $0x10,%esp
c10091ab:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10091b0:	e9 97 03 00 00       	jmp    c100954c <file_write+0x773>
c10091b5:	8b 45 08             	mov    0x8(%ebp),%eax
c10091b8:	8b 40 08             	mov    0x8(%eax),%eax
c10091bb:	8b 40 40             	mov    0x40(%eax),%eax
c10091be:	85 c0                	test   %eax,%eax
c10091c0:	74 19                	je     c10091db <file_write+0x402>
c10091c2:	68 b0 b8 00 c1       	push   $0xc100b8b0
c10091c7:	68 1c ba 00 c1       	push   $0xc100ba1c
c10091cc:	68 63 01 00 00       	push   $0x163
c10091d1:	68 74 b7 00 c1       	push   $0xc100b774
c10091d6:	e8 32 71 ff ff       	call   c100030d <__PANIC>
c10091db:	8b 45 08             	mov    0x8(%ebp),%eax
c10091de:	8b 40 08             	mov    0x8(%eax),%eax
c10091e1:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10091e4:	89 50 40             	mov    %edx,0x40(%eax)
c10091e7:	8b 40 40             	mov    0x40(%eax),%eax
c10091ea:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c10091ed:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10091f0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10091f3:	e9 d0 00 00 00       	jmp    c10092c8 <file_write+0x4ef>
c10091f8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10091fd:	83 ec 0c             	sub    $0xc,%esp
c1009200:	50                   	push   %eax
c1009201:	e8 0f f6 ff ff       	call   c1008815 <block_bitmap_alloc>
c1009206:	83 c4 10             	add    $0x10,%esp
c1009209:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100920c:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009210:	75 1a                	jne    c100922c <file_write+0x453>
c1009212:	83 ec 0c             	sub    $0xc,%esp
c1009215:	68 78 b8 00 c1       	push   $0xc100b878
c100921a:	e8 f9 b9 ff ff       	call   c1004c18 <printk>
c100921f:	83 c4 10             	add    $0x10,%esp
c1009222:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009227:	e9 20 03 00 00       	jmp    c100954c <file_write+0x773>
c100922c:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1009230:	77 53                	ja     c1009285 <file_write+0x4ac>
c1009232:	8b 45 08             	mov    0x8(%ebp),%eax
c1009235:	8b 40 08             	mov    0x8(%eax),%eax
c1009238:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100923b:	83 c2 04             	add    $0x4,%edx
c100923e:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009241:	85 c0                	test   %eax,%eax
c1009243:	74 19                	je     c100925e <file_write+0x485>
c1009245:	68 4c b8 00 c1       	push   $0xc100b84c
c100924a:	68 1c ba 00 c1       	push   $0xc100ba1c
c100924f:	68 70 01 00 00       	push   $0x170
c1009254:	68 74 b7 00 c1       	push   $0xc100b774
c1009259:	e8 af 70 ff ff       	call   c100030d <__PANIC>
c100925e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009261:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009268:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100926b:	01 d0                	add    %edx,%eax
c100926d:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009270:	89 10                	mov    %edx,(%eax)
c1009272:	8b 55 08             	mov    0x8(%ebp),%edx
c1009275:	8b 52 08             	mov    0x8(%edx),%edx
c1009278:	8b 00                	mov    (%eax),%eax
c100927a:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100927d:	83 c1 04             	add    $0x4,%ecx
c1009280:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1009283:	eb 14                	jmp    c1009299 <file_write+0x4c0>
c1009285:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009288:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100928f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009292:	01 c2                	add    %eax,%edx
c1009294:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009297:	89 02                	mov    %eax,(%edx)
c1009299:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100929c:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10092a1:	8b 40 10             	mov    0x10(%eax),%eax
c10092a4:	8b 40 28             	mov    0x28(%eax),%eax
c10092a7:	29 c2                	sub    %eax,%edx
c10092a9:	89 d0                	mov    %edx,%eax
c10092ab:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10092ae:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10092b3:	83 ec 04             	sub    $0x4,%esp
c10092b6:	6a 01                	push   $0x1
c10092b8:	ff 75 d4             	pushl  -0x2c(%ebp)
c10092bb:	50                   	push   %eax
c10092bc:	e8 22 f6 ff ff       	call   c10088e3 <bitmap_sync>
c10092c1:	83 c4 10             	add    $0x10,%esp
c10092c4:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c10092c8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10092cb:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c10092ce:	0f 82 24 ff ff ff    	jb     c10091f8 <file_write+0x41f>
c10092d4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c10092d7:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10092da:	83 c2 30             	add    $0x30,%edx
c10092dd:	83 ec 04             	sub    $0x4,%esp
c10092e0:	6a 01                	push   $0x1
c10092e2:	50                   	push   %eax
c10092e3:	52                   	push   %edx
c10092e4:	e8 14 c2 ff ff       	call   c10054fd <ide_write>
c10092e9:	83 c4 10             	add    $0x10,%esp
c10092ec:	e9 f9 00 00 00       	jmp    c10093ea <file_write+0x611>
c10092f1:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c10092f5:	0f 86 ef 00 00 00    	jbe    c10093ea <file_write+0x611>
c10092fb:	8b 45 08             	mov    0x8(%ebp),%eax
c10092fe:	8b 40 08             	mov    0x8(%eax),%eax
c1009301:	8b 40 40             	mov    0x40(%eax),%eax
c1009304:	85 c0                	test   %eax,%eax
c1009306:	75 19                	jne    c1009321 <file_write+0x548>
c1009308:	68 c4 b7 00 c1       	push   $0xc100b7c4
c100930d:	68 1c ba 00 c1       	push   $0xc100ba1c
c1009312:	68 7f 01 00 00       	push   $0x17f
c1009317:	68 74 b7 00 c1       	push   $0xc100b774
c100931c:	e8 ec 6f ff ff       	call   c100030d <__PANIC>
c1009321:	8b 45 08             	mov    0x8(%ebp),%eax
c1009324:	8b 40 08             	mov    0x8(%eax),%eax
c1009327:	8b 40 40             	mov    0x40(%eax),%eax
c100932a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100932d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009330:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009333:	83 c2 30             	add    $0x30,%edx
c1009336:	83 ec 04             	sub    $0x4,%esp
c1009339:	6a 01                	push   $0x1
c100933b:	50                   	push   %eax
c100933c:	52                   	push   %edx
c100933d:	e8 7e c1 ff ff       	call   c10054c0 <ide_read>
c1009342:	83 c4 10             	add    $0x10,%esp
c1009345:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009348:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100934b:	eb 79                	jmp    c10093c6 <file_write+0x5ed>
c100934d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009352:	83 ec 0c             	sub    $0xc,%esp
c1009355:	50                   	push   %eax
c1009356:	e8 ba f4 ff ff       	call   c1008815 <block_bitmap_alloc>
c100935b:	83 c4 10             	add    $0x10,%esp
c100935e:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009361:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009365:	75 1a                	jne    c1009381 <file_write+0x5a8>
c1009367:	83 ec 0c             	sub    $0xc,%esp
c100936a:	68 d4 b8 00 c1       	push   $0xc100b8d4
c100936f:	e8 a4 b8 ff ff       	call   c1004c18 <printk>
c1009374:	83 c4 10             	add    $0x10,%esp
c1009377:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100937c:	e9 cb 01 00 00       	jmp    c100954c <file_write+0x773>
c1009381:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009384:	8d 50 01             	lea    0x1(%eax),%edx
c1009387:	89 55 e8             	mov    %edx,-0x18(%ebp)
c100938a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009391:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009394:	01 c2                	add    %eax,%edx
c1009396:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009399:	89 02                	mov    %eax,(%edx)
c100939b:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100939e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10093a3:	8b 40 10             	mov    0x10(%eax),%eax
c10093a6:	8b 40 28             	mov    0x28(%eax),%eax
c10093a9:	29 c2                	sub    %eax,%edx
c10093ab:	89 d0                	mov    %edx,%eax
c10093ad:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10093b0:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10093b5:	83 ec 04             	sub    $0x4,%esp
c10093b8:	6a 01                	push   $0x1
c10093ba:	ff 75 d4             	pushl  -0x2c(%ebp)
c10093bd:	50                   	push   %eax
c10093be:	e8 20 f5 ff ff       	call   c10088e3 <bitmap_sync>
c10093c3:	83 c4 10             	add    $0x10,%esp
c10093c6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10093c9:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c10093cc:	0f 82 7b ff ff ff    	jb     c100934d <file_write+0x574>
c10093d2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c10093d5:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10093d8:	83 c2 30             	add    $0x30,%edx
c10093db:	83 ec 04             	sub    $0x4,%esp
c10093de:	6a 01                	push   $0x1
c10093e0:	50                   	push   %eax
c10093e1:	52                   	push   %edx
c10093e2:	e8 16 c1 ff ff       	call   c10054fd <ide_write>
c10093e7:	83 c4 10             	add    $0x10,%esp
c10093ea:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
c10093ee:	8b 45 08             	mov    0x8(%ebp),%eax
c10093f1:	8b 40 08             	mov    0x8(%eax),%eax
c10093f4:	8b 40 04             	mov    0x4(%eax),%eax
c10093f7:	8d 50 ff             	lea    -0x1(%eax),%edx
c10093fa:	8b 45 08             	mov    0x8(%ebp),%eax
c10093fd:	89 10                	mov    %edx,(%eax)
c10093ff:	e9 f6 00 00 00       	jmp    c10094fa <file_write+0x721>
c1009404:	83 ec 04             	sub    $0x4,%esp
c1009407:	68 00 02 00 00       	push   $0x200
c100940c:	6a 00                	push   $0x0
c100940e:	ff 75 e0             	pushl  -0x20(%ebp)
c1009411:	e8 94 6c ff ff       	call   c10000aa <memset>
c1009416:	83 c4 10             	add    $0x10,%esp
c1009419:	8b 45 08             	mov    0x8(%ebp),%eax
c100941c:	8b 40 08             	mov    0x8(%eax),%eax
c100941f:	8b 40 04             	mov    0x4(%eax),%eax
c1009422:	c1 e8 09             	shr    $0x9,%eax
c1009425:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1009428:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100942b:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009432:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009435:	01 d0                	add    %edx,%eax
c1009437:	8b 00                	mov    (%eax),%eax
c1009439:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100943c:	8b 45 08             	mov    0x8(%ebp),%eax
c100943f:	8b 40 08             	mov    0x8(%eax),%eax
c1009442:	8b 40 04             	mov    0x4(%eax),%eax
c1009445:	25 ff 01 00 00       	and    $0x1ff,%eax
c100944a:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100944d:	b8 00 02 00 00       	mov    $0x200,%eax
c1009452:	2b 45 b8             	sub    -0x48(%ebp),%eax
c1009455:	89 45 b4             	mov    %eax,-0x4c(%ebp)
c1009458:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100945b:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
c100945e:	0f 46 45 b4          	cmovbe -0x4c(%ebp),%eax
c1009462:	89 45 b0             	mov    %eax,-0x50(%ebp)
c1009465:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
c1009469:	74 17                	je     c1009482 <file_write+0x6a9>
c100946b:	83 ec 04             	sub    $0x4,%esp
c100946e:	6a 01                	push   $0x1
c1009470:	ff 75 bc             	pushl  -0x44(%ebp)
c1009473:	ff 75 e0             	pushl  -0x20(%ebp)
c1009476:	e8 45 c0 ff ff       	call   c10054c0 <ide_read>
c100947b:	83 c4 10             	add    $0x10,%esp
c100947e:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
c1009482:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1009485:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009488:	01 d0                	add    %edx,%eax
c100948a:	83 ec 04             	sub    $0x4,%esp
c100948d:	ff 75 b0             	pushl  -0x50(%ebp)
c1009490:	ff 75 f4             	pushl  -0xc(%ebp)
c1009493:	50                   	push   %eax
c1009494:	e8 6f 6c ff ff       	call   c1000108 <memcpy>
c1009499:	83 c4 10             	add    $0x10,%esp
c100949c:	83 ec 04             	sub    $0x4,%esp
c100949f:	6a 01                	push   $0x1
c10094a1:	ff 75 bc             	pushl  -0x44(%ebp)
c10094a4:	ff 75 e0             	pushl  -0x20(%ebp)
c10094a7:	e8 51 c0 ff ff       	call   c10054fd <ide_write>
c10094ac:	83 c4 10             	add    $0x10,%esp
c10094af:	83 ec 08             	sub    $0x8,%esp
c10094b2:	ff 75 bc             	pushl  -0x44(%ebp)
c10094b5:	68 0b b9 00 c1       	push   $0xc100b90b
c10094ba:	e8 59 b7 ff ff       	call   c1004c18 <printk>
c10094bf:	83 c4 10             	add    $0x10,%esp
c10094c2:	8b 45 b0             	mov    -0x50(%ebp),%eax
c10094c5:	01 45 f4             	add    %eax,-0xc(%ebp)
c10094c8:	8b 45 08             	mov    0x8(%ebp),%eax
c10094cb:	8b 40 08             	mov    0x8(%eax),%eax
c10094ce:	8b 48 04             	mov    0x4(%eax),%ecx
c10094d1:	8b 45 08             	mov    0x8(%ebp),%eax
c10094d4:	8b 40 08             	mov    0x8(%eax),%eax
c10094d7:	8b 55 b0             	mov    -0x50(%ebp),%edx
c10094da:	01 ca                	add    %ecx,%edx
c10094dc:	89 50 04             	mov    %edx,0x4(%eax)
c10094df:	8b 45 08             	mov    0x8(%ebp),%eax
c10094e2:	8b 10                	mov    (%eax),%edx
c10094e4:	8b 45 b0             	mov    -0x50(%ebp),%eax
c10094e7:	01 c2                	add    %eax,%edx
c10094e9:	8b 45 08             	mov    0x8(%ebp),%eax
c10094ec:	89 10                	mov    %edx,(%eax)
c10094ee:	8b 45 b0             	mov    -0x50(%ebp),%eax
c10094f1:	01 45 f0             	add    %eax,-0x10(%ebp)
c10094f4:	8b 45 b0             	mov    -0x50(%ebp),%eax
c10094f7:	29 45 ec             	sub    %eax,-0x14(%ebp)
c10094fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10094fd:	3b 45 10             	cmp    0x10(%ebp),%eax
c1009500:	0f 82 fe fe ff ff    	jb     c1009404 <file_write+0x62b>
c1009506:	8b 45 08             	mov    0x8(%ebp),%eax
c1009509:	8b 50 08             	mov    0x8(%eax),%edx
c100950c:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009511:	83 ec 04             	sub    $0x4,%esp
c1009514:	ff 75 e0             	pushl  -0x20(%ebp)
c1009517:	52                   	push   %edx
c1009518:	50                   	push   %eax
c1009519:	e8 72 04 00 00       	call   c1009990 <inode_sync>
c100951e:	83 c4 10             	add    $0x10,%esp
c1009521:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009524:	83 ec 08             	sub    $0x8,%esp
c1009527:	68 30 02 00 00       	push   $0x230
c100952c:	50                   	push   %eax
c100952d:	e8 a7 96 ff ff       	call   c1002bd9 <vmm_free>
c1009532:	83 c4 10             	add    $0x10,%esp
c1009535:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009538:	83 ec 08             	sub    $0x8,%esp
c100953b:	68 00 02 00 00       	push   $0x200
c1009540:	50                   	push   %eax
c1009541:	e8 93 96 ff ff       	call   c1002bd9 <vmm_free>
c1009546:	83 c4 10             	add    $0x10,%esp
c1009549:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100954c:	c9                   	leave  
c100954d:	c3                   	ret    

c100954e <file_read>:
c100954e:	55                   	push   %ebp
c100954f:	89 e5                	mov    %esp,%ebp
c1009551:	83 ec 48             	sub    $0x48,%esp
c1009554:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009557:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100955a:	8b 45 10             	mov    0x10(%ebp),%eax
c100955d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009560:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009563:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009566:	8b 45 08             	mov    0x8(%ebp),%eax
c1009569:	8b 00                	mov    (%eax),%eax
c100956b:	83 ec 08             	sub    $0x8,%esp
c100956e:	50                   	push   %eax
c100956f:	68 25 b9 00 c1       	push   $0xc100b925
c1009574:	e8 9f b6 ff ff       	call   c1004c18 <printk>
c1009579:	83 c4 10             	add    $0x10,%esp
c100957c:	8b 45 08             	mov    0x8(%ebp),%eax
c100957f:	8b 40 08             	mov    0x8(%eax),%eax
c1009582:	8b 40 04             	mov    0x4(%eax),%eax
c1009585:	83 ec 08             	sub    $0x8,%esp
c1009588:	50                   	push   %eax
c1009589:	68 34 b9 00 c1       	push   $0xc100b934
c100958e:	e8 85 b6 ff ff       	call   c1004c18 <printk>
c1009593:	83 c4 10             	add    $0x10,%esp
c1009596:	8b 45 08             	mov    0x8(%ebp),%eax
c1009599:	8b 10                	mov    (%eax),%edx
c100959b:	8b 45 10             	mov    0x10(%ebp),%eax
c100959e:	01 c2                	add    %eax,%edx
c10095a0:	8b 45 08             	mov    0x8(%ebp),%eax
c10095a3:	8b 40 08             	mov    0x8(%eax),%eax
c10095a6:	8b 40 04             	mov    0x4(%eax),%eax
c10095a9:	39 c2                	cmp    %eax,%edx
c10095ab:	76 2b                	jbe    c10095d8 <file_read+0x8a>
c10095ad:	8b 45 08             	mov    0x8(%ebp),%eax
c10095b0:	8b 40 08             	mov    0x8(%eax),%eax
c10095b3:	8b 50 04             	mov    0x4(%eax),%edx
c10095b6:	8b 45 08             	mov    0x8(%ebp),%eax
c10095b9:	8b 00                	mov    (%eax),%eax
c10095bb:	29 c2                	sub    %eax,%edx
c10095bd:	89 d0                	mov    %edx,%eax
c10095bf:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10095c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10095c5:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10095c8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c10095cc:	75 0a                	jne    c10095d8 <file_read+0x8a>
c10095ce:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10095d3:	e9 44 03 00 00       	jmp    c100991c <file_read+0x3ce>
c10095d8:	83 ec 08             	sub    $0x8,%esp
c10095db:	ff 75 f0             	pushl  -0x10(%ebp)
c10095de:	68 44 b9 00 c1       	push   $0xc100b944
c10095e3:	e8 30 b6 ff ff       	call   c1004c18 <printk>
c10095e8:	83 c4 10             	add    $0x10,%esp
c10095eb:	83 ec 08             	sub    $0x8,%esp
c10095ee:	6a 02                	push   $0x2
c10095f0:	68 00 02 00 00       	push   $0x200
c10095f5:	e8 ba 94 ff ff       	call   c1002ab4 <vmm_malloc>
c10095fa:	83 c4 10             	add    $0x10,%esp
c10095fd:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009600:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c1009604:	75 10                	jne    c1009616 <file_read+0xc8>
c1009606:	83 ec 0c             	sub    $0xc,%esp
c1009609:	68 5c b9 00 c1       	push   $0xc100b95c
c100960e:	e8 05 b6 ff ff       	call   c1004c18 <printk>
c1009613:	83 c4 10             	add    $0x10,%esp
c1009616:	83 ec 08             	sub    $0x8,%esp
c1009619:	6a 02                	push   $0x2
c100961b:	68 30 02 00 00       	push   $0x230
c1009620:	e8 8f 94 ff ff       	call   c1002ab4 <vmm_malloc>
c1009625:	83 c4 10             	add    $0x10,%esp
c1009628:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100962b:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c100962f:	75 1a                	jne    c100964b <file_read+0xfd>
c1009631:	83 ec 0c             	sub    $0xc,%esp
c1009634:	68 88 b9 00 c1       	push   $0xc100b988
c1009639:	e8 da b5 ff ff       	call   c1004c18 <printk>
c100963e:	83 c4 10             	add    $0x10,%esp
c1009641:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009646:	e9 d1 02 00 00       	jmp    c100991c <file_read+0x3ce>
c100964b:	8b 45 08             	mov    0x8(%ebp),%eax
c100964e:	8b 00                	mov    (%eax),%eax
c1009650:	c1 e8 09             	shr    $0x9,%eax
c1009653:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009656:	8b 45 08             	mov    0x8(%ebp),%eax
c1009659:	8b 10                	mov    (%eax),%edx
c100965b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100965e:	01 d0                	add    %edx,%eax
c1009660:	c1 e8 09             	shr    $0x9,%eax
c1009663:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009666:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009669:	2b 45 d4             	sub    -0x2c(%ebp),%eax
c100966c:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100966f:	81 7d d8 8a 00 00 00 	cmpl   $0x8a,-0x28(%ebp)
c1009676:	77 09                	ja     c1009681 <file_read+0x133>
c1009678:	81 7d d4 8a 00 00 00 	cmpl   $0x8a,-0x2c(%ebp)
c100967f:	76 19                	jbe    c100969a <file_read+0x14c>
c1009681:	68 b8 b9 00 c1       	push   $0xc100b9b8
c1009686:	68 28 ba 00 c1       	push   $0xc100ba28
c100968b:	68 d1 01 00 00       	push   $0x1d1
c1009690:	68 74 b7 00 c1       	push   $0xc100b774
c1009695:	e8 73 6c ff ff       	call   c100030d <__PANIC>
c100969a:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
c100969e:	75 7b                	jne    c100971b <file_read+0x1cd>
c10096a0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10096a3:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c10096a6:	74 19                	je     c10096c1 <file_read+0x173>
c10096a8:	68 f0 b9 00 c1       	push   $0xc100b9f0
c10096ad:	68 28 ba 00 c1       	push   $0xc100ba28
c10096b2:	68 d8 01 00 00       	push   $0x1d8
c10096b7:	68 74 b7 00 c1       	push   $0xc100b774
c10096bc:	e8 4c 6c ff ff       	call   c100030d <__PANIC>
c10096c1:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c10096c5:	77 2b                	ja     c10096f2 <file_read+0x1a4>
c10096c7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10096ca:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10096cd:	8b 45 08             	mov    0x8(%ebp),%eax
c10096d0:	8b 40 08             	mov    0x8(%eax),%eax
c10096d3:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10096d6:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10096dd:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10096e0:	01 ca                	add    %ecx,%edx
c10096e2:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c10096e5:	83 c1 04             	add    $0x4,%ecx
c10096e8:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c10096eb:	89 02                	mov    %eax,(%edx)
c10096ed:	e9 40 01 00 00       	jmp    c1009832 <file_read+0x2e4>
c10096f2:	8b 45 08             	mov    0x8(%ebp),%eax
c10096f5:	8b 40 08             	mov    0x8(%eax),%eax
c10096f8:	8b 40 40             	mov    0x40(%eax),%eax
c10096fb:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10096fe:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1009701:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009704:	83 c2 30             	add    $0x30,%edx
c1009707:	83 ec 04             	sub    $0x4,%esp
c100970a:	6a 01                	push   $0x1
c100970c:	50                   	push   %eax
c100970d:	52                   	push   %edx
c100970e:	e8 ad bd ff ff       	call   c10054c0 <ide_read>
c1009713:	83 c4 10             	add    $0x10,%esp
c1009716:	e9 17 01 00 00       	jmp    c1009832 <file_read+0x2e4>
c100971b:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100971f:	77 39                	ja     c100975a <file_read+0x20c>
c1009721:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009724:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009727:	eb 24                	jmp    c100974d <file_read+0x1ff>
c1009729:	8b 45 08             	mov    0x8(%ebp),%eax
c100972c:	8b 40 08             	mov    0x8(%eax),%eax
c100972f:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009732:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009739:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100973c:	01 ca                	add    %ecx,%edx
c100973e:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009741:	83 c1 04             	add    $0x4,%ecx
c1009744:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009747:	89 02                	mov    %eax,(%edx)
c1009749:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c100974d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009750:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
c1009753:	76 d4                	jbe    c1009729 <file_read+0x1db>
c1009755:	e9 d8 00 00 00       	jmp    c1009832 <file_read+0x2e4>
c100975a:	83 7d d8 0b          	cmpl   $0xb,-0x28(%ebp)
c100975e:	0f 87 84 00 00 00    	ja     c10097e8 <file_read+0x29a>
c1009764:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c1009768:	76 7e                	jbe    c10097e8 <file_read+0x29a>
c100976a:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100976d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009770:	eb 24                	jmp    c1009796 <file_read+0x248>
c1009772:	8b 45 08             	mov    0x8(%ebp),%eax
c1009775:	8b 40 08             	mov    0x8(%eax),%eax
c1009778:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100977b:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009782:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009785:	01 ca                	add    %ecx,%edx
c1009787:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100978a:	83 c1 04             	add    $0x4,%ecx
c100978d:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009790:	89 02                	mov    %eax,(%edx)
c1009792:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009796:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c100979a:	76 d6                	jbe    c1009772 <file_read+0x224>
c100979c:	8b 45 08             	mov    0x8(%ebp),%eax
c100979f:	8b 40 08             	mov    0x8(%eax),%eax
c10097a2:	8b 40 40             	mov    0x40(%eax),%eax
c10097a5:	85 c0                	test   %eax,%eax
c10097a7:	75 19                	jne    c10097c2 <file_read+0x274>
c10097a9:	68 c4 b7 00 c1       	push   $0xc100b7c4
c10097ae:	68 28 ba 00 c1       	push   $0xc100ba28
c10097b3:	68 f0 01 00 00       	push   $0x1f0
c10097b8:	68 74 b7 00 c1       	push   $0xc100b774
c10097bd:	e8 4b 6b ff ff       	call   c100030d <__PANIC>
c10097c2:	8b 45 08             	mov    0x8(%ebp),%eax
c10097c5:	8b 40 08             	mov    0x8(%eax),%eax
c10097c8:	8b 40 40             	mov    0x40(%eax),%eax
c10097cb:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10097ce:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10097d1:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10097d4:	83 c2 30             	add    $0x30,%edx
c10097d7:	83 ec 04             	sub    $0x4,%esp
c10097da:	6a 01                	push   $0x1
c10097dc:	50                   	push   %eax
c10097dd:	52                   	push   %edx
c10097de:	e8 dd bc ff ff       	call   c10054c0 <ide_read>
c10097e3:	83 c4 10             	add    $0x10,%esp
c10097e6:	eb 4a                	jmp    c1009832 <file_read+0x2e4>
c10097e8:	8b 45 08             	mov    0x8(%ebp),%eax
c10097eb:	8b 40 08             	mov    0x8(%eax),%eax
c10097ee:	8b 40 40             	mov    0x40(%eax),%eax
c10097f1:	85 c0                	test   %eax,%eax
c10097f3:	75 19                	jne    c100980e <file_read+0x2c0>
c10097f5:	68 c4 b7 00 c1       	push   $0xc100b7c4
c10097fa:	68 28 ba 00 c1       	push   $0xc100ba28
c10097ff:	68 f7 01 00 00       	push   $0x1f7
c1009804:	68 74 b7 00 c1       	push   $0xc100b774
c1009809:	e8 ff 6a ff ff       	call   c100030d <__PANIC>
c100980e:	8b 45 08             	mov    0x8(%ebp),%eax
c1009811:	8b 40 08             	mov    0x8(%eax),%eax
c1009814:	8b 40 40             	mov    0x40(%eax),%eax
c1009817:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100981a:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100981d:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009820:	83 c2 30             	add    $0x30,%edx
c1009823:	83 ec 04             	sub    $0x4,%esp
c1009826:	6a 01                	push   $0x1
c1009828:	50                   	push   %eax
c1009829:	52                   	push   %edx
c100982a:	e8 91 bc ff ff       	call   c10054c0 <ide_read>
c100982f:	83 c4 10             	add    $0x10,%esp
c1009832:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1009839:	e9 a7 00 00 00       	jmp    c10098e5 <file_read+0x397>
c100983e:	8b 45 08             	mov    0x8(%ebp),%eax
c1009841:	8b 00                	mov    (%eax),%eax
c1009843:	c1 e8 09             	shr    $0x9,%eax
c1009846:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1009849:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100984c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009853:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009856:	01 d0                	add    %edx,%eax
c1009858:	8b 00                	mov    (%eax),%eax
c100985a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100985d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009860:	8b 00                	mov    (%eax),%eax
c1009862:	25 ff 01 00 00       	and    $0x1ff,%eax
c1009867:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100986a:	b8 00 02 00 00       	mov    $0x200,%eax
c100986f:	2b 45 c0             	sub    -0x40(%ebp),%eax
c1009872:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1009875:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009878:	39 45 bc             	cmp    %eax,-0x44(%ebp)
c100987b:	0f 46 45 bc          	cmovbe -0x44(%ebp),%eax
c100987f:	89 45 b8             	mov    %eax,-0x48(%ebp)
c1009882:	83 ec 04             	sub    $0x4,%esp
c1009885:	68 00 02 00 00       	push   $0x200
c100988a:	6a 00                	push   $0x0
c100988c:	ff 75 e0             	pushl  -0x20(%ebp)
c100988f:	e8 16 68 ff ff       	call   c10000aa <memset>
c1009894:	83 c4 10             	add    $0x10,%esp
c1009897:	83 ec 04             	sub    $0x4,%esp
c100989a:	6a 01                	push   $0x1
c100989c:	ff 75 c4             	pushl  -0x3c(%ebp)
c100989f:	ff 75 e0             	pushl  -0x20(%ebp)
c10098a2:	e8 19 bc ff ff       	call   c10054c0 <ide_read>
c10098a7:	83 c4 10             	add    $0x10,%esp
c10098aa:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10098ad:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10098b0:	01 d0                	add    %edx,%eax
c10098b2:	83 ec 04             	sub    $0x4,%esp
c10098b5:	ff 75 b8             	pushl  -0x48(%ebp)
c10098b8:	50                   	push   %eax
c10098b9:	ff 75 f4             	pushl  -0xc(%ebp)
c10098bc:	e8 47 68 ff ff       	call   c1000108 <memcpy>
c10098c1:	83 c4 10             	add    $0x10,%esp
c10098c4:	8b 45 b8             	mov    -0x48(%ebp),%eax
c10098c7:	01 45 f4             	add    %eax,-0xc(%ebp)
c10098ca:	8b 45 08             	mov    0x8(%ebp),%eax
c10098cd:	8b 10                	mov    (%eax),%edx
c10098cf:	8b 45 b8             	mov    -0x48(%ebp),%eax
c10098d2:	01 c2                	add    %eax,%edx
c10098d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10098d7:	89 10                	mov    %edx,(%eax)
c10098d9:	8b 45 b8             	mov    -0x48(%ebp),%eax
c10098dc:	01 45 e4             	add    %eax,-0x1c(%ebp)
c10098df:	8b 45 b8             	mov    -0x48(%ebp),%eax
c10098e2:	29 45 ec             	sub    %eax,-0x14(%ebp)
c10098e5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10098e8:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c10098eb:	0f 82 4d ff ff ff    	jb     c100983e <file_read+0x2f0>
c10098f1:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10098f4:	83 ec 08             	sub    $0x8,%esp
c10098f7:	68 30 02 00 00       	push   $0x230
c10098fc:	50                   	push   %eax
c10098fd:	e8 d7 92 ff ff       	call   c1002bd9 <vmm_free>
c1009902:	83 c4 10             	add    $0x10,%esp
c1009905:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009908:	83 ec 08             	sub    $0x8,%esp
c100990b:	68 00 02 00 00       	push   $0x200
c1009910:	50                   	push   %eax
c1009911:	e8 c3 92 ff ff       	call   c1002bd9 <vmm_free>
c1009916:	83 c4 10             	add    $0x10,%esp
c1009919:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100991c:	c9                   	leave  
c100991d:	c3                   	ret    

c100991e <inode_locate>:
c100991e:	55                   	push   %ebp
c100991f:	89 e5                	mov    %esp,%ebp
c1009921:	83 ec 20             	sub    $0x20,%esp
c1009924:	8b 45 08             	mov    0x8(%ebp),%eax
c1009927:	8b 40 10             	mov    0x10(%eax),%eax
c100992a:	8b 40 20             	mov    0x20(%eax),%eax
c100992d:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1009930:	c7 45 f8 44 00 00 00 	movl   $0x44,-0x8(%ebp)
c1009937:	8b 45 0c             	mov    0xc(%ebp),%eax
c100993a:	0f af 45 f8          	imul   -0x8(%ebp),%eax
c100993e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009941:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009944:	c1 e8 09             	shr    $0x9,%eax
c1009947:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100994a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100994d:	25 ff 01 00 00       	and    $0x1ff,%eax
c1009952:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009955:	b8 00 02 00 00       	mov    $0x200,%eax
c100995a:	2b 45 ec             	sub    -0x14(%ebp),%eax
c100995d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009960:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009963:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1009966:	73 08                	jae    c1009970 <inode_locate+0x52>
c1009968:	8b 45 10             	mov    0x10(%ebp),%eax
c100996b:	c6 00 01             	movb   $0x1,(%eax)
c100996e:	eb 06                	jmp    c1009976 <inode_locate+0x58>
c1009970:	8b 45 10             	mov    0x10(%ebp),%eax
c1009973:	c6 00 00             	movb   $0x0,(%eax)
c1009976:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009979:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100997c:	01 c2                	add    %eax,%edx
c100997e:	8b 45 10             	mov    0x10(%ebp),%eax
c1009981:	89 50 04             	mov    %edx,0x4(%eax)
c1009984:	8b 45 10             	mov    0x10(%ebp),%eax
c1009987:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100998a:	89 50 08             	mov    %edx,0x8(%eax)
c100998d:	90                   	nop
c100998e:	c9                   	leave  
c100998f:	c3                   	ret    

c1009990 <inode_sync>:
c1009990:	55                   	push   %ebp
c1009991:	89 e5                	mov    %esp,%ebp
c1009993:	57                   	push   %edi
c1009994:	56                   	push   %esi
c1009995:	53                   	push   %ebx
c1009996:	83 ec 6c             	sub    $0x6c,%esp
c1009999:	8b 45 0c             	mov    0xc(%ebp),%eax
c100999c:	8b 00                	mov    (%eax),%eax
c100999e:	88 45 e7             	mov    %al,-0x19(%ebp)
c10099a1:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
c10099a5:	8d 55 d4             	lea    -0x2c(%ebp),%edx
c10099a8:	52                   	push   %edx
c10099a9:	50                   	push   %eax
c10099aa:	ff 75 08             	pushl  0x8(%ebp)
c10099ad:	e8 6c ff ff ff       	call   c100991e <inode_locate>
c10099b2:	83 c4 0c             	add    $0xc,%esp
c10099b5:	83 ec 04             	sub    $0x4,%esp
c10099b8:	6a 44                	push   $0x44
c10099ba:	ff 75 0c             	pushl  0xc(%ebp)
c10099bd:	8d 45 90             	lea    -0x70(%ebp),%eax
c10099c0:	50                   	push   %eax
c10099c1:	e8 42 67 ff ff       	call   c1000108 <memcpy>
c10099c6:	83 c4 10             	add    $0x10,%esp
c10099c9:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
c10099d0:	c6 45 9c 00          	movb   $0x0,-0x64(%ebp)
c10099d4:	8b 45 10             	mov    0x10(%ebp),%eax
c10099d7:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10099da:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
c10099de:	84 c0                	test   %al,%al
c10099e0:	74 64                	je     c1009a46 <inode_sync+0xb6>
c10099e2:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10099e5:	83 ec 04             	sub    $0x4,%esp
c10099e8:	6a 02                	push   $0x2
c10099ea:	50                   	push   %eax
c10099eb:	ff 75 e0             	pushl  -0x20(%ebp)
c10099ee:	e8 cd ba ff ff       	call   c10054c0 <ide_read>
c10099f3:	83 c4 10             	add    $0x10,%esp
c10099f6:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10099f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10099fc:	01 d0                	add    %edx,%eax
c10099fe:	89 c2                	mov    %eax,%edx
c1009a00:	8d 45 90             	lea    -0x70(%ebp),%eax
c1009a03:	b9 44 00 00 00       	mov    $0x44,%ecx
c1009a08:	8b 18                	mov    (%eax),%ebx
c1009a0a:	89 1a                	mov    %ebx,(%edx)
c1009a0c:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c1009a10:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c1009a14:	8d 5a 04             	lea    0x4(%edx),%ebx
c1009a17:	83 e3 fc             	and    $0xfffffffc,%ebx
c1009a1a:	29 da                	sub    %ebx,%edx
c1009a1c:	29 d0                	sub    %edx,%eax
c1009a1e:	01 d1                	add    %edx,%ecx
c1009a20:	83 e1 fc             	and    $0xfffffffc,%ecx
c1009a23:	c1 e9 02             	shr    $0x2,%ecx
c1009a26:	89 ca                	mov    %ecx,%edx
c1009a28:	89 df                	mov    %ebx,%edi
c1009a2a:	89 c6                	mov    %eax,%esi
c1009a2c:	89 d1                	mov    %edx,%ecx
c1009a2e:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1009a30:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009a33:	83 ec 04             	sub    $0x4,%esp
c1009a36:	6a 02                	push   $0x2
c1009a38:	50                   	push   %eax
c1009a39:	ff 75 e0             	pushl  -0x20(%ebp)
c1009a3c:	e8 bc ba ff ff       	call   c10054fd <ide_write>
c1009a41:	83 c4 10             	add    $0x10,%esp
c1009a44:	eb 62                	jmp    c1009aa8 <inode_sync+0x118>
c1009a46:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009a49:	83 ec 04             	sub    $0x4,%esp
c1009a4c:	6a 01                	push   $0x1
c1009a4e:	50                   	push   %eax
c1009a4f:	ff 75 e0             	pushl  -0x20(%ebp)
c1009a52:	e8 69 ba ff ff       	call   c10054c0 <ide_read>
c1009a57:	83 c4 10             	add    $0x10,%esp
c1009a5a:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009a5d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009a60:	01 d0                	add    %edx,%eax
c1009a62:	89 c2                	mov    %eax,%edx
c1009a64:	8d 45 90             	lea    -0x70(%ebp),%eax
c1009a67:	b9 44 00 00 00       	mov    $0x44,%ecx
c1009a6c:	8b 18                	mov    (%eax),%ebx
c1009a6e:	89 1a                	mov    %ebx,(%edx)
c1009a70:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c1009a74:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c1009a78:	8d 5a 04             	lea    0x4(%edx),%ebx
c1009a7b:	83 e3 fc             	and    $0xfffffffc,%ebx
c1009a7e:	29 da                	sub    %ebx,%edx
c1009a80:	29 d0                	sub    %edx,%eax
c1009a82:	01 d1                	add    %edx,%ecx
c1009a84:	83 e1 fc             	and    $0xfffffffc,%ecx
c1009a87:	c1 e9 02             	shr    $0x2,%ecx
c1009a8a:	89 ca                	mov    %ecx,%edx
c1009a8c:	89 df                	mov    %ebx,%edi
c1009a8e:	89 c6                	mov    %eax,%esi
c1009a90:	89 d1                	mov    %edx,%ecx
c1009a92:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1009a94:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009a97:	83 ec 04             	sub    $0x4,%esp
c1009a9a:	6a 01                	push   $0x1
c1009a9c:	50                   	push   %eax
c1009a9d:	ff 75 e0             	pushl  -0x20(%ebp)
c1009aa0:	e8 58 ba ff ff       	call   c10054fd <ide_write>
c1009aa5:	83 c4 10             	add    $0x10,%esp
c1009aa8:	90                   	nop
c1009aa9:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1009aac:	5b                   	pop    %ebx
c1009aad:	5e                   	pop    %esi
c1009aae:	5f                   	pop    %edi
c1009aaf:	5d                   	pop    %ebp
c1009ab0:	c3                   	ret    

c1009ab1 <inode_open>:
c1009ab1:	55                   	push   %ebp
c1009ab2:	89 e5                	mov    %esp,%ebp
c1009ab4:	83 ec 28             	sub    $0x28,%esp
c1009ab7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
c1009aba:	50                   	push   %eax
c1009abb:	ff 75 0c             	pushl  0xc(%ebp)
c1009abe:	ff 75 08             	pushl  0x8(%ebp)
c1009ac1:	e8 58 fe ff ff       	call   c100991e <inode_locate>
c1009ac6:	83 c4 0c             	add    $0xc,%esp
c1009ac9:	83 ec 08             	sub    $0x8,%esp
c1009acc:	6a 02                	push   $0x2
c1009ace:	6a 44                	push   $0x44
c1009ad0:	e8 df 8f ff ff       	call   c1002ab4 <vmm_malloc>
c1009ad5:	83 c4 10             	add    $0x10,%esp
c1009ad8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009adb:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009adf:	84 c0                	test   %al,%al
c1009ae1:	74 2b                	je     c1009b0e <inode_open+0x5d>
c1009ae3:	83 ec 08             	sub    $0x8,%esp
c1009ae6:	6a 02                	push   $0x2
c1009ae8:	68 00 04 00 00       	push   $0x400
c1009aed:	e8 c2 8f ff ff       	call   c1002ab4 <vmm_malloc>
c1009af2:	83 c4 10             	add    $0x10,%esp
c1009af5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009af8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009afb:	83 ec 04             	sub    $0x4,%esp
c1009afe:	6a 02                	push   $0x2
c1009b00:	50                   	push   %eax
c1009b01:	ff 75 f4             	pushl  -0xc(%ebp)
c1009b04:	e8 b7 b9 ff ff       	call   c10054c0 <ide_read>
c1009b09:	83 c4 10             	add    $0x10,%esp
c1009b0c:	eb 29                	jmp    c1009b37 <inode_open+0x86>
c1009b0e:	83 ec 08             	sub    $0x8,%esp
c1009b11:	6a 02                	push   $0x2
c1009b13:	68 00 02 00 00       	push   $0x200
c1009b18:	e8 97 8f ff ff       	call   c1002ab4 <vmm_malloc>
c1009b1d:	83 c4 10             	add    $0x10,%esp
c1009b20:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009b23:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009b26:	83 ec 04             	sub    $0x4,%esp
c1009b29:	6a 01                	push   $0x1
c1009b2b:	50                   	push   %eax
c1009b2c:	ff 75 f4             	pushl  -0xc(%ebp)
c1009b2f:	e8 8c b9 ff ff       	call   c10054c0 <ide_read>
c1009b34:	83 c4 10             	add    $0x10,%esp
c1009b37:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009b3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009b3d:	01 d0                	add    %edx,%eax
c1009b3f:	83 ec 04             	sub    $0x4,%esp
c1009b42:	6a 44                	push   $0x44
c1009b44:	50                   	push   %eax
c1009b45:	ff 75 f0             	pushl  -0x10(%ebp)
c1009b48:	e8 bb 65 ff ff       	call   c1000108 <memcpy>
c1009b4d:	83 c4 10             	add    $0x10,%esp
c1009b50:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009b54:	84 c0                	test   %al,%al
c1009b56:	74 16                	je     c1009b6e <inode_open+0xbd>
c1009b58:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009b5b:	83 ec 08             	sub    $0x8,%esp
c1009b5e:	68 00 04 00 00       	push   $0x400
c1009b63:	50                   	push   %eax
c1009b64:	e8 70 90 ff ff       	call   c1002bd9 <vmm_free>
c1009b69:	83 c4 10             	add    $0x10,%esp
c1009b6c:	eb 14                	jmp    c1009b82 <inode_open+0xd1>
c1009b6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009b71:	83 ec 08             	sub    $0x8,%esp
c1009b74:	68 00 02 00 00       	push   $0x200
c1009b79:	50                   	push   %eax
c1009b7a:	e8 5a 90 ff ff       	call   c1002bd9 <vmm_free>
c1009b7f:	83 c4 10             	add    $0x10,%esp
c1009b82:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009b85:	c9                   	leave  
c1009b86:	c3                   	ret    

c1009b87 <inode_close>:
c1009b87:	55                   	push   %ebp
c1009b88:	89 e5                	mov    %esp,%ebp
c1009b8a:	83 ec 08             	sub    $0x8,%esp
c1009b8d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b90:	83 ec 08             	sub    $0x8,%esp
c1009b93:	6a 44                	push   $0x44
c1009b95:	50                   	push   %eax
c1009b96:	e8 3e 90 ff ff       	call   c1002bd9 <vmm_free>
c1009b9b:	83 c4 10             	add    $0x10,%esp
c1009b9e:	90                   	nop
c1009b9f:	c9                   	leave  
c1009ba0:	c3                   	ret    

c1009ba1 <inode_delete>:
c1009ba1:	55                   	push   %ebp
c1009ba2:	89 e5                	mov    %esp,%ebp
c1009ba4:	83 ec 18             	sub    $0x18,%esp
c1009ba7:	81 7d 0c ff 0f 00 00 	cmpl   $0xfff,0xc(%ebp)
c1009bae:	76 16                	jbe    c1009bc6 <inode_delete+0x25>
c1009bb0:	68 34 ba 00 c1       	push   $0xc100ba34
c1009bb5:	68 f0 ba 00 c1       	push   $0xc100baf0
c1009bba:	6a 6b                	push   $0x6b
c1009bbc:	68 44 ba 00 c1       	push   $0xc100ba44
c1009bc1:	e8 47 67 ff ff       	call   c100030d <__PANIC>
c1009bc6:	83 ec 04             	sub    $0x4,%esp
c1009bc9:	8d 45 e8             	lea    -0x18(%ebp),%eax
c1009bcc:	50                   	push   %eax
c1009bcd:	ff 75 0c             	pushl  0xc(%ebp)
c1009bd0:	ff 75 08             	pushl  0x8(%ebp)
c1009bd3:	e8 46 fd ff ff       	call   c100991e <inode_locate>
c1009bd8:	83 c4 10             	add    $0x10,%esp
c1009bdb:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009bde:	8b 45 08             	mov    0x8(%ebp),%eax
c1009be1:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c1009be5:	0f b6 c8             	movzbl %al,%ecx
c1009be8:	8b 45 08             	mov    0x8(%ebp),%eax
c1009beb:	8b 40 0c             	mov    0xc(%eax),%eax
c1009bee:	01 c8                	add    %ecx,%eax
c1009bf0:	39 c2                	cmp    %eax,%edx
c1009bf2:	76 16                	jbe    c1009c0a <inode_delete+0x69>
c1009bf4:	68 78 ba 00 c1       	push   $0xc100ba78
c1009bf9:	68 f0 ba 00 c1       	push   $0xc100baf0
c1009bfe:	6a 6e                	push   $0x6e
c1009c00:	68 44 ba 00 c1       	push   $0xc100ba44
c1009c05:	e8 03 67 ff ff       	call   c100030d <__PANIC>
c1009c0a:	8b 45 10             	mov    0x10(%ebp),%eax
c1009c0d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009c10:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
c1009c14:	84 c0                	test   %al,%al
c1009c16:	74 42                	je     c1009c5a <inode_delete+0xb9>
c1009c18:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009c1b:	83 ec 04             	sub    $0x4,%esp
c1009c1e:	6a 02                	push   $0x2
c1009c20:	50                   	push   %eax
c1009c21:	ff 75 f4             	pushl  -0xc(%ebp)
c1009c24:	e8 97 b8 ff ff       	call   c10054c0 <ide_read>
c1009c29:	83 c4 10             	add    $0x10,%esp
c1009c2c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009c2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009c32:	01 d0                	add    %edx,%eax
c1009c34:	83 ec 04             	sub    $0x4,%esp
c1009c37:	6a 44                	push   $0x44
c1009c39:	6a 00                	push   $0x0
c1009c3b:	50                   	push   %eax
c1009c3c:	e8 69 64 ff ff       	call   c10000aa <memset>
c1009c41:	83 c4 10             	add    $0x10,%esp
c1009c44:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009c47:	83 ec 04             	sub    $0x4,%esp
c1009c4a:	6a 02                	push   $0x2
c1009c4c:	50                   	push   %eax
c1009c4d:	ff 75 f4             	pushl  -0xc(%ebp)
c1009c50:	e8 a8 b8 ff ff       	call   c10054fd <ide_write>
c1009c55:	83 c4 10             	add    $0x10,%esp
c1009c58:	eb 40                	jmp    c1009c9a <inode_delete+0xf9>
c1009c5a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009c5d:	83 ec 04             	sub    $0x4,%esp
c1009c60:	6a 01                	push   $0x1
c1009c62:	50                   	push   %eax
c1009c63:	ff 75 f4             	pushl  -0xc(%ebp)
c1009c66:	e8 55 b8 ff ff       	call   c10054c0 <ide_read>
c1009c6b:	83 c4 10             	add    $0x10,%esp
c1009c6e:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009c71:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009c74:	01 d0                	add    %edx,%eax
c1009c76:	83 ec 04             	sub    $0x4,%esp
c1009c79:	6a 44                	push   $0x44
c1009c7b:	6a 00                	push   $0x0
c1009c7d:	50                   	push   %eax
c1009c7e:	e8 27 64 ff ff       	call   c10000aa <memset>
c1009c83:	83 c4 10             	add    $0x10,%esp
c1009c86:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009c89:	83 ec 04             	sub    $0x4,%esp
c1009c8c:	6a 01                	push   $0x1
c1009c8e:	50                   	push   %eax
c1009c8f:	ff 75 f4             	pushl  -0xc(%ebp)
c1009c92:	e8 66 b8 ff ff       	call   c10054fd <ide_write>
c1009c97:	83 c4 10             	add    $0x10,%esp
c1009c9a:	90                   	nop
c1009c9b:	c9                   	leave  
c1009c9c:	c3                   	ret    

c1009c9d <inode_release>:
c1009c9d:	55                   	push   %ebp
c1009c9e:	89 e5                	mov    %esp,%ebp
c1009ca0:	57                   	push   %edi
c1009ca1:	53                   	push   %ebx
c1009ca2:	81 ec 50 02 00 00    	sub    $0x250,%esp
c1009ca8:	83 ec 08             	sub    $0x8,%esp
c1009cab:	ff 75 0c             	pushl  0xc(%ebp)
c1009cae:	ff 75 08             	pushl  0x8(%ebp)
c1009cb1:	e8 fb fd ff ff       	call   c1009ab1 <inode_open>
c1009cb6:	83 c4 10             	add    $0x10,%esp
c1009cb9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009cbc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009cbf:	8b 00                	mov    (%eax),%eax
c1009cc1:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1009cc4:	74 19                	je     c1009cdf <inode_release+0x42>
c1009cc6:	68 b8 ba 00 c1       	push   $0xc100bab8
c1009ccb:	68 00 bb 00 c1       	push   $0xc100bb00
c1009cd0:	68 85 00 00 00       	push   $0x85
c1009cd5:	68 44 ba 00 c1       	push   $0xc100ba44
c1009cda:	e8 2e 66 ff ff       	call   c100030d <__PANIC>
c1009cdf:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1009ce3:	c6 45 f6 0c          	movb   $0xc,-0xa(%ebp)
c1009ce7:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
c1009ced:	b8 00 00 00 00       	mov    $0x0,%eax
c1009cf2:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1009cf7:	89 d7                	mov    %edx,%edi
c1009cf9:	f3 ab                	rep stos %eax,%es:(%edi)
c1009cfb:	eb 22                	jmp    c1009d1f <inode_release+0x82>
c1009cfd:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1009d01:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009d05:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009d08:	83 c1 04             	add    $0x4,%ecx
c1009d0b:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1009d0e:	89 94 85 b0 fd ff ff 	mov    %edx,-0x250(%ebp,%eax,4)
c1009d15:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009d19:	83 c0 01             	add    $0x1,%eax
c1009d1c:	88 45 f7             	mov    %al,-0x9(%ebp)
c1009d1f:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1009d23:	76 d8                	jbe    c1009cfd <inode_release+0x60>
c1009d25:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009d28:	8b 40 40             	mov    0x40(%eax),%eax
c1009d2b:	85 c0                	test   %eax,%eax
c1009d2d:	0f 84 b2 00 00 00    	je     c1009de5 <inode_release+0x148>
c1009d33:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009d36:	8b 50 40             	mov    0x40(%eax),%edx
c1009d39:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
c1009d3f:	83 c0 30             	add    $0x30,%eax
c1009d42:	83 ec 04             	sub    $0x4,%esp
c1009d45:	6a 01                	push   $0x1
c1009d47:	52                   	push   %edx
c1009d48:	50                   	push   %eax
c1009d49:	e8 72 b7 ff ff       	call   c10054c0 <ide_read>
c1009d4e:	83 c4 10             	add    $0x10,%esp
c1009d51:	c6 45 f6 8c          	movb   $0x8c,-0xa(%ebp)
c1009d55:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009d58:	8b 50 40             	mov    0x40(%eax),%edx
c1009d5b:	8b 45 08             	mov    0x8(%ebp),%eax
c1009d5e:	8b 40 10             	mov    0x10(%eax),%eax
c1009d61:	8b 40 28             	mov    0x28(%eax),%eax
c1009d64:	29 c2                	sub    %eax,%edx
c1009d66:	89 d0                	mov    %edx,%eax
c1009d68:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009d6b:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1009d6f:	75 19                	jne    c1009d8a <inode_release+0xed>
c1009d71:	68 d8 ba 00 c1       	push   $0xc100bad8
c1009d76:	68 00 bb 00 c1       	push   $0xc100bb00
c1009d7b:	68 9d 00 00 00       	push   $0x9d
c1009d80:	68 44 ba 00 c1       	push   $0xc100ba44
c1009d85:	e8 83 65 ff ff       	call   c100030d <__PANIC>
c1009d8a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009d8d:	c1 e8 03             	shr    $0x3,%eax
c1009d90:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009d93:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009d96:	83 e0 07             	and    $0x7,%eax
c1009d99:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009d9c:	8b 45 08             	mov    0x8(%ebp),%eax
c1009d9f:	8b 50 18             	mov    0x18(%eax),%edx
c1009da2:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009da5:	01 d0                	add    %edx,%eax
c1009da7:	0f b6 00             	movzbl (%eax),%eax
c1009daa:	89 c2                	mov    %eax,%edx
c1009dac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009daf:	bb 01 00 00 00       	mov    $0x1,%ebx
c1009db4:	89 c1                	mov    %eax,%ecx
c1009db6:	d3 e3                	shl    %cl,%ebx
c1009db8:	89 d8                	mov    %ebx,%eax
c1009dba:	f7 d0                	not    %eax
c1009dbc:	89 d1                	mov    %edx,%ecx
c1009dbe:	21 c1                	and    %eax,%ecx
c1009dc0:	8b 45 08             	mov    0x8(%ebp),%eax
c1009dc3:	8b 50 18             	mov    0x18(%eax),%edx
c1009dc6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009dc9:	01 d0                	add    %edx,%eax
c1009dcb:	89 ca                	mov    %ecx,%edx
c1009dcd:	88 10                	mov    %dl,(%eax)
c1009dcf:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009dd4:	83 ec 04             	sub    $0x4,%esp
c1009dd7:	6a 01                	push   $0x1
c1009dd9:	ff 75 ec             	pushl  -0x14(%ebp)
c1009ddc:	50                   	push   %eax
c1009ddd:	e8 01 eb ff ff       	call   c10088e3 <bitmap_sync>
c1009de2:	83 c4 10             	add    $0x10,%esp
c1009de5:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1009de9:	e9 b9 00 00 00       	jmp    c1009ea7 <inode_release+0x20a>
c1009dee:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009df2:	8b 84 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%eax
c1009df9:	85 c0                	test   %eax,%eax
c1009dfb:	0f 84 9c 00 00 00    	je     c1009e9d <inode_release+0x200>
c1009e01:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1009e08:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009e0c:	8b 94 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%edx
c1009e13:	8b 45 08             	mov    0x8(%ebp),%eax
c1009e16:	8b 40 10             	mov    0x10(%eax),%eax
c1009e19:	8b 40 28             	mov    0x28(%eax),%eax
c1009e1c:	29 c2                	sub    %eax,%edx
c1009e1e:	89 d0                	mov    %edx,%eax
c1009e20:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009e23:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1009e27:	75 19                	jne    c1009e42 <inode_release+0x1a5>
c1009e29:	68 d8 ba 00 c1       	push   $0xc100bad8
c1009e2e:	68 00 bb 00 c1       	push   $0xc100bb00
c1009e33:	68 aa 00 00 00       	push   $0xaa
c1009e38:	68 44 ba 00 c1       	push   $0xc100ba44
c1009e3d:	e8 cb 64 ff ff       	call   c100030d <__PANIC>
c1009e42:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009e45:	c1 e8 03             	shr    $0x3,%eax
c1009e48:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009e4b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009e4e:	83 e0 07             	and    $0x7,%eax
c1009e51:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009e54:	8b 45 08             	mov    0x8(%ebp),%eax
c1009e57:	8b 50 18             	mov    0x18(%eax),%edx
c1009e5a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009e5d:	01 d0                	add    %edx,%eax
c1009e5f:	0f b6 00             	movzbl (%eax),%eax
c1009e62:	89 c2                	mov    %eax,%edx
c1009e64:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009e67:	bb 01 00 00 00       	mov    $0x1,%ebx
c1009e6c:	89 c1                	mov    %eax,%ecx
c1009e6e:	d3 e3                	shl    %cl,%ebx
c1009e70:	89 d8                	mov    %ebx,%eax
c1009e72:	f7 d0                	not    %eax
c1009e74:	89 d1                	mov    %edx,%ecx
c1009e76:	21 c1                	and    %eax,%ecx
c1009e78:	8b 45 08             	mov    0x8(%ebp),%eax
c1009e7b:	8b 50 18             	mov    0x18(%eax),%edx
c1009e7e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009e81:	01 d0                	add    %edx,%eax
c1009e83:	89 ca                	mov    %ecx,%edx
c1009e85:	88 10                	mov    %dl,(%eax)
c1009e87:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009e8c:	83 ec 04             	sub    $0x4,%esp
c1009e8f:	6a 01                	push   $0x1
c1009e91:	ff 75 ec             	pushl  -0x14(%ebp)
c1009e94:	50                   	push   %eax
c1009e95:	e8 49 ea ff ff       	call   c10088e3 <bitmap_sync>
c1009e9a:	83 c4 10             	add    $0x10,%esp
c1009e9d:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009ea1:	83 c0 01             	add    $0x1,%eax
c1009ea4:	88 45 f7             	mov    %al,-0x9(%ebp)
c1009ea7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009eab:	3a 45 f6             	cmp    -0xa(%ebp),%al
c1009eae:	0f 82 3a ff ff ff    	jb     c1009dee <inode_release+0x151>
c1009eb4:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009eb7:	c1 e8 03             	shr    $0x3,%eax
c1009eba:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009ebd:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009ec0:	83 e0 07             	and    $0x7,%eax
c1009ec3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009ec6:	8b 45 08             	mov    0x8(%ebp),%eax
c1009ec9:	8b 50 20             	mov    0x20(%eax),%edx
c1009ecc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009ecf:	01 d0                	add    %edx,%eax
c1009ed1:	0f b6 00             	movzbl (%eax),%eax
c1009ed4:	89 c2                	mov    %eax,%edx
c1009ed6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009ed9:	bb 01 00 00 00       	mov    $0x1,%ebx
c1009ede:	89 c1                	mov    %eax,%ecx
c1009ee0:	d3 e3                	shl    %cl,%ebx
c1009ee2:	89 d8                	mov    %ebx,%eax
c1009ee4:	f7 d0                	not    %eax
c1009ee6:	89 d1                	mov    %edx,%ecx
c1009ee8:	21 c1                	and    %eax,%ecx
c1009eea:	8b 45 08             	mov    0x8(%ebp),%eax
c1009eed:	8b 50 20             	mov    0x20(%eax),%edx
c1009ef0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009ef3:	01 d0                	add    %edx,%eax
c1009ef5:	89 ca                	mov    %ecx,%edx
c1009ef7:	88 10                	mov    %dl,(%eax)
c1009ef9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009efe:	83 ec 04             	sub    $0x4,%esp
c1009f01:	6a 00                	push   $0x0
c1009f03:	ff 75 0c             	pushl  0xc(%ebp)
c1009f06:	50                   	push   %eax
c1009f07:	e8 d7 e9 ff ff       	call   c10088e3 <bitmap_sync>
c1009f0c:	83 c4 10             	add    $0x10,%esp
c1009f0f:	83 ec 08             	sub    $0x8,%esp
c1009f12:	6a 02                	push   $0x2
c1009f14:	68 00 04 00 00       	push   $0x400
c1009f19:	e8 96 8b ff ff       	call   c1002ab4 <vmm_malloc>
c1009f1e:	83 c4 10             	add    $0x10,%esp
c1009f21:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009f24:	83 ec 04             	sub    $0x4,%esp
c1009f27:	ff 75 e0             	pushl  -0x20(%ebp)
c1009f2a:	ff 75 0c             	pushl  0xc(%ebp)
c1009f2d:	ff 75 08             	pushl  0x8(%ebp)
c1009f30:	e8 6c fc ff ff       	call   c1009ba1 <inode_delete>
c1009f35:	83 c4 10             	add    $0x10,%esp
c1009f38:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009f3b:	83 ec 08             	sub    $0x8,%esp
c1009f3e:	68 00 04 00 00       	push   $0x400
c1009f43:	50                   	push   %eax
c1009f44:	e8 90 8c ff ff       	call   c1002bd9 <vmm_free>
c1009f49:	83 c4 10             	add    $0x10,%esp
c1009f4c:	83 ec 0c             	sub    $0xc,%esp
c1009f4f:	ff 75 f0             	pushl  -0x10(%ebp)
c1009f52:	e8 30 fc ff ff       	call   c1009b87 <inode_close>
c1009f57:	83 c4 10             	add    $0x10,%esp
c1009f5a:	90                   	nop
c1009f5b:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1009f5e:	5b                   	pop    %ebx
c1009f5f:	5f                   	pop    %edi
c1009f60:	5d                   	pop    %ebp
c1009f61:	c3                   	ret    

c1009f62 <inode_init>:
c1009f62:	55                   	push   %ebp
c1009f63:	89 e5                	mov    %esp,%ebp
c1009f65:	83 ec 10             	sub    $0x10,%esp
c1009f68:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009f6b:	8b 55 08             	mov    0x8(%ebp),%edx
c1009f6e:	89 10                	mov    %edx,(%eax)
c1009f70:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009f73:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1009f7a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009f7d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1009f84:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009f87:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1009f8b:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1009f92:	eb 14                	jmp    c1009fa8 <inode_init+0x46>
c1009f94:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009f97:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009f9a:	83 c2 04             	add    $0x4,%edx
c1009f9d:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1009fa4:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1009fa8:	83 7d fc 0c          	cmpl   $0xc,-0x4(%ebp)
c1009fac:	7e e6                	jle    c1009f94 <inode_init+0x32>
c1009fae:	90                   	nop
c1009faf:	90                   	nop
c1009fb0:	c9                   	leave  
c1009fb1:	c3                   	ret    
