
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
  100246:	b8 c0 43 a1 c1       	mov    $0xc1a143c0,%eax
  10024b:	3d 00 00 b0 01       	cmp    $0x1b00000,%eax
  100250:	77 16                	ja     100268 <init+0x268>
  100252:	68 cc b0 00 c1       	push   $0xc100b0cc
  100257:	68 38 b1 00 c1       	push   $0xc100b138
  10025c:	6a 51                	push   $0x51
  10025e:	68 04 b1 00 c1       	push   $0xc100b104
  100263:	e8 03 01 f0 c0       	call   c100036b <__PANIC>
  100268:	e8 fd 1c f0 c0       	call   c1001f6a <main>
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
40000043:	68 34 16 00 40       	push   $0x40001634
40000048:	e8 31 03 00 00       	call   4000037e <printf>
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
400000b2:	e8 5a 07 00 00       	call   40000811 <my_shell>
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

4000031b <mmap>:
4000031b:	55                   	push   %ebp
4000031c:	89 e5                	mov    %esp,%ebp
4000031e:	ff 75 10             	pushl  0x10(%ebp)
40000321:	ff 75 0c             	pushl  0xc(%ebp)
40000324:	ff 75 08             	pushl  0x8(%ebp)
40000327:	6a 39                	push   $0x39
40000329:	e8 8c fd ff ff       	call   400000ba <user_syscall>
4000032e:	83 c4 10             	add    $0x10,%esp
40000331:	c9                   	leave  
40000332:	c3                   	ret    

40000333 <exec>:
40000333:	55                   	push   %ebp
40000334:	89 e5                	mov    %esp,%ebp
40000336:	ff 75 0c             	pushl  0xc(%ebp)
40000339:	ff 75 08             	pushl  0x8(%ebp)
4000033c:	6a 04                	push   $0x4
4000033e:	e8 77 fd ff ff       	call   400000ba <user_syscall>
40000343:	83 c4 0c             	add    $0xc,%esp
40000346:	c9                   	leave  
40000347:	c3                   	ret    

40000348 <wait>:
40000348:	55                   	push   %ebp
40000349:	89 e5                	mov    %esp,%ebp
4000034b:	ff 75 08             	pushl  0x8(%ebp)
4000034e:	6a 03                	push   $0x3
40000350:	e8 65 fd ff ff       	call   400000ba <user_syscall>
40000355:	83 c4 08             	add    $0x8,%esp
40000358:	c9                   	leave  
40000359:	c3                   	ret    

4000035a <exit>:
4000035a:	55                   	push   %ebp
4000035b:	89 e5                	mov    %esp,%ebp
4000035d:	ff 75 08             	pushl  0x8(%ebp)
40000360:	6a 01                	push   $0x1
40000362:	e8 53 fd ff ff       	call   400000ba <user_syscall>
40000367:	83 c4 08             	add    $0x8,%esp
4000036a:	c9                   	leave  
4000036b:	c3                   	ret    

4000036c <pipe>:
4000036c:	55                   	push   %ebp
4000036d:	89 e5                	mov    %esp,%ebp
4000036f:	ff 75 08             	pushl  0x8(%ebp)
40000372:	6a 3a                	push   $0x3a
40000374:	e8 41 fd ff ff       	call   400000ba <user_syscall>
40000379:	83 c4 08             	add    $0x8,%esp
4000037c:	c9                   	leave  
4000037d:	c3                   	ret    

4000037e <printf>:
4000037e:	55                   	push   %ebp
4000037f:	89 e5                	mov    %esp,%ebp
40000381:	83 ec 38             	sub    $0x38,%esp
40000384:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
40000388:	8d 45 0c             	lea    0xc(%ebp),%eax
4000038b:	89 45 f4             	mov    %eax,-0xc(%ebp)
4000038e:	e9 da 02 00 00       	jmp    4000066d <printf+0x2ef>
40000393:	8b 45 08             	mov    0x8(%ebp),%eax
40000396:	0f b6 00             	movzbl (%eax),%eax
40000399:	3c 25                	cmp    $0x25,%al
4000039b:	0f 85 aa 02 00 00    	jne    4000064b <printf+0x2cd>
400003a1:	90                   	nop
400003a2:	8b 45 08             	mov    0x8(%ebp),%eax
400003a5:	83 c0 01             	add    $0x1,%eax
400003a8:	89 45 08             	mov    %eax,0x8(%ebp)
400003ab:	8b 45 08             	mov    0x8(%ebp),%eax
400003ae:	0f b6 00             	movzbl (%eax),%eax
400003b1:	0f be c0             	movsbl %al,%eax
400003b4:	83 e8 30             	sub    $0x30,%eax
400003b7:	83 f8 48             	cmp    $0x48,%eax
400003ba:	0f 87 6f 02 00 00    	ja     4000062f <printf+0x2b1>
400003c0:	8b 04 85 64 16 00 40 	mov    0x40001664(,%eax,4),%eax
400003c7:	ff e0                	jmp    *%eax
400003c9:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400003cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
400003d0:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
400003d4:	88 45 d7             	mov    %al,-0x29(%ebp)
400003d7:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
400003db:	83 ec 0c             	sub    $0xc,%esp
400003de:	50                   	push   %eax
400003df:	e8 41 fd ff ff       	call   40000125 <user_print_char>
400003e4:	83 c4 10             	add    $0x10,%esp
400003e7:	e9 54 02 00 00       	jmp    40000640 <printf+0x2c2>
400003ec:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400003f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
400003f3:	8b 40 fc             	mov    -0x4(%eax),%eax
400003f6:	89 45 dc             	mov    %eax,-0x24(%ebp)
400003f9:	83 ec 0c             	sub    $0xc,%esp
400003fc:	ff 75 dc             	pushl  -0x24(%ebp)
400003ff:	e8 3f fd ff ff       	call   40000143 <user_print_string>
40000404:	83 c4 10             	add    $0x10,%esp
40000407:	e9 34 02 00 00       	jmp    40000640 <printf+0x2c2>
4000040c:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000410:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000413:	8b 40 fc             	mov    -0x4(%eax),%eax
40000416:	89 45 d8             	mov    %eax,-0x28(%ebp)
40000419:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
4000041d:	74 19                	je     40000438 <printf+0xba>
4000041f:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
40000423:	6a 01                	push   $0x1
40000425:	50                   	push   %eax
40000426:	6a 0a                	push   $0xa
40000428:	ff 75 d8             	pushl  -0x28(%ebp)
4000042b:	e8 26 fd ff ff       	call   40000156 <user_print_num>
40000430:	83 c4 10             	add    $0x10,%esp
40000433:	e9 08 02 00 00       	jmp    40000640 <printf+0x2c2>
40000438:	6a 00                	push   $0x0
4000043a:	6a 14                	push   $0x14
4000043c:	6a 0a                	push   $0xa
4000043e:	ff 75 d8             	pushl  -0x28(%ebp)
40000441:	e8 10 fd ff ff       	call   40000156 <user_print_num>
40000446:	83 c4 10             	add    $0x10,%esp
40000449:	e9 f2 01 00 00       	jmp    40000640 <printf+0x2c2>
4000044e:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000452:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000455:	8b 40 fc             	mov    -0x4(%eax),%eax
40000458:	89 45 d0             	mov    %eax,-0x30(%ebp)
4000045b:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
4000045f:	74 19                	je     4000047a <printf+0xfc>
40000461:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
40000465:	6a 01                	push   $0x1
40000467:	50                   	push   %eax
40000468:	6a 10                	push   $0x10
4000046a:	ff 75 d0             	pushl  -0x30(%ebp)
4000046d:	e8 e4 fc ff ff       	call   40000156 <user_print_num>
40000472:	83 c4 10             	add    $0x10,%esp
40000475:	e9 c6 01 00 00       	jmp    40000640 <printf+0x2c2>
4000047a:	6a 00                	push   $0x0
4000047c:	6a 14                	push   $0x14
4000047e:	6a 10                	push   $0x10
40000480:	ff 75 d0             	pushl  -0x30(%ebp)
40000483:	e8 ce fc ff ff       	call   40000156 <user_print_num>
40000488:	83 c4 10             	add    $0x10,%esp
4000048b:	e9 b0 01 00 00       	jmp    40000640 <printf+0x2c2>
40000490:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
40000494:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000497:	8b 50 fc             	mov    -0x4(%eax),%edx
4000049a:	8b 40 f8             	mov    -0x8(%eax),%eax
4000049d:	89 45 c8             	mov    %eax,-0x38(%ebp)
400004a0:	89 55 cc             	mov    %edx,-0x34(%ebp)
400004a3:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400004a7:	74 1a                	je     400004c3 <printf+0x145>
400004a9:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
400004ad:	8b 45 c8             	mov    -0x38(%ebp),%eax
400004b0:	6a 01                	push   $0x1
400004b2:	52                   	push   %edx
400004b3:	6a 10                	push   $0x10
400004b5:	50                   	push   %eax
400004b6:	e8 9b fc ff ff       	call   40000156 <user_print_num>
400004bb:	83 c4 10             	add    $0x10,%esp
400004be:	e9 7d 01 00 00       	jmp    40000640 <printf+0x2c2>
400004c3:	8b 45 c8             	mov    -0x38(%ebp),%eax
400004c6:	6a 00                	push   $0x0
400004c8:	6a 14                	push   $0x14
400004ca:	6a 10                	push   $0x10
400004cc:	50                   	push   %eax
400004cd:	e8 84 fc ff ff       	call   40000156 <user_print_num>
400004d2:	83 c4 10             	add    $0x10,%esp
400004d5:	e9 66 01 00 00       	jmp    40000640 <printf+0x2c2>
400004da:	8b 45 08             	mov    0x8(%ebp),%eax
400004dd:	83 c0 01             	add    $0x1,%eax
400004e0:	89 45 08             	mov    %eax,0x8(%ebp)
400004e3:	8b 45 08             	mov    0x8(%ebp),%eax
400004e6:	0f b6 00             	movzbl (%eax),%eax
400004e9:	0f be c0             	movsbl %al,%eax
400004ec:	83 f8 78             	cmp    $0x78,%eax
400004ef:	0f 84 80 00 00 00    	je     40000575 <printf+0x1f7>
400004f5:	83 f8 78             	cmp    $0x78,%eax
400004f8:	0f 8f f9 00 00 00    	jg     400005f7 <printf+0x279>
400004fe:	83 f8 6c             	cmp    $0x6c,%eax
40000501:	0f 84 ac 00 00 00    	je     400005b3 <printf+0x235>
40000507:	83 f8 6c             	cmp    $0x6c,%eax
4000050a:	0f 8f e7 00 00 00    	jg     400005f7 <printf+0x279>
40000510:	83 f8 64             	cmp    $0x64,%eax
40000513:	74 1c                	je     40000531 <printf+0x1b3>
40000515:	83 f8 64             	cmp    $0x64,%eax
40000518:	0f 8f d9 00 00 00    	jg     400005f7 <printf+0x279>
4000051e:	83 f8 4c             	cmp    $0x4c,%eax
40000521:	0f 84 8c 00 00 00    	je     400005b3 <printf+0x235>
40000527:	83 f8 58             	cmp    $0x58,%eax
4000052a:	74 49                	je     40000575 <printf+0x1f7>
4000052c:	e9 c6 00 00 00       	jmp    400005f7 <printf+0x279>
40000531:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000535:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000538:	8b 40 fc             	mov    -0x4(%eax),%eax
4000053b:	89 45 ec             	mov    %eax,-0x14(%ebp)
4000053e:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000542:	74 1a                	je     4000055e <printf+0x1e0>
40000544:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
40000548:	8b 45 ec             	mov    -0x14(%ebp),%eax
4000054b:	6a 01                	push   $0x1
4000054d:	52                   	push   %edx
4000054e:	6a 0a                	push   $0xa
40000550:	50                   	push   %eax
40000551:	e8 00 fc ff ff       	call   40000156 <user_print_num>
40000556:	83 c4 10             	add    $0x10,%esp
40000559:	e9 9a 00 00 00       	jmp    400005f8 <printf+0x27a>
4000055e:	8b 45 ec             	mov    -0x14(%ebp),%eax
40000561:	6a 00                	push   $0x0
40000563:	6a 14                	push   $0x14
40000565:	6a 0a                	push   $0xa
40000567:	50                   	push   %eax
40000568:	e8 e9 fb ff ff       	call   40000156 <user_print_num>
4000056d:	83 c4 10             	add    $0x10,%esp
40000570:	e9 83 00 00 00       	jmp    400005f8 <printf+0x27a>
40000575:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000579:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000057c:	8b 40 fc             	mov    -0x4(%eax),%eax
4000057f:	89 45 e8             	mov    %eax,-0x18(%ebp)
40000582:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000586:	74 17                	je     4000059f <printf+0x221>
40000588:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
4000058c:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000058f:	6a 01                	push   $0x1
40000591:	52                   	push   %edx
40000592:	6a 10                	push   $0x10
40000594:	50                   	push   %eax
40000595:	e8 bc fb ff ff       	call   40000156 <user_print_num>
4000059a:	83 c4 10             	add    $0x10,%esp
4000059d:	eb 59                	jmp    400005f8 <printf+0x27a>
4000059f:	8b 45 e8             	mov    -0x18(%ebp),%eax
400005a2:	6a 00                	push   $0x0
400005a4:	6a 14                	push   $0x14
400005a6:	6a 10                	push   $0x10
400005a8:	50                   	push   %eax
400005a9:	e8 a8 fb ff ff       	call   40000156 <user_print_num>
400005ae:	83 c4 10             	add    $0x10,%esp
400005b1:	eb 45                	jmp    400005f8 <printf+0x27a>
400005b3:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
400005b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
400005ba:	8b 50 fc             	mov    -0x4(%eax),%edx
400005bd:	8b 40 f8             	mov    -0x8(%eax),%eax
400005c0:	89 45 e0             	mov    %eax,-0x20(%ebp)
400005c3:	89 55 e4             	mov    %edx,-0x1c(%ebp)
400005c6:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400005ca:	74 17                	je     400005e3 <printf+0x265>
400005cc:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
400005d0:	8b 45 e0             	mov    -0x20(%ebp),%eax
400005d3:	6a 01                	push   $0x1
400005d5:	52                   	push   %edx
400005d6:	6a 10                	push   $0x10
400005d8:	50                   	push   %eax
400005d9:	e8 78 fb ff ff       	call   40000156 <user_print_num>
400005de:	83 c4 10             	add    $0x10,%esp
400005e1:	eb 15                	jmp    400005f8 <printf+0x27a>
400005e3:	8b 45 e0             	mov    -0x20(%ebp),%eax
400005e6:	6a 00                	push   $0x0
400005e8:	6a 14                	push   $0x14
400005ea:	6a 10                	push   $0x10
400005ec:	50                   	push   %eax
400005ed:	e8 64 fb ff ff       	call   40000156 <user_print_num>
400005f2:	83 c4 10             	add    $0x10,%esp
400005f5:	eb 01                	jmp    400005f8 <printf+0x27a>
400005f7:	90                   	nop
400005f8:	eb 46                	jmp    40000640 <printf+0x2c2>
400005fa:	8b 45 08             	mov    0x8(%ebp),%eax
400005fd:	0f b6 00             	movzbl (%eax),%eax
40000600:	0f be c0             	movsbl %al,%eax
40000603:	83 e8 30             	sub    $0x30,%eax
40000606:	89 c2                	mov    %eax,%edx
40000608:	89 d0                	mov    %edx,%eax
4000060a:	c1 e0 02             	shl    $0x2,%eax
4000060d:	01 d0                	add    %edx,%eax
4000060f:	01 c0                	add    %eax,%eax
40000611:	89 c2                	mov    %eax,%edx
40000613:	8b 45 08             	mov    0x8(%ebp),%eax
40000616:	83 c0 01             	add    $0x1,%eax
40000619:	89 45 08             	mov    %eax,0x8(%ebp)
4000061c:	8b 45 08             	mov    0x8(%ebp),%eax
4000061f:	0f b6 00             	movzbl (%eax),%eax
40000622:	01 d0                	add    %edx,%eax
40000624:	83 e8 30             	sub    $0x30,%eax
40000627:	88 45 f3             	mov    %al,-0xd(%ebp)
4000062a:	e9 73 fd ff ff       	jmp    400003a2 <printf+0x24>
4000062f:	83 ec 0c             	sub    $0xc,%esp
40000632:	68 44 16 00 40       	push   $0x40001644
40000637:	e8 07 fb ff ff       	call   40000143 <user_print_string>
4000063c:	83 c4 10             	add    $0x10,%esp
4000063f:	90                   	nop
40000640:	8b 45 08             	mov    0x8(%ebp),%eax
40000643:	83 c0 01             	add    $0x1,%eax
40000646:	89 45 08             	mov    %eax,0x8(%ebp)
40000649:	eb 1e                	jmp    40000669 <printf+0x2eb>
4000064b:	8b 45 08             	mov    0x8(%ebp),%eax
4000064e:	0f b6 00             	movzbl (%eax),%eax
40000651:	0f be c0             	movsbl %al,%eax
40000654:	83 ec 0c             	sub    $0xc,%esp
40000657:	50                   	push   %eax
40000658:	e8 c8 fa ff ff       	call   40000125 <user_print_char>
4000065d:	83 c4 10             	add    $0x10,%esp
40000660:	8b 45 08             	mov    0x8(%ebp),%eax
40000663:	83 c0 01             	add    $0x1,%eax
40000666:	89 45 08             	mov    %eax,0x8(%ebp)
40000669:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
4000066d:	8b 45 08             	mov    0x8(%ebp),%eax
40000670:	0f b6 00             	movzbl (%eax),%eax
40000673:	84 c0                	test   %al,%al
40000675:	0f 85 18 fd ff ff    	jne    40000393 <printf+0x15>
4000067b:	90                   	nop
4000067c:	90                   	nop
4000067d:	c9                   	leave  
4000067e:	c3                   	ret    

4000067f <print_prompt>:
4000067f:	55                   	push   %ebp
40000680:	89 e5                	mov    %esp,%ebp
40000682:	83 ec 08             	sub    $0x8,%esp
40000685:	83 ec 08             	sub    $0x8,%esp
40000688:	68 40 1b 00 40       	push   $0x40001b40
4000068d:	68 88 17 00 40       	push   $0x40001788
40000692:	e8 e7 fc ff ff       	call   4000037e <printf>
40000697:	83 c4 10             	add    $0x10,%esp
4000069a:	90                   	nop
4000069b:	c9                   	leave  
4000069c:	c3                   	ret    

4000069d <user_readline>:
4000069d:	55                   	push   %ebp
4000069e:	89 e5                	mov    %esp,%ebp
400006a0:	83 ec 18             	sub    $0x18,%esp
400006a3:	8b 45 08             	mov    0x8(%ebp),%eax
400006a6:	89 45 f4             	mov    %eax,-0xc(%ebp)
400006a9:	eb 6a                	jmp    40000715 <user_readline+0x78>
400006ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006ae:	0f b6 00             	movzbl (%eax),%eax
400006b1:	0f be c0             	movsbl %al,%eax
400006b4:	83 f8 0d             	cmp    $0xd,%eax
400006b7:	74 0f                	je     400006c8 <user_readline+0x2b>
400006b9:	83 f8 0d             	cmp    $0xd,%eax
400006bc:	7f 34                	jg     400006f2 <user_readline+0x55>
400006be:	83 f8 08             	cmp    $0x8,%eax
400006c1:	74 1a                	je     400006dd <user_readline+0x40>
400006c3:	83 f8 0a             	cmp    $0xa,%eax
400006c6:	75 2a                	jne    400006f2 <user_readline+0x55>
400006c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006cb:	c6 00 00             	movb   $0x0,(%eax)
400006ce:	83 ec 0c             	sub    $0xc,%esp
400006d1:	6a 0a                	push   $0xa
400006d3:	e8 4d fa ff ff       	call   40000125 <user_print_char>
400006d8:	83 c4 10             	add    $0x10,%esp
400006db:	eb 6e                	jmp    4000074b <user_readline+0xae>
400006dd:	8b 45 08             	mov    0x8(%ebp),%eax
400006e0:	0f b6 00             	movzbl (%eax),%eax
400006e3:	3c 08                	cmp    $0x8,%al
400006e5:	74 2e                	je     40000715 <user_readline+0x78>
400006e7:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
400006eb:	e8 95 fa ff ff       	call   40000185 <user_backtrace>
400006f0:	eb 23                	jmp    40000715 <user_readline+0x78>
400006f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006f5:	0f b6 00             	movzbl (%eax),%eax
400006f8:	84 c0                	test   %al,%al
400006fa:	74 19                	je     40000715 <user_readline+0x78>
400006fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006ff:	0f b6 00             	movzbl (%eax),%eax
40000702:	0f be c0             	movsbl %al,%eax
40000705:	83 ec 0c             	sub    $0xc,%esp
40000708:	50                   	push   %eax
40000709:	e8 17 fa ff ff       	call   40000125 <user_print_char>
4000070e:	83 c4 10             	add    $0x10,%esp
40000711:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
40000715:	83 ec 04             	sub    $0x4,%esp
40000718:	6a 01                	push   $0x1
4000071a:	ff 75 f4             	pushl  -0xc(%ebp)
4000071d:	6a 00                	push   $0x0
4000071f:	e8 71 fa ff ff       	call   40000195 <read>
40000724:	83 c4 10             	add    $0x10,%esp
40000727:	83 f8 ff             	cmp    $0xffffffff,%eax
4000072a:	74 0f                	je     4000073b <user_readline+0x9e>
4000072c:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000072f:	2b 45 08             	sub    0x8(%ebp),%eax
40000732:	39 45 0c             	cmp    %eax,0xc(%ebp)
40000735:	0f 8f 70 ff ff ff    	jg     400006ab <user_readline+0xe>
4000073b:	83 ec 0c             	sub    $0xc,%esp
4000073e:	68 a0 17 00 40       	push   $0x400017a0
40000743:	e8 36 fc ff ff       	call   4000037e <printf>
40000748:	83 c4 10             	add    $0x10,%esp
4000074b:	c9                   	leave  
4000074c:	c3                   	ret    

4000074d <cmd_parse>:
4000074d:	55                   	push   %ebp
4000074e:	89 e5                	mov    %esp,%ebp
40000750:	83 ec 14             	sub    $0x14,%esp
40000753:	8b 45 10             	mov    0x10(%ebp),%eax
40000756:	88 45 ec             	mov    %al,-0x14(%ebp)
40000759:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000760:	eb 19                	jmp    4000077b <cmd_parse+0x2e>
40000762:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000765:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
4000076c:	8b 45 0c             	mov    0xc(%ebp),%eax
4000076f:	01 d0                	add    %edx,%eax
40000771:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
40000777:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
4000077b:	83 7d fc 0f          	cmpl   $0xf,-0x4(%ebp)
4000077f:	7e e1                	jle    40000762 <cmd_parse+0x15>
40000781:	8b 45 08             	mov    0x8(%ebp),%eax
40000784:	89 45 f8             	mov    %eax,-0x8(%ebp)
40000787:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000078e:	eb 6f                	jmp    400007ff <cmd_parse+0xb2>
40000790:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
40000794:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000797:	0f b6 00             	movzbl (%eax),%eax
4000079a:	38 45 ec             	cmp    %al,-0x14(%ebp)
4000079d:	74 f1                	je     40000790 <cmd_parse+0x43>
4000079f:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007a2:	0f b6 00             	movzbl (%eax),%eax
400007a5:	84 c0                	test   %al,%al
400007a7:	74 62                	je     4000080b <cmd_parse+0xbe>
400007a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
400007ac:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
400007b3:	8b 45 0c             	mov    0xc(%ebp),%eax
400007b6:	01 c2                	add    %eax,%edx
400007b8:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007bb:	89 02                	mov    %eax,(%edx)
400007bd:	eb 04                	jmp    400007c3 <cmd_parse+0x76>
400007bf:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
400007c3:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007c6:	0f b6 00             	movzbl (%eax),%eax
400007c9:	84 c0                	test   %al,%al
400007cb:	74 0b                	je     400007d8 <cmd_parse+0x8b>
400007cd:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007d0:	0f b6 00             	movzbl (%eax),%eax
400007d3:	38 45 ec             	cmp    %al,-0x14(%ebp)
400007d6:	75 e7                	jne    400007bf <cmd_parse+0x72>
400007d8:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007db:	0f b6 00             	movzbl (%eax),%eax
400007de:	84 c0                	test   %al,%al
400007e0:	74 0c                	je     400007ee <cmd_parse+0xa1>
400007e2:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007e5:	8d 50 01             	lea    0x1(%eax),%edx
400007e8:	89 55 f8             	mov    %edx,-0x8(%ebp)
400007eb:	c6 00 00             	movb   $0x0,(%eax)
400007ee:	83 7d f4 10          	cmpl   $0x10,-0xc(%ebp)
400007f2:	7e 07                	jle    400007fb <cmd_parse+0xae>
400007f4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
400007f9:	eb 14                	jmp    4000080f <cmd_parse+0xc2>
400007fb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
400007ff:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000802:	0f b6 00             	movzbl (%eax),%eax
40000805:	84 c0                	test   %al,%al
40000807:	75 8b                	jne    40000794 <cmd_parse+0x47>
40000809:	eb 01                	jmp    4000080c <cmd_parse+0xbf>
4000080b:	90                   	nop
4000080c:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000080f:	c9                   	leave  
40000810:	c3                   	ret    

40000811 <my_shell>:
40000811:	55                   	push   %ebp
40000812:	89 e5                	mov    %esp,%ebp
40000814:	83 ec 28             	sub    $0x28,%esp
40000817:	c6 05 40 1b 00 40 2f 	movb   $0x2f,0x40001b40
4000081e:	c6 05 41 1b 00 40 00 	movb   $0x0,0x40001b41
40000825:	e8 55 fe ff ff       	call   4000067f <print_prompt>
4000082a:	83 ec 04             	sub    $0x4,%esp
4000082d:	68 00 02 00 00       	push   $0x200
40000832:	6a 00                	push   $0x0
40000834:	68 40 1d 00 40       	push   $0x40001d40
40000839:	e8 5b 03 00 00       	call   40000b99 <user_memset>
4000083e:	83 c4 10             	add    $0x10,%esp
40000841:	83 ec 04             	sub    $0x4,%esp
40000844:	68 80 00 00 00       	push   $0x80
40000849:	6a 00                	push   $0x0
4000084b:	68 40 1f 00 40       	push   $0x40001f40
40000850:	e8 44 03 00 00       	call   40000b99 <user_memset>
40000855:	83 c4 10             	add    $0x10,%esp
40000858:	83 ec 08             	sub    $0x8,%esp
4000085b:	68 80 00 00 00       	push   $0x80
40000860:	68 40 1f 00 40       	push   $0x40001f40
40000865:	e8 33 fe ff ff       	call   4000069d <user_readline>
4000086a:	83 c4 10             	add    $0x10,%esp
4000086d:	0f b6 05 40 1f 00 40 	movzbl 0x40001f40,%eax
40000874:	84 c0                	test   %al,%al
40000876:	0f 84 eb 02 00 00    	je     40000b67 <my_shell+0x356>
4000087c:	c7 05 30 16 00 40 ff 	movl   $0xffffffff,0x40001630
40000883:	ff ff ff 
40000886:	83 ec 04             	sub    $0x4,%esp
40000889:	6a 20                	push   $0x20
4000088b:	68 c0 1f 00 40       	push   $0x40001fc0
40000890:	68 40 1f 00 40       	push   $0x40001f40
40000895:	e8 b3 fe ff ff       	call   4000074d <cmd_parse>
4000089a:	83 c4 10             	add    $0x10,%esp
4000089d:	a3 30 16 00 40       	mov    %eax,0x40001630
400008a2:	a1 30 16 00 40       	mov    0x40001630,%eax
400008a7:	83 f8 ff             	cmp    $0xffffffff,%eax
400008aa:	75 17                	jne    400008c3 <my_shell+0xb2>
400008ac:	83 ec 08             	sub    $0x8,%esp
400008af:	6a 10                	push   $0x10
400008b1:	68 e8 17 00 40       	push   $0x400017e8
400008b6:	e8 c3 fa ff ff       	call   4000037e <printf>
400008bb:	83 c4 10             	add    $0x10,%esp
400008be:	e9 a5 02 00 00       	jmp    40000b68 <my_shell+0x357>
400008c3:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
400008c8:	83 ec 08             	sub    $0x8,%esp
400008cb:	50                   	push   %eax
400008cc:	68 04 18 00 40       	push   $0x40001804
400008d1:	e8 66 03 00 00       	call   40000c3c <user_strcmp>
400008d6:	83 c4 10             	add    $0x10,%esp
400008d9:	85 c0                	test   %eax,%eax
400008db:	75 1b                	jne    400008f8 <my_shell+0xe7>
400008dd:	a1 30 16 00 40       	mov    0x40001630,%eax
400008e2:	83 ec 08             	sub    $0x8,%esp
400008e5:	68 c0 1f 00 40       	push   $0x40001fc0
400008ea:	50                   	push   %eax
400008eb:	e8 9e 07 00 00       	call   4000108e <buildin_ls>
400008f0:	83 c4 10             	add    $0x10,%esp
400008f3:	e9 49 02 00 00       	jmp    40000b41 <my_shell+0x330>
400008f8:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
400008fd:	83 ec 08             	sub    $0x8,%esp
40000900:	50                   	push   %eax
40000901:	68 07 18 00 40       	push   $0x40001807
40000906:	e8 31 03 00 00       	call   40000c3c <user_strcmp>
4000090b:	83 c4 10             	add    $0x10,%esp
4000090e:	85 c0                	test   %eax,%eax
40000910:	75 4f                	jne    40000961 <my_shell+0x150>
40000912:	a1 30 16 00 40       	mov    0x40001630,%eax
40000917:	83 ec 08             	sub    $0x8,%esp
4000091a:	68 c0 1f 00 40       	push   $0x40001fc0
4000091f:	50                   	push   %eax
40000920:	e8 df 06 00 00       	call   40001004 <buildin_cd>
40000925:	83 c4 10             	add    $0x10,%esp
40000928:	85 c0                	test   %eax,%eax
4000092a:	0f 84 11 02 00 00    	je     40000b41 <my_shell+0x330>
40000930:	83 ec 04             	sub    $0x4,%esp
40000933:	68 00 02 00 00       	push   $0x200
40000938:	6a 00                	push   $0x0
4000093a:	68 40 1b 00 40       	push   $0x40001b40
4000093f:	e8 55 02 00 00       	call   40000b99 <user_memset>
40000944:	83 c4 10             	add    $0x10,%esp
40000947:	83 ec 08             	sub    $0x8,%esp
4000094a:	68 40 1d 00 40       	push   $0x40001d40
4000094f:	68 40 1b 00 40       	push   $0x40001b40
40000954:	e8 b0 03 00 00       	call   40000d09 <user_strcpy>
40000959:	83 c4 10             	add    $0x10,%esp
4000095c:	e9 e0 01 00 00       	jmp    40000b41 <my_shell+0x330>
40000961:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
40000966:	83 ec 08             	sub    $0x8,%esp
40000969:	50                   	push   %eax
4000096a:	68 0a 18 00 40       	push   $0x4000180a
4000096f:	e8 c8 02 00 00       	call   40000c3c <user_strcmp>
40000974:	83 c4 10             	add    $0x10,%esp
40000977:	85 c0                	test   %eax,%eax
40000979:	75 1b                	jne    40000996 <my_shell+0x185>
4000097b:	a1 30 16 00 40       	mov    0x40001630,%eax
40000980:	83 ec 08             	sub    $0x8,%esp
40000983:	68 c0 1f 00 40       	push   $0x40001fc0
40000988:	50                   	push   %eax
40000989:	e8 c5 0a 00 00       	call   40001453 <buildin_ps>
4000098e:	83 c4 10             	add    $0x10,%esp
40000991:	e9 ab 01 00 00       	jmp    40000b41 <my_shell+0x330>
40000996:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
4000099b:	83 ec 08             	sub    $0x8,%esp
4000099e:	50                   	push   %eax
4000099f:	68 0d 18 00 40       	push   $0x4000180d
400009a4:	e8 93 02 00 00       	call   40000c3c <user_strcmp>
400009a9:	83 c4 10             	add    $0x10,%esp
400009ac:	85 c0                	test   %eax,%eax
400009ae:	75 1b                	jne    400009cb <my_shell+0x1ba>
400009b0:	a1 30 16 00 40       	mov    0x40001630,%eax
400009b5:	83 ec 08             	sub    $0x8,%esp
400009b8:	68 c0 1f 00 40       	push   $0x40001fc0
400009bd:	50                   	push   %eax
400009be:	e8 e1 05 00 00       	call   40000fa4 <buildin_pwd>
400009c3:	83 c4 10             	add    $0x10,%esp
400009c6:	e9 76 01 00 00       	jmp    40000b41 <my_shell+0x330>
400009cb:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
400009d0:	83 ec 08             	sub    $0x8,%esp
400009d3:	50                   	push   %eax
400009d4:	68 11 18 00 40       	push   $0x40001811
400009d9:	e8 5e 02 00 00       	call   40000c3c <user_strcmp>
400009de:	83 c4 10             	add    $0x10,%esp
400009e1:	85 c0                	test   %eax,%eax
400009e3:	75 1b                	jne    40000a00 <my_shell+0x1ef>
400009e5:	a1 30 16 00 40       	mov    0x40001630,%eax
400009ea:	83 ec 08             	sub    $0x8,%esp
400009ed:	68 c0 1f 00 40       	push   $0x40001fc0
400009f2:	50                   	push   %eax
400009f3:	e8 80 0a 00 00       	call   40001478 <buildin_mkdir>
400009f8:	83 c4 10             	add    $0x10,%esp
400009fb:	e9 41 01 00 00       	jmp    40000b41 <my_shell+0x330>
40000a00:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
40000a05:	83 ec 08             	sub    $0x8,%esp
40000a08:	50                   	push   %eax
40000a09:	68 17 18 00 40       	push   $0x40001817
40000a0e:	e8 29 02 00 00       	call   40000c3c <user_strcmp>
40000a13:	83 c4 10             	add    $0x10,%esp
40000a16:	85 c0                	test   %eax,%eax
40000a18:	75 1b                	jne    40000a35 <my_shell+0x224>
40000a1a:	a1 30 16 00 40       	mov    0x40001630,%eax
40000a1f:	83 ec 08             	sub    $0x8,%esp
40000a22:	68 c0 1f 00 40       	push   $0x40001fc0
40000a27:	50                   	push   %eax
40000a28:	e8 dd 0a 00 00       	call   4000150a <buildin_rmdir>
40000a2d:	83 c4 10             	add    $0x10,%esp
40000a30:	e9 0c 01 00 00       	jmp    40000b41 <my_shell+0x330>
40000a35:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
40000a3a:	83 ec 08             	sub    $0x8,%esp
40000a3d:	50                   	push   %eax
40000a3e:	68 1d 18 00 40       	push   $0x4000181d
40000a43:	e8 f4 01 00 00       	call   40000c3c <user_strcmp>
40000a48:	83 c4 10             	add    $0x10,%esp
40000a4b:	85 c0                	test   %eax,%eax
40000a4d:	75 1b                	jne    40000a6a <my_shell+0x259>
40000a4f:	a1 30 16 00 40       	mov    0x40001630,%eax
40000a54:	83 ec 08             	sub    $0x8,%esp
40000a57:	68 c0 1f 00 40       	push   $0x40001fc0
40000a5c:	50                   	push   %eax
40000a5d:	e8 3a 0b 00 00       	call   4000159c <buildin_rm>
40000a62:	83 c4 10             	add    $0x10,%esp
40000a65:	e9 d7 00 00 00       	jmp    40000b41 <my_shell+0x330>
40000a6a:	e8 9d f8 ff ff       	call   4000030c <fork>
40000a6f:	89 45 f0             	mov    %eax,-0x10(%ebp)
40000a72:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
40000a76:	74 44                	je     40000abc <my_shell+0x2ab>
40000a78:	83 ec 0c             	sub    $0xc,%esp
40000a7b:	8d 45 e8             	lea    -0x18(%ebp),%eax
40000a7e:	50                   	push   %eax
40000a7f:	e8 c4 f8 ff ff       	call   40000348 <wait>
40000a84:	83 c4 10             	add    $0x10,%esp
40000a87:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000a8a:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
40000a8e:	75 10                	jne    40000aa0 <my_shell+0x28f>
40000a90:	83 ec 0c             	sub    $0xc,%esp
40000a93:	68 20 18 00 40       	push   $0x40001820
40000a98:	e8 e1 f8 ff ff       	call   4000037e <printf>
40000a9d:	83 c4 10             	add    $0x10,%esp
40000aa0:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000aa3:	83 ec 04             	sub    $0x4,%esp
40000aa6:	50                   	push   %eax
40000aa7:	ff 75 ec             	pushl  -0x14(%ebp)
40000aaa:	68 28 18 00 40       	push   $0x40001828
40000aaf:	e8 ca f8 ff ff       	call   4000037e <printf>
40000ab4:	83 c4 10             	add    $0x10,%esp
40000ab7:	e9 85 00 00 00       	jmp    40000b41 <my_shell+0x330>
40000abc:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
40000ac1:	83 ec 08             	sub    $0x8,%esp
40000ac4:	68 40 1d 00 40       	push   $0x40001d40
40000ac9:	50                   	push   %eax
40000aca:	e8 12 04 00 00       	call   40000ee1 <make_clear_abs_path>
40000acf:	83 c4 10             	add    $0x10,%esp
40000ad2:	c7 05 c0 1f 00 40 40 	movl   $0x40001d40,0x40001fc0
40000ad9:	1d 00 40 
40000adc:	83 ec 04             	sub    $0x4,%esp
40000adf:	6a 0c                	push   $0xc
40000ae1:	6a 00                	push   $0x0
40000ae3:	8d 45 dc             	lea    -0x24(%ebp),%eax
40000ae6:	50                   	push   %eax
40000ae7:	e8 ad 00 00 00       	call   40000b99 <user_memset>
40000aec:	83 c4 10             	add    $0x10,%esp
40000aef:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
40000af4:	83 ec 08             	sub    $0x8,%esp
40000af7:	8d 55 dc             	lea    -0x24(%ebp),%edx
40000afa:	52                   	push   %edx
40000afb:	50                   	push   %eax
40000afc:	e8 89 f7 ff ff       	call   4000028a <stat>
40000b01:	83 c4 10             	add    $0x10,%esp
40000b04:	83 f8 ff             	cmp    $0xffffffff,%eax
40000b07:	75 18                	jne    40000b21 <my_shell+0x310>
40000b09:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
40000b0e:	83 ec 08             	sub    $0x8,%esp
40000b11:	50                   	push   %eax
40000b12:	68 4c 18 00 40       	push   $0x4000184c
40000b17:	e8 62 f8 ff ff       	call   4000037e <printf>
40000b1c:	83 c4 10             	add    $0x10,%esp
40000b1f:	eb 16                	jmp    40000b37 <my_shell+0x326>
40000b21:	a1 c0 1f 00 40       	mov    0x40001fc0,%eax
40000b26:	83 ec 08             	sub    $0x8,%esp
40000b29:	68 c0 1f 00 40       	push   $0x40001fc0
40000b2e:	50                   	push   %eax
40000b2f:	e8 ff f7 ff ff       	call   40000333 <exec>
40000b34:	83 c4 10             	add    $0x10,%esp
40000b37:	83 ec 0c             	sub    $0xc,%esp
40000b3a:	6a ff                	push   $0xffffffff
40000b3c:	e8 19 f8 ff ff       	call   4000035a <exit>
40000b41:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
40000b48:	eb 12                	jmp    40000b5c <my_shell+0x34b>
40000b4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000b4d:	c7 04 85 c0 1f 00 40 	movl   $0x0,0x40001fc0(,%eax,4)
40000b54:	00 00 00 00 
40000b58:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
40000b5c:	83 7d f4 0f          	cmpl   $0xf,-0xc(%ebp)
40000b60:	7e e8                	jle    40000b4a <my_shell+0x339>
40000b62:	e9 be fc ff ff       	jmp    40000825 <my_shell+0x14>
40000b67:	90                   	nop
40000b68:	e9 b8 fc ff ff       	jmp    40000825 <my_shell+0x14>

40000b6d <__memset>:
40000b6d:	55                   	push   %ebp
40000b6e:	89 e5                	mov    %esp,%ebp
40000b70:	57                   	push   %edi
40000b71:	83 ec 14             	sub    $0x14,%esp
40000b74:	8b 45 0c             	mov    0xc(%ebp),%eax
40000b77:	88 45 e8             	mov    %al,-0x18(%ebp)
40000b7a:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000b7d:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
40000b81:	8b 55 08             	mov    0x8(%ebp),%edx
40000b84:	89 d7                	mov    %edx,%edi
40000b86:	f3 aa                	rep stos %al,%es:(%edi)
40000b88:	89 fa                	mov    %edi,%edx
40000b8a:	89 4d f8             	mov    %ecx,-0x8(%ebp)
40000b8d:	89 55 f4             	mov    %edx,-0xc(%ebp)
40000b90:	8b 45 08             	mov    0x8(%ebp),%eax
40000b93:	83 c4 14             	add    $0x14,%esp
40000b96:	5f                   	pop    %edi
40000b97:	5d                   	pop    %ebp
40000b98:	c3                   	ret    

40000b99 <user_memset>:
40000b99:	55                   	push   %ebp
40000b9a:	89 e5                	mov    %esp,%ebp
40000b9c:	83 ec 04             	sub    $0x4,%esp
40000b9f:	8b 45 0c             	mov    0xc(%ebp),%eax
40000ba2:	88 45 fc             	mov    %al,-0x4(%ebp)
40000ba5:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
40000ba9:	ff 75 10             	pushl  0x10(%ebp)
40000bac:	50                   	push   %eax
40000bad:	ff 75 08             	pushl  0x8(%ebp)
40000bb0:	e8 b8 ff ff ff       	call   40000b6d <__memset>
40000bb5:	83 c4 0c             	add    $0xc,%esp
40000bb8:	c9                   	leave  
40000bb9:	c3                   	ret    

40000bba <user_strcat>:
40000bba:	55                   	push   %ebp
40000bbb:	89 e5                	mov    %esp,%ebp
40000bbd:	83 ec 10             	sub    $0x10,%esp
40000bc0:	8b 45 08             	mov    0x8(%ebp),%eax
40000bc3:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000bc6:	90                   	nop
40000bc7:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000bca:	8d 50 01             	lea    0x1(%eax),%edx
40000bcd:	89 55 fc             	mov    %edx,-0x4(%ebp)
40000bd0:	0f b6 00             	movzbl (%eax),%eax
40000bd3:	84 c0                	test   %al,%al
40000bd5:	75 f0                	jne    40000bc7 <user_strcat+0xd>
40000bd7:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
40000bdb:	90                   	nop
40000bdc:	8b 55 0c             	mov    0xc(%ebp),%edx
40000bdf:	8d 42 01             	lea    0x1(%edx),%eax
40000be2:	89 45 0c             	mov    %eax,0xc(%ebp)
40000be5:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000be8:	8d 48 01             	lea    0x1(%eax),%ecx
40000beb:	89 4d fc             	mov    %ecx,-0x4(%ebp)
40000bee:	0f b6 12             	movzbl (%edx),%edx
40000bf1:	88 10                	mov    %dl,(%eax)
40000bf3:	0f b6 00             	movzbl (%eax),%eax
40000bf6:	84 c0                	test   %al,%al
40000bf8:	75 e2                	jne    40000bdc <user_strcat+0x22>
40000bfa:	8b 45 08             	mov    0x8(%ebp),%eax
40000bfd:	c9                   	leave  
40000bfe:	c3                   	ret    

40000bff <__strcmp>:
40000bff:	55                   	push   %ebp
40000c00:	89 e5                	mov    %esp,%ebp
40000c02:	57                   	push   %edi
40000c03:	56                   	push   %esi
40000c04:	83 ec 10             	sub    $0x10,%esp
40000c07:	8b 55 08             	mov    0x8(%ebp),%edx
40000c0a:	8b 45 0c             	mov    0xc(%ebp),%eax
40000c0d:	89 d1                	mov    %edx,%ecx
40000c0f:	89 c2                	mov    %eax,%edx
40000c11:	89 ce                	mov    %ecx,%esi
40000c13:	89 d7                	mov    %edx,%edi
40000c15:	ac                   	lods   %ds:(%esi),%al
40000c16:	ae                   	scas   %es:(%edi),%al
40000c17:	75 08                	jne    40000c21 <__strcmp+0x22>
40000c19:	84 c0                	test   %al,%al
40000c1b:	75 f8                	jne    40000c15 <__strcmp+0x16>
40000c1d:	31 c0                	xor    %eax,%eax
40000c1f:	eb 04                	jmp    40000c25 <__strcmp+0x26>
40000c21:	19 c0                	sbb    %eax,%eax
40000c23:	0c 01                	or     $0x1,%al
40000c25:	89 fa                	mov    %edi,%edx
40000c27:	89 f1                	mov    %esi,%ecx
40000c29:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000c2c:	89 4d f0             	mov    %ecx,-0x10(%ebp)
40000c2f:	89 55 ec             	mov    %edx,-0x14(%ebp)
40000c32:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000c35:	83 c4 10             	add    $0x10,%esp
40000c38:	5e                   	pop    %esi
40000c39:	5f                   	pop    %edi
40000c3a:	5d                   	pop    %ebp
40000c3b:	c3                   	ret    

40000c3c <user_strcmp>:
40000c3c:	55                   	push   %ebp
40000c3d:	89 e5                	mov    %esp,%ebp
40000c3f:	ff 75 0c             	pushl  0xc(%ebp)
40000c42:	ff 75 08             	pushl  0x8(%ebp)
40000c45:	e8 b5 ff ff ff       	call   40000bff <__strcmp>
40000c4a:	83 c4 08             	add    $0x8,%esp
40000c4d:	c9                   	leave  
40000c4e:	c3                   	ret    

40000c4f <user_strrchr>:
40000c4f:	55                   	push   %ebp
40000c50:	89 e5                	mov    %esp,%ebp
40000c52:	83 ec 14             	sub    $0x14,%esp
40000c55:	8b 45 0c             	mov    0xc(%ebp),%eax
40000c58:	88 45 ec             	mov    %al,-0x14(%ebp)
40000c5b:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000c62:	eb 1b                	jmp    40000c7f <user_strrchr+0x30>
40000c64:	8b 45 08             	mov    0x8(%ebp),%eax
40000c67:	0f b6 00             	movzbl (%eax),%eax
40000c6a:	0f be d0             	movsbl %al,%edx
40000c6d:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
40000c71:	39 c2                	cmp    %eax,%edx
40000c73:	75 06                	jne    40000c7b <user_strrchr+0x2c>
40000c75:	8b 45 08             	mov    0x8(%ebp),%eax
40000c78:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000c7b:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000c7f:	8b 45 08             	mov    0x8(%ebp),%eax
40000c82:	0f b6 00             	movzbl (%eax),%eax
40000c85:	84 c0                	test   %al,%al
40000c87:	75 db                	jne    40000c64 <user_strrchr+0x15>
40000c89:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000c8c:	c9                   	leave  
40000c8d:	c3                   	ret    

40000c8e <user_strlen>:
40000c8e:	55                   	push   %ebp
40000c8f:	89 e5                	mov    %esp,%ebp
40000c91:	83 ec 10             	sub    $0x10,%esp
40000c94:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000c9b:	eb 04                	jmp    40000ca1 <user_strlen+0x13>
40000c9d:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
40000ca1:	8b 45 08             	mov    0x8(%ebp),%eax
40000ca4:	8d 50 01             	lea    0x1(%eax),%edx
40000ca7:	89 55 08             	mov    %edx,0x8(%ebp)
40000caa:	0f b6 00             	movzbl (%eax),%eax
40000cad:	84 c0                	test   %al,%al
40000caf:	75 ec                	jne    40000c9d <user_strlen+0xf>
40000cb1:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000cb4:	c9                   	leave  
40000cb5:	c3                   	ret    

40000cb6 <__memcpy>:
40000cb6:	55                   	push   %ebp
40000cb7:	89 e5                	mov    %esp,%ebp
40000cb9:	57                   	push   %edi
40000cba:	56                   	push   %esi
40000cbb:	83 ec 10             	sub    $0x10,%esp
40000cbe:	8b 45 10             	mov    0x10(%ebp),%eax
40000cc1:	c1 e8 02             	shr    $0x2,%eax
40000cc4:	89 c1                	mov    %eax,%ecx
40000cc6:	8b 55 08             	mov    0x8(%ebp),%edx
40000cc9:	8b 45 0c             	mov    0xc(%ebp),%eax
40000ccc:	89 d7                	mov    %edx,%edi
40000cce:	89 c6                	mov    %eax,%esi
40000cd0:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
40000cd2:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000cd5:	83 e1 03             	and    $0x3,%ecx
40000cd8:	74 02                	je     40000cdc <__memcpy+0x26>
40000cda:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
40000cdc:	89 f0                	mov    %esi,%eax
40000cde:	89 fa                	mov    %edi,%edx
40000ce0:	89 4d f4             	mov    %ecx,-0xc(%ebp)
40000ce3:	89 55 f0             	mov    %edx,-0x10(%ebp)
40000ce6:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000ce9:	8b 45 08             	mov    0x8(%ebp),%eax
40000cec:	83 c4 10             	add    $0x10,%esp
40000cef:	5e                   	pop    %esi
40000cf0:	5f                   	pop    %edi
40000cf1:	5d                   	pop    %ebp
40000cf2:	c3                   	ret    

40000cf3 <user_memcpy>:
40000cf3:	55                   	push   %ebp
40000cf4:	89 e5                	mov    %esp,%ebp
40000cf6:	ff 75 10             	pushl  0x10(%ebp)
40000cf9:	ff 75 0c             	pushl  0xc(%ebp)
40000cfc:	ff 75 08             	pushl  0x8(%ebp)
40000cff:	e8 b2 ff ff ff       	call   40000cb6 <__memcpy>
40000d04:	83 c4 0c             	add    $0xc,%esp
40000d07:	c9                   	leave  
40000d08:	c3                   	ret    

40000d09 <user_strcpy>:
40000d09:	55                   	push   %ebp
40000d0a:	89 e5                	mov    %esp,%ebp
40000d0c:	83 ec 10             	sub    $0x10,%esp
40000d0f:	8b 45 08             	mov    0x8(%ebp),%eax
40000d12:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000d15:	90                   	nop
40000d16:	8b 55 0c             	mov    0xc(%ebp),%edx
40000d19:	8d 42 01             	lea    0x1(%edx),%eax
40000d1c:	89 45 0c             	mov    %eax,0xc(%ebp)
40000d1f:	8b 45 08             	mov    0x8(%ebp),%eax
40000d22:	8d 48 01             	lea    0x1(%eax),%ecx
40000d25:	89 4d 08             	mov    %ecx,0x8(%ebp)
40000d28:	0f b6 12             	movzbl (%edx),%edx
40000d2b:	88 10                	mov    %dl,(%eax)
40000d2d:	0f b6 00             	movzbl (%eax),%eax
40000d30:	84 c0                	test   %al,%al
40000d32:	75 e2                	jne    40000d16 <user_strcpy+0xd>
40000d34:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000d37:	c9                   	leave  
40000d38:	c3                   	ret    

40000d39 <path_parse>:
40000d39:	55                   	push   %ebp
40000d3a:	89 e5                	mov    %esp,%ebp
40000d3c:	8b 45 08             	mov    0x8(%ebp),%eax
40000d3f:	0f b6 00             	movzbl (%eax),%eax
40000d42:	3c 2f                	cmp    $0x2f,%al
40000d44:	75 27                	jne    40000d6d <path_parse+0x34>
40000d46:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000d4a:	8b 45 08             	mov    0x8(%ebp),%eax
40000d4d:	0f b6 00             	movzbl (%eax),%eax
40000d50:	3c 2f                	cmp    $0x2f,%al
40000d52:	74 f2                	je     40000d46 <path_parse+0xd>
40000d54:	eb 17                	jmp    40000d6d <path_parse+0x34>
40000d56:	8b 55 08             	mov    0x8(%ebp),%edx
40000d59:	8d 42 01             	lea    0x1(%edx),%eax
40000d5c:	89 45 08             	mov    %eax,0x8(%ebp)
40000d5f:	8b 45 0c             	mov    0xc(%ebp),%eax
40000d62:	8d 48 01             	lea    0x1(%eax),%ecx
40000d65:	89 4d 0c             	mov    %ecx,0xc(%ebp)
40000d68:	0f b6 12             	movzbl (%edx),%edx
40000d6b:	88 10                	mov    %dl,(%eax)
40000d6d:	8b 45 08             	mov    0x8(%ebp),%eax
40000d70:	0f b6 00             	movzbl (%eax),%eax
40000d73:	3c 2f                	cmp    $0x2f,%al
40000d75:	74 0a                	je     40000d81 <path_parse+0x48>
40000d77:	8b 45 08             	mov    0x8(%ebp),%eax
40000d7a:	0f b6 00             	movzbl (%eax),%eax
40000d7d:	84 c0                	test   %al,%al
40000d7f:	75 d5                	jne    40000d56 <path_parse+0x1d>
40000d81:	8b 45 08             	mov    0x8(%ebp),%eax
40000d84:	0f b6 00             	movzbl (%eax),%eax
40000d87:	84 c0                	test   %al,%al
40000d89:	75 07                	jne    40000d92 <path_parse+0x59>
40000d8b:	b8 00 00 00 00       	mov    $0x0,%eax
40000d90:	eb 03                	jmp    40000d95 <path_parse+0x5c>
40000d92:	8b 45 08             	mov    0x8(%ebp),%eax
40000d95:	5d                   	pop    %ebp
40000d96:	c3                   	ret    

40000d97 <wash_path>:
40000d97:	55                   	push   %ebp
40000d98:	89 e5                	mov    %esp,%ebp
40000d9a:	83 ec 28             	sub    $0x28,%esp
40000d9d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
40000da4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
40000dab:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
40000db2:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
40000db9:	8b 45 08             	mov    0x8(%ebp),%eax
40000dbc:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000dbf:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000dc2:	50                   	push   %eax
40000dc3:	ff 75 f4             	pushl  -0xc(%ebp)
40000dc6:	e8 6e ff ff ff       	call   40000d39 <path_parse>
40000dcb:	83 c4 08             	add    $0x8,%esp
40000dce:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000dd1:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000dd5:	84 c0                	test   %al,%al
40000dd7:	75 14                	jne    40000ded <wash_path+0x56>
40000dd9:	8b 45 0c             	mov    0xc(%ebp),%eax
40000ddc:	c6 00 2f             	movb   $0x2f,(%eax)
40000ddf:	8b 45 0c             	mov    0xc(%ebp),%eax
40000de2:	83 c0 01             	add    $0x1,%eax
40000de5:	c6 00 00             	movb   $0x0,(%eax)
40000de8:	e9 f2 00 00 00       	jmp    40000edf <wash_path+0x148>
40000ded:	8b 45 0c             	mov    0xc(%ebp),%eax
40000df0:	c6 00 00             	movb   $0x0,(%eax)
40000df3:	83 ec 08             	sub    $0x8,%esp
40000df6:	68 84 18 00 40       	push   $0x40001884
40000dfb:	ff 75 0c             	pushl  0xc(%ebp)
40000dfe:	e8 b7 fd ff ff       	call   40000bba <user_strcat>
40000e03:	83 c4 10             	add    $0x10,%esp
40000e06:	e9 c8 00 00 00       	jmp    40000ed3 <wash_path+0x13c>
40000e0b:	83 ec 08             	sub    $0x8,%esp
40000e0e:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e11:	50                   	push   %eax
40000e12:	68 86 18 00 40       	push   $0x40001886
40000e17:	e8 20 fe ff ff       	call   40000c3c <user_strcmp>
40000e1c:	83 c4 10             	add    $0x10,%esp
40000e1f:	85 c0                	test   %eax,%eax
40000e21:	75 2e                	jne    40000e51 <wash_path+0xba>
40000e23:	83 ec 08             	sub    $0x8,%esp
40000e26:	6a 2f                	push   $0x2f
40000e28:	ff 75 0c             	pushl  0xc(%ebp)
40000e2b:	e8 1f fe ff ff       	call   40000c4f <user_strrchr>
40000e30:	83 c4 10             	add    $0x10,%esp
40000e33:	89 45 f0             	mov    %eax,-0x10(%ebp)
40000e36:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000e39:	3b 45 0c             	cmp    0xc(%ebp),%eax
40000e3c:	74 08                	je     40000e46 <wash_path+0xaf>
40000e3e:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000e41:	c6 00 00             	movb   $0x0,(%eax)
40000e44:	eb 5f                	jmp    40000ea5 <wash_path+0x10e>
40000e46:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000e49:	83 c0 01             	add    $0x1,%eax
40000e4c:	c6 00 00             	movb   $0x0,(%eax)
40000e4f:	eb 54                	jmp    40000ea5 <wash_path+0x10e>
40000e51:	83 ec 08             	sub    $0x8,%esp
40000e54:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e57:	50                   	push   %eax
40000e58:	68 89 18 00 40       	push   $0x40001889
40000e5d:	e8 da fd ff ff       	call   40000c3c <user_strcmp>
40000e62:	83 c4 10             	add    $0x10,%esp
40000e65:	85 c0                	test   %eax,%eax
40000e67:	74 3c                	je     40000ea5 <wash_path+0x10e>
40000e69:	83 ec 08             	sub    $0x8,%esp
40000e6c:	68 84 18 00 40       	push   $0x40001884
40000e71:	ff 75 0c             	pushl  0xc(%ebp)
40000e74:	e8 c3 fd ff ff       	call   40000c3c <user_strcmp>
40000e79:	83 c4 10             	add    $0x10,%esp
40000e7c:	85 c0                	test   %eax,%eax
40000e7e:	74 13                	je     40000e93 <wash_path+0xfc>
40000e80:	83 ec 08             	sub    $0x8,%esp
40000e83:	68 84 18 00 40       	push   $0x40001884
40000e88:	ff 75 0c             	pushl  0xc(%ebp)
40000e8b:	e8 2a fd ff ff       	call   40000bba <user_strcat>
40000e90:	83 c4 10             	add    $0x10,%esp
40000e93:	83 ec 08             	sub    $0x8,%esp
40000e96:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e99:	50                   	push   %eax
40000e9a:	ff 75 0c             	pushl  0xc(%ebp)
40000e9d:	e8 18 fd ff ff       	call   40000bba <user_strcat>
40000ea2:	83 c4 10             	add    $0x10,%esp
40000ea5:	83 ec 04             	sub    $0x4,%esp
40000ea8:	6a 10                	push   $0x10
40000eaa:	6a 00                	push   $0x0
40000eac:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000eaf:	50                   	push   %eax
40000eb0:	e8 e4 fc ff ff       	call   40000b99 <user_memset>
40000eb5:	83 c4 10             	add    $0x10,%esp
40000eb8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
40000ebc:	74 15                	je     40000ed3 <wash_path+0x13c>
40000ebe:	83 ec 08             	sub    $0x8,%esp
40000ec1:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000ec4:	50                   	push   %eax
40000ec5:	ff 75 f4             	pushl  -0xc(%ebp)
40000ec8:	e8 6c fe ff ff       	call   40000d39 <path_parse>
40000ecd:	83 c4 10             	add    $0x10,%esp
40000ed0:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000ed3:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000ed7:	84 c0                	test   %al,%al
40000ed9:	0f 85 2c ff ff ff    	jne    40000e0b <wash_path+0x74>
40000edf:	c9                   	leave  
40000ee0:	c3                   	ret    

40000ee1 <make_clear_abs_path>:
40000ee1:	55                   	push   %ebp
40000ee2:	89 e5                	mov    %esp,%ebp
40000ee4:	57                   	push   %edi
40000ee5:	81 ec 04 02 00 00    	sub    $0x204,%esp
40000eeb:	c7 85 f8 fd ff ff 00 	movl   $0x0,-0x208(%ebp)
40000ef2:	00 00 00 
40000ef5:	8d 95 fc fd ff ff    	lea    -0x204(%ebp),%edx
40000efb:	b8 00 00 00 00       	mov    $0x0,%eax
40000f00:	b9 7f 00 00 00       	mov    $0x7f,%ecx
40000f05:	89 d7                	mov    %edx,%edi
40000f07:	f3 ab                	rep stos %eax,%es:(%edi)
40000f09:	8b 45 08             	mov    0x8(%ebp),%eax
40000f0c:	0f b6 00             	movzbl (%eax),%eax
40000f0f:	3c 2f                	cmp    $0x2f,%al
40000f11:	74 61                	je     40000f74 <make_clear_abs_path+0x93>
40000f13:	83 ec 04             	sub    $0x4,%esp
40000f16:	68 00 02 00 00       	push   $0x200
40000f1b:	6a 00                	push   $0x0
40000f1d:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f23:	50                   	push   %eax
40000f24:	e8 70 fc ff ff       	call   40000b99 <user_memset>
40000f29:	83 c4 10             	add    $0x10,%esp
40000f2c:	83 ec 08             	sub    $0x8,%esp
40000f2f:	68 00 02 00 00       	push   $0x200
40000f34:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f3a:	50                   	push   %eax
40000f3b:	e8 23 f3 ff ff       	call   40000263 <getcwd>
40000f40:	83 c4 10             	add    $0x10,%esp
40000f43:	85 c0                	test   %eax,%eax
40000f45:	74 2d                	je     40000f74 <make_clear_abs_path+0x93>
40000f47:	0f b6 85 f8 fd ff ff 	movzbl -0x208(%ebp),%eax
40000f4e:	3c 2f                	cmp    $0x2f,%al
40000f50:	75 0b                	jne    40000f5d <make_clear_abs_path+0x7c>
40000f52:	0f b6 85 f9 fd ff ff 	movzbl -0x207(%ebp),%eax
40000f59:	84 c0                	test   %al,%al
40000f5b:	74 17                	je     40000f74 <make_clear_abs_path+0x93>
40000f5d:	83 ec 08             	sub    $0x8,%esp
40000f60:	68 84 18 00 40       	push   $0x40001884
40000f65:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f6b:	50                   	push   %eax
40000f6c:	e8 49 fc ff ff       	call   40000bba <user_strcat>
40000f71:	83 c4 10             	add    $0x10,%esp
40000f74:	83 ec 08             	sub    $0x8,%esp
40000f77:	ff 75 08             	pushl  0x8(%ebp)
40000f7a:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f80:	50                   	push   %eax
40000f81:	e8 34 fc ff ff       	call   40000bba <user_strcat>
40000f86:	83 c4 10             	add    $0x10,%esp
40000f89:	83 ec 08             	sub    $0x8,%esp
40000f8c:	ff 75 0c             	pushl  0xc(%ebp)
40000f8f:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f95:	50                   	push   %eax
40000f96:	e8 fc fd ff ff       	call   40000d97 <wash_path>
40000f9b:	83 c4 10             	add    $0x10,%esp
40000f9e:	90                   	nop
40000f9f:	8b 7d fc             	mov    -0x4(%ebp),%edi
40000fa2:	c9                   	leave  
40000fa3:	c3                   	ret    

40000fa4 <buildin_pwd>:
40000fa4:	55                   	push   %ebp
40000fa5:	89 e5                	mov    %esp,%ebp
40000fa7:	83 ec 08             	sub    $0x8,%esp
40000faa:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40000fae:	74 12                	je     40000fc2 <buildin_pwd+0x1e>
40000fb0:	83 ec 0c             	sub    $0xc,%esp
40000fb3:	68 8b 18 00 40       	push   $0x4000188b
40000fb8:	e8 c1 f3 ff ff       	call   4000037e <printf>
40000fbd:	83 c4 10             	add    $0x10,%esp
40000fc0:	eb 40                	jmp    40001002 <buildin_pwd+0x5e>
40000fc2:	83 ec 08             	sub    $0x8,%esp
40000fc5:	68 00 02 00 00       	push   $0x200
40000fca:	68 40 1d 00 40       	push   $0x40001d40
40000fcf:	e8 8f f2 ff ff       	call   40000263 <getcwd>
40000fd4:	83 c4 10             	add    $0x10,%esp
40000fd7:	85 c0                	test   %eax,%eax
40000fd9:	74 17                	je     40000ff2 <buildin_pwd+0x4e>
40000fdb:	83 ec 08             	sub    $0x8,%esp
40000fde:	68 40 1d 00 40       	push   $0x40001d40
40000fe3:	68 a6 18 00 40       	push   $0x400018a6
40000fe8:	e8 91 f3 ff ff       	call   4000037e <printf>
40000fed:	83 c4 10             	add    $0x10,%esp
40000ff0:	eb 10                	jmp    40001002 <buildin_pwd+0x5e>
40000ff2:	83 ec 0c             	sub    $0xc,%esp
40000ff5:	68 ac 18 00 40       	push   $0x400018ac
40000ffa:	e8 7f f3 ff ff       	call   4000037e <printf>
40000fff:	83 c4 10             	add    $0x10,%esp
40001002:	c9                   	leave  
40001003:	c3                   	ret    

40001004 <buildin_cd>:
40001004:	55                   	push   %ebp
40001005:	89 e5                	mov    %esp,%ebp
40001007:	83 ec 08             	sub    $0x8,%esp
4000100a:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
4000100e:	7e 17                	jle    40001027 <buildin_cd+0x23>
40001010:	83 ec 0c             	sub    $0xc,%esp
40001013:	68 d5 18 00 40       	push   $0x400018d5
40001018:	e8 61 f3 ff ff       	call   4000037e <printf>
4000101d:	83 c4 10             	add    $0x10,%esp
40001020:	b8 00 00 00 00       	mov    $0x0,%eax
40001025:	eb 65                	jmp    4000108c <buildin_cd+0x88>
40001027:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
4000102b:	75 10                	jne    4000103d <buildin_cd+0x39>
4000102d:	c6 05 40 1d 00 40 2f 	movb   $0x2f,0x40001d40
40001034:	c6 05 41 1d 00 40 00 	movb   $0x0,0x40001d41
4000103b:	eb 19                	jmp    40001056 <buildin_cd+0x52>
4000103d:	8b 45 0c             	mov    0xc(%ebp),%eax
40001040:	83 c0 04             	add    $0x4,%eax
40001043:	8b 00                	mov    (%eax),%eax
40001045:	83 ec 08             	sub    $0x8,%esp
40001048:	68 40 1d 00 40       	push   $0x40001d40
4000104d:	50                   	push   %eax
4000104e:	e8 8e fe ff ff       	call   40000ee1 <make_clear_abs_path>
40001053:	83 c4 10             	add    $0x10,%esp
40001056:	83 ec 0c             	sub    $0xc,%esp
40001059:	68 40 1d 00 40       	push   $0x40001d40
4000105e:	e8 15 f2 ff ff       	call   40000278 <chdir>
40001063:	83 c4 10             	add    $0x10,%esp
40001066:	83 f8 ff             	cmp    $0xffffffff,%eax
40001069:	75 1c                	jne    40001087 <buildin_cd+0x83>
4000106b:	83 ec 08             	sub    $0x8,%esp
4000106e:	68 40 1d 00 40       	push   $0x40001d40
40001073:	68 f3 18 00 40       	push   $0x400018f3
40001078:	e8 01 f3 ff ff       	call   4000037e <printf>
4000107d:	83 c4 10             	add    $0x10,%esp
40001080:	b8 00 00 00 00       	mov    $0x0,%eax
40001085:	eb 05                	jmp    4000108c <buildin_cd+0x88>
40001087:	b8 40 1d 00 40       	mov    $0x40001d40,%eax
4000108c:	c9                   	leave  
4000108d:	c3                   	ret    

4000108e <buildin_ls>:
4000108e:	55                   	push   %ebp
4000108f:	89 e5                	mov    %esp,%ebp
40001091:	57                   	push   %edi
40001092:	53                   	push   %ebx
40001093:	81 ec 30 02 00 00    	sub    $0x230,%esp
40001099:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400010a0:	83 ec 04             	sub    $0x4,%esp
400010a3:	6a 0c                	push   $0xc
400010a5:	6a 00                	push   $0x0
400010a7:	8d 45 c8             	lea    -0x38(%ebp),%eax
400010aa:	50                   	push   %eax
400010ab:	e8 e9 fa ff ff       	call   40000b99 <user_memset>
400010b0:	83 c4 10             	add    $0x10,%esp
400010b3:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
400010b7:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
400010be:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
400010c5:	e9 e9 00 00 00       	jmp    400011b3 <buildin_ls+0x125>
400010ca:	8b 45 e8             	mov    -0x18(%ebp),%eax
400010cd:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
400010d4:	8b 45 0c             	mov    0xc(%ebp),%eax
400010d7:	01 d0                	add    %edx,%eax
400010d9:	8b 00                	mov    (%eax),%eax
400010db:	0f b6 00             	movzbl (%eax),%eax
400010de:	3c 2d                	cmp    $0x2d,%al
400010e0:	0f 85 91 00 00 00    	jne    40001177 <buildin_ls+0xe9>
400010e6:	8b 45 e8             	mov    -0x18(%ebp),%eax
400010e9:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
400010f0:	8b 45 0c             	mov    0xc(%ebp),%eax
400010f3:	01 d0                	add    %edx,%eax
400010f5:	8b 00                	mov    (%eax),%eax
400010f7:	83 ec 08             	sub    $0x8,%esp
400010fa:	50                   	push   %eax
400010fb:	68 0d 19 00 40       	push   $0x4000190d
40001100:	e8 37 fb ff ff       	call   40000c3c <user_strcmp>
40001105:	83 c4 10             	add    $0x10,%esp
40001108:	85 c0                	test   %eax,%eax
4000110a:	75 09                	jne    40001115 <buildin_ls+0x87>
4000110c:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
40001110:	e9 9a 00 00 00       	jmp    400011af <buildin_ls+0x121>
40001115:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001118:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
4000111f:	8b 45 0c             	mov    0xc(%ebp),%eax
40001122:	01 d0                	add    %edx,%eax
40001124:	8b 00                	mov    (%eax),%eax
40001126:	83 ec 08             	sub    $0x8,%esp
40001129:	50                   	push   %eax
4000112a:	68 10 19 00 40       	push   $0x40001910
4000112f:	e8 08 fb ff ff       	call   40000c3c <user_strcmp>
40001134:	83 c4 10             	add    $0x10,%esp
40001137:	85 c0                	test   %eax,%eax
40001139:	75 15                	jne    40001150 <buildin_ls+0xc2>
4000113b:	83 ec 0c             	sub    $0xc,%esp
4000113e:	68 14 19 00 40       	push   $0x40001914
40001143:	e8 36 f2 ff ff       	call   4000037e <printf>
40001148:	83 c4 10             	add    $0x10,%esp
4000114b:	e9 fc 02 00 00       	jmp    4000144c <buildin_ls+0x3be>
40001150:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001153:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
4000115a:	8b 45 0c             	mov    0xc(%ebp),%eax
4000115d:	01 d0                	add    %edx,%eax
4000115f:	8b 00                	mov    (%eax),%eax
40001161:	83 ec 08             	sub    $0x8,%esp
40001164:	50                   	push   %eax
40001165:	68 84 19 00 40       	push   $0x40001984
4000116a:	e8 0f f2 ff ff       	call   4000037e <printf>
4000116f:	83 c4 10             	add    $0x10,%esp
40001172:	e9 d5 02 00 00       	jmp    4000144c <buildin_ls+0x3be>
40001177:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
4000117b:	75 1d                	jne    4000119a <buildin_ls+0x10c>
4000117d:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001180:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40001187:	8b 45 0c             	mov    0xc(%ebp),%eax
4000118a:	01 d0                	add    %edx,%eax
4000118c:	8b 00                	mov    (%eax),%eax
4000118e:	89 45 f4             	mov    %eax,-0xc(%ebp)
40001191:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
40001198:	eb 15                	jmp    400011af <buildin_ls+0x121>
4000119a:	83 ec 0c             	sub    $0xc,%esp
4000119d:	68 bd 19 00 40       	push   $0x400019bd
400011a2:	e8 d7 f1 ff ff       	call   4000037e <printf>
400011a7:	83 c4 10             	add    $0x10,%esp
400011aa:	e9 9d 02 00 00       	jmp    4000144c <buildin_ls+0x3be>
400011af:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
400011b3:	8b 45 e8             	mov    -0x18(%ebp),%eax
400011b6:	3b 45 08             	cmp    0x8(%ebp),%eax
400011b9:	0f 8c 0b ff ff ff    	jl     400010ca <buildin_ls+0x3c>
400011bf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
400011c3:	75 37                	jne    400011fc <buildin_ls+0x16e>
400011c5:	83 ec 08             	sub    $0x8,%esp
400011c8:	68 00 02 00 00       	push   $0x200
400011cd:	68 40 1d 00 40       	push   $0x40001d40
400011d2:	e8 8c f0 ff ff       	call   40000263 <getcwd>
400011d7:	83 c4 10             	add    $0x10,%esp
400011da:	85 c0                	test   %eax,%eax
400011dc:	74 09                	je     400011e7 <buildin_ls+0x159>
400011de:	c7 45 f4 40 1d 00 40 	movl   $0x40001d40,-0xc(%ebp)
400011e5:	eb 2f                	jmp    40001216 <buildin_ls+0x188>
400011e7:	83 ec 0c             	sub    $0xc,%esp
400011ea:	68 d8 19 00 40       	push   $0x400019d8
400011ef:	e8 8a f1 ff ff       	call   4000037e <printf>
400011f4:	83 c4 10             	add    $0x10,%esp
400011f7:	e9 50 02 00 00       	jmp    4000144c <buildin_ls+0x3be>
400011fc:	83 ec 08             	sub    $0x8,%esp
400011ff:	68 40 1d 00 40       	push   $0x40001d40
40001204:	ff 75 f4             	pushl  -0xc(%ebp)
40001207:	e8 d5 fc ff ff       	call   40000ee1 <make_clear_abs_path>
4000120c:	83 c4 10             	add    $0x10,%esp
4000120f:	c7 45 f4 40 1d 00 40 	movl   $0x40001d40,-0xc(%ebp)
40001216:	83 ec 08             	sub    $0x8,%esp
40001219:	8d 45 c8             	lea    -0x38(%ebp),%eax
4000121c:	50                   	push   %eax
4000121d:	ff 75 f4             	pushl  -0xc(%ebp)
40001220:	e8 65 f0 ff ff       	call   4000028a <stat>
40001225:	83 c4 10             	add    $0x10,%esp
40001228:	83 f8 ff             	cmp    $0xffffffff,%eax
4000122b:	75 18                	jne    40001245 <buildin_ls+0x1b7>
4000122d:	83 ec 08             	sub    $0x8,%esp
40001230:	ff 75 f4             	pushl  -0xc(%ebp)
40001233:	68 fc 19 00 40       	push   $0x400019fc
40001238:	e8 41 f1 ff ff       	call   4000037e <printf>
4000123d:	83 c4 10             	add    $0x10,%esp
40001240:	e9 07 02 00 00       	jmp    4000144c <buildin_ls+0x3be>
40001245:	8b 45 d0             	mov    -0x30(%ebp),%eax
40001248:	83 f8 02             	cmp    $0x2,%eax
4000124b:	0f 85 c8 01 00 00    	jne    40001419 <buildin_ls+0x38b>
40001251:	83 ec 0c             	sub    $0xc,%esp
40001254:	ff 75 f4             	pushl  -0xc(%ebp)
40001257:	e8 43 f0 ff ff       	call   4000029f <opendir>
4000125c:	83 c4 10             	add    $0x10,%esp
4000125f:	89 45 dc             	mov    %eax,-0x24(%ebp)
40001262:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
40001269:	c7 85 c8 fd ff ff 00 	movl   $0x0,-0x238(%ebp)
40001270:	00 00 00 
40001273:	8d 95 cc fd ff ff    	lea    -0x234(%ebp),%edx
40001279:	b8 00 00 00 00       	mov    $0x0,%eax
4000127e:	b9 7f 00 00 00       	mov    $0x7f,%ecx
40001283:	89 d7                	mov    %edx,%edi
40001285:	f3 ab                	rep stos %eax,%es:(%edi)
40001287:	83 ec 0c             	sub    $0xc,%esp
4000128a:	ff 75 f4             	pushl  -0xc(%ebp)
4000128d:	e8 fc f9 ff ff       	call   40000c8e <user_strlen>
40001292:	83 c4 10             	add    $0x10,%esp
40001295:	89 45 e4             	mov    %eax,-0x1c(%ebp)
40001298:	8b 45 e4             	mov    -0x1c(%ebp),%eax
4000129b:	83 e8 01             	sub    $0x1,%eax
4000129e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
400012a1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
400012a4:	83 ec 04             	sub    $0x4,%esp
400012a7:	50                   	push   %eax
400012a8:	ff 75 f4             	pushl  -0xc(%ebp)
400012ab:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
400012b1:	50                   	push   %eax
400012b2:	e8 3c fa ff ff       	call   40000cf3 <user_memcpy>
400012b7:	83 c4 10             	add    $0x10,%esp
400012ba:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
400012c0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
400012c3:	01 d0                	add    %edx,%eax
400012c5:	0f b6 00             	movzbl (%eax),%eax
400012c8:	3c 2f                	cmp    $0x2f,%al
400012ca:	74 12                	je     400012de <buildin_ls+0x250>
400012cc:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
400012d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
400012d5:	01 d0                	add    %edx,%eax
400012d7:	c6 00 2f             	movb   $0x2f,(%eax)
400012da:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
400012de:	83 ec 0c             	sub    $0xc,%esp
400012e1:	ff 75 dc             	pushl  -0x24(%ebp)
400012e4:	e8 67 ef ff ff       	call   40000250 <rewinddir>
400012e9:	83 c4 10             	add    $0x10,%esp
400012ec:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400012f0:	0f 84 ec 00 00 00    	je     400013e2 <buildin_ls+0x354>
400012f6:	8b 45 cc             	mov    -0x34(%ebp),%eax
400012f9:	83 ec 08             	sub    $0x8,%esp
400012fc:	50                   	push   %eax
400012fd:	68 2d 1a 00 40       	push   $0x40001a2d
40001302:	e8 77 f0 ff ff       	call   4000037e <printf>
40001307:	83 c4 10             	add    $0x10,%esp
4000130a:	e9 a2 00 00 00       	jmp    400013b1 <buildin_ls+0x323>
4000130f:	c6 45 e3 64          	movb   $0x64,-0x1d(%ebp)
40001313:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001316:	8b 40 14             	mov    0x14(%eax),%eax
40001319:	83 f8 01             	cmp    $0x1,%eax
4000131c:	75 04                	jne    40001322 <buildin_ls+0x294>
4000131e:	c6 45 e3 2d          	movb   $0x2d,-0x1d(%ebp)
40001322:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
40001328:	8b 45 e4             	mov    -0x1c(%ebp),%eax
4000132b:	01 d0                	add    %edx,%eax
4000132d:	c6 00 00             	movb   $0x0,(%eax)
40001330:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001333:	83 ec 08             	sub    $0x8,%esp
40001336:	50                   	push   %eax
40001337:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
4000133d:	50                   	push   %eax
4000133e:	e8 77 f8 ff ff       	call   40000bba <user_strcat>
40001343:	83 c4 10             	add    $0x10,%esp
40001346:	83 ec 04             	sub    $0x4,%esp
40001349:	6a 0c                	push   $0xc
4000134b:	6a 00                	push   $0x0
4000134d:	8d 45 c8             	lea    -0x38(%ebp),%eax
40001350:	50                   	push   %eax
40001351:	e8 43 f8 ff ff       	call   40000b99 <user_memset>
40001356:	83 c4 10             	add    $0x10,%esp
40001359:	83 ec 08             	sub    $0x8,%esp
4000135c:	8d 45 c8             	lea    -0x38(%ebp),%eax
4000135f:	50                   	push   %eax
40001360:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
40001366:	50                   	push   %eax
40001367:	e8 1e ef ff ff       	call   4000028a <stat>
4000136c:	83 c4 10             	add    $0x10,%esp
4000136f:	83 f8 ff             	cmp    $0xffffffff,%eax
40001372:	75 19                	jne    4000138d <buildin_ls+0x2ff>
40001374:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001377:	83 ec 08             	sub    $0x8,%esp
4000137a:	50                   	push   %eax
4000137b:	68 fc 19 00 40       	push   $0x400019fc
40001380:	e8 f9 ef ff ff       	call   4000037e <printf>
40001385:	83 c4 10             	add    $0x10,%esp
40001388:	e9 bf 00 00 00       	jmp    4000144c <buildin_ls+0x3be>
4000138d:	8b 5d d8             	mov    -0x28(%ebp),%ebx
40001390:	8b 4d cc             	mov    -0x34(%ebp),%ecx
40001393:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001396:	8b 50 10             	mov    0x10(%eax),%edx
40001399:	0f be 45 e3          	movsbl -0x1d(%ebp),%eax
4000139d:	83 ec 0c             	sub    $0xc,%esp
400013a0:	53                   	push   %ebx
400013a1:	51                   	push   %ecx
400013a2:	52                   	push   %edx
400013a3:	50                   	push   %eax
400013a4:	68 38 1a 00 40       	push   $0x40001a38
400013a9:	e8 d0 ef ff ff       	call   4000037e <printf>
400013ae:	83 c4 20             	add    $0x20,%esp
400013b1:	83 ec 0c             	sub    $0xc,%esp
400013b4:	ff 75 dc             	pushl  -0x24(%ebp)
400013b7:	e8 07 ef ff ff       	call   400002c3 <readdir>
400013bc:	83 c4 10             	add    $0x10,%esp
400013bf:	89 45 d8             	mov    %eax,-0x28(%ebp)
400013c2:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
400013c6:	0f 85 43 ff ff ff    	jne    4000130f <buildin_ls+0x281>
400013cc:	eb 3b                	jmp    40001409 <buildin_ls+0x37b>
400013ce:	8b 45 d8             	mov    -0x28(%ebp),%eax
400013d1:	83 ec 08             	sub    $0x8,%esp
400013d4:	50                   	push   %eax
400013d5:	68 48 1a 00 40       	push   $0x40001a48
400013da:	e8 9f ef ff ff       	call   4000037e <printf>
400013df:	83 c4 10             	add    $0x10,%esp
400013e2:	83 ec 0c             	sub    $0xc,%esp
400013e5:	ff 75 dc             	pushl  -0x24(%ebp)
400013e8:	e8 d6 ee ff ff       	call   400002c3 <readdir>
400013ed:	83 c4 10             	add    $0x10,%esp
400013f0:	89 45 d8             	mov    %eax,-0x28(%ebp)
400013f3:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
400013f7:	75 d5                	jne    400013ce <buildin_ls+0x340>
400013f9:	83 ec 0c             	sub    $0xc,%esp
400013fc:	68 4c 1a 00 40       	push   $0x40001a4c
40001401:	e8 78 ef ff ff       	call   4000037e <printf>
40001406:	83 c4 10             	add    $0x10,%esp
40001409:	83 ec 0c             	sub    $0xc,%esp
4000140c:	ff 75 dc             	pushl  -0x24(%ebp)
4000140f:	e8 9d ee ff ff       	call   400002b1 <closedir>
40001414:	83 c4 10             	add    $0x10,%esp
40001417:	eb 33                	jmp    4000144c <buildin_ls+0x3be>
40001419:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
4000141d:	74 1a                	je     40001439 <buildin_ls+0x3ab>
4000141f:	8b 55 cc             	mov    -0x34(%ebp),%edx
40001422:	8b 45 c8             	mov    -0x38(%ebp),%eax
40001425:	ff 75 f4             	pushl  -0xc(%ebp)
40001428:	52                   	push   %edx
40001429:	50                   	push   %eax
4000142a:	68 4e 1a 00 40       	push   $0x40001a4e
4000142f:	e8 4a ef ff ff       	call   4000037e <printf>
40001434:	83 c4 10             	add    $0x10,%esp
40001437:	eb 13                	jmp    4000144c <buildin_ls+0x3be>
40001439:	83 ec 08             	sub    $0x8,%esp
4000143c:	ff 75 f4             	pushl  -0xc(%ebp)
4000143f:	68 a6 18 00 40       	push   $0x400018a6
40001444:	e8 35 ef ff ff       	call   4000037e <printf>
40001449:	83 c4 10             	add    $0x10,%esp
4000144c:	8d 65 f8             	lea    -0x8(%ebp),%esp
4000144f:	5b                   	pop    %ebx
40001450:	5f                   	pop    %edi
40001451:	5d                   	pop    %ebp
40001452:	c3                   	ret    

40001453 <buildin_ps>:
40001453:	55                   	push   %ebp
40001454:	89 e5                	mov    %esp,%ebp
40001456:	83 ec 08             	sub    $0x8,%esp
40001459:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
4000145d:	74 12                	je     40001471 <buildin_ps+0x1e>
4000145f:	83 ec 0c             	sub    $0xc,%esp
40001462:	68 5d 1a 00 40       	push   $0x40001a5d
40001467:	e8 12 ef ff ff       	call   4000037e <printf>
4000146c:	83 c4 10             	add    $0x10,%esp
4000146f:	eb 05                	jmp    40001476 <buildin_ps+0x23>
40001471:	e8 5f ee ff ff       	call   400002d5 <ps>
40001476:	c9                   	leave  
40001477:	c3                   	ret    

40001478 <buildin_mkdir>:
40001478:	55                   	push   %ebp
40001479:	89 e5                	mov    %esp,%ebp
4000147b:	83 ec 18             	sub    $0x18,%esp
4000147e:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
40001485:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40001489:	74 12                	je     4000149d <buildin_mkdir+0x25>
4000148b:	83 ec 0c             	sub    $0xc,%esp
4000148e:	68 78 1a 00 40       	push   $0x40001a78
40001493:	e8 e6 ee ff ff       	call   4000037e <printf>
40001498:	83 c4 10             	add    $0x10,%esp
4000149b:	eb 68                	jmp    40001505 <buildin_mkdir+0x8d>
4000149d:	8b 45 0c             	mov    0xc(%ebp),%eax
400014a0:	83 c0 04             	add    $0x4,%eax
400014a3:	8b 00                	mov    (%eax),%eax
400014a5:	83 ec 08             	sub    $0x8,%esp
400014a8:	68 40 1d 00 40       	push   $0x40001d40
400014ad:	50                   	push   %eax
400014ae:	e8 2e fa ff ff       	call   40000ee1 <make_clear_abs_path>
400014b3:	83 c4 10             	add    $0x10,%esp
400014b6:	83 ec 08             	sub    $0x8,%esp
400014b9:	68 40 1d 00 40       	push   $0x40001d40
400014be:	68 84 18 00 40       	push   $0x40001884
400014c3:	e8 74 f7 ff ff       	call   40000c3c <user_strcmp>
400014c8:	83 c4 10             	add    $0x10,%esp
400014cb:	85 c0                	test   %eax,%eax
400014cd:	74 36                	je     40001505 <buildin_mkdir+0x8d>
400014cf:	83 ec 0c             	sub    $0xc,%esp
400014d2:	68 40 1d 00 40       	push   $0x40001d40
400014d7:	e8 50 ed ff ff       	call   4000022c <mkdir>
400014dc:	83 c4 10             	add    $0x10,%esp
400014df:	85 c0                	test   %eax,%eax
400014e1:	75 09                	jne    400014ec <buildin_mkdir+0x74>
400014e3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400014ea:	eb 19                	jmp    40001505 <buildin_mkdir+0x8d>
400014ec:	8b 45 0c             	mov    0xc(%ebp),%eax
400014ef:	83 c0 04             	add    $0x4,%eax
400014f2:	8b 00                	mov    (%eax),%eax
400014f4:	83 ec 08             	sub    $0x8,%esp
400014f7:	50                   	push   %eax
400014f8:	68 9c 1a 00 40       	push   $0x40001a9c
400014fd:	e8 7c ee ff ff       	call   4000037e <printf>
40001502:	83 c4 10             	add    $0x10,%esp
40001505:	8b 45 f4             	mov    -0xc(%ebp),%eax
40001508:	c9                   	leave  
40001509:	c3                   	ret    

4000150a <buildin_rmdir>:
4000150a:	55                   	push   %ebp
4000150b:	89 e5                	mov    %esp,%ebp
4000150d:	83 ec 18             	sub    $0x18,%esp
40001510:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
40001517:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
4000151b:	74 12                	je     4000152f <buildin_rmdir+0x25>
4000151d:	83 ec 0c             	sub    $0xc,%esp
40001520:	68 c0 1a 00 40       	push   $0x40001ac0
40001525:	e8 54 ee ff ff       	call   4000037e <printf>
4000152a:	83 c4 10             	add    $0x10,%esp
4000152d:	eb 68                	jmp    40001597 <buildin_rmdir+0x8d>
4000152f:	8b 45 0c             	mov    0xc(%ebp),%eax
40001532:	83 c0 04             	add    $0x4,%eax
40001535:	8b 00                	mov    (%eax),%eax
40001537:	83 ec 08             	sub    $0x8,%esp
4000153a:	68 40 1d 00 40       	push   $0x40001d40
4000153f:	50                   	push   %eax
40001540:	e8 9c f9 ff ff       	call   40000ee1 <make_clear_abs_path>
40001545:	83 c4 10             	add    $0x10,%esp
40001548:	83 ec 08             	sub    $0x8,%esp
4000154b:	68 40 1d 00 40       	push   $0x40001d40
40001550:	68 84 18 00 40       	push   $0x40001884
40001555:	e8 e2 f6 ff ff       	call   40000c3c <user_strcmp>
4000155a:	83 c4 10             	add    $0x10,%esp
4000155d:	85 c0                	test   %eax,%eax
4000155f:	74 36                	je     40001597 <buildin_rmdir+0x8d>
40001561:	83 ec 0c             	sub    $0xc,%esp
40001564:	68 40 1d 00 40       	push   $0x40001d40
40001569:	e8 d0 ec ff ff       	call   4000023e <rmdir>
4000156e:	83 c4 10             	add    $0x10,%esp
40001571:	85 c0                	test   %eax,%eax
40001573:	75 09                	jne    4000157e <buildin_rmdir+0x74>
40001575:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000157c:	eb 19                	jmp    40001597 <buildin_rmdir+0x8d>
4000157e:	8b 45 0c             	mov    0xc(%ebp),%eax
40001581:	83 c0 04             	add    $0x4,%eax
40001584:	8b 00                	mov    (%eax),%eax
40001586:	83 ec 08             	sub    $0x8,%esp
40001589:	50                   	push   %eax
4000158a:	68 e1 1a 00 40       	push   $0x40001ae1
4000158f:	e8 ea ed ff ff       	call   4000037e <printf>
40001594:	83 c4 10             	add    $0x10,%esp
40001597:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000159a:	c9                   	leave  
4000159b:	c3                   	ret    

4000159c <buildin_rm>:
4000159c:	55                   	push   %ebp
4000159d:	89 e5                	mov    %esp,%ebp
4000159f:	83 ec 18             	sub    $0x18,%esp
400015a2:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
400015a9:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
400015ad:	74 12                	je     400015c1 <buildin_rm+0x25>
400015af:	83 ec 0c             	sub    $0xc,%esp
400015b2:	68 fb 1a 00 40       	push   $0x40001afb
400015b7:	e8 c2 ed ff ff       	call   4000037e <printf>
400015bc:	83 c4 10             	add    $0x10,%esp
400015bf:	eb 68                	jmp    40001629 <buildin_rm+0x8d>
400015c1:	8b 45 0c             	mov    0xc(%ebp),%eax
400015c4:	83 c0 04             	add    $0x4,%eax
400015c7:	8b 00                	mov    (%eax),%eax
400015c9:	83 ec 08             	sub    $0x8,%esp
400015cc:	68 40 1d 00 40       	push   $0x40001d40
400015d1:	50                   	push   %eax
400015d2:	e8 0a f9 ff ff       	call   40000ee1 <make_clear_abs_path>
400015d7:	83 c4 10             	add    $0x10,%esp
400015da:	83 ec 08             	sub    $0x8,%esp
400015dd:	68 40 1d 00 40       	push   $0x40001d40
400015e2:	68 84 18 00 40       	push   $0x40001884
400015e7:	e8 50 f6 ff ff       	call   40000c3c <user_strcmp>
400015ec:	83 c4 10             	add    $0x10,%esp
400015ef:	85 c0                	test   %eax,%eax
400015f1:	74 36                	je     40001629 <buildin_rm+0x8d>
400015f3:	83 ec 0c             	sub    $0xc,%esp
400015f6:	68 40 1d 00 40       	push   $0x40001d40
400015fb:	e8 1a ec ff ff       	call   4000021a <unlink>
40001600:	83 c4 10             	add    $0x10,%esp
40001603:	85 c0                	test   %eax,%eax
40001605:	75 09                	jne    40001610 <buildin_rm+0x74>
40001607:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000160e:	eb 19                	jmp    40001629 <buildin_rm+0x8d>
40001610:	8b 45 0c             	mov    0xc(%ebp),%eax
40001613:	83 c0 04             	add    $0x4,%eax
40001616:	8b 00                	mov    (%eax),%eax
40001618:	83 ec 08             	sub    $0x8,%esp
4000161b:	50                   	push   %eax
4000161c:	68 19 1b 00 40       	push   $0x40001b19
40001621:	e8 58 ed ff ff       	call   4000037e <printf>
40001626:	83 c4 10             	add    $0x10,%esp
40001629:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000162c:	c9                   	leave  
4000162d:	c3                   	ret    

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

c1000262 <memcmp>:
c1000262:	55                   	push   %ebp
c1000263:	89 e5                	mov    %esp,%ebp
c1000265:	83 ec 10             	sub    $0x10,%esp
c1000268:	8b 45 08             	mov    0x8(%ebp),%eax
c100026b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100026e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1000271:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1000274:	eb 36                	jmp    c10002ac <memcmp+0x4a>
c1000276:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000279:	0f b6 10             	movzbl (%eax),%edx
c100027c:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100027f:	0f b6 00             	movzbl (%eax),%eax
c1000282:	38 c2                	cmp    %al,%dl
c1000284:	74 1e                	je     c10002a4 <memcmp+0x42>
c1000286:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000289:	0f b6 10             	movzbl (%eax),%edx
c100028c:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100028f:	0f b6 00             	movzbl (%eax),%eax
c1000292:	38 c2                	cmp    %al,%dl
c1000294:	7e 07                	jle    c100029d <memcmp+0x3b>
c1000296:	b8 01 00 00 00       	mov    $0x1,%eax
c100029b:	eb 21                	jmp    c10002be <memcmp+0x5c>
c100029d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10002a2:	eb 1a                	jmp    c10002be <memcmp+0x5c>
c10002a4:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c10002a8:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10002ac:	8b 45 10             	mov    0x10(%ebp),%eax
c10002af:	8d 50 ff             	lea    -0x1(%eax),%edx
c10002b2:	89 55 10             	mov    %edx,0x10(%ebp)
c10002b5:	85 c0                	test   %eax,%eax
c10002b7:	75 bd                	jne    c1000276 <memcmp+0x14>
c10002b9:	b8 00 00 00 00       	mov    $0x0,%eax
c10002be:	c9                   	leave  
c10002bf:	c3                   	ret    

c10002c0 <print_seg>:
c10002c0:	55                   	push   %ebp
c10002c1:	89 e5                	mov    %esp,%ebp
c10002c3:	83 ec 18             	sub    $0x18,%esp
c10002c6:	8c 4d f6             	mov    %cs,-0xa(%ebp)
c10002c9:	8c 5d f4             	mov    %ds,-0xc(%ebp)
c10002cc:	8c 6d f2             	mov    %gs,-0xe(%ebp)
c10002cf:	8c 45 f0             	mov    %es,-0x10(%ebp)
c10002d2:	8c 65 ee             	mov    %fs,-0x12(%ebp)
c10002d5:	8c 55 ec             	mov    %ss,-0x14(%ebp)
c10002d8:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10002dc:	0f b7 c0             	movzwl %ax,%eax
c10002df:	83 ec 08             	sub    $0x8,%esp
c10002e2:	50                   	push   %eax
c10002e3:	68 40 b1 00 c1       	push   $0xc100b140
c10002e8:	e8 0e 55 00 00       	call   c10057fb <printk>
c10002ed:	83 c4 10             	add    $0x10,%esp
c10002f0:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10002f4:	0f b7 c0             	movzwl %ax,%eax
c10002f7:	83 ec 08             	sub    $0x8,%esp
c10002fa:	50                   	push   %eax
c10002fb:	68 49 b1 00 c1       	push   $0xc100b149
c1000300:	e8 f6 54 00 00       	call   c10057fb <printk>
c1000305:	83 c4 10             	add    $0x10,%esp
c1000308:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c100030c:	0f b7 c0             	movzwl %ax,%eax
c100030f:	83 ec 08             	sub    $0x8,%esp
c1000312:	50                   	push   %eax
c1000313:	68 52 b1 00 c1       	push   $0xc100b152
c1000318:	e8 de 54 00 00       	call   c10057fb <printk>
c100031d:	83 c4 10             	add    $0x10,%esp
c1000320:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
c1000324:	0f b7 c0             	movzwl %ax,%eax
c1000327:	83 ec 08             	sub    $0x8,%esp
c100032a:	50                   	push   %eax
c100032b:	68 5b b1 00 c1       	push   $0xc100b15b
c1000330:	e8 c6 54 00 00       	call   c10057fb <printk>
c1000335:	83 c4 10             	add    $0x10,%esp
c1000338:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
c100033c:	0f b7 c0             	movzwl %ax,%eax
c100033f:	83 ec 08             	sub    $0x8,%esp
c1000342:	50                   	push   %eax
c1000343:	68 64 b1 00 c1       	push   $0xc100b164
c1000348:	e8 ae 54 00 00       	call   c10057fb <printk>
c100034d:	83 c4 10             	add    $0x10,%esp
c1000350:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c1000354:	0f b7 c0             	movzwl %ax,%eax
c1000357:	83 ec 08             	sub    $0x8,%esp
c100035a:	50                   	push   %eax
c100035b:	68 6d b1 00 c1       	push   $0xc100b16d
c1000360:	e8 96 54 00 00       	call   c10057fb <printk>
c1000365:	83 c4 10             	add    $0x10,%esp
c1000368:	90                   	nop
c1000369:	c9                   	leave  
c100036a:	c3                   	ret    

c100036b <__PANIC>:
c100036b:	55                   	push   %ebp
c100036c:	89 e5                	mov    %esp,%ebp
c100036e:	83 ec 08             	sub    $0x8,%esp
c1000371:	e8 15 0a 00 00       	call   c1000d8b <intr_disable>
c1000376:	83 ec 04             	sub    $0x4,%esp
c1000379:	ff 75 0c             	pushl  0xc(%ebp)
c100037c:	ff 75 08             	pushl  0x8(%ebp)
c100037f:	68 76 b1 00 c1       	push   $0xc100b176
c1000384:	e8 72 54 00 00       	call   c10057fb <printk>
c1000389:	83 c4 10             	add    $0x10,%esp
c100038c:	83 ec 04             	sub    $0x4,%esp
c100038f:	ff 75 14             	pushl  0x14(%ebp)
c1000392:	ff 75 10             	pushl  0x10(%ebp)
c1000395:	68 94 b1 00 c1       	push   $0xc100b194
c100039a:	e8 5c 54 00 00       	call   c10057fb <printk>
c100039f:	83 c4 10             	add    $0x10,%esp
c10003a2:	e8 02 00 00 00       	call   c10003a9 <monitor>
c10003a7:	eb f9                	jmp    c10003a2 <__PANIC+0x37>

c10003a9 <monitor>:
c10003a9:	55                   	push   %ebp
c10003aa:	89 e5                	mov    %esp,%ebp
c10003ac:	83 ec 18             	sub    $0x18,%esp
c10003af:	c7 05 68 fc 00 c1 00 	movl   $0x0,0xc100fc68
c10003b6:	00 00 00 
c10003b9:	83 ec 0c             	sub    $0xc,%esp
c10003bc:	68 3b b2 00 c1       	push   $0xc100b23b
c10003c1:	e8 fd 01 00 00       	call   c10005c3 <readline>
c10003c6:	83 c4 10             	add    $0x10,%esp
c10003c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10003cc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10003d0:	74 e7                	je     c10003b9 <monitor+0x10>
c10003d2:	83 ec 0c             	sub    $0xc,%esp
c10003d5:	ff 75 f4             	pushl  -0xc(%ebp)
c10003d8:	e8 05 00 00 00       	call   c10003e2 <run>
c10003dd:	83 c4 10             	add    $0x10,%esp
c10003e0:	eb d7                	jmp    c10003b9 <monitor+0x10>

c10003e2 <run>:
c10003e2:	55                   	push   %ebp
c10003e3:	89 e5                	mov    %esp,%ebp
c10003e5:	83 ec 18             	sub    $0x18,%esp
c10003e8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10003ef:	eb 3f                	jmp    c1000430 <run+0x4e>
c10003f1:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10003f4:	89 d0                	mov    %edx,%eax
c10003f6:	01 c0                	add    %eax,%eax
c10003f8:	01 d0                	add    %edx,%eax
c10003fa:	c1 e0 02             	shl    $0x2,%eax
c10003fd:	05 00 d0 00 c1       	add    $0xc100d000,%eax
c1000402:	8b 00                	mov    (%eax),%eax
c1000404:	83 ec 08             	sub    $0x8,%esp
c1000407:	50                   	push   %eax
c1000408:	ff 75 08             	pushl  0x8(%ebp)
c100040b:	e8 73 fd ff ff       	call   c1000183 <strcmp>
c1000410:	83 c4 10             	add    $0x10,%esp
c1000413:	85 c0                	test   %eax,%eax
c1000415:	75 15                	jne    c100042c <run+0x4a>
c1000417:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100041a:	89 d0                	mov    %edx,%eax
c100041c:	01 c0                	add    %eax,%eax
c100041e:	01 d0                	add    %edx,%eax
c1000420:	c1 e0 02             	shl    $0x2,%eax
c1000423:	05 08 d0 00 c1       	add    $0xc100d008,%eax
c1000428:	8b 00                	mov    (%eax),%eax
c100042a:	ff d0                	call   *%eax
c100042c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1000430:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000433:	83 f8 02             	cmp    $0x2,%eax
c1000436:	76 b9                	jbe    c10003f1 <run+0xf>
c1000438:	90                   	nop
c1000439:	90                   	nop
c100043a:	c9                   	leave  
c100043b:	c3                   	ret    

c100043c <instr_hello>:
c100043c:	55                   	push   %ebp
c100043d:	89 e5                	mov    %esp,%ebp
c100043f:	83 ec 08             	sub    $0x8,%esp
c1000442:	a1 04 d0 00 c1       	mov    0xc100d004,%eax
c1000447:	83 ec 08             	sub    $0x8,%esp
c100044a:	50                   	push   %eax
c100044b:	68 3e b2 00 c1       	push   $0xc100b23e
c1000450:	e8 a6 53 00 00       	call   c10057fb <printk>
c1000455:	83 c4 10             	add    $0x10,%esp
c1000458:	83 ec 0c             	sub    $0xc,%esp
c100045b:	68 44 b2 00 c1       	push   $0xc100b244
c1000460:	e8 96 53 00 00       	call   c10057fb <printk>
c1000465:	83 c4 10             	add    $0x10,%esp
c1000468:	90                   	nop
c1000469:	c9                   	leave  
c100046a:	c3                   	ret    

c100046b <instr_help>:
c100046b:	55                   	push   %ebp
c100046c:	89 e5                	mov    %esp,%ebp
c100046e:	83 ec 18             	sub    $0x18,%esp
c1000471:	a1 10 d0 00 c1       	mov    0xc100d010,%eax
c1000476:	83 ec 08             	sub    $0x8,%esp
c1000479:	50                   	push   %eax
c100047a:	68 3e b2 00 c1       	push   $0xc100b23e
c100047f:	e8 77 53 00 00       	call   c10057fb <printk>
c1000484:	83 c4 10             	add    $0x10,%esp
c1000487:	83 ec 0c             	sub    $0xc,%esp
c100048a:	68 74 b2 00 c1       	push   $0xc100b274
c100048f:	e8 67 53 00 00       	call   c10057fb <printk>
c1000494:	83 c4 10             	add    $0x10,%esp
c1000497:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100049e:	eb 3c                	jmp    c10004dc <instr_help+0x71>
c10004a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10004a3:	89 d0                	mov    %edx,%eax
c10004a5:	01 c0                	add    %eax,%eax
c10004a7:	01 d0                	add    %edx,%eax
c10004a9:	c1 e0 02             	shl    $0x2,%eax
c10004ac:	05 04 d0 00 c1       	add    $0xc100d004,%eax
c10004b1:	8b 08                	mov    (%eax),%ecx
c10004b3:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10004b6:	89 d0                	mov    %edx,%eax
c10004b8:	01 c0                	add    %eax,%eax
c10004ba:	01 d0                	add    %edx,%eax
c10004bc:	c1 e0 02             	shl    $0x2,%eax
c10004bf:	05 00 d0 00 c1       	add    $0xc100d000,%eax
c10004c4:	8b 00                	mov    (%eax),%eax
c10004c6:	83 ec 04             	sub    $0x4,%esp
c10004c9:	51                   	push   %ecx
c10004ca:	50                   	push   %eax
c10004cb:	68 93 b2 00 c1       	push   $0xc100b293
c10004d0:	e8 26 53 00 00       	call   c10057fb <printk>
c10004d5:	83 c4 10             	add    $0x10,%esp
c10004d8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10004dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10004df:	83 f8 02             	cmp    $0x2,%eax
c10004e2:	76 bc                	jbe    c10004a0 <instr_help+0x35>
c10004e4:	90                   	nop
c10004e5:	90                   	nop
c10004e6:	c9                   	leave  
c10004e7:	c3                   	ret    

c10004e8 <instr_game>:
c10004e8:	55                   	push   %ebp
c10004e9:	89 e5                	mov    %esp,%ebp
c10004eb:	83 ec 18             	sub    $0x18,%esp
c10004ee:	c7 45 ec 1c 00 00 00 	movl   $0x1c,-0x14(%ebp)
c10004f5:	a1 1c d0 00 c1       	mov    0xc100d01c,%eax
c10004fa:	83 ec 08             	sub    $0x8,%esp
c10004fd:	50                   	push   %eax
c10004fe:	68 3e b2 00 c1       	push   $0xc100b23e
c1000503:	e8 f3 52 00 00       	call   c10057fb <printk>
c1000508:	83 c4 10             	add    $0x10,%esp
c100050b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1000512:	83 ec 0c             	sub    $0xc,%esp
c1000515:	68 9e b2 00 c1       	push   $0xc100b29e
c100051a:	e8 a4 00 00 00       	call   c10005c3 <readline>
c100051f:	83 c4 10             	add    $0x10,%esp
c1000522:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1000525:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1000529:	74 e0                	je     c100050b <instr_game+0x23>
c100052b:	eb 23                	jmp    c1000550 <instr_game+0x68>
c100052d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1000530:	89 d0                	mov    %edx,%eax
c1000532:	c1 e0 02             	shl    $0x2,%eax
c1000535:	01 d0                	add    %edx,%eax
c1000537:	01 c0                	add    %eax,%eax
c1000539:	89 c2                	mov    %eax,%edx
c100053b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100053e:	0f b6 00             	movzbl (%eax),%eax
c1000541:	0f be c0             	movsbl %al,%eax
c1000544:	83 e8 30             	sub    $0x30,%eax
c1000547:	01 d0                	add    %edx,%eax
c1000549:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100054c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1000550:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000553:	0f b6 00             	movzbl (%eax),%eax
c1000556:	84 c0                	test   %al,%al
c1000558:	75 d3                	jne    c100052d <instr_game+0x45>
c100055a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100055d:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1000560:	75 12                	jne    c1000574 <instr_game+0x8c>
c1000562:	83 ec 0c             	sub    $0xc,%esp
c1000565:	68 bc b2 00 c1       	push   $0xc100b2bc
c100056a:	e8 8c 52 00 00       	call   c10057fb <printk>
c100056f:	83 c4 10             	add    $0x10,%esp
c1000572:	eb 32                	jmp    c10005a6 <instr_game+0xbe>
c1000574:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000577:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c100057a:	7d 15                	jge    c1000591 <instr_game+0xa9>
c100057c:	83 ec 0c             	sub    $0xc,%esp
c100057f:	68 eb b2 00 c1       	push   $0xc100b2eb
c1000584:	e8 72 52 00 00       	call   c10057fb <printk>
c1000589:	83 c4 10             	add    $0x10,%esp
c100058c:	e9 7a ff ff ff       	jmp    c100050b <instr_game+0x23>
c1000591:	83 ec 0c             	sub    $0xc,%esp
c1000594:	68 03 b3 00 c1       	push   $0xc100b303
c1000599:	e8 5d 52 00 00       	call   c10057fb <printk>
c100059e:	83 c4 10             	add    $0x10,%esp
c10005a1:	e9 65 ff ff ff       	jmp    c100050b <instr_game+0x23>
c10005a6:	90                   	nop
c10005a7:	c9                   	leave  
c10005a8:	c3                   	ret    

c10005a9 <getchar>:
c10005a9:	55                   	push   %ebp
c10005aa:	89 e5                	mov    %esp,%ebp
c10005ac:	83 ec 18             	sub    $0x18,%esp
c10005af:	90                   	nop
c10005b0:	e8 19 56 00 00       	call   c1005bce <cons_getc>
c10005b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10005b8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10005bc:	74 f2                	je     c10005b0 <getchar+0x7>
c10005be:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10005c1:	c9                   	leave  
c10005c2:	c3                   	ret    

c10005c3 <readline>:
c10005c3:	55                   	push   %ebp
c10005c4:	89 e5                	mov    %esp,%ebp
c10005c6:	83 ec 18             	sub    $0x18,%esp
c10005c9:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10005cd:	74 13                	je     c10005e2 <readline+0x1f>
c10005cf:	83 ec 08             	sub    $0x8,%esp
c10005d2:	ff 75 08             	pushl  0x8(%ebp)
c10005d5:	68 1a b3 00 c1       	push   $0xc100b31a
c10005da:	e8 1c 52 00 00       	call   c10057fb <printk>
c10005df:	83 c4 10             	add    $0x10,%esp
c10005e2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10005e9:	e8 bb ff ff ff       	call   c10005a9 <getchar>
c10005ee:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10005f1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c10005f5:	79 0a                	jns    c1000601 <readline+0x3e>
c10005f7:	b8 00 00 00 00       	mov    $0x0,%eax
c10005fc:	e9 82 00 00 00       	jmp    c1000683 <readline+0xc0>
c1000601:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1000605:	7e 2b                	jle    c1000632 <readline+0x6f>
c1000607:	81 7d f4 fe 03 00 00 	cmpl   $0x3fe,-0xc(%ebp)
c100060e:	7f 22                	jg     c1000632 <readline+0x6f>
c1000610:	83 ec 0c             	sub    $0xc,%esp
c1000613:	ff 75 f0             	pushl  -0x10(%ebp)
c1000616:	e8 75 55 00 00       	call   c1005b90 <cons_putc>
c100061b:	83 c4 10             	add    $0x10,%esp
c100061e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000621:	8d 50 01             	lea    0x1(%eax),%edx
c1000624:	89 55 f4             	mov    %edx,-0xc(%ebp)
c1000627:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100062a:	88 90 00 f0 00 c1    	mov    %dl,-0x3eff1000(%eax)
c1000630:	eb 4c                	jmp    c100067e <readline+0xbb>
c1000632:	83 7d f0 08          	cmpl   $0x8,-0x10(%ebp)
c1000636:	75 1a                	jne    c1000652 <readline+0x8f>
c1000638:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100063c:	7e 14                	jle    c1000652 <readline+0x8f>
c100063e:	83 ec 0c             	sub    $0xc,%esp
c1000641:	ff 75 f0             	pushl  -0x10(%ebp)
c1000644:	e8 47 55 00 00       	call   c1005b90 <cons_putc>
c1000649:	83 c4 10             	add    $0x10,%esp
c100064c:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
c1000650:	eb 2c                	jmp    c100067e <readline+0xbb>
c1000652:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
c1000656:	74 06                	je     c100065e <readline+0x9b>
c1000658:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
c100065c:	75 8b                	jne    c10005e9 <readline+0x26>
c100065e:	83 ec 0c             	sub    $0xc,%esp
c1000661:	ff 75 f0             	pushl  -0x10(%ebp)
c1000664:	e8 27 55 00 00       	call   c1005b90 <cons_putc>
c1000669:	83 c4 10             	add    $0x10,%esp
c100066c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100066f:	05 00 f0 00 c1       	add    $0xc100f000,%eax
c1000674:	c6 00 00             	movb   $0x0,(%eax)
c1000677:	b8 00 f0 00 c1       	mov    $0xc100f000,%eax
c100067c:	eb 05                	jmp    c1000683 <readline+0xc0>
c100067e:	e9 66 ff ff ff       	jmp    c10005e9 <readline+0x26>
c1000683:	c9                   	leave  
c1000684:	c3                   	ret    

c1000685 <lgdt>:
c1000685:	55                   	push   %ebp
c1000686:	89 e5                	mov    %esp,%ebp
c1000688:	8b 45 08             	mov    0x8(%ebp),%eax
c100068b:	0f 01 10             	lgdtl  (%eax)
c100068e:	b8 23 00 00 00       	mov    $0x23,%eax
c1000693:	8e e8                	mov    %eax,%gs
c1000695:	b8 23 00 00 00       	mov    $0x23,%eax
c100069a:	8e e0                	mov    %eax,%fs
c100069c:	b8 10 00 00 00       	mov    $0x10,%eax
c10006a1:	8e c0                	mov    %eax,%es
c10006a3:	b8 10 00 00 00       	mov    $0x10,%eax
c10006a8:	8e d8                	mov    %eax,%ds
c10006aa:	b8 10 00 00 00       	mov    $0x10,%eax
c10006af:	8e d0                	mov    %eax,%ss
c10006b1:	ea b8 06 00 c1 08 00 	ljmp   $0x8,$0xc10006b8
c10006b8:	90                   	nop
c10006b9:	5d                   	pop    %ebp
c10006ba:	c3                   	ret    

c10006bb <ltr>:
c10006bb:	55                   	push   %ebp
c10006bc:	89 e5                	mov    %esp,%ebp
c10006be:	83 ec 04             	sub    $0x4,%esp
c10006c1:	8b 45 08             	mov    0x8(%ebp),%eax
c10006c4:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
c10006c8:	0f b7 45 fc          	movzwl -0x4(%ebp),%eax
c10006cc:	0f 00 d8             	ltr    %ax
c10006cf:	90                   	nop
c10006d0:	c9                   	leave  
c10006d1:	c3                   	ret    

c10006d2 <gdt_init>:
c10006d2:	55                   	push   %ebp
c10006d3:	89 e5                	mov    %esp,%ebp
c10006d5:	c7 05 04 fc 00 c1 00 	movl   $0xf8000000,0xc100fc04
c10006dc:	00 00 f8 
c10006df:	66 c7 05 08 fc 00 c1 	movw   $0x10,0xc100fc08
c10006e6:	10 00 
c10006e8:	66 c7 05 68 d0 00 c1 	movw   $0x68,0xc100d068
c10006ef:	68 00 
c10006f1:	b8 00 fc 00 c1       	mov    $0xc100fc00,%eax
c10006f6:	66 a3 6a d0 00 c1    	mov    %ax,0xc100d06a
c10006fc:	b8 00 fc 00 c1       	mov    $0xc100fc00,%eax
c1000701:	c1 e8 10             	shr    $0x10,%eax
c1000704:	a2 6c d0 00 c1       	mov    %al,0xc100d06c
c1000709:	0f b6 05 6d d0 00 c1 	movzbl 0xc100d06d,%eax
c1000710:	83 e0 f0             	and    $0xfffffff0,%eax
c1000713:	83 c8 09             	or     $0x9,%eax
c1000716:	a2 6d d0 00 c1       	mov    %al,0xc100d06d
c100071b:	0f b6 05 6d d0 00 c1 	movzbl 0xc100d06d,%eax
c1000722:	83 e0 ef             	and    $0xffffffef,%eax
c1000725:	a2 6d d0 00 c1       	mov    %al,0xc100d06d
c100072a:	0f b6 05 6d d0 00 c1 	movzbl 0xc100d06d,%eax
c1000731:	83 e0 9f             	and    $0xffffff9f,%eax
c1000734:	a2 6d d0 00 c1       	mov    %al,0xc100d06d
c1000739:	0f b6 05 6d d0 00 c1 	movzbl 0xc100d06d,%eax
c1000740:	83 c8 80             	or     $0xffffff80,%eax
c1000743:	a2 6d d0 00 c1       	mov    %al,0xc100d06d
c1000748:	0f b6 05 6e d0 00 c1 	movzbl 0xc100d06e,%eax
c100074f:	83 e0 f0             	and    $0xfffffff0,%eax
c1000752:	a2 6e d0 00 c1       	mov    %al,0xc100d06e
c1000757:	0f b6 05 6e d0 00 c1 	movzbl 0xc100d06e,%eax
c100075e:	83 e0 ef             	and    $0xffffffef,%eax
c1000761:	a2 6e d0 00 c1       	mov    %al,0xc100d06e
c1000766:	0f b6 05 6e d0 00 c1 	movzbl 0xc100d06e,%eax
c100076d:	83 e0 df             	and    $0xffffffdf,%eax
c1000770:	a2 6e d0 00 c1       	mov    %al,0xc100d06e
c1000775:	0f b6 05 6e d0 00 c1 	movzbl 0xc100d06e,%eax
c100077c:	83 c8 40             	or     $0x40,%eax
c100077f:	a2 6e d0 00 c1       	mov    %al,0xc100d06e
c1000784:	0f b6 05 6e d0 00 c1 	movzbl 0xc100d06e,%eax
c100078b:	83 e0 7f             	and    $0x7f,%eax
c100078e:	a2 6e d0 00 c1       	mov    %al,0xc100d06e
c1000793:	b8 00 fc 00 c1       	mov    $0xc100fc00,%eax
c1000798:	c1 e8 18             	shr    $0x18,%eax
c100079b:	a2 6f d0 00 c1       	mov    %al,0xc100d06f
c10007a0:	68 78 d0 00 c1       	push   $0xc100d078
c10007a5:	e8 db fe ff ff       	call   c1000685 <lgdt>
c10007aa:	83 c4 04             	add    $0x4,%esp
c10007ad:	6a 28                	push   $0x28
c10007af:	e8 07 ff ff ff       	call   c10006bb <ltr>
c10007b4:	83 c4 04             	add    $0x4,%esp
c10007b7:	90                   	nop
c10007b8:	c9                   	leave  
c10007b9:	c3                   	ret    

c10007ba <lidt>:
c10007ba:	55                   	push   %ebp
c10007bb:	89 e5                	mov    %esp,%ebp
c10007bd:	8b 45 08             	mov    0x8(%ebp),%eax
c10007c0:	0f 01 18             	lidtl  (%eax)
c10007c3:	90                   	nop
c10007c4:	5d                   	pop    %ebp
c10007c5:	c3                   	ret    

c10007c6 <idt_init>:
c10007c6:	55                   	push   %ebp
c10007c7:	89 e5                	mov    %esp,%ebp
c10007c9:	83 ec 10             	sub    $0x10,%esp
c10007cc:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c10007d3:	e9 c3 00 00 00       	jmp    c100089b <idt_init+0xd5>
c10007d8:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007db:	8b 04 85 00 d1 00 c1 	mov    -0x3eff2f00(,%eax,4),%eax
c10007e2:	89 c2                	mov    %eax,%edx
c10007e4:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007e7:	66 89 14 c5 00 f4 00 	mov    %dx,-0x3eff0c00(,%eax,8)
c10007ee:	c1 
c10007ef:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007f2:	66 c7 04 c5 02 f4 00 	movw   $0x8,-0x3eff0bfe(,%eax,8)
c10007f9:	c1 08 00 
c10007fc:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007ff:	0f b6 14 c5 04 f4 00 	movzbl -0x3eff0bfc(,%eax,8),%edx
c1000806:	c1 
c1000807:	83 e2 e0             	and    $0xffffffe0,%edx
c100080a:	88 14 c5 04 f4 00 c1 	mov    %dl,-0x3eff0bfc(,%eax,8)
c1000811:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000814:	0f b6 14 c5 04 f4 00 	movzbl -0x3eff0bfc(,%eax,8),%edx
c100081b:	c1 
c100081c:	83 e2 1f             	and    $0x1f,%edx
c100081f:	88 14 c5 04 f4 00 c1 	mov    %dl,-0x3eff0bfc(,%eax,8)
c1000826:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000829:	0f b6 14 c5 05 f4 00 	movzbl -0x3eff0bfb(,%eax,8),%edx
c1000830:	c1 
c1000831:	83 e2 f0             	and    $0xfffffff0,%edx
c1000834:	83 ca 0e             	or     $0xe,%edx
c1000837:	88 14 c5 05 f4 00 c1 	mov    %dl,-0x3eff0bfb(,%eax,8)
c100083e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000841:	0f b6 14 c5 05 f4 00 	movzbl -0x3eff0bfb(,%eax,8),%edx
c1000848:	c1 
c1000849:	83 e2 ef             	and    $0xffffffef,%edx
c100084c:	88 14 c5 05 f4 00 c1 	mov    %dl,-0x3eff0bfb(,%eax,8)
c1000853:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000856:	0f b6 14 c5 05 f4 00 	movzbl -0x3eff0bfb(,%eax,8),%edx
c100085d:	c1 
c100085e:	83 e2 9f             	and    $0xffffff9f,%edx
c1000861:	88 14 c5 05 f4 00 c1 	mov    %dl,-0x3eff0bfb(,%eax,8)
c1000868:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100086b:	0f b6 14 c5 05 f4 00 	movzbl -0x3eff0bfb(,%eax,8),%edx
c1000872:	c1 
c1000873:	83 ca 80             	or     $0xffffff80,%edx
c1000876:	88 14 c5 05 f4 00 c1 	mov    %dl,-0x3eff0bfb(,%eax,8)
c100087d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000880:	8b 04 85 00 d1 00 c1 	mov    -0x3eff2f00(,%eax,4),%eax
c1000887:	c1 e8 10             	shr    $0x10,%eax
c100088a:	89 c2                	mov    %eax,%edx
c100088c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100088f:	66 89 14 c5 06 f4 00 	mov    %dx,-0x3eff0bfa(,%eax,8)
c1000896:	c1 
c1000897:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100089b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100089e:	3d ff 00 00 00       	cmp    $0xff,%eax
c10008a3:	0f 86 2f ff ff ff    	jbe    c10007d8 <idt_init+0x12>
c10008a9:	a1 00 d3 00 c1       	mov    0xc100d300,%eax
c10008ae:	66 a3 00 f8 00 c1    	mov    %ax,0xc100f800
c10008b4:	66 c7 05 02 f8 00 c1 	movw   $0x8,0xc100f802
c10008bb:	08 00 
c10008bd:	0f b6 05 04 f8 00 c1 	movzbl 0xc100f804,%eax
c10008c4:	83 e0 e0             	and    $0xffffffe0,%eax
c10008c7:	a2 04 f8 00 c1       	mov    %al,0xc100f804
c10008cc:	0f b6 05 04 f8 00 c1 	movzbl 0xc100f804,%eax
c10008d3:	83 e0 1f             	and    $0x1f,%eax
c10008d6:	a2 04 f8 00 c1       	mov    %al,0xc100f804
c10008db:	0f b6 05 05 f8 00 c1 	movzbl 0xc100f805,%eax
c10008e2:	83 c8 0f             	or     $0xf,%eax
c10008e5:	a2 05 f8 00 c1       	mov    %al,0xc100f805
c10008ea:	0f b6 05 05 f8 00 c1 	movzbl 0xc100f805,%eax
c10008f1:	83 e0 ef             	and    $0xffffffef,%eax
c10008f4:	a2 05 f8 00 c1       	mov    %al,0xc100f805
c10008f9:	0f b6 05 05 f8 00 c1 	movzbl 0xc100f805,%eax
c1000900:	83 c8 60             	or     $0x60,%eax
c1000903:	a2 05 f8 00 c1       	mov    %al,0xc100f805
c1000908:	0f b6 05 05 f8 00 c1 	movzbl 0xc100f805,%eax
c100090f:	83 c8 80             	or     $0xffffff80,%eax
c1000912:	a2 05 f8 00 c1       	mov    %al,0xc100f805
c1000917:	a1 00 d3 00 c1       	mov    0xc100d300,%eax
c100091c:	c1 e8 10             	shr    $0x10,%eax
c100091f:	66 a3 06 f8 00 c1    	mov    %ax,0xc100f806
c1000925:	a1 80 d2 00 c1       	mov    0xc100d280,%eax
c100092a:	66 a3 00 f7 00 c1    	mov    %ax,0xc100f700
c1000930:	66 c7 05 02 f7 00 c1 	movw   $0x8,0xc100f702
c1000937:	08 00 
c1000939:	0f b6 05 04 f7 00 c1 	movzbl 0xc100f704,%eax
c1000940:	83 e0 e0             	and    $0xffffffe0,%eax
c1000943:	a2 04 f7 00 c1       	mov    %al,0xc100f704
c1000948:	0f b6 05 04 f7 00 c1 	movzbl 0xc100f704,%eax
c100094f:	83 e0 1f             	and    $0x1f,%eax
c1000952:	a2 04 f7 00 c1       	mov    %al,0xc100f704
c1000957:	0f b6 05 05 f7 00 c1 	movzbl 0xc100f705,%eax
c100095e:	83 c8 0f             	or     $0xf,%eax
c1000961:	a2 05 f7 00 c1       	mov    %al,0xc100f705
c1000966:	0f b6 05 05 f7 00 c1 	movzbl 0xc100f705,%eax
c100096d:	83 e0 ef             	and    $0xffffffef,%eax
c1000970:	a2 05 f7 00 c1       	mov    %al,0xc100f705
c1000975:	0f b6 05 05 f7 00 c1 	movzbl 0xc100f705,%eax
c100097c:	83 c8 60             	or     $0x60,%eax
c100097f:	a2 05 f7 00 c1       	mov    %al,0xc100f705
c1000984:	0f b6 05 05 f7 00 c1 	movzbl 0xc100f705,%eax
c100098b:	83 c8 80             	or     $0xffffff80,%eax
c100098e:	a2 05 f7 00 c1       	mov    %al,0xc100f705
c1000993:	a1 80 d2 00 c1       	mov    0xc100d280,%eax
c1000998:	c1 e8 10             	shr    $0x10,%eax
c100099b:	66 a3 06 f7 00 c1    	mov    %ax,0xc100f706
c10009a1:	68 80 d0 00 c1       	push   $0xc100d080
c10009a6:	e8 0f fe ff ff       	call   c10007ba <lidt>
c10009ab:	83 c4 04             	add    $0x4,%esp
c10009ae:	90                   	nop
c10009af:	c9                   	leave  
c10009b0:	c3                   	ret    

c10009b1 <set_ts_esp0>:
c10009b1:	55                   	push   %ebp
c10009b2:	89 e5                	mov    %esp,%ebp
c10009b4:	8b 45 08             	mov    0x8(%ebp),%eax
c10009b7:	a3 04 fc 00 c1       	mov    %eax,0xc100fc04
c10009bc:	90                   	nop
c10009bd:	5d                   	pop    %ebp
c10009be:	c3                   	ret    

c10009bf <hash32>:
c10009bf:	55                   	push   %ebp
c10009c0:	89 e5                	mov    %esp,%ebp
c10009c2:	83 ec 10             	sub    $0x10,%esp
c10009c5:	8b 45 08             	mov    0x8(%ebp),%eax
c10009c8:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10009ce:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10009d1:	b8 20 00 00 00       	mov    $0x20,%eax
c10009d6:	2b 45 0c             	sub    0xc(%ebp),%eax
c10009d9:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10009dc:	89 c1                	mov    %eax,%ecx
c10009de:	d3 ea                	shr    %cl,%edx
c10009e0:	89 d0                	mov    %edx,%eax
c10009e2:	c9                   	leave  
c10009e3:	c3                   	ret    

c10009e4 <print_regs>:
c10009e4:	55                   	push   %ebp
c10009e5:	89 e5                	mov    %esp,%ebp
c10009e7:	83 ec 08             	sub    $0x8,%esp
c10009ea:	8b 45 08             	mov    0x8(%ebp),%eax
c10009ed:	8b 00                	mov    (%eax),%eax
c10009ef:	83 ec 08             	sub    $0x8,%esp
c10009f2:	50                   	push   %eax
c10009f3:	68 52 b3 00 c1       	push   $0xc100b352
c10009f8:	e8 fe 4d 00 00       	call   c10057fb <printk>
c10009fd:	83 c4 10             	add    $0x10,%esp
c1000a00:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a03:	8b 40 04             	mov    0x4(%eax),%eax
c1000a06:	83 ec 08             	sub    $0x8,%esp
c1000a09:	50                   	push   %eax
c1000a0a:	68 62 b3 00 c1       	push   $0xc100b362
c1000a0f:	e8 e7 4d 00 00       	call   c10057fb <printk>
c1000a14:	83 c4 10             	add    $0x10,%esp
c1000a17:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a1a:	8b 40 08             	mov    0x8(%eax),%eax
c1000a1d:	83 ec 08             	sub    $0x8,%esp
c1000a20:	50                   	push   %eax
c1000a21:	68 72 b3 00 c1       	push   $0xc100b372
c1000a26:	e8 d0 4d 00 00       	call   c10057fb <printk>
c1000a2b:	83 c4 10             	add    $0x10,%esp
c1000a2e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a31:	8b 40 0c             	mov    0xc(%eax),%eax
c1000a34:	83 ec 08             	sub    $0x8,%esp
c1000a37:	50                   	push   %eax
c1000a38:	68 82 b3 00 c1       	push   $0xc100b382
c1000a3d:	e8 b9 4d 00 00       	call   c10057fb <printk>
c1000a42:	83 c4 10             	add    $0x10,%esp
c1000a45:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a48:	8b 40 10             	mov    0x10(%eax),%eax
c1000a4b:	83 ec 08             	sub    $0x8,%esp
c1000a4e:	50                   	push   %eax
c1000a4f:	68 92 b3 00 c1       	push   $0xc100b392
c1000a54:	e8 a2 4d 00 00       	call   c10057fb <printk>
c1000a59:	83 c4 10             	add    $0x10,%esp
c1000a5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a5f:	8b 40 14             	mov    0x14(%eax),%eax
c1000a62:	83 ec 08             	sub    $0x8,%esp
c1000a65:	50                   	push   %eax
c1000a66:	68 a2 b3 00 c1       	push   $0xc100b3a2
c1000a6b:	e8 8b 4d 00 00       	call   c10057fb <printk>
c1000a70:	83 c4 10             	add    $0x10,%esp
c1000a73:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a76:	8b 40 18             	mov    0x18(%eax),%eax
c1000a79:	83 ec 08             	sub    $0x8,%esp
c1000a7c:	50                   	push   %eax
c1000a7d:	68 b2 b3 00 c1       	push   $0xc100b3b2
c1000a82:	e8 74 4d 00 00       	call   c10057fb <printk>
c1000a87:	83 c4 10             	add    $0x10,%esp
c1000a8a:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a8d:	8b 40 1c             	mov    0x1c(%eax),%eax
c1000a90:	83 ec 08             	sub    $0x8,%esp
c1000a93:	50                   	push   %eax
c1000a94:	68 c2 b3 00 c1       	push   $0xc100b3c2
c1000a99:	e8 5d 4d 00 00       	call   c10057fb <printk>
c1000a9e:	83 c4 10             	add    $0x10,%esp
c1000aa1:	90                   	nop
c1000aa2:	c9                   	leave  
c1000aa3:	c3                   	ret    

c1000aa4 <print_trapframe>:
c1000aa4:	55                   	push   %ebp
c1000aa5:	89 e5                	mov    %esp,%ebp
c1000aa7:	83 ec 18             	sub    $0x18,%esp
c1000aaa:	8b 45 08             	mov    0x8(%ebp),%eax
c1000aad:	83 ec 0c             	sub    $0xc,%esp
c1000ab0:	50                   	push   %eax
c1000ab1:	e8 2e ff ff ff       	call   c10009e4 <print_regs>
c1000ab6:	83 c4 10             	add    $0x10,%esp
c1000ab9:	8b 45 08             	mov    0x8(%ebp),%eax
c1000abc:	0f b7 40 2c          	movzwl 0x2c(%eax),%eax
c1000ac0:	0f b7 c0             	movzwl %ax,%eax
c1000ac3:	83 ec 08             	sub    $0x8,%esp
c1000ac6:	50                   	push   %eax
c1000ac7:	68 d2 b3 00 c1       	push   $0xc100b3d2
c1000acc:	e8 2a 4d 00 00       	call   c10057fb <printk>
c1000ad1:	83 c4 10             	add    $0x10,%esp
c1000ad4:	8b 45 08             	mov    0x8(%ebp),%eax
c1000ad7:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1000adb:	0f b7 c0             	movzwl %ax,%eax
c1000ade:	83 ec 08             	sub    $0x8,%esp
c1000ae1:	50                   	push   %eax
c1000ae2:	68 e6 b3 00 c1       	push   $0xc100b3e6
c1000ae7:	e8 0f 4d 00 00       	call   c10057fb <printk>
c1000aec:	83 c4 10             	add    $0x10,%esp
c1000aef:	8b 45 08             	mov    0x8(%ebp),%eax
c1000af2:	0f b7 40 24          	movzwl 0x24(%eax),%eax
c1000af6:	0f b7 c0             	movzwl %ax,%eax
c1000af9:	83 ec 08             	sub    $0x8,%esp
c1000afc:	50                   	push   %eax
c1000afd:	68 fa b3 00 c1       	push   $0xc100b3fa
c1000b02:	e8 f4 4c 00 00       	call   c10057fb <printk>
c1000b07:	83 c4 10             	add    $0x10,%esp
c1000b0a:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b0d:	0f b7 40 20          	movzwl 0x20(%eax),%eax
c1000b11:	0f b7 c0             	movzwl %ax,%eax
c1000b14:	83 ec 08             	sub    $0x8,%esp
c1000b17:	50                   	push   %eax
c1000b18:	68 0e b4 00 c1       	push   $0xc100b40e
c1000b1d:	e8 d9 4c 00 00       	call   c10057fb <printk>
c1000b22:	83 c4 10             	add    $0x10,%esp
c1000b25:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b28:	8b 40 34             	mov    0x34(%eax),%eax
c1000b2b:	83 ec 08             	sub    $0x8,%esp
c1000b2e:	50                   	push   %eax
c1000b2f:	68 22 b4 00 c1       	push   $0xc100b422
c1000b34:	e8 c2 4c 00 00       	call   c10057fb <printk>
c1000b39:	83 c4 10             	add    $0x10,%esp
c1000b3c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b3f:	8b 40 38             	mov    0x38(%eax),%eax
c1000b42:	83 ec 08             	sub    $0x8,%esp
c1000b45:	50                   	push   %eax
c1000b46:	68 32 b4 00 c1       	push   $0xc100b432
c1000b4b:	e8 ab 4c 00 00       	call   c10057fb <printk>
c1000b50:	83 c4 10             	add    $0x10,%esp
c1000b53:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b56:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
c1000b5a:	0f b7 c0             	movzwl %ax,%eax
c1000b5d:	83 ec 08             	sub    $0x8,%esp
c1000b60:	50                   	push   %eax
c1000b61:	68 42 b4 00 c1       	push   $0xc100b442
c1000b66:	e8 90 4c 00 00       	call   c10057fb <printk>
c1000b6b:	83 c4 10             	add    $0x10,%esp
c1000b6e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b71:	8b 40 40             	mov    0x40(%eax),%eax
c1000b74:	83 ec 08             	sub    $0x8,%esp
c1000b77:	50                   	push   %eax
c1000b78:	68 56 b4 00 c1       	push   $0xc100b456
c1000b7d:	e8 79 4c 00 00       	call   c10057fb <printk>
c1000b82:	83 c4 10             	add    $0x10,%esp
c1000b85:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1000b8c:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
c1000b93:	eb 3f                	jmp    c1000bd4 <print_trapframe+0x130>
c1000b95:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b98:	8b 50 40             	mov    0x40(%eax),%edx
c1000b9b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000b9e:	21 d0                	and    %edx,%eax
c1000ba0:	85 c0                	test   %eax,%eax
c1000ba2:	74 29                	je     c1000bcd <print_trapframe+0x129>
c1000ba4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000ba7:	8b 04 85 a0 d0 00 c1 	mov    -0x3eff2f60(,%eax,4),%eax
c1000bae:	85 c0                	test   %eax,%eax
c1000bb0:	74 1b                	je     c1000bcd <print_trapframe+0x129>
c1000bb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000bb5:	8b 04 85 a0 d0 00 c1 	mov    -0x3eff2f60(,%eax,4),%eax
c1000bbc:	83 ec 08             	sub    $0x8,%esp
c1000bbf:	50                   	push   %eax
c1000bc0:	68 66 b4 00 c1       	push   $0xc100b466
c1000bc5:	e8 31 4c 00 00       	call   c10057fb <printk>
c1000bca:	83 c4 10             	add    $0x10,%esp
c1000bcd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1000bd1:	d1 65 f0             	shll   -0x10(%ebp)
c1000bd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000bd7:	83 f8 17             	cmp    $0x17,%eax
c1000bda:	76 b9                	jbe    c1000b95 <print_trapframe+0xf1>
c1000bdc:	8b 45 08             	mov    0x8(%ebp),%eax
c1000bdf:	8b 40 40             	mov    0x40(%eax),%eax
c1000be2:	c1 e8 0c             	shr    $0xc,%eax
c1000be5:	83 e0 03             	and    $0x3,%eax
c1000be8:	83 ec 08             	sub    $0x8,%esp
c1000beb:	50                   	push   %eax
c1000bec:	68 6a b4 00 c1       	push   $0xc100b46a
c1000bf1:	e8 05 4c 00 00       	call   c10057fb <printk>
c1000bf6:	83 c4 10             	add    $0x10,%esp
c1000bf9:	eb fe                	jmp    c1000bf9 <print_trapframe+0x155>

c1000bfb <trap_dispatch>:
c1000bfb:	55                   	push   %ebp
c1000bfc:	89 e5                	mov    %esp,%ebp
c1000bfe:	83 ec 18             	sub    $0x18,%esp
c1000c01:	8b 45 08             	mov    0x8(%ebp),%eax
c1000c04:	8b 40 30             	mov    0x30(%eax),%eax
c1000c07:	3d 80 00 00 00       	cmp    $0x80,%eax
c1000c0c:	74 5f                	je     c1000c6d <trap_dispatch+0x72>
c1000c0e:	3d 80 00 00 00       	cmp    $0x80,%eax
c1000c13:	0f 87 f5 00 00 00    	ja     c1000d0e <trap_dispatch+0x113>
c1000c19:	83 f8 2f             	cmp    $0x2f,%eax
c1000c1c:	77 1e                	ja     c1000c3c <trap_dispatch+0x41>
c1000c1e:	83 f8 0e             	cmp    $0xe,%eax
c1000c21:	0f 82 e7 00 00 00    	jb     c1000d0e <trap_dispatch+0x113>
c1000c27:	83 e8 0e             	sub    $0xe,%eax
c1000c2a:	83 f8 21             	cmp    $0x21,%eax
c1000c2d:	0f 87 db 00 00 00    	ja     c1000d0e <trap_dispatch+0x113>
c1000c33:	8b 04 85 a0 b4 00 c1 	mov    -0x3eff4b60(,%eax,4),%eax
c1000c3a:	ff e0                	jmp    *%eax
c1000c3c:	83 f8 60             	cmp    $0x60,%eax
c1000c3f:	0f 85 c9 00 00 00    	jne    c1000d0e <trap_dispatch+0x113>
c1000c45:	83 ec 0c             	sub    $0xc,%esp
c1000c48:	68 73 b4 00 c1       	push   $0xc100b473
c1000c4d:	e8 a9 4b 00 00       	call   c10057fb <printk>
c1000c52:	83 c4 10             	add    $0x10,%esp
c1000c55:	e9 cd 00 00 00       	jmp    c1000d27 <trap_dispatch+0x12c>
c1000c5a:	83 ec 0c             	sub    $0xc,%esp
c1000c5d:	ff 75 08             	pushl  0x8(%ebp)
c1000c60:	e8 3f fe ff ff       	call   c1000aa4 <print_trapframe>
c1000c65:	83 c4 10             	add    $0x10,%esp
c1000c68:	e9 ba 00 00 00       	jmp    c1000d27 <trap_dispatch+0x12c>
c1000c6d:	83 ec 0c             	sub    $0xc,%esp
c1000c70:	ff 75 08             	pushl  0x8(%ebp)
c1000c73:	e8 61 10 00 00       	call   c1001cd9 <syscall_trap>
c1000c78:	83 c4 10             	add    $0x10,%esp
c1000c7b:	e9 a7 00 00 00       	jmp    c1000d27 <trap_dispatch+0x12c>
c1000c80:	a1 2c 42 a1 c1       	mov    0xc1a1422c,%eax
c1000c85:	83 c0 01             	add    $0x1,%eax
c1000c88:	a3 2c 42 a1 c1       	mov    %eax,0xc1a1422c
c1000c8d:	8b 0d 2c 42 a1 c1    	mov    0xc1a1422c,%ecx
c1000c93:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
c1000c98:	89 c8                	mov    %ecx,%eax
c1000c9a:	f7 e2                	mul    %edx
c1000c9c:	89 d0                	mov    %edx,%eax
c1000c9e:	c1 e8 05             	shr    $0x5,%eax
c1000ca1:	6b c0 64             	imul   $0x64,%eax,%eax
c1000ca4:	29 c1                	sub    %eax,%ecx
c1000ca6:	89 c8                	mov    %ecx,%eax
c1000ca8:	85 c0                	test   %eax,%eax
c1000caa:	75 1b                	jne    c1000cc7 <trap_dispatch+0xcc>
c1000cac:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1000cb1:	8b 50 04             	mov    0x4(%eax),%edx
c1000cb4:	83 ea 01             	sub    $0x1,%edx
c1000cb7:	89 50 04             	mov    %edx,0x4(%eax)
c1000cba:	a1 28 42 a1 c1       	mov    0xc1a14228,%eax
c1000cbf:	83 c0 01             	add    $0x1,%eax
c1000cc2:	a3 28 42 a1 c1       	mov    %eax,0xc1a14228
c1000cc7:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1000ccc:	8b 40 04             	mov    0x4(%eax),%eax
c1000ccf:	85 c0                	test   %eax,%eax
c1000cd1:	75 50                	jne    c1000d23 <trap_dispatch+0x128>
c1000cd3:	e8 eb 30 00 00       	call   c1003dc3 <schedule>
c1000cd8:	eb 49                	jmp    c1000d23 <trap_dispatch+0x128>
c1000cda:	e8 ef 4e 00 00       	call   c1005bce <cons_getc>
c1000cdf:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000ce2:	eb 43                	jmp    c1000d27 <trap_dispatch+0x12c>
c1000ce4:	e8 e5 4e 00 00       	call   c1005bce <cons_getc>
c1000ce9:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000cec:	0f b6 05 b4 1c 01 c1 	movzbl 0xc1011cb4,%eax
c1000cf3:	84 c0                	test   %al,%al
c1000cf5:	75 2f                	jne    c1000d26 <trap_dispatch+0x12b>
c1000cf7:	83 ec 0c             	sub    $0xc,%esp
c1000cfa:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1000cff:	e8 8b 50 00 00       	call   c1005d8f <sema_up>
c1000d04:	83 c4 10             	add    $0x10,%esp
c1000d07:	e8 b7 30 00 00       	call   c1003dc3 <schedule>
c1000d0c:	eb 18                	jmp    c1000d26 <trap_dispatch+0x12b>
c1000d0e:	83 ec 0c             	sub    $0xc,%esp
c1000d11:	68 83 b4 00 c1       	push   $0xc100b483
c1000d16:	e8 e0 4a 00 00       	call   c10057fb <printk>
c1000d1b:	83 c4 10             	add    $0x10,%esp
c1000d1e:	eb 07                	jmp    c1000d27 <trap_dispatch+0x12c>
c1000d20:	90                   	nop
c1000d21:	eb 04                	jmp    c1000d27 <trap_dispatch+0x12c>
c1000d23:	90                   	nop
c1000d24:	eb 01                	jmp    c1000d27 <trap_dispatch+0x12c>
c1000d26:	90                   	nop
c1000d27:	90                   	nop
c1000d28:	c9                   	leave  
c1000d29:	c3                   	ret    

c1000d2a <trap>:
c1000d2a:	55                   	push   %ebp
c1000d2b:	89 e5                	mov    %esp,%ebp
c1000d2d:	83 ec 08             	sub    $0x8,%esp
c1000d30:	83 ec 0c             	sub    $0xc,%esp
c1000d33:	ff 75 08             	pushl  0x8(%ebp)
c1000d36:	e8 c0 fe ff ff       	call   c1000bfb <trap_dispatch>
c1000d3b:	83 c4 10             	add    $0x10,%esp
c1000d3e:	90                   	nop
c1000d3f:	c9                   	leave  
c1000d40:	c3                   	ret    

c1000d41 <disable_interupt>:
c1000d41:	55                   	push   %ebp
c1000d42:	89 e5                	mov    %esp,%ebp
c1000d44:	fa                   	cli    
c1000d45:	90                   	nop
c1000d46:	5d                   	pop    %ebp
c1000d47:	c3                   	ret    

c1000d48 <enable_interupt>:
c1000d48:	55                   	push   %ebp
c1000d49:	89 e5                	mov    %esp,%ebp
c1000d4b:	fb                   	sti    
c1000d4c:	90                   	nop
c1000d4d:	5d                   	pop    %ebp
c1000d4e:	c3                   	ret    

c1000d4f <get_now_intr_status>:
c1000d4f:	55                   	push   %ebp
c1000d50:	89 e5                	mov    %esp,%ebp
c1000d52:	83 ec 10             	sub    $0x10,%esp
c1000d55:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1000d5c:	9c                   	pushf  
c1000d5d:	58                   	pop    %eax
c1000d5e:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1000d61:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000d64:	c1 e8 09             	shr    $0x9,%eax
c1000d67:	83 e0 01             	and    $0x1,%eax
c1000d6a:	c9                   	leave  
c1000d6b:	c3                   	ret    

c1000d6c <intr_enable>:
c1000d6c:	55                   	push   %ebp
c1000d6d:	89 e5                	mov    %esp,%ebp
c1000d6f:	e8 db ff ff ff       	call   c1000d4f <get_now_intr_status>
c1000d74:	85 c0                	test   %eax,%eax
c1000d76:	75 0c                	jne    c1000d84 <intr_enable+0x18>
c1000d78:	e8 cb ff ff ff       	call   c1000d48 <enable_interupt>
c1000d7d:	b8 00 00 00 00       	mov    $0x0,%eax
c1000d82:	eb 05                	jmp    c1000d89 <intr_enable+0x1d>
c1000d84:	b8 01 00 00 00       	mov    $0x1,%eax
c1000d89:	5d                   	pop    %ebp
c1000d8a:	c3                   	ret    

c1000d8b <intr_disable>:
c1000d8b:	55                   	push   %ebp
c1000d8c:	89 e5                	mov    %esp,%ebp
c1000d8e:	e8 bc ff ff ff       	call   c1000d4f <get_now_intr_status>
c1000d93:	83 f8 01             	cmp    $0x1,%eax
c1000d96:	75 0c                	jne    c1000da4 <intr_disable+0x19>
c1000d98:	e8 a4 ff ff ff       	call   c1000d41 <disable_interupt>
c1000d9d:	b8 01 00 00 00       	mov    $0x1,%eax
c1000da2:	eb 05                	jmp    c1000da9 <intr_disable+0x1e>
c1000da4:	b8 00 00 00 00       	mov    $0x0,%eax
c1000da9:	5d                   	pop    %ebp
c1000daa:	c3                   	ret    

c1000dab <intr_save>:
c1000dab:	55                   	push   %ebp
c1000dac:	89 e5                	mov    %esp,%ebp
c1000dae:	83 ec 10             	sub    $0x10,%esp
c1000db1:	e8 d5 ff ff ff       	call   c1000d8b <intr_disable>
c1000db6:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1000db9:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000dbc:	c9                   	leave  
c1000dbd:	c3                   	ret    

c1000dbe <intr_restore>:
c1000dbe:	55                   	push   %ebp
c1000dbf:	89 e5                	mov    %esp,%ebp
c1000dc1:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1000dc5:	75 05                	jne    c1000dcc <intr_restore+0xe>
c1000dc7:	e8 7c ff ff ff       	call   c1000d48 <enable_interupt>
c1000dcc:	90                   	nop
c1000dcd:	5d                   	pop    %ebp
c1000dce:	c3                   	ret    

c1000dcf <__alltraps>:
c1000dcf:	1e                   	push   %ds
c1000dd0:	06                   	push   %es
c1000dd1:	0f a0                	push   %fs
c1000dd3:	0f a8                	push   %gs
c1000dd5:	60                   	pusha  
c1000dd6:	b8 10 00 00 00       	mov    $0x10,%eax
c1000ddb:	8e d8                	mov    %eax,%ds
c1000ddd:	8e c0                	mov    %eax,%es
c1000ddf:	54                   	push   %esp
c1000de0:	e8 45 ff ff ff       	call   c1000d2a <trap>
c1000de5:	5c                   	pop    %esp

c1000de6 <__trapret>:
c1000de6:	61                   	popa   
c1000de7:	0f a9                	pop    %gs
c1000de9:	0f a1                	pop    %fs
c1000deb:	07                   	pop    %es
c1000dec:	1f                   	pop    %ds
c1000ded:	83 c4 08             	add    $0x8,%esp
c1000df0:	cf                   	iret   

c1000df1 <forkrets>:
c1000df1:	8b 64 24 04          	mov    0x4(%esp),%esp
c1000df5:	eb ef                	jmp    c1000de6 <__trapret>

c1000df7 <vector0>:
c1000df7:	6a 00                	push   $0x0
c1000df9:	6a 00                	push   $0x0
c1000dfb:	e9 cf ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e00 <vector1>:
c1000e00:	6a 00                	push   $0x0
c1000e02:	6a 01                	push   $0x1
c1000e04:	e9 c6 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e09 <vector2>:
c1000e09:	6a 00                	push   $0x0
c1000e0b:	6a 02                	push   $0x2
c1000e0d:	e9 bd ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e12 <vector3>:
c1000e12:	6a 00                	push   $0x0
c1000e14:	6a 03                	push   $0x3
c1000e16:	e9 b4 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e1b <vector4>:
c1000e1b:	6a 00                	push   $0x0
c1000e1d:	6a 04                	push   $0x4
c1000e1f:	e9 ab ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e24 <vector5>:
c1000e24:	6a 00                	push   $0x0
c1000e26:	6a 05                	push   $0x5
c1000e28:	e9 a2 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e2d <vector6>:
c1000e2d:	6a 00                	push   $0x0
c1000e2f:	6a 06                	push   $0x6
c1000e31:	e9 99 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e36 <vector7>:
c1000e36:	6a 00                	push   $0x0
c1000e38:	6a 07                	push   $0x7
c1000e3a:	e9 90 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e3f <vector8>:
c1000e3f:	6a 08                	push   $0x8
c1000e41:	e9 89 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e46 <vector9>:
c1000e46:	6a 09                	push   $0x9
c1000e48:	e9 82 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e4d <vector10>:
c1000e4d:	6a 0a                	push   $0xa
c1000e4f:	e9 7b ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e54 <vector11>:
c1000e54:	6a 0b                	push   $0xb
c1000e56:	e9 74 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e5b <vector12>:
c1000e5b:	6a 0c                	push   $0xc
c1000e5d:	e9 6d ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e62 <vector13>:
c1000e62:	6a 0d                	push   $0xd
c1000e64:	e9 66 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e69 <vector14>:
c1000e69:	6a 0e                	push   $0xe
c1000e6b:	e9 5f ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e70 <vector15>:
c1000e70:	6a 00                	push   $0x0
c1000e72:	6a 0f                	push   $0xf
c1000e74:	e9 56 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e79 <vector16>:
c1000e79:	6a 00                	push   $0x0
c1000e7b:	6a 10                	push   $0x10
c1000e7d:	e9 4d ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e82 <vector17>:
c1000e82:	6a 11                	push   $0x11
c1000e84:	e9 46 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e89 <vector18>:
c1000e89:	6a 00                	push   $0x0
c1000e8b:	6a 12                	push   $0x12
c1000e8d:	e9 3d ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e92 <vector19>:
c1000e92:	6a 00                	push   $0x0
c1000e94:	6a 13                	push   $0x13
c1000e96:	e9 34 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000e9b <vector20>:
c1000e9b:	6a 00                	push   $0x0
c1000e9d:	6a 14                	push   $0x14
c1000e9f:	e9 2b ff ff ff       	jmp    c1000dcf <__alltraps>

c1000ea4 <vector21>:
c1000ea4:	6a 00                	push   $0x0
c1000ea6:	6a 15                	push   $0x15
c1000ea8:	e9 22 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000ead <vector22>:
c1000ead:	6a 00                	push   $0x0
c1000eaf:	6a 16                	push   $0x16
c1000eb1:	e9 19 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000eb6 <vector23>:
c1000eb6:	6a 00                	push   $0x0
c1000eb8:	6a 17                	push   $0x17
c1000eba:	e9 10 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000ebf <vector24>:
c1000ebf:	6a 00                	push   $0x0
c1000ec1:	6a 18                	push   $0x18
c1000ec3:	e9 07 ff ff ff       	jmp    c1000dcf <__alltraps>

c1000ec8 <vector25>:
c1000ec8:	6a 00                	push   $0x0
c1000eca:	6a 19                	push   $0x19
c1000ecc:	e9 fe fe ff ff       	jmp    c1000dcf <__alltraps>

c1000ed1 <vector26>:
c1000ed1:	6a 00                	push   $0x0
c1000ed3:	6a 1a                	push   $0x1a
c1000ed5:	e9 f5 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000eda <vector27>:
c1000eda:	6a 00                	push   $0x0
c1000edc:	6a 1b                	push   $0x1b
c1000ede:	e9 ec fe ff ff       	jmp    c1000dcf <__alltraps>

c1000ee3 <vector28>:
c1000ee3:	6a 00                	push   $0x0
c1000ee5:	6a 1c                	push   $0x1c
c1000ee7:	e9 e3 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000eec <vector29>:
c1000eec:	6a 00                	push   $0x0
c1000eee:	6a 1d                	push   $0x1d
c1000ef0:	e9 da fe ff ff       	jmp    c1000dcf <__alltraps>

c1000ef5 <vector30>:
c1000ef5:	6a 00                	push   $0x0
c1000ef7:	6a 1e                	push   $0x1e
c1000ef9:	e9 d1 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000efe <vector31>:
c1000efe:	6a 00                	push   $0x0
c1000f00:	6a 1f                	push   $0x1f
c1000f02:	e9 c8 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f07 <vector32>:
c1000f07:	6a 00                	push   $0x0
c1000f09:	6a 20                	push   $0x20
c1000f0b:	e9 bf fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f10 <vector33>:
c1000f10:	6a 00                	push   $0x0
c1000f12:	6a 21                	push   $0x21
c1000f14:	e9 b6 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f19 <vector34>:
c1000f19:	6a 00                	push   $0x0
c1000f1b:	6a 22                	push   $0x22
c1000f1d:	e9 ad fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f22 <vector35>:
c1000f22:	6a 00                	push   $0x0
c1000f24:	6a 23                	push   $0x23
c1000f26:	e9 a4 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f2b <vector36>:
c1000f2b:	6a 00                	push   $0x0
c1000f2d:	6a 24                	push   $0x24
c1000f2f:	e9 9b fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f34 <vector37>:
c1000f34:	6a 00                	push   $0x0
c1000f36:	6a 25                	push   $0x25
c1000f38:	e9 92 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f3d <vector38>:
c1000f3d:	6a 00                	push   $0x0
c1000f3f:	6a 26                	push   $0x26
c1000f41:	e9 89 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f46 <vector39>:
c1000f46:	6a 00                	push   $0x0
c1000f48:	6a 27                	push   $0x27
c1000f4a:	e9 80 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f4f <vector40>:
c1000f4f:	6a 00                	push   $0x0
c1000f51:	6a 28                	push   $0x28
c1000f53:	e9 77 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f58 <vector41>:
c1000f58:	6a 00                	push   $0x0
c1000f5a:	6a 29                	push   $0x29
c1000f5c:	e9 6e fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f61 <vector42>:
c1000f61:	6a 00                	push   $0x0
c1000f63:	6a 2a                	push   $0x2a
c1000f65:	e9 65 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f6a <vector43>:
c1000f6a:	6a 00                	push   $0x0
c1000f6c:	6a 2b                	push   $0x2b
c1000f6e:	e9 5c fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f73 <vector44>:
c1000f73:	6a 00                	push   $0x0
c1000f75:	6a 2c                	push   $0x2c
c1000f77:	e9 53 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f7c <vector45>:
c1000f7c:	6a 00                	push   $0x0
c1000f7e:	6a 2d                	push   $0x2d
c1000f80:	e9 4a fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f85 <vector46>:
c1000f85:	6a 00                	push   $0x0
c1000f87:	6a 2e                	push   $0x2e
c1000f89:	e9 41 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f8e <vector47>:
c1000f8e:	6a 00                	push   $0x0
c1000f90:	6a 2f                	push   $0x2f
c1000f92:	e9 38 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000f97 <vector48>:
c1000f97:	6a 00                	push   $0x0
c1000f99:	6a 30                	push   $0x30
c1000f9b:	e9 2f fe ff ff       	jmp    c1000dcf <__alltraps>

c1000fa0 <vector49>:
c1000fa0:	6a 00                	push   $0x0
c1000fa2:	6a 31                	push   $0x31
c1000fa4:	e9 26 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000fa9 <vector50>:
c1000fa9:	6a 00                	push   $0x0
c1000fab:	6a 32                	push   $0x32
c1000fad:	e9 1d fe ff ff       	jmp    c1000dcf <__alltraps>

c1000fb2 <vector51>:
c1000fb2:	6a 00                	push   $0x0
c1000fb4:	6a 33                	push   $0x33
c1000fb6:	e9 14 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000fbb <vector52>:
c1000fbb:	6a 00                	push   $0x0
c1000fbd:	6a 34                	push   $0x34
c1000fbf:	e9 0b fe ff ff       	jmp    c1000dcf <__alltraps>

c1000fc4 <vector53>:
c1000fc4:	6a 00                	push   $0x0
c1000fc6:	6a 35                	push   $0x35
c1000fc8:	e9 02 fe ff ff       	jmp    c1000dcf <__alltraps>

c1000fcd <vector54>:
c1000fcd:	6a 00                	push   $0x0
c1000fcf:	6a 36                	push   $0x36
c1000fd1:	e9 f9 fd ff ff       	jmp    c1000dcf <__alltraps>

c1000fd6 <vector55>:
c1000fd6:	6a 00                	push   $0x0
c1000fd8:	6a 37                	push   $0x37
c1000fda:	e9 f0 fd ff ff       	jmp    c1000dcf <__alltraps>

c1000fdf <vector56>:
c1000fdf:	6a 00                	push   $0x0
c1000fe1:	6a 38                	push   $0x38
c1000fe3:	e9 e7 fd ff ff       	jmp    c1000dcf <__alltraps>

c1000fe8 <vector57>:
c1000fe8:	6a 00                	push   $0x0
c1000fea:	6a 39                	push   $0x39
c1000fec:	e9 de fd ff ff       	jmp    c1000dcf <__alltraps>

c1000ff1 <vector58>:
c1000ff1:	6a 00                	push   $0x0
c1000ff3:	6a 3a                	push   $0x3a
c1000ff5:	e9 d5 fd ff ff       	jmp    c1000dcf <__alltraps>

c1000ffa <vector59>:
c1000ffa:	6a 00                	push   $0x0
c1000ffc:	6a 3b                	push   $0x3b
c1000ffe:	e9 cc fd ff ff       	jmp    c1000dcf <__alltraps>

c1001003 <vector60>:
c1001003:	6a 00                	push   $0x0
c1001005:	6a 3c                	push   $0x3c
c1001007:	e9 c3 fd ff ff       	jmp    c1000dcf <__alltraps>

c100100c <vector61>:
c100100c:	6a 00                	push   $0x0
c100100e:	6a 3d                	push   $0x3d
c1001010:	e9 ba fd ff ff       	jmp    c1000dcf <__alltraps>

c1001015 <vector62>:
c1001015:	6a 00                	push   $0x0
c1001017:	6a 3e                	push   $0x3e
c1001019:	e9 b1 fd ff ff       	jmp    c1000dcf <__alltraps>

c100101e <vector63>:
c100101e:	6a 00                	push   $0x0
c1001020:	6a 3f                	push   $0x3f
c1001022:	e9 a8 fd ff ff       	jmp    c1000dcf <__alltraps>

c1001027 <vector64>:
c1001027:	6a 00                	push   $0x0
c1001029:	6a 40                	push   $0x40
c100102b:	e9 9f fd ff ff       	jmp    c1000dcf <__alltraps>

c1001030 <vector65>:
c1001030:	6a 00                	push   $0x0
c1001032:	6a 41                	push   $0x41
c1001034:	e9 96 fd ff ff       	jmp    c1000dcf <__alltraps>

c1001039 <vector66>:
c1001039:	6a 00                	push   $0x0
c100103b:	6a 42                	push   $0x42
c100103d:	e9 8d fd ff ff       	jmp    c1000dcf <__alltraps>

c1001042 <vector67>:
c1001042:	6a 00                	push   $0x0
c1001044:	6a 43                	push   $0x43
c1001046:	e9 84 fd ff ff       	jmp    c1000dcf <__alltraps>

c100104b <vector68>:
c100104b:	6a 00                	push   $0x0
c100104d:	6a 44                	push   $0x44
c100104f:	e9 7b fd ff ff       	jmp    c1000dcf <__alltraps>

c1001054 <vector69>:
c1001054:	6a 00                	push   $0x0
c1001056:	6a 45                	push   $0x45
c1001058:	e9 72 fd ff ff       	jmp    c1000dcf <__alltraps>

c100105d <vector70>:
c100105d:	6a 00                	push   $0x0
c100105f:	6a 46                	push   $0x46
c1001061:	e9 69 fd ff ff       	jmp    c1000dcf <__alltraps>

c1001066 <vector71>:
c1001066:	6a 00                	push   $0x0
c1001068:	6a 47                	push   $0x47
c100106a:	e9 60 fd ff ff       	jmp    c1000dcf <__alltraps>

c100106f <vector72>:
c100106f:	6a 00                	push   $0x0
c1001071:	6a 48                	push   $0x48
c1001073:	e9 57 fd ff ff       	jmp    c1000dcf <__alltraps>

c1001078 <vector73>:
c1001078:	6a 00                	push   $0x0
c100107a:	6a 49                	push   $0x49
c100107c:	e9 4e fd ff ff       	jmp    c1000dcf <__alltraps>

c1001081 <vector74>:
c1001081:	6a 00                	push   $0x0
c1001083:	6a 4a                	push   $0x4a
c1001085:	e9 45 fd ff ff       	jmp    c1000dcf <__alltraps>

c100108a <vector75>:
c100108a:	6a 00                	push   $0x0
c100108c:	6a 4b                	push   $0x4b
c100108e:	e9 3c fd ff ff       	jmp    c1000dcf <__alltraps>

c1001093 <vector76>:
c1001093:	6a 00                	push   $0x0
c1001095:	6a 4c                	push   $0x4c
c1001097:	e9 33 fd ff ff       	jmp    c1000dcf <__alltraps>

c100109c <vector77>:
c100109c:	6a 00                	push   $0x0
c100109e:	6a 4d                	push   $0x4d
c10010a0:	e9 2a fd ff ff       	jmp    c1000dcf <__alltraps>

c10010a5 <vector78>:
c10010a5:	6a 00                	push   $0x0
c10010a7:	6a 4e                	push   $0x4e
c10010a9:	e9 21 fd ff ff       	jmp    c1000dcf <__alltraps>

c10010ae <vector79>:
c10010ae:	6a 00                	push   $0x0
c10010b0:	6a 4f                	push   $0x4f
c10010b2:	e9 18 fd ff ff       	jmp    c1000dcf <__alltraps>

c10010b7 <vector80>:
c10010b7:	6a 00                	push   $0x0
c10010b9:	6a 50                	push   $0x50
c10010bb:	e9 0f fd ff ff       	jmp    c1000dcf <__alltraps>

c10010c0 <vector81>:
c10010c0:	6a 00                	push   $0x0
c10010c2:	6a 51                	push   $0x51
c10010c4:	e9 06 fd ff ff       	jmp    c1000dcf <__alltraps>

c10010c9 <vector82>:
c10010c9:	6a 00                	push   $0x0
c10010cb:	6a 52                	push   $0x52
c10010cd:	e9 fd fc ff ff       	jmp    c1000dcf <__alltraps>

c10010d2 <vector83>:
c10010d2:	6a 00                	push   $0x0
c10010d4:	6a 53                	push   $0x53
c10010d6:	e9 f4 fc ff ff       	jmp    c1000dcf <__alltraps>

c10010db <vector84>:
c10010db:	6a 00                	push   $0x0
c10010dd:	6a 54                	push   $0x54
c10010df:	e9 eb fc ff ff       	jmp    c1000dcf <__alltraps>

c10010e4 <vector85>:
c10010e4:	6a 00                	push   $0x0
c10010e6:	6a 55                	push   $0x55
c10010e8:	e9 e2 fc ff ff       	jmp    c1000dcf <__alltraps>

c10010ed <vector86>:
c10010ed:	6a 00                	push   $0x0
c10010ef:	6a 56                	push   $0x56
c10010f1:	e9 d9 fc ff ff       	jmp    c1000dcf <__alltraps>

c10010f6 <vector87>:
c10010f6:	6a 00                	push   $0x0
c10010f8:	6a 57                	push   $0x57
c10010fa:	e9 d0 fc ff ff       	jmp    c1000dcf <__alltraps>

c10010ff <vector88>:
c10010ff:	6a 00                	push   $0x0
c1001101:	6a 58                	push   $0x58
c1001103:	e9 c7 fc ff ff       	jmp    c1000dcf <__alltraps>

c1001108 <vector89>:
c1001108:	6a 00                	push   $0x0
c100110a:	6a 59                	push   $0x59
c100110c:	e9 be fc ff ff       	jmp    c1000dcf <__alltraps>

c1001111 <vector90>:
c1001111:	6a 00                	push   $0x0
c1001113:	6a 5a                	push   $0x5a
c1001115:	e9 b5 fc ff ff       	jmp    c1000dcf <__alltraps>

c100111a <vector91>:
c100111a:	6a 00                	push   $0x0
c100111c:	6a 5b                	push   $0x5b
c100111e:	e9 ac fc ff ff       	jmp    c1000dcf <__alltraps>

c1001123 <vector92>:
c1001123:	6a 00                	push   $0x0
c1001125:	6a 5c                	push   $0x5c
c1001127:	e9 a3 fc ff ff       	jmp    c1000dcf <__alltraps>

c100112c <vector93>:
c100112c:	6a 00                	push   $0x0
c100112e:	6a 5d                	push   $0x5d
c1001130:	e9 9a fc ff ff       	jmp    c1000dcf <__alltraps>

c1001135 <vector94>:
c1001135:	6a 00                	push   $0x0
c1001137:	6a 5e                	push   $0x5e
c1001139:	e9 91 fc ff ff       	jmp    c1000dcf <__alltraps>

c100113e <vector95>:
c100113e:	6a 00                	push   $0x0
c1001140:	6a 5f                	push   $0x5f
c1001142:	e9 88 fc ff ff       	jmp    c1000dcf <__alltraps>

c1001147 <vector96>:
c1001147:	6a 00                	push   $0x0
c1001149:	6a 60                	push   $0x60
c100114b:	e9 7f fc ff ff       	jmp    c1000dcf <__alltraps>

c1001150 <vector97>:
c1001150:	6a 00                	push   $0x0
c1001152:	6a 61                	push   $0x61
c1001154:	e9 76 fc ff ff       	jmp    c1000dcf <__alltraps>

c1001159 <vector98>:
c1001159:	6a 00                	push   $0x0
c100115b:	6a 62                	push   $0x62
c100115d:	e9 6d fc ff ff       	jmp    c1000dcf <__alltraps>

c1001162 <vector99>:
c1001162:	6a 00                	push   $0x0
c1001164:	6a 63                	push   $0x63
c1001166:	e9 64 fc ff ff       	jmp    c1000dcf <__alltraps>

c100116b <vector100>:
c100116b:	6a 00                	push   $0x0
c100116d:	6a 64                	push   $0x64
c100116f:	e9 5b fc ff ff       	jmp    c1000dcf <__alltraps>

c1001174 <vector101>:
c1001174:	6a 00                	push   $0x0
c1001176:	6a 65                	push   $0x65
c1001178:	e9 52 fc ff ff       	jmp    c1000dcf <__alltraps>

c100117d <vector102>:
c100117d:	6a 00                	push   $0x0
c100117f:	6a 66                	push   $0x66
c1001181:	e9 49 fc ff ff       	jmp    c1000dcf <__alltraps>

c1001186 <vector103>:
c1001186:	6a 00                	push   $0x0
c1001188:	6a 67                	push   $0x67
c100118a:	e9 40 fc ff ff       	jmp    c1000dcf <__alltraps>

c100118f <vector104>:
c100118f:	6a 00                	push   $0x0
c1001191:	6a 68                	push   $0x68
c1001193:	e9 37 fc ff ff       	jmp    c1000dcf <__alltraps>

c1001198 <vector105>:
c1001198:	6a 00                	push   $0x0
c100119a:	6a 69                	push   $0x69
c100119c:	e9 2e fc ff ff       	jmp    c1000dcf <__alltraps>

c10011a1 <vector106>:
c10011a1:	6a 00                	push   $0x0
c10011a3:	6a 6a                	push   $0x6a
c10011a5:	e9 25 fc ff ff       	jmp    c1000dcf <__alltraps>

c10011aa <vector107>:
c10011aa:	6a 00                	push   $0x0
c10011ac:	6a 6b                	push   $0x6b
c10011ae:	e9 1c fc ff ff       	jmp    c1000dcf <__alltraps>

c10011b3 <vector108>:
c10011b3:	6a 00                	push   $0x0
c10011b5:	6a 6c                	push   $0x6c
c10011b7:	e9 13 fc ff ff       	jmp    c1000dcf <__alltraps>

c10011bc <vector109>:
c10011bc:	6a 00                	push   $0x0
c10011be:	6a 6d                	push   $0x6d
c10011c0:	e9 0a fc ff ff       	jmp    c1000dcf <__alltraps>

c10011c5 <vector110>:
c10011c5:	6a 00                	push   $0x0
c10011c7:	6a 6e                	push   $0x6e
c10011c9:	e9 01 fc ff ff       	jmp    c1000dcf <__alltraps>

c10011ce <vector111>:
c10011ce:	6a 00                	push   $0x0
c10011d0:	6a 6f                	push   $0x6f
c10011d2:	e9 f8 fb ff ff       	jmp    c1000dcf <__alltraps>

c10011d7 <vector112>:
c10011d7:	6a 00                	push   $0x0
c10011d9:	6a 70                	push   $0x70
c10011db:	e9 ef fb ff ff       	jmp    c1000dcf <__alltraps>

c10011e0 <vector113>:
c10011e0:	6a 00                	push   $0x0
c10011e2:	6a 71                	push   $0x71
c10011e4:	e9 e6 fb ff ff       	jmp    c1000dcf <__alltraps>

c10011e9 <vector114>:
c10011e9:	6a 00                	push   $0x0
c10011eb:	6a 72                	push   $0x72
c10011ed:	e9 dd fb ff ff       	jmp    c1000dcf <__alltraps>

c10011f2 <vector115>:
c10011f2:	6a 00                	push   $0x0
c10011f4:	6a 73                	push   $0x73
c10011f6:	e9 d4 fb ff ff       	jmp    c1000dcf <__alltraps>

c10011fb <vector116>:
c10011fb:	6a 00                	push   $0x0
c10011fd:	6a 74                	push   $0x74
c10011ff:	e9 cb fb ff ff       	jmp    c1000dcf <__alltraps>

c1001204 <vector117>:
c1001204:	6a 00                	push   $0x0
c1001206:	6a 75                	push   $0x75
c1001208:	e9 c2 fb ff ff       	jmp    c1000dcf <__alltraps>

c100120d <vector118>:
c100120d:	6a 00                	push   $0x0
c100120f:	6a 76                	push   $0x76
c1001211:	e9 b9 fb ff ff       	jmp    c1000dcf <__alltraps>

c1001216 <vector119>:
c1001216:	6a 00                	push   $0x0
c1001218:	6a 77                	push   $0x77
c100121a:	e9 b0 fb ff ff       	jmp    c1000dcf <__alltraps>

c100121f <vector120>:
c100121f:	6a 00                	push   $0x0
c1001221:	6a 78                	push   $0x78
c1001223:	e9 a7 fb ff ff       	jmp    c1000dcf <__alltraps>

c1001228 <vector121>:
c1001228:	6a 00                	push   $0x0
c100122a:	6a 79                	push   $0x79
c100122c:	e9 9e fb ff ff       	jmp    c1000dcf <__alltraps>

c1001231 <vector122>:
c1001231:	6a 00                	push   $0x0
c1001233:	6a 7a                	push   $0x7a
c1001235:	e9 95 fb ff ff       	jmp    c1000dcf <__alltraps>

c100123a <vector123>:
c100123a:	6a 00                	push   $0x0
c100123c:	6a 7b                	push   $0x7b
c100123e:	e9 8c fb ff ff       	jmp    c1000dcf <__alltraps>

c1001243 <vector124>:
c1001243:	6a 00                	push   $0x0
c1001245:	6a 7c                	push   $0x7c
c1001247:	e9 83 fb ff ff       	jmp    c1000dcf <__alltraps>

c100124c <vector125>:
c100124c:	6a 00                	push   $0x0
c100124e:	6a 7d                	push   $0x7d
c1001250:	e9 7a fb ff ff       	jmp    c1000dcf <__alltraps>

c1001255 <vector126>:
c1001255:	6a 00                	push   $0x0
c1001257:	6a 7e                	push   $0x7e
c1001259:	e9 71 fb ff ff       	jmp    c1000dcf <__alltraps>

c100125e <vector127>:
c100125e:	6a 00                	push   $0x0
c1001260:	6a 7f                	push   $0x7f
c1001262:	e9 68 fb ff ff       	jmp    c1000dcf <__alltraps>

c1001267 <vector128>:
c1001267:	6a 00                	push   $0x0
c1001269:	68 80 00 00 00       	push   $0x80
c100126e:	e9 5c fb ff ff       	jmp    c1000dcf <__alltraps>

c1001273 <vector129>:
c1001273:	6a 00                	push   $0x0
c1001275:	68 81 00 00 00       	push   $0x81
c100127a:	e9 50 fb ff ff       	jmp    c1000dcf <__alltraps>

c100127f <vector130>:
c100127f:	6a 00                	push   $0x0
c1001281:	68 82 00 00 00       	push   $0x82
c1001286:	e9 44 fb ff ff       	jmp    c1000dcf <__alltraps>

c100128b <vector131>:
c100128b:	6a 00                	push   $0x0
c100128d:	68 83 00 00 00       	push   $0x83
c1001292:	e9 38 fb ff ff       	jmp    c1000dcf <__alltraps>

c1001297 <vector132>:
c1001297:	6a 00                	push   $0x0
c1001299:	68 84 00 00 00       	push   $0x84
c100129e:	e9 2c fb ff ff       	jmp    c1000dcf <__alltraps>

c10012a3 <vector133>:
c10012a3:	6a 00                	push   $0x0
c10012a5:	68 85 00 00 00       	push   $0x85
c10012aa:	e9 20 fb ff ff       	jmp    c1000dcf <__alltraps>

c10012af <vector134>:
c10012af:	6a 00                	push   $0x0
c10012b1:	68 86 00 00 00       	push   $0x86
c10012b6:	e9 14 fb ff ff       	jmp    c1000dcf <__alltraps>

c10012bb <vector135>:
c10012bb:	6a 00                	push   $0x0
c10012bd:	68 87 00 00 00       	push   $0x87
c10012c2:	e9 08 fb ff ff       	jmp    c1000dcf <__alltraps>

c10012c7 <vector136>:
c10012c7:	6a 00                	push   $0x0
c10012c9:	68 88 00 00 00       	push   $0x88
c10012ce:	e9 fc fa ff ff       	jmp    c1000dcf <__alltraps>

c10012d3 <vector137>:
c10012d3:	6a 00                	push   $0x0
c10012d5:	68 89 00 00 00       	push   $0x89
c10012da:	e9 f0 fa ff ff       	jmp    c1000dcf <__alltraps>

c10012df <vector138>:
c10012df:	6a 00                	push   $0x0
c10012e1:	68 8a 00 00 00       	push   $0x8a
c10012e6:	e9 e4 fa ff ff       	jmp    c1000dcf <__alltraps>

c10012eb <vector139>:
c10012eb:	6a 00                	push   $0x0
c10012ed:	68 8b 00 00 00       	push   $0x8b
c10012f2:	e9 d8 fa ff ff       	jmp    c1000dcf <__alltraps>

c10012f7 <vector140>:
c10012f7:	6a 00                	push   $0x0
c10012f9:	68 8c 00 00 00       	push   $0x8c
c10012fe:	e9 cc fa ff ff       	jmp    c1000dcf <__alltraps>

c1001303 <vector141>:
c1001303:	6a 00                	push   $0x0
c1001305:	68 8d 00 00 00       	push   $0x8d
c100130a:	e9 c0 fa ff ff       	jmp    c1000dcf <__alltraps>

c100130f <vector142>:
c100130f:	6a 00                	push   $0x0
c1001311:	68 8e 00 00 00       	push   $0x8e
c1001316:	e9 b4 fa ff ff       	jmp    c1000dcf <__alltraps>

c100131b <vector143>:
c100131b:	6a 00                	push   $0x0
c100131d:	68 8f 00 00 00       	push   $0x8f
c1001322:	e9 a8 fa ff ff       	jmp    c1000dcf <__alltraps>

c1001327 <vector144>:
c1001327:	6a 00                	push   $0x0
c1001329:	68 90 00 00 00       	push   $0x90
c100132e:	e9 9c fa ff ff       	jmp    c1000dcf <__alltraps>

c1001333 <vector145>:
c1001333:	6a 00                	push   $0x0
c1001335:	68 91 00 00 00       	push   $0x91
c100133a:	e9 90 fa ff ff       	jmp    c1000dcf <__alltraps>

c100133f <vector146>:
c100133f:	6a 00                	push   $0x0
c1001341:	68 92 00 00 00       	push   $0x92
c1001346:	e9 84 fa ff ff       	jmp    c1000dcf <__alltraps>

c100134b <vector147>:
c100134b:	6a 00                	push   $0x0
c100134d:	68 93 00 00 00       	push   $0x93
c1001352:	e9 78 fa ff ff       	jmp    c1000dcf <__alltraps>

c1001357 <vector148>:
c1001357:	6a 00                	push   $0x0
c1001359:	68 94 00 00 00       	push   $0x94
c100135e:	e9 6c fa ff ff       	jmp    c1000dcf <__alltraps>

c1001363 <vector149>:
c1001363:	6a 00                	push   $0x0
c1001365:	68 95 00 00 00       	push   $0x95
c100136a:	e9 60 fa ff ff       	jmp    c1000dcf <__alltraps>

c100136f <vector150>:
c100136f:	6a 00                	push   $0x0
c1001371:	68 96 00 00 00       	push   $0x96
c1001376:	e9 54 fa ff ff       	jmp    c1000dcf <__alltraps>

c100137b <vector151>:
c100137b:	6a 00                	push   $0x0
c100137d:	68 97 00 00 00       	push   $0x97
c1001382:	e9 48 fa ff ff       	jmp    c1000dcf <__alltraps>

c1001387 <vector152>:
c1001387:	6a 00                	push   $0x0
c1001389:	68 98 00 00 00       	push   $0x98
c100138e:	e9 3c fa ff ff       	jmp    c1000dcf <__alltraps>

c1001393 <vector153>:
c1001393:	6a 00                	push   $0x0
c1001395:	68 99 00 00 00       	push   $0x99
c100139a:	e9 30 fa ff ff       	jmp    c1000dcf <__alltraps>

c100139f <vector154>:
c100139f:	6a 00                	push   $0x0
c10013a1:	68 9a 00 00 00       	push   $0x9a
c10013a6:	e9 24 fa ff ff       	jmp    c1000dcf <__alltraps>

c10013ab <vector155>:
c10013ab:	6a 00                	push   $0x0
c10013ad:	68 9b 00 00 00       	push   $0x9b
c10013b2:	e9 18 fa ff ff       	jmp    c1000dcf <__alltraps>

c10013b7 <vector156>:
c10013b7:	6a 00                	push   $0x0
c10013b9:	68 9c 00 00 00       	push   $0x9c
c10013be:	e9 0c fa ff ff       	jmp    c1000dcf <__alltraps>

c10013c3 <vector157>:
c10013c3:	6a 00                	push   $0x0
c10013c5:	68 9d 00 00 00       	push   $0x9d
c10013ca:	e9 00 fa ff ff       	jmp    c1000dcf <__alltraps>

c10013cf <vector158>:
c10013cf:	6a 00                	push   $0x0
c10013d1:	68 9e 00 00 00       	push   $0x9e
c10013d6:	e9 f4 f9 ff ff       	jmp    c1000dcf <__alltraps>

c10013db <vector159>:
c10013db:	6a 00                	push   $0x0
c10013dd:	68 9f 00 00 00       	push   $0x9f
c10013e2:	e9 e8 f9 ff ff       	jmp    c1000dcf <__alltraps>

c10013e7 <vector160>:
c10013e7:	6a 00                	push   $0x0
c10013e9:	68 a0 00 00 00       	push   $0xa0
c10013ee:	e9 dc f9 ff ff       	jmp    c1000dcf <__alltraps>

c10013f3 <vector161>:
c10013f3:	6a 00                	push   $0x0
c10013f5:	68 a1 00 00 00       	push   $0xa1
c10013fa:	e9 d0 f9 ff ff       	jmp    c1000dcf <__alltraps>

c10013ff <vector162>:
c10013ff:	6a 00                	push   $0x0
c1001401:	68 a2 00 00 00       	push   $0xa2
c1001406:	e9 c4 f9 ff ff       	jmp    c1000dcf <__alltraps>

c100140b <vector163>:
c100140b:	6a 00                	push   $0x0
c100140d:	68 a3 00 00 00       	push   $0xa3
c1001412:	e9 b8 f9 ff ff       	jmp    c1000dcf <__alltraps>

c1001417 <vector164>:
c1001417:	6a 00                	push   $0x0
c1001419:	68 a4 00 00 00       	push   $0xa4
c100141e:	e9 ac f9 ff ff       	jmp    c1000dcf <__alltraps>

c1001423 <vector165>:
c1001423:	6a 00                	push   $0x0
c1001425:	68 a5 00 00 00       	push   $0xa5
c100142a:	e9 a0 f9 ff ff       	jmp    c1000dcf <__alltraps>

c100142f <vector166>:
c100142f:	6a 00                	push   $0x0
c1001431:	68 a6 00 00 00       	push   $0xa6
c1001436:	e9 94 f9 ff ff       	jmp    c1000dcf <__alltraps>

c100143b <vector167>:
c100143b:	6a 00                	push   $0x0
c100143d:	68 a7 00 00 00       	push   $0xa7
c1001442:	e9 88 f9 ff ff       	jmp    c1000dcf <__alltraps>

c1001447 <vector168>:
c1001447:	6a 00                	push   $0x0
c1001449:	68 a8 00 00 00       	push   $0xa8
c100144e:	e9 7c f9 ff ff       	jmp    c1000dcf <__alltraps>

c1001453 <vector169>:
c1001453:	6a 00                	push   $0x0
c1001455:	68 a9 00 00 00       	push   $0xa9
c100145a:	e9 70 f9 ff ff       	jmp    c1000dcf <__alltraps>

c100145f <vector170>:
c100145f:	6a 00                	push   $0x0
c1001461:	68 aa 00 00 00       	push   $0xaa
c1001466:	e9 64 f9 ff ff       	jmp    c1000dcf <__alltraps>

c100146b <vector171>:
c100146b:	6a 00                	push   $0x0
c100146d:	68 ab 00 00 00       	push   $0xab
c1001472:	e9 58 f9 ff ff       	jmp    c1000dcf <__alltraps>

c1001477 <vector172>:
c1001477:	6a 00                	push   $0x0
c1001479:	68 ac 00 00 00       	push   $0xac
c100147e:	e9 4c f9 ff ff       	jmp    c1000dcf <__alltraps>

c1001483 <vector173>:
c1001483:	6a 00                	push   $0x0
c1001485:	68 ad 00 00 00       	push   $0xad
c100148a:	e9 40 f9 ff ff       	jmp    c1000dcf <__alltraps>

c100148f <vector174>:
c100148f:	6a 00                	push   $0x0
c1001491:	68 ae 00 00 00       	push   $0xae
c1001496:	e9 34 f9 ff ff       	jmp    c1000dcf <__alltraps>

c100149b <vector175>:
c100149b:	6a 00                	push   $0x0
c100149d:	68 af 00 00 00       	push   $0xaf
c10014a2:	e9 28 f9 ff ff       	jmp    c1000dcf <__alltraps>

c10014a7 <vector176>:
c10014a7:	6a 00                	push   $0x0
c10014a9:	68 b0 00 00 00       	push   $0xb0
c10014ae:	e9 1c f9 ff ff       	jmp    c1000dcf <__alltraps>

c10014b3 <vector177>:
c10014b3:	6a 00                	push   $0x0
c10014b5:	68 b1 00 00 00       	push   $0xb1
c10014ba:	e9 10 f9 ff ff       	jmp    c1000dcf <__alltraps>

c10014bf <vector178>:
c10014bf:	6a 00                	push   $0x0
c10014c1:	68 b2 00 00 00       	push   $0xb2
c10014c6:	e9 04 f9 ff ff       	jmp    c1000dcf <__alltraps>

c10014cb <vector179>:
c10014cb:	6a 00                	push   $0x0
c10014cd:	68 b3 00 00 00       	push   $0xb3
c10014d2:	e9 f8 f8 ff ff       	jmp    c1000dcf <__alltraps>

c10014d7 <vector180>:
c10014d7:	6a 00                	push   $0x0
c10014d9:	68 b4 00 00 00       	push   $0xb4
c10014de:	e9 ec f8 ff ff       	jmp    c1000dcf <__alltraps>

c10014e3 <vector181>:
c10014e3:	6a 00                	push   $0x0
c10014e5:	68 b5 00 00 00       	push   $0xb5
c10014ea:	e9 e0 f8 ff ff       	jmp    c1000dcf <__alltraps>

c10014ef <vector182>:
c10014ef:	6a 00                	push   $0x0
c10014f1:	68 b6 00 00 00       	push   $0xb6
c10014f6:	e9 d4 f8 ff ff       	jmp    c1000dcf <__alltraps>

c10014fb <vector183>:
c10014fb:	6a 00                	push   $0x0
c10014fd:	68 b7 00 00 00       	push   $0xb7
c1001502:	e9 c8 f8 ff ff       	jmp    c1000dcf <__alltraps>

c1001507 <vector184>:
c1001507:	6a 00                	push   $0x0
c1001509:	68 b8 00 00 00       	push   $0xb8
c100150e:	e9 bc f8 ff ff       	jmp    c1000dcf <__alltraps>

c1001513 <vector185>:
c1001513:	6a 00                	push   $0x0
c1001515:	68 b9 00 00 00       	push   $0xb9
c100151a:	e9 b0 f8 ff ff       	jmp    c1000dcf <__alltraps>

c100151f <vector186>:
c100151f:	6a 00                	push   $0x0
c1001521:	68 ba 00 00 00       	push   $0xba
c1001526:	e9 a4 f8 ff ff       	jmp    c1000dcf <__alltraps>

c100152b <vector187>:
c100152b:	6a 00                	push   $0x0
c100152d:	68 bb 00 00 00       	push   $0xbb
c1001532:	e9 98 f8 ff ff       	jmp    c1000dcf <__alltraps>

c1001537 <vector188>:
c1001537:	6a 00                	push   $0x0
c1001539:	68 bc 00 00 00       	push   $0xbc
c100153e:	e9 8c f8 ff ff       	jmp    c1000dcf <__alltraps>

c1001543 <vector189>:
c1001543:	6a 00                	push   $0x0
c1001545:	68 bd 00 00 00       	push   $0xbd
c100154a:	e9 80 f8 ff ff       	jmp    c1000dcf <__alltraps>

c100154f <vector190>:
c100154f:	6a 00                	push   $0x0
c1001551:	68 be 00 00 00       	push   $0xbe
c1001556:	e9 74 f8 ff ff       	jmp    c1000dcf <__alltraps>

c100155b <vector191>:
c100155b:	6a 00                	push   $0x0
c100155d:	68 bf 00 00 00       	push   $0xbf
c1001562:	e9 68 f8 ff ff       	jmp    c1000dcf <__alltraps>

c1001567 <vector192>:
c1001567:	6a 00                	push   $0x0
c1001569:	68 c0 00 00 00       	push   $0xc0
c100156e:	e9 5c f8 ff ff       	jmp    c1000dcf <__alltraps>

c1001573 <vector193>:
c1001573:	6a 00                	push   $0x0
c1001575:	68 c1 00 00 00       	push   $0xc1
c100157a:	e9 50 f8 ff ff       	jmp    c1000dcf <__alltraps>

c100157f <vector194>:
c100157f:	6a 00                	push   $0x0
c1001581:	68 c2 00 00 00       	push   $0xc2
c1001586:	e9 44 f8 ff ff       	jmp    c1000dcf <__alltraps>

c100158b <vector195>:
c100158b:	6a 00                	push   $0x0
c100158d:	68 c3 00 00 00       	push   $0xc3
c1001592:	e9 38 f8 ff ff       	jmp    c1000dcf <__alltraps>

c1001597 <vector196>:
c1001597:	6a 00                	push   $0x0
c1001599:	68 c4 00 00 00       	push   $0xc4
c100159e:	e9 2c f8 ff ff       	jmp    c1000dcf <__alltraps>

c10015a3 <vector197>:
c10015a3:	6a 00                	push   $0x0
c10015a5:	68 c5 00 00 00       	push   $0xc5
c10015aa:	e9 20 f8 ff ff       	jmp    c1000dcf <__alltraps>

c10015af <vector198>:
c10015af:	6a 00                	push   $0x0
c10015b1:	68 c6 00 00 00       	push   $0xc6
c10015b6:	e9 14 f8 ff ff       	jmp    c1000dcf <__alltraps>

c10015bb <vector199>:
c10015bb:	6a 00                	push   $0x0
c10015bd:	68 c7 00 00 00       	push   $0xc7
c10015c2:	e9 08 f8 ff ff       	jmp    c1000dcf <__alltraps>

c10015c7 <vector200>:
c10015c7:	6a 00                	push   $0x0
c10015c9:	68 c8 00 00 00       	push   $0xc8
c10015ce:	e9 fc f7 ff ff       	jmp    c1000dcf <__alltraps>

c10015d3 <vector201>:
c10015d3:	6a 00                	push   $0x0
c10015d5:	68 c9 00 00 00       	push   $0xc9
c10015da:	e9 f0 f7 ff ff       	jmp    c1000dcf <__alltraps>

c10015df <vector202>:
c10015df:	6a 00                	push   $0x0
c10015e1:	68 ca 00 00 00       	push   $0xca
c10015e6:	e9 e4 f7 ff ff       	jmp    c1000dcf <__alltraps>

c10015eb <vector203>:
c10015eb:	6a 00                	push   $0x0
c10015ed:	68 cb 00 00 00       	push   $0xcb
c10015f2:	e9 d8 f7 ff ff       	jmp    c1000dcf <__alltraps>

c10015f7 <vector204>:
c10015f7:	6a 00                	push   $0x0
c10015f9:	68 cc 00 00 00       	push   $0xcc
c10015fe:	e9 cc f7 ff ff       	jmp    c1000dcf <__alltraps>

c1001603 <vector205>:
c1001603:	6a 00                	push   $0x0
c1001605:	68 cd 00 00 00       	push   $0xcd
c100160a:	e9 c0 f7 ff ff       	jmp    c1000dcf <__alltraps>

c100160f <vector206>:
c100160f:	6a 00                	push   $0x0
c1001611:	68 ce 00 00 00       	push   $0xce
c1001616:	e9 b4 f7 ff ff       	jmp    c1000dcf <__alltraps>

c100161b <vector207>:
c100161b:	6a 00                	push   $0x0
c100161d:	68 cf 00 00 00       	push   $0xcf
c1001622:	e9 a8 f7 ff ff       	jmp    c1000dcf <__alltraps>

c1001627 <vector208>:
c1001627:	6a 00                	push   $0x0
c1001629:	68 d0 00 00 00       	push   $0xd0
c100162e:	e9 9c f7 ff ff       	jmp    c1000dcf <__alltraps>

c1001633 <vector209>:
c1001633:	6a 00                	push   $0x0
c1001635:	68 d1 00 00 00       	push   $0xd1
c100163a:	e9 90 f7 ff ff       	jmp    c1000dcf <__alltraps>

c100163f <vector210>:
c100163f:	6a 00                	push   $0x0
c1001641:	68 d2 00 00 00       	push   $0xd2
c1001646:	e9 84 f7 ff ff       	jmp    c1000dcf <__alltraps>

c100164b <vector211>:
c100164b:	6a 00                	push   $0x0
c100164d:	68 d3 00 00 00       	push   $0xd3
c1001652:	e9 78 f7 ff ff       	jmp    c1000dcf <__alltraps>

c1001657 <vector212>:
c1001657:	6a 00                	push   $0x0
c1001659:	68 d4 00 00 00       	push   $0xd4
c100165e:	e9 6c f7 ff ff       	jmp    c1000dcf <__alltraps>

c1001663 <vector213>:
c1001663:	6a 00                	push   $0x0
c1001665:	68 d5 00 00 00       	push   $0xd5
c100166a:	e9 60 f7 ff ff       	jmp    c1000dcf <__alltraps>

c100166f <vector214>:
c100166f:	6a 00                	push   $0x0
c1001671:	68 d6 00 00 00       	push   $0xd6
c1001676:	e9 54 f7 ff ff       	jmp    c1000dcf <__alltraps>

c100167b <vector215>:
c100167b:	6a 00                	push   $0x0
c100167d:	68 d7 00 00 00       	push   $0xd7
c1001682:	e9 48 f7 ff ff       	jmp    c1000dcf <__alltraps>

c1001687 <vector216>:
c1001687:	6a 00                	push   $0x0
c1001689:	68 d8 00 00 00       	push   $0xd8
c100168e:	e9 3c f7 ff ff       	jmp    c1000dcf <__alltraps>

c1001693 <vector217>:
c1001693:	6a 00                	push   $0x0
c1001695:	68 d9 00 00 00       	push   $0xd9
c100169a:	e9 30 f7 ff ff       	jmp    c1000dcf <__alltraps>

c100169f <vector218>:
c100169f:	6a 00                	push   $0x0
c10016a1:	68 da 00 00 00       	push   $0xda
c10016a6:	e9 24 f7 ff ff       	jmp    c1000dcf <__alltraps>

c10016ab <vector219>:
c10016ab:	6a 00                	push   $0x0
c10016ad:	68 db 00 00 00       	push   $0xdb
c10016b2:	e9 18 f7 ff ff       	jmp    c1000dcf <__alltraps>

c10016b7 <vector220>:
c10016b7:	6a 00                	push   $0x0
c10016b9:	68 dc 00 00 00       	push   $0xdc
c10016be:	e9 0c f7 ff ff       	jmp    c1000dcf <__alltraps>

c10016c3 <vector221>:
c10016c3:	6a 00                	push   $0x0
c10016c5:	68 dd 00 00 00       	push   $0xdd
c10016ca:	e9 00 f7 ff ff       	jmp    c1000dcf <__alltraps>

c10016cf <vector222>:
c10016cf:	6a 00                	push   $0x0
c10016d1:	68 de 00 00 00       	push   $0xde
c10016d6:	e9 f4 f6 ff ff       	jmp    c1000dcf <__alltraps>

c10016db <vector223>:
c10016db:	6a 00                	push   $0x0
c10016dd:	68 df 00 00 00       	push   $0xdf
c10016e2:	e9 e8 f6 ff ff       	jmp    c1000dcf <__alltraps>

c10016e7 <vector224>:
c10016e7:	6a 00                	push   $0x0
c10016e9:	68 e0 00 00 00       	push   $0xe0
c10016ee:	e9 dc f6 ff ff       	jmp    c1000dcf <__alltraps>

c10016f3 <vector225>:
c10016f3:	6a 00                	push   $0x0
c10016f5:	68 e1 00 00 00       	push   $0xe1
c10016fa:	e9 d0 f6 ff ff       	jmp    c1000dcf <__alltraps>

c10016ff <vector226>:
c10016ff:	6a 00                	push   $0x0
c1001701:	68 e2 00 00 00       	push   $0xe2
c1001706:	e9 c4 f6 ff ff       	jmp    c1000dcf <__alltraps>

c100170b <vector227>:
c100170b:	6a 00                	push   $0x0
c100170d:	68 e3 00 00 00       	push   $0xe3
c1001712:	e9 b8 f6 ff ff       	jmp    c1000dcf <__alltraps>

c1001717 <vector228>:
c1001717:	6a 00                	push   $0x0
c1001719:	68 e4 00 00 00       	push   $0xe4
c100171e:	e9 ac f6 ff ff       	jmp    c1000dcf <__alltraps>

c1001723 <vector229>:
c1001723:	6a 00                	push   $0x0
c1001725:	68 e5 00 00 00       	push   $0xe5
c100172a:	e9 a0 f6 ff ff       	jmp    c1000dcf <__alltraps>

c100172f <vector230>:
c100172f:	6a 00                	push   $0x0
c1001731:	68 e6 00 00 00       	push   $0xe6
c1001736:	e9 94 f6 ff ff       	jmp    c1000dcf <__alltraps>

c100173b <vector231>:
c100173b:	6a 00                	push   $0x0
c100173d:	68 e7 00 00 00       	push   $0xe7
c1001742:	e9 88 f6 ff ff       	jmp    c1000dcf <__alltraps>

c1001747 <vector232>:
c1001747:	6a 00                	push   $0x0
c1001749:	68 e8 00 00 00       	push   $0xe8
c100174e:	e9 7c f6 ff ff       	jmp    c1000dcf <__alltraps>

c1001753 <vector233>:
c1001753:	6a 00                	push   $0x0
c1001755:	68 e9 00 00 00       	push   $0xe9
c100175a:	e9 70 f6 ff ff       	jmp    c1000dcf <__alltraps>

c100175f <vector234>:
c100175f:	6a 00                	push   $0x0
c1001761:	68 ea 00 00 00       	push   $0xea
c1001766:	e9 64 f6 ff ff       	jmp    c1000dcf <__alltraps>

c100176b <vector235>:
c100176b:	6a 00                	push   $0x0
c100176d:	68 eb 00 00 00       	push   $0xeb
c1001772:	e9 58 f6 ff ff       	jmp    c1000dcf <__alltraps>

c1001777 <vector236>:
c1001777:	6a 00                	push   $0x0
c1001779:	68 ec 00 00 00       	push   $0xec
c100177e:	e9 4c f6 ff ff       	jmp    c1000dcf <__alltraps>

c1001783 <vector237>:
c1001783:	6a 00                	push   $0x0
c1001785:	68 ed 00 00 00       	push   $0xed
c100178a:	e9 40 f6 ff ff       	jmp    c1000dcf <__alltraps>

c100178f <vector238>:
c100178f:	6a 00                	push   $0x0
c1001791:	68 ee 00 00 00       	push   $0xee
c1001796:	e9 34 f6 ff ff       	jmp    c1000dcf <__alltraps>

c100179b <vector239>:
c100179b:	6a 00                	push   $0x0
c100179d:	68 ef 00 00 00       	push   $0xef
c10017a2:	e9 28 f6 ff ff       	jmp    c1000dcf <__alltraps>

c10017a7 <vector240>:
c10017a7:	6a 00                	push   $0x0
c10017a9:	68 f0 00 00 00       	push   $0xf0
c10017ae:	e9 1c f6 ff ff       	jmp    c1000dcf <__alltraps>

c10017b3 <vector241>:
c10017b3:	6a 00                	push   $0x0
c10017b5:	68 f1 00 00 00       	push   $0xf1
c10017ba:	e9 10 f6 ff ff       	jmp    c1000dcf <__alltraps>

c10017bf <vector242>:
c10017bf:	6a 00                	push   $0x0
c10017c1:	68 f2 00 00 00       	push   $0xf2
c10017c6:	e9 04 f6 ff ff       	jmp    c1000dcf <__alltraps>

c10017cb <vector243>:
c10017cb:	6a 00                	push   $0x0
c10017cd:	68 f3 00 00 00       	push   $0xf3
c10017d2:	e9 f8 f5 ff ff       	jmp    c1000dcf <__alltraps>

c10017d7 <vector244>:
c10017d7:	6a 00                	push   $0x0
c10017d9:	68 f4 00 00 00       	push   $0xf4
c10017de:	e9 ec f5 ff ff       	jmp    c1000dcf <__alltraps>

c10017e3 <vector245>:
c10017e3:	6a 00                	push   $0x0
c10017e5:	68 f5 00 00 00       	push   $0xf5
c10017ea:	e9 e0 f5 ff ff       	jmp    c1000dcf <__alltraps>

c10017ef <vector246>:
c10017ef:	6a 00                	push   $0x0
c10017f1:	68 f6 00 00 00       	push   $0xf6
c10017f6:	e9 d4 f5 ff ff       	jmp    c1000dcf <__alltraps>

c10017fb <vector247>:
c10017fb:	6a 00                	push   $0x0
c10017fd:	68 f7 00 00 00       	push   $0xf7
c1001802:	e9 c8 f5 ff ff       	jmp    c1000dcf <__alltraps>

c1001807 <vector248>:
c1001807:	6a 00                	push   $0x0
c1001809:	68 f8 00 00 00       	push   $0xf8
c100180e:	e9 bc f5 ff ff       	jmp    c1000dcf <__alltraps>

c1001813 <vector249>:
c1001813:	6a 00                	push   $0x0
c1001815:	68 f9 00 00 00       	push   $0xf9
c100181a:	e9 b0 f5 ff ff       	jmp    c1000dcf <__alltraps>

c100181f <vector250>:
c100181f:	6a 00                	push   $0x0
c1001821:	68 fa 00 00 00       	push   $0xfa
c1001826:	e9 a4 f5 ff ff       	jmp    c1000dcf <__alltraps>

c100182b <vector251>:
c100182b:	6a 00                	push   $0x0
c100182d:	68 fb 00 00 00       	push   $0xfb
c1001832:	e9 98 f5 ff ff       	jmp    c1000dcf <__alltraps>

c1001837 <vector252>:
c1001837:	6a 00                	push   $0x0
c1001839:	68 fc 00 00 00       	push   $0xfc
c100183e:	e9 8c f5 ff ff       	jmp    c1000dcf <__alltraps>

c1001843 <vector253>:
c1001843:	6a 00                	push   $0x0
c1001845:	68 fd 00 00 00       	push   $0xfd
c100184a:	e9 80 f5 ff ff       	jmp    c1000dcf <__alltraps>

c100184f <vector254>:
c100184f:	6a 00                	push   $0x0
c1001851:	68 fe 00 00 00       	push   $0xfe
c1001856:	e9 74 f5 ff ff       	jmp    c1000dcf <__alltraps>

c100185b <vector255>:
c100185b:	6a 00                	push   $0x0
c100185d:	68 ff 00 00 00       	push   $0xff
c1001862:	e9 68 f5 ff ff       	jmp    c1000dcf <__alltraps>

c1001867 <hash32>:
c1001867:	55                   	push   %ebp
c1001868:	89 e5                	mov    %esp,%ebp
c100186a:	83 ec 10             	sub    $0x10,%esp
c100186d:	8b 45 08             	mov    0x8(%ebp),%eax
c1001870:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1001876:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1001879:	b8 20 00 00 00       	mov    $0x20,%eax
c100187e:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001881:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001884:	89 c1                	mov    %eax,%ecx
c1001886:	d3 ea                	shr    %cl,%edx
c1001888:	89 d0                	mov    %edx,%eax
c100188a:	c9                   	leave  
c100188b:	c3                   	ret    

c100188c <syscall_exit>:
c100188c:	55                   	push   %ebp
c100188d:	89 e5                	mov    %esp,%ebp
c100188f:	83 ec 18             	sub    $0x18,%esp
c1001892:	8b 45 08             	mov    0x8(%ebp),%eax
c1001895:	8b 00                	mov    (%eax),%eax
c1001897:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100189a:	83 ec 0c             	sub    $0xc,%esp
c100189d:	ff 75 f4             	pushl  -0xc(%ebp)
c10018a0:	e8 a0 2d 00 00       	call   c1004645 <sys_exit>
c10018a5:	83 c4 10             	add    $0x10,%esp
c10018a8:	b8 00 00 00 00       	mov    $0x0,%eax
c10018ad:	c9                   	leave  
c10018ae:	c3                   	ret    

c10018af <sys_fork>:
c10018af:	55                   	push   %ebp
c10018b0:	89 e5                	mov    %esp,%ebp
c10018b2:	83 ec 18             	sub    $0x18,%esp
c10018b5:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10018ba:	8b 40 38             	mov    0x38(%eax),%eax
c10018bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10018c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10018c3:	8b 40 44             	mov    0x44(%eax),%eax
c10018c6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10018c9:	83 ec 04             	sub    $0x4,%esp
c10018cc:	ff 75 f4             	pushl  -0xc(%ebp)
c10018cf:	ff 75 f0             	pushl  -0x10(%ebp)
c10018d2:	6a 00                	push   $0x0
c10018d4:	e8 6e 22 00 00       	call   c1003b47 <do_fork>
c10018d9:	83 c4 10             	add    $0x10,%esp
c10018dc:	c9                   	leave  
c10018dd:	c3                   	ret    

c10018de <syscall_wait>:
c10018de:	55                   	push   %ebp
c10018df:	89 e5                	mov    %esp,%ebp
c10018e1:	83 ec 18             	sub    $0x18,%esp
c10018e4:	8b 45 08             	mov    0x8(%ebp),%eax
c10018e7:	8b 00                	mov    (%eax),%eax
c10018e9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10018ec:	83 ec 0c             	sub    $0xc,%esp
c10018ef:	ff 75 f4             	pushl  -0xc(%ebp)
c10018f2:	e8 a8 2c 00 00       	call   c100459f <sys_wait>
c10018f7:	83 c4 10             	add    $0x10,%esp
c10018fa:	c9                   	leave  
c10018fb:	c3                   	ret    

c10018fc <sys_exec>:
c10018fc:	55                   	push   %ebp
c10018fd:	89 e5                	mov    %esp,%ebp
c10018ff:	83 ec 18             	sub    $0x18,%esp
c1001902:	8b 45 08             	mov    0x8(%ebp),%eax
c1001905:	8b 00                	mov    (%eax),%eax
c1001907:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100190a:	8b 45 08             	mov    0x8(%ebp),%eax
c100190d:	83 c0 04             	add    $0x4,%eax
c1001910:	8b 00                	mov    (%eax),%eax
c1001912:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001915:	83 ec 08             	sub    $0x8,%esp
c1001918:	ff 75 f0             	pushl  -0x10(%ebp)
c100191b:	ff 75 f4             	pushl  -0xc(%ebp)
c100191e:	e8 24 34 00 00       	call   c1004d47 <sys_execv>
c1001923:	83 c4 10             	add    $0x10,%esp
c1001926:	c9                   	leave  
c1001927:	c3                   	ret    

c1001928 <sys_yield>:
c1001928:	55                   	push   %ebp
c1001929:	89 e5                	mov    %esp,%ebp
c100192b:	90                   	nop
c100192c:	5d                   	pop    %ebp
c100192d:	c3                   	ret    

c100192e <sys_kill>:
c100192e:	55                   	push   %ebp
c100192f:	89 e5                	mov    %esp,%ebp
c1001931:	83 ec 10             	sub    $0x10,%esp
c1001934:	8b 45 08             	mov    0x8(%ebp),%eax
c1001937:	8b 00                	mov    (%eax),%eax
c1001939:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100193c:	90                   	nop
c100193d:	c9                   	leave  
c100193e:	c3                   	ret    

c100193f <sys_getpid>:
c100193f:	55                   	push   %ebp
c1001940:	89 e5                	mov    %esp,%ebp
c1001942:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1001947:	8b 40 0c             	mov    0xc(%eax),%eax
c100194a:	5d                   	pop    %ebp
c100194b:	c3                   	ret    

c100194c <sys_print_char>:
c100194c:	55                   	push   %ebp
c100194d:	89 e5                	mov    %esp,%ebp
c100194f:	83 ec 18             	sub    $0x18,%esp
c1001952:	8b 45 08             	mov    0x8(%ebp),%eax
c1001955:	8b 00                	mov    (%eax),%eax
c1001957:	88 45 f7             	mov    %al,-0x9(%ebp)
c100195a:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100195e:	83 ec 04             	sub    $0x4,%esp
c1001961:	6a 02                	push   $0x2
c1001963:	6a 00                	push   $0x0
c1001965:	50                   	push   %eax
c1001966:	e8 0b 3b 00 00       	call   c1005476 <print_char>
c100196b:	83 c4 10             	add    $0x10,%esp
c100196e:	b8 00 00 00 00       	mov    $0x0,%eax
c1001973:	c9                   	leave  
c1001974:	c3                   	ret    

c1001975 <sys_print_string>:
c1001975:	55                   	push   %ebp
c1001976:	89 e5                	mov    %esp,%ebp
c1001978:	83 ec 18             	sub    $0x18,%esp
c100197b:	8b 45 08             	mov    0x8(%ebp),%eax
c100197e:	8b 00                	mov    (%eax),%eax
c1001980:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001983:	83 ec 04             	sub    $0x4,%esp
c1001986:	6a 02                	push   $0x2
c1001988:	6a 00                	push   $0x0
c100198a:	ff 75 f4             	pushl  -0xc(%ebp)
c100198d:	e8 01 3c 00 00       	call   c1005593 <print_string>
c1001992:	83 c4 10             	add    $0x10,%esp
c1001995:	b8 00 00 00 00       	mov    $0x0,%eax
c100199a:	c9                   	leave  
c100199b:	c3                   	ret    

c100199c <sys_print_num>:
c100199c:	55                   	push   %ebp
c100199d:	89 e5                	mov    %esp,%ebp
c100199f:	53                   	push   %ebx
c10019a0:	83 ec 14             	sub    $0x14,%esp
c10019a3:	8b 45 08             	mov    0x8(%ebp),%eax
c10019a6:	8b 00                	mov    (%eax),%eax
c10019a8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10019ab:	8b 45 08             	mov    0x8(%ebp),%eax
c10019ae:	83 c0 04             	add    $0x4,%eax
c10019b1:	8b 00                	mov    (%eax),%eax
c10019b3:	88 45 f3             	mov    %al,-0xd(%ebp)
c10019b6:	8b 45 08             	mov    0x8(%ebp),%eax
c10019b9:	83 c0 08             	add    $0x8,%eax
c10019bc:	8b 00                	mov    (%eax),%eax
c10019be:	88 45 f2             	mov    %al,-0xe(%ebp)
c10019c1:	8b 45 08             	mov    0x8(%ebp),%eax
c10019c4:	83 c0 0c             	add    $0xc,%eax
c10019c7:	8b 00                	mov    (%eax),%eax
c10019c9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10019cc:	0f be 5d f2          	movsbl -0xe(%ebp),%ebx
c10019d0:	0f b6 4d f3          	movzbl -0xd(%ebp),%ecx
c10019d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10019d7:	99                   	cltd   
c10019d8:	83 ec 04             	sub    $0x4,%esp
c10019db:	ff 75 ec             	pushl  -0x14(%ebp)
c10019de:	53                   	push   %ebx
c10019df:	51                   	push   %ecx
c10019e0:	6a 02                	push   $0x2
c10019e2:	6a 00                	push   $0x0
c10019e4:	52                   	push   %edx
c10019e5:	50                   	push   %eax
c10019e6:	e8 df 3b 00 00       	call   c10055ca <print_num>
c10019eb:	83 c4 20             	add    $0x20,%esp
c10019ee:	b8 00 00 00 00       	mov    $0x0,%eax
c10019f3:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10019f6:	c9                   	leave  
c10019f7:	c3                   	ret    

c10019f8 <sys_backtrace>:
c10019f8:	55                   	push   %ebp
c10019f9:	89 e5                	mov    %esp,%ebp
c10019fb:	83 ec 08             	sub    $0x8,%esp
c10019fe:	e8 46 3d 00 00       	call   c1005749 <backtrace>
c1001a03:	b8 00 00 00 00       	mov    $0x0,%eax
c1001a08:	c9                   	leave  
c1001a09:	c3                   	ret    

c1001a0a <sys_pgdir>:
c1001a0a:	55                   	push   %ebp
c1001a0b:	89 e5                	mov    %esp,%ebp
c1001a0d:	b8 00 00 00 00       	mov    $0x0,%eax
c1001a12:	5d                   	pop    %ebp
c1001a13:	c3                   	ret    

c1001a14 <sys_fdread>:
c1001a14:	55                   	push   %ebp
c1001a15:	89 e5                	mov    %esp,%ebp
c1001a17:	83 ec 18             	sub    $0x18,%esp
c1001a1a:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a1d:	8b 00                	mov    (%eax),%eax
c1001a1f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a22:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a25:	83 c0 04             	add    $0x4,%eax
c1001a28:	8b 00                	mov    (%eax),%eax
c1001a2a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001a2d:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a30:	8b 40 08             	mov    0x8(%eax),%eax
c1001a33:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001a36:	83 ec 04             	sub    $0x4,%esp
c1001a39:	ff 75 ec             	pushl  -0x14(%ebp)
c1001a3c:	ff 75 f0             	pushl  -0x10(%ebp)
c1001a3f:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a42:	e8 b9 58 00 00       	call   c1007300 <sys_read>
c1001a47:	83 c4 10             	add    $0x10,%esp
c1001a4a:	c9                   	leave  
c1001a4b:	c3                   	ret    

c1001a4c <syscall_open>:
c1001a4c:	55                   	push   %ebp
c1001a4d:	89 e5                	mov    %esp,%ebp
c1001a4f:	83 ec 18             	sub    $0x18,%esp
c1001a52:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a55:	8b 00                	mov    (%eax),%eax
c1001a57:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a5a:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a5d:	83 c0 04             	add    $0x4,%eax
c1001a60:	8b 00                	mov    (%eax),%eax
c1001a62:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001a65:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001a69:	83 ec 08             	sub    $0x8,%esp
c1001a6c:	50                   	push   %eax
c1001a6d:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a70:	e8 92 53 00 00       	call   c1006e07 <sys_open>
c1001a75:	83 c4 10             	add    $0x10,%esp
c1001a78:	c9                   	leave  
c1001a79:	c3                   	ret    

c1001a7a <syscall_close>:
c1001a7a:	55                   	push   %ebp
c1001a7b:	89 e5                	mov    %esp,%ebp
c1001a7d:	83 ec 18             	sub    $0x18,%esp
c1001a80:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a83:	8b 00                	mov    (%eax),%eax
c1001a85:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a88:	83 ec 0c             	sub    $0xc,%esp
c1001a8b:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a8e:	e8 12 56 00 00       	call   c10070a5 <sys_close>
c1001a93:	83 c4 10             	add    $0x10,%esp
c1001a96:	c9                   	leave  
c1001a97:	c3                   	ret    

c1001a98 <syscall_write>:
c1001a98:	55                   	push   %ebp
c1001a99:	89 e5                	mov    %esp,%ebp
c1001a9b:	83 ec 18             	sub    $0x18,%esp
c1001a9e:	8b 45 08             	mov    0x8(%ebp),%eax
c1001aa1:	8b 00                	mov    (%eax),%eax
c1001aa3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001aa6:	8b 45 08             	mov    0x8(%ebp),%eax
c1001aa9:	83 c0 04             	add    $0x4,%eax
c1001aac:	8b 00                	mov    (%eax),%eax
c1001aae:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001ab1:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ab4:	8b 40 08             	mov    0x8(%eax),%eax
c1001ab7:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001aba:	83 ec 04             	sub    $0x4,%esp
c1001abd:	ff 75 ec             	pushl  -0x14(%ebp)
c1001ac0:	ff 75 f0             	pushl  -0x10(%ebp)
c1001ac3:	ff 75 f4             	pushl  -0xc(%ebp)
c1001ac6:	e8 d6 56 00 00       	call   c10071a1 <sys_write>
c1001acb:	83 c4 10             	add    $0x10,%esp
c1001ace:	c9                   	leave  
c1001acf:	c3                   	ret    

c1001ad0 <syscall_lseek>:
c1001ad0:	55                   	push   %ebp
c1001ad1:	89 e5                	mov    %esp,%ebp
c1001ad3:	83 ec 18             	sub    $0x18,%esp
c1001ad6:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ad9:	8b 00                	mov    (%eax),%eax
c1001adb:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001ade:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ae1:	83 c0 04             	add    $0x4,%eax
c1001ae4:	8b 00                	mov    (%eax),%eax
c1001ae6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001ae9:	8b 45 08             	mov    0x8(%ebp),%eax
c1001aec:	83 c0 08             	add    $0x8,%eax
c1001aef:	8b 00                	mov    (%eax),%eax
c1001af1:	88 45 ef             	mov    %al,-0x11(%ebp)
c1001af4:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1001af8:	83 ec 04             	sub    $0x4,%esp
c1001afb:	50                   	push   %eax
c1001afc:	ff 75 f0             	pushl  -0x10(%ebp)
c1001aff:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b02:	e8 50 59 00 00       	call   c1007457 <sys_lseek>
c1001b07:	83 c4 10             	add    $0x10,%esp
c1001b0a:	c9                   	leave  
c1001b0b:	c3                   	ret    

c1001b0c <syscall_unlink>:
c1001b0c:	55                   	push   %ebp
c1001b0d:	89 e5                	mov    %esp,%ebp
c1001b0f:	83 ec 18             	sub    $0x18,%esp
c1001b12:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b15:	8b 00                	mov    (%eax),%eax
c1001b17:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b1a:	83 ec 0c             	sub    $0xc,%esp
c1001b1d:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b20:	e8 1e 5a 00 00       	call   c1007543 <sys_unlink>
c1001b25:	83 c4 10             	add    $0x10,%esp
c1001b28:	c9                   	leave  
c1001b29:	c3                   	ret    

c1001b2a <syscall_mkdir>:
c1001b2a:	55                   	push   %ebp
c1001b2b:	89 e5                	mov    %esp,%ebp
c1001b2d:	83 ec 18             	sub    $0x18,%esp
c1001b30:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b33:	8b 00                	mov    (%eax),%eax
c1001b35:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b38:	83 ec 0c             	sub    $0xc,%esp
c1001b3b:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b3e:	e8 20 5c 00 00       	call   c1007763 <sys_mkdir>
c1001b43:	83 c4 10             	add    $0x10,%esp
c1001b46:	c9                   	leave  
c1001b47:	c3                   	ret    

c1001b48 <syscall_rmdir>:
c1001b48:	55                   	push   %ebp
c1001b49:	89 e5                	mov    %esp,%ebp
c1001b4b:	83 ec 18             	sub    $0x18,%esp
c1001b4e:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b51:	8b 00                	mov    (%eax),%eax
c1001b53:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b56:	83 ec 0c             	sub    $0xc,%esp
c1001b59:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b5c:	e8 bb 61 00 00       	call   c1007d1c <sys_rmdir>
c1001b61:	83 c4 10             	add    $0x10,%esp
c1001b64:	c9                   	leave  
c1001b65:	c3                   	ret    

c1001b66 <syscall_rewinddir>:
c1001b66:	55                   	push   %ebp
c1001b67:	89 e5                	mov    %esp,%ebp
c1001b69:	83 ec 18             	sub    $0x18,%esp
c1001b6c:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b6f:	8b 00                	mov    (%eax),%eax
c1001b71:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b74:	83 ec 0c             	sub    $0xc,%esp
c1001b77:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b7a:	e8 8d 61 00 00       	call   c1007d0c <sys_rewinddir>
c1001b7f:	83 c4 10             	add    $0x10,%esp
c1001b82:	b8 00 00 00 00       	mov    $0x0,%eax
c1001b87:	c9                   	leave  
c1001b88:	c3                   	ret    

c1001b89 <syscall_getcwd>:
c1001b89:	55                   	push   %ebp
c1001b8a:	89 e5                	mov    %esp,%ebp
c1001b8c:	83 ec 18             	sub    $0x18,%esp
c1001b8f:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b92:	8b 00                	mov    (%eax),%eax
c1001b94:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b97:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b9a:	8b 40 04             	mov    0x4(%eax),%eax
c1001b9d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001ba0:	83 ec 08             	sub    $0x8,%esp
c1001ba3:	ff 75 f0             	pushl  -0x10(%ebp)
c1001ba6:	ff 75 f4             	pushl  -0xc(%ebp)
c1001ba9:	e8 ed 64 00 00       	call   c100809b <sys_getcwd>
c1001bae:	83 c4 10             	add    $0x10,%esp
c1001bb1:	c9                   	leave  
c1001bb2:	c3                   	ret    

c1001bb3 <syscall_chdir>:
c1001bb3:	55                   	push   %ebp
c1001bb4:	89 e5                	mov    %esp,%ebp
c1001bb6:	83 ec 18             	sub    $0x18,%esp
c1001bb9:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bbc:	8b 00                	mov    (%eax),%eax
c1001bbe:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bc1:	83 ec 0c             	sub    $0xc,%esp
c1001bc4:	ff 75 f4             	pushl  -0xc(%ebp)
c1001bc7:	e8 e8 67 00 00       	call   c10083b4 <sys_chdir>
c1001bcc:	83 c4 10             	add    $0x10,%esp
c1001bcf:	c9                   	leave  
c1001bd0:	c3                   	ret    

c1001bd1 <syscall_stat>:
c1001bd1:	55                   	push   %ebp
c1001bd2:	89 e5                	mov    %esp,%ebp
c1001bd4:	83 ec 18             	sub    $0x18,%esp
c1001bd7:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bda:	8b 00                	mov    (%eax),%eax
c1001bdc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bdf:	8b 45 08             	mov    0x8(%ebp),%eax
c1001be2:	83 c0 04             	add    $0x4,%eax
c1001be5:	8b 00                	mov    (%eax),%eax
c1001be7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001bea:	83 ec 08             	sub    $0x8,%esp
c1001bed:	ff 75 f0             	pushl  -0x10(%ebp)
c1001bf0:	ff 75 f4             	pushl  -0xc(%ebp)
c1001bf3:	e8 90 66 00 00       	call   c1008288 <sys_stat>
c1001bf8:	83 c4 10             	add    $0x10,%esp
c1001bfb:	c9                   	leave  
c1001bfc:	c3                   	ret    

c1001bfd <syscall_opendir>:
c1001bfd:	55                   	push   %ebp
c1001bfe:	89 e5                	mov    %esp,%ebp
c1001c00:	83 ec 18             	sub    $0x18,%esp
c1001c03:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c06:	8b 00                	mov    (%eax),%eax
c1001c08:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c0b:	83 ec 0c             	sub    $0xc,%esp
c1001c0e:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c11:	e8 87 5f 00 00       	call   c1007b9d <sys_opendir>
c1001c16:	83 c4 10             	add    $0x10,%esp
c1001c19:	c9                   	leave  
c1001c1a:	c3                   	ret    

c1001c1b <syscall_closedir>:
c1001c1b:	55                   	push   %ebp
c1001c1c:	89 e5                	mov    %esp,%ebp
c1001c1e:	83 ec 18             	sub    $0x18,%esp
c1001c21:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c24:	8b 00                	mov    (%eax),%eax
c1001c26:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c29:	83 ec 0c             	sub    $0xc,%esp
c1001c2c:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c2f:	e8 76 60 00 00       	call   c1007caa <sys_closedir>
c1001c34:	83 c4 10             	add    $0x10,%esp
c1001c37:	c9                   	leave  
c1001c38:	c3                   	ret    

c1001c39 <syscall_readdir>:
c1001c39:	55                   	push   %ebp
c1001c3a:	89 e5                	mov    %esp,%ebp
c1001c3c:	83 ec 18             	sub    $0x18,%esp
c1001c3f:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c42:	8b 00                	mov    (%eax),%eax
c1001c44:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c47:	83 ec 0c             	sub    $0xc,%esp
c1001c4a:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c4d:	e8 85 60 00 00       	call   c1007cd7 <sys_readdir>
c1001c52:	83 c4 10             	add    $0x10,%esp
c1001c55:	c9                   	leave  
c1001c56:	c3                   	ret    

c1001c57 <syscall_print_task>:
c1001c57:	55                   	push   %ebp
c1001c58:	89 e5                	mov    %esp,%ebp
c1001c5a:	83 ec 08             	sub    $0x8,%esp
c1001c5d:	e8 9d 2d 00 00       	call   c10049ff <sys_print_task>
c1001c62:	b8 00 00 00 00       	mov    $0x0,%eax
c1001c67:	c9                   	leave  
c1001c68:	c3                   	ret    

c1001c69 <syscall_malloc>:
c1001c69:	55                   	push   %ebp
c1001c6a:	89 e5                	mov    %esp,%ebp
c1001c6c:	83 ec 18             	sub    $0x18,%esp
c1001c6f:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c72:	8b 00                	mov    (%eax),%eax
c1001c74:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c77:	83 ec 0c             	sub    $0xc,%esp
c1001c7a:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c7d:	e8 9c 13 00 00       	call   c100301e <sys_malloc>
c1001c82:	83 c4 10             	add    $0x10,%esp
c1001c85:	c9                   	leave  
c1001c86:	c3                   	ret    

c1001c87 <syscall_free>:
c1001c87:	55                   	push   %ebp
c1001c88:	89 e5                	mov    %esp,%ebp
c1001c8a:	83 ec 18             	sub    $0x18,%esp
c1001c8d:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c90:	8b 00                	mov    (%eax),%eax
c1001c92:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c95:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c98:	8b 40 04             	mov    0x4(%eax),%eax
c1001c9b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001c9e:	83 ec 08             	sub    $0x8,%esp
c1001ca1:	ff 75 f0             	pushl  -0x10(%ebp)
c1001ca4:	ff 75 f4             	pushl  -0xc(%ebp)
c1001ca7:	e8 d1 13 00 00       	call   c100307d <sys_free>
c1001cac:	83 c4 10             	add    $0x10,%esp
c1001caf:	b8 00 00 00 00       	mov    $0x0,%eax
c1001cb4:	c9                   	leave  
c1001cb5:	c3                   	ret    

c1001cb6 <syscall_pipe>:
c1001cb6:	55                   	push   %ebp
c1001cb7:	89 e5                	mov    %esp,%ebp
c1001cb9:	83 ec 18             	sub    $0x18,%esp
c1001cbc:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cbf:	8b 00                	mov    (%eax),%eax
c1001cc1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001cc4:	83 ec 0c             	sub    $0xc,%esp
c1001cc7:	ff 75 f4             	pushl  -0xc(%ebp)
c1001cca:	e8 52 8f 00 00       	call   c100ac21 <sys_pipe>
c1001ccf:	83 c4 10             	add    $0x10,%esp
c1001cd2:	b8 00 00 00 00       	mov    $0x0,%eax
c1001cd7:	c9                   	leave  
c1001cd8:	c3                   	ret    

c1001cd9 <syscall_trap>:
c1001cd9:	55                   	push   %ebp
c1001cda:	89 e5                	mov    %esp,%ebp
c1001cdc:	83 ec 28             	sub    $0x28,%esp
c1001cdf:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ce2:	8b 40 1c             	mov    0x1c(%eax),%eax
c1001ce5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001ce8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1001cec:	78 60                	js     c1001d4e <syscall_trap+0x75>
c1001cee:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001cf1:	83 f8 3a             	cmp    $0x3a,%eax
c1001cf4:	77 58                	ja     c1001d4e <syscall_trap+0x75>
c1001cf6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001cf9:	8b 04 85 00 d5 00 c1 	mov    -0x3eff2b00(,%eax,4),%eax
c1001d00:	85 c0                	test   %eax,%eax
c1001d02:	74 4a                	je     c1001d4e <syscall_trap+0x75>
c1001d04:	8b 45 08             	mov    0x8(%ebp),%eax
c1001d07:	8b 40 14             	mov    0x14(%eax),%eax
c1001d0a:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1001d0d:	8b 45 08             	mov    0x8(%ebp),%eax
c1001d10:	8b 40 18             	mov    0x18(%eax),%eax
c1001d13:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1001d16:	8b 45 08             	mov    0x8(%ebp),%eax
c1001d19:	8b 40 10             	mov    0x10(%eax),%eax
c1001d1c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1001d1f:	8b 45 08             	mov    0x8(%ebp),%eax
c1001d22:	8b 00                	mov    (%eax),%eax
c1001d24:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001d27:	8b 45 08             	mov    0x8(%ebp),%eax
c1001d2a:	8b 40 04             	mov    0x4(%eax),%eax
c1001d2d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001d30:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001d33:	8b 04 85 00 d5 00 c1 	mov    -0x3eff2b00(,%eax,4),%eax
c1001d3a:	83 ec 0c             	sub    $0xc,%esp
c1001d3d:	8d 55 e0             	lea    -0x20(%ebp),%edx
c1001d40:	52                   	push   %edx
c1001d41:	ff d0                	call   *%eax
c1001d43:	83 c4 10             	add    $0x10,%esp
c1001d46:	89 c2                	mov    %eax,%edx
c1001d48:	8b 45 08             	mov    0x8(%ebp),%eax
c1001d4b:	89 50 1c             	mov    %edx,0x1c(%eax)
c1001d4e:	c9                   	leave  
c1001d4f:	c3                   	ret    

c1001d50 <kbd_proc_data>:
c1001d50:	55                   	push   %ebp
c1001d51:	89 e5                	mov    %esp,%ebp
c1001d53:	83 ec 18             	sub    $0x18,%esp
c1001d56:	83 ec 0c             	sub    $0xc,%esp
c1001d59:	6a 64                	push   $0x64
c1001d5b:	e8 a0 e2 ff ff       	call   c1000000 <inb>
c1001d60:	83 c4 10             	add    $0x10,%esp
c1001d63:	83 e0 01             	and    $0x1,%eax
c1001d66:	85 c0                	test   %eax,%eax
c1001d68:	75 0a                	jne    c1001d74 <kbd_proc_data+0x24>
c1001d6a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1001d6f:	e9 55 01 00 00       	jmp    c1001ec9 <kbd_proc_data+0x179>
c1001d74:	83 ec 0c             	sub    $0xc,%esp
c1001d77:	6a 60                	push   $0x60
c1001d79:	e8 82 e2 ff ff       	call   c1000000 <inb>
c1001d7e:	83 c4 10             	add    $0x10,%esp
c1001d81:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001d84:	80 7d f3 e0          	cmpb   $0xe0,-0xd(%ebp)
c1001d88:	75 17                	jne    c1001da1 <kbd_proc_data+0x51>
c1001d8a:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001d8f:	83 c8 40             	or     $0x40,%eax
c1001d92:	a3 68 fc 00 c1       	mov    %eax,0xc100fc68
c1001d97:	b8 00 00 00 00       	mov    $0x0,%eax
c1001d9c:	e9 28 01 00 00       	jmp    c1001ec9 <kbd_proc_data+0x179>
c1001da1:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001da5:	84 c0                	test   %al,%al
c1001da7:	79 47                	jns    c1001df0 <kbd_proc_data+0xa0>
c1001da9:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001dae:	83 e0 40             	and    $0x40,%eax
c1001db1:	85 c0                	test   %eax,%eax
c1001db3:	75 09                	jne    c1001dbe <kbd_proc_data+0x6e>
c1001db5:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001db9:	83 e0 7f             	and    $0x7f,%eax
c1001dbc:	eb 04                	jmp    c1001dc2 <kbd_proc_data+0x72>
c1001dbe:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001dc2:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001dc5:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001dc9:	0f b6 80 00 d6 00 c1 	movzbl -0x3eff2a00(%eax),%eax
c1001dd0:	83 c8 40             	or     $0x40,%eax
c1001dd3:	0f b6 c0             	movzbl %al,%eax
c1001dd6:	f7 d0                	not    %eax
c1001dd8:	89 c2                	mov    %eax,%edx
c1001dda:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001ddf:	21 d0                	and    %edx,%eax
c1001de1:	a3 68 fc 00 c1       	mov    %eax,0xc100fc68
c1001de6:	b8 00 00 00 00       	mov    $0x0,%eax
c1001deb:	e9 d9 00 00 00       	jmp    c1001ec9 <kbd_proc_data+0x179>
c1001df0:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001df5:	83 e0 40             	and    $0x40,%eax
c1001df8:	85 c0                	test   %eax,%eax
c1001dfa:	74 11                	je     c1001e0d <kbd_proc_data+0xbd>
c1001dfc:	80 4d f3 80          	orb    $0x80,-0xd(%ebp)
c1001e00:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001e05:	83 e0 bf             	and    $0xffffffbf,%eax
c1001e08:	a3 68 fc 00 c1       	mov    %eax,0xc100fc68
c1001e0d:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001e11:	0f b6 80 00 d6 00 c1 	movzbl -0x3eff2a00(%eax),%eax
c1001e18:	0f b6 d0             	movzbl %al,%edx
c1001e1b:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001e20:	09 d0                	or     %edx,%eax
c1001e22:	a3 68 fc 00 c1       	mov    %eax,0xc100fc68
c1001e27:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001e2b:	0f b6 80 00 d7 00 c1 	movzbl -0x3eff2900(%eax),%eax
c1001e32:	0f b6 d0             	movzbl %al,%edx
c1001e35:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001e3a:	31 d0                	xor    %edx,%eax
c1001e3c:	a3 68 fc 00 c1       	mov    %eax,0xc100fc68
c1001e41:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001e46:	83 e0 03             	and    $0x3,%eax
c1001e49:	8b 14 85 00 db 00 c1 	mov    -0x3eff2500(,%eax,4),%edx
c1001e50:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001e54:	01 d0                	add    %edx,%eax
c1001e56:	0f b6 00             	movzbl (%eax),%eax
c1001e59:	0f b6 c0             	movzbl %al,%eax
c1001e5c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001e5f:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001e64:	83 e0 08             	and    $0x8,%eax
c1001e67:	85 c0                	test   %eax,%eax
c1001e69:	74 22                	je     c1001e8d <kbd_proc_data+0x13d>
c1001e6b:	83 7d f4 60          	cmpl   $0x60,-0xc(%ebp)
c1001e6f:	7e 0c                	jle    c1001e7d <kbd_proc_data+0x12d>
c1001e71:	83 7d f4 7a          	cmpl   $0x7a,-0xc(%ebp)
c1001e75:	7f 06                	jg     c1001e7d <kbd_proc_data+0x12d>
c1001e77:	83 6d f4 20          	subl   $0x20,-0xc(%ebp)
c1001e7b:	eb 10                	jmp    c1001e8d <kbd_proc_data+0x13d>
c1001e7d:	83 7d f4 40          	cmpl   $0x40,-0xc(%ebp)
c1001e81:	7e 0a                	jle    c1001e8d <kbd_proc_data+0x13d>
c1001e83:	83 7d f4 5a          	cmpl   $0x5a,-0xc(%ebp)
c1001e87:	7f 04                	jg     c1001e8d <kbd_proc_data+0x13d>
c1001e89:	83 45 f4 20          	addl   $0x20,-0xc(%ebp)
c1001e8d:	a1 68 fc 00 c1       	mov    0xc100fc68,%eax
c1001e92:	f7 d0                	not    %eax
c1001e94:	83 e0 06             	and    $0x6,%eax
c1001e97:	85 c0                	test   %eax,%eax
c1001e99:	75 2b                	jne    c1001ec6 <kbd_proc_data+0x176>
c1001e9b:	81 7d f4 e9 00 00 00 	cmpl   $0xe9,-0xc(%ebp)
c1001ea2:	75 22                	jne    c1001ec6 <kbd_proc_data+0x176>
c1001ea4:	83 ec 0c             	sub    $0xc,%esp
c1001ea7:	68 28 b5 00 c1       	push   $0xc100b528
c1001eac:	e8 4a 39 00 00       	call   c10057fb <printk>
c1001eb1:	83 c4 10             	add    $0x10,%esp
c1001eb4:	83 ec 08             	sub    $0x8,%esp
c1001eb7:	6a 03                	push   $0x3
c1001eb9:	68 92 00 00 00       	push   $0x92
c1001ebe:	e8 79 e1 ff ff       	call   c100003c <outb>
c1001ec3:	83 c4 10             	add    $0x10,%esp
c1001ec6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001ec9:	c9                   	leave  
c1001eca:	c3                   	ret    

c1001ecb <kbd_intr>:
c1001ecb:	55                   	push   %ebp
c1001ecc:	89 e5                	mov    %esp,%ebp
c1001ece:	83 ec 08             	sub    $0x8,%esp
c1001ed1:	83 ec 0c             	sub    $0xc,%esp
c1001ed4:	68 50 1d 00 c1       	push   $0xc1001d50
c1001ed9:	e8 ba 32 00 00       	call   c1005198 <cons_intr>
c1001ede:	83 c4 10             	add    $0x10,%esp
c1001ee1:	90                   	nop
c1001ee2:	c9                   	leave  
c1001ee3:	c3                   	ret    

c1001ee4 <kbd_init>:
c1001ee4:	55                   	push   %ebp
c1001ee5:	89 e5                	mov    %esp,%ebp
c1001ee7:	83 ec 18             	sub    $0x18,%esp
c1001eea:	c7 05 20 42 a1 c1 00 	movl   $0x0,0xc1a14220
c1001ef1:	00 00 00 
c1001ef4:	c7 05 24 42 a1 c1 00 	movl   $0x0,0xc1a14224
c1001efb:	00 00 00 
c1001efe:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1001f05:	eb 0f                	jmp    c1001f16 <kbd_init+0x32>
c1001f07:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001f0a:	05 20 40 a1 c1       	add    $0xc1a14020,%eax
c1001f0f:	c6 00 00             	movb   $0x0,(%eax)
c1001f12:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1001f16:	81 7d f4 ff 01 00 00 	cmpl   $0x1ff,-0xc(%ebp)
c1001f1d:	7e e8                	jle    c1001f07 <kbd_init+0x23>
c1001f1f:	c6 05 6c fc 00 c1 00 	movb   $0x0,0xc100fc6c
c1001f26:	c7 05 68 fc 00 c1 00 	movl   $0x0,0xc100fc68
c1001f2d:	00 00 00 
c1001f30:	e8 96 ff ff ff       	call   c1001ecb <kbd_intr>
c1001f35:	83 ec 0c             	sub    $0xc,%esp
c1001f38:	6a 01                	push   $0x1
c1001f3a:	e8 18 2f 00 00       	call   c1004e57 <pic_enable>
c1001f3f:	83 c4 10             	add    $0x10,%esp
c1001f42:	90                   	nop
c1001f43:	c9                   	leave  
c1001f44:	c3                   	ret    

c1001f45 <hash32>:
c1001f45:	55                   	push   %ebp
c1001f46:	89 e5                	mov    %esp,%ebp
c1001f48:	83 ec 10             	sub    $0x10,%esp
c1001f4b:	8b 45 08             	mov    0x8(%ebp),%eax
c1001f4e:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1001f54:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1001f57:	b8 20 00 00 00       	mov    $0x20,%eax
c1001f5c:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001f5f:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001f62:	89 c1                	mov    %eax,%ecx
c1001f64:	d3 ea                	shr    %cl,%edx
c1001f66:	89 d0                	mov    %edx,%eax
c1001f68:	c9                   	leave  
c1001f69:	c3                   	ret    

c1001f6a <main>:
c1001f6a:	8d 4c 24 04          	lea    0x4(%esp),%ecx
c1001f6e:	83 e4 f0             	and    $0xfffffff0,%esp
c1001f71:	ff 71 fc             	pushl  -0x4(%ecx)
c1001f74:	55                   	push   %ebp
c1001f75:	89 e5                	mov    %esp,%ebp
c1001f77:	51                   	push   %ecx
c1001f78:	83 ec 04             	sub    $0x4,%esp
c1001f7b:	e8 7e 34 00 00       	call   c10053fe <clear>
c1001f80:	83 ec 0c             	sub    $0xc,%esp
c1001f83:	68 34 b5 00 c1       	push   $0xc100b534
c1001f88:	e8 6e 38 00 00       	call   c10057fb <printk>
c1001f8d:	83 c4 10             	add    $0x10,%esp
c1001f90:	e8 3d e7 ff ff       	call   c10006d2 <gdt_init>
c1001f95:	e8 f0 2e 00 00       	call   c1004e8a <pic_init>
c1001f9a:	e8 27 e8 ff ff       	call   c10007c6 <idt_init>
c1001f9f:	e8 a4 ed ff ff       	call   c1000d48 <enable_interupt>
c1001fa4:	e8 4a 30 00 00       	call   c1004ff3 <serial_init>
c1001fa9:	e8 36 ff ff ff       	call   c1001ee4 <kbd_init>
c1001fae:	e8 2d 0c 00 00       	call   c1002be0 <setup_vpt>
c1001fb3:	e8 40 06 00 00       	call   c10025f8 <pmm_init>
c1001fb8:	e8 85 02 00 00       	call   c1002242 <test_pmm>
c1001fbd:	e8 69 03 00 00       	call   c100232b <test_vmm>
c1001fc2:	e8 7a 64 00 00       	call   c1008441 <fs_init>
c1001fc7:	83 ec 0c             	sub    $0xc,%esp
c1001fca:	68 3d 22 00 c1       	push   $0xc100223d
c1001fcf:	e8 51 11 00 00       	call   c1003125 <kernel_task_init>
c1001fd4:	83 c4 10             	add    $0x10,%esp
c1001fd7:	e8 3b 00 00 00       	call   c1002017 <write2fs>
c1001fdc:	e8 1d 34 00 00       	call   c10053fe <clear>
c1001fe1:	83 ec 0c             	sub    $0xc,%esp
c1001fe4:	6a 64                	push   $0x64
c1001fe6:	e8 10 33 00 00       	call   c10052fb <timer_init>
c1001feb:	83 c4 10             	add    $0x10,%esp
c1001fee:	83 ec 08             	sub    $0x8,%esp
c1001ff1:	6a 00                	push   $0x0
c1001ff3:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1001ff8:	e8 52 3c 00 00       	call   c1005c4f <sema_init>
c1001ffd:	83 c4 10             	add    $0x10,%esp
c1002000:	e8 67 ed ff ff       	call   c1000d6c <intr_enable>
c1002005:	83 ec 0c             	sub    $0xc,%esp
c1002008:	68 52 00 00 40       	push   $0x40000052
c100200d:	e8 ca 26 00 00       	call   c10046dc <user_task_init>
c1002012:	83 c4 10             	add    $0x10,%esp
c1002015:	eb fe                	jmp    c1002015 <main+0xab>

c1002017 <write2fs>:
c1002017:	55                   	push   %ebp
c1002018:	89 e5                	mov    %esp,%ebp
c100201a:	83 ec 38             	sub    $0x38,%esp
c100201d:	c7 45 f4 1c 36 00 00 	movl   $0x361c,-0xc(%ebp)
c1002024:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002027:	05 ff 01 00 00       	add    $0x1ff,%eax
c100202c:	c1 e8 09             	shr    $0x9,%eax
c100202f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002032:	83 ec 08             	sub    $0x8,%esp
c1002035:	6a 01                	push   $0x1
c1002037:	ff 75 f4             	pushl  -0xc(%ebp)
c100203a:	e8 79 0c 00 00       	call   c1002cb8 <vmm_malloc>
c100203f:	83 c4 10             	add    $0x10,%esp
c1002042:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002045:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002048:	83 ec 04             	sub    $0x4,%esp
c100204b:	ff 75 f0             	pushl  -0x10(%ebp)
c100204e:	68 f4 01 00 00       	push   $0x1f4
c1002053:	50                   	push   %eax
c1002054:	e8 4a 40 00 00       	call   c10060a3 <ide_read>
c1002059:	83 c4 10             	add    $0x10,%esp
c100205c:	83 ec 08             	sub    $0x8,%esp
c100205f:	6a 06                	push   $0x6
c1002061:	68 4a b5 00 c1       	push   $0xc100b54a
c1002066:	e8 9c 4d 00 00       	call   c1006e07 <sys_open>
c100206b:	83 c4 10             	add    $0x10,%esp
c100206e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002071:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1002075:	74 2c                	je     c10020a3 <write2fs+0x8c>
c1002077:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100207a:	83 ec 04             	sub    $0x4,%esp
c100207d:	ff 75 f4             	pushl  -0xc(%ebp)
c1002080:	50                   	push   %eax
c1002081:	ff 75 e8             	pushl  -0x18(%ebp)
c1002084:	e8 18 51 00 00       	call   c10071a1 <sys_write>
c1002089:	83 c4 10             	add    $0x10,%esp
c100208c:	83 f8 ff             	cmp    $0xffffffff,%eax
c100208f:	75 12                	jne    c10020a3 <write2fs+0x8c>
c1002091:	83 ec 0c             	sub    $0xc,%esp
c1002094:	68 50 b5 00 c1       	push   $0xc100b550
c1002099:	e8 5d 37 00 00       	call   c10057fb <printk>
c100209e:	83 c4 10             	add    $0x10,%esp
c10020a1:	eb fe                	jmp    c10020a1 <write2fs+0x8a>
c10020a3:	83 ec 08             	sub    $0x8,%esp
c10020a6:	ff 75 f4             	pushl  -0xc(%ebp)
c10020a9:	ff 75 ec             	pushl  -0x14(%ebp)
c10020ac:	e8 2c 0d 00 00       	call   c1002ddd <vmm_free>
c10020b1:	83 c4 10             	add    $0x10,%esp
c10020b4:	c7 45 f4 dc 44 00 00 	movl   $0x44dc,-0xc(%ebp)
c10020bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10020be:	05 ff 01 00 00       	add    $0x1ff,%eax
c10020c3:	c1 e8 09             	shr    $0x9,%eax
c10020c6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10020c9:	83 ec 08             	sub    $0x8,%esp
c10020cc:	6a 01                	push   $0x1
c10020ce:	ff 75 f4             	pushl  -0xc(%ebp)
c10020d1:	e8 e2 0b 00 00       	call   c1002cb8 <vmm_malloc>
c10020d6:	83 c4 10             	add    $0x10,%esp
c10020d9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10020dc:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10020df:	83 ec 04             	sub    $0x4,%esp
c10020e2:	ff 75 f0             	pushl  -0x10(%ebp)
c10020e5:	68 12 02 00 00       	push   $0x212
c10020ea:	50                   	push   %eax
c10020eb:	e8 b3 3f 00 00       	call   c10060a3 <ide_read>
c10020f0:	83 c4 10             	add    $0x10,%esp
c10020f3:	83 ec 08             	sub    $0x8,%esp
c10020f6:	6a 06                	push   $0x6
c10020f8:	68 63 b5 00 c1       	push   $0xc100b563
c10020fd:	e8 05 4d 00 00       	call   c1006e07 <sys_open>
c1002102:	83 c4 10             	add    $0x10,%esp
c1002105:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002108:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c100210c:	74 2c                	je     c100213a <write2fs+0x123>
c100210e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002111:	83 ec 04             	sub    $0x4,%esp
c1002114:	ff 75 f4             	pushl  -0xc(%ebp)
c1002117:	50                   	push   %eax
c1002118:	ff 75 e8             	pushl  -0x18(%ebp)
c100211b:	e8 81 50 00 00       	call   c10071a1 <sys_write>
c1002120:	83 c4 10             	add    $0x10,%esp
c1002123:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002126:	75 12                	jne    c100213a <write2fs+0x123>
c1002128:	83 ec 0c             	sub    $0xc,%esp
c100212b:	68 50 b5 00 c1       	push   $0xc100b550
c1002130:	e8 c6 36 00 00       	call   c10057fb <printk>
c1002135:	83 c4 10             	add    $0x10,%esp
c1002138:	eb fe                	jmp    c1002138 <write2fs+0x121>
c100213a:	c7 45 f4 c8 38 00 00 	movl   $0x38c8,-0xc(%ebp)
c1002141:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002144:	05 ff 01 00 00       	add    $0x1ff,%eax
c1002149:	c1 e8 09             	shr    $0x9,%eax
c100214c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100214f:	83 ec 08             	sub    $0x8,%esp
c1002152:	6a 01                	push   $0x1
c1002154:	ff 75 f4             	pushl  -0xc(%ebp)
c1002157:	e8 5c 0b 00 00       	call   c1002cb8 <vmm_malloc>
c100215c:	83 c4 10             	add    $0x10,%esp
c100215f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002162:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002165:	83 ec 04             	sub    $0x4,%esp
c1002168:	ff 75 f0             	pushl  -0x10(%ebp)
c100216b:	68 3a 02 00 00       	push   $0x23a
c1002170:	50                   	push   %eax
c1002171:	e8 2d 3f 00 00       	call   c10060a3 <ide_read>
c1002176:	83 c4 10             	add    $0x10,%esp
c1002179:	83 ec 08             	sub    $0x8,%esp
c100217c:	6a 06                	push   $0x6
c100217e:	68 68 b5 00 c1       	push   $0xc100b568
c1002183:	e8 7f 4c 00 00       	call   c1006e07 <sys_open>
c1002188:	83 c4 10             	add    $0x10,%esp
c100218b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100218e:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1002192:	74 2c                	je     c10021c0 <write2fs+0x1a9>
c1002194:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002197:	83 ec 04             	sub    $0x4,%esp
c100219a:	ff 75 f4             	pushl  -0xc(%ebp)
c100219d:	50                   	push   %eax
c100219e:	ff 75 e8             	pushl  -0x18(%ebp)
c10021a1:	e8 fb 4f 00 00       	call   c10071a1 <sys_write>
c10021a6:	83 c4 10             	add    $0x10,%esp
c10021a9:	83 f8 ff             	cmp    $0xffffffff,%eax
c10021ac:	75 12                	jne    c10021c0 <write2fs+0x1a9>
c10021ae:	83 ec 0c             	sub    $0xc,%esp
c10021b1:	68 50 b5 00 c1       	push   $0xc100b550
c10021b6:	e8 40 36 00 00       	call   c10057fb <printk>
c10021bb:	83 c4 10             	add    $0x10,%esp
c10021be:	eb fe                	jmp    c10021be <write2fs+0x1a7>
c10021c0:	83 ec 08             	sub    $0x8,%esp
c10021c3:	ff 75 f4             	pushl  -0xc(%ebp)
c10021c6:	ff 75 ec             	pushl  -0x14(%ebp)
c10021c9:	e8 0f 0c 00 00       	call   c1002ddd <vmm_free>
c10021ce:	83 c4 10             	add    $0x10,%esp
c10021d1:	83 ec 08             	sub    $0x8,%esp
c10021d4:	6a 06                	push   $0x6
c10021d6:	68 6e b5 00 c1       	push   $0xc100b56e
c10021db:	e8 27 4c 00 00       	call   c1006e07 <sys_open>
c10021e0:	83 c4 10             	add    $0x10,%esp
c10021e3:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10021e6:	c7 45 d4 48 65 6c 6c 	movl   $0x6c6c6548,-0x2c(%ebp)
c10021ed:	c7 45 d8 6f 20 49 27 	movl   $0x2749206f,-0x28(%ebp)
c10021f4:	c7 45 dc 6d 20 61 20 	movl   $0x2061206d,-0x24(%ebp)
c10021fb:	c7 45 e0 66 69 6c 65 	movl   $0x656c6966,-0x20(%ebp)
c1002202:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002209:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c100220d:	74 2b                	je     c100223a <write2fs+0x223>
c100220f:	83 ec 04             	sub    $0x4,%esp
c1002212:	6a 14                	push   $0x14
c1002214:	8d 45 d4             	lea    -0x2c(%ebp),%eax
c1002217:	50                   	push   %eax
c1002218:	ff 75 e8             	pushl  -0x18(%ebp)
c100221b:	e8 81 4f 00 00       	call   c10071a1 <sys_write>
c1002220:	83 c4 10             	add    $0x10,%esp
c1002223:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002226:	75 12                	jne    c100223a <write2fs+0x223>
c1002228:	83 ec 0c             	sub    $0xc,%esp
c100222b:	68 50 b5 00 c1       	push   $0xc100b550
c1002230:	e8 c6 35 00 00       	call   c10057fb <printk>
c1002235:	83 c4 10             	add    $0x10,%esp
c1002238:	eb fe                	jmp    c1002238 <write2fs+0x221>
c100223a:	90                   	nop
c100223b:	c9                   	leave  
c100223c:	c3                   	ret    

c100223d <kernel_main>:
c100223d:	55                   	push   %ebp
c100223e:	89 e5                	mov    %esp,%ebp
c1002240:	eb fe                	jmp    c1002240 <kernel_main+0x3>

c1002242 <test_pmm>:
c1002242:	55                   	push   %ebp
c1002243:	89 e5                	mov    %esp,%ebp
c1002245:	83 ec 18             	sub    $0x18,%esp
c1002248:	83 ec 08             	sub    $0x8,%esp
c100224b:	6a 01                	push   $0x1
c100224d:	68 00 02 00 00       	push   $0x200
c1002252:	e8 c1 07 00 00       	call   c1002a18 <pmm_alloc>
c1002257:	83 c4 10             	add    $0x10,%esp
c100225a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100225d:	83 ec 08             	sub    $0x8,%esp
c1002260:	6a 00                	push   $0x0
c1002262:	68 00 20 00 00       	push   $0x2000
c1002267:	e8 ac 07 00 00       	call   c1002a18 <pmm_alloc>
c100226c:	83 c4 10             	add    $0x10,%esp
c100226f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002272:	83 ec 08             	sub    $0x8,%esp
c1002275:	6a 02                	push   $0x2
c1002277:	68 00 30 00 00       	push   $0x3000
c100227c:	e8 97 07 00 00       	call   c1002a18 <pmm_alloc>
c1002281:	83 c4 10             	add    $0x10,%esp
c1002284:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002287:	83 ec 08             	sub    $0x8,%esp
c100228a:	ff 75 f0             	pushl  -0x10(%ebp)
c100228d:	68 74 b5 00 c1       	push   $0xc100b574
c1002292:	e8 64 35 00 00       	call   c10057fb <printk>
c1002297:	83 c4 10             	add    $0x10,%esp
c100229a:	83 ec 08             	sub    $0x8,%esp
c100229d:	ff 75 f4             	pushl  -0xc(%ebp)
c10022a0:	68 8a b5 00 c1       	push   $0xc100b58a
c10022a5:	e8 51 35 00 00       	call   c10057fb <printk>
c10022aa:	83 c4 10             	add    $0x10,%esp
c10022ad:	8b 0d c8 1c 01 c1    	mov    0xc1011cc8,%ecx
c10022b3:	8b 15 e8 1c 61 c1    	mov    0xc1611ce8,%edx
c10022b9:	a1 f4 1c 61 c1       	mov    0xc1611cf4,%eax
c10022be:	51                   	push   %ecx
c10022bf:	52                   	push   %edx
c10022c0:	50                   	push   %eax
c10022c1:	68 a4 b5 00 c1       	push   $0xc100b5a4
c10022c6:	e8 30 35 00 00       	call   c10057fb <printk>
c10022cb:	83 c4 10             	add    $0x10,%esp
c10022ce:	83 ec 08             	sub    $0x8,%esp
c10022d1:	68 00 02 00 00       	push   $0x200
c10022d6:	ff 75 f4             	pushl  -0xc(%ebp)
c10022d9:	e8 36 08 00 00       	call   c1002b14 <pmm_free>
c10022de:	83 c4 10             	add    $0x10,%esp
c10022e1:	83 ec 08             	sub    $0x8,%esp
c10022e4:	68 00 20 00 00       	push   $0x2000
c10022e9:	ff 75 f0             	pushl  -0x10(%ebp)
c10022ec:	e8 23 08 00 00       	call   c1002b14 <pmm_free>
c10022f1:	83 c4 10             	add    $0x10,%esp
c10022f4:	83 ec 08             	sub    $0x8,%esp
c10022f7:	68 00 30 00 00       	push   $0x3000
c10022fc:	ff 75 ec             	pushl  -0x14(%ebp)
c10022ff:	e8 10 08 00 00       	call   c1002b14 <pmm_free>
c1002304:	83 c4 10             	add    $0x10,%esp
c1002307:	8b 0d c8 1c 01 c1    	mov    0xc1011cc8,%ecx
c100230d:	8b 15 e8 1c 61 c1    	mov    0xc1611ce8,%edx
c1002313:	a1 f4 1c 61 c1       	mov    0xc1611cf4,%eax
c1002318:	51                   	push   %ecx
c1002319:	52                   	push   %edx
c100231a:	50                   	push   %eax
c100231b:	68 a4 b5 00 c1       	push   $0xc100b5a4
c1002320:	e8 d6 34 00 00       	call   c10057fb <printk>
c1002325:	83 c4 10             	add    $0x10,%esp
c1002328:	90                   	nop
c1002329:	c9                   	leave  
c100232a:	c3                   	ret    

c100232b <test_vmm>:
c100232b:	55                   	push   %ebp
c100232c:	89 e5                	mov    %esp,%ebp
c100232e:	83 ec 38             	sub    $0x38,%esp
c1002331:	83 ec 0c             	sub    $0xc,%esp
c1002334:	68 eb b5 00 c1       	push   $0xc100b5eb
c1002339:	e8 bd 34 00 00       	call   c10057fb <printk>
c100233e:	83 c4 10             	add    $0x10,%esp
c1002341:	83 ec 08             	sub    $0x8,%esp
c1002344:	6a 00                	push   $0x0
c1002346:	68 00 01 00 00       	push   $0x100
c100234b:	e8 68 09 00 00       	call   c1002cb8 <vmm_malloc>
c1002350:	83 c4 10             	add    $0x10,%esp
c1002353:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002356:	83 ec 08             	sub    $0x8,%esp
c1002359:	6a 01                	push   $0x1
c100235b:	68 00 20 00 00       	push   $0x2000
c1002360:	e8 53 09 00 00       	call   c1002cb8 <vmm_malloc>
c1002365:	83 c4 10             	add    $0x10,%esp
c1002368:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100236b:	83 ec 08             	sub    $0x8,%esp
c100236e:	6a 02                	push   $0x2
c1002370:	68 00 30 00 00       	push   $0x3000
c1002375:	e8 3e 09 00 00       	call   c1002cb8 <vmm_malloc>
c100237a:	83 c4 10             	add    $0x10,%esp
c100237d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002380:	83 ec 08             	sub    $0x8,%esp
c1002383:	ff 75 f4             	pushl  -0xc(%ebp)
c1002386:	68 74 b5 00 c1       	push   $0xc100b574
c100238b:	e8 6b 34 00 00       	call   c10057fb <printk>
c1002390:	83 c4 10             	add    $0x10,%esp
c1002393:	83 ec 08             	sub    $0x8,%esp
c1002396:	ff 75 f0             	pushl  -0x10(%ebp)
c1002399:	68 8a b5 00 c1       	push   $0xc100b58a
c100239e:	e8 58 34 00 00       	call   c10057fb <printk>
c10023a3:	83 c4 10             	add    $0x10,%esp
c10023a6:	83 ec 08             	sub    $0x8,%esp
c10023a9:	ff 75 ec             	pushl  -0x14(%ebp)
c10023ac:	68 02 b6 00 c1       	push   $0xc100b602
c10023b1:	e8 45 34 00 00       	call   c10057fb <printk>
c10023b6:	83 c4 10             	add    $0x10,%esp
c10023b9:	83 ec 0c             	sub    $0xc,%esp
c10023bc:	68 1d b6 00 c1       	push   $0xc100b61d
c10023c1:	e8 35 34 00 00       	call   c10057fb <printk>
c10023c6:	83 c4 10             	add    $0x10,%esp
c10023c9:	83 ec 08             	sub    $0x8,%esp
c10023cc:	6a 00                	push   $0x0
c10023ce:	68 00 01 00 00       	push   $0x100
c10023d3:	e8 e0 08 00 00       	call   c1002cb8 <vmm_malloc>
c10023d8:	83 c4 10             	add    $0x10,%esp
c10023db:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10023de:	83 ec 08             	sub    $0x8,%esp
c10023e1:	6a 01                	push   $0x1
c10023e3:	68 00 20 00 00       	push   $0x2000
c10023e8:	e8 cb 08 00 00       	call   c1002cb8 <vmm_malloc>
c10023ed:	83 c4 10             	add    $0x10,%esp
c10023f0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10023f3:	83 ec 08             	sub    $0x8,%esp
c10023f6:	6a 02                	push   $0x2
c10023f8:	68 00 30 00 00       	push   $0x3000
c10023fd:	e8 b6 08 00 00       	call   c1002cb8 <vmm_malloc>
c1002402:	83 c4 10             	add    $0x10,%esp
c1002405:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002408:	83 ec 08             	sub    $0x8,%esp
c100240b:	ff 75 e8             	pushl  -0x18(%ebp)
c100240e:	68 74 b5 00 c1       	push   $0xc100b574
c1002413:	e8 e3 33 00 00       	call   c10057fb <printk>
c1002418:	83 c4 10             	add    $0x10,%esp
c100241b:	83 ec 08             	sub    $0x8,%esp
c100241e:	ff 75 e4             	pushl  -0x1c(%ebp)
c1002421:	68 8a b5 00 c1       	push   $0xc100b58a
c1002426:	e8 d0 33 00 00       	call   c10057fb <printk>
c100242b:	83 c4 10             	add    $0x10,%esp
c100242e:	83 ec 08             	sub    $0x8,%esp
c1002431:	ff 75 e0             	pushl  -0x20(%ebp)
c1002434:	68 02 b6 00 c1       	push   $0xc100b602
c1002439:	e8 bd 33 00 00       	call   c10057fb <printk>
c100243e:	83 c4 10             	add    $0x10,%esp
c1002441:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002444:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1002447:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100244a:	c6 00 ff             	movb   $0xff,(%eax)
c100244d:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002450:	0f b6 00             	movzbl (%eax),%eax
c1002453:	0f b6 c0             	movzbl %al,%eax
c1002456:	83 ec 08             	sub    $0x8,%esp
c1002459:	50                   	push   %eax
c100245a:	68 34 b6 00 c1       	push   $0xc100b634
c100245f:	e8 97 33 00 00       	call   c10057fb <printk>
c1002464:	83 c4 10             	add    $0x10,%esp
c1002467:	83 ec 08             	sub    $0x8,%esp
c100246a:	68 00 01 00 00       	push   $0x100
c100246f:	ff 75 f4             	pushl  -0xc(%ebp)
c1002472:	e8 66 09 00 00       	call   c1002ddd <vmm_free>
c1002477:	83 c4 10             	add    $0x10,%esp
c100247a:	83 ec 08             	sub    $0x8,%esp
c100247d:	68 00 20 00 00       	push   $0x2000
c1002482:	ff 75 f0             	pushl  -0x10(%ebp)
c1002485:	e8 53 09 00 00       	call   c1002ddd <vmm_free>
c100248a:	83 c4 10             	add    $0x10,%esp
c100248d:	83 ec 08             	sub    $0x8,%esp
c1002490:	68 00 30 00 00       	push   $0x3000
c1002495:	ff 75 ec             	pushl  -0x14(%ebp)
c1002498:	e8 40 09 00 00       	call   c1002ddd <vmm_free>
c100249d:	83 c4 10             	add    $0x10,%esp
c10024a0:	83 ec 08             	sub    $0x8,%esp
c10024a3:	6a 00                	push   $0x0
c10024a5:	68 00 01 00 00       	push   $0x100
c10024aa:	e8 09 08 00 00       	call   c1002cb8 <vmm_malloc>
c10024af:	83 c4 10             	add    $0x10,%esp
c10024b2:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10024b5:	83 ec 08             	sub    $0x8,%esp
c10024b8:	6a 01                	push   $0x1
c10024ba:	68 00 20 00 00       	push   $0x2000
c10024bf:	e8 f4 07 00 00       	call   c1002cb8 <vmm_malloc>
c10024c4:	83 c4 10             	add    $0x10,%esp
c10024c7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10024ca:	83 ec 08             	sub    $0x8,%esp
c10024cd:	6a 02                	push   $0x2
c10024cf:	68 00 30 00 00       	push   $0x3000
c10024d4:	e8 df 07 00 00       	call   c1002cb8 <vmm_malloc>
c10024d9:	83 c4 10             	add    $0x10,%esp
c10024dc:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10024df:	83 ec 08             	sub    $0x8,%esp
c10024e2:	ff 75 d8             	pushl  -0x28(%ebp)
c10024e5:	68 74 b5 00 c1       	push   $0xc100b574
c10024ea:	e8 0c 33 00 00       	call   c10057fb <printk>
c10024ef:	83 c4 10             	add    $0x10,%esp
c10024f2:	83 ec 08             	sub    $0x8,%esp
c10024f5:	ff 75 d4             	pushl  -0x2c(%ebp)
c10024f8:	68 8a b5 00 c1       	push   $0xc100b58a
c10024fd:	e8 f9 32 00 00       	call   c10057fb <printk>
c1002502:	83 c4 10             	add    $0x10,%esp
c1002505:	83 ec 08             	sub    $0x8,%esp
c1002508:	ff 75 d0             	pushl  -0x30(%ebp)
c100250b:	68 02 b6 00 c1       	push   $0xc100b602
c1002510:	e8 e6 32 00 00       	call   c10057fb <printk>
c1002515:	83 c4 10             	add    $0x10,%esp
c1002518:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100251b:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100251e:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1002521:	c6 00 ff             	movb   $0xff,(%eax)
c1002524:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1002527:	0f b6 00             	movzbl (%eax),%eax
c100252a:	0f b6 c0             	movzbl %al,%eax
c100252d:	83 ec 08             	sub    $0x8,%esp
c1002530:	50                   	push   %eax
c1002531:	68 40 b6 00 c1       	push   $0xc100b640
c1002536:	e8 c0 32 00 00       	call   c10057fb <printk>
c100253b:	83 c4 10             	add    $0x10,%esp
c100253e:	90                   	nop
c100253f:	c9                   	leave  
c1002540:	c3                   	ret    

c1002541 <test_schedule>:
c1002541:	55                   	push   %ebp
c1002542:	89 e5                	mov    %esp,%ebp
c1002544:	83 ec 08             	sub    $0x8,%esp
c1002547:	e8 20 e8 ff ff       	call   c1000d6c <intr_enable>
c100254c:	eb fe                	jmp    c100254c <test_schedule+0xb>

c100254e <print_task1>:
c100254e:	55                   	push   %ebp
c100254f:	89 e5                	mov    %esp,%ebp
c1002551:	83 ec 18             	sub    $0x18,%esp
c1002554:	8b 45 08             	mov    0x8(%ebp),%eax
c1002557:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100255a:	83 ec 08             	sub    $0x8,%esp
c100255d:	ff 75 f4             	pushl  -0xc(%ebp)
c1002560:	68 4c b6 00 c1       	push   $0xc100b64c
c1002565:	e8 91 32 00 00       	call   c10057fb <printk>
c100256a:	83 c4 10             	add    $0x10,%esp
c100256d:	83 ec 0c             	sub    $0xc,%esp
c1002570:	68 40 42 0f 00       	push   $0xf4240
c1002575:	e8 36 00 00 00       	call   c10025b0 <delay>
c100257a:	83 c4 10             	add    $0x10,%esp
c100257d:	eb db                	jmp    c100255a <print_task1+0xc>

c100257f <print_task2>:
c100257f:	55                   	push   %ebp
c1002580:	89 e5                	mov    %esp,%ebp
c1002582:	83 ec 18             	sub    $0x18,%esp
c1002585:	8b 45 08             	mov    0x8(%ebp),%eax
c1002588:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100258b:	83 ec 08             	sub    $0x8,%esp
c100258e:	ff 75 f4             	pushl  -0xc(%ebp)
c1002591:	68 4c b6 00 c1       	push   $0xc100b64c
c1002596:	e8 60 32 00 00       	call   c10057fb <printk>
c100259b:	83 c4 10             	add    $0x10,%esp
c100259e:	83 ec 0c             	sub    $0xc,%esp
c10025a1:	68 40 42 0f 00       	push   $0xf4240
c10025a6:	e8 05 00 00 00       	call   c10025b0 <delay>
c10025ab:	83 c4 10             	add    $0x10,%esp
c10025ae:	eb db                	jmp    c100258b <print_task2+0xc>

c10025b0 <delay>:
c10025b0:	55                   	push   %ebp
c10025b1:	89 e5                	mov    %esp,%ebp
c10025b3:	83 ec 10             	sub    $0x10,%esp
c10025b6:	8b 45 08             	mov    0x8(%ebp),%eax
c10025b9:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10025bc:	eb 17                	jmp    c10025d5 <delay+0x25>
c10025be:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c10025c5:	eb 04                	jmp    c10025cb <delay+0x1b>
c10025c7:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c10025cb:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c10025cf:	75 f6                	jne    c10025c7 <delay+0x17>
c10025d1:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c10025d5:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c10025d9:	75 e3                	jne    c10025be <delay+0xe>
c10025db:	90                   	nop
c10025dc:	90                   	nop
c10025dd:	c9                   	leave  
c10025de:	c3                   	ret    

c10025df <test_user>:
c10025df:	55                   	push   %ebp
c10025e0:	89 e5                	mov    %esp,%ebp
c10025e2:	83 ec 08             	sub    $0x8,%esp
c10025e5:	83 ec 0c             	sub    $0xc,%esp
c10025e8:	68 52 00 00 40       	push   $0x40000052
c10025ed:	e8 ea 20 00 00       	call   c10046dc <user_task_init>
c10025f2:	83 c4 10             	add    $0x10,%esp
c10025f5:	90                   	nop
c10025f6:	c9                   	leave  
c10025f7:	c3                   	ret    

c10025f8 <pmm_init>:
c10025f8:	55                   	push   %ebp
c10025f9:	89 e5                	mov    %esp,%ebp
c10025fb:	83 ec 38             	sub    $0x38,%esp
c10025fe:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002605:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100260c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002613:	c7 45 d4 04 80 00 c0 	movl   $0xc0008004,-0x2c(%ebp)
c100261a:	b8 00 80 00 c0       	mov    $0xc0008000,%eax
c100261f:	8b 00                	mov    (%eax),%eax
c1002621:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002624:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c100262b:	e9 98 02 00 00       	jmp    c10028c8 <pmm_init+0x2d0>
c1002630:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002633:	89 d0                	mov    %edx,%eax
c1002635:	c1 e0 02             	shl    $0x2,%eax
c1002638:	01 d0                	add    %edx,%eax
c100263a:	c1 e0 02             	shl    $0x2,%eax
c100263d:	89 c2                	mov    %eax,%edx
c100263f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1002642:	01 d0                	add    %edx,%eax
c1002644:	8b 50 04             	mov    0x4(%eax),%edx
c1002647:	8b 00                	mov    (%eax),%eax
c1002649:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100264c:	e9 40 02 00 00       	jmp    c1002891 <pmm_init+0x299>
c1002651:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002654:	85 c0                	test   %eax,%eax
c1002656:	0f 88 2e 02 00 00    	js     c100288a <pmm_init+0x292>
c100265c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100265f:	89 d0                	mov    %edx,%eax
c1002661:	c1 e0 02             	shl    $0x2,%eax
c1002664:	01 d0                	add    %edx,%eax
c1002666:	c1 e0 02             	shl    $0x2,%eax
c1002669:	89 c2                	mov    %eax,%edx
c100266b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100266e:	01 d0                	add    %edx,%eax
c1002670:	8b 40 10             	mov    0x10(%eax),%eax
c1002673:	83 f8 01             	cmp    $0x1,%eax
c1002676:	75 59                	jne    c10026d1 <pmm_init+0xd9>
c1002678:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100267b:	c1 e8 0c             	shr    $0xc,%eax
c100267e:	89 c2                	mov    %eax,%edx
c1002680:	89 d0                	mov    %edx,%eax
c1002682:	01 c0                	add    %eax,%eax
c1002684:	01 d0                	add    %edx,%eax
c1002686:	c1 e0 02             	shl    $0x2,%eax
c1002689:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c100268e:	c6 00 00             	movb   $0x0,(%eax)
c1002691:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002694:	c1 e8 0c             	shr    $0xc,%eax
c1002697:	89 c2                	mov    %eax,%edx
c1002699:	89 d0                	mov    %edx,%eax
c100269b:	01 c0                	add    %eax,%eax
c100269d:	01 d0                	add    %edx,%eax
c100269f:	c1 e0 02             	shl    $0x2,%eax
c10026a2:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c10026a7:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c10026ad:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026b0:	c1 e8 0c             	shr    $0xc,%eax
c10026b3:	89 c2                	mov    %eax,%edx
c10026b5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026b8:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10026bd:	89 c1                	mov    %eax,%ecx
c10026bf:	89 d0                	mov    %edx,%eax
c10026c1:	01 c0                	add    %eax,%eax
c10026c3:	01 d0                	add    %edx,%eax
c10026c5:	c1 e0 02             	shl    $0x2,%eax
c10026c8:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c10026cd:	89 08                	mov    %ecx,(%eax)
c10026cf:	eb 57                	jmp    c1002728 <pmm_init+0x130>
c10026d1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026d4:	c1 e8 0c             	shr    $0xc,%eax
c10026d7:	89 c2                	mov    %eax,%edx
c10026d9:	89 d0                	mov    %edx,%eax
c10026db:	01 c0                	add    %eax,%eax
c10026dd:	01 d0                	add    %edx,%eax
c10026df:	c1 e0 02             	shl    $0x2,%eax
c10026e2:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c10026e7:	c6 00 08             	movb   $0x8,(%eax)
c10026ea:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026ed:	c1 e8 0c             	shr    $0xc,%eax
c10026f0:	89 c2                	mov    %eax,%edx
c10026f2:	89 d0                	mov    %edx,%eax
c10026f4:	01 c0                	add    %eax,%eax
c10026f6:	01 d0                	add    %edx,%eax
c10026f8:	c1 e0 02             	shl    $0x2,%eax
c10026fb:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c1002700:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1002706:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002709:	c1 e8 0c             	shr    $0xc,%eax
c100270c:	89 c2                	mov    %eax,%edx
c100270e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002711:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002716:	89 c1                	mov    %eax,%ecx
c1002718:	89 d0                	mov    %edx,%eax
c100271a:	01 c0                	add    %eax,%eax
c100271c:	01 d0                	add    %edx,%eax
c100271e:	c1 e0 02             	shl    $0x2,%eax
c1002721:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c1002726:	89 08                	mov    %ecx,(%eax)
c1002728:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100272b:	c1 e8 0c             	shr    $0xc,%eax
c100272e:	89 c2                	mov    %eax,%edx
c1002730:	89 d0                	mov    %edx,%eax
c1002732:	01 c0                	add    %eax,%eax
c1002734:	01 d0                	add    %edx,%eax
c1002736:	c1 e0 02             	shl    $0x2,%eax
c1002739:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c100273e:	8b 00                	mov    (%eax),%eax
c1002740:	3d ff ff ff 00       	cmp    $0xffffff,%eax
c1002745:	77 62                	ja     c10027a9 <pmm_init+0x1b1>
c1002747:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100274a:	c1 e8 0c             	shr    $0xc,%eax
c100274d:	89 c1                	mov    %eax,%ecx
c100274f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002752:	c1 e8 0c             	shr    $0xc,%eax
c1002755:	89 c2                	mov    %eax,%edx
c1002757:	89 c8                	mov    %ecx,%eax
c1002759:	01 c0                	add    %eax,%eax
c100275b:	01 c8                	add    %ecx,%eax
c100275d:	c1 e0 02             	shl    $0x2,%eax
c1002760:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002765:	0f b6 08             	movzbl (%eax),%ecx
c1002768:	89 d0                	mov    %edx,%eax
c100276a:	01 c0                	add    %eax,%eax
c100276c:	01 d0                	add    %edx,%eax
c100276e:	c1 e0 02             	shl    $0x2,%eax
c1002771:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002776:	88 08                	mov    %cl,(%eax)
c1002778:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100277b:	c1 e8 0c             	shr    $0xc,%eax
c100277e:	89 c2                	mov    %eax,%edx
c1002780:	89 d0                	mov    %edx,%eax
c1002782:	01 c0                	add    %eax,%eax
c1002784:	01 d0                	add    %edx,%eax
c1002786:	c1 e0 02             	shl    $0x2,%eax
c1002789:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c100278e:	8b 00                	mov    (%eax),%eax
c1002790:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002793:	75 07                	jne    c100279c <pmm_init+0x1a4>
c1002795:	b8 01 00 00 00       	mov    $0x1,%eax
c100279a:	eb 05                	jmp    c10027a1 <pmm_init+0x1a9>
c100279c:	b8 00 00 00 00       	mov    $0x0,%eax
c10027a1:	01 45 f4             	add    %eax,-0xc(%ebp)
c10027a4:	e9 e1 00 00 00       	jmp    c100288a <pmm_init+0x292>
c10027a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10027ac:	c1 e8 0c             	shr    $0xc,%eax
c10027af:	89 c2                	mov    %eax,%edx
c10027b1:	89 d0                	mov    %edx,%eax
c10027b3:	01 c0                	add    %eax,%eax
c10027b5:	01 d0                	add    %edx,%eax
c10027b7:	c1 e0 02             	shl    $0x2,%eax
c10027ba:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c10027bf:	8b 00                	mov    (%eax),%eax
c10027c1:	3d ff ff ff 37       	cmp    $0x37ffffff,%eax
c10027c6:	77 62                	ja     c100282a <pmm_init+0x232>
c10027c8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10027cb:	c1 e8 0c             	shr    $0xc,%eax
c10027ce:	89 c2                	mov    %eax,%edx
c10027d0:	89 d0                	mov    %edx,%eax
c10027d2:	01 c0                	add    %eax,%eax
c10027d4:	01 d0                	add    %edx,%eax
c10027d6:	c1 e0 02             	shl    $0x2,%eax
c10027d9:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c10027de:	0f b6 08             	movzbl (%eax),%ecx
c10027e1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10027e4:	c1 e8 0c             	shr    $0xc,%eax
c10027e7:	89 c2                	mov    %eax,%edx
c10027e9:	83 c9 10             	or     $0x10,%ecx
c10027ec:	89 d0                	mov    %edx,%eax
c10027ee:	01 c0                	add    %eax,%eax
c10027f0:	01 d0                	add    %edx,%eax
c10027f2:	c1 e0 02             	shl    $0x2,%eax
c10027f5:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c10027fa:	88 08                	mov    %cl,(%eax)
c10027fc:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10027ff:	c1 e8 0c             	shr    $0xc,%eax
c1002802:	89 c2                	mov    %eax,%edx
c1002804:	89 d0                	mov    %edx,%eax
c1002806:	01 c0                	add    %eax,%eax
c1002808:	01 d0                	add    %edx,%eax
c100280a:	c1 e0 02             	shl    $0x2,%eax
c100280d:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c1002812:	8b 00                	mov    (%eax),%eax
c1002814:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002817:	75 07                	jne    c1002820 <pmm_init+0x228>
c1002819:	b8 01 00 00 00       	mov    $0x1,%eax
c100281e:	eb 05                	jmp    c1002825 <pmm_init+0x22d>
c1002820:	b8 00 00 00 00       	mov    $0x0,%eax
c1002825:	01 45 f0             	add    %eax,-0x10(%ebp)
c1002828:	eb 60                	jmp    c100288a <pmm_init+0x292>
c100282a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100282d:	c1 e8 0c             	shr    $0xc,%eax
c1002830:	89 c2                	mov    %eax,%edx
c1002832:	89 d0                	mov    %edx,%eax
c1002834:	01 c0                	add    %eax,%eax
c1002836:	01 d0                	add    %edx,%eax
c1002838:	c1 e0 02             	shl    $0x2,%eax
c100283b:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002840:	0f b6 08             	movzbl (%eax),%ecx
c1002843:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002846:	c1 e8 0c             	shr    $0xc,%eax
c1002849:	89 c2                	mov    %eax,%edx
c100284b:	83 c9 20             	or     $0x20,%ecx
c100284e:	89 d0                	mov    %edx,%eax
c1002850:	01 c0                	add    %eax,%eax
c1002852:	01 d0                	add    %edx,%eax
c1002854:	c1 e0 02             	shl    $0x2,%eax
c1002857:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c100285c:	88 08                	mov    %cl,(%eax)
c100285e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002861:	c1 e8 0c             	shr    $0xc,%eax
c1002864:	89 c2                	mov    %eax,%edx
c1002866:	89 d0                	mov    %edx,%eax
c1002868:	01 c0                	add    %eax,%eax
c100286a:	01 d0                	add    %edx,%eax
c100286c:	c1 e0 02             	shl    $0x2,%eax
c100286f:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c1002874:	8b 00                	mov    (%eax),%eax
c1002876:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002879:	75 07                	jne    c1002882 <pmm_init+0x28a>
c100287b:	b8 01 00 00 00       	mov    $0x1,%eax
c1002880:	eb 05                	jmp    c1002887 <pmm_init+0x28f>
c1002882:	b8 00 00 00 00       	mov    $0x0,%eax
c1002887:	01 45 ec             	add    %eax,-0x14(%ebp)
c100288a:	81 45 e0 00 10 00 00 	addl   $0x1000,-0x20(%ebp)
c1002891:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002894:	89 d0                	mov    %edx,%eax
c1002896:	c1 e0 02             	shl    $0x2,%eax
c1002899:	01 d0                	add    %edx,%eax
c100289b:	c1 e0 02             	shl    $0x2,%eax
c100289e:	89 c2                	mov    %eax,%edx
c10028a0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10028a3:	01 d0                	add    %edx,%eax
c10028a5:	8b 50 0c             	mov    0xc(%eax),%edx
c10028a8:	8b 40 08             	mov    0x8(%eax),%eax
c10028ab:	89 c2                	mov    %eax,%edx
c10028ad:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10028b0:	01 d0                	add    %edx,%eax
c10028b2:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10028b7:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c10028ba:	0f 82 91 fd ff ff    	jb     c1002651 <pmm_init+0x59>
c10028c0:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c10028c4:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c10028c8:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c10028cc:	0f 85 5e fd ff ff    	jne    c1002630 <pmm_init+0x38>
c10028d2:	c7 05 f0 1c 61 c1 00 	movl   $0x1000,0xc1611cf0
c10028d9:	10 00 00 
c10028dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028df:	a3 f4 1c 61 c1       	mov    %eax,0xc1611cf4
c10028e4:	c7 05 ec 1c 61 c1 e0 	movl   $0xc1011ce0,0xc1611cec
c10028eb:	1c 01 c1 
c10028ee:	c7 05 e4 1c 61 c1 00 	movl   $0x37000,0xc1611ce4
c10028f5:	70 03 00 
c10028f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10028fb:	a3 e8 1c 61 c1       	mov    %eax,0xc1611ce8
c1002900:	8b 15 f0 1c 61 c1    	mov    0xc1611cf0,%edx
c1002906:	89 d0                	mov    %edx,%eax
c1002908:	01 c0                	add    %eax,%eax
c100290a:	01 d0                	add    %edx,%eax
c100290c:	c1 e0 02             	shl    $0x2,%eax
c100290f:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002914:	a3 e0 1c 61 c1       	mov    %eax,0xc1611ce0
c1002919:	c7 05 c4 1c 01 c1 00 	movl   $0x48000,0xc1011cc4
c1002920:	80 04 00 
c1002923:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002926:	a3 c8 1c 01 c1       	mov    %eax,0xc1011cc8
c100292b:	8b 15 e4 1c 61 c1    	mov    0xc1611ce4,%edx
c1002931:	a1 f0 1c 61 c1       	mov    0xc1611cf0,%eax
c1002936:	01 c2                	add    %eax,%edx
c1002938:	89 d0                	mov    %edx,%eax
c100293a:	01 c0                	add    %eax,%eax
c100293c:	01 d0                	add    %edx,%eax
c100293e:	c1 e0 02             	shl    $0x2,%eax
c1002941:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002946:	a3 c0 1c 01 c1       	mov    %eax,0xc1011cc0
c100294b:	c7 45 d0 00 00 00 40 	movl   $0x40000000,-0x30(%ebp)
c1002952:	90                   	nop
c1002953:	c7 45 dc 00 00 00 01 	movl   $0x1000000,-0x24(%ebp)
c100295a:	eb 39                	jmp    c1002995 <pmm_init+0x39d>
c100295c:	8b 0d e0 1c 61 c1    	mov    0xc1611ce0,%ecx
c1002962:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002965:	2d 00 00 00 01       	sub    $0x1000000,%eax
c100296a:	c1 e8 0c             	shr    $0xc,%eax
c100296d:	89 c2                	mov    %eax,%edx
c100296f:	89 d0                	mov    %edx,%eax
c1002971:	01 c0                	add    %eax,%eax
c1002973:	01 d0                	add    %edx,%eax
c1002975:	c1 e0 02             	shl    $0x2,%eax
c1002978:	01 c8                	add    %ecx,%eax
c100297a:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c1002981:	a1 e8 1c 61 c1       	mov    0xc1611ce8,%eax
c1002986:	83 e8 01             	sub    $0x1,%eax
c1002989:	a3 e8 1c 61 c1       	mov    %eax,0xc1611ce8
c100298e:	81 45 dc 00 10 00 00 	addl   $0x1000,-0x24(%ebp)
c1002995:	b8 c0 43 a1 c1       	mov    $0xc1a143c0,%eax
c100299a:	05 ff 0f 00 40       	add    $0x40000fff,%eax
c100299f:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10029a4:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c10029a7:	72 b3                	jb     c100295c <pmm_init+0x364>
c10029a9:	c7 45 d8 00 e0 ff 37 	movl   $0x37ffe000,-0x28(%ebp)
c10029b0:	eb 39                	jmp    c10029eb <pmm_init+0x3f3>
c10029b2:	8b 0d e0 1c 61 c1    	mov    0xc1611ce0,%ecx
c10029b8:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10029bb:	2d 00 00 00 01       	sub    $0x1000000,%eax
c10029c0:	c1 e8 0c             	shr    $0xc,%eax
c10029c3:	89 c2                	mov    %eax,%edx
c10029c5:	89 d0                	mov    %edx,%eax
c10029c7:	01 c0                	add    %eax,%eax
c10029c9:	01 d0                	add    %edx,%eax
c10029cb:	c1 e0 02             	shl    $0x2,%eax
c10029ce:	01 c8                	add    %ecx,%eax
c10029d0:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10029d7:	a1 e8 1c 61 c1       	mov    0xc1611ce8,%eax
c10029dc:	83 e8 01             	sub    $0x1,%eax
c10029df:	a3 e8 1c 61 c1       	mov    %eax,0xc1611ce8
c10029e4:	81 45 d8 00 10 00 00 	addl   $0x1000,-0x28(%ebp)
c10029eb:	81 7d d8 ff ff ff 37 	cmpl   $0x37ffffff,-0x28(%ebp)
c10029f2:	76 be                	jbe    c10029b2 <pmm_init+0x3ba>
c10029f4:	8b 0d c8 1c 01 c1    	mov    0xc1011cc8,%ecx
c10029fa:	8b 15 e8 1c 61 c1    	mov    0xc1611ce8,%edx
c1002a00:	a1 f4 1c 61 c1       	mov    0xc1611cf4,%eax
c1002a05:	51                   	push   %ecx
c1002a06:	52                   	push   %edx
c1002a07:	50                   	push   %eax
c1002a08:	68 50 b6 00 c1       	push   $0xc100b650
c1002a0d:	e8 e9 2d 00 00       	call   c10057fb <printk>
c1002a12:	83 c4 10             	add    $0x10,%esp
c1002a15:	90                   	nop
c1002a16:	c9                   	leave  
c1002a17:	c3                   	ret    

c1002a18 <pmm_alloc>:
c1002a18:	55                   	push   %ebp
c1002a19:	89 e5                	mov    %esp,%ebp
c1002a1b:	83 ec 24             	sub    $0x24,%esp
c1002a1e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002a21:	88 45 dc             	mov    %al,-0x24(%ebp)
c1002a24:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002a2b:	8b 45 08             	mov    0x8(%ebp),%eax
c1002a2e:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002a33:	c1 e8 0c             	shr    $0xc,%eax
c1002a36:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002a39:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
c1002a3d:	75 09                	jne    c1002a48 <pmm_alloc+0x30>
c1002a3f:	c7 45 f0 ec 1c 61 c1 	movl   $0xc1611cec,-0x10(%ebp)
c1002a46:	eb 16                	jmp    c1002a5e <pmm_alloc+0x46>
c1002a48:	80 7d dc 01          	cmpb   $0x1,-0x24(%ebp)
c1002a4c:	75 09                	jne    c1002a57 <pmm_alloc+0x3f>
c1002a4e:	c7 45 f0 e0 1c 61 c1 	movl   $0xc1611ce0,-0x10(%ebp)
c1002a55:	eb 07                	jmp    c1002a5e <pmm_alloc+0x46>
c1002a57:	c7 45 f0 c0 1c 01 c1 	movl   $0xc1011cc0,-0x10(%ebp)
c1002a5e:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1002a65:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002a6c:	eb 43                	jmp    c1002ab1 <pmm_alloc+0x99>
c1002a6e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002a71:	8b 08                	mov    (%eax),%ecx
c1002a73:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002a76:	89 d0                	mov    %edx,%eax
c1002a78:	01 c0                	add    %eax,%eax
c1002a7a:	01 d0                	add    %edx,%eax
c1002a7c:	c1 e0 02             	shl    $0x2,%eax
c1002a7f:	01 c8                	add    %ecx,%eax
c1002a81:	8b 40 04             	mov    0x4(%eax),%eax
c1002a84:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002a87:	75 0c                	jne    c1002a95 <pmm_alloc+0x7d>
c1002a89:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002a8d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a90:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002a93:	eb 10                	jmp    c1002aa5 <pmm_alloc+0x8d>
c1002a95:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a98:	83 c0 01             	add    $0x1,%eax
c1002a9b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002a9e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002aa5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002aa8:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002aab:	74 11                	je     c1002abe <pmm_alloc+0xa6>
c1002aad:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002ab1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002ab4:	8b 40 04             	mov    0x4(%eax),%eax
c1002ab7:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c1002aba:	72 b2                	jb     c1002a6e <pmm_alloc+0x56>
c1002abc:	eb 01                	jmp    c1002abf <pmm_alloc+0xa7>
c1002abe:	90                   	nop
c1002abf:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002ac2:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002ac5:	eb 2d                	jmp    c1002af4 <pmm_alloc+0xdc>
c1002ac7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002aca:	8b 08                	mov    (%eax),%ecx
c1002acc:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1002acf:	89 d0                	mov    %edx,%eax
c1002ad1:	01 c0                	add    %eax,%eax
c1002ad3:	01 d0                	add    %edx,%eax
c1002ad5:	c1 e0 02             	shl    $0x2,%eax
c1002ad8:	01 c8                	add    %ecx,%eax
c1002ada:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c1002ae1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002ae4:	8b 40 08             	mov    0x8(%eax),%eax
c1002ae7:	8d 50 ff             	lea    -0x1(%eax),%edx
c1002aea:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002aed:	89 50 08             	mov    %edx,0x8(%eax)
c1002af0:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1002af4:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002af7:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1002afa:	76 cb                	jbe    c1002ac7 <pmm_alloc+0xaf>
c1002afc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002aff:	8b 08                	mov    (%eax),%ecx
c1002b01:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002b04:	89 d0                	mov    %edx,%eax
c1002b06:	01 c0                	add    %eax,%eax
c1002b08:	01 d0                	add    %edx,%eax
c1002b0a:	c1 e0 02             	shl    $0x2,%eax
c1002b0d:	01 c8                	add    %ecx,%eax
c1002b0f:	8b 40 08             	mov    0x8(%eax),%eax
c1002b12:	c9                   	leave  
c1002b13:	c3                   	ret    

c1002b14 <pmm_free>:
c1002b14:	55                   	push   %ebp
c1002b15:	89 e5                	mov    %esp,%ebp
c1002b17:	83 ec 20             	sub    $0x20,%esp
c1002b1a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002b1d:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002b22:	c1 e8 0c             	shr    $0xc,%eax
c1002b25:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002b28:	81 7d 08 ff ff ff 00 	cmpl   $0xffffff,0x8(%ebp)
c1002b2f:	77 09                	ja     c1002b3a <pmm_free+0x26>
c1002b31:	c7 45 fc ec 1c 61 c1 	movl   $0xc1611cec,-0x4(%ebp)
c1002b38:	eb 27                	jmp    c1002b61 <pmm_free+0x4d>
c1002b3a:	81 7d 08 ff ff ff 37 	cmpl   $0x37ffffff,0x8(%ebp)
c1002b41:	77 10                	ja     c1002b53 <pmm_free+0x3f>
c1002b43:	81 6d 08 00 00 00 01 	subl   $0x1000000,0x8(%ebp)
c1002b4a:	c7 45 fc e0 1c 61 c1 	movl   $0xc1611ce0,-0x4(%ebp)
c1002b51:	eb 0e                	jmp    c1002b61 <pmm_free+0x4d>
c1002b53:	81 6d 08 00 00 00 38 	subl   $0x38000000,0x8(%ebp)
c1002b5a:	c7 45 fc c0 1c 01 c1 	movl   $0xc1011cc0,-0x4(%ebp)
c1002b61:	8b 45 08             	mov    0x8(%ebp),%eax
c1002b64:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002b69:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002b6c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002b6f:	c1 e8 0c             	shr    $0xc,%eax
c1002b72:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002b75:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002b7c:	eb 31                	jmp    c1002baf <pmm_free+0x9b>
c1002b7e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002b81:	8b 08                	mov    (%eax),%ecx
c1002b83:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1002b86:	89 d0                	mov    %edx,%eax
c1002b88:	01 c0                	add    %eax,%eax
c1002b8a:	01 d0                	add    %edx,%eax
c1002b8c:	c1 e0 02             	shl    $0x2,%eax
c1002b8f:	01 c8                	add    %ecx,%eax
c1002b91:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
c1002b98:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002b9b:	8b 40 08             	mov    0x8(%eax),%eax
c1002b9e:	8d 50 01             	lea    0x1(%eax),%edx
c1002ba1:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002ba4:	89 50 08             	mov    %edx,0x8(%eax)
c1002ba7:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1002bab:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002baf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002bb2:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002bb5:	72 c7                	jb     c1002b7e <pmm_free+0x6a>
c1002bb7:	90                   	nop
c1002bb8:	90                   	nop
c1002bb9:	c9                   	leave  
c1002bba:	c3                   	ret    

c1002bbb <hash32>:
c1002bbb:	55                   	push   %ebp
c1002bbc:	89 e5                	mov    %esp,%ebp
c1002bbe:	83 ec 10             	sub    $0x10,%esp
c1002bc1:	8b 45 08             	mov    0x8(%ebp),%eax
c1002bc4:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1002bca:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002bcd:	b8 20 00 00 00       	mov    $0x20,%eax
c1002bd2:	2b 45 0c             	sub    0xc(%ebp),%eax
c1002bd5:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002bd8:	89 c1                	mov    %eax,%ecx
c1002bda:	d3 ea                	shr    %cl,%edx
c1002bdc:	89 d0                	mov    %edx,%eax
c1002bde:	c9                   	leave  
c1002bdf:	c3                   	ret    

c1002be0 <setup_vpt>:
c1002be0:	55                   	push   %ebp
c1002be1:	89 e5                	mov    %esp,%ebp
c1002be3:	83 ec 28             	sub    $0x28,%esp
c1002be6:	c7 45 e0 e0 00 00 00 	movl   $0xe0,-0x20(%ebp)
c1002bed:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002bf4:	eb 27                	jmp    c1002c1d <setup_vpt+0x3d>
c1002bf6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002bf9:	c1 e0 0c             	shl    $0xc,%eax
c1002bfc:	05 00 40 93 c1       	add    $0xc1934000,%eax
c1002c01:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002c07:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002c0a:	05 00 03 00 00       	add    $0x300,%eax
c1002c0f:	83 ca 03             	or     $0x3,%edx
c1002c12:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002c19:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002c1d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002c20:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002c23:	72 d1                	jb     c1002bf6 <setup_vpt+0x16>
c1002c25:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002c2c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002c33:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002c3a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002c41:	eb 3d                	jmp    c1002c80 <setup_vpt+0xa0>
c1002c43:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002c46:	8d 50 01             	lea    0x1(%eax),%edx
c1002c49:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1002c4c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1002c4f:	83 ca 03             	or     $0x3,%edx
c1002c52:	8b 4d ec             	mov    -0x14(%ebp),%ecx
c1002c55:	c1 e1 0a             	shl    $0xa,%ecx
c1002c58:	01 c8                	add    %ecx,%eax
c1002c5a:	89 14 85 00 40 93 c1 	mov    %edx,-0x3e6cc000(,%eax,4)
c1002c61:	81 7d e8 00 04 00 00 	cmpl   $0x400,-0x18(%ebp)
c1002c68:	75 0b                	jne    c1002c75 <setup_vpt+0x95>
c1002c6a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002c6e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002c75:	81 45 f0 00 10 00 00 	addl   $0x1000,-0x10(%ebp)
c1002c7c:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1002c80:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002c83:	c1 e0 0a             	shl    $0xa,%eax
c1002c86:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1002c89:	72 b8                	jb     c1002c43 <setup_vpt+0x63>
c1002c8b:	b8 00 20 00 40       	mov    $0x40002000,%eax
c1002c90:	68 00 00 00 40       	push   $0x40000000
c1002c95:	50                   	push   %eax
c1002c96:	68 00 00 00 40       	push   $0x40000000
c1002c9b:	68 00 20 61 c1       	push   $0xc1612000
c1002ca0:	e8 30 02 00 00       	call   c1002ed5 <vmm_map>
c1002ca5:	83 c4 10             	add    $0x10,%esp
c1002ca8:	b8 00 20 61 c1       	mov    $0xc1612000,%eax
c1002cad:	05 00 00 00 40       	add    $0x40000000,%eax
c1002cb2:	0f 22 d8             	mov    %eax,%cr3
c1002cb5:	90                   	nop
c1002cb6:	c9                   	leave  
c1002cb7:	c3                   	ret    

c1002cb8 <vmm_malloc>:
c1002cb8:	55                   	push   %ebp
c1002cb9:	89 e5                	mov    %esp,%ebp
c1002cbb:	53                   	push   %ebx
c1002cbc:	83 ec 34             	sub    $0x34,%esp
c1002cbf:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002cc2:	88 45 d4             	mov    %al,-0x2c(%ebp)
c1002cc5:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
c1002cc9:	83 ec 08             	sub    $0x8,%esp
c1002ccc:	50                   	push   %eax
c1002ccd:	ff 75 08             	pushl  0x8(%ebp)
c1002cd0:	e8 43 fd ff ff       	call   c1002a18 <pmm_alloc>
c1002cd5:	83 c4 10             	add    $0x10,%esp
c1002cd8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002cdb:	8b 45 08             	mov    0x8(%ebp),%eax
c1002cde:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002ce3:	c1 e8 0c             	shr    $0xc,%eax
c1002ce6:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002ce9:	80 7d d4 02          	cmpb   $0x2,-0x2c(%ebp)
c1002ced:	0f 85 db 00 00 00    	jne    c1002dce <vmm_malloc+0x116>
c1002cf3:	a1 14 db 00 c1       	mov    0xc100db14,%eax
c1002cf8:	a3 00 30 93 c1       	mov    %eax,0xc1933000
c1002cfd:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002d04:	eb 5d                	jmp    c1002d63 <vmm_malloc+0xab>
c1002d06:	8b 15 14 db 00 c1    	mov    0xc100db14,%edx
c1002d0c:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002d11:	29 c2                	sub    %eax,%edx
c1002d13:	89 d0                	mov    %edx,%eax
c1002d15:	c1 e8 16             	shr    $0x16,%eax
c1002d18:	89 c3                	mov    %eax,%ebx
c1002d1a:	8b 15 14 db 00 c1    	mov    0xc100db14,%edx
c1002d20:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002d25:	29 c2                	sub    %eax,%edx
c1002d27:	89 d0                	mov    %edx,%eax
c1002d29:	c1 e8 0c             	shr    $0xc,%eax
c1002d2c:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002d31:	89 c1                	mov    %eax,%ecx
c1002d33:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002d36:	83 c8 07             	or     $0x7,%eax
c1002d39:	89 c2                	mov    %eax,%edx
c1002d3b:	89 d8                	mov    %ebx,%eax
c1002d3d:	c1 e0 0a             	shl    $0xa,%eax
c1002d40:	01 c8                	add    %ecx,%eax
c1002d42:	89 14 85 00 30 91 c1 	mov    %edx,-0x3e6ed000(,%eax,4)
c1002d49:	a1 14 db 00 c1       	mov    0xc100db14,%eax
c1002d4e:	05 00 10 00 00       	add    $0x1000,%eax
c1002d53:	a3 14 db 00 c1       	mov    %eax,0xc100db14
c1002d58:	81 45 f4 00 10 00 00 	addl   $0x1000,-0xc(%ebp)
c1002d5f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002d63:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002d66:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1002d69:	72 9b                	jb     c1002d06 <vmm_malloc+0x4e>
c1002d6b:	8b 15 14 db 00 c1    	mov    0xc100db14,%edx
c1002d71:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002d76:	29 c2                	sub    %eax,%edx
c1002d78:	89 d0                	mov    %edx,%eax
c1002d7a:	05 ff ff 3f 00       	add    $0x3fffff,%eax
c1002d7f:	c1 e8 16             	shr    $0x16,%eax
c1002d82:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002d85:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002d8c:	eb 2e                	jmp    c1002dbc <vmm_malloc+0x104>
c1002d8e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d91:	c1 e0 0c             	shl    $0xc,%eax
c1002d94:	05 00 30 91 c1       	add    $0xc1913000,%eax
c1002d99:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002d9f:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002da4:	c1 e8 16             	shr    $0x16,%eax
c1002da7:	89 c1                	mov    %eax,%ecx
c1002da9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002dac:	01 c8                	add    %ecx,%eax
c1002dae:	83 ca 07             	or     $0x7,%edx
c1002db1:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002db8:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002dbc:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002dbf:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002dc2:	72 ca                	jb     c1002d8e <vmm_malloc+0xd6>
c1002dc4:	a1 00 30 93 c1       	mov    0xc1933000,%eax
c1002dc9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002dcc:	eb 07                	jmp    c1002dd5 <vmm_malloc+0x11d>
c1002dce:	81 6d f4 00 00 00 40 	subl   $0x40000000,-0xc(%ebp)
c1002dd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002dd8:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002ddb:	c9                   	leave  
c1002ddc:	c3                   	ret    

c1002ddd <vmm_free>:
c1002ddd:	55                   	push   %ebp
c1002dde:	89 e5                	mov    %esp,%ebp
c1002de0:	53                   	push   %ebx
c1002de1:	83 ec 14             	sub    $0x14,%esp
c1002de4:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002de7:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002dec:	c1 e8 0c             	shr    $0xc,%eax
c1002def:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002df2:	8b 45 08             	mov    0x8(%ebp),%eax
c1002df5:	05 00 00 00 40       	add    $0x40000000,%eax
c1002dfa:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002dfd:	81 7d ec ff ff ff 37 	cmpl   $0x37ffffff,-0x14(%ebp)
c1002e04:	0f 86 ae 00 00 00    	jbe    c1002eb8 <vmm_free+0xdb>
c1002e0a:	8b 45 08             	mov    0x8(%ebp),%eax
c1002e0d:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002e12:	89 c2                	mov    %eax,%edx
c1002e14:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002e19:	29 c2                	sub    %eax,%edx
c1002e1b:	89 d0                	mov    %edx,%eax
c1002e1d:	c1 e8 16             	shr    $0x16,%eax
c1002e20:	89 c2                	mov    %eax,%edx
c1002e22:	8b 45 08             	mov    0x8(%ebp),%eax
c1002e25:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002e2a:	89 c1                	mov    %eax,%ecx
c1002e2c:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002e31:	29 c1                	sub    %eax,%ecx
c1002e33:	89 c8                	mov    %ecx,%eax
c1002e35:	c1 e8 0c             	shr    $0xc,%eax
c1002e38:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002e3d:	c1 e2 0a             	shl    $0xa,%edx
c1002e40:	01 d0                	add    %edx,%eax
c1002e42:	8b 04 85 00 30 91 c1 	mov    -0x3e6ed000(,%eax,4),%eax
c1002e49:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002e4e:	83 ec 08             	sub    $0x8,%esp
c1002e51:	ff 75 0c             	pushl  0xc(%ebp)
c1002e54:	50                   	push   %eax
c1002e55:	e8 ba fc ff ff       	call   c1002b14 <pmm_free>
c1002e5a:	83 c4 10             	add    $0x10,%esp
c1002e5d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002e64:	eb 48                	jmp    c1002eae <vmm_free+0xd1>
c1002e66:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002e6b:	8b 55 08             	mov    0x8(%ebp),%edx
c1002e6e:	29 c2                	sub    %eax,%edx
c1002e70:	89 d0                	mov    %edx,%eax
c1002e72:	c1 e8 16             	shr    $0x16,%eax
c1002e75:	89 c3                	mov    %eax,%ebx
c1002e77:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002e7c:	8b 55 08             	mov    0x8(%ebp),%edx
c1002e7f:	29 c2                	sub    %eax,%edx
c1002e81:	89 d0                	mov    %edx,%eax
c1002e83:	c1 e8 0c             	shr    $0xc,%eax
c1002e86:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002e8b:	89 c1                	mov    %eax,%ecx
c1002e8d:	8b 45 08             	mov    0x8(%ebp),%eax
c1002e90:	83 c8 06             	or     $0x6,%eax
c1002e93:	89 c2                	mov    %eax,%edx
c1002e95:	89 d8                	mov    %ebx,%eax
c1002e97:	c1 e0 0a             	shl    $0xa,%eax
c1002e9a:	01 c8                	add    %ecx,%eax
c1002e9c:	89 14 85 00 30 91 c1 	mov    %edx,-0x3e6ed000(,%eax,4)
c1002ea3:	81 45 08 00 10 00 00 	addl   $0x1000,0x8(%ebp)
c1002eaa:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002eae:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002eb1:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002eb4:	72 b0                	jb     c1002e66 <vmm_free+0x89>
c1002eb6:	eb 17                	jmp    c1002ecf <vmm_free+0xf2>
c1002eb8:	8b 45 08             	mov    0x8(%ebp),%eax
c1002ebb:	05 00 00 00 40       	add    $0x40000000,%eax
c1002ec0:	83 ec 08             	sub    $0x8,%esp
c1002ec3:	ff 75 0c             	pushl  0xc(%ebp)
c1002ec6:	50                   	push   %eax
c1002ec7:	e8 48 fc ff ff       	call   c1002b14 <pmm_free>
c1002ecc:	83 c4 10             	add    $0x10,%esp
c1002ecf:	90                   	nop
c1002ed0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002ed3:	c9                   	leave  
c1002ed4:	c3                   	ret    

c1002ed5 <vmm_map>:
c1002ed5:	55                   	push   %ebp
c1002ed6:	89 e5                	mov    %esp,%ebp
c1002ed8:	53                   	push   %ebx
c1002ed9:	83 ec 20             	sub    $0x20,%esp
c1002edc:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002edf:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002ee4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002ee7:	8b 45 10             	mov    0x10(%ebp),%eax
c1002eea:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002eef:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002ef4:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002ef7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002efa:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002efd:	81 65 14 00 f0 ff ff 	andl   $0xfffff000,0x14(%ebp)
c1002f04:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002f07:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002f0a:	c1 e8 0c             	shr    $0xc,%eax
c1002f0d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002f10:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002f17:	eb 3d                	jmp    c1002f56 <vmm_map+0x81>
c1002f19:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002f1c:	c1 e8 16             	shr    $0x16,%eax
c1002f1f:	89 c3                	mov    %eax,%ebx
c1002f21:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002f24:	c1 e8 0c             	shr    $0xc,%eax
c1002f27:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002f2c:	89 c1                	mov    %eax,%ecx
c1002f2e:	8b 45 14             	mov    0x14(%ebp),%eax
c1002f31:	83 c8 07             	or     $0x7,%eax
c1002f34:	89 c2                	mov    %eax,%edx
c1002f36:	89 d8                	mov    %ebx,%eax
c1002f38:	c1 e0 0a             	shl    $0xa,%eax
c1002f3b:	01 c8                	add    %ecx,%eax
c1002f3d:	89 14 85 00 30 61 c1 	mov    %edx,-0x3e9ed000(,%eax,4)
c1002f44:	81 45 14 00 10 00 00 	addl   $0x1000,0x14(%ebp)
c1002f4b:	81 45 f8 00 10 00 00 	addl   $0x1000,-0x8(%ebp)
c1002f52:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002f56:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002f59:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002f5c:	72 bb                	jb     c1002f19 <vmm_map+0x44>
c1002f5e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f61:	05 ff 03 00 00       	add    $0x3ff,%eax
c1002f66:	c1 e8 0a             	shr    $0xa,%eax
c1002f69:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002f6c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002f73:	eb 3d                	jmp    c1002fb2 <vmm_map+0xdd>
c1002f75:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002f78:	c1 e8 16             	shr    $0x16,%eax
c1002f7b:	89 c2                	mov    %eax,%edx
c1002f7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002f80:	01 d0                	add    %edx,%eax
c1002f82:	c1 e0 0c             	shl    $0xc,%eax
c1002f85:	05 00 30 61 c1       	add    $0xc1613000,%eax
c1002f8a:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002f90:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002f93:	c1 e8 16             	shr    $0x16,%eax
c1002f96:	89 c1                	mov    %eax,%ecx
c1002f98:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002f9b:	01 c8                	add    %ecx,%eax
c1002f9d:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
c1002fa4:	8b 45 08             	mov    0x8(%ebp),%eax
c1002fa7:	01 c8                	add    %ecx,%eax
c1002fa9:	83 ca 07             	or     $0x7,%edx
c1002fac:	89 10                	mov    %edx,(%eax)
c1002fae:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002fb2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002fb5:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002fb8:	72 bb                	jb     c1002f75 <vmm_map+0xa0>
c1002fba:	90                   	nop
c1002fbb:	90                   	nop
c1002fbc:	83 c4 20             	add    $0x20,%esp
c1002fbf:	5b                   	pop    %ebx
c1002fc0:	5d                   	pop    %ebp
c1002fc1:	c3                   	ret    

c1002fc2 <setup_pgdir>:
c1002fc2:	55                   	push   %ebp
c1002fc3:	89 e5                	mov    %esp,%ebp
c1002fc5:	57                   	push   %edi
c1002fc6:	56                   	push   %esi
c1002fc7:	53                   	push   %ebx
c1002fc8:	83 ec 1c             	sub    $0x1c,%esp
c1002fcb:	83 ec 08             	sub    $0x8,%esp
c1002fce:	6a 01                	push   $0x1
c1002fd0:	68 00 10 00 00       	push   $0x1000
c1002fd5:	e8 de fc ff ff       	call   c1002cb8 <vmm_malloc>
c1002fda:	83 c4 10             	add    $0x10,%esp
c1002fdd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002fe0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002fe3:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1002fe8:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002fed:	8b 0b                	mov    (%ebx),%ecx
c1002fef:	89 08                	mov    %ecx,(%eax)
c1002ff1:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002ff5:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002ff9:	8d 78 04             	lea    0x4(%eax),%edi
c1002ffc:	83 e7 fc             	and    $0xfffffffc,%edi
c1002fff:	29 f8                	sub    %edi,%eax
c1003001:	29 c3                	sub    %eax,%ebx
c1003003:	01 c2                	add    %eax,%edx
c1003005:	83 e2 fc             	and    $0xfffffffc,%edx
c1003008:	89 d0                	mov    %edx,%eax
c100300a:	c1 e8 02             	shr    $0x2,%eax
c100300d:	89 de                	mov    %ebx,%esi
c100300f:	89 c1                	mov    %eax,%ecx
c1003011:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003013:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003016:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003019:	5b                   	pop    %ebx
c100301a:	5e                   	pop    %esi
c100301b:	5f                   	pop    %edi
c100301c:	5d                   	pop    %ebp
c100301d:	c3                   	ret    

c100301e <sys_malloc>:
c100301e:	55                   	push   %ebp
c100301f:	89 e5                	mov    %esp,%ebp
c1003021:	57                   	push   %edi
c1003022:	56                   	push   %esi
c1003023:	53                   	push   %ebx
c1003024:	83 ec 1c             	sub    $0x1c,%esp
c1003027:	83 ec 08             	sub    $0x8,%esp
c100302a:	6a 02                	push   $0x2
c100302c:	ff 75 08             	pushl  0x8(%ebp)
c100302f:	e8 84 fc ff ff       	call   c1002cb8 <vmm_malloc>
c1003034:	83 c4 10             	add    $0x10,%esp
c1003037:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100303a:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100303f:	8b 40 30             	mov    0x30(%eax),%eax
c1003042:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1003047:	ba 00 10 00 00       	mov    $0x1000,%edx
c100304c:	8b 0b                	mov    (%ebx),%ecx
c100304e:	89 08                	mov    %ecx,(%eax)
c1003050:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003054:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003058:	8d 78 04             	lea    0x4(%eax),%edi
c100305b:	83 e7 fc             	and    $0xfffffffc,%edi
c100305e:	29 f8                	sub    %edi,%eax
c1003060:	29 c3                	sub    %eax,%ebx
c1003062:	01 c2                	add    %eax,%edx
c1003064:	83 e2 fc             	and    $0xfffffffc,%edx
c1003067:	89 d0                	mov    %edx,%eax
c1003069:	c1 e8 02             	shr    $0x2,%eax
c100306c:	89 de                	mov    %ebx,%esi
c100306e:	89 c1                	mov    %eax,%ecx
c1003070:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003072:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003075:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003078:	5b                   	pop    %ebx
c1003079:	5e                   	pop    %esi
c100307a:	5f                   	pop    %edi
c100307b:	5d                   	pop    %ebp
c100307c:	c3                   	ret    

c100307d <sys_free>:
c100307d:	55                   	push   %ebp
c100307e:	89 e5                	mov    %esp,%ebp
c1003080:	57                   	push   %edi
c1003081:	56                   	push   %esi
c1003082:	53                   	push   %ebx
c1003083:	83 ec 0c             	sub    $0xc,%esp
c1003086:	83 ec 08             	sub    $0x8,%esp
c1003089:	ff 75 0c             	pushl  0xc(%ebp)
c100308c:	ff 75 08             	pushl  0x8(%ebp)
c100308f:	e8 49 fd ff ff       	call   c1002ddd <vmm_free>
c1003094:	83 c4 10             	add    $0x10,%esp
c1003097:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100309c:	8b 40 30             	mov    0x30(%eax),%eax
c100309f:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c10030a4:	ba 00 10 00 00       	mov    $0x1000,%edx
c10030a9:	8b 0b                	mov    (%ebx),%ecx
c10030ab:	89 08                	mov    %ecx,(%eax)
c10030ad:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c10030b1:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c10030b5:	8d 78 04             	lea    0x4(%eax),%edi
c10030b8:	83 e7 fc             	and    $0xfffffffc,%edi
c10030bb:	29 f8                	sub    %edi,%eax
c10030bd:	29 c3                	sub    %eax,%ebx
c10030bf:	01 c2                	add    %eax,%edx
c10030c1:	83 e2 fc             	and    $0xfffffffc,%edx
c10030c4:	89 d0                	mov    %edx,%eax
c10030c6:	c1 e8 02             	shr    $0x2,%eax
c10030c9:	89 de                	mov    %ebx,%esi
c10030cb:	89 c1                	mov    %eax,%ecx
c10030cd:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c10030cf:	90                   	nop
c10030d0:	8d 65 f4             	lea    -0xc(%ebp),%esp
c10030d3:	5b                   	pop    %ebx
c10030d4:	5e                   	pop    %esi
c10030d5:	5f                   	pop    %edi
c10030d6:	5d                   	pop    %ebp
c10030d7:	c3                   	ret    

c10030d8 <sys_mmap>:
c10030d8:	55                   	push   %ebp
c10030d9:	89 e5                	mov    %esp,%ebp
c10030db:	83 ec 10             	sub    $0x10,%esp
c10030de:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10030e3:	8b 40 30             	mov    0x30(%eax),%eax
c10030e6:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10030e9:	ff 75 10             	pushl  0x10(%ebp)
c10030ec:	ff 75 0c             	pushl  0xc(%ebp)
c10030ef:	ff 75 08             	pushl  0x8(%ebp)
c10030f2:	ff 75 fc             	pushl  -0x4(%ebp)
c10030f5:	e8 db fd ff ff       	call   c1002ed5 <vmm_map>
c10030fa:	83 c4 10             	add    $0x10,%esp
c10030fd:	90                   	nop
c10030fe:	c9                   	leave  
c10030ff:	c3                   	ret    

c1003100 <hash32>:
c1003100:	55                   	push   %ebp
c1003101:	89 e5                	mov    %esp,%ebp
c1003103:	83 ec 10             	sub    $0x10,%esp
c1003106:	8b 45 08             	mov    0x8(%ebp),%eax
c1003109:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100310f:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003112:	b8 20 00 00 00       	mov    $0x20,%eax
c1003117:	2b 45 0c             	sub    0xc(%ebp),%eax
c100311a:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100311d:	89 c1                	mov    %eax,%ecx
c100311f:	d3 ea                	shr    %cl,%edx
c1003121:	89 d0                	mov    %edx,%eax
c1003123:	c9                   	leave  
c1003124:	c3                   	ret    

c1003125 <kernel_task_init>:
c1003125:	55                   	push   %ebp
c1003126:	89 e5                	mov    %esp,%ebp
c1003128:	83 ec 28             	sub    $0x28,%esp
c100312b:	c7 45 e8 84 1c 01 c1 	movl   $0xc1011c84,-0x18(%ebp)
c1003132:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003135:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003138:	89 50 04             	mov    %edx,0x4(%eax)
c100313b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100313e:	8b 50 04             	mov    0x4(%eax),%edx
c1003141:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003144:	89 10                	mov    %edx,(%eax)
c1003146:	90                   	nop
c1003147:	c7 45 ec 8c 1c 01 c1 	movl   $0xc1011c8c,-0x14(%ebp)
c100314e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003151:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003154:	89 50 04             	mov    %edx,0x4(%eax)
c1003157:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100315a:	8b 50 04             	mov    0x4(%eax),%edx
c100315d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003160:	89 10                	mov    %edx,(%eax)
c1003162:	90                   	nop
c1003163:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100316a:	eb 27                	jmp    c1003193 <kernel_task_init+0x6e>
c100316c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100316f:	c1 e0 03             	shl    $0x3,%eax
c1003172:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c1003177:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100317a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100317d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003180:	89 50 04             	mov    %edx,0x4(%eax)
c1003183:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003186:	8b 50 04             	mov    0x4(%eax),%edx
c1003189:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100318c:	89 10                	mov    %edx,(%eax)
c100318e:	90                   	nop
c100318f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003193:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%ebp)
c100319a:	7e d0                	jle    c100316c <kernel_task_init+0x47>
c100319c:	83 ec 0c             	sub    $0xc,%esp
c100319f:	6a 01                	push   $0x1
c10031a1:	e8 68 06 00 00       	call   c100380e <alloc_task>
c10031a6:	83 c4 10             	add    $0x10,%esp
c10031a9:	a3 00 40 a1 c1       	mov    %eax,0xc1a14000
c10031ae:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031b3:	85 c0                	test   %eax,%eax
c10031b5:	75 10                	jne    c10031c7 <kernel_task_init+0xa2>
c10031b7:	83 ec 0c             	sub    $0xc,%esp
c10031ba:	68 98 b6 00 c1       	push   $0xc100b698
c10031bf:	e8 37 26 00 00       	call   c10057fb <printk>
c10031c4:	83 c4 10             	add    $0x10,%esp
c10031c7:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031cc:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c10031d2:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031d7:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c10031de:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031e3:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c10031ea:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031ef:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c10031f6:	c7 05 80 1c 01 c1 00 	movl   $0x0,0xc1011c80
c10031fd:	00 00 00 
c1003200:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003205:	83 ec 08             	sub    $0x8,%esp
c1003208:	68 ab b6 00 c1       	push   $0xc100b6ab
c100320d:	50                   	push   %eax
c100320e:	e8 92 03 00 00       	call   c10035a5 <set_task_name>
c1003213:	83 c4 10             	add    $0x10,%esp
c1003216:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100321b:	89 c2                	mov    %eax,%edx
c100321d:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003222:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1003228:	89 50 28             	mov    %edx,0x28(%eax)
c100322b:	ba 00 20 61 c1       	mov    $0xc1612000,%edx
c1003230:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003235:	81 c2 00 00 00 40    	add    $0x40000000,%edx
c100323b:	89 50 2c             	mov    %edx,0x2c(%eax)
c100323e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003243:	c7 80 f8 00 00 00 00 	movl   $0x0,0xf8(%eax)
c100324a:	00 00 00 
c100324d:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003252:	8b 40 28             	mov    0x28(%eax),%eax
c1003255:	8d 50 b4             	lea    -0x4c(%eax),%edx
c1003258:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100325d:	89 50 38             	mov    %edx,0x38(%eax)
c1003260:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003265:	8b 40 38             	mov    0x38(%eax),%eax
c1003268:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c100326f:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003274:	8b 40 38             	mov    0x38(%eax),%eax
c1003277:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100327e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003283:	8b 40 38             	mov    0x38(%eax),%eax
c1003286:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c100328d:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003292:	8b 40 38             	mov    0x38(%eax),%eax
c1003295:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c100329c:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032a1:	8b 40 38             	mov    0x38(%eax),%eax
c10032a4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10032aa:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032af:	8b 40 38             	mov    0x38(%eax),%eax
c10032b2:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c10032b9:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032be:	8b 40 38             	mov    0x38(%eax),%eax
c10032c1:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10032c8:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032cd:	8b 40 38             	mov    0x38(%eax),%eax
c10032d0:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c10032d7:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032dc:	8b 40 38             	mov    0x38(%eax),%eax
c10032df:	66 c7 40 3c 08 00    	movw   $0x8,0x3c(%eax)
c10032e5:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032ea:	8b 40 38             	mov    0x38(%eax),%eax
c10032ed:	66 c7 40 48 10 00    	movw   $0x10,0x48(%eax)
c10032f3:	8b 15 00 40 a1 c1    	mov    0xc1a14000,%edx
c10032f9:	8b 52 38             	mov    0x38(%edx),%edx
c10032fc:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c1003300:	66 89 42 24          	mov    %ax,0x24(%edx)
c1003304:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003309:	8b 40 38             	mov    0x38(%eax),%eax
c100330c:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1003310:	66 89 50 28          	mov    %dx,0x28(%eax)
c1003314:	8b 15 00 40 a1 c1    	mov    0xc1a14000,%edx
c100331a:	8b 52 38             	mov    0x38(%edx),%edx
c100331d:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1003321:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1003325:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100332a:	8b 40 38             	mov    0x38(%eax),%eax
c100332d:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1003333:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003338:	8b 40 38             	mov    0x38(%eax),%eax
c100333b:	ba 05 39 00 c1       	mov    $0xc1003905,%edx
c1003340:	89 50 38             	mov    %edx,0x38(%eax)
c1003343:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003348:	8b 40 38             	mov    0x38(%eax),%eax
c100334b:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1003352:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003357:	8b 50 28             	mov    0x28(%eax),%edx
c100335a:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100335f:	8b 40 38             	mov    0x38(%eax),%eax
c1003362:	83 ea 4c             	sub    $0x4c,%edx
c1003365:	89 50 44             	mov    %edx,0x44(%eax)
c1003368:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100336d:	8b 55 08             	mov    0x8(%ebp),%edx
c1003370:	89 50 3c             	mov    %edx,0x3c(%eax)
c1003373:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003378:	8b 50 38             	mov    0x38(%eax),%edx
c100337b:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003380:	89 50 40             	mov    %edx,0x40(%eax)
c1003383:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003388:	8b 50 38             	mov    0x38(%eax),%edx
c100338b:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003390:	8b 52 10             	mov    0x10(%edx),%edx
c1003393:	89 50 44             	mov    %edx,0x44(%eax)
c1003396:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100339b:	8b 50 38             	mov    0x38(%eax),%edx
c100339e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033a3:	8b 52 14             	mov    0x14(%edx),%edx
c10033a6:	89 50 4c             	mov    %edx,0x4c(%eax)
c10033a9:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033ae:	83 c0 5c             	add    $0x5c,%eax
c10033b1:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10033b4:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10033b7:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10033ba:	89 50 04             	mov    %edx,0x4(%eax)
c10033bd:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10033c0:	8b 50 04             	mov    0x4(%eax),%edx
c10033c3:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10033c6:	89 10                	mov    %edx,(%eax)
c10033c8:	90                   	nop
c10033c9:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033ce:	83 c0 5c             	add    $0x5c,%eax
c10033d1:	83 ec 0c             	sub    $0xc,%esp
c10033d4:	50                   	push   %eax
c10033d5:	e8 35 02 00 00       	call   c100360f <add_link>
c10033da:	83 c4 10             	add    $0x10,%esp
c10033dd:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033e2:	83 c0 64             	add    $0x64,%eax
c10033e5:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10033e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10033eb:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10033ee:	89 50 04             	mov    %edx,0x4(%eax)
c10033f1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10033f4:	8b 50 04             	mov    0x4(%eax),%edx
c10033f7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10033fa:	89 10                	mov    %edx,(%eax)
c10033fc:	90                   	nop
c10033fd:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003402:	83 c0 64             	add    $0x64,%eax
c1003405:	83 ec 0c             	sub    $0xc,%esp
c1003408:	50                   	push   %eax
c1003409:	e8 51 02 00 00       	call   c100365f <add_all_link>
c100340e:	83 c4 10             	add    $0x10,%esp
c1003411:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003416:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
c100341d:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003422:	c7 40 78 01 00 00 00 	movl   $0x1,0x78(%eax)
c1003429:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100342e:	c7 40 7c 02 00 00 00 	movl   $0x2,0x7c(%eax)
c1003435:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
c100343c:	eb 17                	jmp    c1003455 <kernel_task_init+0x330>
c100343e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003443:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003446:	83 c2 1c             	add    $0x1c,%edx
c1003449:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c1003450:	ff 
c1003451:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1003455:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1003459:	7e e3                	jle    c100343e <kernel_task_init+0x319>
c100345b:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003460:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c1003465:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100346a:	83 ec 0c             	sub    $0xc,%esp
c100346d:	50                   	push   %eax
c100346e:	e8 6f 02 00 00       	call   c10036e2 <add_pid_hash>
c1003473:	83 c4 10             	add    $0x10,%esp
c1003476:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100347b:	83 ec 0c             	sub    $0xc,%esp
c100347e:	50                   	push   %eax
c100347f:	e8 5b 08 00 00       	call   c1003cdf <wakeup_task>
c1003484:	83 c4 10             	add    $0x10,%esp
c1003487:	c7 05 94 1c 01 c1 01 	movl   $0x1,0xc1011c94
c100348e:	00 00 00 
c1003491:	90                   	nop
c1003492:	c9                   	leave  
c1003493:	c3                   	ret    

c1003494 <set_pid_bit>:
c1003494:	55                   	push   %ebp
c1003495:	89 e5                	mov    %esp,%ebp
c1003497:	83 ec 10             	sub    $0x10,%esp
c100349a:	8b 45 08             	mov    0x8(%ebp),%eax
c100349d:	8d 50 07             	lea    0x7(%eax),%edx
c10034a0:	85 c0                	test   %eax,%eax
c10034a2:	0f 48 c2             	cmovs  %edx,%eax
c10034a5:	c1 f8 03             	sar    $0x3,%eax
c10034a8:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10034ab:	8b 45 08             	mov    0x8(%ebp),%eax
c10034ae:	99                   	cltd   
c10034af:	c1 ea 1d             	shr    $0x1d,%edx
c10034b2:	01 d0                	add    %edx,%eax
c10034b4:	83 e0 07             	and    $0x7,%eax
c10034b7:	29 d0                	sub    %edx,%eax
c10034b9:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10034bc:	90                   	nop
c10034bd:	c9                   	leave  
c10034be:	c3                   	ret    

c10034bf <clear_pid_bit>:
c10034bf:	55                   	push   %ebp
c10034c0:	89 e5                	mov    %esp,%ebp
c10034c2:	83 ec 10             	sub    $0x10,%esp
c10034c5:	8b 45 08             	mov    0x8(%ebp),%eax
c10034c8:	8d 50 07             	lea    0x7(%eax),%edx
c10034cb:	85 c0                	test   %eax,%eax
c10034cd:	0f 48 c2             	cmovs  %edx,%eax
c10034d0:	c1 f8 03             	sar    $0x3,%eax
c10034d3:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10034d6:	8b 45 08             	mov    0x8(%ebp),%eax
c10034d9:	99                   	cltd   
c10034da:	c1 ea 1d             	shr    $0x1d,%edx
c10034dd:	01 d0                	add    %edx,%eax
c10034df:	83 e0 07             	and    $0x7,%eax
c10034e2:	29 d0                	sub    %edx,%eax
c10034e4:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10034e7:	90                   	nop
c10034e8:	c9                   	leave  
c10034e9:	c3                   	ret    

c10034ea <find_free_pid>:
c10034ea:	55                   	push   %ebp
c10034eb:	89 e5                	mov    %esp,%ebp
c10034ed:	83 ec 10             	sub    $0x10,%esp
c10034f0:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c10034f7:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c10034fe:	eb 1b                	jmp    c100351b <find_free_pid+0x31>
c1003500:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003507:	eb 08                	jmp    c1003511 <find_free_pid+0x27>
c1003509:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100350d:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1003511:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
c1003515:	7e f2                	jle    c1003509 <find_free_pid+0x1f>
c1003517:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100351b:	81 7d f8 00 80 00 00 	cmpl   $0x8000,-0x8(%ebp)
c1003522:	75 dc                	jne    c1003500 <find_free_pid+0x16>
c1003524:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003529:	c9                   	leave  
c100352a:	c3                   	ret    

c100352b <alloc_pid>:
c100352b:	55                   	push   %ebp
c100352c:	89 e5                	mov    %esp,%ebp
c100352e:	83 ec 10             	sub    $0x10,%esp
c1003531:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c1003536:	85 c0                	test   %eax,%eax
c1003538:	75 07                	jne    c1003541 <alloc_pid+0x16>
c100353a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100353f:	eb 44                	jmp    c1003585 <alloc_pid+0x5a>
c1003541:	81 7d fc ff 7f 00 00 	cmpl   $0x7fff,-0x4(%ebp)
c1003548:	75 07                	jne    c1003551 <alloc_pid+0x26>
c100354a:	e8 9b ff ff ff       	call   c10034ea <find_free_pid>
c100354f:	eb 08                	jmp    c1003559 <alloc_pid+0x2e>
c1003551:	a1 80 1c 01 c1       	mov    0xc1011c80,%eax
c1003556:	83 c0 01             	add    $0x1,%eax
c1003559:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100355c:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1003560:	78 18                	js     c100357a <alloc_pid+0x4f>
c1003562:	ff 75 fc             	pushl  -0x4(%ebp)
c1003565:	e8 2a ff ff ff       	call   c1003494 <set_pid_bit>
c100356a:	83 c4 04             	add    $0x4,%esp
c100356d:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c1003572:	83 e8 01             	sub    $0x1,%eax
c1003575:	a3 20 db 00 c1       	mov    %eax,0xc100db20
c100357a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100357d:	a3 80 1c 01 c1       	mov    %eax,0xc1011c80
c1003582:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003585:	c9                   	leave  
c1003586:	c3                   	ret    

c1003587 <free_pid>:
c1003587:	55                   	push   %ebp
c1003588:	89 e5                	mov    %esp,%ebp
c100358a:	ff 75 08             	pushl  0x8(%ebp)
c100358d:	e8 2d ff ff ff       	call   c10034bf <clear_pid_bit>
c1003592:	83 c4 04             	add    $0x4,%esp
c1003595:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c100359a:	83 c0 01             	add    $0x1,%eax
c100359d:	a3 20 db 00 c1       	mov    %eax,0xc100db20
c10035a2:	90                   	nop
c10035a3:	c9                   	leave  
c10035a4:	c3                   	ret    

c10035a5 <set_task_name>:
c10035a5:	55                   	push   %ebp
c10035a6:	89 e5                	mov    %esp,%ebp
c10035a8:	83 ec 08             	sub    $0x8,%esp
c10035ab:	8b 45 08             	mov    0x8(%ebp),%eax
c10035ae:	83 c0 14             	add    $0x14,%eax
c10035b1:	83 ec 04             	sub    $0x4,%esp
c10035b4:	6a 14                	push   $0x14
c10035b6:	6a 00                	push   $0x0
c10035b8:	50                   	push   %eax
c10035b9:	e8 ec ca ff ff       	call   c10000aa <memset>
c10035be:	83 c4 10             	add    $0x10,%esp
c10035c1:	8b 45 08             	mov    0x8(%ebp),%eax
c10035c4:	83 c0 14             	add    $0x14,%eax
c10035c7:	83 ec 04             	sub    $0x4,%esp
c10035ca:	6a 14                	push   $0x14
c10035cc:	ff 75 0c             	pushl  0xc(%ebp)
c10035cf:	50                   	push   %eax
c10035d0:	e8 33 cb ff ff       	call   c1000108 <memcpy>
c10035d5:	83 c4 10             	add    $0x10,%esp
c10035d8:	c9                   	leave  
c10035d9:	c3                   	ret    

c10035da <get_task_name>:
c10035da:	55                   	push   %ebp
c10035db:	89 e5                	mov    %esp,%ebp
c10035dd:	83 ec 08             	sub    $0x8,%esp
c10035e0:	83 ec 04             	sub    $0x4,%esp
c10035e3:	6a 15                	push   $0x15
c10035e5:	6a 00                	push   $0x0
c10035e7:	68 98 1c 01 c1       	push   $0xc1011c98
c10035ec:	e8 b9 ca ff ff       	call   c10000aa <memset>
c10035f1:	83 c4 10             	add    $0x10,%esp
c10035f4:	8b 45 08             	mov    0x8(%ebp),%eax
c10035f7:	83 c0 14             	add    $0x14,%eax
c10035fa:	83 ec 04             	sub    $0x4,%esp
c10035fd:	6a 14                	push   $0x14
c10035ff:	50                   	push   %eax
c1003600:	68 98 1c 01 c1       	push   $0xc1011c98
c1003605:	e8 fe ca ff ff       	call   c1000108 <memcpy>
c100360a:	83 c4 10             	add    $0x10,%esp
c100360d:	c9                   	leave  
c100360e:	c3                   	ret    

c100360f <add_link>:
c100360f:	55                   	push   %ebp
c1003610:	89 e5                	mov    %esp,%ebp
c1003612:	83 ec 20             	sub    $0x20,%esp
c1003615:	c7 45 fc 84 1c 01 c1 	movl   $0xc1011c84,-0x4(%ebp)
c100361c:	8b 45 08             	mov    0x8(%ebp),%eax
c100361f:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003622:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003625:	8b 00                	mov    (%eax),%eax
c1003627:	8b 55 f8             	mov    -0x8(%ebp),%edx
c100362a:	89 55 f4             	mov    %edx,-0xc(%ebp)
c100362d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003630:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003633:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003636:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003639:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100363c:	89 10                	mov    %edx,(%eax)
c100363e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003641:	8b 10                	mov    (%eax),%edx
c1003643:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003646:	89 50 04             	mov    %edx,0x4(%eax)
c1003649:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100364c:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100364f:	89 50 04             	mov    %edx,0x4(%eax)
c1003652:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003655:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003658:	89 10                	mov    %edx,(%eax)
c100365a:	90                   	nop
c100365b:	90                   	nop
c100365c:	90                   	nop
c100365d:	c9                   	leave  
c100365e:	c3                   	ret    

c100365f <add_all_link>:
c100365f:	55                   	push   %ebp
c1003660:	89 e5                	mov    %esp,%ebp
c1003662:	83 ec 20             	sub    $0x20,%esp
c1003665:	c7 45 fc 8c 1c 01 c1 	movl   $0xc1011c8c,-0x4(%ebp)
c100366c:	8b 45 08             	mov    0x8(%ebp),%eax
c100366f:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003672:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003675:	8b 00                	mov    (%eax),%eax
c1003677:	8b 55 f8             	mov    -0x8(%ebp),%edx
c100367a:	89 55 f4             	mov    %edx,-0xc(%ebp)
c100367d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003680:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003683:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003686:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003689:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100368c:	89 10                	mov    %edx,(%eax)
c100368e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003691:	8b 10                	mov    (%eax),%edx
c1003693:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003696:	89 50 04             	mov    %edx,0x4(%eax)
c1003699:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100369c:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100369f:	89 50 04             	mov    %edx,0x4(%eax)
c10036a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036a5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10036a8:	89 10                	mov    %edx,(%eax)
c10036aa:	90                   	nop
c10036ab:	90                   	nop
c10036ac:	90                   	nop
c10036ad:	c9                   	leave  
c10036ae:	c3                   	ret    

c10036af <remove_link>:
c10036af:	55                   	push   %ebp
c10036b0:	89 e5                	mov    %esp,%ebp
c10036b2:	83 ec 10             	sub    $0x10,%esp
c10036b5:	8b 45 08             	mov    0x8(%ebp),%eax
c10036b8:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10036bb:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10036be:	8b 40 04             	mov    0x4(%eax),%eax
c10036c1:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10036c4:	8b 12                	mov    (%edx),%edx
c10036c6:	89 55 f8             	mov    %edx,-0x8(%ebp)
c10036c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10036cc:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10036cf:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10036d2:	89 50 04             	mov    %edx,0x4(%eax)
c10036d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036d8:	8b 55 f8             	mov    -0x8(%ebp),%edx
c10036db:	89 10                	mov    %edx,(%eax)
c10036dd:	90                   	nop
c10036de:	90                   	nop
c10036df:	90                   	nop
c10036e0:	c9                   	leave  
c10036e1:	c3                   	ret    

c10036e2 <add_pid_hash>:
c10036e2:	55                   	push   %ebp
c10036e3:	89 e5                	mov    %esp,%ebp
c10036e5:	53                   	push   %ebx
c10036e6:	83 ec 20             	sub    $0x20,%esp
c10036e9:	8b 45 08             	mov    0x8(%ebp),%eax
c10036ec:	8d 58 6c             	lea    0x6c(%eax),%ebx
c10036ef:	8b 45 08             	mov    0x8(%ebp),%eax
c10036f2:	8b 40 0c             	mov    0xc(%eax),%eax
c10036f5:	6a 0a                	push   $0xa
c10036f7:	50                   	push   %eax
c10036f8:	e8 03 fa ff ff       	call   c1003100 <hash32>
c10036fd:	83 c4 08             	add    $0x8,%esp
c1003700:	c1 e0 03             	shl    $0x3,%eax
c1003703:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c1003708:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100370b:	89 5d f4             	mov    %ebx,-0xc(%ebp)
c100370e:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1003711:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003714:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003717:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100371a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100371d:	8b 40 04             	mov    0x4(%eax),%eax
c1003720:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003723:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1003726:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003729:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c100372c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100372f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003732:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003735:	89 10                	mov    %edx,(%eax)
c1003737:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100373a:	8b 10                	mov    (%eax),%edx
c100373c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100373f:	89 50 04             	mov    %edx,0x4(%eax)
c1003742:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003745:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1003748:	89 50 04             	mov    %edx,0x4(%eax)
c100374b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100374e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003751:	89 10                	mov    %edx,(%eax)
c1003753:	90                   	nop
c1003754:	90                   	nop
c1003755:	90                   	nop
c1003756:	90                   	nop
c1003757:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100375a:	c9                   	leave  
c100375b:	c3                   	ret    

c100375c <remove_pid_hash>:
c100375c:	55                   	push   %ebp
c100375d:	89 e5                	mov    %esp,%ebp
c100375f:	83 ec 18             	sub    $0x18,%esp
c1003762:	83 ec 0c             	sub    $0xc,%esp
c1003765:	ff 75 08             	pushl  0x8(%ebp)
c1003768:	e8 36 00 00 00       	call   c10037a3 <find_task>
c100376d:	83 c4 10             	add    $0x10,%esp
c1003770:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003773:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003776:	83 c0 6c             	add    $0x6c,%eax
c1003779:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100377c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100377f:	8b 40 04             	mov    0x4(%eax),%eax
c1003782:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003785:	8b 12                	mov    (%edx),%edx
c1003787:	89 55 ec             	mov    %edx,-0x14(%ebp)
c100378a:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100378d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003790:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003793:	89 50 04             	mov    %edx,0x4(%eax)
c1003796:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003799:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100379c:	89 10                	mov    %edx,(%eax)
c100379e:	90                   	nop
c100379f:	90                   	nop
c10037a0:	90                   	nop
c10037a1:	c9                   	leave  
c10037a2:	c3                   	ret    

c10037a3 <find_task>:
c10037a3:	55                   	push   %ebp
c10037a4:	89 e5                	mov    %esp,%ebp
c10037a6:	83 ec 10             	sub    $0x10,%esp
c10037a9:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10037ad:	79 07                	jns    c10037b6 <find_task+0x13>
c10037af:	b8 00 00 00 00       	mov    $0x0,%eax
c10037b4:	eb 56                	jmp    c100380c <find_task+0x69>
c10037b6:	8b 45 08             	mov    0x8(%ebp),%eax
c10037b9:	6a 0a                	push   $0xa
c10037bb:	50                   	push   %eax
c10037bc:	e8 3f f9 ff ff       	call   c1003100 <hash32>
c10037c1:	83 c4 08             	add    $0x8,%esp
c10037c4:	c1 e0 03             	shl    $0x3,%eax
c10037c7:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c10037cc:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10037cf:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10037d2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10037d5:	eb 19                	jmp    c10037f0 <find_task+0x4d>
c10037d7:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10037da:	83 e8 6c             	sub    $0x6c,%eax
c10037dd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10037e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037e3:	8b 40 0c             	mov    0xc(%eax),%eax
c10037e6:	39 45 08             	cmp    %eax,0x8(%ebp)
c10037e9:	75 05                	jne    c10037f0 <find_task+0x4d>
c10037eb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037ee:	eb 1c                	jmp    c100380c <find_task+0x69>
c10037f0:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10037f3:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10037f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10037f9:	8b 40 04             	mov    0x4(%eax),%eax
c10037fc:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10037ff:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003802:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1003805:	75 d0                	jne    c10037d7 <find_task+0x34>
c1003807:	b8 00 00 00 00       	mov    $0x0,%eax
c100380c:	c9                   	leave  
c100380d:	c3                   	ret    

c100380e <alloc_task>:
c100380e:	55                   	push   %ebp
c100380f:	89 e5                	mov    %esp,%ebp
c1003811:	83 ec 18             	sub    $0x18,%esp
c1003814:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1003818:	75 17                	jne    c1003831 <alloc_task+0x23>
c100381a:	83 ec 08             	sub    $0x8,%esp
c100381d:	6a 01                	push   $0x1
c100381f:	68 00 20 00 00       	push   $0x2000
c1003824:	e8 8f f4 ff ff       	call   c1002cb8 <vmm_malloc>
c1003829:	83 c4 10             	add    $0x10,%esp
c100382c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100382f:	eb 15                	jmp    c1003846 <alloc_task+0x38>
c1003831:	83 ec 08             	sub    $0x8,%esp
c1003834:	6a 02                	push   $0x2
c1003836:	68 00 20 00 00       	push   $0x2000
c100383b:	e8 78 f4 ff ff       	call   c1002cb8 <vmm_malloc>
c1003840:	83 c4 10             	add    $0x10,%esp
c1003843:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003846:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100384a:	0f 84 b0 00 00 00    	je     c1003900 <alloc_task+0xf2>
c1003850:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003853:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c1003859:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100385c:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003863:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003866:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100386d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003870:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
c1003877:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100387a:	83 c0 14             	add    $0x14,%eax
c100387d:	83 ec 04             	sub    $0x4,%esp
c1003880:	6a 14                	push   $0x14
c1003882:	6a 00                	push   $0x0
c1003884:	50                   	push   %eax
c1003885:	e8 20 c8 ff ff       	call   c10000aa <memset>
c100388a:	83 c4 10             	add    $0x10,%esp
c100388d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003890:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
c1003897:	ba 00 20 61 c1       	mov    $0xc1612000,%edx
c100389c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100389f:	89 50 2c             	mov    %edx,0x2c(%eax)
c10038a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038a5:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
c10038ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038af:	83 c0 3c             	add    $0x3c,%eax
c10038b2:	83 ec 04             	sub    $0x4,%esp
c10038b5:	6a 20                	push   $0x20
c10038b7:	6a 00                	push   $0x0
c10038b9:	50                   	push   %eax
c10038ba:	e8 eb c7 ff ff       	call   c10000aa <memset>
c10038bf:	83 c4 10             	add    $0x10,%esp
c10038c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038c5:	c7 80 f4 00 00 00 11 	movl   $0x19971211,0xf4(%eax)
c10038cc:	12 97 19 
c10038cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038d2:	c7 80 f8 00 00 00 00 	movl   $0x0,0xf8(%eax)
c10038d9:	00 00 00 
c10038dc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10038e3:	eb 15                	jmp    c10038fa <alloc_task+0xec>
c10038e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038e8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10038eb:	83 c2 1c             	add    $0x1c,%edx
c10038ee:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c10038f5:	ff 
c10038f6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10038fa:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c10038fe:	7e e5                	jle    c10038e5 <alloc_task+0xd7>
c1003900:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003903:	c9                   	leave  
c1003904:	c3                   	ret    

c1003905 <forkret>:
c1003905:	55                   	push   %ebp
c1003906:	89 e5                	mov    %esp,%ebp
c1003908:	83 ec 08             	sub    $0x8,%esp
c100390b:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003910:	8b 40 38             	mov    0x38(%eax),%eax
c1003913:	83 ec 0c             	sub    $0xc,%esp
c1003916:	50                   	push   %eax
c1003917:	e8 d5 d4 ff ff       	call   c1000df1 <forkrets>
c100391c:	83 c4 10             	add    $0x10,%esp
c100391f:	90                   	nop
c1003920:	c9                   	leave  
c1003921:	c3                   	ret    

c1003922 <copy_thread>:
c1003922:	55                   	push   %ebp
c1003923:	89 e5                	mov    %esp,%ebp
c1003925:	57                   	push   %edi
c1003926:	56                   	push   %esi
c1003927:	53                   	push   %ebx
c1003928:	83 ec 1c             	sub    $0x1c,%esp
c100392b:	8b 45 08             	mov    0x8(%ebp),%eax
c100392e:	8b 40 28             	mov    0x28(%eax),%eax
c1003931:	83 e8 4c             	sub    $0x4c,%eax
c1003934:	89 c2                	mov    %eax,%edx
c1003936:	8b 45 08             	mov    0x8(%ebp),%eax
c1003939:	89 50 38             	mov    %edx,0x38(%eax)
c100393c:	8b 45 08             	mov    0x8(%ebp),%eax
c100393f:	8b 40 38             	mov    0x38(%eax),%eax
c1003942:	8b 55 10             	mov    0x10(%ebp),%edx
c1003945:	89 d3                	mov    %edx,%ebx
c1003947:	ba 4c 00 00 00       	mov    $0x4c,%edx
c100394c:	8b 0b                	mov    (%ebx),%ecx
c100394e:	89 08                	mov    %ecx,(%eax)
c1003950:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003954:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003958:	8d 78 04             	lea    0x4(%eax),%edi
c100395b:	83 e7 fc             	and    $0xfffffffc,%edi
c100395e:	29 f8                	sub    %edi,%eax
c1003960:	29 c3                	sub    %eax,%ebx
c1003962:	01 c2                	add    %eax,%edx
c1003964:	83 e2 fc             	and    $0xfffffffc,%edx
c1003967:	89 d0                	mov    %edx,%eax
c1003969:	c1 e8 02             	shr    $0x2,%eax
c100396c:	89 de                	mov    %ebx,%esi
c100396e:	89 c1                	mov    %eax,%ecx
c1003970:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003972:	8b 45 08             	mov    0x8(%ebp),%eax
c1003975:	8b 40 38             	mov    0x38(%eax),%eax
c1003978:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c100397f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003982:	8b 40 38             	mov    0x38(%eax),%eax
c1003985:	8b 50 40             	mov    0x40(%eax),%edx
c1003988:	8b 45 08             	mov    0x8(%ebp),%eax
c100398b:	8b 40 38             	mov    0x38(%eax),%eax
c100398e:	80 ce 02             	or     $0x2,%dh
c1003991:	89 50 40             	mov    %edx,0x40(%eax)
c1003994:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003999:	05 00 01 00 00       	add    $0x100,%eax
c100399e:	89 c2                	mov    %eax,%edx
c10039a0:	8b 45 08             	mov    0x8(%ebp),%eax
c10039a3:	05 00 01 00 00       	add    $0x100,%eax
c10039a8:	83 ec 04             	sub    $0x4,%esp
c10039ab:	68 00 0f 00 00       	push   $0xf00
c10039b0:	52                   	push   %edx
c10039b1:	50                   	push   %eax
c10039b2:	e8 51 c7 ff ff       	call   c1000108 <memcpy>
c10039b7:	83 c4 10             	add    $0x10,%esp
c10039ba:	8b 45 08             	mov    0x8(%ebp),%eax
c10039bd:	05 00 01 00 00       	add    $0x100,%eax
c10039c2:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10039c5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c10039cc:	eb 5b                	jmp    c1003a29 <copy_thread+0x107>
c10039ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10039d1:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10039d8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039db:	01 d0                	add    %edx,%eax
c10039dd:	8b 00                	mov    (%eax),%eax
c10039df:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c10039e5:	31 d0                	xor    %edx,%eax
c10039e7:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10039ec:	85 c0                	test   %eax,%eax
c10039ee:	75 35                	jne    c1003a25 <copy_thread+0x103>
c10039f0:	8b 45 08             	mov    0x8(%ebp),%eax
c10039f3:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10039f8:	89 c1                	mov    %eax,%ecx
c10039fa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10039fd:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003a04:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003a07:	01 d0                	add    %edx,%eax
c1003a09:	8b 00                	mov    (%eax),%eax
c1003a0b:	25 ff 0f 00 00       	and    $0xfff,%eax
c1003a10:	89 c2                	mov    %eax,%edx
c1003a12:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003a15:	8d 1c 85 00 00 00 00 	lea    0x0(,%eax,4),%ebx
c1003a1c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003a1f:	01 d8                	add    %ebx,%eax
c1003a21:	09 ca                	or     %ecx,%edx
c1003a23:	89 10                	mov    %edx,(%eax)
c1003a25:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1003a29:	81 7d e4 bf 03 00 00 	cmpl   $0x3bf,-0x1c(%ebp)
c1003a30:	76 9c                	jbe    c10039ce <copy_thread+0xac>
c1003a32:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a35:	8b 40 38             	mov    0x38(%eax),%eax
c1003a38:	8b 40 44             	mov    0x44(%eax),%eax
c1003a3b:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003a41:	29 d0                	sub    %edx,%eax
c1003a43:	89 c1                	mov    %eax,%ecx
c1003a45:	8b 55 08             	mov    0x8(%ebp),%edx
c1003a48:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a4b:	8b 40 38             	mov    0x38(%eax),%eax
c1003a4e:	01 ca                	add    %ecx,%edx
c1003a50:	89 50 44             	mov    %edx,0x44(%eax)
c1003a53:	ba 05 39 00 c1       	mov    $0xc1003905,%edx
c1003a58:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a5b:	89 50 3c             	mov    %edx,0x3c(%eax)
c1003a5e:	8b 45 10             	mov    0x10(%ebp),%eax
c1003a61:	8b 50 10             	mov    0x10(%eax),%edx
c1003a64:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a67:	89 50 44             	mov    %edx,0x44(%eax)
c1003a6a:	8b 45 10             	mov    0x10(%ebp),%eax
c1003a6d:	8b 50 14             	mov    0x14(%eax),%edx
c1003a70:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a73:	89 50 4c             	mov    %edx,0x4c(%eax)
c1003a76:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a79:	8b 40 38             	mov    0x38(%eax),%eax
c1003a7c:	8b 50 44             	mov    0x44(%eax),%edx
c1003a7f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a82:	89 50 40             	mov    %edx,0x40(%eax)
c1003a85:	90                   	nop
c1003a86:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003a89:	5b                   	pop    %ebx
c1003a8a:	5e                   	pop    %esi
c1003a8b:	5f                   	pop    %edi
c1003a8c:	5d                   	pop    %ebp
c1003a8d:	c3                   	ret    

c1003a8e <update_inode_open_cnts>:
c1003a8e:	55                   	push   %ebp
c1003a8f:	89 e5                	mov    %esp,%ebp
c1003a91:	83 ec 18             	sub    $0x18,%esp
c1003a94:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
c1003a9b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1003aa2:	e9 92 00 00 00       	jmp    c1003b39 <update_inode_open_cnts+0xab>
c1003aa7:	8b 45 08             	mov    0x8(%ebp),%eax
c1003aaa:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003aad:	83 c2 1c             	add    $0x1c,%edx
c1003ab0:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c1003ab4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003ab7:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1003abb:	7e 19                	jle    c1003ad6 <update_inode_open_cnts+0x48>
c1003abd:	68 b7 b6 00 c1       	push   $0xc100b6b7
c1003ac2:	68 60 b8 00 c1       	push   $0xc100b860
c1003ac7:	68 5f 01 00 00       	push   $0x15f
c1003acc:	68 d4 b6 00 c1       	push   $0xc100b6d4
c1003ad1:	e8 95 c8 ff ff       	call   c100036b <__PANIC>
c1003ad6:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1003ada:	74 59                	je     c1003b35 <update_inode_open_cnts+0xa7>
c1003adc:	83 ec 0c             	sub    $0xc,%esp
c1003adf:	ff 75 f4             	pushl  -0xc(%ebp)
c1003ae2:	e8 06 71 00 00       	call   c100abed <is_pipe>
c1003ae7:	83 c4 10             	add    $0x10,%esp
c1003aea:	85 c0                	test   %eax,%eax
c1003aec:	74 2b                	je     c1003b19 <update_inode_open_cnts+0x8b>
c1003aee:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003af1:	89 d0                	mov    %edx,%eax
c1003af3:	01 c0                	add    %eax,%eax
c1003af5:	01 d0                	add    %edx,%eax
c1003af7:	c1 e0 02             	shl    $0x2,%eax
c1003afa:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1003aff:	8b 00                	mov    (%eax),%eax
c1003b01:	8d 48 01             	lea    0x1(%eax),%ecx
c1003b04:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003b07:	89 d0                	mov    %edx,%eax
c1003b09:	01 c0                	add    %eax,%eax
c1003b0b:	01 d0                	add    %edx,%eax
c1003b0d:	c1 e0 02             	shl    $0x2,%eax
c1003b10:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1003b15:	89 08                	mov    %ecx,(%eax)
c1003b17:	eb 1c                	jmp    c1003b35 <update_inode_open_cnts+0xa7>
c1003b19:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003b1c:	89 d0                	mov    %edx,%eax
c1003b1e:	01 c0                	add    %eax,%eax
c1003b20:	01 d0                	add    %edx,%eax
c1003b22:	c1 e0 02             	shl    $0x2,%eax
c1003b25:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1003b2a:	8b 00                	mov    (%eax),%eax
c1003b2c:	8b 50 08             	mov    0x8(%eax),%edx
c1003b2f:	83 c2 01             	add    $0x1,%edx
c1003b32:	89 50 08             	mov    %edx,0x8(%eax)
c1003b35:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003b39:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1003b3d:	0f 8e 64 ff ff ff    	jle    c1003aa7 <update_inode_open_cnts+0x19>
c1003b43:	90                   	nop
c1003b44:	90                   	nop
c1003b45:	c9                   	leave  
c1003b46:	c3                   	ret    

c1003b47 <do_fork>:
c1003b47:	55                   	push   %ebp
c1003b48:	89 e5                	mov    %esp,%ebp
c1003b4a:	83 ec 18             	sub    $0x18,%esp
c1003b4d:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c1003b52:	3d 00 80 00 00       	cmp    $0x8000,%eax
c1003b57:	76 0a                	jbe    c1003b63 <do_fork+0x1c>
c1003b59:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003b5e:	e9 7a 01 00 00       	jmp    c1003cdd <do_fork+0x196>
c1003b63:	83 ec 0c             	sub    $0xc,%esp
c1003b66:	6a 00                	push   $0x0
c1003b68:	e8 a1 fc ff ff       	call   c100380e <alloc_task>
c1003b6d:	83 c4 10             	add    $0x10,%esp
c1003b70:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003b73:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1003b77:	75 0a                	jne    c1003b83 <do_fork+0x3c>
c1003b79:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003b7e:	e9 5a 01 00 00       	jmp    c1003cdd <do_fork+0x196>
c1003b83:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003b89:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003b8c:	89 50 34             	mov    %edx,0x34(%eax)
c1003b8f:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003b94:	8b 50 0c             	mov    0xc(%eax),%edx
c1003b97:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003b9a:	89 50 10             	mov    %edx,0x10(%eax)
c1003b9d:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003ba2:	8b 00                	mov    (%eax),%eax
c1003ba4:	85 c0                	test   %eax,%eax
c1003ba6:	74 19                	je     c1003bc1 <do_fork+0x7a>
c1003ba8:	68 05 b7 00 c1       	push   $0xc100b705
c1003bad:	68 78 b8 00 c1       	push   $0xc100b878
c1003bb2:	68 80 01 00 00       	push   $0x180
c1003bb7:	68 d4 b6 00 c1       	push   $0xc100b6d4
c1003bbc:	e8 aa c7 ff ff       	call   c100036b <__PANIC>
c1003bc1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003bc4:	8d 90 00 20 00 00    	lea    0x2000(%eax),%edx
c1003bca:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003bcd:	89 50 28             	mov    %edx,0x28(%eax)
c1003bd0:	83 ec 0c             	sub    $0xc,%esp
c1003bd3:	ff 75 f0             	pushl  -0x10(%ebp)
c1003bd6:	e8 09 05 00 00       	call   c10040e4 <copy_user_cr3>
c1003bdb:	83 c4 10             	add    $0x10,%esp
c1003bde:	83 ec 04             	sub    $0x4,%esp
c1003be1:	ff 75 10             	pushl  0x10(%ebp)
c1003be4:	ff 75 0c             	pushl  0xc(%ebp)
c1003be7:	ff 75 f0             	pushl  -0x10(%ebp)
c1003bea:	e8 33 fd ff ff       	call   c1003922 <copy_thread>
c1003bef:	83 c4 10             	add    $0x10,%esp
c1003bf2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003bf9:	eb 20                	jmp    c1003c1b <do_fork+0xd4>
c1003bfb:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003c00:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003c03:	83 c2 1c             	add    $0x1c,%edx
c1003c06:	8b 54 90 04          	mov    0x4(%eax,%edx,4),%edx
c1003c0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c0d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c1003c10:	83 c1 1c             	add    $0x1c,%ecx
c1003c13:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
c1003c17:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003c1b:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1003c1f:	7e da                	jle    c1003bfb <do_fork+0xb4>
c1003c21:	83 ec 0c             	sub    $0xc,%esp
c1003c24:	ff 75 f0             	pushl  -0x10(%ebp)
c1003c27:	e8 62 fe ff ff       	call   c1003a8e <update_inode_open_cnts>
c1003c2c:	83 c4 10             	add    $0x10,%esp
c1003c2f:	e8 f7 f8 ff ff       	call   c100352b <alloc_pid>
c1003c34:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003c37:	89 42 0c             	mov    %eax,0xc(%edx)
c1003c3a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c3d:	8b 40 0c             	mov    0xc(%eax),%eax
c1003c40:	85 c0                	test   %eax,%eax
c1003c42:	79 0a                	jns    c1003c4e <do_fork+0x107>
c1003c44:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003c49:	e9 8f 00 00 00       	jmp    c1003cdd <do_fork+0x196>
c1003c4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c51:	83 c0 5c             	add    $0x5c,%eax
c1003c54:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003c57:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003c5a:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003c5d:	89 50 04             	mov    %edx,0x4(%eax)
c1003c60:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003c63:	8b 50 04             	mov    0x4(%eax),%edx
c1003c66:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003c69:	89 10                	mov    %edx,(%eax)
c1003c6b:	90                   	nop
c1003c6c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c6f:	83 c0 5c             	add    $0x5c,%eax
c1003c72:	83 ec 0c             	sub    $0xc,%esp
c1003c75:	50                   	push   %eax
c1003c76:	e8 94 f9 ff ff       	call   c100360f <add_link>
c1003c7b:	83 c4 10             	add    $0x10,%esp
c1003c7e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c81:	83 c0 64             	add    $0x64,%eax
c1003c84:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003c87:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003c8a:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003c8d:	89 50 04             	mov    %edx,0x4(%eax)
c1003c90:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003c93:	8b 50 04             	mov    0x4(%eax),%edx
c1003c96:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003c99:	89 10                	mov    %edx,(%eax)
c1003c9b:	90                   	nop
c1003c9c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c9f:	83 c0 64             	add    $0x64,%eax
c1003ca2:	83 ec 0c             	sub    $0xc,%esp
c1003ca5:	50                   	push   %eax
c1003ca6:	e8 b4 f9 ff ff       	call   c100365f <add_all_link>
c1003cab:	83 c4 10             	add    $0x10,%esp
c1003cae:	83 ec 0c             	sub    $0xc,%esp
c1003cb1:	ff 75 f0             	pushl  -0x10(%ebp)
c1003cb4:	e8 29 fa ff ff       	call   c10036e2 <add_pid_hash>
c1003cb9:	83 c4 10             	add    $0x10,%esp
c1003cbc:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c1003cc1:	83 c0 01             	add    $0x1,%eax
c1003cc4:	a3 94 1c 01 c1       	mov    %eax,0xc1011c94
c1003cc9:	83 ec 0c             	sub    $0xc,%esp
c1003ccc:	ff 75 f0             	pushl  -0x10(%ebp)
c1003ccf:	e8 0b 00 00 00       	call   c1003cdf <wakeup_task>
c1003cd4:	83 c4 10             	add    $0x10,%esp
c1003cd7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003cda:	8b 40 0c             	mov    0xc(%eax),%eax
c1003cdd:	c9                   	leave  
c1003cde:	c3                   	ret    

c1003cdf <wakeup_task>:
c1003cdf:	55                   	push   %ebp
c1003ce0:	89 e5                	mov    %esp,%ebp
c1003ce2:	8b 45 08             	mov    0x8(%ebp),%eax
c1003ce5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003ceb:	90                   	nop
c1003cec:	5d                   	pop    %ebp
c1003ced:	c3                   	ret    

c1003cee <kernel_thread>:
c1003cee:	55                   	push   %ebp
c1003cef:	89 e5                	mov    %esp,%ebp
c1003cf1:	83 ec 58             	sub    $0x58,%esp
c1003cf4:	83 ec 04             	sub    $0x4,%esp
c1003cf7:	6a 4c                	push   $0x4c
c1003cf9:	6a 00                	push   $0x0
c1003cfb:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003cfe:	50                   	push   %eax
c1003cff:	e8 a6 c3 ff ff       	call   c10000aa <memset>
c1003d04:	83 c4 10             	add    $0x10,%esp
c1003d07:	66 c7 45 e8 08 00    	movw   $0x8,-0x18(%ebp)
c1003d0d:	66 c7 45 f4 10 00    	movw   $0x10,-0xc(%ebp)
c1003d13:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1003d17:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
c1003d1b:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
c1003d1f:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
c1003d23:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d26:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1003d29:	8b 45 0c             	mov    0xc(%ebp),%eax
c1003d2c:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1003d2f:	b8 b1 4a 00 c1       	mov    $0xc1004ab1,%eax
c1003d34:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003d37:	83 ec 04             	sub    $0x4,%esp
c1003d3a:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003d3d:	50                   	push   %eax
c1003d3e:	6a 00                	push   $0x0
c1003d40:	ff 75 10             	pushl  0x10(%ebp)
c1003d43:	e8 ff fd ff ff       	call   c1003b47 <do_fork>
c1003d48:	83 c4 10             	add    $0x10,%esp
c1003d4b:	c9                   	leave  
c1003d4c:	c3                   	ret    

c1003d4d <task_run>:
c1003d4d:	55                   	push   %ebp
c1003d4e:	89 e5                	mov    %esp,%ebp
c1003d50:	83 ec 18             	sub    $0x18,%esp
c1003d53:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003d58:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003d5b:	74 63                	je     c1003dc0 <task_run+0x73>
c1003d5d:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003d62:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003d65:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d68:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c1003d6d:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003d72:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003d75:	75 07                	jne    c1003d7e <task_run+0x31>
c1003d77:	e8 f0 cf ff ff       	call   c1000d6c <intr_enable>
c1003d7c:	eb 05                	jmp    c1003d83 <task_run+0x36>
c1003d7e:	e8 08 d0 ff ff       	call   c1000d8b <intr_disable>
c1003d83:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d86:	8b 40 28             	mov    0x28(%eax),%eax
c1003d89:	83 ec 0c             	sub    $0xc,%esp
c1003d8c:	50                   	push   %eax
c1003d8d:	e8 1f cc ff ff       	call   c10009b1 <set_ts_esp0>
c1003d92:	83 c4 10             	add    $0x10,%esp
c1003d95:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d98:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d9b:	83 ec 0c             	sub    $0xc,%esp
c1003d9e:	50                   	push   %eax
c1003d9f:	e8 b2 c4 ff ff       	call   c1000256 <lcr3>
c1003da4:	83 c4 10             	add    $0x10,%esp
c1003da7:	8b 45 08             	mov    0x8(%ebp),%eax
c1003daa:	8d 50 3c             	lea    0x3c(%eax),%edx
c1003dad:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003db0:	83 c0 3c             	add    $0x3c,%eax
c1003db3:	83 ec 08             	sub    $0x8,%esp
c1003db6:	52                   	push   %edx
c1003db7:	50                   	push   %eax
c1003db8:	e8 f9 0c 00 00       	call   c1004ab6 <switch_to>
c1003dbd:	83 c4 10             	add    $0x10,%esp
c1003dc0:	90                   	nop
c1003dc1:	c9                   	leave  
c1003dc2:	c3                   	ret    

c1003dc3 <schedule>:
c1003dc3:	55                   	push   %ebp
c1003dc4:	89 e5                	mov    %esp,%ebp
c1003dc6:	83 ec 18             	sub    $0x18,%esp
c1003dc9:	c7 45 ec 84 1c 01 c1 	movl   $0xc1011c84,-0x14(%ebp)
c1003dd0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003dd3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003dd6:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003ddb:	8b 00                	mov    (%eax),%eax
c1003ddd:	85 c0                	test   %eax,%eax
c1003ddf:	75 0c                	jne    c1003ded <schedule+0x2a>
c1003de1:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003de6:	8b 40 04             	mov    0x4(%eax),%eax
c1003de9:	85 c0                	test   %eax,%eax
c1003deb:	74 0b                	je     c1003df8 <schedule+0x35>
c1003ded:	0f b6 05 b4 1c 01 c1 	movzbl 0xc1011cb4,%eax
c1003df4:	3c 01                	cmp    $0x1,%al
c1003df6:	75 48                	jne    c1003e40 <schedule+0x7d>
c1003df8:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003dfd:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003e04:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003e09:	83 c0 5c             	add    $0x5c,%eax
c1003e0c:	50                   	push   %eax
c1003e0d:	e8 fd f7 ff ff       	call   c100360f <add_link>
c1003e12:	83 c4 04             	add    $0x4,%esp
c1003e15:	eb 29                	jmp    c1003e40 <schedule+0x7d>
c1003e17:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003e1a:	83 e8 5c             	sub    $0x5c,%eax
c1003e1d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003e20:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003e23:	8b 00                	mov    (%eax),%eax
c1003e25:	85 c0                	test   %eax,%eax
c1003e27:	75 17                	jne    c1003e40 <schedule+0x7d>
c1003e29:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003e2c:	8b 40 04             	mov    0x4(%eax),%eax
c1003e2f:	85 c0                	test   %eax,%eax
c1003e31:	74 0d                	je     c1003e40 <schedule+0x7d>
c1003e33:	ff 75 f4             	pushl  -0xc(%ebp)
c1003e36:	e8 74 f8 ff ff       	call   c10036af <remove_link>
c1003e3b:	83 c4 04             	add    $0x4,%esp
c1003e3e:	eb 17                	jmp    c1003e57 <schedule+0x94>
c1003e40:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003e43:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003e46:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003e49:	8b 40 04             	mov    0x4(%eax),%eax
c1003e4c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003e4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003e52:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1003e55:	75 c0                	jne    c1003e17 <schedule+0x54>
c1003e57:	83 ec 0c             	sub    $0xc,%esp
c1003e5a:	ff 75 f0             	pushl  -0x10(%ebp)
c1003e5d:	e8 eb fe ff ff       	call   c1003d4d <task_run>
c1003e62:	83 c4 10             	add    $0x10,%esp
c1003e65:	90                   	nop
c1003e66:	c9                   	leave  
c1003e67:	c3                   	ret    

c1003e68 <thread_block>:
c1003e68:	55                   	push   %ebp
c1003e69:	89 e5                	mov    %esp,%ebp
c1003e6b:	83 ec 18             	sub    $0x18,%esp
c1003e6e:	e8 38 cf ff ff       	call   c1000dab <intr_save>
c1003e73:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003e76:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003e7b:	8b 55 08             	mov    0x8(%ebp),%edx
c1003e7e:	89 10                	mov    %edx,(%eax)
c1003e80:	e8 3e ff ff ff       	call   c1003dc3 <schedule>
c1003e85:	83 ec 0c             	sub    $0xc,%esp
c1003e88:	ff 75 f4             	pushl  -0xc(%ebp)
c1003e8b:	e8 2e cf ff ff       	call   c1000dbe <intr_restore>
c1003e90:	83 c4 10             	add    $0x10,%esp
c1003e93:	90                   	nop
c1003e94:	c9                   	leave  
c1003e95:	c3                   	ret    

c1003e96 <thread_unblock>:
c1003e96:	55                   	push   %ebp
c1003e97:	89 e5                	mov    %esp,%ebp
c1003e99:	83 ec 18             	sub    $0x18,%esp
c1003e9c:	c7 45 f0 84 1c 01 c1 	movl   $0xc1011c84,-0x10(%ebp)
c1003ea3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003ea6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003ea9:	e8 fd ce ff ff       	call   c1000dab <intr_save>
c1003eae:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003eb1:	8b 45 08             	mov    0x8(%ebp),%eax
c1003eb4:	8b 00                	mov    (%eax),%eax
c1003eb6:	83 f8 01             	cmp    $0x1,%eax
c1003eb9:	74 19                	je     c1003ed4 <thread_unblock+0x3e>
c1003ebb:	68 17 b7 00 c1       	push   $0xc100b717
c1003ec0:	68 80 b8 00 c1       	push   $0xc100b880
c1003ec5:	68 fc 01 00 00       	push   $0x1fc
c1003eca:	68 d4 b6 00 c1       	push   $0xc100b6d4
c1003ecf:	e8 97 c4 ff ff       	call   c100036b <__PANIC>
c1003ed4:	8b 45 08             	mov    0x8(%ebp),%eax
c1003ed7:	8b 00                	mov    (%eax),%eax
c1003ed9:	85 c0                	test   %eax,%eax
c1003edb:	74 58                	je     c1003f35 <thread_unblock+0x9f>
c1003edd:	eb 24                	jmp    c1003f03 <thread_unblock+0x6d>
c1003edf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003ee2:	83 e8 5c             	sub    $0x5c,%eax
c1003ee5:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003ee8:	75 19                	jne    c1003f03 <thread_unblock+0x6d>
c1003eea:	68 30 b7 00 c1       	push   $0xc100b730
c1003eef:	68 80 b8 00 c1       	push   $0xc100b880
c1003ef4:	68 01 02 00 00       	push   $0x201
c1003ef9:	68 d4 b6 00 c1       	push   $0xc100b6d4
c1003efe:	e8 68 c4 ff ff       	call   c100036b <__PANIC>
c1003f03:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003f06:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003f09:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003f0c:	8b 40 04             	mov    0x4(%eax),%eax
c1003f0f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003f12:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003f15:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1003f18:	75 c5                	jne    c1003edf <thread_unblock+0x49>
c1003f1a:	8b 45 08             	mov    0x8(%ebp),%eax
c1003f1d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003f23:	8b 45 08             	mov    0x8(%ebp),%eax
c1003f26:	83 c0 5c             	add    $0x5c,%eax
c1003f29:	83 ec 0c             	sub    $0xc,%esp
c1003f2c:	50                   	push   %eax
c1003f2d:	e8 dd f6 ff ff       	call   c100360f <add_link>
c1003f32:	83 c4 10             	add    $0x10,%esp
c1003f35:	83 ec 0c             	sub    $0xc,%esp
c1003f38:	ff 75 ec             	pushl  -0x14(%ebp)
c1003f3b:	e8 7e ce ff ff       	call   c1000dbe <intr_restore>
c1003f40:	83 c4 10             	add    $0x10,%esp
c1003f43:	90                   	nop
c1003f44:	c9                   	leave  
c1003f45:	c3                   	ret    

c1003f46 <print_taskinfo>:
c1003f46:	55                   	push   %ebp
c1003f47:	89 e5                	mov    %esp,%ebp
c1003f49:	83 ec 08             	sub    $0x8,%esp
c1003f4c:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003f51:	83 ec 0c             	sub    $0xc,%esp
c1003f54:	50                   	push   %eax
c1003f55:	e8 80 f6 ff ff       	call   c10035da <get_task_name>
c1003f5a:	83 c4 10             	add    $0x10,%esp
c1003f5d:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003f63:	8b 52 0c             	mov    0xc(%edx),%edx
c1003f66:	83 ec 04             	sub    $0x4,%esp
c1003f69:	50                   	push   %eax
c1003f6a:	52                   	push   %edx
c1003f6b:	68 64 b7 00 c1       	push   $0xc100b764
c1003f70:	e8 86 18 00 00       	call   c10057fb <printk>
c1003f75:	83 c4 10             	add    $0x10,%esp
c1003f78:	83 ec 08             	sub    $0x8,%esp
c1003f7b:	ff 75 08             	pushl  0x8(%ebp)
c1003f7e:	68 86 b7 00 c1       	push   $0xc100b786
c1003f83:	e8 73 18 00 00       	call   c10057fb <printk>
c1003f88:	83 c4 10             	add    $0x10,%esp
c1003f8b:	83 ec 0c             	sub    $0xc,%esp
c1003f8e:	68 93 b7 00 c1       	push   $0xc100b793
c1003f93:	e8 63 18 00 00       	call   c10057fb <printk>
c1003f98:	83 c4 10             	add    $0x10,%esp
c1003f9b:	b8 00 00 00 00       	mov    $0x0,%eax
c1003fa0:	c9                   	leave  
c1003fa1:	c3                   	ret    

c1003fa2 <do_exit>:
c1003fa2:	55                   	push   %ebp
c1003fa3:	89 e5                	mov    %esp,%ebp
c1003fa5:	83 ec 08             	sub    $0x8,%esp
c1003fa8:	83 ec 0c             	sub    $0xc,%esp
c1003fab:	68 af b7 00 c1       	push   $0xc100b7af
c1003fb0:	e8 46 18 00 00       	call   c10057fb <printk>
c1003fb5:	83 c4 10             	add    $0x10,%esp
c1003fb8:	eb fe                	jmp    c1003fb8 <do_exit+0x16>

c1003fba <do_execve>:
c1003fba:	55                   	push   %ebp
c1003fbb:	89 e5                	mov    %esp,%ebp
c1003fbd:	b8 00 00 00 00       	mov    $0x0,%eax
c1003fc2:	5d                   	pop    %ebp
c1003fc3:	c3                   	ret    

c1003fc4 <kernel_execve>:
c1003fc4:	55                   	push   %ebp
c1003fc5:	89 e5                	mov    %esp,%ebp
c1003fc7:	83 ec 18             	sub    $0x18,%esp
c1003fca:	83 ec 0c             	sub    $0xc,%esp
c1003fcd:	ff 75 08             	pushl  0x8(%ebp)
c1003fd0:	e8 49 c1 ff ff       	call   c100011e <strlen>
c1003fd5:	83 c4 10             	add    $0x10,%esp
c1003fd8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003fdb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003fde:	c9                   	leave  
c1003fdf:	c3                   	ret    

c1003fe0 <user_main>:
c1003fe0:	55                   	push   %ebp
c1003fe1:	89 e5                	mov    %esp,%ebp
c1003fe3:	90                   	nop
c1003fe4:	5d                   	pop    %ebp
c1003fe5:	c3                   	ret    

c1003fe6 <set_user_cr3>:
c1003fe6:	55                   	push   %ebp
c1003fe7:	89 e5                	mov    %esp,%ebp
c1003fe9:	57                   	push   %edi
c1003fea:	56                   	push   %esi
c1003feb:	53                   	push   %ebx
c1003fec:	83 ec 2c             	sub    $0x2c,%esp
c1003fef:	83 ec 08             	sub    $0x8,%esp
c1003ff2:	6a 02                	push   $0x2
c1003ff4:	68 00 10 00 00       	push   $0x1000
c1003ff9:	e8 ba ec ff ff       	call   c1002cb8 <vmm_malloc>
c1003ffe:	83 c4 10             	add    $0x10,%esp
c1004001:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1004004:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004007:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c100400c:	ba 00 10 00 00       	mov    $0x1000,%edx
c1004011:	8b 0b                	mov    (%ebx),%ecx
c1004013:	89 08                	mov    %ecx,(%eax)
c1004015:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1004019:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c100401d:	8d 78 04             	lea    0x4(%eax),%edi
c1004020:	83 e7 fc             	and    $0xfffffffc,%edi
c1004023:	29 f8                	sub    %edi,%eax
c1004025:	29 c3                	sub    %eax,%ebx
c1004027:	01 c2                	add    %eax,%edx
c1004029:	83 e2 fc             	and    $0xfffffffc,%edx
c100402c:	89 d0                	mov    %edx,%eax
c100402e:	c1 e8 02             	shr    $0x2,%eax
c1004031:	89 de                	mov    %ebx,%esi
c1004033:	89 c1                	mov    %eax,%ecx
c1004035:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1004037:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100403a:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100403d:	a1 00 2c 61 c1       	mov    0xc1612c00,%eax
c1004042:	83 ec 08             	sub    $0x8,%esp
c1004045:	50                   	push   %eax
c1004046:	68 bb b7 00 c1       	push   $0xc100b7bb
c100404b:	e8 ab 17 00 00       	call   c10057fb <printk>
c1004050:	83 c4 10             	add    $0x10,%esp
c1004053:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004056:	05 00 0c 00 00       	add    $0xc00,%eax
c100405b:	8b 00                	mov    (%eax),%eax
c100405d:	83 ec 08             	sub    $0x8,%esp
c1004060:	50                   	push   %eax
c1004061:	68 cf b7 00 c1       	push   $0xc100b7cf
c1004066:	e8 90 17 00 00       	call   c10057fb <printk>
c100406b:	83 c4 10             	add    $0x10,%esp
c100406e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004071:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1004074:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004077:	c1 e8 16             	shr    $0x16,%eax
c100407a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004081:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004084:	01 d0                	add    %edx,%eax
c1004086:	8b 00                	mov    (%eax),%eax
c1004088:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100408d:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1004092:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004095:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004098:	c1 e8 0c             	shr    $0xc,%eax
c100409b:	25 ff 03 00 00       	and    $0x3ff,%eax
c10040a0:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10040a7:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10040aa:	01 d0                	add    %edx,%eax
c10040ac:	8b 00                	mov    (%eax),%eax
c10040ae:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10040b3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10040b6:	83 ec 08             	sub    $0x8,%esp
c10040b9:	ff 75 d4             	pushl  -0x2c(%ebp)
c10040bc:	68 df b7 00 c1       	push   $0xc100b7df
c10040c1:	e8 35 17 00 00       	call   c10057fb <printk>
c10040c6:	83 c4 10             	add    $0x10,%esp
c10040c9:	8b 45 08             	mov    0x8(%ebp),%eax
c10040cc:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c10040cf:	89 50 2c             	mov    %edx,0x2c(%eax)
c10040d2:	8b 45 08             	mov    0x8(%ebp),%eax
c10040d5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10040d8:	89 50 30             	mov    %edx,0x30(%eax)
c10040db:	90                   	nop
c10040dc:	8d 65 f4             	lea    -0xc(%ebp),%esp
c10040df:	5b                   	pop    %ebx
c10040e0:	5e                   	pop    %esi
c10040e1:	5f                   	pop    %edi
c10040e2:	5d                   	pop    %ebp
c10040e3:	c3                   	ret    

c10040e4 <copy_user_cr3>:
c10040e4:	55                   	push   %ebp
c10040e5:	89 e5                	mov    %esp,%ebp
c10040e7:	57                   	push   %edi
c10040e8:	56                   	push   %esi
c10040e9:	53                   	push   %ebx
c10040ea:	83 ec 2c             	sub    $0x2c,%esp
c10040ed:	83 ec 08             	sub    $0x8,%esp
c10040f0:	6a 02                	push   $0x2
c10040f2:	68 00 10 00 00       	push   $0x1000
c10040f7:	e8 bc eb ff ff       	call   c1002cb8 <vmm_malloc>
c10040fc:	83 c4 10             	add    $0x10,%esp
c10040ff:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004102:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004105:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c100410a:	ba 00 10 00 00       	mov    $0x1000,%edx
c100410f:	8b 0b                	mov    (%ebx),%ecx
c1004111:	89 08                	mov    %ecx,(%eax)
c1004113:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1004117:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c100411b:	8d 78 04             	lea    0x4(%eax),%edi
c100411e:	83 e7 fc             	and    $0xfffffffc,%edi
c1004121:	29 f8                	sub    %edi,%eax
c1004123:	29 c3                	sub    %eax,%ebx
c1004125:	01 c2                	add    %eax,%edx
c1004127:	83 e2 fc             	and    $0xfffffffc,%edx
c100412a:	89 d0                	mov    %edx,%eax
c100412c:	c1 e8 02             	shr    $0x2,%eax
c100412f:	89 de                	mov    %ebx,%esi
c1004131:	89 c1                	mov    %eax,%ecx
c1004133:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1004135:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100413a:	8b 40 30             	mov    0x30(%eax),%eax
c100413d:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1004140:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004143:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004146:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c100414d:	eb 51                	jmp    c10041a0 <copy_user_cr3+0xbc>
c100414f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004152:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004159:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100415c:	01 d0                	add    %edx,%eax
c100415e:	8b 00                	mov    (%eax),%eax
c1004160:	83 e0 01             	and    $0x1,%eax
c1004163:	85 c0                	test   %eax,%eax
c1004165:	74 13                	je     c100417a <copy_user_cr3+0x96>
c1004167:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100416a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004171:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004174:	01 d0                	add    %edx,%eax
c1004176:	8b 00                	mov    (%eax),%eax
c1004178:	eb 11                	jmp    c100418b <copy_user_cr3+0xa7>
c100417a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100417d:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004184:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004187:	01 d0                	add    %edx,%eax
c1004189:	8b 00                	mov    (%eax),%eax
c100418b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100418e:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1004195:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1004198:	01 ca                	add    %ecx,%edx
c100419a:	89 02                	mov    %eax,(%edx)
c100419c:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c10041a0:	81 7d e4 ff 03 00 00 	cmpl   $0x3ff,-0x1c(%ebp)
c10041a7:	7e a6                	jle    c100414f <copy_user_cr3+0x6b>
c10041a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10041ac:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10041af:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10041b2:	c1 e8 16             	shr    $0x16,%eax
c10041b5:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10041bc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10041bf:	01 d0                	add    %edx,%eax
c10041c1:	8b 00                	mov    (%eax),%eax
c10041c3:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10041c8:	2d 00 00 00 40       	sub    $0x40000000,%eax
c10041cd:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10041d0:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10041d3:	c1 e8 0c             	shr    $0xc,%eax
c10041d6:	25 ff 03 00 00       	and    $0x3ff,%eax
c10041db:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10041e2:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10041e5:	01 d0                	add    %edx,%eax
c10041e7:	8b 00                	mov    (%eax),%eax
c10041e9:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10041ee:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10041f1:	8b 45 08             	mov    0x8(%ebp),%eax
c10041f4:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10041f7:	89 50 30             	mov    %edx,0x30(%eax)
c10041fa:	8b 45 08             	mov    0x8(%ebp),%eax
c10041fd:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1004200:	89 50 2c             	mov    %edx,0x2c(%eax)
c1004203:	90                   	nop
c1004204:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1004207:	5b                   	pop    %ebx
c1004208:	5e                   	pop    %esi
c1004209:	5f                   	pop    %edi
c100420a:	5d                   	pop    %ebp
c100420b:	c3                   	ret    

c100420c <list_traversal>:
c100420c:	55                   	push   %ebp
c100420d:	89 e5                	mov    %esp,%ebp
c100420f:	83 ec 18             	sub    $0x18,%esp
c1004212:	8b 45 08             	mov    0x8(%ebp),%eax
c1004215:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004218:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100421b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100421e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004221:	8b 40 04             	mov    0x4(%eax),%eax
c1004224:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1004227:	75 07                	jne    c1004230 <list_traversal+0x24>
c1004229:	b8 01 00 00 00       	mov    $0x1,%eax
c100422e:	eb 05                	jmp    c1004235 <list_traversal+0x29>
c1004230:	b8 00 00 00 00       	mov    $0x0,%eax
c1004235:	84 c0                	test   %al,%al
c1004237:	74 21                	je     c100425a <list_traversal+0x4e>
c1004239:	b8 00 00 00 00       	mov    $0x0,%eax
c100423e:	eb 36                	jmp    c1004276 <list_traversal+0x6a>
c1004240:	83 ec 08             	sub    $0x8,%esp
c1004243:	ff 75 10             	pushl  0x10(%ebp)
c1004246:	ff 75 f4             	pushl  -0xc(%ebp)
c1004249:	8b 45 0c             	mov    0xc(%ebp),%eax
c100424c:	ff d0                	call   *%eax
c100424e:	83 c4 10             	add    $0x10,%esp
c1004251:	84 c0                	test   %al,%al
c1004253:	74 05                	je     c100425a <list_traversal+0x4e>
c1004255:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004258:	eb 1c                	jmp    c1004276 <list_traversal+0x6a>
c100425a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100425d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004260:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004263:	8b 40 04             	mov    0x4(%eax),%eax
c1004266:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004269:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100426c:	3b 45 08             	cmp    0x8(%ebp),%eax
c100426f:	75 cf                	jne    c1004240 <list_traversal+0x34>
c1004271:	b8 00 00 00 00       	mov    $0x0,%eax
c1004276:	c9                   	leave  
c1004277:	c3                   	ret    

c1004278 <task_exit>:
c1004278:	55                   	push   %ebp
c1004279:	89 e5                	mov    %esp,%ebp
c100427b:	83 ec 48             	sub    $0x48,%esp
c100427e:	c7 45 f0 84 1c 01 c1 	movl   $0xc1011c84,-0x10(%ebp)
c1004285:	c7 45 ec 8c 1c 01 c1 	movl   $0xc1011c8c,-0x14(%ebp)
c100428c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100428f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004292:	e8 14 cb ff ff       	call   c1000dab <intr_save>
c1004297:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100429a:	8b 45 08             	mov    0x8(%ebp),%eax
c100429d:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
c10042a3:	eb 59                	jmp    c10042fe <task_exit+0x86>
c10042a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042a8:	83 e8 5c             	sub    $0x5c,%eax
c10042ab:	39 45 08             	cmp    %eax,0x8(%ebp)
c10042ae:	75 4e                	jne    c10042fe <task_exit+0x86>
c10042b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042b3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10042b6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10042b9:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10042bc:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10042bf:	8b 40 04             	mov    0x4(%eax),%eax
c10042c2:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10042c5:	8b 12                	mov    (%edx),%edx
c10042c7:	89 55 dc             	mov    %edx,-0x24(%ebp)
c10042ca:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10042cd:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10042d0:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10042d3:	89 50 04             	mov    %edx,0x4(%eax)
c10042d6:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10042d9:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10042dc:	89 10                	mov    %edx,(%eax)
c10042de:	90                   	nop
c10042df:	90                   	nop
c10042e0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10042e3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10042e6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10042e9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c10042ec:	89 50 04             	mov    %edx,0x4(%eax)
c10042ef:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10042f2:	8b 50 04             	mov    0x4(%eax),%edx
c10042f5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10042f8:	89 10                	mov    %edx,(%eax)
c10042fa:	90                   	nop
c10042fb:	90                   	nop
c10042fc:	eb 17                	jmp    c1004315 <task_exit+0x9d>
c10042fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004301:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1004304:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1004307:	8b 40 04             	mov    0x4(%eax),%eax
c100430a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100430d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004310:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1004313:	75 90                	jne    c10042a5 <task_exit+0x2d>
c1004315:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004318:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100431b:	eb 59                	jmp    c1004376 <task_exit+0xfe>
c100431d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004320:	83 e8 64             	sub    $0x64,%eax
c1004323:	39 45 08             	cmp    %eax,0x8(%ebp)
c1004326:	75 4e                	jne    c1004376 <task_exit+0xfe>
c1004328:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100432b:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100432e:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1004331:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1004334:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004337:	8b 40 04             	mov    0x4(%eax),%eax
c100433a:	8b 55 c8             	mov    -0x38(%ebp),%edx
c100433d:	8b 12                	mov    (%edx),%edx
c100433f:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c1004342:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1004345:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1004348:	8b 55 c0             	mov    -0x40(%ebp),%edx
c100434b:	89 50 04             	mov    %edx,0x4(%eax)
c100434e:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1004351:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c1004354:	89 10                	mov    %edx,(%eax)
c1004356:	90                   	nop
c1004357:	90                   	nop
c1004358:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100435b:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100435e:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1004361:	8b 55 bc             	mov    -0x44(%ebp),%edx
c1004364:	89 50 04             	mov    %edx,0x4(%eax)
c1004367:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100436a:	8b 50 04             	mov    0x4(%eax),%edx
c100436d:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1004370:	89 10                	mov    %edx,(%eax)
c1004372:	90                   	nop
c1004373:	90                   	nop
c1004374:	eb 17                	jmp    c100438d <task_exit+0x115>
c1004376:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004379:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100437c:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100437f:	8b 40 04             	mov    0x4(%eax),%eax
c1004382:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004385:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004388:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c100438b:	75 90                	jne    c100431d <task_exit+0xa5>
c100438d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004390:	8b 40 0c             	mov    0xc(%eax),%eax
c1004393:	83 ec 0c             	sub    $0xc,%esp
c1004396:	50                   	push   %eax
c1004397:	e8 eb f1 ff ff       	call   c1003587 <free_pid>
c100439c:	83 c4 10             	add    $0x10,%esp
c100439f:	8b 45 08             	mov    0x8(%ebp),%eax
c10043a2:	8b 40 30             	mov    0x30(%eax),%eax
c10043a5:	83 ec 08             	sub    $0x8,%esp
c10043a8:	68 00 10 00 00       	push   $0x1000
c10043ad:	50                   	push   %eax
c10043ae:	e8 2a ea ff ff       	call   c1002ddd <vmm_free>
c10043b3:	83 c4 10             	add    $0x10,%esp
c10043b6:	8b 45 08             	mov    0x8(%ebp),%eax
c10043b9:	05 00 10 00 00       	add    $0x1000,%eax
c10043be:	83 ec 08             	sub    $0x8,%esp
c10043c1:	68 00 10 00 00       	push   $0x1000
c10043c6:	50                   	push   %eax
c10043c7:	e8 11 ea ff ff       	call   c1002ddd <vmm_free>
c10043cc:	83 c4 10             	add    $0x10,%esp
c10043cf:	8b 45 08             	mov    0x8(%ebp),%eax
c10043d2:	83 ec 08             	sub    $0x8,%esp
c10043d5:	68 00 10 00 00       	push   $0x1000
c10043da:	50                   	push   %eax
c10043db:	e8 fd e9 ff ff       	call   c1002ddd <vmm_free>
c10043e0:	83 c4 10             	add    $0x10,%esp
c10043e3:	83 ec 0c             	sub    $0xc,%esp
c10043e6:	ff 75 e8             	pushl  -0x18(%ebp)
c10043e9:	e8 d0 c9 ff ff       	call   c1000dbe <intr_restore>
c10043ee:	83 c4 10             	add    $0x10,%esp
c10043f1:	90                   	nop
c10043f2:	c9                   	leave  
c10043f3:	c3                   	ret    

c10043f4 <pte_ptr>:
c10043f4:	55                   	push   %ebp
c10043f5:	89 e5                	mov    %esp,%ebp
c10043f7:	83 ec 10             	sub    $0x10,%esp
c10043fa:	8b 45 08             	mov    0x8(%ebp),%eax
c10043fd:	c1 e8 0a             	shr    $0xa,%eax
c1004400:	25 00 f0 3f 00       	and    $0x3ff000,%eax
c1004405:	89 c2                	mov    %eax,%edx
c1004407:	8b 45 08             	mov    0x8(%ebp),%eax
c100440a:	c1 e8 0c             	shr    $0xc,%eax
c100440d:	25 ff 03 00 00       	and    $0x3ff,%eax
c1004412:	c1 e0 02             	shl    $0x2,%eax
c1004415:	01 d0                	add    %edx,%eax
c1004417:	2d 00 00 40 00       	sub    $0x400000,%eax
c100441c:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100441f:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004422:	c9                   	leave  
c1004423:	c3                   	ret    

c1004424 <release_prog_resource>:
c1004424:	55                   	push   %ebp
c1004425:	89 e5                	mov    %esp,%ebp
c1004427:	83 ec 18             	sub    $0x18,%esp
c100442a:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c100442e:	e9 d9 00 00 00       	jmp    c100450c <release_prog_resource+0xe8>
c1004433:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
c1004437:	8b 45 08             	mov    0x8(%ebp),%eax
c100443a:	83 c2 1c             	add    $0x1c,%edx
c100443d:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c1004441:	83 f8 ff             	cmp    $0xffffffff,%eax
c1004444:	0f 84 b8 00 00 00    	je     c1004502 <release_prog_resource+0xde>
c100444a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100444e:	83 ec 0c             	sub    $0xc,%esp
c1004451:	50                   	push   %eax
c1004452:	e8 96 67 00 00       	call   c100abed <is_pipe>
c1004457:	83 c4 10             	add    $0x10,%esp
c100445a:	85 c0                	test   %eax,%eax
c100445c:	0f 84 90 00 00 00    	je     c10044f2 <release_prog_resource+0xce>
c1004462:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004466:	83 ec 0c             	sub    $0xc,%esp
c1004469:	50                   	push   %eax
c100446a:	e8 f4 2b 00 00       	call   c1007063 <fd_local2global>
c100446f:	83 c4 10             	add    $0x10,%esp
c1004472:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004475:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004478:	89 d0                	mov    %edx,%eax
c100447a:	01 c0                	add    %eax,%eax
c100447c:	01 d0                	add    %edx,%eax
c100447e:	c1 e0 02             	shl    $0x2,%eax
c1004481:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1004486:	8b 00                	mov    (%eax),%eax
c1004488:	8d 48 ff             	lea    -0x1(%eax),%ecx
c100448b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100448e:	89 d0                	mov    %edx,%eax
c1004490:	01 c0                	add    %eax,%eax
c1004492:	01 d0                	add    %edx,%eax
c1004494:	c1 e0 02             	shl    $0x2,%eax
c1004497:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100449c:	89 08                	mov    %ecx,(%eax)
c100449e:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10044a1:	89 d0                	mov    %edx,%eax
c10044a3:	01 c0                	add    %eax,%eax
c10044a5:	01 d0                	add    %edx,%eax
c10044a7:	c1 e0 02             	shl    $0x2,%eax
c10044aa:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10044af:	8b 00                	mov    (%eax),%eax
c10044b1:	85 c0                	test   %eax,%eax
c10044b3:	75 4d                	jne    c1004502 <release_prog_resource+0xde>
c10044b5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10044b8:	89 d0                	mov    %edx,%eax
c10044ba:	01 c0                	add    %eax,%eax
c10044bc:	01 d0                	add    %edx,%eax
c10044be:	c1 e0 02             	shl    $0x2,%eax
c10044c1:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10044c6:	8b 00                	mov    (%eax),%eax
c10044c8:	83 ec 08             	sub    $0x8,%esp
c10044cb:	68 00 10 00 00       	push   $0x1000
c10044d0:	50                   	push   %eax
c10044d1:	e8 07 e9 ff ff       	call   c1002ddd <vmm_free>
c10044d6:	83 c4 10             	add    $0x10,%esp
c10044d9:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10044dc:	89 d0                	mov    %edx,%eax
c10044de:	01 c0                	add    %eax,%eax
c10044e0:	01 d0                	add    %edx,%eax
c10044e2:	c1 e0 02             	shl    $0x2,%eax
c10044e5:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10044ea:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10044f0:	eb 10                	jmp    c1004502 <release_prog_resource+0xde>
c10044f2:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10044f6:	83 ec 0c             	sub    $0xc,%esp
c10044f9:	50                   	push   %eax
c10044fa:	e8 a6 2b 00 00       	call   c10070a5 <sys_close>
c10044ff:	83 c4 10             	add    $0x10,%esp
c1004502:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004506:	83 c0 01             	add    $0x1,%eax
c1004509:	88 45 f7             	mov    %al,-0x9(%ebp)
c100450c:	80 7d f7 1f          	cmpb   $0x1f,-0x9(%ebp)
c1004510:	0f 86 1d ff ff ff    	jbe    c1004433 <release_prog_resource+0xf>
c1004516:	90                   	nop
c1004517:	90                   	nop
c1004518:	c9                   	leave  
c1004519:	c3                   	ret    

c100451a <find_child>:
c100451a:	55                   	push   %ebp
c100451b:	89 e5                	mov    %esp,%ebp
c100451d:	83 ec 10             	sub    $0x10,%esp
c1004520:	8b 45 08             	mov    0x8(%ebp),%eax
c1004523:	83 e8 64             	sub    $0x64,%eax
c1004526:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004529:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100452c:	8b 40 10             	mov    0x10(%eax),%eax
c100452f:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1004532:	75 07                	jne    c100453b <find_child+0x21>
c1004534:	b8 01 00 00 00       	mov    $0x1,%eax
c1004539:	eb 05                	jmp    c1004540 <find_child+0x26>
c100453b:	b8 00 00 00 00       	mov    $0x0,%eax
c1004540:	c9                   	leave  
c1004541:	c3                   	ret    

c1004542 <find_hanging_child>:
c1004542:	55                   	push   %ebp
c1004543:	89 e5                	mov    %esp,%ebp
c1004545:	83 ec 10             	sub    $0x10,%esp
c1004548:	8b 45 08             	mov    0x8(%ebp),%eax
c100454b:	83 e8 64             	sub    $0x64,%eax
c100454e:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004551:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004554:	8b 40 10             	mov    0x10(%eax),%eax
c1004557:	39 45 0c             	cmp    %eax,0xc(%ebp)
c100455a:	75 11                	jne    c100456d <find_hanging_child+0x2b>
c100455c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100455f:	8b 00                	mov    (%eax),%eax
c1004561:	83 f8 02             	cmp    $0x2,%eax
c1004564:	75 07                	jne    c100456d <find_hanging_child+0x2b>
c1004566:	b8 01 00 00 00       	mov    $0x1,%eax
c100456b:	eb 05                	jmp    c1004572 <find_hanging_child+0x30>
c100456d:	b8 00 00 00 00       	mov    $0x0,%eax
c1004572:	c9                   	leave  
c1004573:	c3                   	ret    

c1004574 <task0_adopt_a_child>:
c1004574:	55                   	push   %ebp
c1004575:	89 e5                	mov    %esp,%ebp
c1004577:	83 ec 10             	sub    $0x10,%esp
c100457a:	8b 45 08             	mov    0x8(%ebp),%eax
c100457d:	83 e8 64             	sub    $0x64,%eax
c1004580:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004583:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004586:	8b 40 10             	mov    0x10(%eax),%eax
c1004589:	39 45 0c             	cmp    %eax,0xc(%ebp)
c100458c:	75 0a                	jne    c1004598 <task0_adopt_a_child+0x24>
c100458e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004591:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004598:	b8 00 00 00 00       	mov    $0x0,%eax
c100459d:	c9                   	leave  
c100459e:	c3                   	ret    

c100459f <sys_wait>:
c100459f:	55                   	push   %ebp
c10045a0:	89 e5                	mov    %esp,%ebp
c10045a2:	83 ec 18             	sub    $0x18,%esp
c10045a5:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10045aa:	8b 40 0c             	mov    0xc(%eax),%eax
c10045ad:	83 ec 04             	sub    $0x4,%esp
c10045b0:	50                   	push   %eax
c10045b1:	68 42 45 00 c1       	push   $0xc1004542
c10045b6:	68 8c 1c 01 c1       	push   $0xc1011c8c
c10045bb:	e8 4c fc ff ff       	call   c100420c <list_traversal>
c10045c0:	83 c4 10             	add    $0x10,%esp
c10045c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10045c6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10045ca:	74 37                	je     c1004603 <sys_wait+0x64>
c10045cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10045cf:	83 e8 64             	sub    $0x64,%eax
c10045d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10045d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10045d8:	0f b6 80 fc 00 00 00 	movzbl 0xfc(%eax),%eax
c10045df:	0f be d0             	movsbl %al,%edx
c10045e2:	8b 45 08             	mov    0x8(%ebp),%eax
c10045e5:	89 10                	mov    %edx,(%eax)
c10045e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10045ea:	8b 40 0c             	mov    0xc(%eax),%eax
c10045ed:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10045f0:	83 ec 0c             	sub    $0xc,%esp
c10045f3:	ff 75 f0             	pushl  -0x10(%ebp)
c10045f6:	e8 7d fc ff ff       	call   c1004278 <task_exit>
c10045fb:	83 c4 10             	add    $0x10,%esp
c10045fe:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004601:	eb 40                	jmp    c1004643 <sys_wait+0xa4>
c1004603:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004608:	8b 40 0c             	mov    0xc(%eax),%eax
c100460b:	83 ec 04             	sub    $0x4,%esp
c100460e:	50                   	push   %eax
c100460f:	68 1a 45 00 c1       	push   $0xc100451a
c1004614:	68 8c 1c 01 c1       	push   $0xc1011c8c
c1004619:	e8 ee fb ff ff       	call   c100420c <list_traversal>
c100461e:	83 c4 10             	add    $0x10,%esp
c1004621:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004624:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1004628:	75 07                	jne    c1004631 <sys_wait+0x92>
c100462a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100462f:	eb 12                	jmp    c1004643 <sys_wait+0xa4>
c1004631:	83 ec 0c             	sub    $0xc,%esp
c1004634:	6a 01                	push   $0x1
c1004636:	e8 2d f8 ff ff       	call   c1003e68 <thread_block>
c100463b:	83 c4 10             	add    $0x10,%esp
c100463e:	e9 62 ff ff ff       	jmp    c10045a5 <sys_wait+0x6>
c1004643:	c9                   	leave  
c1004644:	c3                   	ret    

c1004645 <sys_exit>:
c1004645:	55                   	push   %ebp
c1004646:	89 e5                	mov    %esp,%ebp
c1004648:	83 ec 18             	sub    $0x18,%esp
c100464b:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004650:	8b 55 08             	mov    0x8(%ebp),%edx
c1004653:	88 90 fc 00 00 00    	mov    %dl,0xfc(%eax)
c1004659:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100465e:	8b 40 10             	mov    0x10(%eax),%eax
c1004661:	83 f8 ff             	cmp    $0xffffffff,%eax
c1004664:	75 19                	jne    c100467f <sys_exit+0x3a>
c1004666:	68 f0 b7 00 c1       	push   $0xc100b7f0
c100466b:	68 90 b8 00 c1       	push   $0xc100b890
c1004670:	68 3c 03 00 00       	push   $0x33c
c1004675:	68 d4 b6 00 c1       	push   $0xc100b6d4
c100467a:	e8 ec bc ff ff       	call   c100036b <__PANIC>
c100467f:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004684:	8b 40 0c             	mov    0xc(%eax),%eax
c1004687:	83 ec 04             	sub    $0x4,%esp
c100468a:	50                   	push   %eax
c100468b:	68 74 45 00 c1       	push   $0xc1004574
c1004690:	68 8c 1c 01 c1       	push   $0xc1011c8c
c1004695:	e8 72 fb ff ff       	call   c100420c <list_traversal>
c100469a:	83 c4 10             	add    $0x10,%esp
c100469d:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10046a2:	8b 40 10             	mov    0x10(%eax),%eax
c10046a5:	83 ec 0c             	sub    $0xc,%esp
c10046a8:	50                   	push   %eax
c10046a9:	e8 f5 f0 ff ff       	call   c10037a3 <find_task>
c10046ae:	83 c4 10             	add    $0x10,%esp
c10046b1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10046b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10046b7:	8b 00                	mov    (%eax),%eax
c10046b9:	83 f8 01             	cmp    $0x1,%eax
c10046bc:	75 0e                	jne    c10046cc <sys_exit+0x87>
c10046be:	83 ec 0c             	sub    $0xc,%esp
c10046c1:	ff 75 f4             	pushl  -0xc(%ebp)
c10046c4:	e8 cd f7 ff ff       	call   c1003e96 <thread_unblock>
c10046c9:	83 c4 10             	add    $0x10,%esp
c10046cc:	83 ec 0c             	sub    $0xc,%esp
c10046cf:	6a 02                	push   $0x2
c10046d1:	e8 92 f7 ff ff       	call   c1003e68 <thread_block>
c10046d6:	83 c4 10             	add    $0x10,%esp
c10046d9:	90                   	nop
c10046da:	c9                   	leave  
c10046db:	c3                   	ret    

c10046dc <user_task_init>:
c10046dc:	55                   	push   %ebp
c10046dd:	89 e5                	mov    %esp,%ebp
c10046df:	53                   	push   %ebx
c10046e0:	83 ec 14             	sub    $0x14,%esp
c10046e3:	83 ec 0c             	sub    $0xc,%esp
c10046e6:	6a 00                	push   $0x0
c10046e8:	e8 21 f1 ff ff       	call   c100380e <alloc_task>
c10046ed:	83 c4 10             	add    $0x10,%esp
c10046f0:	a3 0c 40 a1 c1       	mov    %eax,0xc1a1400c
c10046f5:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046fa:	85 c0                	test   %eax,%eax
c10046fc:	75 10                	jne    c100470e <user_task_init+0x32>
c10046fe:	83 ec 0c             	sub    $0xc,%esp
c1004701:	68 98 b6 00 c1       	push   $0xc100b698
c1004706:	e8 f0 10 00 00       	call   c10057fb <printk>
c100470b:	83 c4 10             	add    $0x10,%esp
c100470e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004713:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c1004719:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100471e:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1004725:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100472a:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1004731:	8b 1d 0c 40 a1 c1    	mov    0xc1a1400c,%ebx
c1004737:	e8 ef ed ff ff       	call   c100352b <alloc_pid>
c100473c:	89 43 0c             	mov    %eax,0xc(%ebx)
c100473f:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004744:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c100474b:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004750:	83 ec 08             	sub    $0x8,%esp
c1004753:	68 1a b8 00 c1       	push   $0xc100b81a
c1004758:	50                   	push   %eax
c1004759:	e8 47 ee ff ff       	call   c10035a5 <set_task_name>
c100475e:	83 c4 10             	add    $0x10,%esp
c1004761:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004766:	89 c2                	mov    %eax,%edx
c1004768:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100476d:	81 c2 00 20 00 00    	add    $0x2000,%edx
c1004773:	89 50 28             	mov    %edx,0x28(%eax)
c1004776:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100477b:	83 ec 0c             	sub    $0xc,%esp
c100477e:	50                   	push   %eax
c100477f:	e8 62 f8 ff ff       	call   c1003fe6 <set_user_cr3>
c1004784:	83 c4 10             	add    $0x10,%esp
c1004787:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100478c:	8d 90 b4 1f 00 00    	lea    0x1fb4(%eax),%edx
c1004792:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004797:	89 50 38             	mov    %edx,0x38(%eax)
c100479a:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100479f:	8b 40 38             	mov    0x38(%eax),%eax
c10047a2:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c10047a9:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047ae:	8b 40 38             	mov    0x38(%eax),%eax
c10047b1:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c10047b8:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047bd:	8b 40 38             	mov    0x38(%eax),%eax
c10047c0:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c10047c7:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047cc:	8b 40 38             	mov    0x38(%eax),%eax
c10047cf:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c10047d6:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047db:	8b 40 38             	mov    0x38(%eax),%eax
c10047de:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10047e4:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047e9:	8b 40 38             	mov    0x38(%eax),%eax
c10047ec:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c10047f3:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047f8:	8b 40 38             	mov    0x38(%eax),%eax
c10047fb:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1004802:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004807:	8b 40 38             	mov    0x38(%eax),%eax
c100480a:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1004811:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004816:	8b 40 38             	mov    0x38(%eax),%eax
c1004819:	66 c7 40 3c 1b 00    	movw   $0x1b,0x3c(%eax)
c100481f:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004824:	8b 40 38             	mov    0x38(%eax),%eax
c1004827:	66 c7 40 48 23 00    	movw   $0x23,0x48(%eax)
c100482d:	8b 15 0c 40 a1 c1    	mov    0xc1a1400c,%edx
c1004833:	8b 52 38             	mov    0x38(%edx),%edx
c1004836:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c100483a:	66 89 42 24          	mov    %ax,0x24(%edx)
c100483e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004843:	8b 40 38             	mov    0x38(%eax),%eax
c1004846:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c100484a:	66 89 50 28          	mov    %dx,0x28(%eax)
c100484e:	8b 15 0c 40 a1 c1    	mov    0xc1a1400c,%edx
c1004854:	8b 52 38             	mov    0x38(%edx),%edx
c1004857:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c100485b:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c100485f:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004864:	8b 40 38             	mov    0x38(%eax),%eax
c1004867:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c100486d:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004872:	8b 40 38             	mov    0x38(%eax),%eax
c1004875:	8b 55 08             	mov    0x8(%ebp),%edx
c1004878:	89 50 38             	mov    %edx,0x38(%eax)
c100487b:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004880:	8b 40 38             	mov    0x38(%eax),%eax
c1004883:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c100488a:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100488f:	89 c2                	mov    %eax,%edx
c1004891:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004896:	8b 40 38             	mov    0x38(%eax),%eax
c1004899:	81 c2 00 10 00 00    	add    $0x1000,%edx
c100489f:	89 50 44             	mov    %edx,0x44(%eax)
c10048a2:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048a7:	8b 15 e6 0d 00 c1    	mov    0xc1000de6,%edx
c10048ad:	89 50 3c             	mov    %edx,0x3c(%eax)
c10048b0:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048b5:	89 c2                	mov    %eax,%edx
c10048b7:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048bc:	81 c2 00 10 00 00    	add    $0x1000,%edx
c10048c2:	89 50 40             	mov    %edx,0x40(%eax)
c10048c5:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048ca:	8b 50 38             	mov    0x38(%eax),%edx
c10048cd:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048d2:	8b 52 10             	mov    0x10(%edx),%edx
c10048d5:	89 50 44             	mov    %edx,0x44(%eax)
c10048d8:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048dd:	8b 50 38             	mov    0x38(%eax),%edx
c10048e0:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048e5:	8b 52 14             	mov    0x14(%edx),%edx
c10048e8:	89 50 4c             	mov    %edx,0x4c(%eax)
c10048eb:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048f0:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
c10048f7:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048fc:	c7 40 78 01 00 00 00 	movl   $0x1,0x78(%eax)
c1004903:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004908:	c7 40 7c 02 00 00 00 	movl   $0x2,0x7c(%eax)
c100490f:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
c1004916:	eb 17                	jmp    c100492f <user_task_init+0x253>
c1004918:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100491d:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004920:	83 c2 1c             	add    $0x1c,%edx
c1004923:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c100492a:	ff 
c100492b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100492f:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1004933:	7e e3                	jle    c1004918 <user_task_init+0x23c>
c1004935:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100493a:	83 c0 5c             	add    $0x5c,%eax
c100493d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004940:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004943:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1004946:	89 50 04             	mov    %edx,0x4(%eax)
c1004949:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100494c:	8b 50 04             	mov    0x4(%eax),%edx
c100494f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004952:	89 10                	mov    %edx,(%eax)
c1004954:	90                   	nop
c1004955:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100495a:	83 c0 64             	add    $0x64,%eax
c100495d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004960:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004963:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004966:	89 50 04             	mov    %edx,0x4(%eax)
c1004969:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100496c:	8b 50 04             	mov    0x4(%eax),%edx
c100496f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004972:	89 10                	mov    %edx,(%eax)
c1004974:	90                   	nop
c1004975:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100497a:	83 c0 64             	add    $0x64,%eax
c100497d:	83 ec 0c             	sub    $0xc,%esp
c1004980:	50                   	push   %eax
c1004981:	e8 d9 ec ff ff       	call   c100365f <add_all_link>
c1004986:	83 c4 10             	add    $0x10,%esp
c1004989:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100498e:	83 ec 0c             	sub    $0xc,%esp
c1004991:	50                   	push   %eax
c1004992:	e8 4b ed ff ff       	call   c10036e2 <add_pid_hash>
c1004997:	83 c4 10             	add    $0x10,%esp
c100499a:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100499f:	83 ec 0c             	sub    $0xc,%esp
c10049a2:	50                   	push   %eax
c10049a3:	e8 37 f3 ff ff       	call   c1003cdf <wakeup_task>
c10049a8:	83 c4 10             	add    $0x10,%esp
c10049ab:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c10049b0:	83 c0 01             	add    $0x1,%eax
c10049b3:	a3 94 1c 01 c1       	mov    %eax,0xc1011c94
c10049b8:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10049bd:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c10049c2:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10049c7:	8b 40 28             	mov    0x28(%eax),%eax
c10049ca:	83 ec 0c             	sub    $0xc,%esp
c10049cd:	50                   	push   %eax
c10049ce:	e8 de bf ff ff       	call   c10009b1 <set_ts_esp0>
c10049d3:	83 c4 10             	add    $0x10,%esp
c10049d6:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10049db:	8b 40 2c             	mov    0x2c(%eax),%eax
c10049de:	83 ec 0c             	sub    $0xc,%esp
c10049e1:	50                   	push   %eax
c10049e2:	e8 6f b8 ff ff       	call   c1000256 <lcr3>
c10049e7:	83 c4 10             	add    $0x10,%esp
c10049ea:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10049ef:	8b 40 38             	mov    0x38(%eax),%eax
c10049f2:	89 c4                	mov    %eax,%esp
c10049f4:	e9 ed c3 ff ff       	jmp    c1000de6 <__trapret>
c10049f9:	90                   	nop
c10049fa:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10049fd:	c9                   	leave  
c10049fe:	c3                   	ret    

c10049ff <sys_print_task>:
c10049ff:	55                   	push   %ebp
c1004a00:	89 e5                	mov    %esp,%ebp
c1004a02:	83 ec 18             	sub    $0x18,%esp
c1004a05:	c7 45 f0 8c 1c 01 c1 	movl   $0xc1011c8c,-0x10(%ebp)
c1004a0c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004a0f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004a12:	83 ec 0c             	sub    $0xc,%esp
c1004a15:	68 24 b8 00 c1       	push   $0xc100b824
c1004a1a:	e8 dc 0d 00 00       	call   c10057fb <printk>
c1004a1f:	83 c4 10             	add    $0x10,%esp
c1004a22:	eb 6e                	jmp    c1004a92 <sys_print_task+0x93>
c1004a24:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004a27:	83 e8 64             	sub    $0x64,%eax
c1004a2a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004a2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a30:	8d 50 14             	lea    0x14(%eax),%edx
c1004a33:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a36:	8b 40 0c             	mov    0xc(%eax),%eax
c1004a39:	83 ec 04             	sub    $0x4,%esp
c1004a3c:	52                   	push   %edx
c1004a3d:	50                   	push   %eax
c1004a3e:	68 36 b8 00 c1       	push   $0xc100b836
c1004a43:	e8 b3 0d 00 00       	call   c10057fb <printk>
c1004a48:	83 c4 10             	add    $0x10,%esp
c1004a4b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a4e:	8b 00                	mov    (%eax),%eax
c1004a50:	83 f8 ff             	cmp    $0xffffffff,%eax
c1004a53:	75 12                	jne    c1004a67 <sys_print_task+0x68>
c1004a55:	83 ec 0c             	sub    $0xc,%esp
c1004a58:	68 3e b8 00 c1       	push   $0xc100b83e
c1004a5d:	e8 99 0d 00 00       	call   c10057fb <printk>
c1004a62:	83 c4 10             	add    $0x10,%esp
c1004a65:	eb 2b                	jmp    c1004a92 <sys_print_task+0x93>
c1004a67:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a6a:	8b 00                	mov    (%eax),%eax
c1004a6c:	85 c0                	test   %eax,%eax
c1004a6e:	75 12                	jne    c1004a82 <sys_print_task+0x83>
c1004a70:	83 ec 0c             	sub    $0xc,%esp
c1004a73:	68 4a b8 00 c1       	push   $0xc100b84a
c1004a78:	e8 7e 0d 00 00       	call   c10057fb <printk>
c1004a7d:	83 c4 10             	add    $0x10,%esp
c1004a80:	eb 10                	jmp    c1004a92 <sys_print_task+0x93>
c1004a82:	83 ec 0c             	sub    $0xc,%esp
c1004a85:	68 54 b8 00 c1       	push   $0xc100b854
c1004a8a:	e8 6c 0d 00 00       	call   c10057fb <printk>
c1004a8f:	83 c4 10             	add    $0x10,%esp
c1004a92:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004a95:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004a98:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004a9b:	8b 40 04             	mov    0x4(%eax),%eax
c1004a9e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004aa1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004aa4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1004aa7:	0f 85 77 ff ff ff    	jne    c1004a24 <sys_print_task+0x25>
c1004aad:	90                   	nop
c1004aae:	90                   	nop
c1004aaf:	c9                   	leave  
c1004ab0:	c3                   	ret    

c1004ab1 <kernel_thread_entry>:
c1004ab1:	fb                   	sti    
c1004ab2:	52                   	push   %edx
c1004ab3:	ff d3                	call   *%ebx
c1004ab5:	c3                   	ret    

c1004ab6 <switch_to>:
c1004ab6:	8b 44 24 04          	mov    0x4(%esp),%eax
c1004aba:	8f 00                	popl   (%eax)
c1004abc:	89 60 04             	mov    %esp,0x4(%eax)
c1004abf:	89 58 08             	mov    %ebx,0x8(%eax)
c1004ac2:	89 48 0c             	mov    %ecx,0xc(%eax)
c1004ac5:	89 50 10             	mov    %edx,0x10(%eax)
c1004ac8:	89 70 14             	mov    %esi,0x14(%eax)
c1004acb:	89 78 18             	mov    %edi,0x18(%eax)
c1004ace:	89 68 1c             	mov    %ebp,0x1c(%eax)
c1004ad1:	8b 44 24 04          	mov    0x4(%esp),%eax
c1004ad5:	8b 68 1c             	mov    0x1c(%eax),%ebp
c1004ad8:	8b 78 18             	mov    0x18(%eax),%edi
c1004adb:	8b 70 14             	mov    0x14(%eax),%esi
c1004ade:	8b 50 10             	mov    0x10(%eax),%edx
c1004ae1:	8b 48 0c             	mov    0xc(%eax),%ecx
c1004ae4:	8b 58 08             	mov    0x8(%eax),%ebx
c1004ae7:	8b 60 04             	mov    0x4(%eax),%esp
c1004aea:	ff 30                	pushl  (%eax)
c1004aec:	c3                   	ret    

c1004aed <hash32>:
c1004aed:	55                   	push   %ebp
c1004aee:	89 e5                	mov    %esp,%ebp
c1004af0:	83 ec 10             	sub    $0x10,%esp
c1004af3:	8b 45 08             	mov    0x8(%ebp),%eax
c1004af6:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1004afc:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004aff:	b8 20 00 00 00       	mov    $0x20,%eax
c1004b04:	2b 45 0c             	sub    0xc(%ebp),%eax
c1004b07:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1004b0a:	89 c1                	mov    %eax,%ecx
c1004b0c:	d3 ea                	shr    %cl,%edx
c1004b0e:	89 d0                	mov    %edx,%eax
c1004b10:	c9                   	leave  
c1004b11:	c3                   	ret    

c1004b12 <segment_load>:
c1004b12:	55                   	push   %ebp
c1004b13:	89 e5                	mov    %esp,%ebp
c1004b15:	83 ec 18             	sub    $0x18,%esp
c1004b18:	8b 45 14             	mov    0x14(%ebp),%eax
c1004b1b:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1004b20:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004b23:	8b 45 14             	mov    0x14(%ebp),%eax
c1004b26:	25 ff 0f 00 00       	and    $0xfff,%eax
c1004b2b:	ba 00 10 00 00       	mov    $0x1000,%edx
c1004b30:	29 c2                	sub    %eax,%edx
c1004b32:	89 d0                	mov    %edx,%eax
c1004b34:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004b37:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004b3e:	8b 45 10             	mov    0x10(%ebp),%eax
c1004b41:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1004b44:	76 1c                	jbe    c1004b62 <segment_load+0x50>
c1004b46:	8b 45 10             	mov    0x10(%ebp),%eax
c1004b49:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1004b4c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004b4f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004b52:	05 00 10 00 00       	add    $0x1000,%eax
c1004b57:	c1 e8 0c             	shr    $0xc,%eax
c1004b5a:	83 c0 01             	add    $0x1,%eax
c1004b5d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004b60:	eb 07                	jmp    c1004b69 <segment_load+0x57>
c1004b62:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c1004b69:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004b6c:	c1 e0 0c             	shl    $0xc,%eax
c1004b6f:	89 c2                	mov    %eax,%edx
c1004b71:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004b74:	01 d0                	add    %edx,%eax
c1004b76:	83 ec 04             	sub    $0x4,%esp
c1004b79:	68 00 00 00 60       	push   $0x60000000
c1004b7e:	50                   	push   %eax
c1004b7f:	ff 75 f0             	pushl  -0x10(%ebp)
c1004b82:	e8 51 e5 ff ff       	call   c10030d8 <sys_mmap>
c1004b87:	83 c4 10             	add    $0x10,%esp
c1004b8a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004b8d:	83 ec 04             	sub    $0x4,%esp
c1004b90:	6a 01                	push   $0x1
c1004b92:	50                   	push   %eax
c1004b93:	ff 75 08             	pushl  0x8(%ebp)
c1004b96:	e8 bc 28 00 00       	call   c1007457 <sys_lseek>
c1004b9b:	83 c4 10             	add    $0x10,%esp
c1004b9e:	8b 45 14             	mov    0x14(%ebp),%eax
c1004ba1:	83 ec 04             	sub    $0x4,%esp
c1004ba4:	ff 75 10             	pushl  0x10(%ebp)
c1004ba7:	50                   	push   %eax
c1004ba8:	ff 75 08             	pushl  0x8(%ebp)
c1004bab:	e8 50 27 00 00       	call   c1007300 <sys_read>
c1004bb0:	83 c4 10             	add    $0x10,%esp
c1004bb3:	b8 01 00 00 00       	mov    $0x1,%eax
c1004bb8:	c9                   	leave  
c1004bb9:	c3                   	ret    

c1004bba <load>:
c1004bba:	55                   	push   %ebp
c1004bbb:	89 e5                	mov    %esp,%ebp
c1004bbd:	83 ec 78             	sub    $0x78,%esp
c1004bc0:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004bc7:	83 ec 04             	sub    $0x4,%esp
c1004bca:	6a 34                	push   $0x34
c1004bcc:	6a 00                	push   $0x0
c1004bce:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004bd1:	50                   	push   %eax
c1004bd2:	e8 d3 b4 ff ff       	call   c10000aa <memset>
c1004bd7:	83 c4 10             	add    $0x10,%esp
c1004bda:	83 ec 08             	sub    $0x8,%esp
c1004bdd:	6a 00                	push   $0x0
c1004bdf:	ff 75 08             	pushl  0x8(%ebp)
c1004be2:	e8 20 22 00 00       	call   c1006e07 <sys_open>
c1004be7:	83 c4 10             	add    $0x10,%esp
c1004bea:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004bed:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1004bf1:	75 0a                	jne    c1004bfd <load+0x43>
c1004bf3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1004bf8:	e9 48 01 00 00       	jmp    c1004d45 <load+0x18b>
c1004bfd:	83 ec 04             	sub    $0x4,%esp
c1004c00:	6a 34                	push   $0x34
c1004c02:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004c05:	50                   	push   %eax
c1004c06:	ff 75 e8             	pushl  -0x18(%ebp)
c1004c09:	e8 f2 26 00 00       	call   c1007300 <sys_read>
c1004c0e:	83 c4 10             	add    $0x10,%esp
c1004c11:	83 f8 34             	cmp    $0x34,%eax
c1004c14:	74 0c                	je     c1004c22 <load+0x68>
c1004c16:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004c1d:	e9 12 01 00 00       	jmp    c1004d34 <load+0x17a>
c1004c22:	83 ec 04             	sub    $0x4,%esp
c1004c25:	6a 07                	push   $0x7
c1004c27:	68 99 b8 00 c1       	push   $0xc100b899
c1004c2c:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004c2f:	50                   	push   %eax
c1004c30:	e8 2d b6 ff ff       	call   c1000262 <memcmp>
c1004c35:	83 c4 10             	add    $0x10,%esp
c1004c38:	85 c0                	test   %eax,%eax
c1004c3a:	75 30                	jne    c1004c6c <load+0xb2>
c1004c3c:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
c1004c40:	66 83 f8 02          	cmp    $0x2,%ax
c1004c44:	75 26                	jne    c1004c6c <load+0xb2>
c1004c46:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
c1004c4a:	66 83 f8 03          	cmp    $0x3,%ax
c1004c4e:	75 1c                	jne    c1004c6c <load+0xb2>
c1004c50:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1004c53:	83 f8 01             	cmp    $0x1,%eax
c1004c56:	75 14                	jne    c1004c6c <load+0xb2>
c1004c58:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
c1004c5c:	66 3d 00 04          	cmp    $0x400,%ax
c1004c60:	77 0a                	ja     c1004c6c <load+0xb2>
c1004c62:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004c66:	66 83 f8 20          	cmp    $0x20,%ax
c1004c6a:	74 0c                	je     c1004c78 <load+0xbe>
c1004c6c:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004c73:	e9 bc 00 00 00       	jmp    c1004d34 <load+0x17a>
c1004c78:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1004c7b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004c7e:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004c82:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c1004c86:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1004c8d:	e9 8c 00 00 00       	jmp    c1004d1e <load+0x164>
c1004c92:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
c1004c96:	83 ec 04             	sub    $0x4,%esp
c1004c99:	50                   	push   %eax
c1004c9a:	6a 00                	push   $0x0
c1004c9c:	8d 45 90             	lea    -0x70(%ebp),%eax
c1004c9f:	50                   	push   %eax
c1004ca0:	e8 05 b4 ff ff       	call   c10000aa <memset>
c1004ca5:	83 c4 10             	add    $0x10,%esp
c1004ca8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004cab:	83 ec 04             	sub    $0x4,%esp
c1004cae:	6a 01                	push   $0x1
c1004cb0:	50                   	push   %eax
c1004cb1:	ff 75 e8             	pushl  -0x18(%ebp)
c1004cb4:	e8 9e 27 00 00       	call   c1007457 <sys_lseek>
c1004cb9:	83 c4 10             	add    $0x10,%esp
c1004cbc:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
c1004cc0:	83 ec 04             	sub    $0x4,%esp
c1004cc3:	50                   	push   %eax
c1004cc4:	8d 45 90             	lea    -0x70(%ebp),%eax
c1004cc7:	50                   	push   %eax
c1004cc8:	ff 75 e8             	pushl  -0x18(%ebp)
c1004ccb:	e8 30 26 00 00       	call   c1007300 <sys_read>
c1004cd0:	83 c4 10             	add    $0x10,%esp
c1004cd3:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c1004cd7:	39 d0                	cmp    %edx,%eax
c1004cd9:	74 09                	je     c1004ce4 <load+0x12a>
c1004cdb:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004ce2:	eb 50                	jmp    c1004d34 <load+0x17a>
c1004ce4:	8b 45 90             	mov    -0x70(%ebp),%eax
c1004ce7:	83 f8 01             	cmp    $0x1,%eax
c1004cea:	75 24                	jne    c1004d10 <load+0x156>
c1004cec:	8b 4d 98             	mov    -0x68(%ebp),%ecx
c1004cef:	8b 55 a0             	mov    -0x60(%ebp),%edx
c1004cf2:	8b 45 94             	mov    -0x6c(%ebp),%eax
c1004cf5:	51                   	push   %ecx
c1004cf6:	52                   	push   %edx
c1004cf7:	50                   	push   %eax
c1004cf8:	ff 75 e8             	pushl  -0x18(%ebp)
c1004cfb:	e8 12 fe ff ff       	call   c1004b12 <segment_load>
c1004d00:	83 c4 10             	add    $0x10,%esp
c1004d03:	84 c0                	test   %al,%al
c1004d05:	75 09                	jne    c1004d10 <load+0x156>
c1004d07:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004d0e:	eb 24                	jmp    c1004d34 <load+0x17a>
c1004d10:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004d14:	0f b7 c0             	movzwl %ax,%eax
c1004d17:	01 45 f0             	add    %eax,-0x10(%ebp)
c1004d1a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1004d1e:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
c1004d22:	0f b7 c0             	movzwl %ax,%eax
c1004d25:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c1004d28:	0f 82 64 ff ff ff    	jb     c1004c92 <load+0xd8>
c1004d2e:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004d31:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004d34:	83 ec 0c             	sub    $0xc,%esp
c1004d37:	ff 75 e8             	pushl  -0x18(%ebp)
c1004d3a:	e8 66 23 00 00       	call   c10070a5 <sys_close>
c1004d3f:	83 c4 10             	add    $0x10,%esp
c1004d42:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004d45:	c9                   	leave  
c1004d46:	c3                   	ret    

c1004d47 <sys_execv>:
c1004d47:	55                   	push   %ebp
c1004d48:	89 e5                	mov    %esp,%ebp
c1004d4a:	83 ec 18             	sub    $0x18,%esp
c1004d4d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004d54:	eb 04                	jmp    c1004d5a <sys_execv+0x13>
c1004d56:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004d5a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004d5d:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004d64:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004d67:	01 d0                	add    %edx,%eax
c1004d69:	8b 00                	mov    (%eax),%eax
c1004d6b:	85 c0                	test   %eax,%eax
c1004d6d:	75 e7                	jne    c1004d56 <sys_execv+0xf>
c1004d6f:	83 ec 0c             	sub    $0xc,%esp
c1004d72:	ff 75 08             	pushl  0x8(%ebp)
c1004d75:	e8 40 fe ff ff       	call   c1004bba <load>
c1004d7a:	83 c4 10             	add    $0x10,%esp
c1004d7d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004d80:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1004d84:	75 07                	jne    c1004d8d <sys_execv+0x46>
c1004d86:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1004d8b:	eb 6a                	jmp    c1004df7 <sys_execv+0xb0>
c1004d8d:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004d92:	83 c0 14             	add    $0x14,%eax
c1004d95:	83 ec 04             	sub    $0x4,%esp
c1004d98:	6a 14                	push   $0x14
c1004d9a:	ff 75 08             	pushl  0x8(%ebp)
c1004d9d:	50                   	push   %eax
c1004d9e:	e8 65 b3 ff ff       	call   c1000108 <memcpy>
c1004da3:	83 c4 10             	add    $0x10,%esp
c1004da6:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004dab:	c6 40 27 00          	movb   $0x0,0x27(%eax)
c1004daf:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004db4:	05 b4 1f 00 00       	add    $0x1fb4,%eax
c1004db9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004dbc:	8b 55 0c             	mov    0xc(%ebp),%edx
c1004dbf:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004dc2:	89 50 10             	mov    %edx,0x10(%eax)
c1004dc5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004dc8:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004dcb:	89 50 18             	mov    %edx,0x18(%eax)
c1004dce:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004dd1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004dd4:	89 50 38             	mov    %edx,0x38(%eax)
c1004dd7:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004ddc:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c1004de2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004de5:	89 50 44             	mov    %edx,0x44(%eax)
c1004de8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004deb:	89 c4                	mov    %eax,%esp
c1004ded:	e9 f4 bf ff ff       	jmp    c1000de6 <__trapret>
c1004df2:	b8 00 00 00 00       	mov    $0x0,%eax
c1004df7:	c9                   	leave  
c1004df8:	c3                   	ret    

c1004df9 <pic_setmask>:
c1004df9:	55                   	push   %ebp
c1004dfa:	89 e5                	mov    %esp,%ebp
c1004dfc:	83 ec 28             	sub    $0x28,%esp
c1004dff:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e02:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
c1004e06:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004e0a:	66 a3 24 eb 00 c1    	mov    %ax,0xc100eb24
c1004e10:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004e14:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004e17:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004e1b:	66 c1 e8 08          	shr    $0x8,%ax
c1004e1f:	88 45 f6             	mov    %al,-0xa(%ebp)
c1004e22:	0f b6 05 ad 1c 01 c1 	movzbl 0xc1011cad,%eax
c1004e29:	84 c0                	test   %al,%al
c1004e2b:	74 27                	je     c1004e54 <pic_setmask+0x5b>
c1004e2d:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004e31:	83 ec 08             	sub    $0x8,%esp
c1004e34:	50                   	push   %eax
c1004e35:	6a 21                	push   $0x21
c1004e37:	e8 00 b2 ff ff       	call   c100003c <outb>
c1004e3c:	83 c4 10             	add    $0x10,%esp
c1004e3f:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1004e43:	83 ec 08             	sub    $0x8,%esp
c1004e46:	50                   	push   %eax
c1004e47:	68 a1 00 00 00       	push   $0xa1
c1004e4c:	e8 eb b1 ff ff       	call   c100003c <outb>
c1004e51:	83 c4 10             	add    $0x10,%esp
c1004e54:	90                   	nop
c1004e55:	c9                   	leave  
c1004e56:	c3                   	ret    

c1004e57 <pic_enable>:
c1004e57:	55                   	push   %ebp
c1004e58:	89 e5                	mov    %esp,%ebp
c1004e5a:	83 ec 08             	sub    $0x8,%esp
c1004e5d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e60:	ba 01 00 00 00       	mov    $0x1,%edx
c1004e65:	89 c1                	mov    %eax,%ecx
c1004e67:	d3 e2                	shl    %cl,%edx
c1004e69:	89 d0                	mov    %edx,%eax
c1004e6b:	f7 d0                	not    %eax
c1004e6d:	89 c2                	mov    %eax,%edx
c1004e6f:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004e76:	21 d0                	and    %edx,%eax
c1004e78:	0f b7 c0             	movzwl %ax,%eax
c1004e7b:	83 ec 0c             	sub    $0xc,%esp
c1004e7e:	50                   	push   %eax
c1004e7f:	e8 75 ff ff ff       	call   c1004df9 <pic_setmask>
c1004e84:	83 c4 10             	add    $0x10,%esp
c1004e87:	90                   	nop
c1004e88:	c9                   	leave  
c1004e89:	c3                   	ret    

c1004e8a <pic_init>:
c1004e8a:	55                   	push   %ebp
c1004e8b:	89 e5                	mov    %esp,%ebp
c1004e8d:	83 ec 08             	sub    $0x8,%esp
c1004e90:	c6 05 ad 1c 01 c1 01 	movb   $0x1,0xc1011cad
c1004e97:	83 ec 08             	sub    $0x8,%esp
c1004e9a:	68 ff 00 00 00       	push   $0xff
c1004e9f:	6a 21                	push   $0x21
c1004ea1:	e8 96 b1 ff ff       	call   c100003c <outb>
c1004ea6:	83 c4 10             	add    $0x10,%esp
c1004ea9:	83 ec 08             	sub    $0x8,%esp
c1004eac:	68 ff 00 00 00       	push   $0xff
c1004eb1:	68 a1 00 00 00       	push   $0xa1
c1004eb6:	e8 81 b1 ff ff       	call   c100003c <outb>
c1004ebb:	83 c4 10             	add    $0x10,%esp
c1004ebe:	83 ec 08             	sub    $0x8,%esp
c1004ec1:	6a 11                	push   $0x11
c1004ec3:	6a 20                	push   $0x20
c1004ec5:	e8 72 b1 ff ff       	call   c100003c <outb>
c1004eca:	83 c4 10             	add    $0x10,%esp
c1004ecd:	83 ec 08             	sub    $0x8,%esp
c1004ed0:	6a 11                	push   $0x11
c1004ed2:	68 a0 00 00 00       	push   $0xa0
c1004ed7:	e8 60 b1 ff ff       	call   c100003c <outb>
c1004edc:	83 c4 10             	add    $0x10,%esp
c1004edf:	83 ec 08             	sub    $0x8,%esp
c1004ee2:	6a 20                	push   $0x20
c1004ee4:	6a 21                	push   $0x21
c1004ee6:	e8 51 b1 ff ff       	call   c100003c <outb>
c1004eeb:	83 c4 10             	add    $0x10,%esp
c1004eee:	83 ec 08             	sub    $0x8,%esp
c1004ef1:	6a 28                	push   $0x28
c1004ef3:	68 a1 00 00 00       	push   $0xa1
c1004ef8:	e8 3f b1 ff ff       	call   c100003c <outb>
c1004efd:	83 c4 10             	add    $0x10,%esp
c1004f00:	83 ec 08             	sub    $0x8,%esp
c1004f03:	6a 04                	push   $0x4
c1004f05:	6a 21                	push   $0x21
c1004f07:	e8 30 b1 ff ff       	call   c100003c <outb>
c1004f0c:	83 c4 10             	add    $0x10,%esp
c1004f0f:	83 ec 08             	sub    $0x8,%esp
c1004f12:	6a 02                	push   $0x2
c1004f14:	68 a1 00 00 00       	push   $0xa1
c1004f19:	e8 1e b1 ff ff       	call   c100003c <outb>
c1004f1e:	83 c4 10             	add    $0x10,%esp
c1004f21:	83 ec 08             	sub    $0x8,%esp
c1004f24:	6a 03                	push   $0x3
c1004f26:	6a 21                	push   $0x21
c1004f28:	e8 0f b1 ff ff       	call   c100003c <outb>
c1004f2d:	83 c4 10             	add    $0x10,%esp
c1004f30:	83 ec 08             	sub    $0x8,%esp
c1004f33:	6a 03                	push   $0x3
c1004f35:	68 a1 00 00 00       	push   $0xa1
c1004f3a:	e8 fd b0 ff ff       	call   c100003c <outb>
c1004f3f:	83 c4 10             	add    $0x10,%esp
c1004f42:	83 ec 08             	sub    $0x8,%esp
c1004f45:	6a 68                	push   $0x68
c1004f47:	6a 20                	push   $0x20
c1004f49:	e8 ee b0 ff ff       	call   c100003c <outb>
c1004f4e:	83 c4 10             	add    $0x10,%esp
c1004f51:	83 ec 08             	sub    $0x8,%esp
c1004f54:	6a 68                	push   $0x68
c1004f56:	68 a0 00 00 00       	push   $0xa0
c1004f5b:	e8 dc b0 ff ff       	call   c100003c <outb>
c1004f60:	83 c4 10             	add    $0x10,%esp
c1004f63:	83 ec 08             	sub    $0x8,%esp
c1004f66:	6a 0a                	push   $0xa
c1004f68:	6a 20                	push   $0x20
c1004f6a:	e8 cd b0 ff ff       	call   c100003c <outb>
c1004f6f:	83 c4 10             	add    $0x10,%esp
c1004f72:	83 ec 08             	sub    $0x8,%esp
c1004f75:	6a 0a                	push   $0xa
c1004f77:	68 a0 00 00 00       	push   $0xa0
c1004f7c:	e8 bb b0 ff ff       	call   c100003c <outb>
c1004f81:	83 c4 10             	add    $0x10,%esp
c1004f84:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004f8b:	66 83 f8 ff          	cmp    $0xffff,%ax
c1004f8f:	74 16                	je     c1004fa7 <pic_init+0x11d>
c1004f91:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004f98:	0f b7 c0             	movzwl %ax,%eax
c1004f9b:	83 ec 0c             	sub    $0xc,%esp
c1004f9e:	50                   	push   %eax
c1004f9f:	e8 55 fe ff ff       	call   c1004df9 <pic_setmask>
c1004fa4:	83 c4 10             	add    $0x10,%esp
c1004fa7:	90                   	nop
c1004fa8:	c9                   	leave  
c1004fa9:	c3                   	ret    

c1004faa <delay>:
c1004faa:	55                   	push   %ebp
c1004fab:	89 e5                	mov    %esp,%ebp
c1004fad:	83 ec 08             	sub    $0x8,%esp
c1004fb0:	83 ec 0c             	sub    $0xc,%esp
c1004fb3:	68 84 00 00 00       	push   $0x84
c1004fb8:	e8 43 b0 ff ff       	call   c1000000 <inb>
c1004fbd:	83 c4 10             	add    $0x10,%esp
c1004fc0:	83 ec 0c             	sub    $0xc,%esp
c1004fc3:	68 84 00 00 00       	push   $0x84
c1004fc8:	e8 33 b0 ff ff       	call   c1000000 <inb>
c1004fcd:	83 c4 10             	add    $0x10,%esp
c1004fd0:	83 ec 0c             	sub    $0xc,%esp
c1004fd3:	68 84 00 00 00       	push   $0x84
c1004fd8:	e8 23 b0 ff ff       	call   c1000000 <inb>
c1004fdd:	83 c4 10             	add    $0x10,%esp
c1004fe0:	83 ec 0c             	sub    $0xc,%esp
c1004fe3:	68 84 00 00 00       	push   $0x84
c1004fe8:	e8 13 b0 ff ff       	call   c1000000 <inb>
c1004fed:	83 c4 10             	add    $0x10,%esp
c1004ff0:	90                   	nop
c1004ff1:	c9                   	leave  
c1004ff2:	c3                   	ret    

c1004ff3 <serial_init>:
c1004ff3:	55                   	push   %ebp
c1004ff4:	89 e5                	mov    %esp,%ebp
c1004ff6:	83 ec 08             	sub    $0x8,%esp
c1004ff9:	83 ec 08             	sub    $0x8,%esp
c1004ffc:	6a 00                	push   $0x0
c1004ffe:	68 fa 03 00 00       	push   $0x3fa
c1005003:	e8 34 b0 ff ff       	call   c100003c <outb>
c1005008:	83 c4 10             	add    $0x10,%esp
c100500b:	83 ec 08             	sub    $0x8,%esp
c100500e:	68 80 00 00 00       	push   $0x80
c1005013:	68 fb 03 00 00       	push   $0x3fb
c1005018:	e8 1f b0 ff ff       	call   c100003c <outb>
c100501d:	83 c4 10             	add    $0x10,%esp
c1005020:	83 ec 08             	sub    $0x8,%esp
c1005023:	6a 0c                	push   $0xc
c1005025:	68 f8 03 00 00       	push   $0x3f8
c100502a:	e8 0d b0 ff ff       	call   c100003c <outb>
c100502f:	83 c4 10             	add    $0x10,%esp
c1005032:	83 ec 08             	sub    $0x8,%esp
c1005035:	6a 00                	push   $0x0
c1005037:	68 f9 03 00 00       	push   $0x3f9
c100503c:	e8 fb af ff ff       	call   c100003c <outb>
c1005041:	83 c4 10             	add    $0x10,%esp
c1005044:	83 ec 08             	sub    $0x8,%esp
c1005047:	6a 03                	push   $0x3
c1005049:	68 fb 03 00 00       	push   $0x3fb
c100504e:	e8 e9 af ff ff       	call   c100003c <outb>
c1005053:	83 c4 10             	add    $0x10,%esp
c1005056:	83 ec 08             	sub    $0x8,%esp
c1005059:	6a 00                	push   $0x0
c100505b:	68 fc 03 00 00       	push   $0x3fc
c1005060:	e8 d7 af ff ff       	call   c100003c <outb>
c1005065:	83 c4 10             	add    $0x10,%esp
c1005068:	83 ec 08             	sub    $0x8,%esp
c100506b:	6a 01                	push   $0x1
c100506d:	68 f9 03 00 00       	push   $0x3f9
c1005072:	e8 c5 af ff ff       	call   c100003c <outb>
c1005077:	83 c4 10             	add    $0x10,%esp
c100507a:	83 ec 0c             	sub    $0xc,%esp
c100507d:	68 fd 03 00 00       	push   $0x3fd
c1005082:	e8 79 af ff ff       	call   c1000000 <inb>
c1005087:	83 c4 10             	add    $0x10,%esp
c100508a:	3c ff                	cmp    $0xff,%al
c100508c:	0f 95 c0             	setne  %al
c100508f:	a2 ae 1c 01 c1       	mov    %al,0xc1011cae
c1005094:	83 ec 0c             	sub    $0xc,%esp
c1005097:	68 fa 03 00 00       	push   $0x3fa
c100509c:	e8 5f af ff ff       	call   c1000000 <inb>
c10050a1:	83 c4 10             	add    $0x10,%esp
c10050a4:	83 ec 0c             	sub    $0xc,%esp
c10050a7:	68 f8 03 00 00       	push   $0x3f8
c10050ac:	e8 4f af ff ff       	call   c1000000 <inb>
c10050b1:	83 c4 10             	add    $0x10,%esp
c10050b4:	0f b6 05 ae 1c 01 c1 	movzbl 0xc1011cae,%eax
c10050bb:	84 c0                	test   %al,%al
c10050bd:	74 1d                	je     c10050dc <serial_init+0xe9>
c10050bf:	83 ec 0c             	sub    $0xc,%esp
c10050c2:	68 a1 b8 00 c1       	push   $0xc100b8a1
c10050c7:	e8 2f 07 00 00       	call   c10057fb <printk>
c10050cc:	83 c4 10             	add    $0x10,%esp
c10050cf:	83 ec 0c             	sub    $0xc,%esp
c10050d2:	6a 04                	push   $0x4
c10050d4:	e8 7e fd ff ff       	call   c1004e57 <pic_enable>
c10050d9:	83 c4 10             	add    $0x10,%esp
c10050dc:	90                   	nop
c10050dd:	c9                   	leave  
c10050de:	c3                   	ret    

c10050df <lpt_putc_sub>:
c10050df:	55                   	push   %ebp
c10050e0:	89 e5                	mov    %esp,%ebp
c10050e2:	83 ec 18             	sub    $0x18,%esp
c10050e5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10050ec:	eb 09                	jmp    c10050f7 <lpt_putc_sub+0x18>
c10050ee:	e8 b7 fe ff ff       	call   c1004faa <delay>
c10050f3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10050f7:	83 ec 0c             	sub    $0xc,%esp
c10050fa:	68 79 03 00 00       	push   $0x379
c10050ff:	e8 fc ae ff ff       	call   c1000000 <inb>
c1005104:	83 c4 10             	add    $0x10,%esp
c1005107:	84 c0                	test   %al,%al
c1005109:	78 09                	js     c1005114 <lpt_putc_sub+0x35>
c100510b:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c1005112:	7e da                	jle    c10050ee <lpt_putc_sub+0xf>
c1005114:	8b 45 08             	mov    0x8(%ebp),%eax
c1005117:	0f b6 c0             	movzbl %al,%eax
c100511a:	83 ec 08             	sub    $0x8,%esp
c100511d:	50                   	push   %eax
c100511e:	68 78 03 00 00       	push   $0x378
c1005123:	e8 14 af ff ff       	call   c100003c <outb>
c1005128:	83 c4 10             	add    $0x10,%esp
c100512b:	83 ec 08             	sub    $0x8,%esp
c100512e:	6a 0d                	push   $0xd
c1005130:	68 7a 03 00 00       	push   $0x37a
c1005135:	e8 02 af ff ff       	call   c100003c <outb>
c100513a:	83 c4 10             	add    $0x10,%esp
c100513d:	83 ec 08             	sub    $0x8,%esp
c1005140:	6a 08                	push   $0x8
c1005142:	68 7a 03 00 00       	push   $0x37a
c1005147:	e8 f0 ae ff ff       	call   c100003c <outb>
c100514c:	83 c4 10             	add    $0x10,%esp
c100514f:	90                   	nop
c1005150:	c9                   	leave  
c1005151:	c3                   	ret    

c1005152 <lpt_putc>:
c1005152:	55                   	push   %ebp
c1005153:	89 e5                	mov    %esp,%ebp
c1005155:	83 ec 08             	sub    $0x8,%esp
c1005158:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c100515c:	74 10                	je     c100516e <lpt_putc+0x1c>
c100515e:	83 ec 0c             	sub    $0xc,%esp
c1005161:	ff 75 08             	pushl  0x8(%ebp)
c1005164:	e8 76 ff ff ff       	call   c10050df <lpt_putc_sub>
c1005169:	83 c4 10             	add    $0x10,%esp
c100516c:	eb 27                	jmp    c1005195 <lpt_putc+0x43>
c100516e:	83 ec 0c             	sub    $0xc,%esp
c1005171:	6a 08                	push   $0x8
c1005173:	e8 67 ff ff ff       	call   c10050df <lpt_putc_sub>
c1005178:	83 c4 10             	add    $0x10,%esp
c100517b:	83 ec 0c             	sub    $0xc,%esp
c100517e:	6a 20                	push   $0x20
c1005180:	e8 5a ff ff ff       	call   c10050df <lpt_putc_sub>
c1005185:	83 c4 10             	add    $0x10,%esp
c1005188:	83 ec 0c             	sub    $0xc,%esp
c100518b:	6a 08                	push   $0x8
c100518d:	e8 4d ff ff ff       	call   c10050df <lpt_putc_sub>
c1005192:	83 c4 10             	add    $0x10,%esp
c1005195:	90                   	nop
c1005196:	c9                   	leave  
c1005197:	c3                   	ret    

c1005198 <cons_intr>:
c1005198:	55                   	push   %ebp
c1005199:	89 e5                	mov    %esp,%ebp
c100519b:	83 ec 18             	sub    $0x18,%esp
c100519e:	eb 3b                	jmp    c10051db <cons_intr+0x43>
c10051a0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10051a4:	74 35                	je     c10051db <cons_intr+0x43>
c10051a6:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c10051ab:	8d 50 01             	lea    0x1(%eax),%edx
c10051ae:	89 15 24 42 a1 c1    	mov    %edx,0xc1a14224
c10051b4:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10051b7:	88 90 20 40 a1 c1    	mov    %dl,-0x3e5ebfe0(%eax)
c10051bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10051c0:	a2 6c fc 00 c1       	mov    %al,0xc100fc6c
c10051c5:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c10051ca:	3d 00 02 00 00       	cmp    $0x200,%eax
c10051cf:	75 0a                	jne    c10051db <cons_intr+0x43>
c10051d1:	c7 05 24 42 a1 c1 00 	movl   $0x0,0xc1a14224
c10051d8:	00 00 00 
c10051db:	8b 45 08             	mov    0x8(%ebp),%eax
c10051de:	ff d0                	call   *%eax
c10051e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10051e3:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c10051e7:	75 b7                	jne    c10051a0 <cons_intr+0x8>
c10051e9:	90                   	nop
c10051ea:	90                   	nop
c10051eb:	c9                   	leave  
c10051ec:	c3                   	ret    

c10051ed <serial_proc_data>:
c10051ed:	55                   	push   %ebp
c10051ee:	89 e5                	mov    %esp,%ebp
c10051f0:	83 ec 18             	sub    $0x18,%esp
c10051f3:	83 ec 0c             	sub    $0xc,%esp
c10051f6:	68 fd 03 00 00       	push   $0x3fd
c10051fb:	e8 00 ae ff ff       	call   c1000000 <inb>
c1005200:	83 c4 10             	add    $0x10,%esp
c1005203:	0f b6 c0             	movzbl %al,%eax
c1005206:	83 e0 01             	and    $0x1,%eax
c1005209:	85 c0                	test   %eax,%eax
c100520b:	75 07                	jne    c1005214 <serial_proc_data+0x27>
c100520d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1005212:	eb 26                	jmp    c100523a <serial_proc_data+0x4d>
c1005214:	83 ec 0c             	sub    $0xc,%esp
c1005217:	68 f8 03 00 00       	push   $0x3f8
c100521c:	e8 df ad ff ff       	call   c1000000 <inb>
c1005221:	83 c4 10             	add    $0x10,%esp
c1005224:	0f b6 c0             	movzbl %al,%eax
c1005227:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100522a:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
c100522e:	75 07                	jne    c1005237 <serial_proc_data+0x4a>
c1005230:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
c1005237:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100523a:	c9                   	leave  
c100523b:	c3                   	ret    

c100523c <serial_intr>:
c100523c:	55                   	push   %ebp
c100523d:	89 e5                	mov    %esp,%ebp
c100523f:	83 ec 08             	sub    $0x8,%esp
c1005242:	0f b6 05 ae 1c 01 c1 	movzbl 0xc1011cae,%eax
c1005249:	84 c0                	test   %al,%al
c100524b:	74 10                	je     c100525d <serial_intr+0x21>
c100524d:	83 ec 0c             	sub    $0xc,%esp
c1005250:	68 ed 51 00 c1       	push   $0xc10051ed
c1005255:	e8 3e ff ff ff       	call   c1005198 <cons_intr>
c100525a:	83 c4 10             	add    $0x10,%esp
c100525d:	90                   	nop
c100525e:	c9                   	leave  
c100525f:	c3                   	ret    

c1005260 <serial_putc_sub>:
c1005260:	55                   	push   %ebp
c1005261:	89 e5                	mov    %esp,%ebp
c1005263:	83 ec 18             	sub    $0x18,%esp
c1005266:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100526d:	eb 09                	jmp    c1005278 <serial_putc_sub+0x18>
c100526f:	e8 36 fd ff ff       	call   c1004faa <delay>
c1005274:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1005278:	83 ec 0c             	sub    $0xc,%esp
c100527b:	68 fd 03 00 00       	push   $0x3fd
c1005280:	e8 7b ad ff ff       	call   c1000000 <inb>
c1005285:	83 c4 10             	add    $0x10,%esp
c1005288:	0f b6 c0             	movzbl %al,%eax
c100528b:	83 e0 20             	and    $0x20,%eax
c100528e:	85 c0                	test   %eax,%eax
c1005290:	75 09                	jne    c100529b <serial_putc_sub+0x3b>
c1005292:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c1005299:	7e d4                	jle    c100526f <serial_putc_sub+0xf>
c100529b:	8b 45 08             	mov    0x8(%ebp),%eax
c100529e:	0f b6 c0             	movzbl %al,%eax
c10052a1:	83 ec 08             	sub    $0x8,%esp
c10052a4:	50                   	push   %eax
c10052a5:	68 f8 03 00 00       	push   $0x3f8
c10052aa:	e8 8d ad ff ff       	call   c100003c <outb>
c10052af:	83 c4 10             	add    $0x10,%esp
c10052b2:	90                   	nop
c10052b3:	c9                   	leave  
c10052b4:	c3                   	ret    

c10052b5 <serial_putc>:
c10052b5:	55                   	push   %ebp
c10052b6:	89 e5                	mov    %esp,%ebp
c10052b8:	83 ec 08             	sub    $0x8,%esp
c10052bb:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c10052bf:	74 10                	je     c10052d1 <serial_putc+0x1c>
c10052c1:	83 ec 0c             	sub    $0xc,%esp
c10052c4:	ff 75 08             	pushl  0x8(%ebp)
c10052c7:	e8 94 ff ff ff       	call   c1005260 <serial_putc_sub>
c10052cc:	83 c4 10             	add    $0x10,%esp
c10052cf:	eb 27                	jmp    c10052f8 <serial_putc+0x43>
c10052d1:	83 ec 0c             	sub    $0xc,%esp
c10052d4:	6a 08                	push   $0x8
c10052d6:	e8 85 ff ff ff       	call   c1005260 <serial_putc_sub>
c10052db:	83 c4 10             	add    $0x10,%esp
c10052de:	83 ec 0c             	sub    $0xc,%esp
c10052e1:	6a 20                	push   $0x20
c10052e3:	e8 78 ff ff ff       	call   c1005260 <serial_putc_sub>
c10052e8:	83 c4 10             	add    $0x10,%esp
c10052eb:	83 ec 0c             	sub    $0xc,%esp
c10052ee:	6a 08                	push   $0x8
c10052f0:	e8 6b ff ff ff       	call   c1005260 <serial_putc_sub>
c10052f5:	83 c4 10             	add    $0x10,%esp
c10052f8:	90                   	nop
c10052f9:	c9                   	leave  
c10052fa:	c3                   	ret    

c10052fb <timer_init>:
c10052fb:	55                   	push   %ebp
c10052fc:	89 e5                	mov    %esp,%ebp
c10052fe:	83 ec 18             	sub    $0x18,%esp
c1005301:	b8 dc 34 12 00       	mov    $0x1234dc,%eax
c1005306:	ba 00 00 00 00       	mov    $0x0,%edx
c100530b:	f7 75 08             	divl   0x8(%ebp)
c100530e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005311:	83 ec 08             	sub    $0x8,%esp
c1005314:	6a 36                	push   $0x36
c1005316:	6a 43                	push   $0x43
c1005318:	e8 1f ad ff ff       	call   c100003c <outb>
c100531d:	83 c4 10             	add    $0x10,%esp
c1005320:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005323:	88 45 f3             	mov    %al,-0xd(%ebp)
c1005326:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005329:	c1 e8 08             	shr    $0x8,%eax
c100532c:	88 45 f2             	mov    %al,-0xe(%ebp)
c100532f:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1005333:	83 ec 08             	sub    $0x8,%esp
c1005336:	50                   	push   %eax
c1005337:	6a 40                	push   $0x40
c1005339:	e8 fe ac ff ff       	call   c100003c <outb>
c100533e:	83 c4 10             	add    $0x10,%esp
c1005341:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
c1005345:	83 ec 08             	sub    $0x8,%esp
c1005348:	50                   	push   %eax
c1005349:	6a 40                	push   $0x40
c100534b:	e8 ec ac ff ff       	call   c100003c <outb>
c1005350:	83 c4 10             	add    $0x10,%esp
c1005353:	c7 05 2c 42 a1 c1 00 	movl   $0x0,0xc1a1422c
c100535a:	00 00 00 
c100535d:	c7 05 28 42 a1 c1 00 	movl   $0x0,0xc1a14228
c1005364:	00 00 00 
c1005367:	83 ec 0c             	sub    $0xc,%esp
c100536a:	6a 00                	push   $0x0
c100536c:	e8 e6 fa ff ff       	call   c1004e57 <pic_enable>
c1005371:	83 c4 10             	add    $0x10,%esp
c1005374:	90                   	nop
c1005375:	c9                   	leave  
c1005376:	c3                   	ret    

c1005377 <print_cursor>:
c1005377:	55                   	push   %ebp
c1005378:	89 e5                	mov    %esp,%ebp
c100537a:	83 ec 28             	sub    $0x28,%esp
c100537d:	8b 55 08             	mov    0x8(%ebp),%edx
c1005380:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005383:	88 55 e4             	mov    %dl,-0x1c(%ebp)
c1005386:	88 45 e0             	mov    %al,-0x20(%ebp)
c1005389:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
c100538d:	89 d0                	mov    %edx,%eax
c100538f:	c1 e0 02             	shl    $0x2,%eax
c1005392:	01 d0                	add    %edx,%eax
c1005394:	c1 e0 04             	shl    $0x4,%eax
c1005397:	89 c2                	mov    %eax,%edx
c1005399:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c100539d:	01 d0                	add    %edx,%eax
c100539f:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10053a3:	83 ec 08             	sub    $0x8,%esp
c10053a6:	6a 0e                	push   $0xe
c10053a8:	68 d4 03 00 00       	push   $0x3d4
c10053ad:	e8 8a ac ff ff       	call   c100003c <outb>
c10053b2:	83 c4 10             	add    $0x10,%esp
c10053b5:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10053b9:	66 c1 e8 08          	shr    $0x8,%ax
c10053bd:	0f b6 c0             	movzbl %al,%eax
c10053c0:	83 ec 08             	sub    $0x8,%esp
c10053c3:	50                   	push   %eax
c10053c4:	68 d5 03 00 00       	push   $0x3d5
c10053c9:	e8 6e ac ff ff       	call   c100003c <outb>
c10053ce:	83 c4 10             	add    $0x10,%esp
c10053d1:	83 ec 08             	sub    $0x8,%esp
c10053d4:	6a 0f                	push   $0xf
c10053d6:	68 d4 03 00 00       	push   $0x3d4
c10053db:	e8 5c ac ff ff       	call   c100003c <outb>
c10053e0:	83 c4 10             	add    $0x10,%esp
c10053e3:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10053e7:	0f b6 c0             	movzbl %al,%eax
c10053ea:	83 ec 08             	sub    $0x8,%esp
c10053ed:	50                   	push   %eax
c10053ee:	68 d5 03 00 00       	push   $0x3d5
c10053f3:	e8 44 ac ff ff       	call   c100003c <outb>
c10053f8:	83 c4 10             	add    $0x10,%esp
c10053fb:	90                   	nop
c10053fc:	c9                   	leave  
c10053fd:	c3                   	ret    

c10053fe <clear>:
c10053fe:	55                   	push   %ebp
c10053ff:	89 e5                	mov    %esp,%ebp
c1005401:	83 ec 18             	sub    $0x18,%esp
c1005404:	66 c7 45 f4 00 0f    	movw   $0xf00,-0xc(%ebp)
c100540a:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c100540e:	83 c8 20             	or     $0x20,%eax
c1005411:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1005415:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c100541b:	eb 1f                	jmp    c100543c <clear+0x3e>
c100541d:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c1005422:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
c1005426:	01 d2                	add    %edx,%edx
c1005428:	01 c2                	add    %eax,%edx
c100542a:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c100542e:	66 89 02             	mov    %ax,(%edx)
c1005431:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1005435:	83 c0 01             	add    $0x1,%eax
c1005438:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c100543c:	66 81 7d f6 cf 07    	cmpw   $0x7cf,-0xa(%ebp)
c1005442:	76 d9                	jbe    c100541d <clear+0x1f>
c1005444:	c6 05 af 1c 01 c1 00 	movb   $0x0,0xc1011caf
c100544b:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c1005452:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005459:	0f b6 d0             	movzbl %al,%edx
c100545c:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005463:	0f b6 c0             	movzbl %al,%eax
c1005466:	83 ec 08             	sub    $0x8,%esp
c1005469:	52                   	push   %edx
c100546a:	50                   	push   %eax
c100546b:	e8 07 ff ff ff       	call   c1005377 <print_cursor>
c1005470:	83 c4 10             	add    $0x10,%esp
c1005473:	90                   	nop
c1005474:	c9                   	leave  
c1005475:	c3                   	ret    

c1005476 <print_char>:
c1005476:	55                   	push   %ebp
c1005477:	89 e5                	mov    %esp,%ebp
c1005479:	83 ec 28             	sub    $0x28,%esp
c100547c:	8b 45 08             	mov    0x8(%ebp),%eax
c100547f:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1005482:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1005488:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c100548e:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005495:	3c 18                	cmp    $0x18,%al
c1005497:	76 05                	jbe    c100549e <print_char+0x28>
c1005499:	e8 60 ff ff ff       	call   c10053fe <clear>
c100549e:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c10054a5:	0f b6 d0             	movzbl %al,%edx
c10054a8:	89 d0                	mov    %edx,%eax
c10054aa:	c1 e0 02             	shl    $0x2,%eax
c10054ad:	01 d0                	add    %edx,%eax
c10054af:	c1 e0 04             	shl    $0x4,%eax
c10054b2:	89 c2                	mov    %eax,%edx
c10054b4:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10054bb:	0f b6 c0             	movzbl %al,%eax
c10054be:	01 d0                	add    %edx,%eax
c10054c0:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c10054c4:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
c10054c8:	83 f8 09             	cmp    $0x9,%eax
c10054cb:	74 20                	je     c10054ed <print_char+0x77>
c10054cd:	83 f8 0a             	cmp    $0xa,%eax
c10054d0:	75 2f                	jne    c1005501 <print_char+0x8b>
c10054d2:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c10054d9:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c10054e0:	83 c0 01             	add    $0x1,%eax
c10054e3:	a2 af 1c 01 c1       	mov    %al,0xc1011caf
c10054e8:	e9 82 00 00 00       	jmp    c100556f <print_char+0xf9>
c10054ed:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10054f4:	83 c0 08             	add    $0x8,%eax
c10054f7:	83 e0 f8             	and    $0xfffffff8,%eax
c10054fa:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c10054ff:	eb 6e                	jmp    c100556f <print_char+0xf9>
c1005501:	66 0f be 45 e4       	movsbw -0x1c(%ebp),%ax
c1005506:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
c100550a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100550d:	c1 e0 04             	shl    $0x4,%eax
c1005510:	0f b6 c0             	movzbl %al,%eax
c1005513:	8b 55 10             	mov    0x10(%ebp),%edx
c1005516:	83 e2 0f             	and    $0xf,%edx
c1005519:	09 d0                	or     %edx,%eax
c100551b:	c1 e0 08             	shl    $0x8,%eax
c100551e:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c1005522:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1005526:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c100552a:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c100552f:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c1005533:	01 d2                	add    %edx,%edx
c1005535:	01 c2                	add    %eax,%edx
c1005537:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c100553b:	66 89 02             	mov    %ax,(%edx)
c100553e:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005545:	83 c0 01             	add    $0x1,%eax
c1005548:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c100554d:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005554:	3c 4f                	cmp    $0x4f,%al
c1005556:	76 16                	jbe    c100556e <print_char+0xf8>
c1005558:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c100555f:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005566:	83 c0 01             	add    $0x1,%eax
c1005569:	a2 af 1c 01 c1       	mov    %al,0xc1011caf
c100556e:	90                   	nop
c100556f:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005576:	0f b6 d0             	movzbl %al,%edx
c1005579:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005580:	0f b6 c0             	movzbl %al,%eax
c1005583:	83 ec 08             	sub    $0x8,%esp
c1005586:	52                   	push   %edx
c1005587:	50                   	push   %eax
c1005588:	e8 ea fd ff ff       	call   c1005377 <print_cursor>
c100558d:	83 c4 10             	add    $0x10,%esp
c1005590:	90                   	nop
c1005591:	c9                   	leave  
c1005592:	c3                   	ret    

c1005593 <print_string>:
c1005593:	55                   	push   %ebp
c1005594:	89 e5                	mov    %esp,%ebp
c1005596:	83 ec 08             	sub    $0x8,%esp
c1005599:	eb 21                	jmp    c10055bc <print_string+0x29>
c100559b:	8b 45 08             	mov    0x8(%ebp),%eax
c100559e:	8d 50 01             	lea    0x1(%eax),%edx
c10055a1:	89 55 08             	mov    %edx,0x8(%ebp)
c10055a4:	0f b6 00             	movzbl (%eax),%eax
c10055a7:	0f be c0             	movsbl %al,%eax
c10055aa:	83 ec 04             	sub    $0x4,%esp
c10055ad:	ff 75 10             	pushl  0x10(%ebp)
c10055b0:	ff 75 0c             	pushl  0xc(%ebp)
c10055b3:	50                   	push   %eax
c10055b4:	e8 bd fe ff ff       	call   c1005476 <print_char>
c10055b9:	83 c4 10             	add    $0x10,%esp
c10055bc:	8b 45 08             	mov    0x8(%ebp),%eax
c10055bf:	0f b6 00             	movzbl (%eax),%eax
c10055c2:	84 c0                	test   %al,%al
c10055c4:	75 d5                	jne    c100559b <print_string+0x8>
c10055c6:	90                   	nop
c10055c7:	90                   	nop
c10055c8:	c9                   	leave  
c10055c9:	c3                   	ret    

c10055ca <print_num>:
c10055ca:	55                   	push   %ebp
c10055cb:	89 e5                	mov    %esp,%ebp
c10055cd:	83 ec 48             	sub    $0x48,%esp
c10055d0:	8b 4d 18             	mov    0x18(%ebp),%ecx
c10055d3:	8b 55 1c             	mov    0x1c(%ebp),%edx
c10055d6:	8b 45 08             	mov    0x8(%ebp),%eax
c10055d9:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10055dc:	8b 45 0c             	mov    0xc(%ebp),%eax
c10055df:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c10055e2:	89 c8                	mov    %ecx,%eax
c10055e4:	88 45 bc             	mov    %al,-0x44(%ebp)
c10055e7:	89 d0                	mov    %edx,%eax
c10055e9:	88 45 b8             	mov    %al,-0x48(%ebp)
c10055ec:	0f be 45 b8          	movsbl -0x48(%ebp),%eax
c10055f0:	c6 44 05 c8 00       	movb   $0x0,-0x38(%ebp,%eax,1)
c10055f5:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
c10055f9:	83 e8 01             	sub    $0x1,%eax
c10055fc:	88 45 f7             	mov    %al,-0x9(%ebp)
c10055ff:	e9 c0 00 00 00       	jmp    c10056c4 <print_num+0xfa>
c1005604:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
c1005608:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100560b:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100560e:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c1005611:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005614:	89 55 ec             	mov    %edx,-0x14(%ebp)
c1005617:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100561a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100561d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1005621:	74 1c                	je     c100563f <print_num+0x75>
c1005623:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1005626:	ba 00 00 00 00       	mov    $0x0,%edx
c100562b:	f7 75 e4             	divl   -0x1c(%ebp)
c100562e:	89 55 f0             	mov    %edx,-0x10(%ebp)
c1005631:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1005634:	ba 00 00 00 00       	mov    $0x0,%edx
c1005639:	f7 75 e4             	divl   -0x1c(%ebp)
c100563c:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100563f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005642:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005645:	f7 75 e4             	divl   -0x1c(%ebp)
c1005648:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100564b:	89 55 dc             	mov    %edx,-0x24(%ebp)
c100564e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005651:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1005654:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1005657:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c100565a:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100565d:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005661:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1005665:	80 7d bc 0a          	cmpb   $0xa,-0x44(%ebp)
c1005669:	75 16                	jne    c1005681 <print_num+0xb7>
c100566b:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100566f:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005674:	8d 50 30             	lea    0x30(%eax),%edx
c1005677:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100567b:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c100567f:	eb 39                	jmp    c10056ba <print_num+0xf0>
c1005681:	80 7d bc 10          	cmpb   $0x10,-0x44(%ebp)
c1005685:	75 33                	jne    c10056ba <print_num+0xf0>
c1005687:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100568b:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005690:	3c 09                	cmp    $0x9,%al
c1005692:	7e 10                	jle    c10056a4 <print_num+0xda>
c1005694:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005698:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100569d:	83 c0 37             	add    $0x37,%eax
c10056a0:	89 c2                	mov    %eax,%edx
c10056a2:	eb 0e                	jmp    c10056b2 <print_num+0xe8>
c10056a4:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10056a8:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c10056ad:	83 c0 30             	add    $0x30,%eax
c10056b0:	89 c2                	mov    %eax,%edx
c10056b2:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10056b6:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c10056ba:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10056be:	83 e8 01             	sub    $0x1,%eax
c10056c1:	88 45 f7             	mov    %al,-0x9(%ebp)
c10056c4:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
c10056c8:	0f 89 36 ff ff ff    	jns    c1005604 <print_num+0x3a>
c10056ce:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
c10056d2:	75 5e                	jne    c1005732 <print_num+0x168>
c10056d4:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c10056db:	90                   	nop
c10056dc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10056df:	8d 50 01             	lea    0x1(%eax),%edx
c10056e2:	89 55 e8             	mov    %edx,-0x18(%ebp)
c10056e5:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c10056ea:	3c 30                	cmp    $0x30,%al
c10056ec:	74 ee                	je     c10056dc <print_num+0x112>
c10056ee:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c10056f2:	8d 55 c8             	lea    -0x38(%ebp),%edx
c10056f5:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10056f8:	01 d0                	add    %edx,%eax
c10056fa:	0f b6 00             	movzbl (%eax),%eax
c10056fd:	84 c0                	test   %al,%al
c10056ff:	74 1c                	je     c100571d <print_num+0x153>
c1005701:	8d 55 c8             	lea    -0x38(%ebp),%edx
c1005704:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005707:	01 d0                	add    %edx,%eax
c1005709:	83 ec 04             	sub    $0x4,%esp
c100570c:	ff 75 14             	pushl  0x14(%ebp)
c100570f:	ff 75 10             	pushl  0x10(%ebp)
c1005712:	50                   	push   %eax
c1005713:	e8 7b fe ff ff       	call   c1005593 <print_string>
c1005718:	83 c4 10             	add    $0x10,%esp
c100571b:	eb 2a                	jmp    c1005747 <print_num+0x17d>
c100571d:	83 ec 04             	sub    $0x4,%esp
c1005720:	ff 75 14             	pushl  0x14(%ebp)
c1005723:	ff 75 10             	pushl  0x10(%ebp)
c1005726:	6a 30                	push   $0x30
c1005728:	e8 49 fd ff ff       	call   c1005476 <print_char>
c100572d:	83 c4 10             	add    $0x10,%esp
c1005730:	eb 15                	jmp    c1005747 <print_num+0x17d>
c1005732:	83 ec 04             	sub    $0x4,%esp
c1005735:	ff 75 14             	pushl  0x14(%ebp)
c1005738:	ff 75 10             	pushl  0x10(%ebp)
c100573b:	8d 45 c8             	lea    -0x38(%ebp),%eax
c100573e:	50                   	push   %eax
c100573f:	e8 4f fe ff ff       	call   c1005593 <print_string>
c1005744:	83 c4 10             	add    $0x10,%esp
c1005747:	c9                   	leave  
c1005748:	c3                   	ret    

c1005749 <backtrace>:
c1005749:	55                   	push   %ebp
c100574a:	89 e5                	mov    %esp,%ebp
c100574c:	83 ec 18             	sub    $0x18,%esp
c100574f:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005756:	3c 15                	cmp    $0x15,%al
c1005758:	0f 86 9a 00 00 00    	jbe    c10057f8 <backtrace+0xaf>
c100575e:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005765:	83 e8 01             	sub    $0x1,%eax
c1005768:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c100576d:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1005773:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c1005779:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005780:	3c 18                	cmp    $0x18,%al
c1005782:	76 05                	jbe    c1005789 <backtrace+0x40>
c1005784:	e8 75 fc ff ff       	call   c10053fe <clear>
c1005789:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005790:	0f b6 d0             	movzbl %al,%edx
c1005793:	89 d0                	mov    %edx,%eax
c1005795:	c1 e0 02             	shl    $0x2,%eax
c1005798:	01 d0                	add    %edx,%eax
c100579a:	c1 e0 04             	shl    $0x4,%eax
c100579d:	89 c2                	mov    %eax,%edx
c100579f:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10057a6:	0f b6 c0             	movzbl %al,%eax
c10057a9:	01 d0                	add    %edx,%eax
c10057ab:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c10057af:	66 c7 45 f4 20 00    	movw   $0x20,-0xc(%ebp)
c10057b5:	66 c7 45 f6 00 02    	movw   $0x200,-0xa(%ebp)
c10057bb:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10057bf:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c10057c3:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c10057c8:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c10057cc:	01 d2                	add    %edx,%edx
c10057ce:	01 c2                	add    %eax,%edx
c10057d0:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10057d4:	66 89 02             	mov    %ax,(%edx)
c10057d7:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10057de:	0f b6 d0             	movzbl %al,%edx
c10057e1:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c10057e8:	0f b6 c0             	movzbl %al,%eax
c10057eb:	83 ec 08             	sub    $0x8,%esp
c10057ee:	52                   	push   %edx
c10057ef:	50                   	push   %eax
c10057f0:	e8 82 fb ff ff       	call   c1005377 <print_cursor>
c10057f5:	83 c4 10             	add    $0x10,%esp
c10057f8:	90                   	nop
c10057f9:	c9                   	leave  
c10057fa:	c3                   	ret    

c10057fb <printk>:
c10057fb:	55                   	push   %ebp
c10057fc:	89 e5                	mov    %esp,%ebp
c10057fe:	83 ec 38             	sub    $0x38,%esp
c1005801:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c1005805:	8d 45 0c             	lea    0xc(%ebp),%eax
c1005808:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100580b:	e9 6e 03 00 00       	jmp    c1005b7e <printk+0x383>
c1005810:	8b 45 08             	mov    0x8(%ebp),%eax
c1005813:	0f b6 00             	movzbl (%eax),%eax
c1005816:	3c 25                	cmp    $0x25,%al
c1005818:	0f 85 3a 03 00 00    	jne    c1005b58 <printk+0x35d>
c100581e:	90                   	nop
c100581f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005822:	83 c0 01             	add    $0x1,%eax
c1005825:	89 45 08             	mov    %eax,0x8(%ebp)
c1005828:	8b 45 08             	mov    0x8(%ebp),%eax
c100582b:	0f b6 00             	movzbl (%eax),%eax
c100582e:	0f be c0             	movsbl %al,%eax
c1005831:	83 e8 30             	sub    $0x30,%eax
c1005834:	83 f8 48             	cmp    $0x48,%eax
c1005837:	0f 87 fb 02 00 00    	ja     c1005b38 <printk+0x33d>
c100583d:	8b 04 85 d0 b8 00 c1 	mov    -0x3eff4730(,%eax,4),%eax
c1005844:	ff e0                	jmp    *%eax
c1005846:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c100584a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100584d:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
c1005851:	88 45 d7             	mov    %al,-0x29(%ebp)
c1005854:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
c1005858:	83 ec 04             	sub    $0x4,%esp
c100585b:	6a 02                	push   $0x2
c100585d:	6a 00                	push   $0x0
c100585f:	50                   	push   %eax
c1005860:	e8 11 fc ff ff       	call   c1005476 <print_char>
c1005865:	83 c4 10             	add    $0x10,%esp
c1005868:	e9 e0 02 00 00       	jmp    c1005b4d <printk+0x352>
c100586d:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005871:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005874:	8b 40 fc             	mov    -0x4(%eax),%eax
c1005877:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100587a:	83 ec 04             	sub    $0x4,%esp
c100587d:	6a 02                	push   $0x2
c100587f:	6a 00                	push   $0x0
c1005881:	ff 75 dc             	pushl  -0x24(%ebp)
c1005884:	e8 0a fd ff ff       	call   c1005593 <print_string>
c1005889:	83 c4 10             	add    $0x10,%esp
c100588c:	e9 bc 02 00 00       	jmp    c1005b4d <printk+0x352>
c1005891:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005895:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005898:	8b 40 fc             	mov    -0x4(%eax),%eax
c100589b:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100589e:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10058a2:	74 23                	je     c10058c7 <printk+0xcc>
c10058a4:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10058a8:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10058ab:	99                   	cltd   
c10058ac:	83 ec 04             	sub    $0x4,%esp
c10058af:	6a 01                	push   $0x1
c10058b1:	51                   	push   %ecx
c10058b2:	6a 0a                	push   $0xa
c10058b4:	6a 02                	push   $0x2
c10058b6:	6a 00                	push   $0x0
c10058b8:	52                   	push   %edx
c10058b9:	50                   	push   %eax
c10058ba:	e8 0b fd ff ff       	call   c10055ca <print_num>
c10058bf:	83 c4 20             	add    $0x20,%esp
c10058c2:	e9 86 02 00 00       	jmp    c1005b4d <printk+0x352>
c10058c7:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10058ca:	99                   	cltd   
c10058cb:	83 ec 04             	sub    $0x4,%esp
c10058ce:	6a 00                	push   $0x0
c10058d0:	6a 14                	push   $0x14
c10058d2:	6a 0a                	push   $0xa
c10058d4:	6a 02                	push   $0x2
c10058d6:	6a 00                	push   $0x0
c10058d8:	52                   	push   %edx
c10058d9:	50                   	push   %eax
c10058da:	e8 eb fc ff ff       	call   c10055ca <print_num>
c10058df:	83 c4 20             	add    $0x20,%esp
c10058e2:	e9 66 02 00 00       	jmp    c1005b4d <printk+0x352>
c10058e7:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10058eb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10058ee:	8b 40 fc             	mov    -0x4(%eax),%eax
c10058f1:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10058f4:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10058f8:	74 23                	je     c100591d <printk+0x122>
c10058fa:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10058fe:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005901:	99                   	cltd   
c1005902:	83 ec 04             	sub    $0x4,%esp
c1005905:	6a 01                	push   $0x1
c1005907:	51                   	push   %ecx
c1005908:	6a 10                	push   $0x10
c100590a:	6a 02                	push   $0x2
c100590c:	6a 00                	push   $0x0
c100590e:	52                   	push   %edx
c100590f:	50                   	push   %eax
c1005910:	e8 b5 fc ff ff       	call   c10055ca <print_num>
c1005915:	83 c4 20             	add    $0x20,%esp
c1005918:	e9 30 02 00 00       	jmp    c1005b4d <printk+0x352>
c100591d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005920:	99                   	cltd   
c1005921:	83 ec 04             	sub    $0x4,%esp
c1005924:	6a 00                	push   $0x0
c1005926:	6a 14                	push   $0x14
c1005928:	6a 10                	push   $0x10
c100592a:	6a 02                	push   $0x2
c100592c:	6a 00                	push   $0x0
c100592e:	52                   	push   %edx
c100592f:	50                   	push   %eax
c1005930:	e8 95 fc ff ff       	call   c10055ca <print_num>
c1005935:	83 c4 20             	add    $0x20,%esp
c1005938:	e9 10 02 00 00       	jmp    c1005b4d <printk+0x352>
c100593d:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1005941:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005944:	8b 50 fc             	mov    -0x4(%eax),%edx
c1005947:	8b 40 f8             	mov    -0x8(%eax),%eax
c100594a:	89 45 c8             	mov    %eax,-0x38(%ebp)
c100594d:	89 55 cc             	mov    %edx,-0x34(%ebp)
c1005950:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005954:	74 25                	je     c100597b <printk+0x180>
c1005956:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c100595a:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100595d:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1005960:	83 ec 04             	sub    $0x4,%esp
c1005963:	6a 01                	push   $0x1
c1005965:	51                   	push   %ecx
c1005966:	6a 10                	push   $0x10
c1005968:	6a 02                	push   $0x2
c100596a:	6a 00                	push   $0x0
c100596c:	52                   	push   %edx
c100596d:	50                   	push   %eax
c100596e:	e8 57 fc ff ff       	call   c10055ca <print_num>
c1005973:	83 c4 20             	add    $0x20,%esp
c1005976:	e9 d2 01 00 00       	jmp    c1005b4d <printk+0x352>
c100597b:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100597e:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1005981:	83 ec 04             	sub    $0x4,%esp
c1005984:	6a 00                	push   $0x0
c1005986:	6a 14                	push   $0x14
c1005988:	6a 10                	push   $0x10
c100598a:	6a 02                	push   $0x2
c100598c:	6a 00                	push   $0x0
c100598e:	52                   	push   %edx
c100598f:	50                   	push   %eax
c1005990:	e8 35 fc ff ff       	call   c10055ca <print_num>
c1005995:	83 c4 20             	add    $0x20,%esp
c1005998:	e9 b0 01 00 00       	jmp    c1005b4d <printk+0x352>
c100599d:	8b 45 08             	mov    0x8(%ebp),%eax
c10059a0:	83 c0 01             	add    $0x1,%eax
c10059a3:	89 45 08             	mov    %eax,0x8(%ebp)
c10059a6:	8b 45 08             	mov    0x8(%ebp),%eax
c10059a9:	0f b6 00             	movzbl (%eax),%eax
c10059ac:	0f be c0             	movsbl %al,%eax
c10059af:	83 f8 78             	cmp    $0x78,%eax
c10059b2:	0f 84 9a 00 00 00    	je     c1005a52 <printk+0x257>
c10059b8:	83 f8 78             	cmp    $0x78,%eax
c10059bb:	0f 8f 3f 01 00 00    	jg     c1005b00 <printk+0x305>
c10059c1:	83 f8 6c             	cmp    $0x6c,%eax
c10059c4:	0f 84 e0 00 00 00    	je     c1005aaa <printk+0x2af>
c10059ca:	83 f8 6c             	cmp    $0x6c,%eax
c10059cd:	0f 8f 2d 01 00 00    	jg     c1005b00 <printk+0x305>
c10059d3:	83 f8 64             	cmp    $0x64,%eax
c10059d6:	74 1c                	je     c10059f4 <printk+0x1f9>
c10059d8:	83 f8 64             	cmp    $0x64,%eax
c10059db:	0f 8f 1f 01 00 00    	jg     c1005b00 <printk+0x305>
c10059e1:	83 f8 4c             	cmp    $0x4c,%eax
c10059e4:	0f 84 c0 00 00 00    	je     c1005aaa <printk+0x2af>
c10059ea:	83 f8 58             	cmp    $0x58,%eax
c10059ed:	74 63                	je     c1005a52 <printk+0x257>
c10059ef:	e9 0c 01 00 00       	jmp    c1005b00 <printk+0x305>
c10059f4:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10059f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10059fb:	8b 40 fc             	mov    -0x4(%eax),%eax
c10059fe:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005a01:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005a05:	74 27                	je     c1005a2e <printk+0x233>
c1005a07:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1005a0b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1005a0e:	ba 00 00 00 00       	mov    $0x0,%edx
c1005a13:	83 ec 04             	sub    $0x4,%esp
c1005a16:	6a 01                	push   $0x1
c1005a18:	51                   	push   %ecx
c1005a19:	6a 0a                	push   $0xa
c1005a1b:	6a 02                	push   $0x2
c1005a1d:	6a 00                	push   $0x0
c1005a1f:	52                   	push   %edx
c1005a20:	50                   	push   %eax
c1005a21:	e8 a4 fb ff ff       	call   c10055ca <print_num>
c1005a26:	83 c4 20             	add    $0x20,%esp
c1005a29:	e9 d3 00 00 00       	jmp    c1005b01 <printk+0x306>
c1005a2e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1005a31:	ba 00 00 00 00       	mov    $0x0,%edx
c1005a36:	83 ec 04             	sub    $0x4,%esp
c1005a39:	6a 00                	push   $0x0
c1005a3b:	6a 14                	push   $0x14
c1005a3d:	6a 0a                	push   $0xa
c1005a3f:	6a 02                	push   $0x2
c1005a41:	6a 00                	push   $0x0
c1005a43:	52                   	push   %edx
c1005a44:	50                   	push   %eax
c1005a45:	e8 80 fb ff ff       	call   c10055ca <print_num>
c1005a4a:	83 c4 20             	add    $0x20,%esp
c1005a4d:	e9 af 00 00 00       	jmp    c1005b01 <printk+0x306>
c1005a52:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005a56:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005a59:	8b 40 fc             	mov    -0x4(%eax),%eax
c1005a5c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005a5f:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005a63:	74 24                	je     c1005a89 <printk+0x28e>
c1005a65:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1005a69:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005a6c:	ba 00 00 00 00       	mov    $0x0,%edx
c1005a71:	83 ec 04             	sub    $0x4,%esp
c1005a74:	6a 01                	push   $0x1
c1005a76:	51                   	push   %ecx
c1005a77:	6a 10                	push   $0x10
c1005a79:	6a 02                	push   $0x2
c1005a7b:	6a 00                	push   $0x0
c1005a7d:	52                   	push   %edx
c1005a7e:	50                   	push   %eax
c1005a7f:	e8 46 fb ff ff       	call   c10055ca <print_num>
c1005a84:	83 c4 20             	add    $0x20,%esp
c1005a87:	eb 78                	jmp    c1005b01 <printk+0x306>
c1005a89:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005a8c:	ba 00 00 00 00       	mov    $0x0,%edx
c1005a91:	83 ec 04             	sub    $0x4,%esp
c1005a94:	6a 00                	push   $0x0
c1005a96:	6a 14                	push   $0x14
c1005a98:	6a 10                	push   $0x10
c1005a9a:	6a 02                	push   $0x2
c1005a9c:	6a 00                	push   $0x0
c1005a9e:	52                   	push   %edx
c1005a9f:	50                   	push   %eax
c1005aa0:	e8 25 fb ff ff       	call   c10055ca <print_num>
c1005aa5:	83 c4 20             	add    $0x20,%esp
c1005aa8:	eb 57                	jmp    c1005b01 <printk+0x306>
c1005aaa:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1005aae:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005ab1:	8b 50 fc             	mov    -0x4(%eax),%edx
c1005ab4:	8b 40 f8             	mov    -0x8(%eax),%eax
c1005ab7:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005aba:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1005abd:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005ac1:	74 20                	je     c1005ae3 <printk+0x2e8>
c1005ac3:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c1005ac7:	83 ec 04             	sub    $0x4,%esp
c1005aca:	6a 01                	push   $0x1
c1005acc:	50                   	push   %eax
c1005acd:	6a 10                	push   $0x10
c1005acf:	6a 02                	push   $0x2
c1005ad1:	6a 00                	push   $0x0
c1005ad3:	ff 75 e4             	pushl  -0x1c(%ebp)
c1005ad6:	ff 75 e0             	pushl  -0x20(%ebp)
c1005ad9:	e8 ec fa ff ff       	call   c10055ca <print_num>
c1005ade:	83 c4 20             	add    $0x20,%esp
c1005ae1:	eb 1e                	jmp    c1005b01 <printk+0x306>
c1005ae3:	83 ec 04             	sub    $0x4,%esp
c1005ae6:	6a 00                	push   $0x0
c1005ae8:	6a 14                	push   $0x14
c1005aea:	6a 10                	push   $0x10
c1005aec:	6a 02                	push   $0x2
c1005aee:	6a 00                	push   $0x0
c1005af0:	ff 75 e4             	pushl  -0x1c(%ebp)
c1005af3:	ff 75 e0             	pushl  -0x20(%ebp)
c1005af6:	e8 cf fa ff ff       	call   c10055ca <print_num>
c1005afb:	83 c4 20             	add    $0x20,%esp
c1005afe:	eb 01                	jmp    c1005b01 <printk+0x306>
c1005b00:	90                   	nop
c1005b01:	eb 4a                	jmp    c1005b4d <printk+0x352>
c1005b03:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b06:	0f b6 00             	movzbl (%eax),%eax
c1005b09:	0f be c0             	movsbl %al,%eax
c1005b0c:	83 e8 30             	sub    $0x30,%eax
c1005b0f:	89 c2                	mov    %eax,%edx
c1005b11:	89 d0                	mov    %edx,%eax
c1005b13:	c1 e0 02             	shl    $0x2,%eax
c1005b16:	01 d0                	add    %edx,%eax
c1005b18:	01 c0                	add    %eax,%eax
c1005b1a:	89 c2                	mov    %eax,%edx
c1005b1c:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b1f:	83 c0 01             	add    $0x1,%eax
c1005b22:	89 45 08             	mov    %eax,0x8(%ebp)
c1005b25:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b28:	0f b6 00             	movzbl (%eax),%eax
c1005b2b:	01 d0                	add    %edx,%eax
c1005b2d:	83 e8 30             	sub    $0x30,%eax
c1005b30:	88 45 f3             	mov    %al,-0xd(%ebp)
c1005b33:	e9 e7 fc ff ff       	jmp    c100581f <printk+0x24>
c1005b38:	83 ec 04             	sub    $0x4,%esp
c1005b3b:	6a 02                	push   $0x2
c1005b3d:	6a 00                	push   $0x0
c1005b3f:	68 b0 b8 00 c1       	push   $0xc100b8b0
c1005b44:	e8 4a fa ff ff       	call   c1005593 <print_string>
c1005b49:	83 c4 10             	add    $0x10,%esp
c1005b4c:	90                   	nop
c1005b4d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b50:	83 c0 01             	add    $0x1,%eax
c1005b53:	89 45 08             	mov    %eax,0x8(%ebp)
c1005b56:	eb 22                	jmp    c1005b7a <printk+0x37f>
c1005b58:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b5b:	0f b6 00             	movzbl (%eax),%eax
c1005b5e:	0f be c0             	movsbl %al,%eax
c1005b61:	83 ec 04             	sub    $0x4,%esp
c1005b64:	6a 02                	push   $0x2
c1005b66:	6a 00                	push   $0x0
c1005b68:	50                   	push   %eax
c1005b69:	e8 08 f9 ff ff       	call   c1005476 <print_char>
c1005b6e:	83 c4 10             	add    $0x10,%esp
c1005b71:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b74:	83 c0 01             	add    $0x1,%eax
c1005b77:	89 45 08             	mov    %eax,0x8(%ebp)
c1005b7a:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c1005b7e:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b81:	0f b6 00             	movzbl (%eax),%eax
c1005b84:	84 c0                	test   %al,%al
c1005b86:	0f 85 84 fc ff ff    	jne    c1005810 <printk+0x15>
c1005b8c:	90                   	nop
c1005b8d:	90                   	nop
c1005b8e:	c9                   	leave  
c1005b8f:	c3                   	ret    

c1005b90 <cons_putc>:
c1005b90:	55                   	push   %ebp
c1005b91:	89 e5                	mov    %esp,%ebp
c1005b93:	83 ec 08             	sub    $0x8,%esp
c1005b96:	83 ec 0c             	sub    $0xc,%esp
c1005b99:	ff 75 08             	pushl  0x8(%ebp)
c1005b9c:	e8 b1 f5 ff ff       	call   c1005152 <lpt_putc>
c1005ba1:	83 c4 10             	add    $0x10,%esp
c1005ba4:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1005ba8:	74 13                	je     c1005bbd <cons_putc+0x2d>
c1005baa:	83 ec 08             	sub    $0x8,%esp
c1005bad:	ff 75 08             	pushl  0x8(%ebp)
c1005bb0:	68 f4 b9 00 c1       	push   $0xc100b9f4
c1005bb5:	e8 41 fc ff ff       	call   c10057fb <printk>
c1005bba:	83 c4 10             	add    $0x10,%esp
c1005bbd:	83 ec 0c             	sub    $0xc,%esp
c1005bc0:	ff 75 08             	pushl  0x8(%ebp)
c1005bc3:	e8 ed f6 ff ff       	call   c10052b5 <serial_putc>
c1005bc8:	83 c4 10             	add    $0x10,%esp
c1005bcb:	90                   	nop
c1005bcc:	c9                   	leave  
c1005bcd:	c3                   	ret    

c1005bce <cons_getc>:
c1005bce:	55                   	push   %ebp
c1005bcf:	89 e5                	mov    %esp,%ebp
c1005bd1:	83 ec 18             	sub    $0x18,%esp
c1005bd4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005bdb:	e8 5c f6 ff ff       	call   c100523c <serial_intr>
c1005be0:	e8 e6 c2 ff ff       	call   c1001ecb <kbd_intr>
c1005be5:	8b 15 20 42 a1 c1    	mov    0xc1a14220,%edx
c1005beb:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c1005bf0:	39 c2                	cmp    %eax,%edx
c1005bf2:	74 31                	je     c1005c25 <cons_getc+0x57>
c1005bf4:	a1 20 42 a1 c1       	mov    0xc1a14220,%eax
c1005bf9:	8d 50 01             	lea    0x1(%eax),%edx
c1005bfc:	89 15 20 42 a1 c1    	mov    %edx,0xc1a14220
c1005c02:	0f b6 80 20 40 a1 c1 	movzbl -0x3e5ebfe0(%eax),%eax
c1005c09:	0f b6 c0             	movzbl %al,%eax
c1005c0c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005c0f:	a1 20 42 a1 c1       	mov    0xc1a14220,%eax
c1005c14:	3d 00 02 00 00       	cmp    $0x200,%eax
c1005c19:	75 0a                	jne    c1005c25 <cons_getc+0x57>
c1005c1b:	c7 05 20 42 a1 c1 00 	movl   $0x0,0xc1a14220
c1005c22:	00 00 00 
c1005c25:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005c28:	c9                   	leave  
c1005c29:	c3                   	ret    

c1005c2a <hash32>:
c1005c2a:	55                   	push   %ebp
c1005c2b:	89 e5                	mov    %esp,%ebp
c1005c2d:	83 ec 10             	sub    $0x10,%esp
c1005c30:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c33:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1005c39:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005c3c:	b8 20 00 00 00       	mov    $0x20,%eax
c1005c41:	2b 45 0c             	sub    0xc(%ebp),%eax
c1005c44:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005c47:	89 c1                	mov    %eax,%ecx
c1005c49:	d3 ea                	shr    %cl,%edx
c1005c4b:	89 d0                	mov    %edx,%eax
c1005c4d:	c9                   	leave  
c1005c4e:	c3                   	ret    

c1005c4f <sema_init>:
c1005c4f:	55                   	push   %ebp
c1005c50:	89 e5                	mov    %esp,%ebp
c1005c52:	83 ec 14             	sub    $0x14,%esp
c1005c55:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005c58:	88 45 ec             	mov    %al,-0x14(%ebp)
c1005c5b:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c5e:	0f b6 55 ec          	movzbl -0x14(%ebp),%edx
c1005c62:	88 10                	mov    %dl,(%eax)
c1005c64:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c67:	83 c0 04             	add    $0x4,%eax
c1005c6a:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005c6d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005c70:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005c73:	89 50 04             	mov    %edx,0x4(%eax)
c1005c76:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005c79:	8b 50 04             	mov    0x4(%eax),%edx
c1005c7c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005c7f:	89 10                	mov    %edx,(%eax)
c1005c81:	90                   	nop
c1005c82:	90                   	nop
c1005c83:	c9                   	leave  
c1005c84:	c3                   	ret    

c1005c85 <lock_init>:
c1005c85:	55                   	push   %ebp
c1005c86:	89 e5                	mov    %esp,%ebp
c1005c88:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c8b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005c91:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c94:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005c9b:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c9e:	83 c0 04             	add    $0x4,%eax
c1005ca1:	6a 01                	push   $0x1
c1005ca3:	50                   	push   %eax
c1005ca4:	e8 a6 ff ff ff       	call   c1005c4f <sema_init>
c1005ca9:	83 c4 08             	add    $0x8,%esp
c1005cac:	90                   	nop
c1005cad:	c9                   	leave  
c1005cae:	c3                   	ret    

c1005caf <sema_down>:
c1005caf:	55                   	push   %ebp
c1005cb0:	89 e5                	mov    %esp,%ebp
c1005cb2:	83 ec 38             	sub    $0x38,%esp
c1005cb5:	8b 45 08             	mov    0x8(%ebp),%eax
c1005cb8:	83 c0 04             	add    $0x4,%eax
c1005cbb:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005cbe:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005cc1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005cc4:	e8 e2 b0 ff ff       	call   c1000dab <intr_save>
c1005cc9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005ccc:	e9 95 00 00 00       	jmp    c1005d66 <sema_down+0xb7>
c1005cd1:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005cd6:	83 c0 5c             	add    $0x5c,%eax
c1005cd9:	39 45 f4             	cmp    %eax,-0xc(%ebp)
c1005cdc:	75 16                	jne    c1005cf4 <sema_down+0x45>
c1005cde:	68 f8 b9 00 c1       	push   $0xc100b9f8
c1005ce3:	68 60 ba 00 c1       	push   $0xc100ba60
c1005ce8:	6a 26                	push   $0x26
c1005cea:	68 2c ba 00 c1       	push   $0xc100ba2c
c1005cef:	e8 77 a6 ff ff       	call   c100036b <__PANIC>
c1005cf4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005cf7:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005cfa:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005cfd:	8b 40 04             	mov    0x4(%eax),%eax
c1005d00:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005d03:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005d06:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1005d09:	75 c6                	jne    c1005cd1 <sema_down+0x22>
c1005d0b:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005d10:	83 c0 5c             	add    $0x5c,%eax
c1005d13:	8b 55 08             	mov    0x8(%ebp),%edx
c1005d16:	83 c2 04             	add    $0x4,%edx
c1005d19:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1005d1c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005d1f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005d22:	8b 00                	mov    (%eax),%eax
c1005d24:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005d27:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005d2a:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005d2d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005d30:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1005d33:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1005d36:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005d39:	89 10                	mov    %edx,(%eax)
c1005d3b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1005d3e:	8b 10                	mov    (%eax),%edx
c1005d40:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005d43:	89 50 04             	mov    %edx,0x4(%eax)
c1005d46:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005d49:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1005d4c:	89 50 04             	mov    %edx,0x4(%eax)
c1005d4f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005d52:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1005d55:	89 10                	mov    %edx,(%eax)
c1005d57:	90                   	nop
c1005d58:	90                   	nop
c1005d59:	83 ec 0c             	sub    $0xc,%esp
c1005d5c:	6a 01                	push   $0x1
c1005d5e:	e8 05 e1 ff ff       	call   c1003e68 <thread_block>
c1005d63:	83 c4 10             	add    $0x10,%esp
c1005d66:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d69:	0f b6 00             	movzbl (%eax),%eax
c1005d6c:	84 c0                	test   %al,%al
c1005d6e:	74 84                	je     c1005cf4 <sema_down+0x45>
c1005d70:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d73:	0f b6 00             	movzbl (%eax),%eax
c1005d76:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005d79:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d7c:	88 10                	mov    %dl,(%eax)
c1005d7e:	83 ec 0c             	sub    $0xc,%esp
c1005d81:	ff 75 ec             	pushl  -0x14(%ebp)
c1005d84:	e8 35 b0 ff ff       	call   c1000dbe <intr_restore>
c1005d89:	83 c4 10             	add    $0x10,%esp
c1005d8c:	90                   	nop
c1005d8d:	c9                   	leave  
c1005d8e:	c3                   	ret    

c1005d8f <sema_up>:
c1005d8f:	55                   	push   %ebp
c1005d90:	89 e5                	mov    %esp,%ebp
c1005d92:	83 ec 28             	sub    $0x28,%esp
c1005d95:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d98:	83 c0 04             	add    $0x4,%eax
c1005d9b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005d9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005da1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005da4:	e8 02 b0 ff ff       	call   c1000dab <intr_save>
c1005da9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005dac:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005daf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1005db2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005db5:	8b 40 04             	mov    0x4(%eax),%eax
c1005db8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005dbb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005dbe:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1005dc1:	74 41                	je     c1005e04 <sema_up+0x75>
c1005dc3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005dc6:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005dc9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005dcc:	8b 40 04             	mov    0x4(%eax),%eax
c1005dcf:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005dd2:	8b 12                	mov    (%edx),%edx
c1005dd4:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005dd7:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005dda:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005ddd:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1005de0:	89 50 04             	mov    %edx,0x4(%eax)
c1005de3:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005de6:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005de9:	89 10                	mov    %edx,(%eax)
c1005deb:	90                   	nop
c1005dec:	90                   	nop
c1005ded:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005df0:	83 e8 5c             	sub    $0x5c,%eax
c1005df3:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005df6:	83 ec 0c             	sub    $0xc,%esp
c1005df9:	ff 75 e8             	pushl  -0x18(%ebp)
c1005dfc:	e8 95 e0 ff ff       	call   c1003e96 <thread_unblock>
c1005e01:	83 c4 10             	add    $0x10,%esp
c1005e04:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e07:	0f b6 00             	movzbl (%eax),%eax
c1005e0a:	8d 50 01             	lea    0x1(%eax),%edx
c1005e0d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e10:	88 10                	mov    %dl,(%eax)
c1005e12:	83 ec 0c             	sub    $0xc,%esp
c1005e15:	ff 75 ec             	pushl  -0x14(%ebp)
c1005e18:	e8 a1 af ff ff       	call   c1000dbe <intr_restore>
c1005e1d:	83 c4 10             	add    $0x10,%esp
c1005e20:	90                   	nop
c1005e21:	c9                   	leave  
c1005e22:	c3                   	ret    

c1005e23 <lock_acquire>:
c1005e23:	55                   	push   %ebp
c1005e24:	89 e5                	mov    %esp,%ebp
c1005e26:	83 ec 08             	sub    $0x8,%esp
c1005e29:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e2c:	8b 10                	mov    (%eax),%edx
c1005e2e:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005e33:	39 c2                	cmp    %eax,%edx
c1005e35:	74 29                	je     c1005e60 <lock_acquire+0x3d>
c1005e37:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e3a:	83 c0 04             	add    $0x4,%eax
c1005e3d:	83 ec 0c             	sub    $0xc,%esp
c1005e40:	50                   	push   %eax
c1005e41:	e8 69 fe ff ff       	call   c1005caf <sema_down>
c1005e46:	83 c4 10             	add    $0x10,%esp
c1005e49:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1005e4f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e52:	89 10                	mov    %edx,(%eax)
c1005e54:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e57:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
c1005e5e:	eb 0f                	jmp    c1005e6f <lock_acquire+0x4c>
c1005e60:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e63:	8b 40 10             	mov    0x10(%eax),%eax
c1005e66:	8d 50 01             	lea    0x1(%eax),%edx
c1005e69:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e6c:	89 50 10             	mov    %edx,0x10(%eax)
c1005e6f:	90                   	nop
c1005e70:	c9                   	leave  
c1005e71:	c3                   	ret    

c1005e72 <lock_release>:
c1005e72:	55                   	push   %ebp
c1005e73:	89 e5                	mov    %esp,%ebp
c1005e75:	83 ec 08             	sub    $0x8,%esp
c1005e78:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e7b:	8b 40 10             	mov    0x10(%eax),%eax
c1005e7e:	83 f8 01             	cmp    $0x1,%eax
c1005e81:	76 11                	jbe    c1005e94 <lock_release+0x22>
c1005e83:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e86:	8b 40 10             	mov    0x10(%eax),%eax
c1005e89:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005e8c:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e8f:	89 50 10             	mov    %edx,0x10(%eax)
c1005e92:	eb 25                	jmp    c1005eb9 <lock_release+0x47>
c1005e94:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e97:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005e9d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ea0:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005ea7:	8b 45 08             	mov    0x8(%ebp),%eax
c1005eaa:	83 c0 04             	add    $0x4,%eax
c1005ead:	83 ec 0c             	sub    $0xc,%esp
c1005eb0:	50                   	push   %eax
c1005eb1:	e8 d9 fe ff ff       	call   c1005d8f <sema_up>
c1005eb6:	83 c4 10             	add    $0x10,%esp
c1005eb9:	c9                   	leave  
c1005eba:	c3                   	ret    

c1005ebb <waitdisk>:
c1005ebb:	55                   	push   %ebp
c1005ebc:	89 e5                	mov    %esp,%ebp
c1005ebe:	83 ec 08             	sub    $0x8,%esp
c1005ec1:	90                   	nop
c1005ec2:	83 ec 0c             	sub    $0xc,%esp
c1005ec5:	68 f7 01 00 00       	push   $0x1f7
c1005eca:	e8 31 a1 ff ff       	call   c1000000 <inb>
c1005ecf:	83 c4 10             	add    $0x10,%esp
c1005ed2:	0f b6 c0             	movzbl %al,%eax
c1005ed5:	25 c0 00 00 00       	and    $0xc0,%eax
c1005eda:	83 f8 40             	cmp    $0x40,%eax
c1005edd:	75 e3                	jne    c1005ec2 <waitdisk+0x7>
c1005edf:	90                   	nop
c1005ee0:	90                   	nop
c1005ee1:	c9                   	leave  
c1005ee2:	c3                   	ret    

c1005ee3 <insl>:
c1005ee3:	55                   	push   %ebp
c1005ee4:	89 e5                	mov    %esp,%ebp
c1005ee6:	57                   	push   %edi
c1005ee7:	53                   	push   %ebx
c1005ee8:	8b 55 08             	mov    0x8(%ebp),%edx
c1005eeb:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1005eee:	8b 45 10             	mov    0x10(%ebp),%eax
c1005ef1:	89 cb                	mov    %ecx,%ebx
c1005ef3:	89 df                	mov    %ebx,%edi
c1005ef5:	89 c1                	mov    %eax,%ecx
c1005ef7:	fc                   	cld    
c1005ef8:	f2 6d                	repnz insl (%dx),%es:(%edi)
c1005efa:	89 c8                	mov    %ecx,%eax
c1005efc:	89 fb                	mov    %edi,%ebx
c1005efe:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1005f01:	89 45 10             	mov    %eax,0x10(%ebp)
c1005f04:	90                   	nop
c1005f05:	5b                   	pop    %ebx
c1005f06:	5f                   	pop    %edi
c1005f07:	5d                   	pop    %ebp
c1005f08:	c3                   	ret    

c1005f09 <outsl>:
c1005f09:	55                   	push   %ebp
c1005f0a:	89 e5                	mov    %esp,%ebp
c1005f0c:	56                   	push   %esi
c1005f0d:	53                   	push   %ebx
c1005f0e:	8b 55 08             	mov    0x8(%ebp),%edx
c1005f11:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1005f14:	8b 45 10             	mov    0x10(%ebp),%eax
c1005f17:	89 cb                	mov    %ecx,%ebx
c1005f19:	89 de                	mov    %ebx,%esi
c1005f1b:	89 c1                	mov    %eax,%ecx
c1005f1d:	fc                   	cld    
c1005f1e:	f2 6f                	repnz outsl %ds:(%esi),(%dx)
c1005f20:	89 c8                	mov    %ecx,%eax
c1005f22:	89 f3                	mov    %esi,%ebx
c1005f24:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1005f27:	89 45 10             	mov    %eax,0x10(%ebp)
c1005f2a:	90                   	nop
c1005f2b:	5b                   	pop    %ebx
c1005f2c:	5e                   	pop    %esi
c1005f2d:	5d                   	pop    %ebp
c1005f2e:	c3                   	ret    

c1005f2f <ide_read_sect>:
c1005f2f:	55                   	push   %ebp
c1005f30:	89 e5                	mov    %esp,%ebp
c1005f32:	83 ec 08             	sub    $0x8,%esp
c1005f35:	e8 81 ff ff ff       	call   c1005ebb <waitdisk>
c1005f3a:	83 ec 08             	sub    $0x8,%esp
c1005f3d:	6a 01                	push   $0x1
c1005f3f:	68 f2 01 00 00       	push   $0x1f2
c1005f44:	e8 f3 a0 ff ff       	call   c100003c <outb>
c1005f49:	83 c4 10             	add    $0x10,%esp
c1005f4c:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f4f:	0f b6 c0             	movzbl %al,%eax
c1005f52:	83 ec 08             	sub    $0x8,%esp
c1005f55:	50                   	push   %eax
c1005f56:	68 f3 01 00 00       	push   $0x1f3
c1005f5b:	e8 dc a0 ff ff       	call   c100003c <outb>
c1005f60:	83 c4 10             	add    $0x10,%esp
c1005f63:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f66:	c1 e8 08             	shr    $0x8,%eax
c1005f69:	0f b6 c0             	movzbl %al,%eax
c1005f6c:	83 ec 08             	sub    $0x8,%esp
c1005f6f:	50                   	push   %eax
c1005f70:	68 f4 01 00 00       	push   $0x1f4
c1005f75:	e8 c2 a0 ff ff       	call   c100003c <outb>
c1005f7a:	83 c4 10             	add    $0x10,%esp
c1005f7d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f80:	c1 e8 10             	shr    $0x10,%eax
c1005f83:	0f b6 c0             	movzbl %al,%eax
c1005f86:	83 ec 08             	sub    $0x8,%esp
c1005f89:	50                   	push   %eax
c1005f8a:	68 f5 01 00 00       	push   $0x1f5
c1005f8f:	e8 a8 a0 ff ff       	call   c100003c <outb>
c1005f94:	83 c4 10             	add    $0x10,%esp
c1005f97:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f9a:	c1 e8 18             	shr    $0x18,%eax
c1005f9d:	83 e0 0f             	and    $0xf,%eax
c1005fa0:	83 c8 e0             	or     $0xffffffe0,%eax
c1005fa3:	0f b6 c0             	movzbl %al,%eax
c1005fa6:	83 ec 08             	sub    $0x8,%esp
c1005fa9:	50                   	push   %eax
c1005faa:	68 f6 01 00 00       	push   $0x1f6
c1005faf:	e8 88 a0 ff ff       	call   c100003c <outb>
c1005fb4:	83 c4 10             	add    $0x10,%esp
c1005fb7:	83 ec 08             	sub    $0x8,%esp
c1005fba:	6a 20                	push   $0x20
c1005fbc:	68 f7 01 00 00       	push   $0x1f7
c1005fc1:	e8 76 a0 ff ff       	call   c100003c <outb>
c1005fc6:	83 c4 10             	add    $0x10,%esp
c1005fc9:	e8 ed fe ff ff       	call   c1005ebb <waitdisk>
c1005fce:	83 ec 04             	sub    $0x4,%esp
c1005fd1:	68 80 00 00 00       	push   $0x80
c1005fd6:	ff 75 08             	pushl  0x8(%ebp)
c1005fd9:	68 f0 01 00 00       	push   $0x1f0
c1005fde:	e8 00 ff ff ff       	call   c1005ee3 <insl>
c1005fe3:	83 c4 10             	add    $0x10,%esp
c1005fe6:	90                   	nop
c1005fe7:	c9                   	leave  
c1005fe8:	c3                   	ret    

c1005fe9 <ide_write_sect>:
c1005fe9:	55                   	push   %ebp
c1005fea:	89 e5                	mov    %esp,%ebp
c1005fec:	83 ec 08             	sub    $0x8,%esp
c1005fef:	e8 c7 fe ff ff       	call   c1005ebb <waitdisk>
c1005ff4:	83 ec 08             	sub    $0x8,%esp
c1005ff7:	6a 01                	push   $0x1
c1005ff9:	68 f2 01 00 00       	push   $0x1f2
c1005ffe:	e8 39 a0 ff ff       	call   c100003c <outb>
c1006003:	83 c4 10             	add    $0x10,%esp
c1006006:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006009:	0f b6 c0             	movzbl %al,%eax
c100600c:	83 ec 08             	sub    $0x8,%esp
c100600f:	50                   	push   %eax
c1006010:	68 f3 01 00 00       	push   $0x1f3
c1006015:	e8 22 a0 ff ff       	call   c100003c <outb>
c100601a:	83 c4 10             	add    $0x10,%esp
c100601d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006020:	c1 e8 08             	shr    $0x8,%eax
c1006023:	0f b6 c0             	movzbl %al,%eax
c1006026:	83 ec 08             	sub    $0x8,%esp
c1006029:	50                   	push   %eax
c100602a:	68 f4 01 00 00       	push   $0x1f4
c100602f:	e8 08 a0 ff ff       	call   c100003c <outb>
c1006034:	83 c4 10             	add    $0x10,%esp
c1006037:	8b 45 0c             	mov    0xc(%ebp),%eax
c100603a:	c1 e8 10             	shr    $0x10,%eax
c100603d:	0f b6 c0             	movzbl %al,%eax
c1006040:	83 ec 08             	sub    $0x8,%esp
c1006043:	50                   	push   %eax
c1006044:	68 f5 01 00 00       	push   $0x1f5
c1006049:	e8 ee 9f ff ff       	call   c100003c <outb>
c100604e:	83 c4 10             	add    $0x10,%esp
c1006051:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006054:	c1 e8 18             	shr    $0x18,%eax
c1006057:	83 e0 0f             	and    $0xf,%eax
c100605a:	83 c8 e0             	or     $0xffffffe0,%eax
c100605d:	0f b6 c0             	movzbl %al,%eax
c1006060:	83 ec 08             	sub    $0x8,%esp
c1006063:	50                   	push   %eax
c1006064:	68 f6 01 00 00       	push   $0x1f6
c1006069:	e8 ce 9f ff ff       	call   c100003c <outb>
c100606e:	83 c4 10             	add    $0x10,%esp
c1006071:	83 ec 08             	sub    $0x8,%esp
c1006074:	6a 30                	push   $0x30
c1006076:	68 f7 01 00 00       	push   $0x1f7
c100607b:	e8 bc 9f ff ff       	call   c100003c <outb>
c1006080:	83 c4 10             	add    $0x10,%esp
c1006083:	e8 33 fe ff ff       	call   c1005ebb <waitdisk>
c1006088:	83 ec 04             	sub    $0x4,%esp
c100608b:	68 80 00 00 00       	push   $0x80
c1006090:	ff 75 08             	pushl  0x8(%ebp)
c1006093:	68 f0 01 00 00       	push   $0x1f0
c1006098:	e8 6c fe ff ff       	call   c1005f09 <outsl>
c100609d:	83 c4 10             	add    $0x10,%esp
c10060a0:	90                   	nop
c10060a1:	c9                   	leave  
c10060a2:	c3                   	ret    

c10060a3 <ide_read>:
c10060a3:	55                   	push   %ebp
c10060a4:	89 e5                	mov    %esp,%ebp
c10060a6:	83 ec 18             	sub    $0x18,%esp
c10060a9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10060b0:	eb 22                	jmp    c10060d4 <ide_read+0x31>
c10060b2:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10060b5:	8b 45 0c             	mov    0xc(%ebp),%eax
c10060b8:	01 d0                	add    %edx,%eax
c10060ba:	83 ec 08             	sub    $0x8,%esp
c10060bd:	50                   	push   %eax
c10060be:	ff 75 08             	pushl  0x8(%ebp)
c10060c1:	e8 69 fe ff ff       	call   c1005f2f <ide_read_sect>
c10060c6:	83 c4 10             	add    $0x10,%esp
c10060c9:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c10060d0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10060d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10060d7:	39 45 10             	cmp    %eax,0x10(%ebp)
c10060da:	77 d6                	ja     c10060b2 <ide_read+0xf>
c10060dc:	90                   	nop
c10060dd:	90                   	nop
c10060de:	c9                   	leave  
c10060df:	c3                   	ret    

c10060e0 <ide_write>:
c10060e0:	55                   	push   %ebp
c10060e1:	89 e5                	mov    %esp,%ebp
c10060e3:	83 ec 18             	sub    $0x18,%esp
c10060e6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10060ed:	eb 22                	jmp    c1006111 <ide_write+0x31>
c10060ef:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10060f2:	8b 45 0c             	mov    0xc(%ebp),%eax
c10060f5:	01 d0                	add    %edx,%eax
c10060f7:	83 ec 08             	sub    $0x8,%esp
c10060fa:	50                   	push   %eax
c10060fb:	ff 75 08             	pushl  0x8(%ebp)
c10060fe:	e8 e6 fe ff ff       	call   c1005fe9 <ide_write_sect>
c1006103:	83 c4 10             	add    $0x10,%esp
c1006106:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c100610d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1006111:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006114:	39 45 10             	cmp    %eax,0x10(%ebp)
c1006117:	77 d6                	ja     c10060ef <ide_write+0xf>
c1006119:	90                   	nop
c100611a:	90                   	nop
c100611b:	c9                   	leave  
c100611c:	c3                   	ret    

c100611d <delay>:
c100611d:	55                   	push   %ebp
c100611e:	89 e5                	mov    %esp,%ebp
c1006120:	83 ec 10             	sub    $0x10,%esp
c1006123:	8b 45 08             	mov    0x8(%ebp),%eax
c1006126:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1006129:	eb 17                	jmp    c1006142 <delay+0x25>
c100612b:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c1006132:	eb 04                	jmp    c1006138 <delay+0x1b>
c1006134:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c1006138:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c100613c:	75 f6                	jne    c1006134 <delay+0x17>
c100613e:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c1006142:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1006146:	75 e3                	jne    c100612b <delay+0xe>
c1006148:	90                   	nop
c1006149:	90                   	nop
c100614a:	c9                   	leave  
c100614b:	c3                   	ret    

c100614c <read_main_partition>:
c100614c:	55                   	push   %ebp
c100614d:	89 e5                	mov    %esp,%ebp
c100614f:	83 ec 18             	sub    $0x18,%esp
c1006152:	83 ec 08             	sub    $0x8,%esp
c1006155:	6a 02                	push   $0x2
c1006157:	68 00 02 00 00       	push   $0x200
c100615c:	e8 57 cb ff ff       	call   c1002cb8 <vmm_malloc>
c1006161:	83 c4 10             	add    $0x10,%esp
c1006164:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006167:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100616a:	83 ec 08             	sub    $0x8,%esp
c100616d:	6a 00                	push   $0x0
c100616f:	50                   	push   %eax
c1006170:	e8 ba fd ff ff       	call   c1005f2f <ide_read_sect>
c1006175:	83 c4 10             	add    $0x10,%esp
c1006178:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100617b:	05 be 01 00 00       	add    $0x1be,%eax
c1006180:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006183:	e8 76 f2 ff ff       	call   c10053fe <clear>
c1006188:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100618b:	0f b6 00             	movzbl (%eax),%eax
c100618e:	0f b6 c0             	movzbl %al,%eax
c1006191:	83 ec 08             	sub    $0x8,%esp
c1006194:	50                   	push   %eax
c1006195:	68 6a ba 00 c1       	push   $0xc100ba6a
c100619a:	e8 5c f6 ff ff       	call   c10057fb <printk>
c100619f:	83 c4 10             	add    $0x10,%esp
c10061a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10061a5:	0f b6 40 01          	movzbl 0x1(%eax),%eax
c10061a9:	0f b6 c0             	movzbl %al,%eax
c10061ac:	83 ec 08             	sub    $0x8,%esp
c10061af:	50                   	push   %eax
c10061b0:	68 7d ba 00 c1       	push   $0xc100ba7d
c10061b5:	e8 41 f6 ff ff       	call   c10057fb <printk>
c10061ba:	83 c4 10             	add    $0x10,%esp
c10061bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10061c0:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c10061c4:	0f b6 c0             	movzbl %al,%eax
c10061c7:	83 ec 08             	sub    $0x8,%esp
c10061ca:	50                   	push   %eax
c10061cb:	68 93 ba 00 c1       	push   $0xc100ba93
c10061d0:	e8 26 f6 ff ff       	call   c10057fb <printk>
c10061d5:	83 c4 10             	add    $0x10,%esp
c10061d8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10061db:	0f b6 40 03          	movzbl 0x3(%eax),%eax
c10061df:	0f b6 c0             	movzbl %al,%eax
c10061e2:	83 ec 08             	sub    $0x8,%esp
c10061e5:	50                   	push   %eax
c10061e6:	68 a7 ba 00 c1       	push   $0xc100baa7
c10061eb:	e8 0b f6 ff ff       	call   c10057fb <printk>
c10061f0:	83 c4 10             	add    $0x10,%esp
c10061f3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10061f6:	0f b6 40 04          	movzbl 0x4(%eax),%eax
c10061fa:	0f b6 c0             	movzbl %al,%eax
c10061fd:	83 ec 08             	sub    $0x8,%esp
c1006200:	50                   	push   %eax
c1006201:	68 bd ba 00 c1       	push   $0xc100babd
c1006206:	e8 f0 f5 ff ff       	call   c10057fb <printk>
c100620b:	83 c4 10             	add    $0x10,%esp
c100620e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006211:	0f b6 40 05          	movzbl 0x5(%eax),%eax
c1006215:	0f b6 c0             	movzbl %al,%eax
c1006218:	83 ec 08             	sub    $0x8,%esp
c100621b:	50                   	push   %eax
c100621c:	68 ce ba 00 c1       	push   $0xc100bace
c1006221:	e8 d5 f5 ff ff       	call   c10057fb <printk>
c1006226:	83 c4 10             	add    $0x10,%esp
c1006229:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100622c:	0f b6 40 06          	movzbl 0x6(%eax),%eax
c1006230:	0f b6 c0             	movzbl %al,%eax
c1006233:	83 ec 08             	sub    $0x8,%esp
c1006236:	50                   	push   %eax
c1006237:	68 e2 ba 00 c1       	push   $0xc100bae2
c100623c:	e8 ba f5 ff ff       	call   c10057fb <printk>
c1006241:	83 c4 10             	add    $0x10,%esp
c1006244:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006247:	0f b6 40 07          	movzbl 0x7(%eax),%eax
c100624b:	0f b6 c0             	movzbl %al,%eax
c100624e:	83 ec 08             	sub    $0x8,%esp
c1006251:	50                   	push   %eax
c1006252:	68 f4 ba 00 c1       	push   $0xc100baf4
c1006257:	e8 9f f5 ff ff       	call   c10057fb <printk>
c100625c:	83 c4 10             	add    $0x10,%esp
c100625f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006262:	8b 40 08             	mov    0x8(%eax),%eax
c1006265:	83 ec 08             	sub    $0x8,%esp
c1006268:	50                   	push   %eax
c1006269:	68 08 bb 00 c1       	push   $0xc100bb08
c100626e:	e8 88 f5 ff ff       	call   c10057fb <printk>
c1006273:	83 c4 10             	add    $0x10,%esp
c1006276:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006279:	8b 40 0c             	mov    0xc(%eax),%eax
c100627c:	83 ec 08             	sub    $0x8,%esp
c100627f:	50                   	push   %eax
c1006280:	68 1c bb 00 c1       	push   $0xc100bb1c
c1006285:	e8 71 f5 ff ff       	call   c10057fb <printk>
c100628a:	83 c4 10             	add    $0x10,%esp
c100628d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006290:	c9                   	leave  
c1006291:	c3                   	ret    

c1006292 <test_ide_io>:
c1006292:	55                   	push   %ebp
c1006293:	89 e5                	mov    %esp,%ebp
c1006295:	83 ec 18             	sub    $0x18,%esp
c1006298:	83 ec 08             	sub    $0x8,%esp
c100629b:	68 00 90 10 00       	push   $0x109000
c10062a0:	68 2f bb 00 c1       	push   $0xc100bb2f
c10062a5:	e8 51 f5 ff ff       	call   c10057fb <printk>
c10062aa:	83 c4 10             	add    $0x10,%esp
c10062ad:	83 ec 08             	sub    $0x8,%esp
c10062b0:	68 2c eb 00 c1       	push   $0xc100eb2c
c10062b5:	68 3e bb 00 c1       	push   $0xc100bb3e
c10062ba:	e8 3c f5 ff ff       	call   c10057fb <printk>
c10062bf:	83 c4 10             	add    $0x10,%esp
c10062c2:	b8 00 90 10 00       	mov    $0x109000,%eax
c10062c7:	2d 01 fe 0f 00       	sub    $0xffe01,%eax
c10062cc:	c1 e8 09             	shr    $0x9,%eax
c10062cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10062d2:	b8 2c eb 00 c1       	mov    $0xc100eb2c,%eax
c10062d7:	05 ff 01 00 3f       	add    $0x3f0001ff,%eax
c10062dc:	c1 e8 09             	shr    $0x9,%eax
c10062df:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10062e2:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10062e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10062e8:	01 d0                	add    %edx,%eax
c10062ea:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10062ed:	83 ec 08             	sub    $0x8,%esp
c10062f0:	ff 75 ec             	pushl  -0x14(%ebp)
c10062f3:	68 4d bb 00 c1       	push   $0xc100bb4d
c10062f8:	e8 fe f4 ff ff       	call   c10057fb <printk>
c10062fd:	83 c4 10             	add    $0x10,%esp
c1006300:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1006304:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100630b:	e8 3c fe ff ff       	call   c100614c <read_main_partition>
c1006310:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006313:	90                   	nop
c1006314:	c9                   	leave  
c1006315:	c3                   	ret    

c1006316 <hash32>:
c1006316:	55                   	push   %ebp
c1006317:	89 e5                	mov    %esp,%ebp
c1006319:	83 ec 10             	sub    $0x10,%esp
c100631c:	8b 45 08             	mov    0x8(%ebp),%eax
c100631f:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1006325:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1006328:	b8 20 00 00 00       	mov    $0x20,%eax
c100632d:	2b 45 0c             	sub    0xc(%ebp),%eax
c1006330:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1006333:	89 c1                	mov    %eax,%ecx
c1006335:	d3 ea                	shr    %cl,%edx
c1006337:	89 d0                	mov    %edx,%eax
c1006339:	c9                   	leave  
c100633a:	c3                   	ret    

c100633b <partition_format>:
c100633b:	55                   	push   %ebp
c100633c:	89 e5                	mov    %esp,%ebp
c100633e:	53                   	push   %ebx
c100633f:	81 ec 44 02 00 00    	sub    $0x244,%esp
c1006345:	e8 02 fe ff ff       	call   c100614c <read_main_partition>
c100634a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100634d:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
c1006354:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
c100635b:	c7 45 e4 11 00 00 00 	movl   $0x11,-0x1c(%ebp)
c1006362:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006365:	8b 40 0c             	mov    0xc(%eax),%eax
c1006368:	2b 45 ec             	sub    -0x14(%ebp),%eax
c100636b:	2b 45 e8             	sub    -0x18(%ebp),%eax
c100636e:	2b 45 e4             	sub    -0x1c(%ebp),%eax
c1006371:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1006374:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006377:	05 ff 0f 00 00       	add    $0xfff,%eax
c100637c:	c1 e8 0c             	shr    $0xc,%eax
c100637f:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1006382:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006385:	2b 45 dc             	sub    -0x24(%ebp),%eax
c1006388:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100638b:	c7 85 bc fd ff ff 18 	movl   $0x19590318,-0x244(%ebp)
c1006392:	03 59 19 
c1006395:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006398:	8b 40 0c             	mov    0xc(%eax),%eax
c100639b:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
c10063a1:	c7 85 c4 fd ff ff e8 	movl   $0x3e8,-0x23c(%ebp)
c10063a8:	03 00 00 
c10063ab:	c7 85 c8 fd ff ff 00 	movl   $0x800,-0x238(%ebp)
c10063b2:	08 00 00 
c10063b5:	c7 85 cc fd ff ff 01 	movl   $0x801,-0x234(%ebp)
c10063bc:	08 00 00 
c10063bf:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10063c2:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c10063c8:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
c10063ce:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c10063d4:	01 d0                	add    %edx,%eax
c10063d6:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
c10063dc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10063df:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
c10063e5:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
c10063eb:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c10063f1:	01 d0                	add    %edx,%eax
c10063f3:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
c10063f9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10063fc:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
c1006402:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
c1006408:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c100640e:	01 d0                	add    %edx,%eax
c1006410:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
c1006416:	c7 85 e8 fd ff ff 00 	movl   $0x0,-0x218(%ebp)
c100641d:	00 00 00 
c1006420:	c7 85 ec fd ff ff 18 	movl   $0x18,-0x214(%ebp)
c1006427:	00 00 00 
c100642a:	e8 cf ef ff ff       	call   c10053fe <clear>
c100642f:	8b 85 bc fd ff ff    	mov    -0x244(%ebp),%eax
c1006435:	83 ec 08             	sub    $0x8,%esp
c1006438:	50                   	push   %eax
c1006439:	68 60 bb 00 c1       	push   $0xc100bb60
c100643e:	e8 b8 f3 ff ff       	call   c10057fb <printk>
c1006443:	83 c4 10             	add    $0x10,%esp
c1006446:	8b 85 c0 fd ff ff    	mov    -0x240(%ebp),%eax
c100644c:	83 ec 08             	sub    $0x8,%esp
c100644f:	50                   	push   %eax
c1006450:	68 70 bb 00 c1       	push   $0xc100bb70
c1006455:	e8 a1 f3 ff ff       	call   c10057fb <printk>
c100645a:	83 c4 10             	add    $0x10,%esp
c100645d:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
c1006463:	83 ec 08             	sub    $0x8,%esp
c1006466:	50                   	push   %eax
c1006467:	68 82 bb 00 c1       	push   $0xc100bb82
c100646c:	e8 8a f3 ff ff       	call   c10057fb <printk>
c1006471:	83 c4 10             	add    $0x10,%esp
c1006474:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c100647a:	83 ec 08             	sub    $0x8,%esp
c100647d:	50                   	push   %eax
c100647e:	68 96 bb 00 c1       	push   $0xc100bb96
c1006483:	e8 73 f3 ff ff       	call   c10057fb <printk>
c1006488:	83 c4 10             	add    $0x10,%esp
c100648b:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c1006491:	83 ec 08             	sub    $0x8,%esp
c1006494:	50                   	push   %eax
c1006495:	68 b1 bb 00 c1       	push   $0xc100bbb1
c100649a:	e8 5c f3 ff ff       	call   c10057fb <printk>
c100649f:	83 c4 10             	add    $0x10,%esp
c10064a2:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c10064a8:	83 ec 08             	sub    $0x8,%esp
c10064ab:	50                   	push   %eax
c10064ac:	68 ce bb 00 c1       	push   $0xc100bbce
c10064b1:	e8 45 f3 ff ff       	call   c10057fb <printk>
c10064b6:	83 c4 10             	add    $0x10,%esp
c10064b9:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c10064bf:	83 ec 08             	sub    $0x8,%esp
c10064c2:	50                   	push   %eax
c10064c3:	68 e9 bb 00 c1       	push   $0xc100bbe9
c10064c8:	e8 2e f3 ff ff       	call   c10057fb <printk>
c10064cd:	83 c4 10             	add    $0x10,%esp
c10064d0:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c10064d6:	83 ec 08             	sub    $0x8,%esp
c10064d9:	50                   	push   %eax
c10064da:	68 06 bc 00 c1       	push   $0xc100bc06
c10064df:	e8 17 f3 ff ff       	call   c10057fb <printk>
c10064e4:	83 c4 10             	add    $0x10,%esp
c10064e7:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10064ed:	83 ec 08             	sub    $0x8,%esp
c10064f0:	50                   	push   %eax
c10064f1:	68 20 bc 00 c1       	push   $0xc100bc20
c10064f6:	e8 00 f3 ff ff       	call   c10057fb <printk>
c10064fb:	83 c4 10             	add    $0x10,%esp
c10064fe:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c1006504:	83 ec 08             	sub    $0x8,%esp
c1006507:	50                   	push   %eax
c1006508:	68 3c bc 00 c1       	push   $0xc100bc3c
c100650d:	e8 e9 f2 ff ff       	call   c10057fb <printk>
c1006512:	83 c4 10             	add    $0x10,%esp
c1006515:	83 ec 04             	sub    $0x4,%esp
c1006518:	6a 01                	push   $0x1
c100651a:	68 00 08 00 00       	push   $0x800
c100651f:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
c1006525:	50                   	push   %eax
c1006526:	e8 b5 fb ff ff       	call   c10060e0 <ide_write>
c100652b:	83 c4 10             	add    $0x10,%esp
c100652e:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c1006534:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c100653a:	39 c2                	cmp    %eax,%edx
c100653c:	0f 43 c2             	cmovae %edx,%eax
c100653f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1006542:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1006548:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
c100654b:	0f 43 45 d4          	cmovae -0x2c(%ebp),%eax
c100654f:	c1 e0 09             	shl    $0x9,%eax
c1006552:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1006555:	83 ec 08             	sub    $0x8,%esp
c1006558:	6a 02                	push   $0x2
c100655a:	ff 75 d4             	pushl  -0x2c(%ebp)
c100655d:	e8 56 c7 ff ff       	call   c1002cb8 <vmm_malloc>
c1006562:	83 c4 10             	add    $0x10,%esp
c1006565:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1006568:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100656b:	0f b6 00             	movzbl (%eax),%eax
c100656e:	83 c8 01             	or     $0x1,%eax
c1006571:	89 c2                	mov    %eax,%edx
c1006573:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006576:	88 10                	mov    %dl,(%eax)
c1006578:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100657b:	c1 e8 03             	shr    $0x3,%eax
c100657e:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1006581:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1006584:	83 e0 07             	and    $0x7,%eax
c1006587:	88 45 cb             	mov    %al,-0x35(%ebp)
c100658a:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100658d:	25 ff 01 00 00       	and    $0x1ff,%eax
c1006592:	ba 00 02 00 00       	mov    $0x200,%edx
c1006597:	29 c2                	sub    %eax,%edx
c1006599:	89 d0                	mov    %edx,%eax
c100659b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100659e:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10065a1:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10065a4:	01 d0                	add    %edx,%eax
c10065a6:	83 ec 04             	sub    $0x4,%esp
c10065a9:	ff 75 c4             	pushl  -0x3c(%ebp)
c10065ac:	6a ff                	push   $0xffffffff
c10065ae:	50                   	push   %eax
c10065af:	e8 f6 9a ff ff       	call   c10000aa <memset>
c10065b4:	83 c4 10             	add    $0x10,%esp
c10065b7:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c10065bb:	eb 38                	jmp    c10065f5 <partition_format+0x2ba>
c10065bd:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10065c0:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10065c3:	01 d0                	add    %edx,%eax
c10065c5:	0f b6 00             	movzbl (%eax),%eax
c10065c8:	89 c2                	mov    %eax,%edx
c10065ca:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c10065ce:	bb 01 00 00 00       	mov    $0x1,%ebx
c10065d3:	89 c1                	mov    %eax,%ecx
c10065d5:	d3 e3                	shl    %cl,%ebx
c10065d7:	89 d8                	mov    %ebx,%eax
c10065d9:	f7 d0                	not    %eax
c10065db:	89 d1                	mov    %edx,%ecx
c10065dd:	21 c1                	and    %eax,%ecx
c10065df:	8b 55 d0             	mov    -0x30(%ebp),%edx
c10065e2:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10065e5:	01 d0                	add    %edx,%eax
c10065e7:	89 ca                	mov    %ecx,%edx
c10065e9:	88 10                	mov    %dl,(%eax)
c10065eb:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10065ef:	83 c0 01             	add    $0x1,%eax
c10065f2:	88 45 f7             	mov    %al,-0x9(%ebp)
c10065f5:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
c10065f9:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c10065fd:	39 c2                	cmp    %eax,%edx
c10065ff:	7c bc                	jl     c10065bd <partition_format+0x282>
c1006601:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
c1006607:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c100660d:	83 ec 04             	sub    $0x4,%esp
c1006610:	52                   	push   %edx
c1006611:	50                   	push   %eax
c1006612:	ff 75 d0             	pushl  -0x30(%ebp)
c1006615:	e8 c6 fa ff ff       	call   c10060e0 <ide_write>
c100661a:	83 c4 10             	add    $0x10,%esp
c100661d:	83 ec 04             	sub    $0x4,%esp
c1006620:	ff 75 d4             	pushl  -0x2c(%ebp)
c1006623:	6a 00                	push   $0x0
c1006625:	ff 75 d0             	pushl  -0x30(%ebp)
c1006628:	e8 7d 9a ff ff       	call   c10000aa <memset>
c100662d:	83 c4 10             	add    $0x10,%esp
c1006630:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006633:	0f b6 00             	movzbl (%eax),%eax
c1006636:	83 c8 01             	or     $0x1,%eax
c1006639:	89 c2                	mov    %eax,%edx
c100663b:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100663e:	88 10                	mov    %dl,(%eax)
c1006640:	c7 45 cc 7d 00 00 00 	movl   $0x7d,-0x34(%ebp)
c1006647:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
c100664b:	b8 00 02 00 00       	mov    $0x200,%eax
c1006650:	2b 45 cc             	sub    -0x34(%ebp),%eax
c1006653:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1006656:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006659:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100665c:	01 d0                	add    %edx,%eax
c100665e:	83 ec 04             	sub    $0x4,%esp
c1006661:	ff 75 c4             	pushl  -0x3c(%ebp)
c1006664:	6a ff                	push   $0xffffffff
c1006666:	50                   	push   %eax
c1006667:	e8 3e 9a ff ff       	call   c10000aa <memset>
c100666c:	83 c4 10             	add    $0x10,%esp
c100666f:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c1006673:	eb 38                	jmp    c10066ad <partition_format+0x372>
c1006675:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006678:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100667b:	01 d0                	add    %edx,%eax
c100667d:	0f b6 00             	movzbl (%eax),%eax
c1006680:	89 c2                	mov    %eax,%edx
c1006682:	0f be 45 f6          	movsbl -0xa(%ebp),%eax
c1006686:	bb 01 00 00 00       	mov    $0x1,%ebx
c100668b:	89 c1                	mov    %eax,%ecx
c100668d:	d3 e3                	shl    %cl,%ebx
c100668f:	89 d8                	mov    %ebx,%eax
c1006691:	f7 d0                	not    %eax
c1006693:	89 d1                	mov    %edx,%ecx
c1006695:	21 c1                	and    %eax,%ecx
c1006697:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100669a:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100669d:	01 d0                	add    %edx,%eax
c100669f:	89 ca                	mov    %ecx,%edx
c10066a1:	88 10                	mov    %dl,(%eax)
c10066a3:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c10066a7:	83 c0 01             	add    $0x1,%eax
c10066aa:	88 45 f6             	mov    %al,-0xa(%ebp)
c10066ad:	0f be 55 f6          	movsbl -0xa(%ebp),%edx
c10066b1:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c10066b5:	39 c2                	cmp    %eax,%edx
c10066b7:	7c bc                	jl     c1006675 <partition_format+0x33a>
c10066b9:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c10066bf:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c10066c5:	83 ec 04             	sub    $0x4,%esp
c10066c8:	52                   	push   %edx
c10066c9:	50                   	push   %eax
c10066ca:	ff 75 d0             	pushl  -0x30(%ebp)
c10066cd:	e8 0e fa ff ff       	call   c10060e0 <ide_write>
c10066d2:	83 c4 10             	add    $0x10,%esp
c10066d5:	83 ec 04             	sub    $0x4,%esp
c10066d8:	ff 75 d4             	pushl  -0x2c(%ebp)
c10066db:	6a 00                	push   $0x0
c10066dd:	ff 75 d0             	pushl  -0x30(%ebp)
c10066e0:	e8 c5 99 ff ff       	call   c10000aa <memset>
c10066e5:	83 c4 10             	add    $0x10,%esp
c10066e8:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10066eb:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10066ee:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
c10066f4:	8d 14 00             	lea    (%eax,%eax,1),%edx
c10066f7:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10066fa:	89 50 04             	mov    %edx,0x4(%eax)
c10066fd:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1006700:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1006706:	8b 95 e4 fd ff ff    	mov    -0x21c(%ebp),%edx
c100670c:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100670f:	89 50 10             	mov    %edx,0x10(%eax)
c1006712:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
c1006718:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c100671e:	83 ec 04             	sub    $0x4,%esp
c1006721:	52                   	push   %edx
c1006722:	50                   	push   %eax
c1006723:	ff 75 d0             	pushl  -0x30(%ebp)
c1006726:	e8 b5 f9 ff ff       	call   c10060e0 <ide_write>
c100672b:	83 c4 10             	add    $0x10,%esp
c100672e:	83 ec 04             	sub    $0x4,%esp
c1006731:	ff 75 d4             	pushl  -0x2c(%ebp)
c1006734:	6a 00                	push   $0x0
c1006736:	ff 75 d0             	pushl  -0x30(%ebp)
c1006739:	e8 6c 99 ff ff       	call   c10000aa <memset>
c100673e:	83 c4 10             	add    $0x10,%esp
c1006741:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006744:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1006747:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100674a:	83 ec 04             	sub    $0x4,%esp
c100674d:	6a 01                	push   $0x1
c100674f:	68 55 bc 00 c1       	push   $0xc100bc55
c1006754:	50                   	push   %eax
c1006755:	e8 ae 99 ff ff       	call   c1000108 <memcpy>
c100675a:	83 c4 10             	add    $0x10,%esp
c100675d:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006760:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1006767:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100676a:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1006771:	83 45 bc 18          	addl   $0x18,-0x44(%ebp)
c1006775:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006778:	83 ec 04             	sub    $0x4,%esp
c100677b:	6a 02                	push   $0x2
c100677d:	68 57 bc 00 c1       	push   $0xc100bc57
c1006782:	50                   	push   %eax
c1006783:	e8 80 99 ff ff       	call   c1000108 <memcpy>
c1006788:	83 c4 10             	add    $0x10,%esp
c100678b:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100678e:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1006795:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006798:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100679f:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c10067a5:	83 ec 04             	sub    $0x4,%esp
c10067a8:	6a 01                	push   $0x1
c10067aa:	50                   	push   %eax
c10067ab:	ff 75 d0             	pushl  -0x30(%ebp)
c10067ae:	e8 2d f9 ff ff       	call   c10060e0 <ide_write>
c10067b3:	83 c4 10             	add    $0x10,%esp
c10067b6:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10067b9:	83 ec 08             	sub    $0x8,%esp
c10067bc:	ff 75 d4             	pushl  -0x2c(%ebp)
c10067bf:	50                   	push   %eax
c10067c0:	e8 18 c6 ff ff       	call   c1002ddd <vmm_free>
c10067c5:	83 c4 10             	add    $0x10,%esp
c10067c8:	90                   	nop
c10067c9:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10067cc:	c9                   	leave  
c10067cd:	c3                   	ret    

c10067ce <mount_partition>:
c10067ce:	55                   	push   %ebp
c10067cf:	89 e5                	mov    %esp,%ebp
c10067d1:	83 ec 18             	sub    $0x18,%esp
c10067d4:	e8 73 f9 ff ff       	call   c100614c <read_main_partition>
c10067d9:	a3 30 42 a1 c1       	mov    %eax,0xc1a14230
c10067de:	83 ec 08             	sub    $0x8,%esp
c10067e1:	6a 02                	push   $0x2
c10067e3:	68 00 02 00 00       	push   $0x200
c10067e8:	e8 cb c4 ff ff       	call   c1002cb8 <vmm_malloc>
c10067ed:	83 c4 10             	add    $0x10,%esp
c10067f0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10067f3:	83 ec 04             	sub    $0x4,%esp
c10067f6:	68 00 02 00 00       	push   $0x200
c10067fb:	6a 00                	push   $0x0
c10067fd:	ff 75 f0             	pushl  -0x10(%ebp)
c1006800:	e8 a5 98 ff ff       	call   c10000aa <memset>
c1006805:	83 c4 10             	add    $0x10,%esp
c1006808:	83 ec 04             	sub    $0x4,%esp
c100680b:	6a 01                	push   $0x1
c100680d:	68 00 08 00 00       	push   $0x800
c1006812:	ff 75 f0             	pushl  -0x10(%ebp)
c1006815:	e8 89 f8 ff ff       	call   c10060a3 <ide_read>
c100681a:	83 c4 10             	add    $0x10,%esp
c100681d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006822:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006825:	89 50 10             	mov    %edx,0x10(%eax)
c1006828:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100682b:	8b 40 14             	mov    0x14(%eax),%eax
c100682e:	c1 e0 09             	shl    $0x9,%eax
c1006831:	83 ec 08             	sub    $0x8,%esp
c1006834:	6a 02                	push   $0x2
c1006836:	50                   	push   %eax
c1006837:	e8 7c c4 ff ff       	call   c1002cb8 <vmm_malloc>
c100683c:	83 c4 10             	add    $0x10,%esp
c100683f:	89 c2                	mov    %eax,%edx
c1006841:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006846:	89 50 18             	mov    %edx,0x18(%eax)
c1006849:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100684c:	8b 50 14             	mov    0x14(%eax),%edx
c100684f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006854:	c1 e2 09             	shl    $0x9,%edx
c1006857:	89 50 14             	mov    %edx,0x14(%eax)
c100685a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100685d:	8b 48 14             	mov    0x14(%eax),%ecx
c1006860:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006863:	8b 50 10             	mov    0x10(%eax),%edx
c1006866:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100686b:	8b 40 18             	mov    0x18(%eax),%eax
c100686e:	83 ec 04             	sub    $0x4,%esp
c1006871:	51                   	push   %ecx
c1006872:	52                   	push   %edx
c1006873:	50                   	push   %eax
c1006874:	e8 2a f8 ff ff       	call   c10060a3 <ide_read>
c1006879:	83 c4 10             	add    $0x10,%esp
c100687c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100687f:	8b 40 1c             	mov    0x1c(%eax),%eax
c1006882:	c1 e0 09             	shl    $0x9,%eax
c1006885:	83 ec 08             	sub    $0x8,%esp
c1006888:	6a 02                	push   $0x2
c100688a:	50                   	push   %eax
c100688b:	e8 28 c4 ff ff       	call   c1002cb8 <vmm_malloc>
c1006890:	83 c4 10             	add    $0x10,%esp
c1006893:	89 c2                	mov    %eax,%edx
c1006895:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100689a:	89 50 20             	mov    %edx,0x20(%eax)
c100689d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10068a0:	8b 50 1c             	mov    0x1c(%eax),%edx
c10068a3:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10068a8:	c1 e2 09             	shl    $0x9,%edx
c10068ab:	89 50 1c             	mov    %edx,0x1c(%eax)
c10068ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10068b1:	8b 48 1c             	mov    0x1c(%eax),%ecx
c10068b4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10068b7:	8b 50 18             	mov    0x18(%eax),%edx
c10068ba:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10068bf:	8b 40 20             	mov    0x20(%eax),%eax
c10068c2:	83 ec 04             	sub    $0x4,%esp
c10068c5:	51                   	push   %ecx
c10068c6:	52                   	push   %edx
c10068c7:	50                   	push   %eax
c10068c8:	e8 d6 f7 ff ff       	call   c10060a3 <ide_read>
c10068cd:	83 c4 10             	add    $0x10,%esp
c10068d0:	e8 29 eb ff ff       	call   c10053fe <clear>
c10068d5:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10068da:	8b 40 10             	mov    0x10(%eax),%eax
c10068dd:	8b 00                	mov    (%eax),%eax
c10068df:	83 ec 08             	sub    $0x8,%esp
c10068e2:	50                   	push   %eax
c10068e3:	68 60 bb 00 c1       	push   $0xc100bb60
c10068e8:	e8 0e ef ff ff       	call   c10057fb <printk>
c10068ed:	83 c4 10             	add    $0x10,%esp
c10068f0:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10068f5:	8b 40 10             	mov    0x10(%eax),%eax
c10068f8:	8b 40 04             	mov    0x4(%eax),%eax
c10068fb:	83 ec 08             	sub    $0x8,%esp
c10068fe:	50                   	push   %eax
c10068ff:	68 70 bb 00 c1       	push   $0xc100bb70
c1006904:	e8 f2 ee ff ff       	call   c10057fb <printk>
c1006909:	83 c4 10             	add    $0x10,%esp
c100690c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006911:	8b 40 10             	mov    0x10(%eax),%eax
c1006914:	8b 40 08             	mov    0x8(%eax),%eax
c1006917:	83 ec 08             	sub    $0x8,%esp
c100691a:	50                   	push   %eax
c100691b:	68 82 bb 00 c1       	push   $0xc100bb82
c1006920:	e8 d6 ee ff ff       	call   c10057fb <printk>
c1006925:	83 c4 10             	add    $0x10,%esp
c1006928:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100692d:	8b 40 10             	mov    0x10(%eax),%eax
c1006930:	8b 40 10             	mov    0x10(%eax),%eax
c1006933:	83 ec 08             	sub    $0x8,%esp
c1006936:	50                   	push   %eax
c1006937:	68 96 bb 00 c1       	push   $0xc100bb96
c100693c:	e8 ba ee ff ff       	call   c10057fb <printk>
c1006941:	83 c4 10             	add    $0x10,%esp
c1006944:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006949:	8b 40 10             	mov    0x10(%eax),%eax
c100694c:	8b 40 14             	mov    0x14(%eax),%eax
c100694f:	83 ec 08             	sub    $0x8,%esp
c1006952:	50                   	push   %eax
c1006953:	68 b1 bb 00 c1       	push   $0xc100bbb1
c1006958:	e8 9e ee ff ff       	call   c10057fb <printk>
c100695d:	83 c4 10             	add    $0x10,%esp
c1006960:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006965:	8b 40 10             	mov    0x10(%eax),%eax
c1006968:	8b 40 18             	mov    0x18(%eax),%eax
c100696b:	83 ec 08             	sub    $0x8,%esp
c100696e:	50                   	push   %eax
c100696f:	68 ce bb 00 c1       	push   $0xc100bbce
c1006974:	e8 82 ee ff ff       	call   c10057fb <printk>
c1006979:	83 c4 10             	add    $0x10,%esp
c100697c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006981:	8b 40 10             	mov    0x10(%eax),%eax
c1006984:	8b 40 1c             	mov    0x1c(%eax),%eax
c1006987:	83 ec 08             	sub    $0x8,%esp
c100698a:	50                   	push   %eax
c100698b:	68 e9 bb 00 c1       	push   $0xc100bbe9
c1006990:	e8 66 ee ff ff       	call   c10057fb <printk>
c1006995:	83 c4 10             	add    $0x10,%esp
c1006998:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100699d:	8b 40 10             	mov    0x10(%eax),%eax
c10069a0:	8b 40 20             	mov    0x20(%eax),%eax
c10069a3:	83 ec 08             	sub    $0x8,%esp
c10069a6:	50                   	push   %eax
c10069a7:	68 06 bc 00 c1       	push   $0xc100bc06
c10069ac:	e8 4a ee ff ff       	call   c10057fb <printk>
c10069b1:	83 c4 10             	add    $0x10,%esp
c10069b4:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10069b9:	8b 40 10             	mov    0x10(%eax),%eax
c10069bc:	8b 40 24             	mov    0x24(%eax),%eax
c10069bf:	83 ec 08             	sub    $0x8,%esp
c10069c2:	50                   	push   %eax
c10069c3:	68 20 bc 00 c1       	push   $0xc100bc20
c10069c8:	e8 2e ee ff ff       	call   c10057fb <printk>
c10069cd:	83 c4 10             	add    $0x10,%esp
c10069d0:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10069d5:	8b 40 10             	mov    0x10(%eax),%eax
c10069d8:	8b 40 28             	mov    0x28(%eax),%eax
c10069db:	83 ec 08             	sub    $0x8,%esp
c10069de:	50                   	push   %eax
c10069df:	68 3c bc 00 c1       	push   $0xc100bc3c
c10069e4:	e8 12 ee ff ff       	call   c10057fb <printk>
c10069e9:	83 c4 10             	add    $0x10,%esp
c10069ec:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10069f1:	8b 40 18             	mov    0x18(%eax),%eax
c10069f4:	83 ec 08             	sub    $0x8,%esp
c10069f7:	50                   	push   %eax
c10069f8:	68 5c bc 00 c1       	push   $0xc100bc5c
c10069fd:	e8 f9 ed ff ff       	call   c10057fb <printk>
c1006a02:	83 c4 10             	add    $0x10,%esp
c1006a05:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006a0a:	8b 40 14             	mov    0x14(%eax),%eax
c1006a0d:	83 ec 08             	sub    $0x8,%esp
c1006a10:	50                   	push   %eax
c1006a11:	68 80 bc 00 c1       	push   $0xc100bc80
c1006a16:	e8 e0 ed ff ff       	call   c10057fb <printk>
c1006a1b:	83 c4 10             	add    $0x10,%esp
c1006a1e:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006a23:	8b 40 20             	mov    0x20(%eax),%eax
c1006a26:	83 ec 08             	sub    $0x8,%esp
c1006a29:	50                   	push   %eax
c1006a2a:	68 b0 bc 00 c1       	push   $0xc100bcb0
c1006a2f:	e8 c7 ed ff ff       	call   c10057fb <printk>
c1006a34:	83 c4 10             	add    $0x10,%esp
c1006a37:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006a3c:	8b 40 1c             	mov    0x1c(%eax),%eax
c1006a3f:	83 ec 08             	sub    $0x8,%esp
c1006a42:	50                   	push   %eax
c1006a43:	68 d4 bc 00 c1       	push   $0xc100bcd4
c1006a48:	e8 ae ed ff ff       	call   c10057fb <printk>
c1006a4d:	83 c4 10             	add    $0x10,%esp
c1006a50:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006a55:	83 ec 0c             	sub    $0xc,%esp
c1006a58:	50                   	push   %eax
c1006a59:	e8 f6 19 00 00       	call   c1008454 <open_root_dir>
c1006a5e:	83 c4 10             	add    $0x10,%esp
c1006a61:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006a68:	eb 1d                	jmp    c1006a87 <mount_partition+0x2b9>
c1006a6a:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006a6d:	8d 42 01             	lea    0x1(%edx),%eax
c1006a70:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006a73:	89 d0                	mov    %edx,%eax
c1006a75:	01 c0                	add    %eax,%eax
c1006a77:	01 d0                	add    %edx,%eax
c1006a79:	c1 e0 02             	shl    $0x2,%eax
c1006a7c:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1006a81:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1006a87:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006a8b:	76 dd                	jbe    c1006a6a <mount_partition+0x29c>
c1006a8d:	90                   	nop
c1006a8e:	90                   	nop
c1006a8f:	c9                   	leave  
c1006a90:	c3                   	ret    

c1006a91 <path_parse>:
c1006a91:	55                   	push   %ebp
c1006a92:	89 e5                	mov    %esp,%ebp
c1006a94:	8b 45 08             	mov    0x8(%ebp),%eax
c1006a97:	0f b6 00             	movzbl (%eax),%eax
c1006a9a:	3c 2f                	cmp    $0x2f,%al
c1006a9c:	75 27                	jne    c1006ac5 <path_parse+0x34>
c1006a9e:	83 45 08 01          	addl   $0x1,0x8(%ebp)
c1006aa2:	8b 45 08             	mov    0x8(%ebp),%eax
c1006aa5:	0f b6 00             	movzbl (%eax),%eax
c1006aa8:	3c 2f                	cmp    $0x2f,%al
c1006aaa:	74 f2                	je     c1006a9e <path_parse+0xd>
c1006aac:	eb 17                	jmp    c1006ac5 <path_parse+0x34>
c1006aae:	8b 55 08             	mov    0x8(%ebp),%edx
c1006ab1:	8d 42 01             	lea    0x1(%edx),%eax
c1006ab4:	89 45 08             	mov    %eax,0x8(%ebp)
c1006ab7:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006aba:	8d 48 01             	lea    0x1(%eax),%ecx
c1006abd:	89 4d 0c             	mov    %ecx,0xc(%ebp)
c1006ac0:	0f b6 12             	movzbl (%edx),%edx
c1006ac3:	88 10                	mov    %dl,(%eax)
c1006ac5:	8b 45 08             	mov    0x8(%ebp),%eax
c1006ac8:	0f b6 00             	movzbl (%eax),%eax
c1006acb:	3c 2f                	cmp    $0x2f,%al
c1006acd:	74 0a                	je     c1006ad9 <path_parse+0x48>
c1006acf:	8b 45 08             	mov    0x8(%ebp),%eax
c1006ad2:	0f b6 00             	movzbl (%eax),%eax
c1006ad5:	84 c0                	test   %al,%al
c1006ad7:	75 d5                	jne    c1006aae <path_parse+0x1d>
c1006ad9:	8b 45 08             	mov    0x8(%ebp),%eax
c1006adc:	0f b6 00             	movzbl (%eax),%eax
c1006adf:	84 c0                	test   %al,%al
c1006ae1:	75 07                	jne    c1006aea <path_parse+0x59>
c1006ae3:	b8 00 00 00 00       	mov    $0x0,%eax
c1006ae8:	eb 03                	jmp    c1006aed <path_parse+0x5c>
c1006aea:	8b 45 08             	mov    0x8(%ebp),%eax
c1006aed:	5d                   	pop    %ebp
c1006aee:	c3                   	ret    

c1006aef <path_depth_cnt>:
c1006aef:	55                   	push   %ebp
c1006af0:	89 e5                	mov    %esp,%ebp
c1006af2:	83 ec 28             	sub    $0x28,%esp
c1006af5:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006af9:	75 19                	jne    c1006b14 <path_depth_cnt+0x25>
c1006afb:	68 01 bd 00 c1       	push   $0xc100bd01
c1006b00:	68 38 c3 00 c1       	push   $0xc100c338
c1006b05:	68 d2 00 00 00       	push   $0xd2
c1006b0a:	68 14 bd 00 c1       	push   $0xc100bd14
c1006b0f:	e8 57 98 ff ff       	call   c100036b <__PANIC>
c1006b14:	8b 45 08             	mov    0x8(%ebp),%eax
c1006b17:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006b1a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1006b21:	83 ec 08             	sub    $0x8,%esp
c1006b24:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1006b27:	50                   	push   %eax
c1006b28:	ff 75 f4             	pushl  -0xc(%ebp)
c1006b2b:	e8 61 ff ff ff       	call   c1006a91 <path_parse>
c1006b30:	83 c4 10             	add    $0x10,%esp
c1006b33:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006b36:	eb 32                	jmp    c1006b6a <path_depth_cnt+0x7b>
c1006b38:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1006b3c:	83 ec 04             	sub    $0x4,%esp
c1006b3f:	6a 10                	push   $0x10
c1006b41:	6a 00                	push   $0x0
c1006b43:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1006b46:	50                   	push   %eax
c1006b47:	e8 5e 95 ff ff       	call   c10000aa <memset>
c1006b4c:	83 c4 10             	add    $0x10,%esp
c1006b4f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006b53:	74 15                	je     c1006b6a <path_depth_cnt+0x7b>
c1006b55:	83 ec 08             	sub    $0x8,%esp
c1006b58:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1006b5b:	50                   	push   %eax
c1006b5c:	ff 75 f4             	pushl  -0xc(%ebp)
c1006b5f:	e8 2d ff ff ff       	call   c1006a91 <path_parse>
c1006b64:	83 c4 10             	add    $0x10,%esp
c1006b67:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006b6a:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1006b6e:	84 c0                	test   %al,%al
c1006b70:	75 c6                	jne    c1006b38 <path_depth_cnt+0x49>
c1006b72:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006b75:	c9                   	leave  
c1006b76:	c3                   	ret    

c1006b77 <search_file>:
c1006b77:	55                   	push   %ebp
c1006b78:	89 e5                	mov    %esp,%ebp
c1006b7a:	57                   	push   %edi
c1006b7b:	53                   	push   %ebx
c1006b7c:	83 ec 40             	sub    $0x40,%esp
c1006b7f:	83 ec 08             	sub    $0x8,%esp
c1006b82:	68 43 bd 00 c1       	push   $0xc100bd43
c1006b87:	ff 75 08             	pushl  0x8(%ebp)
c1006b8a:	e8 f4 95 ff ff       	call   c1000183 <strcmp>
c1006b8f:	83 c4 10             	add    $0x10,%esp
c1006b92:	85 c0                	test   %eax,%eax
c1006b94:	74 2e                	je     c1006bc4 <search_file+0x4d>
c1006b96:	83 ec 08             	sub    $0x8,%esp
c1006b99:	68 45 bd 00 c1       	push   $0xc100bd45
c1006b9e:	ff 75 08             	pushl  0x8(%ebp)
c1006ba1:	e8 dd 95 ff ff       	call   c1000183 <strcmp>
c1006ba6:	83 c4 10             	add    $0x10,%esp
c1006ba9:	85 c0                	test   %eax,%eax
c1006bab:	74 17                	je     c1006bc4 <search_file+0x4d>
c1006bad:	83 ec 08             	sub    $0x8,%esp
c1006bb0:	68 48 bd 00 c1       	push   $0xc100bd48
c1006bb5:	ff 75 08             	pushl  0x8(%ebp)
c1006bb8:	e8 c6 95 ff ff       	call   c1000183 <strcmp>
c1006bbd:	83 c4 10             	add    $0x10,%esp
c1006bc0:	85 c0                	test   %eax,%eax
c1006bc2:	75 2c                	jne    c1006bf0 <search_file+0x79>
c1006bc4:	8b 15 34 42 a1 c1    	mov    0xc1a14234,%edx
c1006bca:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006bcd:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006bd3:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006bd6:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1006bdd:	00 00 00 
c1006be0:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006be3:	c6 00 00             	movb   $0x0,(%eax)
c1006be6:	b8 00 00 00 00       	mov    $0x0,%eax
c1006beb:	e9 10 02 00 00       	jmp    c1006e00 <search_file+0x289>
c1006bf0:	83 ec 0c             	sub    $0xc,%esp
c1006bf3:	ff 75 08             	pushl  0x8(%ebp)
c1006bf6:	e8 23 95 ff ff       	call   c100011e <strlen>
c1006bfb:	83 c4 10             	add    $0x10,%esp
c1006bfe:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006c01:	8b 45 08             	mov    0x8(%ebp),%eax
c1006c04:	0f b6 00             	movzbl (%eax),%eax
c1006c07:	3c 2f                	cmp    $0x2f,%al
c1006c09:	75 0f                	jne    c1006c1a <search_file+0xa3>
c1006c0b:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1006c0f:	76 09                	jbe    c1006c1a <search_file+0xa3>
c1006c11:	81 7d e8 ff 01 00 00 	cmpl   $0x1ff,-0x18(%ebp)
c1006c18:	76 19                	jbe    c1006c33 <search_file+0xbc>
c1006c1a:	68 4c bd 00 c1       	push   $0xc100bd4c
c1006c1f:	68 48 c3 00 c1       	push   $0xc100c348
c1006c24:	68 ef 00 00 00       	push   $0xef
c1006c29:	68 14 bd 00 c1       	push   $0xc100bd14
c1006c2e:	e8 38 97 ff ff       	call   c100036b <__PANIC>
c1006c33:	8b 45 08             	mov    0x8(%ebp),%eax
c1006c36:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006c39:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c1006c3e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006c41:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
c1006c48:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
c1006c4f:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
c1006c56:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
c1006c5d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c60:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006c63:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006c69:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c6c:	c7 80 04 02 00 00 00 	movl   $0x0,0x204(%eax)
c1006c73:	00 00 00 
c1006c76:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1006c7d:	83 ec 08             	sub    $0x8,%esp
c1006c80:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006c83:	50                   	push   %eax
c1006c84:	ff 75 f4             	pushl  -0xc(%ebp)
c1006c87:	e8 05 fe ff ff       	call   c1006a91 <path_parse>
c1006c8c:	83 c4 10             	add    $0x10,%esp
c1006c8f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006c92:	e9 1b 01 00 00       	jmp    c1006db2 <search_file+0x23b>
c1006c97:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c9a:	83 ec 0c             	sub    $0xc,%esp
c1006c9d:	50                   	push   %eax
c1006c9e:	e8 7b 94 ff ff       	call   c100011e <strlen>
c1006ca3:	83 c4 10             	add    $0x10,%esp
c1006ca6:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1006cab:	76 19                	jbe    c1006cc6 <search_file+0x14f>
c1006cad:	68 8c bd 00 c1       	push   $0xc100bd8c
c1006cb2:	68 48 c3 00 c1       	push   $0xc100c348
c1006cb7:	68 00 01 00 00       	push   $0x100
c1006cbc:	68 14 bd 00 c1       	push   $0xc100bd14
c1006cc1:	e8 a5 96 ff ff       	call   c100036b <__PANIC>
c1006cc6:	8b 55 0c             	mov    0xc(%ebp),%edx
c1006cc9:	89 d0                	mov    %edx,%eax
c1006ccb:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1006cd0:	89 c3                	mov    %eax,%ebx
c1006cd2:	b8 00 00 00 00       	mov    $0x0,%eax
c1006cd7:	89 df                	mov    %ebx,%edi
c1006cd9:	f2 ae                	repnz scas %es:(%edi),%al
c1006cdb:	89 c8                	mov    %ecx,%eax
c1006cdd:	f7 d0                	not    %eax
c1006cdf:	83 e8 01             	sub    $0x1,%eax
c1006ce2:	01 d0                	add    %edx,%eax
c1006ce4:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1006ce9:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006cec:	83 ec 08             	sub    $0x8,%esp
c1006cef:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1006cf2:	52                   	push   %edx
c1006cf3:	50                   	push   %eax
c1006cf4:	e8 dc 94 ff ff       	call   c10001d5 <strcat>
c1006cf9:	83 c4 10             	add    $0x10,%esp
c1006cfc:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006d01:	8d 55 d0             	lea    -0x30(%ebp),%edx
c1006d04:	52                   	push   %edx
c1006d05:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1006d08:	52                   	push   %edx
c1006d09:	ff 75 f0             	pushl  -0x10(%ebp)
c1006d0c:	50                   	push   %eax
c1006d0d:	e8 04 18 00 00       	call   c1008516 <search_dir_entry>
c1006d12:	83 c4 10             	add    $0x10,%esp
c1006d15:	84 c0                	test   %al,%al
c1006d17:	0f 84 8e 00 00 00    	je     c1006dab <search_file+0x234>
c1006d1d:	83 ec 04             	sub    $0x4,%esp
c1006d20:	6a 10                	push   $0x10
c1006d22:	6a 00                	push   $0x0
c1006d24:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006d27:	50                   	push   %eax
c1006d28:	e8 7d 93 ff ff       	call   c10000aa <memset>
c1006d2d:	83 c4 10             	add    $0x10,%esp
c1006d30:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006d34:	74 15                	je     c1006d4b <search_file+0x1d4>
c1006d36:	83 ec 08             	sub    $0x8,%esp
c1006d39:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006d3c:	50                   	push   %eax
c1006d3d:	ff 75 f4             	pushl  -0xc(%ebp)
c1006d40:	e8 4c fd ff ff       	call   c1006a91 <path_parse>
c1006d45:	83 c4 10             	add    $0x10,%esp
c1006d48:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006d4b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006d4e:	83 f8 02             	cmp    $0x2,%eax
c1006d51:	75 3e                	jne    c1006d91 <search_file+0x21a>
c1006d53:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006d56:	8b 00                	mov    (%eax),%eax
c1006d58:	8b 00                	mov    (%eax),%eax
c1006d5a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006d5d:	83 ec 0c             	sub    $0xc,%esp
c1006d60:	ff 75 f0             	pushl  -0x10(%ebp)
c1006d63:	e8 9a 19 00 00       	call   c1008702 <dir_close>
c1006d68:	83 c4 10             	add    $0x10,%esp
c1006d6b:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1006d6e:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006d73:	83 ec 08             	sub    $0x8,%esp
c1006d76:	52                   	push   %edx
c1006d77:	50                   	push   %eax
c1006d78:	e8 59 17 00 00       	call   c10084d6 <dir_open>
c1006d7d:	83 c4 10             	add    $0x10,%esp
c1006d80:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006d83:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006d86:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006d89:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006d8f:	eb 21                	jmp    c1006db2 <search_file+0x23b>
c1006d91:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006d94:	83 f8 01             	cmp    $0x1,%eax
c1006d97:	75 19                	jne    c1006db2 <search_file+0x23b>
c1006d99:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006d9c:	c7 80 04 02 00 00 01 	movl   $0x1,0x204(%eax)
c1006da3:	00 00 00 
c1006da6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006da9:	eb 55                	jmp    c1006e00 <search_file+0x289>
c1006dab:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006db0:	eb 4e                	jmp    c1006e00 <search_file+0x289>
c1006db2:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
c1006db6:	84 c0                	test   %al,%al
c1006db8:	0f 85 d9 fe ff ff    	jne    c1006c97 <search_file+0x120>
c1006dbe:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006dc1:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
c1006dc7:	83 ec 0c             	sub    $0xc,%esp
c1006dca:	50                   	push   %eax
c1006dcb:	e8 32 19 00 00       	call   c1008702 <dir_close>
c1006dd0:	83 c4 10             	add    $0x10,%esp
c1006dd3:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006dd8:	83 ec 08             	sub    $0x8,%esp
c1006ddb:	ff 75 ec             	pushl  -0x14(%ebp)
c1006dde:	50                   	push   %eax
c1006ddf:	e8 f2 16 00 00       	call   c10084d6 <dir_open>
c1006de4:	83 c4 10             	add    $0x10,%esp
c1006de7:	8b 55 0c             	mov    0xc(%ebp),%edx
c1006dea:	89 82 00 02 00 00    	mov    %eax,0x200(%edx)
c1006df0:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006df3:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1006dfa:	00 00 00 
c1006dfd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006e00:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1006e03:	5b                   	pop    %ebx
c1006e04:	5f                   	pop    %edi
c1006e05:	5d                   	pop    %ebp
c1006e06:	c3                   	ret    

c1006e07 <sys_open>:
c1006e07:	55                   	push   %ebp
c1006e08:	89 e5                	mov    %esp,%ebp
c1006e0a:	53                   	push   %ebx
c1006e0b:	81 ec 34 02 00 00    	sub    $0x234,%esp
c1006e11:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006e14:	88 85 d4 fd ff ff    	mov    %al,-0x22c(%ebp)
c1006e1a:	83 ec 0c             	sub    $0xc,%esp
c1006e1d:	ff 75 08             	pushl  0x8(%ebp)
c1006e20:	e8 f9 92 ff ff       	call   c100011e <strlen>
c1006e25:	83 c4 10             	add    $0x10,%esp
c1006e28:	8d 50 ff             	lea    -0x1(%eax),%edx
c1006e2b:	8b 45 08             	mov    0x8(%ebp),%eax
c1006e2e:	01 d0                	add    %edx,%eax
c1006e30:	0f b6 00             	movzbl (%eax),%eax
c1006e33:	3c 2f                	cmp    $0x2f,%al
c1006e35:	75 1d                	jne    c1006e54 <sys_open+0x4d>
c1006e37:	83 ec 08             	sub    $0x8,%esp
c1006e3a:	ff 75 08             	pushl  0x8(%ebp)
c1006e3d:	68 b9 bd 00 c1       	push   $0xc100bdb9
c1006e42:	e8 b4 e9 ff ff       	call   c10057fb <printk>
c1006e47:	83 c4 10             	add    $0x10,%esp
c1006e4a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006e4f:	e9 0a 02 00 00       	jmp    c100705e <sys_open+0x257>
c1006e54:	80 bd d4 fd ff ff 07 	cmpb   $0x7,-0x22c(%ebp)
c1006e5b:	76 19                	jbe    c1006e76 <sys_open+0x6f>
c1006e5d:	68 d4 bd 00 c1       	push   $0xc100bdd4
c1006e62:	68 54 c3 00 c1       	push   $0xc100c354
c1006e67:	68 2e 01 00 00       	push   $0x12e
c1006e6c:	68 14 bd 00 c1       	push   $0xc100bd14
c1006e71:	e8 f5 94 ff ff       	call   c100036b <__PANIC>
c1006e76:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006e7d:	83 ec 04             	sub    $0x4,%esp
c1006e80:	68 08 02 00 00       	push   $0x208
c1006e85:	6a 00                	push   $0x0
c1006e87:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006e8d:	50                   	push   %eax
c1006e8e:	e8 17 92 ff ff       	call   c10000aa <memset>
c1006e93:	83 c4 10             	add    $0x10,%esp
c1006e96:	83 ec 0c             	sub    $0xc,%esp
c1006e99:	ff 75 08             	pushl  0x8(%ebp)
c1006e9c:	e8 4e fc ff ff       	call   c1006aef <path_depth_cnt>
c1006ea1:	83 c4 10             	add    $0x10,%esp
c1006ea4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006ea7:	83 ec 08             	sub    $0x8,%esp
c1006eaa:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006eb0:	50                   	push   %eax
c1006eb1:	ff 75 08             	pushl  0x8(%ebp)
c1006eb4:	e8 be fc ff ff       	call   c1006b77 <search_file>
c1006eb9:	83 c4 10             	add    $0x10,%esp
c1006ebc:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006ebf:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
c1006ec3:	0f 95 c0             	setne  %al
c1006ec6:	88 45 eb             	mov    %al,-0x15(%ebp)
c1006ec9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006ecc:	83 f8 02             	cmp    $0x2,%eax
c1006ecf:	75 29                	jne    c1006efa <sys_open+0xf3>
c1006ed1:	83 ec 0c             	sub    $0xc,%esp
c1006ed4:	68 e0 bd 00 c1       	push   $0xc100bde0
c1006ed9:	e8 1d e9 ff ff       	call   c10057fb <printk>
c1006ede:	83 c4 10             	add    $0x10,%esp
c1006ee1:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006ee4:	83 ec 0c             	sub    $0xc,%esp
c1006ee7:	50                   	push   %eax
c1006ee8:	e8 15 18 00 00       	call   c1008702 <dir_close>
c1006eed:	83 c4 10             	add    $0x10,%esp
c1006ef0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006ef5:	e9 64 01 00 00       	jmp    c100705e <sys_open+0x257>
c1006efa:	83 ec 0c             	sub    $0xc,%esp
c1006efd:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006f03:	50                   	push   %eax
c1006f04:	e8 e6 fb ff ff       	call   c1006aef <path_depth_cnt>
c1006f09:	83 c4 10             	add    $0x10,%esp
c1006f0c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006f0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006f12:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1006f15:	74 33                	je     c1006f4a <sys_open+0x143>
c1006f17:	83 ec 04             	sub    $0x4,%esp
c1006f1a:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006f20:	50                   	push   %eax
c1006f21:	ff 75 08             	pushl  0x8(%ebp)
c1006f24:	68 20 be 00 c1       	push   $0xc100be20
c1006f29:	e8 cd e8 ff ff       	call   c10057fb <printk>
c1006f2e:	83 c4 10             	add    $0x10,%esp
c1006f31:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006f34:	83 ec 0c             	sub    $0xc,%esp
c1006f37:	50                   	push   %eax
c1006f38:	e8 c5 17 00 00       	call   c1008702 <dir_close>
c1006f3d:	83 c4 10             	add    $0x10,%esp
c1006f40:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006f45:	e9 14 01 00 00       	jmp    c100705e <sys_open+0x257>
c1006f4a:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006f4e:	75 56                	jne    c1006fa6 <sys_open+0x19f>
c1006f50:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006f57:	83 e0 04             	and    $0x4,%eax
c1006f5a:	85 c0                	test   %eax,%eax
c1006f5c:	75 48                	jne    c1006fa6 <sys_open+0x19f>
c1006f5e:	83 ec 08             	sub    $0x8,%esp
c1006f61:	6a 2f                	push   $0x2f
c1006f63:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006f69:	50                   	push   %eax
c1006f6a:	e8 27 92 ff ff       	call   c1000196 <strrchr>
c1006f6f:	83 c4 10             	add    $0x10,%esp
c1006f72:	83 c0 01             	add    $0x1,%eax
c1006f75:	83 ec 04             	sub    $0x4,%esp
c1006f78:	50                   	push   %eax
c1006f79:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006f7f:	50                   	push   %eax
c1006f80:	68 5c be 00 c1       	push   $0xc100be5c
c1006f85:	e8 71 e8 ff ff       	call   c10057fb <printk>
c1006f8a:	83 c4 10             	add    $0x10,%esp
c1006f8d:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006f90:	83 ec 0c             	sub    $0xc,%esp
c1006f93:	50                   	push   %eax
c1006f94:	e8 69 17 00 00       	call   c1008702 <dir_close>
c1006f99:	83 c4 10             	add    $0x10,%esp
c1006f9c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006fa1:	e9 b8 00 00 00       	jmp    c100705e <sys_open+0x257>
c1006fa6:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006faa:	74 37                	je     c1006fe3 <sys_open+0x1dc>
c1006fac:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006fb3:	83 e0 04             	and    $0x4,%eax
c1006fb6:	85 c0                	test   %eax,%eax
c1006fb8:	74 29                	je     c1006fe3 <sys_open+0x1dc>
c1006fba:	83 ec 08             	sub    $0x8,%esp
c1006fbd:	ff 75 08             	pushl  0x8(%ebp)
c1006fc0:	68 7c be 00 c1       	push   $0xc100be7c
c1006fc5:	e8 31 e8 ff ff       	call   c10057fb <printk>
c1006fca:	83 c4 10             	add    $0x10,%esp
c1006fcd:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006fd0:	83 ec 0c             	sub    $0xc,%esp
c1006fd3:	50                   	push   %eax
c1006fd4:	e8 29 17 00 00       	call   c1008702 <dir_close>
c1006fd9:	83 c4 10             	add    $0x10,%esp
c1006fdc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006fe1:	eb 7b                	jmp    c100705e <sys_open+0x257>
c1006fe3:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006fea:	83 e0 04             	and    $0x4,%eax
c1006fed:	83 f8 04             	cmp    $0x4,%eax
c1006ff0:	75 4f                	jne    c1007041 <sys_open+0x23a>
c1006ff2:	83 ec 0c             	sub    $0xc,%esp
c1006ff5:	68 93 be 00 c1       	push   $0xc100be93
c1006ffa:	e8 fc e7 ff ff       	call   c10057fb <printk>
c1006fff:	83 c4 10             	add    $0x10,%esp
c1007002:	0f b6 9d d4 fd ff ff 	movzbl -0x22c(%ebp),%ebx
c1007009:	83 ec 08             	sub    $0x8,%esp
c100700c:	6a 2f                	push   $0x2f
c100700e:	ff 75 08             	pushl  0x8(%ebp)
c1007011:	e8 80 91 ff ff       	call   c1000196 <strrchr>
c1007016:	83 c4 10             	add    $0x10,%esp
c1007019:	8d 50 01             	lea    0x1(%eax),%edx
c100701c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100701f:	83 ec 04             	sub    $0x4,%esp
c1007022:	53                   	push   %ebx
c1007023:	52                   	push   %edx
c1007024:	50                   	push   %eax
c1007025:	e8 e2 25 00 00       	call   c100960c <file_create>
c100702a:	83 c4 10             	add    $0x10,%esp
c100702d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007030:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1007033:	83 ec 0c             	sub    $0xc,%esp
c1007036:	50                   	push   %eax
c1007037:	e8 c6 16 00 00       	call   c1008702 <dir_close>
c100703c:	83 c4 10             	add    $0x10,%esp
c100703f:	eb 1a                	jmp    c100705b <sys_open+0x254>
c1007041:	0f b6 95 d4 fd ff ff 	movzbl -0x22c(%ebp),%edx
c1007048:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100704b:	83 ec 08             	sub    $0x8,%esp
c100704e:	52                   	push   %edx
c100704f:	50                   	push   %eax
c1007050:	e8 99 28 00 00       	call   c10098ee <file_open>
c1007055:	83 c4 10             	add    $0x10,%esp
c1007058:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100705b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100705e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1007061:	c9                   	leave  
c1007062:	c3                   	ret    

c1007063 <fd_local2global>:
c1007063:	55                   	push   %ebp
c1007064:	89 e5                	mov    %esp,%ebp
c1007066:	83 ec 18             	sub    $0x18,%esp
c1007069:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100706e:	8b 55 08             	mov    0x8(%ebp),%edx
c1007071:	83 c2 1c             	add    $0x1c,%edx
c1007074:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c1007078:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100707b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100707f:	78 06                	js     c1007087 <fd_local2global+0x24>
c1007081:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1007085:	7e 19                	jle    c10070a0 <fd_local2global+0x3d>
c1007087:	68 a4 be 00 c1       	push   $0xc100bea4
c100708c:	68 60 c3 00 c1       	push   $0xc100c360
c1007091:	68 6d 01 00 00       	push   $0x16d
c1007096:	68 14 bd 00 c1       	push   $0xc100bd14
c100709b:	e8 cb 92 ff ff       	call   c100036b <__PANIC>
c10070a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10070a3:	c9                   	leave  
c10070a4:	c3                   	ret    

c10070a5 <sys_close>:
c10070a5:	55                   	push   %ebp
c10070a6:	89 e5                	mov    %esp,%ebp
c10070a8:	83 ec 18             	sub    $0x18,%esp
c10070ab:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10070b2:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c10070b6:	0f 8e e0 00 00 00    	jle    c100719c <sys_close+0xf7>
c10070bc:	8b 45 08             	mov    0x8(%ebp),%eax
c10070bf:	83 ec 0c             	sub    $0xc,%esp
c10070c2:	50                   	push   %eax
c10070c3:	e8 9b ff ff ff       	call   c1007063 <fd_local2global>
c10070c8:	83 c4 10             	add    $0x10,%esp
c10070cb:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10070ce:	8b 45 08             	mov    0x8(%ebp),%eax
c10070d1:	83 ec 0c             	sub    $0xc,%esp
c10070d4:	50                   	push   %eax
c10070d5:	e8 13 3b 00 00       	call   c100abed <is_pipe>
c10070da:	83 c4 10             	add    $0x10,%esp
c10070dd:	84 c0                	test   %al,%al
c10070df:	0f 84 84 00 00 00    	je     c1007169 <sys_close+0xc4>
c10070e5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10070e8:	89 d0                	mov    %edx,%eax
c10070ea:	01 c0                	add    %eax,%eax
c10070ec:	01 d0                	add    %edx,%eax
c10070ee:	c1 e0 02             	shl    $0x2,%eax
c10070f1:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10070f6:	8b 00                	mov    (%eax),%eax
c10070f8:	8d 48 ff             	lea    -0x1(%eax),%ecx
c10070fb:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10070fe:	89 d0                	mov    %edx,%eax
c1007100:	01 c0                	add    %eax,%eax
c1007102:	01 d0                	add    %edx,%eax
c1007104:	c1 e0 02             	shl    $0x2,%eax
c1007107:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100710c:	89 08                	mov    %ecx,(%eax)
c100710e:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007111:	89 d0                	mov    %edx,%eax
c1007113:	01 c0                	add    %eax,%eax
c1007115:	01 d0                	add    %edx,%eax
c1007117:	c1 e0 02             	shl    $0x2,%eax
c100711a:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100711f:	8b 00                	mov    (%eax),%eax
c1007121:	85 c0                	test   %eax,%eax
c1007123:	75 3b                	jne    c1007160 <sys_close+0xbb>
c1007125:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007128:	89 d0                	mov    %edx,%eax
c100712a:	01 c0                	add    %eax,%eax
c100712c:	01 d0                	add    %edx,%eax
c100712e:	c1 e0 02             	shl    $0x2,%eax
c1007131:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1007136:	8b 00                	mov    (%eax),%eax
c1007138:	83 ec 08             	sub    $0x8,%esp
c100713b:	68 00 10 00 00       	push   $0x1000
c1007140:	50                   	push   %eax
c1007141:	e8 97 bc ff ff       	call   c1002ddd <vmm_free>
c1007146:	83 c4 10             	add    $0x10,%esp
c1007149:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100714c:	89 d0                	mov    %edx,%eax
c100714e:	01 c0                	add    %eax,%eax
c1007150:	01 d0                	add    %edx,%eax
c1007152:	c1 e0 02             	shl    $0x2,%eax
c1007155:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100715a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1007160:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007167:	eb 20                	jmp    c1007189 <sys_close+0xe4>
c1007169:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100716c:	89 d0                	mov    %edx,%eax
c100716e:	01 c0                	add    %eax,%eax
c1007170:	01 d0                	add    %edx,%eax
c1007172:	c1 e0 02             	shl    $0x2,%eax
c1007175:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100717a:	83 ec 0c             	sub    $0xc,%esp
c100717d:	50                   	push   %eax
c100717e:	e8 82 28 00 00       	call   c1009a05 <file_close>
c1007183:	83 c4 10             	add    $0x10,%esp
c1007186:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007189:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100718e:	8b 55 08             	mov    0x8(%ebp),%edx
c1007191:	83 c2 1c             	add    $0x1c,%edx
c1007194:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c100719b:	ff 
c100719c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100719f:	c9                   	leave  
c10071a0:	c3                   	ret    

c10071a1 <sys_write>:
c10071a1:	55                   	push   %ebp
c10071a2:	89 e5                	mov    %esp,%ebp
c10071a4:	57                   	push   %edi
c10071a5:	81 ec 14 04 00 00    	sub    $0x414,%esp
c10071ab:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10071af:	79 1a                	jns    c10071cb <sys_write+0x2a>
c10071b1:	83 ec 0c             	sub    $0xc,%esp
c10071b4:	68 d0 be 00 c1       	push   $0xc100bed0
c10071b9:	e8 3d e6 ff ff       	call   c10057fb <printk>
c10071be:	83 c4 10             	add    $0x10,%esp
c10071c1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10071c6:	e9 30 01 00 00       	jmp    c10072fb <sys_write+0x15a>
c10071cb:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c10071cf:	0f 85 8c 00 00 00    	jne    c1007261 <sys_write+0xc0>
c10071d5:	8b 45 08             	mov    0x8(%ebp),%eax
c10071d8:	83 ec 0c             	sub    $0xc,%esp
c10071db:	50                   	push   %eax
c10071dc:	e8 0c 3a 00 00       	call   c100abed <is_pipe>
c10071e1:	83 c4 10             	add    $0x10,%esp
c10071e4:	84 c0                	test   %al,%al
c10071e6:	74 19                	je     c1007201 <sys_write+0x60>
c10071e8:	83 ec 04             	sub    $0x4,%esp
c10071eb:	ff 75 10             	pushl  0x10(%ebp)
c10071ee:	ff 75 0c             	pushl  0xc(%ebp)
c10071f1:	ff 75 08             	pushl  0x8(%ebp)
c10071f4:	e8 7f 3b 00 00       	call   c100ad78 <pipe_write>
c10071f9:	83 c4 10             	add    $0x10,%esp
c10071fc:	e9 fa 00 00 00       	jmp    c10072fb <sys_write+0x15a>
c1007201:	c7 85 ec fb ff ff 00 	movl   $0x0,-0x414(%ebp)
c1007208:	00 00 00 
c100720b:	8d 95 f0 fb ff ff    	lea    -0x410(%ebp),%edx
c1007211:	b8 00 00 00 00       	mov    $0x0,%eax
c1007216:	b9 ff 00 00 00       	mov    $0xff,%ecx
c100721b:	89 d7                	mov    %edx,%edi
c100721d:	f3 ab                	rep stos %eax,%es:(%edi)
c100721f:	83 ec 04             	sub    $0x4,%esp
c1007222:	ff 75 10             	pushl  0x10(%ebp)
c1007225:	ff 75 0c             	pushl  0xc(%ebp)
c1007228:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c100722e:	50                   	push   %eax
c100722f:	e8 d4 8e ff ff       	call   c1000108 <memcpy>
c1007234:	83 c4 10             	add    $0x10,%esp
c1007237:	83 ec 0c             	sub    $0xc,%esp
c100723a:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c1007240:	50                   	push   %eax
c1007241:	e8 b5 e5 ff ff       	call   c10057fb <printk>
c1007246:	83 c4 10             	add    $0x10,%esp
c1007249:	83 ec 0c             	sub    $0xc,%esp
c100724c:	68 e5 be 00 c1       	push   $0xc100bee5
c1007251:	e8 a5 e5 ff ff       	call   c10057fb <printk>
c1007256:	83 c4 10             	add    $0x10,%esp
c1007259:	8b 45 10             	mov    0x10(%ebp),%eax
c100725c:	e9 9a 00 00 00       	jmp    c10072fb <sys_write+0x15a>
c1007261:	8b 45 08             	mov    0x8(%ebp),%eax
c1007264:	83 ec 0c             	sub    $0xc,%esp
c1007267:	50                   	push   %eax
c1007268:	e8 80 39 00 00       	call   c100abed <is_pipe>
c100726d:	83 c4 10             	add    $0x10,%esp
c1007270:	84 c0                	test   %al,%al
c1007272:	74 16                	je     c100728a <sys_write+0xe9>
c1007274:	83 ec 04             	sub    $0x4,%esp
c1007277:	ff 75 10             	pushl  0x10(%ebp)
c100727a:	ff 75 0c             	pushl  0xc(%ebp)
c100727d:	ff 75 08             	pushl  0x8(%ebp)
c1007280:	e8 f3 3a 00 00       	call   c100ad78 <pipe_write>
c1007285:	83 c4 10             	add    $0x10,%esp
c1007288:	eb 71                	jmp    c10072fb <sys_write+0x15a>
c100728a:	8b 45 08             	mov    0x8(%ebp),%eax
c100728d:	83 ec 0c             	sub    $0xc,%esp
c1007290:	50                   	push   %eax
c1007291:	e8 cd fd ff ff       	call   c1007063 <fd_local2global>
c1007296:	83 c4 10             	add    $0x10,%esp
c1007299:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100729c:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100729f:	89 d0                	mov    %edx,%eax
c10072a1:	01 c0                	add    %eax,%eax
c10072a3:	01 d0                	add    %edx,%eax
c10072a5:	c1 e0 02             	shl    $0x2,%eax
c10072a8:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10072ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10072b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10072b3:	8b 40 04             	mov    0x4(%eax),%eax
c10072b6:	83 e0 01             	and    $0x1,%eax
c10072b9:	85 c0                	test   %eax,%eax
c10072bb:	75 0d                	jne    c10072ca <sys_write+0x129>
c10072bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10072c0:	8b 40 04             	mov    0x4(%eax),%eax
c10072c3:	83 e0 02             	and    $0x2,%eax
c10072c6:	85 c0                	test   %eax,%eax
c10072c8:	74 1c                	je     c10072e6 <sys_write+0x145>
c10072ca:	83 ec 04             	sub    $0x4,%esp
c10072cd:	ff 75 10             	pushl  0x10(%ebp)
c10072d0:	ff 75 0c             	pushl  0xc(%ebp)
c10072d3:	ff 75 f0             	pushl  -0x10(%ebp)
c10072d6:	e8 6a 27 00 00       	call   c1009a45 <file_write>
c10072db:	83 c4 10             	add    $0x10,%esp
c10072de:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10072e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10072e4:	eb 15                	jmp    c10072fb <sys_write+0x15a>
c10072e6:	83 ec 0c             	sub    $0xc,%esp
c10072e9:	68 e8 be 00 c1       	push   $0xc100bee8
c10072ee:	e8 08 e5 ff ff       	call   c10057fb <printk>
c10072f3:	83 c4 10             	add    $0x10,%esp
c10072f6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10072fb:	8b 7d fc             	mov    -0x4(%ebp),%edi
c10072fe:	c9                   	leave  
c10072ff:	c3                   	ret    

c1007300 <sys_read>:
c1007300:	55                   	push   %ebp
c1007301:	89 e5                	mov    %esp,%ebp
c1007303:	83 ec 18             	sub    $0x18,%esp
c1007306:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
c100730a:	75 19                	jne    c1007325 <sys_read+0x25>
c100730c:	68 2e bf 00 c1       	push   $0xc100bf2e
c1007311:	68 70 c3 00 c1       	push   $0xc100c370
c1007316:	68 a5 01 00 00       	push   $0x1a5
c100731b:	68 14 bd 00 c1       	push   $0xc100bd14
c1007320:	e8 46 90 ff ff       	call   c100036b <__PANIC>
c1007325:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c100732c:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007330:	78 0c                	js     c100733e <sys_read+0x3e>
c1007332:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1007336:	74 06                	je     c100733e <sys_read+0x3e>
c1007338:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c100733c:	75 15                	jne    c1007353 <sys_read+0x53>
c100733e:	83 ec 0c             	sub    $0xc,%esp
c1007341:	68 3a bf 00 c1       	push   $0xc100bf3a
c1007346:	e8 b0 e4 ff ff       	call   c10057fb <printk>
c100734b:	83 c4 10             	add    $0x10,%esp
c100734e:	e9 ff 00 00 00       	jmp    c1007452 <sys_read+0x152>
c1007353:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007357:	0f 85 91 00 00 00    	jne    c10073ee <sys_read+0xee>
c100735d:	8b 45 08             	mov    0x8(%ebp),%eax
c1007360:	83 ec 0c             	sub    $0xc,%esp
c1007363:	50                   	push   %eax
c1007364:	e8 84 38 00 00       	call   c100abed <is_pipe>
c1007369:	83 c4 10             	add    $0x10,%esp
c100736c:	84 c0                	test   %al,%al
c100736e:	74 1c                	je     c100738c <sys_read+0x8c>
c1007370:	83 ec 04             	sub    $0x4,%esp
c1007373:	ff 75 10             	pushl  0x10(%ebp)
c1007376:	ff 75 0c             	pushl  0xc(%ebp)
c1007379:	ff 75 08             	pushl  0x8(%ebp)
c100737c:	e8 74 39 00 00       	call   c100acf5 <pipe_read>
c1007381:	83 c4 10             	add    $0x10,%esp
c1007384:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007387:	e9 c6 00 00 00       	jmp    c1007452 <sys_read+0x152>
c100738c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100738f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007392:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007399:	0f b6 05 6c fc 00 c1 	movzbl 0xc100fc6c,%eax
c10073a0:	84 c0                	test   %al,%al
c10073a2:	75 2d                	jne    c10073d1 <sys_read+0xd1>
c10073a4:	83 ec 0c             	sub    $0xc,%esp
c10073a7:	68 b4 1c 01 c1       	push   $0xc1011cb4
c10073ac:	e8 fe e8 ff ff       	call   c1005caf <sema_down>
c10073b1:	83 c4 10             	add    $0x10,%esp
c10073b4:	eb 1b                	jmp    c10073d1 <sys_read+0xd1>
c10073b6:	0f b6 15 6c fc 00 c1 	movzbl 0xc100fc6c,%edx
c10073bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10073c0:	88 10                	mov    %dl,(%eax)
c10073c2:	c6 05 6c fc 00 c1 00 	movb   $0x0,0xc100fc6c
c10073c9:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10073cd:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10073d1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10073d4:	3b 45 10             	cmp    0x10(%ebp),%eax
c10073d7:	72 dd                	jb     c10073b6 <sys_read+0xb6>
c10073d9:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10073dd:	74 05                	je     c10073e4 <sys_read+0xe4>
c10073df:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10073e2:	eb 05                	jmp    c10073e9 <sys_read+0xe9>
c10073e4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10073e9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10073ec:	eb 64                	jmp    c1007452 <sys_read+0x152>
c10073ee:	8b 45 08             	mov    0x8(%ebp),%eax
c10073f1:	83 ec 0c             	sub    $0xc,%esp
c10073f4:	50                   	push   %eax
c10073f5:	e8 f3 37 00 00       	call   c100abed <is_pipe>
c10073fa:	83 c4 10             	add    $0x10,%esp
c10073fd:	84 c0                	test   %al,%al
c10073ff:	74 19                	je     c100741a <sys_read+0x11a>
c1007401:	83 ec 04             	sub    $0x4,%esp
c1007404:	ff 75 10             	pushl  0x10(%ebp)
c1007407:	ff 75 0c             	pushl  0xc(%ebp)
c100740a:	ff 75 08             	pushl  0x8(%ebp)
c100740d:	e8 e3 38 00 00       	call   c100acf5 <pipe_read>
c1007412:	83 c4 10             	add    $0x10,%esp
c1007415:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007418:	eb 38                	jmp    c1007452 <sys_read+0x152>
c100741a:	8b 45 08             	mov    0x8(%ebp),%eax
c100741d:	83 ec 0c             	sub    $0xc,%esp
c1007420:	50                   	push   %eax
c1007421:	e8 3d fc ff ff       	call   c1007063 <fd_local2global>
c1007426:	83 c4 10             	add    $0x10,%esp
c1007429:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100742c:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100742f:	89 d0                	mov    %edx,%eax
c1007431:	01 c0                	add    %eax,%eax
c1007433:	01 d0                	add    %edx,%eax
c1007435:	c1 e0 02             	shl    $0x2,%eax
c1007438:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100743d:	83 ec 04             	sub    $0x4,%esp
c1007440:	ff 75 10             	pushl  0x10(%ebp)
c1007443:	ff 75 0c             	pushl  0xc(%ebp)
c1007446:	50                   	push   %eax
c1007447:	e8 5b 2d 00 00       	call   c100a1a7 <file_read>
c100744c:	83 c4 10             	add    $0x10,%esp
c100744f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007452:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007455:	c9                   	leave  
c1007456:	c3                   	ret    

c1007457 <sys_lseek>:
c1007457:	55                   	push   %ebp
c1007458:	89 e5                	mov    %esp,%ebp
c100745a:	83 ec 28             	sub    $0x28,%esp
c100745d:	8b 45 10             	mov    0x10(%ebp),%eax
c1007460:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1007463:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007467:	79 1a                	jns    c1007483 <sys_lseek+0x2c>
c1007469:	83 ec 0c             	sub    $0xc,%esp
c100746c:	68 4e bf 00 c1       	push   $0xc100bf4e
c1007471:	e8 85 e3 ff ff       	call   c10057fb <printk>
c1007476:	83 c4 10             	add    $0x10,%esp
c1007479:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100747e:	e9 be 00 00 00       	jmp    c1007541 <sys_lseek+0xea>
c1007483:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
c1007487:	74 06                	je     c100748f <sys_lseek+0x38>
c1007489:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
c100748d:	76 19                	jbe    c10074a8 <sys_lseek+0x51>
c100748f:	68 63 bf 00 c1       	push   $0xc100bf63
c1007494:	68 7c c3 00 c1       	push   $0xc100c37c
c1007499:	68 cc 01 00 00       	push   $0x1cc
c100749e:	68 14 bd 00 c1       	push   $0xc100bd14
c10074a3:	e8 c3 8e ff ff       	call   c100036b <__PANIC>
c10074a8:	8b 45 08             	mov    0x8(%ebp),%eax
c10074ab:	83 ec 0c             	sub    $0xc,%esp
c10074ae:	50                   	push   %eax
c10074af:	e8 af fb ff ff       	call   c1007063 <fd_local2global>
c10074b4:	83 c4 10             	add    $0x10,%esp
c10074b7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10074ba:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10074bd:	89 d0                	mov    %edx,%eax
c10074bf:	01 c0                	add    %eax,%eax
c10074c1:	01 d0                	add    %edx,%eax
c10074c3:	c1 e0 02             	shl    $0x2,%eax
c10074c6:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10074cb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10074ce:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10074d5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10074d8:	8b 40 08             	mov    0x8(%eax),%eax
c10074db:	8b 40 04             	mov    0x4(%eax),%eax
c10074de:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10074e1:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10074e5:	83 f8 03             	cmp    $0x3,%eax
c10074e8:	74 2a                	je     c1007514 <sys_lseek+0xbd>
c10074ea:	83 f8 03             	cmp    $0x3,%eax
c10074ed:	7f 30                	jg     c100751f <sys_lseek+0xc8>
c10074ef:	83 f8 01             	cmp    $0x1,%eax
c10074f2:	74 07                	je     c10074fb <sys_lseek+0xa4>
c10074f4:	83 f8 02             	cmp    $0x2,%eax
c10074f7:	74 0a                	je     c1007503 <sys_lseek+0xac>
c10074f9:	eb 24                	jmp    c100751f <sys_lseek+0xc8>
c10074fb:	8b 45 0c             	mov    0xc(%ebp),%eax
c10074fe:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007501:	eb 1c                	jmp    c100751f <sys_lseek+0xc8>
c1007503:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007506:	8b 00                	mov    (%eax),%eax
c1007508:	89 c2                	mov    %eax,%edx
c100750a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100750d:	01 d0                	add    %edx,%eax
c100750f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007512:	eb 0b                	jmp    c100751f <sys_lseek+0xc8>
c1007514:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1007517:	8b 45 0c             	mov    0xc(%ebp),%eax
c100751a:	01 d0                	add    %edx,%eax
c100751c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100751f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1007523:	78 08                	js     c100752d <sys_lseek+0xd6>
c1007525:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007528:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c100752b:	7f 07                	jg     c1007534 <sys_lseek+0xdd>
c100752d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007532:	eb 0d                	jmp    c1007541 <sys_lseek+0xea>
c1007534:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007537:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100753a:	89 10                	mov    %edx,(%eax)
c100753c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100753f:	8b 00                	mov    (%eax),%eax
c1007541:	c9                   	leave  
c1007542:	c3                   	ret    

c1007543 <sys_unlink>:
c1007543:	55                   	push   %ebp
c1007544:	89 e5                	mov    %esp,%ebp
c1007546:	81 ec 28 02 00 00    	sub    $0x228,%esp
c100754c:	83 ec 0c             	sub    $0xc,%esp
c100754f:	ff 75 08             	pushl  0x8(%ebp)
c1007552:	e8 c7 8b ff ff       	call   c100011e <strlen>
c1007557:	83 c4 10             	add    $0x10,%esp
c100755a:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c100755f:	76 19                	jbe    c100757a <sys_unlink+0x37>
c1007561:	68 7c bf 00 c1       	push   $0xc100bf7c
c1007566:	68 88 c3 00 c1       	push   $0xc100c388
c100756b:	68 e6 01 00 00       	push   $0x1e6
c1007570:	68 14 bd 00 c1       	push   $0xc100bd14
c1007575:	e8 f1 8d ff ff       	call   c100036b <__PANIC>
c100757a:	83 ec 04             	sub    $0x4,%esp
c100757d:	68 08 02 00 00       	push   $0x208
c1007582:	6a 00                	push   $0x0
c1007584:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c100758a:	50                   	push   %eax
c100758b:	e8 1a 8b ff ff       	call   c10000aa <memset>
c1007590:	83 c4 10             	add    $0x10,%esp
c1007593:	83 ec 08             	sub    $0x8,%esp
c1007596:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c100759c:	50                   	push   %eax
c100759d:	ff 75 08             	pushl  0x8(%ebp)
c10075a0:	e8 d2 f5 ff ff       	call   c1006b77 <search_file>
c10075a5:	83 c4 10             	add    $0x10,%esp
c10075a8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10075ab:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c10075af:	75 19                	jne    c10075ca <sys_unlink+0x87>
c10075b1:	68 9c bf 00 c1       	push   $0xc100bf9c
c10075b6:	68 88 c3 00 c1       	push   $0xc100c388
c10075bb:	68 ec 01 00 00       	push   $0x1ec
c10075c0:	68 14 bd 00 c1       	push   $0xc100bd14
c10075c5:	e8 a1 8d ff ff       	call   c100036b <__PANIC>
c10075ca:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10075ce:	75 2c                	jne    c10075fc <sys_unlink+0xb9>
c10075d0:	83 ec 08             	sub    $0x8,%esp
c10075d3:	ff 75 08             	pushl  0x8(%ebp)
c10075d6:	68 aa bf 00 c1       	push   $0xc100bfaa
c10075db:	e8 1b e2 ff ff       	call   c10057fb <printk>
c10075e0:	83 c4 10             	add    $0x10,%esp
c10075e3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10075e6:	83 ec 0c             	sub    $0xc,%esp
c10075e9:	50                   	push   %eax
c10075ea:	e8 13 11 00 00       	call   c1008702 <dir_close>
c10075ef:	83 c4 10             	add    $0x10,%esp
c10075f2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10075f7:	e9 65 01 00 00       	jmp    c1007761 <sys_unlink+0x21e>
c10075fc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10075ff:	83 f8 02             	cmp    $0x2,%eax
c1007602:	75 29                	jne    c100762d <sys_unlink+0xea>
c1007604:	83 ec 0c             	sub    $0xc,%esp
c1007607:	68 c0 bf 00 c1       	push   $0xc100bfc0
c100760c:	e8 ea e1 ff ff       	call   c10057fb <printk>
c1007611:	83 c4 10             	add    $0x10,%esp
c1007614:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007617:	83 ec 0c             	sub    $0xc,%esp
c100761a:	50                   	push   %eax
c100761b:	e8 e2 10 00 00       	call   c1008702 <dir_close>
c1007620:	83 c4 10             	add    $0x10,%esp
c1007623:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007628:	e9 34 01 00 00       	jmp    c1007761 <sys_unlink+0x21e>
c100762d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007634:	eb 37                	jmp    c100766d <sys_unlink+0x12a>
c1007636:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007639:	89 d0                	mov    %edx,%eax
c100763b:	01 c0                	add    %eax,%eax
c100763d:	01 d0                	add    %edx,%eax
c100763f:	c1 e0 02             	shl    $0x2,%eax
c1007642:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1007647:	8b 00                	mov    (%eax),%eax
c1007649:	85 c0                	test   %eax,%eax
c100764b:	74 1c                	je     c1007669 <sys_unlink+0x126>
c100764d:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007650:	89 d0                	mov    %edx,%eax
c1007652:	01 c0                	add    %eax,%eax
c1007654:	01 d0                	add    %edx,%eax
c1007656:	c1 e0 02             	shl    $0x2,%eax
c1007659:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100765e:	8b 00                	mov    (%eax),%eax
c1007660:	8b 10                	mov    (%eax),%edx
c1007662:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007665:	39 c2                	cmp    %eax,%edx
c1007667:	74 0c                	je     c1007675 <sys_unlink+0x132>
c1007669:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100766d:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1007671:	76 c3                	jbe    c1007636 <sys_unlink+0xf3>
c1007673:	eb 01                	jmp    c1007676 <sys_unlink+0x133>
c1007675:	90                   	nop
c1007676:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c100767a:	77 2c                	ja     c10076a8 <sys_unlink+0x165>
c100767c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100767f:	83 ec 0c             	sub    $0xc,%esp
c1007682:	50                   	push   %eax
c1007683:	e8 7a 10 00 00       	call   c1008702 <dir_close>
c1007688:	83 c4 10             	add    $0x10,%esp
c100768b:	83 ec 08             	sub    $0x8,%esp
c100768e:	ff 75 08             	pushl  0x8(%ebp)
c1007691:	68 00 c0 00 c1       	push   $0xc100c000
c1007696:	e8 60 e1 ff ff       	call   c10057fb <printk>
c100769b:	83 c4 10             	add    $0x10,%esp
c100769e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10076a3:	e9 b9 00 00 00       	jmp    c1007761 <sys_unlink+0x21e>
c10076a8:	83 7d f4 20          	cmpl   $0x20,-0xc(%ebp)
c10076ac:	74 19                	je     c10076c7 <sys_unlink+0x184>
c10076ae:	68 29 c0 00 c1       	push   $0xc100c029
c10076b3:	68 88 c3 00 c1       	push   $0xc100c388
c10076b8:	68 05 02 00 00       	push   $0x205
c10076bd:	68 14 bd 00 c1       	push   $0xc100bd14
c10076c2:	e8 a4 8c ff ff       	call   c100036b <__PANIC>
c10076c7:	83 ec 08             	sub    $0x8,%esp
c10076ca:	6a 02                	push   $0x2
c10076cc:	68 00 04 00 00       	push   $0x400
c10076d1:	e8 e2 b5 ff ff       	call   c1002cb8 <vmm_malloc>
c10076d6:	83 c4 10             	add    $0x10,%esp
c10076d9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10076dc:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10076e0:	75 26                	jne    c1007708 <sys_unlink+0x1c5>
c10076e2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10076e5:	83 ec 0c             	sub    $0xc,%esp
c10076e8:	50                   	push   %eax
c10076e9:	e8 14 10 00 00       	call   c1008702 <dir_close>
c10076ee:	83 c4 10             	add    $0x10,%esp
c10076f1:	83 ec 0c             	sub    $0xc,%esp
c10076f4:	68 44 c0 00 c1       	push   $0xc100c044
c10076f9:	e8 fd e0 ff ff       	call   c10057fb <printk>
c10076fe:	83 c4 10             	add    $0x10,%esp
c1007701:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007706:	eb 59                	jmp    c1007761 <sys_unlink+0x21e>
c1007708:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100770b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100770e:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007713:	ff 75 ec             	pushl  -0x14(%ebp)
c1007716:	ff 75 f0             	pushl  -0x10(%ebp)
c1007719:	ff 75 e8             	pushl  -0x18(%ebp)
c100771c:	50                   	push   %eax
c100771d:	e8 c1 14 00 00       	call   c1008be3 <delete_dir_entry>
c1007722:	83 c4 10             	add    $0x10,%esp
c1007725:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100772a:	83 ec 08             	sub    $0x8,%esp
c100772d:	ff 75 f0             	pushl  -0x10(%ebp)
c1007730:	50                   	push   %eax
c1007731:	e8 7d 31 00 00       	call   c100a8b3 <inode_release>
c1007736:	83 c4 10             	add    $0x10,%esp
c1007739:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100773c:	83 ec 08             	sub    $0x8,%esp
c100773f:	68 00 04 00 00       	push   $0x400
c1007744:	50                   	push   %eax
c1007745:	e8 93 b6 ff ff       	call   c1002ddd <vmm_free>
c100774a:	83 c4 10             	add    $0x10,%esp
c100774d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007750:	83 ec 0c             	sub    $0xc,%esp
c1007753:	50                   	push   %eax
c1007754:	e8 a9 0f 00 00       	call   c1008702 <dir_close>
c1007759:	83 c4 10             	add    $0x10,%esp
c100775c:	b8 00 00 00 00       	mov    $0x0,%eax
c1007761:	c9                   	leave  
c1007762:	c3                   	ret    

c1007763 <sys_mkdir>:
c1007763:	55                   	push   %ebp
c1007764:	89 e5                	mov    %esp,%ebp
c1007766:	53                   	push   %ebx
c1007767:	81 ec a4 02 00 00    	sub    $0x2a4,%esp
c100776d:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007771:	83 ec 08             	sub    $0x8,%esp
c1007774:	6a 02                	push   $0x2
c1007776:	68 00 04 00 00       	push   $0x400
c100777b:	e8 38 b5 ff ff       	call   c1002cb8 <vmm_malloc>
c1007780:	83 c4 10             	add    $0x10,%esp
c1007783:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007786:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100778a:	75 1a                	jne    c10077a6 <sys_mkdir+0x43>
c100778c:	83 ec 0c             	sub    $0xc,%esp
c100778f:	68 6c c0 00 c1       	push   $0xc100c06c
c1007794:	e8 62 e0 ff ff       	call   c10057fb <printk>
c1007799:	83 c4 10             	add    $0x10,%esp
c100779c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10077a1:	e9 f2 03 00 00       	jmp    c1007b98 <sys_mkdir+0x435>
c10077a6:	83 ec 04             	sub    $0x4,%esp
c10077a9:	68 08 02 00 00       	push   $0x208
c10077ae:	6a 00                	push   $0x0
c10077b0:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10077b6:	50                   	push   %eax
c10077b7:	e8 ee 88 ff ff       	call   c10000aa <memset>
c10077bc:	83 c4 10             	add    $0x10,%esp
c10077bf:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
c10077c6:	83 ec 08             	sub    $0x8,%esp
c10077c9:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10077cf:	50                   	push   %eax
c10077d0:	ff 75 08             	pushl  0x8(%ebp)
c10077d3:	e8 9f f3 ff ff       	call   c1006b77 <search_file>
c10077d8:	83 c4 10             	add    $0x10,%esp
c10077db:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10077de:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10077e2:	74 1c                	je     c1007800 <sys_mkdir+0x9d>
c10077e4:	83 ec 08             	sub    $0x8,%esp
c10077e7:	ff 75 08             	pushl  0x8(%ebp)
c10077ea:	68 98 c0 00 c1       	push   $0xc100c098
c10077ef:	e8 07 e0 ff ff       	call   c10057fb <printk>
c10077f4:	83 c4 10             	add    $0x10,%esp
c10077f7:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10077fb:	e9 08 03 00 00       	jmp    c1007b08 <sys_mkdir+0x3a5>
c1007800:	83 ec 0c             	sub    $0xc,%esp
c1007803:	ff 75 08             	pushl  0x8(%ebp)
c1007806:	e8 e4 f2 ff ff       	call   c1006aef <path_depth_cnt>
c100780b:	83 c4 10             	add    $0x10,%esp
c100780e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007811:	83 ec 0c             	sub    $0xc,%esp
c1007814:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c100781a:	50                   	push   %eax
c100781b:	e8 cf f2 ff ff       	call   c1006aef <path_depth_cnt>
c1007820:	83 c4 10             	add    $0x10,%esp
c1007823:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007826:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007829:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c100782c:	74 23                	je     c1007851 <sys_mkdir+0xee>
c100782e:	83 ec 04             	sub    $0x4,%esp
c1007831:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1007837:	50                   	push   %eax
c1007838:	ff 75 08             	pushl  0x8(%ebp)
c100783b:	68 c0 c0 00 c1       	push   $0xc100c0c0
c1007840:	e8 b6 df ff ff       	call   c10057fb <printk>
c1007845:	83 c4 10             	add    $0x10,%esp
c1007848:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c100784c:	e9 b7 02 00 00       	jmp    c1007b08 <sys_mkdir+0x3a5>
c1007851:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007854:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007857:	83 ec 08             	sub    $0x8,%esp
c100785a:	6a 2f                	push   $0x2f
c100785c:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1007862:	50                   	push   %eax
c1007863:	e8 2e 89 ff ff       	call   c1000196 <strrchr>
c1007868:	83 c4 10             	add    $0x10,%esp
c100786b:	83 c0 01             	add    $0x1,%eax
c100786e:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007871:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007876:	83 ec 0c             	sub    $0xc,%esp
c1007879:	50                   	push   %eax
c100787a:	e8 7b 1b 00 00       	call   c10093fa <inode_bitmap_alloc>
c100787f:	83 c4 10             	add    $0x10,%esp
c1007882:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007885:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007889:	75 19                	jne    c10078a4 <sys_mkdir+0x141>
c100788b:	83 ec 0c             	sub    $0xc,%esp
c100788e:	68 f4 c0 00 c1       	push   $0xc100c0f4
c1007893:	e8 63 df ff ff       	call   c10057fb <printk>
c1007898:	83 c4 10             	add    $0x10,%esp
c100789b:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c100789f:	e9 64 02 00 00       	jmp    c1007b08 <sys_mkdir+0x3a5>
c10078a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10078a7:	83 ec 08             	sub    $0x8,%esp
c10078aa:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c10078b0:	52                   	push   %edx
c10078b1:	50                   	push   %eax
c10078b2:	e8 c1 32 00 00       	call   c100ab78 <inode_init>
c10078b7:	83 c4 10             	add    $0x10,%esp
c10078ba:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
c10078c1:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
c10078c8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10078cd:	83 ec 0c             	sub    $0xc,%esp
c10078d0:	50                   	push   %eax
c10078d1:	e8 e4 1b 00 00       	call   c10094ba <block_bitmap_alloc>
c10078d6:	83 c4 10             	add    $0x10,%esp
c10078d9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10078dc:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
c10078e0:	75 19                	jne    c10078fb <sys_mkdir+0x198>
c10078e2:	83 ec 0c             	sub    $0xc,%esp
c10078e5:	68 18 c1 00 c1       	push   $0xc100c118
c10078ea:	e8 0c df ff ff       	call   c10057fb <printk>
c10078ef:	83 c4 10             	add    $0x10,%esp
c10078f2:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10078f6:	e9 0d 02 00 00       	jmp    c1007b08 <sys_mkdir+0x3a5>
c10078fb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10078fe:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
c1007904:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1007907:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100790c:	8b 40 10             	mov    0x10(%eax),%eax
c100790f:	8b 40 28             	mov    0x28(%eax),%eax
c1007912:	29 c2                	sub    %eax,%edx
c1007914:	89 d0                	mov    %edx,%eax
c1007916:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007919:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
c100791d:	75 19                	jne    c1007938 <sys_mkdir+0x1d5>
c100791f:	68 53 c1 00 c1       	push   $0xc100c153
c1007924:	68 94 c3 00 c1       	push   $0xc100c394
c1007929:	68 4d 02 00 00       	push   $0x24d
c100792e:	68 14 bd 00 c1       	push   $0xc100bd14
c1007933:	e8 33 8a ff ff       	call   c100036b <__PANIC>
c1007938:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100793d:	83 ec 04             	sub    $0x4,%esp
c1007940:	6a 01                	push   $0x1
c1007942:	ff 75 d8             	pushl  -0x28(%ebp)
c1007945:	50                   	push   %eax
c1007946:	e8 3d 1c 00 00       	call   c1009588 <bitmap_sync>
c100794b:	83 c4 10             	add    $0x10,%esp
c100794e:	83 ec 04             	sub    $0x4,%esp
c1007951:	68 00 04 00 00       	push   $0x400
c1007956:	6a 00                	push   $0x0
c1007958:	ff 75 ec             	pushl  -0x14(%ebp)
c100795b:	e8 4a 87 ff ff       	call   c10000aa <memset>
c1007960:	83 c4 10             	add    $0x10,%esp
c1007963:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007966:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007969:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100796c:	83 ec 04             	sub    $0x4,%esp
c100796f:	6a 01                	push   $0x1
c1007971:	68 55 bc 00 c1       	push   $0xc100bc55
c1007976:	50                   	push   %eax
c1007977:	e8 8c 87 ff ff       	call   c1000108 <memcpy>
c100797c:	83 c4 10             	add    $0x10,%esp
c100797f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007982:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007985:	89 50 10             	mov    %edx,0x10(%eax)
c1007988:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100798b:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1007992:	83 45 d0 18          	addl   $0x18,-0x30(%ebp)
c1007996:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007999:	83 ec 04             	sub    $0x4,%esp
c100799c:	6a 02                	push   $0x2
c100799e:	68 57 bc 00 c1       	push   $0xc100bc57
c10079a3:	50                   	push   %eax
c10079a4:	e8 5f 87 ff ff       	call   c1000108 <memcpy>
c10079a9:	83 c4 10             	add    $0x10,%esp
c10079ac:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10079af:	8b 00                	mov    (%eax),%eax
c10079b1:	8b 10                	mov    (%eax),%edx
c10079b3:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10079b6:	89 50 10             	mov    %edx,0x10(%eax)
c10079b9:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10079bc:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c10079c3:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
c10079c9:	83 ec 04             	sub    $0x4,%esp
c10079cc:	6a 01                	push   $0x1
c10079ce:	50                   	push   %eax
c10079cf:	ff 75 ec             	pushl  -0x14(%ebp)
c10079d2:	e8 09 e7 ff ff       	call   c10060e0 <ide_write>
c10079d7:	83 c4 10             	add    $0x10,%esp
c10079da:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10079df:	8b 40 10             	mov    0x10(%eax),%eax
c10079e2:	8b 40 30             	mov    0x30(%eax),%eax
c10079e5:	01 c0                	add    %eax,%eax
c10079e7:	89 85 80 fd ff ff    	mov    %eax,-0x280(%ebp)
c10079ed:	83 ec 04             	sub    $0x4,%esp
c10079f0:	6a 18                	push   $0x18
c10079f2:	6a 00                	push   $0x0
c10079f4:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c10079fa:	50                   	push   %eax
c10079fb:	e8 aa 86 ff ff       	call   c10000aa <memset>
c1007a00:	83 c4 10             	add    $0x10,%esp
c1007a03:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007a06:	8d 95 64 fd ff ff    	lea    -0x29c(%ebp),%edx
c1007a0c:	52                   	push   %edx
c1007a0d:	6a 02                	push   $0x2
c1007a0f:	50                   	push   %eax
c1007a10:	ff 75 dc             	pushl  -0x24(%ebp)
c1007a13:	e8 24 0d 00 00       	call   c100873c <create_dir_entry>
c1007a18:	83 c4 10             	add    $0x10,%esp
c1007a1b:	83 ec 04             	sub    $0x4,%esp
c1007a1e:	68 00 04 00 00       	push   $0x400
c1007a23:	6a 00                	push   $0x0
c1007a25:	ff 75 ec             	pushl  -0x14(%ebp)
c1007a28:	e8 7d 86 ff ff       	call   c10000aa <memset>
c1007a2d:	83 c4 10             	add    $0x10,%esp
c1007a30:	83 ec 04             	sub    $0x4,%esp
c1007a33:	ff 75 ec             	pushl  -0x14(%ebp)
c1007a36:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c1007a3c:	50                   	push   %eax
c1007a3d:	ff 75 e0             	pushl  -0x20(%ebp)
c1007a40:	e8 63 0d 00 00       	call   c10087a8 <sync_dir_entry>
c1007a45:	83 c4 10             	add    $0x10,%esp
c1007a48:	85 c0                	test   %eax,%eax
c1007a4a:	75 19                	jne    c1007a65 <sys_mkdir+0x302>
c1007a4c:	83 ec 0c             	sub    $0xc,%esp
c1007a4f:	68 6c c1 00 c1       	push   $0xc100c16c
c1007a54:	e8 a2 dd ff ff       	call   c10057fb <printk>
c1007a59:	83 c4 10             	add    $0x10,%esp
c1007a5c:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1007a60:	e9 a3 00 00 00       	jmp    c1007b08 <sys_mkdir+0x3a5>
c1007a65:	83 ec 04             	sub    $0x4,%esp
c1007a68:	68 00 04 00 00       	push   $0x400
c1007a6d:	6a 00                	push   $0x0
c1007a6f:	ff 75 ec             	pushl  -0x14(%ebp)
c1007a72:	e8 33 86 ff ff       	call   c10000aa <memset>
c1007a77:	83 c4 10             	add    $0x10,%esp
c1007a7a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007a7d:	8b 10                	mov    (%eax),%edx
c1007a7f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007a84:	83 ec 04             	sub    $0x4,%esp
c1007a87:	ff 75 ec             	pushl  -0x14(%ebp)
c1007a8a:	52                   	push   %edx
c1007a8b:	50                   	push   %eax
c1007a8c:	e8 15 2b 00 00       	call   c100a5a6 <inode_sync>
c1007a91:	83 c4 10             	add    $0x10,%esp
c1007a94:	83 ec 04             	sub    $0x4,%esp
c1007a97:	68 00 04 00 00       	push   $0x400
c1007a9c:	6a 00                	push   $0x0
c1007a9e:	ff 75 ec             	pushl  -0x14(%ebp)
c1007aa1:	e8 04 86 ff ff       	call   c10000aa <memset>
c1007aa6:	83 c4 10             	add    $0x10,%esp
c1007aa9:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007aae:	83 ec 04             	sub    $0x4,%esp
c1007ab1:	ff 75 ec             	pushl  -0x14(%ebp)
c1007ab4:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1007aba:	52                   	push   %edx
c1007abb:	50                   	push   %eax
c1007abc:	e8 e5 2a 00 00       	call   c100a5a6 <inode_sync>
c1007ac1:	83 c4 10             	add    $0x10,%esp
c1007ac4:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007ac7:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007acc:	83 ec 04             	sub    $0x4,%esp
c1007acf:	6a 00                	push   $0x0
c1007ad1:	52                   	push   %edx
c1007ad2:	50                   	push   %eax
c1007ad3:	e8 b0 1a 00 00       	call   c1009588 <bitmap_sync>
c1007ad8:	83 c4 10             	add    $0x10,%esp
c1007adb:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007ade:	83 ec 08             	sub    $0x8,%esp
c1007ae1:	68 00 04 00 00       	push   $0x400
c1007ae6:	50                   	push   %eax
c1007ae7:	e8 f1 b2 ff ff       	call   c1002ddd <vmm_free>
c1007aec:	83 c4 10             	add    $0x10,%esp
c1007aef:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007af2:	83 ec 0c             	sub    $0xc,%esp
c1007af5:	50                   	push   %eax
c1007af6:	e8 07 0c 00 00       	call   c1008702 <dir_close>
c1007afb:	83 c4 10             	add    $0x10,%esp
c1007afe:	b8 00 00 00 00       	mov    $0x0,%eax
c1007b03:	e9 90 00 00 00       	jmp    c1007b98 <sys_mkdir+0x435>
c1007b08:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007b0c:	83 f8 01             	cmp    $0x1,%eax
c1007b0f:	74 5e                	je     c1007b6f <sys_mkdir+0x40c>
c1007b11:	83 f8 02             	cmp    $0x2,%eax
c1007b14:	75 69                	jne    c1007b7f <sys_mkdir+0x41c>
c1007b16:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007b19:	8d 50 07             	lea    0x7(%eax),%edx
c1007b1c:	85 c0                	test   %eax,%eax
c1007b1e:	0f 48 c2             	cmovs  %edx,%eax
c1007b21:	c1 f8 03             	sar    $0x3,%eax
c1007b24:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1007b27:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007b2a:	99                   	cltd   
c1007b2b:	c1 ea 1d             	shr    $0x1d,%edx
c1007b2e:	01 d0                	add    %edx,%eax
c1007b30:	83 e0 07             	and    $0x7,%eax
c1007b33:	29 d0                	sub    %edx,%eax
c1007b35:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1007b38:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007b3d:	8b 50 20             	mov    0x20(%eax),%edx
c1007b40:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007b43:	01 d0                	add    %edx,%eax
c1007b45:	0f b6 00             	movzbl (%eax),%eax
c1007b48:	89 c2                	mov    %eax,%edx
c1007b4a:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1007b4d:	bb 01 00 00 00       	mov    $0x1,%ebx
c1007b52:	89 c1                	mov    %eax,%ecx
c1007b54:	d3 e3                	shl    %cl,%ebx
c1007b56:	89 d8                	mov    %ebx,%eax
c1007b58:	f7 d0                	not    %eax
c1007b5a:	89 d1                	mov    %edx,%ecx
c1007b5c:	21 c1                	and    %eax,%ecx
c1007b5e:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007b63:	8b 50 20             	mov    0x20(%eax),%edx
c1007b66:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007b69:	01 d0                	add    %edx,%eax
c1007b6b:	89 ca                	mov    %ecx,%edx
c1007b6d:	88 10                	mov    %dl,(%eax)
c1007b6f:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007b72:	83 ec 0c             	sub    $0xc,%esp
c1007b75:	50                   	push   %eax
c1007b76:	e8 87 0b 00 00       	call   c1008702 <dir_close>
c1007b7b:	83 c4 10             	add    $0x10,%esp
c1007b7e:	90                   	nop
c1007b7f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007b82:	83 ec 08             	sub    $0x8,%esp
c1007b85:	68 00 04 00 00       	push   $0x400
c1007b8a:	50                   	push   %eax
c1007b8b:	e8 4d b2 ff ff       	call   c1002ddd <vmm_free>
c1007b90:	83 c4 10             	add    $0x10,%esp
c1007b93:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007b98:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1007b9b:	c9                   	leave  
c1007b9c:	c3                   	ret    

c1007b9d <sys_opendir>:
c1007b9d:	55                   	push   %ebp
c1007b9e:	89 e5                	mov    %esp,%ebp
c1007ba0:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1007ba6:	83 ec 0c             	sub    $0xc,%esp
c1007ba9:	ff 75 08             	pushl  0x8(%ebp)
c1007bac:	e8 6d 85 ff ff       	call   c100011e <strlen>
c1007bb1:	83 c4 10             	add    $0x10,%esp
c1007bb4:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1007bb9:	76 19                	jbe    c1007bd4 <sys_opendir+0x37>
c1007bbb:	68 97 c1 00 c1       	push   $0xc100c197
c1007bc0:	68 a0 c3 00 c1       	push   $0xc100c3a0
c1007bc5:	68 8f 02 00 00       	push   $0x28f
c1007bca:	68 14 bd 00 c1       	push   $0xc100bd14
c1007bcf:	e8 97 87 ff ff       	call   c100036b <__PANIC>
c1007bd4:	8b 45 08             	mov    0x8(%ebp),%eax
c1007bd7:	0f b6 00             	movzbl (%eax),%eax
c1007bda:	3c 2f                	cmp    $0x2f,%al
c1007bdc:	75 21                	jne    c1007bff <sys_opendir+0x62>
c1007bde:	8b 45 08             	mov    0x8(%ebp),%eax
c1007be1:	83 c0 01             	add    $0x1,%eax
c1007be4:	0f b6 00             	movzbl (%eax),%eax
c1007be7:	84 c0                	test   %al,%al
c1007be9:	74 0a                	je     c1007bf5 <sys_opendir+0x58>
c1007beb:	8b 45 08             	mov    0x8(%ebp),%eax
c1007bee:	0f b6 00             	movzbl (%eax),%eax
c1007bf1:	3c 2e                	cmp    $0x2e,%al
c1007bf3:	75 0a                	jne    c1007bff <sys_opendir+0x62>
c1007bf5:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c1007bfa:	e9 a9 00 00 00       	jmp    c1007ca8 <sys_opendir+0x10b>
c1007bff:	83 ec 04             	sub    $0x4,%esp
c1007c02:	68 08 02 00 00       	push   $0x208
c1007c07:	6a 00                	push   $0x0
c1007c09:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007c0f:	50                   	push   %eax
c1007c10:	e8 95 84 ff ff       	call   c10000aa <memset>
c1007c15:	83 c4 10             	add    $0x10,%esp
c1007c18:	83 ec 08             	sub    $0x8,%esp
c1007c1b:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007c21:	50                   	push   %eax
c1007c22:	ff 75 08             	pushl  0x8(%ebp)
c1007c25:	e8 4d ef ff ff       	call   c1006b77 <search_file>
c1007c2a:	83 c4 10             	add    $0x10,%esp
c1007c2d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007c30:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007c37:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007c3b:	75 1c                	jne    c1007c59 <sys_opendir+0xbc>
c1007c3d:	83 ec 04             	sub    $0x4,%esp
c1007c40:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007c46:	50                   	push   %eax
c1007c47:	ff 75 08             	pushl  0x8(%ebp)
c1007c4a:	68 b3 c1 00 c1       	push   $0xc100c1b3
c1007c4f:	e8 a7 db ff ff       	call   c10057fb <printk>
c1007c54:	83 c4 10             	add    $0x10,%esp
c1007c57:	eb 3d                	jmp    c1007c96 <sys_opendir+0xf9>
c1007c59:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007c5c:	83 f8 01             	cmp    $0x1,%eax
c1007c5f:	75 15                	jne    c1007c76 <sys_opendir+0xd9>
c1007c61:	83 ec 08             	sub    $0x8,%esp
c1007c64:	ff 75 08             	pushl  0x8(%ebp)
c1007c67:	68 d1 c1 00 c1       	push   $0xc100c1d1
c1007c6c:	e8 8a db ff ff       	call   c10057fb <printk>
c1007c71:	83 c4 10             	add    $0x10,%esp
c1007c74:	eb 20                	jmp    c1007c96 <sys_opendir+0xf9>
c1007c76:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007c79:	83 f8 02             	cmp    $0x2,%eax
c1007c7c:	75 18                	jne    c1007c96 <sys_opendir+0xf9>
c1007c7e:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007c81:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007c86:	83 ec 08             	sub    $0x8,%esp
c1007c89:	52                   	push   %edx
c1007c8a:	50                   	push   %eax
c1007c8b:	e8 46 08 00 00       	call   c10084d6 <dir_open>
c1007c90:	83 c4 10             	add    $0x10,%esp
c1007c93:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007c96:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007c99:	83 ec 0c             	sub    $0xc,%esp
c1007c9c:	50                   	push   %eax
c1007c9d:	e8 60 0a 00 00       	call   c1008702 <dir_close>
c1007ca2:	83 c4 10             	add    $0x10,%esp
c1007ca5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007ca8:	c9                   	leave  
c1007ca9:	c3                   	ret    

c1007caa <sys_closedir>:
c1007caa:	55                   	push   %ebp
c1007cab:	89 e5                	mov    %esp,%ebp
c1007cad:	83 ec 18             	sub    $0x18,%esp
c1007cb0:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007cb7:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007cbb:	74 15                	je     c1007cd2 <sys_closedir+0x28>
c1007cbd:	83 ec 0c             	sub    $0xc,%esp
c1007cc0:	ff 75 08             	pushl  0x8(%ebp)
c1007cc3:	e8 3a 0a 00 00       	call   c1008702 <dir_close>
c1007cc8:	83 c4 10             	add    $0x10,%esp
c1007ccb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007cd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007cd5:	c9                   	leave  
c1007cd6:	c3                   	ret    

c1007cd7 <sys_readdir>:
c1007cd7:	55                   	push   %ebp
c1007cd8:	89 e5                	mov    %esp,%ebp
c1007cda:	83 ec 08             	sub    $0x8,%esp
c1007cdd:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007ce1:	75 19                	jne    c1007cfc <sys_readdir+0x25>
c1007ce3:	68 e6 c1 00 c1       	push   $0xc100c1e6
c1007ce8:	68 ac c3 00 c1       	push   $0xc100c3ac
c1007ced:	68 b2 02 00 00       	push   $0x2b2
c1007cf2:	68 14 bd 00 c1       	push   $0xc100bd14
c1007cf7:	e8 6f 86 ff ff       	call   c100036b <__PANIC>
c1007cfc:	83 ec 0c             	sub    $0xc,%esp
c1007cff:	ff 75 08             	pushl  0x8(%ebp)
c1007d02:	e8 7e 13 00 00       	call   c1009085 <dir_read>
c1007d07:	83 c4 10             	add    $0x10,%esp
c1007d0a:	c9                   	leave  
c1007d0b:	c3                   	ret    

c1007d0c <sys_rewinddir>:
c1007d0c:	55                   	push   %ebp
c1007d0d:	89 e5                	mov    %esp,%ebp
c1007d0f:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d12:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1007d19:	90                   	nop
c1007d1a:	5d                   	pop    %ebp
c1007d1b:	c3                   	ret    

c1007d1c <sys_rmdir>:
c1007d1c:	55                   	push   %ebp
c1007d1d:	89 e5                	mov    %esp,%ebp
c1007d1f:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1007d25:	83 ec 04             	sub    $0x4,%esp
c1007d28:	68 08 02 00 00       	push   $0x208
c1007d2d:	6a 00                	push   $0x0
c1007d2f:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007d35:	50                   	push   %eax
c1007d36:	e8 6f 83 ff ff       	call   c10000aa <memset>
c1007d3b:	83 c4 10             	add    $0x10,%esp
c1007d3e:	83 ec 08             	sub    $0x8,%esp
c1007d41:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007d47:	50                   	push   %eax
c1007d48:	ff 75 08             	pushl  0x8(%ebp)
c1007d4b:	e8 27 ee ff ff       	call   c1006b77 <search_file>
c1007d50:	83 c4 10             	add    $0x10,%esp
c1007d53:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007d56:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007d5a:	75 19                	jne    c1007d75 <sys_rmdir+0x59>
c1007d5c:	68 9c bf 00 c1       	push   $0xc100bf9c
c1007d61:	68 b8 c3 00 c1       	push   $0xc100c3b8
c1007d66:	68 c0 02 00 00       	push   $0x2c0
c1007d6b:	68 14 bd 00 c1       	push   $0xc100bd14
c1007d70:	e8 f6 85 ff ff       	call   c100036b <__PANIC>
c1007d75:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007d7c:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007d80:	75 1f                	jne    c1007da1 <sys_rmdir+0x85>
c1007d82:	83 ec 04             	sub    $0x4,%esp
c1007d85:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007d8b:	50                   	push   %eax
c1007d8c:	ff 75 08             	pushl  0x8(%ebp)
c1007d8f:	68 b3 c1 00 c1       	push   $0xc100c1b3
c1007d94:	e8 62 da ff ff       	call   c10057fb <printk>
c1007d99:	83 c4 10             	add    $0x10,%esp
c1007d9c:	e9 87 00 00 00       	jmp    c1007e28 <sys_rmdir+0x10c>
c1007da1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007da4:	83 f8 01             	cmp    $0x1,%eax
c1007da7:	75 15                	jne    c1007dbe <sys_rmdir+0xa2>
c1007da9:	83 ec 08             	sub    $0x8,%esp
c1007dac:	ff 75 08             	pushl  0x8(%ebp)
c1007daf:	68 d1 c1 00 c1       	push   $0xc100c1d1
c1007db4:	e8 42 da ff ff       	call   c10057fb <printk>
c1007db9:	83 c4 10             	add    $0x10,%esp
c1007dbc:	eb 6a                	jmp    c1007e28 <sys_rmdir+0x10c>
c1007dbe:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007dc1:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007dc6:	83 ec 08             	sub    $0x8,%esp
c1007dc9:	52                   	push   %edx
c1007dca:	50                   	push   %eax
c1007dcb:	e8 06 07 00 00       	call   c10084d6 <dir_open>
c1007dd0:	83 c4 10             	add    $0x10,%esp
c1007dd3:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007dd6:	83 ec 0c             	sub    $0xc,%esp
c1007dd9:	ff 75 ec             	pushl  -0x14(%ebp)
c1007ddc:	e8 79 14 00 00       	call   c100925a <dir_is_empty>
c1007de1:	83 c4 10             	add    $0x10,%esp
c1007de4:	85 c0                	test   %eax,%eax
c1007de6:	75 15                	jne    c1007dfd <sys_rmdir+0xe1>
c1007de8:	83 ec 08             	sub    $0x8,%esp
c1007deb:	ff 75 08             	pushl  0x8(%ebp)
c1007dee:	68 f4 c1 00 c1       	push   $0xc100c1f4
c1007df3:	e8 03 da ff ff       	call   c10057fb <printk>
c1007df8:	83 c4 10             	add    $0x10,%esp
c1007dfb:	eb 1d                	jmp    c1007e1a <sys_rmdir+0xfe>
c1007dfd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007e00:	83 ec 08             	sub    $0x8,%esp
c1007e03:	ff 75 ec             	pushl  -0x14(%ebp)
c1007e06:	50                   	push   %eax
c1007e07:	e8 76 14 00 00       	call   c1009282 <dir_remove>
c1007e0c:	83 c4 10             	add    $0x10,%esp
c1007e0f:	85 c0                	test   %eax,%eax
c1007e11:	75 07                	jne    c1007e1a <sys_rmdir+0xfe>
c1007e13:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007e1a:	83 ec 0c             	sub    $0xc,%esp
c1007e1d:	ff 75 ec             	pushl  -0x14(%ebp)
c1007e20:	e8 dd 08 00 00       	call   c1008702 <dir_close>
c1007e25:	83 c4 10             	add    $0x10,%esp
c1007e28:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007e2b:	83 ec 0c             	sub    $0xc,%esp
c1007e2e:	50                   	push   %eax
c1007e2f:	e8 ce 08 00 00       	call   c1008702 <dir_close>
c1007e34:	83 c4 10             	add    $0x10,%esp
c1007e37:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007e3a:	c9                   	leave  
c1007e3b:	c3                   	ret    

c1007e3c <get_parent_dir_inode_nr>:
c1007e3c:	55                   	push   %ebp
c1007e3d:	89 e5                	mov    %esp,%ebp
c1007e3f:	83 ec 18             	sub    $0x18,%esp
c1007e42:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007e47:	83 ec 08             	sub    $0x8,%esp
c1007e4a:	ff 75 08             	pushl  0x8(%ebp)
c1007e4d:	50                   	push   %eax
c1007e4e:	e8 74 28 00 00       	call   c100a6c7 <inode_open>
c1007e53:	83 c4 10             	add    $0x10,%esp
c1007e56:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007e59:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007e5c:	8b 40 10             	mov    0x10(%eax),%eax
c1007e5f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007e62:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007e67:	8b 40 10             	mov    0x10(%eax),%eax
c1007e6a:	8b 40 28             	mov    0x28(%eax),%eax
c1007e6d:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1007e70:	73 19                	jae    c1007e8b <get_parent_dir_inode_nr+0x4f>
c1007e72:	68 3c c2 00 c1       	push   $0xc100c23c
c1007e77:	68 c4 c3 00 c1       	push   $0xc100c3c4
c1007e7c:	68 db 02 00 00       	push   $0x2db
c1007e81:	68 14 bd 00 c1       	push   $0xc100bd14
c1007e86:	e8 e0 84 ff ff       	call   c100036b <__PANIC>
c1007e8b:	83 ec 0c             	sub    $0xc,%esp
c1007e8e:	ff 75 f4             	pushl  -0xc(%ebp)
c1007e91:	e8 07 29 00 00       	call   c100a79d <inode_close>
c1007e96:	83 c4 10             	add    $0x10,%esp
c1007e99:	83 ec 04             	sub    $0x4,%esp
c1007e9c:	6a 01                	push   $0x1
c1007e9e:	ff 75 f0             	pushl  -0x10(%ebp)
c1007ea1:	ff 75 0c             	pushl  0xc(%ebp)
c1007ea4:	e8 fa e1 ff ff       	call   c10060a3 <ide_read>
c1007ea9:	83 c4 10             	add    $0x10,%esp
c1007eac:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007eaf:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007eb2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007eb5:	83 c0 18             	add    $0x18,%eax
c1007eb8:	8b 40 10             	mov    0x10(%eax),%eax
c1007ebb:	3d ff 0f 00 00       	cmp    $0xfff,%eax
c1007ec0:	77 0e                	ja     c1007ed0 <get_parent_dir_inode_nr+0x94>
c1007ec2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007ec5:	83 c0 18             	add    $0x18,%eax
c1007ec8:	8b 40 14             	mov    0x14(%eax),%eax
c1007ecb:	83 f8 02             	cmp    $0x2,%eax
c1007ece:	74 19                	je     c1007ee9 <get_parent_dir_inode_nr+0xad>
c1007ed0:	68 68 c2 00 c1       	push   $0xc100c268
c1007ed5:	68 c4 c3 00 c1       	push   $0xc100c3c4
c1007eda:	68 e0 02 00 00       	push   $0x2e0
c1007edf:	68 14 bd 00 c1       	push   $0xc100bd14
c1007ee4:	e8 82 84 ff ff       	call   c100036b <__PANIC>
c1007ee9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007eec:	83 c0 18             	add    $0x18,%eax
c1007eef:	8b 40 10             	mov    0x10(%eax),%eax
c1007ef2:	c9                   	leave  
c1007ef3:	c3                   	ret    

c1007ef4 <get_child_dir_name>:
c1007ef4:	55                   	push   %ebp
c1007ef5:	89 e5                	mov    %esp,%ebp
c1007ef7:	57                   	push   %edi
c1007ef8:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1007efe:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007f03:	83 ec 08             	sub    $0x8,%esp
c1007f06:	ff 75 08             	pushl  0x8(%ebp)
c1007f09:	50                   	push   %eax
c1007f0a:	e8 b8 27 00 00       	call   c100a6c7 <inode_open>
c1007f0f:	83 c4 10             	add    $0x10,%esp
c1007f12:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007f15:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007f19:	8d 95 ac fd ff ff    	lea    -0x254(%ebp),%edx
c1007f1f:	b8 00 00 00 00       	mov    $0x0,%eax
c1007f24:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007f29:	89 d7                	mov    %edx,%edi
c1007f2b:	f3 ab                	rep stos %eax,%es:(%edi)
c1007f2d:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
c1007f34:	eb 22                	jmp    c1007f58 <get_child_dir_name+0x64>
c1007f36:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007f3a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007f3e:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1007f41:	83 c1 04             	add    $0x4,%ecx
c1007f44:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1007f47:	89 94 85 ac fd ff ff 	mov    %edx,-0x254(%ebp,%eax,4)
c1007f4e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007f52:	83 c0 01             	add    $0x1,%eax
c1007f55:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007f58:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007f5c:	76 d8                	jbe    c1007f36 <get_child_dir_name+0x42>
c1007f5e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007f61:	8b 40 40             	mov    0x40(%eax),%eax
c1007f64:	85 c0                	test   %eax,%eax
c1007f66:	74 25                	je     c1007f8d <get_child_dir_name+0x99>
c1007f68:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007f6b:	8b 50 40             	mov    0x40(%eax),%edx
c1007f6e:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
c1007f74:	83 c0 30             	add    $0x30,%eax
c1007f77:	83 ec 04             	sub    $0x4,%esp
c1007f7a:	6a 01                	push   $0x1
c1007f7c:	52                   	push   %edx
c1007f7d:	50                   	push   %eax
c1007f7e:	e8 20 e1 ff ff       	call   c10060a3 <ide_read>
c1007f83:	83 c4 10             	add    $0x10,%esp
c1007f86:	c7 45 f0 8c 00 00 00 	movl   $0x8c,-0x10(%ebp)
c1007f8d:	83 ec 0c             	sub    $0xc,%esp
c1007f90:	ff 75 e8             	pushl  -0x18(%ebp)
c1007f93:	e8 05 28 00 00       	call   c100a79d <inode_close>
c1007f98:	83 c4 10             	add    $0x10,%esp
c1007f9b:	8b 45 14             	mov    0x14(%ebp),%eax
c1007f9e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007fa1:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007fa6:	8b 40 10             	mov    0x10(%eax),%eax
c1007fa9:	8b 40 30             	mov    0x30(%eax),%eax
c1007fac:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007faf:	b8 00 02 00 00       	mov    $0x200,%eax
c1007fb4:	ba 00 00 00 00       	mov    $0x0,%edx
c1007fb9:	f7 75 e0             	divl   -0x20(%ebp)
c1007fbc:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007fbf:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007fc3:	e9 bc 00 00 00       	jmp    c1008084 <get_child_dir_name+0x190>
c1007fc8:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007fcc:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1007fd3:	85 c0                	test   %eax,%eax
c1007fd5:	0f 84 9f 00 00 00    	je     c100807a <get_child_dir_name+0x186>
c1007fdb:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007fdf:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1007fe6:	83 ec 04             	sub    $0x4,%esp
c1007fe9:	6a 01                	push   $0x1
c1007feb:	50                   	push   %eax
c1007fec:	ff 75 14             	pushl  0x14(%ebp)
c1007fef:	e8 af e0 ff ff       	call   c10060a3 <ide_read>
c1007ff4:	83 c4 10             	add    $0x10,%esp
c1007ff7:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
c1007ffb:	eb 74                	jmp    c1008071 <get_child_dir_name+0x17d>
c1007ffd:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008001:	89 d0                	mov    %edx,%eax
c1008003:	01 c0                	add    %eax,%eax
c1008005:	01 d0                	add    %edx,%eax
c1008007:	c1 e0 03             	shl    $0x3,%eax
c100800a:	89 c2                	mov    %eax,%edx
c100800c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100800f:	01 d0                	add    %edx,%eax
c1008011:	8b 40 10             	mov    0x10(%eax),%eax
c1008014:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1008017:	75 4e                	jne    c1008067 <get_child_dir_name+0x173>
c1008019:	8b 45 10             	mov    0x10(%ebp),%eax
c100801c:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1008021:	89 c2                	mov    %eax,%edx
c1008023:	b8 00 00 00 00       	mov    $0x0,%eax
c1008028:	89 d7                	mov    %edx,%edi
c100802a:	f2 ae                	repnz scas %es:(%edi),%al
c100802c:	89 c8                	mov    %ecx,%eax
c100802e:	f7 d0                	not    %eax
c1008030:	8d 50 ff             	lea    -0x1(%eax),%edx
c1008033:	8b 45 10             	mov    0x10(%ebp),%eax
c1008036:	01 d0                	add    %edx,%eax
c1008038:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c100803d:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008041:	89 d0                	mov    %edx,%eax
c1008043:	01 c0                	add    %eax,%eax
c1008045:	01 d0                	add    %edx,%eax
c1008047:	c1 e0 03             	shl    $0x3,%eax
c100804a:	89 c2                	mov    %eax,%edx
c100804c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100804f:	01 d0                	add    %edx,%eax
c1008051:	83 ec 08             	sub    $0x8,%esp
c1008054:	50                   	push   %eax
c1008055:	ff 75 10             	pushl  0x10(%ebp)
c1008058:	e8 78 81 ff ff       	call   c10001d5 <strcat>
c100805d:	83 c4 10             	add    $0x10,%esp
c1008060:	b8 00 00 00 00       	mov    $0x0,%eax
c1008065:	eb 2f                	jmp    c1008096 <get_child_dir_name+0x1a2>
c1008067:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c100806b:	83 c0 01             	add    $0x1,%eax
c100806e:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008071:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008075:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1008078:	77 83                	ja     c1007ffd <get_child_dir_name+0x109>
c100807a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100807e:	83 c0 01             	add    $0x1,%eax
c1008081:	88 45 f7             	mov    %al,-0x9(%ebp)
c1008084:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008088:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c100808b:	0f 87 37 ff ff ff    	ja     c1007fc8 <get_child_dir_name+0xd4>
c1008091:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008096:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1008099:	c9                   	leave  
c100809a:	c3                   	ret    

c100809b <sys_getcwd>:
c100809b:	55                   	push   %ebp
c100809c:	89 e5                	mov    %esp,%ebp
c100809e:	57                   	push   %edi
c100809f:	53                   	push   %ebx
c10080a0:	81 ec 20 02 00 00    	sub    $0x220,%esp
c10080a6:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10080aa:	75 19                	jne    c10080c5 <sys_getcwd+0x2a>
c10080ac:	68 2e bf 00 c1       	push   $0xc100bf2e
c10080b1:	68 dc c3 00 c1       	push   $0xc100c3dc
c10080b6:	68 13 03 00 00       	push   $0x313
c10080bb:	68 14 bd 00 c1       	push   $0xc100bd14
c10080c0:	e8 a6 82 ff ff       	call   c100036b <__PANIC>
c10080c5:	83 ec 08             	sub    $0x8,%esp
c10080c8:	6a 02                	push   $0x2
c10080ca:	68 00 02 00 00       	push   $0x200
c10080cf:	e8 e4 ab ff ff       	call   c1002cb8 <vmm_malloc>
c10080d4:	83 c4 10             	add    $0x10,%esp
c10080d7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10080da:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c10080de:	75 0a                	jne    c10080ea <sys_getcwd+0x4f>
c10080e0:	b8 00 00 00 00       	mov    $0x0,%eax
c10080e5:	e9 97 01 00 00       	jmp    c1008281 <sys_getcwd+0x1e6>
c10080ea:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10080f1:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10080f6:	8b 80 f8 00 00 00    	mov    0xf8(%eax),%eax
c10080fc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10080ff:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1008103:	78 09                	js     c100810e <sys_getcwd+0x73>
c1008105:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
c100810c:	7e 19                	jle    c1008127 <sys_getcwd+0x8c>
c100810e:	68 a0 c2 00 c1       	push   $0xc100c2a0
c1008113:	68 dc c3 00 c1       	push   $0xc100c3dc
c1008118:	68 1b 03 00 00       	push   $0x31b
c100811d:	68 14 bd 00 c1       	push   $0xc100bd14
c1008122:	e8 44 82 ff ff       	call   c100036b <__PANIC>
c1008127:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100812b:	75 17                	jne    c1008144 <sys_getcwd+0xa9>
c100812d:	8b 45 08             	mov    0x8(%ebp),%eax
c1008130:	c6 00 2f             	movb   $0x2f,(%eax)
c1008133:	8b 45 08             	mov    0x8(%ebp),%eax
c1008136:	83 c0 01             	add    $0x1,%eax
c1008139:	c6 00 00             	movb   $0x0,(%eax)
c100813c:	8b 45 08             	mov    0x8(%ebp),%eax
c100813f:	e9 3d 01 00 00       	jmp    c1008281 <sys_getcwd+0x1e6>
c1008144:	83 ec 04             	sub    $0x4,%esp
c1008147:	ff 75 0c             	pushl  0xc(%ebp)
c100814a:	6a 00                	push   $0x0
c100814c:	ff 75 08             	pushl  0x8(%ebp)
c100814f:	e8 56 7f ff ff       	call   c10000aa <memset>
c1008154:	83 c4 10             	add    $0x10,%esp
c1008157:	c7 85 e6 fd ff ff 00 	movl   $0x0,-0x21a(%ebp)
c100815e:	00 00 00 
c1008161:	8d 85 ea fd ff ff    	lea    -0x216(%ebp),%eax
c1008167:	b9 fc 01 00 00       	mov    $0x1fc,%ecx
c100816c:	bb 00 00 00 00       	mov    $0x0,%ebx
c1008171:	89 18                	mov    %ebx,(%eax)
c1008173:	89 5c 08 fc          	mov    %ebx,-0x4(%eax,%ecx,1)
c1008177:	8d 50 04             	lea    0x4(%eax),%edx
c100817a:	83 e2 fc             	and    $0xfffffffc,%edx
c100817d:	29 d0                	sub    %edx,%eax
c100817f:	01 c1                	add    %eax,%ecx
c1008181:	83 e1 fc             	and    $0xfffffffc,%ecx
c1008184:	c1 e9 02             	shr    $0x2,%ecx
c1008187:	89 d7                	mov    %edx,%edi
c1008189:	89 d8                	mov    %ebx,%eax
c100818b:	f3 ab                	rep stos %eax,%es:(%edi)
c100818d:	eb 58                	jmp    c10081e7 <sys_getcwd+0x14c>
c100818f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008192:	83 ec 08             	sub    $0x8,%esp
c1008195:	ff 75 f0             	pushl  -0x10(%ebp)
c1008198:	50                   	push   %eax
c1008199:	e8 9e fc ff ff       	call   c1007e3c <get_parent_dir_inode_nr>
c100819e:	83 c4 10             	add    $0x10,%esp
c10081a1:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10081a4:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10081a7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10081aa:	ff 75 f0             	pushl  -0x10(%ebp)
c10081ad:	8d 8d e6 fd ff ff    	lea    -0x21a(%ebp),%ecx
c10081b3:	51                   	push   %ecx
c10081b4:	52                   	push   %edx
c10081b5:	50                   	push   %eax
c10081b6:	e8 39 fd ff ff       	call   c1007ef4 <get_child_dir_name>
c10081bb:	83 c4 10             	add    $0x10,%esp
c10081be:	83 f8 ff             	cmp    $0xffffffff,%eax
c10081c1:	75 1e                	jne    c10081e1 <sys_getcwd+0x146>
c10081c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10081c6:	83 ec 08             	sub    $0x8,%esp
c10081c9:	68 00 02 00 00       	push   $0x200
c10081ce:	50                   	push   %eax
c10081cf:	e8 09 ac ff ff       	call   c1002ddd <vmm_free>
c10081d4:	83 c4 10             	add    $0x10,%esp
c10081d7:	b8 00 00 00 00       	mov    $0x0,%eax
c10081dc:	e9 a0 00 00 00       	jmp    c1008281 <sys_getcwd+0x1e6>
c10081e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10081e4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10081e7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10081eb:	75 a2                	jne    c100818f <sys_getcwd+0xf4>
c10081ed:	83 ec 0c             	sub    $0xc,%esp
c10081f0:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c10081f6:	50                   	push   %eax
c10081f7:	e8 22 7f ff ff       	call   c100011e <strlen>
c10081fc:	83 c4 10             	add    $0x10,%esp
c10081ff:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1008202:	73 49                	jae    c100824d <sys_getcwd+0x1b2>
c1008204:	68 d0 c2 00 c1       	push   $0xc100c2d0
c1008209:	68 dc c3 00 c1       	push   $0xc100c3dc
c100820e:	68 31 03 00 00       	push   $0x331
c1008213:	68 14 bd 00 c1       	push   $0xc100bd14
c1008218:	e8 4e 81 ff ff       	call   c100036b <__PANIC>
c100821d:	83 ec 0c             	sub    $0xc,%esp
c1008220:	ff 75 08             	pushl  0x8(%ebp)
c1008223:	e8 f6 7e ff ff       	call   c100011e <strlen>
c1008228:	83 c4 10             	add    $0x10,%esp
c100822b:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c100822f:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c1008233:	8b 45 08             	mov    0x8(%ebp),%eax
c1008236:	01 d0                	add    %edx,%eax
c1008238:	83 ec 08             	sub    $0x8,%esp
c100823b:	ff 75 e8             	pushl  -0x18(%ebp)
c100823e:	50                   	push   %eax
c100823f:	e8 d6 7f ff ff       	call   c100021a <strcpy>
c1008244:	83 c4 10             	add    $0x10,%esp
c1008247:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100824a:	c6 00 00             	movb   $0x0,(%eax)
c100824d:	83 ec 08             	sub    $0x8,%esp
c1008250:	6a 2f                	push   $0x2f
c1008252:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c1008258:	50                   	push   %eax
c1008259:	e8 38 7f ff ff       	call   c1000196 <strrchr>
c100825e:	83 c4 10             	add    $0x10,%esp
c1008261:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008264:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1008268:	75 b3                	jne    c100821d <sys_getcwd+0x182>
c100826a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100826d:	83 ec 08             	sub    $0x8,%esp
c1008270:	68 00 02 00 00       	push   $0x200
c1008275:	50                   	push   %eax
c1008276:	e8 62 ab ff ff       	call   c1002ddd <vmm_free>
c100827b:	83 c4 10             	add    $0x10,%esp
c100827e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008281:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1008284:	5b                   	pop    %ebx
c1008285:	5f                   	pop    %edi
c1008286:	5d                   	pop    %ebp
c1008287:	c3                   	ret    

c1008288 <sys_stat>:
c1008288:	55                   	push   %ebp
c1008289:	89 e5                	mov    %esp,%ebp
c100828b:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1008291:	83 ec 08             	sub    $0x8,%esp
c1008294:	68 43 bd 00 c1       	push   $0xc100bd43
c1008299:	ff 75 08             	pushl  0x8(%ebp)
c100829c:	e8 e2 7e ff ff       	call   c1000183 <strcmp>
c10082a1:	83 c4 10             	add    $0x10,%esp
c10082a4:	85 c0                	test   %eax,%eax
c10082a6:	74 2e                	je     c10082d6 <sys_stat+0x4e>
c10082a8:	83 ec 08             	sub    $0x8,%esp
c10082ab:	68 45 bd 00 c1       	push   $0xc100bd45
c10082b0:	ff 75 08             	pushl  0x8(%ebp)
c10082b3:	e8 cb 7e ff ff       	call   c1000183 <strcmp>
c10082b8:	83 c4 10             	add    $0x10,%esp
c10082bb:	85 c0                	test   %eax,%eax
c10082bd:	74 17                	je     c10082d6 <sys_stat+0x4e>
c10082bf:	83 ec 08             	sub    $0x8,%esp
c10082c2:	68 48 bd 00 c1       	push   $0xc100bd48
c10082c7:	ff 75 08             	pushl  0x8(%ebp)
c10082ca:	e8 b4 7e ff ff       	call   c1000183 <strcmp>
c10082cf:	83 c4 10             	add    $0x10,%esp
c10082d2:	85 c0                	test   %eax,%eax
c10082d4:	75 2d                	jne    c1008303 <sys_stat+0x7b>
c10082d6:	8b 45 0c             	mov    0xc(%ebp),%eax
c10082d9:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
c10082e0:	8b 45 0c             	mov    0xc(%ebp),%eax
c10082e3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10082e9:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c10082ee:	8b 00                	mov    (%eax),%eax
c10082f0:	8b 50 04             	mov    0x4(%eax),%edx
c10082f3:	8b 45 0c             	mov    0xc(%ebp),%eax
c10082f6:	89 50 04             	mov    %edx,0x4(%eax)
c10082f9:	b8 00 00 00 00       	mov    $0x0,%eax
c10082fe:	e9 af 00 00 00       	jmp    c10083b2 <sys_stat+0x12a>
c1008303:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c100830a:	83 ec 04             	sub    $0x4,%esp
c100830d:	68 08 02 00 00       	push   $0x208
c1008312:	6a 00                	push   $0x0
c1008314:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c100831a:	50                   	push   %eax
c100831b:	e8 8a 7d ff ff       	call   c10000aa <memset>
c1008320:	83 c4 10             	add    $0x10,%esp
c1008323:	83 ec 08             	sub    $0x8,%esp
c1008326:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c100832c:	50                   	push   %eax
c100832d:	ff 75 08             	pushl  0x8(%ebp)
c1008330:	e8 42 e8 ff ff       	call   c1006b77 <search_file>
c1008335:	83 c4 10             	add    $0x10,%esp
c1008338:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100833b:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c100833f:	74 4c                	je     c100838d <sys_stat+0x105>
c1008341:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008344:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008349:	83 ec 08             	sub    $0x8,%esp
c100834c:	52                   	push   %edx
c100834d:	50                   	push   %eax
c100834e:	e8 74 23 00 00       	call   c100a6c7 <inode_open>
c1008353:	83 c4 10             	add    $0x10,%esp
c1008356:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008359:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100835c:	8b 50 04             	mov    0x4(%eax),%edx
c100835f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008362:	89 50 04             	mov    %edx,0x4(%eax)
c1008365:	83 ec 0c             	sub    $0xc,%esp
c1008368:	ff 75 ec             	pushl  -0x14(%ebp)
c100836b:	e8 2d 24 00 00       	call   c100a79d <inode_close>
c1008370:	83 c4 10             	add    $0x10,%esp
c1008373:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008376:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008379:	89 50 08             	mov    %edx,0x8(%eax)
c100837c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100837f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008382:	89 10                	mov    %edx,(%eax)
c1008384:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100838b:	eb 13                	jmp    c10083a0 <sys_stat+0x118>
c100838d:	83 ec 08             	sub    $0x8,%esp
c1008390:	ff 75 08             	pushl  0x8(%ebp)
c1008393:	68 f2 c2 00 c1       	push   $0xc100c2f2
c1008398:	e8 5e d4 ff ff       	call   c10057fb <printk>
c100839d:	83 c4 10             	add    $0x10,%esp
c10083a0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10083a3:	83 ec 0c             	sub    $0xc,%esp
c10083a6:	50                   	push   %eax
c10083a7:	e8 56 03 00 00       	call   c1008702 <dir_close>
c10083ac:	83 c4 10             	add    $0x10,%esp
c10083af:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10083b2:	c9                   	leave  
c10083b3:	c3                   	ret    

c10083b4 <sys_chdir>:
c10083b4:	55                   	push   %ebp
c10083b5:	89 e5                	mov    %esp,%ebp
c10083b7:	81 ec 18 02 00 00    	sub    $0x218,%esp
c10083bd:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10083c4:	83 ec 04             	sub    $0x4,%esp
c10083c7:	68 08 02 00 00       	push   $0x208
c10083cc:	6a 00                	push   $0x0
c10083ce:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c10083d4:	50                   	push   %eax
c10083d5:	e8 d0 7c ff ff       	call   c10000aa <memset>
c10083da:	83 c4 10             	add    $0x10,%esp
c10083dd:	83 ec 08             	sub    $0x8,%esp
c10083e0:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c10083e6:	50                   	push   %eax
c10083e7:	ff 75 08             	pushl  0x8(%ebp)
c10083ea:	e8 88 e7 ff ff       	call   c1006b77 <search_file>
c10083ef:	83 c4 10             	add    $0x10,%esp
c10083f2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10083f5:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10083f9:	74 32                	je     c100842d <sys_chdir+0x79>
c10083fb:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10083fe:	83 f8 02             	cmp    $0x2,%eax
c1008401:	75 17                	jne    c100841a <sys_chdir+0x66>
c1008403:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1008408:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100840b:	89 90 f8 00 00 00    	mov    %edx,0xf8(%eax)
c1008411:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008418:	eb 13                	jmp    c100842d <sys_chdir+0x79>
c100841a:	83 ec 08             	sub    $0x8,%esp
c100841d:	ff 75 08             	pushl  0x8(%ebp)
c1008420:	68 0c c3 00 c1       	push   $0xc100c30c
c1008425:	e8 d1 d3 ff ff       	call   c10057fb <printk>
c100842a:	83 c4 10             	add    $0x10,%esp
c100842d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008430:	83 ec 0c             	sub    $0xc,%esp
c1008433:	50                   	push   %eax
c1008434:	e8 c9 02 00 00       	call   c1008702 <dir_close>
c1008439:	83 c4 10             	add    $0x10,%esp
c100843c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100843f:	c9                   	leave  
c1008440:	c3                   	ret    

c1008441 <fs_init>:
c1008441:	55                   	push   %ebp
c1008442:	89 e5                	mov    %esp,%ebp
c1008444:	83 ec 08             	sub    $0x8,%esp
c1008447:	e8 ef de ff ff       	call   c100633b <partition_format>
c100844c:	e8 7d e3 ff ff       	call   c10067ce <mount_partition>
c1008451:	90                   	nop
c1008452:	c9                   	leave  
c1008453:	c3                   	ret    

c1008454 <open_root_dir>:
c1008454:	55                   	push   %ebp
c1008455:	89 e5                	mov    %esp,%ebp
c1008457:	53                   	push   %ebx
c1008458:	83 ec 04             	sub    $0x4,%esp
c100845b:	83 ec 08             	sub    $0x8,%esp
c100845e:	6a 02                	push   $0x2
c1008460:	68 08 02 00 00       	push   $0x208
c1008465:	e8 4e a8 ff ff       	call   c1002cb8 <vmm_malloc>
c100846a:	83 c4 10             	add    $0x10,%esp
c100846d:	a3 34 42 a1 c1       	mov    %eax,0xc1a14234
c1008472:	8b 45 08             	mov    0x8(%ebp),%eax
c1008475:	8b 40 10             	mov    0x10(%eax),%eax
c1008478:	8b 40 2c             	mov    0x2c(%eax),%eax
c100847b:	83 ec 08             	sub    $0x8,%esp
c100847e:	50                   	push   %eax
c100847f:	68 e8 c3 00 c1       	push   $0xc100c3e8
c1008484:	e8 72 d3 ff ff       	call   c10057fb <printk>
c1008489:	83 c4 10             	add    $0x10,%esp
c100848c:	8b 45 08             	mov    0x8(%ebp),%eax
c100848f:	8b 40 10             	mov    0x10(%eax),%eax
c1008492:	8b 40 2c             	mov    0x2c(%eax),%eax
c1008495:	8b 1d 34 42 a1 c1    	mov    0xc1a14234,%ebx
c100849b:	83 ec 08             	sub    $0x8,%esp
c100849e:	50                   	push   %eax
c100849f:	ff 75 08             	pushl  0x8(%ebp)
c10084a2:	e8 20 22 00 00       	call   c100a6c7 <inode_open>
c10084a7:	83 c4 10             	add    $0x10,%esp
c10084aa:	89 03                	mov    %eax,(%ebx)
c10084ac:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c10084b1:	8b 00                	mov    (%eax),%eax
c10084b3:	83 ec 08             	sub    $0x8,%esp
c10084b6:	50                   	push   %eax
c10084b7:	68 fc c3 00 c1       	push   $0xc100c3fc
c10084bc:	e8 3a d3 ff ff       	call   c10057fb <printk>
c10084c1:	83 c4 10             	add    $0x10,%esp
c10084c4:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c10084c9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10084d0:	90                   	nop
c10084d1:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10084d4:	c9                   	leave  
c10084d5:	c3                   	ret    

c10084d6 <dir_open>:
c10084d6:	55                   	push   %ebp
c10084d7:	89 e5                	mov    %esp,%ebp
c10084d9:	83 ec 18             	sub    $0x18,%esp
c10084dc:	83 ec 08             	sub    $0x8,%esp
c10084df:	6a 02                	push   $0x2
c10084e1:	68 08 02 00 00       	push   $0x208
c10084e6:	e8 cd a7 ff ff       	call   c1002cb8 <vmm_malloc>
c10084eb:	83 c4 10             	add    $0x10,%esp
c10084ee:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10084f1:	83 ec 08             	sub    $0x8,%esp
c10084f4:	ff 75 0c             	pushl  0xc(%ebp)
c10084f7:	ff 75 08             	pushl  0x8(%ebp)
c10084fa:	e8 c8 21 00 00       	call   c100a6c7 <inode_open>
c10084ff:	83 c4 10             	add    $0x10,%esp
c1008502:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008505:	89 02                	mov    %eax,(%edx)
c1008507:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100850a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1008511:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008514:	c9                   	leave  
c1008515:	c3                   	ret    

c1008516 <search_dir_entry>:
c1008516:	55                   	push   %ebp
c1008517:	89 e5                	mov    %esp,%ebp
c1008519:	83 ec 28             	sub    $0x28,%esp
c100851c:	c7 45 e8 8c 00 00 00 	movl   $0x8c,-0x18(%ebp)
c1008523:	83 ec 08             	sub    $0x8,%esp
c1008526:	6a 02                	push   $0x2
c1008528:	68 30 02 00 00       	push   $0x230
c100852d:	e8 86 a7 ff ff       	call   c1002cb8 <vmm_malloc>
c1008532:	83 c4 10             	add    $0x10,%esp
c1008535:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008538:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c100853c:	75 1a                	jne    c1008558 <search_dir_entry+0x42>
c100853e:	83 ec 0c             	sub    $0xc,%esp
c1008541:	68 14 c4 00 c1       	push   $0xc100c414
c1008546:	e8 b0 d2 ff ff       	call   c10057fb <printk>
c100854b:	83 c4 10             	add    $0x10,%esp
c100854e:	b8 00 00 00 00       	mov    $0x0,%eax
c1008553:	e9 a8 01 00 00       	jmp    c1008700 <search_dir_entry+0x1ea>
c1008558:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100855f:	eb 23                	jmp    c1008584 <search_dir_entry+0x6e>
c1008561:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008564:	8b 00                	mov    (%eax),%eax
c1008566:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008569:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008570:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1008573:	01 ca                	add    %ecx,%edx
c1008575:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c1008578:	83 c1 04             	add    $0x4,%ecx
c100857b:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100857e:	89 02                	mov    %eax,(%edx)
c1008580:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008584:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1008588:	76 d7                	jbe    c1008561 <search_dir_entry+0x4b>
c100858a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008591:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008594:	8b 00                	mov    (%eax),%eax
c1008596:	8b 40 40             	mov    0x40(%eax),%eax
c1008599:	85 c0                	test   %eax,%eax
c100859b:	74 1d                	je     c10085ba <search_dir_entry+0xa4>
c100859d:	8b 45 0c             	mov    0xc(%ebp),%eax
c10085a0:	8b 00                	mov    (%eax),%eax
c10085a2:	8b 40 40             	mov    0x40(%eax),%eax
c10085a5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10085a8:	83 c2 30             	add    $0x30,%edx
c10085ab:	83 ec 04             	sub    $0x4,%esp
c10085ae:	6a 01                	push   $0x1
c10085b0:	50                   	push   %eax
c10085b1:	52                   	push   %edx
c10085b2:	e8 ec da ff ff       	call   c10060a3 <ide_read>
c10085b7:	83 c4 10             	add    $0x10,%esp
c10085ba:	83 ec 08             	sub    $0x8,%esp
c10085bd:	6a 02                	push   $0x2
c10085bf:	68 00 02 00 00       	push   $0x200
c10085c4:	e8 ef a6 ff ff       	call   c1002cb8 <vmm_malloc>
c10085c9:	83 c4 10             	add    $0x10,%esp
c10085cc:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10085cf:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10085d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10085d5:	8b 45 08             	mov    0x8(%ebp),%eax
c10085d8:	8b 40 10             	mov    0x10(%eax),%eax
c10085db:	8b 40 30             	mov    0x30(%eax),%eax
c10085de:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10085e1:	b8 00 02 00 00       	mov    $0x200,%eax
c10085e6:	ba 00 00 00 00       	mov    $0x0,%edx
c10085eb:	f7 75 dc             	divl   -0x24(%ebp)
c10085ee:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10085f1:	e9 d1 00 00 00       	jmp    c10086c7 <search_dir_entry+0x1b1>
c10085f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10085f9:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008600:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008603:	01 d0                	add    %edx,%eax
c1008605:	8b 00                	mov    (%eax),%eax
c1008607:	85 c0                	test   %eax,%eax
c1008609:	75 09                	jne    c1008614 <search_dir_entry+0xfe>
c100860b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100860f:	e9 b3 00 00 00       	jmp    c10086c7 <search_dir_entry+0x1b1>
c1008614:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008617:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100861e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008621:	01 d0                	add    %edx,%eax
c1008623:	8b 00                	mov    (%eax),%eax
c1008625:	83 ec 04             	sub    $0x4,%esp
c1008628:	6a 01                	push   $0x1
c100862a:	50                   	push   %eax
c100862b:	ff 75 e0             	pushl  -0x20(%ebp)
c100862e:	e8 70 da ff ff       	call   c10060a3 <ide_read>
c1008633:	83 c4 10             	add    $0x10,%esp
c1008636:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100863d:	eb 61                	jmp    c10086a0 <search_dir_entry+0x18a>
c100863f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008642:	83 ec 08             	sub    $0x8,%esp
c1008645:	ff 75 10             	pushl  0x10(%ebp)
c1008648:	50                   	push   %eax
c1008649:	e8 35 7b ff ff       	call   c1000183 <strcmp>
c100864e:	83 c4 10             	add    $0x10,%esp
c1008651:	85 c0                	test   %eax,%eax
c1008653:	75 43                	jne    c1008698 <search_dir_entry+0x182>
c1008655:	83 ec 04             	sub    $0x4,%esp
c1008658:	ff 75 dc             	pushl  -0x24(%ebp)
c100865b:	ff 75 f0             	pushl  -0x10(%ebp)
c100865e:	ff 75 14             	pushl  0x14(%ebp)
c1008661:	e8 a2 7a ff ff       	call   c1000108 <memcpy>
c1008666:	83 c4 10             	add    $0x10,%esp
c1008669:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100866c:	83 ec 08             	sub    $0x8,%esp
c100866f:	68 00 02 00 00       	push   $0x200
c1008674:	50                   	push   %eax
c1008675:	e8 63 a7 ff ff       	call   c1002ddd <vmm_free>
c100867a:	83 c4 10             	add    $0x10,%esp
c100867d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008680:	83 ec 08             	sub    $0x8,%esp
c1008683:	68 30 02 00 00       	push   $0x230
c1008688:	50                   	push   %eax
c1008689:	e8 4f a7 ff ff       	call   c1002ddd <vmm_free>
c100868e:	83 c4 10             	add    $0x10,%esp
c1008691:	b8 01 00 00 00       	mov    $0x1,%eax
c1008696:	eb 68                	jmp    c1008700 <search_dir_entry+0x1ea>
c1008698:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c100869c:	83 45 f0 18          	addl   $0x18,-0x10(%ebp)
c10086a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10086a3:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c10086a6:	72 97                	jb     c100863f <search_dir_entry+0x129>
c10086a8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10086ac:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10086af:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10086b2:	83 ec 04             	sub    $0x4,%esp
c10086b5:	68 00 02 00 00       	push   $0x200
c10086ba:	6a 00                	push   $0x0
c10086bc:	ff 75 e0             	pushl  -0x20(%ebp)
c10086bf:	e8 e6 79 ff ff       	call   c10000aa <memset>
c10086c4:	83 c4 10             	add    $0x10,%esp
c10086c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10086ca:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c10086cd:	0f 82 23 ff ff ff    	jb     c10085f6 <search_dir_entry+0xe0>
c10086d3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10086d6:	83 ec 08             	sub    $0x8,%esp
c10086d9:	68 00 02 00 00       	push   $0x200
c10086de:	50                   	push   %eax
c10086df:	e8 f9 a6 ff ff       	call   c1002ddd <vmm_free>
c10086e4:	83 c4 10             	add    $0x10,%esp
c10086e7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10086ea:	83 ec 08             	sub    $0x8,%esp
c10086ed:	68 30 02 00 00       	push   $0x230
c10086f2:	50                   	push   %eax
c10086f3:	e8 e5 a6 ff ff       	call   c1002ddd <vmm_free>
c10086f8:	83 c4 10             	add    $0x10,%esp
c10086fb:	b8 00 00 00 00       	mov    $0x0,%eax
c1008700:	c9                   	leave  
c1008701:	c3                   	ret    

c1008702 <dir_close>:
c1008702:	55                   	push   %ebp
c1008703:	89 e5                	mov    %esp,%ebp
c1008705:	83 ec 08             	sub    $0x8,%esp
c1008708:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c100870d:	39 45 08             	cmp    %eax,0x8(%ebp)
c1008710:	74 27                	je     c1008739 <dir_close+0x37>
c1008712:	8b 45 08             	mov    0x8(%ebp),%eax
c1008715:	8b 00                	mov    (%eax),%eax
c1008717:	83 ec 0c             	sub    $0xc,%esp
c100871a:	50                   	push   %eax
c100871b:	e8 7d 20 00 00       	call   c100a79d <inode_close>
c1008720:	83 c4 10             	add    $0x10,%esp
c1008723:	8b 45 08             	mov    0x8(%ebp),%eax
c1008726:	83 ec 08             	sub    $0x8,%esp
c1008729:	68 08 02 00 00       	push   $0x208
c100872e:	50                   	push   %eax
c100872f:	e8 a9 a6 ff ff       	call   c1002ddd <vmm_free>
c1008734:	83 c4 10             	add    $0x10,%esp
c1008737:	eb 01                	jmp    c100873a <dir_close+0x38>
c1008739:	90                   	nop
c100873a:	c9                   	leave  
c100873b:	c3                   	ret    

c100873c <create_dir_entry>:
c100873c:	55                   	push   %ebp
c100873d:	89 e5                	mov    %esp,%ebp
c100873f:	83 ec 18             	sub    $0x18,%esp
c1008742:	8b 45 10             	mov    0x10(%ebp),%eax
c1008745:	88 45 f4             	mov    %al,-0xc(%ebp)
c1008748:	83 ec 0c             	sub    $0xc,%esp
c100874b:	ff 75 08             	pushl  0x8(%ebp)
c100874e:	e8 cb 79 ff ff       	call   c100011e <strlen>
c1008753:	83 c4 10             	add    $0x10,%esp
c1008756:	83 f8 10             	cmp    $0x10,%eax
c1008759:	76 16                	jbe    c1008771 <create_dir_entry+0x35>
c100875b:	68 48 c4 00 c1       	push   $0xc100c448
c1008760:	68 fc c5 00 c1       	push   $0xc100c5fc
c1008765:	6a 72                	push   $0x72
c1008767:	68 70 c4 00 c1       	push   $0xc100c470
c100876c:	e8 fa 7b ff ff       	call   c100036b <__PANIC>
c1008771:	83 ec 0c             	sub    $0xc,%esp
c1008774:	ff 75 08             	pushl  0x8(%ebp)
c1008777:	e8 a2 79 ff ff       	call   c100011e <strlen>
c100877c:	83 c4 10             	add    $0x10,%esp
c100877f:	8b 55 14             	mov    0x14(%ebp),%edx
c1008782:	83 ec 04             	sub    $0x4,%esp
c1008785:	50                   	push   %eax
c1008786:	ff 75 08             	pushl  0x8(%ebp)
c1008789:	52                   	push   %edx
c100878a:	e8 79 79 ff ff       	call   c1000108 <memcpy>
c100878f:	83 c4 10             	add    $0x10,%esp
c1008792:	8b 45 14             	mov    0x14(%ebp),%eax
c1008795:	8b 55 0c             	mov    0xc(%ebp),%edx
c1008798:	89 50 10             	mov    %edx,0x10(%eax)
c100879b:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
c100879f:	8b 45 14             	mov    0x14(%ebp),%eax
c10087a2:	89 50 14             	mov    %edx,0x14(%eax)
c10087a5:	90                   	nop
c10087a6:	c9                   	leave  
c10087a7:	c3                   	ret    

c10087a8 <sync_dir_entry>:
c10087a8:	55                   	push   %ebp
c10087a9:	89 e5                	mov    %esp,%ebp
c10087ab:	57                   	push   %edi
c10087ac:	53                   	push   %ebx
c10087ad:	81 ec 60 02 00 00    	sub    $0x260,%esp
c10087b3:	8b 45 08             	mov    0x8(%ebp),%eax
c10087b6:	8b 00                	mov    (%eax),%eax
c10087b8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10087bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10087be:	8b 40 04             	mov    0x4(%eax),%eax
c10087c1:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10087c4:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10087c9:	8b 40 10             	mov    0x10(%eax),%eax
c10087cc:	8b 40 30             	mov    0x30(%eax),%eax
c10087cf:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10087d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10087d5:	ba 00 00 00 00       	mov    $0x0,%edx
c10087da:	f7 75 e8             	divl   -0x18(%ebp)
c10087dd:	89 d0                	mov    %edx,%eax
c10087df:	85 c0                	test   %eax,%eax
c10087e1:	74 19                	je     c10087fc <sync_dir_entry+0x54>
c10087e3:	68 a0 c4 00 c1       	push   $0xc100c4a0
c10087e8:	68 10 c6 00 c1       	push   $0xc100c610
c10087ed:	68 80 00 00 00       	push   $0x80
c10087f2:	68 70 c4 00 c1       	push   $0xc100c470
c10087f7:	e8 6f 7b ff ff       	call   c100036b <__PANIC>
c10087fc:	b8 00 02 00 00       	mov    $0x200,%eax
c1008801:	ba 00 00 00 00       	mov    $0x0,%edx
c1008806:	f7 75 e8             	divl   -0x18(%ebp)
c1008809:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100880c:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1008813:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1008817:	8d 95 a0 fd ff ff    	lea    -0x260(%ebp),%edx
c100881d:	b8 00 00 00 00       	mov    $0x0,%eax
c1008822:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1008827:	89 d7                	mov    %edx,%edi
c1008829:	f3 ab                	rep stos %eax,%es:(%edi)
c100882b:	eb 22                	jmp    c100884f <sync_dir_entry+0xa7>
c100882d:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1008831:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008835:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008838:	83 c1 04             	add    $0x4,%ecx
c100883b:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c100883e:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1008845:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008849:	83 c0 01             	add    $0x1,%eax
c100884c:	88 45 f7             	mov    %al,-0x9(%ebp)
c100884f:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1008853:	76 d8                	jbe    c100882d <sync_dir_entry+0x85>
c1008855:	8b 45 10             	mov    0x10(%ebp),%eax
c1008858:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100885b:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1008862:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1008866:	e9 52 03 00 00       	jmp    c1008bbd <sync_dir_entry+0x415>
c100886b:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1008872:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008876:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c100887d:	85 c0                	test   %eax,%eax
c100887f:	0f 85 80 02 00 00    	jne    c1008b05 <sync_dir_entry+0x35d>
c1008885:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100888a:	83 ec 0c             	sub    $0xc,%esp
c100888d:	50                   	push   %eax
c100888e:	e8 27 0c 00 00       	call   c10094ba <block_bitmap_alloc>
c1008893:	83 c4 10             	add    $0x10,%esp
c1008896:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008899:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c100889d:	75 1a                	jne    c10088b9 <sync_dir_entry+0x111>
c100889f:	83 ec 0c             	sub    $0xc,%esp
c10088a2:	68 c0 c4 00 c1       	push   $0xc100c4c0
c10088a7:	e8 4f cf ff ff       	call   c10057fb <printk>
c10088ac:	83 c4 10             	add    $0x10,%esp
c10088af:	b8 00 00 00 00       	mov    $0x0,%eax
c10088b4:	e9 23 03 00 00       	jmp    c1008bdc <sync_dir_entry+0x434>
c10088b9:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10088bc:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10088c1:	8b 40 10             	mov    0x10(%eax),%eax
c10088c4:	8b 40 28             	mov    0x28(%eax),%eax
c10088c7:	29 c2                	sub    %eax,%edx
c10088c9:	89 d0                	mov    %edx,%eax
c10088cb:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10088ce:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10088d2:	75 19                	jne    c10088ed <sync_dir_entry+0x145>
c10088d4:	68 ee c4 00 c1       	push   $0xc100c4ee
c10088d9:	68 10 c6 00 c1       	push   $0xc100c610
c10088de:	68 a3 00 00 00       	push   $0xa3
c10088e3:	68 70 c4 00 c1       	push   $0xc100c470
c10088e8:	e8 7e 7a ff ff       	call   c100036b <__PANIC>
c10088ed:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10088f0:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10088f5:	83 ec 04             	sub    $0x4,%esp
c10088f8:	6a 01                	push   $0x1
c10088fa:	52                   	push   %edx
c10088fb:	50                   	push   %eax
c10088fc:	e8 87 0c 00 00       	call   c1009588 <bitmap_sync>
c1008901:	83 c4 10             	add    $0x10,%esp
c1008904:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c100890b:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c100890f:	77 27                	ja     c1008938 <sync_dir_entry+0x190>
c1008911:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008915:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008918:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c100891f:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1008923:	8b 94 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%edx
c100892a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100892d:	83 c1 04             	add    $0x4,%ecx
c1008930:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c1008933:	e9 6d 01 00 00       	jmp    c1008aa5 <sync_dir_entry+0x2fd>
c1008938:	80 7d f7 0c          	cmpb   $0xc,-0x9(%ebp)
c100893c:	0f 85 37 01 00 00    	jne    c1008a79 <sync_dir_entry+0x2d1>
c1008942:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008945:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008948:	89 50 40             	mov    %edx,0x40(%eax)
c100894b:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1008952:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008957:	83 ec 0c             	sub    $0xc,%esp
c100895a:	50                   	push   %eax
c100895b:	e8 5a 0b 00 00       	call   c10094ba <block_bitmap_alloc>
c1008960:	83 c4 10             	add    $0x10,%esp
c1008963:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008966:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c100896a:	0f 85 95 00 00 00    	jne    c1008a05 <sync_dir_entry+0x25d>
c1008970:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008973:	8b 50 40             	mov    0x40(%eax),%edx
c1008976:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100897b:	8b 40 10             	mov    0x10(%eax),%eax
c100897e:	8b 40 28             	mov    0x28(%eax),%eax
c1008981:	29 c2                	sub    %eax,%edx
c1008983:	89 d0                	mov    %edx,%eax
c1008985:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008988:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100898b:	8d 50 07             	lea    0x7(%eax),%edx
c100898e:	85 c0                	test   %eax,%eax
c1008990:	0f 48 c2             	cmovs  %edx,%eax
c1008993:	c1 f8 03             	sar    $0x3,%eax
c1008996:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008999:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100899c:	99                   	cltd   
c100899d:	c1 ea 1d             	shr    $0x1d,%edx
c10089a0:	01 d0                	add    %edx,%eax
c10089a2:	83 e0 07             	and    $0x7,%eax
c10089a5:	29 d0                	sub    %edx,%eax
c10089a7:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10089aa:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10089af:	8b 50 18             	mov    0x18(%eax),%edx
c10089b2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10089b5:	01 d0                	add    %edx,%eax
c10089b7:	0f b6 00             	movzbl (%eax),%eax
c10089ba:	89 c2                	mov    %eax,%edx
c10089bc:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10089bf:	bb 01 00 00 00       	mov    $0x1,%ebx
c10089c4:	89 c1                	mov    %eax,%ecx
c10089c6:	d3 e3                	shl    %cl,%ebx
c10089c8:	89 d8                	mov    %ebx,%eax
c10089ca:	f7 d0                	not    %eax
c10089cc:	89 d1                	mov    %edx,%ecx
c10089ce:	21 c1                	and    %eax,%ecx
c10089d0:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10089d5:	8b 50 18             	mov    0x18(%eax),%edx
c10089d8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10089db:	01 d0                	add    %edx,%eax
c10089dd:	89 ca                	mov    %ecx,%edx
c10089df:	88 10                	mov    %dl,(%eax)
c10089e1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10089e4:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c10089eb:	83 ec 0c             	sub    $0xc,%esp
c10089ee:	68 c0 c4 00 c1       	push   $0xc100c4c0
c10089f3:	e8 03 ce ff ff       	call   c10057fb <printk>
c10089f8:	83 c4 10             	add    $0x10,%esp
c10089fb:	b8 00 00 00 00       	mov    $0x0,%eax
c1008a00:	e9 d7 01 00 00       	jmp    c1008bdc <sync_dir_entry+0x434>
c1008a05:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008a08:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008a0d:	8b 40 10             	mov    0x10(%eax),%eax
c1008a10:	8b 40 28             	mov    0x28(%eax),%eax
c1008a13:	29 c2                	sub    %eax,%edx
c1008a15:	89 d0                	mov    %edx,%eax
c1008a17:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008a1a:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008a1e:	75 19                	jne    c1008a39 <sync_dir_entry+0x291>
c1008a20:	68 ee c4 00 c1       	push   $0xc100c4ee
c1008a25:	68 10 c6 00 c1       	push   $0xc100c610
c1008a2a:	68 ba 00 00 00       	push   $0xba
c1008a2f:	68 70 c4 00 c1       	push   $0xc100c470
c1008a34:	e8 32 79 ff ff       	call   c100036b <__PANIC>
c1008a39:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008a3c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008a41:	83 ec 04             	sub    $0x4,%esp
c1008a44:	6a 01                	push   $0x1
c1008a46:	52                   	push   %edx
c1008a47:	50                   	push   %eax
c1008a48:	e8 3b 0b 00 00       	call   c1009588 <bitmap_sync>
c1008a4d:	83 c4 10             	add    $0x10,%esp
c1008a50:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008a53:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c1008a59:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008a5c:	8b 50 40             	mov    0x40(%eax),%edx
c1008a5f:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c1008a65:	83 c0 30             	add    $0x30,%eax
c1008a68:	83 ec 04             	sub    $0x4,%esp
c1008a6b:	6a 01                	push   $0x1
c1008a6d:	52                   	push   %edx
c1008a6e:	50                   	push   %eax
c1008a6f:	e8 6c d6 ff ff       	call   c10060e0 <ide_write>
c1008a74:	83 c4 10             	add    $0x10,%esp
c1008a77:	eb 2c                	jmp    c1008aa5 <sync_dir_entry+0x2fd>
c1008a79:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008a7d:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008a80:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1008a87:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008a8a:	8b 50 40             	mov    0x40(%eax),%edx
c1008a8d:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c1008a93:	83 c0 30             	add    $0x30,%eax
c1008a96:	83 ec 04             	sub    $0x4,%esp
c1008a99:	6a 01                	push   $0x1
c1008a9b:	52                   	push   %edx
c1008a9c:	50                   	push   %eax
c1008a9d:	e8 3e d6 ff ff       	call   c10060e0 <ide_write>
c1008aa2:	83 c4 10             	add    $0x10,%esp
c1008aa5:	83 ec 04             	sub    $0x4,%esp
c1008aa8:	68 00 02 00 00       	push   $0x200
c1008aad:	6a 00                	push   $0x0
c1008aaf:	ff 75 10             	pushl  0x10(%ebp)
c1008ab2:	e8 f3 75 ff ff       	call   c10000aa <memset>
c1008ab7:	83 c4 10             	add    $0x10,%esp
c1008aba:	83 ec 04             	sub    $0x4,%esp
c1008abd:	ff 75 e8             	pushl  -0x18(%ebp)
c1008ac0:	ff 75 0c             	pushl  0xc(%ebp)
c1008ac3:	ff 75 10             	pushl  0x10(%ebp)
c1008ac6:	e8 3d 76 ff ff       	call   c1000108 <memcpy>
c1008acb:	83 c4 10             	add    $0x10,%esp
c1008ace:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008ad2:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1008ad9:	83 ec 04             	sub    $0x4,%esp
c1008adc:	6a 01                	push   $0x1
c1008ade:	50                   	push   %eax
c1008adf:	ff 75 10             	pushl  0x10(%ebp)
c1008ae2:	e8 f9 d5 ff ff       	call   c10060e0 <ide_write>
c1008ae7:	83 c4 10             	add    $0x10,%esp
c1008aea:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008aed:	8b 50 04             	mov    0x4(%eax),%edx
c1008af0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008af3:	01 c2                	add    %eax,%edx
c1008af5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008af8:	89 50 04             	mov    %edx,0x4(%eax)
c1008afb:	b8 01 00 00 00       	mov    $0x1,%eax
c1008b00:	e9 d7 00 00 00       	jmp    c1008bdc <sync_dir_entry+0x434>
c1008b05:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008b09:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1008b10:	83 ec 04             	sub    $0x4,%esp
c1008b13:	6a 01                	push   $0x1
c1008b15:	50                   	push   %eax
c1008b16:	ff 75 10             	pushl  0x10(%ebp)
c1008b19:	e8 85 d5 ff ff       	call   c10060a3 <ide_read>
c1008b1e:	83 c4 10             	add    $0x10,%esp
c1008b21:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c1008b25:	eb 7f                	jmp    c1008ba6 <sync_dir_entry+0x3fe>
c1008b27:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1008b2b:	89 d0                	mov    %edx,%eax
c1008b2d:	01 c0                	add    %eax,%eax
c1008b2f:	01 d0                	add    %edx,%eax
c1008b31:	c1 e0 03             	shl    $0x3,%eax
c1008b34:	89 c2                	mov    %eax,%edx
c1008b36:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008b39:	01 d0                	add    %edx,%eax
c1008b3b:	8b 40 14             	mov    0x14(%eax),%eax
c1008b3e:	85 c0                	test   %eax,%eax
c1008b40:	75 5a                	jne    c1008b9c <sync_dir_entry+0x3f4>
c1008b42:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1008b46:	89 d0                	mov    %edx,%eax
c1008b48:	01 c0                	add    %eax,%eax
c1008b4a:	01 d0                	add    %edx,%eax
c1008b4c:	c1 e0 03             	shl    $0x3,%eax
c1008b4f:	89 c2                	mov    %eax,%edx
c1008b51:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008b54:	01 d0                	add    %edx,%eax
c1008b56:	83 ec 04             	sub    $0x4,%esp
c1008b59:	ff 75 e8             	pushl  -0x18(%ebp)
c1008b5c:	ff 75 0c             	pushl  0xc(%ebp)
c1008b5f:	50                   	push   %eax
c1008b60:	e8 a3 75 ff ff       	call   c1000108 <memcpy>
c1008b65:	83 c4 10             	add    $0x10,%esp
c1008b68:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008b6c:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1008b73:	83 ec 04             	sub    $0x4,%esp
c1008b76:	6a 01                	push   $0x1
c1008b78:	50                   	push   %eax
c1008b79:	ff 75 10             	pushl  0x10(%ebp)
c1008b7c:	e8 5f d5 ff ff       	call   c10060e0 <ide_write>
c1008b81:	83 c4 10             	add    $0x10,%esp
c1008b84:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008b87:	8b 50 04             	mov    0x4(%eax),%edx
c1008b8a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008b8d:	01 c2                	add    %eax,%edx
c1008b8f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008b92:	89 50 04             	mov    %edx,0x4(%eax)
c1008b95:	b8 01 00 00 00       	mov    $0x1,%eax
c1008b9a:	eb 40                	jmp    c1008bdc <sync_dir_entry+0x434>
c1008b9c:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1008ba0:	83 c0 01             	add    $0x1,%eax
c1008ba3:	88 45 f6             	mov    %al,-0xa(%ebp)
c1008ba6:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1008baa:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1008bad:	0f 87 74 ff ff ff    	ja     c1008b27 <sync_dir_entry+0x37f>
c1008bb3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008bb7:	83 c0 01             	add    $0x1,%eax
c1008bba:	88 45 f7             	mov    %al,-0x9(%ebp)
c1008bbd:	80 7d f7 8b          	cmpb   $0x8b,-0x9(%ebp)
c1008bc1:	0f 86 a4 fc ff ff    	jbe    c100886b <sync_dir_entry+0xc3>
c1008bc7:	83 ec 0c             	sub    $0xc,%esp
c1008bca:	68 05 c5 00 c1       	push   $0xc100c505
c1008bcf:	e8 27 cc ff ff       	call   c10057fb <printk>
c1008bd4:	83 c4 10             	add    $0x10,%esp
c1008bd7:	b8 00 00 00 00       	mov    $0x0,%eax
c1008bdc:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1008bdf:	5b                   	pop    %ebx
c1008be0:	5f                   	pop    %edi
c1008be1:	5d                   	pop    %ebp
c1008be2:	c3                   	ret    

c1008be3 <delete_dir_entry>:
c1008be3:	55                   	push   %ebp
c1008be4:	89 e5                	mov    %esp,%ebp
c1008be6:	57                   	push   %edi
c1008be7:	53                   	push   %ebx
c1008be8:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1008bee:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008bf1:	8b 00                	mov    (%eax),%eax
c1008bf3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008bf6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008bfd:	8d 95 98 fd ff ff    	lea    -0x268(%ebp),%edx
c1008c03:	b8 00 00 00 00       	mov    $0x0,%eax
c1008c08:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1008c0d:	89 d7                	mov    %edx,%edi
c1008c0f:	f3 ab                	rep stos %eax,%es:(%edi)
c1008c11:	eb 1a                	jmp    c1008c2d <delete_dir_entry+0x4a>
c1008c13:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008c16:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008c19:	83 c2 04             	add    $0x4,%edx
c1008c1c:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1008c1f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008c22:	89 94 85 98 fd ff ff 	mov    %edx,-0x268(%ebp,%eax,4)
c1008c29:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008c2d:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1008c31:	76 e0                	jbe    c1008c13 <delete_dir_entry+0x30>
c1008c33:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008c36:	8b 40 40             	mov    0x40(%eax),%eax
c1008c39:	85 c0                	test   %eax,%eax
c1008c3b:	74 1e                	je     c1008c5b <delete_dir_entry+0x78>
c1008c3d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008c40:	8b 50 40             	mov    0x40(%eax),%edx
c1008c43:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1008c49:	83 c0 30             	add    $0x30,%eax
c1008c4c:	83 ec 04             	sub    $0x4,%esp
c1008c4f:	6a 01                	push   $0x1
c1008c51:	52                   	push   %edx
c1008c52:	50                   	push   %eax
c1008c53:	e8 4b d4 ff ff       	call   c10060a3 <ide_read>
c1008c58:	83 c4 10             	add    $0x10,%esp
c1008c5b:	8b 45 08             	mov    0x8(%ebp),%eax
c1008c5e:	8b 40 10             	mov    0x10(%eax),%eax
c1008c61:	8b 40 30             	mov    0x30(%eax),%eax
c1008c64:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008c67:	b8 00 02 00 00       	mov    $0x200,%eax
c1008c6c:	ba 00 00 00 00       	mov    $0x0,%edx
c1008c71:	f7 75 e0             	divl   -0x20(%ebp)
c1008c74:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008c77:	8b 45 14             	mov    0x14(%ebp),%eax
c1008c7a:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008c7d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008c84:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1008c88:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008c8f:	e9 d8 03 00 00       	jmp    c100906c <delete_dir_entry+0x489>
c1008c94:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1008c98:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008c9b:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008ca2:	85 c0                	test   %eax,%eax
c1008ca4:	75 09                	jne    c1008caf <delete_dir_entry+0xcc>
c1008ca6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008caa:	e9 bd 03 00 00       	jmp    c100906c <delete_dir_entry+0x489>
c1008caf:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
c1008cb3:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1008cb7:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008cba:	83 ec 04             	sub    $0x4,%esp
c1008cbd:	68 00 02 00 00       	push   $0x200
c1008cc2:	6a 00                	push   $0x0
c1008cc4:	ff 75 14             	pushl  0x14(%ebp)
c1008cc7:	e8 de 73 ff ff       	call   c10000aa <memset>
c1008ccc:	83 c4 10             	add    $0x10,%esp
c1008ccf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008cd2:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008cd9:	83 ec 04             	sub    $0x4,%esp
c1008cdc:	6a 01                	push   $0x1
c1008cde:	50                   	push   %eax
c1008cdf:	ff 75 14             	pushl  0x14(%ebp)
c1008ce2:	e8 bc d3 ff ff       	call   c10060a3 <ide_read>
c1008ce7:	83 c4 10             	add    $0x10,%esp
c1008cea:	e9 0d 01 00 00       	jmp    c1008dfc <delete_dir_entry+0x219>
c1008cef:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008cf3:	89 d0                	mov    %edx,%eax
c1008cf5:	01 c0                	add    %eax,%eax
c1008cf7:	01 d0                	add    %edx,%eax
c1008cf9:	c1 e0 03             	shl    $0x3,%eax
c1008cfc:	89 c2                	mov    %eax,%edx
c1008cfe:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008d01:	01 d0                	add    %edx,%eax
c1008d03:	8b 40 14             	mov    0x14(%eax),%eax
c1008d06:	85 c0                	test   %eax,%eax
c1008d08:	0f 84 e4 00 00 00    	je     c1008df2 <delete_dir_entry+0x20f>
c1008d0e:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008d12:	89 d0                	mov    %edx,%eax
c1008d14:	01 c0                	add    %eax,%eax
c1008d16:	01 d0                	add    %edx,%eax
c1008d18:	c1 e0 03             	shl    $0x3,%eax
c1008d1b:	89 c2                	mov    %eax,%edx
c1008d1d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008d20:	01 d0                	add    %edx,%eax
c1008d22:	83 ec 08             	sub    $0x8,%esp
c1008d25:	68 19 c5 00 c1       	push   $0xc100c519
c1008d2a:	50                   	push   %eax
c1008d2b:	e8 53 74 ff ff       	call   c1000183 <strcmp>
c1008d30:	83 c4 10             	add    $0x10,%esp
c1008d33:	85 c0                	test   %eax,%eax
c1008d35:	75 09                	jne    c1008d40 <delete_dir_entry+0x15d>
c1008d37:	c6 45 ed 01          	movb   $0x1,-0x13(%ebp)
c1008d3b:	e9 b2 00 00 00       	jmp    c1008df2 <delete_dir_entry+0x20f>
c1008d40:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008d44:	89 d0                	mov    %edx,%eax
c1008d46:	01 c0                	add    %eax,%eax
c1008d48:	01 d0                	add    %edx,%eax
c1008d4a:	c1 e0 03             	shl    $0x3,%eax
c1008d4d:	89 c2                	mov    %eax,%edx
c1008d4f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008d52:	01 d0                	add    %edx,%eax
c1008d54:	83 ec 08             	sub    $0x8,%esp
c1008d57:	68 19 c5 00 c1       	push   $0xc100c519
c1008d5c:	50                   	push   %eax
c1008d5d:	e8 21 74 ff ff       	call   c1000183 <strcmp>
c1008d62:	83 c4 10             	add    $0x10,%esp
c1008d65:	85 c0                	test   %eax,%eax
c1008d67:	0f 84 85 00 00 00    	je     c1008df2 <delete_dir_entry+0x20f>
c1008d6d:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008d71:	89 d0                	mov    %edx,%eax
c1008d73:	01 c0                	add    %eax,%eax
c1008d75:	01 d0                	add    %edx,%eax
c1008d77:	c1 e0 03             	shl    $0x3,%eax
c1008d7a:	89 c2                	mov    %eax,%edx
c1008d7c:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008d7f:	01 d0                	add    %edx,%eax
c1008d81:	83 ec 08             	sub    $0x8,%esp
c1008d84:	68 1b c5 00 c1       	push   $0xc100c51b
c1008d89:	50                   	push   %eax
c1008d8a:	e8 f4 73 ff ff       	call   c1000183 <strcmp>
c1008d8f:	83 c4 10             	add    $0x10,%esp
c1008d92:	85 c0                	test   %eax,%eax
c1008d94:	74 5c                	je     c1008df2 <delete_dir_entry+0x20f>
c1008d96:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1008d9a:	83 c0 01             	add    $0x1,%eax
c1008d9d:	88 45 ee             	mov    %al,-0x12(%ebp)
c1008da0:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008da4:	89 d0                	mov    %edx,%eax
c1008da6:	01 c0                	add    %eax,%eax
c1008da8:	01 d0                	add    %edx,%eax
c1008daa:	c1 e0 03             	shl    $0x3,%eax
c1008dad:	89 c2                	mov    %eax,%edx
c1008daf:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008db2:	01 d0                	add    %edx,%eax
c1008db4:	8b 40 10             	mov    0x10(%eax),%eax
c1008db7:	39 45 10             	cmp    %eax,0x10(%ebp)
c1008dba:	75 36                	jne    c1008df2 <delete_dir_entry+0x20f>
c1008dbc:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1008dc0:	74 19                	je     c1008ddb <delete_dir_entry+0x1f8>
c1008dc2:	68 1e c5 00 c1       	push   $0xc100c51e
c1008dc7:	68 20 c6 00 c1       	push   $0xc100c620
c1008dcc:	68 10 01 00 00       	push   $0x110
c1008dd1:	68 70 c4 00 c1       	push   $0xc100c470
c1008dd6:	e8 90 75 ff ff       	call   c100036b <__PANIC>
c1008ddb:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008ddf:	89 d0                	mov    %edx,%eax
c1008de1:	01 c0                	add    %eax,%eax
c1008de3:	01 d0                	add    %edx,%eax
c1008de5:	c1 e0 03             	shl    $0x3,%eax
c1008de8:	89 c2                	mov    %eax,%edx
c1008dea:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008ded:	01 d0                	add    %edx,%eax
c1008def:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008df2:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008df6:	83 c0 01             	add    $0x1,%eax
c1008df9:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008dfc:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008e00:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1008e03:	0f 87 e6 fe ff ff    	ja     c1008cef <delete_dir_entry+0x10c>
c1008e09:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1008e0d:	75 09                	jne    c1008e18 <delete_dir_entry+0x235>
c1008e0f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008e13:	e9 54 02 00 00       	jmp    c100906c <delete_dir_entry+0x489>
c1008e18:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
c1008e1c:	75 19                	jne    c1008e37 <delete_dir_entry+0x254>
c1008e1e:	68 36 c5 00 c1       	push   $0xc100c536
c1008e23:	68 20 c6 00 c1       	push   $0xc100c620
c1008e28:	68 20 01 00 00       	push   $0x120
c1008e2d:	68 70 c4 00 c1       	push   $0xc100c470
c1008e32:	e8 34 75 ff ff       	call   c100036b <__PANIC>
c1008e37:	80 7d ee 01          	cmpb   $0x1,-0x12(%ebp)
c1008e3b:	0f 85 98 01 00 00    	jne    c1008fd9 <delete_dir_entry+0x3f6>
c1008e41:	80 7d ed 00          	cmpb   $0x0,-0x13(%ebp)
c1008e45:	0f 85 8e 01 00 00    	jne    c1008fd9 <delete_dir_entry+0x3f6>
c1008e4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008e4e:	8b 94 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%edx
c1008e55:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e58:	8b 40 10             	mov    0x10(%eax),%eax
c1008e5b:	8b 40 28             	mov    0x28(%eax),%eax
c1008e5e:	29 c2                	sub    %eax,%edx
c1008e60:	89 d0                	mov    %edx,%eax
c1008e62:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008e65:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008e68:	c1 e8 03             	shr    $0x3,%eax
c1008e6b:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008e6e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008e71:	83 e0 07             	and    $0x7,%eax
c1008e74:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008e77:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e7a:	8b 50 18             	mov    0x18(%eax),%edx
c1008e7d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008e80:	01 d0                	add    %edx,%eax
c1008e82:	0f b6 00             	movzbl (%eax),%eax
c1008e85:	89 c2                	mov    %eax,%edx
c1008e87:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008e8a:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008e8f:	89 c1                	mov    %eax,%ecx
c1008e91:	d3 e3                	shl    %cl,%ebx
c1008e93:	89 d8                	mov    %ebx,%eax
c1008e95:	f7 d0                	not    %eax
c1008e97:	89 d1                	mov    %edx,%ecx
c1008e99:	21 c1                	and    %eax,%ecx
c1008e9b:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e9e:	8b 50 18             	mov    0x18(%eax),%edx
c1008ea1:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008ea4:	01 d0                	add    %edx,%eax
c1008ea6:	89 ca                	mov    %ecx,%edx
c1008ea8:	88 10                	mov    %dl,(%eax)
c1008eaa:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008eaf:	83 ec 04             	sub    $0x4,%esp
c1008eb2:	6a 01                	push   $0x1
c1008eb4:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008eb7:	50                   	push   %eax
c1008eb8:	e8 cb 06 00 00       	call   c1009588 <bitmap_sync>
c1008ebd:	83 c4 10             	add    $0x10,%esp
c1008ec0:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1008ec4:	77 15                	ja     c1008edb <delete_dir_entry+0x2f8>
c1008ec6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008ec9:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008ecc:	83 c2 04             	add    $0x4,%edx
c1008ecf:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1008ed6:	e9 2c 01 00 00       	jmp    c1009007 <delete_dir_entry+0x424>
c1008edb:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1008ee2:	c7 45 c8 0c 00 00 00 	movl   $0xc,-0x38(%ebp)
c1008ee9:	eb 12                	jmp    c1008efd <delete_dir_entry+0x31a>
c1008eeb:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1008eee:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008ef5:	85 c0                	test   %eax,%eax
c1008ef7:	74 04                	je     c1008efd <delete_dir_entry+0x31a>
c1008ef9:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008efd:	81 7d c8 8b 00 00 00 	cmpl   $0x8b,-0x38(%ebp)
c1008f04:	76 e5                	jbe    c1008eeb <delete_dir_entry+0x308>
c1008f06:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1008f0a:	75 19                	jne    c1008f25 <delete_dir_entry+0x342>
c1008f0c:	68 49 c5 00 c1       	push   $0xc100c549
c1008f11:	68 20 c6 00 c1       	push   $0xc100c620
c1008f16:	68 36 01 00 00       	push   $0x136
c1008f1b:	68 70 c4 00 c1       	push   $0xc100c470
c1008f20:	e8 46 74 ff ff       	call   c100036b <__PANIC>
c1008f25:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1008f29:	76 31                	jbe    c1008f5c <delete_dir_entry+0x379>
c1008f2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008f2e:	c7 84 85 98 fd ff ff 	movl   $0x0,-0x268(%ebp,%eax,4)
c1008f35:	00 00 00 00 
c1008f39:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008f3c:	8b 50 40             	mov    0x40(%eax),%edx
c1008f3f:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1008f45:	83 c0 30             	add    $0x30,%eax
c1008f48:	83 ec 04             	sub    $0x4,%esp
c1008f4b:	6a 01                	push   $0x1
c1008f4d:	52                   	push   %edx
c1008f4e:	50                   	push   %eax
c1008f4f:	e8 8c d1 ff ff       	call   c10060e0 <ide_write>
c1008f54:	83 c4 10             	add    $0x10,%esp
c1008f57:	e9 ab 00 00 00       	jmp    c1009007 <delete_dir_entry+0x424>
c1008f5c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008f5f:	8b 50 40             	mov    0x40(%eax),%edx
c1008f62:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f65:	8b 40 10             	mov    0x10(%eax),%eax
c1008f68:	8b 40 28             	mov    0x28(%eax),%eax
c1008f6b:	29 c2                	sub    %eax,%edx
c1008f6d:	89 d0                	mov    %edx,%eax
c1008f6f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008f72:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008f75:	c1 e8 03             	shr    $0x3,%eax
c1008f78:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008f7b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008f7e:	83 e0 07             	and    $0x7,%eax
c1008f81:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008f84:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f87:	8b 50 18             	mov    0x18(%eax),%edx
c1008f8a:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008f8d:	01 d0                	add    %edx,%eax
c1008f8f:	0f b6 00             	movzbl (%eax),%eax
c1008f92:	89 c2                	mov    %eax,%edx
c1008f94:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008f97:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008f9c:	89 c1                	mov    %eax,%ecx
c1008f9e:	d3 e3                	shl    %cl,%ebx
c1008fa0:	89 d8                	mov    %ebx,%eax
c1008fa2:	f7 d0                	not    %eax
c1008fa4:	89 d1                	mov    %edx,%ecx
c1008fa6:	21 c1                	and    %eax,%ecx
c1008fa8:	8b 45 08             	mov    0x8(%ebp),%eax
c1008fab:	8b 50 18             	mov    0x18(%eax),%edx
c1008fae:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008fb1:	01 d0                	add    %edx,%eax
c1008fb3:	89 ca                	mov    %ecx,%edx
c1008fb5:	88 10                	mov    %dl,(%eax)
c1008fb7:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008fbc:	83 ec 04             	sub    $0x4,%esp
c1008fbf:	6a 01                	push   $0x1
c1008fc1:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008fc4:	50                   	push   %eax
c1008fc5:	e8 be 05 00 00       	call   c1009588 <bitmap_sync>
c1008fca:	83 c4 10             	add    $0x10,%esp
c1008fcd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008fd0:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1008fd7:	eb 2e                	jmp    c1009007 <delete_dir_entry+0x424>
c1008fd9:	83 ec 04             	sub    $0x4,%esp
c1008fdc:	ff 75 e0             	pushl  -0x20(%ebp)
c1008fdf:	6a 00                	push   $0x0
c1008fe1:	ff 75 f0             	pushl  -0x10(%ebp)
c1008fe4:	e8 c1 70 ff ff       	call   c10000aa <memset>
c1008fe9:	83 c4 10             	add    $0x10,%esp
c1008fec:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008fef:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008ff6:	83 ec 04             	sub    $0x4,%esp
c1008ff9:	6a 01                	push   $0x1
c1008ffb:	50                   	push   %eax
c1008ffc:	ff 75 14             	pushl  0x14(%ebp)
c1008fff:	e8 dc d0 ff ff       	call   c10060e0 <ide_write>
c1009004:	83 c4 10             	add    $0x10,%esp
c1009007:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100900a:	8b 40 04             	mov    0x4(%eax),%eax
c100900d:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c1009010:	76 19                	jbe    c100902b <delete_dir_entry+0x448>
c1009012:	68 60 c5 00 c1       	push   $0xc100c560
c1009017:	68 20 c6 00 c1       	push   $0xc100c620
c100901c:	68 4d 01 00 00       	push   $0x14d
c1009021:	68 70 c4 00 c1       	push   $0xc100c470
c1009026:	e8 40 73 ff ff       	call   c100036b <__PANIC>
c100902b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100902e:	8b 40 04             	mov    0x4(%eax),%eax
c1009031:	2b 45 e0             	sub    -0x20(%ebp),%eax
c1009034:	89 c2                	mov    %eax,%edx
c1009036:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009039:	89 50 04             	mov    %edx,0x4(%eax)
c100903c:	83 ec 04             	sub    $0x4,%esp
c100903f:	68 00 04 00 00       	push   $0x400
c1009044:	6a 00                	push   $0x0
c1009046:	ff 75 14             	pushl  0x14(%ebp)
c1009049:	e8 5c 70 ff ff       	call   c10000aa <memset>
c100904e:	83 c4 10             	add    $0x10,%esp
c1009051:	83 ec 04             	sub    $0x4,%esp
c1009054:	ff 75 14             	pushl  0x14(%ebp)
c1009057:	ff 75 e4             	pushl  -0x1c(%ebp)
c100905a:	ff 75 08             	pushl  0x8(%ebp)
c100905d:	e8 44 15 00 00       	call   c100a5a6 <inode_sync>
c1009062:	83 c4 10             	add    $0x10,%esp
c1009065:	b8 01 00 00 00       	mov    $0x1,%eax
c100906a:	eb 12                	jmp    c100907e <delete_dir_entry+0x49b>
c100906c:	81 7d f4 8b 00 00 00 	cmpl   $0x8b,-0xc(%ebp)
c1009073:	0f 86 1b fc ff ff    	jbe    c1008c94 <delete_dir_entry+0xb1>
c1009079:	b8 00 00 00 00       	mov    $0x0,%eax
c100907e:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1009081:	5b                   	pop    %ebx
c1009082:	5f                   	pop    %edi
c1009083:	5d                   	pop    %ebp
c1009084:	c3                   	ret    

c1009085 <dir_read>:
c1009085:	55                   	push   %ebp
c1009086:	89 e5                	mov    %esp,%ebp
c1009088:	57                   	push   %edi
c1009089:	81 ec 54 02 00 00    	sub    $0x254,%esp
c100908f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009092:	83 c0 08             	add    $0x8,%eax
c1009095:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009098:	8b 45 08             	mov    0x8(%ebp),%eax
c100909b:	8b 00                	mov    (%eax),%eax
c100909d:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10090a0:	8d 95 a8 fd ff ff    	lea    -0x258(%ebp),%edx
c10090a6:	b8 00 00 00 00       	mov    $0x0,%eax
c10090ab:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c10090b0:	89 d7                	mov    %edx,%edi
c10090b2:	f3 ab                	rep stos %eax,%es:(%edi)
c10090b4:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
c10090bb:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10090c2:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10090c9:	eb 1a                	jmp    c10090e5 <dir_read+0x60>
c10090cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10090ce:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10090d1:	83 c2 04             	add    $0x4,%edx
c10090d4:	8b 14 90             	mov    (%eax,%edx,4),%edx
c10090d7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10090da:	89 94 85 a8 fd ff ff 	mov    %edx,-0x258(%ebp,%eax,4)
c10090e1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10090e5:	83 7d f0 0b          	cmpl   $0xb,-0x10(%ebp)
c10090e9:	76 e0                	jbe    c10090cb <dir_read+0x46>
c10090eb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10090ee:	8b 40 40             	mov    0x40(%eax),%eax
c10090f1:	85 c0                	test   %eax,%eax
c10090f3:	74 25                	je     c100911a <dir_read+0x95>
c10090f5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10090f8:	8b 50 40             	mov    0x40(%eax),%edx
c10090fb:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
c1009101:	83 c0 30             	add    $0x30,%eax
c1009104:	83 ec 04             	sub    $0x4,%esp
c1009107:	6a 01                	push   $0x1
c1009109:	52                   	push   %edx
c100910a:	50                   	push   %eax
c100910b:	e8 93 cf ff ff       	call   c10060a3 <ide_read>
c1009110:	83 c4 10             	add    $0x10,%esp
c1009113:	c7 45 f4 8c 00 00 00 	movl   $0x8c,-0xc(%ebp)
c100911a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1009121:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1009128:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100912d:	8b 40 10             	mov    0x10(%eax),%eax
c1009130:	8b 40 30             	mov    0x30(%eax),%eax
c1009133:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1009136:	b8 00 02 00 00       	mov    $0x200,%eax
c100913b:	ba 00 00 00 00       	mov    $0x0,%edx
c1009140:	f7 75 dc             	divl   -0x24(%ebp)
c1009143:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009146:	e9 f9 00 00 00       	jmp    c1009244 <dir_read+0x1bf>
c100914b:	8b 45 08             	mov    0x8(%ebp),%eax
c100914e:	8b 50 04             	mov    0x4(%eax),%edx
c1009151:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009154:	8b 40 04             	mov    0x4(%eax),%eax
c1009157:	39 c2                	cmp    %eax,%edx
c1009159:	72 0a                	jb     c1009165 <dir_read+0xe0>
c100915b:	b8 00 00 00 00       	mov    $0x0,%eax
c1009160:	e9 f0 00 00 00       	jmp    c1009255 <dir_read+0x1d0>
c1009165:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009168:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c100916f:	85 c0                	test   %eax,%eax
c1009171:	75 09                	jne    c100917c <dir_read+0xf7>
c1009173:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1009177:	e9 c8 00 00 00       	jmp    c1009244 <dir_read+0x1bf>
c100917c:	83 ec 04             	sub    $0x4,%esp
c100917f:	68 00 02 00 00       	push   $0x200
c1009184:	6a 00                	push   $0x0
c1009186:	ff 75 e4             	pushl  -0x1c(%ebp)
c1009189:	e8 1c 6f ff ff       	call   c10000aa <memset>
c100918e:	83 c4 10             	add    $0x10,%esp
c1009191:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009194:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c100919b:	83 ec 04             	sub    $0x4,%esp
c100919e:	6a 01                	push   $0x1
c10091a0:	50                   	push   %eax
c10091a1:	ff 75 e4             	pushl  -0x1c(%ebp)
c10091a4:	e8 fa ce ff ff       	call   c10060a3 <ide_read>
c10091a9:	83 c4 10             	add    $0x10,%esp
c10091ac:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10091b3:	eb 7f                	jmp    c1009234 <dir_read+0x1af>
c10091b5:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10091b8:	89 d0                	mov    %edx,%eax
c10091ba:	01 c0                	add    %eax,%eax
c10091bc:	01 d0                	add    %edx,%eax
c10091be:	c1 e0 03             	shl    $0x3,%eax
c10091c1:	89 c2                	mov    %eax,%edx
c10091c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10091c6:	01 d0                	add    %edx,%eax
c10091c8:	8b 40 14             	mov    0x14(%eax),%eax
c10091cb:	85 c0                	test   %eax,%eax
c10091cd:	74 61                	je     c1009230 <dir_read+0x1ab>
c10091cf:	8b 45 08             	mov    0x8(%ebp),%eax
c10091d2:	8b 40 04             	mov    0x4(%eax),%eax
c10091d5:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c10091d8:	73 0c                	jae    c10091e6 <dir_read+0x161>
c10091da:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10091dd:	01 45 e8             	add    %eax,-0x18(%ebp)
c10091e0:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10091e4:	eb 4e                	jmp    c1009234 <dir_read+0x1af>
c10091e6:	8b 45 08             	mov    0x8(%ebp),%eax
c10091e9:	8b 40 04             	mov    0x4(%eax),%eax
c10091ec:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c10091ef:	74 19                	je     c100920a <dir_read+0x185>
c10091f1:	68 84 c5 00 c1       	push   $0xc100c584
c10091f6:	68 34 c6 00 c1       	push   $0xc100c634
c10091fb:	68 7f 01 00 00       	push   $0x17f
c1009200:	68 70 c4 00 c1       	push   $0xc100c470
c1009205:	e8 61 71 ff ff       	call   c100036b <__PANIC>
c100920a:	8b 45 08             	mov    0x8(%ebp),%eax
c100920d:	8b 50 04             	mov    0x4(%eax),%edx
c1009210:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009213:	01 c2                	add    %eax,%edx
c1009215:	8b 45 08             	mov    0x8(%ebp),%eax
c1009218:	89 50 04             	mov    %edx,0x4(%eax)
c100921b:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100921e:	89 d0                	mov    %edx,%eax
c1009220:	01 c0                	add    %eax,%eax
c1009222:	01 d0                	add    %edx,%eax
c1009224:	c1 e0 03             	shl    $0x3,%eax
c1009227:	89 c2                	mov    %eax,%edx
c1009229:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100922c:	01 d0                	add    %edx,%eax
c100922e:	eb 25                	jmp    c1009255 <dir_read+0x1d0>
c1009230:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1009234:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009237:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c100923a:	0f 82 75 ff ff ff    	jb     c10091b5 <dir_read+0x130>
c1009240:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1009244:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009247:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c100924a:	0f 82 fb fe ff ff    	jb     c100914b <dir_read+0xc6>
c1009250:	b8 00 00 00 00       	mov    $0x0,%eax
c1009255:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1009258:	c9                   	leave  
c1009259:	c3                   	ret    

c100925a <dir_is_empty>:
c100925a:	55                   	push   %ebp
c100925b:	89 e5                	mov    %esp,%ebp
c100925d:	83 ec 10             	sub    $0x10,%esp
c1009260:	8b 45 08             	mov    0x8(%ebp),%eax
c1009263:	8b 00                	mov    (%eax),%eax
c1009265:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1009268:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100926b:	8b 50 04             	mov    0x4(%eax),%edx
c100926e:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009273:	8b 40 10             	mov    0x10(%eax),%eax
c1009276:	8b 40 30             	mov    0x30(%eax),%eax
c1009279:	01 c0                	add    %eax,%eax
c100927b:	39 c2                	cmp    %eax,%edx
c100927d:	0f 94 c0             	sete   %al
c1009280:	c9                   	leave  
c1009281:	c3                   	ret    

c1009282 <dir_remove>:
c1009282:	55                   	push   %ebp
c1009283:	89 e5                	mov    %esp,%ebp
c1009285:	83 ec 18             	sub    $0x18,%esp
c1009288:	8b 45 0c             	mov    0xc(%ebp),%eax
c100928b:	8b 00                	mov    (%eax),%eax
c100928d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009290:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c1009297:	eb 2d                	jmp    c10092c6 <dir_remove+0x44>
c1009299:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100929c:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100929f:	83 c2 04             	add    $0x4,%edx
c10092a2:	8b 04 90             	mov    (%eax,%edx,4),%eax
c10092a5:	85 c0                	test   %eax,%eax
c10092a7:	74 19                	je     c10092c2 <dir_remove+0x40>
c10092a9:	68 a8 c5 00 c1       	push   $0xc100c5a8
c10092ae:	68 40 c6 00 c1       	push   $0xc100c640
c10092b3:	68 96 01 00 00       	push   $0x196
c10092b8:	68 70 c4 00 c1       	push   $0xc100c470
c10092bd:	e8 a9 70 ff ff       	call   c100036b <__PANIC>
c10092c2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10092c6:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
c10092ca:	7e cd                	jle    c1009299 <dir_remove+0x17>
c10092cc:	83 ec 08             	sub    $0x8,%esp
c10092cf:	6a 02                	push   $0x2
c10092d1:	68 00 04 00 00       	push   $0x400
c10092d6:	e8 dd 99 ff ff       	call   c1002cb8 <vmm_malloc>
c10092db:	83 c4 10             	add    $0x10,%esp
c10092de:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10092e1:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10092e5:	75 17                	jne    c10092fe <dir_remove+0x7c>
c10092e7:	83 ec 0c             	sub    $0xc,%esp
c10092ea:	68 d4 c5 00 c1       	push   $0xc100c5d4
c10092ef:	e8 07 c5 ff ff       	call   c10057fb <printk>
c10092f4:	83 c4 10             	add    $0x10,%esp
c10092f7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10092fc:	eb 4a                	jmp    c1009348 <dir_remove+0xc6>
c10092fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009301:	8b 10                	mov    (%eax),%edx
c1009303:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009308:	ff 75 ec             	pushl  -0x14(%ebp)
c100930b:	52                   	push   %edx
c100930c:	ff 75 08             	pushl  0x8(%ebp)
c100930f:	50                   	push   %eax
c1009310:	e8 ce f8 ff ff       	call   c1008be3 <delete_dir_entry>
c1009315:	83 c4 10             	add    $0x10,%esp
c1009318:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100931b:	8b 10                	mov    (%eax),%edx
c100931d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009322:	83 ec 08             	sub    $0x8,%esp
c1009325:	52                   	push   %edx
c1009326:	50                   	push   %eax
c1009327:	e8 87 15 00 00       	call   c100a8b3 <inode_release>
c100932c:	83 c4 10             	add    $0x10,%esp
c100932f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009332:	83 ec 08             	sub    $0x8,%esp
c1009335:	68 00 04 00 00       	push   $0x400
c100933a:	50                   	push   %eax
c100933b:	e8 9d 9a ff ff       	call   c1002ddd <vmm_free>
c1009340:	83 c4 10             	add    $0x10,%esp
c1009343:	b8 00 00 00 00       	mov    $0x0,%eax
c1009348:	c9                   	leave  
c1009349:	c3                   	ret    

c100934a <hash32>:
c100934a:	55                   	push   %ebp
c100934b:	89 e5                	mov    %esp,%ebp
c100934d:	83 ec 10             	sub    $0x10,%esp
c1009350:	8b 45 08             	mov    0x8(%ebp),%eax
c1009353:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1009359:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100935c:	b8 20 00 00 00       	mov    $0x20,%eax
c1009361:	2b 45 0c             	sub    0xc(%ebp),%eax
c1009364:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009367:	89 c1                	mov    %eax,%ecx
c1009369:	d3 ea                	shr    %cl,%edx
c100936b:	89 d0                	mov    %edx,%eax
c100936d:	c9                   	leave  
c100936e:	c3                   	ret    

c100936f <get_free_slot_in_global>:
c100936f:	55                   	push   %ebp
c1009370:	89 e5                	mov    %esp,%ebp
c1009372:	83 ec 10             	sub    $0x10,%esp
c1009375:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
c100937c:	eb 1b                	jmp    c1009399 <get_free_slot_in_global+0x2a>
c100937e:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009381:	89 d0                	mov    %edx,%eax
c1009383:	01 c0                	add    %eax,%eax
c1009385:	01 d0                	add    %edx,%eax
c1009387:	c1 e0 02             	shl    $0x2,%eax
c100938a:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100938f:	8b 00                	mov    (%eax),%eax
c1009391:	85 c0                	test   %eax,%eax
c1009393:	74 0c                	je     c10093a1 <get_free_slot_in_global+0x32>
c1009395:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1009399:	83 7d fc 1f          	cmpl   $0x1f,-0x4(%ebp)
c100939d:	76 df                	jbe    c100937e <get_free_slot_in_global+0xf>
c100939f:	eb 01                	jmp    c10093a2 <get_free_slot_in_global+0x33>
c10093a1:	90                   	nop
c10093a2:	83 7d fc 20          	cmpl   $0x20,-0x4(%ebp)
c10093a6:	75 07                	jne    c10093af <get_free_slot_in_global+0x40>
c10093a8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10093ad:	eb 03                	jmp    c10093b2 <get_free_slot_in_global+0x43>
c10093af:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10093b2:	c9                   	leave  
c10093b3:	c3                   	ret    

c10093b4 <task_fd_install>:
c10093b4:	55                   	push   %ebp
c10093b5:	89 e5                	mov    %esp,%ebp
c10093b7:	83 ec 10             	sub    $0x10,%esp
c10093ba:	c6 45 ff 03          	movb   $0x3,-0x1(%ebp)
c10093be:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10093c3:	0f be 55 ff          	movsbl -0x1(%ebp),%edx
c10093c7:	83 c2 1c             	add    $0x1c,%edx
c10093ca:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c10093ce:	83 f8 ff             	cmp    $0xffffffff,%eax
c10093d1:	75 15                	jne    c10093e8 <task_fd_install+0x34>
c10093d3:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10093d8:	0f be 4d ff          	movsbl -0x1(%ebp),%ecx
c10093dc:	8b 55 08             	mov    0x8(%ebp),%edx
c10093df:	83 c1 1c             	add    $0x1c,%ecx
c10093e2:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
c10093e6:	eb 0c                	jmp    c10093f4 <task_fd_install+0x40>
c10093e8:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
c10093ec:	83 c0 01             	add    $0x1,%eax
c10093ef:	88 45 ff             	mov    %al,-0x1(%ebp)
c10093f2:	eb ca                	jmp    c10093be <task_fd_install+0xa>
c10093f4:	0f be 45 ff          	movsbl -0x1(%ebp),%eax
c10093f8:	c9                   	leave  
c10093f9:	c3                   	ret    

c10093fa <inode_bitmap_alloc>:
c10093fa:	55                   	push   %ebp
c10093fb:	89 e5                	mov    %esp,%ebp
c10093fd:	53                   	push   %ebx
c10093fe:	83 ec 10             	sub    $0x10,%esp
c1009401:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1009408:	eb 04                	jmp    c100940e <inode_bitmap_alloc+0x14>
c100940a:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c100940e:	8b 45 08             	mov    0x8(%ebp),%eax
c1009411:	8b 50 20             	mov    0x20(%eax),%edx
c1009414:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009417:	01 d0                	add    %edx,%eax
c1009419:	0f b6 00             	movzbl (%eax),%eax
c100941c:	3c ff                	cmp    $0xff,%al
c100941e:	75 0b                	jne    c100942b <inode_bitmap_alloc+0x31>
c1009420:	8b 45 08             	mov    0x8(%ebp),%eax
c1009423:	8b 40 1c             	mov    0x1c(%eax),%eax
c1009426:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1009429:	72 df                	jb     c100940a <inode_bitmap_alloc+0x10>
c100942b:	8b 45 08             	mov    0x8(%ebp),%eax
c100942e:	8b 40 1c             	mov    0x1c(%eax),%eax
c1009431:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1009434:	75 07                	jne    c100943d <inode_bitmap_alloc+0x43>
c1009436:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100943b:	eb 77                	jmp    c10094b4 <inode_bitmap_alloc+0xba>
c100943d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1009444:	eb 04                	jmp    c100944a <inode_bitmap_alloc+0x50>
c1009446:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100944a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100944d:	ba 01 00 00 00       	mov    $0x1,%edx
c1009452:	89 c1                	mov    %eax,%ecx
c1009454:	d3 e2                	shl    %cl,%edx
c1009456:	89 d0                	mov    %edx,%eax
c1009458:	89 c1                	mov    %eax,%ecx
c100945a:	8b 45 08             	mov    0x8(%ebp),%eax
c100945d:	8b 50 20             	mov    0x20(%eax),%edx
c1009460:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009463:	01 d0                	add    %edx,%eax
c1009465:	0f b6 00             	movzbl (%eax),%eax
c1009468:	21 c8                	and    %ecx,%eax
c100946a:	84 c0                	test   %al,%al
c100946c:	75 d8                	jne    c1009446 <inode_bitmap_alloc+0x4c>
c100946e:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009471:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c1009478:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100947b:	01 d0                	add    %edx,%eax
c100947d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009480:	8b 45 08             	mov    0x8(%ebp),%eax
c1009483:	8b 50 20             	mov    0x20(%eax),%edx
c1009486:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009489:	01 d0                	add    %edx,%eax
c100948b:	0f b6 00             	movzbl (%eax),%eax
c100948e:	89 c3                	mov    %eax,%ebx
c1009490:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009493:	ba 01 00 00 00       	mov    $0x1,%edx
c1009498:	89 c1                	mov    %eax,%ecx
c100949a:	d3 e2                	shl    %cl,%edx
c100949c:	89 d0                	mov    %edx,%eax
c100949e:	09 c3                	or     %eax,%ebx
c10094a0:	89 d9                	mov    %ebx,%ecx
c10094a2:	8b 45 08             	mov    0x8(%ebp),%eax
c10094a5:	8b 50 20             	mov    0x20(%eax),%edx
c10094a8:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10094ab:	01 d0                	add    %edx,%eax
c10094ad:	89 ca                	mov    %ecx,%edx
c10094af:	88 10                	mov    %dl,(%eax)
c10094b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10094b4:	83 c4 10             	add    $0x10,%esp
c10094b7:	5b                   	pop    %ebx
c10094b8:	5d                   	pop    %ebp
c10094b9:	c3                   	ret    

c10094ba <block_bitmap_alloc>:
c10094ba:	55                   	push   %ebp
c10094bb:	89 e5                	mov    %esp,%ebp
c10094bd:	53                   	push   %ebx
c10094be:	83 ec 10             	sub    $0x10,%esp
c10094c1:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c10094c8:	eb 04                	jmp    c10094ce <block_bitmap_alloc+0x14>
c10094ca:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10094ce:	8b 45 08             	mov    0x8(%ebp),%eax
c10094d1:	8b 50 18             	mov    0x18(%eax),%edx
c10094d4:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10094d7:	01 d0                	add    %edx,%eax
c10094d9:	0f b6 00             	movzbl (%eax),%eax
c10094dc:	3c ff                	cmp    $0xff,%al
c10094de:	75 0b                	jne    c10094eb <block_bitmap_alloc+0x31>
c10094e0:	8b 45 08             	mov    0x8(%ebp),%eax
c10094e3:	8b 40 14             	mov    0x14(%eax),%eax
c10094e6:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10094e9:	72 df                	jb     c10094ca <block_bitmap_alloc+0x10>
c10094eb:	8b 45 08             	mov    0x8(%ebp),%eax
c10094ee:	8b 40 14             	mov    0x14(%eax),%eax
c10094f1:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10094f4:	75 0a                	jne    c1009500 <block_bitmap_alloc+0x46>
c10094f6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10094fb:	e9 82 00 00 00       	jmp    c1009582 <block_bitmap_alloc+0xc8>
c1009500:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1009507:	eb 04                	jmp    c100950d <block_bitmap_alloc+0x53>
c1009509:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100950d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009510:	ba 01 00 00 00       	mov    $0x1,%edx
c1009515:	89 c1                	mov    %eax,%ecx
c1009517:	d3 e2                	shl    %cl,%edx
c1009519:	89 d0                	mov    %edx,%eax
c100951b:	89 c1                	mov    %eax,%ecx
c100951d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009520:	8b 50 18             	mov    0x18(%eax),%edx
c1009523:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009526:	01 d0                	add    %edx,%eax
c1009528:	0f b6 00             	movzbl (%eax),%eax
c100952b:	21 c8                	and    %ecx,%eax
c100952d:	84 c0                	test   %al,%al
c100952f:	75 d8                	jne    c1009509 <block_bitmap_alloc+0x4f>
c1009531:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009534:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c100953b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100953e:	01 d0                	add    %edx,%eax
c1009540:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009543:	8b 45 08             	mov    0x8(%ebp),%eax
c1009546:	8b 50 18             	mov    0x18(%eax),%edx
c1009549:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100954c:	01 d0                	add    %edx,%eax
c100954e:	0f b6 00             	movzbl (%eax),%eax
c1009551:	89 c3                	mov    %eax,%ebx
c1009553:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009556:	ba 01 00 00 00       	mov    $0x1,%edx
c100955b:	89 c1                	mov    %eax,%ecx
c100955d:	d3 e2                	shl    %cl,%edx
c100955f:	89 d0                	mov    %edx,%eax
c1009561:	09 c3                	or     %eax,%ebx
c1009563:	89 d9                	mov    %ebx,%ecx
c1009565:	8b 45 08             	mov    0x8(%ebp),%eax
c1009568:	8b 50 18             	mov    0x18(%eax),%edx
c100956b:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100956e:	01 d0                	add    %edx,%eax
c1009570:	89 ca                	mov    %ecx,%edx
c1009572:	88 10                	mov    %dl,(%eax)
c1009574:	8b 45 08             	mov    0x8(%ebp),%eax
c1009577:	8b 40 10             	mov    0x10(%eax),%eax
c100957a:	8b 50 28             	mov    0x28(%eax),%edx
c100957d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009580:	01 d0                	add    %edx,%eax
c1009582:	83 c4 10             	add    $0x10,%esp
c1009585:	5b                   	pop    %ebx
c1009586:	5d                   	pop    %ebp
c1009587:	c3                   	ret    

c1009588 <bitmap_sync>:
c1009588:	55                   	push   %ebp
c1009589:	89 e5                	mov    %esp,%ebp
c100958b:	83 ec 28             	sub    $0x28,%esp
c100958e:	8b 45 10             	mov    0x10(%ebp),%eax
c1009591:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1009594:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009597:	c1 e8 0c             	shr    $0xc,%eax
c100959a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100959d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10095a0:	c1 e0 09             	shl    $0x9,%eax
c10095a3:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10095a6:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10095aa:	85 c0                	test   %eax,%eax
c10095ac:	74 07                	je     c10095b5 <bitmap_sync+0x2d>
c10095ae:	83 f8 01             	cmp    $0x1,%eax
c10095b1:	74 23                	je     c10095d6 <bitmap_sync+0x4e>
c10095b3:	eb 41                	jmp    c10095f6 <bitmap_sync+0x6e>
c10095b5:	8b 45 08             	mov    0x8(%ebp),%eax
c10095b8:	8b 40 10             	mov    0x10(%eax),%eax
c10095bb:	8b 50 18             	mov    0x18(%eax),%edx
c10095be:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10095c1:	01 d0                	add    %edx,%eax
c10095c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10095c6:	8b 45 08             	mov    0x8(%ebp),%eax
c10095c9:	8b 50 20             	mov    0x20(%eax),%edx
c10095cc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10095cf:	01 d0                	add    %edx,%eax
c10095d1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10095d4:	eb 20                	jmp    c10095f6 <bitmap_sync+0x6e>
c10095d6:	8b 45 08             	mov    0x8(%ebp),%eax
c10095d9:	8b 40 10             	mov    0x10(%eax),%eax
c10095dc:	8b 50 10             	mov    0x10(%eax),%edx
c10095df:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10095e2:	01 d0                	add    %edx,%eax
c10095e4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10095e7:	8b 45 08             	mov    0x8(%ebp),%eax
c10095ea:	8b 50 18             	mov    0x18(%eax),%edx
c10095ed:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10095f0:	01 d0                	add    %edx,%eax
c10095f2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10095f5:	90                   	nop
c10095f6:	83 ec 04             	sub    $0x4,%esp
c10095f9:	6a 01                	push   $0x1
c10095fb:	ff 75 f4             	pushl  -0xc(%ebp)
c10095fe:	ff 75 f0             	pushl  -0x10(%ebp)
c1009601:	e8 da ca ff ff       	call   c10060e0 <ide_write>
c1009606:	83 c4 10             	add    $0x10,%esp
c1009609:	90                   	nop
c100960a:	c9                   	leave  
c100960b:	c3                   	ret    

c100960c <file_create>:
c100960c:	55                   	push   %ebp
c100960d:	89 e5                	mov    %esp,%ebp
c100960f:	83 ec 58             	sub    $0x58,%esp
c1009612:	8b 45 10             	mov    0x10(%ebp),%eax
c1009615:	88 45 b4             	mov    %al,-0x4c(%ebp)
c1009618:	83 ec 08             	sub    $0x8,%esp
c100961b:	6a 02                	push   $0x2
c100961d:	68 00 04 00 00       	push   $0x400
c1009622:	e8 91 96 ff ff       	call   c1002cb8 <vmm_malloc>
c1009627:	83 c4 10             	add    $0x10,%esp
c100962a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100962d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1009631:	75 1a                	jne    c100964d <file_create+0x41>
c1009633:	83 ec 0c             	sub    $0xc,%esp
c1009636:	68 4c c6 00 c1       	push   $0xc100c64c
c100963b:	e8 bb c1 ff ff       	call   c10057fb <printk>
c1009640:	83 c4 10             	add    $0x10,%esp
c1009643:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009648:	e9 9f 02 00 00       	jmp    c10098ec <file_create+0x2e0>
c100964d:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1009651:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009656:	83 ec 0c             	sub    $0xc,%esp
c1009659:	50                   	push   %eax
c100965a:	e8 9b fd ff ff       	call   c10093fa <inode_bitmap_alloc>
c100965f:	83 c4 10             	add    $0x10,%esp
c1009662:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009665:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1009669:	75 1a                	jne    c1009685 <file_create+0x79>
c100966b:	83 ec 0c             	sub    $0xc,%esp
c100966e:	68 7c c6 00 c1       	push   $0xc100c67c
c1009673:	e8 83 c1 ff ff       	call   c10057fb <printk>
c1009678:	83 c4 10             	add    $0x10,%esp
c100967b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009680:	e9 67 02 00 00       	jmp    c10098ec <file_create+0x2e0>
c1009685:	83 ec 08             	sub    $0x8,%esp
c1009688:	6a 02                	push   $0x2
c100968a:	6a 44                	push   $0x44
c100968c:	e8 27 96 ff ff       	call   c1002cb8 <vmm_malloc>
c1009691:	83 c4 10             	add    $0x10,%esp
c1009694:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009697:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c100969b:	75 19                	jne    c10096b6 <file_create+0xaa>
c100969d:	83 ec 0c             	sub    $0xc,%esp
c10096a0:	68 a4 c6 00 c1       	push   $0xc100c6a4
c10096a5:	e8 51 c1 ff ff       	call   c10057fb <printk>
c10096aa:	83 c4 10             	add    $0x10,%esp
c10096ad:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10096b1:	e9 88 01 00 00       	jmp    c100983e <file_create+0x232>
c10096b6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10096b9:	83 ec 08             	sub    $0x8,%esp
c10096bc:	ff 75 e4             	pushl  -0x1c(%ebp)
c10096bf:	50                   	push   %eax
c10096c0:	e8 b3 14 00 00       	call   c100ab78 <inode_init>
c10096c5:	83 c4 10             	add    $0x10,%esp
c10096c8:	e8 a2 fc ff ff       	call   c100936f <get_free_slot_in_global>
c10096cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10096d0:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10096d4:	75 19                	jne    c10096ef <file_create+0xe3>
c10096d6:	83 ec 0c             	sub    $0xc,%esp
c10096d9:	68 cf c6 00 c1       	push   $0xc100c6cf
c10096de:	e8 18 c1 ff ff       	call   c10057fb <printk>
c10096e3:	83 c4 10             	add    $0x10,%esp
c10096e6:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10096ea:	e9 4f 01 00 00       	jmp    c100983e <file_create+0x232>
c10096ef:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10096f2:	89 d0                	mov    %edx,%eax
c10096f4:	01 c0                	add    %eax,%eax
c10096f6:	01 d0                	add    %edx,%eax
c10096f8:	c1 e0 02             	shl    $0x2,%eax
c10096fb:	8d 90 48 42 a1 c1    	lea    -0x3e5ebdb8(%eax),%edx
c1009701:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009704:	89 02                	mov    %eax,(%edx)
c1009706:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009709:	89 d0                	mov    %edx,%eax
c100970b:	01 c0                	add    %eax,%eax
c100970d:	01 d0                	add    %edx,%eax
c100970f:	c1 e0 02             	shl    $0x2,%eax
c1009712:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1009717:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100971d:	0f b6 4d b4          	movzbl -0x4c(%ebp),%ecx
c1009721:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009724:	89 d0                	mov    %edx,%eax
c1009726:	01 c0                	add    %eax,%eax
c1009728:	01 d0                	add    %edx,%eax
c100972a:	c1 e0 02             	shl    $0x2,%eax
c100972d:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c1009732:	89 08                	mov    %ecx,(%eax)
c1009734:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009737:	89 d0                	mov    %edx,%eax
c1009739:	01 c0                	add    %eax,%eax
c100973b:	01 d0                	add    %edx,%eax
c100973d:	c1 e0 02             	shl    $0x2,%eax
c1009740:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1009745:	8b 00                	mov    (%eax),%eax
c1009747:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c100974b:	83 ec 04             	sub    $0x4,%esp
c100974e:	6a 18                	push   $0x18
c1009750:	6a 00                	push   $0x0
c1009752:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1009755:	50                   	push   %eax
c1009756:	e8 4f 69 ff ff       	call   c10000aa <memset>
c100975b:	83 c4 10             	add    $0x10,%esp
c100975e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009761:	8d 55 c4             	lea    -0x3c(%ebp),%edx
c1009764:	52                   	push   %edx
c1009765:	6a 01                	push   $0x1
c1009767:	50                   	push   %eax
c1009768:	ff 75 0c             	pushl  0xc(%ebp)
c100976b:	e8 cc ef ff ff       	call   c100873c <create_dir_entry>
c1009770:	83 c4 10             	add    $0x10,%esp
c1009773:	83 ec 04             	sub    $0x4,%esp
c1009776:	ff 75 ec             	pushl  -0x14(%ebp)
c1009779:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c100977c:	50                   	push   %eax
c100977d:	ff 75 08             	pushl  0x8(%ebp)
c1009780:	e8 23 f0 ff ff       	call   c10087a8 <sync_dir_entry>
c1009785:	83 c4 10             	add    $0x10,%esp
c1009788:	85 c0                	test   %eax,%eax
c100978a:	75 19                	jne    c10097a5 <file_create+0x199>
c100978c:	83 ec 0c             	sub    $0xc,%esp
c100978f:	68 e8 c6 00 c1       	push   $0xc100c6e8
c1009794:	e8 62 c0 ff ff       	call   c10057fb <printk>
c1009799:	83 c4 10             	add    $0x10,%esp
c100979c:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c10097a0:	e9 99 00 00 00       	jmp    c100983e <file_create+0x232>
c10097a5:	83 ec 04             	sub    $0x4,%esp
c10097a8:	68 00 04 00 00       	push   $0x400
c10097ad:	6a 00                	push   $0x0
c10097af:	ff 75 ec             	pushl  -0x14(%ebp)
c10097b2:	e8 f3 68 ff ff       	call   c10000aa <memset>
c10097b7:	83 c4 10             	add    $0x10,%esp
c10097ba:	8b 45 08             	mov    0x8(%ebp),%eax
c10097bd:	8b 10                	mov    (%eax),%edx
c10097bf:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10097c4:	83 ec 04             	sub    $0x4,%esp
c10097c7:	ff 75 ec             	pushl  -0x14(%ebp)
c10097ca:	52                   	push   %edx
c10097cb:	50                   	push   %eax
c10097cc:	e8 d5 0d 00 00       	call   c100a5a6 <inode_sync>
c10097d1:	83 c4 10             	add    $0x10,%esp
c10097d4:	83 ec 04             	sub    $0x4,%esp
c10097d7:	68 00 04 00 00       	push   $0x400
c10097dc:	6a 00                	push   $0x0
c10097de:	ff 75 ec             	pushl  -0x14(%ebp)
c10097e1:	e8 c4 68 ff ff       	call   c10000aa <memset>
c10097e6:	83 c4 10             	add    $0x10,%esp
c10097e9:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10097ee:	83 ec 04             	sub    $0x4,%esp
c10097f1:	ff 75 ec             	pushl  -0x14(%ebp)
c10097f4:	ff 75 e4             	pushl  -0x1c(%ebp)
c10097f7:	50                   	push   %eax
c10097f8:	e8 a9 0d 00 00       	call   c100a5a6 <inode_sync>
c10097fd:	83 c4 10             	add    $0x10,%esp
c1009800:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009803:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009808:	83 ec 04             	sub    $0x4,%esp
c100980b:	6a 00                	push   $0x0
c100980d:	52                   	push   %edx
c100980e:	50                   	push   %eax
c100980f:	e8 74 fd ff ff       	call   c1009588 <bitmap_sync>
c1009814:	83 c4 10             	add    $0x10,%esp
c1009817:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100981a:	83 ec 08             	sub    $0x8,%esp
c100981d:	68 00 04 00 00       	push   $0x400
c1009822:	50                   	push   %eax
c1009823:	e8 b5 95 ff ff       	call   c1002ddd <vmm_free>
c1009828:	83 c4 10             	add    $0x10,%esp
c100982b:	83 ec 0c             	sub    $0xc,%esp
c100982e:	ff 75 f0             	pushl  -0x10(%ebp)
c1009831:	e8 7e fb ff ff       	call   c10093b4 <task_fd_install>
c1009836:	83 c4 10             	add    $0x10,%esp
c1009839:	e9 ae 00 00 00       	jmp    c10098ec <file_create+0x2e0>
c100983e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1009842:	83 f8 03             	cmp    $0x3,%eax
c1009845:	74 15                	je     c100985c <file_create+0x250>
c1009847:	83 f8 03             	cmp    $0x3,%eax
c100984a:	0f 8f 83 00 00 00    	jg     c10098d3 <file_create+0x2c7>
c1009850:	83 f8 01             	cmp    $0x1,%eax
c1009853:	74 39                	je     c100988e <file_create+0x282>
c1009855:	83 f8 02             	cmp    $0x2,%eax
c1009858:	74 23                	je     c100987d <file_create+0x271>
c100985a:	eb 77                	jmp    c10098d3 <file_create+0x2c7>
c100985c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100985f:	89 d0                	mov    %edx,%eax
c1009861:	01 c0                	add    %eax,%eax
c1009863:	01 d0                	add    %edx,%eax
c1009865:	c1 e0 02             	shl    $0x2,%eax
c1009868:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100986d:	83 ec 04             	sub    $0x4,%esp
c1009870:	6a 0c                	push   $0xc
c1009872:	6a 00                	push   $0x0
c1009874:	50                   	push   %eax
c1009875:	e8 30 68 ff ff       	call   c10000aa <memset>
c100987a:	83 c4 10             	add    $0x10,%esp
c100987d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009880:	83 ec 08             	sub    $0x8,%esp
c1009883:	6a 44                	push   $0x44
c1009885:	50                   	push   %eax
c1009886:	e8 52 95 ff ff       	call   c1002ddd <vmm_free>
c100988b:	83 c4 10             	add    $0x10,%esp
c100988e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009891:	8d 50 07             	lea    0x7(%eax),%edx
c1009894:	85 c0                	test   %eax,%eax
c1009896:	0f 48 c2             	cmovs  %edx,%eax
c1009899:	c1 f8 03             	sar    $0x3,%eax
c100989c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100989f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10098a2:	99                   	cltd   
c10098a3:	c1 ea 1d             	shr    $0x1d,%edx
c10098a6:	01 d0                	add    %edx,%eax
c10098a8:	83 e0 07             	and    $0x7,%eax
c10098ab:	29 d0                	sub    %edx,%eax
c10098ad:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10098b0:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10098b5:	8b 50 20             	mov    0x20(%eax),%edx
c10098b8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10098bb:	01 d0                	add    %edx,%eax
c10098bd:	0f b6 10             	movzbl (%eax),%edx
c10098c0:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10098c5:	8b 48 20             	mov    0x20(%eax),%ecx
c10098c8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10098cb:	01 c8                	add    %ecx,%eax
c10098cd:	83 e2 fe             	and    $0xfffffffe,%edx
c10098d0:	88 10                	mov    %dl,(%eax)
c10098d2:	90                   	nop
c10098d3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10098d6:	83 ec 08             	sub    $0x8,%esp
c10098d9:	68 00 04 00 00       	push   $0x400
c10098de:	50                   	push   %eax
c10098df:	e8 f9 94 ff ff       	call   c1002ddd <vmm_free>
c10098e4:	83 c4 10             	add    $0x10,%esp
c10098e7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10098ec:	c9                   	leave  
c10098ed:	c3                   	ret    

c10098ee <file_open>:
c10098ee:	55                   	push   %ebp
c10098ef:	89 e5                	mov    %esp,%ebp
c10098f1:	83 ec 28             	sub    $0x28,%esp
c10098f4:	8b 45 0c             	mov    0xc(%ebp),%eax
c10098f7:	88 45 e4             	mov    %al,-0x1c(%ebp)
c10098fa:	e8 70 fa ff ff       	call   c100936f <get_free_slot_in_global>
c10098ff:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009902:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c1009906:	75 1a                	jne    c1009922 <file_open+0x34>
c1009908:	83 ec 0c             	sub    $0xc,%esp
c100990b:	68 cf c6 00 c1       	push   $0xc100c6cf
c1009910:	e8 e6 be ff ff       	call   c10057fb <printk>
c1009915:	83 c4 10             	add    $0x10,%esp
c1009918:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100991d:	e9 e1 00 00 00       	jmp    c1009a03 <file_open+0x115>
c1009922:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009927:	83 ec 08             	sub    $0x8,%esp
c100992a:	ff 75 08             	pushl  0x8(%ebp)
c100992d:	50                   	push   %eax
c100992e:	e8 94 0d 00 00       	call   c100a6c7 <inode_open>
c1009933:	83 c4 10             	add    $0x10,%esp
c1009936:	89 c1                	mov    %eax,%ecx
c1009938:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100993b:	89 d0                	mov    %edx,%eax
c100993d:	01 c0                	add    %eax,%eax
c100993f:	01 d0                	add    %edx,%eax
c1009941:	c1 e0 02             	shl    $0x2,%eax
c1009944:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1009949:	89 08                	mov    %ecx,(%eax)
c100994b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100994e:	89 d0                	mov    %edx,%eax
c1009950:	01 c0                	add    %eax,%eax
c1009952:	01 d0                	add    %edx,%eax
c1009954:	c1 e0 02             	shl    $0x2,%eax
c1009957:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100995c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1009962:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
c1009966:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1009969:	89 d0                	mov    %edx,%eax
c100996b:	01 c0                	add    %eax,%eax
c100996d:	01 d0                	add    %edx,%eax
c100996f:	c1 e0 02             	shl    $0x2,%eax
c1009972:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c1009977:	89 08                	mov    %ecx,(%eax)
c1009979:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100997c:	89 d0                	mov    %edx,%eax
c100997e:	01 c0                	add    %eax,%eax
c1009980:	01 d0                	add    %edx,%eax
c1009982:	c1 e0 02             	shl    $0x2,%eax
c1009985:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100998a:	8b 00                	mov    (%eax),%eax
c100998c:	83 c0 0c             	add    $0xc,%eax
c100998f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009992:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009996:	83 e0 01             	and    $0x1,%eax
c1009999:	85 c0                	test   %eax,%eax
c100999b:	75 0b                	jne    c10099a8 <file_open+0xba>
c100999d:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c10099a1:	83 e0 02             	and    $0x2,%eax
c10099a4:	85 c0                	test   %eax,%eax
c10099a6:	74 4d                	je     c10099f5 <file_open+0x107>
c10099a8:	e8 fe 73 ff ff       	call   c1000dab <intr_save>
c10099ad:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10099b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10099b3:	0f b6 00             	movzbl (%eax),%eax
c10099b6:	84 c0                	test   %al,%al
c10099b8:	75 16                	jne    c10099d0 <file_open+0xe2>
c10099ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10099bd:	c6 00 01             	movb   $0x1,(%eax)
c10099c0:	83 ec 0c             	sub    $0xc,%esp
c10099c3:	ff 75 ec             	pushl  -0x14(%ebp)
c10099c6:	e8 f3 73 ff ff       	call   c1000dbe <intr_restore>
c10099cb:	83 c4 10             	add    $0x10,%esp
c10099ce:	eb 25                	jmp    c10099f5 <file_open+0x107>
c10099d0:	83 ec 0c             	sub    $0xc,%esp
c10099d3:	ff 75 ec             	pushl  -0x14(%ebp)
c10099d6:	e8 e3 73 ff ff       	call   c1000dbe <intr_restore>
c10099db:	83 c4 10             	add    $0x10,%esp
c10099de:	83 ec 0c             	sub    $0xc,%esp
c10099e1:	68 08 c7 00 c1       	push   $0xc100c708
c10099e6:	e8 10 be ff ff       	call   c10057fb <printk>
c10099eb:	83 c4 10             	add    $0x10,%esp
c10099ee:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10099f3:	eb 0e                	jmp    c1009a03 <file_open+0x115>
c10099f5:	83 ec 0c             	sub    $0xc,%esp
c10099f8:	ff 75 f4             	pushl  -0xc(%ebp)
c10099fb:	e8 b4 f9 ff ff       	call   c10093b4 <task_fd_install>
c1009a00:	83 c4 10             	add    $0x10,%esp
c1009a03:	c9                   	leave  
c1009a04:	c3                   	ret    

c1009a05 <file_close>:
c1009a05:	55                   	push   %ebp
c1009a06:	89 e5                	mov    %esp,%ebp
c1009a08:	83 ec 08             	sub    $0x8,%esp
c1009a0b:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1009a0f:	75 07                	jne    c1009a18 <file_close+0x13>
c1009a11:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009a16:	eb 2b                	jmp    c1009a43 <file_close+0x3e>
c1009a18:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a1b:	8b 40 08             	mov    0x8(%eax),%eax
c1009a1e:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1009a22:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a25:	8b 40 08             	mov    0x8(%eax),%eax
c1009a28:	83 ec 0c             	sub    $0xc,%esp
c1009a2b:	50                   	push   %eax
c1009a2c:	e8 6c 0d 00 00       	call   c100a79d <inode_close>
c1009a31:	83 c4 10             	add    $0x10,%esp
c1009a34:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a37:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1009a3e:	b8 00 00 00 00       	mov    $0x0,%eax
c1009a43:	c9                   	leave  
c1009a44:	c3                   	ret    

c1009a45 <file_write>:
c1009a45:	55                   	push   %ebp
c1009a46:	89 e5                	mov    %esp,%ebp
c1009a48:	83 ec 58             	sub    $0x58,%esp
c1009a4b:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a4e:	8b 40 08             	mov    0x8(%eax),%eax
c1009a51:	8b 50 04             	mov    0x4(%eax),%edx
c1009a54:	8b 45 10             	mov    0x10(%ebp),%eax
c1009a57:	01 d0                	add    %edx,%eax
c1009a59:	3d 00 18 01 00       	cmp    $0x11800,%eax
c1009a5e:	76 1a                	jbe    c1009a7a <file_write+0x35>
c1009a60:	83 ec 0c             	sub    $0xc,%esp
c1009a63:	68 34 c7 00 c1       	push   $0xc100c734
c1009a68:	e8 8e bd ff ff       	call   c10057fb <printk>
c1009a6d:	83 c4 10             	add    $0x10,%esp
c1009a70:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009a75:	e9 2b 07 00 00       	jmp    c100a1a5 <file_write+0x760>
c1009a7a:	83 ec 08             	sub    $0x8,%esp
c1009a7d:	6a 02                	push   $0x2
c1009a7f:	68 00 02 00 00       	push   $0x200
c1009a84:	e8 2f 92 ff ff       	call   c1002cb8 <vmm_malloc>
c1009a89:	83 c4 10             	add    $0x10,%esp
c1009a8c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009a8f:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c1009a93:	75 1a                	jne    c1009aaf <file_write+0x6a>
c1009a95:	83 ec 0c             	sub    $0xc,%esp
c1009a98:	68 6c c7 00 c1       	push   $0xc100c76c
c1009a9d:	e8 59 bd ff ff       	call   c10057fb <printk>
c1009aa2:	83 c4 10             	add    $0x10,%esp
c1009aa5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009aaa:	e9 f6 06 00 00       	jmp    c100a1a5 <file_write+0x760>
c1009aaf:	83 ec 08             	sub    $0x8,%esp
c1009ab2:	6a 02                	push   $0x2
c1009ab4:	68 30 02 00 00       	push   $0x230
c1009ab9:	e8 fa 91 ff ff       	call   c1002cb8 <vmm_malloc>
c1009abe:	83 c4 10             	add    $0x10,%esp
c1009ac1:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1009ac4:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c1009ac8:	75 1a                	jne    c1009ae4 <file_write+0x9f>
c1009aca:	83 ec 0c             	sub    $0xc,%esp
c1009acd:	68 98 c7 00 c1       	push   $0xc100c798
c1009ad2:	e8 24 bd ff ff       	call   c10057fb <printk>
c1009ad7:	83 c4 10             	add    $0x10,%esp
c1009ada:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009adf:	e9 c1 06 00 00       	jmp    c100a1a5 <file_write+0x760>
c1009ae4:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009ae7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009aea:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1009af1:	8b 45 10             	mov    0x10(%ebp),%eax
c1009af4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009af7:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1009afe:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
c1009b05:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b08:	8b 40 08             	mov    0x8(%eax),%eax
c1009b0b:	8b 40 10             	mov    0x10(%eax),%eax
c1009b0e:	85 c0                	test   %eax,%eax
c1009b10:	0f 85 8a 00 00 00    	jne    c1009ba0 <file_write+0x15b>
c1009b16:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009b1b:	83 ec 0c             	sub    $0xc,%esp
c1009b1e:	50                   	push   %eax
c1009b1f:	e8 96 f9 ff ff       	call   c10094ba <block_bitmap_alloc>
c1009b24:	83 c4 10             	add    $0x10,%esp
c1009b27:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009b2a:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009b2e:	75 1a                	jne    c1009b4a <file_write+0x105>
c1009b30:	83 ec 0c             	sub    $0xc,%esp
c1009b33:	68 c8 c7 00 c1       	push   $0xc100c7c8
c1009b38:	e8 be bc ff ff       	call   c10057fb <printk>
c1009b3d:	83 c4 10             	add    $0x10,%esp
c1009b40:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009b45:	e9 5b 06 00 00       	jmp    c100a1a5 <file_write+0x760>
c1009b4a:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b4d:	8b 40 08             	mov    0x8(%eax),%eax
c1009b50:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009b53:	89 50 10             	mov    %edx,0x10(%eax)
c1009b56:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009b59:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009b5e:	8b 40 10             	mov    0x10(%eax),%eax
c1009b61:	8b 40 28             	mov    0x28(%eax),%eax
c1009b64:	29 c2                	sub    %eax,%edx
c1009b66:	89 d0                	mov    %edx,%eax
c1009b68:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009b6b:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
c1009b6f:	75 19                	jne    c1009b8a <file_write+0x145>
c1009b71:	68 ef c7 00 c1       	push   $0xc100c7ef
c1009b76:	68 60 ca 00 c1       	push   $0xc100ca60
c1009b7b:	68 1e 01 00 00       	push   $0x11e
c1009b80:	68 08 c8 00 c1       	push   $0xc100c808
c1009b85:	e8 e1 67 ff ff       	call   c100036b <__PANIC>
c1009b8a:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009b8f:	83 ec 04             	sub    $0x4,%esp
c1009b92:	6a 01                	push   $0x1
c1009b94:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009b97:	50                   	push   %eax
c1009b98:	e8 eb f9 ff ff       	call   c1009588 <bitmap_sync>
c1009b9d:	83 c4 10             	add    $0x10,%esp
c1009ba0:	8b 45 08             	mov    0x8(%ebp),%eax
c1009ba3:	8b 40 08             	mov    0x8(%eax),%eax
c1009ba6:	8b 40 04             	mov    0x4(%eax),%eax
c1009ba9:	c1 e8 09             	shr    $0x9,%eax
c1009bac:	83 c0 01             	add    $0x1,%eax
c1009baf:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1009bb2:	8b 45 08             	mov    0x8(%ebp),%eax
c1009bb5:	8b 40 08             	mov    0x8(%eax),%eax
c1009bb8:	8b 50 04             	mov    0x4(%eax),%edx
c1009bbb:	8b 45 10             	mov    0x10(%ebp),%eax
c1009bbe:	01 d0                	add    %edx,%eax
c1009bc0:	c1 e8 09             	shr    $0x9,%eax
c1009bc3:	83 c0 01             	add    $0x1,%eax
c1009bc6:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009bc9:	81 7d cc 8c 00 00 00 	cmpl   $0x8c,-0x34(%ebp)
c1009bd0:	76 19                	jbe    c1009beb <file_write+0x1a6>
c1009bd2:	68 39 c8 00 c1       	push   $0xc100c839
c1009bd7:	68 60 ca 00 c1       	push   $0xc100ca60
c1009bdc:	68 27 01 00 00       	push   $0x127
c1009be1:	68 08 c8 00 c1       	push   $0xc100c808
c1009be6:	e8 80 67 ff ff       	call   c100036b <__PANIC>
c1009beb:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1009bee:	2b 45 d0             	sub    -0x30(%ebp),%eax
c1009bf1:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1009bf4:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
c1009bf8:	0f 85 83 00 00 00    	jne    c1009c81 <file_write+0x23c>
c1009bfe:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009c02:	77 2e                	ja     c1009c32 <file_write+0x1ed>
c1009c04:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009c07:	83 e8 01             	sub    $0x1,%eax
c1009c0a:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009c0d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c10:	8b 40 08             	mov    0x8(%eax),%eax
c1009c13:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009c16:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009c1d:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009c20:	01 ca                	add    %ecx,%edx
c1009c22:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009c25:	83 c1 04             	add    $0x4,%ecx
c1009c28:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009c2b:	89 02                	mov    %eax,(%edx)
c1009c2d:	e9 24 04 00 00       	jmp    c100a056 <file_write+0x611>
c1009c32:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c35:	8b 40 08             	mov    0x8(%eax),%eax
c1009c38:	8b 40 40             	mov    0x40(%eax),%eax
c1009c3b:	85 c0                	test   %eax,%eax
c1009c3d:	75 19                	jne    c1009c58 <file_write+0x213>
c1009c3f:	68 58 c8 00 c1       	push   $0xc100c858
c1009c44:	68 60 ca 00 c1       	push   $0xc100ca60
c1009c49:	68 35 01 00 00       	push   $0x135
c1009c4e:	68 08 c8 00 c1       	push   $0xc100c808
c1009c53:	e8 13 67 ff ff       	call   c100036b <__PANIC>
c1009c58:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c5b:	8b 40 08             	mov    0x8(%eax),%eax
c1009c5e:	8b 40 40             	mov    0x40(%eax),%eax
c1009c61:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009c64:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009c67:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009c6a:	83 c2 30             	add    $0x30,%edx
c1009c6d:	83 ec 04             	sub    $0x4,%esp
c1009c70:	6a 01                	push   $0x1
c1009c72:	50                   	push   %eax
c1009c73:	52                   	push   %edx
c1009c74:	e8 2a c4 ff ff       	call   c10060a3 <ide_read>
c1009c79:	83 c4 10             	add    $0x10,%esp
c1009c7c:	e9 d5 03 00 00       	jmp    c100a056 <file_write+0x611>
c1009c81:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009c85:	0f 87 25 01 00 00    	ja     c1009db0 <file_write+0x36b>
c1009c8b:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009c8e:	83 e8 01             	sub    $0x1,%eax
c1009c91:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009c94:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c97:	8b 40 08             	mov    0x8(%eax),%eax
c1009c9a:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009c9d:	83 c2 04             	add    $0x4,%edx
c1009ca0:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009ca3:	85 c0                	test   %eax,%eax
c1009ca5:	75 19                	jne    c1009cc0 <file_write+0x27b>
c1009ca7:	68 7c c8 00 c1       	push   $0xc100c87c
c1009cac:	68 60 ca 00 c1       	push   $0xc100ca60
c1009cb1:	68 3f 01 00 00       	push   $0x13f
c1009cb6:	68 08 c8 00 c1       	push   $0xc100c808
c1009cbb:	e8 ab 66 ff ff       	call   c100036b <__PANIC>
c1009cc0:	8b 45 08             	mov    0x8(%ebp),%eax
c1009cc3:	8b 40 08             	mov    0x8(%eax),%eax
c1009cc6:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009cc9:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009cd0:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009cd3:	01 ca                	add    %ecx,%edx
c1009cd5:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009cd8:	83 c1 04             	add    $0x4,%ecx
c1009cdb:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009cde:	89 02                	mov    %eax,(%edx)
c1009ce0:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009ce3:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009ce6:	e9 b4 00 00 00       	jmp    c1009d9f <file_write+0x35a>
c1009ceb:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009cf0:	83 ec 0c             	sub    $0xc,%esp
c1009cf3:	50                   	push   %eax
c1009cf4:	e8 c1 f7 ff ff       	call   c10094ba <block_bitmap_alloc>
c1009cf9:	83 c4 10             	add    $0x10,%esp
c1009cfc:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009cff:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009d03:	75 1a                	jne    c1009d1f <file_write+0x2da>
c1009d05:	83 ec 0c             	sub    $0xc,%esp
c1009d08:	68 a8 c8 00 c1       	push   $0xc100c8a8
c1009d0d:	e8 e9 ba ff ff       	call   c10057fb <printk>
c1009d12:	83 c4 10             	add    $0x10,%esp
c1009d15:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009d1a:	e9 86 04 00 00       	jmp    c100a1a5 <file_write+0x760>
c1009d1f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009d22:	8b 40 08             	mov    0x8(%eax),%eax
c1009d25:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009d28:	83 c2 04             	add    $0x4,%edx
c1009d2b:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009d2e:	85 c0                	test   %eax,%eax
c1009d30:	74 19                	je     c1009d4b <file_write+0x306>
c1009d32:	68 e0 c8 00 c1       	push   $0xc100c8e0
c1009d37:	68 60 ca 00 c1       	push   $0xc100ca60
c1009d3c:	68 4c 01 00 00       	push   $0x14c
c1009d41:	68 08 c8 00 c1       	push   $0xc100c808
c1009d46:	e8 20 66 ff ff       	call   c100036b <__PANIC>
c1009d4b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009d4e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009d55:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009d58:	01 d0                	add    %edx,%eax
c1009d5a:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009d5d:	89 10                	mov    %edx,(%eax)
c1009d5f:	8b 55 08             	mov    0x8(%ebp),%edx
c1009d62:	8b 52 08             	mov    0x8(%edx),%edx
c1009d65:	8b 00                	mov    (%eax),%eax
c1009d67:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009d6a:	83 c1 04             	add    $0x4,%ecx
c1009d6d:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1009d70:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009d73:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009d78:	8b 40 10             	mov    0x10(%eax),%eax
c1009d7b:	8b 40 28             	mov    0x28(%eax),%eax
c1009d7e:	29 c2                	sub    %eax,%edx
c1009d80:	89 d0                	mov    %edx,%eax
c1009d82:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009d85:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009d8a:	83 ec 04             	sub    $0x4,%esp
c1009d8d:	6a 01                	push   $0x1
c1009d8f:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009d92:	50                   	push   %eax
c1009d93:	e8 f0 f7 ff ff       	call   c1009588 <bitmap_sync>
c1009d98:	83 c4 10             	add    $0x10,%esp
c1009d9b:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009d9f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009da2:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009da5:	0f 82 40 ff ff ff    	jb     c1009ceb <file_write+0x2a6>
c1009dab:	e9 a6 02 00 00       	jmp    c100a056 <file_write+0x611>
c1009db0:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009db4:	0f 87 a3 01 00 00    	ja     c1009f5d <file_write+0x518>
c1009dba:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009dbe:	0f 86 99 01 00 00    	jbe    c1009f5d <file_write+0x518>
c1009dc4:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009dc7:	83 e8 01             	sub    $0x1,%eax
c1009dca:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009dcd:	8b 45 08             	mov    0x8(%ebp),%eax
c1009dd0:	8b 40 08             	mov    0x8(%eax),%eax
c1009dd3:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009dd6:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009ddd:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009de0:	01 ca                	add    %ecx,%edx
c1009de2:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009de5:	83 c1 04             	add    $0x4,%ecx
c1009de8:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009deb:	89 02                	mov    %eax,(%edx)
c1009ded:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009df2:	83 ec 0c             	sub    $0xc,%esp
c1009df5:	50                   	push   %eax
c1009df6:	e8 bf f6 ff ff       	call   c10094ba <block_bitmap_alloc>
c1009dfb:	83 c4 10             	add    $0x10,%esp
c1009dfe:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009e01:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009e05:	75 1a                	jne    c1009e21 <file_write+0x3dc>
c1009e07:	83 ec 0c             	sub    $0xc,%esp
c1009e0a:	68 0c c9 00 c1       	push   $0xc100c90c
c1009e0f:	e8 e7 b9 ff ff       	call   c10057fb <printk>
c1009e14:	83 c4 10             	add    $0x10,%esp
c1009e17:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009e1c:	e9 84 03 00 00       	jmp    c100a1a5 <file_write+0x760>
c1009e21:	8b 45 08             	mov    0x8(%ebp),%eax
c1009e24:	8b 40 08             	mov    0x8(%eax),%eax
c1009e27:	8b 40 40             	mov    0x40(%eax),%eax
c1009e2a:	85 c0                	test   %eax,%eax
c1009e2c:	74 19                	je     c1009e47 <file_write+0x402>
c1009e2e:	68 44 c9 00 c1       	push   $0xc100c944
c1009e33:	68 60 ca 00 c1       	push   $0xc100ca60
c1009e38:	68 63 01 00 00       	push   $0x163
c1009e3d:	68 08 c8 00 c1       	push   $0xc100c808
c1009e42:	e8 24 65 ff ff       	call   c100036b <__PANIC>
c1009e47:	8b 45 08             	mov    0x8(%ebp),%eax
c1009e4a:	8b 40 08             	mov    0x8(%eax),%eax
c1009e4d:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009e50:	89 50 40             	mov    %edx,0x40(%eax)
c1009e53:	8b 40 40             	mov    0x40(%eax),%eax
c1009e56:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009e59:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009e5c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009e5f:	e9 d0 00 00 00       	jmp    c1009f34 <file_write+0x4ef>
c1009e64:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009e69:	83 ec 0c             	sub    $0xc,%esp
c1009e6c:	50                   	push   %eax
c1009e6d:	e8 48 f6 ff ff       	call   c10094ba <block_bitmap_alloc>
c1009e72:	83 c4 10             	add    $0x10,%esp
c1009e75:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009e78:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009e7c:	75 1a                	jne    c1009e98 <file_write+0x453>
c1009e7e:	83 ec 0c             	sub    $0xc,%esp
c1009e81:	68 0c c9 00 c1       	push   $0xc100c90c
c1009e86:	e8 70 b9 ff ff       	call   c10057fb <printk>
c1009e8b:	83 c4 10             	add    $0x10,%esp
c1009e8e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009e93:	e9 0d 03 00 00       	jmp    c100a1a5 <file_write+0x760>
c1009e98:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1009e9c:	77 53                	ja     c1009ef1 <file_write+0x4ac>
c1009e9e:	8b 45 08             	mov    0x8(%ebp),%eax
c1009ea1:	8b 40 08             	mov    0x8(%eax),%eax
c1009ea4:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009ea7:	83 c2 04             	add    $0x4,%edx
c1009eaa:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009ead:	85 c0                	test   %eax,%eax
c1009eaf:	74 19                	je     c1009eca <file_write+0x485>
c1009eb1:	68 e0 c8 00 c1       	push   $0xc100c8e0
c1009eb6:	68 60 ca 00 c1       	push   $0xc100ca60
c1009ebb:	68 70 01 00 00       	push   $0x170
c1009ec0:	68 08 c8 00 c1       	push   $0xc100c808
c1009ec5:	e8 a1 64 ff ff       	call   c100036b <__PANIC>
c1009eca:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009ecd:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009ed4:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009ed7:	01 d0                	add    %edx,%eax
c1009ed9:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009edc:	89 10                	mov    %edx,(%eax)
c1009ede:	8b 55 08             	mov    0x8(%ebp),%edx
c1009ee1:	8b 52 08             	mov    0x8(%edx),%edx
c1009ee4:	8b 00                	mov    (%eax),%eax
c1009ee6:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009ee9:	83 c1 04             	add    $0x4,%ecx
c1009eec:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1009eef:	eb 14                	jmp    c1009f05 <file_write+0x4c0>
c1009ef1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009ef4:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009efb:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009efe:	01 c2                	add    %eax,%edx
c1009f00:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009f03:	89 02                	mov    %eax,(%edx)
c1009f05:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009f08:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009f0d:	8b 40 10             	mov    0x10(%eax),%eax
c1009f10:	8b 40 28             	mov    0x28(%eax),%eax
c1009f13:	29 c2                	sub    %eax,%edx
c1009f15:	89 d0                	mov    %edx,%eax
c1009f17:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009f1a:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009f1f:	83 ec 04             	sub    $0x4,%esp
c1009f22:	6a 01                	push   $0x1
c1009f24:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009f27:	50                   	push   %eax
c1009f28:	e8 5b f6 ff ff       	call   c1009588 <bitmap_sync>
c1009f2d:	83 c4 10             	add    $0x10,%esp
c1009f30:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009f34:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009f37:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009f3a:	0f 82 24 ff ff ff    	jb     c1009e64 <file_write+0x41f>
c1009f40:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009f43:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009f46:	83 c2 30             	add    $0x30,%edx
c1009f49:	83 ec 04             	sub    $0x4,%esp
c1009f4c:	6a 01                	push   $0x1
c1009f4e:	50                   	push   %eax
c1009f4f:	52                   	push   %edx
c1009f50:	e8 8b c1 ff ff       	call   c10060e0 <ide_write>
c1009f55:	83 c4 10             	add    $0x10,%esp
c1009f58:	e9 f9 00 00 00       	jmp    c100a056 <file_write+0x611>
c1009f5d:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009f61:	0f 86 ef 00 00 00    	jbe    c100a056 <file_write+0x611>
c1009f67:	8b 45 08             	mov    0x8(%ebp),%eax
c1009f6a:	8b 40 08             	mov    0x8(%eax),%eax
c1009f6d:	8b 40 40             	mov    0x40(%eax),%eax
c1009f70:	85 c0                	test   %eax,%eax
c1009f72:	75 19                	jne    c1009f8d <file_write+0x548>
c1009f74:	68 58 c8 00 c1       	push   $0xc100c858
c1009f79:	68 60 ca 00 c1       	push   $0xc100ca60
c1009f7e:	68 7f 01 00 00       	push   $0x17f
c1009f83:	68 08 c8 00 c1       	push   $0xc100c808
c1009f88:	e8 de 63 ff ff       	call   c100036b <__PANIC>
c1009f8d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009f90:	8b 40 08             	mov    0x8(%eax),%eax
c1009f93:	8b 40 40             	mov    0x40(%eax),%eax
c1009f96:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009f99:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009f9c:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009f9f:	83 c2 30             	add    $0x30,%edx
c1009fa2:	83 ec 04             	sub    $0x4,%esp
c1009fa5:	6a 01                	push   $0x1
c1009fa7:	50                   	push   %eax
c1009fa8:	52                   	push   %edx
c1009fa9:	e8 f5 c0 ff ff       	call   c10060a3 <ide_read>
c1009fae:	83 c4 10             	add    $0x10,%esp
c1009fb1:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009fb4:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009fb7:	eb 79                	jmp    c100a032 <file_write+0x5ed>
c1009fb9:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009fbe:	83 ec 0c             	sub    $0xc,%esp
c1009fc1:	50                   	push   %eax
c1009fc2:	e8 f3 f4 ff ff       	call   c10094ba <block_bitmap_alloc>
c1009fc7:	83 c4 10             	add    $0x10,%esp
c1009fca:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009fcd:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009fd1:	75 1a                	jne    c1009fed <file_write+0x5a8>
c1009fd3:	83 ec 0c             	sub    $0xc,%esp
c1009fd6:	68 68 c9 00 c1       	push   $0xc100c968
c1009fdb:	e8 1b b8 ff ff       	call   c10057fb <printk>
c1009fe0:	83 c4 10             	add    $0x10,%esp
c1009fe3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009fe8:	e9 b8 01 00 00       	jmp    c100a1a5 <file_write+0x760>
c1009fed:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009ff0:	8d 50 01             	lea    0x1(%eax),%edx
c1009ff3:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1009ff6:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009ffd:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a000:	01 c2                	add    %eax,%edx
c100a002:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a005:	89 02                	mov    %eax,(%edx)
c100a007:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100a00a:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a00f:	8b 40 10             	mov    0x10(%eax),%eax
c100a012:	8b 40 28             	mov    0x28(%eax),%eax
c100a015:	29 c2                	sub    %eax,%edx
c100a017:	89 d0                	mov    %edx,%eax
c100a019:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100a01c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a021:	83 ec 04             	sub    $0x4,%esp
c100a024:	6a 01                	push   $0x1
c100a026:	ff 75 d4             	pushl  -0x2c(%ebp)
c100a029:	50                   	push   %eax
c100a02a:	e8 59 f5 ff ff       	call   c1009588 <bitmap_sync>
c100a02f:	83 c4 10             	add    $0x10,%esp
c100a032:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a035:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c100a038:	0f 82 7b ff ff ff    	jb     c1009fb9 <file_write+0x574>
c100a03e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c100a041:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a044:	83 c2 30             	add    $0x30,%edx
c100a047:	83 ec 04             	sub    $0x4,%esp
c100a04a:	6a 01                	push   $0x1
c100a04c:	50                   	push   %eax
c100a04d:	52                   	push   %edx
c100a04e:	e8 8d c0 ff ff       	call   c10060e0 <ide_write>
c100a053:	83 c4 10             	add    $0x10,%esp
c100a056:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
c100a05a:	8b 45 08             	mov    0x8(%ebp),%eax
c100a05d:	8b 40 08             	mov    0x8(%eax),%eax
c100a060:	8b 40 04             	mov    0x4(%eax),%eax
c100a063:	8d 50 ff             	lea    -0x1(%eax),%edx
c100a066:	8b 45 08             	mov    0x8(%ebp),%eax
c100a069:	89 10                	mov    %edx,(%eax)
c100a06b:	e9 e3 00 00 00       	jmp    c100a153 <file_write+0x70e>
c100a070:	83 ec 04             	sub    $0x4,%esp
c100a073:	68 00 02 00 00       	push   $0x200
c100a078:	6a 00                	push   $0x0
c100a07a:	ff 75 e0             	pushl  -0x20(%ebp)
c100a07d:	e8 28 60 ff ff       	call   c10000aa <memset>
c100a082:	83 c4 10             	add    $0x10,%esp
c100a085:	8b 45 08             	mov    0x8(%ebp),%eax
c100a088:	8b 40 08             	mov    0x8(%eax),%eax
c100a08b:	8b 40 04             	mov    0x4(%eax),%eax
c100a08e:	c1 e8 09             	shr    $0x9,%eax
c100a091:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100a094:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100a097:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100a09e:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a0a1:	01 d0                	add    %edx,%eax
c100a0a3:	8b 00                	mov    (%eax),%eax
c100a0a5:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100a0a8:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0ab:	8b 40 08             	mov    0x8(%eax),%eax
c100a0ae:	8b 40 04             	mov    0x4(%eax),%eax
c100a0b1:	25 ff 01 00 00       	and    $0x1ff,%eax
c100a0b6:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100a0b9:	b8 00 02 00 00       	mov    $0x200,%eax
c100a0be:	2b 45 b8             	sub    -0x48(%ebp),%eax
c100a0c1:	89 45 b4             	mov    %eax,-0x4c(%ebp)
c100a0c4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a0c7:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
c100a0ca:	0f 46 45 b4          	cmovbe -0x4c(%ebp),%eax
c100a0ce:	89 45 b0             	mov    %eax,-0x50(%ebp)
c100a0d1:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
c100a0d5:	74 17                	je     c100a0ee <file_write+0x6a9>
c100a0d7:	83 ec 04             	sub    $0x4,%esp
c100a0da:	6a 01                	push   $0x1
c100a0dc:	ff 75 bc             	pushl  -0x44(%ebp)
c100a0df:	ff 75 e0             	pushl  -0x20(%ebp)
c100a0e2:	e8 bc bf ff ff       	call   c10060a3 <ide_read>
c100a0e7:	83 c4 10             	add    $0x10,%esp
c100a0ea:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
c100a0ee:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100a0f1:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a0f4:	01 d0                	add    %edx,%eax
c100a0f6:	83 ec 04             	sub    $0x4,%esp
c100a0f9:	ff 75 b0             	pushl  -0x50(%ebp)
c100a0fc:	ff 75 f4             	pushl  -0xc(%ebp)
c100a0ff:	50                   	push   %eax
c100a100:	e8 03 60 ff ff       	call   c1000108 <memcpy>
c100a105:	83 c4 10             	add    $0x10,%esp
c100a108:	83 ec 04             	sub    $0x4,%esp
c100a10b:	6a 01                	push   $0x1
c100a10d:	ff 75 bc             	pushl  -0x44(%ebp)
c100a110:	ff 75 e0             	pushl  -0x20(%ebp)
c100a113:	e8 c8 bf ff ff       	call   c10060e0 <ide_write>
c100a118:	83 c4 10             	add    $0x10,%esp
c100a11b:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100a11e:	01 45 f4             	add    %eax,-0xc(%ebp)
c100a121:	8b 45 08             	mov    0x8(%ebp),%eax
c100a124:	8b 40 08             	mov    0x8(%eax),%eax
c100a127:	8b 48 04             	mov    0x4(%eax),%ecx
c100a12a:	8b 45 08             	mov    0x8(%ebp),%eax
c100a12d:	8b 40 08             	mov    0x8(%eax),%eax
c100a130:	8b 55 b0             	mov    -0x50(%ebp),%edx
c100a133:	01 ca                	add    %ecx,%edx
c100a135:	89 50 04             	mov    %edx,0x4(%eax)
c100a138:	8b 45 08             	mov    0x8(%ebp),%eax
c100a13b:	8b 10                	mov    (%eax),%edx
c100a13d:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100a140:	01 c2                	add    %eax,%edx
c100a142:	8b 45 08             	mov    0x8(%ebp),%eax
c100a145:	89 10                	mov    %edx,(%eax)
c100a147:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100a14a:	01 45 f0             	add    %eax,-0x10(%ebp)
c100a14d:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100a150:	29 45 ec             	sub    %eax,-0x14(%ebp)
c100a153:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a156:	3b 45 10             	cmp    0x10(%ebp),%eax
c100a159:	0f 82 11 ff ff ff    	jb     c100a070 <file_write+0x62b>
c100a15f:	8b 45 08             	mov    0x8(%ebp),%eax
c100a162:	8b 50 08             	mov    0x8(%eax),%edx
c100a165:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a16a:	83 ec 04             	sub    $0x4,%esp
c100a16d:	ff 75 e0             	pushl  -0x20(%ebp)
c100a170:	52                   	push   %edx
c100a171:	50                   	push   %eax
c100a172:	e8 2f 04 00 00       	call   c100a5a6 <inode_sync>
c100a177:	83 c4 10             	add    $0x10,%esp
c100a17a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a17d:	83 ec 08             	sub    $0x8,%esp
c100a180:	68 30 02 00 00       	push   $0x230
c100a185:	50                   	push   %eax
c100a186:	e8 52 8c ff ff       	call   c1002ddd <vmm_free>
c100a18b:	83 c4 10             	add    $0x10,%esp
c100a18e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a191:	83 ec 08             	sub    $0x8,%esp
c100a194:	68 00 02 00 00       	push   $0x200
c100a199:	50                   	push   %eax
c100a19a:	e8 3e 8c ff ff       	call   c1002ddd <vmm_free>
c100a19f:	83 c4 10             	add    $0x10,%esp
c100a1a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a1a5:	c9                   	leave  
c100a1a6:	c3                   	ret    

c100a1a7 <file_read>:
c100a1a7:	55                   	push   %ebp
c100a1a8:	89 e5                	mov    %esp,%ebp
c100a1aa:	83 ec 48             	sub    $0x48,%esp
c100a1ad:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a1b0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a1b3:	8b 45 10             	mov    0x10(%ebp),%eax
c100a1b6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a1b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a1bc:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a1bf:	8b 45 08             	mov    0x8(%ebp),%eax
c100a1c2:	8b 10                	mov    (%eax),%edx
c100a1c4:	8b 45 10             	mov    0x10(%ebp),%eax
c100a1c7:	01 c2                	add    %eax,%edx
c100a1c9:	8b 45 08             	mov    0x8(%ebp),%eax
c100a1cc:	8b 40 08             	mov    0x8(%eax),%eax
c100a1cf:	8b 40 04             	mov    0x4(%eax),%eax
c100a1d2:	39 c2                	cmp    %eax,%edx
c100a1d4:	76 2b                	jbe    c100a201 <file_read+0x5a>
c100a1d6:	8b 45 08             	mov    0x8(%ebp),%eax
c100a1d9:	8b 40 08             	mov    0x8(%eax),%eax
c100a1dc:	8b 50 04             	mov    0x4(%eax),%edx
c100a1df:	8b 45 08             	mov    0x8(%ebp),%eax
c100a1e2:	8b 00                	mov    (%eax),%eax
c100a1e4:	29 c2                	sub    %eax,%edx
c100a1e6:	89 d0                	mov    %edx,%eax
c100a1e8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a1eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a1ee:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a1f1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c100a1f5:	75 0a                	jne    c100a201 <file_read+0x5a>
c100a1f7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100a1fc:	e9 31 03 00 00       	jmp    c100a532 <file_read+0x38b>
c100a201:	83 ec 08             	sub    $0x8,%esp
c100a204:	6a 02                	push   $0x2
c100a206:	68 00 02 00 00       	push   $0x200
c100a20b:	e8 a8 8a ff ff       	call   c1002cb8 <vmm_malloc>
c100a210:	83 c4 10             	add    $0x10,%esp
c100a213:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100a216:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c100a21a:	75 10                	jne    c100a22c <file_read+0x85>
c100a21c:	83 ec 0c             	sub    $0xc,%esp
c100a21f:	68 a0 c9 00 c1       	push   $0xc100c9a0
c100a224:	e8 d2 b5 ff ff       	call   c10057fb <printk>
c100a229:	83 c4 10             	add    $0x10,%esp
c100a22c:	83 ec 08             	sub    $0x8,%esp
c100a22f:	6a 02                	push   $0x2
c100a231:	68 30 02 00 00       	push   $0x230
c100a236:	e8 7d 8a ff ff       	call   c1002cb8 <vmm_malloc>
c100a23b:	83 c4 10             	add    $0x10,%esp
c100a23e:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100a241:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c100a245:	75 1a                	jne    c100a261 <file_read+0xba>
c100a247:	83 ec 0c             	sub    $0xc,%esp
c100a24a:	68 cc c9 00 c1       	push   $0xc100c9cc
c100a24f:	e8 a7 b5 ff ff       	call   c10057fb <printk>
c100a254:	83 c4 10             	add    $0x10,%esp
c100a257:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100a25c:	e9 d1 02 00 00       	jmp    c100a532 <file_read+0x38b>
c100a261:	8b 45 08             	mov    0x8(%ebp),%eax
c100a264:	8b 00                	mov    (%eax),%eax
c100a266:	c1 e8 09             	shr    $0x9,%eax
c100a269:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100a26c:	8b 45 08             	mov    0x8(%ebp),%eax
c100a26f:	8b 10                	mov    (%eax),%edx
c100a271:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a274:	01 d0                	add    %edx,%eax
c100a276:	c1 e8 09             	shr    $0x9,%eax
c100a279:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100a27c:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a27f:	2b 45 d4             	sub    -0x2c(%ebp),%eax
c100a282:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100a285:	81 7d d8 8a 00 00 00 	cmpl   $0x8a,-0x28(%ebp)
c100a28c:	77 09                	ja     c100a297 <file_read+0xf0>
c100a28e:	81 7d d4 8a 00 00 00 	cmpl   $0x8a,-0x2c(%ebp)
c100a295:	76 19                	jbe    c100a2b0 <file_read+0x109>
c100a297:	68 fc c9 00 c1       	push   $0xc100c9fc
c100a29c:	68 6c ca 00 c1       	push   $0xc100ca6c
c100a2a1:	68 d1 01 00 00       	push   $0x1d1
c100a2a6:	68 08 c8 00 c1       	push   $0xc100c808
c100a2ab:	e8 bb 60 ff ff       	call   c100036b <__PANIC>
c100a2b0:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
c100a2b4:	75 7b                	jne    c100a331 <file_read+0x18a>
c100a2b6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100a2b9:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c100a2bc:	74 19                	je     c100a2d7 <file_read+0x130>
c100a2be:	68 34 ca 00 c1       	push   $0xc100ca34
c100a2c3:	68 6c ca 00 c1       	push   $0xc100ca6c
c100a2c8:	68 d8 01 00 00       	push   $0x1d8
c100a2cd:	68 08 c8 00 c1       	push   $0xc100c808
c100a2d2:	e8 94 60 ff ff       	call   c100036b <__PANIC>
c100a2d7:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100a2db:	77 2b                	ja     c100a308 <file_read+0x161>
c100a2dd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100a2e0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a2e3:	8b 45 08             	mov    0x8(%ebp),%eax
c100a2e6:	8b 40 08             	mov    0x8(%eax),%eax
c100a2e9:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100a2ec:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100a2f3:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a2f6:	01 ca                	add    %ecx,%edx
c100a2f8:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100a2fb:	83 c1 04             	add    $0x4,%ecx
c100a2fe:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100a301:	89 02                	mov    %eax,(%edx)
c100a303:	e9 40 01 00 00       	jmp    c100a448 <file_read+0x2a1>
c100a308:	8b 45 08             	mov    0x8(%ebp),%eax
c100a30b:	8b 40 08             	mov    0x8(%eax),%eax
c100a30e:	8b 40 40             	mov    0x40(%eax),%eax
c100a311:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100a314:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100a317:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a31a:	83 c2 30             	add    $0x30,%edx
c100a31d:	83 ec 04             	sub    $0x4,%esp
c100a320:	6a 01                	push   $0x1
c100a322:	50                   	push   %eax
c100a323:	52                   	push   %edx
c100a324:	e8 7a bd ff ff       	call   c10060a3 <ide_read>
c100a329:	83 c4 10             	add    $0x10,%esp
c100a32c:	e9 17 01 00 00       	jmp    c100a448 <file_read+0x2a1>
c100a331:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100a335:	77 39                	ja     c100a370 <file_read+0x1c9>
c100a337:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a33a:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a33d:	eb 24                	jmp    c100a363 <file_read+0x1bc>
c100a33f:	8b 45 08             	mov    0x8(%ebp),%eax
c100a342:	8b 40 08             	mov    0x8(%eax),%eax
c100a345:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100a348:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100a34f:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a352:	01 ca                	add    %ecx,%edx
c100a354:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100a357:	83 c1 04             	add    $0x4,%ecx
c100a35a:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100a35d:	89 02                	mov    %eax,(%edx)
c100a35f:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c100a363:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a366:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
c100a369:	76 d4                	jbe    c100a33f <file_read+0x198>
c100a36b:	e9 d8 00 00 00       	jmp    c100a448 <file_read+0x2a1>
c100a370:	83 7d d8 0b          	cmpl   $0xb,-0x28(%ebp)
c100a374:	0f 87 84 00 00 00    	ja     c100a3fe <file_read+0x257>
c100a37a:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100a37e:	76 7e                	jbe    c100a3fe <file_read+0x257>
c100a380:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a383:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a386:	eb 24                	jmp    c100a3ac <file_read+0x205>
c100a388:	8b 45 08             	mov    0x8(%ebp),%eax
c100a38b:	8b 40 08             	mov    0x8(%eax),%eax
c100a38e:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100a391:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100a398:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a39b:	01 ca                	add    %ecx,%edx
c100a39d:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100a3a0:	83 c1 04             	add    $0x4,%ecx
c100a3a3:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100a3a6:	89 02                	mov    %eax,(%edx)
c100a3a8:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c100a3ac:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c100a3b0:	76 d6                	jbe    c100a388 <file_read+0x1e1>
c100a3b2:	8b 45 08             	mov    0x8(%ebp),%eax
c100a3b5:	8b 40 08             	mov    0x8(%eax),%eax
c100a3b8:	8b 40 40             	mov    0x40(%eax),%eax
c100a3bb:	85 c0                	test   %eax,%eax
c100a3bd:	75 19                	jne    c100a3d8 <file_read+0x231>
c100a3bf:	68 58 c8 00 c1       	push   $0xc100c858
c100a3c4:	68 6c ca 00 c1       	push   $0xc100ca6c
c100a3c9:	68 f0 01 00 00       	push   $0x1f0
c100a3ce:	68 08 c8 00 c1       	push   $0xc100c808
c100a3d3:	e8 93 5f ff ff       	call   c100036b <__PANIC>
c100a3d8:	8b 45 08             	mov    0x8(%ebp),%eax
c100a3db:	8b 40 08             	mov    0x8(%eax),%eax
c100a3de:	8b 40 40             	mov    0x40(%eax),%eax
c100a3e1:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100a3e4:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100a3e7:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a3ea:	83 c2 30             	add    $0x30,%edx
c100a3ed:	83 ec 04             	sub    $0x4,%esp
c100a3f0:	6a 01                	push   $0x1
c100a3f2:	50                   	push   %eax
c100a3f3:	52                   	push   %edx
c100a3f4:	e8 aa bc ff ff       	call   c10060a3 <ide_read>
c100a3f9:	83 c4 10             	add    $0x10,%esp
c100a3fc:	eb 4a                	jmp    c100a448 <file_read+0x2a1>
c100a3fe:	8b 45 08             	mov    0x8(%ebp),%eax
c100a401:	8b 40 08             	mov    0x8(%eax),%eax
c100a404:	8b 40 40             	mov    0x40(%eax),%eax
c100a407:	85 c0                	test   %eax,%eax
c100a409:	75 19                	jne    c100a424 <file_read+0x27d>
c100a40b:	68 58 c8 00 c1       	push   $0xc100c858
c100a410:	68 6c ca 00 c1       	push   $0xc100ca6c
c100a415:	68 f7 01 00 00       	push   $0x1f7
c100a41a:	68 08 c8 00 c1       	push   $0xc100c808
c100a41f:	e8 47 5f ff ff       	call   c100036b <__PANIC>
c100a424:	8b 45 08             	mov    0x8(%ebp),%eax
c100a427:	8b 40 08             	mov    0x8(%eax),%eax
c100a42a:	8b 40 40             	mov    0x40(%eax),%eax
c100a42d:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100a430:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100a433:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a436:	83 c2 30             	add    $0x30,%edx
c100a439:	83 ec 04             	sub    $0x4,%esp
c100a43c:	6a 01                	push   $0x1
c100a43e:	50                   	push   %eax
c100a43f:	52                   	push   %edx
c100a440:	e8 5e bc ff ff       	call   c10060a3 <ide_read>
c100a445:	83 c4 10             	add    $0x10,%esp
c100a448:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c100a44f:	e9 a7 00 00 00       	jmp    c100a4fb <file_read+0x354>
c100a454:	8b 45 08             	mov    0x8(%ebp),%eax
c100a457:	8b 00                	mov    (%eax),%eax
c100a459:	c1 e8 09             	shr    $0x9,%eax
c100a45c:	89 45 c8             	mov    %eax,-0x38(%ebp)
c100a45f:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100a462:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100a469:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a46c:	01 d0                	add    %edx,%eax
c100a46e:	8b 00                	mov    (%eax),%eax
c100a470:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100a473:	8b 45 08             	mov    0x8(%ebp),%eax
c100a476:	8b 00                	mov    (%eax),%eax
c100a478:	25 ff 01 00 00       	and    $0x1ff,%eax
c100a47d:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100a480:	b8 00 02 00 00       	mov    $0x200,%eax
c100a485:	2b 45 c0             	sub    -0x40(%ebp),%eax
c100a488:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100a48b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a48e:	39 45 bc             	cmp    %eax,-0x44(%ebp)
c100a491:	0f 46 45 bc          	cmovbe -0x44(%ebp),%eax
c100a495:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100a498:	83 ec 04             	sub    $0x4,%esp
c100a49b:	68 00 02 00 00       	push   $0x200
c100a4a0:	6a 00                	push   $0x0
c100a4a2:	ff 75 e0             	pushl  -0x20(%ebp)
c100a4a5:	e8 00 5c ff ff       	call   c10000aa <memset>
c100a4aa:	83 c4 10             	add    $0x10,%esp
c100a4ad:	83 ec 04             	sub    $0x4,%esp
c100a4b0:	6a 01                	push   $0x1
c100a4b2:	ff 75 c4             	pushl  -0x3c(%ebp)
c100a4b5:	ff 75 e0             	pushl  -0x20(%ebp)
c100a4b8:	e8 e6 bb ff ff       	call   c10060a3 <ide_read>
c100a4bd:	83 c4 10             	add    $0x10,%esp
c100a4c0:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100a4c3:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100a4c6:	01 d0                	add    %edx,%eax
c100a4c8:	83 ec 04             	sub    $0x4,%esp
c100a4cb:	ff 75 b8             	pushl  -0x48(%ebp)
c100a4ce:	50                   	push   %eax
c100a4cf:	ff 75 f4             	pushl  -0xc(%ebp)
c100a4d2:	e8 31 5c ff ff       	call   c1000108 <memcpy>
c100a4d7:	83 c4 10             	add    $0x10,%esp
c100a4da:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a4dd:	01 45 f4             	add    %eax,-0xc(%ebp)
c100a4e0:	8b 45 08             	mov    0x8(%ebp),%eax
c100a4e3:	8b 10                	mov    (%eax),%edx
c100a4e5:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a4e8:	01 c2                	add    %eax,%edx
c100a4ea:	8b 45 08             	mov    0x8(%ebp),%eax
c100a4ed:	89 10                	mov    %edx,(%eax)
c100a4ef:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a4f2:	01 45 e4             	add    %eax,-0x1c(%ebp)
c100a4f5:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a4f8:	29 45 ec             	sub    %eax,-0x14(%ebp)
c100a4fb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a4fe:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c100a501:	0f 82 4d ff ff ff    	jb     c100a454 <file_read+0x2ad>
c100a507:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a50a:	83 ec 08             	sub    $0x8,%esp
c100a50d:	68 30 02 00 00       	push   $0x230
c100a512:	50                   	push   %eax
c100a513:	e8 c5 88 ff ff       	call   c1002ddd <vmm_free>
c100a518:	83 c4 10             	add    $0x10,%esp
c100a51b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a51e:	83 ec 08             	sub    $0x8,%esp
c100a521:	68 00 02 00 00       	push   $0x200
c100a526:	50                   	push   %eax
c100a527:	e8 b1 88 ff ff       	call   c1002ddd <vmm_free>
c100a52c:	83 c4 10             	add    $0x10,%esp
c100a52f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a532:	c9                   	leave  
c100a533:	c3                   	ret    

c100a534 <inode_locate>:
c100a534:	55                   	push   %ebp
c100a535:	89 e5                	mov    %esp,%ebp
c100a537:	83 ec 20             	sub    $0x20,%esp
c100a53a:	8b 45 08             	mov    0x8(%ebp),%eax
c100a53d:	8b 40 10             	mov    0x10(%eax),%eax
c100a540:	8b 40 20             	mov    0x20(%eax),%eax
c100a543:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100a546:	c7 45 f8 44 00 00 00 	movl   $0x44,-0x8(%ebp)
c100a54d:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a550:	0f af 45 f8          	imul   -0x8(%ebp),%eax
c100a554:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a557:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a55a:	c1 e8 09             	shr    $0x9,%eax
c100a55d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a560:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a563:	25 ff 01 00 00       	and    $0x1ff,%eax
c100a568:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a56b:	b8 00 02 00 00       	mov    $0x200,%eax
c100a570:	2b 45 ec             	sub    -0x14(%ebp),%eax
c100a573:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a576:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a579:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c100a57c:	73 08                	jae    c100a586 <inode_locate+0x52>
c100a57e:	8b 45 10             	mov    0x10(%ebp),%eax
c100a581:	c6 00 01             	movb   $0x1,(%eax)
c100a584:	eb 06                	jmp    c100a58c <inode_locate+0x58>
c100a586:	8b 45 10             	mov    0x10(%ebp),%eax
c100a589:	c6 00 00             	movb   $0x0,(%eax)
c100a58c:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100a58f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a592:	01 c2                	add    %eax,%edx
c100a594:	8b 45 10             	mov    0x10(%ebp),%eax
c100a597:	89 50 04             	mov    %edx,0x4(%eax)
c100a59a:	8b 45 10             	mov    0x10(%ebp),%eax
c100a59d:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a5a0:	89 50 08             	mov    %edx,0x8(%eax)
c100a5a3:	90                   	nop
c100a5a4:	c9                   	leave  
c100a5a5:	c3                   	ret    

c100a5a6 <inode_sync>:
c100a5a6:	55                   	push   %ebp
c100a5a7:	89 e5                	mov    %esp,%ebp
c100a5a9:	57                   	push   %edi
c100a5aa:	56                   	push   %esi
c100a5ab:	53                   	push   %ebx
c100a5ac:	83 ec 6c             	sub    $0x6c,%esp
c100a5af:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a5b2:	8b 00                	mov    (%eax),%eax
c100a5b4:	88 45 e7             	mov    %al,-0x19(%ebp)
c100a5b7:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
c100a5bb:	8d 55 d4             	lea    -0x2c(%ebp),%edx
c100a5be:	52                   	push   %edx
c100a5bf:	50                   	push   %eax
c100a5c0:	ff 75 08             	pushl  0x8(%ebp)
c100a5c3:	e8 6c ff ff ff       	call   c100a534 <inode_locate>
c100a5c8:	83 c4 0c             	add    $0xc,%esp
c100a5cb:	83 ec 04             	sub    $0x4,%esp
c100a5ce:	6a 44                	push   $0x44
c100a5d0:	ff 75 0c             	pushl  0xc(%ebp)
c100a5d3:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a5d6:	50                   	push   %eax
c100a5d7:	e8 2c 5b ff ff       	call   c1000108 <memcpy>
c100a5dc:	83 c4 10             	add    $0x10,%esp
c100a5df:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
c100a5e6:	c6 45 9c 00          	movb   $0x0,-0x64(%ebp)
c100a5ea:	8b 45 10             	mov    0x10(%ebp),%eax
c100a5ed:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100a5f0:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
c100a5f4:	84 c0                	test   %al,%al
c100a5f6:	74 64                	je     c100a65c <inode_sync+0xb6>
c100a5f8:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a5fb:	83 ec 04             	sub    $0x4,%esp
c100a5fe:	6a 02                	push   $0x2
c100a600:	50                   	push   %eax
c100a601:	ff 75 e0             	pushl  -0x20(%ebp)
c100a604:	e8 9a ba ff ff       	call   c10060a3 <ide_read>
c100a609:	83 c4 10             	add    $0x10,%esp
c100a60c:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a60f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a612:	01 d0                	add    %edx,%eax
c100a614:	89 c2                	mov    %eax,%edx
c100a616:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a619:	b9 44 00 00 00       	mov    $0x44,%ecx
c100a61e:	8b 18                	mov    (%eax),%ebx
c100a620:	89 1a                	mov    %ebx,(%edx)
c100a622:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c100a626:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c100a62a:	8d 5a 04             	lea    0x4(%edx),%ebx
c100a62d:	83 e3 fc             	and    $0xfffffffc,%ebx
c100a630:	29 da                	sub    %ebx,%edx
c100a632:	29 d0                	sub    %edx,%eax
c100a634:	01 d1                	add    %edx,%ecx
c100a636:	83 e1 fc             	and    $0xfffffffc,%ecx
c100a639:	c1 e9 02             	shr    $0x2,%ecx
c100a63c:	89 ca                	mov    %ecx,%edx
c100a63e:	89 df                	mov    %ebx,%edi
c100a640:	89 c6                	mov    %eax,%esi
c100a642:	89 d1                	mov    %edx,%ecx
c100a644:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100a646:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a649:	83 ec 04             	sub    $0x4,%esp
c100a64c:	6a 02                	push   $0x2
c100a64e:	50                   	push   %eax
c100a64f:	ff 75 e0             	pushl  -0x20(%ebp)
c100a652:	e8 89 ba ff ff       	call   c10060e0 <ide_write>
c100a657:	83 c4 10             	add    $0x10,%esp
c100a65a:	eb 62                	jmp    c100a6be <inode_sync+0x118>
c100a65c:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a65f:	83 ec 04             	sub    $0x4,%esp
c100a662:	6a 01                	push   $0x1
c100a664:	50                   	push   %eax
c100a665:	ff 75 e0             	pushl  -0x20(%ebp)
c100a668:	e8 36 ba ff ff       	call   c10060a3 <ide_read>
c100a66d:	83 c4 10             	add    $0x10,%esp
c100a670:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a673:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a676:	01 d0                	add    %edx,%eax
c100a678:	89 c2                	mov    %eax,%edx
c100a67a:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a67d:	b9 44 00 00 00       	mov    $0x44,%ecx
c100a682:	8b 18                	mov    (%eax),%ebx
c100a684:	89 1a                	mov    %ebx,(%edx)
c100a686:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c100a68a:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c100a68e:	8d 5a 04             	lea    0x4(%edx),%ebx
c100a691:	83 e3 fc             	and    $0xfffffffc,%ebx
c100a694:	29 da                	sub    %ebx,%edx
c100a696:	29 d0                	sub    %edx,%eax
c100a698:	01 d1                	add    %edx,%ecx
c100a69a:	83 e1 fc             	and    $0xfffffffc,%ecx
c100a69d:	c1 e9 02             	shr    $0x2,%ecx
c100a6a0:	89 ca                	mov    %ecx,%edx
c100a6a2:	89 df                	mov    %ebx,%edi
c100a6a4:	89 c6                	mov    %eax,%esi
c100a6a6:	89 d1                	mov    %edx,%ecx
c100a6a8:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100a6aa:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a6ad:	83 ec 04             	sub    $0x4,%esp
c100a6b0:	6a 01                	push   $0x1
c100a6b2:	50                   	push   %eax
c100a6b3:	ff 75 e0             	pushl  -0x20(%ebp)
c100a6b6:	e8 25 ba ff ff       	call   c10060e0 <ide_write>
c100a6bb:	83 c4 10             	add    $0x10,%esp
c100a6be:	90                   	nop
c100a6bf:	8d 65 f4             	lea    -0xc(%ebp),%esp
c100a6c2:	5b                   	pop    %ebx
c100a6c3:	5e                   	pop    %esi
c100a6c4:	5f                   	pop    %edi
c100a6c5:	5d                   	pop    %ebp
c100a6c6:	c3                   	ret    

c100a6c7 <inode_open>:
c100a6c7:	55                   	push   %ebp
c100a6c8:	89 e5                	mov    %esp,%ebp
c100a6ca:	83 ec 28             	sub    $0x28,%esp
c100a6cd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
c100a6d0:	50                   	push   %eax
c100a6d1:	ff 75 0c             	pushl  0xc(%ebp)
c100a6d4:	ff 75 08             	pushl  0x8(%ebp)
c100a6d7:	e8 58 fe ff ff       	call   c100a534 <inode_locate>
c100a6dc:	83 c4 0c             	add    $0xc,%esp
c100a6df:	83 ec 08             	sub    $0x8,%esp
c100a6e2:	6a 02                	push   $0x2
c100a6e4:	6a 44                	push   $0x44
c100a6e6:	e8 cd 85 ff ff       	call   c1002cb8 <vmm_malloc>
c100a6eb:	83 c4 10             	add    $0x10,%esp
c100a6ee:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a6f1:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100a6f5:	84 c0                	test   %al,%al
c100a6f7:	74 2b                	je     c100a724 <inode_open+0x5d>
c100a6f9:	83 ec 08             	sub    $0x8,%esp
c100a6fc:	6a 02                	push   $0x2
c100a6fe:	68 00 04 00 00       	push   $0x400
c100a703:	e8 b0 85 ff ff       	call   c1002cb8 <vmm_malloc>
c100a708:	83 c4 10             	add    $0x10,%esp
c100a70b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a70e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a711:	83 ec 04             	sub    $0x4,%esp
c100a714:	6a 02                	push   $0x2
c100a716:	50                   	push   %eax
c100a717:	ff 75 f4             	pushl  -0xc(%ebp)
c100a71a:	e8 84 b9 ff ff       	call   c10060a3 <ide_read>
c100a71f:	83 c4 10             	add    $0x10,%esp
c100a722:	eb 29                	jmp    c100a74d <inode_open+0x86>
c100a724:	83 ec 08             	sub    $0x8,%esp
c100a727:	6a 02                	push   $0x2
c100a729:	68 00 02 00 00       	push   $0x200
c100a72e:	e8 85 85 ff ff       	call   c1002cb8 <vmm_malloc>
c100a733:	83 c4 10             	add    $0x10,%esp
c100a736:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a739:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a73c:	83 ec 04             	sub    $0x4,%esp
c100a73f:	6a 01                	push   $0x1
c100a741:	50                   	push   %eax
c100a742:	ff 75 f4             	pushl  -0xc(%ebp)
c100a745:	e8 59 b9 ff ff       	call   c10060a3 <ide_read>
c100a74a:	83 c4 10             	add    $0x10,%esp
c100a74d:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a750:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a753:	01 d0                	add    %edx,%eax
c100a755:	83 ec 04             	sub    $0x4,%esp
c100a758:	6a 44                	push   $0x44
c100a75a:	50                   	push   %eax
c100a75b:	ff 75 f0             	pushl  -0x10(%ebp)
c100a75e:	e8 a5 59 ff ff       	call   c1000108 <memcpy>
c100a763:	83 c4 10             	add    $0x10,%esp
c100a766:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100a76a:	84 c0                	test   %al,%al
c100a76c:	74 16                	je     c100a784 <inode_open+0xbd>
c100a76e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a771:	83 ec 08             	sub    $0x8,%esp
c100a774:	68 00 04 00 00       	push   $0x400
c100a779:	50                   	push   %eax
c100a77a:	e8 5e 86 ff ff       	call   c1002ddd <vmm_free>
c100a77f:	83 c4 10             	add    $0x10,%esp
c100a782:	eb 14                	jmp    c100a798 <inode_open+0xd1>
c100a784:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a787:	83 ec 08             	sub    $0x8,%esp
c100a78a:	68 00 02 00 00       	push   $0x200
c100a78f:	50                   	push   %eax
c100a790:	e8 48 86 ff ff       	call   c1002ddd <vmm_free>
c100a795:	83 c4 10             	add    $0x10,%esp
c100a798:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a79b:	c9                   	leave  
c100a79c:	c3                   	ret    

c100a79d <inode_close>:
c100a79d:	55                   	push   %ebp
c100a79e:	89 e5                	mov    %esp,%ebp
c100a7a0:	83 ec 08             	sub    $0x8,%esp
c100a7a3:	8b 45 08             	mov    0x8(%ebp),%eax
c100a7a6:	83 ec 08             	sub    $0x8,%esp
c100a7a9:	6a 44                	push   $0x44
c100a7ab:	50                   	push   %eax
c100a7ac:	e8 2c 86 ff ff       	call   c1002ddd <vmm_free>
c100a7b1:	83 c4 10             	add    $0x10,%esp
c100a7b4:	90                   	nop
c100a7b5:	c9                   	leave  
c100a7b6:	c3                   	ret    

c100a7b7 <inode_delete>:
c100a7b7:	55                   	push   %ebp
c100a7b8:	89 e5                	mov    %esp,%ebp
c100a7ba:	83 ec 18             	sub    $0x18,%esp
c100a7bd:	81 7d 0c ff 0f 00 00 	cmpl   $0xfff,0xc(%ebp)
c100a7c4:	76 16                	jbe    c100a7dc <inode_delete+0x25>
c100a7c6:	68 78 ca 00 c1       	push   $0xc100ca78
c100a7cb:	68 34 cb 00 c1       	push   $0xc100cb34
c100a7d0:	6a 6b                	push   $0x6b
c100a7d2:	68 88 ca 00 c1       	push   $0xc100ca88
c100a7d7:	e8 8f 5b ff ff       	call   c100036b <__PANIC>
c100a7dc:	83 ec 04             	sub    $0x4,%esp
c100a7df:	8d 45 e8             	lea    -0x18(%ebp),%eax
c100a7e2:	50                   	push   %eax
c100a7e3:	ff 75 0c             	pushl  0xc(%ebp)
c100a7e6:	ff 75 08             	pushl  0x8(%ebp)
c100a7e9:	e8 46 fd ff ff       	call   c100a534 <inode_locate>
c100a7ee:	83 c4 10             	add    $0x10,%esp
c100a7f1:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a7f4:	8b 45 08             	mov    0x8(%ebp),%eax
c100a7f7:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c100a7fb:	0f b6 c8             	movzbl %al,%ecx
c100a7fe:	8b 45 08             	mov    0x8(%ebp),%eax
c100a801:	8b 40 0c             	mov    0xc(%eax),%eax
c100a804:	01 c8                	add    %ecx,%eax
c100a806:	39 c2                	cmp    %eax,%edx
c100a808:	76 16                	jbe    c100a820 <inode_delete+0x69>
c100a80a:	68 bc ca 00 c1       	push   $0xc100cabc
c100a80f:	68 34 cb 00 c1       	push   $0xc100cb34
c100a814:	6a 6e                	push   $0x6e
c100a816:	68 88 ca 00 c1       	push   $0xc100ca88
c100a81b:	e8 4b 5b ff ff       	call   c100036b <__PANIC>
c100a820:	8b 45 10             	mov    0x10(%ebp),%eax
c100a823:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a826:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
c100a82a:	84 c0                	test   %al,%al
c100a82c:	74 42                	je     c100a870 <inode_delete+0xb9>
c100a82e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a831:	83 ec 04             	sub    $0x4,%esp
c100a834:	6a 02                	push   $0x2
c100a836:	50                   	push   %eax
c100a837:	ff 75 f4             	pushl  -0xc(%ebp)
c100a83a:	e8 64 b8 ff ff       	call   c10060a3 <ide_read>
c100a83f:	83 c4 10             	add    $0x10,%esp
c100a842:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a845:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a848:	01 d0                	add    %edx,%eax
c100a84a:	83 ec 04             	sub    $0x4,%esp
c100a84d:	6a 44                	push   $0x44
c100a84f:	6a 00                	push   $0x0
c100a851:	50                   	push   %eax
c100a852:	e8 53 58 ff ff       	call   c10000aa <memset>
c100a857:	83 c4 10             	add    $0x10,%esp
c100a85a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a85d:	83 ec 04             	sub    $0x4,%esp
c100a860:	6a 02                	push   $0x2
c100a862:	50                   	push   %eax
c100a863:	ff 75 f4             	pushl  -0xc(%ebp)
c100a866:	e8 75 b8 ff ff       	call   c10060e0 <ide_write>
c100a86b:	83 c4 10             	add    $0x10,%esp
c100a86e:	eb 40                	jmp    c100a8b0 <inode_delete+0xf9>
c100a870:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a873:	83 ec 04             	sub    $0x4,%esp
c100a876:	6a 01                	push   $0x1
c100a878:	50                   	push   %eax
c100a879:	ff 75 f4             	pushl  -0xc(%ebp)
c100a87c:	e8 22 b8 ff ff       	call   c10060a3 <ide_read>
c100a881:	83 c4 10             	add    $0x10,%esp
c100a884:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a887:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a88a:	01 d0                	add    %edx,%eax
c100a88c:	83 ec 04             	sub    $0x4,%esp
c100a88f:	6a 44                	push   $0x44
c100a891:	6a 00                	push   $0x0
c100a893:	50                   	push   %eax
c100a894:	e8 11 58 ff ff       	call   c10000aa <memset>
c100a899:	83 c4 10             	add    $0x10,%esp
c100a89c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a89f:	83 ec 04             	sub    $0x4,%esp
c100a8a2:	6a 01                	push   $0x1
c100a8a4:	50                   	push   %eax
c100a8a5:	ff 75 f4             	pushl  -0xc(%ebp)
c100a8a8:	e8 33 b8 ff ff       	call   c10060e0 <ide_write>
c100a8ad:	83 c4 10             	add    $0x10,%esp
c100a8b0:	90                   	nop
c100a8b1:	c9                   	leave  
c100a8b2:	c3                   	ret    

c100a8b3 <inode_release>:
c100a8b3:	55                   	push   %ebp
c100a8b4:	89 e5                	mov    %esp,%ebp
c100a8b6:	57                   	push   %edi
c100a8b7:	53                   	push   %ebx
c100a8b8:	81 ec 50 02 00 00    	sub    $0x250,%esp
c100a8be:	83 ec 08             	sub    $0x8,%esp
c100a8c1:	ff 75 0c             	pushl  0xc(%ebp)
c100a8c4:	ff 75 08             	pushl  0x8(%ebp)
c100a8c7:	e8 fb fd ff ff       	call   c100a6c7 <inode_open>
c100a8cc:	83 c4 10             	add    $0x10,%esp
c100a8cf:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a8d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a8d5:	8b 00                	mov    (%eax),%eax
c100a8d7:	39 45 0c             	cmp    %eax,0xc(%ebp)
c100a8da:	74 19                	je     c100a8f5 <inode_release+0x42>
c100a8dc:	68 fc ca 00 c1       	push   $0xc100cafc
c100a8e1:	68 44 cb 00 c1       	push   $0xc100cb44
c100a8e6:	68 85 00 00 00       	push   $0x85
c100a8eb:	68 88 ca 00 c1       	push   $0xc100ca88
c100a8f0:	e8 76 5a ff ff       	call   c100036b <__PANIC>
c100a8f5:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100a8f9:	c6 45 f6 0c          	movb   $0xc,-0xa(%ebp)
c100a8fd:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
c100a903:	b8 00 00 00 00       	mov    $0x0,%eax
c100a908:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100a90d:	89 d7                	mov    %edx,%edi
c100a90f:	f3 ab                	rep stos %eax,%es:(%edi)
c100a911:	eb 22                	jmp    c100a935 <inode_release+0x82>
c100a913:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c100a917:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a91b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a91e:	83 c1 04             	add    $0x4,%ecx
c100a921:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c100a924:	89 94 85 b0 fd ff ff 	mov    %edx,-0x250(%ebp,%eax,4)
c100a92b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a92f:	83 c0 01             	add    $0x1,%eax
c100a932:	88 45 f7             	mov    %al,-0x9(%ebp)
c100a935:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c100a939:	76 d8                	jbe    c100a913 <inode_release+0x60>
c100a93b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a93e:	8b 40 40             	mov    0x40(%eax),%eax
c100a941:	85 c0                	test   %eax,%eax
c100a943:	0f 84 b2 00 00 00    	je     c100a9fb <inode_release+0x148>
c100a949:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a94c:	8b 50 40             	mov    0x40(%eax),%edx
c100a94f:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
c100a955:	83 c0 30             	add    $0x30,%eax
c100a958:	83 ec 04             	sub    $0x4,%esp
c100a95b:	6a 01                	push   $0x1
c100a95d:	52                   	push   %edx
c100a95e:	50                   	push   %eax
c100a95f:	e8 3f b7 ff ff       	call   c10060a3 <ide_read>
c100a964:	83 c4 10             	add    $0x10,%esp
c100a967:	c6 45 f6 8c          	movb   $0x8c,-0xa(%ebp)
c100a96b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a96e:	8b 50 40             	mov    0x40(%eax),%edx
c100a971:	8b 45 08             	mov    0x8(%ebp),%eax
c100a974:	8b 40 10             	mov    0x10(%eax),%eax
c100a977:	8b 40 28             	mov    0x28(%eax),%eax
c100a97a:	29 c2                	sub    %eax,%edx
c100a97c:	89 d0                	mov    %edx,%eax
c100a97e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a981:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100a985:	75 19                	jne    c100a9a0 <inode_release+0xed>
c100a987:	68 1c cb 00 c1       	push   $0xc100cb1c
c100a98c:	68 44 cb 00 c1       	push   $0xc100cb44
c100a991:	68 9d 00 00 00       	push   $0x9d
c100a996:	68 88 ca 00 c1       	push   $0xc100ca88
c100a99b:	e8 cb 59 ff ff       	call   c100036b <__PANIC>
c100a9a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a9a3:	c1 e8 03             	shr    $0x3,%eax
c100a9a6:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a9a9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a9ac:	83 e0 07             	and    $0x7,%eax
c100a9af:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a9b2:	8b 45 08             	mov    0x8(%ebp),%eax
c100a9b5:	8b 50 18             	mov    0x18(%eax),%edx
c100a9b8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a9bb:	01 d0                	add    %edx,%eax
c100a9bd:	0f b6 00             	movzbl (%eax),%eax
c100a9c0:	89 c2                	mov    %eax,%edx
c100a9c2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a9c5:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a9ca:	89 c1                	mov    %eax,%ecx
c100a9cc:	d3 e3                	shl    %cl,%ebx
c100a9ce:	89 d8                	mov    %ebx,%eax
c100a9d0:	f7 d0                	not    %eax
c100a9d2:	89 d1                	mov    %edx,%ecx
c100a9d4:	21 c1                	and    %eax,%ecx
c100a9d6:	8b 45 08             	mov    0x8(%ebp),%eax
c100a9d9:	8b 50 18             	mov    0x18(%eax),%edx
c100a9dc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a9df:	01 d0                	add    %edx,%eax
c100a9e1:	89 ca                	mov    %ecx,%edx
c100a9e3:	88 10                	mov    %dl,(%eax)
c100a9e5:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a9ea:	83 ec 04             	sub    $0x4,%esp
c100a9ed:	6a 01                	push   $0x1
c100a9ef:	ff 75 ec             	pushl  -0x14(%ebp)
c100a9f2:	50                   	push   %eax
c100a9f3:	e8 90 eb ff ff       	call   c1009588 <bitmap_sync>
c100a9f8:	83 c4 10             	add    $0x10,%esp
c100a9fb:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100a9ff:	e9 b9 00 00 00       	jmp    c100aabd <inode_release+0x20a>
c100aa04:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100aa08:	8b 84 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%eax
c100aa0f:	85 c0                	test   %eax,%eax
c100aa11:	0f 84 9c 00 00 00    	je     c100aab3 <inode_release+0x200>
c100aa17:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100aa1e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100aa22:	8b 94 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%edx
c100aa29:	8b 45 08             	mov    0x8(%ebp),%eax
c100aa2c:	8b 40 10             	mov    0x10(%eax),%eax
c100aa2f:	8b 40 28             	mov    0x28(%eax),%eax
c100aa32:	29 c2                	sub    %eax,%edx
c100aa34:	89 d0                	mov    %edx,%eax
c100aa36:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100aa39:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100aa3d:	75 19                	jne    c100aa58 <inode_release+0x1a5>
c100aa3f:	68 1c cb 00 c1       	push   $0xc100cb1c
c100aa44:	68 44 cb 00 c1       	push   $0xc100cb44
c100aa49:	68 aa 00 00 00       	push   $0xaa
c100aa4e:	68 88 ca 00 c1       	push   $0xc100ca88
c100aa53:	e8 13 59 ff ff       	call   c100036b <__PANIC>
c100aa58:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100aa5b:	c1 e8 03             	shr    $0x3,%eax
c100aa5e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100aa61:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100aa64:	83 e0 07             	and    $0x7,%eax
c100aa67:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100aa6a:	8b 45 08             	mov    0x8(%ebp),%eax
c100aa6d:	8b 50 18             	mov    0x18(%eax),%edx
c100aa70:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100aa73:	01 d0                	add    %edx,%eax
c100aa75:	0f b6 00             	movzbl (%eax),%eax
c100aa78:	89 c2                	mov    %eax,%edx
c100aa7a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100aa7d:	bb 01 00 00 00       	mov    $0x1,%ebx
c100aa82:	89 c1                	mov    %eax,%ecx
c100aa84:	d3 e3                	shl    %cl,%ebx
c100aa86:	89 d8                	mov    %ebx,%eax
c100aa88:	f7 d0                	not    %eax
c100aa8a:	89 d1                	mov    %edx,%ecx
c100aa8c:	21 c1                	and    %eax,%ecx
c100aa8e:	8b 45 08             	mov    0x8(%ebp),%eax
c100aa91:	8b 50 18             	mov    0x18(%eax),%edx
c100aa94:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100aa97:	01 d0                	add    %edx,%eax
c100aa99:	89 ca                	mov    %ecx,%edx
c100aa9b:	88 10                	mov    %dl,(%eax)
c100aa9d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100aaa2:	83 ec 04             	sub    $0x4,%esp
c100aaa5:	6a 01                	push   $0x1
c100aaa7:	ff 75 ec             	pushl  -0x14(%ebp)
c100aaaa:	50                   	push   %eax
c100aaab:	e8 d8 ea ff ff       	call   c1009588 <bitmap_sync>
c100aab0:	83 c4 10             	add    $0x10,%esp
c100aab3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100aab7:	83 c0 01             	add    $0x1,%eax
c100aaba:	88 45 f7             	mov    %al,-0x9(%ebp)
c100aabd:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100aac1:	3a 45 f6             	cmp    -0xa(%ebp),%al
c100aac4:	0f 82 3a ff ff ff    	jb     c100aa04 <inode_release+0x151>
c100aaca:	8b 45 0c             	mov    0xc(%ebp),%eax
c100aacd:	c1 e8 03             	shr    $0x3,%eax
c100aad0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100aad3:	8b 45 0c             	mov    0xc(%ebp),%eax
c100aad6:	83 e0 07             	and    $0x7,%eax
c100aad9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100aadc:	8b 45 08             	mov    0x8(%ebp),%eax
c100aadf:	8b 50 20             	mov    0x20(%eax),%edx
c100aae2:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100aae5:	01 d0                	add    %edx,%eax
c100aae7:	0f b6 00             	movzbl (%eax),%eax
c100aaea:	89 c2                	mov    %eax,%edx
c100aaec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100aaef:	bb 01 00 00 00       	mov    $0x1,%ebx
c100aaf4:	89 c1                	mov    %eax,%ecx
c100aaf6:	d3 e3                	shl    %cl,%ebx
c100aaf8:	89 d8                	mov    %ebx,%eax
c100aafa:	f7 d0                	not    %eax
c100aafc:	89 d1                	mov    %edx,%ecx
c100aafe:	21 c1                	and    %eax,%ecx
c100ab00:	8b 45 08             	mov    0x8(%ebp),%eax
c100ab03:	8b 50 20             	mov    0x20(%eax),%edx
c100ab06:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100ab09:	01 d0                	add    %edx,%eax
c100ab0b:	89 ca                	mov    %ecx,%edx
c100ab0d:	88 10                	mov    %dl,(%eax)
c100ab0f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100ab14:	83 ec 04             	sub    $0x4,%esp
c100ab17:	6a 00                	push   $0x0
c100ab19:	ff 75 0c             	pushl  0xc(%ebp)
c100ab1c:	50                   	push   %eax
c100ab1d:	e8 66 ea ff ff       	call   c1009588 <bitmap_sync>
c100ab22:	83 c4 10             	add    $0x10,%esp
c100ab25:	83 ec 08             	sub    $0x8,%esp
c100ab28:	6a 02                	push   $0x2
c100ab2a:	68 00 04 00 00       	push   $0x400
c100ab2f:	e8 84 81 ff ff       	call   c1002cb8 <vmm_malloc>
c100ab34:	83 c4 10             	add    $0x10,%esp
c100ab37:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100ab3a:	83 ec 04             	sub    $0x4,%esp
c100ab3d:	ff 75 e0             	pushl  -0x20(%ebp)
c100ab40:	ff 75 0c             	pushl  0xc(%ebp)
c100ab43:	ff 75 08             	pushl  0x8(%ebp)
c100ab46:	e8 6c fc ff ff       	call   c100a7b7 <inode_delete>
c100ab4b:	83 c4 10             	add    $0x10,%esp
c100ab4e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100ab51:	83 ec 08             	sub    $0x8,%esp
c100ab54:	68 00 04 00 00       	push   $0x400
c100ab59:	50                   	push   %eax
c100ab5a:	e8 7e 82 ff ff       	call   c1002ddd <vmm_free>
c100ab5f:	83 c4 10             	add    $0x10,%esp
c100ab62:	83 ec 0c             	sub    $0xc,%esp
c100ab65:	ff 75 f0             	pushl  -0x10(%ebp)
c100ab68:	e8 30 fc ff ff       	call   c100a79d <inode_close>
c100ab6d:	83 c4 10             	add    $0x10,%esp
c100ab70:	90                   	nop
c100ab71:	8d 65 f8             	lea    -0x8(%ebp),%esp
c100ab74:	5b                   	pop    %ebx
c100ab75:	5f                   	pop    %edi
c100ab76:	5d                   	pop    %ebp
c100ab77:	c3                   	ret    

c100ab78 <inode_init>:
c100ab78:	55                   	push   %ebp
c100ab79:	89 e5                	mov    %esp,%ebp
c100ab7b:	83 ec 10             	sub    $0x10,%esp
c100ab7e:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ab81:	8b 55 08             	mov    0x8(%ebp),%edx
c100ab84:	89 10                	mov    %edx,(%eax)
c100ab86:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ab89:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100ab90:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ab93:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100ab9a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ab9d:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c100aba1:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100aba8:	eb 14                	jmp    c100abbe <inode_init+0x46>
c100abaa:	8b 45 0c             	mov    0xc(%ebp),%eax
c100abad:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100abb0:	83 c2 04             	add    $0x4,%edx
c100abb3:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c100abba:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100abbe:	83 7d fc 0c          	cmpl   $0xc,-0x4(%ebp)
c100abc2:	7e e6                	jle    c100abaa <inode_init+0x32>
c100abc4:	90                   	nop
c100abc5:	90                   	nop
c100abc6:	c9                   	leave  
c100abc7:	c3                   	ret    

c100abc8 <hash32>:
c100abc8:	55                   	push   %ebp
c100abc9:	89 e5                	mov    %esp,%ebp
c100abcb:	83 ec 10             	sub    $0x10,%esp
c100abce:	8b 45 08             	mov    0x8(%ebp),%eax
c100abd1:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100abd7:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100abda:	b8 20 00 00 00       	mov    $0x20,%eax
c100abdf:	2b 45 0c             	sub    0xc(%ebp),%eax
c100abe2:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100abe5:	89 c1                	mov    %eax,%ecx
c100abe7:	d3 ea                	shr    %cl,%edx
c100abe9:	89 d0                	mov    %edx,%eax
c100abeb:	c9                   	leave  
c100abec:	c3                   	ret    

c100abed <is_pipe>:
c100abed:	55                   	push   %ebp
c100abee:	89 e5                	mov    %esp,%ebp
c100abf0:	83 ec 18             	sub    $0x18,%esp
c100abf3:	83 ec 0c             	sub    $0xc,%esp
c100abf6:	ff 75 08             	pushl  0x8(%ebp)
c100abf9:	e8 65 c4 ff ff       	call   c1007063 <fd_local2global>
c100abfe:	83 c4 10             	add    $0x10,%esp
c100ac01:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100ac04:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ac07:	89 d0                	mov    %edx,%eax
c100ac09:	01 c0                	add    %eax,%eax
c100ac0b:	01 d0                	add    %edx,%eax
c100ac0d:	c1 e0 02             	shl    $0x2,%eax
c100ac10:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c100ac15:	8b 00                	mov    (%eax),%eax
c100ac17:	3d ff ff 00 00       	cmp    $0xffff,%eax
c100ac1c:	0f 94 c0             	sete   %al
c100ac1f:	c9                   	leave  
c100ac20:	c3                   	ret    

c100ac21 <sys_pipe>:
c100ac21:	55                   	push   %ebp
c100ac22:	89 e5                	mov    %esp,%ebp
c100ac24:	53                   	push   %ebx
c100ac25:	83 ec 14             	sub    $0x14,%esp
c100ac28:	e8 42 e7 ff ff       	call   c100936f <get_free_slot_in_global>
c100ac2d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100ac30:	83 ec 08             	sub    $0x8,%esp
c100ac33:	6a 01                	push   $0x1
c100ac35:	68 00 10 00 00       	push   $0x1000
c100ac3a:	e8 79 80 ff ff       	call   c1002cb8 <vmm_malloc>
c100ac3f:	83 c4 10             	add    $0x10,%esp
c100ac42:	89 c1                	mov    %eax,%ecx
c100ac44:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ac47:	89 d0                	mov    %edx,%eax
c100ac49:	01 c0                	add    %eax,%eax
c100ac4b:	01 d0                	add    %edx,%eax
c100ac4d:	c1 e0 02             	shl    $0x2,%eax
c100ac50:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100ac55:	89 08                	mov    %ecx,(%eax)
c100ac57:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ac5a:	89 d0                	mov    %edx,%eax
c100ac5c:	01 c0                	add    %eax,%eax
c100ac5e:	01 d0                	add    %edx,%eax
c100ac60:	c1 e0 02             	shl    $0x2,%eax
c100ac63:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100ac68:	8b 00                	mov    (%eax),%eax
c100ac6a:	83 ec 0c             	sub    $0xc,%esp
c100ac6d:	50                   	push   %eax
c100ac6e:	e8 bb 01 00 00       	call   c100ae2e <ioqueue_init>
c100ac73:	83 c4 10             	add    $0x10,%esp
c100ac76:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ac79:	89 d0                	mov    %edx,%eax
c100ac7b:	01 c0                	add    %eax,%eax
c100ac7d:	01 d0                	add    %edx,%eax
c100ac7f:	c1 e0 02             	shl    $0x2,%eax
c100ac82:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100ac87:	8b 00                	mov    (%eax),%eax
c100ac89:	85 c0                	test   %eax,%eax
c100ac8b:	75 07                	jne    c100ac94 <sys_pipe+0x73>
c100ac8d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100ac92:	eb 5c                	jmp    c100acf0 <sys_pipe+0xcf>
c100ac94:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ac97:	89 d0                	mov    %edx,%eax
c100ac99:	01 c0                	add    %eax,%eax
c100ac9b:	01 d0                	add    %edx,%eax
c100ac9d:	c1 e0 02             	shl    $0x2,%eax
c100aca0:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c100aca5:	c7 00 ff ff 00 00    	movl   $0xffff,(%eax)
c100acab:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100acae:	89 d0                	mov    %edx,%eax
c100acb0:	01 c0                	add    %eax,%eax
c100acb2:	01 d0                	add    %edx,%eax
c100acb4:	c1 e0 02             	shl    $0x2,%eax
c100acb7:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100acbc:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
c100acc2:	83 ec 0c             	sub    $0xc,%esp
c100acc5:	ff 75 f4             	pushl  -0xc(%ebp)
c100acc8:	e8 e7 e6 ff ff       	call   c10093b4 <task_fd_install>
c100accd:	83 c4 10             	add    $0x10,%esp
c100acd0:	8b 55 08             	mov    0x8(%ebp),%edx
c100acd3:	89 02                	mov    %eax,(%edx)
c100acd5:	8b 45 08             	mov    0x8(%ebp),%eax
c100acd8:	8d 58 04             	lea    0x4(%eax),%ebx
c100acdb:	83 ec 0c             	sub    $0xc,%esp
c100acde:	ff 75 f4             	pushl  -0xc(%ebp)
c100ace1:	e8 ce e6 ff ff       	call   c10093b4 <task_fd_install>
c100ace6:	83 c4 10             	add    $0x10,%esp
c100ace9:	89 03                	mov    %eax,(%ebx)
c100aceb:	b8 00 00 00 00       	mov    $0x0,%eax
c100acf0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100acf3:	c9                   	leave  
c100acf4:	c3                   	ret    

c100acf5 <pipe_read>:
c100acf5:	55                   	push   %ebp
c100acf6:	89 e5                	mov    %esp,%ebp
c100acf8:	83 ec 28             	sub    $0x28,%esp
c100acfb:	8b 45 0c             	mov    0xc(%ebp),%eax
c100acfe:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100ad01:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100ad08:	8b 45 08             	mov    0x8(%ebp),%eax
c100ad0b:	83 ec 0c             	sub    $0xc,%esp
c100ad0e:	50                   	push   %eax
c100ad0f:	e8 4f c3 ff ff       	call   c1007063 <fd_local2global>
c100ad14:	83 c4 10             	add    $0x10,%esp
c100ad17:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100ad1a:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100ad1d:	89 d0                	mov    %edx,%eax
c100ad1f:	01 c0                	add    %eax,%eax
c100ad21:	01 d0                	add    %edx,%eax
c100ad23:	c1 e0 02             	shl    $0x2,%eax
c100ad26:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100ad2b:	8b 00                	mov    (%eax),%eax
c100ad2d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100ad30:	83 ec 0c             	sub    $0xc,%esp
c100ad33:	ff 75 e8             	pushl  -0x18(%ebp)
c100ad36:	e8 3d 03 00 00       	call   c100b078 <ioq_length>
c100ad3b:	83 c4 10             	add    $0x10,%esp
c100ad3e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100ad41:	8b 45 10             	mov    0x10(%ebp),%eax
c100ad44:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c100ad47:	0f 46 45 e4          	cmovbe -0x1c(%ebp),%eax
c100ad4b:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100ad4e:	eb 1b                	jmp    c100ad6b <pipe_read+0x76>
c100ad50:	83 ec 0c             	sub    $0xc,%esp
c100ad53:	ff 75 e8             	pushl  -0x18(%ebp)
c100ad56:	e8 f0 01 00 00       	call   c100af4b <ioq_getchar>
c100ad5b:	83 c4 10             	add    $0x10,%esp
c100ad5e:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ad61:	88 02                	mov    %al,(%edx)
c100ad63:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100ad67:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100ad6b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100ad6e:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c100ad71:	72 dd                	jb     c100ad50 <pipe_read+0x5b>
c100ad73:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100ad76:	c9                   	leave  
c100ad77:	c3                   	ret    

c100ad78 <pipe_write>:
c100ad78:	55                   	push   %ebp
c100ad79:	89 e5                	mov    %esp,%ebp
c100ad7b:	83 ec 28             	sub    $0x28,%esp
c100ad7e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100ad85:	8b 45 08             	mov    0x8(%ebp),%eax
c100ad88:	83 ec 0c             	sub    $0xc,%esp
c100ad8b:	50                   	push   %eax
c100ad8c:	e8 d2 c2 ff ff       	call   c1007063 <fd_local2global>
c100ad91:	83 c4 10             	add    $0x10,%esp
c100ad94:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100ad97:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100ad9a:	89 d0                	mov    %edx,%eax
c100ad9c:	01 c0                	add    %eax,%eax
c100ad9e:	01 d0                	add    %edx,%eax
c100ada0:	c1 e0 02             	shl    $0x2,%eax
c100ada3:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100ada8:	8b 00                	mov    (%eax),%eax
c100adaa:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100adad:	83 ec 0c             	sub    $0xc,%esp
c100adb0:	ff 75 e8             	pushl  -0x18(%ebp)
c100adb3:	e8 c0 02 00 00       	call   c100b078 <ioq_length>
c100adb8:	83 c4 10             	add    $0x10,%esp
c100adbb:	ba 40 00 00 00       	mov    $0x40,%edx
c100adc0:	29 c2                	sub    %eax,%edx
c100adc2:	89 d0                	mov    %edx,%eax
c100adc4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100adc7:	8b 45 10             	mov    0x10(%ebp),%eax
c100adca:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c100adcd:	0f 46 45 e4          	cmovbe -0x1c(%ebp),%eax
c100add1:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100add4:	8b 45 0c             	mov    0xc(%ebp),%eax
c100add7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100adda:	eb 20                	jmp    c100adfc <pipe_write+0x84>
c100addc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100addf:	0f b6 00             	movzbl (%eax),%eax
c100ade2:	0f be c0             	movsbl %al,%eax
c100ade5:	83 ec 08             	sub    $0x8,%esp
c100ade8:	50                   	push   %eax
c100ade9:	ff 75 e8             	pushl  -0x18(%ebp)
c100adec:	e8 ef 01 00 00       	call   c100afe0 <ioq_putchar>
c100adf1:	83 c4 10             	add    $0x10,%esp
c100adf4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100adf8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100adfc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100adff:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c100ae02:	72 d8                	jb     c100addc <pipe_write+0x64>
c100ae04:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100ae07:	c9                   	leave  
c100ae08:	c3                   	ret    

c100ae09 <hash32>:
c100ae09:	55                   	push   %ebp
c100ae0a:	89 e5                	mov    %esp,%ebp
c100ae0c:	83 ec 10             	sub    $0x10,%esp
c100ae0f:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae12:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100ae18:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100ae1b:	b8 20 00 00 00       	mov    $0x20,%eax
c100ae20:	2b 45 0c             	sub    0xc(%ebp),%eax
c100ae23:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100ae26:	89 c1                	mov    %eax,%ecx
c100ae28:	d3 ea                	shr    %cl,%edx
c100ae2a:	89 d0                	mov    %edx,%eax
c100ae2c:	c9                   	leave  
c100ae2d:	c3                   	ret    

c100ae2e <ioqueue_init>:
c100ae2e:	55                   	push   %ebp
c100ae2f:	89 e5                	mov    %esp,%ebp
c100ae31:	83 ec 08             	sub    $0x8,%esp
c100ae34:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae37:	83 ec 0c             	sub    $0xc,%esp
c100ae3a:	50                   	push   %eax
c100ae3b:	e8 45 ae ff ff       	call   c1005c85 <lock_init>
c100ae40:	83 c4 10             	add    $0x10,%esp
c100ae43:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae46:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c100ae4d:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae50:	8b 50 18             	mov    0x18(%eax),%edx
c100ae53:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae56:	89 50 14             	mov    %edx,0x14(%eax)
c100ae59:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae5c:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
c100ae63:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae66:	8b 50 60             	mov    0x60(%eax),%edx
c100ae69:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae6c:	89 50 5c             	mov    %edx,0x5c(%eax)
c100ae6f:	90                   	nop
c100ae70:	c9                   	leave  
c100ae71:	c3                   	ret    

c100ae72 <next_pos>:
c100ae72:	55                   	push   %ebp
c100ae73:	89 e5                	mov    %esp,%ebp
c100ae75:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae78:	8d 50 01             	lea    0x1(%eax),%edx
c100ae7b:	89 d0                	mov    %edx,%eax
c100ae7d:	c1 f8 1f             	sar    $0x1f,%eax
c100ae80:	c1 e8 1a             	shr    $0x1a,%eax
c100ae83:	01 c2                	add    %eax,%edx
c100ae85:	83 e2 3f             	and    $0x3f,%edx
c100ae88:	29 c2                	sub    %eax,%edx
c100ae8a:	89 d0                	mov    %edx,%eax
c100ae8c:	5d                   	pop    %ebp
c100ae8d:	c3                   	ret    

c100ae8e <ioq_full>:
c100ae8e:	55                   	push   %ebp
c100ae8f:	89 e5                	mov    %esp,%ebp
c100ae91:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae94:	8b 40 5c             	mov    0x5c(%eax),%eax
c100ae97:	50                   	push   %eax
c100ae98:	e8 d5 ff ff ff       	call   c100ae72 <next_pos>
c100ae9d:	83 c4 04             	add    $0x4,%esp
c100aea0:	8b 55 08             	mov    0x8(%ebp),%edx
c100aea3:	8b 52 60             	mov    0x60(%edx),%edx
c100aea6:	39 d0                	cmp    %edx,%eax
c100aea8:	0f 94 c0             	sete   %al
c100aeab:	c9                   	leave  
c100aeac:	c3                   	ret    

c100aead <ioq_empty>:
c100aead:	55                   	push   %ebp
c100aeae:	89 e5                	mov    %esp,%ebp
c100aeb0:	8b 45 08             	mov    0x8(%ebp),%eax
c100aeb3:	8b 50 5c             	mov    0x5c(%eax),%edx
c100aeb6:	8b 45 08             	mov    0x8(%ebp),%eax
c100aeb9:	8b 40 60             	mov    0x60(%eax),%eax
c100aebc:	39 c2                	cmp    %eax,%edx
c100aebe:	0f 94 c0             	sete   %al
c100aec1:	5d                   	pop    %ebp
c100aec2:	c3                   	ret    

c100aec3 <ioq_wait>:
c100aec3:	55                   	push   %ebp
c100aec4:	89 e5                	mov    %esp,%ebp
c100aec6:	83 ec 08             	sub    $0x8,%esp
c100aec9:	8b 45 08             	mov    0x8(%ebp),%eax
c100aecc:	8b 00                	mov    (%eax),%eax
c100aece:	85 c0                	test   %eax,%eax
c100aed0:	75 06                	jne    c100aed8 <ioq_wait+0x15>
c100aed2:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100aed6:	75 16                	jne    c100aeee <ioq_wait+0x2b>
c100aed8:	68 54 cb 00 c1       	push   $0xc100cb54
c100aedd:	68 bc cb 00 c1       	push   $0xc100cbbc
c100aee2:	6a 1f                	push   $0x1f
c100aee4:	68 78 cb 00 c1       	push   $0xc100cb78
c100aee9:	e8 7d 54 ff ff       	call   c100036b <__PANIC>
c100aeee:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c100aef4:	8b 45 08             	mov    0x8(%ebp),%eax
c100aef7:	89 10                	mov    %edx,(%eax)
c100aef9:	83 ec 0c             	sub    $0xc,%esp
c100aefc:	6a 01                	push   $0x1
c100aefe:	e8 65 8f ff ff       	call   c1003e68 <thread_block>
c100af03:	83 c4 10             	add    $0x10,%esp
c100af06:	90                   	nop
c100af07:	c9                   	leave  
c100af08:	c3                   	ret    

c100af09 <wakeup>:
c100af09:	55                   	push   %ebp
c100af0a:	89 e5                	mov    %esp,%ebp
c100af0c:	83 ec 08             	sub    $0x8,%esp
c100af0f:	8b 45 08             	mov    0x8(%ebp),%eax
c100af12:	8b 00                	mov    (%eax),%eax
c100af14:	85 c0                	test   %eax,%eax
c100af16:	75 16                	jne    c100af2e <wakeup+0x25>
c100af18:	68 ac cb 00 c1       	push   $0xc100cbac
c100af1d:	68 c8 cb 00 c1       	push   $0xc100cbc8
c100af22:	6a 26                	push   $0x26
c100af24:	68 78 cb 00 c1       	push   $0xc100cb78
c100af29:	e8 3d 54 ff ff       	call   c100036b <__PANIC>
c100af2e:	8b 45 08             	mov    0x8(%ebp),%eax
c100af31:	8b 00                	mov    (%eax),%eax
c100af33:	83 ec 0c             	sub    $0xc,%esp
c100af36:	50                   	push   %eax
c100af37:	e8 5a 8f ff ff       	call   c1003e96 <thread_unblock>
c100af3c:	83 c4 10             	add    $0x10,%esp
c100af3f:	8b 45 08             	mov    0x8(%ebp),%eax
c100af42:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100af48:	90                   	nop
c100af49:	c9                   	leave  
c100af4a:	c3                   	ret    

c100af4b <ioq_getchar>:
c100af4b:	55                   	push   %ebp
c100af4c:	89 e5                	mov    %esp,%ebp
c100af4e:	83 ec 18             	sub    $0x18,%esp
c100af51:	eb 30                	jmp    c100af83 <ioq_getchar+0x38>
c100af53:	8b 45 08             	mov    0x8(%ebp),%eax
c100af56:	83 ec 0c             	sub    $0xc,%esp
c100af59:	50                   	push   %eax
c100af5a:	e8 c4 ae ff ff       	call   c1005e23 <lock_acquire>
c100af5f:	83 c4 10             	add    $0x10,%esp
c100af62:	8b 45 08             	mov    0x8(%ebp),%eax
c100af65:	83 c0 18             	add    $0x18,%eax
c100af68:	83 ec 0c             	sub    $0xc,%esp
c100af6b:	50                   	push   %eax
c100af6c:	e8 52 ff ff ff       	call   c100aec3 <ioq_wait>
c100af71:	83 c4 10             	add    $0x10,%esp
c100af74:	8b 45 08             	mov    0x8(%ebp),%eax
c100af77:	83 ec 0c             	sub    $0xc,%esp
c100af7a:	50                   	push   %eax
c100af7b:	e8 f2 ae ff ff       	call   c1005e72 <lock_release>
c100af80:	83 c4 10             	add    $0x10,%esp
c100af83:	83 ec 0c             	sub    $0xc,%esp
c100af86:	ff 75 08             	pushl  0x8(%ebp)
c100af89:	e8 1f ff ff ff       	call   c100aead <ioq_empty>
c100af8e:	83 c4 10             	add    $0x10,%esp
c100af91:	84 c0                	test   %al,%al
c100af93:	75 be                	jne    c100af53 <ioq_getchar+0x8>
c100af95:	8b 45 08             	mov    0x8(%ebp),%eax
c100af98:	8b 40 60             	mov    0x60(%eax),%eax
c100af9b:	8b 55 08             	mov    0x8(%ebp),%edx
c100af9e:	0f b6 44 02 1c       	movzbl 0x1c(%edx,%eax,1),%eax
c100afa3:	88 45 f7             	mov    %al,-0x9(%ebp)
c100afa6:	8b 45 08             	mov    0x8(%ebp),%eax
c100afa9:	8b 40 60             	mov    0x60(%eax),%eax
c100afac:	83 ec 0c             	sub    $0xc,%esp
c100afaf:	50                   	push   %eax
c100afb0:	e8 bd fe ff ff       	call   c100ae72 <next_pos>
c100afb5:	83 c4 10             	add    $0x10,%esp
c100afb8:	8b 55 08             	mov    0x8(%ebp),%edx
c100afbb:	89 42 60             	mov    %eax,0x60(%edx)
c100afbe:	8b 45 08             	mov    0x8(%ebp),%eax
c100afc1:	8b 40 14             	mov    0x14(%eax),%eax
c100afc4:	85 c0                	test   %eax,%eax
c100afc6:	74 12                	je     c100afda <ioq_getchar+0x8f>
c100afc8:	8b 45 08             	mov    0x8(%ebp),%eax
c100afcb:	83 c0 14             	add    $0x14,%eax
c100afce:	83 ec 0c             	sub    $0xc,%esp
c100afd1:	50                   	push   %eax
c100afd2:	e8 32 ff ff ff       	call   c100af09 <wakeup>
c100afd7:	83 c4 10             	add    $0x10,%esp
c100afda:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100afde:	c9                   	leave  
c100afdf:	c3                   	ret    

c100afe0 <ioq_putchar>:
c100afe0:	55                   	push   %ebp
c100afe1:	89 e5                	mov    %esp,%ebp
c100afe3:	83 ec 18             	sub    $0x18,%esp
c100afe6:	8b 45 0c             	mov    0xc(%ebp),%eax
c100afe9:	88 45 f4             	mov    %al,-0xc(%ebp)
c100afec:	eb 30                	jmp    c100b01e <ioq_putchar+0x3e>
c100afee:	8b 45 08             	mov    0x8(%ebp),%eax
c100aff1:	83 ec 0c             	sub    $0xc,%esp
c100aff4:	50                   	push   %eax
c100aff5:	e8 29 ae ff ff       	call   c1005e23 <lock_acquire>
c100affa:	83 c4 10             	add    $0x10,%esp
c100affd:	8b 45 08             	mov    0x8(%ebp),%eax
c100b000:	83 c0 14             	add    $0x14,%eax
c100b003:	83 ec 0c             	sub    $0xc,%esp
c100b006:	50                   	push   %eax
c100b007:	e8 b7 fe ff ff       	call   c100aec3 <ioq_wait>
c100b00c:	83 c4 10             	add    $0x10,%esp
c100b00f:	8b 45 08             	mov    0x8(%ebp),%eax
c100b012:	83 ec 0c             	sub    $0xc,%esp
c100b015:	50                   	push   %eax
c100b016:	e8 57 ae ff ff       	call   c1005e72 <lock_release>
c100b01b:	83 c4 10             	add    $0x10,%esp
c100b01e:	83 ec 0c             	sub    $0xc,%esp
c100b021:	ff 75 08             	pushl  0x8(%ebp)
c100b024:	e8 65 fe ff ff       	call   c100ae8e <ioq_full>
c100b029:	83 c4 10             	add    $0x10,%esp
c100b02c:	84 c0                	test   %al,%al
c100b02e:	75 be                	jne    c100afee <ioq_putchar+0xe>
c100b030:	8b 45 08             	mov    0x8(%ebp),%eax
c100b033:	8b 40 5c             	mov    0x5c(%eax),%eax
c100b036:	8b 55 08             	mov    0x8(%ebp),%edx
c100b039:	0f b6 4d f4          	movzbl -0xc(%ebp),%ecx
c100b03d:	88 4c 02 1c          	mov    %cl,0x1c(%edx,%eax,1)
c100b041:	8b 45 08             	mov    0x8(%ebp),%eax
c100b044:	8b 40 5c             	mov    0x5c(%eax),%eax
c100b047:	83 ec 0c             	sub    $0xc,%esp
c100b04a:	50                   	push   %eax
c100b04b:	e8 22 fe ff ff       	call   c100ae72 <next_pos>
c100b050:	83 c4 10             	add    $0x10,%esp
c100b053:	8b 55 08             	mov    0x8(%ebp),%edx
c100b056:	89 42 5c             	mov    %eax,0x5c(%edx)
c100b059:	8b 45 08             	mov    0x8(%ebp),%eax
c100b05c:	8b 40 18             	mov    0x18(%eax),%eax
c100b05f:	85 c0                	test   %eax,%eax
c100b061:	74 12                	je     c100b075 <ioq_putchar+0x95>
c100b063:	8b 45 08             	mov    0x8(%ebp),%eax
c100b066:	83 c0 18             	add    $0x18,%eax
c100b069:	83 ec 0c             	sub    $0xc,%esp
c100b06c:	50                   	push   %eax
c100b06d:	e8 97 fe ff ff       	call   c100af09 <wakeup>
c100b072:	83 c4 10             	add    $0x10,%esp
c100b075:	90                   	nop
c100b076:	c9                   	leave  
c100b077:	c3                   	ret    

c100b078 <ioq_length>:
c100b078:	55                   	push   %ebp
c100b079:	89 e5                	mov    %esp,%ebp
c100b07b:	83 ec 10             	sub    $0x10,%esp
c100b07e:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100b085:	8b 45 08             	mov    0x8(%ebp),%eax
c100b088:	8b 50 5c             	mov    0x5c(%eax),%edx
c100b08b:	8b 45 08             	mov    0x8(%ebp),%eax
c100b08e:	8b 40 60             	mov    0x60(%eax),%eax
c100b091:	39 c2                	cmp    %eax,%edx
c100b093:	7c 15                	jl     c100b0aa <ioq_length+0x32>
c100b095:	8b 45 08             	mov    0x8(%ebp),%eax
c100b098:	8b 50 5c             	mov    0x5c(%eax),%edx
c100b09b:	8b 45 08             	mov    0x8(%ebp),%eax
c100b09e:	8b 40 60             	mov    0x60(%eax),%eax
c100b0a1:	29 c2                	sub    %eax,%edx
c100b0a3:	89 d0                	mov    %edx,%eax
c100b0a5:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100b0a8:	eb 1c                	jmp    c100b0c6 <ioq_length+0x4e>
c100b0aa:	8b 45 08             	mov    0x8(%ebp),%eax
c100b0ad:	8b 50 60             	mov    0x60(%eax),%edx
c100b0b0:	8b 45 08             	mov    0x8(%ebp),%eax
c100b0b3:	8b 40 5c             	mov    0x5c(%eax),%eax
c100b0b6:	29 c2                	sub    %eax,%edx
c100b0b8:	89 d0                	mov    %edx,%eax
c100b0ba:	ba 40 00 00 00       	mov    $0x40,%edx
c100b0bf:	29 c2                	sub    %eax,%edx
c100b0c1:	89 d0                	mov    %edx,%eax
c100b0c3:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100b0c6:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100b0c9:	c9                   	leave  
c100b0ca:	c3                   	ret    
