
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
  100252:	68 80 b0 00 c1       	push   $0xc100b080
  100257:	68 ec b0 00 c1       	push   $0xc100b0ec
  10025c:	6a 51                	push   $0x51
  10025e:	68 b8 b0 00 c1       	push   $0xc100b0b8
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
40000043:	68 80 16 00 40       	push   $0x40001680
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
400003c0:	8b 04 85 b0 16 00 40 	mov    0x400016b0(,%eax,4),%eax
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
40000632:	68 90 16 00 40       	push   $0x40001690
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
40000688:	68 c0 1c 00 40       	push   $0x40001cc0
4000068d:	68 d4 17 00 40       	push   $0x400017d4
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
4000073e:	68 ec 17 00 40       	push   $0x400017ec
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
40000817:	c6 05 c0 1c 00 40 2f 	movb   $0x2f,0x40001cc0
4000081e:	c6 05 c1 1c 00 40 00 	movb   $0x0,0x40001cc1
40000825:	e8 55 fe ff ff       	call   4000067f <print_prompt>
4000082a:	83 ec 04             	sub    $0x4,%esp
4000082d:	68 00 02 00 00       	push   $0x200
40000832:	6a 00                	push   $0x0
40000834:	68 c0 1e 00 40       	push   $0x40001ec0
40000839:	e8 90 03 00 00       	call   40000bce <user_memset>
4000083e:	83 c4 10             	add    $0x10,%esp
40000841:	83 ec 04             	sub    $0x4,%esp
40000844:	68 80 00 00 00       	push   $0x80
40000849:	6a 00                	push   $0x0
4000084b:	68 c0 20 00 40       	push   $0x400020c0
40000850:	e8 79 03 00 00       	call   40000bce <user_memset>
40000855:	83 c4 10             	add    $0x10,%esp
40000858:	83 ec 08             	sub    $0x8,%esp
4000085b:	68 80 00 00 00       	push   $0x80
40000860:	68 c0 20 00 40       	push   $0x400020c0
40000865:	e8 33 fe ff ff       	call   4000069d <user_readline>
4000086a:	83 c4 10             	add    $0x10,%esp
4000086d:	0f b6 05 c0 20 00 40 	movzbl 0x400020c0,%eax
40000874:	84 c0                	test   %al,%al
40000876:	0f 84 20 03 00 00    	je     40000b9c <my_shell+0x38b>
4000087c:	c7 05 7c 16 00 40 ff 	movl   $0xffffffff,0x4000167c
40000883:	ff ff ff 
40000886:	83 ec 04             	sub    $0x4,%esp
40000889:	6a 20                	push   $0x20
4000088b:	68 40 21 00 40       	push   $0x40002140
40000890:	68 c0 20 00 40       	push   $0x400020c0
40000895:	e8 b3 fe ff ff       	call   4000074d <cmd_parse>
4000089a:	83 c4 10             	add    $0x10,%esp
4000089d:	a3 7c 16 00 40       	mov    %eax,0x4000167c
400008a2:	a1 7c 16 00 40       	mov    0x4000167c,%eax
400008a7:	83 f8 ff             	cmp    $0xffffffff,%eax
400008aa:	75 17                	jne    400008c3 <my_shell+0xb2>
400008ac:	83 ec 08             	sub    $0x8,%esp
400008af:	6a 10                	push   $0x10
400008b1:	68 34 18 00 40       	push   $0x40001834
400008b6:	e8 c3 fa ff ff       	call   4000037e <printf>
400008bb:	83 c4 10             	add    $0x10,%esp
400008be:	e9 da 02 00 00       	jmp    40000b9d <my_shell+0x38c>
400008c3:	a1 40 21 00 40       	mov    0x40002140,%eax
400008c8:	83 ec 08             	sub    $0x8,%esp
400008cb:	50                   	push   %eax
400008cc:	68 50 18 00 40       	push   $0x40001850
400008d1:	e8 9b 03 00 00       	call   40000c71 <user_strcmp>
400008d6:	83 c4 10             	add    $0x10,%esp
400008d9:	85 c0                	test   %eax,%eax
400008db:	75 1b                	jne    400008f8 <my_shell+0xe7>
400008dd:	a1 7c 16 00 40       	mov    0x4000167c,%eax
400008e2:	83 ec 08             	sub    $0x8,%esp
400008e5:	68 40 21 00 40       	push   $0x40002140
400008ea:	50                   	push   %eax
400008eb:	e8 d3 07 00 00       	call   400010c3 <buildin_ls>
400008f0:	83 c4 10             	add    $0x10,%esp
400008f3:	e9 7e 02 00 00       	jmp    40000b76 <my_shell+0x365>
400008f8:	a1 40 21 00 40       	mov    0x40002140,%eax
400008fd:	83 ec 08             	sub    $0x8,%esp
40000900:	50                   	push   %eax
40000901:	68 53 18 00 40       	push   $0x40001853
40000906:	e8 66 03 00 00       	call   40000c71 <user_strcmp>
4000090b:	83 c4 10             	add    $0x10,%esp
4000090e:	85 c0                	test   %eax,%eax
40000910:	75 4f                	jne    40000961 <my_shell+0x150>
40000912:	a1 7c 16 00 40       	mov    0x4000167c,%eax
40000917:	83 ec 08             	sub    $0x8,%esp
4000091a:	68 40 21 00 40       	push   $0x40002140
4000091f:	50                   	push   %eax
40000920:	e8 14 07 00 00       	call   40001039 <buildin_cd>
40000925:	83 c4 10             	add    $0x10,%esp
40000928:	85 c0                	test   %eax,%eax
4000092a:	0f 84 46 02 00 00    	je     40000b76 <my_shell+0x365>
40000930:	83 ec 04             	sub    $0x4,%esp
40000933:	68 00 02 00 00       	push   $0x200
40000938:	6a 00                	push   $0x0
4000093a:	68 c0 1c 00 40       	push   $0x40001cc0
4000093f:	e8 8a 02 00 00       	call   40000bce <user_memset>
40000944:	83 c4 10             	add    $0x10,%esp
40000947:	83 ec 08             	sub    $0x8,%esp
4000094a:	68 c0 1e 00 40       	push   $0x40001ec0
4000094f:	68 c0 1c 00 40       	push   $0x40001cc0
40000954:	e8 e5 03 00 00       	call   40000d3e <user_strcpy>
40000959:	83 c4 10             	add    $0x10,%esp
4000095c:	e9 15 02 00 00       	jmp    40000b76 <my_shell+0x365>
40000961:	a1 40 21 00 40       	mov    0x40002140,%eax
40000966:	83 ec 08             	sub    $0x8,%esp
40000969:	50                   	push   %eax
4000096a:	68 56 18 00 40       	push   $0x40001856
4000096f:	e8 fd 02 00 00       	call   40000c71 <user_strcmp>
40000974:	83 c4 10             	add    $0x10,%esp
40000977:	85 c0                	test   %eax,%eax
40000979:	75 1b                	jne    40000996 <my_shell+0x185>
4000097b:	a1 7c 16 00 40       	mov    0x4000167c,%eax
40000980:	83 ec 08             	sub    $0x8,%esp
40000983:	68 40 21 00 40       	push   $0x40002140
40000988:	50                   	push   %eax
40000989:	e8 fa 0a 00 00       	call   40001488 <buildin_ps>
4000098e:	83 c4 10             	add    $0x10,%esp
40000991:	e9 e0 01 00 00       	jmp    40000b76 <my_shell+0x365>
40000996:	a1 40 21 00 40       	mov    0x40002140,%eax
4000099b:	83 ec 08             	sub    $0x8,%esp
4000099e:	50                   	push   %eax
4000099f:	68 59 18 00 40       	push   $0x40001859
400009a4:	e8 c8 02 00 00       	call   40000c71 <user_strcmp>
400009a9:	83 c4 10             	add    $0x10,%esp
400009ac:	85 c0                	test   %eax,%eax
400009ae:	75 1b                	jne    400009cb <my_shell+0x1ba>
400009b0:	a1 7c 16 00 40       	mov    0x4000167c,%eax
400009b5:	83 ec 08             	sub    $0x8,%esp
400009b8:	68 40 21 00 40       	push   $0x40002140
400009bd:	50                   	push   %eax
400009be:	e8 16 06 00 00       	call   40000fd9 <buildin_pwd>
400009c3:	83 c4 10             	add    $0x10,%esp
400009c6:	e9 ab 01 00 00       	jmp    40000b76 <my_shell+0x365>
400009cb:	a1 40 21 00 40       	mov    0x40002140,%eax
400009d0:	83 ec 08             	sub    $0x8,%esp
400009d3:	50                   	push   %eax
400009d4:	68 5d 18 00 40       	push   $0x4000185d
400009d9:	e8 93 02 00 00       	call   40000c71 <user_strcmp>
400009de:	83 c4 10             	add    $0x10,%esp
400009e1:	85 c0                	test   %eax,%eax
400009e3:	75 1b                	jne    40000a00 <my_shell+0x1ef>
400009e5:	a1 7c 16 00 40       	mov    0x4000167c,%eax
400009ea:	83 ec 08             	sub    $0x8,%esp
400009ed:	68 40 21 00 40       	push   $0x40002140
400009f2:	50                   	push   %eax
400009f3:	e8 b5 0a 00 00       	call   400014ad <buildin_mkdir>
400009f8:	83 c4 10             	add    $0x10,%esp
400009fb:	e9 76 01 00 00       	jmp    40000b76 <my_shell+0x365>
40000a00:	a1 40 21 00 40       	mov    0x40002140,%eax
40000a05:	83 ec 08             	sub    $0x8,%esp
40000a08:	50                   	push   %eax
40000a09:	68 63 18 00 40       	push   $0x40001863
40000a0e:	e8 5e 02 00 00       	call   40000c71 <user_strcmp>
40000a13:	83 c4 10             	add    $0x10,%esp
40000a16:	85 c0                	test   %eax,%eax
40000a18:	75 1b                	jne    40000a35 <my_shell+0x224>
40000a1a:	a1 7c 16 00 40       	mov    0x4000167c,%eax
40000a1f:	83 ec 08             	sub    $0x8,%esp
40000a22:	68 40 21 00 40       	push   $0x40002140
40000a27:	50                   	push   %eax
40000a28:	e8 12 0b 00 00       	call   4000153f <buildin_rmdir>
40000a2d:	83 c4 10             	add    $0x10,%esp
40000a30:	e9 41 01 00 00       	jmp    40000b76 <my_shell+0x365>
40000a35:	a1 40 21 00 40       	mov    0x40002140,%eax
40000a3a:	83 ec 08             	sub    $0x8,%esp
40000a3d:	50                   	push   %eax
40000a3e:	68 69 18 00 40       	push   $0x40001869
40000a43:	e8 29 02 00 00       	call   40000c71 <user_strcmp>
40000a48:	83 c4 10             	add    $0x10,%esp
40000a4b:	85 c0                	test   %eax,%eax
40000a4d:	75 1b                	jne    40000a6a <my_shell+0x259>
40000a4f:	a1 7c 16 00 40       	mov    0x4000167c,%eax
40000a54:	83 ec 08             	sub    $0x8,%esp
40000a57:	68 40 21 00 40       	push   $0x40002140
40000a5c:	50                   	push   %eax
40000a5d:	e8 6f 0b 00 00       	call   400015d1 <buildin_rm>
40000a62:	83 c4 10             	add    $0x10,%esp
40000a65:	e9 0c 01 00 00       	jmp    40000b76 <my_shell+0x365>
40000a6a:	a1 40 21 00 40       	mov    0x40002140,%eax
40000a6f:	83 ec 08             	sub    $0x8,%esp
40000a72:	50                   	push   %eax
40000a73:	68 6c 18 00 40       	push   $0x4000186c
40000a78:	e8 f4 01 00 00       	call   40000c71 <user_strcmp>
40000a7d:	83 c4 10             	add    $0x10,%esp
40000a80:	85 c0                	test   %eax,%eax
40000a82:	75 1b                	jne    40000a9f <my_shell+0x28e>
40000a84:	a1 7c 16 00 40       	mov    0x4000167c,%eax
40000a89:	83 ec 08             	sub    $0x8,%esp
40000a8c:	68 40 21 00 40       	push   $0x40002140
40000a91:	50                   	push   %eax
40000a92:	e8 cc 0b 00 00       	call   40001663 <buildin_help>
40000a97:	83 c4 10             	add    $0x10,%esp
40000a9a:	e9 d7 00 00 00       	jmp    40000b76 <my_shell+0x365>
40000a9f:	e8 68 f8 ff ff       	call   4000030c <fork>
40000aa4:	89 45 f0             	mov    %eax,-0x10(%ebp)
40000aa7:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
40000aab:	74 44                	je     40000af1 <my_shell+0x2e0>
40000aad:	83 ec 0c             	sub    $0xc,%esp
40000ab0:	8d 45 e8             	lea    -0x18(%ebp),%eax
40000ab3:	50                   	push   %eax
40000ab4:	e8 8f f8 ff ff       	call   40000348 <wait>
40000ab9:	83 c4 10             	add    $0x10,%esp
40000abc:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000abf:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
40000ac3:	75 10                	jne    40000ad5 <my_shell+0x2c4>
40000ac5:	83 ec 0c             	sub    $0xc,%esp
40000ac8:	68 71 18 00 40       	push   $0x40001871
40000acd:	e8 ac f8 ff ff       	call   4000037e <printf>
40000ad2:	83 c4 10             	add    $0x10,%esp
40000ad5:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000ad8:	83 ec 04             	sub    $0x4,%esp
40000adb:	50                   	push   %eax
40000adc:	ff 75 ec             	pushl  -0x14(%ebp)
40000adf:	68 7c 18 00 40       	push   $0x4000187c
40000ae4:	e8 95 f8 ff ff       	call   4000037e <printf>
40000ae9:	83 c4 10             	add    $0x10,%esp
40000aec:	e9 85 00 00 00       	jmp    40000b76 <my_shell+0x365>
40000af1:	a1 40 21 00 40       	mov    0x40002140,%eax
40000af6:	83 ec 08             	sub    $0x8,%esp
40000af9:	68 c0 1e 00 40       	push   $0x40001ec0
40000afe:	50                   	push   %eax
40000aff:	e8 12 04 00 00       	call   40000f16 <make_clear_abs_path>
40000b04:	83 c4 10             	add    $0x10,%esp
40000b07:	c7 05 40 21 00 40 c0 	movl   $0x40001ec0,0x40002140
40000b0e:	1e 00 40 
40000b11:	83 ec 04             	sub    $0x4,%esp
40000b14:	6a 0c                	push   $0xc
40000b16:	6a 00                	push   $0x0
40000b18:	8d 45 dc             	lea    -0x24(%ebp),%eax
40000b1b:	50                   	push   %eax
40000b1c:	e8 ad 00 00 00       	call   40000bce <user_memset>
40000b21:	83 c4 10             	add    $0x10,%esp
40000b24:	a1 40 21 00 40       	mov    0x40002140,%eax
40000b29:	83 ec 08             	sub    $0x8,%esp
40000b2c:	8d 55 dc             	lea    -0x24(%ebp),%edx
40000b2f:	52                   	push   %edx
40000b30:	50                   	push   %eax
40000b31:	e8 54 f7 ff ff       	call   4000028a <stat>
40000b36:	83 c4 10             	add    $0x10,%esp
40000b39:	83 f8 ff             	cmp    $0xffffffff,%eax
40000b3c:	75 18                	jne    40000b56 <my_shell+0x345>
40000b3e:	a1 40 21 00 40       	mov    0x40002140,%eax
40000b43:	83 ec 08             	sub    $0x8,%esp
40000b46:	50                   	push   %eax
40000b47:	68 a0 18 00 40       	push   $0x400018a0
40000b4c:	e8 2d f8 ff ff       	call   4000037e <printf>
40000b51:	83 c4 10             	add    $0x10,%esp
40000b54:	eb 16                	jmp    40000b6c <my_shell+0x35b>
40000b56:	a1 40 21 00 40       	mov    0x40002140,%eax
40000b5b:	83 ec 08             	sub    $0x8,%esp
40000b5e:	68 40 21 00 40       	push   $0x40002140
40000b63:	50                   	push   %eax
40000b64:	e8 ca f7 ff ff       	call   40000333 <exec>
40000b69:	83 c4 10             	add    $0x10,%esp
40000b6c:	83 ec 0c             	sub    $0xc,%esp
40000b6f:	6a ff                	push   $0xffffffff
40000b71:	e8 e4 f7 ff ff       	call   4000035a <exit>
40000b76:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
40000b7d:	eb 12                	jmp    40000b91 <my_shell+0x380>
40000b7f:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000b82:	c7 04 85 40 21 00 40 	movl   $0x0,0x40002140(,%eax,4)
40000b89:	00 00 00 00 
40000b8d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
40000b91:	83 7d f4 0f          	cmpl   $0xf,-0xc(%ebp)
40000b95:	7e e8                	jle    40000b7f <my_shell+0x36e>
40000b97:	e9 89 fc ff ff       	jmp    40000825 <my_shell+0x14>
40000b9c:	90                   	nop
40000b9d:	e9 83 fc ff ff       	jmp    40000825 <my_shell+0x14>

40000ba2 <__memset>:
40000ba2:	55                   	push   %ebp
40000ba3:	89 e5                	mov    %esp,%ebp
40000ba5:	57                   	push   %edi
40000ba6:	83 ec 14             	sub    $0x14,%esp
40000ba9:	8b 45 0c             	mov    0xc(%ebp),%eax
40000bac:	88 45 e8             	mov    %al,-0x18(%ebp)
40000baf:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000bb2:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
40000bb6:	8b 55 08             	mov    0x8(%ebp),%edx
40000bb9:	89 d7                	mov    %edx,%edi
40000bbb:	f3 aa                	rep stos %al,%es:(%edi)
40000bbd:	89 fa                	mov    %edi,%edx
40000bbf:	89 4d f8             	mov    %ecx,-0x8(%ebp)
40000bc2:	89 55 f4             	mov    %edx,-0xc(%ebp)
40000bc5:	8b 45 08             	mov    0x8(%ebp),%eax
40000bc8:	83 c4 14             	add    $0x14,%esp
40000bcb:	5f                   	pop    %edi
40000bcc:	5d                   	pop    %ebp
40000bcd:	c3                   	ret    

40000bce <user_memset>:
40000bce:	55                   	push   %ebp
40000bcf:	89 e5                	mov    %esp,%ebp
40000bd1:	83 ec 04             	sub    $0x4,%esp
40000bd4:	8b 45 0c             	mov    0xc(%ebp),%eax
40000bd7:	88 45 fc             	mov    %al,-0x4(%ebp)
40000bda:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
40000bde:	ff 75 10             	pushl  0x10(%ebp)
40000be1:	50                   	push   %eax
40000be2:	ff 75 08             	pushl  0x8(%ebp)
40000be5:	e8 b8 ff ff ff       	call   40000ba2 <__memset>
40000bea:	83 c4 0c             	add    $0xc,%esp
40000bed:	c9                   	leave  
40000bee:	c3                   	ret    

40000bef <user_strcat>:
40000bef:	55                   	push   %ebp
40000bf0:	89 e5                	mov    %esp,%ebp
40000bf2:	83 ec 10             	sub    $0x10,%esp
40000bf5:	8b 45 08             	mov    0x8(%ebp),%eax
40000bf8:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000bfb:	90                   	nop
40000bfc:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000bff:	8d 50 01             	lea    0x1(%eax),%edx
40000c02:	89 55 fc             	mov    %edx,-0x4(%ebp)
40000c05:	0f b6 00             	movzbl (%eax),%eax
40000c08:	84 c0                	test   %al,%al
40000c0a:	75 f0                	jne    40000bfc <user_strcat+0xd>
40000c0c:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
40000c10:	90                   	nop
40000c11:	8b 55 0c             	mov    0xc(%ebp),%edx
40000c14:	8d 42 01             	lea    0x1(%edx),%eax
40000c17:	89 45 0c             	mov    %eax,0xc(%ebp)
40000c1a:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000c1d:	8d 48 01             	lea    0x1(%eax),%ecx
40000c20:	89 4d fc             	mov    %ecx,-0x4(%ebp)
40000c23:	0f b6 12             	movzbl (%edx),%edx
40000c26:	88 10                	mov    %dl,(%eax)
40000c28:	0f b6 00             	movzbl (%eax),%eax
40000c2b:	84 c0                	test   %al,%al
40000c2d:	75 e2                	jne    40000c11 <user_strcat+0x22>
40000c2f:	8b 45 08             	mov    0x8(%ebp),%eax
40000c32:	c9                   	leave  
40000c33:	c3                   	ret    

40000c34 <__strcmp>:
40000c34:	55                   	push   %ebp
40000c35:	89 e5                	mov    %esp,%ebp
40000c37:	57                   	push   %edi
40000c38:	56                   	push   %esi
40000c39:	83 ec 10             	sub    $0x10,%esp
40000c3c:	8b 55 08             	mov    0x8(%ebp),%edx
40000c3f:	8b 45 0c             	mov    0xc(%ebp),%eax
40000c42:	89 d1                	mov    %edx,%ecx
40000c44:	89 c2                	mov    %eax,%edx
40000c46:	89 ce                	mov    %ecx,%esi
40000c48:	89 d7                	mov    %edx,%edi
40000c4a:	ac                   	lods   %ds:(%esi),%al
40000c4b:	ae                   	scas   %es:(%edi),%al
40000c4c:	75 08                	jne    40000c56 <__strcmp+0x22>
40000c4e:	84 c0                	test   %al,%al
40000c50:	75 f8                	jne    40000c4a <__strcmp+0x16>
40000c52:	31 c0                	xor    %eax,%eax
40000c54:	eb 04                	jmp    40000c5a <__strcmp+0x26>
40000c56:	19 c0                	sbb    %eax,%eax
40000c58:	0c 01                	or     $0x1,%al
40000c5a:	89 fa                	mov    %edi,%edx
40000c5c:	89 f1                	mov    %esi,%ecx
40000c5e:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000c61:	89 4d f0             	mov    %ecx,-0x10(%ebp)
40000c64:	89 55 ec             	mov    %edx,-0x14(%ebp)
40000c67:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000c6a:	83 c4 10             	add    $0x10,%esp
40000c6d:	5e                   	pop    %esi
40000c6e:	5f                   	pop    %edi
40000c6f:	5d                   	pop    %ebp
40000c70:	c3                   	ret    

40000c71 <user_strcmp>:
40000c71:	55                   	push   %ebp
40000c72:	89 e5                	mov    %esp,%ebp
40000c74:	ff 75 0c             	pushl  0xc(%ebp)
40000c77:	ff 75 08             	pushl  0x8(%ebp)
40000c7a:	e8 b5 ff ff ff       	call   40000c34 <__strcmp>
40000c7f:	83 c4 08             	add    $0x8,%esp
40000c82:	c9                   	leave  
40000c83:	c3                   	ret    

40000c84 <user_strrchr>:
40000c84:	55                   	push   %ebp
40000c85:	89 e5                	mov    %esp,%ebp
40000c87:	83 ec 14             	sub    $0x14,%esp
40000c8a:	8b 45 0c             	mov    0xc(%ebp),%eax
40000c8d:	88 45 ec             	mov    %al,-0x14(%ebp)
40000c90:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000c97:	eb 1b                	jmp    40000cb4 <user_strrchr+0x30>
40000c99:	8b 45 08             	mov    0x8(%ebp),%eax
40000c9c:	0f b6 00             	movzbl (%eax),%eax
40000c9f:	0f be d0             	movsbl %al,%edx
40000ca2:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
40000ca6:	39 c2                	cmp    %eax,%edx
40000ca8:	75 06                	jne    40000cb0 <user_strrchr+0x2c>
40000caa:	8b 45 08             	mov    0x8(%ebp),%eax
40000cad:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000cb0:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000cb4:	8b 45 08             	mov    0x8(%ebp),%eax
40000cb7:	0f b6 00             	movzbl (%eax),%eax
40000cba:	84 c0                	test   %al,%al
40000cbc:	75 db                	jne    40000c99 <user_strrchr+0x15>
40000cbe:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000cc1:	c9                   	leave  
40000cc2:	c3                   	ret    

40000cc3 <user_strlen>:
40000cc3:	55                   	push   %ebp
40000cc4:	89 e5                	mov    %esp,%ebp
40000cc6:	83 ec 10             	sub    $0x10,%esp
40000cc9:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000cd0:	eb 04                	jmp    40000cd6 <user_strlen+0x13>
40000cd2:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
40000cd6:	8b 45 08             	mov    0x8(%ebp),%eax
40000cd9:	8d 50 01             	lea    0x1(%eax),%edx
40000cdc:	89 55 08             	mov    %edx,0x8(%ebp)
40000cdf:	0f b6 00             	movzbl (%eax),%eax
40000ce2:	84 c0                	test   %al,%al
40000ce4:	75 ec                	jne    40000cd2 <user_strlen+0xf>
40000ce6:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000ce9:	c9                   	leave  
40000cea:	c3                   	ret    

40000ceb <__memcpy>:
40000ceb:	55                   	push   %ebp
40000cec:	89 e5                	mov    %esp,%ebp
40000cee:	57                   	push   %edi
40000cef:	56                   	push   %esi
40000cf0:	83 ec 10             	sub    $0x10,%esp
40000cf3:	8b 45 10             	mov    0x10(%ebp),%eax
40000cf6:	c1 e8 02             	shr    $0x2,%eax
40000cf9:	89 c1                	mov    %eax,%ecx
40000cfb:	8b 55 08             	mov    0x8(%ebp),%edx
40000cfe:	8b 45 0c             	mov    0xc(%ebp),%eax
40000d01:	89 d7                	mov    %edx,%edi
40000d03:	89 c6                	mov    %eax,%esi
40000d05:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
40000d07:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000d0a:	83 e1 03             	and    $0x3,%ecx
40000d0d:	74 02                	je     40000d11 <__memcpy+0x26>
40000d0f:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
40000d11:	89 f0                	mov    %esi,%eax
40000d13:	89 fa                	mov    %edi,%edx
40000d15:	89 4d f4             	mov    %ecx,-0xc(%ebp)
40000d18:	89 55 f0             	mov    %edx,-0x10(%ebp)
40000d1b:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000d1e:	8b 45 08             	mov    0x8(%ebp),%eax
40000d21:	83 c4 10             	add    $0x10,%esp
40000d24:	5e                   	pop    %esi
40000d25:	5f                   	pop    %edi
40000d26:	5d                   	pop    %ebp
40000d27:	c3                   	ret    

40000d28 <user_memcpy>:
40000d28:	55                   	push   %ebp
40000d29:	89 e5                	mov    %esp,%ebp
40000d2b:	ff 75 10             	pushl  0x10(%ebp)
40000d2e:	ff 75 0c             	pushl  0xc(%ebp)
40000d31:	ff 75 08             	pushl  0x8(%ebp)
40000d34:	e8 b2 ff ff ff       	call   40000ceb <__memcpy>
40000d39:	83 c4 0c             	add    $0xc,%esp
40000d3c:	c9                   	leave  
40000d3d:	c3                   	ret    

40000d3e <user_strcpy>:
40000d3e:	55                   	push   %ebp
40000d3f:	89 e5                	mov    %esp,%ebp
40000d41:	83 ec 10             	sub    $0x10,%esp
40000d44:	8b 45 08             	mov    0x8(%ebp),%eax
40000d47:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000d4a:	90                   	nop
40000d4b:	8b 55 0c             	mov    0xc(%ebp),%edx
40000d4e:	8d 42 01             	lea    0x1(%edx),%eax
40000d51:	89 45 0c             	mov    %eax,0xc(%ebp)
40000d54:	8b 45 08             	mov    0x8(%ebp),%eax
40000d57:	8d 48 01             	lea    0x1(%eax),%ecx
40000d5a:	89 4d 08             	mov    %ecx,0x8(%ebp)
40000d5d:	0f b6 12             	movzbl (%edx),%edx
40000d60:	88 10                	mov    %dl,(%eax)
40000d62:	0f b6 00             	movzbl (%eax),%eax
40000d65:	84 c0                	test   %al,%al
40000d67:	75 e2                	jne    40000d4b <user_strcpy+0xd>
40000d69:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000d6c:	c9                   	leave  
40000d6d:	c3                   	ret    

40000d6e <path_parse>:
40000d6e:	55                   	push   %ebp
40000d6f:	89 e5                	mov    %esp,%ebp
40000d71:	8b 45 08             	mov    0x8(%ebp),%eax
40000d74:	0f b6 00             	movzbl (%eax),%eax
40000d77:	3c 2f                	cmp    $0x2f,%al
40000d79:	75 27                	jne    40000da2 <path_parse+0x34>
40000d7b:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000d7f:	8b 45 08             	mov    0x8(%ebp),%eax
40000d82:	0f b6 00             	movzbl (%eax),%eax
40000d85:	3c 2f                	cmp    $0x2f,%al
40000d87:	74 f2                	je     40000d7b <path_parse+0xd>
40000d89:	eb 17                	jmp    40000da2 <path_parse+0x34>
40000d8b:	8b 55 08             	mov    0x8(%ebp),%edx
40000d8e:	8d 42 01             	lea    0x1(%edx),%eax
40000d91:	89 45 08             	mov    %eax,0x8(%ebp)
40000d94:	8b 45 0c             	mov    0xc(%ebp),%eax
40000d97:	8d 48 01             	lea    0x1(%eax),%ecx
40000d9a:	89 4d 0c             	mov    %ecx,0xc(%ebp)
40000d9d:	0f b6 12             	movzbl (%edx),%edx
40000da0:	88 10                	mov    %dl,(%eax)
40000da2:	8b 45 08             	mov    0x8(%ebp),%eax
40000da5:	0f b6 00             	movzbl (%eax),%eax
40000da8:	3c 2f                	cmp    $0x2f,%al
40000daa:	74 0a                	je     40000db6 <path_parse+0x48>
40000dac:	8b 45 08             	mov    0x8(%ebp),%eax
40000daf:	0f b6 00             	movzbl (%eax),%eax
40000db2:	84 c0                	test   %al,%al
40000db4:	75 d5                	jne    40000d8b <path_parse+0x1d>
40000db6:	8b 45 08             	mov    0x8(%ebp),%eax
40000db9:	0f b6 00             	movzbl (%eax),%eax
40000dbc:	84 c0                	test   %al,%al
40000dbe:	75 07                	jne    40000dc7 <path_parse+0x59>
40000dc0:	b8 00 00 00 00       	mov    $0x0,%eax
40000dc5:	eb 03                	jmp    40000dca <path_parse+0x5c>
40000dc7:	8b 45 08             	mov    0x8(%ebp),%eax
40000dca:	5d                   	pop    %ebp
40000dcb:	c3                   	ret    

40000dcc <wash_path>:
40000dcc:	55                   	push   %ebp
40000dcd:	89 e5                	mov    %esp,%ebp
40000dcf:	83 ec 28             	sub    $0x28,%esp
40000dd2:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
40000dd9:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
40000de0:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
40000de7:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
40000dee:	8b 45 08             	mov    0x8(%ebp),%eax
40000df1:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000df4:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000df7:	50                   	push   %eax
40000df8:	ff 75 f4             	pushl  -0xc(%ebp)
40000dfb:	e8 6e ff ff ff       	call   40000d6e <path_parse>
40000e00:	83 c4 08             	add    $0x8,%esp
40000e03:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000e06:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000e0a:	84 c0                	test   %al,%al
40000e0c:	75 14                	jne    40000e22 <wash_path+0x56>
40000e0e:	8b 45 0c             	mov    0xc(%ebp),%eax
40000e11:	c6 00 2f             	movb   $0x2f,(%eax)
40000e14:	8b 45 0c             	mov    0xc(%ebp),%eax
40000e17:	83 c0 01             	add    $0x1,%eax
40000e1a:	c6 00 00             	movb   $0x0,(%eax)
40000e1d:	e9 f2 00 00 00       	jmp    40000f14 <wash_path+0x148>
40000e22:	8b 45 0c             	mov    0xc(%ebp),%eax
40000e25:	c6 00 00             	movb   $0x0,(%eax)
40000e28:	83 ec 08             	sub    $0x8,%esp
40000e2b:	68 d8 18 00 40       	push   $0x400018d8
40000e30:	ff 75 0c             	pushl  0xc(%ebp)
40000e33:	e8 b7 fd ff ff       	call   40000bef <user_strcat>
40000e38:	83 c4 10             	add    $0x10,%esp
40000e3b:	e9 c8 00 00 00       	jmp    40000f08 <wash_path+0x13c>
40000e40:	83 ec 08             	sub    $0x8,%esp
40000e43:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e46:	50                   	push   %eax
40000e47:	68 da 18 00 40       	push   $0x400018da
40000e4c:	e8 20 fe ff ff       	call   40000c71 <user_strcmp>
40000e51:	83 c4 10             	add    $0x10,%esp
40000e54:	85 c0                	test   %eax,%eax
40000e56:	75 2e                	jne    40000e86 <wash_path+0xba>
40000e58:	83 ec 08             	sub    $0x8,%esp
40000e5b:	6a 2f                	push   $0x2f
40000e5d:	ff 75 0c             	pushl  0xc(%ebp)
40000e60:	e8 1f fe ff ff       	call   40000c84 <user_strrchr>
40000e65:	83 c4 10             	add    $0x10,%esp
40000e68:	89 45 f0             	mov    %eax,-0x10(%ebp)
40000e6b:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000e6e:	3b 45 0c             	cmp    0xc(%ebp),%eax
40000e71:	74 08                	je     40000e7b <wash_path+0xaf>
40000e73:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000e76:	c6 00 00             	movb   $0x0,(%eax)
40000e79:	eb 5f                	jmp    40000eda <wash_path+0x10e>
40000e7b:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000e7e:	83 c0 01             	add    $0x1,%eax
40000e81:	c6 00 00             	movb   $0x0,(%eax)
40000e84:	eb 54                	jmp    40000eda <wash_path+0x10e>
40000e86:	83 ec 08             	sub    $0x8,%esp
40000e89:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e8c:	50                   	push   %eax
40000e8d:	68 dd 18 00 40       	push   $0x400018dd
40000e92:	e8 da fd ff ff       	call   40000c71 <user_strcmp>
40000e97:	83 c4 10             	add    $0x10,%esp
40000e9a:	85 c0                	test   %eax,%eax
40000e9c:	74 3c                	je     40000eda <wash_path+0x10e>
40000e9e:	83 ec 08             	sub    $0x8,%esp
40000ea1:	68 d8 18 00 40       	push   $0x400018d8
40000ea6:	ff 75 0c             	pushl  0xc(%ebp)
40000ea9:	e8 c3 fd ff ff       	call   40000c71 <user_strcmp>
40000eae:	83 c4 10             	add    $0x10,%esp
40000eb1:	85 c0                	test   %eax,%eax
40000eb3:	74 13                	je     40000ec8 <wash_path+0xfc>
40000eb5:	83 ec 08             	sub    $0x8,%esp
40000eb8:	68 d8 18 00 40       	push   $0x400018d8
40000ebd:	ff 75 0c             	pushl  0xc(%ebp)
40000ec0:	e8 2a fd ff ff       	call   40000bef <user_strcat>
40000ec5:	83 c4 10             	add    $0x10,%esp
40000ec8:	83 ec 08             	sub    $0x8,%esp
40000ecb:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000ece:	50                   	push   %eax
40000ecf:	ff 75 0c             	pushl  0xc(%ebp)
40000ed2:	e8 18 fd ff ff       	call   40000bef <user_strcat>
40000ed7:	83 c4 10             	add    $0x10,%esp
40000eda:	83 ec 04             	sub    $0x4,%esp
40000edd:	6a 10                	push   $0x10
40000edf:	6a 00                	push   $0x0
40000ee1:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000ee4:	50                   	push   %eax
40000ee5:	e8 e4 fc ff ff       	call   40000bce <user_memset>
40000eea:	83 c4 10             	add    $0x10,%esp
40000eed:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
40000ef1:	74 15                	je     40000f08 <wash_path+0x13c>
40000ef3:	83 ec 08             	sub    $0x8,%esp
40000ef6:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000ef9:	50                   	push   %eax
40000efa:	ff 75 f4             	pushl  -0xc(%ebp)
40000efd:	e8 6c fe ff ff       	call   40000d6e <path_parse>
40000f02:	83 c4 10             	add    $0x10,%esp
40000f05:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000f08:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000f0c:	84 c0                	test   %al,%al
40000f0e:	0f 85 2c ff ff ff    	jne    40000e40 <wash_path+0x74>
40000f14:	c9                   	leave  
40000f15:	c3                   	ret    

40000f16 <make_clear_abs_path>:
40000f16:	55                   	push   %ebp
40000f17:	89 e5                	mov    %esp,%ebp
40000f19:	57                   	push   %edi
40000f1a:	81 ec 04 02 00 00    	sub    $0x204,%esp
40000f20:	c7 85 f8 fd ff ff 00 	movl   $0x0,-0x208(%ebp)
40000f27:	00 00 00 
40000f2a:	8d 95 fc fd ff ff    	lea    -0x204(%ebp),%edx
40000f30:	b8 00 00 00 00       	mov    $0x0,%eax
40000f35:	b9 7f 00 00 00       	mov    $0x7f,%ecx
40000f3a:	89 d7                	mov    %edx,%edi
40000f3c:	f3 ab                	rep stos %eax,%es:(%edi)
40000f3e:	8b 45 08             	mov    0x8(%ebp),%eax
40000f41:	0f b6 00             	movzbl (%eax),%eax
40000f44:	3c 2f                	cmp    $0x2f,%al
40000f46:	74 61                	je     40000fa9 <make_clear_abs_path+0x93>
40000f48:	83 ec 04             	sub    $0x4,%esp
40000f4b:	68 00 02 00 00       	push   $0x200
40000f50:	6a 00                	push   $0x0
40000f52:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f58:	50                   	push   %eax
40000f59:	e8 70 fc ff ff       	call   40000bce <user_memset>
40000f5e:	83 c4 10             	add    $0x10,%esp
40000f61:	83 ec 08             	sub    $0x8,%esp
40000f64:	68 00 02 00 00       	push   $0x200
40000f69:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f6f:	50                   	push   %eax
40000f70:	e8 ee f2 ff ff       	call   40000263 <getcwd>
40000f75:	83 c4 10             	add    $0x10,%esp
40000f78:	85 c0                	test   %eax,%eax
40000f7a:	74 2d                	je     40000fa9 <make_clear_abs_path+0x93>
40000f7c:	0f b6 85 f8 fd ff ff 	movzbl -0x208(%ebp),%eax
40000f83:	3c 2f                	cmp    $0x2f,%al
40000f85:	75 0b                	jne    40000f92 <make_clear_abs_path+0x7c>
40000f87:	0f b6 85 f9 fd ff ff 	movzbl -0x207(%ebp),%eax
40000f8e:	84 c0                	test   %al,%al
40000f90:	74 17                	je     40000fa9 <make_clear_abs_path+0x93>
40000f92:	83 ec 08             	sub    $0x8,%esp
40000f95:	68 d8 18 00 40       	push   $0x400018d8
40000f9a:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000fa0:	50                   	push   %eax
40000fa1:	e8 49 fc ff ff       	call   40000bef <user_strcat>
40000fa6:	83 c4 10             	add    $0x10,%esp
40000fa9:	83 ec 08             	sub    $0x8,%esp
40000fac:	ff 75 08             	pushl  0x8(%ebp)
40000faf:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000fb5:	50                   	push   %eax
40000fb6:	e8 34 fc ff ff       	call   40000bef <user_strcat>
40000fbb:	83 c4 10             	add    $0x10,%esp
40000fbe:	83 ec 08             	sub    $0x8,%esp
40000fc1:	ff 75 0c             	pushl  0xc(%ebp)
40000fc4:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000fca:	50                   	push   %eax
40000fcb:	e8 fc fd ff ff       	call   40000dcc <wash_path>
40000fd0:	83 c4 10             	add    $0x10,%esp
40000fd3:	90                   	nop
40000fd4:	8b 7d fc             	mov    -0x4(%ebp),%edi
40000fd7:	c9                   	leave  
40000fd8:	c3                   	ret    

40000fd9 <buildin_pwd>:
40000fd9:	55                   	push   %ebp
40000fda:	89 e5                	mov    %esp,%ebp
40000fdc:	83 ec 08             	sub    $0x8,%esp
40000fdf:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40000fe3:	74 12                	je     40000ff7 <buildin_pwd+0x1e>
40000fe5:	83 ec 0c             	sub    $0xc,%esp
40000fe8:	68 df 18 00 40       	push   $0x400018df
40000fed:	e8 8c f3 ff ff       	call   4000037e <printf>
40000ff2:	83 c4 10             	add    $0x10,%esp
40000ff5:	eb 40                	jmp    40001037 <buildin_pwd+0x5e>
40000ff7:	83 ec 08             	sub    $0x8,%esp
40000ffa:	68 00 02 00 00       	push   $0x200
40000fff:	68 c0 1e 00 40       	push   $0x40001ec0
40001004:	e8 5a f2 ff ff       	call   40000263 <getcwd>
40001009:	83 c4 10             	add    $0x10,%esp
4000100c:	85 c0                	test   %eax,%eax
4000100e:	74 17                	je     40001027 <buildin_pwd+0x4e>
40001010:	83 ec 08             	sub    $0x8,%esp
40001013:	68 c0 1e 00 40       	push   $0x40001ec0
40001018:	68 fa 18 00 40       	push   $0x400018fa
4000101d:	e8 5c f3 ff ff       	call   4000037e <printf>
40001022:	83 c4 10             	add    $0x10,%esp
40001025:	eb 10                	jmp    40001037 <buildin_pwd+0x5e>
40001027:	83 ec 0c             	sub    $0xc,%esp
4000102a:	68 00 19 00 40       	push   $0x40001900
4000102f:	e8 4a f3 ff ff       	call   4000037e <printf>
40001034:	83 c4 10             	add    $0x10,%esp
40001037:	c9                   	leave  
40001038:	c3                   	ret    

40001039 <buildin_cd>:
40001039:	55                   	push   %ebp
4000103a:	89 e5                	mov    %esp,%ebp
4000103c:	83 ec 08             	sub    $0x8,%esp
4000103f:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40001043:	7e 17                	jle    4000105c <buildin_cd+0x23>
40001045:	83 ec 0c             	sub    $0xc,%esp
40001048:	68 29 19 00 40       	push   $0x40001929
4000104d:	e8 2c f3 ff ff       	call   4000037e <printf>
40001052:	83 c4 10             	add    $0x10,%esp
40001055:	b8 00 00 00 00       	mov    $0x0,%eax
4000105a:	eb 65                	jmp    400010c1 <buildin_cd+0x88>
4000105c:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40001060:	75 10                	jne    40001072 <buildin_cd+0x39>
40001062:	c6 05 c0 1e 00 40 2f 	movb   $0x2f,0x40001ec0
40001069:	c6 05 c1 1e 00 40 00 	movb   $0x0,0x40001ec1
40001070:	eb 19                	jmp    4000108b <buildin_cd+0x52>
40001072:	8b 45 0c             	mov    0xc(%ebp),%eax
40001075:	83 c0 04             	add    $0x4,%eax
40001078:	8b 00                	mov    (%eax),%eax
4000107a:	83 ec 08             	sub    $0x8,%esp
4000107d:	68 c0 1e 00 40       	push   $0x40001ec0
40001082:	50                   	push   %eax
40001083:	e8 8e fe ff ff       	call   40000f16 <make_clear_abs_path>
40001088:	83 c4 10             	add    $0x10,%esp
4000108b:	83 ec 0c             	sub    $0xc,%esp
4000108e:	68 c0 1e 00 40       	push   $0x40001ec0
40001093:	e8 e0 f1 ff ff       	call   40000278 <chdir>
40001098:	83 c4 10             	add    $0x10,%esp
4000109b:	83 f8 ff             	cmp    $0xffffffff,%eax
4000109e:	75 1c                	jne    400010bc <buildin_cd+0x83>
400010a0:	83 ec 08             	sub    $0x8,%esp
400010a3:	68 c0 1e 00 40       	push   $0x40001ec0
400010a8:	68 47 19 00 40       	push   $0x40001947
400010ad:	e8 cc f2 ff ff       	call   4000037e <printf>
400010b2:	83 c4 10             	add    $0x10,%esp
400010b5:	b8 00 00 00 00       	mov    $0x0,%eax
400010ba:	eb 05                	jmp    400010c1 <buildin_cd+0x88>
400010bc:	b8 c0 1e 00 40       	mov    $0x40001ec0,%eax
400010c1:	c9                   	leave  
400010c2:	c3                   	ret    

400010c3 <buildin_ls>:
400010c3:	55                   	push   %ebp
400010c4:	89 e5                	mov    %esp,%ebp
400010c6:	57                   	push   %edi
400010c7:	53                   	push   %ebx
400010c8:	81 ec 30 02 00 00    	sub    $0x230,%esp
400010ce:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400010d5:	83 ec 04             	sub    $0x4,%esp
400010d8:	6a 0c                	push   $0xc
400010da:	6a 00                	push   $0x0
400010dc:	8d 45 c8             	lea    -0x38(%ebp),%eax
400010df:	50                   	push   %eax
400010e0:	e8 e9 fa ff ff       	call   40000bce <user_memset>
400010e5:	83 c4 10             	add    $0x10,%esp
400010e8:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
400010ec:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
400010f3:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
400010fa:	e9 e9 00 00 00       	jmp    400011e8 <buildin_ls+0x125>
400010ff:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001102:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40001109:	8b 45 0c             	mov    0xc(%ebp),%eax
4000110c:	01 d0                	add    %edx,%eax
4000110e:	8b 00                	mov    (%eax),%eax
40001110:	0f b6 00             	movzbl (%eax),%eax
40001113:	3c 2d                	cmp    $0x2d,%al
40001115:	0f 85 91 00 00 00    	jne    400011ac <buildin_ls+0xe9>
4000111b:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000111e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40001125:	8b 45 0c             	mov    0xc(%ebp),%eax
40001128:	01 d0                	add    %edx,%eax
4000112a:	8b 00                	mov    (%eax),%eax
4000112c:	83 ec 08             	sub    $0x8,%esp
4000112f:	50                   	push   %eax
40001130:	68 61 19 00 40       	push   $0x40001961
40001135:	e8 37 fb ff ff       	call   40000c71 <user_strcmp>
4000113a:	83 c4 10             	add    $0x10,%esp
4000113d:	85 c0                	test   %eax,%eax
4000113f:	75 09                	jne    4000114a <buildin_ls+0x87>
40001141:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
40001145:	e9 9a 00 00 00       	jmp    400011e4 <buildin_ls+0x121>
4000114a:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000114d:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40001154:	8b 45 0c             	mov    0xc(%ebp),%eax
40001157:	01 d0                	add    %edx,%eax
40001159:	8b 00                	mov    (%eax),%eax
4000115b:	83 ec 08             	sub    $0x8,%esp
4000115e:	50                   	push   %eax
4000115f:	68 64 19 00 40       	push   $0x40001964
40001164:	e8 08 fb ff ff       	call   40000c71 <user_strcmp>
40001169:	83 c4 10             	add    $0x10,%esp
4000116c:	85 c0                	test   %eax,%eax
4000116e:	75 15                	jne    40001185 <buildin_ls+0xc2>
40001170:	83 ec 0c             	sub    $0xc,%esp
40001173:	68 68 19 00 40       	push   $0x40001968
40001178:	e8 01 f2 ff ff       	call   4000037e <printf>
4000117d:	83 c4 10             	add    $0x10,%esp
40001180:	e9 fc 02 00 00       	jmp    40001481 <buildin_ls+0x3be>
40001185:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001188:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
4000118f:	8b 45 0c             	mov    0xc(%ebp),%eax
40001192:	01 d0                	add    %edx,%eax
40001194:	8b 00                	mov    (%eax),%eax
40001196:	83 ec 08             	sub    $0x8,%esp
40001199:	50                   	push   %eax
4000119a:	68 d8 19 00 40       	push   $0x400019d8
4000119f:	e8 da f1 ff ff       	call   4000037e <printf>
400011a4:	83 c4 10             	add    $0x10,%esp
400011a7:	e9 d5 02 00 00       	jmp    40001481 <buildin_ls+0x3be>
400011ac:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
400011b0:	75 1d                	jne    400011cf <buildin_ls+0x10c>
400011b2:	8b 45 e8             	mov    -0x18(%ebp),%eax
400011b5:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
400011bc:	8b 45 0c             	mov    0xc(%ebp),%eax
400011bf:	01 d0                	add    %edx,%eax
400011c1:	8b 00                	mov    (%eax),%eax
400011c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
400011c6:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
400011cd:	eb 15                	jmp    400011e4 <buildin_ls+0x121>
400011cf:	83 ec 0c             	sub    $0xc,%esp
400011d2:	68 11 1a 00 40       	push   $0x40001a11
400011d7:	e8 a2 f1 ff ff       	call   4000037e <printf>
400011dc:	83 c4 10             	add    $0x10,%esp
400011df:	e9 9d 02 00 00       	jmp    40001481 <buildin_ls+0x3be>
400011e4:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
400011e8:	8b 45 e8             	mov    -0x18(%ebp),%eax
400011eb:	3b 45 08             	cmp    0x8(%ebp),%eax
400011ee:	0f 8c 0b ff ff ff    	jl     400010ff <buildin_ls+0x3c>
400011f4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
400011f8:	75 37                	jne    40001231 <buildin_ls+0x16e>
400011fa:	83 ec 08             	sub    $0x8,%esp
400011fd:	68 00 02 00 00       	push   $0x200
40001202:	68 c0 1e 00 40       	push   $0x40001ec0
40001207:	e8 57 f0 ff ff       	call   40000263 <getcwd>
4000120c:	83 c4 10             	add    $0x10,%esp
4000120f:	85 c0                	test   %eax,%eax
40001211:	74 09                	je     4000121c <buildin_ls+0x159>
40001213:	c7 45 f4 c0 1e 00 40 	movl   $0x40001ec0,-0xc(%ebp)
4000121a:	eb 2f                	jmp    4000124b <buildin_ls+0x188>
4000121c:	83 ec 0c             	sub    $0xc,%esp
4000121f:	68 2c 1a 00 40       	push   $0x40001a2c
40001224:	e8 55 f1 ff ff       	call   4000037e <printf>
40001229:	83 c4 10             	add    $0x10,%esp
4000122c:	e9 50 02 00 00       	jmp    40001481 <buildin_ls+0x3be>
40001231:	83 ec 08             	sub    $0x8,%esp
40001234:	68 c0 1e 00 40       	push   $0x40001ec0
40001239:	ff 75 f4             	pushl  -0xc(%ebp)
4000123c:	e8 d5 fc ff ff       	call   40000f16 <make_clear_abs_path>
40001241:	83 c4 10             	add    $0x10,%esp
40001244:	c7 45 f4 c0 1e 00 40 	movl   $0x40001ec0,-0xc(%ebp)
4000124b:	83 ec 08             	sub    $0x8,%esp
4000124e:	8d 45 c8             	lea    -0x38(%ebp),%eax
40001251:	50                   	push   %eax
40001252:	ff 75 f4             	pushl  -0xc(%ebp)
40001255:	e8 30 f0 ff ff       	call   4000028a <stat>
4000125a:	83 c4 10             	add    $0x10,%esp
4000125d:	83 f8 ff             	cmp    $0xffffffff,%eax
40001260:	75 18                	jne    4000127a <buildin_ls+0x1b7>
40001262:	83 ec 08             	sub    $0x8,%esp
40001265:	ff 75 f4             	pushl  -0xc(%ebp)
40001268:	68 50 1a 00 40       	push   $0x40001a50
4000126d:	e8 0c f1 ff ff       	call   4000037e <printf>
40001272:	83 c4 10             	add    $0x10,%esp
40001275:	e9 07 02 00 00       	jmp    40001481 <buildin_ls+0x3be>
4000127a:	8b 45 d0             	mov    -0x30(%ebp),%eax
4000127d:	83 f8 02             	cmp    $0x2,%eax
40001280:	0f 85 c8 01 00 00    	jne    4000144e <buildin_ls+0x38b>
40001286:	83 ec 0c             	sub    $0xc,%esp
40001289:	ff 75 f4             	pushl  -0xc(%ebp)
4000128c:	e8 0e f0 ff ff       	call   4000029f <opendir>
40001291:	83 c4 10             	add    $0x10,%esp
40001294:	89 45 dc             	mov    %eax,-0x24(%ebp)
40001297:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
4000129e:	c7 85 c8 fd ff ff 00 	movl   $0x0,-0x238(%ebp)
400012a5:	00 00 00 
400012a8:	8d 95 cc fd ff ff    	lea    -0x234(%ebp),%edx
400012ae:	b8 00 00 00 00       	mov    $0x0,%eax
400012b3:	b9 7f 00 00 00       	mov    $0x7f,%ecx
400012b8:	89 d7                	mov    %edx,%edi
400012ba:	f3 ab                	rep stos %eax,%es:(%edi)
400012bc:	83 ec 0c             	sub    $0xc,%esp
400012bf:	ff 75 f4             	pushl  -0xc(%ebp)
400012c2:	e8 fc f9 ff ff       	call   40000cc3 <user_strlen>
400012c7:	83 c4 10             	add    $0x10,%esp
400012ca:	89 45 e4             	mov    %eax,-0x1c(%ebp)
400012cd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
400012d0:	83 e8 01             	sub    $0x1,%eax
400012d3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
400012d6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
400012d9:	83 ec 04             	sub    $0x4,%esp
400012dc:	50                   	push   %eax
400012dd:	ff 75 f4             	pushl  -0xc(%ebp)
400012e0:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
400012e6:	50                   	push   %eax
400012e7:	e8 3c fa ff ff       	call   40000d28 <user_memcpy>
400012ec:	83 c4 10             	add    $0x10,%esp
400012ef:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
400012f5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
400012f8:	01 d0                	add    %edx,%eax
400012fa:	0f b6 00             	movzbl (%eax),%eax
400012fd:	3c 2f                	cmp    $0x2f,%al
400012ff:	74 12                	je     40001313 <buildin_ls+0x250>
40001301:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
40001307:	8b 45 e4             	mov    -0x1c(%ebp),%eax
4000130a:	01 d0                	add    %edx,%eax
4000130c:	c6 00 2f             	movb   $0x2f,(%eax)
4000130f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
40001313:	83 ec 0c             	sub    $0xc,%esp
40001316:	ff 75 dc             	pushl  -0x24(%ebp)
40001319:	e8 32 ef ff ff       	call   40000250 <rewinddir>
4000131e:	83 c4 10             	add    $0x10,%esp
40001321:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40001325:	0f 84 ec 00 00 00    	je     40001417 <buildin_ls+0x354>
4000132b:	8b 45 cc             	mov    -0x34(%ebp),%eax
4000132e:	83 ec 08             	sub    $0x8,%esp
40001331:	50                   	push   %eax
40001332:	68 81 1a 00 40       	push   $0x40001a81
40001337:	e8 42 f0 ff ff       	call   4000037e <printf>
4000133c:	83 c4 10             	add    $0x10,%esp
4000133f:	e9 a2 00 00 00       	jmp    400013e6 <buildin_ls+0x323>
40001344:	c6 45 e3 64          	movb   $0x64,-0x1d(%ebp)
40001348:	8b 45 d8             	mov    -0x28(%ebp),%eax
4000134b:	8b 40 14             	mov    0x14(%eax),%eax
4000134e:	83 f8 01             	cmp    $0x1,%eax
40001351:	75 04                	jne    40001357 <buildin_ls+0x294>
40001353:	c6 45 e3 2d          	movb   $0x2d,-0x1d(%ebp)
40001357:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
4000135d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
40001360:	01 d0                	add    %edx,%eax
40001362:	c6 00 00             	movb   $0x0,(%eax)
40001365:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001368:	83 ec 08             	sub    $0x8,%esp
4000136b:	50                   	push   %eax
4000136c:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
40001372:	50                   	push   %eax
40001373:	e8 77 f8 ff ff       	call   40000bef <user_strcat>
40001378:	83 c4 10             	add    $0x10,%esp
4000137b:	83 ec 04             	sub    $0x4,%esp
4000137e:	6a 0c                	push   $0xc
40001380:	6a 00                	push   $0x0
40001382:	8d 45 c8             	lea    -0x38(%ebp),%eax
40001385:	50                   	push   %eax
40001386:	e8 43 f8 ff ff       	call   40000bce <user_memset>
4000138b:	83 c4 10             	add    $0x10,%esp
4000138e:	83 ec 08             	sub    $0x8,%esp
40001391:	8d 45 c8             	lea    -0x38(%ebp),%eax
40001394:	50                   	push   %eax
40001395:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
4000139b:	50                   	push   %eax
4000139c:	e8 e9 ee ff ff       	call   4000028a <stat>
400013a1:	83 c4 10             	add    $0x10,%esp
400013a4:	83 f8 ff             	cmp    $0xffffffff,%eax
400013a7:	75 19                	jne    400013c2 <buildin_ls+0x2ff>
400013a9:	8b 45 d8             	mov    -0x28(%ebp),%eax
400013ac:	83 ec 08             	sub    $0x8,%esp
400013af:	50                   	push   %eax
400013b0:	68 50 1a 00 40       	push   $0x40001a50
400013b5:	e8 c4 ef ff ff       	call   4000037e <printf>
400013ba:	83 c4 10             	add    $0x10,%esp
400013bd:	e9 bf 00 00 00       	jmp    40001481 <buildin_ls+0x3be>
400013c2:	8b 5d d8             	mov    -0x28(%ebp),%ebx
400013c5:	8b 4d cc             	mov    -0x34(%ebp),%ecx
400013c8:	8b 45 d8             	mov    -0x28(%ebp),%eax
400013cb:	8b 50 10             	mov    0x10(%eax),%edx
400013ce:	0f be 45 e3          	movsbl -0x1d(%ebp),%eax
400013d2:	83 ec 0c             	sub    $0xc,%esp
400013d5:	53                   	push   %ebx
400013d6:	51                   	push   %ecx
400013d7:	52                   	push   %edx
400013d8:	50                   	push   %eax
400013d9:	68 8c 1a 00 40       	push   $0x40001a8c
400013de:	e8 9b ef ff ff       	call   4000037e <printf>
400013e3:	83 c4 20             	add    $0x20,%esp
400013e6:	83 ec 0c             	sub    $0xc,%esp
400013e9:	ff 75 dc             	pushl  -0x24(%ebp)
400013ec:	e8 d2 ee ff ff       	call   400002c3 <readdir>
400013f1:	83 c4 10             	add    $0x10,%esp
400013f4:	89 45 d8             	mov    %eax,-0x28(%ebp)
400013f7:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
400013fb:	0f 85 43 ff ff ff    	jne    40001344 <buildin_ls+0x281>
40001401:	eb 3b                	jmp    4000143e <buildin_ls+0x37b>
40001403:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001406:	83 ec 08             	sub    $0x8,%esp
40001409:	50                   	push   %eax
4000140a:	68 9c 1a 00 40       	push   $0x40001a9c
4000140f:	e8 6a ef ff ff       	call   4000037e <printf>
40001414:	83 c4 10             	add    $0x10,%esp
40001417:	83 ec 0c             	sub    $0xc,%esp
4000141a:	ff 75 dc             	pushl  -0x24(%ebp)
4000141d:	e8 a1 ee ff ff       	call   400002c3 <readdir>
40001422:	83 c4 10             	add    $0x10,%esp
40001425:	89 45 d8             	mov    %eax,-0x28(%ebp)
40001428:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
4000142c:	75 d5                	jne    40001403 <buildin_ls+0x340>
4000142e:	83 ec 0c             	sub    $0xc,%esp
40001431:	68 a0 1a 00 40       	push   $0x40001aa0
40001436:	e8 43 ef ff ff       	call   4000037e <printf>
4000143b:	83 c4 10             	add    $0x10,%esp
4000143e:	83 ec 0c             	sub    $0xc,%esp
40001441:	ff 75 dc             	pushl  -0x24(%ebp)
40001444:	e8 68 ee ff ff       	call   400002b1 <closedir>
40001449:	83 c4 10             	add    $0x10,%esp
4000144c:	eb 33                	jmp    40001481 <buildin_ls+0x3be>
4000144e:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40001452:	74 1a                	je     4000146e <buildin_ls+0x3ab>
40001454:	8b 55 cc             	mov    -0x34(%ebp),%edx
40001457:	8b 45 c8             	mov    -0x38(%ebp),%eax
4000145a:	ff 75 f4             	pushl  -0xc(%ebp)
4000145d:	52                   	push   %edx
4000145e:	50                   	push   %eax
4000145f:	68 a2 1a 00 40       	push   $0x40001aa2
40001464:	e8 15 ef ff ff       	call   4000037e <printf>
40001469:	83 c4 10             	add    $0x10,%esp
4000146c:	eb 13                	jmp    40001481 <buildin_ls+0x3be>
4000146e:	83 ec 08             	sub    $0x8,%esp
40001471:	ff 75 f4             	pushl  -0xc(%ebp)
40001474:	68 fa 18 00 40       	push   $0x400018fa
40001479:	e8 00 ef ff ff       	call   4000037e <printf>
4000147e:	83 c4 10             	add    $0x10,%esp
40001481:	8d 65 f8             	lea    -0x8(%ebp),%esp
40001484:	5b                   	pop    %ebx
40001485:	5f                   	pop    %edi
40001486:	5d                   	pop    %ebp
40001487:	c3                   	ret    

40001488 <buildin_ps>:
40001488:	55                   	push   %ebp
40001489:	89 e5                	mov    %esp,%ebp
4000148b:	83 ec 08             	sub    $0x8,%esp
4000148e:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40001492:	74 12                	je     400014a6 <buildin_ps+0x1e>
40001494:	83 ec 0c             	sub    $0xc,%esp
40001497:	68 b1 1a 00 40       	push   $0x40001ab1
4000149c:	e8 dd ee ff ff       	call   4000037e <printf>
400014a1:	83 c4 10             	add    $0x10,%esp
400014a4:	eb 05                	jmp    400014ab <buildin_ps+0x23>
400014a6:	e8 2a ee ff ff       	call   400002d5 <ps>
400014ab:	c9                   	leave  
400014ac:	c3                   	ret    

400014ad <buildin_mkdir>:
400014ad:	55                   	push   %ebp
400014ae:	89 e5                	mov    %esp,%ebp
400014b0:	83 ec 18             	sub    $0x18,%esp
400014b3:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
400014ba:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
400014be:	74 12                	je     400014d2 <buildin_mkdir+0x25>
400014c0:	83 ec 0c             	sub    $0xc,%esp
400014c3:	68 cc 1a 00 40       	push   $0x40001acc
400014c8:	e8 b1 ee ff ff       	call   4000037e <printf>
400014cd:	83 c4 10             	add    $0x10,%esp
400014d0:	eb 68                	jmp    4000153a <buildin_mkdir+0x8d>
400014d2:	8b 45 0c             	mov    0xc(%ebp),%eax
400014d5:	83 c0 04             	add    $0x4,%eax
400014d8:	8b 00                	mov    (%eax),%eax
400014da:	83 ec 08             	sub    $0x8,%esp
400014dd:	68 c0 1e 00 40       	push   $0x40001ec0
400014e2:	50                   	push   %eax
400014e3:	e8 2e fa ff ff       	call   40000f16 <make_clear_abs_path>
400014e8:	83 c4 10             	add    $0x10,%esp
400014eb:	83 ec 08             	sub    $0x8,%esp
400014ee:	68 c0 1e 00 40       	push   $0x40001ec0
400014f3:	68 d8 18 00 40       	push   $0x400018d8
400014f8:	e8 74 f7 ff ff       	call   40000c71 <user_strcmp>
400014fd:	83 c4 10             	add    $0x10,%esp
40001500:	85 c0                	test   %eax,%eax
40001502:	74 36                	je     4000153a <buildin_mkdir+0x8d>
40001504:	83 ec 0c             	sub    $0xc,%esp
40001507:	68 c0 1e 00 40       	push   $0x40001ec0
4000150c:	e8 1b ed ff ff       	call   4000022c <mkdir>
40001511:	83 c4 10             	add    $0x10,%esp
40001514:	85 c0                	test   %eax,%eax
40001516:	75 09                	jne    40001521 <buildin_mkdir+0x74>
40001518:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000151f:	eb 19                	jmp    4000153a <buildin_mkdir+0x8d>
40001521:	8b 45 0c             	mov    0xc(%ebp),%eax
40001524:	83 c0 04             	add    $0x4,%eax
40001527:	8b 00                	mov    (%eax),%eax
40001529:	83 ec 08             	sub    $0x8,%esp
4000152c:	50                   	push   %eax
4000152d:	68 f0 1a 00 40       	push   $0x40001af0
40001532:	e8 47 ee ff ff       	call   4000037e <printf>
40001537:	83 c4 10             	add    $0x10,%esp
4000153a:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000153d:	c9                   	leave  
4000153e:	c3                   	ret    

4000153f <buildin_rmdir>:
4000153f:	55                   	push   %ebp
40001540:	89 e5                	mov    %esp,%ebp
40001542:	83 ec 18             	sub    $0x18,%esp
40001545:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
4000154c:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40001550:	74 12                	je     40001564 <buildin_rmdir+0x25>
40001552:	83 ec 0c             	sub    $0xc,%esp
40001555:	68 14 1b 00 40       	push   $0x40001b14
4000155a:	e8 1f ee ff ff       	call   4000037e <printf>
4000155f:	83 c4 10             	add    $0x10,%esp
40001562:	eb 68                	jmp    400015cc <buildin_rmdir+0x8d>
40001564:	8b 45 0c             	mov    0xc(%ebp),%eax
40001567:	83 c0 04             	add    $0x4,%eax
4000156a:	8b 00                	mov    (%eax),%eax
4000156c:	83 ec 08             	sub    $0x8,%esp
4000156f:	68 c0 1e 00 40       	push   $0x40001ec0
40001574:	50                   	push   %eax
40001575:	e8 9c f9 ff ff       	call   40000f16 <make_clear_abs_path>
4000157a:	83 c4 10             	add    $0x10,%esp
4000157d:	83 ec 08             	sub    $0x8,%esp
40001580:	68 c0 1e 00 40       	push   $0x40001ec0
40001585:	68 d8 18 00 40       	push   $0x400018d8
4000158a:	e8 e2 f6 ff ff       	call   40000c71 <user_strcmp>
4000158f:	83 c4 10             	add    $0x10,%esp
40001592:	85 c0                	test   %eax,%eax
40001594:	74 36                	je     400015cc <buildin_rmdir+0x8d>
40001596:	83 ec 0c             	sub    $0xc,%esp
40001599:	68 c0 1e 00 40       	push   $0x40001ec0
4000159e:	e8 9b ec ff ff       	call   4000023e <rmdir>
400015a3:	83 c4 10             	add    $0x10,%esp
400015a6:	85 c0                	test   %eax,%eax
400015a8:	75 09                	jne    400015b3 <buildin_rmdir+0x74>
400015aa:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400015b1:	eb 19                	jmp    400015cc <buildin_rmdir+0x8d>
400015b3:	8b 45 0c             	mov    0xc(%ebp),%eax
400015b6:	83 c0 04             	add    $0x4,%eax
400015b9:	8b 00                	mov    (%eax),%eax
400015bb:	83 ec 08             	sub    $0x8,%esp
400015be:	50                   	push   %eax
400015bf:	68 35 1b 00 40       	push   $0x40001b35
400015c4:	e8 b5 ed ff ff       	call   4000037e <printf>
400015c9:	83 c4 10             	add    $0x10,%esp
400015cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
400015cf:	c9                   	leave  
400015d0:	c3                   	ret    

400015d1 <buildin_rm>:
400015d1:	55                   	push   %ebp
400015d2:	89 e5                	mov    %esp,%ebp
400015d4:	83 ec 18             	sub    $0x18,%esp
400015d7:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
400015de:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
400015e2:	74 12                	je     400015f6 <buildin_rm+0x25>
400015e4:	83 ec 0c             	sub    $0xc,%esp
400015e7:	68 4f 1b 00 40       	push   $0x40001b4f
400015ec:	e8 8d ed ff ff       	call   4000037e <printf>
400015f1:	83 c4 10             	add    $0x10,%esp
400015f4:	eb 68                	jmp    4000165e <buildin_rm+0x8d>
400015f6:	8b 45 0c             	mov    0xc(%ebp),%eax
400015f9:	83 c0 04             	add    $0x4,%eax
400015fc:	8b 00                	mov    (%eax),%eax
400015fe:	83 ec 08             	sub    $0x8,%esp
40001601:	68 c0 1e 00 40       	push   $0x40001ec0
40001606:	50                   	push   %eax
40001607:	e8 0a f9 ff ff       	call   40000f16 <make_clear_abs_path>
4000160c:	83 c4 10             	add    $0x10,%esp
4000160f:	83 ec 08             	sub    $0x8,%esp
40001612:	68 c0 1e 00 40       	push   $0x40001ec0
40001617:	68 d8 18 00 40       	push   $0x400018d8
4000161c:	e8 50 f6 ff ff       	call   40000c71 <user_strcmp>
40001621:	83 c4 10             	add    $0x10,%esp
40001624:	85 c0                	test   %eax,%eax
40001626:	74 36                	je     4000165e <buildin_rm+0x8d>
40001628:	83 ec 0c             	sub    $0xc,%esp
4000162b:	68 c0 1e 00 40       	push   $0x40001ec0
40001630:	e8 e5 eb ff ff       	call   4000021a <unlink>
40001635:	83 c4 10             	add    $0x10,%esp
40001638:	85 c0                	test   %eax,%eax
4000163a:	75 09                	jne    40001645 <buildin_rm+0x74>
4000163c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
40001643:	eb 19                	jmp    4000165e <buildin_rm+0x8d>
40001645:	8b 45 0c             	mov    0xc(%ebp),%eax
40001648:	83 c0 04             	add    $0x4,%eax
4000164b:	8b 00                	mov    (%eax),%eax
4000164d:	83 ec 08             	sub    $0x8,%esp
40001650:	50                   	push   %eax
40001651:	68 6d 1b 00 40       	push   $0x40001b6d
40001656:	e8 23 ed ff ff       	call   4000037e <printf>
4000165b:	83 c4 10             	add    $0x10,%esp
4000165e:	8b 45 f4             	mov    -0xc(%ebp),%eax
40001661:	c9                   	leave  
40001662:	c3                   	ret    

40001663 <buildin_help>:
40001663:	55                   	push   %ebp
40001664:	89 e5                	mov    %esp,%ebp
40001666:	83 ec 08             	sub    $0x8,%esp
40001669:	83 ec 0c             	sub    $0xc,%esp
4000166c:	68 84 1b 00 40       	push   $0x40001b84
40001671:	e8 08 ed ff ff       	call   4000037e <printf>
40001676:	83 c4 10             	add    $0x10,%esp
40001679:	90                   	nop
4000167a:	c9                   	leave  
4000167b:	c3                   	ret    

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
c10002e3:	68 f4 b0 00 c1       	push   $0xc100b0f4
c10002e8:	e8 c5 54 00 00       	call   c10057b2 <printk>
c10002ed:	83 c4 10             	add    $0x10,%esp
c10002f0:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10002f4:	0f b7 c0             	movzwl %ax,%eax
c10002f7:	83 ec 08             	sub    $0x8,%esp
c10002fa:	50                   	push   %eax
c10002fb:	68 fd b0 00 c1       	push   $0xc100b0fd
c1000300:	e8 ad 54 00 00       	call   c10057b2 <printk>
c1000305:	83 c4 10             	add    $0x10,%esp
c1000308:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c100030c:	0f b7 c0             	movzwl %ax,%eax
c100030f:	83 ec 08             	sub    $0x8,%esp
c1000312:	50                   	push   %eax
c1000313:	68 06 b1 00 c1       	push   $0xc100b106
c1000318:	e8 95 54 00 00       	call   c10057b2 <printk>
c100031d:	83 c4 10             	add    $0x10,%esp
c1000320:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
c1000324:	0f b7 c0             	movzwl %ax,%eax
c1000327:	83 ec 08             	sub    $0x8,%esp
c100032a:	50                   	push   %eax
c100032b:	68 0f b1 00 c1       	push   $0xc100b10f
c1000330:	e8 7d 54 00 00       	call   c10057b2 <printk>
c1000335:	83 c4 10             	add    $0x10,%esp
c1000338:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
c100033c:	0f b7 c0             	movzwl %ax,%eax
c100033f:	83 ec 08             	sub    $0x8,%esp
c1000342:	50                   	push   %eax
c1000343:	68 18 b1 00 c1       	push   $0xc100b118
c1000348:	e8 65 54 00 00       	call   c10057b2 <printk>
c100034d:	83 c4 10             	add    $0x10,%esp
c1000350:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c1000354:	0f b7 c0             	movzwl %ax,%eax
c1000357:	83 ec 08             	sub    $0x8,%esp
c100035a:	50                   	push   %eax
c100035b:	68 21 b1 00 c1       	push   $0xc100b121
c1000360:	e8 4d 54 00 00       	call   c10057b2 <printk>
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
c100037f:	68 2a b1 00 c1       	push   $0xc100b12a
c1000384:	e8 29 54 00 00       	call   c10057b2 <printk>
c1000389:	83 c4 10             	add    $0x10,%esp
c100038c:	83 ec 04             	sub    $0x4,%esp
c100038f:	ff 75 14             	pushl  0x14(%ebp)
c1000392:	ff 75 10             	pushl  0x10(%ebp)
c1000395:	68 48 b1 00 c1       	push   $0xc100b148
c100039a:	e8 13 54 00 00       	call   c10057b2 <printk>
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
c10003bc:	68 ef b1 00 c1       	push   $0xc100b1ef
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
c100044b:	68 f2 b1 00 c1       	push   $0xc100b1f2
c1000450:	e8 5d 53 00 00       	call   c10057b2 <printk>
c1000455:	83 c4 10             	add    $0x10,%esp
c1000458:	83 ec 0c             	sub    $0xc,%esp
c100045b:	68 f8 b1 00 c1       	push   $0xc100b1f8
c1000460:	e8 4d 53 00 00       	call   c10057b2 <printk>
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
c100047a:	68 f2 b1 00 c1       	push   $0xc100b1f2
c100047f:	e8 2e 53 00 00       	call   c10057b2 <printk>
c1000484:	83 c4 10             	add    $0x10,%esp
c1000487:	83 ec 0c             	sub    $0xc,%esp
c100048a:	68 28 b2 00 c1       	push   $0xc100b228
c100048f:	e8 1e 53 00 00       	call   c10057b2 <printk>
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
c10004cb:	68 47 b2 00 c1       	push   $0xc100b247
c10004d0:	e8 dd 52 00 00       	call   c10057b2 <printk>
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
c10004fe:	68 f2 b1 00 c1       	push   $0xc100b1f2
c1000503:	e8 aa 52 00 00       	call   c10057b2 <printk>
c1000508:	83 c4 10             	add    $0x10,%esp
c100050b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1000512:	83 ec 0c             	sub    $0xc,%esp
c1000515:	68 52 b2 00 c1       	push   $0xc100b252
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
c1000565:	68 70 b2 00 c1       	push   $0xc100b270
c100056a:	e8 43 52 00 00       	call   c10057b2 <printk>
c100056f:	83 c4 10             	add    $0x10,%esp
c1000572:	eb 32                	jmp    c10005a6 <instr_game+0xbe>
c1000574:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000577:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c100057a:	7d 15                	jge    c1000591 <instr_game+0xa9>
c100057c:	83 ec 0c             	sub    $0xc,%esp
c100057f:	68 9f b2 00 c1       	push   $0xc100b29f
c1000584:	e8 29 52 00 00       	call   c10057b2 <printk>
c1000589:	83 c4 10             	add    $0x10,%esp
c100058c:	e9 7a ff ff ff       	jmp    c100050b <instr_game+0x23>
c1000591:	83 ec 0c             	sub    $0xc,%esp
c1000594:	68 b7 b2 00 c1       	push   $0xc100b2b7
c1000599:	e8 14 52 00 00       	call   c10057b2 <printk>
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
c10005b0:	e8 d0 55 00 00       	call   c1005b85 <cons_getc>
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
c10005d5:	68 ce b2 00 c1       	push   $0xc100b2ce
c10005da:	e8 d3 51 00 00       	call   c10057b2 <printk>
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
c1000616:	e8 2c 55 00 00       	call   c1005b47 <cons_putc>
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
c1000644:	e8 fe 54 00 00       	call   c1005b47 <cons_putc>
c1000649:	83 c4 10             	add    $0x10,%esp
c100064c:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
c1000650:	eb 2c                	jmp    c100067e <readline+0xbb>
c1000652:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
c1000656:	74 06                	je     c100065e <readline+0x9b>
c1000658:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
c100065c:	75 8b                	jne    c10005e9 <readline+0x26>
c100065e:	83 ec 0c             	sub    $0xc,%esp
c1000661:	ff 75 f0             	pushl  -0x10(%ebp)
c1000664:	e8 de 54 00 00       	call   c1005b47 <cons_putc>
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
c10009f3:	68 06 b3 00 c1       	push   $0xc100b306
c10009f8:	e8 b5 4d 00 00       	call   c10057b2 <printk>
c10009fd:	83 c4 10             	add    $0x10,%esp
c1000a00:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a03:	8b 40 04             	mov    0x4(%eax),%eax
c1000a06:	83 ec 08             	sub    $0x8,%esp
c1000a09:	50                   	push   %eax
c1000a0a:	68 16 b3 00 c1       	push   $0xc100b316
c1000a0f:	e8 9e 4d 00 00       	call   c10057b2 <printk>
c1000a14:	83 c4 10             	add    $0x10,%esp
c1000a17:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a1a:	8b 40 08             	mov    0x8(%eax),%eax
c1000a1d:	83 ec 08             	sub    $0x8,%esp
c1000a20:	50                   	push   %eax
c1000a21:	68 26 b3 00 c1       	push   $0xc100b326
c1000a26:	e8 87 4d 00 00       	call   c10057b2 <printk>
c1000a2b:	83 c4 10             	add    $0x10,%esp
c1000a2e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a31:	8b 40 0c             	mov    0xc(%eax),%eax
c1000a34:	83 ec 08             	sub    $0x8,%esp
c1000a37:	50                   	push   %eax
c1000a38:	68 36 b3 00 c1       	push   $0xc100b336
c1000a3d:	e8 70 4d 00 00       	call   c10057b2 <printk>
c1000a42:	83 c4 10             	add    $0x10,%esp
c1000a45:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a48:	8b 40 10             	mov    0x10(%eax),%eax
c1000a4b:	83 ec 08             	sub    $0x8,%esp
c1000a4e:	50                   	push   %eax
c1000a4f:	68 46 b3 00 c1       	push   $0xc100b346
c1000a54:	e8 59 4d 00 00       	call   c10057b2 <printk>
c1000a59:	83 c4 10             	add    $0x10,%esp
c1000a5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a5f:	8b 40 14             	mov    0x14(%eax),%eax
c1000a62:	83 ec 08             	sub    $0x8,%esp
c1000a65:	50                   	push   %eax
c1000a66:	68 56 b3 00 c1       	push   $0xc100b356
c1000a6b:	e8 42 4d 00 00       	call   c10057b2 <printk>
c1000a70:	83 c4 10             	add    $0x10,%esp
c1000a73:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a76:	8b 40 18             	mov    0x18(%eax),%eax
c1000a79:	83 ec 08             	sub    $0x8,%esp
c1000a7c:	50                   	push   %eax
c1000a7d:	68 66 b3 00 c1       	push   $0xc100b366
c1000a82:	e8 2b 4d 00 00       	call   c10057b2 <printk>
c1000a87:	83 c4 10             	add    $0x10,%esp
c1000a8a:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a8d:	8b 40 1c             	mov    0x1c(%eax),%eax
c1000a90:	83 ec 08             	sub    $0x8,%esp
c1000a93:	50                   	push   %eax
c1000a94:	68 76 b3 00 c1       	push   $0xc100b376
c1000a99:	e8 14 4d 00 00       	call   c10057b2 <printk>
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
c1000ac7:	68 86 b3 00 c1       	push   $0xc100b386
c1000acc:	e8 e1 4c 00 00       	call   c10057b2 <printk>
c1000ad1:	83 c4 10             	add    $0x10,%esp
c1000ad4:	8b 45 08             	mov    0x8(%ebp),%eax
c1000ad7:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1000adb:	0f b7 c0             	movzwl %ax,%eax
c1000ade:	83 ec 08             	sub    $0x8,%esp
c1000ae1:	50                   	push   %eax
c1000ae2:	68 9a b3 00 c1       	push   $0xc100b39a
c1000ae7:	e8 c6 4c 00 00       	call   c10057b2 <printk>
c1000aec:	83 c4 10             	add    $0x10,%esp
c1000aef:	8b 45 08             	mov    0x8(%ebp),%eax
c1000af2:	0f b7 40 24          	movzwl 0x24(%eax),%eax
c1000af6:	0f b7 c0             	movzwl %ax,%eax
c1000af9:	83 ec 08             	sub    $0x8,%esp
c1000afc:	50                   	push   %eax
c1000afd:	68 ae b3 00 c1       	push   $0xc100b3ae
c1000b02:	e8 ab 4c 00 00       	call   c10057b2 <printk>
c1000b07:	83 c4 10             	add    $0x10,%esp
c1000b0a:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b0d:	0f b7 40 20          	movzwl 0x20(%eax),%eax
c1000b11:	0f b7 c0             	movzwl %ax,%eax
c1000b14:	83 ec 08             	sub    $0x8,%esp
c1000b17:	50                   	push   %eax
c1000b18:	68 c2 b3 00 c1       	push   $0xc100b3c2
c1000b1d:	e8 90 4c 00 00       	call   c10057b2 <printk>
c1000b22:	83 c4 10             	add    $0x10,%esp
c1000b25:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b28:	8b 40 34             	mov    0x34(%eax),%eax
c1000b2b:	83 ec 08             	sub    $0x8,%esp
c1000b2e:	50                   	push   %eax
c1000b2f:	68 d6 b3 00 c1       	push   $0xc100b3d6
c1000b34:	e8 79 4c 00 00       	call   c10057b2 <printk>
c1000b39:	83 c4 10             	add    $0x10,%esp
c1000b3c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b3f:	8b 40 38             	mov    0x38(%eax),%eax
c1000b42:	83 ec 08             	sub    $0x8,%esp
c1000b45:	50                   	push   %eax
c1000b46:	68 e6 b3 00 c1       	push   $0xc100b3e6
c1000b4b:	e8 62 4c 00 00       	call   c10057b2 <printk>
c1000b50:	83 c4 10             	add    $0x10,%esp
c1000b53:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b56:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
c1000b5a:	0f b7 c0             	movzwl %ax,%eax
c1000b5d:	83 ec 08             	sub    $0x8,%esp
c1000b60:	50                   	push   %eax
c1000b61:	68 f6 b3 00 c1       	push   $0xc100b3f6
c1000b66:	e8 47 4c 00 00       	call   c10057b2 <printk>
c1000b6b:	83 c4 10             	add    $0x10,%esp
c1000b6e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b71:	8b 40 40             	mov    0x40(%eax),%eax
c1000b74:	83 ec 08             	sub    $0x8,%esp
c1000b77:	50                   	push   %eax
c1000b78:	68 0a b4 00 c1       	push   $0xc100b40a
c1000b7d:	e8 30 4c 00 00       	call   c10057b2 <printk>
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
c1000bc0:	68 1a b4 00 c1       	push   $0xc100b41a
c1000bc5:	e8 e8 4b 00 00       	call   c10057b2 <printk>
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
c1000bec:	68 1e b4 00 c1       	push   $0xc100b41e
c1000bf1:	e8 bc 4b 00 00       	call   c10057b2 <printk>
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
c1000c33:	8b 04 85 54 b4 00 c1 	mov    -0x3eff4bac(,%eax,4),%eax
c1000c3a:	ff e0                	jmp    *%eax
c1000c3c:	83 f8 60             	cmp    $0x60,%eax
c1000c3f:	0f 85 c9 00 00 00    	jne    c1000d0e <trap_dispatch+0x113>
c1000c45:	83 ec 0c             	sub    $0xc,%esp
c1000c48:	68 27 b4 00 c1       	push   $0xc100b427
c1000c4d:	e8 60 4b 00 00       	call   c10057b2 <printk>
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
c1000cd3:	e8 e6 30 00 00       	call   c1003dbe <schedule>
c1000cd8:	eb 49                	jmp    c1000d23 <trap_dispatch+0x128>
c1000cda:	e8 a6 4e 00 00       	call   c1005b85 <cons_getc>
c1000cdf:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000ce2:	eb 43                	jmp    c1000d27 <trap_dispatch+0x12c>
c1000ce4:	e8 9c 4e 00 00       	call   c1005b85 <cons_getc>
c1000ce9:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000cec:	0f b6 05 b4 1c 01 c1 	movzbl 0xc1011cb4,%eax
c1000cf3:	84 c0                	test   %al,%al
c1000cf5:	75 2f                	jne    c1000d26 <trap_dispatch+0x12b>
c1000cf7:	83 ec 0c             	sub    $0xc,%esp
c1000cfa:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1000cff:	e8 42 50 00 00       	call   c1005d46 <sema_up>
c1000d04:	83 c4 10             	add    $0x10,%esp
c1000d07:	e8 b2 30 00 00       	call   c1003dbe <schedule>
c1000d0c:	eb 18                	jmp    c1000d26 <trap_dispatch+0x12b>
c1000d0e:	83 ec 0c             	sub    $0xc,%esp
c1000d11:	68 37 b4 00 c1       	push   $0xc100b437
c1000d16:	e8 97 4a 00 00       	call   c10057b2 <printk>
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
c10018a0:	e8 57 2d 00 00       	call   c10045fc <sys_exit>
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
c10018d4:	e8 69 22 00 00       	call   c1003b42 <do_fork>
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
c10018f2:	e8 5f 2c 00 00       	call   c1004556 <sys_wait>
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
c100191e:	e8 db 33 00 00       	call   c1004cfe <sys_execv>
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
c1001966:	e8 c2 3a 00 00       	call   c100542d <print_char>
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
c100198d:	e8 b8 3b 00 00       	call   c100554a <print_string>
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
c10019e6:	e8 96 3b 00 00       	call   c1005581 <print_num>
c10019eb:	83 c4 20             	add    $0x20,%esp
c10019ee:	b8 00 00 00 00       	mov    $0x0,%eax
c10019f3:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10019f6:	c9                   	leave  
c10019f7:	c3                   	ret    

c10019f8 <sys_backtrace>:
c10019f8:	55                   	push   %ebp
c10019f9:	89 e5                	mov    %esp,%ebp
c10019fb:	83 ec 08             	sub    $0x8,%esp
c10019fe:	e8 fd 3c 00 00       	call   c1005700 <backtrace>
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
c1001a42:	e8 70 58 00 00       	call   c10072b7 <sys_read>
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
c1001a70:	e8 49 53 00 00       	call   c1006dbe <sys_open>
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
c1001a8e:	e8 c9 55 00 00       	call   c100705c <sys_close>
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
c1001ac6:	e8 8d 56 00 00       	call   c1007158 <sys_write>
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
c1001b02:	e8 07 59 00 00       	call   c100740e <sys_lseek>
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
c1001b20:	e8 d5 59 00 00       	call   c10074fa <sys_unlink>
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
c1001b3e:	e8 d7 5b 00 00       	call   c100771a <sys_mkdir>
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
c1001b5c:	e8 72 61 00 00       	call   c1007cd3 <sys_rmdir>
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
c1001b7a:	e8 44 61 00 00       	call   c1007cc3 <sys_rewinddir>
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
c1001ba9:	e8 a4 64 00 00       	call   c1008052 <sys_getcwd>
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
c1001bc7:	e8 9f 67 00 00       	call   c100836b <sys_chdir>
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
c1001bf3:	e8 47 66 00 00       	call   c100823f <sys_stat>
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
c1001c11:	e8 3e 5f 00 00       	call   c1007b54 <sys_opendir>
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
c1001c2f:	e8 2d 60 00 00       	call   c1007c61 <sys_closedir>
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
c1001c4d:	e8 3c 60 00 00       	call   c1007c8e <sys_readdir>
c1001c52:	83 c4 10             	add    $0x10,%esp
c1001c55:	c9                   	leave  
c1001c56:	c3                   	ret    

c1001c57 <syscall_print_task>:
c1001c57:	55                   	push   %ebp
c1001c58:	89 e5                	mov    %esp,%ebp
c1001c5a:	83 ec 08             	sub    $0x8,%esp
c1001c5d:	e8 54 2d 00 00       	call   c10049b6 <sys_print_task>
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
c1001c7d:	e8 97 13 00 00       	call   c1003019 <sys_malloc>
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
c1001ca7:	e8 cc 13 00 00       	call   c1003078 <sys_free>
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
c1001cca:	e8 04 8f 00 00       	call   c100abd3 <sys_pipe>
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
c1001ea7:	68 dc b4 00 c1       	push   $0xc100b4dc
c1001eac:	e8 01 39 00 00       	call   c10057b2 <printk>
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
c1001ed9:	e8 71 32 00 00       	call   c100514f <cons_intr>
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
c1001f3a:	e8 cf 2e 00 00       	call   c1004e0e <pic_enable>
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
c1001f7b:	e8 35 34 00 00       	call   c10053b5 <clear>
c1001f80:	83 ec 0c             	sub    $0xc,%esp
c1001f83:	68 e8 b4 00 c1       	push   $0xc100b4e8
c1001f88:	e8 25 38 00 00       	call   c10057b2 <printk>
c1001f8d:	83 c4 10             	add    $0x10,%esp
c1001f90:	e8 3d e7 ff ff       	call   c10006d2 <gdt_init>
c1001f95:	e8 a7 2e 00 00       	call   c1004e41 <pic_init>
c1001f9a:	e8 27 e8 ff ff       	call   c10007c6 <idt_init>
c1001f9f:	e8 a4 ed ff ff       	call   c1000d48 <enable_interupt>
c1001fa4:	e8 01 30 00 00       	call   c1004faa <serial_init>
c1001fa9:	e8 36 ff ff ff       	call   c1001ee4 <kbd_init>
c1001fae:	e8 28 0c 00 00       	call   c1002bdb <setup_vpt>
c1001fb3:	e8 3b 06 00 00       	call   c10025f3 <pmm_init>
c1001fb8:	e8 80 02 00 00       	call   c100223d <test_pmm>
c1001fbd:	e8 64 03 00 00       	call   c1002326 <test_vmm>
c1001fc2:	e8 31 64 00 00       	call   c10083f8 <fs_init>
c1001fc7:	83 ec 0c             	sub    $0xc,%esp
c1001fca:	68 38 22 00 c1       	push   $0xc1002238
c1001fcf:	e8 4c 11 00 00       	call   c1003120 <kernel_task_init>
c1001fd4:	83 c4 10             	add    $0x10,%esp
c1001fd7:	83 ec 0c             	sub    $0xc,%esp
c1001fda:	6a 64                	push   $0x64
c1001fdc:	e8 d1 32 00 00       	call   c10052b2 <timer_init>
c1001fe1:	83 c4 10             	add    $0x10,%esp
c1001fe4:	83 ec 08             	sub    $0x8,%esp
c1001fe7:	6a 00                	push   $0x0
c1001fe9:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1001fee:	e8 13 3c 00 00       	call   c1005c06 <sema_init>
c1001ff3:	83 c4 10             	add    $0x10,%esp
c1001ff6:	e8 71 ed ff ff       	call   c1000d6c <intr_enable>
c1001ffb:	e8 b5 33 00 00       	call   c10053b5 <clear>
c1002000:	83 ec 0c             	sub    $0xc,%esp
c1002003:	68 52 00 00 40       	push   $0x40000052
c1002008:	e8 86 26 00 00       	call   c1004693 <user_task_init>
c100200d:	83 c4 10             	add    $0x10,%esp
c1002010:	eb fe                	jmp    c1002010 <main+0xa6>

c1002012 <write2fs>:
c1002012:	55                   	push   %ebp
c1002013:	89 e5                	mov    %esp,%ebp
c1002015:	83 ec 38             	sub    $0x38,%esp
c1002018:	c7 45 f4 38 37 00 00 	movl   $0x3738,-0xc(%ebp)
c100201f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002022:	05 ff 01 00 00       	add    $0x1ff,%eax
c1002027:	c1 e8 09             	shr    $0x9,%eax
c100202a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100202d:	83 ec 08             	sub    $0x8,%esp
c1002030:	6a 01                	push   $0x1
c1002032:	ff 75 f4             	pushl  -0xc(%ebp)
c1002035:	e8 79 0c 00 00       	call   c1002cb3 <vmm_malloc>
c100203a:	83 c4 10             	add    $0x10,%esp
c100203d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002040:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002043:	83 ec 04             	sub    $0x4,%esp
c1002046:	ff 75 f0             	pushl  -0x10(%ebp)
c1002049:	68 f4 01 00 00       	push   $0x1f4
c100204e:	50                   	push   %eax
c100204f:	e8 06 40 00 00       	call   c100605a <ide_read>
c1002054:	83 c4 10             	add    $0x10,%esp
c1002057:	83 ec 08             	sub    $0x8,%esp
c100205a:	6a 06                	push   $0x6
c100205c:	68 fe b4 00 c1       	push   $0xc100b4fe
c1002061:	e8 58 4d 00 00       	call   c1006dbe <sys_open>
c1002066:	83 c4 10             	add    $0x10,%esp
c1002069:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100206c:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1002070:	74 2c                	je     c100209e <write2fs+0x8c>
c1002072:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002075:	83 ec 04             	sub    $0x4,%esp
c1002078:	ff 75 f4             	pushl  -0xc(%ebp)
c100207b:	50                   	push   %eax
c100207c:	ff 75 e8             	pushl  -0x18(%ebp)
c100207f:	e8 d4 50 00 00       	call   c1007158 <sys_write>
c1002084:	83 c4 10             	add    $0x10,%esp
c1002087:	83 f8 ff             	cmp    $0xffffffff,%eax
c100208a:	75 12                	jne    c100209e <write2fs+0x8c>
c100208c:	83 ec 0c             	sub    $0xc,%esp
c100208f:	68 04 b5 00 c1       	push   $0xc100b504
c1002094:	e8 19 37 00 00       	call   c10057b2 <printk>
c1002099:	83 c4 10             	add    $0x10,%esp
c100209c:	eb fe                	jmp    c100209c <write2fs+0x8a>
c100209e:	83 ec 08             	sub    $0x8,%esp
c10020a1:	ff 75 f4             	pushl  -0xc(%ebp)
c10020a4:	ff 75 ec             	pushl  -0x14(%ebp)
c10020a7:	e8 2c 0d 00 00       	call   c1002dd8 <vmm_free>
c10020ac:	83 c4 10             	add    $0x10,%esp
c10020af:	c7 45 f4 54 45 00 00 	movl   $0x4554,-0xc(%ebp)
c10020b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10020b9:	05 ff 01 00 00       	add    $0x1ff,%eax
c10020be:	c1 e8 09             	shr    $0x9,%eax
c10020c1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10020c4:	83 ec 08             	sub    $0x8,%esp
c10020c7:	6a 01                	push   $0x1
c10020c9:	ff 75 f4             	pushl  -0xc(%ebp)
c10020cc:	e8 e2 0b 00 00       	call   c1002cb3 <vmm_malloc>
c10020d1:	83 c4 10             	add    $0x10,%esp
c10020d4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10020d7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10020da:	83 ec 04             	sub    $0x4,%esp
c10020dd:	ff 75 f0             	pushl  -0x10(%ebp)
c10020e0:	68 12 02 00 00       	push   $0x212
c10020e5:	50                   	push   %eax
c10020e6:	e8 6f 3f 00 00       	call   c100605a <ide_read>
c10020eb:	83 c4 10             	add    $0x10,%esp
c10020ee:	83 ec 08             	sub    $0x8,%esp
c10020f1:	6a 06                	push   $0x6
c10020f3:	68 17 b5 00 c1       	push   $0xc100b517
c10020f8:	e8 c1 4c 00 00       	call   c1006dbe <sys_open>
c10020fd:	83 c4 10             	add    $0x10,%esp
c1002100:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002103:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1002107:	74 2c                	je     c1002135 <write2fs+0x123>
c1002109:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100210c:	83 ec 04             	sub    $0x4,%esp
c100210f:	ff 75 f4             	pushl  -0xc(%ebp)
c1002112:	50                   	push   %eax
c1002113:	ff 75 e8             	pushl  -0x18(%ebp)
c1002116:	e8 3d 50 00 00       	call   c1007158 <sys_write>
c100211b:	83 c4 10             	add    $0x10,%esp
c100211e:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002121:	75 12                	jne    c1002135 <write2fs+0x123>
c1002123:	83 ec 0c             	sub    $0xc,%esp
c1002126:	68 04 b5 00 c1       	push   $0xc100b504
c100212b:	e8 82 36 00 00       	call   c10057b2 <printk>
c1002130:	83 c4 10             	add    $0x10,%esp
c1002133:	eb fe                	jmp    c1002133 <write2fs+0x121>
c1002135:	c7 45 f4 c8 38 00 00 	movl   $0x38c8,-0xc(%ebp)
c100213c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100213f:	05 ff 01 00 00       	add    $0x1ff,%eax
c1002144:	c1 e8 09             	shr    $0x9,%eax
c1002147:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100214a:	83 ec 08             	sub    $0x8,%esp
c100214d:	6a 01                	push   $0x1
c100214f:	ff 75 f4             	pushl  -0xc(%ebp)
c1002152:	e8 5c 0b 00 00       	call   c1002cb3 <vmm_malloc>
c1002157:	83 c4 10             	add    $0x10,%esp
c100215a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100215d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002160:	83 ec 04             	sub    $0x4,%esp
c1002163:	ff 75 f0             	pushl  -0x10(%ebp)
c1002166:	68 3a 02 00 00       	push   $0x23a
c100216b:	50                   	push   %eax
c100216c:	e8 e9 3e 00 00       	call   c100605a <ide_read>
c1002171:	83 c4 10             	add    $0x10,%esp
c1002174:	83 ec 08             	sub    $0x8,%esp
c1002177:	6a 06                	push   $0x6
c1002179:	68 1c b5 00 c1       	push   $0xc100b51c
c100217e:	e8 3b 4c 00 00       	call   c1006dbe <sys_open>
c1002183:	83 c4 10             	add    $0x10,%esp
c1002186:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002189:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c100218d:	74 2c                	je     c10021bb <write2fs+0x1a9>
c100218f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002192:	83 ec 04             	sub    $0x4,%esp
c1002195:	ff 75 f4             	pushl  -0xc(%ebp)
c1002198:	50                   	push   %eax
c1002199:	ff 75 e8             	pushl  -0x18(%ebp)
c100219c:	e8 b7 4f 00 00       	call   c1007158 <sys_write>
c10021a1:	83 c4 10             	add    $0x10,%esp
c10021a4:	83 f8 ff             	cmp    $0xffffffff,%eax
c10021a7:	75 12                	jne    c10021bb <write2fs+0x1a9>
c10021a9:	83 ec 0c             	sub    $0xc,%esp
c10021ac:	68 04 b5 00 c1       	push   $0xc100b504
c10021b1:	e8 fc 35 00 00       	call   c10057b2 <printk>
c10021b6:	83 c4 10             	add    $0x10,%esp
c10021b9:	eb fe                	jmp    c10021b9 <write2fs+0x1a7>
c10021bb:	83 ec 08             	sub    $0x8,%esp
c10021be:	ff 75 f4             	pushl  -0xc(%ebp)
c10021c1:	ff 75 ec             	pushl  -0x14(%ebp)
c10021c4:	e8 0f 0c 00 00       	call   c1002dd8 <vmm_free>
c10021c9:	83 c4 10             	add    $0x10,%esp
c10021cc:	83 ec 08             	sub    $0x8,%esp
c10021cf:	6a 06                	push   $0x6
c10021d1:	68 22 b5 00 c1       	push   $0xc100b522
c10021d6:	e8 e3 4b 00 00       	call   c1006dbe <sys_open>
c10021db:	83 c4 10             	add    $0x10,%esp
c10021de:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10021e1:	c7 45 d4 48 65 6c 6c 	movl   $0x6c6c6548,-0x2c(%ebp)
c10021e8:	c7 45 d8 6f 20 49 27 	movl   $0x2749206f,-0x28(%ebp)
c10021ef:	c7 45 dc 6d 20 61 20 	movl   $0x2061206d,-0x24(%ebp)
c10021f6:	c7 45 e0 66 69 6c 65 	movl   $0x656c6966,-0x20(%ebp)
c10021fd:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002204:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1002208:	74 2b                	je     c1002235 <write2fs+0x223>
c100220a:	83 ec 04             	sub    $0x4,%esp
c100220d:	6a 14                	push   $0x14
c100220f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
c1002212:	50                   	push   %eax
c1002213:	ff 75 e8             	pushl  -0x18(%ebp)
c1002216:	e8 3d 4f 00 00       	call   c1007158 <sys_write>
c100221b:	83 c4 10             	add    $0x10,%esp
c100221e:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002221:	75 12                	jne    c1002235 <write2fs+0x223>
c1002223:	83 ec 0c             	sub    $0xc,%esp
c1002226:	68 04 b5 00 c1       	push   $0xc100b504
c100222b:	e8 82 35 00 00       	call   c10057b2 <printk>
c1002230:	83 c4 10             	add    $0x10,%esp
c1002233:	eb fe                	jmp    c1002233 <write2fs+0x221>
c1002235:	90                   	nop
c1002236:	c9                   	leave  
c1002237:	c3                   	ret    

c1002238 <kernel_main>:
c1002238:	55                   	push   %ebp
c1002239:	89 e5                	mov    %esp,%ebp
c100223b:	eb fe                	jmp    c100223b <kernel_main+0x3>

c100223d <test_pmm>:
c100223d:	55                   	push   %ebp
c100223e:	89 e5                	mov    %esp,%ebp
c1002240:	83 ec 18             	sub    $0x18,%esp
c1002243:	83 ec 08             	sub    $0x8,%esp
c1002246:	6a 01                	push   $0x1
c1002248:	68 00 02 00 00       	push   $0x200
c100224d:	e8 c1 07 00 00       	call   c1002a13 <pmm_alloc>
c1002252:	83 c4 10             	add    $0x10,%esp
c1002255:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002258:	83 ec 08             	sub    $0x8,%esp
c100225b:	6a 00                	push   $0x0
c100225d:	68 00 20 00 00       	push   $0x2000
c1002262:	e8 ac 07 00 00       	call   c1002a13 <pmm_alloc>
c1002267:	83 c4 10             	add    $0x10,%esp
c100226a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100226d:	83 ec 08             	sub    $0x8,%esp
c1002270:	6a 02                	push   $0x2
c1002272:	68 00 30 00 00       	push   $0x3000
c1002277:	e8 97 07 00 00       	call   c1002a13 <pmm_alloc>
c100227c:	83 c4 10             	add    $0x10,%esp
c100227f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002282:	83 ec 08             	sub    $0x8,%esp
c1002285:	ff 75 f0             	pushl  -0x10(%ebp)
c1002288:	68 28 b5 00 c1       	push   $0xc100b528
c100228d:	e8 20 35 00 00       	call   c10057b2 <printk>
c1002292:	83 c4 10             	add    $0x10,%esp
c1002295:	83 ec 08             	sub    $0x8,%esp
c1002298:	ff 75 f4             	pushl  -0xc(%ebp)
c100229b:	68 3e b5 00 c1       	push   $0xc100b53e
c10022a0:	e8 0d 35 00 00       	call   c10057b2 <printk>
c10022a5:	83 c4 10             	add    $0x10,%esp
c10022a8:	8b 0d c8 1c 01 c1    	mov    0xc1011cc8,%ecx
c10022ae:	8b 15 e8 1c 61 c1    	mov    0xc1611ce8,%edx
c10022b4:	a1 f4 1c 61 c1       	mov    0xc1611cf4,%eax
c10022b9:	51                   	push   %ecx
c10022ba:	52                   	push   %edx
c10022bb:	50                   	push   %eax
c10022bc:	68 58 b5 00 c1       	push   $0xc100b558
c10022c1:	e8 ec 34 00 00       	call   c10057b2 <printk>
c10022c6:	83 c4 10             	add    $0x10,%esp
c10022c9:	83 ec 08             	sub    $0x8,%esp
c10022cc:	68 00 02 00 00       	push   $0x200
c10022d1:	ff 75 f4             	pushl  -0xc(%ebp)
c10022d4:	e8 36 08 00 00       	call   c1002b0f <pmm_free>
c10022d9:	83 c4 10             	add    $0x10,%esp
c10022dc:	83 ec 08             	sub    $0x8,%esp
c10022df:	68 00 20 00 00       	push   $0x2000
c10022e4:	ff 75 f0             	pushl  -0x10(%ebp)
c10022e7:	e8 23 08 00 00       	call   c1002b0f <pmm_free>
c10022ec:	83 c4 10             	add    $0x10,%esp
c10022ef:	83 ec 08             	sub    $0x8,%esp
c10022f2:	68 00 30 00 00       	push   $0x3000
c10022f7:	ff 75 ec             	pushl  -0x14(%ebp)
c10022fa:	e8 10 08 00 00       	call   c1002b0f <pmm_free>
c10022ff:	83 c4 10             	add    $0x10,%esp
c1002302:	8b 0d c8 1c 01 c1    	mov    0xc1011cc8,%ecx
c1002308:	8b 15 e8 1c 61 c1    	mov    0xc1611ce8,%edx
c100230e:	a1 f4 1c 61 c1       	mov    0xc1611cf4,%eax
c1002313:	51                   	push   %ecx
c1002314:	52                   	push   %edx
c1002315:	50                   	push   %eax
c1002316:	68 58 b5 00 c1       	push   $0xc100b558
c100231b:	e8 92 34 00 00       	call   c10057b2 <printk>
c1002320:	83 c4 10             	add    $0x10,%esp
c1002323:	90                   	nop
c1002324:	c9                   	leave  
c1002325:	c3                   	ret    

c1002326 <test_vmm>:
c1002326:	55                   	push   %ebp
c1002327:	89 e5                	mov    %esp,%ebp
c1002329:	83 ec 38             	sub    $0x38,%esp
c100232c:	83 ec 0c             	sub    $0xc,%esp
c100232f:	68 9f b5 00 c1       	push   $0xc100b59f
c1002334:	e8 79 34 00 00       	call   c10057b2 <printk>
c1002339:	83 c4 10             	add    $0x10,%esp
c100233c:	83 ec 08             	sub    $0x8,%esp
c100233f:	6a 00                	push   $0x0
c1002341:	68 00 01 00 00       	push   $0x100
c1002346:	e8 68 09 00 00       	call   c1002cb3 <vmm_malloc>
c100234b:	83 c4 10             	add    $0x10,%esp
c100234e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002351:	83 ec 08             	sub    $0x8,%esp
c1002354:	6a 01                	push   $0x1
c1002356:	68 00 20 00 00       	push   $0x2000
c100235b:	e8 53 09 00 00       	call   c1002cb3 <vmm_malloc>
c1002360:	83 c4 10             	add    $0x10,%esp
c1002363:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002366:	83 ec 08             	sub    $0x8,%esp
c1002369:	6a 02                	push   $0x2
c100236b:	68 00 30 00 00       	push   $0x3000
c1002370:	e8 3e 09 00 00       	call   c1002cb3 <vmm_malloc>
c1002375:	83 c4 10             	add    $0x10,%esp
c1002378:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100237b:	83 ec 08             	sub    $0x8,%esp
c100237e:	ff 75 f4             	pushl  -0xc(%ebp)
c1002381:	68 28 b5 00 c1       	push   $0xc100b528
c1002386:	e8 27 34 00 00       	call   c10057b2 <printk>
c100238b:	83 c4 10             	add    $0x10,%esp
c100238e:	83 ec 08             	sub    $0x8,%esp
c1002391:	ff 75 f0             	pushl  -0x10(%ebp)
c1002394:	68 3e b5 00 c1       	push   $0xc100b53e
c1002399:	e8 14 34 00 00       	call   c10057b2 <printk>
c100239e:	83 c4 10             	add    $0x10,%esp
c10023a1:	83 ec 08             	sub    $0x8,%esp
c10023a4:	ff 75 ec             	pushl  -0x14(%ebp)
c10023a7:	68 b6 b5 00 c1       	push   $0xc100b5b6
c10023ac:	e8 01 34 00 00       	call   c10057b2 <printk>
c10023b1:	83 c4 10             	add    $0x10,%esp
c10023b4:	83 ec 0c             	sub    $0xc,%esp
c10023b7:	68 d1 b5 00 c1       	push   $0xc100b5d1
c10023bc:	e8 f1 33 00 00       	call   c10057b2 <printk>
c10023c1:	83 c4 10             	add    $0x10,%esp
c10023c4:	83 ec 08             	sub    $0x8,%esp
c10023c7:	6a 00                	push   $0x0
c10023c9:	68 00 01 00 00       	push   $0x100
c10023ce:	e8 e0 08 00 00       	call   c1002cb3 <vmm_malloc>
c10023d3:	83 c4 10             	add    $0x10,%esp
c10023d6:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10023d9:	83 ec 08             	sub    $0x8,%esp
c10023dc:	6a 01                	push   $0x1
c10023de:	68 00 20 00 00       	push   $0x2000
c10023e3:	e8 cb 08 00 00       	call   c1002cb3 <vmm_malloc>
c10023e8:	83 c4 10             	add    $0x10,%esp
c10023eb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10023ee:	83 ec 08             	sub    $0x8,%esp
c10023f1:	6a 02                	push   $0x2
c10023f3:	68 00 30 00 00       	push   $0x3000
c10023f8:	e8 b6 08 00 00       	call   c1002cb3 <vmm_malloc>
c10023fd:	83 c4 10             	add    $0x10,%esp
c1002400:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002403:	83 ec 08             	sub    $0x8,%esp
c1002406:	ff 75 e8             	pushl  -0x18(%ebp)
c1002409:	68 28 b5 00 c1       	push   $0xc100b528
c100240e:	e8 9f 33 00 00       	call   c10057b2 <printk>
c1002413:	83 c4 10             	add    $0x10,%esp
c1002416:	83 ec 08             	sub    $0x8,%esp
c1002419:	ff 75 e4             	pushl  -0x1c(%ebp)
c100241c:	68 3e b5 00 c1       	push   $0xc100b53e
c1002421:	e8 8c 33 00 00       	call   c10057b2 <printk>
c1002426:	83 c4 10             	add    $0x10,%esp
c1002429:	83 ec 08             	sub    $0x8,%esp
c100242c:	ff 75 e0             	pushl  -0x20(%ebp)
c100242f:	68 b6 b5 00 c1       	push   $0xc100b5b6
c1002434:	e8 79 33 00 00       	call   c10057b2 <printk>
c1002439:	83 c4 10             	add    $0x10,%esp
c100243c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100243f:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1002442:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002445:	c6 00 ff             	movb   $0xff,(%eax)
c1002448:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100244b:	0f b6 00             	movzbl (%eax),%eax
c100244e:	0f b6 c0             	movzbl %al,%eax
c1002451:	83 ec 08             	sub    $0x8,%esp
c1002454:	50                   	push   %eax
c1002455:	68 e8 b5 00 c1       	push   $0xc100b5e8
c100245a:	e8 53 33 00 00       	call   c10057b2 <printk>
c100245f:	83 c4 10             	add    $0x10,%esp
c1002462:	83 ec 08             	sub    $0x8,%esp
c1002465:	68 00 01 00 00       	push   $0x100
c100246a:	ff 75 f4             	pushl  -0xc(%ebp)
c100246d:	e8 66 09 00 00       	call   c1002dd8 <vmm_free>
c1002472:	83 c4 10             	add    $0x10,%esp
c1002475:	83 ec 08             	sub    $0x8,%esp
c1002478:	68 00 20 00 00       	push   $0x2000
c100247d:	ff 75 f0             	pushl  -0x10(%ebp)
c1002480:	e8 53 09 00 00       	call   c1002dd8 <vmm_free>
c1002485:	83 c4 10             	add    $0x10,%esp
c1002488:	83 ec 08             	sub    $0x8,%esp
c100248b:	68 00 30 00 00       	push   $0x3000
c1002490:	ff 75 ec             	pushl  -0x14(%ebp)
c1002493:	e8 40 09 00 00       	call   c1002dd8 <vmm_free>
c1002498:	83 c4 10             	add    $0x10,%esp
c100249b:	83 ec 08             	sub    $0x8,%esp
c100249e:	6a 00                	push   $0x0
c10024a0:	68 00 01 00 00       	push   $0x100
c10024a5:	e8 09 08 00 00       	call   c1002cb3 <vmm_malloc>
c10024aa:	83 c4 10             	add    $0x10,%esp
c10024ad:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10024b0:	83 ec 08             	sub    $0x8,%esp
c10024b3:	6a 01                	push   $0x1
c10024b5:	68 00 20 00 00       	push   $0x2000
c10024ba:	e8 f4 07 00 00       	call   c1002cb3 <vmm_malloc>
c10024bf:	83 c4 10             	add    $0x10,%esp
c10024c2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10024c5:	83 ec 08             	sub    $0x8,%esp
c10024c8:	6a 02                	push   $0x2
c10024ca:	68 00 30 00 00       	push   $0x3000
c10024cf:	e8 df 07 00 00       	call   c1002cb3 <vmm_malloc>
c10024d4:	83 c4 10             	add    $0x10,%esp
c10024d7:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10024da:	83 ec 08             	sub    $0x8,%esp
c10024dd:	ff 75 d8             	pushl  -0x28(%ebp)
c10024e0:	68 28 b5 00 c1       	push   $0xc100b528
c10024e5:	e8 c8 32 00 00       	call   c10057b2 <printk>
c10024ea:	83 c4 10             	add    $0x10,%esp
c10024ed:	83 ec 08             	sub    $0x8,%esp
c10024f0:	ff 75 d4             	pushl  -0x2c(%ebp)
c10024f3:	68 3e b5 00 c1       	push   $0xc100b53e
c10024f8:	e8 b5 32 00 00       	call   c10057b2 <printk>
c10024fd:	83 c4 10             	add    $0x10,%esp
c1002500:	83 ec 08             	sub    $0x8,%esp
c1002503:	ff 75 d0             	pushl  -0x30(%ebp)
c1002506:	68 b6 b5 00 c1       	push   $0xc100b5b6
c100250b:	e8 a2 32 00 00       	call   c10057b2 <printk>
c1002510:	83 c4 10             	add    $0x10,%esp
c1002513:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1002516:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1002519:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100251c:	c6 00 ff             	movb   $0xff,(%eax)
c100251f:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1002522:	0f b6 00             	movzbl (%eax),%eax
c1002525:	0f b6 c0             	movzbl %al,%eax
c1002528:	83 ec 08             	sub    $0x8,%esp
c100252b:	50                   	push   %eax
c100252c:	68 f4 b5 00 c1       	push   $0xc100b5f4
c1002531:	e8 7c 32 00 00       	call   c10057b2 <printk>
c1002536:	83 c4 10             	add    $0x10,%esp
c1002539:	90                   	nop
c100253a:	c9                   	leave  
c100253b:	c3                   	ret    

c100253c <test_schedule>:
c100253c:	55                   	push   %ebp
c100253d:	89 e5                	mov    %esp,%ebp
c100253f:	83 ec 08             	sub    $0x8,%esp
c1002542:	e8 25 e8 ff ff       	call   c1000d6c <intr_enable>
c1002547:	eb fe                	jmp    c1002547 <test_schedule+0xb>

c1002549 <print_task1>:
c1002549:	55                   	push   %ebp
c100254a:	89 e5                	mov    %esp,%ebp
c100254c:	83 ec 18             	sub    $0x18,%esp
c100254f:	8b 45 08             	mov    0x8(%ebp),%eax
c1002552:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002555:	83 ec 08             	sub    $0x8,%esp
c1002558:	ff 75 f4             	pushl  -0xc(%ebp)
c100255b:	68 00 b6 00 c1       	push   $0xc100b600
c1002560:	e8 4d 32 00 00       	call   c10057b2 <printk>
c1002565:	83 c4 10             	add    $0x10,%esp
c1002568:	83 ec 0c             	sub    $0xc,%esp
c100256b:	68 40 42 0f 00       	push   $0xf4240
c1002570:	e8 36 00 00 00       	call   c10025ab <delay>
c1002575:	83 c4 10             	add    $0x10,%esp
c1002578:	eb db                	jmp    c1002555 <print_task1+0xc>

c100257a <print_task2>:
c100257a:	55                   	push   %ebp
c100257b:	89 e5                	mov    %esp,%ebp
c100257d:	83 ec 18             	sub    $0x18,%esp
c1002580:	8b 45 08             	mov    0x8(%ebp),%eax
c1002583:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002586:	83 ec 08             	sub    $0x8,%esp
c1002589:	ff 75 f4             	pushl  -0xc(%ebp)
c100258c:	68 00 b6 00 c1       	push   $0xc100b600
c1002591:	e8 1c 32 00 00       	call   c10057b2 <printk>
c1002596:	83 c4 10             	add    $0x10,%esp
c1002599:	83 ec 0c             	sub    $0xc,%esp
c100259c:	68 40 42 0f 00       	push   $0xf4240
c10025a1:	e8 05 00 00 00       	call   c10025ab <delay>
c10025a6:	83 c4 10             	add    $0x10,%esp
c10025a9:	eb db                	jmp    c1002586 <print_task2+0xc>

c10025ab <delay>:
c10025ab:	55                   	push   %ebp
c10025ac:	89 e5                	mov    %esp,%ebp
c10025ae:	83 ec 10             	sub    $0x10,%esp
c10025b1:	8b 45 08             	mov    0x8(%ebp),%eax
c10025b4:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10025b7:	eb 17                	jmp    c10025d0 <delay+0x25>
c10025b9:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c10025c0:	eb 04                	jmp    c10025c6 <delay+0x1b>
c10025c2:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c10025c6:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c10025ca:	75 f6                	jne    c10025c2 <delay+0x17>
c10025cc:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c10025d0:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c10025d4:	75 e3                	jne    c10025b9 <delay+0xe>
c10025d6:	90                   	nop
c10025d7:	90                   	nop
c10025d8:	c9                   	leave  
c10025d9:	c3                   	ret    

c10025da <test_user>:
c10025da:	55                   	push   %ebp
c10025db:	89 e5                	mov    %esp,%ebp
c10025dd:	83 ec 08             	sub    $0x8,%esp
c10025e0:	83 ec 0c             	sub    $0xc,%esp
c10025e3:	68 52 00 00 40       	push   $0x40000052
c10025e8:	e8 a6 20 00 00       	call   c1004693 <user_task_init>
c10025ed:	83 c4 10             	add    $0x10,%esp
c10025f0:	90                   	nop
c10025f1:	c9                   	leave  
c10025f2:	c3                   	ret    

c10025f3 <pmm_init>:
c10025f3:	55                   	push   %ebp
c10025f4:	89 e5                	mov    %esp,%ebp
c10025f6:	83 ec 38             	sub    $0x38,%esp
c10025f9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002600:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002607:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100260e:	c7 45 d4 04 80 00 c0 	movl   $0xc0008004,-0x2c(%ebp)
c1002615:	b8 00 80 00 c0       	mov    $0xc0008000,%eax
c100261a:	8b 00                	mov    (%eax),%eax
c100261c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100261f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002626:	e9 98 02 00 00       	jmp    c10028c3 <pmm_init+0x2d0>
c100262b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100262e:	89 d0                	mov    %edx,%eax
c1002630:	c1 e0 02             	shl    $0x2,%eax
c1002633:	01 d0                	add    %edx,%eax
c1002635:	c1 e0 02             	shl    $0x2,%eax
c1002638:	89 c2                	mov    %eax,%edx
c100263a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100263d:	01 d0                	add    %edx,%eax
c100263f:	8b 50 04             	mov    0x4(%eax),%edx
c1002642:	8b 00                	mov    (%eax),%eax
c1002644:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002647:	e9 40 02 00 00       	jmp    c100288c <pmm_init+0x299>
c100264c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100264f:	85 c0                	test   %eax,%eax
c1002651:	0f 88 2e 02 00 00    	js     c1002885 <pmm_init+0x292>
c1002657:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100265a:	89 d0                	mov    %edx,%eax
c100265c:	c1 e0 02             	shl    $0x2,%eax
c100265f:	01 d0                	add    %edx,%eax
c1002661:	c1 e0 02             	shl    $0x2,%eax
c1002664:	89 c2                	mov    %eax,%edx
c1002666:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1002669:	01 d0                	add    %edx,%eax
c100266b:	8b 40 10             	mov    0x10(%eax),%eax
c100266e:	83 f8 01             	cmp    $0x1,%eax
c1002671:	75 59                	jne    c10026cc <pmm_init+0xd9>
c1002673:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002676:	c1 e8 0c             	shr    $0xc,%eax
c1002679:	89 c2                	mov    %eax,%edx
c100267b:	89 d0                	mov    %edx,%eax
c100267d:	01 c0                	add    %eax,%eax
c100267f:	01 d0                	add    %edx,%eax
c1002681:	c1 e0 02             	shl    $0x2,%eax
c1002684:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002689:	c6 00 00             	movb   $0x0,(%eax)
c100268c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100268f:	c1 e8 0c             	shr    $0xc,%eax
c1002692:	89 c2                	mov    %eax,%edx
c1002694:	89 d0                	mov    %edx,%eax
c1002696:	01 c0                	add    %eax,%eax
c1002698:	01 d0                	add    %edx,%eax
c100269a:	c1 e0 02             	shl    $0x2,%eax
c100269d:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c10026a2:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c10026a8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026ab:	c1 e8 0c             	shr    $0xc,%eax
c10026ae:	89 c2                	mov    %eax,%edx
c10026b0:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026b3:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10026b8:	89 c1                	mov    %eax,%ecx
c10026ba:	89 d0                	mov    %edx,%eax
c10026bc:	01 c0                	add    %eax,%eax
c10026be:	01 d0                	add    %edx,%eax
c10026c0:	c1 e0 02             	shl    $0x2,%eax
c10026c3:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c10026c8:	89 08                	mov    %ecx,(%eax)
c10026ca:	eb 57                	jmp    c1002723 <pmm_init+0x130>
c10026cc:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026cf:	c1 e8 0c             	shr    $0xc,%eax
c10026d2:	89 c2                	mov    %eax,%edx
c10026d4:	89 d0                	mov    %edx,%eax
c10026d6:	01 c0                	add    %eax,%eax
c10026d8:	01 d0                	add    %edx,%eax
c10026da:	c1 e0 02             	shl    $0x2,%eax
c10026dd:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c10026e2:	c6 00 08             	movb   $0x8,(%eax)
c10026e5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026e8:	c1 e8 0c             	shr    $0xc,%eax
c10026eb:	89 c2                	mov    %eax,%edx
c10026ed:	89 d0                	mov    %edx,%eax
c10026ef:	01 c0                	add    %eax,%eax
c10026f1:	01 d0                	add    %edx,%eax
c10026f3:	c1 e0 02             	shl    $0x2,%eax
c10026f6:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c10026fb:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1002701:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002704:	c1 e8 0c             	shr    $0xc,%eax
c1002707:	89 c2                	mov    %eax,%edx
c1002709:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100270c:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002711:	89 c1                	mov    %eax,%ecx
c1002713:	89 d0                	mov    %edx,%eax
c1002715:	01 c0                	add    %eax,%eax
c1002717:	01 d0                	add    %edx,%eax
c1002719:	c1 e0 02             	shl    $0x2,%eax
c100271c:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c1002721:	89 08                	mov    %ecx,(%eax)
c1002723:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002726:	c1 e8 0c             	shr    $0xc,%eax
c1002729:	89 c2                	mov    %eax,%edx
c100272b:	89 d0                	mov    %edx,%eax
c100272d:	01 c0                	add    %eax,%eax
c100272f:	01 d0                	add    %edx,%eax
c1002731:	c1 e0 02             	shl    $0x2,%eax
c1002734:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c1002739:	8b 00                	mov    (%eax),%eax
c100273b:	3d ff ff ff 00       	cmp    $0xffffff,%eax
c1002740:	77 62                	ja     c10027a4 <pmm_init+0x1b1>
c1002742:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002745:	c1 e8 0c             	shr    $0xc,%eax
c1002748:	89 c1                	mov    %eax,%ecx
c100274a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100274d:	c1 e8 0c             	shr    $0xc,%eax
c1002750:	89 c2                	mov    %eax,%edx
c1002752:	89 c8                	mov    %ecx,%eax
c1002754:	01 c0                	add    %eax,%eax
c1002756:	01 c8                	add    %ecx,%eax
c1002758:	c1 e0 02             	shl    $0x2,%eax
c100275b:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002760:	0f b6 08             	movzbl (%eax),%ecx
c1002763:	89 d0                	mov    %edx,%eax
c1002765:	01 c0                	add    %eax,%eax
c1002767:	01 d0                	add    %edx,%eax
c1002769:	c1 e0 02             	shl    $0x2,%eax
c100276c:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002771:	88 08                	mov    %cl,(%eax)
c1002773:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002776:	c1 e8 0c             	shr    $0xc,%eax
c1002779:	89 c2                	mov    %eax,%edx
c100277b:	89 d0                	mov    %edx,%eax
c100277d:	01 c0                	add    %eax,%eax
c100277f:	01 d0                	add    %edx,%eax
c1002781:	c1 e0 02             	shl    $0x2,%eax
c1002784:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c1002789:	8b 00                	mov    (%eax),%eax
c100278b:	83 f8 ff             	cmp    $0xffffffff,%eax
c100278e:	75 07                	jne    c1002797 <pmm_init+0x1a4>
c1002790:	b8 01 00 00 00       	mov    $0x1,%eax
c1002795:	eb 05                	jmp    c100279c <pmm_init+0x1a9>
c1002797:	b8 00 00 00 00       	mov    $0x0,%eax
c100279c:	01 45 f4             	add    %eax,-0xc(%ebp)
c100279f:	e9 e1 00 00 00       	jmp    c1002885 <pmm_init+0x292>
c10027a4:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10027a7:	c1 e8 0c             	shr    $0xc,%eax
c10027aa:	89 c2                	mov    %eax,%edx
c10027ac:	89 d0                	mov    %edx,%eax
c10027ae:	01 c0                	add    %eax,%eax
c10027b0:	01 d0                	add    %edx,%eax
c10027b2:	c1 e0 02             	shl    $0x2,%eax
c10027b5:	05 e8 1c 01 c1       	add    $0xc1011ce8,%eax
c10027ba:	8b 00                	mov    (%eax),%eax
c10027bc:	3d ff ff ff 37       	cmp    $0x37ffffff,%eax
c10027c1:	77 62                	ja     c1002825 <pmm_init+0x232>
c10027c3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10027c6:	c1 e8 0c             	shr    $0xc,%eax
c10027c9:	89 c2                	mov    %eax,%edx
c10027cb:	89 d0                	mov    %edx,%eax
c10027cd:	01 c0                	add    %eax,%eax
c10027cf:	01 d0                	add    %edx,%eax
c10027d1:	c1 e0 02             	shl    $0x2,%eax
c10027d4:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c10027d9:	0f b6 08             	movzbl (%eax),%ecx
c10027dc:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10027df:	c1 e8 0c             	shr    $0xc,%eax
c10027e2:	89 c2                	mov    %eax,%edx
c10027e4:	83 c9 10             	or     $0x10,%ecx
c10027e7:	89 d0                	mov    %edx,%eax
c10027e9:	01 c0                	add    %eax,%eax
c10027eb:	01 d0                	add    %edx,%eax
c10027ed:	c1 e0 02             	shl    $0x2,%eax
c10027f0:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c10027f5:	88 08                	mov    %cl,(%eax)
c10027f7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10027fa:	c1 e8 0c             	shr    $0xc,%eax
c10027fd:	89 c2                	mov    %eax,%edx
c10027ff:	89 d0                	mov    %edx,%eax
c1002801:	01 c0                	add    %eax,%eax
c1002803:	01 d0                	add    %edx,%eax
c1002805:	c1 e0 02             	shl    $0x2,%eax
c1002808:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c100280d:	8b 00                	mov    (%eax),%eax
c100280f:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002812:	75 07                	jne    c100281b <pmm_init+0x228>
c1002814:	b8 01 00 00 00       	mov    $0x1,%eax
c1002819:	eb 05                	jmp    c1002820 <pmm_init+0x22d>
c100281b:	b8 00 00 00 00       	mov    $0x0,%eax
c1002820:	01 45 f0             	add    %eax,-0x10(%ebp)
c1002823:	eb 60                	jmp    c1002885 <pmm_init+0x292>
c1002825:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002828:	c1 e8 0c             	shr    $0xc,%eax
c100282b:	89 c2                	mov    %eax,%edx
c100282d:	89 d0                	mov    %edx,%eax
c100282f:	01 c0                	add    %eax,%eax
c1002831:	01 d0                	add    %edx,%eax
c1002833:	c1 e0 02             	shl    $0x2,%eax
c1002836:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c100283b:	0f b6 08             	movzbl (%eax),%ecx
c100283e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002841:	c1 e8 0c             	shr    $0xc,%eax
c1002844:	89 c2                	mov    %eax,%edx
c1002846:	83 c9 20             	or     $0x20,%ecx
c1002849:	89 d0                	mov    %edx,%eax
c100284b:	01 c0                	add    %eax,%eax
c100284d:	01 d0                	add    %edx,%eax
c100284f:	c1 e0 02             	shl    $0x2,%eax
c1002852:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002857:	88 08                	mov    %cl,(%eax)
c1002859:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100285c:	c1 e8 0c             	shr    $0xc,%eax
c100285f:	89 c2                	mov    %eax,%edx
c1002861:	89 d0                	mov    %edx,%eax
c1002863:	01 c0                	add    %eax,%eax
c1002865:	01 d0                	add    %edx,%eax
c1002867:	c1 e0 02             	shl    $0x2,%eax
c100286a:	05 e4 1c 01 c1       	add    $0xc1011ce4,%eax
c100286f:	8b 00                	mov    (%eax),%eax
c1002871:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002874:	75 07                	jne    c100287d <pmm_init+0x28a>
c1002876:	b8 01 00 00 00       	mov    $0x1,%eax
c100287b:	eb 05                	jmp    c1002882 <pmm_init+0x28f>
c100287d:	b8 00 00 00 00       	mov    $0x0,%eax
c1002882:	01 45 ec             	add    %eax,-0x14(%ebp)
c1002885:	81 45 e0 00 10 00 00 	addl   $0x1000,-0x20(%ebp)
c100288c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100288f:	89 d0                	mov    %edx,%eax
c1002891:	c1 e0 02             	shl    $0x2,%eax
c1002894:	01 d0                	add    %edx,%eax
c1002896:	c1 e0 02             	shl    $0x2,%eax
c1002899:	89 c2                	mov    %eax,%edx
c100289b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100289e:	01 d0                	add    %edx,%eax
c10028a0:	8b 50 0c             	mov    0xc(%eax),%edx
c10028a3:	8b 40 08             	mov    0x8(%eax),%eax
c10028a6:	89 c2                	mov    %eax,%edx
c10028a8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10028ab:	01 d0                	add    %edx,%eax
c10028ad:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10028b2:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c10028b5:	0f 82 91 fd ff ff    	jb     c100264c <pmm_init+0x59>
c10028bb:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c10028bf:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c10028c3:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c10028c7:	0f 85 5e fd ff ff    	jne    c100262b <pmm_init+0x38>
c10028cd:	c7 05 f0 1c 61 c1 00 	movl   $0x1000,0xc1611cf0
c10028d4:	10 00 00 
c10028d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028da:	a3 f4 1c 61 c1       	mov    %eax,0xc1611cf4
c10028df:	c7 05 ec 1c 61 c1 e0 	movl   $0xc1011ce0,0xc1611cec
c10028e6:	1c 01 c1 
c10028e9:	c7 05 e4 1c 61 c1 00 	movl   $0x37000,0xc1611ce4
c10028f0:	70 03 00 
c10028f3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10028f6:	a3 e8 1c 61 c1       	mov    %eax,0xc1611ce8
c10028fb:	8b 15 f0 1c 61 c1    	mov    0xc1611cf0,%edx
c1002901:	89 d0                	mov    %edx,%eax
c1002903:	01 c0                	add    %eax,%eax
c1002905:	01 d0                	add    %edx,%eax
c1002907:	c1 e0 02             	shl    $0x2,%eax
c100290a:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c100290f:	a3 e0 1c 61 c1       	mov    %eax,0xc1611ce0
c1002914:	c7 05 c4 1c 01 c1 00 	movl   $0x48000,0xc1011cc4
c100291b:	80 04 00 
c100291e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002921:	a3 c8 1c 01 c1       	mov    %eax,0xc1011cc8
c1002926:	8b 15 e4 1c 61 c1    	mov    0xc1611ce4,%edx
c100292c:	a1 f0 1c 61 c1       	mov    0xc1611cf0,%eax
c1002931:	01 c2                	add    %eax,%edx
c1002933:	89 d0                	mov    %edx,%eax
c1002935:	01 c0                	add    %eax,%eax
c1002937:	01 d0                	add    %edx,%eax
c1002939:	c1 e0 02             	shl    $0x2,%eax
c100293c:	05 e0 1c 01 c1       	add    $0xc1011ce0,%eax
c1002941:	a3 c0 1c 01 c1       	mov    %eax,0xc1011cc0
c1002946:	c7 45 d0 00 00 00 40 	movl   $0x40000000,-0x30(%ebp)
c100294d:	90                   	nop
c100294e:	c7 45 dc 00 00 00 01 	movl   $0x1000000,-0x24(%ebp)
c1002955:	eb 39                	jmp    c1002990 <pmm_init+0x39d>
c1002957:	8b 0d e0 1c 61 c1    	mov    0xc1611ce0,%ecx
c100295d:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002960:	2d 00 00 00 01       	sub    $0x1000000,%eax
c1002965:	c1 e8 0c             	shr    $0xc,%eax
c1002968:	89 c2                	mov    %eax,%edx
c100296a:	89 d0                	mov    %edx,%eax
c100296c:	01 c0                	add    %eax,%eax
c100296e:	01 d0                	add    %edx,%eax
c1002970:	c1 e0 02             	shl    $0x2,%eax
c1002973:	01 c8                	add    %ecx,%eax
c1002975:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c100297c:	a1 e8 1c 61 c1       	mov    0xc1611ce8,%eax
c1002981:	83 e8 01             	sub    $0x1,%eax
c1002984:	a3 e8 1c 61 c1       	mov    %eax,0xc1611ce8
c1002989:	81 45 dc 00 10 00 00 	addl   $0x1000,-0x24(%ebp)
c1002990:	b8 c0 43 a1 c1       	mov    $0xc1a143c0,%eax
c1002995:	05 ff 0f 00 40       	add    $0x40000fff,%eax
c100299a:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100299f:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c10029a2:	72 b3                	jb     c1002957 <pmm_init+0x364>
c10029a4:	c7 45 d8 00 e0 ff 37 	movl   $0x37ffe000,-0x28(%ebp)
c10029ab:	eb 39                	jmp    c10029e6 <pmm_init+0x3f3>
c10029ad:	8b 0d e0 1c 61 c1    	mov    0xc1611ce0,%ecx
c10029b3:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10029b6:	2d 00 00 00 01       	sub    $0x1000000,%eax
c10029bb:	c1 e8 0c             	shr    $0xc,%eax
c10029be:	89 c2                	mov    %eax,%edx
c10029c0:	89 d0                	mov    %edx,%eax
c10029c2:	01 c0                	add    %eax,%eax
c10029c4:	01 d0                	add    %edx,%eax
c10029c6:	c1 e0 02             	shl    $0x2,%eax
c10029c9:	01 c8                	add    %ecx,%eax
c10029cb:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10029d2:	a1 e8 1c 61 c1       	mov    0xc1611ce8,%eax
c10029d7:	83 e8 01             	sub    $0x1,%eax
c10029da:	a3 e8 1c 61 c1       	mov    %eax,0xc1611ce8
c10029df:	81 45 d8 00 10 00 00 	addl   $0x1000,-0x28(%ebp)
c10029e6:	81 7d d8 ff ff ff 37 	cmpl   $0x37ffffff,-0x28(%ebp)
c10029ed:	76 be                	jbe    c10029ad <pmm_init+0x3ba>
c10029ef:	8b 0d c8 1c 01 c1    	mov    0xc1011cc8,%ecx
c10029f5:	8b 15 e8 1c 61 c1    	mov    0xc1611ce8,%edx
c10029fb:	a1 f4 1c 61 c1       	mov    0xc1611cf4,%eax
c1002a00:	51                   	push   %ecx
c1002a01:	52                   	push   %edx
c1002a02:	50                   	push   %eax
c1002a03:	68 04 b6 00 c1       	push   $0xc100b604
c1002a08:	e8 a5 2d 00 00       	call   c10057b2 <printk>
c1002a0d:	83 c4 10             	add    $0x10,%esp
c1002a10:	90                   	nop
c1002a11:	c9                   	leave  
c1002a12:	c3                   	ret    

c1002a13 <pmm_alloc>:
c1002a13:	55                   	push   %ebp
c1002a14:	89 e5                	mov    %esp,%ebp
c1002a16:	83 ec 24             	sub    $0x24,%esp
c1002a19:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002a1c:	88 45 dc             	mov    %al,-0x24(%ebp)
c1002a1f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002a26:	8b 45 08             	mov    0x8(%ebp),%eax
c1002a29:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002a2e:	c1 e8 0c             	shr    $0xc,%eax
c1002a31:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002a34:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
c1002a38:	75 09                	jne    c1002a43 <pmm_alloc+0x30>
c1002a3a:	c7 45 f0 ec 1c 61 c1 	movl   $0xc1611cec,-0x10(%ebp)
c1002a41:	eb 16                	jmp    c1002a59 <pmm_alloc+0x46>
c1002a43:	80 7d dc 01          	cmpb   $0x1,-0x24(%ebp)
c1002a47:	75 09                	jne    c1002a52 <pmm_alloc+0x3f>
c1002a49:	c7 45 f0 e0 1c 61 c1 	movl   $0xc1611ce0,-0x10(%ebp)
c1002a50:	eb 07                	jmp    c1002a59 <pmm_alloc+0x46>
c1002a52:	c7 45 f0 c0 1c 01 c1 	movl   $0xc1011cc0,-0x10(%ebp)
c1002a59:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1002a60:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002a67:	eb 43                	jmp    c1002aac <pmm_alloc+0x99>
c1002a69:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002a6c:	8b 08                	mov    (%eax),%ecx
c1002a6e:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002a71:	89 d0                	mov    %edx,%eax
c1002a73:	01 c0                	add    %eax,%eax
c1002a75:	01 d0                	add    %edx,%eax
c1002a77:	c1 e0 02             	shl    $0x2,%eax
c1002a7a:	01 c8                	add    %ecx,%eax
c1002a7c:	8b 40 04             	mov    0x4(%eax),%eax
c1002a7f:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002a82:	75 0c                	jne    c1002a90 <pmm_alloc+0x7d>
c1002a84:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002a88:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a8b:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002a8e:	eb 10                	jmp    c1002aa0 <pmm_alloc+0x8d>
c1002a90:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002a93:	83 c0 01             	add    $0x1,%eax
c1002a96:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002a99:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002aa0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002aa3:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002aa6:	74 11                	je     c1002ab9 <pmm_alloc+0xa6>
c1002aa8:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002aac:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002aaf:	8b 40 04             	mov    0x4(%eax),%eax
c1002ab2:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c1002ab5:	72 b2                	jb     c1002a69 <pmm_alloc+0x56>
c1002ab7:	eb 01                	jmp    c1002aba <pmm_alloc+0xa7>
c1002ab9:	90                   	nop
c1002aba:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002abd:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002ac0:	eb 2d                	jmp    c1002aef <pmm_alloc+0xdc>
c1002ac2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002ac5:	8b 08                	mov    (%eax),%ecx
c1002ac7:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1002aca:	89 d0                	mov    %edx,%eax
c1002acc:	01 c0                	add    %eax,%eax
c1002ace:	01 d0                	add    %edx,%eax
c1002ad0:	c1 e0 02             	shl    $0x2,%eax
c1002ad3:	01 c8                	add    %ecx,%eax
c1002ad5:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c1002adc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002adf:	8b 40 08             	mov    0x8(%eax),%eax
c1002ae2:	8d 50 ff             	lea    -0x1(%eax),%edx
c1002ae5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002ae8:	89 50 08             	mov    %edx,0x8(%eax)
c1002aeb:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1002aef:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002af2:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1002af5:	76 cb                	jbe    c1002ac2 <pmm_alloc+0xaf>
c1002af7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002afa:	8b 08                	mov    (%eax),%ecx
c1002afc:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002aff:	89 d0                	mov    %edx,%eax
c1002b01:	01 c0                	add    %eax,%eax
c1002b03:	01 d0                	add    %edx,%eax
c1002b05:	c1 e0 02             	shl    $0x2,%eax
c1002b08:	01 c8                	add    %ecx,%eax
c1002b0a:	8b 40 08             	mov    0x8(%eax),%eax
c1002b0d:	c9                   	leave  
c1002b0e:	c3                   	ret    

c1002b0f <pmm_free>:
c1002b0f:	55                   	push   %ebp
c1002b10:	89 e5                	mov    %esp,%ebp
c1002b12:	83 ec 20             	sub    $0x20,%esp
c1002b15:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002b18:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002b1d:	c1 e8 0c             	shr    $0xc,%eax
c1002b20:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002b23:	81 7d 08 ff ff ff 00 	cmpl   $0xffffff,0x8(%ebp)
c1002b2a:	77 09                	ja     c1002b35 <pmm_free+0x26>
c1002b2c:	c7 45 fc ec 1c 61 c1 	movl   $0xc1611cec,-0x4(%ebp)
c1002b33:	eb 27                	jmp    c1002b5c <pmm_free+0x4d>
c1002b35:	81 7d 08 ff ff ff 37 	cmpl   $0x37ffffff,0x8(%ebp)
c1002b3c:	77 10                	ja     c1002b4e <pmm_free+0x3f>
c1002b3e:	81 6d 08 00 00 00 01 	subl   $0x1000000,0x8(%ebp)
c1002b45:	c7 45 fc e0 1c 61 c1 	movl   $0xc1611ce0,-0x4(%ebp)
c1002b4c:	eb 0e                	jmp    c1002b5c <pmm_free+0x4d>
c1002b4e:	81 6d 08 00 00 00 38 	subl   $0x38000000,0x8(%ebp)
c1002b55:	c7 45 fc c0 1c 01 c1 	movl   $0xc1011cc0,-0x4(%ebp)
c1002b5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1002b5f:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002b64:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002b67:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002b6a:	c1 e8 0c             	shr    $0xc,%eax
c1002b6d:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002b70:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002b77:	eb 31                	jmp    c1002baa <pmm_free+0x9b>
c1002b79:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002b7c:	8b 08                	mov    (%eax),%ecx
c1002b7e:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1002b81:	89 d0                	mov    %edx,%eax
c1002b83:	01 c0                	add    %eax,%eax
c1002b85:	01 d0                	add    %edx,%eax
c1002b87:	c1 e0 02             	shl    $0x2,%eax
c1002b8a:	01 c8                	add    %ecx,%eax
c1002b8c:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
c1002b93:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002b96:	8b 40 08             	mov    0x8(%eax),%eax
c1002b99:	8d 50 01             	lea    0x1(%eax),%edx
c1002b9c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002b9f:	89 50 08             	mov    %edx,0x8(%eax)
c1002ba2:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1002ba6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002baa:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002bad:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002bb0:	72 c7                	jb     c1002b79 <pmm_free+0x6a>
c1002bb2:	90                   	nop
c1002bb3:	90                   	nop
c1002bb4:	c9                   	leave  
c1002bb5:	c3                   	ret    

c1002bb6 <hash32>:
c1002bb6:	55                   	push   %ebp
c1002bb7:	89 e5                	mov    %esp,%ebp
c1002bb9:	83 ec 10             	sub    $0x10,%esp
c1002bbc:	8b 45 08             	mov    0x8(%ebp),%eax
c1002bbf:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1002bc5:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002bc8:	b8 20 00 00 00       	mov    $0x20,%eax
c1002bcd:	2b 45 0c             	sub    0xc(%ebp),%eax
c1002bd0:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002bd3:	89 c1                	mov    %eax,%ecx
c1002bd5:	d3 ea                	shr    %cl,%edx
c1002bd7:	89 d0                	mov    %edx,%eax
c1002bd9:	c9                   	leave  
c1002bda:	c3                   	ret    

c1002bdb <setup_vpt>:
c1002bdb:	55                   	push   %ebp
c1002bdc:	89 e5                	mov    %esp,%ebp
c1002bde:	83 ec 28             	sub    $0x28,%esp
c1002be1:	c7 45 e0 e0 00 00 00 	movl   $0xe0,-0x20(%ebp)
c1002be8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002bef:	eb 27                	jmp    c1002c18 <setup_vpt+0x3d>
c1002bf1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002bf4:	c1 e0 0c             	shl    $0xc,%eax
c1002bf7:	05 00 40 93 c1       	add    $0xc1934000,%eax
c1002bfc:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002c02:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002c05:	05 00 03 00 00       	add    $0x300,%eax
c1002c0a:	83 ca 03             	or     $0x3,%edx
c1002c0d:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002c14:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002c18:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002c1b:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002c1e:	72 d1                	jb     c1002bf1 <setup_vpt+0x16>
c1002c20:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002c27:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002c2e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002c35:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002c3c:	eb 3d                	jmp    c1002c7b <setup_vpt+0xa0>
c1002c3e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002c41:	8d 50 01             	lea    0x1(%eax),%edx
c1002c44:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1002c47:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1002c4a:	83 ca 03             	or     $0x3,%edx
c1002c4d:	8b 4d ec             	mov    -0x14(%ebp),%ecx
c1002c50:	c1 e1 0a             	shl    $0xa,%ecx
c1002c53:	01 c8                	add    %ecx,%eax
c1002c55:	89 14 85 00 40 93 c1 	mov    %edx,-0x3e6cc000(,%eax,4)
c1002c5c:	81 7d e8 00 04 00 00 	cmpl   $0x400,-0x18(%ebp)
c1002c63:	75 0b                	jne    c1002c70 <setup_vpt+0x95>
c1002c65:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002c69:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002c70:	81 45 f0 00 10 00 00 	addl   $0x1000,-0x10(%ebp)
c1002c77:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1002c7b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002c7e:	c1 e0 0a             	shl    $0xa,%eax
c1002c81:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1002c84:	72 b8                	jb     c1002c3e <setup_vpt+0x63>
c1002c86:	b8 80 21 00 40       	mov    $0x40002180,%eax
c1002c8b:	68 00 00 00 40       	push   $0x40000000
c1002c90:	50                   	push   %eax
c1002c91:	68 00 00 00 40       	push   $0x40000000
c1002c96:	68 00 20 61 c1       	push   $0xc1612000
c1002c9b:	e8 30 02 00 00       	call   c1002ed0 <vmm_map>
c1002ca0:	83 c4 10             	add    $0x10,%esp
c1002ca3:	b8 00 20 61 c1       	mov    $0xc1612000,%eax
c1002ca8:	05 00 00 00 40       	add    $0x40000000,%eax
c1002cad:	0f 22 d8             	mov    %eax,%cr3
c1002cb0:	90                   	nop
c1002cb1:	c9                   	leave  
c1002cb2:	c3                   	ret    

c1002cb3 <vmm_malloc>:
c1002cb3:	55                   	push   %ebp
c1002cb4:	89 e5                	mov    %esp,%ebp
c1002cb6:	53                   	push   %ebx
c1002cb7:	83 ec 34             	sub    $0x34,%esp
c1002cba:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002cbd:	88 45 d4             	mov    %al,-0x2c(%ebp)
c1002cc0:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
c1002cc4:	83 ec 08             	sub    $0x8,%esp
c1002cc7:	50                   	push   %eax
c1002cc8:	ff 75 08             	pushl  0x8(%ebp)
c1002ccb:	e8 43 fd ff ff       	call   c1002a13 <pmm_alloc>
c1002cd0:	83 c4 10             	add    $0x10,%esp
c1002cd3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002cd6:	8b 45 08             	mov    0x8(%ebp),%eax
c1002cd9:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002cde:	c1 e8 0c             	shr    $0xc,%eax
c1002ce1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002ce4:	80 7d d4 02          	cmpb   $0x2,-0x2c(%ebp)
c1002ce8:	0f 85 db 00 00 00    	jne    c1002dc9 <vmm_malloc+0x116>
c1002cee:	a1 14 db 00 c1       	mov    0xc100db14,%eax
c1002cf3:	a3 00 30 93 c1       	mov    %eax,0xc1933000
c1002cf8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002cff:	eb 5d                	jmp    c1002d5e <vmm_malloc+0xab>
c1002d01:	8b 15 14 db 00 c1    	mov    0xc100db14,%edx
c1002d07:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002d0c:	29 c2                	sub    %eax,%edx
c1002d0e:	89 d0                	mov    %edx,%eax
c1002d10:	c1 e8 16             	shr    $0x16,%eax
c1002d13:	89 c3                	mov    %eax,%ebx
c1002d15:	8b 15 14 db 00 c1    	mov    0xc100db14,%edx
c1002d1b:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002d20:	29 c2                	sub    %eax,%edx
c1002d22:	89 d0                	mov    %edx,%eax
c1002d24:	c1 e8 0c             	shr    $0xc,%eax
c1002d27:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002d2c:	89 c1                	mov    %eax,%ecx
c1002d2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002d31:	83 c8 07             	or     $0x7,%eax
c1002d34:	89 c2                	mov    %eax,%edx
c1002d36:	89 d8                	mov    %ebx,%eax
c1002d38:	c1 e0 0a             	shl    $0xa,%eax
c1002d3b:	01 c8                	add    %ecx,%eax
c1002d3d:	89 14 85 00 30 91 c1 	mov    %edx,-0x3e6ed000(,%eax,4)
c1002d44:	a1 14 db 00 c1       	mov    0xc100db14,%eax
c1002d49:	05 00 10 00 00       	add    $0x1000,%eax
c1002d4e:	a3 14 db 00 c1       	mov    %eax,0xc100db14
c1002d53:	81 45 f4 00 10 00 00 	addl   $0x1000,-0xc(%ebp)
c1002d5a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002d5e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002d61:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1002d64:	72 9b                	jb     c1002d01 <vmm_malloc+0x4e>
c1002d66:	8b 15 14 db 00 c1    	mov    0xc100db14,%edx
c1002d6c:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002d71:	29 c2                	sub    %eax,%edx
c1002d73:	89 d0                	mov    %edx,%eax
c1002d75:	05 ff ff 3f 00       	add    $0x3fffff,%eax
c1002d7a:	c1 e8 16             	shr    $0x16,%eax
c1002d7d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002d80:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002d87:	eb 2e                	jmp    c1002db7 <vmm_malloc+0x104>
c1002d89:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d8c:	c1 e0 0c             	shl    $0xc,%eax
c1002d8f:	05 00 30 91 c1       	add    $0xc1913000,%eax
c1002d94:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002d9a:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002d9f:	c1 e8 16             	shr    $0x16,%eax
c1002da2:	89 c1                	mov    %eax,%ecx
c1002da4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002da7:	01 c8                	add    %ecx,%eax
c1002da9:	83 ca 07             	or     $0x7,%edx
c1002dac:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002db3:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002db7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002dba:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002dbd:	72 ca                	jb     c1002d89 <vmm_malloc+0xd6>
c1002dbf:	a1 00 30 93 c1       	mov    0xc1933000,%eax
c1002dc4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002dc7:	eb 07                	jmp    c1002dd0 <vmm_malloc+0x11d>
c1002dc9:	81 6d f4 00 00 00 40 	subl   $0x40000000,-0xc(%ebp)
c1002dd0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002dd3:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002dd6:	c9                   	leave  
c1002dd7:	c3                   	ret    

c1002dd8 <vmm_free>:
c1002dd8:	55                   	push   %ebp
c1002dd9:	89 e5                	mov    %esp,%ebp
c1002ddb:	53                   	push   %ebx
c1002ddc:	83 ec 14             	sub    $0x14,%esp
c1002ddf:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002de2:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002de7:	c1 e8 0c             	shr    $0xc,%eax
c1002dea:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002ded:	8b 45 08             	mov    0x8(%ebp),%eax
c1002df0:	05 00 00 00 40       	add    $0x40000000,%eax
c1002df5:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002df8:	81 7d ec ff ff ff 37 	cmpl   $0x37ffffff,-0x14(%ebp)
c1002dff:	0f 86 ae 00 00 00    	jbe    c1002eb3 <vmm_free+0xdb>
c1002e05:	8b 45 08             	mov    0x8(%ebp),%eax
c1002e08:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002e0d:	89 c2                	mov    %eax,%edx
c1002e0f:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002e14:	29 c2                	sub    %eax,%edx
c1002e16:	89 d0                	mov    %edx,%eax
c1002e18:	c1 e8 16             	shr    $0x16,%eax
c1002e1b:	89 c2                	mov    %eax,%edx
c1002e1d:	8b 45 08             	mov    0x8(%ebp),%eax
c1002e20:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002e25:	89 c1                	mov    %eax,%ecx
c1002e27:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002e2c:	29 c1                	sub    %eax,%ecx
c1002e2e:	89 c8                	mov    %ecx,%eax
c1002e30:	c1 e8 0c             	shr    $0xc,%eax
c1002e33:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002e38:	c1 e2 0a             	shl    $0xa,%edx
c1002e3b:	01 d0                	add    %edx,%eax
c1002e3d:	8b 04 85 00 30 91 c1 	mov    -0x3e6ed000(,%eax,4),%eax
c1002e44:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002e49:	83 ec 08             	sub    $0x8,%esp
c1002e4c:	ff 75 0c             	pushl  0xc(%ebp)
c1002e4f:	50                   	push   %eax
c1002e50:	e8 ba fc ff ff       	call   c1002b0f <pmm_free>
c1002e55:	83 c4 10             	add    $0x10,%esp
c1002e58:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002e5f:	eb 48                	jmp    c1002ea9 <vmm_free+0xd1>
c1002e61:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002e66:	8b 55 08             	mov    0x8(%ebp),%edx
c1002e69:	29 c2                	sub    %eax,%edx
c1002e6b:	89 d0                	mov    %edx,%eax
c1002e6d:	c1 e8 16             	shr    $0x16,%eax
c1002e70:	89 c3                	mov    %eax,%ebx
c1002e72:	a1 10 db 00 c1       	mov    0xc100db10,%eax
c1002e77:	8b 55 08             	mov    0x8(%ebp),%edx
c1002e7a:	29 c2                	sub    %eax,%edx
c1002e7c:	89 d0                	mov    %edx,%eax
c1002e7e:	c1 e8 0c             	shr    $0xc,%eax
c1002e81:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002e86:	89 c1                	mov    %eax,%ecx
c1002e88:	8b 45 08             	mov    0x8(%ebp),%eax
c1002e8b:	83 c8 06             	or     $0x6,%eax
c1002e8e:	89 c2                	mov    %eax,%edx
c1002e90:	89 d8                	mov    %ebx,%eax
c1002e92:	c1 e0 0a             	shl    $0xa,%eax
c1002e95:	01 c8                	add    %ecx,%eax
c1002e97:	89 14 85 00 30 91 c1 	mov    %edx,-0x3e6ed000(,%eax,4)
c1002e9e:	81 45 08 00 10 00 00 	addl   $0x1000,0x8(%ebp)
c1002ea5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002ea9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002eac:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002eaf:	72 b0                	jb     c1002e61 <vmm_free+0x89>
c1002eb1:	eb 17                	jmp    c1002eca <vmm_free+0xf2>
c1002eb3:	8b 45 08             	mov    0x8(%ebp),%eax
c1002eb6:	05 00 00 00 40       	add    $0x40000000,%eax
c1002ebb:	83 ec 08             	sub    $0x8,%esp
c1002ebe:	ff 75 0c             	pushl  0xc(%ebp)
c1002ec1:	50                   	push   %eax
c1002ec2:	e8 48 fc ff ff       	call   c1002b0f <pmm_free>
c1002ec7:	83 c4 10             	add    $0x10,%esp
c1002eca:	90                   	nop
c1002ecb:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002ece:	c9                   	leave  
c1002ecf:	c3                   	ret    

c1002ed0 <vmm_map>:
c1002ed0:	55                   	push   %ebp
c1002ed1:	89 e5                	mov    %esp,%ebp
c1002ed3:	53                   	push   %ebx
c1002ed4:	83 ec 20             	sub    $0x20,%esp
c1002ed7:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002eda:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002edf:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002ee2:	8b 45 10             	mov    0x10(%ebp),%eax
c1002ee5:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002eea:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002eef:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002ef2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002ef5:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002ef8:	81 65 14 00 f0 ff ff 	andl   $0xfffff000,0x14(%ebp)
c1002eff:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002f02:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002f05:	c1 e8 0c             	shr    $0xc,%eax
c1002f08:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002f0b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002f12:	eb 3d                	jmp    c1002f51 <vmm_map+0x81>
c1002f14:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002f17:	c1 e8 16             	shr    $0x16,%eax
c1002f1a:	89 c3                	mov    %eax,%ebx
c1002f1c:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002f1f:	c1 e8 0c             	shr    $0xc,%eax
c1002f22:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002f27:	89 c1                	mov    %eax,%ecx
c1002f29:	8b 45 14             	mov    0x14(%ebp),%eax
c1002f2c:	83 c8 07             	or     $0x7,%eax
c1002f2f:	89 c2                	mov    %eax,%edx
c1002f31:	89 d8                	mov    %ebx,%eax
c1002f33:	c1 e0 0a             	shl    $0xa,%eax
c1002f36:	01 c8                	add    %ecx,%eax
c1002f38:	89 14 85 00 30 61 c1 	mov    %edx,-0x3e9ed000(,%eax,4)
c1002f3f:	81 45 14 00 10 00 00 	addl   $0x1000,0x14(%ebp)
c1002f46:	81 45 f8 00 10 00 00 	addl   $0x1000,-0x8(%ebp)
c1002f4d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002f51:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002f54:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002f57:	72 bb                	jb     c1002f14 <vmm_map+0x44>
c1002f59:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002f5c:	05 ff 03 00 00       	add    $0x3ff,%eax
c1002f61:	c1 e8 0a             	shr    $0xa,%eax
c1002f64:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002f67:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002f6e:	eb 3d                	jmp    c1002fad <vmm_map+0xdd>
c1002f70:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002f73:	c1 e8 16             	shr    $0x16,%eax
c1002f76:	89 c2                	mov    %eax,%edx
c1002f78:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002f7b:	01 d0                	add    %edx,%eax
c1002f7d:	c1 e0 0c             	shl    $0xc,%eax
c1002f80:	05 00 30 61 c1       	add    $0xc1613000,%eax
c1002f85:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002f8b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002f8e:	c1 e8 16             	shr    $0x16,%eax
c1002f91:	89 c1                	mov    %eax,%ecx
c1002f93:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002f96:	01 c8                	add    %ecx,%eax
c1002f98:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
c1002f9f:	8b 45 08             	mov    0x8(%ebp),%eax
c1002fa2:	01 c8                	add    %ecx,%eax
c1002fa4:	83 ca 07             	or     $0x7,%edx
c1002fa7:	89 10                	mov    %edx,(%eax)
c1002fa9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002fad:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002fb0:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002fb3:	72 bb                	jb     c1002f70 <vmm_map+0xa0>
c1002fb5:	90                   	nop
c1002fb6:	90                   	nop
c1002fb7:	83 c4 20             	add    $0x20,%esp
c1002fba:	5b                   	pop    %ebx
c1002fbb:	5d                   	pop    %ebp
c1002fbc:	c3                   	ret    

c1002fbd <setup_pgdir>:
c1002fbd:	55                   	push   %ebp
c1002fbe:	89 e5                	mov    %esp,%ebp
c1002fc0:	57                   	push   %edi
c1002fc1:	56                   	push   %esi
c1002fc2:	53                   	push   %ebx
c1002fc3:	83 ec 1c             	sub    $0x1c,%esp
c1002fc6:	83 ec 08             	sub    $0x8,%esp
c1002fc9:	6a 01                	push   $0x1
c1002fcb:	68 00 10 00 00       	push   $0x1000
c1002fd0:	e8 de fc ff ff       	call   c1002cb3 <vmm_malloc>
c1002fd5:	83 c4 10             	add    $0x10,%esp
c1002fd8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002fdb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002fde:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1002fe3:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002fe8:	8b 0b                	mov    (%ebx),%ecx
c1002fea:	89 08                	mov    %ecx,(%eax)
c1002fec:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002ff0:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002ff4:	8d 78 04             	lea    0x4(%eax),%edi
c1002ff7:	83 e7 fc             	and    $0xfffffffc,%edi
c1002ffa:	29 f8                	sub    %edi,%eax
c1002ffc:	29 c3                	sub    %eax,%ebx
c1002ffe:	01 c2                	add    %eax,%edx
c1003000:	83 e2 fc             	and    $0xfffffffc,%edx
c1003003:	89 d0                	mov    %edx,%eax
c1003005:	c1 e8 02             	shr    $0x2,%eax
c1003008:	89 de                	mov    %ebx,%esi
c100300a:	89 c1                	mov    %eax,%ecx
c100300c:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100300e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003011:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003014:	5b                   	pop    %ebx
c1003015:	5e                   	pop    %esi
c1003016:	5f                   	pop    %edi
c1003017:	5d                   	pop    %ebp
c1003018:	c3                   	ret    

c1003019 <sys_malloc>:
c1003019:	55                   	push   %ebp
c100301a:	89 e5                	mov    %esp,%ebp
c100301c:	57                   	push   %edi
c100301d:	56                   	push   %esi
c100301e:	53                   	push   %ebx
c100301f:	83 ec 1c             	sub    $0x1c,%esp
c1003022:	83 ec 08             	sub    $0x8,%esp
c1003025:	6a 02                	push   $0x2
c1003027:	ff 75 08             	pushl  0x8(%ebp)
c100302a:	e8 84 fc ff ff       	call   c1002cb3 <vmm_malloc>
c100302f:	83 c4 10             	add    $0x10,%esp
c1003032:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003035:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100303a:	8b 40 30             	mov    0x30(%eax),%eax
c100303d:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1003042:	ba 00 10 00 00       	mov    $0x1000,%edx
c1003047:	8b 0b                	mov    (%ebx),%ecx
c1003049:	89 08                	mov    %ecx,(%eax)
c100304b:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c100304f:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003053:	8d 78 04             	lea    0x4(%eax),%edi
c1003056:	83 e7 fc             	and    $0xfffffffc,%edi
c1003059:	29 f8                	sub    %edi,%eax
c100305b:	29 c3                	sub    %eax,%ebx
c100305d:	01 c2                	add    %eax,%edx
c100305f:	83 e2 fc             	and    $0xfffffffc,%edx
c1003062:	89 d0                	mov    %edx,%eax
c1003064:	c1 e8 02             	shr    $0x2,%eax
c1003067:	89 de                	mov    %ebx,%esi
c1003069:	89 c1                	mov    %eax,%ecx
c100306b:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100306d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003070:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003073:	5b                   	pop    %ebx
c1003074:	5e                   	pop    %esi
c1003075:	5f                   	pop    %edi
c1003076:	5d                   	pop    %ebp
c1003077:	c3                   	ret    

c1003078 <sys_free>:
c1003078:	55                   	push   %ebp
c1003079:	89 e5                	mov    %esp,%ebp
c100307b:	57                   	push   %edi
c100307c:	56                   	push   %esi
c100307d:	53                   	push   %ebx
c100307e:	83 ec 0c             	sub    $0xc,%esp
c1003081:	83 ec 08             	sub    $0x8,%esp
c1003084:	ff 75 0c             	pushl  0xc(%ebp)
c1003087:	ff 75 08             	pushl  0x8(%ebp)
c100308a:	e8 49 fd ff ff       	call   c1002dd8 <vmm_free>
c100308f:	83 c4 10             	add    $0x10,%esp
c1003092:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003097:	8b 40 30             	mov    0x30(%eax),%eax
c100309a:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c100309f:	ba 00 10 00 00       	mov    $0x1000,%edx
c10030a4:	8b 0b                	mov    (%ebx),%ecx
c10030a6:	89 08                	mov    %ecx,(%eax)
c10030a8:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c10030ac:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c10030b0:	8d 78 04             	lea    0x4(%eax),%edi
c10030b3:	83 e7 fc             	and    $0xfffffffc,%edi
c10030b6:	29 f8                	sub    %edi,%eax
c10030b8:	29 c3                	sub    %eax,%ebx
c10030ba:	01 c2                	add    %eax,%edx
c10030bc:	83 e2 fc             	and    $0xfffffffc,%edx
c10030bf:	89 d0                	mov    %edx,%eax
c10030c1:	c1 e8 02             	shr    $0x2,%eax
c10030c4:	89 de                	mov    %ebx,%esi
c10030c6:	89 c1                	mov    %eax,%ecx
c10030c8:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c10030ca:	90                   	nop
c10030cb:	8d 65 f4             	lea    -0xc(%ebp),%esp
c10030ce:	5b                   	pop    %ebx
c10030cf:	5e                   	pop    %esi
c10030d0:	5f                   	pop    %edi
c10030d1:	5d                   	pop    %ebp
c10030d2:	c3                   	ret    

c10030d3 <sys_mmap>:
c10030d3:	55                   	push   %ebp
c10030d4:	89 e5                	mov    %esp,%ebp
c10030d6:	83 ec 10             	sub    $0x10,%esp
c10030d9:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10030de:	8b 40 30             	mov    0x30(%eax),%eax
c10030e1:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10030e4:	ff 75 10             	pushl  0x10(%ebp)
c10030e7:	ff 75 0c             	pushl  0xc(%ebp)
c10030ea:	ff 75 08             	pushl  0x8(%ebp)
c10030ed:	ff 75 fc             	pushl  -0x4(%ebp)
c10030f0:	e8 db fd ff ff       	call   c1002ed0 <vmm_map>
c10030f5:	83 c4 10             	add    $0x10,%esp
c10030f8:	90                   	nop
c10030f9:	c9                   	leave  
c10030fa:	c3                   	ret    

c10030fb <hash32>:
c10030fb:	55                   	push   %ebp
c10030fc:	89 e5                	mov    %esp,%ebp
c10030fe:	83 ec 10             	sub    $0x10,%esp
c1003101:	8b 45 08             	mov    0x8(%ebp),%eax
c1003104:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100310a:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100310d:	b8 20 00 00 00       	mov    $0x20,%eax
c1003112:	2b 45 0c             	sub    0xc(%ebp),%eax
c1003115:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1003118:	89 c1                	mov    %eax,%ecx
c100311a:	d3 ea                	shr    %cl,%edx
c100311c:	89 d0                	mov    %edx,%eax
c100311e:	c9                   	leave  
c100311f:	c3                   	ret    

c1003120 <kernel_task_init>:
c1003120:	55                   	push   %ebp
c1003121:	89 e5                	mov    %esp,%ebp
c1003123:	83 ec 28             	sub    $0x28,%esp
c1003126:	c7 45 e8 84 1c 01 c1 	movl   $0xc1011c84,-0x18(%ebp)
c100312d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003130:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003133:	89 50 04             	mov    %edx,0x4(%eax)
c1003136:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003139:	8b 50 04             	mov    0x4(%eax),%edx
c100313c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100313f:	89 10                	mov    %edx,(%eax)
c1003141:	90                   	nop
c1003142:	c7 45 ec 8c 1c 01 c1 	movl   $0xc1011c8c,-0x14(%ebp)
c1003149:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100314c:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100314f:	89 50 04             	mov    %edx,0x4(%eax)
c1003152:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003155:	8b 50 04             	mov    0x4(%eax),%edx
c1003158:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100315b:	89 10                	mov    %edx,(%eax)
c100315d:	90                   	nop
c100315e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003165:	eb 27                	jmp    c100318e <kernel_task_init+0x6e>
c1003167:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100316a:	c1 e0 03             	shl    $0x3,%eax
c100316d:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c1003172:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003175:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003178:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100317b:	89 50 04             	mov    %edx,0x4(%eax)
c100317e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003181:	8b 50 04             	mov    0x4(%eax),%edx
c1003184:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003187:	89 10                	mov    %edx,(%eax)
c1003189:	90                   	nop
c100318a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100318e:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%ebp)
c1003195:	7e d0                	jle    c1003167 <kernel_task_init+0x47>
c1003197:	83 ec 0c             	sub    $0xc,%esp
c100319a:	6a 01                	push   $0x1
c100319c:	e8 68 06 00 00       	call   c1003809 <alloc_task>
c10031a1:	83 c4 10             	add    $0x10,%esp
c10031a4:	a3 00 40 a1 c1       	mov    %eax,0xc1a14000
c10031a9:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031ae:	85 c0                	test   %eax,%eax
c10031b0:	75 10                	jne    c10031c2 <kernel_task_init+0xa2>
c10031b2:	83 ec 0c             	sub    $0xc,%esp
c10031b5:	68 4c b6 00 c1       	push   $0xc100b64c
c10031ba:	e8 f3 25 00 00       	call   c10057b2 <printk>
c10031bf:	83 c4 10             	add    $0x10,%esp
c10031c2:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031c7:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c10031cd:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031d2:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c10031d9:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031de:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c10031e5:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031ea:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c10031f1:	c7 05 80 1c 01 c1 00 	movl   $0x0,0xc1011c80
c10031f8:	00 00 00 
c10031fb:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003200:	83 ec 08             	sub    $0x8,%esp
c1003203:	68 5f b6 00 c1       	push   $0xc100b65f
c1003208:	50                   	push   %eax
c1003209:	e8 92 03 00 00       	call   c10035a0 <set_task_name>
c100320e:	83 c4 10             	add    $0x10,%esp
c1003211:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003216:	89 c2                	mov    %eax,%edx
c1003218:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100321d:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1003223:	89 50 28             	mov    %edx,0x28(%eax)
c1003226:	ba 00 20 61 c1       	mov    $0xc1612000,%edx
c100322b:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003230:	81 c2 00 00 00 40    	add    $0x40000000,%edx
c1003236:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003239:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100323e:	c7 80 f8 00 00 00 00 	movl   $0x0,0xf8(%eax)
c1003245:	00 00 00 
c1003248:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100324d:	8b 40 28             	mov    0x28(%eax),%eax
c1003250:	8d 50 b4             	lea    -0x4c(%eax),%edx
c1003253:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003258:	89 50 38             	mov    %edx,0x38(%eax)
c100325b:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003260:	8b 40 38             	mov    0x38(%eax),%eax
c1003263:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c100326a:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100326f:	8b 40 38             	mov    0x38(%eax),%eax
c1003272:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1003279:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100327e:	8b 40 38             	mov    0x38(%eax),%eax
c1003281:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1003288:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100328d:	8b 40 38             	mov    0x38(%eax),%eax
c1003290:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c1003297:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100329c:	8b 40 38             	mov    0x38(%eax),%eax
c100329f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10032a5:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032aa:	8b 40 38             	mov    0x38(%eax),%eax
c10032ad:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c10032b4:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032b9:	8b 40 38             	mov    0x38(%eax),%eax
c10032bc:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10032c3:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032c8:	8b 40 38             	mov    0x38(%eax),%eax
c10032cb:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c10032d2:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032d7:	8b 40 38             	mov    0x38(%eax),%eax
c10032da:	66 c7 40 3c 08 00    	movw   $0x8,0x3c(%eax)
c10032e0:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10032e5:	8b 40 38             	mov    0x38(%eax),%eax
c10032e8:	66 c7 40 48 10 00    	movw   $0x10,0x48(%eax)
c10032ee:	8b 15 00 40 a1 c1    	mov    0xc1a14000,%edx
c10032f4:	8b 52 38             	mov    0x38(%edx),%edx
c10032f7:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c10032fb:	66 89 42 24          	mov    %ax,0x24(%edx)
c10032ff:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003304:	8b 40 38             	mov    0x38(%eax),%eax
c1003307:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c100330b:	66 89 50 28          	mov    %dx,0x28(%eax)
c100330f:	8b 15 00 40 a1 c1    	mov    0xc1a14000,%edx
c1003315:	8b 52 38             	mov    0x38(%edx),%edx
c1003318:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c100331c:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1003320:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003325:	8b 40 38             	mov    0x38(%eax),%eax
c1003328:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c100332e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003333:	8b 40 38             	mov    0x38(%eax),%eax
c1003336:	ba 00 39 00 c1       	mov    $0xc1003900,%edx
c100333b:	89 50 38             	mov    %edx,0x38(%eax)
c100333e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003343:	8b 40 38             	mov    0x38(%eax),%eax
c1003346:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c100334d:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003352:	8b 50 28             	mov    0x28(%eax),%edx
c1003355:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100335a:	8b 40 38             	mov    0x38(%eax),%eax
c100335d:	83 ea 4c             	sub    $0x4c,%edx
c1003360:	89 50 44             	mov    %edx,0x44(%eax)
c1003363:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003368:	8b 55 08             	mov    0x8(%ebp),%edx
c100336b:	89 50 3c             	mov    %edx,0x3c(%eax)
c100336e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003373:	8b 50 38             	mov    0x38(%eax),%edx
c1003376:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100337b:	89 50 40             	mov    %edx,0x40(%eax)
c100337e:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003383:	8b 50 38             	mov    0x38(%eax),%edx
c1003386:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100338b:	8b 52 10             	mov    0x10(%edx),%edx
c100338e:	89 50 44             	mov    %edx,0x44(%eax)
c1003391:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003396:	8b 50 38             	mov    0x38(%eax),%edx
c1003399:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100339e:	8b 52 14             	mov    0x14(%edx),%edx
c10033a1:	89 50 4c             	mov    %edx,0x4c(%eax)
c10033a4:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033a9:	83 c0 5c             	add    $0x5c,%eax
c10033ac:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10033af:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10033b2:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10033b5:	89 50 04             	mov    %edx,0x4(%eax)
c10033b8:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10033bb:	8b 50 04             	mov    0x4(%eax),%edx
c10033be:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10033c1:	89 10                	mov    %edx,(%eax)
c10033c3:	90                   	nop
c10033c4:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033c9:	83 c0 5c             	add    $0x5c,%eax
c10033cc:	83 ec 0c             	sub    $0xc,%esp
c10033cf:	50                   	push   %eax
c10033d0:	e8 35 02 00 00       	call   c100360a <add_link>
c10033d5:	83 c4 10             	add    $0x10,%esp
c10033d8:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033dd:	83 c0 64             	add    $0x64,%eax
c10033e0:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10033e3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10033e6:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10033e9:	89 50 04             	mov    %edx,0x4(%eax)
c10033ec:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10033ef:	8b 50 04             	mov    0x4(%eax),%edx
c10033f2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10033f5:	89 10                	mov    %edx,(%eax)
c10033f7:	90                   	nop
c10033f8:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033fd:	83 c0 64             	add    $0x64,%eax
c1003400:	83 ec 0c             	sub    $0xc,%esp
c1003403:	50                   	push   %eax
c1003404:	e8 51 02 00 00       	call   c100365a <add_all_link>
c1003409:	83 c4 10             	add    $0x10,%esp
c100340c:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003411:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
c1003418:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100341d:	c7 40 78 01 00 00 00 	movl   $0x1,0x78(%eax)
c1003424:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003429:	c7 40 7c 02 00 00 00 	movl   $0x2,0x7c(%eax)
c1003430:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
c1003437:	eb 17                	jmp    c1003450 <kernel_task_init+0x330>
c1003439:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100343e:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003441:	83 c2 1c             	add    $0x1c,%edx
c1003444:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c100344b:	ff 
c100344c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1003450:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1003454:	7e e3                	jle    c1003439 <kernel_task_init+0x319>
c1003456:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100345b:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c1003460:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003465:	83 ec 0c             	sub    $0xc,%esp
c1003468:	50                   	push   %eax
c1003469:	e8 6f 02 00 00       	call   c10036dd <add_pid_hash>
c100346e:	83 c4 10             	add    $0x10,%esp
c1003471:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003476:	83 ec 0c             	sub    $0xc,%esp
c1003479:	50                   	push   %eax
c100347a:	e8 5b 08 00 00       	call   c1003cda <wakeup_task>
c100347f:	83 c4 10             	add    $0x10,%esp
c1003482:	c7 05 94 1c 01 c1 01 	movl   $0x1,0xc1011c94
c1003489:	00 00 00 
c100348c:	90                   	nop
c100348d:	c9                   	leave  
c100348e:	c3                   	ret    

c100348f <set_pid_bit>:
c100348f:	55                   	push   %ebp
c1003490:	89 e5                	mov    %esp,%ebp
c1003492:	83 ec 10             	sub    $0x10,%esp
c1003495:	8b 45 08             	mov    0x8(%ebp),%eax
c1003498:	8d 50 07             	lea    0x7(%eax),%edx
c100349b:	85 c0                	test   %eax,%eax
c100349d:	0f 48 c2             	cmovs  %edx,%eax
c10034a0:	c1 f8 03             	sar    $0x3,%eax
c10034a3:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10034a6:	8b 45 08             	mov    0x8(%ebp),%eax
c10034a9:	99                   	cltd   
c10034aa:	c1 ea 1d             	shr    $0x1d,%edx
c10034ad:	01 d0                	add    %edx,%eax
c10034af:	83 e0 07             	and    $0x7,%eax
c10034b2:	29 d0                	sub    %edx,%eax
c10034b4:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10034b7:	90                   	nop
c10034b8:	c9                   	leave  
c10034b9:	c3                   	ret    

c10034ba <clear_pid_bit>:
c10034ba:	55                   	push   %ebp
c10034bb:	89 e5                	mov    %esp,%ebp
c10034bd:	83 ec 10             	sub    $0x10,%esp
c10034c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10034c3:	8d 50 07             	lea    0x7(%eax),%edx
c10034c6:	85 c0                	test   %eax,%eax
c10034c8:	0f 48 c2             	cmovs  %edx,%eax
c10034cb:	c1 f8 03             	sar    $0x3,%eax
c10034ce:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10034d1:	8b 45 08             	mov    0x8(%ebp),%eax
c10034d4:	99                   	cltd   
c10034d5:	c1 ea 1d             	shr    $0x1d,%edx
c10034d8:	01 d0                	add    %edx,%eax
c10034da:	83 e0 07             	and    $0x7,%eax
c10034dd:	29 d0                	sub    %edx,%eax
c10034df:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10034e2:	90                   	nop
c10034e3:	c9                   	leave  
c10034e4:	c3                   	ret    

c10034e5 <find_free_pid>:
c10034e5:	55                   	push   %ebp
c10034e6:	89 e5                	mov    %esp,%ebp
c10034e8:	83 ec 10             	sub    $0x10,%esp
c10034eb:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c10034f2:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c10034f9:	eb 1b                	jmp    c1003516 <find_free_pid+0x31>
c10034fb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003502:	eb 08                	jmp    c100350c <find_free_pid+0x27>
c1003504:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003508:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c100350c:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
c1003510:	7e f2                	jle    c1003504 <find_free_pid+0x1f>
c1003512:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1003516:	81 7d f8 00 80 00 00 	cmpl   $0x8000,-0x8(%ebp)
c100351d:	75 dc                	jne    c10034fb <find_free_pid+0x16>
c100351f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003524:	c9                   	leave  
c1003525:	c3                   	ret    

c1003526 <alloc_pid>:
c1003526:	55                   	push   %ebp
c1003527:	89 e5                	mov    %esp,%ebp
c1003529:	83 ec 10             	sub    $0x10,%esp
c100352c:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c1003531:	85 c0                	test   %eax,%eax
c1003533:	75 07                	jne    c100353c <alloc_pid+0x16>
c1003535:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100353a:	eb 44                	jmp    c1003580 <alloc_pid+0x5a>
c100353c:	81 7d fc ff 7f 00 00 	cmpl   $0x7fff,-0x4(%ebp)
c1003543:	75 07                	jne    c100354c <alloc_pid+0x26>
c1003545:	e8 9b ff ff ff       	call   c10034e5 <find_free_pid>
c100354a:	eb 08                	jmp    c1003554 <alloc_pid+0x2e>
c100354c:	a1 80 1c 01 c1       	mov    0xc1011c80,%eax
c1003551:	83 c0 01             	add    $0x1,%eax
c1003554:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003557:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c100355b:	78 18                	js     c1003575 <alloc_pid+0x4f>
c100355d:	ff 75 fc             	pushl  -0x4(%ebp)
c1003560:	e8 2a ff ff ff       	call   c100348f <set_pid_bit>
c1003565:	83 c4 04             	add    $0x4,%esp
c1003568:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c100356d:	83 e8 01             	sub    $0x1,%eax
c1003570:	a3 20 db 00 c1       	mov    %eax,0xc100db20
c1003575:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003578:	a3 80 1c 01 c1       	mov    %eax,0xc1011c80
c100357d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003580:	c9                   	leave  
c1003581:	c3                   	ret    

c1003582 <free_pid>:
c1003582:	55                   	push   %ebp
c1003583:	89 e5                	mov    %esp,%ebp
c1003585:	ff 75 08             	pushl  0x8(%ebp)
c1003588:	e8 2d ff ff ff       	call   c10034ba <clear_pid_bit>
c100358d:	83 c4 04             	add    $0x4,%esp
c1003590:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c1003595:	83 c0 01             	add    $0x1,%eax
c1003598:	a3 20 db 00 c1       	mov    %eax,0xc100db20
c100359d:	90                   	nop
c100359e:	c9                   	leave  
c100359f:	c3                   	ret    

c10035a0 <set_task_name>:
c10035a0:	55                   	push   %ebp
c10035a1:	89 e5                	mov    %esp,%ebp
c10035a3:	83 ec 08             	sub    $0x8,%esp
c10035a6:	8b 45 08             	mov    0x8(%ebp),%eax
c10035a9:	83 c0 14             	add    $0x14,%eax
c10035ac:	83 ec 04             	sub    $0x4,%esp
c10035af:	6a 14                	push   $0x14
c10035b1:	6a 00                	push   $0x0
c10035b3:	50                   	push   %eax
c10035b4:	e8 f1 ca ff ff       	call   c10000aa <memset>
c10035b9:	83 c4 10             	add    $0x10,%esp
c10035bc:	8b 45 08             	mov    0x8(%ebp),%eax
c10035bf:	83 c0 14             	add    $0x14,%eax
c10035c2:	83 ec 04             	sub    $0x4,%esp
c10035c5:	6a 14                	push   $0x14
c10035c7:	ff 75 0c             	pushl  0xc(%ebp)
c10035ca:	50                   	push   %eax
c10035cb:	e8 38 cb ff ff       	call   c1000108 <memcpy>
c10035d0:	83 c4 10             	add    $0x10,%esp
c10035d3:	c9                   	leave  
c10035d4:	c3                   	ret    

c10035d5 <get_task_name>:
c10035d5:	55                   	push   %ebp
c10035d6:	89 e5                	mov    %esp,%ebp
c10035d8:	83 ec 08             	sub    $0x8,%esp
c10035db:	83 ec 04             	sub    $0x4,%esp
c10035de:	6a 15                	push   $0x15
c10035e0:	6a 00                	push   $0x0
c10035e2:	68 98 1c 01 c1       	push   $0xc1011c98
c10035e7:	e8 be ca ff ff       	call   c10000aa <memset>
c10035ec:	83 c4 10             	add    $0x10,%esp
c10035ef:	8b 45 08             	mov    0x8(%ebp),%eax
c10035f2:	83 c0 14             	add    $0x14,%eax
c10035f5:	83 ec 04             	sub    $0x4,%esp
c10035f8:	6a 14                	push   $0x14
c10035fa:	50                   	push   %eax
c10035fb:	68 98 1c 01 c1       	push   $0xc1011c98
c1003600:	e8 03 cb ff ff       	call   c1000108 <memcpy>
c1003605:	83 c4 10             	add    $0x10,%esp
c1003608:	c9                   	leave  
c1003609:	c3                   	ret    

c100360a <add_link>:
c100360a:	55                   	push   %ebp
c100360b:	89 e5                	mov    %esp,%ebp
c100360d:	83 ec 20             	sub    $0x20,%esp
c1003610:	c7 45 fc 84 1c 01 c1 	movl   $0xc1011c84,-0x4(%ebp)
c1003617:	8b 45 08             	mov    0x8(%ebp),%eax
c100361a:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100361d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003620:	8b 00                	mov    (%eax),%eax
c1003622:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1003625:	89 55 f4             	mov    %edx,-0xc(%ebp)
c1003628:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100362b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100362e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003631:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003634:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003637:	89 10                	mov    %edx,(%eax)
c1003639:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100363c:	8b 10                	mov    (%eax),%edx
c100363e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003641:	89 50 04             	mov    %edx,0x4(%eax)
c1003644:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003647:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100364a:	89 50 04             	mov    %edx,0x4(%eax)
c100364d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003650:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003653:	89 10                	mov    %edx,(%eax)
c1003655:	90                   	nop
c1003656:	90                   	nop
c1003657:	90                   	nop
c1003658:	c9                   	leave  
c1003659:	c3                   	ret    

c100365a <add_all_link>:
c100365a:	55                   	push   %ebp
c100365b:	89 e5                	mov    %esp,%ebp
c100365d:	83 ec 20             	sub    $0x20,%esp
c1003660:	c7 45 fc 8c 1c 01 c1 	movl   $0xc1011c8c,-0x4(%ebp)
c1003667:	8b 45 08             	mov    0x8(%ebp),%eax
c100366a:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100366d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003670:	8b 00                	mov    (%eax),%eax
c1003672:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1003675:	89 55 f4             	mov    %edx,-0xc(%ebp)
c1003678:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100367b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100367e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003681:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003684:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003687:	89 10                	mov    %edx,(%eax)
c1003689:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100368c:	8b 10                	mov    (%eax),%edx
c100368e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003691:	89 50 04             	mov    %edx,0x4(%eax)
c1003694:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003697:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100369a:	89 50 04             	mov    %edx,0x4(%eax)
c100369d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036a0:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10036a3:	89 10                	mov    %edx,(%eax)
c10036a5:	90                   	nop
c10036a6:	90                   	nop
c10036a7:	90                   	nop
c10036a8:	c9                   	leave  
c10036a9:	c3                   	ret    

c10036aa <remove_link>:
c10036aa:	55                   	push   %ebp
c10036ab:	89 e5                	mov    %esp,%ebp
c10036ad:	83 ec 10             	sub    $0x10,%esp
c10036b0:	8b 45 08             	mov    0x8(%ebp),%eax
c10036b3:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10036b6:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10036b9:	8b 40 04             	mov    0x4(%eax),%eax
c10036bc:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10036bf:	8b 12                	mov    (%edx),%edx
c10036c1:	89 55 f8             	mov    %edx,-0x8(%ebp)
c10036c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10036c7:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10036ca:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10036cd:	89 50 04             	mov    %edx,0x4(%eax)
c10036d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036d3:	8b 55 f8             	mov    -0x8(%ebp),%edx
c10036d6:	89 10                	mov    %edx,(%eax)
c10036d8:	90                   	nop
c10036d9:	90                   	nop
c10036da:	90                   	nop
c10036db:	c9                   	leave  
c10036dc:	c3                   	ret    

c10036dd <add_pid_hash>:
c10036dd:	55                   	push   %ebp
c10036de:	89 e5                	mov    %esp,%ebp
c10036e0:	53                   	push   %ebx
c10036e1:	83 ec 20             	sub    $0x20,%esp
c10036e4:	8b 45 08             	mov    0x8(%ebp),%eax
c10036e7:	8d 58 6c             	lea    0x6c(%eax),%ebx
c10036ea:	8b 45 08             	mov    0x8(%ebp),%eax
c10036ed:	8b 40 0c             	mov    0xc(%eax),%eax
c10036f0:	6a 0a                	push   $0xa
c10036f2:	50                   	push   %eax
c10036f3:	e8 03 fa ff ff       	call   c10030fb <hash32>
c10036f8:	83 c4 08             	add    $0x8,%esp
c10036fb:	c1 e0 03             	shl    $0x3,%eax
c10036fe:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c1003703:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003706:	89 5d f4             	mov    %ebx,-0xc(%ebp)
c1003709:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100370c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100370f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003712:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003715:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003718:	8b 40 04             	mov    0x4(%eax),%eax
c100371b:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100371e:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1003721:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003724:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1003727:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100372a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100372d:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003730:	89 10                	mov    %edx,(%eax)
c1003732:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003735:	8b 10                	mov    (%eax),%edx
c1003737:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100373a:	89 50 04             	mov    %edx,0x4(%eax)
c100373d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003740:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1003743:	89 50 04             	mov    %edx,0x4(%eax)
c1003746:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003749:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100374c:	89 10                	mov    %edx,(%eax)
c100374e:	90                   	nop
c100374f:	90                   	nop
c1003750:	90                   	nop
c1003751:	90                   	nop
c1003752:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1003755:	c9                   	leave  
c1003756:	c3                   	ret    

c1003757 <remove_pid_hash>:
c1003757:	55                   	push   %ebp
c1003758:	89 e5                	mov    %esp,%ebp
c100375a:	83 ec 18             	sub    $0x18,%esp
c100375d:	83 ec 0c             	sub    $0xc,%esp
c1003760:	ff 75 08             	pushl  0x8(%ebp)
c1003763:	e8 36 00 00 00       	call   c100379e <find_task>
c1003768:	83 c4 10             	add    $0x10,%esp
c100376b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100376e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003771:	83 c0 6c             	add    $0x6c,%eax
c1003774:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003777:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100377a:	8b 40 04             	mov    0x4(%eax),%eax
c100377d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003780:	8b 12                	mov    (%edx),%edx
c1003782:	89 55 ec             	mov    %edx,-0x14(%ebp)
c1003785:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003788:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100378b:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100378e:	89 50 04             	mov    %edx,0x4(%eax)
c1003791:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003794:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003797:	89 10                	mov    %edx,(%eax)
c1003799:	90                   	nop
c100379a:	90                   	nop
c100379b:	90                   	nop
c100379c:	c9                   	leave  
c100379d:	c3                   	ret    

c100379e <find_task>:
c100379e:	55                   	push   %ebp
c100379f:	89 e5                	mov    %esp,%ebp
c10037a1:	83 ec 10             	sub    $0x10,%esp
c10037a4:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10037a8:	79 07                	jns    c10037b1 <find_task+0x13>
c10037aa:	b8 00 00 00 00       	mov    $0x0,%eax
c10037af:	eb 56                	jmp    c1003807 <find_task+0x69>
c10037b1:	8b 45 08             	mov    0x8(%ebp),%eax
c10037b4:	6a 0a                	push   $0xa
c10037b6:	50                   	push   %eax
c10037b7:	e8 3f f9 ff ff       	call   c10030fb <hash32>
c10037bc:	83 c4 08             	add    $0x8,%esp
c10037bf:	c1 e0 03             	shl    $0x3,%eax
c10037c2:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c10037c7:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10037ca:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10037cd:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10037d0:	eb 19                	jmp    c10037eb <find_task+0x4d>
c10037d2:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10037d5:	83 e8 6c             	sub    $0x6c,%eax
c10037d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10037db:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037de:	8b 40 0c             	mov    0xc(%eax),%eax
c10037e1:	39 45 08             	cmp    %eax,0x8(%ebp)
c10037e4:	75 05                	jne    c10037eb <find_task+0x4d>
c10037e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037e9:	eb 1c                	jmp    c1003807 <find_task+0x69>
c10037eb:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10037ee:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10037f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10037f4:	8b 40 04             	mov    0x4(%eax),%eax
c10037f7:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10037fa:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10037fd:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1003800:	75 d0                	jne    c10037d2 <find_task+0x34>
c1003802:	b8 00 00 00 00       	mov    $0x0,%eax
c1003807:	c9                   	leave  
c1003808:	c3                   	ret    

c1003809 <alloc_task>:
c1003809:	55                   	push   %ebp
c100380a:	89 e5                	mov    %esp,%ebp
c100380c:	83 ec 18             	sub    $0x18,%esp
c100380f:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1003813:	75 17                	jne    c100382c <alloc_task+0x23>
c1003815:	83 ec 08             	sub    $0x8,%esp
c1003818:	6a 01                	push   $0x1
c100381a:	68 00 20 00 00       	push   $0x2000
c100381f:	e8 8f f4 ff ff       	call   c1002cb3 <vmm_malloc>
c1003824:	83 c4 10             	add    $0x10,%esp
c1003827:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100382a:	eb 15                	jmp    c1003841 <alloc_task+0x38>
c100382c:	83 ec 08             	sub    $0x8,%esp
c100382f:	6a 02                	push   $0x2
c1003831:	68 00 20 00 00       	push   $0x2000
c1003836:	e8 78 f4 ff ff       	call   c1002cb3 <vmm_malloc>
c100383b:	83 c4 10             	add    $0x10,%esp
c100383e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003841:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1003845:	0f 84 b0 00 00 00    	je     c10038fb <alloc_task+0xf2>
c100384b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100384e:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c1003854:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003857:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c100385e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003861:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1003868:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100386b:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
c1003872:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003875:	83 c0 14             	add    $0x14,%eax
c1003878:	83 ec 04             	sub    $0x4,%esp
c100387b:	6a 14                	push   $0x14
c100387d:	6a 00                	push   $0x0
c100387f:	50                   	push   %eax
c1003880:	e8 25 c8 ff ff       	call   c10000aa <memset>
c1003885:	83 c4 10             	add    $0x10,%esp
c1003888:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100388b:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
c1003892:	ba 00 20 61 c1       	mov    $0xc1612000,%edx
c1003897:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100389a:	89 50 2c             	mov    %edx,0x2c(%eax)
c100389d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038a0:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
c10038a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038aa:	83 c0 3c             	add    $0x3c,%eax
c10038ad:	83 ec 04             	sub    $0x4,%esp
c10038b0:	6a 20                	push   $0x20
c10038b2:	6a 00                	push   $0x0
c10038b4:	50                   	push   %eax
c10038b5:	e8 f0 c7 ff ff       	call   c10000aa <memset>
c10038ba:	83 c4 10             	add    $0x10,%esp
c10038bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038c0:	c7 80 f4 00 00 00 11 	movl   $0x19971211,0xf4(%eax)
c10038c7:	12 97 19 
c10038ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038cd:	c7 80 f8 00 00 00 00 	movl   $0x0,0xf8(%eax)
c10038d4:	00 00 00 
c10038d7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10038de:	eb 15                	jmp    c10038f5 <alloc_task+0xec>
c10038e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038e3:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10038e6:	83 c2 1c             	add    $0x1c,%edx
c10038e9:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c10038f0:	ff 
c10038f1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10038f5:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c10038f9:	7e e5                	jle    c10038e0 <alloc_task+0xd7>
c10038fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038fe:	c9                   	leave  
c10038ff:	c3                   	ret    

c1003900 <forkret>:
c1003900:	55                   	push   %ebp
c1003901:	89 e5                	mov    %esp,%ebp
c1003903:	83 ec 08             	sub    $0x8,%esp
c1003906:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100390b:	8b 40 38             	mov    0x38(%eax),%eax
c100390e:	83 ec 0c             	sub    $0xc,%esp
c1003911:	50                   	push   %eax
c1003912:	e8 da d4 ff ff       	call   c1000df1 <forkrets>
c1003917:	83 c4 10             	add    $0x10,%esp
c100391a:	90                   	nop
c100391b:	c9                   	leave  
c100391c:	c3                   	ret    

c100391d <copy_thread>:
c100391d:	55                   	push   %ebp
c100391e:	89 e5                	mov    %esp,%ebp
c1003920:	57                   	push   %edi
c1003921:	56                   	push   %esi
c1003922:	53                   	push   %ebx
c1003923:	83 ec 1c             	sub    $0x1c,%esp
c1003926:	8b 45 08             	mov    0x8(%ebp),%eax
c1003929:	8b 40 28             	mov    0x28(%eax),%eax
c100392c:	83 e8 4c             	sub    $0x4c,%eax
c100392f:	89 c2                	mov    %eax,%edx
c1003931:	8b 45 08             	mov    0x8(%ebp),%eax
c1003934:	89 50 38             	mov    %edx,0x38(%eax)
c1003937:	8b 45 08             	mov    0x8(%ebp),%eax
c100393a:	8b 40 38             	mov    0x38(%eax),%eax
c100393d:	8b 55 10             	mov    0x10(%ebp),%edx
c1003940:	89 d3                	mov    %edx,%ebx
c1003942:	ba 4c 00 00 00       	mov    $0x4c,%edx
c1003947:	8b 0b                	mov    (%ebx),%ecx
c1003949:	89 08                	mov    %ecx,(%eax)
c100394b:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c100394f:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003953:	8d 78 04             	lea    0x4(%eax),%edi
c1003956:	83 e7 fc             	and    $0xfffffffc,%edi
c1003959:	29 f8                	sub    %edi,%eax
c100395b:	29 c3                	sub    %eax,%ebx
c100395d:	01 c2                	add    %eax,%edx
c100395f:	83 e2 fc             	and    $0xfffffffc,%edx
c1003962:	89 d0                	mov    %edx,%eax
c1003964:	c1 e8 02             	shr    $0x2,%eax
c1003967:	89 de                	mov    %ebx,%esi
c1003969:	89 c1                	mov    %eax,%ecx
c100396b:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100396d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003970:	8b 40 38             	mov    0x38(%eax),%eax
c1003973:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c100397a:	8b 45 08             	mov    0x8(%ebp),%eax
c100397d:	8b 40 38             	mov    0x38(%eax),%eax
c1003980:	8b 50 40             	mov    0x40(%eax),%edx
c1003983:	8b 45 08             	mov    0x8(%ebp),%eax
c1003986:	8b 40 38             	mov    0x38(%eax),%eax
c1003989:	80 ce 02             	or     $0x2,%dh
c100398c:	89 50 40             	mov    %edx,0x40(%eax)
c100398f:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003994:	05 00 01 00 00       	add    $0x100,%eax
c1003999:	89 c2                	mov    %eax,%edx
c100399b:	8b 45 08             	mov    0x8(%ebp),%eax
c100399e:	05 00 01 00 00       	add    $0x100,%eax
c10039a3:	83 ec 04             	sub    $0x4,%esp
c10039a6:	68 00 0f 00 00       	push   $0xf00
c10039ab:	52                   	push   %edx
c10039ac:	50                   	push   %eax
c10039ad:	e8 56 c7 ff ff       	call   c1000108 <memcpy>
c10039b2:	83 c4 10             	add    $0x10,%esp
c10039b5:	8b 45 08             	mov    0x8(%ebp),%eax
c10039b8:	05 00 01 00 00       	add    $0x100,%eax
c10039bd:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10039c0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c10039c7:	eb 5b                	jmp    c1003a24 <copy_thread+0x107>
c10039c9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10039cc:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10039d3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039d6:	01 d0                	add    %edx,%eax
c10039d8:	8b 00                	mov    (%eax),%eax
c10039da:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c10039e0:	31 d0                	xor    %edx,%eax
c10039e2:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10039e7:	85 c0                	test   %eax,%eax
c10039e9:	75 35                	jne    c1003a20 <copy_thread+0x103>
c10039eb:	8b 45 08             	mov    0x8(%ebp),%eax
c10039ee:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10039f3:	89 c1                	mov    %eax,%ecx
c10039f5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10039f8:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10039ff:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003a02:	01 d0                	add    %edx,%eax
c1003a04:	8b 00                	mov    (%eax),%eax
c1003a06:	25 ff 0f 00 00       	and    $0xfff,%eax
c1003a0b:	89 c2                	mov    %eax,%edx
c1003a0d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003a10:	8d 1c 85 00 00 00 00 	lea    0x0(,%eax,4),%ebx
c1003a17:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003a1a:	01 d8                	add    %ebx,%eax
c1003a1c:	09 ca                	or     %ecx,%edx
c1003a1e:	89 10                	mov    %edx,(%eax)
c1003a20:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1003a24:	81 7d e4 bf 03 00 00 	cmpl   $0x3bf,-0x1c(%ebp)
c1003a2b:	76 9c                	jbe    c10039c9 <copy_thread+0xac>
c1003a2d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a30:	8b 40 38             	mov    0x38(%eax),%eax
c1003a33:	8b 40 44             	mov    0x44(%eax),%eax
c1003a36:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003a3c:	29 d0                	sub    %edx,%eax
c1003a3e:	89 c1                	mov    %eax,%ecx
c1003a40:	8b 55 08             	mov    0x8(%ebp),%edx
c1003a43:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a46:	8b 40 38             	mov    0x38(%eax),%eax
c1003a49:	01 ca                	add    %ecx,%edx
c1003a4b:	89 50 44             	mov    %edx,0x44(%eax)
c1003a4e:	ba 00 39 00 c1       	mov    $0xc1003900,%edx
c1003a53:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a56:	89 50 3c             	mov    %edx,0x3c(%eax)
c1003a59:	8b 45 10             	mov    0x10(%ebp),%eax
c1003a5c:	8b 50 10             	mov    0x10(%eax),%edx
c1003a5f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a62:	89 50 44             	mov    %edx,0x44(%eax)
c1003a65:	8b 45 10             	mov    0x10(%ebp),%eax
c1003a68:	8b 50 14             	mov    0x14(%eax),%edx
c1003a6b:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a6e:	89 50 4c             	mov    %edx,0x4c(%eax)
c1003a71:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a74:	8b 40 38             	mov    0x38(%eax),%eax
c1003a77:	8b 50 44             	mov    0x44(%eax),%edx
c1003a7a:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a7d:	89 50 40             	mov    %edx,0x40(%eax)
c1003a80:	90                   	nop
c1003a81:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003a84:	5b                   	pop    %ebx
c1003a85:	5e                   	pop    %esi
c1003a86:	5f                   	pop    %edi
c1003a87:	5d                   	pop    %ebp
c1003a88:	c3                   	ret    

c1003a89 <update_inode_open_cnts>:
c1003a89:	55                   	push   %ebp
c1003a8a:	89 e5                	mov    %esp,%ebp
c1003a8c:	83 ec 18             	sub    $0x18,%esp
c1003a8f:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
c1003a96:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1003a9d:	e9 92 00 00 00       	jmp    c1003b34 <update_inode_open_cnts+0xab>
c1003aa2:	8b 45 08             	mov    0x8(%ebp),%eax
c1003aa5:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003aa8:	83 c2 1c             	add    $0x1c,%edx
c1003aab:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c1003aaf:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003ab2:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1003ab6:	7e 19                	jle    c1003ad1 <update_inode_open_cnts+0x48>
c1003ab8:	68 6b b6 00 c1       	push   $0xc100b66b
c1003abd:	68 e0 b7 00 c1       	push   $0xc100b7e0
c1003ac2:	68 5f 01 00 00       	push   $0x15f
c1003ac7:	68 88 b6 00 c1       	push   $0xc100b688
c1003acc:	e8 9a c8 ff ff       	call   c100036b <__PANIC>
c1003ad1:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1003ad5:	74 59                	je     c1003b30 <update_inode_open_cnts+0xa7>
c1003ad7:	83 ec 0c             	sub    $0xc,%esp
c1003ada:	ff 75 f4             	pushl  -0xc(%ebp)
c1003add:	e8 bd 70 00 00       	call   c100ab9f <is_pipe>
c1003ae2:	83 c4 10             	add    $0x10,%esp
c1003ae5:	85 c0                	test   %eax,%eax
c1003ae7:	74 2b                	je     c1003b14 <update_inode_open_cnts+0x8b>
c1003ae9:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003aec:	89 d0                	mov    %edx,%eax
c1003aee:	01 c0                	add    %eax,%eax
c1003af0:	01 d0                	add    %edx,%eax
c1003af2:	c1 e0 02             	shl    $0x2,%eax
c1003af5:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1003afa:	8b 00                	mov    (%eax),%eax
c1003afc:	8d 48 01             	lea    0x1(%eax),%ecx
c1003aff:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003b02:	89 d0                	mov    %edx,%eax
c1003b04:	01 c0                	add    %eax,%eax
c1003b06:	01 d0                	add    %edx,%eax
c1003b08:	c1 e0 02             	shl    $0x2,%eax
c1003b0b:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1003b10:	89 08                	mov    %ecx,(%eax)
c1003b12:	eb 1c                	jmp    c1003b30 <update_inode_open_cnts+0xa7>
c1003b14:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003b17:	89 d0                	mov    %edx,%eax
c1003b19:	01 c0                	add    %eax,%eax
c1003b1b:	01 d0                	add    %edx,%eax
c1003b1d:	c1 e0 02             	shl    $0x2,%eax
c1003b20:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1003b25:	8b 00                	mov    (%eax),%eax
c1003b27:	8b 50 08             	mov    0x8(%eax),%edx
c1003b2a:	83 c2 01             	add    $0x1,%edx
c1003b2d:	89 50 08             	mov    %edx,0x8(%eax)
c1003b30:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003b34:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1003b38:	0f 8e 64 ff ff ff    	jle    c1003aa2 <update_inode_open_cnts+0x19>
c1003b3e:	90                   	nop
c1003b3f:	90                   	nop
c1003b40:	c9                   	leave  
c1003b41:	c3                   	ret    

c1003b42 <do_fork>:
c1003b42:	55                   	push   %ebp
c1003b43:	89 e5                	mov    %esp,%ebp
c1003b45:	83 ec 18             	sub    $0x18,%esp
c1003b48:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c1003b4d:	3d 00 80 00 00       	cmp    $0x8000,%eax
c1003b52:	76 0a                	jbe    c1003b5e <do_fork+0x1c>
c1003b54:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003b59:	e9 7a 01 00 00       	jmp    c1003cd8 <do_fork+0x196>
c1003b5e:	83 ec 0c             	sub    $0xc,%esp
c1003b61:	6a 00                	push   $0x0
c1003b63:	e8 a1 fc ff ff       	call   c1003809 <alloc_task>
c1003b68:	83 c4 10             	add    $0x10,%esp
c1003b6b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003b6e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1003b72:	75 0a                	jne    c1003b7e <do_fork+0x3c>
c1003b74:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003b79:	e9 5a 01 00 00       	jmp    c1003cd8 <do_fork+0x196>
c1003b7e:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003b84:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003b87:	89 50 34             	mov    %edx,0x34(%eax)
c1003b8a:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003b8f:	8b 50 0c             	mov    0xc(%eax),%edx
c1003b92:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003b95:	89 50 10             	mov    %edx,0x10(%eax)
c1003b98:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003b9d:	8b 00                	mov    (%eax),%eax
c1003b9f:	85 c0                	test   %eax,%eax
c1003ba1:	74 19                	je     c1003bbc <do_fork+0x7a>
c1003ba3:	68 b9 b6 00 c1       	push   $0xc100b6b9
c1003ba8:	68 f8 b7 00 c1       	push   $0xc100b7f8
c1003bad:	68 80 01 00 00       	push   $0x180
c1003bb2:	68 88 b6 00 c1       	push   $0xc100b688
c1003bb7:	e8 af c7 ff ff       	call   c100036b <__PANIC>
c1003bbc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003bbf:	8d 90 00 20 00 00    	lea    0x2000(%eax),%edx
c1003bc5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003bc8:	89 50 28             	mov    %edx,0x28(%eax)
c1003bcb:	83 ec 0c             	sub    $0xc,%esp
c1003bce:	ff 75 f0             	pushl  -0x10(%ebp)
c1003bd1:	e8 c5 04 00 00       	call   c100409b <copy_user_cr3>
c1003bd6:	83 c4 10             	add    $0x10,%esp
c1003bd9:	83 ec 04             	sub    $0x4,%esp
c1003bdc:	ff 75 10             	pushl  0x10(%ebp)
c1003bdf:	ff 75 0c             	pushl  0xc(%ebp)
c1003be2:	ff 75 f0             	pushl  -0x10(%ebp)
c1003be5:	e8 33 fd ff ff       	call   c100391d <copy_thread>
c1003bea:	83 c4 10             	add    $0x10,%esp
c1003bed:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003bf4:	eb 20                	jmp    c1003c16 <do_fork+0xd4>
c1003bf6:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003bfb:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003bfe:	83 c2 1c             	add    $0x1c,%edx
c1003c01:	8b 54 90 04          	mov    0x4(%eax,%edx,4),%edx
c1003c05:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c08:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c1003c0b:	83 c1 1c             	add    $0x1c,%ecx
c1003c0e:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
c1003c12:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003c16:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1003c1a:	7e da                	jle    c1003bf6 <do_fork+0xb4>
c1003c1c:	83 ec 0c             	sub    $0xc,%esp
c1003c1f:	ff 75 f0             	pushl  -0x10(%ebp)
c1003c22:	e8 62 fe ff ff       	call   c1003a89 <update_inode_open_cnts>
c1003c27:	83 c4 10             	add    $0x10,%esp
c1003c2a:	e8 f7 f8 ff ff       	call   c1003526 <alloc_pid>
c1003c2f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003c32:	89 42 0c             	mov    %eax,0xc(%edx)
c1003c35:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c38:	8b 40 0c             	mov    0xc(%eax),%eax
c1003c3b:	85 c0                	test   %eax,%eax
c1003c3d:	79 0a                	jns    c1003c49 <do_fork+0x107>
c1003c3f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003c44:	e9 8f 00 00 00       	jmp    c1003cd8 <do_fork+0x196>
c1003c49:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c4c:	83 c0 5c             	add    $0x5c,%eax
c1003c4f:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003c52:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003c55:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003c58:	89 50 04             	mov    %edx,0x4(%eax)
c1003c5b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003c5e:	8b 50 04             	mov    0x4(%eax),%edx
c1003c61:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003c64:	89 10                	mov    %edx,(%eax)
c1003c66:	90                   	nop
c1003c67:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c6a:	83 c0 5c             	add    $0x5c,%eax
c1003c6d:	83 ec 0c             	sub    $0xc,%esp
c1003c70:	50                   	push   %eax
c1003c71:	e8 94 f9 ff ff       	call   c100360a <add_link>
c1003c76:	83 c4 10             	add    $0x10,%esp
c1003c79:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c7c:	83 c0 64             	add    $0x64,%eax
c1003c7f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003c82:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003c85:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003c88:	89 50 04             	mov    %edx,0x4(%eax)
c1003c8b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003c8e:	8b 50 04             	mov    0x4(%eax),%edx
c1003c91:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003c94:	89 10                	mov    %edx,(%eax)
c1003c96:	90                   	nop
c1003c97:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c9a:	83 c0 64             	add    $0x64,%eax
c1003c9d:	83 ec 0c             	sub    $0xc,%esp
c1003ca0:	50                   	push   %eax
c1003ca1:	e8 b4 f9 ff ff       	call   c100365a <add_all_link>
c1003ca6:	83 c4 10             	add    $0x10,%esp
c1003ca9:	83 ec 0c             	sub    $0xc,%esp
c1003cac:	ff 75 f0             	pushl  -0x10(%ebp)
c1003caf:	e8 29 fa ff ff       	call   c10036dd <add_pid_hash>
c1003cb4:	83 c4 10             	add    $0x10,%esp
c1003cb7:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c1003cbc:	83 c0 01             	add    $0x1,%eax
c1003cbf:	a3 94 1c 01 c1       	mov    %eax,0xc1011c94
c1003cc4:	83 ec 0c             	sub    $0xc,%esp
c1003cc7:	ff 75 f0             	pushl  -0x10(%ebp)
c1003cca:	e8 0b 00 00 00       	call   c1003cda <wakeup_task>
c1003ccf:	83 c4 10             	add    $0x10,%esp
c1003cd2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003cd5:	8b 40 0c             	mov    0xc(%eax),%eax
c1003cd8:	c9                   	leave  
c1003cd9:	c3                   	ret    

c1003cda <wakeup_task>:
c1003cda:	55                   	push   %ebp
c1003cdb:	89 e5                	mov    %esp,%ebp
c1003cdd:	8b 45 08             	mov    0x8(%ebp),%eax
c1003ce0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003ce6:	90                   	nop
c1003ce7:	5d                   	pop    %ebp
c1003ce8:	c3                   	ret    

c1003ce9 <kernel_thread>:
c1003ce9:	55                   	push   %ebp
c1003cea:	89 e5                	mov    %esp,%ebp
c1003cec:	83 ec 58             	sub    $0x58,%esp
c1003cef:	83 ec 04             	sub    $0x4,%esp
c1003cf2:	6a 4c                	push   $0x4c
c1003cf4:	6a 00                	push   $0x0
c1003cf6:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003cf9:	50                   	push   %eax
c1003cfa:	e8 ab c3 ff ff       	call   c10000aa <memset>
c1003cff:	83 c4 10             	add    $0x10,%esp
c1003d02:	66 c7 45 e8 08 00    	movw   $0x8,-0x18(%ebp)
c1003d08:	66 c7 45 f4 10 00    	movw   $0x10,-0xc(%ebp)
c1003d0e:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1003d12:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
c1003d16:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
c1003d1a:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
c1003d1e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d21:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1003d24:	8b 45 0c             	mov    0xc(%ebp),%eax
c1003d27:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1003d2a:	b8 68 4a 00 c1       	mov    $0xc1004a68,%eax
c1003d2f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003d32:	83 ec 04             	sub    $0x4,%esp
c1003d35:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003d38:	50                   	push   %eax
c1003d39:	6a 00                	push   $0x0
c1003d3b:	ff 75 10             	pushl  0x10(%ebp)
c1003d3e:	e8 ff fd ff ff       	call   c1003b42 <do_fork>
c1003d43:	83 c4 10             	add    $0x10,%esp
c1003d46:	c9                   	leave  
c1003d47:	c3                   	ret    

c1003d48 <task_run>:
c1003d48:	55                   	push   %ebp
c1003d49:	89 e5                	mov    %esp,%ebp
c1003d4b:	83 ec 18             	sub    $0x18,%esp
c1003d4e:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003d53:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003d56:	74 63                	je     c1003dbb <task_run+0x73>
c1003d58:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003d5d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003d60:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d63:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c1003d68:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003d6d:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003d70:	75 07                	jne    c1003d79 <task_run+0x31>
c1003d72:	e8 f5 cf ff ff       	call   c1000d6c <intr_enable>
c1003d77:	eb 05                	jmp    c1003d7e <task_run+0x36>
c1003d79:	e8 0d d0 ff ff       	call   c1000d8b <intr_disable>
c1003d7e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d81:	8b 40 28             	mov    0x28(%eax),%eax
c1003d84:	83 ec 0c             	sub    $0xc,%esp
c1003d87:	50                   	push   %eax
c1003d88:	e8 24 cc ff ff       	call   c10009b1 <set_ts_esp0>
c1003d8d:	83 c4 10             	add    $0x10,%esp
c1003d90:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d93:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d96:	83 ec 0c             	sub    $0xc,%esp
c1003d99:	50                   	push   %eax
c1003d9a:	e8 b7 c4 ff ff       	call   c1000256 <lcr3>
c1003d9f:	83 c4 10             	add    $0x10,%esp
c1003da2:	8b 45 08             	mov    0x8(%ebp),%eax
c1003da5:	8d 50 3c             	lea    0x3c(%eax),%edx
c1003da8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003dab:	83 c0 3c             	add    $0x3c,%eax
c1003dae:	83 ec 08             	sub    $0x8,%esp
c1003db1:	52                   	push   %edx
c1003db2:	50                   	push   %eax
c1003db3:	e8 b5 0c 00 00       	call   c1004a6d <switch_to>
c1003db8:	83 c4 10             	add    $0x10,%esp
c1003dbb:	90                   	nop
c1003dbc:	c9                   	leave  
c1003dbd:	c3                   	ret    

c1003dbe <schedule>:
c1003dbe:	55                   	push   %ebp
c1003dbf:	89 e5                	mov    %esp,%ebp
c1003dc1:	83 ec 18             	sub    $0x18,%esp
c1003dc4:	c7 45 ec 84 1c 01 c1 	movl   $0xc1011c84,-0x14(%ebp)
c1003dcb:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003dce:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003dd1:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003dd6:	8b 00                	mov    (%eax),%eax
c1003dd8:	85 c0                	test   %eax,%eax
c1003dda:	75 0c                	jne    c1003de8 <schedule+0x2a>
c1003ddc:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003de1:	8b 40 04             	mov    0x4(%eax),%eax
c1003de4:	85 c0                	test   %eax,%eax
c1003de6:	74 0b                	je     c1003df3 <schedule+0x35>
c1003de8:	0f b6 05 b4 1c 01 c1 	movzbl 0xc1011cb4,%eax
c1003def:	3c 01                	cmp    $0x1,%al
c1003df1:	75 48                	jne    c1003e3b <schedule+0x7d>
c1003df3:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003df8:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003dff:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003e04:	83 c0 5c             	add    $0x5c,%eax
c1003e07:	50                   	push   %eax
c1003e08:	e8 fd f7 ff ff       	call   c100360a <add_link>
c1003e0d:	83 c4 04             	add    $0x4,%esp
c1003e10:	eb 29                	jmp    c1003e3b <schedule+0x7d>
c1003e12:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003e15:	83 e8 5c             	sub    $0x5c,%eax
c1003e18:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003e1b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003e1e:	8b 00                	mov    (%eax),%eax
c1003e20:	85 c0                	test   %eax,%eax
c1003e22:	75 17                	jne    c1003e3b <schedule+0x7d>
c1003e24:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003e27:	8b 40 04             	mov    0x4(%eax),%eax
c1003e2a:	85 c0                	test   %eax,%eax
c1003e2c:	74 0d                	je     c1003e3b <schedule+0x7d>
c1003e2e:	ff 75 f4             	pushl  -0xc(%ebp)
c1003e31:	e8 74 f8 ff ff       	call   c10036aa <remove_link>
c1003e36:	83 c4 04             	add    $0x4,%esp
c1003e39:	eb 17                	jmp    c1003e52 <schedule+0x94>
c1003e3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003e3e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003e41:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003e44:	8b 40 04             	mov    0x4(%eax),%eax
c1003e47:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003e4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003e4d:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1003e50:	75 c0                	jne    c1003e12 <schedule+0x54>
c1003e52:	83 ec 0c             	sub    $0xc,%esp
c1003e55:	ff 75 f0             	pushl  -0x10(%ebp)
c1003e58:	e8 eb fe ff ff       	call   c1003d48 <task_run>
c1003e5d:	83 c4 10             	add    $0x10,%esp
c1003e60:	90                   	nop
c1003e61:	c9                   	leave  
c1003e62:	c3                   	ret    

c1003e63 <thread_block>:
c1003e63:	55                   	push   %ebp
c1003e64:	89 e5                	mov    %esp,%ebp
c1003e66:	83 ec 18             	sub    $0x18,%esp
c1003e69:	e8 3d cf ff ff       	call   c1000dab <intr_save>
c1003e6e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003e71:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003e76:	8b 55 08             	mov    0x8(%ebp),%edx
c1003e79:	89 10                	mov    %edx,(%eax)
c1003e7b:	e8 3e ff ff ff       	call   c1003dbe <schedule>
c1003e80:	83 ec 0c             	sub    $0xc,%esp
c1003e83:	ff 75 f4             	pushl  -0xc(%ebp)
c1003e86:	e8 33 cf ff ff       	call   c1000dbe <intr_restore>
c1003e8b:	83 c4 10             	add    $0x10,%esp
c1003e8e:	90                   	nop
c1003e8f:	c9                   	leave  
c1003e90:	c3                   	ret    

c1003e91 <thread_unblock>:
c1003e91:	55                   	push   %ebp
c1003e92:	89 e5                	mov    %esp,%ebp
c1003e94:	83 ec 18             	sub    $0x18,%esp
c1003e97:	c7 45 f0 84 1c 01 c1 	movl   $0xc1011c84,-0x10(%ebp)
c1003e9e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003ea1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003ea4:	e8 02 cf ff ff       	call   c1000dab <intr_save>
c1003ea9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003eac:	8b 45 08             	mov    0x8(%ebp),%eax
c1003eaf:	8b 00                	mov    (%eax),%eax
c1003eb1:	83 f8 01             	cmp    $0x1,%eax
c1003eb4:	74 19                	je     c1003ecf <thread_unblock+0x3e>
c1003eb6:	68 cb b6 00 c1       	push   $0xc100b6cb
c1003ebb:	68 00 b8 00 c1       	push   $0xc100b800
c1003ec0:	68 fc 01 00 00       	push   $0x1fc
c1003ec5:	68 88 b6 00 c1       	push   $0xc100b688
c1003eca:	e8 9c c4 ff ff       	call   c100036b <__PANIC>
c1003ecf:	8b 45 08             	mov    0x8(%ebp),%eax
c1003ed2:	8b 00                	mov    (%eax),%eax
c1003ed4:	85 c0                	test   %eax,%eax
c1003ed6:	74 58                	je     c1003f30 <thread_unblock+0x9f>
c1003ed8:	eb 24                	jmp    c1003efe <thread_unblock+0x6d>
c1003eda:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003edd:	83 e8 5c             	sub    $0x5c,%eax
c1003ee0:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003ee3:	75 19                	jne    c1003efe <thread_unblock+0x6d>
c1003ee5:	68 e4 b6 00 c1       	push   $0xc100b6e4
c1003eea:	68 00 b8 00 c1       	push   $0xc100b800
c1003eef:	68 01 02 00 00       	push   $0x201
c1003ef4:	68 88 b6 00 c1       	push   $0xc100b688
c1003ef9:	e8 6d c4 ff ff       	call   c100036b <__PANIC>
c1003efe:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003f01:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003f04:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003f07:	8b 40 04             	mov    0x4(%eax),%eax
c1003f0a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003f0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003f10:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1003f13:	75 c5                	jne    c1003eda <thread_unblock+0x49>
c1003f15:	8b 45 08             	mov    0x8(%ebp),%eax
c1003f18:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003f1e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003f21:	83 c0 5c             	add    $0x5c,%eax
c1003f24:	83 ec 0c             	sub    $0xc,%esp
c1003f27:	50                   	push   %eax
c1003f28:	e8 dd f6 ff ff       	call   c100360a <add_link>
c1003f2d:	83 c4 10             	add    $0x10,%esp
c1003f30:	83 ec 0c             	sub    $0xc,%esp
c1003f33:	ff 75 ec             	pushl  -0x14(%ebp)
c1003f36:	e8 83 ce ff ff       	call   c1000dbe <intr_restore>
c1003f3b:	83 c4 10             	add    $0x10,%esp
c1003f3e:	90                   	nop
c1003f3f:	c9                   	leave  
c1003f40:	c3                   	ret    

c1003f41 <print_taskinfo>:
c1003f41:	55                   	push   %ebp
c1003f42:	89 e5                	mov    %esp,%ebp
c1003f44:	83 ec 08             	sub    $0x8,%esp
c1003f47:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003f4c:	83 ec 0c             	sub    $0xc,%esp
c1003f4f:	50                   	push   %eax
c1003f50:	e8 80 f6 ff ff       	call   c10035d5 <get_task_name>
c1003f55:	83 c4 10             	add    $0x10,%esp
c1003f58:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003f5e:	8b 52 0c             	mov    0xc(%edx),%edx
c1003f61:	83 ec 04             	sub    $0x4,%esp
c1003f64:	50                   	push   %eax
c1003f65:	52                   	push   %edx
c1003f66:	68 18 b7 00 c1       	push   $0xc100b718
c1003f6b:	e8 42 18 00 00       	call   c10057b2 <printk>
c1003f70:	83 c4 10             	add    $0x10,%esp
c1003f73:	83 ec 08             	sub    $0x8,%esp
c1003f76:	ff 75 08             	pushl  0x8(%ebp)
c1003f79:	68 3a b7 00 c1       	push   $0xc100b73a
c1003f7e:	e8 2f 18 00 00       	call   c10057b2 <printk>
c1003f83:	83 c4 10             	add    $0x10,%esp
c1003f86:	83 ec 0c             	sub    $0xc,%esp
c1003f89:	68 47 b7 00 c1       	push   $0xc100b747
c1003f8e:	e8 1f 18 00 00       	call   c10057b2 <printk>
c1003f93:	83 c4 10             	add    $0x10,%esp
c1003f96:	b8 00 00 00 00       	mov    $0x0,%eax
c1003f9b:	c9                   	leave  
c1003f9c:	c3                   	ret    

c1003f9d <do_exit>:
c1003f9d:	55                   	push   %ebp
c1003f9e:	89 e5                	mov    %esp,%ebp
c1003fa0:	83 ec 08             	sub    $0x8,%esp
c1003fa3:	83 ec 0c             	sub    $0xc,%esp
c1003fa6:	68 63 b7 00 c1       	push   $0xc100b763
c1003fab:	e8 02 18 00 00       	call   c10057b2 <printk>
c1003fb0:	83 c4 10             	add    $0x10,%esp
c1003fb3:	eb fe                	jmp    c1003fb3 <do_exit+0x16>

c1003fb5 <do_execve>:
c1003fb5:	55                   	push   %ebp
c1003fb6:	89 e5                	mov    %esp,%ebp
c1003fb8:	b8 00 00 00 00       	mov    $0x0,%eax
c1003fbd:	5d                   	pop    %ebp
c1003fbe:	c3                   	ret    

c1003fbf <kernel_execve>:
c1003fbf:	55                   	push   %ebp
c1003fc0:	89 e5                	mov    %esp,%ebp
c1003fc2:	83 ec 18             	sub    $0x18,%esp
c1003fc5:	83 ec 0c             	sub    $0xc,%esp
c1003fc8:	ff 75 08             	pushl  0x8(%ebp)
c1003fcb:	e8 4e c1 ff ff       	call   c100011e <strlen>
c1003fd0:	83 c4 10             	add    $0x10,%esp
c1003fd3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003fd6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003fd9:	c9                   	leave  
c1003fda:	c3                   	ret    

c1003fdb <user_main>:
c1003fdb:	55                   	push   %ebp
c1003fdc:	89 e5                	mov    %esp,%ebp
c1003fde:	90                   	nop
c1003fdf:	5d                   	pop    %ebp
c1003fe0:	c3                   	ret    

c1003fe1 <set_user_cr3>:
c1003fe1:	55                   	push   %ebp
c1003fe2:	89 e5                	mov    %esp,%ebp
c1003fe4:	57                   	push   %edi
c1003fe5:	56                   	push   %esi
c1003fe6:	53                   	push   %ebx
c1003fe7:	83 ec 2c             	sub    $0x2c,%esp
c1003fea:	83 ec 08             	sub    $0x8,%esp
c1003fed:	6a 02                	push   $0x2
c1003fef:	68 00 10 00 00       	push   $0x1000
c1003ff4:	e8 ba ec ff ff       	call   c1002cb3 <vmm_malloc>
c1003ff9:	83 c4 10             	add    $0x10,%esp
c1003ffc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003fff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004002:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1004007:	ba 00 10 00 00       	mov    $0x1000,%edx
c100400c:	8b 0b                	mov    (%ebx),%ecx
c100400e:	89 08                	mov    %ecx,(%eax)
c1004010:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1004014:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1004018:	8d 78 04             	lea    0x4(%eax),%edi
c100401b:	83 e7 fc             	and    $0xfffffffc,%edi
c100401e:	29 f8                	sub    %edi,%eax
c1004020:	29 c3                	sub    %eax,%ebx
c1004022:	01 c2                	add    %eax,%edx
c1004024:	83 e2 fc             	and    $0xfffffffc,%edx
c1004027:	89 d0                	mov    %edx,%eax
c1004029:	c1 e8 02             	shr    $0x2,%eax
c100402c:	89 de                	mov    %ebx,%esi
c100402e:	89 c1                	mov    %eax,%ecx
c1004030:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1004032:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004035:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004038:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100403b:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100403e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004041:	c1 e8 16             	shr    $0x16,%eax
c1004044:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100404b:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100404e:	01 d0                	add    %edx,%eax
c1004050:	8b 00                	mov    (%eax),%eax
c1004052:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1004057:	2d 00 00 00 40       	sub    $0x40000000,%eax
c100405c:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100405f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004062:	c1 e8 0c             	shr    $0xc,%eax
c1004065:	25 ff 03 00 00       	and    $0x3ff,%eax
c100406a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004071:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004074:	01 d0                	add    %edx,%eax
c1004076:	8b 00                	mov    (%eax),%eax
c1004078:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100407d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1004080:	8b 45 08             	mov    0x8(%ebp),%eax
c1004083:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1004086:	89 50 2c             	mov    %edx,0x2c(%eax)
c1004089:	8b 45 08             	mov    0x8(%ebp),%eax
c100408c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100408f:	89 50 30             	mov    %edx,0x30(%eax)
c1004092:	90                   	nop
c1004093:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1004096:	5b                   	pop    %ebx
c1004097:	5e                   	pop    %esi
c1004098:	5f                   	pop    %edi
c1004099:	5d                   	pop    %ebp
c100409a:	c3                   	ret    

c100409b <copy_user_cr3>:
c100409b:	55                   	push   %ebp
c100409c:	89 e5                	mov    %esp,%ebp
c100409e:	57                   	push   %edi
c100409f:	56                   	push   %esi
c10040a0:	53                   	push   %ebx
c10040a1:	83 ec 2c             	sub    $0x2c,%esp
c10040a4:	83 ec 08             	sub    $0x8,%esp
c10040a7:	6a 02                	push   $0x2
c10040a9:	68 00 10 00 00       	push   $0x1000
c10040ae:	e8 00 ec ff ff       	call   c1002cb3 <vmm_malloc>
c10040b3:	83 c4 10             	add    $0x10,%esp
c10040b6:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10040b9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10040bc:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c10040c1:	ba 00 10 00 00       	mov    $0x1000,%edx
c10040c6:	8b 0b                	mov    (%ebx),%ecx
c10040c8:	89 08                	mov    %ecx,(%eax)
c10040ca:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c10040ce:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c10040d2:	8d 78 04             	lea    0x4(%eax),%edi
c10040d5:	83 e7 fc             	and    $0xfffffffc,%edi
c10040d8:	29 f8                	sub    %edi,%eax
c10040da:	29 c3                	sub    %eax,%ebx
c10040dc:	01 c2                	add    %eax,%edx
c10040de:	83 e2 fc             	and    $0xfffffffc,%edx
c10040e1:	89 d0                	mov    %edx,%eax
c10040e3:	c1 e8 02             	shr    $0x2,%eax
c10040e6:	89 de                	mov    %ebx,%esi
c10040e8:	89 c1                	mov    %eax,%ecx
c10040ea:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c10040ec:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10040f1:	8b 40 30             	mov    0x30(%eax),%eax
c10040f4:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10040f7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10040fa:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10040fd:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1004104:	eb 51                	jmp    c1004157 <copy_user_cr3+0xbc>
c1004106:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004109:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004110:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004113:	01 d0                	add    %edx,%eax
c1004115:	8b 00                	mov    (%eax),%eax
c1004117:	83 e0 01             	and    $0x1,%eax
c100411a:	85 c0                	test   %eax,%eax
c100411c:	74 13                	je     c1004131 <copy_user_cr3+0x96>
c100411e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004121:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004128:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100412b:	01 d0                	add    %edx,%eax
c100412d:	8b 00                	mov    (%eax),%eax
c100412f:	eb 11                	jmp    c1004142 <copy_user_cr3+0xa7>
c1004131:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004134:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100413b:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100413e:	01 d0                	add    %edx,%eax
c1004140:	8b 00                	mov    (%eax),%eax
c1004142:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1004145:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100414c:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100414f:	01 ca                	add    %ecx,%edx
c1004151:	89 02                	mov    %eax,(%edx)
c1004153:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1004157:	81 7d e4 ff 03 00 00 	cmpl   $0x3ff,-0x1c(%ebp)
c100415e:	7e a6                	jle    c1004106 <copy_user_cr3+0x6b>
c1004160:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004163:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1004166:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004169:	c1 e8 16             	shr    $0x16,%eax
c100416c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004173:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1004176:	01 d0                	add    %edx,%eax
c1004178:	8b 00                	mov    (%eax),%eax
c100417a:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100417f:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1004184:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1004187:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100418a:	c1 e8 0c             	shr    $0xc,%eax
c100418d:	25 ff 03 00 00       	and    $0x3ff,%eax
c1004192:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004199:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100419c:	01 d0                	add    %edx,%eax
c100419e:	8b 00                	mov    (%eax),%eax
c10041a0:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10041a5:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10041a8:	8b 45 08             	mov    0x8(%ebp),%eax
c10041ab:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10041ae:	89 50 30             	mov    %edx,0x30(%eax)
c10041b1:	8b 45 08             	mov    0x8(%ebp),%eax
c10041b4:	8b 55 cc             	mov    -0x34(%ebp),%edx
c10041b7:	89 50 2c             	mov    %edx,0x2c(%eax)
c10041ba:	90                   	nop
c10041bb:	8d 65 f4             	lea    -0xc(%ebp),%esp
c10041be:	5b                   	pop    %ebx
c10041bf:	5e                   	pop    %esi
c10041c0:	5f                   	pop    %edi
c10041c1:	5d                   	pop    %ebp
c10041c2:	c3                   	ret    

c10041c3 <list_traversal>:
c10041c3:	55                   	push   %ebp
c10041c4:	89 e5                	mov    %esp,%ebp
c10041c6:	83 ec 18             	sub    $0x18,%esp
c10041c9:	8b 45 08             	mov    0x8(%ebp),%eax
c10041cc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10041cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10041d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10041d8:	8b 40 04             	mov    0x4(%eax),%eax
c10041db:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c10041de:	75 07                	jne    c10041e7 <list_traversal+0x24>
c10041e0:	b8 01 00 00 00       	mov    $0x1,%eax
c10041e5:	eb 05                	jmp    c10041ec <list_traversal+0x29>
c10041e7:	b8 00 00 00 00       	mov    $0x0,%eax
c10041ec:	84 c0                	test   %al,%al
c10041ee:	74 21                	je     c1004211 <list_traversal+0x4e>
c10041f0:	b8 00 00 00 00       	mov    $0x0,%eax
c10041f5:	eb 36                	jmp    c100422d <list_traversal+0x6a>
c10041f7:	83 ec 08             	sub    $0x8,%esp
c10041fa:	ff 75 10             	pushl  0x10(%ebp)
c10041fd:	ff 75 f4             	pushl  -0xc(%ebp)
c1004200:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004203:	ff d0                	call   *%eax
c1004205:	83 c4 10             	add    $0x10,%esp
c1004208:	84 c0                	test   %al,%al
c100420a:	74 05                	je     c1004211 <list_traversal+0x4e>
c100420c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100420f:	eb 1c                	jmp    c100422d <list_traversal+0x6a>
c1004211:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004214:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004217:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100421a:	8b 40 04             	mov    0x4(%eax),%eax
c100421d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004220:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004223:	3b 45 08             	cmp    0x8(%ebp),%eax
c1004226:	75 cf                	jne    c10041f7 <list_traversal+0x34>
c1004228:	b8 00 00 00 00       	mov    $0x0,%eax
c100422d:	c9                   	leave  
c100422e:	c3                   	ret    

c100422f <task_exit>:
c100422f:	55                   	push   %ebp
c1004230:	89 e5                	mov    %esp,%ebp
c1004232:	83 ec 48             	sub    $0x48,%esp
c1004235:	c7 45 f0 84 1c 01 c1 	movl   $0xc1011c84,-0x10(%ebp)
c100423c:	c7 45 ec 8c 1c 01 c1 	movl   $0xc1011c8c,-0x14(%ebp)
c1004243:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004246:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004249:	e8 5d cb ff ff       	call   c1000dab <intr_save>
c100424e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004251:	8b 45 08             	mov    0x8(%ebp),%eax
c1004254:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
c100425a:	eb 59                	jmp    c10042b5 <task_exit+0x86>
c100425c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100425f:	83 e8 5c             	sub    $0x5c,%eax
c1004262:	39 45 08             	cmp    %eax,0x8(%ebp)
c1004265:	75 4e                	jne    c10042b5 <task_exit+0x86>
c1004267:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100426a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100426d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004270:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004273:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004276:	8b 40 04             	mov    0x4(%eax),%eax
c1004279:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100427c:	8b 12                	mov    (%edx),%edx
c100427e:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1004281:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004284:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004287:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100428a:	89 50 04             	mov    %edx,0x4(%eax)
c100428d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004290:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1004293:	89 10                	mov    %edx,(%eax)
c1004295:	90                   	nop
c1004296:	90                   	nop
c1004297:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100429a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100429d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10042a0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c10042a3:	89 50 04             	mov    %edx,0x4(%eax)
c10042a6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10042a9:	8b 50 04             	mov    0x4(%eax),%edx
c10042ac:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10042af:	89 10                	mov    %edx,(%eax)
c10042b1:	90                   	nop
c10042b2:	90                   	nop
c10042b3:	eb 17                	jmp    c10042cc <task_exit+0x9d>
c10042b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042b8:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10042bb:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10042be:	8b 40 04             	mov    0x4(%eax),%eax
c10042c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10042c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042c7:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c10042ca:	75 90                	jne    c100425c <task_exit+0x2d>
c10042cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10042cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10042d2:	eb 59                	jmp    c100432d <task_exit+0xfe>
c10042d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042d7:	83 e8 64             	sub    $0x64,%eax
c10042da:	39 45 08             	cmp    %eax,0x8(%ebp)
c10042dd:	75 4e                	jne    c100432d <task_exit+0xfe>
c10042df:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042e2:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10042e5:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10042e8:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10042eb:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10042ee:	8b 40 04             	mov    0x4(%eax),%eax
c10042f1:	8b 55 c8             	mov    -0x38(%ebp),%edx
c10042f4:	8b 12                	mov    (%edx),%edx
c10042f6:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c10042f9:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10042fc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c10042ff:	8b 55 c0             	mov    -0x40(%ebp),%edx
c1004302:	89 50 04             	mov    %edx,0x4(%eax)
c1004305:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1004308:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c100430b:	89 10                	mov    %edx,(%eax)
c100430d:	90                   	nop
c100430e:	90                   	nop
c100430f:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1004312:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1004315:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1004318:	8b 55 bc             	mov    -0x44(%ebp),%edx
c100431b:	89 50 04             	mov    %edx,0x4(%eax)
c100431e:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1004321:	8b 50 04             	mov    0x4(%eax),%edx
c1004324:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1004327:	89 10                	mov    %edx,(%eax)
c1004329:	90                   	nop
c100432a:	90                   	nop
c100432b:	eb 17                	jmp    c1004344 <task_exit+0x115>
c100432d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004330:	89 45 b8             	mov    %eax,-0x48(%ebp)
c1004333:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1004336:	8b 40 04             	mov    0x4(%eax),%eax
c1004339:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100433c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100433f:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1004342:	75 90                	jne    c10042d4 <task_exit+0xa5>
c1004344:	8b 45 08             	mov    0x8(%ebp),%eax
c1004347:	8b 40 0c             	mov    0xc(%eax),%eax
c100434a:	83 ec 0c             	sub    $0xc,%esp
c100434d:	50                   	push   %eax
c100434e:	e8 2f f2 ff ff       	call   c1003582 <free_pid>
c1004353:	83 c4 10             	add    $0x10,%esp
c1004356:	8b 45 08             	mov    0x8(%ebp),%eax
c1004359:	8b 40 30             	mov    0x30(%eax),%eax
c100435c:	83 ec 08             	sub    $0x8,%esp
c100435f:	68 00 10 00 00       	push   $0x1000
c1004364:	50                   	push   %eax
c1004365:	e8 6e ea ff ff       	call   c1002dd8 <vmm_free>
c100436a:	83 c4 10             	add    $0x10,%esp
c100436d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004370:	05 00 10 00 00       	add    $0x1000,%eax
c1004375:	83 ec 08             	sub    $0x8,%esp
c1004378:	68 00 10 00 00       	push   $0x1000
c100437d:	50                   	push   %eax
c100437e:	e8 55 ea ff ff       	call   c1002dd8 <vmm_free>
c1004383:	83 c4 10             	add    $0x10,%esp
c1004386:	8b 45 08             	mov    0x8(%ebp),%eax
c1004389:	83 ec 08             	sub    $0x8,%esp
c100438c:	68 00 10 00 00       	push   $0x1000
c1004391:	50                   	push   %eax
c1004392:	e8 41 ea ff ff       	call   c1002dd8 <vmm_free>
c1004397:	83 c4 10             	add    $0x10,%esp
c100439a:	83 ec 0c             	sub    $0xc,%esp
c100439d:	ff 75 e8             	pushl  -0x18(%ebp)
c10043a0:	e8 19 ca ff ff       	call   c1000dbe <intr_restore>
c10043a5:	83 c4 10             	add    $0x10,%esp
c10043a8:	90                   	nop
c10043a9:	c9                   	leave  
c10043aa:	c3                   	ret    

c10043ab <pte_ptr>:
c10043ab:	55                   	push   %ebp
c10043ac:	89 e5                	mov    %esp,%ebp
c10043ae:	83 ec 10             	sub    $0x10,%esp
c10043b1:	8b 45 08             	mov    0x8(%ebp),%eax
c10043b4:	c1 e8 0a             	shr    $0xa,%eax
c10043b7:	25 00 f0 3f 00       	and    $0x3ff000,%eax
c10043bc:	89 c2                	mov    %eax,%edx
c10043be:	8b 45 08             	mov    0x8(%ebp),%eax
c10043c1:	c1 e8 0c             	shr    $0xc,%eax
c10043c4:	25 ff 03 00 00       	and    $0x3ff,%eax
c10043c9:	c1 e0 02             	shl    $0x2,%eax
c10043cc:	01 d0                	add    %edx,%eax
c10043ce:	2d 00 00 40 00       	sub    $0x400000,%eax
c10043d3:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10043d6:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10043d9:	c9                   	leave  
c10043da:	c3                   	ret    

c10043db <release_prog_resource>:
c10043db:	55                   	push   %ebp
c10043dc:	89 e5                	mov    %esp,%ebp
c10043de:	83 ec 18             	sub    $0x18,%esp
c10043e1:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c10043e5:	e9 d9 00 00 00       	jmp    c10044c3 <release_prog_resource+0xe8>
c10043ea:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
c10043ee:	8b 45 08             	mov    0x8(%ebp),%eax
c10043f1:	83 c2 1c             	add    $0x1c,%edx
c10043f4:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c10043f8:	83 f8 ff             	cmp    $0xffffffff,%eax
c10043fb:	0f 84 b8 00 00 00    	je     c10044b9 <release_prog_resource+0xde>
c1004401:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004405:	83 ec 0c             	sub    $0xc,%esp
c1004408:	50                   	push   %eax
c1004409:	e8 91 67 00 00       	call   c100ab9f <is_pipe>
c100440e:	83 c4 10             	add    $0x10,%esp
c1004411:	85 c0                	test   %eax,%eax
c1004413:	0f 84 90 00 00 00    	je     c10044a9 <release_prog_resource+0xce>
c1004419:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100441d:	83 ec 0c             	sub    $0xc,%esp
c1004420:	50                   	push   %eax
c1004421:	e8 f4 2b 00 00       	call   c100701a <fd_local2global>
c1004426:	83 c4 10             	add    $0x10,%esp
c1004429:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100442c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100442f:	89 d0                	mov    %edx,%eax
c1004431:	01 c0                	add    %eax,%eax
c1004433:	01 d0                	add    %edx,%eax
c1004435:	c1 e0 02             	shl    $0x2,%eax
c1004438:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100443d:	8b 00                	mov    (%eax),%eax
c100443f:	8d 48 ff             	lea    -0x1(%eax),%ecx
c1004442:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004445:	89 d0                	mov    %edx,%eax
c1004447:	01 c0                	add    %eax,%eax
c1004449:	01 d0                	add    %edx,%eax
c100444b:	c1 e0 02             	shl    $0x2,%eax
c100444e:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1004453:	89 08                	mov    %ecx,(%eax)
c1004455:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004458:	89 d0                	mov    %edx,%eax
c100445a:	01 c0                	add    %eax,%eax
c100445c:	01 d0                	add    %edx,%eax
c100445e:	c1 e0 02             	shl    $0x2,%eax
c1004461:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1004466:	8b 00                	mov    (%eax),%eax
c1004468:	85 c0                	test   %eax,%eax
c100446a:	75 4d                	jne    c10044b9 <release_prog_resource+0xde>
c100446c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100446f:	89 d0                	mov    %edx,%eax
c1004471:	01 c0                	add    %eax,%eax
c1004473:	01 d0                	add    %edx,%eax
c1004475:	c1 e0 02             	shl    $0x2,%eax
c1004478:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100447d:	8b 00                	mov    (%eax),%eax
c100447f:	83 ec 08             	sub    $0x8,%esp
c1004482:	68 00 10 00 00       	push   $0x1000
c1004487:	50                   	push   %eax
c1004488:	e8 4b e9 ff ff       	call   c1002dd8 <vmm_free>
c100448d:	83 c4 10             	add    $0x10,%esp
c1004490:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004493:	89 d0                	mov    %edx,%eax
c1004495:	01 c0                	add    %eax,%eax
c1004497:	01 d0                	add    %edx,%eax
c1004499:	c1 e0 02             	shl    $0x2,%eax
c100449c:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10044a1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10044a7:	eb 10                	jmp    c10044b9 <release_prog_resource+0xde>
c10044a9:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10044ad:	83 ec 0c             	sub    $0xc,%esp
c10044b0:	50                   	push   %eax
c10044b1:	e8 a6 2b 00 00       	call   c100705c <sys_close>
c10044b6:	83 c4 10             	add    $0x10,%esp
c10044b9:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10044bd:	83 c0 01             	add    $0x1,%eax
c10044c0:	88 45 f7             	mov    %al,-0x9(%ebp)
c10044c3:	80 7d f7 1f          	cmpb   $0x1f,-0x9(%ebp)
c10044c7:	0f 86 1d ff ff ff    	jbe    c10043ea <release_prog_resource+0xf>
c10044cd:	90                   	nop
c10044ce:	90                   	nop
c10044cf:	c9                   	leave  
c10044d0:	c3                   	ret    

c10044d1 <find_child>:
c10044d1:	55                   	push   %ebp
c10044d2:	89 e5                	mov    %esp,%ebp
c10044d4:	83 ec 10             	sub    $0x10,%esp
c10044d7:	8b 45 08             	mov    0x8(%ebp),%eax
c10044da:	83 e8 64             	sub    $0x64,%eax
c10044dd:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10044e0:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10044e3:	8b 40 10             	mov    0x10(%eax),%eax
c10044e6:	39 45 0c             	cmp    %eax,0xc(%ebp)
c10044e9:	75 07                	jne    c10044f2 <find_child+0x21>
c10044eb:	b8 01 00 00 00       	mov    $0x1,%eax
c10044f0:	eb 05                	jmp    c10044f7 <find_child+0x26>
c10044f2:	b8 00 00 00 00       	mov    $0x0,%eax
c10044f7:	c9                   	leave  
c10044f8:	c3                   	ret    

c10044f9 <find_hanging_child>:
c10044f9:	55                   	push   %ebp
c10044fa:	89 e5                	mov    %esp,%ebp
c10044fc:	83 ec 10             	sub    $0x10,%esp
c10044ff:	8b 45 08             	mov    0x8(%ebp),%eax
c1004502:	83 e8 64             	sub    $0x64,%eax
c1004505:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004508:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100450b:	8b 40 10             	mov    0x10(%eax),%eax
c100450e:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1004511:	75 11                	jne    c1004524 <find_hanging_child+0x2b>
c1004513:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004516:	8b 00                	mov    (%eax),%eax
c1004518:	83 f8 02             	cmp    $0x2,%eax
c100451b:	75 07                	jne    c1004524 <find_hanging_child+0x2b>
c100451d:	b8 01 00 00 00       	mov    $0x1,%eax
c1004522:	eb 05                	jmp    c1004529 <find_hanging_child+0x30>
c1004524:	b8 00 00 00 00       	mov    $0x0,%eax
c1004529:	c9                   	leave  
c100452a:	c3                   	ret    

c100452b <task0_adopt_a_child>:
c100452b:	55                   	push   %ebp
c100452c:	89 e5                	mov    %esp,%ebp
c100452e:	83 ec 10             	sub    $0x10,%esp
c1004531:	8b 45 08             	mov    0x8(%ebp),%eax
c1004534:	83 e8 64             	sub    $0x64,%eax
c1004537:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100453a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100453d:	8b 40 10             	mov    0x10(%eax),%eax
c1004540:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1004543:	75 0a                	jne    c100454f <task0_adopt_a_child+0x24>
c1004545:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004548:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c100454f:	b8 00 00 00 00       	mov    $0x0,%eax
c1004554:	c9                   	leave  
c1004555:	c3                   	ret    

c1004556 <sys_wait>:
c1004556:	55                   	push   %ebp
c1004557:	89 e5                	mov    %esp,%ebp
c1004559:	83 ec 18             	sub    $0x18,%esp
c100455c:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004561:	8b 40 0c             	mov    0xc(%eax),%eax
c1004564:	83 ec 04             	sub    $0x4,%esp
c1004567:	50                   	push   %eax
c1004568:	68 f9 44 00 c1       	push   $0xc10044f9
c100456d:	68 8c 1c 01 c1       	push   $0xc1011c8c
c1004572:	e8 4c fc ff ff       	call   c10041c3 <list_traversal>
c1004577:	83 c4 10             	add    $0x10,%esp
c100457a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100457d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1004581:	74 37                	je     c10045ba <sys_wait+0x64>
c1004583:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004586:	83 e8 64             	sub    $0x64,%eax
c1004589:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100458c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100458f:	0f b6 80 fc 00 00 00 	movzbl 0xfc(%eax),%eax
c1004596:	0f be d0             	movsbl %al,%edx
c1004599:	8b 45 08             	mov    0x8(%ebp),%eax
c100459c:	89 10                	mov    %edx,(%eax)
c100459e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10045a1:	8b 40 0c             	mov    0xc(%eax),%eax
c10045a4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10045a7:	83 ec 0c             	sub    $0xc,%esp
c10045aa:	ff 75 f0             	pushl  -0x10(%ebp)
c10045ad:	e8 7d fc ff ff       	call   c100422f <task_exit>
c10045b2:	83 c4 10             	add    $0x10,%esp
c10045b5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10045b8:	eb 40                	jmp    c10045fa <sys_wait+0xa4>
c10045ba:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10045bf:	8b 40 0c             	mov    0xc(%eax),%eax
c10045c2:	83 ec 04             	sub    $0x4,%esp
c10045c5:	50                   	push   %eax
c10045c6:	68 d1 44 00 c1       	push   $0xc10044d1
c10045cb:	68 8c 1c 01 c1       	push   $0xc1011c8c
c10045d0:	e8 ee fb ff ff       	call   c10041c3 <list_traversal>
c10045d5:	83 c4 10             	add    $0x10,%esp
c10045d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10045db:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10045df:	75 07                	jne    c10045e8 <sys_wait+0x92>
c10045e1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10045e6:	eb 12                	jmp    c10045fa <sys_wait+0xa4>
c10045e8:	83 ec 0c             	sub    $0xc,%esp
c10045eb:	6a 01                	push   $0x1
c10045ed:	e8 71 f8 ff ff       	call   c1003e63 <thread_block>
c10045f2:	83 c4 10             	add    $0x10,%esp
c10045f5:	e9 62 ff ff ff       	jmp    c100455c <sys_wait+0x6>
c10045fa:	c9                   	leave  
c10045fb:	c3                   	ret    

c10045fc <sys_exit>:
c10045fc:	55                   	push   %ebp
c10045fd:	89 e5                	mov    %esp,%ebp
c10045ff:	83 ec 18             	sub    $0x18,%esp
c1004602:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004607:	8b 55 08             	mov    0x8(%ebp),%edx
c100460a:	88 90 fc 00 00 00    	mov    %dl,0xfc(%eax)
c1004610:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004615:	8b 40 10             	mov    0x10(%eax),%eax
c1004618:	83 f8 ff             	cmp    $0xffffffff,%eax
c100461b:	75 19                	jne    c1004636 <sys_exit+0x3a>
c100461d:	68 70 b7 00 c1       	push   $0xc100b770
c1004622:	68 10 b8 00 c1       	push   $0xc100b810
c1004627:	68 3c 03 00 00       	push   $0x33c
c100462c:	68 88 b6 00 c1       	push   $0xc100b688
c1004631:	e8 35 bd ff ff       	call   c100036b <__PANIC>
c1004636:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100463b:	8b 40 0c             	mov    0xc(%eax),%eax
c100463e:	83 ec 04             	sub    $0x4,%esp
c1004641:	50                   	push   %eax
c1004642:	68 2b 45 00 c1       	push   $0xc100452b
c1004647:	68 8c 1c 01 c1       	push   $0xc1011c8c
c100464c:	e8 72 fb ff ff       	call   c10041c3 <list_traversal>
c1004651:	83 c4 10             	add    $0x10,%esp
c1004654:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004659:	8b 40 10             	mov    0x10(%eax),%eax
c100465c:	83 ec 0c             	sub    $0xc,%esp
c100465f:	50                   	push   %eax
c1004660:	e8 39 f1 ff ff       	call   c100379e <find_task>
c1004665:	83 c4 10             	add    $0x10,%esp
c1004668:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100466b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100466e:	8b 00                	mov    (%eax),%eax
c1004670:	83 f8 01             	cmp    $0x1,%eax
c1004673:	75 0e                	jne    c1004683 <sys_exit+0x87>
c1004675:	83 ec 0c             	sub    $0xc,%esp
c1004678:	ff 75 f4             	pushl  -0xc(%ebp)
c100467b:	e8 11 f8 ff ff       	call   c1003e91 <thread_unblock>
c1004680:	83 c4 10             	add    $0x10,%esp
c1004683:	83 ec 0c             	sub    $0xc,%esp
c1004686:	6a 02                	push   $0x2
c1004688:	e8 d6 f7 ff ff       	call   c1003e63 <thread_block>
c100468d:	83 c4 10             	add    $0x10,%esp
c1004690:	90                   	nop
c1004691:	c9                   	leave  
c1004692:	c3                   	ret    

c1004693 <user_task_init>:
c1004693:	55                   	push   %ebp
c1004694:	89 e5                	mov    %esp,%ebp
c1004696:	53                   	push   %ebx
c1004697:	83 ec 14             	sub    $0x14,%esp
c100469a:	83 ec 0c             	sub    $0xc,%esp
c100469d:	6a 00                	push   $0x0
c100469f:	e8 65 f1 ff ff       	call   c1003809 <alloc_task>
c10046a4:	83 c4 10             	add    $0x10,%esp
c10046a7:	a3 0c 40 a1 c1       	mov    %eax,0xc1a1400c
c10046ac:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046b1:	85 c0                	test   %eax,%eax
c10046b3:	75 10                	jne    c10046c5 <user_task_init+0x32>
c10046b5:	83 ec 0c             	sub    $0xc,%esp
c10046b8:	68 4c b6 00 c1       	push   $0xc100b64c
c10046bd:	e8 f0 10 00 00       	call   c10057b2 <printk>
c10046c2:	83 c4 10             	add    $0x10,%esp
c10046c5:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046ca:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c10046d0:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046d5:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c10046dc:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046e1:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c10046e8:	8b 1d 0c 40 a1 c1    	mov    0xc1a1400c,%ebx
c10046ee:	e8 33 ee ff ff       	call   c1003526 <alloc_pid>
c10046f3:	89 43 0c             	mov    %eax,0xc(%ebx)
c10046f6:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046fb:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004702:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004707:	83 ec 08             	sub    $0x8,%esp
c100470a:	68 9a b7 00 c1       	push   $0xc100b79a
c100470f:	50                   	push   %eax
c1004710:	e8 8b ee ff ff       	call   c10035a0 <set_task_name>
c1004715:	83 c4 10             	add    $0x10,%esp
c1004718:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100471d:	89 c2                	mov    %eax,%edx
c100471f:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004724:	81 c2 00 20 00 00    	add    $0x2000,%edx
c100472a:	89 50 28             	mov    %edx,0x28(%eax)
c100472d:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004732:	83 ec 0c             	sub    $0xc,%esp
c1004735:	50                   	push   %eax
c1004736:	e8 a6 f8 ff ff       	call   c1003fe1 <set_user_cr3>
c100473b:	83 c4 10             	add    $0x10,%esp
c100473e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004743:	8d 90 b4 1f 00 00    	lea    0x1fb4(%eax),%edx
c1004749:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100474e:	89 50 38             	mov    %edx,0x38(%eax)
c1004751:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004756:	8b 40 38             	mov    0x38(%eax),%eax
c1004759:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1004760:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004765:	8b 40 38             	mov    0x38(%eax),%eax
c1004768:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100476f:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004774:	8b 40 38             	mov    0x38(%eax),%eax
c1004777:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c100477e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004783:	8b 40 38             	mov    0x38(%eax),%eax
c1004786:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c100478d:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004792:	8b 40 38             	mov    0x38(%eax),%eax
c1004795:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100479b:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047a0:	8b 40 38             	mov    0x38(%eax),%eax
c10047a3:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c10047aa:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047af:	8b 40 38             	mov    0x38(%eax),%eax
c10047b2:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10047b9:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047be:	8b 40 38             	mov    0x38(%eax),%eax
c10047c1:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c10047c8:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047cd:	8b 40 38             	mov    0x38(%eax),%eax
c10047d0:	66 c7 40 3c 1b 00    	movw   $0x1b,0x3c(%eax)
c10047d6:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047db:	8b 40 38             	mov    0x38(%eax),%eax
c10047de:	66 c7 40 48 23 00    	movw   $0x23,0x48(%eax)
c10047e4:	8b 15 0c 40 a1 c1    	mov    0xc1a1400c,%edx
c10047ea:	8b 52 38             	mov    0x38(%edx),%edx
c10047ed:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c10047f1:	66 89 42 24          	mov    %ax,0x24(%edx)
c10047f5:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047fa:	8b 40 38             	mov    0x38(%eax),%eax
c10047fd:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1004801:	66 89 50 28          	mov    %dx,0x28(%eax)
c1004805:	8b 15 0c 40 a1 c1    	mov    0xc1a1400c,%edx
c100480b:	8b 52 38             	mov    0x38(%edx),%edx
c100480e:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1004812:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1004816:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100481b:	8b 40 38             	mov    0x38(%eax),%eax
c100481e:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1004824:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004829:	8b 40 38             	mov    0x38(%eax),%eax
c100482c:	8b 55 08             	mov    0x8(%ebp),%edx
c100482f:	89 50 38             	mov    %edx,0x38(%eax)
c1004832:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004837:	8b 40 38             	mov    0x38(%eax),%eax
c100483a:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1004841:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004846:	89 c2                	mov    %eax,%edx
c1004848:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100484d:	8b 40 38             	mov    0x38(%eax),%eax
c1004850:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1004856:	89 50 44             	mov    %edx,0x44(%eax)
c1004859:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100485e:	8b 15 e6 0d 00 c1    	mov    0xc1000de6,%edx
c1004864:	89 50 3c             	mov    %edx,0x3c(%eax)
c1004867:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100486c:	89 c2                	mov    %eax,%edx
c100486e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004873:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1004879:	89 50 40             	mov    %edx,0x40(%eax)
c100487c:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004881:	8b 50 38             	mov    0x38(%eax),%edx
c1004884:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004889:	8b 52 10             	mov    0x10(%edx),%edx
c100488c:	89 50 44             	mov    %edx,0x44(%eax)
c100488f:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004894:	8b 50 38             	mov    0x38(%eax),%edx
c1004897:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100489c:	8b 52 14             	mov    0x14(%edx),%edx
c100489f:	89 50 4c             	mov    %edx,0x4c(%eax)
c10048a2:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048a7:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
c10048ae:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048b3:	c7 40 78 01 00 00 00 	movl   $0x1,0x78(%eax)
c10048ba:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048bf:	c7 40 7c 02 00 00 00 	movl   $0x2,0x7c(%eax)
c10048c6:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
c10048cd:	eb 17                	jmp    c10048e6 <user_task_init+0x253>
c10048cf:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048d4:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10048d7:	83 c2 1c             	add    $0x1c,%edx
c10048da:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c10048e1:	ff 
c10048e2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10048e6:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c10048ea:	7e e3                	jle    c10048cf <user_task_init+0x23c>
c10048ec:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048f1:	83 c0 5c             	add    $0x5c,%eax
c10048f4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10048f7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10048fa:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10048fd:	89 50 04             	mov    %edx,0x4(%eax)
c1004900:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004903:	8b 50 04             	mov    0x4(%eax),%edx
c1004906:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004909:	89 10                	mov    %edx,(%eax)
c100490b:	90                   	nop
c100490c:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004911:	83 c0 64             	add    $0x64,%eax
c1004914:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004917:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100491a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100491d:	89 50 04             	mov    %edx,0x4(%eax)
c1004920:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004923:	8b 50 04             	mov    0x4(%eax),%edx
c1004926:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004929:	89 10                	mov    %edx,(%eax)
c100492b:	90                   	nop
c100492c:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004931:	83 c0 64             	add    $0x64,%eax
c1004934:	83 ec 0c             	sub    $0xc,%esp
c1004937:	50                   	push   %eax
c1004938:	e8 1d ed ff ff       	call   c100365a <add_all_link>
c100493d:	83 c4 10             	add    $0x10,%esp
c1004940:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004945:	83 ec 0c             	sub    $0xc,%esp
c1004948:	50                   	push   %eax
c1004949:	e8 8f ed ff ff       	call   c10036dd <add_pid_hash>
c100494e:	83 c4 10             	add    $0x10,%esp
c1004951:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004956:	83 ec 0c             	sub    $0xc,%esp
c1004959:	50                   	push   %eax
c100495a:	e8 7b f3 ff ff       	call   c1003cda <wakeup_task>
c100495f:	83 c4 10             	add    $0x10,%esp
c1004962:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c1004967:	83 c0 01             	add    $0x1,%eax
c100496a:	a3 94 1c 01 c1       	mov    %eax,0xc1011c94
c100496f:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004974:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c1004979:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100497e:	8b 40 28             	mov    0x28(%eax),%eax
c1004981:	83 ec 0c             	sub    $0xc,%esp
c1004984:	50                   	push   %eax
c1004985:	e8 27 c0 ff ff       	call   c10009b1 <set_ts_esp0>
c100498a:	83 c4 10             	add    $0x10,%esp
c100498d:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004992:	8b 40 2c             	mov    0x2c(%eax),%eax
c1004995:	83 ec 0c             	sub    $0xc,%esp
c1004998:	50                   	push   %eax
c1004999:	e8 b8 b8 ff ff       	call   c1000256 <lcr3>
c100499e:	83 c4 10             	add    $0x10,%esp
c10049a1:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10049a6:	8b 40 38             	mov    0x38(%eax),%eax
c10049a9:	89 c4                	mov    %eax,%esp
c10049ab:	e9 36 c4 ff ff       	jmp    c1000de6 <__trapret>
c10049b0:	90                   	nop
c10049b1:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10049b4:	c9                   	leave  
c10049b5:	c3                   	ret    

c10049b6 <sys_print_task>:
c10049b6:	55                   	push   %ebp
c10049b7:	89 e5                	mov    %esp,%ebp
c10049b9:	83 ec 18             	sub    $0x18,%esp
c10049bc:	c7 45 f0 8c 1c 01 c1 	movl   $0xc1011c8c,-0x10(%ebp)
c10049c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10049c6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10049c9:	83 ec 0c             	sub    $0xc,%esp
c10049cc:	68 a4 b7 00 c1       	push   $0xc100b7a4
c10049d1:	e8 dc 0d 00 00       	call   c10057b2 <printk>
c10049d6:	83 c4 10             	add    $0x10,%esp
c10049d9:	eb 6e                	jmp    c1004a49 <sys_print_task+0x93>
c10049db:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10049de:	83 e8 64             	sub    $0x64,%eax
c10049e1:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10049e4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10049e7:	8d 50 14             	lea    0x14(%eax),%edx
c10049ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10049ed:	8b 40 0c             	mov    0xc(%eax),%eax
c10049f0:	83 ec 04             	sub    $0x4,%esp
c10049f3:	52                   	push   %edx
c10049f4:	50                   	push   %eax
c10049f5:	68 b6 b7 00 c1       	push   $0xc100b7b6
c10049fa:	e8 b3 0d 00 00       	call   c10057b2 <printk>
c10049ff:	83 c4 10             	add    $0x10,%esp
c1004a02:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a05:	8b 00                	mov    (%eax),%eax
c1004a07:	83 f8 ff             	cmp    $0xffffffff,%eax
c1004a0a:	75 12                	jne    c1004a1e <sys_print_task+0x68>
c1004a0c:	83 ec 0c             	sub    $0xc,%esp
c1004a0f:	68 be b7 00 c1       	push   $0xc100b7be
c1004a14:	e8 99 0d 00 00       	call   c10057b2 <printk>
c1004a19:	83 c4 10             	add    $0x10,%esp
c1004a1c:	eb 2b                	jmp    c1004a49 <sys_print_task+0x93>
c1004a1e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a21:	8b 00                	mov    (%eax),%eax
c1004a23:	85 c0                	test   %eax,%eax
c1004a25:	75 12                	jne    c1004a39 <sys_print_task+0x83>
c1004a27:	83 ec 0c             	sub    $0xc,%esp
c1004a2a:	68 ca b7 00 c1       	push   $0xc100b7ca
c1004a2f:	e8 7e 0d 00 00       	call   c10057b2 <printk>
c1004a34:	83 c4 10             	add    $0x10,%esp
c1004a37:	eb 10                	jmp    c1004a49 <sys_print_task+0x93>
c1004a39:	83 ec 0c             	sub    $0xc,%esp
c1004a3c:	68 d4 b7 00 c1       	push   $0xc100b7d4
c1004a41:	e8 6c 0d 00 00       	call   c10057b2 <printk>
c1004a46:	83 c4 10             	add    $0x10,%esp
c1004a49:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004a4c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004a4f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004a52:	8b 40 04             	mov    0x4(%eax),%eax
c1004a55:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004a58:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004a5b:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1004a5e:	0f 85 77 ff ff ff    	jne    c10049db <sys_print_task+0x25>
c1004a64:	90                   	nop
c1004a65:	90                   	nop
c1004a66:	c9                   	leave  
c1004a67:	c3                   	ret    

c1004a68 <kernel_thread_entry>:
c1004a68:	fb                   	sti    
c1004a69:	52                   	push   %edx
c1004a6a:	ff d3                	call   *%ebx
c1004a6c:	c3                   	ret    

c1004a6d <switch_to>:
c1004a6d:	8b 44 24 04          	mov    0x4(%esp),%eax
c1004a71:	8f 00                	popl   (%eax)
c1004a73:	89 60 04             	mov    %esp,0x4(%eax)
c1004a76:	89 58 08             	mov    %ebx,0x8(%eax)
c1004a79:	89 48 0c             	mov    %ecx,0xc(%eax)
c1004a7c:	89 50 10             	mov    %edx,0x10(%eax)
c1004a7f:	89 70 14             	mov    %esi,0x14(%eax)
c1004a82:	89 78 18             	mov    %edi,0x18(%eax)
c1004a85:	89 68 1c             	mov    %ebp,0x1c(%eax)
c1004a88:	8b 44 24 04          	mov    0x4(%esp),%eax
c1004a8c:	8b 68 1c             	mov    0x1c(%eax),%ebp
c1004a8f:	8b 78 18             	mov    0x18(%eax),%edi
c1004a92:	8b 70 14             	mov    0x14(%eax),%esi
c1004a95:	8b 50 10             	mov    0x10(%eax),%edx
c1004a98:	8b 48 0c             	mov    0xc(%eax),%ecx
c1004a9b:	8b 58 08             	mov    0x8(%eax),%ebx
c1004a9e:	8b 60 04             	mov    0x4(%eax),%esp
c1004aa1:	ff 30                	pushl  (%eax)
c1004aa3:	c3                   	ret    

c1004aa4 <hash32>:
c1004aa4:	55                   	push   %ebp
c1004aa5:	89 e5                	mov    %esp,%ebp
c1004aa7:	83 ec 10             	sub    $0x10,%esp
c1004aaa:	8b 45 08             	mov    0x8(%ebp),%eax
c1004aad:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1004ab3:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004ab6:	b8 20 00 00 00       	mov    $0x20,%eax
c1004abb:	2b 45 0c             	sub    0xc(%ebp),%eax
c1004abe:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1004ac1:	89 c1                	mov    %eax,%ecx
c1004ac3:	d3 ea                	shr    %cl,%edx
c1004ac5:	89 d0                	mov    %edx,%eax
c1004ac7:	c9                   	leave  
c1004ac8:	c3                   	ret    

c1004ac9 <segment_load>:
c1004ac9:	55                   	push   %ebp
c1004aca:	89 e5                	mov    %esp,%ebp
c1004acc:	83 ec 18             	sub    $0x18,%esp
c1004acf:	8b 45 14             	mov    0x14(%ebp),%eax
c1004ad2:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1004ad7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004ada:	8b 45 14             	mov    0x14(%ebp),%eax
c1004add:	25 ff 0f 00 00       	and    $0xfff,%eax
c1004ae2:	ba 00 10 00 00       	mov    $0x1000,%edx
c1004ae7:	29 c2                	sub    %eax,%edx
c1004ae9:	89 d0                	mov    %edx,%eax
c1004aeb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004aee:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004af5:	8b 45 10             	mov    0x10(%ebp),%eax
c1004af8:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1004afb:	76 1c                	jbe    c1004b19 <segment_load+0x50>
c1004afd:	8b 45 10             	mov    0x10(%ebp),%eax
c1004b00:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1004b03:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004b06:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004b09:	05 00 10 00 00       	add    $0x1000,%eax
c1004b0e:	c1 e8 0c             	shr    $0xc,%eax
c1004b11:	83 c0 01             	add    $0x1,%eax
c1004b14:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004b17:	eb 07                	jmp    c1004b20 <segment_load+0x57>
c1004b19:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c1004b20:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004b23:	c1 e0 0c             	shl    $0xc,%eax
c1004b26:	89 c2                	mov    %eax,%edx
c1004b28:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004b2b:	01 d0                	add    %edx,%eax
c1004b2d:	83 ec 04             	sub    $0x4,%esp
c1004b30:	68 00 00 00 60       	push   $0x60000000
c1004b35:	50                   	push   %eax
c1004b36:	ff 75 f0             	pushl  -0x10(%ebp)
c1004b39:	e8 95 e5 ff ff       	call   c10030d3 <sys_mmap>
c1004b3e:	83 c4 10             	add    $0x10,%esp
c1004b41:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004b44:	83 ec 04             	sub    $0x4,%esp
c1004b47:	6a 01                	push   $0x1
c1004b49:	50                   	push   %eax
c1004b4a:	ff 75 08             	pushl  0x8(%ebp)
c1004b4d:	e8 bc 28 00 00       	call   c100740e <sys_lseek>
c1004b52:	83 c4 10             	add    $0x10,%esp
c1004b55:	8b 45 14             	mov    0x14(%ebp),%eax
c1004b58:	83 ec 04             	sub    $0x4,%esp
c1004b5b:	ff 75 10             	pushl  0x10(%ebp)
c1004b5e:	50                   	push   %eax
c1004b5f:	ff 75 08             	pushl  0x8(%ebp)
c1004b62:	e8 50 27 00 00       	call   c10072b7 <sys_read>
c1004b67:	83 c4 10             	add    $0x10,%esp
c1004b6a:	b8 01 00 00 00       	mov    $0x1,%eax
c1004b6f:	c9                   	leave  
c1004b70:	c3                   	ret    

c1004b71 <load>:
c1004b71:	55                   	push   %ebp
c1004b72:	89 e5                	mov    %esp,%ebp
c1004b74:	83 ec 78             	sub    $0x78,%esp
c1004b77:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004b7e:	83 ec 04             	sub    $0x4,%esp
c1004b81:	6a 34                	push   $0x34
c1004b83:	6a 00                	push   $0x0
c1004b85:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004b88:	50                   	push   %eax
c1004b89:	e8 1c b5 ff ff       	call   c10000aa <memset>
c1004b8e:	83 c4 10             	add    $0x10,%esp
c1004b91:	83 ec 08             	sub    $0x8,%esp
c1004b94:	6a 00                	push   $0x0
c1004b96:	ff 75 08             	pushl  0x8(%ebp)
c1004b99:	e8 20 22 00 00       	call   c1006dbe <sys_open>
c1004b9e:	83 c4 10             	add    $0x10,%esp
c1004ba1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004ba4:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1004ba8:	75 0a                	jne    c1004bb4 <load+0x43>
c1004baa:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1004baf:	e9 48 01 00 00       	jmp    c1004cfc <load+0x18b>
c1004bb4:	83 ec 04             	sub    $0x4,%esp
c1004bb7:	6a 34                	push   $0x34
c1004bb9:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004bbc:	50                   	push   %eax
c1004bbd:	ff 75 e8             	pushl  -0x18(%ebp)
c1004bc0:	e8 f2 26 00 00       	call   c10072b7 <sys_read>
c1004bc5:	83 c4 10             	add    $0x10,%esp
c1004bc8:	83 f8 34             	cmp    $0x34,%eax
c1004bcb:	74 0c                	je     c1004bd9 <load+0x68>
c1004bcd:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004bd4:	e9 12 01 00 00       	jmp    c1004ceb <load+0x17a>
c1004bd9:	83 ec 04             	sub    $0x4,%esp
c1004bdc:	6a 07                	push   $0x7
c1004bde:	68 19 b8 00 c1       	push   $0xc100b819
c1004be3:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004be6:	50                   	push   %eax
c1004be7:	e8 76 b6 ff ff       	call   c1000262 <memcmp>
c1004bec:	83 c4 10             	add    $0x10,%esp
c1004bef:	85 c0                	test   %eax,%eax
c1004bf1:	75 30                	jne    c1004c23 <load+0xb2>
c1004bf3:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
c1004bf7:	66 83 f8 02          	cmp    $0x2,%ax
c1004bfb:	75 26                	jne    c1004c23 <load+0xb2>
c1004bfd:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
c1004c01:	66 83 f8 03          	cmp    $0x3,%ax
c1004c05:	75 1c                	jne    c1004c23 <load+0xb2>
c1004c07:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1004c0a:	83 f8 01             	cmp    $0x1,%eax
c1004c0d:	75 14                	jne    c1004c23 <load+0xb2>
c1004c0f:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
c1004c13:	66 3d 00 04          	cmp    $0x400,%ax
c1004c17:	77 0a                	ja     c1004c23 <load+0xb2>
c1004c19:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004c1d:	66 83 f8 20          	cmp    $0x20,%ax
c1004c21:	74 0c                	je     c1004c2f <load+0xbe>
c1004c23:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004c2a:	e9 bc 00 00 00       	jmp    c1004ceb <load+0x17a>
c1004c2f:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1004c32:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004c35:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004c39:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c1004c3d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1004c44:	e9 8c 00 00 00       	jmp    c1004cd5 <load+0x164>
c1004c49:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
c1004c4d:	83 ec 04             	sub    $0x4,%esp
c1004c50:	50                   	push   %eax
c1004c51:	6a 00                	push   $0x0
c1004c53:	8d 45 90             	lea    -0x70(%ebp),%eax
c1004c56:	50                   	push   %eax
c1004c57:	e8 4e b4 ff ff       	call   c10000aa <memset>
c1004c5c:	83 c4 10             	add    $0x10,%esp
c1004c5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004c62:	83 ec 04             	sub    $0x4,%esp
c1004c65:	6a 01                	push   $0x1
c1004c67:	50                   	push   %eax
c1004c68:	ff 75 e8             	pushl  -0x18(%ebp)
c1004c6b:	e8 9e 27 00 00       	call   c100740e <sys_lseek>
c1004c70:	83 c4 10             	add    $0x10,%esp
c1004c73:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
c1004c77:	83 ec 04             	sub    $0x4,%esp
c1004c7a:	50                   	push   %eax
c1004c7b:	8d 45 90             	lea    -0x70(%ebp),%eax
c1004c7e:	50                   	push   %eax
c1004c7f:	ff 75 e8             	pushl  -0x18(%ebp)
c1004c82:	e8 30 26 00 00       	call   c10072b7 <sys_read>
c1004c87:	83 c4 10             	add    $0x10,%esp
c1004c8a:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c1004c8e:	39 d0                	cmp    %edx,%eax
c1004c90:	74 09                	je     c1004c9b <load+0x12a>
c1004c92:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004c99:	eb 50                	jmp    c1004ceb <load+0x17a>
c1004c9b:	8b 45 90             	mov    -0x70(%ebp),%eax
c1004c9e:	83 f8 01             	cmp    $0x1,%eax
c1004ca1:	75 24                	jne    c1004cc7 <load+0x156>
c1004ca3:	8b 4d 98             	mov    -0x68(%ebp),%ecx
c1004ca6:	8b 55 a0             	mov    -0x60(%ebp),%edx
c1004ca9:	8b 45 94             	mov    -0x6c(%ebp),%eax
c1004cac:	51                   	push   %ecx
c1004cad:	52                   	push   %edx
c1004cae:	50                   	push   %eax
c1004caf:	ff 75 e8             	pushl  -0x18(%ebp)
c1004cb2:	e8 12 fe ff ff       	call   c1004ac9 <segment_load>
c1004cb7:	83 c4 10             	add    $0x10,%esp
c1004cba:	84 c0                	test   %al,%al
c1004cbc:	75 09                	jne    c1004cc7 <load+0x156>
c1004cbe:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004cc5:	eb 24                	jmp    c1004ceb <load+0x17a>
c1004cc7:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004ccb:	0f b7 c0             	movzwl %ax,%eax
c1004cce:	01 45 f0             	add    %eax,-0x10(%ebp)
c1004cd1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1004cd5:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
c1004cd9:	0f b7 c0             	movzwl %ax,%eax
c1004cdc:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c1004cdf:	0f 82 64 ff ff ff    	jb     c1004c49 <load+0xd8>
c1004ce5:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004ce8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004ceb:	83 ec 0c             	sub    $0xc,%esp
c1004cee:	ff 75 e8             	pushl  -0x18(%ebp)
c1004cf1:	e8 66 23 00 00       	call   c100705c <sys_close>
c1004cf6:	83 c4 10             	add    $0x10,%esp
c1004cf9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004cfc:	c9                   	leave  
c1004cfd:	c3                   	ret    

c1004cfe <sys_execv>:
c1004cfe:	55                   	push   %ebp
c1004cff:	89 e5                	mov    %esp,%ebp
c1004d01:	83 ec 18             	sub    $0x18,%esp
c1004d04:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004d0b:	eb 04                	jmp    c1004d11 <sys_execv+0x13>
c1004d0d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004d11:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004d14:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004d1b:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004d1e:	01 d0                	add    %edx,%eax
c1004d20:	8b 00                	mov    (%eax),%eax
c1004d22:	85 c0                	test   %eax,%eax
c1004d24:	75 e7                	jne    c1004d0d <sys_execv+0xf>
c1004d26:	83 ec 0c             	sub    $0xc,%esp
c1004d29:	ff 75 08             	pushl  0x8(%ebp)
c1004d2c:	e8 40 fe ff ff       	call   c1004b71 <load>
c1004d31:	83 c4 10             	add    $0x10,%esp
c1004d34:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004d37:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1004d3b:	75 07                	jne    c1004d44 <sys_execv+0x46>
c1004d3d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1004d42:	eb 6a                	jmp    c1004dae <sys_execv+0xb0>
c1004d44:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004d49:	83 c0 14             	add    $0x14,%eax
c1004d4c:	83 ec 04             	sub    $0x4,%esp
c1004d4f:	6a 14                	push   $0x14
c1004d51:	ff 75 08             	pushl  0x8(%ebp)
c1004d54:	50                   	push   %eax
c1004d55:	e8 ae b3 ff ff       	call   c1000108 <memcpy>
c1004d5a:	83 c4 10             	add    $0x10,%esp
c1004d5d:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004d62:	c6 40 27 00          	movb   $0x0,0x27(%eax)
c1004d66:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004d6b:	05 b4 1f 00 00       	add    $0x1fb4,%eax
c1004d70:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004d73:	8b 55 0c             	mov    0xc(%ebp),%edx
c1004d76:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004d79:	89 50 10             	mov    %edx,0x10(%eax)
c1004d7c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004d7f:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004d82:	89 50 18             	mov    %edx,0x18(%eax)
c1004d85:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004d88:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004d8b:	89 50 38             	mov    %edx,0x38(%eax)
c1004d8e:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004d93:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c1004d99:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004d9c:	89 50 44             	mov    %edx,0x44(%eax)
c1004d9f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004da2:	89 c4                	mov    %eax,%esp
c1004da4:	e9 3d c0 ff ff       	jmp    c1000de6 <__trapret>
c1004da9:	b8 00 00 00 00       	mov    $0x0,%eax
c1004dae:	c9                   	leave  
c1004daf:	c3                   	ret    

c1004db0 <pic_setmask>:
c1004db0:	55                   	push   %ebp
c1004db1:	89 e5                	mov    %esp,%ebp
c1004db3:	83 ec 28             	sub    $0x28,%esp
c1004db6:	8b 45 08             	mov    0x8(%ebp),%eax
c1004db9:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
c1004dbd:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004dc1:	66 a3 24 eb 00 c1    	mov    %ax,0xc100eb24
c1004dc7:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004dcb:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004dce:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004dd2:	66 c1 e8 08          	shr    $0x8,%ax
c1004dd6:	88 45 f6             	mov    %al,-0xa(%ebp)
c1004dd9:	0f b6 05 ad 1c 01 c1 	movzbl 0xc1011cad,%eax
c1004de0:	84 c0                	test   %al,%al
c1004de2:	74 27                	je     c1004e0b <pic_setmask+0x5b>
c1004de4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004de8:	83 ec 08             	sub    $0x8,%esp
c1004deb:	50                   	push   %eax
c1004dec:	6a 21                	push   $0x21
c1004dee:	e8 49 b2 ff ff       	call   c100003c <outb>
c1004df3:	83 c4 10             	add    $0x10,%esp
c1004df6:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1004dfa:	83 ec 08             	sub    $0x8,%esp
c1004dfd:	50                   	push   %eax
c1004dfe:	68 a1 00 00 00       	push   $0xa1
c1004e03:	e8 34 b2 ff ff       	call   c100003c <outb>
c1004e08:	83 c4 10             	add    $0x10,%esp
c1004e0b:	90                   	nop
c1004e0c:	c9                   	leave  
c1004e0d:	c3                   	ret    

c1004e0e <pic_enable>:
c1004e0e:	55                   	push   %ebp
c1004e0f:	89 e5                	mov    %esp,%ebp
c1004e11:	83 ec 08             	sub    $0x8,%esp
c1004e14:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e17:	ba 01 00 00 00       	mov    $0x1,%edx
c1004e1c:	89 c1                	mov    %eax,%ecx
c1004e1e:	d3 e2                	shl    %cl,%edx
c1004e20:	89 d0                	mov    %edx,%eax
c1004e22:	f7 d0                	not    %eax
c1004e24:	89 c2                	mov    %eax,%edx
c1004e26:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004e2d:	21 d0                	and    %edx,%eax
c1004e2f:	0f b7 c0             	movzwl %ax,%eax
c1004e32:	83 ec 0c             	sub    $0xc,%esp
c1004e35:	50                   	push   %eax
c1004e36:	e8 75 ff ff ff       	call   c1004db0 <pic_setmask>
c1004e3b:	83 c4 10             	add    $0x10,%esp
c1004e3e:	90                   	nop
c1004e3f:	c9                   	leave  
c1004e40:	c3                   	ret    

c1004e41 <pic_init>:
c1004e41:	55                   	push   %ebp
c1004e42:	89 e5                	mov    %esp,%ebp
c1004e44:	83 ec 08             	sub    $0x8,%esp
c1004e47:	c6 05 ad 1c 01 c1 01 	movb   $0x1,0xc1011cad
c1004e4e:	83 ec 08             	sub    $0x8,%esp
c1004e51:	68 ff 00 00 00       	push   $0xff
c1004e56:	6a 21                	push   $0x21
c1004e58:	e8 df b1 ff ff       	call   c100003c <outb>
c1004e5d:	83 c4 10             	add    $0x10,%esp
c1004e60:	83 ec 08             	sub    $0x8,%esp
c1004e63:	68 ff 00 00 00       	push   $0xff
c1004e68:	68 a1 00 00 00       	push   $0xa1
c1004e6d:	e8 ca b1 ff ff       	call   c100003c <outb>
c1004e72:	83 c4 10             	add    $0x10,%esp
c1004e75:	83 ec 08             	sub    $0x8,%esp
c1004e78:	6a 11                	push   $0x11
c1004e7a:	6a 20                	push   $0x20
c1004e7c:	e8 bb b1 ff ff       	call   c100003c <outb>
c1004e81:	83 c4 10             	add    $0x10,%esp
c1004e84:	83 ec 08             	sub    $0x8,%esp
c1004e87:	6a 11                	push   $0x11
c1004e89:	68 a0 00 00 00       	push   $0xa0
c1004e8e:	e8 a9 b1 ff ff       	call   c100003c <outb>
c1004e93:	83 c4 10             	add    $0x10,%esp
c1004e96:	83 ec 08             	sub    $0x8,%esp
c1004e99:	6a 20                	push   $0x20
c1004e9b:	6a 21                	push   $0x21
c1004e9d:	e8 9a b1 ff ff       	call   c100003c <outb>
c1004ea2:	83 c4 10             	add    $0x10,%esp
c1004ea5:	83 ec 08             	sub    $0x8,%esp
c1004ea8:	6a 28                	push   $0x28
c1004eaa:	68 a1 00 00 00       	push   $0xa1
c1004eaf:	e8 88 b1 ff ff       	call   c100003c <outb>
c1004eb4:	83 c4 10             	add    $0x10,%esp
c1004eb7:	83 ec 08             	sub    $0x8,%esp
c1004eba:	6a 04                	push   $0x4
c1004ebc:	6a 21                	push   $0x21
c1004ebe:	e8 79 b1 ff ff       	call   c100003c <outb>
c1004ec3:	83 c4 10             	add    $0x10,%esp
c1004ec6:	83 ec 08             	sub    $0x8,%esp
c1004ec9:	6a 02                	push   $0x2
c1004ecb:	68 a1 00 00 00       	push   $0xa1
c1004ed0:	e8 67 b1 ff ff       	call   c100003c <outb>
c1004ed5:	83 c4 10             	add    $0x10,%esp
c1004ed8:	83 ec 08             	sub    $0x8,%esp
c1004edb:	6a 03                	push   $0x3
c1004edd:	6a 21                	push   $0x21
c1004edf:	e8 58 b1 ff ff       	call   c100003c <outb>
c1004ee4:	83 c4 10             	add    $0x10,%esp
c1004ee7:	83 ec 08             	sub    $0x8,%esp
c1004eea:	6a 03                	push   $0x3
c1004eec:	68 a1 00 00 00       	push   $0xa1
c1004ef1:	e8 46 b1 ff ff       	call   c100003c <outb>
c1004ef6:	83 c4 10             	add    $0x10,%esp
c1004ef9:	83 ec 08             	sub    $0x8,%esp
c1004efc:	6a 68                	push   $0x68
c1004efe:	6a 20                	push   $0x20
c1004f00:	e8 37 b1 ff ff       	call   c100003c <outb>
c1004f05:	83 c4 10             	add    $0x10,%esp
c1004f08:	83 ec 08             	sub    $0x8,%esp
c1004f0b:	6a 68                	push   $0x68
c1004f0d:	68 a0 00 00 00       	push   $0xa0
c1004f12:	e8 25 b1 ff ff       	call   c100003c <outb>
c1004f17:	83 c4 10             	add    $0x10,%esp
c1004f1a:	83 ec 08             	sub    $0x8,%esp
c1004f1d:	6a 0a                	push   $0xa
c1004f1f:	6a 20                	push   $0x20
c1004f21:	e8 16 b1 ff ff       	call   c100003c <outb>
c1004f26:	83 c4 10             	add    $0x10,%esp
c1004f29:	83 ec 08             	sub    $0x8,%esp
c1004f2c:	6a 0a                	push   $0xa
c1004f2e:	68 a0 00 00 00       	push   $0xa0
c1004f33:	e8 04 b1 ff ff       	call   c100003c <outb>
c1004f38:	83 c4 10             	add    $0x10,%esp
c1004f3b:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004f42:	66 83 f8 ff          	cmp    $0xffff,%ax
c1004f46:	74 16                	je     c1004f5e <pic_init+0x11d>
c1004f48:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004f4f:	0f b7 c0             	movzwl %ax,%eax
c1004f52:	83 ec 0c             	sub    $0xc,%esp
c1004f55:	50                   	push   %eax
c1004f56:	e8 55 fe ff ff       	call   c1004db0 <pic_setmask>
c1004f5b:	83 c4 10             	add    $0x10,%esp
c1004f5e:	90                   	nop
c1004f5f:	c9                   	leave  
c1004f60:	c3                   	ret    

c1004f61 <delay>:
c1004f61:	55                   	push   %ebp
c1004f62:	89 e5                	mov    %esp,%ebp
c1004f64:	83 ec 08             	sub    $0x8,%esp
c1004f67:	83 ec 0c             	sub    $0xc,%esp
c1004f6a:	68 84 00 00 00       	push   $0x84
c1004f6f:	e8 8c b0 ff ff       	call   c1000000 <inb>
c1004f74:	83 c4 10             	add    $0x10,%esp
c1004f77:	83 ec 0c             	sub    $0xc,%esp
c1004f7a:	68 84 00 00 00       	push   $0x84
c1004f7f:	e8 7c b0 ff ff       	call   c1000000 <inb>
c1004f84:	83 c4 10             	add    $0x10,%esp
c1004f87:	83 ec 0c             	sub    $0xc,%esp
c1004f8a:	68 84 00 00 00       	push   $0x84
c1004f8f:	e8 6c b0 ff ff       	call   c1000000 <inb>
c1004f94:	83 c4 10             	add    $0x10,%esp
c1004f97:	83 ec 0c             	sub    $0xc,%esp
c1004f9a:	68 84 00 00 00       	push   $0x84
c1004f9f:	e8 5c b0 ff ff       	call   c1000000 <inb>
c1004fa4:	83 c4 10             	add    $0x10,%esp
c1004fa7:	90                   	nop
c1004fa8:	c9                   	leave  
c1004fa9:	c3                   	ret    

c1004faa <serial_init>:
c1004faa:	55                   	push   %ebp
c1004fab:	89 e5                	mov    %esp,%ebp
c1004fad:	83 ec 08             	sub    $0x8,%esp
c1004fb0:	83 ec 08             	sub    $0x8,%esp
c1004fb3:	6a 00                	push   $0x0
c1004fb5:	68 fa 03 00 00       	push   $0x3fa
c1004fba:	e8 7d b0 ff ff       	call   c100003c <outb>
c1004fbf:	83 c4 10             	add    $0x10,%esp
c1004fc2:	83 ec 08             	sub    $0x8,%esp
c1004fc5:	68 80 00 00 00       	push   $0x80
c1004fca:	68 fb 03 00 00       	push   $0x3fb
c1004fcf:	e8 68 b0 ff ff       	call   c100003c <outb>
c1004fd4:	83 c4 10             	add    $0x10,%esp
c1004fd7:	83 ec 08             	sub    $0x8,%esp
c1004fda:	6a 0c                	push   $0xc
c1004fdc:	68 f8 03 00 00       	push   $0x3f8
c1004fe1:	e8 56 b0 ff ff       	call   c100003c <outb>
c1004fe6:	83 c4 10             	add    $0x10,%esp
c1004fe9:	83 ec 08             	sub    $0x8,%esp
c1004fec:	6a 00                	push   $0x0
c1004fee:	68 f9 03 00 00       	push   $0x3f9
c1004ff3:	e8 44 b0 ff ff       	call   c100003c <outb>
c1004ff8:	83 c4 10             	add    $0x10,%esp
c1004ffb:	83 ec 08             	sub    $0x8,%esp
c1004ffe:	6a 03                	push   $0x3
c1005000:	68 fb 03 00 00       	push   $0x3fb
c1005005:	e8 32 b0 ff ff       	call   c100003c <outb>
c100500a:	83 c4 10             	add    $0x10,%esp
c100500d:	83 ec 08             	sub    $0x8,%esp
c1005010:	6a 00                	push   $0x0
c1005012:	68 fc 03 00 00       	push   $0x3fc
c1005017:	e8 20 b0 ff ff       	call   c100003c <outb>
c100501c:	83 c4 10             	add    $0x10,%esp
c100501f:	83 ec 08             	sub    $0x8,%esp
c1005022:	6a 01                	push   $0x1
c1005024:	68 f9 03 00 00       	push   $0x3f9
c1005029:	e8 0e b0 ff ff       	call   c100003c <outb>
c100502e:	83 c4 10             	add    $0x10,%esp
c1005031:	83 ec 0c             	sub    $0xc,%esp
c1005034:	68 fd 03 00 00       	push   $0x3fd
c1005039:	e8 c2 af ff ff       	call   c1000000 <inb>
c100503e:	83 c4 10             	add    $0x10,%esp
c1005041:	3c ff                	cmp    $0xff,%al
c1005043:	0f 95 c0             	setne  %al
c1005046:	a2 ae 1c 01 c1       	mov    %al,0xc1011cae
c100504b:	83 ec 0c             	sub    $0xc,%esp
c100504e:	68 fa 03 00 00       	push   $0x3fa
c1005053:	e8 a8 af ff ff       	call   c1000000 <inb>
c1005058:	83 c4 10             	add    $0x10,%esp
c100505b:	83 ec 0c             	sub    $0xc,%esp
c100505e:	68 f8 03 00 00       	push   $0x3f8
c1005063:	e8 98 af ff ff       	call   c1000000 <inb>
c1005068:	83 c4 10             	add    $0x10,%esp
c100506b:	0f b6 05 ae 1c 01 c1 	movzbl 0xc1011cae,%eax
c1005072:	84 c0                	test   %al,%al
c1005074:	74 1d                	je     c1005093 <serial_init+0xe9>
c1005076:	83 ec 0c             	sub    $0xc,%esp
c1005079:	68 21 b8 00 c1       	push   $0xc100b821
c100507e:	e8 2f 07 00 00       	call   c10057b2 <printk>
c1005083:	83 c4 10             	add    $0x10,%esp
c1005086:	83 ec 0c             	sub    $0xc,%esp
c1005089:	6a 04                	push   $0x4
c100508b:	e8 7e fd ff ff       	call   c1004e0e <pic_enable>
c1005090:	83 c4 10             	add    $0x10,%esp
c1005093:	90                   	nop
c1005094:	c9                   	leave  
c1005095:	c3                   	ret    

c1005096 <lpt_putc_sub>:
c1005096:	55                   	push   %ebp
c1005097:	89 e5                	mov    %esp,%ebp
c1005099:	83 ec 18             	sub    $0x18,%esp
c100509c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10050a3:	eb 09                	jmp    c10050ae <lpt_putc_sub+0x18>
c10050a5:	e8 b7 fe ff ff       	call   c1004f61 <delay>
c10050aa:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10050ae:	83 ec 0c             	sub    $0xc,%esp
c10050b1:	68 79 03 00 00       	push   $0x379
c10050b6:	e8 45 af ff ff       	call   c1000000 <inb>
c10050bb:	83 c4 10             	add    $0x10,%esp
c10050be:	84 c0                	test   %al,%al
c10050c0:	78 09                	js     c10050cb <lpt_putc_sub+0x35>
c10050c2:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c10050c9:	7e da                	jle    c10050a5 <lpt_putc_sub+0xf>
c10050cb:	8b 45 08             	mov    0x8(%ebp),%eax
c10050ce:	0f b6 c0             	movzbl %al,%eax
c10050d1:	83 ec 08             	sub    $0x8,%esp
c10050d4:	50                   	push   %eax
c10050d5:	68 78 03 00 00       	push   $0x378
c10050da:	e8 5d af ff ff       	call   c100003c <outb>
c10050df:	83 c4 10             	add    $0x10,%esp
c10050e2:	83 ec 08             	sub    $0x8,%esp
c10050e5:	6a 0d                	push   $0xd
c10050e7:	68 7a 03 00 00       	push   $0x37a
c10050ec:	e8 4b af ff ff       	call   c100003c <outb>
c10050f1:	83 c4 10             	add    $0x10,%esp
c10050f4:	83 ec 08             	sub    $0x8,%esp
c10050f7:	6a 08                	push   $0x8
c10050f9:	68 7a 03 00 00       	push   $0x37a
c10050fe:	e8 39 af ff ff       	call   c100003c <outb>
c1005103:	83 c4 10             	add    $0x10,%esp
c1005106:	90                   	nop
c1005107:	c9                   	leave  
c1005108:	c3                   	ret    

c1005109 <lpt_putc>:
c1005109:	55                   	push   %ebp
c100510a:	89 e5                	mov    %esp,%ebp
c100510c:	83 ec 08             	sub    $0x8,%esp
c100510f:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1005113:	74 10                	je     c1005125 <lpt_putc+0x1c>
c1005115:	83 ec 0c             	sub    $0xc,%esp
c1005118:	ff 75 08             	pushl  0x8(%ebp)
c100511b:	e8 76 ff ff ff       	call   c1005096 <lpt_putc_sub>
c1005120:	83 c4 10             	add    $0x10,%esp
c1005123:	eb 27                	jmp    c100514c <lpt_putc+0x43>
c1005125:	83 ec 0c             	sub    $0xc,%esp
c1005128:	6a 08                	push   $0x8
c100512a:	e8 67 ff ff ff       	call   c1005096 <lpt_putc_sub>
c100512f:	83 c4 10             	add    $0x10,%esp
c1005132:	83 ec 0c             	sub    $0xc,%esp
c1005135:	6a 20                	push   $0x20
c1005137:	e8 5a ff ff ff       	call   c1005096 <lpt_putc_sub>
c100513c:	83 c4 10             	add    $0x10,%esp
c100513f:	83 ec 0c             	sub    $0xc,%esp
c1005142:	6a 08                	push   $0x8
c1005144:	e8 4d ff ff ff       	call   c1005096 <lpt_putc_sub>
c1005149:	83 c4 10             	add    $0x10,%esp
c100514c:	90                   	nop
c100514d:	c9                   	leave  
c100514e:	c3                   	ret    

c100514f <cons_intr>:
c100514f:	55                   	push   %ebp
c1005150:	89 e5                	mov    %esp,%ebp
c1005152:	83 ec 18             	sub    $0x18,%esp
c1005155:	eb 3b                	jmp    c1005192 <cons_intr+0x43>
c1005157:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100515b:	74 35                	je     c1005192 <cons_intr+0x43>
c100515d:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c1005162:	8d 50 01             	lea    0x1(%eax),%edx
c1005165:	89 15 24 42 a1 c1    	mov    %edx,0xc1a14224
c100516b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100516e:	88 90 20 40 a1 c1    	mov    %dl,-0x3e5ebfe0(%eax)
c1005174:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005177:	a2 6c fc 00 c1       	mov    %al,0xc100fc6c
c100517c:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c1005181:	3d 00 02 00 00       	cmp    $0x200,%eax
c1005186:	75 0a                	jne    c1005192 <cons_intr+0x43>
c1005188:	c7 05 24 42 a1 c1 00 	movl   $0x0,0xc1a14224
c100518f:	00 00 00 
c1005192:	8b 45 08             	mov    0x8(%ebp),%eax
c1005195:	ff d0                	call   *%eax
c1005197:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100519a:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c100519e:	75 b7                	jne    c1005157 <cons_intr+0x8>
c10051a0:	90                   	nop
c10051a1:	90                   	nop
c10051a2:	c9                   	leave  
c10051a3:	c3                   	ret    

c10051a4 <serial_proc_data>:
c10051a4:	55                   	push   %ebp
c10051a5:	89 e5                	mov    %esp,%ebp
c10051a7:	83 ec 18             	sub    $0x18,%esp
c10051aa:	83 ec 0c             	sub    $0xc,%esp
c10051ad:	68 fd 03 00 00       	push   $0x3fd
c10051b2:	e8 49 ae ff ff       	call   c1000000 <inb>
c10051b7:	83 c4 10             	add    $0x10,%esp
c10051ba:	0f b6 c0             	movzbl %al,%eax
c10051bd:	83 e0 01             	and    $0x1,%eax
c10051c0:	85 c0                	test   %eax,%eax
c10051c2:	75 07                	jne    c10051cb <serial_proc_data+0x27>
c10051c4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10051c9:	eb 26                	jmp    c10051f1 <serial_proc_data+0x4d>
c10051cb:	83 ec 0c             	sub    $0xc,%esp
c10051ce:	68 f8 03 00 00       	push   $0x3f8
c10051d3:	e8 28 ae ff ff       	call   c1000000 <inb>
c10051d8:	83 c4 10             	add    $0x10,%esp
c10051db:	0f b6 c0             	movzbl %al,%eax
c10051de:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10051e1:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
c10051e5:	75 07                	jne    c10051ee <serial_proc_data+0x4a>
c10051e7:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
c10051ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10051f1:	c9                   	leave  
c10051f2:	c3                   	ret    

c10051f3 <serial_intr>:
c10051f3:	55                   	push   %ebp
c10051f4:	89 e5                	mov    %esp,%ebp
c10051f6:	83 ec 08             	sub    $0x8,%esp
c10051f9:	0f b6 05 ae 1c 01 c1 	movzbl 0xc1011cae,%eax
c1005200:	84 c0                	test   %al,%al
c1005202:	74 10                	je     c1005214 <serial_intr+0x21>
c1005204:	83 ec 0c             	sub    $0xc,%esp
c1005207:	68 a4 51 00 c1       	push   $0xc10051a4
c100520c:	e8 3e ff ff ff       	call   c100514f <cons_intr>
c1005211:	83 c4 10             	add    $0x10,%esp
c1005214:	90                   	nop
c1005215:	c9                   	leave  
c1005216:	c3                   	ret    

c1005217 <serial_putc_sub>:
c1005217:	55                   	push   %ebp
c1005218:	89 e5                	mov    %esp,%ebp
c100521a:	83 ec 18             	sub    $0x18,%esp
c100521d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005224:	eb 09                	jmp    c100522f <serial_putc_sub+0x18>
c1005226:	e8 36 fd ff ff       	call   c1004f61 <delay>
c100522b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100522f:	83 ec 0c             	sub    $0xc,%esp
c1005232:	68 fd 03 00 00       	push   $0x3fd
c1005237:	e8 c4 ad ff ff       	call   c1000000 <inb>
c100523c:	83 c4 10             	add    $0x10,%esp
c100523f:	0f b6 c0             	movzbl %al,%eax
c1005242:	83 e0 20             	and    $0x20,%eax
c1005245:	85 c0                	test   %eax,%eax
c1005247:	75 09                	jne    c1005252 <serial_putc_sub+0x3b>
c1005249:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c1005250:	7e d4                	jle    c1005226 <serial_putc_sub+0xf>
c1005252:	8b 45 08             	mov    0x8(%ebp),%eax
c1005255:	0f b6 c0             	movzbl %al,%eax
c1005258:	83 ec 08             	sub    $0x8,%esp
c100525b:	50                   	push   %eax
c100525c:	68 f8 03 00 00       	push   $0x3f8
c1005261:	e8 d6 ad ff ff       	call   c100003c <outb>
c1005266:	83 c4 10             	add    $0x10,%esp
c1005269:	90                   	nop
c100526a:	c9                   	leave  
c100526b:	c3                   	ret    

c100526c <serial_putc>:
c100526c:	55                   	push   %ebp
c100526d:	89 e5                	mov    %esp,%ebp
c100526f:	83 ec 08             	sub    $0x8,%esp
c1005272:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1005276:	74 10                	je     c1005288 <serial_putc+0x1c>
c1005278:	83 ec 0c             	sub    $0xc,%esp
c100527b:	ff 75 08             	pushl  0x8(%ebp)
c100527e:	e8 94 ff ff ff       	call   c1005217 <serial_putc_sub>
c1005283:	83 c4 10             	add    $0x10,%esp
c1005286:	eb 27                	jmp    c10052af <serial_putc+0x43>
c1005288:	83 ec 0c             	sub    $0xc,%esp
c100528b:	6a 08                	push   $0x8
c100528d:	e8 85 ff ff ff       	call   c1005217 <serial_putc_sub>
c1005292:	83 c4 10             	add    $0x10,%esp
c1005295:	83 ec 0c             	sub    $0xc,%esp
c1005298:	6a 20                	push   $0x20
c100529a:	e8 78 ff ff ff       	call   c1005217 <serial_putc_sub>
c100529f:	83 c4 10             	add    $0x10,%esp
c10052a2:	83 ec 0c             	sub    $0xc,%esp
c10052a5:	6a 08                	push   $0x8
c10052a7:	e8 6b ff ff ff       	call   c1005217 <serial_putc_sub>
c10052ac:	83 c4 10             	add    $0x10,%esp
c10052af:	90                   	nop
c10052b0:	c9                   	leave  
c10052b1:	c3                   	ret    

c10052b2 <timer_init>:
c10052b2:	55                   	push   %ebp
c10052b3:	89 e5                	mov    %esp,%ebp
c10052b5:	83 ec 18             	sub    $0x18,%esp
c10052b8:	b8 dc 34 12 00       	mov    $0x1234dc,%eax
c10052bd:	ba 00 00 00 00       	mov    $0x0,%edx
c10052c2:	f7 75 08             	divl   0x8(%ebp)
c10052c5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10052c8:	83 ec 08             	sub    $0x8,%esp
c10052cb:	6a 36                	push   $0x36
c10052cd:	6a 43                	push   $0x43
c10052cf:	e8 68 ad ff ff       	call   c100003c <outb>
c10052d4:	83 c4 10             	add    $0x10,%esp
c10052d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10052da:	88 45 f3             	mov    %al,-0xd(%ebp)
c10052dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10052e0:	c1 e8 08             	shr    $0x8,%eax
c10052e3:	88 45 f2             	mov    %al,-0xe(%ebp)
c10052e6:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c10052ea:	83 ec 08             	sub    $0x8,%esp
c10052ed:	50                   	push   %eax
c10052ee:	6a 40                	push   $0x40
c10052f0:	e8 47 ad ff ff       	call   c100003c <outb>
c10052f5:	83 c4 10             	add    $0x10,%esp
c10052f8:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
c10052fc:	83 ec 08             	sub    $0x8,%esp
c10052ff:	50                   	push   %eax
c1005300:	6a 40                	push   $0x40
c1005302:	e8 35 ad ff ff       	call   c100003c <outb>
c1005307:	83 c4 10             	add    $0x10,%esp
c100530a:	c7 05 2c 42 a1 c1 00 	movl   $0x0,0xc1a1422c
c1005311:	00 00 00 
c1005314:	c7 05 28 42 a1 c1 00 	movl   $0x0,0xc1a14228
c100531b:	00 00 00 
c100531e:	83 ec 0c             	sub    $0xc,%esp
c1005321:	6a 00                	push   $0x0
c1005323:	e8 e6 fa ff ff       	call   c1004e0e <pic_enable>
c1005328:	83 c4 10             	add    $0x10,%esp
c100532b:	90                   	nop
c100532c:	c9                   	leave  
c100532d:	c3                   	ret    

c100532e <print_cursor>:
c100532e:	55                   	push   %ebp
c100532f:	89 e5                	mov    %esp,%ebp
c1005331:	83 ec 28             	sub    $0x28,%esp
c1005334:	8b 55 08             	mov    0x8(%ebp),%edx
c1005337:	8b 45 0c             	mov    0xc(%ebp),%eax
c100533a:	88 55 e4             	mov    %dl,-0x1c(%ebp)
c100533d:	88 45 e0             	mov    %al,-0x20(%ebp)
c1005340:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
c1005344:	89 d0                	mov    %edx,%eax
c1005346:	c1 e0 02             	shl    $0x2,%eax
c1005349:	01 d0                	add    %edx,%eax
c100534b:	c1 e0 04             	shl    $0x4,%eax
c100534e:	89 c2                	mov    %eax,%edx
c1005350:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1005354:	01 d0                	add    %edx,%eax
c1005356:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c100535a:	83 ec 08             	sub    $0x8,%esp
c100535d:	6a 0e                	push   $0xe
c100535f:	68 d4 03 00 00       	push   $0x3d4
c1005364:	e8 d3 ac ff ff       	call   c100003c <outb>
c1005369:	83 c4 10             	add    $0x10,%esp
c100536c:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1005370:	66 c1 e8 08          	shr    $0x8,%ax
c1005374:	0f b6 c0             	movzbl %al,%eax
c1005377:	83 ec 08             	sub    $0x8,%esp
c100537a:	50                   	push   %eax
c100537b:	68 d5 03 00 00       	push   $0x3d5
c1005380:	e8 b7 ac ff ff       	call   c100003c <outb>
c1005385:	83 c4 10             	add    $0x10,%esp
c1005388:	83 ec 08             	sub    $0x8,%esp
c100538b:	6a 0f                	push   $0xf
c100538d:	68 d4 03 00 00       	push   $0x3d4
c1005392:	e8 a5 ac ff ff       	call   c100003c <outb>
c1005397:	83 c4 10             	add    $0x10,%esp
c100539a:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c100539e:	0f b6 c0             	movzbl %al,%eax
c10053a1:	83 ec 08             	sub    $0x8,%esp
c10053a4:	50                   	push   %eax
c10053a5:	68 d5 03 00 00       	push   $0x3d5
c10053aa:	e8 8d ac ff ff       	call   c100003c <outb>
c10053af:	83 c4 10             	add    $0x10,%esp
c10053b2:	90                   	nop
c10053b3:	c9                   	leave  
c10053b4:	c3                   	ret    

c10053b5 <clear>:
c10053b5:	55                   	push   %ebp
c10053b6:	89 e5                	mov    %esp,%ebp
c10053b8:	83 ec 18             	sub    $0x18,%esp
c10053bb:	66 c7 45 f4 00 0f    	movw   $0xf00,-0xc(%ebp)
c10053c1:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10053c5:	83 c8 20             	or     $0x20,%eax
c10053c8:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c10053cc:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c10053d2:	eb 1f                	jmp    c10053f3 <clear+0x3e>
c10053d4:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c10053d9:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
c10053dd:	01 d2                	add    %edx,%edx
c10053df:	01 c2                	add    %eax,%edx
c10053e1:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c10053e5:	66 89 02             	mov    %ax,(%edx)
c10053e8:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10053ec:	83 c0 01             	add    $0x1,%eax
c10053ef:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10053f3:	66 81 7d f6 cf 07    	cmpw   $0x7cf,-0xa(%ebp)
c10053f9:	76 d9                	jbe    c10053d4 <clear+0x1f>
c10053fb:	c6 05 af 1c 01 c1 00 	movb   $0x0,0xc1011caf
c1005402:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c1005409:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005410:	0f b6 d0             	movzbl %al,%edx
c1005413:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c100541a:	0f b6 c0             	movzbl %al,%eax
c100541d:	83 ec 08             	sub    $0x8,%esp
c1005420:	52                   	push   %edx
c1005421:	50                   	push   %eax
c1005422:	e8 07 ff ff ff       	call   c100532e <print_cursor>
c1005427:	83 c4 10             	add    $0x10,%esp
c100542a:	90                   	nop
c100542b:	c9                   	leave  
c100542c:	c3                   	ret    

c100542d <print_char>:
c100542d:	55                   	push   %ebp
c100542e:	89 e5                	mov    %esp,%ebp
c1005430:	83 ec 28             	sub    $0x28,%esp
c1005433:	8b 45 08             	mov    0x8(%ebp),%eax
c1005436:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1005439:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c100543f:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c1005445:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c100544c:	3c 18                	cmp    $0x18,%al
c100544e:	76 05                	jbe    c1005455 <print_char+0x28>
c1005450:	e8 60 ff ff ff       	call   c10053b5 <clear>
c1005455:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c100545c:	0f b6 d0             	movzbl %al,%edx
c100545f:	89 d0                	mov    %edx,%eax
c1005461:	c1 e0 02             	shl    $0x2,%eax
c1005464:	01 d0                	add    %edx,%eax
c1005466:	c1 e0 04             	shl    $0x4,%eax
c1005469:	89 c2                	mov    %eax,%edx
c100546b:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005472:	0f b6 c0             	movzbl %al,%eax
c1005475:	01 d0                	add    %edx,%eax
c1005477:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c100547b:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
c100547f:	83 f8 09             	cmp    $0x9,%eax
c1005482:	74 20                	je     c10054a4 <print_char+0x77>
c1005484:	83 f8 0a             	cmp    $0xa,%eax
c1005487:	75 2f                	jne    c10054b8 <print_char+0x8b>
c1005489:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c1005490:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005497:	83 c0 01             	add    $0x1,%eax
c100549a:	a2 af 1c 01 c1       	mov    %al,0xc1011caf
c100549f:	e9 82 00 00 00       	jmp    c1005526 <print_char+0xf9>
c10054a4:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10054ab:	83 c0 08             	add    $0x8,%eax
c10054ae:	83 e0 f8             	and    $0xfffffff8,%eax
c10054b1:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c10054b6:	eb 6e                	jmp    c1005526 <print_char+0xf9>
c10054b8:	66 0f be 45 e4       	movsbw -0x1c(%ebp),%ax
c10054bd:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
c10054c1:	8b 45 0c             	mov    0xc(%ebp),%eax
c10054c4:	c1 e0 04             	shl    $0x4,%eax
c10054c7:	0f b6 c0             	movzbl %al,%eax
c10054ca:	8b 55 10             	mov    0x10(%ebp),%edx
c10054cd:	83 e2 0f             	and    $0xf,%edx
c10054d0:	09 d0                	or     %edx,%eax
c10054d2:	c1 e0 08             	shl    $0x8,%eax
c10054d5:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10054d9:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10054dd:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c10054e1:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c10054e6:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c10054ea:	01 d2                	add    %edx,%edx
c10054ec:	01 c2                	add    %eax,%edx
c10054ee:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10054f2:	66 89 02             	mov    %ax,(%edx)
c10054f5:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10054fc:	83 c0 01             	add    $0x1,%eax
c10054ff:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c1005504:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100550b:	3c 4f                	cmp    $0x4f,%al
c100550d:	76 16                	jbe    c1005525 <print_char+0xf8>
c100550f:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c1005516:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c100551d:	83 c0 01             	add    $0x1,%eax
c1005520:	a2 af 1c 01 c1       	mov    %al,0xc1011caf
c1005525:	90                   	nop
c1005526:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100552d:	0f b6 d0             	movzbl %al,%edx
c1005530:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005537:	0f b6 c0             	movzbl %al,%eax
c100553a:	83 ec 08             	sub    $0x8,%esp
c100553d:	52                   	push   %edx
c100553e:	50                   	push   %eax
c100553f:	e8 ea fd ff ff       	call   c100532e <print_cursor>
c1005544:	83 c4 10             	add    $0x10,%esp
c1005547:	90                   	nop
c1005548:	c9                   	leave  
c1005549:	c3                   	ret    

c100554a <print_string>:
c100554a:	55                   	push   %ebp
c100554b:	89 e5                	mov    %esp,%ebp
c100554d:	83 ec 08             	sub    $0x8,%esp
c1005550:	eb 21                	jmp    c1005573 <print_string+0x29>
c1005552:	8b 45 08             	mov    0x8(%ebp),%eax
c1005555:	8d 50 01             	lea    0x1(%eax),%edx
c1005558:	89 55 08             	mov    %edx,0x8(%ebp)
c100555b:	0f b6 00             	movzbl (%eax),%eax
c100555e:	0f be c0             	movsbl %al,%eax
c1005561:	83 ec 04             	sub    $0x4,%esp
c1005564:	ff 75 10             	pushl  0x10(%ebp)
c1005567:	ff 75 0c             	pushl  0xc(%ebp)
c100556a:	50                   	push   %eax
c100556b:	e8 bd fe ff ff       	call   c100542d <print_char>
c1005570:	83 c4 10             	add    $0x10,%esp
c1005573:	8b 45 08             	mov    0x8(%ebp),%eax
c1005576:	0f b6 00             	movzbl (%eax),%eax
c1005579:	84 c0                	test   %al,%al
c100557b:	75 d5                	jne    c1005552 <print_string+0x8>
c100557d:	90                   	nop
c100557e:	90                   	nop
c100557f:	c9                   	leave  
c1005580:	c3                   	ret    

c1005581 <print_num>:
c1005581:	55                   	push   %ebp
c1005582:	89 e5                	mov    %esp,%ebp
c1005584:	83 ec 48             	sub    $0x48,%esp
c1005587:	8b 4d 18             	mov    0x18(%ebp),%ecx
c100558a:	8b 55 1c             	mov    0x1c(%ebp),%edx
c100558d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005590:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1005593:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005596:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1005599:	89 c8                	mov    %ecx,%eax
c100559b:	88 45 bc             	mov    %al,-0x44(%ebp)
c100559e:	89 d0                	mov    %edx,%eax
c10055a0:	88 45 b8             	mov    %al,-0x48(%ebp)
c10055a3:	0f be 45 b8          	movsbl -0x48(%ebp),%eax
c10055a7:	c6 44 05 c8 00       	movb   $0x0,-0x38(%ebp,%eax,1)
c10055ac:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
c10055b0:	83 e8 01             	sub    $0x1,%eax
c10055b3:	88 45 f7             	mov    %al,-0x9(%ebp)
c10055b6:	e9 c0 00 00 00       	jmp    c100567b <print_num+0xfa>
c10055bb:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
c10055bf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10055c2:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10055c5:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c10055c8:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10055cb:	89 55 ec             	mov    %edx,-0x14(%ebp)
c10055ce:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10055d1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10055d4:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10055d8:	74 1c                	je     c10055f6 <print_num+0x75>
c10055da:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10055dd:	ba 00 00 00 00       	mov    $0x0,%edx
c10055e2:	f7 75 e4             	divl   -0x1c(%ebp)
c10055e5:	89 55 f0             	mov    %edx,-0x10(%ebp)
c10055e8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10055eb:	ba 00 00 00 00       	mov    $0x0,%edx
c10055f0:	f7 75 e4             	divl   -0x1c(%ebp)
c10055f3:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10055f6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10055f9:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10055fc:	f7 75 e4             	divl   -0x1c(%ebp)
c10055ff:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005602:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005605:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005608:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100560b:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100560e:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c1005611:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005614:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005618:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c100561c:	80 7d bc 0a          	cmpb   $0xa,-0x44(%ebp)
c1005620:	75 16                	jne    c1005638 <print_num+0xb7>
c1005622:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005626:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100562b:	8d 50 30             	lea    0x30(%eax),%edx
c100562e:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005632:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1005636:	eb 39                	jmp    c1005671 <print_num+0xf0>
c1005638:	80 7d bc 10          	cmpb   $0x10,-0x44(%ebp)
c100563c:	75 33                	jne    c1005671 <print_num+0xf0>
c100563e:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005642:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005647:	3c 09                	cmp    $0x9,%al
c1005649:	7e 10                	jle    c100565b <print_num+0xda>
c100564b:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100564f:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005654:	83 c0 37             	add    $0x37,%eax
c1005657:	89 c2                	mov    %eax,%edx
c1005659:	eb 0e                	jmp    c1005669 <print_num+0xe8>
c100565b:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100565f:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005664:	83 c0 30             	add    $0x30,%eax
c1005667:	89 c2                	mov    %eax,%edx
c1005669:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100566d:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1005671:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1005675:	83 e8 01             	sub    $0x1,%eax
c1005678:	88 45 f7             	mov    %al,-0x9(%ebp)
c100567b:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
c100567f:	0f 89 36 ff ff ff    	jns    c10055bb <print_num+0x3a>
c1005685:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
c1005689:	75 5e                	jne    c10056e9 <print_num+0x168>
c100568b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1005692:	90                   	nop
c1005693:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005696:	8d 50 01             	lea    0x1(%eax),%edx
c1005699:	89 55 e8             	mov    %edx,-0x18(%ebp)
c100569c:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c10056a1:	3c 30                	cmp    $0x30,%al
c10056a3:	74 ee                	je     c1005693 <print_num+0x112>
c10056a5:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c10056a9:	8d 55 c8             	lea    -0x38(%ebp),%edx
c10056ac:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10056af:	01 d0                	add    %edx,%eax
c10056b1:	0f b6 00             	movzbl (%eax),%eax
c10056b4:	84 c0                	test   %al,%al
c10056b6:	74 1c                	je     c10056d4 <print_num+0x153>
c10056b8:	8d 55 c8             	lea    -0x38(%ebp),%edx
c10056bb:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10056be:	01 d0                	add    %edx,%eax
c10056c0:	83 ec 04             	sub    $0x4,%esp
c10056c3:	ff 75 14             	pushl  0x14(%ebp)
c10056c6:	ff 75 10             	pushl  0x10(%ebp)
c10056c9:	50                   	push   %eax
c10056ca:	e8 7b fe ff ff       	call   c100554a <print_string>
c10056cf:	83 c4 10             	add    $0x10,%esp
c10056d2:	eb 2a                	jmp    c10056fe <print_num+0x17d>
c10056d4:	83 ec 04             	sub    $0x4,%esp
c10056d7:	ff 75 14             	pushl  0x14(%ebp)
c10056da:	ff 75 10             	pushl  0x10(%ebp)
c10056dd:	6a 30                	push   $0x30
c10056df:	e8 49 fd ff ff       	call   c100542d <print_char>
c10056e4:	83 c4 10             	add    $0x10,%esp
c10056e7:	eb 15                	jmp    c10056fe <print_num+0x17d>
c10056e9:	83 ec 04             	sub    $0x4,%esp
c10056ec:	ff 75 14             	pushl  0x14(%ebp)
c10056ef:	ff 75 10             	pushl  0x10(%ebp)
c10056f2:	8d 45 c8             	lea    -0x38(%ebp),%eax
c10056f5:	50                   	push   %eax
c10056f6:	e8 4f fe ff ff       	call   c100554a <print_string>
c10056fb:	83 c4 10             	add    $0x10,%esp
c10056fe:	c9                   	leave  
c10056ff:	c3                   	ret    

c1005700 <backtrace>:
c1005700:	55                   	push   %ebp
c1005701:	89 e5                	mov    %esp,%ebp
c1005703:	83 ec 18             	sub    $0x18,%esp
c1005706:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100570d:	3c 15                	cmp    $0x15,%al
c100570f:	0f 86 9a 00 00 00    	jbe    c10057af <backtrace+0xaf>
c1005715:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100571c:	83 e8 01             	sub    $0x1,%eax
c100571f:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c1005724:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c100572a:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c1005730:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005737:	3c 18                	cmp    $0x18,%al
c1005739:	76 05                	jbe    c1005740 <backtrace+0x40>
c100573b:	e8 75 fc ff ff       	call   c10053b5 <clear>
c1005740:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005747:	0f b6 d0             	movzbl %al,%edx
c100574a:	89 d0                	mov    %edx,%eax
c100574c:	c1 e0 02             	shl    $0x2,%eax
c100574f:	01 d0                	add    %edx,%eax
c1005751:	c1 e0 04             	shl    $0x4,%eax
c1005754:	89 c2                	mov    %eax,%edx
c1005756:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100575d:	0f b6 c0             	movzbl %al,%eax
c1005760:	01 d0                	add    %edx,%eax
c1005762:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1005766:	66 c7 45 f4 20 00    	movw   $0x20,-0xc(%ebp)
c100576c:	66 c7 45 f6 00 02    	movw   $0x200,-0xa(%ebp)
c1005772:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1005776:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c100577a:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c100577f:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c1005783:	01 d2                	add    %edx,%edx
c1005785:	01 c2                	add    %eax,%edx
c1005787:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c100578b:	66 89 02             	mov    %ax,(%edx)
c100578e:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005795:	0f b6 d0             	movzbl %al,%edx
c1005798:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c100579f:	0f b6 c0             	movzbl %al,%eax
c10057a2:	83 ec 08             	sub    $0x8,%esp
c10057a5:	52                   	push   %edx
c10057a6:	50                   	push   %eax
c10057a7:	e8 82 fb ff ff       	call   c100532e <print_cursor>
c10057ac:	83 c4 10             	add    $0x10,%esp
c10057af:	90                   	nop
c10057b0:	c9                   	leave  
c10057b1:	c3                   	ret    

c10057b2 <printk>:
c10057b2:	55                   	push   %ebp
c10057b3:	89 e5                	mov    %esp,%ebp
c10057b5:	83 ec 38             	sub    $0x38,%esp
c10057b8:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c10057bc:	8d 45 0c             	lea    0xc(%ebp),%eax
c10057bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10057c2:	e9 6e 03 00 00       	jmp    c1005b35 <printk+0x383>
c10057c7:	8b 45 08             	mov    0x8(%ebp),%eax
c10057ca:	0f b6 00             	movzbl (%eax),%eax
c10057cd:	3c 25                	cmp    $0x25,%al
c10057cf:	0f 85 3a 03 00 00    	jne    c1005b0f <printk+0x35d>
c10057d5:	90                   	nop
c10057d6:	8b 45 08             	mov    0x8(%ebp),%eax
c10057d9:	83 c0 01             	add    $0x1,%eax
c10057dc:	89 45 08             	mov    %eax,0x8(%ebp)
c10057df:	8b 45 08             	mov    0x8(%ebp),%eax
c10057e2:	0f b6 00             	movzbl (%eax),%eax
c10057e5:	0f be c0             	movsbl %al,%eax
c10057e8:	83 e8 30             	sub    $0x30,%eax
c10057eb:	83 f8 48             	cmp    $0x48,%eax
c10057ee:	0f 87 fb 02 00 00    	ja     c1005aef <printk+0x33d>
c10057f4:	8b 04 85 50 b8 00 c1 	mov    -0x3eff47b0(,%eax,4),%eax
c10057fb:	ff e0                	jmp    *%eax
c10057fd:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005801:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005804:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
c1005808:	88 45 d7             	mov    %al,-0x29(%ebp)
c100580b:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
c100580f:	83 ec 04             	sub    $0x4,%esp
c1005812:	6a 02                	push   $0x2
c1005814:	6a 00                	push   $0x0
c1005816:	50                   	push   %eax
c1005817:	e8 11 fc ff ff       	call   c100542d <print_char>
c100581c:	83 c4 10             	add    $0x10,%esp
c100581f:	e9 e0 02 00 00       	jmp    c1005b04 <printk+0x352>
c1005824:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005828:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100582b:	8b 40 fc             	mov    -0x4(%eax),%eax
c100582e:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1005831:	83 ec 04             	sub    $0x4,%esp
c1005834:	6a 02                	push   $0x2
c1005836:	6a 00                	push   $0x0
c1005838:	ff 75 dc             	pushl  -0x24(%ebp)
c100583b:	e8 0a fd ff ff       	call   c100554a <print_string>
c1005840:	83 c4 10             	add    $0x10,%esp
c1005843:	e9 bc 02 00 00       	jmp    c1005b04 <printk+0x352>
c1005848:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c100584c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100584f:	8b 40 fc             	mov    -0x4(%eax),%eax
c1005852:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005855:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005859:	74 23                	je     c100587e <printk+0xcc>
c100585b:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c100585f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005862:	99                   	cltd   
c1005863:	83 ec 04             	sub    $0x4,%esp
c1005866:	6a 01                	push   $0x1
c1005868:	51                   	push   %ecx
c1005869:	6a 0a                	push   $0xa
c100586b:	6a 02                	push   $0x2
c100586d:	6a 00                	push   $0x0
c100586f:	52                   	push   %edx
c1005870:	50                   	push   %eax
c1005871:	e8 0b fd ff ff       	call   c1005581 <print_num>
c1005876:	83 c4 20             	add    $0x20,%esp
c1005879:	e9 86 02 00 00       	jmp    c1005b04 <printk+0x352>
c100587e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005881:	99                   	cltd   
c1005882:	83 ec 04             	sub    $0x4,%esp
c1005885:	6a 00                	push   $0x0
c1005887:	6a 14                	push   $0x14
c1005889:	6a 0a                	push   $0xa
c100588b:	6a 02                	push   $0x2
c100588d:	6a 00                	push   $0x0
c100588f:	52                   	push   %edx
c1005890:	50                   	push   %eax
c1005891:	e8 eb fc ff ff       	call   c1005581 <print_num>
c1005896:	83 c4 20             	add    $0x20,%esp
c1005899:	e9 66 02 00 00       	jmp    c1005b04 <printk+0x352>
c100589e:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10058a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10058a5:	8b 40 fc             	mov    -0x4(%eax),%eax
c10058a8:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10058ab:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10058af:	74 23                	je     c10058d4 <printk+0x122>
c10058b1:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10058b5:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10058b8:	99                   	cltd   
c10058b9:	83 ec 04             	sub    $0x4,%esp
c10058bc:	6a 01                	push   $0x1
c10058be:	51                   	push   %ecx
c10058bf:	6a 10                	push   $0x10
c10058c1:	6a 02                	push   $0x2
c10058c3:	6a 00                	push   $0x0
c10058c5:	52                   	push   %edx
c10058c6:	50                   	push   %eax
c10058c7:	e8 b5 fc ff ff       	call   c1005581 <print_num>
c10058cc:	83 c4 20             	add    $0x20,%esp
c10058cf:	e9 30 02 00 00       	jmp    c1005b04 <printk+0x352>
c10058d4:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10058d7:	99                   	cltd   
c10058d8:	83 ec 04             	sub    $0x4,%esp
c10058db:	6a 00                	push   $0x0
c10058dd:	6a 14                	push   $0x14
c10058df:	6a 10                	push   $0x10
c10058e1:	6a 02                	push   $0x2
c10058e3:	6a 00                	push   $0x0
c10058e5:	52                   	push   %edx
c10058e6:	50                   	push   %eax
c10058e7:	e8 95 fc ff ff       	call   c1005581 <print_num>
c10058ec:	83 c4 20             	add    $0x20,%esp
c10058ef:	e9 10 02 00 00       	jmp    c1005b04 <printk+0x352>
c10058f4:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c10058f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10058fb:	8b 50 fc             	mov    -0x4(%eax),%edx
c10058fe:	8b 40 f8             	mov    -0x8(%eax),%eax
c1005901:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1005904:	89 55 cc             	mov    %edx,-0x34(%ebp)
c1005907:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100590b:	74 25                	je     c1005932 <printk+0x180>
c100590d:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1005911:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1005914:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1005917:	83 ec 04             	sub    $0x4,%esp
c100591a:	6a 01                	push   $0x1
c100591c:	51                   	push   %ecx
c100591d:	6a 10                	push   $0x10
c100591f:	6a 02                	push   $0x2
c1005921:	6a 00                	push   $0x0
c1005923:	52                   	push   %edx
c1005924:	50                   	push   %eax
c1005925:	e8 57 fc ff ff       	call   c1005581 <print_num>
c100592a:	83 c4 20             	add    $0x20,%esp
c100592d:	e9 d2 01 00 00       	jmp    c1005b04 <printk+0x352>
c1005932:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1005935:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1005938:	83 ec 04             	sub    $0x4,%esp
c100593b:	6a 00                	push   $0x0
c100593d:	6a 14                	push   $0x14
c100593f:	6a 10                	push   $0x10
c1005941:	6a 02                	push   $0x2
c1005943:	6a 00                	push   $0x0
c1005945:	52                   	push   %edx
c1005946:	50                   	push   %eax
c1005947:	e8 35 fc ff ff       	call   c1005581 <print_num>
c100594c:	83 c4 20             	add    $0x20,%esp
c100594f:	e9 b0 01 00 00       	jmp    c1005b04 <printk+0x352>
c1005954:	8b 45 08             	mov    0x8(%ebp),%eax
c1005957:	83 c0 01             	add    $0x1,%eax
c100595a:	89 45 08             	mov    %eax,0x8(%ebp)
c100595d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005960:	0f b6 00             	movzbl (%eax),%eax
c1005963:	0f be c0             	movsbl %al,%eax
c1005966:	83 f8 78             	cmp    $0x78,%eax
c1005969:	0f 84 9a 00 00 00    	je     c1005a09 <printk+0x257>
c100596f:	83 f8 78             	cmp    $0x78,%eax
c1005972:	0f 8f 3f 01 00 00    	jg     c1005ab7 <printk+0x305>
c1005978:	83 f8 6c             	cmp    $0x6c,%eax
c100597b:	0f 84 e0 00 00 00    	je     c1005a61 <printk+0x2af>
c1005981:	83 f8 6c             	cmp    $0x6c,%eax
c1005984:	0f 8f 2d 01 00 00    	jg     c1005ab7 <printk+0x305>
c100598a:	83 f8 64             	cmp    $0x64,%eax
c100598d:	74 1c                	je     c10059ab <printk+0x1f9>
c100598f:	83 f8 64             	cmp    $0x64,%eax
c1005992:	0f 8f 1f 01 00 00    	jg     c1005ab7 <printk+0x305>
c1005998:	83 f8 4c             	cmp    $0x4c,%eax
c100599b:	0f 84 c0 00 00 00    	je     c1005a61 <printk+0x2af>
c10059a1:	83 f8 58             	cmp    $0x58,%eax
c10059a4:	74 63                	je     c1005a09 <printk+0x257>
c10059a6:	e9 0c 01 00 00       	jmp    c1005ab7 <printk+0x305>
c10059ab:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10059af:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10059b2:	8b 40 fc             	mov    -0x4(%eax),%eax
c10059b5:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10059b8:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10059bc:	74 27                	je     c10059e5 <printk+0x233>
c10059be:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10059c2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10059c5:	ba 00 00 00 00       	mov    $0x0,%edx
c10059ca:	83 ec 04             	sub    $0x4,%esp
c10059cd:	6a 01                	push   $0x1
c10059cf:	51                   	push   %ecx
c10059d0:	6a 0a                	push   $0xa
c10059d2:	6a 02                	push   $0x2
c10059d4:	6a 00                	push   $0x0
c10059d6:	52                   	push   %edx
c10059d7:	50                   	push   %eax
c10059d8:	e8 a4 fb ff ff       	call   c1005581 <print_num>
c10059dd:	83 c4 20             	add    $0x20,%esp
c10059e0:	e9 d3 00 00 00       	jmp    c1005ab8 <printk+0x306>
c10059e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10059e8:	ba 00 00 00 00       	mov    $0x0,%edx
c10059ed:	83 ec 04             	sub    $0x4,%esp
c10059f0:	6a 00                	push   $0x0
c10059f2:	6a 14                	push   $0x14
c10059f4:	6a 0a                	push   $0xa
c10059f6:	6a 02                	push   $0x2
c10059f8:	6a 00                	push   $0x0
c10059fa:	52                   	push   %edx
c10059fb:	50                   	push   %eax
c10059fc:	e8 80 fb ff ff       	call   c1005581 <print_num>
c1005a01:	83 c4 20             	add    $0x20,%esp
c1005a04:	e9 af 00 00 00       	jmp    c1005ab8 <printk+0x306>
c1005a09:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005a0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005a10:	8b 40 fc             	mov    -0x4(%eax),%eax
c1005a13:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005a16:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005a1a:	74 24                	je     c1005a40 <printk+0x28e>
c1005a1c:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1005a20:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005a23:	ba 00 00 00 00       	mov    $0x0,%edx
c1005a28:	83 ec 04             	sub    $0x4,%esp
c1005a2b:	6a 01                	push   $0x1
c1005a2d:	51                   	push   %ecx
c1005a2e:	6a 10                	push   $0x10
c1005a30:	6a 02                	push   $0x2
c1005a32:	6a 00                	push   $0x0
c1005a34:	52                   	push   %edx
c1005a35:	50                   	push   %eax
c1005a36:	e8 46 fb ff ff       	call   c1005581 <print_num>
c1005a3b:	83 c4 20             	add    $0x20,%esp
c1005a3e:	eb 78                	jmp    c1005ab8 <printk+0x306>
c1005a40:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005a43:	ba 00 00 00 00       	mov    $0x0,%edx
c1005a48:	83 ec 04             	sub    $0x4,%esp
c1005a4b:	6a 00                	push   $0x0
c1005a4d:	6a 14                	push   $0x14
c1005a4f:	6a 10                	push   $0x10
c1005a51:	6a 02                	push   $0x2
c1005a53:	6a 00                	push   $0x0
c1005a55:	52                   	push   %edx
c1005a56:	50                   	push   %eax
c1005a57:	e8 25 fb ff ff       	call   c1005581 <print_num>
c1005a5c:	83 c4 20             	add    $0x20,%esp
c1005a5f:	eb 57                	jmp    c1005ab8 <printk+0x306>
c1005a61:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1005a65:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005a68:	8b 50 fc             	mov    -0x4(%eax),%edx
c1005a6b:	8b 40 f8             	mov    -0x8(%eax),%eax
c1005a6e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005a71:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1005a74:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005a78:	74 20                	je     c1005a9a <printk+0x2e8>
c1005a7a:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c1005a7e:	83 ec 04             	sub    $0x4,%esp
c1005a81:	6a 01                	push   $0x1
c1005a83:	50                   	push   %eax
c1005a84:	6a 10                	push   $0x10
c1005a86:	6a 02                	push   $0x2
c1005a88:	6a 00                	push   $0x0
c1005a8a:	ff 75 e4             	pushl  -0x1c(%ebp)
c1005a8d:	ff 75 e0             	pushl  -0x20(%ebp)
c1005a90:	e8 ec fa ff ff       	call   c1005581 <print_num>
c1005a95:	83 c4 20             	add    $0x20,%esp
c1005a98:	eb 1e                	jmp    c1005ab8 <printk+0x306>
c1005a9a:	83 ec 04             	sub    $0x4,%esp
c1005a9d:	6a 00                	push   $0x0
c1005a9f:	6a 14                	push   $0x14
c1005aa1:	6a 10                	push   $0x10
c1005aa3:	6a 02                	push   $0x2
c1005aa5:	6a 00                	push   $0x0
c1005aa7:	ff 75 e4             	pushl  -0x1c(%ebp)
c1005aaa:	ff 75 e0             	pushl  -0x20(%ebp)
c1005aad:	e8 cf fa ff ff       	call   c1005581 <print_num>
c1005ab2:	83 c4 20             	add    $0x20,%esp
c1005ab5:	eb 01                	jmp    c1005ab8 <printk+0x306>
c1005ab7:	90                   	nop
c1005ab8:	eb 4a                	jmp    c1005b04 <printk+0x352>
c1005aba:	8b 45 08             	mov    0x8(%ebp),%eax
c1005abd:	0f b6 00             	movzbl (%eax),%eax
c1005ac0:	0f be c0             	movsbl %al,%eax
c1005ac3:	83 e8 30             	sub    $0x30,%eax
c1005ac6:	89 c2                	mov    %eax,%edx
c1005ac8:	89 d0                	mov    %edx,%eax
c1005aca:	c1 e0 02             	shl    $0x2,%eax
c1005acd:	01 d0                	add    %edx,%eax
c1005acf:	01 c0                	add    %eax,%eax
c1005ad1:	89 c2                	mov    %eax,%edx
c1005ad3:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ad6:	83 c0 01             	add    $0x1,%eax
c1005ad9:	89 45 08             	mov    %eax,0x8(%ebp)
c1005adc:	8b 45 08             	mov    0x8(%ebp),%eax
c1005adf:	0f b6 00             	movzbl (%eax),%eax
c1005ae2:	01 d0                	add    %edx,%eax
c1005ae4:	83 e8 30             	sub    $0x30,%eax
c1005ae7:	88 45 f3             	mov    %al,-0xd(%ebp)
c1005aea:	e9 e7 fc ff ff       	jmp    c10057d6 <printk+0x24>
c1005aef:	83 ec 04             	sub    $0x4,%esp
c1005af2:	6a 02                	push   $0x2
c1005af4:	6a 00                	push   $0x0
c1005af6:	68 30 b8 00 c1       	push   $0xc100b830
c1005afb:	e8 4a fa ff ff       	call   c100554a <print_string>
c1005b00:	83 c4 10             	add    $0x10,%esp
c1005b03:	90                   	nop
c1005b04:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b07:	83 c0 01             	add    $0x1,%eax
c1005b0a:	89 45 08             	mov    %eax,0x8(%ebp)
c1005b0d:	eb 22                	jmp    c1005b31 <printk+0x37f>
c1005b0f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b12:	0f b6 00             	movzbl (%eax),%eax
c1005b15:	0f be c0             	movsbl %al,%eax
c1005b18:	83 ec 04             	sub    $0x4,%esp
c1005b1b:	6a 02                	push   $0x2
c1005b1d:	6a 00                	push   $0x0
c1005b1f:	50                   	push   %eax
c1005b20:	e8 08 f9 ff ff       	call   c100542d <print_char>
c1005b25:	83 c4 10             	add    $0x10,%esp
c1005b28:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b2b:	83 c0 01             	add    $0x1,%eax
c1005b2e:	89 45 08             	mov    %eax,0x8(%ebp)
c1005b31:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c1005b35:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b38:	0f b6 00             	movzbl (%eax),%eax
c1005b3b:	84 c0                	test   %al,%al
c1005b3d:	0f 85 84 fc ff ff    	jne    c10057c7 <printk+0x15>
c1005b43:	90                   	nop
c1005b44:	90                   	nop
c1005b45:	c9                   	leave  
c1005b46:	c3                   	ret    

c1005b47 <cons_putc>:
c1005b47:	55                   	push   %ebp
c1005b48:	89 e5                	mov    %esp,%ebp
c1005b4a:	83 ec 08             	sub    $0x8,%esp
c1005b4d:	83 ec 0c             	sub    $0xc,%esp
c1005b50:	ff 75 08             	pushl  0x8(%ebp)
c1005b53:	e8 b1 f5 ff ff       	call   c1005109 <lpt_putc>
c1005b58:	83 c4 10             	add    $0x10,%esp
c1005b5b:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1005b5f:	74 13                	je     c1005b74 <cons_putc+0x2d>
c1005b61:	83 ec 08             	sub    $0x8,%esp
c1005b64:	ff 75 08             	pushl  0x8(%ebp)
c1005b67:	68 74 b9 00 c1       	push   $0xc100b974
c1005b6c:	e8 41 fc ff ff       	call   c10057b2 <printk>
c1005b71:	83 c4 10             	add    $0x10,%esp
c1005b74:	83 ec 0c             	sub    $0xc,%esp
c1005b77:	ff 75 08             	pushl  0x8(%ebp)
c1005b7a:	e8 ed f6 ff ff       	call   c100526c <serial_putc>
c1005b7f:	83 c4 10             	add    $0x10,%esp
c1005b82:	90                   	nop
c1005b83:	c9                   	leave  
c1005b84:	c3                   	ret    

c1005b85 <cons_getc>:
c1005b85:	55                   	push   %ebp
c1005b86:	89 e5                	mov    %esp,%ebp
c1005b88:	83 ec 18             	sub    $0x18,%esp
c1005b8b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005b92:	e8 5c f6 ff ff       	call   c10051f3 <serial_intr>
c1005b97:	e8 2f c3 ff ff       	call   c1001ecb <kbd_intr>
c1005b9c:	8b 15 20 42 a1 c1    	mov    0xc1a14220,%edx
c1005ba2:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c1005ba7:	39 c2                	cmp    %eax,%edx
c1005ba9:	74 31                	je     c1005bdc <cons_getc+0x57>
c1005bab:	a1 20 42 a1 c1       	mov    0xc1a14220,%eax
c1005bb0:	8d 50 01             	lea    0x1(%eax),%edx
c1005bb3:	89 15 20 42 a1 c1    	mov    %edx,0xc1a14220
c1005bb9:	0f b6 80 20 40 a1 c1 	movzbl -0x3e5ebfe0(%eax),%eax
c1005bc0:	0f b6 c0             	movzbl %al,%eax
c1005bc3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005bc6:	a1 20 42 a1 c1       	mov    0xc1a14220,%eax
c1005bcb:	3d 00 02 00 00       	cmp    $0x200,%eax
c1005bd0:	75 0a                	jne    c1005bdc <cons_getc+0x57>
c1005bd2:	c7 05 20 42 a1 c1 00 	movl   $0x0,0xc1a14220
c1005bd9:	00 00 00 
c1005bdc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005bdf:	c9                   	leave  
c1005be0:	c3                   	ret    

c1005be1 <hash32>:
c1005be1:	55                   	push   %ebp
c1005be2:	89 e5                	mov    %esp,%ebp
c1005be4:	83 ec 10             	sub    $0x10,%esp
c1005be7:	8b 45 08             	mov    0x8(%ebp),%eax
c1005bea:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1005bf0:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005bf3:	b8 20 00 00 00       	mov    $0x20,%eax
c1005bf8:	2b 45 0c             	sub    0xc(%ebp),%eax
c1005bfb:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005bfe:	89 c1                	mov    %eax,%ecx
c1005c00:	d3 ea                	shr    %cl,%edx
c1005c02:	89 d0                	mov    %edx,%eax
c1005c04:	c9                   	leave  
c1005c05:	c3                   	ret    

c1005c06 <sema_init>:
c1005c06:	55                   	push   %ebp
c1005c07:	89 e5                	mov    %esp,%ebp
c1005c09:	83 ec 14             	sub    $0x14,%esp
c1005c0c:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005c0f:	88 45 ec             	mov    %al,-0x14(%ebp)
c1005c12:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c15:	0f b6 55 ec          	movzbl -0x14(%ebp),%edx
c1005c19:	88 10                	mov    %dl,(%eax)
c1005c1b:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c1e:	83 c0 04             	add    $0x4,%eax
c1005c21:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005c24:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005c27:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005c2a:	89 50 04             	mov    %edx,0x4(%eax)
c1005c2d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005c30:	8b 50 04             	mov    0x4(%eax),%edx
c1005c33:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005c36:	89 10                	mov    %edx,(%eax)
c1005c38:	90                   	nop
c1005c39:	90                   	nop
c1005c3a:	c9                   	leave  
c1005c3b:	c3                   	ret    

c1005c3c <lock_init>:
c1005c3c:	55                   	push   %ebp
c1005c3d:	89 e5                	mov    %esp,%ebp
c1005c3f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c42:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005c48:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c4b:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005c52:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c55:	83 c0 04             	add    $0x4,%eax
c1005c58:	6a 01                	push   $0x1
c1005c5a:	50                   	push   %eax
c1005c5b:	e8 a6 ff ff ff       	call   c1005c06 <sema_init>
c1005c60:	83 c4 08             	add    $0x8,%esp
c1005c63:	90                   	nop
c1005c64:	c9                   	leave  
c1005c65:	c3                   	ret    

c1005c66 <sema_down>:
c1005c66:	55                   	push   %ebp
c1005c67:	89 e5                	mov    %esp,%ebp
c1005c69:	83 ec 38             	sub    $0x38,%esp
c1005c6c:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c6f:	83 c0 04             	add    $0x4,%eax
c1005c72:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005c75:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005c78:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005c7b:	e8 2b b1 ff ff       	call   c1000dab <intr_save>
c1005c80:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005c83:	e9 95 00 00 00       	jmp    c1005d1d <sema_down+0xb7>
c1005c88:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005c8d:	83 c0 5c             	add    $0x5c,%eax
c1005c90:	39 45 f4             	cmp    %eax,-0xc(%ebp)
c1005c93:	75 16                	jne    c1005cab <sema_down+0x45>
c1005c95:	68 78 b9 00 c1       	push   $0xc100b978
c1005c9a:	68 e0 b9 00 c1       	push   $0xc100b9e0
c1005c9f:	6a 26                	push   $0x26
c1005ca1:	68 ac b9 00 c1       	push   $0xc100b9ac
c1005ca6:	e8 c0 a6 ff ff       	call   c100036b <__PANIC>
c1005cab:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005cae:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005cb1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005cb4:	8b 40 04             	mov    0x4(%eax),%eax
c1005cb7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005cba:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005cbd:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1005cc0:	75 c6                	jne    c1005c88 <sema_down+0x22>
c1005cc2:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005cc7:	83 c0 5c             	add    $0x5c,%eax
c1005cca:	8b 55 08             	mov    0x8(%ebp),%edx
c1005ccd:	83 c2 04             	add    $0x4,%edx
c1005cd0:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1005cd3:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005cd6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005cd9:	8b 00                	mov    (%eax),%eax
c1005cdb:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005cde:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005ce1:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005ce4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005ce7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1005cea:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1005ced:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005cf0:	89 10                	mov    %edx,(%eax)
c1005cf2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1005cf5:	8b 10                	mov    (%eax),%edx
c1005cf7:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005cfa:	89 50 04             	mov    %edx,0x4(%eax)
c1005cfd:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005d00:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1005d03:	89 50 04             	mov    %edx,0x4(%eax)
c1005d06:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005d09:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1005d0c:	89 10                	mov    %edx,(%eax)
c1005d0e:	90                   	nop
c1005d0f:	90                   	nop
c1005d10:	83 ec 0c             	sub    $0xc,%esp
c1005d13:	6a 01                	push   $0x1
c1005d15:	e8 49 e1 ff ff       	call   c1003e63 <thread_block>
c1005d1a:	83 c4 10             	add    $0x10,%esp
c1005d1d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d20:	0f b6 00             	movzbl (%eax),%eax
c1005d23:	84 c0                	test   %al,%al
c1005d25:	74 84                	je     c1005cab <sema_down+0x45>
c1005d27:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d2a:	0f b6 00             	movzbl (%eax),%eax
c1005d2d:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005d30:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d33:	88 10                	mov    %dl,(%eax)
c1005d35:	83 ec 0c             	sub    $0xc,%esp
c1005d38:	ff 75 ec             	pushl  -0x14(%ebp)
c1005d3b:	e8 7e b0 ff ff       	call   c1000dbe <intr_restore>
c1005d40:	83 c4 10             	add    $0x10,%esp
c1005d43:	90                   	nop
c1005d44:	c9                   	leave  
c1005d45:	c3                   	ret    

c1005d46 <sema_up>:
c1005d46:	55                   	push   %ebp
c1005d47:	89 e5                	mov    %esp,%ebp
c1005d49:	83 ec 28             	sub    $0x28,%esp
c1005d4c:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d4f:	83 c0 04             	add    $0x4,%eax
c1005d52:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005d55:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005d58:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005d5b:	e8 4b b0 ff ff       	call   c1000dab <intr_save>
c1005d60:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005d63:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005d66:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1005d69:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005d6c:	8b 40 04             	mov    0x4(%eax),%eax
c1005d6f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005d72:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005d75:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1005d78:	74 41                	je     c1005dbb <sema_up+0x75>
c1005d7a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005d7d:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005d80:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005d83:	8b 40 04             	mov    0x4(%eax),%eax
c1005d86:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005d89:	8b 12                	mov    (%edx),%edx
c1005d8b:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005d8e:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005d91:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005d94:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1005d97:	89 50 04             	mov    %edx,0x4(%eax)
c1005d9a:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005d9d:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005da0:	89 10                	mov    %edx,(%eax)
c1005da2:	90                   	nop
c1005da3:	90                   	nop
c1005da4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005da7:	83 e8 5c             	sub    $0x5c,%eax
c1005daa:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005dad:	83 ec 0c             	sub    $0xc,%esp
c1005db0:	ff 75 e8             	pushl  -0x18(%ebp)
c1005db3:	e8 d9 e0 ff ff       	call   c1003e91 <thread_unblock>
c1005db8:	83 c4 10             	add    $0x10,%esp
c1005dbb:	8b 45 08             	mov    0x8(%ebp),%eax
c1005dbe:	0f b6 00             	movzbl (%eax),%eax
c1005dc1:	8d 50 01             	lea    0x1(%eax),%edx
c1005dc4:	8b 45 08             	mov    0x8(%ebp),%eax
c1005dc7:	88 10                	mov    %dl,(%eax)
c1005dc9:	83 ec 0c             	sub    $0xc,%esp
c1005dcc:	ff 75 ec             	pushl  -0x14(%ebp)
c1005dcf:	e8 ea af ff ff       	call   c1000dbe <intr_restore>
c1005dd4:	83 c4 10             	add    $0x10,%esp
c1005dd7:	90                   	nop
c1005dd8:	c9                   	leave  
c1005dd9:	c3                   	ret    

c1005dda <lock_acquire>:
c1005dda:	55                   	push   %ebp
c1005ddb:	89 e5                	mov    %esp,%ebp
c1005ddd:	83 ec 08             	sub    $0x8,%esp
c1005de0:	8b 45 08             	mov    0x8(%ebp),%eax
c1005de3:	8b 10                	mov    (%eax),%edx
c1005de5:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005dea:	39 c2                	cmp    %eax,%edx
c1005dec:	74 29                	je     c1005e17 <lock_acquire+0x3d>
c1005dee:	8b 45 08             	mov    0x8(%ebp),%eax
c1005df1:	83 c0 04             	add    $0x4,%eax
c1005df4:	83 ec 0c             	sub    $0xc,%esp
c1005df7:	50                   	push   %eax
c1005df8:	e8 69 fe ff ff       	call   c1005c66 <sema_down>
c1005dfd:	83 c4 10             	add    $0x10,%esp
c1005e00:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1005e06:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e09:	89 10                	mov    %edx,(%eax)
c1005e0b:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e0e:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
c1005e15:	eb 0f                	jmp    c1005e26 <lock_acquire+0x4c>
c1005e17:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e1a:	8b 40 10             	mov    0x10(%eax),%eax
c1005e1d:	8d 50 01             	lea    0x1(%eax),%edx
c1005e20:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e23:	89 50 10             	mov    %edx,0x10(%eax)
c1005e26:	90                   	nop
c1005e27:	c9                   	leave  
c1005e28:	c3                   	ret    

c1005e29 <lock_release>:
c1005e29:	55                   	push   %ebp
c1005e2a:	89 e5                	mov    %esp,%ebp
c1005e2c:	83 ec 08             	sub    $0x8,%esp
c1005e2f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e32:	8b 40 10             	mov    0x10(%eax),%eax
c1005e35:	83 f8 01             	cmp    $0x1,%eax
c1005e38:	76 11                	jbe    c1005e4b <lock_release+0x22>
c1005e3a:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e3d:	8b 40 10             	mov    0x10(%eax),%eax
c1005e40:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005e43:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e46:	89 50 10             	mov    %edx,0x10(%eax)
c1005e49:	eb 25                	jmp    c1005e70 <lock_release+0x47>
c1005e4b:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e4e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005e54:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e57:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005e5e:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e61:	83 c0 04             	add    $0x4,%eax
c1005e64:	83 ec 0c             	sub    $0xc,%esp
c1005e67:	50                   	push   %eax
c1005e68:	e8 d9 fe ff ff       	call   c1005d46 <sema_up>
c1005e6d:	83 c4 10             	add    $0x10,%esp
c1005e70:	c9                   	leave  
c1005e71:	c3                   	ret    

c1005e72 <waitdisk>:
c1005e72:	55                   	push   %ebp
c1005e73:	89 e5                	mov    %esp,%ebp
c1005e75:	83 ec 08             	sub    $0x8,%esp
c1005e78:	90                   	nop
c1005e79:	83 ec 0c             	sub    $0xc,%esp
c1005e7c:	68 f7 01 00 00       	push   $0x1f7
c1005e81:	e8 7a a1 ff ff       	call   c1000000 <inb>
c1005e86:	83 c4 10             	add    $0x10,%esp
c1005e89:	0f b6 c0             	movzbl %al,%eax
c1005e8c:	25 c0 00 00 00       	and    $0xc0,%eax
c1005e91:	83 f8 40             	cmp    $0x40,%eax
c1005e94:	75 e3                	jne    c1005e79 <waitdisk+0x7>
c1005e96:	90                   	nop
c1005e97:	90                   	nop
c1005e98:	c9                   	leave  
c1005e99:	c3                   	ret    

c1005e9a <insl>:
c1005e9a:	55                   	push   %ebp
c1005e9b:	89 e5                	mov    %esp,%ebp
c1005e9d:	57                   	push   %edi
c1005e9e:	53                   	push   %ebx
c1005e9f:	8b 55 08             	mov    0x8(%ebp),%edx
c1005ea2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1005ea5:	8b 45 10             	mov    0x10(%ebp),%eax
c1005ea8:	89 cb                	mov    %ecx,%ebx
c1005eaa:	89 df                	mov    %ebx,%edi
c1005eac:	89 c1                	mov    %eax,%ecx
c1005eae:	fc                   	cld    
c1005eaf:	f2 6d                	repnz insl (%dx),%es:(%edi)
c1005eb1:	89 c8                	mov    %ecx,%eax
c1005eb3:	89 fb                	mov    %edi,%ebx
c1005eb5:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1005eb8:	89 45 10             	mov    %eax,0x10(%ebp)
c1005ebb:	90                   	nop
c1005ebc:	5b                   	pop    %ebx
c1005ebd:	5f                   	pop    %edi
c1005ebe:	5d                   	pop    %ebp
c1005ebf:	c3                   	ret    

c1005ec0 <outsl>:
c1005ec0:	55                   	push   %ebp
c1005ec1:	89 e5                	mov    %esp,%ebp
c1005ec3:	56                   	push   %esi
c1005ec4:	53                   	push   %ebx
c1005ec5:	8b 55 08             	mov    0x8(%ebp),%edx
c1005ec8:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1005ecb:	8b 45 10             	mov    0x10(%ebp),%eax
c1005ece:	89 cb                	mov    %ecx,%ebx
c1005ed0:	89 de                	mov    %ebx,%esi
c1005ed2:	89 c1                	mov    %eax,%ecx
c1005ed4:	fc                   	cld    
c1005ed5:	f2 6f                	repnz outsl %ds:(%esi),(%dx)
c1005ed7:	89 c8                	mov    %ecx,%eax
c1005ed9:	89 f3                	mov    %esi,%ebx
c1005edb:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1005ede:	89 45 10             	mov    %eax,0x10(%ebp)
c1005ee1:	90                   	nop
c1005ee2:	5b                   	pop    %ebx
c1005ee3:	5e                   	pop    %esi
c1005ee4:	5d                   	pop    %ebp
c1005ee5:	c3                   	ret    

c1005ee6 <ide_read_sect>:
c1005ee6:	55                   	push   %ebp
c1005ee7:	89 e5                	mov    %esp,%ebp
c1005ee9:	83 ec 08             	sub    $0x8,%esp
c1005eec:	e8 81 ff ff ff       	call   c1005e72 <waitdisk>
c1005ef1:	83 ec 08             	sub    $0x8,%esp
c1005ef4:	6a 01                	push   $0x1
c1005ef6:	68 f2 01 00 00       	push   $0x1f2
c1005efb:	e8 3c a1 ff ff       	call   c100003c <outb>
c1005f00:	83 c4 10             	add    $0x10,%esp
c1005f03:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f06:	0f b6 c0             	movzbl %al,%eax
c1005f09:	83 ec 08             	sub    $0x8,%esp
c1005f0c:	50                   	push   %eax
c1005f0d:	68 f3 01 00 00       	push   $0x1f3
c1005f12:	e8 25 a1 ff ff       	call   c100003c <outb>
c1005f17:	83 c4 10             	add    $0x10,%esp
c1005f1a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f1d:	c1 e8 08             	shr    $0x8,%eax
c1005f20:	0f b6 c0             	movzbl %al,%eax
c1005f23:	83 ec 08             	sub    $0x8,%esp
c1005f26:	50                   	push   %eax
c1005f27:	68 f4 01 00 00       	push   $0x1f4
c1005f2c:	e8 0b a1 ff ff       	call   c100003c <outb>
c1005f31:	83 c4 10             	add    $0x10,%esp
c1005f34:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f37:	c1 e8 10             	shr    $0x10,%eax
c1005f3a:	0f b6 c0             	movzbl %al,%eax
c1005f3d:	83 ec 08             	sub    $0x8,%esp
c1005f40:	50                   	push   %eax
c1005f41:	68 f5 01 00 00       	push   $0x1f5
c1005f46:	e8 f1 a0 ff ff       	call   c100003c <outb>
c1005f4b:	83 c4 10             	add    $0x10,%esp
c1005f4e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f51:	c1 e8 18             	shr    $0x18,%eax
c1005f54:	83 e0 0f             	and    $0xf,%eax
c1005f57:	83 c8 e0             	or     $0xffffffe0,%eax
c1005f5a:	0f b6 c0             	movzbl %al,%eax
c1005f5d:	83 ec 08             	sub    $0x8,%esp
c1005f60:	50                   	push   %eax
c1005f61:	68 f6 01 00 00       	push   $0x1f6
c1005f66:	e8 d1 a0 ff ff       	call   c100003c <outb>
c1005f6b:	83 c4 10             	add    $0x10,%esp
c1005f6e:	83 ec 08             	sub    $0x8,%esp
c1005f71:	6a 20                	push   $0x20
c1005f73:	68 f7 01 00 00       	push   $0x1f7
c1005f78:	e8 bf a0 ff ff       	call   c100003c <outb>
c1005f7d:	83 c4 10             	add    $0x10,%esp
c1005f80:	e8 ed fe ff ff       	call   c1005e72 <waitdisk>
c1005f85:	83 ec 04             	sub    $0x4,%esp
c1005f88:	68 80 00 00 00       	push   $0x80
c1005f8d:	ff 75 08             	pushl  0x8(%ebp)
c1005f90:	68 f0 01 00 00       	push   $0x1f0
c1005f95:	e8 00 ff ff ff       	call   c1005e9a <insl>
c1005f9a:	83 c4 10             	add    $0x10,%esp
c1005f9d:	90                   	nop
c1005f9e:	c9                   	leave  
c1005f9f:	c3                   	ret    

c1005fa0 <ide_write_sect>:
c1005fa0:	55                   	push   %ebp
c1005fa1:	89 e5                	mov    %esp,%ebp
c1005fa3:	83 ec 08             	sub    $0x8,%esp
c1005fa6:	e8 c7 fe ff ff       	call   c1005e72 <waitdisk>
c1005fab:	83 ec 08             	sub    $0x8,%esp
c1005fae:	6a 01                	push   $0x1
c1005fb0:	68 f2 01 00 00       	push   $0x1f2
c1005fb5:	e8 82 a0 ff ff       	call   c100003c <outb>
c1005fba:	83 c4 10             	add    $0x10,%esp
c1005fbd:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005fc0:	0f b6 c0             	movzbl %al,%eax
c1005fc3:	83 ec 08             	sub    $0x8,%esp
c1005fc6:	50                   	push   %eax
c1005fc7:	68 f3 01 00 00       	push   $0x1f3
c1005fcc:	e8 6b a0 ff ff       	call   c100003c <outb>
c1005fd1:	83 c4 10             	add    $0x10,%esp
c1005fd4:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005fd7:	c1 e8 08             	shr    $0x8,%eax
c1005fda:	0f b6 c0             	movzbl %al,%eax
c1005fdd:	83 ec 08             	sub    $0x8,%esp
c1005fe0:	50                   	push   %eax
c1005fe1:	68 f4 01 00 00       	push   $0x1f4
c1005fe6:	e8 51 a0 ff ff       	call   c100003c <outb>
c1005feb:	83 c4 10             	add    $0x10,%esp
c1005fee:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005ff1:	c1 e8 10             	shr    $0x10,%eax
c1005ff4:	0f b6 c0             	movzbl %al,%eax
c1005ff7:	83 ec 08             	sub    $0x8,%esp
c1005ffa:	50                   	push   %eax
c1005ffb:	68 f5 01 00 00       	push   $0x1f5
c1006000:	e8 37 a0 ff ff       	call   c100003c <outb>
c1006005:	83 c4 10             	add    $0x10,%esp
c1006008:	8b 45 0c             	mov    0xc(%ebp),%eax
c100600b:	c1 e8 18             	shr    $0x18,%eax
c100600e:	83 e0 0f             	and    $0xf,%eax
c1006011:	83 c8 e0             	or     $0xffffffe0,%eax
c1006014:	0f b6 c0             	movzbl %al,%eax
c1006017:	83 ec 08             	sub    $0x8,%esp
c100601a:	50                   	push   %eax
c100601b:	68 f6 01 00 00       	push   $0x1f6
c1006020:	e8 17 a0 ff ff       	call   c100003c <outb>
c1006025:	83 c4 10             	add    $0x10,%esp
c1006028:	83 ec 08             	sub    $0x8,%esp
c100602b:	6a 30                	push   $0x30
c100602d:	68 f7 01 00 00       	push   $0x1f7
c1006032:	e8 05 a0 ff ff       	call   c100003c <outb>
c1006037:	83 c4 10             	add    $0x10,%esp
c100603a:	e8 33 fe ff ff       	call   c1005e72 <waitdisk>
c100603f:	83 ec 04             	sub    $0x4,%esp
c1006042:	68 80 00 00 00       	push   $0x80
c1006047:	ff 75 08             	pushl  0x8(%ebp)
c100604a:	68 f0 01 00 00       	push   $0x1f0
c100604f:	e8 6c fe ff ff       	call   c1005ec0 <outsl>
c1006054:	83 c4 10             	add    $0x10,%esp
c1006057:	90                   	nop
c1006058:	c9                   	leave  
c1006059:	c3                   	ret    

c100605a <ide_read>:
c100605a:	55                   	push   %ebp
c100605b:	89 e5                	mov    %esp,%ebp
c100605d:	83 ec 18             	sub    $0x18,%esp
c1006060:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006067:	eb 22                	jmp    c100608b <ide_read+0x31>
c1006069:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100606c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100606f:	01 d0                	add    %edx,%eax
c1006071:	83 ec 08             	sub    $0x8,%esp
c1006074:	50                   	push   %eax
c1006075:	ff 75 08             	pushl  0x8(%ebp)
c1006078:	e8 69 fe ff ff       	call   c1005ee6 <ide_read_sect>
c100607d:	83 c4 10             	add    $0x10,%esp
c1006080:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1006087:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100608b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100608e:	39 45 10             	cmp    %eax,0x10(%ebp)
c1006091:	77 d6                	ja     c1006069 <ide_read+0xf>
c1006093:	90                   	nop
c1006094:	90                   	nop
c1006095:	c9                   	leave  
c1006096:	c3                   	ret    

c1006097 <ide_write>:
c1006097:	55                   	push   %ebp
c1006098:	89 e5                	mov    %esp,%ebp
c100609a:	83 ec 18             	sub    $0x18,%esp
c100609d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10060a4:	eb 22                	jmp    c10060c8 <ide_write+0x31>
c10060a6:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10060a9:	8b 45 0c             	mov    0xc(%ebp),%eax
c10060ac:	01 d0                	add    %edx,%eax
c10060ae:	83 ec 08             	sub    $0x8,%esp
c10060b1:	50                   	push   %eax
c10060b2:	ff 75 08             	pushl  0x8(%ebp)
c10060b5:	e8 e6 fe ff ff       	call   c1005fa0 <ide_write_sect>
c10060ba:	83 c4 10             	add    $0x10,%esp
c10060bd:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c10060c4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10060c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10060cb:	39 45 10             	cmp    %eax,0x10(%ebp)
c10060ce:	77 d6                	ja     c10060a6 <ide_write+0xf>
c10060d0:	90                   	nop
c10060d1:	90                   	nop
c10060d2:	c9                   	leave  
c10060d3:	c3                   	ret    

c10060d4 <delay>:
c10060d4:	55                   	push   %ebp
c10060d5:	89 e5                	mov    %esp,%ebp
c10060d7:	83 ec 10             	sub    $0x10,%esp
c10060da:	8b 45 08             	mov    0x8(%ebp),%eax
c10060dd:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10060e0:	eb 17                	jmp    c10060f9 <delay+0x25>
c10060e2:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c10060e9:	eb 04                	jmp    c10060ef <delay+0x1b>
c10060eb:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c10060ef:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c10060f3:	75 f6                	jne    c10060eb <delay+0x17>
c10060f5:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c10060f9:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c10060fd:	75 e3                	jne    c10060e2 <delay+0xe>
c10060ff:	90                   	nop
c1006100:	90                   	nop
c1006101:	c9                   	leave  
c1006102:	c3                   	ret    

c1006103 <read_main_partition>:
c1006103:	55                   	push   %ebp
c1006104:	89 e5                	mov    %esp,%ebp
c1006106:	83 ec 18             	sub    $0x18,%esp
c1006109:	83 ec 08             	sub    $0x8,%esp
c100610c:	6a 02                	push   $0x2
c100610e:	68 00 02 00 00       	push   $0x200
c1006113:	e8 9b cb ff ff       	call   c1002cb3 <vmm_malloc>
c1006118:	83 c4 10             	add    $0x10,%esp
c100611b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100611e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006121:	83 ec 08             	sub    $0x8,%esp
c1006124:	6a 00                	push   $0x0
c1006126:	50                   	push   %eax
c1006127:	e8 ba fd ff ff       	call   c1005ee6 <ide_read_sect>
c100612c:	83 c4 10             	add    $0x10,%esp
c100612f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006132:	05 be 01 00 00       	add    $0x1be,%eax
c1006137:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100613a:	e8 76 f2 ff ff       	call   c10053b5 <clear>
c100613f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006142:	0f b6 00             	movzbl (%eax),%eax
c1006145:	0f b6 c0             	movzbl %al,%eax
c1006148:	83 ec 08             	sub    $0x8,%esp
c100614b:	50                   	push   %eax
c100614c:	68 ea b9 00 c1       	push   $0xc100b9ea
c1006151:	e8 5c f6 ff ff       	call   c10057b2 <printk>
c1006156:	83 c4 10             	add    $0x10,%esp
c1006159:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100615c:	0f b6 40 01          	movzbl 0x1(%eax),%eax
c1006160:	0f b6 c0             	movzbl %al,%eax
c1006163:	83 ec 08             	sub    $0x8,%esp
c1006166:	50                   	push   %eax
c1006167:	68 fd b9 00 c1       	push   $0xc100b9fd
c100616c:	e8 41 f6 ff ff       	call   c10057b2 <printk>
c1006171:	83 c4 10             	add    $0x10,%esp
c1006174:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006177:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c100617b:	0f b6 c0             	movzbl %al,%eax
c100617e:	83 ec 08             	sub    $0x8,%esp
c1006181:	50                   	push   %eax
c1006182:	68 13 ba 00 c1       	push   $0xc100ba13
c1006187:	e8 26 f6 ff ff       	call   c10057b2 <printk>
c100618c:	83 c4 10             	add    $0x10,%esp
c100618f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006192:	0f b6 40 03          	movzbl 0x3(%eax),%eax
c1006196:	0f b6 c0             	movzbl %al,%eax
c1006199:	83 ec 08             	sub    $0x8,%esp
c100619c:	50                   	push   %eax
c100619d:	68 27 ba 00 c1       	push   $0xc100ba27
c10061a2:	e8 0b f6 ff ff       	call   c10057b2 <printk>
c10061a7:	83 c4 10             	add    $0x10,%esp
c10061aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10061ad:	0f b6 40 04          	movzbl 0x4(%eax),%eax
c10061b1:	0f b6 c0             	movzbl %al,%eax
c10061b4:	83 ec 08             	sub    $0x8,%esp
c10061b7:	50                   	push   %eax
c10061b8:	68 3d ba 00 c1       	push   $0xc100ba3d
c10061bd:	e8 f0 f5 ff ff       	call   c10057b2 <printk>
c10061c2:	83 c4 10             	add    $0x10,%esp
c10061c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10061c8:	0f b6 40 05          	movzbl 0x5(%eax),%eax
c10061cc:	0f b6 c0             	movzbl %al,%eax
c10061cf:	83 ec 08             	sub    $0x8,%esp
c10061d2:	50                   	push   %eax
c10061d3:	68 4e ba 00 c1       	push   $0xc100ba4e
c10061d8:	e8 d5 f5 ff ff       	call   c10057b2 <printk>
c10061dd:	83 c4 10             	add    $0x10,%esp
c10061e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10061e3:	0f b6 40 06          	movzbl 0x6(%eax),%eax
c10061e7:	0f b6 c0             	movzbl %al,%eax
c10061ea:	83 ec 08             	sub    $0x8,%esp
c10061ed:	50                   	push   %eax
c10061ee:	68 62 ba 00 c1       	push   $0xc100ba62
c10061f3:	e8 ba f5 ff ff       	call   c10057b2 <printk>
c10061f8:	83 c4 10             	add    $0x10,%esp
c10061fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10061fe:	0f b6 40 07          	movzbl 0x7(%eax),%eax
c1006202:	0f b6 c0             	movzbl %al,%eax
c1006205:	83 ec 08             	sub    $0x8,%esp
c1006208:	50                   	push   %eax
c1006209:	68 74 ba 00 c1       	push   $0xc100ba74
c100620e:	e8 9f f5 ff ff       	call   c10057b2 <printk>
c1006213:	83 c4 10             	add    $0x10,%esp
c1006216:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006219:	8b 40 08             	mov    0x8(%eax),%eax
c100621c:	83 ec 08             	sub    $0x8,%esp
c100621f:	50                   	push   %eax
c1006220:	68 88 ba 00 c1       	push   $0xc100ba88
c1006225:	e8 88 f5 ff ff       	call   c10057b2 <printk>
c100622a:	83 c4 10             	add    $0x10,%esp
c100622d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006230:	8b 40 0c             	mov    0xc(%eax),%eax
c1006233:	83 ec 08             	sub    $0x8,%esp
c1006236:	50                   	push   %eax
c1006237:	68 9c ba 00 c1       	push   $0xc100ba9c
c100623c:	e8 71 f5 ff ff       	call   c10057b2 <printk>
c1006241:	83 c4 10             	add    $0x10,%esp
c1006244:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006247:	c9                   	leave  
c1006248:	c3                   	ret    

c1006249 <test_ide_io>:
c1006249:	55                   	push   %ebp
c100624a:	89 e5                	mov    %esp,%ebp
c100624c:	83 ec 18             	sub    $0x18,%esp
c100624f:	83 ec 08             	sub    $0x8,%esp
c1006252:	68 00 90 10 00       	push   $0x109000
c1006257:	68 af ba 00 c1       	push   $0xc100baaf
c100625c:	e8 51 f5 ff ff       	call   c10057b2 <printk>
c1006261:	83 c4 10             	add    $0x10,%esp
c1006264:	83 ec 08             	sub    $0x8,%esp
c1006267:	68 2c eb 00 c1       	push   $0xc100eb2c
c100626c:	68 be ba 00 c1       	push   $0xc100babe
c1006271:	e8 3c f5 ff ff       	call   c10057b2 <printk>
c1006276:	83 c4 10             	add    $0x10,%esp
c1006279:	b8 00 90 10 00       	mov    $0x109000,%eax
c100627e:	2d 01 fe 0f 00       	sub    $0xffe01,%eax
c1006283:	c1 e8 09             	shr    $0x9,%eax
c1006286:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006289:	b8 2c eb 00 c1       	mov    $0xc100eb2c,%eax
c100628e:	05 ff 01 00 3f       	add    $0x3f0001ff,%eax
c1006293:	c1 e8 09             	shr    $0x9,%eax
c1006296:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006299:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100629c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100629f:	01 d0                	add    %edx,%eax
c10062a1:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10062a4:	83 ec 08             	sub    $0x8,%esp
c10062a7:	ff 75 ec             	pushl  -0x14(%ebp)
c10062aa:	68 cd ba 00 c1       	push   $0xc100bacd
c10062af:	e8 fe f4 ff ff       	call   c10057b2 <printk>
c10062b4:	83 c4 10             	add    $0x10,%esp
c10062b7:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10062bb:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10062c2:	e8 3c fe ff ff       	call   c1006103 <read_main_partition>
c10062c7:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10062ca:	90                   	nop
c10062cb:	c9                   	leave  
c10062cc:	c3                   	ret    

c10062cd <hash32>:
c10062cd:	55                   	push   %ebp
c10062ce:	89 e5                	mov    %esp,%ebp
c10062d0:	83 ec 10             	sub    $0x10,%esp
c10062d3:	8b 45 08             	mov    0x8(%ebp),%eax
c10062d6:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10062dc:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10062df:	b8 20 00 00 00       	mov    $0x20,%eax
c10062e4:	2b 45 0c             	sub    0xc(%ebp),%eax
c10062e7:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10062ea:	89 c1                	mov    %eax,%ecx
c10062ec:	d3 ea                	shr    %cl,%edx
c10062ee:	89 d0                	mov    %edx,%eax
c10062f0:	c9                   	leave  
c10062f1:	c3                   	ret    

c10062f2 <partition_format>:
c10062f2:	55                   	push   %ebp
c10062f3:	89 e5                	mov    %esp,%ebp
c10062f5:	53                   	push   %ebx
c10062f6:	81 ec 44 02 00 00    	sub    $0x244,%esp
c10062fc:	e8 02 fe ff ff       	call   c1006103 <read_main_partition>
c1006301:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006304:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
c100630b:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
c1006312:	c7 45 e4 11 00 00 00 	movl   $0x11,-0x1c(%ebp)
c1006319:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100631c:	8b 40 0c             	mov    0xc(%eax),%eax
c100631f:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1006322:	2b 45 e8             	sub    -0x18(%ebp),%eax
c1006325:	2b 45 e4             	sub    -0x1c(%ebp),%eax
c1006328:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100632b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100632e:	05 ff 0f 00 00       	add    $0xfff,%eax
c1006333:	c1 e8 0c             	shr    $0xc,%eax
c1006336:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1006339:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100633c:	2b 45 dc             	sub    -0x24(%ebp),%eax
c100633f:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1006342:	c7 85 bc fd ff ff 18 	movl   $0x19590318,-0x244(%ebp)
c1006349:	03 59 19 
c100634c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100634f:	8b 40 0c             	mov    0xc(%eax),%eax
c1006352:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
c1006358:	c7 85 c4 fd ff ff e8 	movl   $0x3e8,-0x23c(%ebp)
c100635f:	03 00 00 
c1006362:	c7 85 c8 fd ff ff 00 	movl   $0x800,-0x238(%ebp)
c1006369:	08 00 00 
c100636c:	c7 85 cc fd ff ff 01 	movl   $0x801,-0x234(%ebp)
c1006373:	08 00 00 
c1006376:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006379:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c100637f:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
c1006385:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c100638b:	01 d0                	add    %edx,%eax
c100638d:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
c1006393:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006396:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
c100639c:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
c10063a2:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c10063a8:	01 d0                	add    %edx,%eax
c10063aa:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
c10063b0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10063b3:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
c10063b9:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
c10063bf:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10063c5:	01 d0                	add    %edx,%eax
c10063c7:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
c10063cd:	c7 85 e8 fd ff ff 00 	movl   $0x0,-0x218(%ebp)
c10063d4:	00 00 00 
c10063d7:	c7 85 ec fd ff ff 18 	movl   $0x18,-0x214(%ebp)
c10063de:	00 00 00 
c10063e1:	e8 cf ef ff ff       	call   c10053b5 <clear>
c10063e6:	8b 85 bc fd ff ff    	mov    -0x244(%ebp),%eax
c10063ec:	83 ec 08             	sub    $0x8,%esp
c10063ef:	50                   	push   %eax
c10063f0:	68 e0 ba 00 c1       	push   $0xc100bae0
c10063f5:	e8 b8 f3 ff ff       	call   c10057b2 <printk>
c10063fa:	83 c4 10             	add    $0x10,%esp
c10063fd:	8b 85 c0 fd ff ff    	mov    -0x240(%ebp),%eax
c1006403:	83 ec 08             	sub    $0x8,%esp
c1006406:	50                   	push   %eax
c1006407:	68 f0 ba 00 c1       	push   $0xc100baf0
c100640c:	e8 a1 f3 ff ff       	call   c10057b2 <printk>
c1006411:	83 c4 10             	add    $0x10,%esp
c1006414:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
c100641a:	83 ec 08             	sub    $0x8,%esp
c100641d:	50                   	push   %eax
c100641e:	68 02 bb 00 c1       	push   $0xc100bb02
c1006423:	e8 8a f3 ff ff       	call   c10057b2 <printk>
c1006428:	83 c4 10             	add    $0x10,%esp
c100642b:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c1006431:	83 ec 08             	sub    $0x8,%esp
c1006434:	50                   	push   %eax
c1006435:	68 16 bb 00 c1       	push   $0xc100bb16
c100643a:	e8 73 f3 ff ff       	call   c10057b2 <printk>
c100643f:	83 c4 10             	add    $0x10,%esp
c1006442:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c1006448:	83 ec 08             	sub    $0x8,%esp
c100644b:	50                   	push   %eax
c100644c:	68 31 bb 00 c1       	push   $0xc100bb31
c1006451:	e8 5c f3 ff ff       	call   c10057b2 <printk>
c1006456:	83 c4 10             	add    $0x10,%esp
c1006459:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c100645f:	83 ec 08             	sub    $0x8,%esp
c1006462:	50                   	push   %eax
c1006463:	68 4e bb 00 c1       	push   $0xc100bb4e
c1006468:	e8 45 f3 ff ff       	call   c10057b2 <printk>
c100646d:	83 c4 10             	add    $0x10,%esp
c1006470:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c1006476:	83 ec 08             	sub    $0x8,%esp
c1006479:	50                   	push   %eax
c100647a:	68 69 bb 00 c1       	push   $0xc100bb69
c100647f:	e8 2e f3 ff ff       	call   c10057b2 <printk>
c1006484:	83 c4 10             	add    $0x10,%esp
c1006487:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c100648d:	83 ec 08             	sub    $0x8,%esp
c1006490:	50                   	push   %eax
c1006491:	68 86 bb 00 c1       	push   $0xc100bb86
c1006496:	e8 17 f3 ff ff       	call   c10057b2 <printk>
c100649b:	83 c4 10             	add    $0x10,%esp
c100649e:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10064a4:	83 ec 08             	sub    $0x8,%esp
c10064a7:	50                   	push   %eax
c10064a8:	68 a0 bb 00 c1       	push   $0xc100bba0
c10064ad:	e8 00 f3 ff ff       	call   c10057b2 <printk>
c10064b2:	83 c4 10             	add    $0x10,%esp
c10064b5:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c10064bb:	83 ec 08             	sub    $0x8,%esp
c10064be:	50                   	push   %eax
c10064bf:	68 bc bb 00 c1       	push   $0xc100bbbc
c10064c4:	e8 e9 f2 ff ff       	call   c10057b2 <printk>
c10064c9:	83 c4 10             	add    $0x10,%esp
c10064cc:	83 ec 04             	sub    $0x4,%esp
c10064cf:	6a 01                	push   $0x1
c10064d1:	68 00 08 00 00       	push   $0x800
c10064d6:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
c10064dc:	50                   	push   %eax
c10064dd:	e8 b5 fb ff ff       	call   c1006097 <ide_write>
c10064e2:	83 c4 10             	add    $0x10,%esp
c10064e5:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c10064eb:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c10064f1:	39 c2                	cmp    %eax,%edx
c10064f3:	0f 43 c2             	cmovae %edx,%eax
c10064f6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10064f9:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10064ff:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
c1006502:	0f 43 45 d4          	cmovae -0x2c(%ebp),%eax
c1006506:	c1 e0 09             	shl    $0x9,%eax
c1006509:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100650c:	83 ec 08             	sub    $0x8,%esp
c100650f:	6a 02                	push   $0x2
c1006511:	ff 75 d4             	pushl  -0x2c(%ebp)
c1006514:	e8 9a c7 ff ff       	call   c1002cb3 <vmm_malloc>
c1006519:	83 c4 10             	add    $0x10,%esp
c100651c:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100651f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006522:	0f b6 00             	movzbl (%eax),%eax
c1006525:	83 c8 01             	or     $0x1,%eax
c1006528:	89 c2                	mov    %eax,%edx
c100652a:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100652d:	88 10                	mov    %dl,(%eax)
c100652f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1006532:	c1 e8 03             	shr    $0x3,%eax
c1006535:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1006538:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100653b:	83 e0 07             	and    $0x7,%eax
c100653e:	88 45 cb             	mov    %al,-0x35(%ebp)
c1006541:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006544:	25 ff 01 00 00       	and    $0x1ff,%eax
c1006549:	ba 00 02 00 00       	mov    $0x200,%edx
c100654e:	29 c2                	sub    %eax,%edx
c1006550:	89 d0                	mov    %edx,%eax
c1006552:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1006555:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006558:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100655b:	01 d0                	add    %edx,%eax
c100655d:	83 ec 04             	sub    $0x4,%esp
c1006560:	ff 75 c4             	pushl  -0x3c(%ebp)
c1006563:	6a ff                	push   $0xffffffff
c1006565:	50                   	push   %eax
c1006566:	e8 3f 9b ff ff       	call   c10000aa <memset>
c100656b:	83 c4 10             	add    $0x10,%esp
c100656e:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006572:	eb 38                	jmp    c10065ac <partition_format+0x2ba>
c1006574:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006577:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100657a:	01 d0                	add    %edx,%eax
c100657c:	0f b6 00             	movzbl (%eax),%eax
c100657f:	89 c2                	mov    %eax,%edx
c1006581:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1006585:	bb 01 00 00 00       	mov    $0x1,%ebx
c100658a:	89 c1                	mov    %eax,%ecx
c100658c:	d3 e3                	shl    %cl,%ebx
c100658e:	89 d8                	mov    %ebx,%eax
c1006590:	f7 d0                	not    %eax
c1006592:	89 d1                	mov    %edx,%ecx
c1006594:	21 c1                	and    %eax,%ecx
c1006596:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006599:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100659c:	01 d0                	add    %edx,%eax
c100659e:	89 ca                	mov    %ecx,%edx
c10065a0:	88 10                	mov    %dl,(%eax)
c10065a2:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10065a6:	83 c0 01             	add    $0x1,%eax
c10065a9:	88 45 f7             	mov    %al,-0x9(%ebp)
c10065ac:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
c10065b0:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c10065b4:	39 c2                	cmp    %eax,%edx
c10065b6:	7c bc                	jl     c1006574 <partition_format+0x282>
c10065b8:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
c10065be:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c10065c4:	83 ec 04             	sub    $0x4,%esp
c10065c7:	52                   	push   %edx
c10065c8:	50                   	push   %eax
c10065c9:	ff 75 d0             	pushl  -0x30(%ebp)
c10065cc:	e8 c6 fa ff ff       	call   c1006097 <ide_write>
c10065d1:	83 c4 10             	add    $0x10,%esp
c10065d4:	83 ec 04             	sub    $0x4,%esp
c10065d7:	ff 75 d4             	pushl  -0x2c(%ebp)
c10065da:	6a 00                	push   $0x0
c10065dc:	ff 75 d0             	pushl  -0x30(%ebp)
c10065df:	e8 c6 9a ff ff       	call   c10000aa <memset>
c10065e4:	83 c4 10             	add    $0x10,%esp
c10065e7:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10065ea:	0f b6 00             	movzbl (%eax),%eax
c10065ed:	83 c8 01             	or     $0x1,%eax
c10065f0:	89 c2                	mov    %eax,%edx
c10065f2:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10065f5:	88 10                	mov    %dl,(%eax)
c10065f7:	c7 45 cc 7d 00 00 00 	movl   $0x7d,-0x34(%ebp)
c10065fe:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
c1006602:	b8 00 02 00 00       	mov    $0x200,%eax
c1006607:	2b 45 cc             	sub    -0x34(%ebp),%eax
c100660a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100660d:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006610:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006613:	01 d0                	add    %edx,%eax
c1006615:	83 ec 04             	sub    $0x4,%esp
c1006618:	ff 75 c4             	pushl  -0x3c(%ebp)
c100661b:	6a ff                	push   $0xffffffff
c100661d:	50                   	push   %eax
c100661e:	e8 87 9a ff ff       	call   c10000aa <memset>
c1006623:	83 c4 10             	add    $0x10,%esp
c1006626:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c100662a:	eb 38                	jmp    c1006664 <partition_format+0x372>
c100662c:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100662f:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006632:	01 d0                	add    %edx,%eax
c1006634:	0f b6 00             	movzbl (%eax),%eax
c1006637:	89 c2                	mov    %eax,%edx
c1006639:	0f be 45 f6          	movsbl -0xa(%ebp),%eax
c100663d:	bb 01 00 00 00       	mov    $0x1,%ebx
c1006642:	89 c1                	mov    %eax,%ecx
c1006644:	d3 e3                	shl    %cl,%ebx
c1006646:	89 d8                	mov    %ebx,%eax
c1006648:	f7 d0                	not    %eax
c100664a:	89 d1                	mov    %edx,%ecx
c100664c:	21 c1                	and    %eax,%ecx
c100664e:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006651:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006654:	01 d0                	add    %edx,%eax
c1006656:	89 ca                	mov    %ecx,%edx
c1006658:	88 10                	mov    %dl,(%eax)
c100665a:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c100665e:	83 c0 01             	add    $0x1,%eax
c1006661:	88 45 f6             	mov    %al,-0xa(%ebp)
c1006664:	0f be 55 f6          	movsbl -0xa(%ebp),%edx
c1006668:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c100666c:	39 c2                	cmp    %eax,%edx
c100666e:	7c bc                	jl     c100662c <partition_format+0x33a>
c1006670:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c1006676:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c100667c:	83 ec 04             	sub    $0x4,%esp
c100667f:	52                   	push   %edx
c1006680:	50                   	push   %eax
c1006681:	ff 75 d0             	pushl  -0x30(%ebp)
c1006684:	e8 0e fa ff ff       	call   c1006097 <ide_write>
c1006689:	83 c4 10             	add    $0x10,%esp
c100668c:	83 ec 04             	sub    $0x4,%esp
c100668f:	ff 75 d4             	pushl  -0x2c(%ebp)
c1006692:	6a 00                	push   $0x0
c1006694:	ff 75 d0             	pushl  -0x30(%ebp)
c1006697:	e8 0e 9a ff ff       	call   c10000aa <memset>
c100669c:	83 c4 10             	add    $0x10,%esp
c100669f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10066a2:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10066a5:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
c10066ab:	8d 14 00             	lea    (%eax,%eax,1),%edx
c10066ae:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10066b1:	89 50 04             	mov    %edx,0x4(%eax)
c10066b4:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10066b7:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10066bd:	8b 95 e4 fd ff ff    	mov    -0x21c(%ebp),%edx
c10066c3:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10066c6:	89 50 10             	mov    %edx,0x10(%eax)
c10066c9:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
c10066cf:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c10066d5:	83 ec 04             	sub    $0x4,%esp
c10066d8:	52                   	push   %edx
c10066d9:	50                   	push   %eax
c10066da:	ff 75 d0             	pushl  -0x30(%ebp)
c10066dd:	e8 b5 f9 ff ff       	call   c1006097 <ide_write>
c10066e2:	83 c4 10             	add    $0x10,%esp
c10066e5:	83 ec 04             	sub    $0x4,%esp
c10066e8:	ff 75 d4             	pushl  -0x2c(%ebp)
c10066eb:	6a 00                	push   $0x0
c10066ed:	ff 75 d0             	pushl  -0x30(%ebp)
c10066f0:	e8 b5 99 ff ff       	call   c10000aa <memset>
c10066f5:	83 c4 10             	add    $0x10,%esp
c10066f8:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10066fb:	89 45 bc             	mov    %eax,-0x44(%ebp)
c10066fe:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006701:	83 ec 04             	sub    $0x4,%esp
c1006704:	6a 01                	push   $0x1
c1006706:	68 d5 bb 00 c1       	push   $0xc100bbd5
c100670b:	50                   	push   %eax
c100670c:	e8 f7 99 ff ff       	call   c1000108 <memcpy>
c1006711:	83 c4 10             	add    $0x10,%esp
c1006714:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006717:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c100671e:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006721:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1006728:	83 45 bc 18          	addl   $0x18,-0x44(%ebp)
c100672c:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100672f:	83 ec 04             	sub    $0x4,%esp
c1006732:	6a 02                	push   $0x2
c1006734:	68 d7 bb 00 c1       	push   $0xc100bbd7
c1006739:	50                   	push   %eax
c100673a:	e8 c9 99 ff ff       	call   c1000108 <memcpy>
c100673f:	83 c4 10             	add    $0x10,%esp
c1006742:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006745:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c100674c:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100674f:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1006756:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c100675c:	83 ec 04             	sub    $0x4,%esp
c100675f:	6a 01                	push   $0x1
c1006761:	50                   	push   %eax
c1006762:	ff 75 d0             	pushl  -0x30(%ebp)
c1006765:	e8 2d f9 ff ff       	call   c1006097 <ide_write>
c100676a:	83 c4 10             	add    $0x10,%esp
c100676d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006770:	83 ec 08             	sub    $0x8,%esp
c1006773:	ff 75 d4             	pushl  -0x2c(%ebp)
c1006776:	50                   	push   %eax
c1006777:	e8 5c c6 ff ff       	call   c1002dd8 <vmm_free>
c100677c:	83 c4 10             	add    $0x10,%esp
c100677f:	90                   	nop
c1006780:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1006783:	c9                   	leave  
c1006784:	c3                   	ret    

c1006785 <mount_partition>:
c1006785:	55                   	push   %ebp
c1006786:	89 e5                	mov    %esp,%ebp
c1006788:	83 ec 18             	sub    $0x18,%esp
c100678b:	e8 73 f9 ff ff       	call   c1006103 <read_main_partition>
c1006790:	a3 30 42 a1 c1       	mov    %eax,0xc1a14230
c1006795:	83 ec 08             	sub    $0x8,%esp
c1006798:	6a 02                	push   $0x2
c100679a:	68 00 02 00 00       	push   $0x200
c100679f:	e8 0f c5 ff ff       	call   c1002cb3 <vmm_malloc>
c10067a4:	83 c4 10             	add    $0x10,%esp
c10067a7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10067aa:	83 ec 04             	sub    $0x4,%esp
c10067ad:	68 00 02 00 00       	push   $0x200
c10067b2:	6a 00                	push   $0x0
c10067b4:	ff 75 f0             	pushl  -0x10(%ebp)
c10067b7:	e8 ee 98 ff ff       	call   c10000aa <memset>
c10067bc:	83 c4 10             	add    $0x10,%esp
c10067bf:	83 ec 04             	sub    $0x4,%esp
c10067c2:	6a 01                	push   $0x1
c10067c4:	68 00 08 00 00       	push   $0x800
c10067c9:	ff 75 f0             	pushl  -0x10(%ebp)
c10067cc:	e8 89 f8 ff ff       	call   c100605a <ide_read>
c10067d1:	83 c4 10             	add    $0x10,%esp
c10067d4:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10067d9:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10067dc:	89 50 10             	mov    %edx,0x10(%eax)
c10067df:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10067e2:	8b 40 14             	mov    0x14(%eax),%eax
c10067e5:	c1 e0 09             	shl    $0x9,%eax
c10067e8:	83 ec 08             	sub    $0x8,%esp
c10067eb:	6a 02                	push   $0x2
c10067ed:	50                   	push   %eax
c10067ee:	e8 c0 c4 ff ff       	call   c1002cb3 <vmm_malloc>
c10067f3:	83 c4 10             	add    $0x10,%esp
c10067f6:	89 c2                	mov    %eax,%edx
c10067f8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10067fd:	89 50 18             	mov    %edx,0x18(%eax)
c1006800:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006803:	8b 50 14             	mov    0x14(%eax),%edx
c1006806:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100680b:	c1 e2 09             	shl    $0x9,%edx
c100680e:	89 50 14             	mov    %edx,0x14(%eax)
c1006811:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006814:	8b 48 14             	mov    0x14(%eax),%ecx
c1006817:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100681a:	8b 50 10             	mov    0x10(%eax),%edx
c100681d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006822:	8b 40 18             	mov    0x18(%eax),%eax
c1006825:	83 ec 04             	sub    $0x4,%esp
c1006828:	51                   	push   %ecx
c1006829:	52                   	push   %edx
c100682a:	50                   	push   %eax
c100682b:	e8 2a f8 ff ff       	call   c100605a <ide_read>
c1006830:	83 c4 10             	add    $0x10,%esp
c1006833:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006836:	8b 40 1c             	mov    0x1c(%eax),%eax
c1006839:	c1 e0 09             	shl    $0x9,%eax
c100683c:	83 ec 08             	sub    $0x8,%esp
c100683f:	6a 02                	push   $0x2
c1006841:	50                   	push   %eax
c1006842:	e8 6c c4 ff ff       	call   c1002cb3 <vmm_malloc>
c1006847:	83 c4 10             	add    $0x10,%esp
c100684a:	89 c2                	mov    %eax,%edx
c100684c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006851:	89 50 20             	mov    %edx,0x20(%eax)
c1006854:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006857:	8b 50 1c             	mov    0x1c(%eax),%edx
c100685a:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100685f:	c1 e2 09             	shl    $0x9,%edx
c1006862:	89 50 1c             	mov    %edx,0x1c(%eax)
c1006865:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006868:	8b 48 1c             	mov    0x1c(%eax),%ecx
c100686b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100686e:	8b 50 18             	mov    0x18(%eax),%edx
c1006871:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006876:	8b 40 20             	mov    0x20(%eax),%eax
c1006879:	83 ec 04             	sub    $0x4,%esp
c100687c:	51                   	push   %ecx
c100687d:	52                   	push   %edx
c100687e:	50                   	push   %eax
c100687f:	e8 d6 f7 ff ff       	call   c100605a <ide_read>
c1006884:	83 c4 10             	add    $0x10,%esp
c1006887:	e8 29 eb ff ff       	call   c10053b5 <clear>
c100688c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006891:	8b 40 10             	mov    0x10(%eax),%eax
c1006894:	8b 00                	mov    (%eax),%eax
c1006896:	83 ec 08             	sub    $0x8,%esp
c1006899:	50                   	push   %eax
c100689a:	68 e0 ba 00 c1       	push   $0xc100bae0
c100689f:	e8 0e ef ff ff       	call   c10057b2 <printk>
c10068a4:	83 c4 10             	add    $0x10,%esp
c10068a7:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10068ac:	8b 40 10             	mov    0x10(%eax),%eax
c10068af:	8b 40 04             	mov    0x4(%eax),%eax
c10068b2:	83 ec 08             	sub    $0x8,%esp
c10068b5:	50                   	push   %eax
c10068b6:	68 f0 ba 00 c1       	push   $0xc100baf0
c10068bb:	e8 f2 ee ff ff       	call   c10057b2 <printk>
c10068c0:	83 c4 10             	add    $0x10,%esp
c10068c3:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10068c8:	8b 40 10             	mov    0x10(%eax),%eax
c10068cb:	8b 40 08             	mov    0x8(%eax),%eax
c10068ce:	83 ec 08             	sub    $0x8,%esp
c10068d1:	50                   	push   %eax
c10068d2:	68 02 bb 00 c1       	push   $0xc100bb02
c10068d7:	e8 d6 ee ff ff       	call   c10057b2 <printk>
c10068dc:	83 c4 10             	add    $0x10,%esp
c10068df:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10068e4:	8b 40 10             	mov    0x10(%eax),%eax
c10068e7:	8b 40 10             	mov    0x10(%eax),%eax
c10068ea:	83 ec 08             	sub    $0x8,%esp
c10068ed:	50                   	push   %eax
c10068ee:	68 16 bb 00 c1       	push   $0xc100bb16
c10068f3:	e8 ba ee ff ff       	call   c10057b2 <printk>
c10068f8:	83 c4 10             	add    $0x10,%esp
c10068fb:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006900:	8b 40 10             	mov    0x10(%eax),%eax
c1006903:	8b 40 14             	mov    0x14(%eax),%eax
c1006906:	83 ec 08             	sub    $0x8,%esp
c1006909:	50                   	push   %eax
c100690a:	68 31 bb 00 c1       	push   $0xc100bb31
c100690f:	e8 9e ee ff ff       	call   c10057b2 <printk>
c1006914:	83 c4 10             	add    $0x10,%esp
c1006917:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100691c:	8b 40 10             	mov    0x10(%eax),%eax
c100691f:	8b 40 18             	mov    0x18(%eax),%eax
c1006922:	83 ec 08             	sub    $0x8,%esp
c1006925:	50                   	push   %eax
c1006926:	68 4e bb 00 c1       	push   $0xc100bb4e
c100692b:	e8 82 ee ff ff       	call   c10057b2 <printk>
c1006930:	83 c4 10             	add    $0x10,%esp
c1006933:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006938:	8b 40 10             	mov    0x10(%eax),%eax
c100693b:	8b 40 1c             	mov    0x1c(%eax),%eax
c100693e:	83 ec 08             	sub    $0x8,%esp
c1006941:	50                   	push   %eax
c1006942:	68 69 bb 00 c1       	push   $0xc100bb69
c1006947:	e8 66 ee ff ff       	call   c10057b2 <printk>
c100694c:	83 c4 10             	add    $0x10,%esp
c100694f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006954:	8b 40 10             	mov    0x10(%eax),%eax
c1006957:	8b 40 20             	mov    0x20(%eax),%eax
c100695a:	83 ec 08             	sub    $0x8,%esp
c100695d:	50                   	push   %eax
c100695e:	68 86 bb 00 c1       	push   $0xc100bb86
c1006963:	e8 4a ee ff ff       	call   c10057b2 <printk>
c1006968:	83 c4 10             	add    $0x10,%esp
c100696b:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006970:	8b 40 10             	mov    0x10(%eax),%eax
c1006973:	8b 40 24             	mov    0x24(%eax),%eax
c1006976:	83 ec 08             	sub    $0x8,%esp
c1006979:	50                   	push   %eax
c100697a:	68 a0 bb 00 c1       	push   $0xc100bba0
c100697f:	e8 2e ee ff ff       	call   c10057b2 <printk>
c1006984:	83 c4 10             	add    $0x10,%esp
c1006987:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100698c:	8b 40 10             	mov    0x10(%eax),%eax
c100698f:	8b 40 28             	mov    0x28(%eax),%eax
c1006992:	83 ec 08             	sub    $0x8,%esp
c1006995:	50                   	push   %eax
c1006996:	68 bc bb 00 c1       	push   $0xc100bbbc
c100699b:	e8 12 ee ff ff       	call   c10057b2 <printk>
c10069a0:	83 c4 10             	add    $0x10,%esp
c10069a3:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10069a8:	8b 40 18             	mov    0x18(%eax),%eax
c10069ab:	83 ec 08             	sub    $0x8,%esp
c10069ae:	50                   	push   %eax
c10069af:	68 dc bb 00 c1       	push   $0xc100bbdc
c10069b4:	e8 f9 ed ff ff       	call   c10057b2 <printk>
c10069b9:	83 c4 10             	add    $0x10,%esp
c10069bc:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10069c1:	8b 40 14             	mov    0x14(%eax),%eax
c10069c4:	83 ec 08             	sub    $0x8,%esp
c10069c7:	50                   	push   %eax
c10069c8:	68 00 bc 00 c1       	push   $0xc100bc00
c10069cd:	e8 e0 ed ff ff       	call   c10057b2 <printk>
c10069d2:	83 c4 10             	add    $0x10,%esp
c10069d5:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10069da:	8b 40 20             	mov    0x20(%eax),%eax
c10069dd:	83 ec 08             	sub    $0x8,%esp
c10069e0:	50                   	push   %eax
c10069e1:	68 30 bc 00 c1       	push   $0xc100bc30
c10069e6:	e8 c7 ed ff ff       	call   c10057b2 <printk>
c10069eb:	83 c4 10             	add    $0x10,%esp
c10069ee:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10069f3:	8b 40 1c             	mov    0x1c(%eax),%eax
c10069f6:	83 ec 08             	sub    $0x8,%esp
c10069f9:	50                   	push   %eax
c10069fa:	68 54 bc 00 c1       	push   $0xc100bc54
c10069ff:	e8 ae ed ff ff       	call   c10057b2 <printk>
c1006a04:	83 c4 10             	add    $0x10,%esp
c1006a07:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006a0c:	83 ec 0c             	sub    $0xc,%esp
c1006a0f:	50                   	push   %eax
c1006a10:	e8 f1 19 00 00       	call   c1008406 <open_root_dir>
c1006a15:	83 c4 10             	add    $0x10,%esp
c1006a18:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006a1f:	eb 1d                	jmp    c1006a3e <mount_partition+0x2b9>
c1006a21:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006a24:	8d 42 01             	lea    0x1(%edx),%eax
c1006a27:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006a2a:	89 d0                	mov    %edx,%eax
c1006a2c:	01 c0                	add    %eax,%eax
c1006a2e:	01 d0                	add    %edx,%eax
c1006a30:	c1 e0 02             	shl    $0x2,%eax
c1006a33:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1006a38:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1006a3e:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006a42:	76 dd                	jbe    c1006a21 <mount_partition+0x29c>
c1006a44:	90                   	nop
c1006a45:	90                   	nop
c1006a46:	c9                   	leave  
c1006a47:	c3                   	ret    

c1006a48 <path_parse>:
c1006a48:	55                   	push   %ebp
c1006a49:	89 e5                	mov    %esp,%ebp
c1006a4b:	8b 45 08             	mov    0x8(%ebp),%eax
c1006a4e:	0f b6 00             	movzbl (%eax),%eax
c1006a51:	3c 2f                	cmp    $0x2f,%al
c1006a53:	75 27                	jne    c1006a7c <path_parse+0x34>
c1006a55:	83 45 08 01          	addl   $0x1,0x8(%ebp)
c1006a59:	8b 45 08             	mov    0x8(%ebp),%eax
c1006a5c:	0f b6 00             	movzbl (%eax),%eax
c1006a5f:	3c 2f                	cmp    $0x2f,%al
c1006a61:	74 f2                	je     c1006a55 <path_parse+0xd>
c1006a63:	eb 17                	jmp    c1006a7c <path_parse+0x34>
c1006a65:	8b 55 08             	mov    0x8(%ebp),%edx
c1006a68:	8d 42 01             	lea    0x1(%edx),%eax
c1006a6b:	89 45 08             	mov    %eax,0x8(%ebp)
c1006a6e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006a71:	8d 48 01             	lea    0x1(%eax),%ecx
c1006a74:	89 4d 0c             	mov    %ecx,0xc(%ebp)
c1006a77:	0f b6 12             	movzbl (%edx),%edx
c1006a7a:	88 10                	mov    %dl,(%eax)
c1006a7c:	8b 45 08             	mov    0x8(%ebp),%eax
c1006a7f:	0f b6 00             	movzbl (%eax),%eax
c1006a82:	3c 2f                	cmp    $0x2f,%al
c1006a84:	74 0a                	je     c1006a90 <path_parse+0x48>
c1006a86:	8b 45 08             	mov    0x8(%ebp),%eax
c1006a89:	0f b6 00             	movzbl (%eax),%eax
c1006a8c:	84 c0                	test   %al,%al
c1006a8e:	75 d5                	jne    c1006a65 <path_parse+0x1d>
c1006a90:	8b 45 08             	mov    0x8(%ebp),%eax
c1006a93:	0f b6 00             	movzbl (%eax),%eax
c1006a96:	84 c0                	test   %al,%al
c1006a98:	75 07                	jne    c1006aa1 <path_parse+0x59>
c1006a9a:	b8 00 00 00 00       	mov    $0x0,%eax
c1006a9f:	eb 03                	jmp    c1006aa4 <path_parse+0x5c>
c1006aa1:	8b 45 08             	mov    0x8(%ebp),%eax
c1006aa4:	5d                   	pop    %ebp
c1006aa5:	c3                   	ret    

c1006aa6 <path_depth_cnt>:
c1006aa6:	55                   	push   %ebp
c1006aa7:	89 e5                	mov    %esp,%ebp
c1006aa9:	83 ec 28             	sub    $0x28,%esp
c1006aac:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006ab0:	75 19                	jne    c1006acb <path_depth_cnt+0x25>
c1006ab2:	68 81 bc 00 c1       	push   $0xc100bc81
c1006ab7:	68 b8 c2 00 c1       	push   $0xc100c2b8
c1006abc:	68 d2 00 00 00       	push   $0xd2
c1006ac1:	68 94 bc 00 c1       	push   $0xc100bc94
c1006ac6:	e8 a0 98 ff ff       	call   c100036b <__PANIC>
c1006acb:	8b 45 08             	mov    0x8(%ebp),%eax
c1006ace:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006ad1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1006ad8:	83 ec 08             	sub    $0x8,%esp
c1006adb:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1006ade:	50                   	push   %eax
c1006adf:	ff 75 f4             	pushl  -0xc(%ebp)
c1006ae2:	e8 61 ff ff ff       	call   c1006a48 <path_parse>
c1006ae7:	83 c4 10             	add    $0x10,%esp
c1006aea:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006aed:	eb 32                	jmp    c1006b21 <path_depth_cnt+0x7b>
c1006aef:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1006af3:	83 ec 04             	sub    $0x4,%esp
c1006af6:	6a 10                	push   $0x10
c1006af8:	6a 00                	push   $0x0
c1006afa:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1006afd:	50                   	push   %eax
c1006afe:	e8 a7 95 ff ff       	call   c10000aa <memset>
c1006b03:	83 c4 10             	add    $0x10,%esp
c1006b06:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006b0a:	74 15                	je     c1006b21 <path_depth_cnt+0x7b>
c1006b0c:	83 ec 08             	sub    $0x8,%esp
c1006b0f:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1006b12:	50                   	push   %eax
c1006b13:	ff 75 f4             	pushl  -0xc(%ebp)
c1006b16:	e8 2d ff ff ff       	call   c1006a48 <path_parse>
c1006b1b:	83 c4 10             	add    $0x10,%esp
c1006b1e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006b21:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1006b25:	84 c0                	test   %al,%al
c1006b27:	75 c6                	jne    c1006aef <path_depth_cnt+0x49>
c1006b29:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006b2c:	c9                   	leave  
c1006b2d:	c3                   	ret    

c1006b2e <search_file>:
c1006b2e:	55                   	push   %ebp
c1006b2f:	89 e5                	mov    %esp,%ebp
c1006b31:	57                   	push   %edi
c1006b32:	53                   	push   %ebx
c1006b33:	83 ec 40             	sub    $0x40,%esp
c1006b36:	83 ec 08             	sub    $0x8,%esp
c1006b39:	68 c3 bc 00 c1       	push   $0xc100bcc3
c1006b3e:	ff 75 08             	pushl  0x8(%ebp)
c1006b41:	e8 3d 96 ff ff       	call   c1000183 <strcmp>
c1006b46:	83 c4 10             	add    $0x10,%esp
c1006b49:	85 c0                	test   %eax,%eax
c1006b4b:	74 2e                	je     c1006b7b <search_file+0x4d>
c1006b4d:	83 ec 08             	sub    $0x8,%esp
c1006b50:	68 c5 bc 00 c1       	push   $0xc100bcc5
c1006b55:	ff 75 08             	pushl  0x8(%ebp)
c1006b58:	e8 26 96 ff ff       	call   c1000183 <strcmp>
c1006b5d:	83 c4 10             	add    $0x10,%esp
c1006b60:	85 c0                	test   %eax,%eax
c1006b62:	74 17                	je     c1006b7b <search_file+0x4d>
c1006b64:	83 ec 08             	sub    $0x8,%esp
c1006b67:	68 c8 bc 00 c1       	push   $0xc100bcc8
c1006b6c:	ff 75 08             	pushl  0x8(%ebp)
c1006b6f:	e8 0f 96 ff ff       	call   c1000183 <strcmp>
c1006b74:	83 c4 10             	add    $0x10,%esp
c1006b77:	85 c0                	test   %eax,%eax
c1006b79:	75 2c                	jne    c1006ba7 <search_file+0x79>
c1006b7b:	8b 15 34 42 a1 c1    	mov    0xc1a14234,%edx
c1006b81:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b84:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006b8a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b8d:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1006b94:	00 00 00 
c1006b97:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b9a:	c6 00 00             	movb   $0x0,(%eax)
c1006b9d:	b8 00 00 00 00       	mov    $0x0,%eax
c1006ba2:	e9 10 02 00 00       	jmp    c1006db7 <search_file+0x289>
c1006ba7:	83 ec 0c             	sub    $0xc,%esp
c1006baa:	ff 75 08             	pushl  0x8(%ebp)
c1006bad:	e8 6c 95 ff ff       	call   c100011e <strlen>
c1006bb2:	83 c4 10             	add    $0x10,%esp
c1006bb5:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006bb8:	8b 45 08             	mov    0x8(%ebp),%eax
c1006bbb:	0f b6 00             	movzbl (%eax),%eax
c1006bbe:	3c 2f                	cmp    $0x2f,%al
c1006bc0:	75 0f                	jne    c1006bd1 <search_file+0xa3>
c1006bc2:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1006bc6:	76 09                	jbe    c1006bd1 <search_file+0xa3>
c1006bc8:	81 7d e8 ff 01 00 00 	cmpl   $0x1ff,-0x18(%ebp)
c1006bcf:	76 19                	jbe    c1006bea <search_file+0xbc>
c1006bd1:	68 cc bc 00 c1       	push   $0xc100bccc
c1006bd6:	68 c8 c2 00 c1       	push   $0xc100c2c8
c1006bdb:	68 ef 00 00 00       	push   $0xef
c1006be0:	68 94 bc 00 c1       	push   $0xc100bc94
c1006be5:	e8 81 97 ff ff       	call   c100036b <__PANIC>
c1006bea:	8b 45 08             	mov    0x8(%ebp),%eax
c1006bed:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006bf0:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c1006bf5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006bf8:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
c1006bff:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
c1006c06:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
c1006c0d:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
c1006c14:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c17:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006c1a:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006c20:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c23:	c7 80 04 02 00 00 00 	movl   $0x0,0x204(%eax)
c1006c2a:	00 00 00 
c1006c2d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1006c34:	83 ec 08             	sub    $0x8,%esp
c1006c37:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006c3a:	50                   	push   %eax
c1006c3b:	ff 75 f4             	pushl  -0xc(%ebp)
c1006c3e:	e8 05 fe ff ff       	call   c1006a48 <path_parse>
c1006c43:	83 c4 10             	add    $0x10,%esp
c1006c46:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006c49:	e9 1b 01 00 00       	jmp    c1006d69 <search_file+0x23b>
c1006c4e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c51:	83 ec 0c             	sub    $0xc,%esp
c1006c54:	50                   	push   %eax
c1006c55:	e8 c4 94 ff ff       	call   c100011e <strlen>
c1006c5a:	83 c4 10             	add    $0x10,%esp
c1006c5d:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1006c62:	76 19                	jbe    c1006c7d <search_file+0x14f>
c1006c64:	68 0c bd 00 c1       	push   $0xc100bd0c
c1006c69:	68 c8 c2 00 c1       	push   $0xc100c2c8
c1006c6e:	68 00 01 00 00       	push   $0x100
c1006c73:	68 94 bc 00 c1       	push   $0xc100bc94
c1006c78:	e8 ee 96 ff ff       	call   c100036b <__PANIC>
c1006c7d:	8b 55 0c             	mov    0xc(%ebp),%edx
c1006c80:	89 d0                	mov    %edx,%eax
c1006c82:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1006c87:	89 c3                	mov    %eax,%ebx
c1006c89:	b8 00 00 00 00       	mov    $0x0,%eax
c1006c8e:	89 df                	mov    %ebx,%edi
c1006c90:	f2 ae                	repnz scas %es:(%edi),%al
c1006c92:	89 c8                	mov    %ecx,%eax
c1006c94:	f7 d0                	not    %eax
c1006c96:	83 e8 01             	sub    $0x1,%eax
c1006c99:	01 d0                	add    %edx,%eax
c1006c9b:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1006ca0:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006ca3:	83 ec 08             	sub    $0x8,%esp
c1006ca6:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1006ca9:	52                   	push   %edx
c1006caa:	50                   	push   %eax
c1006cab:	e8 25 95 ff ff       	call   c10001d5 <strcat>
c1006cb0:	83 c4 10             	add    $0x10,%esp
c1006cb3:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006cb8:	8d 55 d0             	lea    -0x30(%ebp),%edx
c1006cbb:	52                   	push   %edx
c1006cbc:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1006cbf:	52                   	push   %edx
c1006cc0:	ff 75 f0             	pushl  -0x10(%ebp)
c1006cc3:	50                   	push   %eax
c1006cc4:	e8 ff 17 00 00       	call   c10084c8 <search_dir_entry>
c1006cc9:	83 c4 10             	add    $0x10,%esp
c1006ccc:	84 c0                	test   %al,%al
c1006cce:	0f 84 8e 00 00 00    	je     c1006d62 <search_file+0x234>
c1006cd4:	83 ec 04             	sub    $0x4,%esp
c1006cd7:	6a 10                	push   $0x10
c1006cd9:	6a 00                	push   $0x0
c1006cdb:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006cde:	50                   	push   %eax
c1006cdf:	e8 c6 93 ff ff       	call   c10000aa <memset>
c1006ce4:	83 c4 10             	add    $0x10,%esp
c1006ce7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006ceb:	74 15                	je     c1006d02 <search_file+0x1d4>
c1006ced:	83 ec 08             	sub    $0x8,%esp
c1006cf0:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006cf3:	50                   	push   %eax
c1006cf4:	ff 75 f4             	pushl  -0xc(%ebp)
c1006cf7:	e8 4c fd ff ff       	call   c1006a48 <path_parse>
c1006cfc:	83 c4 10             	add    $0x10,%esp
c1006cff:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006d02:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006d05:	83 f8 02             	cmp    $0x2,%eax
c1006d08:	75 3e                	jne    c1006d48 <search_file+0x21a>
c1006d0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006d0d:	8b 00                	mov    (%eax),%eax
c1006d0f:	8b 00                	mov    (%eax),%eax
c1006d11:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006d14:	83 ec 0c             	sub    $0xc,%esp
c1006d17:	ff 75 f0             	pushl  -0x10(%ebp)
c1006d1a:	e8 95 19 00 00       	call   c10086b4 <dir_close>
c1006d1f:	83 c4 10             	add    $0x10,%esp
c1006d22:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1006d25:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006d2a:	83 ec 08             	sub    $0x8,%esp
c1006d2d:	52                   	push   %edx
c1006d2e:	50                   	push   %eax
c1006d2f:	e8 54 17 00 00       	call   c1008488 <dir_open>
c1006d34:	83 c4 10             	add    $0x10,%esp
c1006d37:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006d3a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006d3d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006d40:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006d46:	eb 21                	jmp    c1006d69 <search_file+0x23b>
c1006d48:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006d4b:	83 f8 01             	cmp    $0x1,%eax
c1006d4e:	75 19                	jne    c1006d69 <search_file+0x23b>
c1006d50:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006d53:	c7 80 04 02 00 00 01 	movl   $0x1,0x204(%eax)
c1006d5a:	00 00 00 
c1006d5d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006d60:	eb 55                	jmp    c1006db7 <search_file+0x289>
c1006d62:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006d67:	eb 4e                	jmp    c1006db7 <search_file+0x289>
c1006d69:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
c1006d6d:	84 c0                	test   %al,%al
c1006d6f:	0f 85 d9 fe ff ff    	jne    c1006c4e <search_file+0x120>
c1006d75:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006d78:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
c1006d7e:	83 ec 0c             	sub    $0xc,%esp
c1006d81:	50                   	push   %eax
c1006d82:	e8 2d 19 00 00       	call   c10086b4 <dir_close>
c1006d87:	83 c4 10             	add    $0x10,%esp
c1006d8a:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006d8f:	83 ec 08             	sub    $0x8,%esp
c1006d92:	ff 75 ec             	pushl  -0x14(%ebp)
c1006d95:	50                   	push   %eax
c1006d96:	e8 ed 16 00 00       	call   c1008488 <dir_open>
c1006d9b:	83 c4 10             	add    $0x10,%esp
c1006d9e:	8b 55 0c             	mov    0xc(%ebp),%edx
c1006da1:	89 82 00 02 00 00    	mov    %eax,0x200(%edx)
c1006da7:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006daa:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1006db1:	00 00 00 
c1006db4:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006db7:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1006dba:	5b                   	pop    %ebx
c1006dbb:	5f                   	pop    %edi
c1006dbc:	5d                   	pop    %ebp
c1006dbd:	c3                   	ret    

c1006dbe <sys_open>:
c1006dbe:	55                   	push   %ebp
c1006dbf:	89 e5                	mov    %esp,%ebp
c1006dc1:	53                   	push   %ebx
c1006dc2:	81 ec 34 02 00 00    	sub    $0x234,%esp
c1006dc8:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006dcb:	88 85 d4 fd ff ff    	mov    %al,-0x22c(%ebp)
c1006dd1:	83 ec 0c             	sub    $0xc,%esp
c1006dd4:	ff 75 08             	pushl  0x8(%ebp)
c1006dd7:	e8 42 93 ff ff       	call   c100011e <strlen>
c1006ddc:	83 c4 10             	add    $0x10,%esp
c1006ddf:	8d 50 ff             	lea    -0x1(%eax),%edx
c1006de2:	8b 45 08             	mov    0x8(%ebp),%eax
c1006de5:	01 d0                	add    %edx,%eax
c1006de7:	0f b6 00             	movzbl (%eax),%eax
c1006dea:	3c 2f                	cmp    $0x2f,%al
c1006dec:	75 1d                	jne    c1006e0b <sys_open+0x4d>
c1006dee:	83 ec 08             	sub    $0x8,%esp
c1006df1:	ff 75 08             	pushl  0x8(%ebp)
c1006df4:	68 39 bd 00 c1       	push   $0xc100bd39
c1006df9:	e8 b4 e9 ff ff       	call   c10057b2 <printk>
c1006dfe:	83 c4 10             	add    $0x10,%esp
c1006e01:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006e06:	e9 0a 02 00 00       	jmp    c1007015 <sys_open+0x257>
c1006e0b:	80 bd d4 fd ff ff 07 	cmpb   $0x7,-0x22c(%ebp)
c1006e12:	76 19                	jbe    c1006e2d <sys_open+0x6f>
c1006e14:	68 54 bd 00 c1       	push   $0xc100bd54
c1006e19:	68 d4 c2 00 c1       	push   $0xc100c2d4
c1006e1e:	68 2e 01 00 00       	push   $0x12e
c1006e23:	68 94 bc 00 c1       	push   $0xc100bc94
c1006e28:	e8 3e 95 ff ff       	call   c100036b <__PANIC>
c1006e2d:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006e34:	83 ec 04             	sub    $0x4,%esp
c1006e37:	68 08 02 00 00       	push   $0x208
c1006e3c:	6a 00                	push   $0x0
c1006e3e:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006e44:	50                   	push   %eax
c1006e45:	e8 60 92 ff ff       	call   c10000aa <memset>
c1006e4a:	83 c4 10             	add    $0x10,%esp
c1006e4d:	83 ec 0c             	sub    $0xc,%esp
c1006e50:	ff 75 08             	pushl  0x8(%ebp)
c1006e53:	e8 4e fc ff ff       	call   c1006aa6 <path_depth_cnt>
c1006e58:	83 c4 10             	add    $0x10,%esp
c1006e5b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006e5e:	83 ec 08             	sub    $0x8,%esp
c1006e61:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006e67:	50                   	push   %eax
c1006e68:	ff 75 08             	pushl  0x8(%ebp)
c1006e6b:	e8 be fc ff ff       	call   c1006b2e <search_file>
c1006e70:	83 c4 10             	add    $0x10,%esp
c1006e73:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006e76:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
c1006e7a:	0f 95 c0             	setne  %al
c1006e7d:	88 45 eb             	mov    %al,-0x15(%ebp)
c1006e80:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006e83:	83 f8 02             	cmp    $0x2,%eax
c1006e86:	75 29                	jne    c1006eb1 <sys_open+0xf3>
c1006e88:	83 ec 0c             	sub    $0xc,%esp
c1006e8b:	68 60 bd 00 c1       	push   $0xc100bd60
c1006e90:	e8 1d e9 ff ff       	call   c10057b2 <printk>
c1006e95:	83 c4 10             	add    $0x10,%esp
c1006e98:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006e9b:	83 ec 0c             	sub    $0xc,%esp
c1006e9e:	50                   	push   %eax
c1006e9f:	e8 10 18 00 00       	call   c10086b4 <dir_close>
c1006ea4:	83 c4 10             	add    $0x10,%esp
c1006ea7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006eac:	e9 64 01 00 00       	jmp    c1007015 <sys_open+0x257>
c1006eb1:	83 ec 0c             	sub    $0xc,%esp
c1006eb4:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006eba:	50                   	push   %eax
c1006ebb:	e8 e6 fb ff ff       	call   c1006aa6 <path_depth_cnt>
c1006ec0:	83 c4 10             	add    $0x10,%esp
c1006ec3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006ec6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006ec9:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1006ecc:	74 33                	je     c1006f01 <sys_open+0x143>
c1006ece:	83 ec 04             	sub    $0x4,%esp
c1006ed1:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006ed7:	50                   	push   %eax
c1006ed8:	ff 75 08             	pushl  0x8(%ebp)
c1006edb:	68 a0 bd 00 c1       	push   $0xc100bda0
c1006ee0:	e8 cd e8 ff ff       	call   c10057b2 <printk>
c1006ee5:	83 c4 10             	add    $0x10,%esp
c1006ee8:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006eeb:	83 ec 0c             	sub    $0xc,%esp
c1006eee:	50                   	push   %eax
c1006eef:	e8 c0 17 00 00       	call   c10086b4 <dir_close>
c1006ef4:	83 c4 10             	add    $0x10,%esp
c1006ef7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006efc:	e9 14 01 00 00       	jmp    c1007015 <sys_open+0x257>
c1006f01:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006f05:	75 56                	jne    c1006f5d <sys_open+0x19f>
c1006f07:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006f0e:	83 e0 04             	and    $0x4,%eax
c1006f11:	85 c0                	test   %eax,%eax
c1006f13:	75 48                	jne    c1006f5d <sys_open+0x19f>
c1006f15:	83 ec 08             	sub    $0x8,%esp
c1006f18:	6a 2f                	push   $0x2f
c1006f1a:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006f20:	50                   	push   %eax
c1006f21:	e8 70 92 ff ff       	call   c1000196 <strrchr>
c1006f26:	83 c4 10             	add    $0x10,%esp
c1006f29:	83 c0 01             	add    $0x1,%eax
c1006f2c:	83 ec 04             	sub    $0x4,%esp
c1006f2f:	50                   	push   %eax
c1006f30:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006f36:	50                   	push   %eax
c1006f37:	68 dc bd 00 c1       	push   $0xc100bddc
c1006f3c:	e8 71 e8 ff ff       	call   c10057b2 <printk>
c1006f41:	83 c4 10             	add    $0x10,%esp
c1006f44:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006f47:	83 ec 0c             	sub    $0xc,%esp
c1006f4a:	50                   	push   %eax
c1006f4b:	e8 64 17 00 00       	call   c10086b4 <dir_close>
c1006f50:	83 c4 10             	add    $0x10,%esp
c1006f53:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006f58:	e9 b8 00 00 00       	jmp    c1007015 <sys_open+0x257>
c1006f5d:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006f61:	74 37                	je     c1006f9a <sys_open+0x1dc>
c1006f63:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006f6a:	83 e0 04             	and    $0x4,%eax
c1006f6d:	85 c0                	test   %eax,%eax
c1006f6f:	74 29                	je     c1006f9a <sys_open+0x1dc>
c1006f71:	83 ec 08             	sub    $0x8,%esp
c1006f74:	ff 75 08             	pushl  0x8(%ebp)
c1006f77:	68 fc bd 00 c1       	push   $0xc100bdfc
c1006f7c:	e8 31 e8 ff ff       	call   c10057b2 <printk>
c1006f81:	83 c4 10             	add    $0x10,%esp
c1006f84:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006f87:	83 ec 0c             	sub    $0xc,%esp
c1006f8a:	50                   	push   %eax
c1006f8b:	e8 24 17 00 00       	call   c10086b4 <dir_close>
c1006f90:	83 c4 10             	add    $0x10,%esp
c1006f93:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006f98:	eb 7b                	jmp    c1007015 <sys_open+0x257>
c1006f9a:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006fa1:	83 e0 04             	and    $0x4,%eax
c1006fa4:	83 f8 04             	cmp    $0x4,%eax
c1006fa7:	75 4f                	jne    c1006ff8 <sys_open+0x23a>
c1006fa9:	83 ec 0c             	sub    $0xc,%esp
c1006fac:	68 13 be 00 c1       	push   $0xc100be13
c1006fb1:	e8 fc e7 ff ff       	call   c10057b2 <printk>
c1006fb6:	83 c4 10             	add    $0x10,%esp
c1006fb9:	0f b6 9d d4 fd ff ff 	movzbl -0x22c(%ebp),%ebx
c1006fc0:	83 ec 08             	sub    $0x8,%esp
c1006fc3:	6a 2f                	push   $0x2f
c1006fc5:	ff 75 08             	pushl  0x8(%ebp)
c1006fc8:	e8 c9 91 ff ff       	call   c1000196 <strrchr>
c1006fcd:	83 c4 10             	add    $0x10,%esp
c1006fd0:	8d 50 01             	lea    0x1(%eax),%edx
c1006fd3:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006fd6:	83 ec 04             	sub    $0x4,%esp
c1006fd9:	53                   	push   %ebx
c1006fda:	52                   	push   %edx
c1006fdb:	50                   	push   %eax
c1006fdc:	e8 dd 25 00 00       	call   c10095be <file_create>
c1006fe1:	83 c4 10             	add    $0x10,%esp
c1006fe4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006fe7:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006fea:	83 ec 0c             	sub    $0xc,%esp
c1006fed:	50                   	push   %eax
c1006fee:	e8 c1 16 00 00       	call   c10086b4 <dir_close>
c1006ff3:	83 c4 10             	add    $0x10,%esp
c1006ff6:	eb 1a                	jmp    c1007012 <sys_open+0x254>
c1006ff8:	0f b6 95 d4 fd ff ff 	movzbl -0x22c(%ebp),%edx
c1006fff:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007002:	83 ec 08             	sub    $0x8,%esp
c1007005:	52                   	push   %edx
c1007006:	50                   	push   %eax
c1007007:	e8 94 28 00 00       	call   c10098a0 <file_open>
c100700c:	83 c4 10             	add    $0x10,%esp
c100700f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007012:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007015:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1007018:	c9                   	leave  
c1007019:	c3                   	ret    

c100701a <fd_local2global>:
c100701a:	55                   	push   %ebp
c100701b:	89 e5                	mov    %esp,%ebp
c100701d:	83 ec 18             	sub    $0x18,%esp
c1007020:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1007025:	8b 55 08             	mov    0x8(%ebp),%edx
c1007028:	83 c2 1c             	add    $0x1c,%edx
c100702b:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c100702f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007032:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1007036:	78 06                	js     c100703e <fd_local2global+0x24>
c1007038:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c100703c:	7e 19                	jle    c1007057 <fd_local2global+0x3d>
c100703e:	68 24 be 00 c1       	push   $0xc100be24
c1007043:	68 e0 c2 00 c1       	push   $0xc100c2e0
c1007048:	68 6d 01 00 00       	push   $0x16d
c100704d:	68 94 bc 00 c1       	push   $0xc100bc94
c1007052:	e8 14 93 ff ff       	call   c100036b <__PANIC>
c1007057:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100705a:	c9                   	leave  
c100705b:	c3                   	ret    

c100705c <sys_close>:
c100705c:	55                   	push   %ebp
c100705d:	89 e5                	mov    %esp,%ebp
c100705f:	83 ec 18             	sub    $0x18,%esp
c1007062:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007069:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c100706d:	0f 8e e0 00 00 00    	jle    c1007153 <sys_close+0xf7>
c1007073:	8b 45 08             	mov    0x8(%ebp),%eax
c1007076:	83 ec 0c             	sub    $0xc,%esp
c1007079:	50                   	push   %eax
c100707a:	e8 9b ff ff ff       	call   c100701a <fd_local2global>
c100707f:	83 c4 10             	add    $0x10,%esp
c1007082:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007085:	8b 45 08             	mov    0x8(%ebp),%eax
c1007088:	83 ec 0c             	sub    $0xc,%esp
c100708b:	50                   	push   %eax
c100708c:	e8 0e 3b 00 00       	call   c100ab9f <is_pipe>
c1007091:	83 c4 10             	add    $0x10,%esp
c1007094:	84 c0                	test   %al,%al
c1007096:	0f 84 84 00 00 00    	je     c1007120 <sys_close+0xc4>
c100709c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100709f:	89 d0                	mov    %edx,%eax
c10070a1:	01 c0                	add    %eax,%eax
c10070a3:	01 d0                	add    %edx,%eax
c10070a5:	c1 e0 02             	shl    $0x2,%eax
c10070a8:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10070ad:	8b 00                	mov    (%eax),%eax
c10070af:	8d 48 ff             	lea    -0x1(%eax),%ecx
c10070b2:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10070b5:	89 d0                	mov    %edx,%eax
c10070b7:	01 c0                	add    %eax,%eax
c10070b9:	01 d0                	add    %edx,%eax
c10070bb:	c1 e0 02             	shl    $0x2,%eax
c10070be:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10070c3:	89 08                	mov    %ecx,(%eax)
c10070c5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10070c8:	89 d0                	mov    %edx,%eax
c10070ca:	01 c0                	add    %eax,%eax
c10070cc:	01 d0                	add    %edx,%eax
c10070ce:	c1 e0 02             	shl    $0x2,%eax
c10070d1:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10070d6:	8b 00                	mov    (%eax),%eax
c10070d8:	85 c0                	test   %eax,%eax
c10070da:	75 3b                	jne    c1007117 <sys_close+0xbb>
c10070dc:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10070df:	89 d0                	mov    %edx,%eax
c10070e1:	01 c0                	add    %eax,%eax
c10070e3:	01 d0                	add    %edx,%eax
c10070e5:	c1 e0 02             	shl    $0x2,%eax
c10070e8:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10070ed:	8b 00                	mov    (%eax),%eax
c10070ef:	83 ec 08             	sub    $0x8,%esp
c10070f2:	68 00 10 00 00       	push   $0x1000
c10070f7:	50                   	push   %eax
c10070f8:	e8 db bc ff ff       	call   c1002dd8 <vmm_free>
c10070fd:	83 c4 10             	add    $0x10,%esp
c1007100:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007103:	89 d0                	mov    %edx,%eax
c1007105:	01 c0                	add    %eax,%eax
c1007107:	01 d0                	add    %edx,%eax
c1007109:	c1 e0 02             	shl    $0x2,%eax
c100710c:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1007111:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1007117:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100711e:	eb 20                	jmp    c1007140 <sys_close+0xe4>
c1007120:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007123:	89 d0                	mov    %edx,%eax
c1007125:	01 c0                	add    %eax,%eax
c1007127:	01 d0                	add    %edx,%eax
c1007129:	c1 e0 02             	shl    $0x2,%eax
c100712c:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1007131:	83 ec 0c             	sub    $0xc,%esp
c1007134:	50                   	push   %eax
c1007135:	e8 7d 28 00 00       	call   c10099b7 <file_close>
c100713a:	83 c4 10             	add    $0x10,%esp
c100713d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007140:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1007145:	8b 55 08             	mov    0x8(%ebp),%edx
c1007148:	83 c2 1c             	add    $0x1c,%edx
c100714b:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c1007152:	ff 
c1007153:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007156:	c9                   	leave  
c1007157:	c3                   	ret    

c1007158 <sys_write>:
c1007158:	55                   	push   %ebp
c1007159:	89 e5                	mov    %esp,%ebp
c100715b:	57                   	push   %edi
c100715c:	81 ec 14 04 00 00    	sub    $0x414,%esp
c1007162:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007166:	79 1a                	jns    c1007182 <sys_write+0x2a>
c1007168:	83 ec 0c             	sub    $0xc,%esp
c100716b:	68 50 be 00 c1       	push   $0xc100be50
c1007170:	e8 3d e6 ff ff       	call   c10057b2 <printk>
c1007175:	83 c4 10             	add    $0x10,%esp
c1007178:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100717d:	e9 30 01 00 00       	jmp    c10072b2 <sys_write+0x15a>
c1007182:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1007186:	0f 85 8c 00 00 00    	jne    c1007218 <sys_write+0xc0>
c100718c:	8b 45 08             	mov    0x8(%ebp),%eax
c100718f:	83 ec 0c             	sub    $0xc,%esp
c1007192:	50                   	push   %eax
c1007193:	e8 07 3a 00 00       	call   c100ab9f <is_pipe>
c1007198:	83 c4 10             	add    $0x10,%esp
c100719b:	84 c0                	test   %al,%al
c100719d:	74 19                	je     c10071b8 <sys_write+0x60>
c100719f:	83 ec 04             	sub    $0x4,%esp
c10071a2:	ff 75 10             	pushl  0x10(%ebp)
c10071a5:	ff 75 0c             	pushl  0xc(%ebp)
c10071a8:	ff 75 08             	pushl  0x8(%ebp)
c10071ab:	e8 7a 3b 00 00       	call   c100ad2a <pipe_write>
c10071b0:	83 c4 10             	add    $0x10,%esp
c10071b3:	e9 fa 00 00 00       	jmp    c10072b2 <sys_write+0x15a>
c10071b8:	c7 85 ec fb ff ff 00 	movl   $0x0,-0x414(%ebp)
c10071bf:	00 00 00 
c10071c2:	8d 95 f0 fb ff ff    	lea    -0x410(%ebp),%edx
c10071c8:	b8 00 00 00 00       	mov    $0x0,%eax
c10071cd:	b9 ff 00 00 00       	mov    $0xff,%ecx
c10071d2:	89 d7                	mov    %edx,%edi
c10071d4:	f3 ab                	rep stos %eax,%es:(%edi)
c10071d6:	83 ec 04             	sub    $0x4,%esp
c10071d9:	ff 75 10             	pushl  0x10(%ebp)
c10071dc:	ff 75 0c             	pushl  0xc(%ebp)
c10071df:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c10071e5:	50                   	push   %eax
c10071e6:	e8 1d 8f ff ff       	call   c1000108 <memcpy>
c10071eb:	83 c4 10             	add    $0x10,%esp
c10071ee:	83 ec 0c             	sub    $0xc,%esp
c10071f1:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c10071f7:	50                   	push   %eax
c10071f8:	e8 b5 e5 ff ff       	call   c10057b2 <printk>
c10071fd:	83 c4 10             	add    $0x10,%esp
c1007200:	83 ec 0c             	sub    $0xc,%esp
c1007203:	68 65 be 00 c1       	push   $0xc100be65
c1007208:	e8 a5 e5 ff ff       	call   c10057b2 <printk>
c100720d:	83 c4 10             	add    $0x10,%esp
c1007210:	8b 45 10             	mov    0x10(%ebp),%eax
c1007213:	e9 9a 00 00 00       	jmp    c10072b2 <sys_write+0x15a>
c1007218:	8b 45 08             	mov    0x8(%ebp),%eax
c100721b:	83 ec 0c             	sub    $0xc,%esp
c100721e:	50                   	push   %eax
c100721f:	e8 7b 39 00 00       	call   c100ab9f <is_pipe>
c1007224:	83 c4 10             	add    $0x10,%esp
c1007227:	84 c0                	test   %al,%al
c1007229:	74 16                	je     c1007241 <sys_write+0xe9>
c100722b:	83 ec 04             	sub    $0x4,%esp
c100722e:	ff 75 10             	pushl  0x10(%ebp)
c1007231:	ff 75 0c             	pushl  0xc(%ebp)
c1007234:	ff 75 08             	pushl  0x8(%ebp)
c1007237:	e8 ee 3a 00 00       	call   c100ad2a <pipe_write>
c100723c:	83 c4 10             	add    $0x10,%esp
c100723f:	eb 71                	jmp    c10072b2 <sys_write+0x15a>
c1007241:	8b 45 08             	mov    0x8(%ebp),%eax
c1007244:	83 ec 0c             	sub    $0xc,%esp
c1007247:	50                   	push   %eax
c1007248:	e8 cd fd ff ff       	call   c100701a <fd_local2global>
c100724d:	83 c4 10             	add    $0x10,%esp
c1007250:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007253:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007256:	89 d0                	mov    %edx,%eax
c1007258:	01 c0                	add    %eax,%eax
c100725a:	01 d0                	add    %edx,%eax
c100725c:	c1 e0 02             	shl    $0x2,%eax
c100725f:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1007264:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007267:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100726a:	8b 40 04             	mov    0x4(%eax),%eax
c100726d:	83 e0 01             	and    $0x1,%eax
c1007270:	85 c0                	test   %eax,%eax
c1007272:	75 0d                	jne    c1007281 <sys_write+0x129>
c1007274:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007277:	8b 40 04             	mov    0x4(%eax),%eax
c100727a:	83 e0 02             	and    $0x2,%eax
c100727d:	85 c0                	test   %eax,%eax
c100727f:	74 1c                	je     c100729d <sys_write+0x145>
c1007281:	83 ec 04             	sub    $0x4,%esp
c1007284:	ff 75 10             	pushl  0x10(%ebp)
c1007287:	ff 75 0c             	pushl  0xc(%ebp)
c100728a:	ff 75 f0             	pushl  -0x10(%ebp)
c100728d:	e8 65 27 00 00       	call   c10099f7 <file_write>
c1007292:	83 c4 10             	add    $0x10,%esp
c1007295:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007298:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100729b:	eb 15                	jmp    c10072b2 <sys_write+0x15a>
c100729d:	83 ec 0c             	sub    $0xc,%esp
c10072a0:	68 68 be 00 c1       	push   $0xc100be68
c10072a5:	e8 08 e5 ff ff       	call   c10057b2 <printk>
c10072aa:	83 c4 10             	add    $0x10,%esp
c10072ad:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10072b2:	8b 7d fc             	mov    -0x4(%ebp),%edi
c10072b5:	c9                   	leave  
c10072b6:	c3                   	ret    

c10072b7 <sys_read>:
c10072b7:	55                   	push   %ebp
c10072b8:	89 e5                	mov    %esp,%ebp
c10072ba:	83 ec 18             	sub    $0x18,%esp
c10072bd:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
c10072c1:	75 19                	jne    c10072dc <sys_read+0x25>
c10072c3:	68 ae be 00 c1       	push   $0xc100beae
c10072c8:	68 f0 c2 00 c1       	push   $0xc100c2f0
c10072cd:	68 a5 01 00 00       	push   $0x1a5
c10072d2:	68 94 bc 00 c1       	push   $0xc100bc94
c10072d7:	e8 8f 90 ff ff       	call   c100036b <__PANIC>
c10072dc:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10072e3:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10072e7:	78 0c                	js     c10072f5 <sys_read+0x3e>
c10072e9:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c10072ed:	74 06                	je     c10072f5 <sys_read+0x3e>
c10072ef:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c10072f3:	75 15                	jne    c100730a <sys_read+0x53>
c10072f5:	83 ec 0c             	sub    $0xc,%esp
c10072f8:	68 ba be 00 c1       	push   $0xc100beba
c10072fd:	e8 b0 e4 ff ff       	call   c10057b2 <printk>
c1007302:	83 c4 10             	add    $0x10,%esp
c1007305:	e9 ff 00 00 00       	jmp    c1007409 <sys_read+0x152>
c100730a:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100730e:	0f 85 91 00 00 00    	jne    c10073a5 <sys_read+0xee>
c1007314:	8b 45 08             	mov    0x8(%ebp),%eax
c1007317:	83 ec 0c             	sub    $0xc,%esp
c100731a:	50                   	push   %eax
c100731b:	e8 7f 38 00 00       	call   c100ab9f <is_pipe>
c1007320:	83 c4 10             	add    $0x10,%esp
c1007323:	84 c0                	test   %al,%al
c1007325:	74 1c                	je     c1007343 <sys_read+0x8c>
c1007327:	83 ec 04             	sub    $0x4,%esp
c100732a:	ff 75 10             	pushl  0x10(%ebp)
c100732d:	ff 75 0c             	pushl  0xc(%ebp)
c1007330:	ff 75 08             	pushl  0x8(%ebp)
c1007333:	e8 6f 39 00 00       	call   c100aca7 <pipe_read>
c1007338:	83 c4 10             	add    $0x10,%esp
c100733b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100733e:	e9 c6 00 00 00       	jmp    c1007409 <sys_read+0x152>
c1007343:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007346:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007349:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007350:	0f b6 05 6c fc 00 c1 	movzbl 0xc100fc6c,%eax
c1007357:	84 c0                	test   %al,%al
c1007359:	75 2d                	jne    c1007388 <sys_read+0xd1>
c100735b:	83 ec 0c             	sub    $0xc,%esp
c100735e:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1007363:	e8 fe e8 ff ff       	call   c1005c66 <sema_down>
c1007368:	83 c4 10             	add    $0x10,%esp
c100736b:	eb 1b                	jmp    c1007388 <sys_read+0xd1>
c100736d:	0f b6 15 6c fc 00 c1 	movzbl 0xc100fc6c,%edx
c1007374:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007377:	88 10                	mov    %dl,(%eax)
c1007379:	c6 05 6c fc 00 c1 00 	movb   $0x0,0xc100fc6c
c1007380:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1007384:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1007388:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100738b:	3b 45 10             	cmp    0x10(%ebp),%eax
c100738e:	72 dd                	jb     c100736d <sys_read+0xb6>
c1007390:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1007394:	74 05                	je     c100739b <sys_read+0xe4>
c1007396:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007399:	eb 05                	jmp    c10073a0 <sys_read+0xe9>
c100739b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10073a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10073a3:	eb 64                	jmp    c1007409 <sys_read+0x152>
c10073a5:	8b 45 08             	mov    0x8(%ebp),%eax
c10073a8:	83 ec 0c             	sub    $0xc,%esp
c10073ab:	50                   	push   %eax
c10073ac:	e8 ee 37 00 00       	call   c100ab9f <is_pipe>
c10073b1:	83 c4 10             	add    $0x10,%esp
c10073b4:	84 c0                	test   %al,%al
c10073b6:	74 19                	je     c10073d1 <sys_read+0x11a>
c10073b8:	83 ec 04             	sub    $0x4,%esp
c10073bb:	ff 75 10             	pushl  0x10(%ebp)
c10073be:	ff 75 0c             	pushl  0xc(%ebp)
c10073c1:	ff 75 08             	pushl  0x8(%ebp)
c10073c4:	e8 de 38 00 00       	call   c100aca7 <pipe_read>
c10073c9:	83 c4 10             	add    $0x10,%esp
c10073cc:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10073cf:	eb 38                	jmp    c1007409 <sys_read+0x152>
c10073d1:	8b 45 08             	mov    0x8(%ebp),%eax
c10073d4:	83 ec 0c             	sub    $0xc,%esp
c10073d7:	50                   	push   %eax
c10073d8:	e8 3d fc ff ff       	call   c100701a <fd_local2global>
c10073dd:	83 c4 10             	add    $0x10,%esp
c10073e0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10073e3:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10073e6:	89 d0                	mov    %edx,%eax
c10073e8:	01 c0                	add    %eax,%eax
c10073ea:	01 d0                	add    %edx,%eax
c10073ec:	c1 e0 02             	shl    $0x2,%eax
c10073ef:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10073f4:	83 ec 04             	sub    $0x4,%esp
c10073f7:	ff 75 10             	pushl  0x10(%ebp)
c10073fa:	ff 75 0c             	pushl  0xc(%ebp)
c10073fd:	50                   	push   %eax
c10073fe:	e8 56 2d 00 00       	call   c100a159 <file_read>
c1007403:	83 c4 10             	add    $0x10,%esp
c1007406:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007409:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100740c:	c9                   	leave  
c100740d:	c3                   	ret    

c100740e <sys_lseek>:
c100740e:	55                   	push   %ebp
c100740f:	89 e5                	mov    %esp,%ebp
c1007411:	83 ec 28             	sub    $0x28,%esp
c1007414:	8b 45 10             	mov    0x10(%ebp),%eax
c1007417:	88 45 e4             	mov    %al,-0x1c(%ebp)
c100741a:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100741e:	79 1a                	jns    c100743a <sys_lseek+0x2c>
c1007420:	83 ec 0c             	sub    $0xc,%esp
c1007423:	68 ce be 00 c1       	push   $0xc100bece
c1007428:	e8 85 e3 ff ff       	call   c10057b2 <printk>
c100742d:	83 c4 10             	add    $0x10,%esp
c1007430:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007435:	e9 be 00 00 00       	jmp    c10074f8 <sys_lseek+0xea>
c100743a:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
c100743e:	74 06                	je     c1007446 <sys_lseek+0x38>
c1007440:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
c1007444:	76 19                	jbe    c100745f <sys_lseek+0x51>
c1007446:	68 e3 be 00 c1       	push   $0xc100bee3
c100744b:	68 fc c2 00 c1       	push   $0xc100c2fc
c1007450:	68 cc 01 00 00       	push   $0x1cc
c1007455:	68 94 bc 00 c1       	push   $0xc100bc94
c100745a:	e8 0c 8f ff ff       	call   c100036b <__PANIC>
c100745f:	8b 45 08             	mov    0x8(%ebp),%eax
c1007462:	83 ec 0c             	sub    $0xc,%esp
c1007465:	50                   	push   %eax
c1007466:	e8 af fb ff ff       	call   c100701a <fd_local2global>
c100746b:	83 c4 10             	add    $0x10,%esp
c100746e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007471:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007474:	89 d0                	mov    %edx,%eax
c1007476:	01 c0                	add    %eax,%eax
c1007478:	01 d0                	add    %edx,%eax
c100747a:	c1 e0 02             	shl    $0x2,%eax
c100747d:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1007482:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007485:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100748c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100748f:	8b 40 08             	mov    0x8(%eax),%eax
c1007492:	8b 40 04             	mov    0x4(%eax),%eax
c1007495:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007498:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100749c:	83 f8 03             	cmp    $0x3,%eax
c100749f:	74 2a                	je     c10074cb <sys_lseek+0xbd>
c10074a1:	83 f8 03             	cmp    $0x3,%eax
c10074a4:	7f 30                	jg     c10074d6 <sys_lseek+0xc8>
c10074a6:	83 f8 01             	cmp    $0x1,%eax
c10074a9:	74 07                	je     c10074b2 <sys_lseek+0xa4>
c10074ab:	83 f8 02             	cmp    $0x2,%eax
c10074ae:	74 0a                	je     c10074ba <sys_lseek+0xac>
c10074b0:	eb 24                	jmp    c10074d6 <sys_lseek+0xc8>
c10074b2:	8b 45 0c             	mov    0xc(%ebp),%eax
c10074b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10074b8:	eb 1c                	jmp    c10074d6 <sys_lseek+0xc8>
c10074ba:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10074bd:	8b 00                	mov    (%eax),%eax
c10074bf:	89 c2                	mov    %eax,%edx
c10074c1:	8b 45 0c             	mov    0xc(%ebp),%eax
c10074c4:	01 d0                	add    %edx,%eax
c10074c6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10074c9:	eb 0b                	jmp    c10074d6 <sys_lseek+0xc8>
c10074cb:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10074ce:	8b 45 0c             	mov    0xc(%ebp),%eax
c10074d1:	01 d0                	add    %edx,%eax
c10074d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10074d6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10074da:	78 08                	js     c10074e4 <sys_lseek+0xd6>
c10074dc:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10074df:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c10074e2:	7f 07                	jg     c10074eb <sys_lseek+0xdd>
c10074e4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10074e9:	eb 0d                	jmp    c10074f8 <sys_lseek+0xea>
c10074eb:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10074ee:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10074f1:	89 10                	mov    %edx,(%eax)
c10074f3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10074f6:	8b 00                	mov    (%eax),%eax
c10074f8:	c9                   	leave  
c10074f9:	c3                   	ret    

c10074fa <sys_unlink>:
c10074fa:	55                   	push   %ebp
c10074fb:	89 e5                	mov    %esp,%ebp
c10074fd:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1007503:	83 ec 0c             	sub    $0xc,%esp
c1007506:	ff 75 08             	pushl  0x8(%ebp)
c1007509:	e8 10 8c ff ff       	call   c100011e <strlen>
c100750e:	83 c4 10             	add    $0x10,%esp
c1007511:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1007516:	76 19                	jbe    c1007531 <sys_unlink+0x37>
c1007518:	68 fc be 00 c1       	push   $0xc100befc
c100751d:	68 08 c3 00 c1       	push   $0xc100c308
c1007522:	68 e6 01 00 00       	push   $0x1e6
c1007527:	68 94 bc 00 c1       	push   $0xc100bc94
c100752c:	e8 3a 8e ff ff       	call   c100036b <__PANIC>
c1007531:	83 ec 04             	sub    $0x4,%esp
c1007534:	68 08 02 00 00       	push   $0x208
c1007539:	6a 00                	push   $0x0
c100753b:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1007541:	50                   	push   %eax
c1007542:	e8 63 8b ff ff       	call   c10000aa <memset>
c1007547:	83 c4 10             	add    $0x10,%esp
c100754a:	83 ec 08             	sub    $0x8,%esp
c100754d:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1007553:	50                   	push   %eax
c1007554:	ff 75 08             	pushl  0x8(%ebp)
c1007557:	e8 d2 f5 ff ff       	call   c1006b2e <search_file>
c100755c:	83 c4 10             	add    $0x10,%esp
c100755f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007562:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007566:	75 19                	jne    c1007581 <sys_unlink+0x87>
c1007568:	68 1c bf 00 c1       	push   $0xc100bf1c
c100756d:	68 08 c3 00 c1       	push   $0xc100c308
c1007572:	68 ec 01 00 00       	push   $0x1ec
c1007577:	68 94 bc 00 c1       	push   $0xc100bc94
c100757c:	e8 ea 8d ff ff       	call   c100036b <__PANIC>
c1007581:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007585:	75 2c                	jne    c10075b3 <sys_unlink+0xb9>
c1007587:	83 ec 08             	sub    $0x8,%esp
c100758a:	ff 75 08             	pushl  0x8(%ebp)
c100758d:	68 2a bf 00 c1       	push   $0xc100bf2a
c1007592:	e8 1b e2 ff ff       	call   c10057b2 <printk>
c1007597:	83 c4 10             	add    $0x10,%esp
c100759a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100759d:	83 ec 0c             	sub    $0xc,%esp
c10075a0:	50                   	push   %eax
c10075a1:	e8 0e 11 00 00       	call   c10086b4 <dir_close>
c10075a6:	83 c4 10             	add    $0x10,%esp
c10075a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10075ae:	e9 65 01 00 00       	jmp    c1007718 <sys_unlink+0x21e>
c10075b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10075b6:	83 f8 02             	cmp    $0x2,%eax
c10075b9:	75 29                	jne    c10075e4 <sys_unlink+0xea>
c10075bb:	83 ec 0c             	sub    $0xc,%esp
c10075be:	68 40 bf 00 c1       	push   $0xc100bf40
c10075c3:	e8 ea e1 ff ff       	call   c10057b2 <printk>
c10075c8:	83 c4 10             	add    $0x10,%esp
c10075cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10075ce:	83 ec 0c             	sub    $0xc,%esp
c10075d1:	50                   	push   %eax
c10075d2:	e8 dd 10 00 00       	call   c10086b4 <dir_close>
c10075d7:	83 c4 10             	add    $0x10,%esp
c10075da:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10075df:	e9 34 01 00 00       	jmp    c1007718 <sys_unlink+0x21e>
c10075e4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10075eb:	eb 37                	jmp    c1007624 <sys_unlink+0x12a>
c10075ed:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10075f0:	89 d0                	mov    %edx,%eax
c10075f2:	01 c0                	add    %eax,%eax
c10075f4:	01 d0                	add    %edx,%eax
c10075f6:	c1 e0 02             	shl    $0x2,%eax
c10075f9:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10075fe:	8b 00                	mov    (%eax),%eax
c1007600:	85 c0                	test   %eax,%eax
c1007602:	74 1c                	je     c1007620 <sys_unlink+0x126>
c1007604:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007607:	89 d0                	mov    %edx,%eax
c1007609:	01 c0                	add    %eax,%eax
c100760b:	01 d0                	add    %edx,%eax
c100760d:	c1 e0 02             	shl    $0x2,%eax
c1007610:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1007615:	8b 00                	mov    (%eax),%eax
c1007617:	8b 10                	mov    (%eax),%edx
c1007619:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100761c:	39 c2                	cmp    %eax,%edx
c100761e:	74 0c                	je     c100762c <sys_unlink+0x132>
c1007620:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007624:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1007628:	76 c3                	jbe    c10075ed <sys_unlink+0xf3>
c100762a:	eb 01                	jmp    c100762d <sys_unlink+0x133>
c100762c:	90                   	nop
c100762d:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1007631:	77 2c                	ja     c100765f <sys_unlink+0x165>
c1007633:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007636:	83 ec 0c             	sub    $0xc,%esp
c1007639:	50                   	push   %eax
c100763a:	e8 75 10 00 00       	call   c10086b4 <dir_close>
c100763f:	83 c4 10             	add    $0x10,%esp
c1007642:	83 ec 08             	sub    $0x8,%esp
c1007645:	ff 75 08             	pushl  0x8(%ebp)
c1007648:	68 80 bf 00 c1       	push   $0xc100bf80
c100764d:	e8 60 e1 ff ff       	call   c10057b2 <printk>
c1007652:	83 c4 10             	add    $0x10,%esp
c1007655:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100765a:	e9 b9 00 00 00       	jmp    c1007718 <sys_unlink+0x21e>
c100765f:	83 7d f4 20          	cmpl   $0x20,-0xc(%ebp)
c1007663:	74 19                	je     c100767e <sys_unlink+0x184>
c1007665:	68 a9 bf 00 c1       	push   $0xc100bfa9
c100766a:	68 08 c3 00 c1       	push   $0xc100c308
c100766f:	68 05 02 00 00       	push   $0x205
c1007674:	68 94 bc 00 c1       	push   $0xc100bc94
c1007679:	e8 ed 8c ff ff       	call   c100036b <__PANIC>
c100767e:	83 ec 08             	sub    $0x8,%esp
c1007681:	6a 02                	push   $0x2
c1007683:	68 00 04 00 00       	push   $0x400
c1007688:	e8 26 b6 ff ff       	call   c1002cb3 <vmm_malloc>
c100768d:	83 c4 10             	add    $0x10,%esp
c1007690:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007693:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1007697:	75 26                	jne    c10076bf <sys_unlink+0x1c5>
c1007699:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100769c:	83 ec 0c             	sub    $0xc,%esp
c100769f:	50                   	push   %eax
c10076a0:	e8 0f 10 00 00       	call   c10086b4 <dir_close>
c10076a5:	83 c4 10             	add    $0x10,%esp
c10076a8:	83 ec 0c             	sub    $0xc,%esp
c10076ab:	68 c4 bf 00 c1       	push   $0xc100bfc4
c10076b0:	e8 fd e0 ff ff       	call   c10057b2 <printk>
c10076b5:	83 c4 10             	add    $0x10,%esp
c10076b8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10076bd:	eb 59                	jmp    c1007718 <sys_unlink+0x21e>
c10076bf:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10076c2:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10076c5:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10076ca:	ff 75 ec             	pushl  -0x14(%ebp)
c10076cd:	ff 75 f0             	pushl  -0x10(%ebp)
c10076d0:	ff 75 e8             	pushl  -0x18(%ebp)
c10076d3:	50                   	push   %eax
c10076d4:	e8 bc 14 00 00       	call   c1008b95 <delete_dir_entry>
c10076d9:	83 c4 10             	add    $0x10,%esp
c10076dc:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10076e1:	83 ec 08             	sub    $0x8,%esp
c10076e4:	ff 75 f0             	pushl  -0x10(%ebp)
c10076e7:	50                   	push   %eax
c10076e8:	e8 78 31 00 00       	call   c100a865 <inode_release>
c10076ed:	83 c4 10             	add    $0x10,%esp
c10076f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10076f3:	83 ec 08             	sub    $0x8,%esp
c10076f6:	68 00 04 00 00       	push   $0x400
c10076fb:	50                   	push   %eax
c10076fc:	e8 d7 b6 ff ff       	call   c1002dd8 <vmm_free>
c1007701:	83 c4 10             	add    $0x10,%esp
c1007704:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007707:	83 ec 0c             	sub    $0xc,%esp
c100770a:	50                   	push   %eax
c100770b:	e8 a4 0f 00 00       	call   c10086b4 <dir_close>
c1007710:	83 c4 10             	add    $0x10,%esp
c1007713:	b8 00 00 00 00       	mov    $0x0,%eax
c1007718:	c9                   	leave  
c1007719:	c3                   	ret    

c100771a <sys_mkdir>:
c100771a:	55                   	push   %ebp
c100771b:	89 e5                	mov    %esp,%ebp
c100771d:	53                   	push   %ebx
c100771e:	81 ec a4 02 00 00    	sub    $0x2a4,%esp
c1007724:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007728:	83 ec 08             	sub    $0x8,%esp
c100772b:	6a 02                	push   $0x2
c100772d:	68 00 04 00 00       	push   $0x400
c1007732:	e8 7c b5 ff ff       	call   c1002cb3 <vmm_malloc>
c1007737:	83 c4 10             	add    $0x10,%esp
c100773a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100773d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1007741:	75 1a                	jne    c100775d <sys_mkdir+0x43>
c1007743:	83 ec 0c             	sub    $0xc,%esp
c1007746:	68 ec bf 00 c1       	push   $0xc100bfec
c100774b:	e8 62 e0 ff ff       	call   c10057b2 <printk>
c1007750:	83 c4 10             	add    $0x10,%esp
c1007753:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007758:	e9 f2 03 00 00       	jmp    c1007b4f <sys_mkdir+0x435>
c100775d:	83 ec 04             	sub    $0x4,%esp
c1007760:	68 08 02 00 00       	push   $0x208
c1007765:	6a 00                	push   $0x0
c1007767:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c100776d:	50                   	push   %eax
c100776e:	e8 37 89 ff ff       	call   c10000aa <memset>
c1007773:	83 c4 10             	add    $0x10,%esp
c1007776:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
c100777d:	83 ec 08             	sub    $0x8,%esp
c1007780:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1007786:	50                   	push   %eax
c1007787:	ff 75 08             	pushl  0x8(%ebp)
c100778a:	e8 9f f3 ff ff       	call   c1006b2e <search_file>
c100778f:	83 c4 10             	add    $0x10,%esp
c1007792:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007795:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007799:	74 1c                	je     c10077b7 <sys_mkdir+0x9d>
c100779b:	83 ec 08             	sub    $0x8,%esp
c100779e:	ff 75 08             	pushl  0x8(%ebp)
c10077a1:	68 18 c0 00 c1       	push   $0xc100c018
c10077a6:	e8 07 e0 ff ff       	call   c10057b2 <printk>
c10077ab:	83 c4 10             	add    $0x10,%esp
c10077ae:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10077b2:	e9 08 03 00 00       	jmp    c1007abf <sys_mkdir+0x3a5>
c10077b7:	83 ec 0c             	sub    $0xc,%esp
c10077ba:	ff 75 08             	pushl  0x8(%ebp)
c10077bd:	e8 e4 f2 ff ff       	call   c1006aa6 <path_depth_cnt>
c10077c2:	83 c4 10             	add    $0x10,%esp
c10077c5:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10077c8:	83 ec 0c             	sub    $0xc,%esp
c10077cb:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10077d1:	50                   	push   %eax
c10077d2:	e8 cf f2 ff ff       	call   c1006aa6 <path_depth_cnt>
c10077d7:	83 c4 10             	add    $0x10,%esp
c10077da:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10077dd:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10077e0:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c10077e3:	74 23                	je     c1007808 <sys_mkdir+0xee>
c10077e5:	83 ec 04             	sub    $0x4,%esp
c10077e8:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10077ee:	50                   	push   %eax
c10077ef:	ff 75 08             	pushl  0x8(%ebp)
c10077f2:	68 40 c0 00 c1       	push   $0xc100c040
c10077f7:	e8 b6 df ff ff       	call   c10057b2 <printk>
c10077fc:	83 c4 10             	add    $0x10,%esp
c10077ff:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1007803:	e9 b7 02 00 00       	jmp    c1007abf <sys_mkdir+0x3a5>
c1007808:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100780b:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100780e:	83 ec 08             	sub    $0x8,%esp
c1007811:	6a 2f                	push   $0x2f
c1007813:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1007819:	50                   	push   %eax
c100781a:	e8 77 89 ff ff       	call   c1000196 <strrchr>
c100781f:	83 c4 10             	add    $0x10,%esp
c1007822:	83 c0 01             	add    $0x1,%eax
c1007825:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007828:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100782d:	83 ec 0c             	sub    $0xc,%esp
c1007830:	50                   	push   %eax
c1007831:	e8 76 1b 00 00       	call   c10093ac <inode_bitmap_alloc>
c1007836:	83 c4 10             	add    $0x10,%esp
c1007839:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100783c:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007840:	75 19                	jne    c100785b <sys_mkdir+0x141>
c1007842:	83 ec 0c             	sub    $0xc,%esp
c1007845:	68 74 c0 00 c1       	push   $0xc100c074
c100784a:	e8 63 df ff ff       	call   c10057b2 <printk>
c100784f:	83 c4 10             	add    $0x10,%esp
c1007852:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1007856:	e9 64 02 00 00       	jmp    c1007abf <sys_mkdir+0x3a5>
c100785b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100785e:	83 ec 08             	sub    $0x8,%esp
c1007861:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1007867:	52                   	push   %edx
c1007868:	50                   	push   %eax
c1007869:	e8 bc 32 00 00       	call   c100ab2a <inode_init>
c100786e:	83 c4 10             	add    $0x10,%esp
c1007871:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
c1007878:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
c100787f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007884:	83 ec 0c             	sub    $0xc,%esp
c1007887:	50                   	push   %eax
c1007888:	e8 df 1b 00 00       	call   c100946c <block_bitmap_alloc>
c100788d:	83 c4 10             	add    $0x10,%esp
c1007890:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1007893:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
c1007897:	75 19                	jne    c10078b2 <sys_mkdir+0x198>
c1007899:	83 ec 0c             	sub    $0xc,%esp
c100789c:	68 98 c0 00 c1       	push   $0xc100c098
c10078a1:	e8 0c df ff ff       	call   c10057b2 <printk>
c10078a6:	83 c4 10             	add    $0x10,%esp
c10078a9:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10078ad:	e9 0d 02 00 00       	jmp    c1007abf <sys_mkdir+0x3a5>
c10078b2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10078b5:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
c10078bb:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c10078be:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10078c3:	8b 40 10             	mov    0x10(%eax),%eax
c10078c6:	8b 40 28             	mov    0x28(%eax),%eax
c10078c9:	29 c2                	sub    %eax,%edx
c10078cb:	89 d0                	mov    %edx,%eax
c10078cd:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10078d0:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
c10078d4:	75 19                	jne    c10078ef <sys_mkdir+0x1d5>
c10078d6:	68 d3 c0 00 c1       	push   $0xc100c0d3
c10078db:	68 14 c3 00 c1       	push   $0xc100c314
c10078e0:	68 4d 02 00 00       	push   $0x24d
c10078e5:	68 94 bc 00 c1       	push   $0xc100bc94
c10078ea:	e8 7c 8a ff ff       	call   c100036b <__PANIC>
c10078ef:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10078f4:	83 ec 04             	sub    $0x4,%esp
c10078f7:	6a 01                	push   $0x1
c10078f9:	ff 75 d8             	pushl  -0x28(%ebp)
c10078fc:	50                   	push   %eax
c10078fd:	e8 38 1c 00 00       	call   c100953a <bitmap_sync>
c1007902:	83 c4 10             	add    $0x10,%esp
c1007905:	83 ec 04             	sub    $0x4,%esp
c1007908:	68 00 04 00 00       	push   $0x400
c100790d:	6a 00                	push   $0x0
c100790f:	ff 75 ec             	pushl  -0x14(%ebp)
c1007912:	e8 93 87 ff ff       	call   c10000aa <memset>
c1007917:	83 c4 10             	add    $0x10,%esp
c100791a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100791d:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007920:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007923:	83 ec 04             	sub    $0x4,%esp
c1007926:	6a 01                	push   $0x1
c1007928:	68 d5 bb 00 c1       	push   $0xc100bbd5
c100792d:	50                   	push   %eax
c100792e:	e8 d5 87 ff ff       	call   c1000108 <memcpy>
c1007933:	83 c4 10             	add    $0x10,%esp
c1007936:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007939:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100793c:	89 50 10             	mov    %edx,0x10(%eax)
c100793f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007942:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1007949:	83 45 d0 18          	addl   $0x18,-0x30(%ebp)
c100794d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007950:	83 ec 04             	sub    $0x4,%esp
c1007953:	6a 02                	push   $0x2
c1007955:	68 d7 bb 00 c1       	push   $0xc100bbd7
c100795a:	50                   	push   %eax
c100795b:	e8 a8 87 ff ff       	call   c1000108 <memcpy>
c1007960:	83 c4 10             	add    $0x10,%esp
c1007963:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007966:	8b 00                	mov    (%eax),%eax
c1007968:	8b 10                	mov    (%eax),%edx
c100796a:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100796d:	89 50 10             	mov    %edx,0x10(%eax)
c1007970:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007973:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100797a:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
c1007980:	83 ec 04             	sub    $0x4,%esp
c1007983:	6a 01                	push   $0x1
c1007985:	50                   	push   %eax
c1007986:	ff 75 ec             	pushl  -0x14(%ebp)
c1007989:	e8 09 e7 ff ff       	call   c1006097 <ide_write>
c100798e:	83 c4 10             	add    $0x10,%esp
c1007991:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007996:	8b 40 10             	mov    0x10(%eax),%eax
c1007999:	8b 40 30             	mov    0x30(%eax),%eax
c100799c:	01 c0                	add    %eax,%eax
c100799e:	89 85 80 fd ff ff    	mov    %eax,-0x280(%ebp)
c10079a4:	83 ec 04             	sub    $0x4,%esp
c10079a7:	6a 18                	push   $0x18
c10079a9:	6a 00                	push   $0x0
c10079ab:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c10079b1:	50                   	push   %eax
c10079b2:	e8 f3 86 ff ff       	call   c10000aa <memset>
c10079b7:	83 c4 10             	add    $0x10,%esp
c10079ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10079bd:	8d 95 64 fd ff ff    	lea    -0x29c(%ebp),%edx
c10079c3:	52                   	push   %edx
c10079c4:	6a 02                	push   $0x2
c10079c6:	50                   	push   %eax
c10079c7:	ff 75 dc             	pushl  -0x24(%ebp)
c10079ca:	e8 1f 0d 00 00       	call   c10086ee <create_dir_entry>
c10079cf:	83 c4 10             	add    $0x10,%esp
c10079d2:	83 ec 04             	sub    $0x4,%esp
c10079d5:	68 00 04 00 00       	push   $0x400
c10079da:	6a 00                	push   $0x0
c10079dc:	ff 75 ec             	pushl  -0x14(%ebp)
c10079df:	e8 c6 86 ff ff       	call   c10000aa <memset>
c10079e4:	83 c4 10             	add    $0x10,%esp
c10079e7:	83 ec 04             	sub    $0x4,%esp
c10079ea:	ff 75 ec             	pushl  -0x14(%ebp)
c10079ed:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c10079f3:	50                   	push   %eax
c10079f4:	ff 75 e0             	pushl  -0x20(%ebp)
c10079f7:	e8 5e 0d 00 00       	call   c100875a <sync_dir_entry>
c10079fc:	83 c4 10             	add    $0x10,%esp
c10079ff:	85 c0                	test   %eax,%eax
c1007a01:	75 19                	jne    c1007a1c <sys_mkdir+0x302>
c1007a03:	83 ec 0c             	sub    $0xc,%esp
c1007a06:	68 ec c0 00 c1       	push   $0xc100c0ec
c1007a0b:	e8 a2 dd ff ff       	call   c10057b2 <printk>
c1007a10:	83 c4 10             	add    $0x10,%esp
c1007a13:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1007a17:	e9 a3 00 00 00       	jmp    c1007abf <sys_mkdir+0x3a5>
c1007a1c:	83 ec 04             	sub    $0x4,%esp
c1007a1f:	68 00 04 00 00       	push   $0x400
c1007a24:	6a 00                	push   $0x0
c1007a26:	ff 75 ec             	pushl  -0x14(%ebp)
c1007a29:	e8 7c 86 ff ff       	call   c10000aa <memset>
c1007a2e:	83 c4 10             	add    $0x10,%esp
c1007a31:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007a34:	8b 10                	mov    (%eax),%edx
c1007a36:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007a3b:	83 ec 04             	sub    $0x4,%esp
c1007a3e:	ff 75 ec             	pushl  -0x14(%ebp)
c1007a41:	52                   	push   %edx
c1007a42:	50                   	push   %eax
c1007a43:	e8 10 2b 00 00       	call   c100a558 <inode_sync>
c1007a48:	83 c4 10             	add    $0x10,%esp
c1007a4b:	83 ec 04             	sub    $0x4,%esp
c1007a4e:	68 00 04 00 00       	push   $0x400
c1007a53:	6a 00                	push   $0x0
c1007a55:	ff 75 ec             	pushl  -0x14(%ebp)
c1007a58:	e8 4d 86 ff ff       	call   c10000aa <memset>
c1007a5d:	83 c4 10             	add    $0x10,%esp
c1007a60:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007a65:	83 ec 04             	sub    $0x4,%esp
c1007a68:	ff 75 ec             	pushl  -0x14(%ebp)
c1007a6b:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1007a71:	52                   	push   %edx
c1007a72:	50                   	push   %eax
c1007a73:	e8 e0 2a 00 00       	call   c100a558 <inode_sync>
c1007a78:	83 c4 10             	add    $0x10,%esp
c1007a7b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007a7e:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007a83:	83 ec 04             	sub    $0x4,%esp
c1007a86:	6a 00                	push   $0x0
c1007a88:	52                   	push   %edx
c1007a89:	50                   	push   %eax
c1007a8a:	e8 ab 1a 00 00       	call   c100953a <bitmap_sync>
c1007a8f:	83 c4 10             	add    $0x10,%esp
c1007a92:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007a95:	83 ec 08             	sub    $0x8,%esp
c1007a98:	68 00 04 00 00       	push   $0x400
c1007a9d:	50                   	push   %eax
c1007a9e:	e8 35 b3 ff ff       	call   c1002dd8 <vmm_free>
c1007aa3:	83 c4 10             	add    $0x10,%esp
c1007aa6:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007aa9:	83 ec 0c             	sub    $0xc,%esp
c1007aac:	50                   	push   %eax
c1007aad:	e8 02 0c 00 00       	call   c10086b4 <dir_close>
c1007ab2:	83 c4 10             	add    $0x10,%esp
c1007ab5:	b8 00 00 00 00       	mov    $0x0,%eax
c1007aba:	e9 90 00 00 00       	jmp    c1007b4f <sys_mkdir+0x435>
c1007abf:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007ac3:	83 f8 01             	cmp    $0x1,%eax
c1007ac6:	74 5e                	je     c1007b26 <sys_mkdir+0x40c>
c1007ac8:	83 f8 02             	cmp    $0x2,%eax
c1007acb:	75 69                	jne    c1007b36 <sys_mkdir+0x41c>
c1007acd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007ad0:	8d 50 07             	lea    0x7(%eax),%edx
c1007ad3:	85 c0                	test   %eax,%eax
c1007ad5:	0f 48 c2             	cmovs  %edx,%eax
c1007ad8:	c1 f8 03             	sar    $0x3,%eax
c1007adb:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1007ade:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007ae1:	99                   	cltd   
c1007ae2:	c1 ea 1d             	shr    $0x1d,%edx
c1007ae5:	01 d0                	add    %edx,%eax
c1007ae7:	83 e0 07             	and    $0x7,%eax
c1007aea:	29 d0                	sub    %edx,%eax
c1007aec:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1007aef:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007af4:	8b 50 20             	mov    0x20(%eax),%edx
c1007af7:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007afa:	01 d0                	add    %edx,%eax
c1007afc:	0f b6 00             	movzbl (%eax),%eax
c1007aff:	89 c2                	mov    %eax,%edx
c1007b01:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1007b04:	bb 01 00 00 00       	mov    $0x1,%ebx
c1007b09:	89 c1                	mov    %eax,%ecx
c1007b0b:	d3 e3                	shl    %cl,%ebx
c1007b0d:	89 d8                	mov    %ebx,%eax
c1007b0f:	f7 d0                	not    %eax
c1007b11:	89 d1                	mov    %edx,%ecx
c1007b13:	21 c1                	and    %eax,%ecx
c1007b15:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007b1a:	8b 50 20             	mov    0x20(%eax),%edx
c1007b1d:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007b20:	01 d0                	add    %edx,%eax
c1007b22:	89 ca                	mov    %ecx,%edx
c1007b24:	88 10                	mov    %dl,(%eax)
c1007b26:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007b29:	83 ec 0c             	sub    $0xc,%esp
c1007b2c:	50                   	push   %eax
c1007b2d:	e8 82 0b 00 00       	call   c10086b4 <dir_close>
c1007b32:	83 c4 10             	add    $0x10,%esp
c1007b35:	90                   	nop
c1007b36:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007b39:	83 ec 08             	sub    $0x8,%esp
c1007b3c:	68 00 04 00 00       	push   $0x400
c1007b41:	50                   	push   %eax
c1007b42:	e8 91 b2 ff ff       	call   c1002dd8 <vmm_free>
c1007b47:	83 c4 10             	add    $0x10,%esp
c1007b4a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007b4f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1007b52:	c9                   	leave  
c1007b53:	c3                   	ret    

c1007b54 <sys_opendir>:
c1007b54:	55                   	push   %ebp
c1007b55:	89 e5                	mov    %esp,%ebp
c1007b57:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1007b5d:	83 ec 0c             	sub    $0xc,%esp
c1007b60:	ff 75 08             	pushl  0x8(%ebp)
c1007b63:	e8 b6 85 ff ff       	call   c100011e <strlen>
c1007b68:	83 c4 10             	add    $0x10,%esp
c1007b6b:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1007b70:	76 19                	jbe    c1007b8b <sys_opendir+0x37>
c1007b72:	68 17 c1 00 c1       	push   $0xc100c117
c1007b77:	68 20 c3 00 c1       	push   $0xc100c320
c1007b7c:	68 8f 02 00 00       	push   $0x28f
c1007b81:	68 94 bc 00 c1       	push   $0xc100bc94
c1007b86:	e8 e0 87 ff ff       	call   c100036b <__PANIC>
c1007b8b:	8b 45 08             	mov    0x8(%ebp),%eax
c1007b8e:	0f b6 00             	movzbl (%eax),%eax
c1007b91:	3c 2f                	cmp    $0x2f,%al
c1007b93:	75 21                	jne    c1007bb6 <sys_opendir+0x62>
c1007b95:	8b 45 08             	mov    0x8(%ebp),%eax
c1007b98:	83 c0 01             	add    $0x1,%eax
c1007b9b:	0f b6 00             	movzbl (%eax),%eax
c1007b9e:	84 c0                	test   %al,%al
c1007ba0:	74 0a                	je     c1007bac <sys_opendir+0x58>
c1007ba2:	8b 45 08             	mov    0x8(%ebp),%eax
c1007ba5:	0f b6 00             	movzbl (%eax),%eax
c1007ba8:	3c 2e                	cmp    $0x2e,%al
c1007baa:	75 0a                	jne    c1007bb6 <sys_opendir+0x62>
c1007bac:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c1007bb1:	e9 a9 00 00 00       	jmp    c1007c5f <sys_opendir+0x10b>
c1007bb6:	83 ec 04             	sub    $0x4,%esp
c1007bb9:	68 08 02 00 00       	push   $0x208
c1007bbe:	6a 00                	push   $0x0
c1007bc0:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007bc6:	50                   	push   %eax
c1007bc7:	e8 de 84 ff ff       	call   c10000aa <memset>
c1007bcc:	83 c4 10             	add    $0x10,%esp
c1007bcf:	83 ec 08             	sub    $0x8,%esp
c1007bd2:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007bd8:	50                   	push   %eax
c1007bd9:	ff 75 08             	pushl  0x8(%ebp)
c1007bdc:	e8 4d ef ff ff       	call   c1006b2e <search_file>
c1007be1:	83 c4 10             	add    $0x10,%esp
c1007be4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007be7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007bee:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007bf2:	75 1c                	jne    c1007c10 <sys_opendir+0xbc>
c1007bf4:	83 ec 04             	sub    $0x4,%esp
c1007bf7:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007bfd:	50                   	push   %eax
c1007bfe:	ff 75 08             	pushl  0x8(%ebp)
c1007c01:	68 33 c1 00 c1       	push   $0xc100c133
c1007c06:	e8 a7 db ff ff       	call   c10057b2 <printk>
c1007c0b:	83 c4 10             	add    $0x10,%esp
c1007c0e:	eb 3d                	jmp    c1007c4d <sys_opendir+0xf9>
c1007c10:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007c13:	83 f8 01             	cmp    $0x1,%eax
c1007c16:	75 15                	jne    c1007c2d <sys_opendir+0xd9>
c1007c18:	83 ec 08             	sub    $0x8,%esp
c1007c1b:	ff 75 08             	pushl  0x8(%ebp)
c1007c1e:	68 51 c1 00 c1       	push   $0xc100c151
c1007c23:	e8 8a db ff ff       	call   c10057b2 <printk>
c1007c28:	83 c4 10             	add    $0x10,%esp
c1007c2b:	eb 20                	jmp    c1007c4d <sys_opendir+0xf9>
c1007c2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007c30:	83 f8 02             	cmp    $0x2,%eax
c1007c33:	75 18                	jne    c1007c4d <sys_opendir+0xf9>
c1007c35:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007c38:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007c3d:	83 ec 08             	sub    $0x8,%esp
c1007c40:	52                   	push   %edx
c1007c41:	50                   	push   %eax
c1007c42:	e8 41 08 00 00       	call   c1008488 <dir_open>
c1007c47:	83 c4 10             	add    $0x10,%esp
c1007c4a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007c4d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007c50:	83 ec 0c             	sub    $0xc,%esp
c1007c53:	50                   	push   %eax
c1007c54:	e8 5b 0a 00 00       	call   c10086b4 <dir_close>
c1007c59:	83 c4 10             	add    $0x10,%esp
c1007c5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007c5f:	c9                   	leave  
c1007c60:	c3                   	ret    

c1007c61 <sys_closedir>:
c1007c61:	55                   	push   %ebp
c1007c62:	89 e5                	mov    %esp,%ebp
c1007c64:	83 ec 18             	sub    $0x18,%esp
c1007c67:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007c6e:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007c72:	74 15                	je     c1007c89 <sys_closedir+0x28>
c1007c74:	83 ec 0c             	sub    $0xc,%esp
c1007c77:	ff 75 08             	pushl  0x8(%ebp)
c1007c7a:	e8 35 0a 00 00       	call   c10086b4 <dir_close>
c1007c7f:	83 c4 10             	add    $0x10,%esp
c1007c82:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007c89:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007c8c:	c9                   	leave  
c1007c8d:	c3                   	ret    

c1007c8e <sys_readdir>:
c1007c8e:	55                   	push   %ebp
c1007c8f:	89 e5                	mov    %esp,%ebp
c1007c91:	83 ec 08             	sub    $0x8,%esp
c1007c94:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007c98:	75 19                	jne    c1007cb3 <sys_readdir+0x25>
c1007c9a:	68 66 c1 00 c1       	push   $0xc100c166
c1007c9f:	68 2c c3 00 c1       	push   $0xc100c32c
c1007ca4:	68 b2 02 00 00       	push   $0x2b2
c1007ca9:	68 94 bc 00 c1       	push   $0xc100bc94
c1007cae:	e8 b8 86 ff ff       	call   c100036b <__PANIC>
c1007cb3:	83 ec 0c             	sub    $0xc,%esp
c1007cb6:	ff 75 08             	pushl  0x8(%ebp)
c1007cb9:	e8 79 13 00 00       	call   c1009037 <dir_read>
c1007cbe:	83 c4 10             	add    $0x10,%esp
c1007cc1:	c9                   	leave  
c1007cc2:	c3                   	ret    

c1007cc3 <sys_rewinddir>:
c1007cc3:	55                   	push   %ebp
c1007cc4:	89 e5                	mov    %esp,%ebp
c1007cc6:	8b 45 08             	mov    0x8(%ebp),%eax
c1007cc9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1007cd0:	90                   	nop
c1007cd1:	5d                   	pop    %ebp
c1007cd2:	c3                   	ret    

c1007cd3 <sys_rmdir>:
c1007cd3:	55                   	push   %ebp
c1007cd4:	89 e5                	mov    %esp,%ebp
c1007cd6:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1007cdc:	83 ec 04             	sub    $0x4,%esp
c1007cdf:	68 08 02 00 00       	push   $0x208
c1007ce4:	6a 00                	push   $0x0
c1007ce6:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007cec:	50                   	push   %eax
c1007ced:	e8 b8 83 ff ff       	call   c10000aa <memset>
c1007cf2:	83 c4 10             	add    $0x10,%esp
c1007cf5:	83 ec 08             	sub    $0x8,%esp
c1007cf8:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007cfe:	50                   	push   %eax
c1007cff:	ff 75 08             	pushl  0x8(%ebp)
c1007d02:	e8 27 ee ff ff       	call   c1006b2e <search_file>
c1007d07:	83 c4 10             	add    $0x10,%esp
c1007d0a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007d0d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007d11:	75 19                	jne    c1007d2c <sys_rmdir+0x59>
c1007d13:	68 1c bf 00 c1       	push   $0xc100bf1c
c1007d18:	68 38 c3 00 c1       	push   $0xc100c338
c1007d1d:	68 c0 02 00 00       	push   $0x2c0
c1007d22:	68 94 bc 00 c1       	push   $0xc100bc94
c1007d27:	e8 3f 86 ff ff       	call   c100036b <__PANIC>
c1007d2c:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007d33:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007d37:	75 1f                	jne    c1007d58 <sys_rmdir+0x85>
c1007d39:	83 ec 04             	sub    $0x4,%esp
c1007d3c:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007d42:	50                   	push   %eax
c1007d43:	ff 75 08             	pushl  0x8(%ebp)
c1007d46:	68 33 c1 00 c1       	push   $0xc100c133
c1007d4b:	e8 62 da ff ff       	call   c10057b2 <printk>
c1007d50:	83 c4 10             	add    $0x10,%esp
c1007d53:	e9 87 00 00 00       	jmp    c1007ddf <sys_rmdir+0x10c>
c1007d58:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007d5b:	83 f8 01             	cmp    $0x1,%eax
c1007d5e:	75 15                	jne    c1007d75 <sys_rmdir+0xa2>
c1007d60:	83 ec 08             	sub    $0x8,%esp
c1007d63:	ff 75 08             	pushl  0x8(%ebp)
c1007d66:	68 51 c1 00 c1       	push   $0xc100c151
c1007d6b:	e8 42 da ff ff       	call   c10057b2 <printk>
c1007d70:	83 c4 10             	add    $0x10,%esp
c1007d73:	eb 6a                	jmp    c1007ddf <sys_rmdir+0x10c>
c1007d75:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007d78:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007d7d:	83 ec 08             	sub    $0x8,%esp
c1007d80:	52                   	push   %edx
c1007d81:	50                   	push   %eax
c1007d82:	e8 01 07 00 00       	call   c1008488 <dir_open>
c1007d87:	83 c4 10             	add    $0x10,%esp
c1007d8a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007d8d:	83 ec 0c             	sub    $0xc,%esp
c1007d90:	ff 75 ec             	pushl  -0x14(%ebp)
c1007d93:	e8 74 14 00 00       	call   c100920c <dir_is_empty>
c1007d98:	83 c4 10             	add    $0x10,%esp
c1007d9b:	85 c0                	test   %eax,%eax
c1007d9d:	75 15                	jne    c1007db4 <sys_rmdir+0xe1>
c1007d9f:	83 ec 08             	sub    $0x8,%esp
c1007da2:	ff 75 08             	pushl  0x8(%ebp)
c1007da5:	68 74 c1 00 c1       	push   $0xc100c174
c1007daa:	e8 03 da ff ff       	call   c10057b2 <printk>
c1007daf:	83 c4 10             	add    $0x10,%esp
c1007db2:	eb 1d                	jmp    c1007dd1 <sys_rmdir+0xfe>
c1007db4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007db7:	83 ec 08             	sub    $0x8,%esp
c1007dba:	ff 75 ec             	pushl  -0x14(%ebp)
c1007dbd:	50                   	push   %eax
c1007dbe:	e8 71 14 00 00       	call   c1009234 <dir_remove>
c1007dc3:	83 c4 10             	add    $0x10,%esp
c1007dc6:	85 c0                	test   %eax,%eax
c1007dc8:	75 07                	jne    c1007dd1 <sys_rmdir+0xfe>
c1007dca:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007dd1:	83 ec 0c             	sub    $0xc,%esp
c1007dd4:	ff 75 ec             	pushl  -0x14(%ebp)
c1007dd7:	e8 d8 08 00 00       	call   c10086b4 <dir_close>
c1007ddc:	83 c4 10             	add    $0x10,%esp
c1007ddf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007de2:	83 ec 0c             	sub    $0xc,%esp
c1007de5:	50                   	push   %eax
c1007de6:	e8 c9 08 00 00       	call   c10086b4 <dir_close>
c1007deb:	83 c4 10             	add    $0x10,%esp
c1007dee:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007df1:	c9                   	leave  
c1007df2:	c3                   	ret    

c1007df3 <get_parent_dir_inode_nr>:
c1007df3:	55                   	push   %ebp
c1007df4:	89 e5                	mov    %esp,%ebp
c1007df6:	83 ec 18             	sub    $0x18,%esp
c1007df9:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007dfe:	83 ec 08             	sub    $0x8,%esp
c1007e01:	ff 75 08             	pushl  0x8(%ebp)
c1007e04:	50                   	push   %eax
c1007e05:	e8 6f 28 00 00       	call   c100a679 <inode_open>
c1007e0a:	83 c4 10             	add    $0x10,%esp
c1007e0d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007e10:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007e13:	8b 40 10             	mov    0x10(%eax),%eax
c1007e16:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007e19:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007e1e:	8b 40 10             	mov    0x10(%eax),%eax
c1007e21:	8b 40 28             	mov    0x28(%eax),%eax
c1007e24:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1007e27:	73 19                	jae    c1007e42 <get_parent_dir_inode_nr+0x4f>
c1007e29:	68 bc c1 00 c1       	push   $0xc100c1bc
c1007e2e:	68 44 c3 00 c1       	push   $0xc100c344
c1007e33:	68 db 02 00 00       	push   $0x2db
c1007e38:	68 94 bc 00 c1       	push   $0xc100bc94
c1007e3d:	e8 29 85 ff ff       	call   c100036b <__PANIC>
c1007e42:	83 ec 0c             	sub    $0xc,%esp
c1007e45:	ff 75 f4             	pushl  -0xc(%ebp)
c1007e48:	e8 02 29 00 00       	call   c100a74f <inode_close>
c1007e4d:	83 c4 10             	add    $0x10,%esp
c1007e50:	83 ec 04             	sub    $0x4,%esp
c1007e53:	6a 01                	push   $0x1
c1007e55:	ff 75 f0             	pushl  -0x10(%ebp)
c1007e58:	ff 75 0c             	pushl  0xc(%ebp)
c1007e5b:	e8 fa e1 ff ff       	call   c100605a <ide_read>
c1007e60:	83 c4 10             	add    $0x10,%esp
c1007e63:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007e66:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007e69:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007e6c:	83 c0 18             	add    $0x18,%eax
c1007e6f:	8b 40 10             	mov    0x10(%eax),%eax
c1007e72:	3d ff 0f 00 00       	cmp    $0xfff,%eax
c1007e77:	77 0e                	ja     c1007e87 <get_parent_dir_inode_nr+0x94>
c1007e79:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007e7c:	83 c0 18             	add    $0x18,%eax
c1007e7f:	8b 40 14             	mov    0x14(%eax),%eax
c1007e82:	83 f8 02             	cmp    $0x2,%eax
c1007e85:	74 19                	je     c1007ea0 <get_parent_dir_inode_nr+0xad>
c1007e87:	68 e8 c1 00 c1       	push   $0xc100c1e8
c1007e8c:	68 44 c3 00 c1       	push   $0xc100c344
c1007e91:	68 e0 02 00 00       	push   $0x2e0
c1007e96:	68 94 bc 00 c1       	push   $0xc100bc94
c1007e9b:	e8 cb 84 ff ff       	call   c100036b <__PANIC>
c1007ea0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007ea3:	83 c0 18             	add    $0x18,%eax
c1007ea6:	8b 40 10             	mov    0x10(%eax),%eax
c1007ea9:	c9                   	leave  
c1007eaa:	c3                   	ret    

c1007eab <get_child_dir_name>:
c1007eab:	55                   	push   %ebp
c1007eac:	89 e5                	mov    %esp,%ebp
c1007eae:	57                   	push   %edi
c1007eaf:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1007eb5:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007eba:	83 ec 08             	sub    $0x8,%esp
c1007ebd:	ff 75 08             	pushl  0x8(%ebp)
c1007ec0:	50                   	push   %eax
c1007ec1:	e8 b3 27 00 00       	call   c100a679 <inode_open>
c1007ec6:	83 c4 10             	add    $0x10,%esp
c1007ec9:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007ecc:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007ed0:	8d 95 ac fd ff ff    	lea    -0x254(%ebp),%edx
c1007ed6:	b8 00 00 00 00       	mov    $0x0,%eax
c1007edb:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007ee0:	89 d7                	mov    %edx,%edi
c1007ee2:	f3 ab                	rep stos %eax,%es:(%edi)
c1007ee4:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
c1007eeb:	eb 22                	jmp    c1007f0f <get_child_dir_name+0x64>
c1007eed:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007ef1:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007ef5:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1007ef8:	83 c1 04             	add    $0x4,%ecx
c1007efb:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1007efe:	89 94 85 ac fd ff ff 	mov    %edx,-0x254(%ebp,%eax,4)
c1007f05:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007f09:	83 c0 01             	add    $0x1,%eax
c1007f0c:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007f0f:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007f13:	76 d8                	jbe    c1007eed <get_child_dir_name+0x42>
c1007f15:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007f18:	8b 40 40             	mov    0x40(%eax),%eax
c1007f1b:	85 c0                	test   %eax,%eax
c1007f1d:	74 25                	je     c1007f44 <get_child_dir_name+0x99>
c1007f1f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007f22:	8b 50 40             	mov    0x40(%eax),%edx
c1007f25:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
c1007f2b:	83 c0 30             	add    $0x30,%eax
c1007f2e:	83 ec 04             	sub    $0x4,%esp
c1007f31:	6a 01                	push   $0x1
c1007f33:	52                   	push   %edx
c1007f34:	50                   	push   %eax
c1007f35:	e8 20 e1 ff ff       	call   c100605a <ide_read>
c1007f3a:	83 c4 10             	add    $0x10,%esp
c1007f3d:	c7 45 f0 8c 00 00 00 	movl   $0x8c,-0x10(%ebp)
c1007f44:	83 ec 0c             	sub    $0xc,%esp
c1007f47:	ff 75 e8             	pushl  -0x18(%ebp)
c1007f4a:	e8 00 28 00 00       	call   c100a74f <inode_close>
c1007f4f:	83 c4 10             	add    $0x10,%esp
c1007f52:	8b 45 14             	mov    0x14(%ebp),%eax
c1007f55:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007f58:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007f5d:	8b 40 10             	mov    0x10(%eax),%eax
c1007f60:	8b 40 30             	mov    0x30(%eax),%eax
c1007f63:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007f66:	b8 00 02 00 00       	mov    $0x200,%eax
c1007f6b:	ba 00 00 00 00       	mov    $0x0,%edx
c1007f70:	f7 75 e0             	divl   -0x20(%ebp)
c1007f73:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007f76:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007f7a:	e9 bc 00 00 00       	jmp    c100803b <get_child_dir_name+0x190>
c1007f7f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007f83:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1007f8a:	85 c0                	test   %eax,%eax
c1007f8c:	0f 84 9f 00 00 00    	je     c1008031 <get_child_dir_name+0x186>
c1007f92:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007f96:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1007f9d:	83 ec 04             	sub    $0x4,%esp
c1007fa0:	6a 01                	push   $0x1
c1007fa2:	50                   	push   %eax
c1007fa3:	ff 75 14             	pushl  0x14(%ebp)
c1007fa6:	e8 af e0 ff ff       	call   c100605a <ide_read>
c1007fab:	83 c4 10             	add    $0x10,%esp
c1007fae:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
c1007fb2:	eb 74                	jmp    c1008028 <get_child_dir_name+0x17d>
c1007fb4:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007fb8:	89 d0                	mov    %edx,%eax
c1007fba:	01 c0                	add    %eax,%eax
c1007fbc:	01 d0                	add    %edx,%eax
c1007fbe:	c1 e0 03             	shl    $0x3,%eax
c1007fc1:	89 c2                	mov    %eax,%edx
c1007fc3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007fc6:	01 d0                	add    %edx,%eax
c1007fc8:	8b 40 10             	mov    0x10(%eax),%eax
c1007fcb:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1007fce:	75 4e                	jne    c100801e <get_child_dir_name+0x173>
c1007fd0:	8b 45 10             	mov    0x10(%ebp),%eax
c1007fd3:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1007fd8:	89 c2                	mov    %eax,%edx
c1007fda:	b8 00 00 00 00       	mov    $0x0,%eax
c1007fdf:	89 d7                	mov    %edx,%edi
c1007fe1:	f2 ae                	repnz scas %es:(%edi),%al
c1007fe3:	89 c8                	mov    %ecx,%eax
c1007fe5:	f7 d0                	not    %eax
c1007fe7:	8d 50 ff             	lea    -0x1(%eax),%edx
c1007fea:	8b 45 10             	mov    0x10(%ebp),%eax
c1007fed:	01 d0                	add    %edx,%eax
c1007fef:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1007ff4:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007ff8:	89 d0                	mov    %edx,%eax
c1007ffa:	01 c0                	add    %eax,%eax
c1007ffc:	01 d0                	add    %edx,%eax
c1007ffe:	c1 e0 03             	shl    $0x3,%eax
c1008001:	89 c2                	mov    %eax,%edx
c1008003:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008006:	01 d0                	add    %edx,%eax
c1008008:	83 ec 08             	sub    $0x8,%esp
c100800b:	50                   	push   %eax
c100800c:	ff 75 10             	pushl  0x10(%ebp)
c100800f:	e8 c1 81 ff ff       	call   c10001d5 <strcat>
c1008014:	83 c4 10             	add    $0x10,%esp
c1008017:	b8 00 00 00 00       	mov    $0x0,%eax
c100801c:	eb 2f                	jmp    c100804d <get_child_dir_name+0x1a2>
c100801e:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008022:	83 c0 01             	add    $0x1,%eax
c1008025:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008028:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c100802c:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c100802f:	77 83                	ja     c1007fb4 <get_child_dir_name+0x109>
c1008031:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008035:	83 c0 01             	add    $0x1,%eax
c1008038:	88 45 f7             	mov    %al,-0x9(%ebp)
c100803b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100803f:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1008042:	0f 87 37 ff ff ff    	ja     c1007f7f <get_child_dir_name+0xd4>
c1008048:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100804d:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1008050:	c9                   	leave  
c1008051:	c3                   	ret    

c1008052 <sys_getcwd>:
c1008052:	55                   	push   %ebp
c1008053:	89 e5                	mov    %esp,%ebp
c1008055:	57                   	push   %edi
c1008056:	53                   	push   %ebx
c1008057:	81 ec 20 02 00 00    	sub    $0x220,%esp
c100805d:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1008061:	75 19                	jne    c100807c <sys_getcwd+0x2a>
c1008063:	68 ae be 00 c1       	push   $0xc100beae
c1008068:	68 5c c3 00 c1       	push   $0xc100c35c
c100806d:	68 13 03 00 00       	push   $0x313
c1008072:	68 94 bc 00 c1       	push   $0xc100bc94
c1008077:	e8 ef 82 ff ff       	call   c100036b <__PANIC>
c100807c:	83 ec 08             	sub    $0x8,%esp
c100807f:	6a 02                	push   $0x2
c1008081:	68 00 02 00 00       	push   $0x200
c1008086:	e8 28 ac ff ff       	call   c1002cb3 <vmm_malloc>
c100808b:	83 c4 10             	add    $0x10,%esp
c100808e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008091:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1008095:	75 0a                	jne    c10080a1 <sys_getcwd+0x4f>
c1008097:	b8 00 00 00 00       	mov    $0x0,%eax
c100809c:	e9 97 01 00 00       	jmp    c1008238 <sys_getcwd+0x1e6>
c10080a1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10080a8:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10080ad:	8b 80 f8 00 00 00    	mov    0xf8(%eax),%eax
c10080b3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10080b6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10080ba:	78 09                	js     c10080c5 <sys_getcwd+0x73>
c10080bc:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
c10080c3:	7e 19                	jle    c10080de <sys_getcwd+0x8c>
c10080c5:	68 20 c2 00 c1       	push   $0xc100c220
c10080ca:	68 5c c3 00 c1       	push   $0xc100c35c
c10080cf:	68 1b 03 00 00       	push   $0x31b
c10080d4:	68 94 bc 00 c1       	push   $0xc100bc94
c10080d9:	e8 8d 82 ff ff       	call   c100036b <__PANIC>
c10080de:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10080e2:	75 17                	jne    c10080fb <sys_getcwd+0xa9>
c10080e4:	8b 45 08             	mov    0x8(%ebp),%eax
c10080e7:	c6 00 2f             	movb   $0x2f,(%eax)
c10080ea:	8b 45 08             	mov    0x8(%ebp),%eax
c10080ed:	83 c0 01             	add    $0x1,%eax
c10080f0:	c6 00 00             	movb   $0x0,(%eax)
c10080f3:	8b 45 08             	mov    0x8(%ebp),%eax
c10080f6:	e9 3d 01 00 00       	jmp    c1008238 <sys_getcwd+0x1e6>
c10080fb:	83 ec 04             	sub    $0x4,%esp
c10080fe:	ff 75 0c             	pushl  0xc(%ebp)
c1008101:	6a 00                	push   $0x0
c1008103:	ff 75 08             	pushl  0x8(%ebp)
c1008106:	e8 9f 7f ff ff       	call   c10000aa <memset>
c100810b:	83 c4 10             	add    $0x10,%esp
c100810e:	c7 85 e6 fd ff ff 00 	movl   $0x0,-0x21a(%ebp)
c1008115:	00 00 00 
c1008118:	8d 85 ea fd ff ff    	lea    -0x216(%ebp),%eax
c100811e:	b9 fc 01 00 00       	mov    $0x1fc,%ecx
c1008123:	bb 00 00 00 00       	mov    $0x0,%ebx
c1008128:	89 18                	mov    %ebx,(%eax)
c100812a:	89 5c 08 fc          	mov    %ebx,-0x4(%eax,%ecx,1)
c100812e:	8d 50 04             	lea    0x4(%eax),%edx
c1008131:	83 e2 fc             	and    $0xfffffffc,%edx
c1008134:	29 d0                	sub    %edx,%eax
c1008136:	01 c1                	add    %eax,%ecx
c1008138:	83 e1 fc             	and    $0xfffffffc,%ecx
c100813b:	c1 e9 02             	shr    $0x2,%ecx
c100813e:	89 d7                	mov    %edx,%edi
c1008140:	89 d8                	mov    %ebx,%eax
c1008142:	f3 ab                	rep stos %eax,%es:(%edi)
c1008144:	eb 58                	jmp    c100819e <sys_getcwd+0x14c>
c1008146:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008149:	83 ec 08             	sub    $0x8,%esp
c100814c:	ff 75 f0             	pushl  -0x10(%ebp)
c100814f:	50                   	push   %eax
c1008150:	e8 9e fc ff ff       	call   c1007df3 <get_parent_dir_inode_nr>
c1008155:	83 c4 10             	add    $0x10,%esp
c1008158:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100815b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100815e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008161:	ff 75 f0             	pushl  -0x10(%ebp)
c1008164:	8d 8d e6 fd ff ff    	lea    -0x21a(%ebp),%ecx
c100816a:	51                   	push   %ecx
c100816b:	52                   	push   %edx
c100816c:	50                   	push   %eax
c100816d:	e8 39 fd ff ff       	call   c1007eab <get_child_dir_name>
c1008172:	83 c4 10             	add    $0x10,%esp
c1008175:	83 f8 ff             	cmp    $0xffffffff,%eax
c1008178:	75 1e                	jne    c1008198 <sys_getcwd+0x146>
c100817a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100817d:	83 ec 08             	sub    $0x8,%esp
c1008180:	68 00 02 00 00       	push   $0x200
c1008185:	50                   	push   %eax
c1008186:	e8 4d ac ff ff       	call   c1002dd8 <vmm_free>
c100818b:	83 c4 10             	add    $0x10,%esp
c100818e:	b8 00 00 00 00       	mov    $0x0,%eax
c1008193:	e9 a0 00 00 00       	jmp    c1008238 <sys_getcwd+0x1e6>
c1008198:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100819b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100819e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10081a2:	75 a2                	jne    c1008146 <sys_getcwd+0xf4>
c10081a4:	83 ec 0c             	sub    $0xc,%esp
c10081a7:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c10081ad:	50                   	push   %eax
c10081ae:	e8 6b 7f ff ff       	call   c100011e <strlen>
c10081b3:	83 c4 10             	add    $0x10,%esp
c10081b6:	39 45 0c             	cmp    %eax,0xc(%ebp)
c10081b9:	73 49                	jae    c1008204 <sys_getcwd+0x1b2>
c10081bb:	68 50 c2 00 c1       	push   $0xc100c250
c10081c0:	68 5c c3 00 c1       	push   $0xc100c35c
c10081c5:	68 31 03 00 00       	push   $0x331
c10081ca:	68 94 bc 00 c1       	push   $0xc100bc94
c10081cf:	e8 97 81 ff ff       	call   c100036b <__PANIC>
c10081d4:	83 ec 0c             	sub    $0xc,%esp
c10081d7:	ff 75 08             	pushl  0x8(%ebp)
c10081da:	e8 3f 7f ff ff       	call   c100011e <strlen>
c10081df:	83 c4 10             	add    $0x10,%esp
c10081e2:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c10081e6:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c10081ea:	8b 45 08             	mov    0x8(%ebp),%eax
c10081ed:	01 d0                	add    %edx,%eax
c10081ef:	83 ec 08             	sub    $0x8,%esp
c10081f2:	ff 75 e8             	pushl  -0x18(%ebp)
c10081f5:	50                   	push   %eax
c10081f6:	e8 1f 80 ff ff       	call   c100021a <strcpy>
c10081fb:	83 c4 10             	add    $0x10,%esp
c10081fe:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008201:	c6 00 00             	movb   $0x0,(%eax)
c1008204:	83 ec 08             	sub    $0x8,%esp
c1008207:	6a 2f                	push   $0x2f
c1008209:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c100820f:	50                   	push   %eax
c1008210:	e8 81 7f ff ff       	call   c1000196 <strrchr>
c1008215:	83 c4 10             	add    $0x10,%esp
c1008218:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100821b:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c100821f:	75 b3                	jne    c10081d4 <sys_getcwd+0x182>
c1008221:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008224:	83 ec 08             	sub    $0x8,%esp
c1008227:	68 00 02 00 00       	push   $0x200
c100822c:	50                   	push   %eax
c100822d:	e8 a6 ab ff ff       	call   c1002dd8 <vmm_free>
c1008232:	83 c4 10             	add    $0x10,%esp
c1008235:	8b 45 08             	mov    0x8(%ebp),%eax
c1008238:	8d 65 f8             	lea    -0x8(%ebp),%esp
c100823b:	5b                   	pop    %ebx
c100823c:	5f                   	pop    %edi
c100823d:	5d                   	pop    %ebp
c100823e:	c3                   	ret    

c100823f <sys_stat>:
c100823f:	55                   	push   %ebp
c1008240:	89 e5                	mov    %esp,%ebp
c1008242:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1008248:	83 ec 08             	sub    $0x8,%esp
c100824b:	68 c3 bc 00 c1       	push   $0xc100bcc3
c1008250:	ff 75 08             	pushl  0x8(%ebp)
c1008253:	e8 2b 7f ff ff       	call   c1000183 <strcmp>
c1008258:	83 c4 10             	add    $0x10,%esp
c100825b:	85 c0                	test   %eax,%eax
c100825d:	74 2e                	je     c100828d <sys_stat+0x4e>
c100825f:	83 ec 08             	sub    $0x8,%esp
c1008262:	68 c5 bc 00 c1       	push   $0xc100bcc5
c1008267:	ff 75 08             	pushl  0x8(%ebp)
c100826a:	e8 14 7f ff ff       	call   c1000183 <strcmp>
c100826f:	83 c4 10             	add    $0x10,%esp
c1008272:	85 c0                	test   %eax,%eax
c1008274:	74 17                	je     c100828d <sys_stat+0x4e>
c1008276:	83 ec 08             	sub    $0x8,%esp
c1008279:	68 c8 bc 00 c1       	push   $0xc100bcc8
c100827e:	ff 75 08             	pushl  0x8(%ebp)
c1008281:	e8 fd 7e ff ff       	call   c1000183 <strcmp>
c1008286:	83 c4 10             	add    $0x10,%esp
c1008289:	85 c0                	test   %eax,%eax
c100828b:	75 2d                	jne    c10082ba <sys_stat+0x7b>
c100828d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008290:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
c1008297:	8b 45 0c             	mov    0xc(%ebp),%eax
c100829a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10082a0:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c10082a5:	8b 00                	mov    (%eax),%eax
c10082a7:	8b 50 04             	mov    0x4(%eax),%edx
c10082aa:	8b 45 0c             	mov    0xc(%ebp),%eax
c10082ad:	89 50 04             	mov    %edx,0x4(%eax)
c10082b0:	b8 00 00 00 00       	mov    $0x0,%eax
c10082b5:	e9 af 00 00 00       	jmp    c1008369 <sys_stat+0x12a>
c10082ba:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10082c1:	83 ec 04             	sub    $0x4,%esp
c10082c4:	68 08 02 00 00       	push   $0x208
c10082c9:	6a 00                	push   $0x0
c10082cb:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10082d1:	50                   	push   %eax
c10082d2:	e8 d3 7d ff ff       	call   c10000aa <memset>
c10082d7:	83 c4 10             	add    $0x10,%esp
c10082da:	83 ec 08             	sub    $0x8,%esp
c10082dd:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10082e3:	50                   	push   %eax
c10082e4:	ff 75 08             	pushl  0x8(%ebp)
c10082e7:	e8 42 e8 ff ff       	call   c1006b2e <search_file>
c10082ec:	83 c4 10             	add    $0x10,%esp
c10082ef:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10082f2:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10082f6:	74 4c                	je     c1008344 <sys_stat+0x105>
c10082f8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10082fb:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008300:	83 ec 08             	sub    $0x8,%esp
c1008303:	52                   	push   %edx
c1008304:	50                   	push   %eax
c1008305:	e8 6f 23 00 00       	call   c100a679 <inode_open>
c100830a:	83 c4 10             	add    $0x10,%esp
c100830d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008310:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008313:	8b 50 04             	mov    0x4(%eax),%edx
c1008316:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008319:	89 50 04             	mov    %edx,0x4(%eax)
c100831c:	83 ec 0c             	sub    $0xc,%esp
c100831f:	ff 75 ec             	pushl  -0x14(%ebp)
c1008322:	e8 28 24 00 00       	call   c100a74f <inode_close>
c1008327:	83 c4 10             	add    $0x10,%esp
c100832a:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100832d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008330:	89 50 08             	mov    %edx,0x8(%eax)
c1008333:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008336:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008339:	89 10                	mov    %edx,(%eax)
c100833b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008342:	eb 13                	jmp    c1008357 <sys_stat+0x118>
c1008344:	83 ec 08             	sub    $0x8,%esp
c1008347:	ff 75 08             	pushl  0x8(%ebp)
c100834a:	68 72 c2 00 c1       	push   $0xc100c272
c100834f:	e8 5e d4 ff ff       	call   c10057b2 <printk>
c1008354:	83 c4 10             	add    $0x10,%esp
c1008357:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100835a:	83 ec 0c             	sub    $0xc,%esp
c100835d:	50                   	push   %eax
c100835e:	e8 51 03 00 00       	call   c10086b4 <dir_close>
c1008363:	83 c4 10             	add    $0x10,%esp
c1008366:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008369:	c9                   	leave  
c100836a:	c3                   	ret    

c100836b <sys_chdir>:
c100836b:	55                   	push   %ebp
c100836c:	89 e5                	mov    %esp,%ebp
c100836e:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1008374:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c100837b:	83 ec 04             	sub    $0x4,%esp
c100837e:	68 08 02 00 00       	push   $0x208
c1008383:	6a 00                	push   $0x0
c1008385:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c100838b:	50                   	push   %eax
c100838c:	e8 19 7d ff ff       	call   c10000aa <memset>
c1008391:	83 c4 10             	add    $0x10,%esp
c1008394:	83 ec 08             	sub    $0x8,%esp
c1008397:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c100839d:	50                   	push   %eax
c100839e:	ff 75 08             	pushl  0x8(%ebp)
c10083a1:	e8 88 e7 ff ff       	call   c1006b2e <search_file>
c10083a6:	83 c4 10             	add    $0x10,%esp
c10083a9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10083ac:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10083b0:	74 32                	je     c10083e4 <sys_chdir+0x79>
c10083b2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10083b5:	83 f8 02             	cmp    $0x2,%eax
c10083b8:	75 17                	jne    c10083d1 <sys_chdir+0x66>
c10083ba:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10083bf:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10083c2:	89 90 f8 00 00 00    	mov    %edx,0xf8(%eax)
c10083c8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10083cf:	eb 13                	jmp    c10083e4 <sys_chdir+0x79>
c10083d1:	83 ec 08             	sub    $0x8,%esp
c10083d4:	ff 75 08             	pushl  0x8(%ebp)
c10083d7:	68 8c c2 00 c1       	push   $0xc100c28c
c10083dc:	e8 d1 d3 ff ff       	call   c10057b2 <printk>
c10083e1:	83 c4 10             	add    $0x10,%esp
c10083e4:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10083e7:	83 ec 0c             	sub    $0xc,%esp
c10083ea:	50                   	push   %eax
c10083eb:	e8 c4 02 00 00       	call   c10086b4 <dir_close>
c10083f0:	83 c4 10             	add    $0x10,%esp
c10083f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10083f6:	c9                   	leave  
c10083f7:	c3                   	ret    

c10083f8 <fs_init>:
c10083f8:	55                   	push   %ebp
c10083f9:	89 e5                	mov    %esp,%ebp
c10083fb:	83 ec 08             	sub    $0x8,%esp
c10083fe:	e8 82 e3 ff ff       	call   c1006785 <mount_partition>
c1008403:	90                   	nop
c1008404:	c9                   	leave  
c1008405:	c3                   	ret    

c1008406 <open_root_dir>:
c1008406:	55                   	push   %ebp
c1008407:	89 e5                	mov    %esp,%ebp
c1008409:	53                   	push   %ebx
c100840a:	83 ec 04             	sub    $0x4,%esp
c100840d:	83 ec 08             	sub    $0x8,%esp
c1008410:	6a 02                	push   $0x2
c1008412:	68 08 02 00 00       	push   $0x208
c1008417:	e8 97 a8 ff ff       	call   c1002cb3 <vmm_malloc>
c100841c:	83 c4 10             	add    $0x10,%esp
c100841f:	a3 34 42 a1 c1       	mov    %eax,0xc1a14234
c1008424:	8b 45 08             	mov    0x8(%ebp),%eax
c1008427:	8b 40 10             	mov    0x10(%eax),%eax
c100842a:	8b 40 2c             	mov    0x2c(%eax),%eax
c100842d:	83 ec 08             	sub    $0x8,%esp
c1008430:	50                   	push   %eax
c1008431:	68 68 c3 00 c1       	push   $0xc100c368
c1008436:	e8 77 d3 ff ff       	call   c10057b2 <printk>
c100843b:	83 c4 10             	add    $0x10,%esp
c100843e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008441:	8b 40 10             	mov    0x10(%eax),%eax
c1008444:	8b 40 2c             	mov    0x2c(%eax),%eax
c1008447:	8b 1d 34 42 a1 c1    	mov    0xc1a14234,%ebx
c100844d:	83 ec 08             	sub    $0x8,%esp
c1008450:	50                   	push   %eax
c1008451:	ff 75 08             	pushl  0x8(%ebp)
c1008454:	e8 20 22 00 00       	call   c100a679 <inode_open>
c1008459:	83 c4 10             	add    $0x10,%esp
c100845c:	89 03                	mov    %eax,(%ebx)
c100845e:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c1008463:	8b 00                	mov    (%eax),%eax
c1008465:	83 ec 08             	sub    $0x8,%esp
c1008468:	50                   	push   %eax
c1008469:	68 7c c3 00 c1       	push   $0xc100c37c
c100846e:	e8 3f d3 ff ff       	call   c10057b2 <printk>
c1008473:	83 c4 10             	add    $0x10,%esp
c1008476:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c100847b:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1008482:	90                   	nop
c1008483:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1008486:	c9                   	leave  
c1008487:	c3                   	ret    

c1008488 <dir_open>:
c1008488:	55                   	push   %ebp
c1008489:	89 e5                	mov    %esp,%ebp
c100848b:	83 ec 18             	sub    $0x18,%esp
c100848e:	83 ec 08             	sub    $0x8,%esp
c1008491:	6a 02                	push   $0x2
c1008493:	68 08 02 00 00       	push   $0x208
c1008498:	e8 16 a8 ff ff       	call   c1002cb3 <vmm_malloc>
c100849d:	83 c4 10             	add    $0x10,%esp
c10084a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10084a3:	83 ec 08             	sub    $0x8,%esp
c10084a6:	ff 75 0c             	pushl  0xc(%ebp)
c10084a9:	ff 75 08             	pushl  0x8(%ebp)
c10084ac:	e8 c8 21 00 00       	call   c100a679 <inode_open>
c10084b1:	83 c4 10             	add    $0x10,%esp
c10084b4:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10084b7:	89 02                	mov    %eax,(%edx)
c10084b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10084bc:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10084c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10084c6:	c9                   	leave  
c10084c7:	c3                   	ret    

c10084c8 <search_dir_entry>:
c10084c8:	55                   	push   %ebp
c10084c9:	89 e5                	mov    %esp,%ebp
c10084cb:	83 ec 28             	sub    $0x28,%esp
c10084ce:	c7 45 e8 8c 00 00 00 	movl   $0x8c,-0x18(%ebp)
c10084d5:	83 ec 08             	sub    $0x8,%esp
c10084d8:	6a 02                	push   $0x2
c10084da:	68 30 02 00 00       	push   $0x230
c10084df:	e8 cf a7 ff ff       	call   c1002cb3 <vmm_malloc>
c10084e4:	83 c4 10             	add    $0x10,%esp
c10084e7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10084ea:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c10084ee:	75 1a                	jne    c100850a <search_dir_entry+0x42>
c10084f0:	83 ec 0c             	sub    $0xc,%esp
c10084f3:	68 94 c3 00 c1       	push   $0xc100c394
c10084f8:	e8 b5 d2 ff ff       	call   c10057b2 <printk>
c10084fd:	83 c4 10             	add    $0x10,%esp
c1008500:	b8 00 00 00 00       	mov    $0x0,%eax
c1008505:	e9 a8 01 00 00       	jmp    c10086b2 <search_dir_entry+0x1ea>
c100850a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008511:	eb 23                	jmp    c1008536 <search_dir_entry+0x6e>
c1008513:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008516:	8b 00                	mov    (%eax),%eax
c1008518:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100851b:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1008522:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1008525:	01 ca                	add    %ecx,%edx
c1008527:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c100852a:	83 c1 04             	add    $0x4,%ecx
c100852d:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1008530:	89 02                	mov    %eax,(%edx)
c1008532:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008536:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c100853a:	76 d7                	jbe    c1008513 <search_dir_entry+0x4b>
c100853c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008543:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008546:	8b 00                	mov    (%eax),%eax
c1008548:	8b 40 40             	mov    0x40(%eax),%eax
c100854b:	85 c0                	test   %eax,%eax
c100854d:	74 1d                	je     c100856c <search_dir_entry+0xa4>
c100854f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008552:	8b 00                	mov    (%eax),%eax
c1008554:	8b 40 40             	mov    0x40(%eax),%eax
c1008557:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100855a:	83 c2 30             	add    $0x30,%edx
c100855d:	83 ec 04             	sub    $0x4,%esp
c1008560:	6a 01                	push   $0x1
c1008562:	50                   	push   %eax
c1008563:	52                   	push   %edx
c1008564:	e8 f1 da ff ff       	call   c100605a <ide_read>
c1008569:	83 c4 10             	add    $0x10,%esp
c100856c:	83 ec 08             	sub    $0x8,%esp
c100856f:	6a 02                	push   $0x2
c1008571:	68 00 02 00 00       	push   $0x200
c1008576:	e8 38 a7 ff ff       	call   c1002cb3 <vmm_malloc>
c100857b:	83 c4 10             	add    $0x10,%esp
c100857e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008581:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008584:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008587:	8b 45 08             	mov    0x8(%ebp),%eax
c100858a:	8b 40 10             	mov    0x10(%eax),%eax
c100858d:	8b 40 30             	mov    0x30(%eax),%eax
c1008590:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008593:	b8 00 02 00 00       	mov    $0x200,%eax
c1008598:	ba 00 00 00 00       	mov    $0x0,%edx
c100859d:	f7 75 dc             	divl   -0x24(%ebp)
c10085a0:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10085a3:	e9 d1 00 00 00       	jmp    c1008679 <search_dir_entry+0x1b1>
c10085a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10085ab:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10085b2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10085b5:	01 d0                	add    %edx,%eax
c10085b7:	8b 00                	mov    (%eax),%eax
c10085b9:	85 c0                	test   %eax,%eax
c10085bb:	75 09                	jne    c10085c6 <search_dir_entry+0xfe>
c10085bd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10085c1:	e9 b3 00 00 00       	jmp    c1008679 <search_dir_entry+0x1b1>
c10085c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10085c9:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10085d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10085d3:	01 d0                	add    %edx,%eax
c10085d5:	8b 00                	mov    (%eax),%eax
c10085d7:	83 ec 04             	sub    $0x4,%esp
c10085da:	6a 01                	push   $0x1
c10085dc:	50                   	push   %eax
c10085dd:	ff 75 e0             	pushl  -0x20(%ebp)
c10085e0:	e8 75 da ff ff       	call   c100605a <ide_read>
c10085e5:	83 c4 10             	add    $0x10,%esp
c10085e8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10085ef:	eb 61                	jmp    c1008652 <search_dir_entry+0x18a>
c10085f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10085f4:	83 ec 08             	sub    $0x8,%esp
c10085f7:	ff 75 10             	pushl  0x10(%ebp)
c10085fa:	50                   	push   %eax
c10085fb:	e8 83 7b ff ff       	call   c1000183 <strcmp>
c1008600:	83 c4 10             	add    $0x10,%esp
c1008603:	85 c0                	test   %eax,%eax
c1008605:	75 43                	jne    c100864a <search_dir_entry+0x182>
c1008607:	83 ec 04             	sub    $0x4,%esp
c100860a:	ff 75 dc             	pushl  -0x24(%ebp)
c100860d:	ff 75 f0             	pushl  -0x10(%ebp)
c1008610:	ff 75 14             	pushl  0x14(%ebp)
c1008613:	e8 f0 7a ff ff       	call   c1000108 <memcpy>
c1008618:	83 c4 10             	add    $0x10,%esp
c100861b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100861e:	83 ec 08             	sub    $0x8,%esp
c1008621:	68 00 02 00 00       	push   $0x200
c1008626:	50                   	push   %eax
c1008627:	e8 ac a7 ff ff       	call   c1002dd8 <vmm_free>
c100862c:	83 c4 10             	add    $0x10,%esp
c100862f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008632:	83 ec 08             	sub    $0x8,%esp
c1008635:	68 30 02 00 00       	push   $0x230
c100863a:	50                   	push   %eax
c100863b:	e8 98 a7 ff ff       	call   c1002dd8 <vmm_free>
c1008640:	83 c4 10             	add    $0x10,%esp
c1008643:	b8 01 00 00 00       	mov    $0x1,%eax
c1008648:	eb 68                	jmp    c10086b2 <search_dir_entry+0x1ea>
c100864a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c100864e:	83 45 f0 18          	addl   $0x18,-0x10(%ebp)
c1008652:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008655:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c1008658:	72 97                	jb     c10085f1 <search_dir_entry+0x129>
c100865a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100865e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008661:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008664:	83 ec 04             	sub    $0x4,%esp
c1008667:	68 00 02 00 00       	push   $0x200
c100866c:	6a 00                	push   $0x0
c100866e:	ff 75 e0             	pushl  -0x20(%ebp)
c1008671:	e8 34 7a ff ff       	call   c10000aa <memset>
c1008676:	83 c4 10             	add    $0x10,%esp
c1008679:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100867c:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c100867f:	0f 82 23 ff ff ff    	jb     c10085a8 <search_dir_entry+0xe0>
c1008685:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008688:	83 ec 08             	sub    $0x8,%esp
c100868b:	68 00 02 00 00       	push   $0x200
c1008690:	50                   	push   %eax
c1008691:	e8 42 a7 ff ff       	call   c1002dd8 <vmm_free>
c1008696:	83 c4 10             	add    $0x10,%esp
c1008699:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100869c:	83 ec 08             	sub    $0x8,%esp
c100869f:	68 30 02 00 00       	push   $0x230
c10086a4:	50                   	push   %eax
c10086a5:	e8 2e a7 ff ff       	call   c1002dd8 <vmm_free>
c10086aa:	83 c4 10             	add    $0x10,%esp
c10086ad:	b8 00 00 00 00       	mov    $0x0,%eax
c10086b2:	c9                   	leave  
c10086b3:	c3                   	ret    

c10086b4 <dir_close>:
c10086b4:	55                   	push   %ebp
c10086b5:	89 e5                	mov    %esp,%ebp
c10086b7:	83 ec 08             	sub    $0x8,%esp
c10086ba:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c10086bf:	39 45 08             	cmp    %eax,0x8(%ebp)
c10086c2:	74 27                	je     c10086eb <dir_close+0x37>
c10086c4:	8b 45 08             	mov    0x8(%ebp),%eax
c10086c7:	8b 00                	mov    (%eax),%eax
c10086c9:	83 ec 0c             	sub    $0xc,%esp
c10086cc:	50                   	push   %eax
c10086cd:	e8 7d 20 00 00       	call   c100a74f <inode_close>
c10086d2:	83 c4 10             	add    $0x10,%esp
c10086d5:	8b 45 08             	mov    0x8(%ebp),%eax
c10086d8:	83 ec 08             	sub    $0x8,%esp
c10086db:	68 08 02 00 00       	push   $0x208
c10086e0:	50                   	push   %eax
c10086e1:	e8 f2 a6 ff ff       	call   c1002dd8 <vmm_free>
c10086e6:	83 c4 10             	add    $0x10,%esp
c10086e9:	eb 01                	jmp    c10086ec <dir_close+0x38>
c10086eb:	90                   	nop
c10086ec:	c9                   	leave  
c10086ed:	c3                   	ret    

c10086ee <create_dir_entry>:
c10086ee:	55                   	push   %ebp
c10086ef:	89 e5                	mov    %esp,%ebp
c10086f1:	83 ec 18             	sub    $0x18,%esp
c10086f4:	8b 45 10             	mov    0x10(%ebp),%eax
c10086f7:	88 45 f4             	mov    %al,-0xc(%ebp)
c10086fa:	83 ec 0c             	sub    $0xc,%esp
c10086fd:	ff 75 08             	pushl  0x8(%ebp)
c1008700:	e8 19 7a ff ff       	call   c100011e <strlen>
c1008705:	83 c4 10             	add    $0x10,%esp
c1008708:	83 f8 10             	cmp    $0x10,%eax
c100870b:	76 16                	jbe    c1008723 <create_dir_entry+0x35>
c100870d:	68 c8 c3 00 c1       	push   $0xc100c3c8
c1008712:	68 7c c5 00 c1       	push   $0xc100c57c
c1008717:	6a 72                	push   $0x72
c1008719:	68 f0 c3 00 c1       	push   $0xc100c3f0
c100871e:	e8 48 7c ff ff       	call   c100036b <__PANIC>
c1008723:	83 ec 0c             	sub    $0xc,%esp
c1008726:	ff 75 08             	pushl  0x8(%ebp)
c1008729:	e8 f0 79 ff ff       	call   c100011e <strlen>
c100872e:	83 c4 10             	add    $0x10,%esp
c1008731:	8b 55 14             	mov    0x14(%ebp),%edx
c1008734:	83 ec 04             	sub    $0x4,%esp
c1008737:	50                   	push   %eax
c1008738:	ff 75 08             	pushl  0x8(%ebp)
c100873b:	52                   	push   %edx
c100873c:	e8 c7 79 ff ff       	call   c1000108 <memcpy>
c1008741:	83 c4 10             	add    $0x10,%esp
c1008744:	8b 45 14             	mov    0x14(%ebp),%eax
c1008747:	8b 55 0c             	mov    0xc(%ebp),%edx
c100874a:	89 50 10             	mov    %edx,0x10(%eax)
c100874d:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
c1008751:	8b 45 14             	mov    0x14(%ebp),%eax
c1008754:	89 50 14             	mov    %edx,0x14(%eax)
c1008757:	90                   	nop
c1008758:	c9                   	leave  
c1008759:	c3                   	ret    

c100875a <sync_dir_entry>:
c100875a:	55                   	push   %ebp
c100875b:	89 e5                	mov    %esp,%ebp
c100875d:	57                   	push   %edi
c100875e:	53                   	push   %ebx
c100875f:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1008765:	8b 45 08             	mov    0x8(%ebp),%eax
c1008768:	8b 00                	mov    (%eax),%eax
c100876a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100876d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008770:	8b 40 04             	mov    0x4(%eax),%eax
c1008773:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008776:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100877b:	8b 40 10             	mov    0x10(%eax),%eax
c100877e:	8b 40 30             	mov    0x30(%eax),%eax
c1008781:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008784:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008787:	ba 00 00 00 00       	mov    $0x0,%edx
c100878c:	f7 75 e8             	divl   -0x18(%ebp)
c100878f:	89 d0                	mov    %edx,%eax
c1008791:	85 c0                	test   %eax,%eax
c1008793:	74 19                	je     c10087ae <sync_dir_entry+0x54>
c1008795:	68 20 c4 00 c1       	push   $0xc100c420
c100879a:	68 90 c5 00 c1       	push   $0xc100c590
c100879f:	68 80 00 00 00       	push   $0x80
c10087a4:	68 f0 c3 00 c1       	push   $0xc100c3f0
c10087a9:	e8 bd 7b ff ff       	call   c100036b <__PANIC>
c10087ae:	b8 00 02 00 00       	mov    $0x200,%eax
c10087b3:	ba 00 00 00 00       	mov    $0x0,%edx
c10087b8:	f7 75 e8             	divl   -0x18(%ebp)
c10087bb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10087be:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c10087c5:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c10087c9:	8d 95 a0 fd ff ff    	lea    -0x260(%ebp),%edx
c10087cf:	b8 00 00 00 00       	mov    $0x0,%eax
c10087d4:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c10087d9:	89 d7                	mov    %edx,%edi
c10087db:	f3 ab                	rep stos %eax,%es:(%edi)
c10087dd:	eb 22                	jmp    c1008801 <sync_dir_entry+0xa7>
c10087df:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c10087e3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10087e7:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10087ea:	83 c1 04             	add    $0x4,%ecx
c10087ed:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c10087f0:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c10087f7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10087fb:	83 c0 01             	add    $0x1,%eax
c10087fe:	88 45 f7             	mov    %al,-0x9(%ebp)
c1008801:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1008805:	76 d8                	jbe    c10087df <sync_dir_entry+0x85>
c1008807:	8b 45 10             	mov    0x10(%ebp),%eax
c100880a:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100880d:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1008814:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1008818:	e9 52 03 00 00       	jmp    c1008b6f <sync_dir_entry+0x415>
c100881d:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1008824:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008828:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c100882f:	85 c0                	test   %eax,%eax
c1008831:	0f 85 80 02 00 00    	jne    c1008ab7 <sync_dir_entry+0x35d>
c1008837:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100883c:	83 ec 0c             	sub    $0xc,%esp
c100883f:	50                   	push   %eax
c1008840:	e8 27 0c 00 00       	call   c100946c <block_bitmap_alloc>
c1008845:	83 c4 10             	add    $0x10,%esp
c1008848:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100884b:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c100884f:	75 1a                	jne    c100886b <sync_dir_entry+0x111>
c1008851:	83 ec 0c             	sub    $0xc,%esp
c1008854:	68 40 c4 00 c1       	push   $0xc100c440
c1008859:	e8 54 cf ff ff       	call   c10057b2 <printk>
c100885e:	83 c4 10             	add    $0x10,%esp
c1008861:	b8 00 00 00 00       	mov    $0x0,%eax
c1008866:	e9 23 03 00 00       	jmp    c1008b8e <sync_dir_entry+0x434>
c100886b:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100886e:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008873:	8b 40 10             	mov    0x10(%eax),%eax
c1008876:	8b 40 28             	mov    0x28(%eax),%eax
c1008879:	29 c2                	sub    %eax,%edx
c100887b:	89 d0                	mov    %edx,%eax
c100887d:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008880:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008884:	75 19                	jne    c100889f <sync_dir_entry+0x145>
c1008886:	68 6e c4 00 c1       	push   $0xc100c46e
c100888b:	68 90 c5 00 c1       	push   $0xc100c590
c1008890:	68 a3 00 00 00       	push   $0xa3
c1008895:	68 f0 c3 00 c1       	push   $0xc100c3f0
c100889a:	e8 cc 7a ff ff       	call   c100036b <__PANIC>
c100889f:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10088a2:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10088a7:	83 ec 04             	sub    $0x4,%esp
c10088aa:	6a 01                	push   $0x1
c10088ac:	52                   	push   %edx
c10088ad:	50                   	push   %eax
c10088ae:	e8 87 0c 00 00       	call   c100953a <bitmap_sync>
c10088b3:	83 c4 10             	add    $0x10,%esp
c10088b6:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c10088bd:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c10088c1:	77 27                	ja     c10088ea <sync_dir_entry+0x190>
c10088c3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10088c7:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10088ca:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c10088d1:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c10088d5:	8b 94 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%edx
c10088dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10088df:	83 c1 04             	add    $0x4,%ecx
c10088e2:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c10088e5:	e9 6d 01 00 00       	jmp    c1008a57 <sync_dir_entry+0x2fd>
c10088ea:	80 7d f7 0c          	cmpb   $0xc,-0x9(%ebp)
c10088ee:	0f 85 37 01 00 00    	jne    c1008a2b <sync_dir_entry+0x2d1>
c10088f4:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10088f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10088fa:	89 50 40             	mov    %edx,0x40(%eax)
c10088fd:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1008904:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008909:	83 ec 0c             	sub    $0xc,%esp
c100890c:	50                   	push   %eax
c100890d:	e8 5a 0b 00 00       	call   c100946c <block_bitmap_alloc>
c1008912:	83 c4 10             	add    $0x10,%esp
c1008915:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008918:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c100891c:	0f 85 95 00 00 00    	jne    c10089b7 <sync_dir_entry+0x25d>
c1008922:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008925:	8b 50 40             	mov    0x40(%eax),%edx
c1008928:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100892d:	8b 40 10             	mov    0x10(%eax),%eax
c1008930:	8b 40 28             	mov    0x28(%eax),%eax
c1008933:	29 c2                	sub    %eax,%edx
c1008935:	89 d0                	mov    %edx,%eax
c1008937:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100893a:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100893d:	8d 50 07             	lea    0x7(%eax),%edx
c1008940:	85 c0                	test   %eax,%eax
c1008942:	0f 48 c2             	cmovs  %edx,%eax
c1008945:	c1 f8 03             	sar    $0x3,%eax
c1008948:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100894b:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100894e:	99                   	cltd   
c100894f:	c1 ea 1d             	shr    $0x1d,%edx
c1008952:	01 d0                	add    %edx,%eax
c1008954:	83 e0 07             	and    $0x7,%eax
c1008957:	29 d0                	sub    %edx,%eax
c1008959:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100895c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008961:	8b 50 18             	mov    0x18(%eax),%edx
c1008964:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008967:	01 d0                	add    %edx,%eax
c1008969:	0f b6 00             	movzbl (%eax),%eax
c100896c:	89 c2                	mov    %eax,%edx
c100896e:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008971:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008976:	89 c1                	mov    %eax,%ecx
c1008978:	d3 e3                	shl    %cl,%ebx
c100897a:	89 d8                	mov    %ebx,%eax
c100897c:	f7 d0                	not    %eax
c100897e:	89 d1                	mov    %edx,%ecx
c1008980:	21 c1                	and    %eax,%ecx
c1008982:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008987:	8b 50 18             	mov    0x18(%eax),%edx
c100898a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100898d:	01 d0                	add    %edx,%eax
c100898f:	89 ca                	mov    %ecx,%edx
c1008991:	88 10                	mov    %dl,(%eax)
c1008993:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008996:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c100899d:	83 ec 0c             	sub    $0xc,%esp
c10089a0:	68 40 c4 00 c1       	push   $0xc100c440
c10089a5:	e8 08 ce ff ff       	call   c10057b2 <printk>
c10089aa:	83 c4 10             	add    $0x10,%esp
c10089ad:	b8 00 00 00 00       	mov    $0x0,%eax
c10089b2:	e9 d7 01 00 00       	jmp    c1008b8e <sync_dir_entry+0x434>
c10089b7:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10089ba:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10089bf:	8b 40 10             	mov    0x10(%eax),%eax
c10089c2:	8b 40 28             	mov    0x28(%eax),%eax
c10089c5:	29 c2                	sub    %eax,%edx
c10089c7:	89 d0                	mov    %edx,%eax
c10089c9:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10089cc:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10089d0:	75 19                	jne    c10089eb <sync_dir_entry+0x291>
c10089d2:	68 6e c4 00 c1       	push   $0xc100c46e
c10089d7:	68 90 c5 00 c1       	push   $0xc100c590
c10089dc:	68 ba 00 00 00       	push   $0xba
c10089e1:	68 f0 c3 00 c1       	push   $0xc100c3f0
c10089e6:	e8 80 79 ff ff       	call   c100036b <__PANIC>
c10089eb:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10089ee:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10089f3:	83 ec 04             	sub    $0x4,%esp
c10089f6:	6a 01                	push   $0x1
c10089f8:	52                   	push   %edx
c10089f9:	50                   	push   %eax
c10089fa:	e8 3b 0b 00 00       	call   c100953a <bitmap_sync>
c10089ff:	83 c4 10             	add    $0x10,%esp
c1008a02:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008a05:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c1008a0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008a0e:	8b 50 40             	mov    0x40(%eax),%edx
c1008a11:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c1008a17:	83 c0 30             	add    $0x30,%eax
c1008a1a:	83 ec 04             	sub    $0x4,%esp
c1008a1d:	6a 01                	push   $0x1
c1008a1f:	52                   	push   %edx
c1008a20:	50                   	push   %eax
c1008a21:	e8 71 d6 ff ff       	call   c1006097 <ide_write>
c1008a26:	83 c4 10             	add    $0x10,%esp
c1008a29:	eb 2c                	jmp    c1008a57 <sync_dir_entry+0x2fd>
c1008a2b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008a2f:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008a32:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1008a39:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008a3c:	8b 50 40             	mov    0x40(%eax),%edx
c1008a3f:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c1008a45:	83 c0 30             	add    $0x30,%eax
c1008a48:	83 ec 04             	sub    $0x4,%esp
c1008a4b:	6a 01                	push   $0x1
c1008a4d:	52                   	push   %edx
c1008a4e:	50                   	push   %eax
c1008a4f:	e8 43 d6 ff ff       	call   c1006097 <ide_write>
c1008a54:	83 c4 10             	add    $0x10,%esp
c1008a57:	83 ec 04             	sub    $0x4,%esp
c1008a5a:	68 00 02 00 00       	push   $0x200
c1008a5f:	6a 00                	push   $0x0
c1008a61:	ff 75 10             	pushl  0x10(%ebp)
c1008a64:	e8 41 76 ff ff       	call   c10000aa <memset>
c1008a69:	83 c4 10             	add    $0x10,%esp
c1008a6c:	83 ec 04             	sub    $0x4,%esp
c1008a6f:	ff 75 e8             	pushl  -0x18(%ebp)
c1008a72:	ff 75 0c             	pushl  0xc(%ebp)
c1008a75:	ff 75 10             	pushl  0x10(%ebp)
c1008a78:	e8 8b 76 ff ff       	call   c1000108 <memcpy>
c1008a7d:	83 c4 10             	add    $0x10,%esp
c1008a80:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008a84:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1008a8b:	83 ec 04             	sub    $0x4,%esp
c1008a8e:	6a 01                	push   $0x1
c1008a90:	50                   	push   %eax
c1008a91:	ff 75 10             	pushl  0x10(%ebp)
c1008a94:	e8 fe d5 ff ff       	call   c1006097 <ide_write>
c1008a99:	83 c4 10             	add    $0x10,%esp
c1008a9c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008a9f:	8b 50 04             	mov    0x4(%eax),%edx
c1008aa2:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008aa5:	01 c2                	add    %eax,%edx
c1008aa7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008aaa:	89 50 04             	mov    %edx,0x4(%eax)
c1008aad:	b8 01 00 00 00       	mov    $0x1,%eax
c1008ab2:	e9 d7 00 00 00       	jmp    c1008b8e <sync_dir_entry+0x434>
c1008ab7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008abb:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1008ac2:	83 ec 04             	sub    $0x4,%esp
c1008ac5:	6a 01                	push   $0x1
c1008ac7:	50                   	push   %eax
c1008ac8:	ff 75 10             	pushl  0x10(%ebp)
c1008acb:	e8 8a d5 ff ff       	call   c100605a <ide_read>
c1008ad0:	83 c4 10             	add    $0x10,%esp
c1008ad3:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c1008ad7:	eb 7f                	jmp    c1008b58 <sync_dir_entry+0x3fe>
c1008ad9:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1008add:	89 d0                	mov    %edx,%eax
c1008adf:	01 c0                	add    %eax,%eax
c1008ae1:	01 d0                	add    %edx,%eax
c1008ae3:	c1 e0 03             	shl    $0x3,%eax
c1008ae6:	89 c2                	mov    %eax,%edx
c1008ae8:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008aeb:	01 d0                	add    %edx,%eax
c1008aed:	8b 40 14             	mov    0x14(%eax),%eax
c1008af0:	85 c0                	test   %eax,%eax
c1008af2:	75 5a                	jne    c1008b4e <sync_dir_entry+0x3f4>
c1008af4:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c1008af8:	89 d0                	mov    %edx,%eax
c1008afa:	01 c0                	add    %eax,%eax
c1008afc:	01 d0                	add    %edx,%eax
c1008afe:	c1 e0 03             	shl    $0x3,%eax
c1008b01:	89 c2                	mov    %eax,%edx
c1008b03:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008b06:	01 d0                	add    %edx,%eax
c1008b08:	83 ec 04             	sub    $0x4,%esp
c1008b0b:	ff 75 e8             	pushl  -0x18(%ebp)
c1008b0e:	ff 75 0c             	pushl  0xc(%ebp)
c1008b11:	50                   	push   %eax
c1008b12:	e8 f1 75 ff ff       	call   c1000108 <memcpy>
c1008b17:	83 c4 10             	add    $0x10,%esp
c1008b1a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008b1e:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1008b25:	83 ec 04             	sub    $0x4,%esp
c1008b28:	6a 01                	push   $0x1
c1008b2a:	50                   	push   %eax
c1008b2b:	ff 75 10             	pushl  0x10(%ebp)
c1008b2e:	e8 64 d5 ff ff       	call   c1006097 <ide_write>
c1008b33:	83 c4 10             	add    $0x10,%esp
c1008b36:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008b39:	8b 50 04             	mov    0x4(%eax),%edx
c1008b3c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008b3f:	01 c2                	add    %eax,%edx
c1008b41:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008b44:	89 50 04             	mov    %edx,0x4(%eax)
c1008b47:	b8 01 00 00 00       	mov    $0x1,%eax
c1008b4c:	eb 40                	jmp    c1008b8e <sync_dir_entry+0x434>
c1008b4e:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1008b52:	83 c0 01             	add    $0x1,%eax
c1008b55:	88 45 f6             	mov    %al,-0xa(%ebp)
c1008b58:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1008b5c:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1008b5f:	0f 87 74 ff ff ff    	ja     c1008ad9 <sync_dir_entry+0x37f>
c1008b65:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008b69:	83 c0 01             	add    $0x1,%eax
c1008b6c:	88 45 f7             	mov    %al,-0x9(%ebp)
c1008b6f:	80 7d f7 8b          	cmpb   $0x8b,-0x9(%ebp)
c1008b73:	0f 86 a4 fc ff ff    	jbe    c100881d <sync_dir_entry+0xc3>
c1008b79:	83 ec 0c             	sub    $0xc,%esp
c1008b7c:	68 85 c4 00 c1       	push   $0xc100c485
c1008b81:	e8 2c cc ff ff       	call   c10057b2 <printk>
c1008b86:	83 c4 10             	add    $0x10,%esp
c1008b89:	b8 00 00 00 00       	mov    $0x0,%eax
c1008b8e:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1008b91:	5b                   	pop    %ebx
c1008b92:	5f                   	pop    %edi
c1008b93:	5d                   	pop    %ebp
c1008b94:	c3                   	ret    

c1008b95 <delete_dir_entry>:
c1008b95:	55                   	push   %ebp
c1008b96:	89 e5                	mov    %esp,%ebp
c1008b98:	57                   	push   %edi
c1008b99:	53                   	push   %ebx
c1008b9a:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1008ba0:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008ba3:	8b 00                	mov    (%eax),%eax
c1008ba5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008ba8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008baf:	8d 95 98 fd ff ff    	lea    -0x268(%ebp),%edx
c1008bb5:	b8 00 00 00 00       	mov    $0x0,%eax
c1008bba:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1008bbf:	89 d7                	mov    %edx,%edi
c1008bc1:	f3 ab                	rep stos %eax,%es:(%edi)
c1008bc3:	eb 1a                	jmp    c1008bdf <delete_dir_entry+0x4a>
c1008bc5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008bc8:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008bcb:	83 c2 04             	add    $0x4,%edx
c1008bce:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1008bd1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008bd4:	89 94 85 98 fd ff ff 	mov    %edx,-0x268(%ebp,%eax,4)
c1008bdb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008bdf:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1008be3:	76 e0                	jbe    c1008bc5 <delete_dir_entry+0x30>
c1008be5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008be8:	8b 40 40             	mov    0x40(%eax),%eax
c1008beb:	85 c0                	test   %eax,%eax
c1008bed:	74 1e                	je     c1008c0d <delete_dir_entry+0x78>
c1008bef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008bf2:	8b 50 40             	mov    0x40(%eax),%edx
c1008bf5:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1008bfb:	83 c0 30             	add    $0x30,%eax
c1008bfe:	83 ec 04             	sub    $0x4,%esp
c1008c01:	6a 01                	push   $0x1
c1008c03:	52                   	push   %edx
c1008c04:	50                   	push   %eax
c1008c05:	e8 50 d4 ff ff       	call   c100605a <ide_read>
c1008c0a:	83 c4 10             	add    $0x10,%esp
c1008c0d:	8b 45 08             	mov    0x8(%ebp),%eax
c1008c10:	8b 40 10             	mov    0x10(%eax),%eax
c1008c13:	8b 40 30             	mov    0x30(%eax),%eax
c1008c16:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008c19:	b8 00 02 00 00       	mov    $0x200,%eax
c1008c1e:	ba 00 00 00 00       	mov    $0x0,%edx
c1008c23:	f7 75 e0             	divl   -0x20(%ebp)
c1008c26:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008c29:	8b 45 14             	mov    0x14(%ebp),%eax
c1008c2c:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008c2f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008c36:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1008c3a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008c41:	e9 d8 03 00 00       	jmp    c100901e <delete_dir_entry+0x489>
c1008c46:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1008c4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008c4d:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008c54:	85 c0                	test   %eax,%eax
c1008c56:	75 09                	jne    c1008c61 <delete_dir_entry+0xcc>
c1008c58:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008c5c:	e9 bd 03 00 00       	jmp    c100901e <delete_dir_entry+0x489>
c1008c61:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
c1008c65:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1008c69:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008c6c:	83 ec 04             	sub    $0x4,%esp
c1008c6f:	68 00 02 00 00       	push   $0x200
c1008c74:	6a 00                	push   $0x0
c1008c76:	ff 75 14             	pushl  0x14(%ebp)
c1008c79:	e8 2c 74 ff ff       	call   c10000aa <memset>
c1008c7e:	83 c4 10             	add    $0x10,%esp
c1008c81:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008c84:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008c8b:	83 ec 04             	sub    $0x4,%esp
c1008c8e:	6a 01                	push   $0x1
c1008c90:	50                   	push   %eax
c1008c91:	ff 75 14             	pushl  0x14(%ebp)
c1008c94:	e8 c1 d3 ff ff       	call   c100605a <ide_read>
c1008c99:	83 c4 10             	add    $0x10,%esp
c1008c9c:	e9 0d 01 00 00       	jmp    c1008dae <delete_dir_entry+0x219>
c1008ca1:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008ca5:	89 d0                	mov    %edx,%eax
c1008ca7:	01 c0                	add    %eax,%eax
c1008ca9:	01 d0                	add    %edx,%eax
c1008cab:	c1 e0 03             	shl    $0x3,%eax
c1008cae:	89 c2                	mov    %eax,%edx
c1008cb0:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008cb3:	01 d0                	add    %edx,%eax
c1008cb5:	8b 40 14             	mov    0x14(%eax),%eax
c1008cb8:	85 c0                	test   %eax,%eax
c1008cba:	0f 84 e4 00 00 00    	je     c1008da4 <delete_dir_entry+0x20f>
c1008cc0:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008cc4:	89 d0                	mov    %edx,%eax
c1008cc6:	01 c0                	add    %eax,%eax
c1008cc8:	01 d0                	add    %edx,%eax
c1008cca:	c1 e0 03             	shl    $0x3,%eax
c1008ccd:	89 c2                	mov    %eax,%edx
c1008ccf:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008cd2:	01 d0                	add    %edx,%eax
c1008cd4:	83 ec 08             	sub    $0x8,%esp
c1008cd7:	68 99 c4 00 c1       	push   $0xc100c499
c1008cdc:	50                   	push   %eax
c1008cdd:	e8 a1 74 ff ff       	call   c1000183 <strcmp>
c1008ce2:	83 c4 10             	add    $0x10,%esp
c1008ce5:	85 c0                	test   %eax,%eax
c1008ce7:	75 09                	jne    c1008cf2 <delete_dir_entry+0x15d>
c1008ce9:	c6 45 ed 01          	movb   $0x1,-0x13(%ebp)
c1008ced:	e9 b2 00 00 00       	jmp    c1008da4 <delete_dir_entry+0x20f>
c1008cf2:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008cf6:	89 d0                	mov    %edx,%eax
c1008cf8:	01 c0                	add    %eax,%eax
c1008cfa:	01 d0                	add    %edx,%eax
c1008cfc:	c1 e0 03             	shl    $0x3,%eax
c1008cff:	89 c2                	mov    %eax,%edx
c1008d01:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008d04:	01 d0                	add    %edx,%eax
c1008d06:	83 ec 08             	sub    $0x8,%esp
c1008d09:	68 99 c4 00 c1       	push   $0xc100c499
c1008d0e:	50                   	push   %eax
c1008d0f:	e8 6f 74 ff ff       	call   c1000183 <strcmp>
c1008d14:	83 c4 10             	add    $0x10,%esp
c1008d17:	85 c0                	test   %eax,%eax
c1008d19:	0f 84 85 00 00 00    	je     c1008da4 <delete_dir_entry+0x20f>
c1008d1f:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008d23:	89 d0                	mov    %edx,%eax
c1008d25:	01 c0                	add    %eax,%eax
c1008d27:	01 d0                	add    %edx,%eax
c1008d29:	c1 e0 03             	shl    $0x3,%eax
c1008d2c:	89 c2                	mov    %eax,%edx
c1008d2e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008d31:	01 d0                	add    %edx,%eax
c1008d33:	83 ec 08             	sub    $0x8,%esp
c1008d36:	68 9b c4 00 c1       	push   $0xc100c49b
c1008d3b:	50                   	push   %eax
c1008d3c:	e8 42 74 ff ff       	call   c1000183 <strcmp>
c1008d41:	83 c4 10             	add    $0x10,%esp
c1008d44:	85 c0                	test   %eax,%eax
c1008d46:	74 5c                	je     c1008da4 <delete_dir_entry+0x20f>
c1008d48:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1008d4c:	83 c0 01             	add    $0x1,%eax
c1008d4f:	88 45 ee             	mov    %al,-0x12(%ebp)
c1008d52:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008d56:	89 d0                	mov    %edx,%eax
c1008d58:	01 c0                	add    %eax,%eax
c1008d5a:	01 d0                	add    %edx,%eax
c1008d5c:	c1 e0 03             	shl    $0x3,%eax
c1008d5f:	89 c2                	mov    %eax,%edx
c1008d61:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008d64:	01 d0                	add    %edx,%eax
c1008d66:	8b 40 10             	mov    0x10(%eax),%eax
c1008d69:	39 45 10             	cmp    %eax,0x10(%ebp)
c1008d6c:	75 36                	jne    c1008da4 <delete_dir_entry+0x20f>
c1008d6e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1008d72:	74 19                	je     c1008d8d <delete_dir_entry+0x1f8>
c1008d74:	68 9e c4 00 c1       	push   $0xc100c49e
c1008d79:	68 a0 c5 00 c1       	push   $0xc100c5a0
c1008d7e:	68 10 01 00 00       	push   $0x110
c1008d83:	68 f0 c3 00 c1       	push   $0xc100c3f0
c1008d88:	e8 de 75 ff ff       	call   c100036b <__PANIC>
c1008d8d:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008d91:	89 d0                	mov    %edx,%eax
c1008d93:	01 c0                	add    %eax,%eax
c1008d95:	01 d0                	add    %edx,%eax
c1008d97:	c1 e0 03             	shl    $0x3,%eax
c1008d9a:	89 c2                	mov    %eax,%edx
c1008d9c:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008d9f:	01 d0                	add    %edx,%eax
c1008da1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008da4:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008da8:	83 c0 01             	add    $0x1,%eax
c1008dab:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008dae:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008db2:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1008db5:	0f 87 e6 fe ff ff    	ja     c1008ca1 <delete_dir_entry+0x10c>
c1008dbb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1008dbf:	75 09                	jne    c1008dca <delete_dir_entry+0x235>
c1008dc1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008dc5:	e9 54 02 00 00       	jmp    c100901e <delete_dir_entry+0x489>
c1008dca:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
c1008dce:	75 19                	jne    c1008de9 <delete_dir_entry+0x254>
c1008dd0:	68 b6 c4 00 c1       	push   $0xc100c4b6
c1008dd5:	68 a0 c5 00 c1       	push   $0xc100c5a0
c1008dda:	68 20 01 00 00       	push   $0x120
c1008ddf:	68 f0 c3 00 c1       	push   $0xc100c3f0
c1008de4:	e8 82 75 ff ff       	call   c100036b <__PANIC>
c1008de9:	80 7d ee 01          	cmpb   $0x1,-0x12(%ebp)
c1008ded:	0f 85 98 01 00 00    	jne    c1008f8b <delete_dir_entry+0x3f6>
c1008df3:	80 7d ed 00          	cmpb   $0x0,-0x13(%ebp)
c1008df7:	0f 85 8e 01 00 00    	jne    c1008f8b <delete_dir_entry+0x3f6>
c1008dfd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008e00:	8b 94 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%edx
c1008e07:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e0a:	8b 40 10             	mov    0x10(%eax),%eax
c1008e0d:	8b 40 28             	mov    0x28(%eax),%eax
c1008e10:	29 c2                	sub    %eax,%edx
c1008e12:	89 d0                	mov    %edx,%eax
c1008e14:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008e17:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008e1a:	c1 e8 03             	shr    $0x3,%eax
c1008e1d:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008e20:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008e23:	83 e0 07             	and    $0x7,%eax
c1008e26:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008e29:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e2c:	8b 50 18             	mov    0x18(%eax),%edx
c1008e2f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008e32:	01 d0                	add    %edx,%eax
c1008e34:	0f b6 00             	movzbl (%eax),%eax
c1008e37:	89 c2                	mov    %eax,%edx
c1008e39:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008e3c:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008e41:	89 c1                	mov    %eax,%ecx
c1008e43:	d3 e3                	shl    %cl,%ebx
c1008e45:	89 d8                	mov    %ebx,%eax
c1008e47:	f7 d0                	not    %eax
c1008e49:	89 d1                	mov    %edx,%ecx
c1008e4b:	21 c1                	and    %eax,%ecx
c1008e4d:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e50:	8b 50 18             	mov    0x18(%eax),%edx
c1008e53:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008e56:	01 d0                	add    %edx,%eax
c1008e58:	89 ca                	mov    %ecx,%edx
c1008e5a:	88 10                	mov    %dl,(%eax)
c1008e5c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008e61:	83 ec 04             	sub    $0x4,%esp
c1008e64:	6a 01                	push   $0x1
c1008e66:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008e69:	50                   	push   %eax
c1008e6a:	e8 cb 06 00 00       	call   c100953a <bitmap_sync>
c1008e6f:	83 c4 10             	add    $0x10,%esp
c1008e72:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1008e76:	77 15                	ja     c1008e8d <delete_dir_entry+0x2f8>
c1008e78:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008e7b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008e7e:	83 c2 04             	add    $0x4,%edx
c1008e81:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1008e88:	e9 2c 01 00 00       	jmp    c1008fb9 <delete_dir_entry+0x424>
c1008e8d:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1008e94:	c7 45 c8 0c 00 00 00 	movl   $0xc,-0x38(%ebp)
c1008e9b:	eb 12                	jmp    c1008eaf <delete_dir_entry+0x31a>
c1008e9d:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1008ea0:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008ea7:	85 c0                	test   %eax,%eax
c1008ea9:	74 04                	je     c1008eaf <delete_dir_entry+0x31a>
c1008eab:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008eaf:	81 7d c8 8b 00 00 00 	cmpl   $0x8b,-0x38(%ebp)
c1008eb6:	76 e5                	jbe    c1008e9d <delete_dir_entry+0x308>
c1008eb8:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1008ebc:	75 19                	jne    c1008ed7 <delete_dir_entry+0x342>
c1008ebe:	68 c9 c4 00 c1       	push   $0xc100c4c9
c1008ec3:	68 a0 c5 00 c1       	push   $0xc100c5a0
c1008ec8:	68 36 01 00 00       	push   $0x136
c1008ecd:	68 f0 c3 00 c1       	push   $0xc100c3f0
c1008ed2:	e8 94 74 ff ff       	call   c100036b <__PANIC>
c1008ed7:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1008edb:	76 31                	jbe    c1008f0e <delete_dir_entry+0x379>
c1008edd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008ee0:	c7 84 85 98 fd ff ff 	movl   $0x0,-0x268(%ebp,%eax,4)
c1008ee7:	00 00 00 00 
c1008eeb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008eee:	8b 50 40             	mov    0x40(%eax),%edx
c1008ef1:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1008ef7:	83 c0 30             	add    $0x30,%eax
c1008efa:	83 ec 04             	sub    $0x4,%esp
c1008efd:	6a 01                	push   $0x1
c1008eff:	52                   	push   %edx
c1008f00:	50                   	push   %eax
c1008f01:	e8 91 d1 ff ff       	call   c1006097 <ide_write>
c1008f06:	83 c4 10             	add    $0x10,%esp
c1008f09:	e9 ab 00 00 00       	jmp    c1008fb9 <delete_dir_entry+0x424>
c1008f0e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008f11:	8b 50 40             	mov    0x40(%eax),%edx
c1008f14:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f17:	8b 40 10             	mov    0x10(%eax),%eax
c1008f1a:	8b 40 28             	mov    0x28(%eax),%eax
c1008f1d:	29 c2                	sub    %eax,%edx
c1008f1f:	89 d0                	mov    %edx,%eax
c1008f21:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008f24:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008f27:	c1 e8 03             	shr    $0x3,%eax
c1008f2a:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008f2d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008f30:	83 e0 07             	and    $0x7,%eax
c1008f33:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008f36:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f39:	8b 50 18             	mov    0x18(%eax),%edx
c1008f3c:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008f3f:	01 d0                	add    %edx,%eax
c1008f41:	0f b6 00             	movzbl (%eax),%eax
c1008f44:	89 c2                	mov    %eax,%edx
c1008f46:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008f49:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008f4e:	89 c1                	mov    %eax,%ecx
c1008f50:	d3 e3                	shl    %cl,%ebx
c1008f52:	89 d8                	mov    %ebx,%eax
c1008f54:	f7 d0                	not    %eax
c1008f56:	89 d1                	mov    %edx,%ecx
c1008f58:	21 c1                	and    %eax,%ecx
c1008f5a:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f5d:	8b 50 18             	mov    0x18(%eax),%edx
c1008f60:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008f63:	01 d0                	add    %edx,%eax
c1008f65:	89 ca                	mov    %ecx,%edx
c1008f67:	88 10                	mov    %dl,(%eax)
c1008f69:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008f6e:	83 ec 04             	sub    $0x4,%esp
c1008f71:	6a 01                	push   $0x1
c1008f73:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008f76:	50                   	push   %eax
c1008f77:	e8 be 05 00 00       	call   c100953a <bitmap_sync>
c1008f7c:	83 c4 10             	add    $0x10,%esp
c1008f7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008f82:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1008f89:	eb 2e                	jmp    c1008fb9 <delete_dir_entry+0x424>
c1008f8b:	83 ec 04             	sub    $0x4,%esp
c1008f8e:	ff 75 e0             	pushl  -0x20(%ebp)
c1008f91:	6a 00                	push   $0x0
c1008f93:	ff 75 f0             	pushl  -0x10(%ebp)
c1008f96:	e8 0f 71 ff ff       	call   c10000aa <memset>
c1008f9b:	83 c4 10             	add    $0x10,%esp
c1008f9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008fa1:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008fa8:	83 ec 04             	sub    $0x4,%esp
c1008fab:	6a 01                	push   $0x1
c1008fad:	50                   	push   %eax
c1008fae:	ff 75 14             	pushl  0x14(%ebp)
c1008fb1:	e8 e1 d0 ff ff       	call   c1006097 <ide_write>
c1008fb6:	83 c4 10             	add    $0x10,%esp
c1008fb9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008fbc:	8b 40 04             	mov    0x4(%eax),%eax
c1008fbf:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c1008fc2:	76 19                	jbe    c1008fdd <delete_dir_entry+0x448>
c1008fc4:	68 e0 c4 00 c1       	push   $0xc100c4e0
c1008fc9:	68 a0 c5 00 c1       	push   $0xc100c5a0
c1008fce:	68 4d 01 00 00       	push   $0x14d
c1008fd3:	68 f0 c3 00 c1       	push   $0xc100c3f0
c1008fd8:	e8 8e 73 ff ff       	call   c100036b <__PANIC>
c1008fdd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008fe0:	8b 40 04             	mov    0x4(%eax),%eax
c1008fe3:	2b 45 e0             	sub    -0x20(%ebp),%eax
c1008fe6:	89 c2                	mov    %eax,%edx
c1008fe8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008feb:	89 50 04             	mov    %edx,0x4(%eax)
c1008fee:	83 ec 04             	sub    $0x4,%esp
c1008ff1:	68 00 04 00 00       	push   $0x400
c1008ff6:	6a 00                	push   $0x0
c1008ff8:	ff 75 14             	pushl  0x14(%ebp)
c1008ffb:	e8 aa 70 ff ff       	call   c10000aa <memset>
c1009000:	83 c4 10             	add    $0x10,%esp
c1009003:	83 ec 04             	sub    $0x4,%esp
c1009006:	ff 75 14             	pushl  0x14(%ebp)
c1009009:	ff 75 e4             	pushl  -0x1c(%ebp)
c100900c:	ff 75 08             	pushl  0x8(%ebp)
c100900f:	e8 44 15 00 00       	call   c100a558 <inode_sync>
c1009014:	83 c4 10             	add    $0x10,%esp
c1009017:	b8 01 00 00 00       	mov    $0x1,%eax
c100901c:	eb 12                	jmp    c1009030 <delete_dir_entry+0x49b>
c100901e:	81 7d f4 8b 00 00 00 	cmpl   $0x8b,-0xc(%ebp)
c1009025:	0f 86 1b fc ff ff    	jbe    c1008c46 <delete_dir_entry+0xb1>
c100902b:	b8 00 00 00 00       	mov    $0x0,%eax
c1009030:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1009033:	5b                   	pop    %ebx
c1009034:	5f                   	pop    %edi
c1009035:	5d                   	pop    %ebp
c1009036:	c3                   	ret    

c1009037 <dir_read>:
c1009037:	55                   	push   %ebp
c1009038:	89 e5                	mov    %esp,%ebp
c100903a:	57                   	push   %edi
c100903b:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1009041:	8b 45 08             	mov    0x8(%ebp),%eax
c1009044:	83 c0 08             	add    $0x8,%eax
c1009047:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100904a:	8b 45 08             	mov    0x8(%ebp),%eax
c100904d:	8b 00                	mov    (%eax),%eax
c100904f:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009052:	8d 95 a8 fd ff ff    	lea    -0x258(%ebp),%edx
c1009058:	b8 00 00 00 00       	mov    $0x0,%eax
c100905d:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1009062:	89 d7                	mov    %edx,%edi
c1009064:	f3 ab                	rep stos %eax,%es:(%edi)
c1009066:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
c100906d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1009074:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100907b:	eb 1a                	jmp    c1009097 <dir_read+0x60>
c100907d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009080:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009083:	83 c2 04             	add    $0x4,%edx
c1009086:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1009089:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100908c:	89 94 85 a8 fd ff ff 	mov    %edx,-0x258(%ebp,%eax,4)
c1009093:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1009097:	83 7d f0 0b          	cmpl   $0xb,-0x10(%ebp)
c100909b:	76 e0                	jbe    c100907d <dir_read+0x46>
c100909d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10090a0:	8b 40 40             	mov    0x40(%eax),%eax
c10090a3:	85 c0                	test   %eax,%eax
c10090a5:	74 25                	je     c10090cc <dir_read+0x95>
c10090a7:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10090aa:	8b 50 40             	mov    0x40(%eax),%edx
c10090ad:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
c10090b3:	83 c0 30             	add    $0x30,%eax
c10090b6:	83 ec 04             	sub    $0x4,%esp
c10090b9:	6a 01                	push   $0x1
c10090bb:	52                   	push   %edx
c10090bc:	50                   	push   %eax
c10090bd:	e8 98 cf ff ff       	call   c100605a <ide_read>
c10090c2:	83 c4 10             	add    $0x10,%esp
c10090c5:	c7 45 f4 8c 00 00 00 	movl   $0x8c,-0xc(%ebp)
c10090cc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10090d3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c10090da:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10090df:	8b 40 10             	mov    0x10(%eax),%eax
c10090e2:	8b 40 30             	mov    0x30(%eax),%eax
c10090e5:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10090e8:	b8 00 02 00 00       	mov    $0x200,%eax
c10090ed:	ba 00 00 00 00       	mov    $0x0,%edx
c10090f2:	f7 75 dc             	divl   -0x24(%ebp)
c10090f5:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10090f8:	e9 f9 00 00 00       	jmp    c10091f6 <dir_read+0x1bf>
c10090fd:	8b 45 08             	mov    0x8(%ebp),%eax
c1009100:	8b 50 04             	mov    0x4(%eax),%edx
c1009103:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009106:	8b 40 04             	mov    0x4(%eax),%eax
c1009109:	39 c2                	cmp    %eax,%edx
c100910b:	72 0a                	jb     c1009117 <dir_read+0xe0>
c100910d:	b8 00 00 00 00       	mov    $0x0,%eax
c1009112:	e9 f0 00 00 00       	jmp    c1009207 <dir_read+0x1d0>
c1009117:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100911a:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1009121:	85 c0                	test   %eax,%eax
c1009123:	75 09                	jne    c100912e <dir_read+0xf7>
c1009125:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1009129:	e9 c8 00 00 00       	jmp    c10091f6 <dir_read+0x1bf>
c100912e:	83 ec 04             	sub    $0x4,%esp
c1009131:	68 00 02 00 00       	push   $0x200
c1009136:	6a 00                	push   $0x0
c1009138:	ff 75 e4             	pushl  -0x1c(%ebp)
c100913b:	e8 6a 6f ff ff       	call   c10000aa <memset>
c1009140:	83 c4 10             	add    $0x10,%esp
c1009143:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009146:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c100914d:	83 ec 04             	sub    $0x4,%esp
c1009150:	6a 01                	push   $0x1
c1009152:	50                   	push   %eax
c1009153:	ff 75 e4             	pushl  -0x1c(%ebp)
c1009156:	e8 ff ce ff ff       	call   c100605a <ide_read>
c100915b:	83 c4 10             	add    $0x10,%esp
c100915e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1009165:	eb 7f                	jmp    c10091e6 <dir_read+0x1af>
c1009167:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100916a:	89 d0                	mov    %edx,%eax
c100916c:	01 c0                	add    %eax,%eax
c100916e:	01 d0                	add    %edx,%eax
c1009170:	c1 e0 03             	shl    $0x3,%eax
c1009173:	89 c2                	mov    %eax,%edx
c1009175:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009178:	01 d0                	add    %edx,%eax
c100917a:	8b 40 14             	mov    0x14(%eax),%eax
c100917d:	85 c0                	test   %eax,%eax
c100917f:	74 61                	je     c10091e2 <dir_read+0x1ab>
c1009181:	8b 45 08             	mov    0x8(%ebp),%eax
c1009184:	8b 40 04             	mov    0x4(%eax),%eax
c1009187:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c100918a:	73 0c                	jae    c1009198 <dir_read+0x161>
c100918c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100918f:	01 45 e8             	add    %eax,-0x18(%ebp)
c1009192:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1009196:	eb 4e                	jmp    c10091e6 <dir_read+0x1af>
c1009198:	8b 45 08             	mov    0x8(%ebp),%eax
c100919b:	8b 40 04             	mov    0x4(%eax),%eax
c100919e:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c10091a1:	74 19                	je     c10091bc <dir_read+0x185>
c10091a3:	68 04 c5 00 c1       	push   $0xc100c504
c10091a8:	68 b4 c5 00 c1       	push   $0xc100c5b4
c10091ad:	68 7f 01 00 00       	push   $0x17f
c10091b2:	68 f0 c3 00 c1       	push   $0xc100c3f0
c10091b7:	e8 af 71 ff ff       	call   c100036b <__PANIC>
c10091bc:	8b 45 08             	mov    0x8(%ebp),%eax
c10091bf:	8b 50 04             	mov    0x4(%eax),%edx
c10091c2:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10091c5:	01 c2                	add    %eax,%edx
c10091c7:	8b 45 08             	mov    0x8(%ebp),%eax
c10091ca:	89 50 04             	mov    %edx,0x4(%eax)
c10091cd:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10091d0:	89 d0                	mov    %edx,%eax
c10091d2:	01 c0                	add    %eax,%eax
c10091d4:	01 d0                	add    %edx,%eax
c10091d6:	c1 e0 03             	shl    $0x3,%eax
c10091d9:	89 c2                	mov    %eax,%edx
c10091db:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10091de:	01 d0                	add    %edx,%eax
c10091e0:	eb 25                	jmp    c1009207 <dir_read+0x1d0>
c10091e2:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10091e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10091e9:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c10091ec:	0f 82 75 ff ff ff    	jb     c1009167 <dir_read+0x130>
c10091f2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10091f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10091f9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c10091fc:	0f 82 fb fe ff ff    	jb     c10090fd <dir_read+0xc6>
c1009202:	b8 00 00 00 00       	mov    $0x0,%eax
c1009207:	8b 7d fc             	mov    -0x4(%ebp),%edi
c100920a:	c9                   	leave  
c100920b:	c3                   	ret    

c100920c <dir_is_empty>:
c100920c:	55                   	push   %ebp
c100920d:	89 e5                	mov    %esp,%ebp
c100920f:	83 ec 10             	sub    $0x10,%esp
c1009212:	8b 45 08             	mov    0x8(%ebp),%eax
c1009215:	8b 00                	mov    (%eax),%eax
c1009217:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100921a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100921d:	8b 50 04             	mov    0x4(%eax),%edx
c1009220:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009225:	8b 40 10             	mov    0x10(%eax),%eax
c1009228:	8b 40 30             	mov    0x30(%eax),%eax
c100922b:	01 c0                	add    %eax,%eax
c100922d:	39 c2                	cmp    %eax,%edx
c100922f:	0f 94 c0             	sete   %al
c1009232:	c9                   	leave  
c1009233:	c3                   	ret    

c1009234 <dir_remove>:
c1009234:	55                   	push   %ebp
c1009235:	89 e5                	mov    %esp,%ebp
c1009237:	83 ec 18             	sub    $0x18,%esp
c100923a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100923d:	8b 00                	mov    (%eax),%eax
c100923f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009242:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c1009249:	eb 2d                	jmp    c1009278 <dir_remove+0x44>
c100924b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100924e:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1009251:	83 c2 04             	add    $0x4,%edx
c1009254:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009257:	85 c0                	test   %eax,%eax
c1009259:	74 19                	je     c1009274 <dir_remove+0x40>
c100925b:	68 28 c5 00 c1       	push   $0xc100c528
c1009260:	68 c0 c5 00 c1       	push   $0xc100c5c0
c1009265:	68 96 01 00 00       	push   $0x196
c100926a:	68 f0 c3 00 c1       	push   $0xc100c3f0
c100926f:	e8 f7 70 ff ff       	call   c100036b <__PANIC>
c1009274:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1009278:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
c100927c:	7e cd                	jle    c100924b <dir_remove+0x17>
c100927e:	83 ec 08             	sub    $0x8,%esp
c1009281:	6a 02                	push   $0x2
c1009283:	68 00 04 00 00       	push   $0x400
c1009288:	e8 26 9a ff ff       	call   c1002cb3 <vmm_malloc>
c100928d:	83 c4 10             	add    $0x10,%esp
c1009290:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009293:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1009297:	75 17                	jne    c10092b0 <dir_remove+0x7c>
c1009299:	83 ec 0c             	sub    $0xc,%esp
c100929c:	68 54 c5 00 c1       	push   $0xc100c554
c10092a1:	e8 0c c5 ff ff       	call   c10057b2 <printk>
c10092a6:	83 c4 10             	add    $0x10,%esp
c10092a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10092ae:	eb 4a                	jmp    c10092fa <dir_remove+0xc6>
c10092b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10092b3:	8b 10                	mov    (%eax),%edx
c10092b5:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10092ba:	ff 75 ec             	pushl  -0x14(%ebp)
c10092bd:	52                   	push   %edx
c10092be:	ff 75 08             	pushl  0x8(%ebp)
c10092c1:	50                   	push   %eax
c10092c2:	e8 ce f8 ff ff       	call   c1008b95 <delete_dir_entry>
c10092c7:	83 c4 10             	add    $0x10,%esp
c10092ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10092cd:	8b 10                	mov    (%eax),%edx
c10092cf:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10092d4:	83 ec 08             	sub    $0x8,%esp
c10092d7:	52                   	push   %edx
c10092d8:	50                   	push   %eax
c10092d9:	e8 87 15 00 00       	call   c100a865 <inode_release>
c10092de:	83 c4 10             	add    $0x10,%esp
c10092e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10092e4:	83 ec 08             	sub    $0x8,%esp
c10092e7:	68 00 04 00 00       	push   $0x400
c10092ec:	50                   	push   %eax
c10092ed:	e8 e6 9a ff ff       	call   c1002dd8 <vmm_free>
c10092f2:	83 c4 10             	add    $0x10,%esp
c10092f5:	b8 00 00 00 00       	mov    $0x0,%eax
c10092fa:	c9                   	leave  
c10092fb:	c3                   	ret    

c10092fc <hash32>:
c10092fc:	55                   	push   %ebp
c10092fd:	89 e5                	mov    %esp,%ebp
c10092ff:	83 ec 10             	sub    $0x10,%esp
c1009302:	8b 45 08             	mov    0x8(%ebp),%eax
c1009305:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100930b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100930e:	b8 20 00 00 00       	mov    $0x20,%eax
c1009313:	2b 45 0c             	sub    0xc(%ebp),%eax
c1009316:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009319:	89 c1                	mov    %eax,%ecx
c100931b:	d3 ea                	shr    %cl,%edx
c100931d:	89 d0                	mov    %edx,%eax
c100931f:	c9                   	leave  
c1009320:	c3                   	ret    

c1009321 <get_free_slot_in_global>:
c1009321:	55                   	push   %ebp
c1009322:	89 e5                	mov    %esp,%ebp
c1009324:	83 ec 10             	sub    $0x10,%esp
c1009327:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
c100932e:	eb 1b                	jmp    c100934b <get_free_slot_in_global+0x2a>
c1009330:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009333:	89 d0                	mov    %edx,%eax
c1009335:	01 c0                	add    %eax,%eax
c1009337:	01 d0                	add    %edx,%eax
c1009339:	c1 e0 02             	shl    $0x2,%eax
c100933c:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1009341:	8b 00                	mov    (%eax),%eax
c1009343:	85 c0                	test   %eax,%eax
c1009345:	74 0c                	je     c1009353 <get_free_slot_in_global+0x32>
c1009347:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100934b:	83 7d fc 1f          	cmpl   $0x1f,-0x4(%ebp)
c100934f:	76 df                	jbe    c1009330 <get_free_slot_in_global+0xf>
c1009351:	eb 01                	jmp    c1009354 <get_free_slot_in_global+0x33>
c1009353:	90                   	nop
c1009354:	83 7d fc 20          	cmpl   $0x20,-0x4(%ebp)
c1009358:	75 07                	jne    c1009361 <get_free_slot_in_global+0x40>
c100935a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100935f:	eb 03                	jmp    c1009364 <get_free_slot_in_global+0x43>
c1009361:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1009364:	c9                   	leave  
c1009365:	c3                   	ret    

c1009366 <task_fd_install>:
c1009366:	55                   	push   %ebp
c1009367:	89 e5                	mov    %esp,%ebp
c1009369:	83 ec 10             	sub    $0x10,%esp
c100936c:	c6 45 ff 03          	movb   $0x3,-0x1(%ebp)
c1009370:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1009375:	0f be 55 ff          	movsbl -0x1(%ebp),%edx
c1009379:	83 c2 1c             	add    $0x1c,%edx
c100937c:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c1009380:	83 f8 ff             	cmp    $0xffffffff,%eax
c1009383:	75 15                	jne    c100939a <task_fd_install+0x34>
c1009385:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100938a:	0f be 4d ff          	movsbl -0x1(%ebp),%ecx
c100938e:	8b 55 08             	mov    0x8(%ebp),%edx
c1009391:	83 c1 1c             	add    $0x1c,%ecx
c1009394:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
c1009398:	eb 0c                	jmp    c10093a6 <task_fd_install+0x40>
c100939a:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
c100939e:	83 c0 01             	add    $0x1,%eax
c10093a1:	88 45 ff             	mov    %al,-0x1(%ebp)
c10093a4:	eb ca                	jmp    c1009370 <task_fd_install+0xa>
c10093a6:	0f be 45 ff          	movsbl -0x1(%ebp),%eax
c10093aa:	c9                   	leave  
c10093ab:	c3                   	ret    

c10093ac <inode_bitmap_alloc>:
c10093ac:	55                   	push   %ebp
c10093ad:	89 e5                	mov    %esp,%ebp
c10093af:	53                   	push   %ebx
c10093b0:	83 ec 10             	sub    $0x10,%esp
c10093b3:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c10093ba:	eb 04                	jmp    c10093c0 <inode_bitmap_alloc+0x14>
c10093bc:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10093c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10093c3:	8b 50 20             	mov    0x20(%eax),%edx
c10093c6:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10093c9:	01 d0                	add    %edx,%eax
c10093cb:	0f b6 00             	movzbl (%eax),%eax
c10093ce:	3c ff                	cmp    $0xff,%al
c10093d0:	75 0b                	jne    c10093dd <inode_bitmap_alloc+0x31>
c10093d2:	8b 45 08             	mov    0x8(%ebp),%eax
c10093d5:	8b 40 1c             	mov    0x1c(%eax),%eax
c10093d8:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10093db:	72 df                	jb     c10093bc <inode_bitmap_alloc+0x10>
c10093dd:	8b 45 08             	mov    0x8(%ebp),%eax
c10093e0:	8b 40 1c             	mov    0x1c(%eax),%eax
c10093e3:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10093e6:	75 07                	jne    c10093ef <inode_bitmap_alloc+0x43>
c10093e8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10093ed:	eb 77                	jmp    c1009466 <inode_bitmap_alloc+0xba>
c10093ef:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10093f6:	eb 04                	jmp    c10093fc <inode_bitmap_alloc+0x50>
c10093f8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10093fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10093ff:	ba 01 00 00 00       	mov    $0x1,%edx
c1009404:	89 c1                	mov    %eax,%ecx
c1009406:	d3 e2                	shl    %cl,%edx
c1009408:	89 d0                	mov    %edx,%eax
c100940a:	89 c1                	mov    %eax,%ecx
c100940c:	8b 45 08             	mov    0x8(%ebp),%eax
c100940f:	8b 50 20             	mov    0x20(%eax),%edx
c1009412:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009415:	01 d0                	add    %edx,%eax
c1009417:	0f b6 00             	movzbl (%eax),%eax
c100941a:	21 c8                	and    %ecx,%eax
c100941c:	84 c0                	test   %al,%al
c100941e:	75 d8                	jne    c10093f8 <inode_bitmap_alloc+0x4c>
c1009420:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009423:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c100942a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100942d:	01 d0                	add    %edx,%eax
c100942f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009432:	8b 45 08             	mov    0x8(%ebp),%eax
c1009435:	8b 50 20             	mov    0x20(%eax),%edx
c1009438:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100943b:	01 d0                	add    %edx,%eax
c100943d:	0f b6 00             	movzbl (%eax),%eax
c1009440:	89 c3                	mov    %eax,%ebx
c1009442:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009445:	ba 01 00 00 00       	mov    $0x1,%edx
c100944a:	89 c1                	mov    %eax,%ecx
c100944c:	d3 e2                	shl    %cl,%edx
c100944e:	89 d0                	mov    %edx,%eax
c1009450:	09 c3                	or     %eax,%ebx
c1009452:	89 d9                	mov    %ebx,%ecx
c1009454:	8b 45 08             	mov    0x8(%ebp),%eax
c1009457:	8b 50 20             	mov    0x20(%eax),%edx
c100945a:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100945d:	01 d0                	add    %edx,%eax
c100945f:	89 ca                	mov    %ecx,%edx
c1009461:	88 10                	mov    %dl,(%eax)
c1009463:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009466:	83 c4 10             	add    $0x10,%esp
c1009469:	5b                   	pop    %ebx
c100946a:	5d                   	pop    %ebp
c100946b:	c3                   	ret    

c100946c <block_bitmap_alloc>:
c100946c:	55                   	push   %ebp
c100946d:	89 e5                	mov    %esp,%ebp
c100946f:	53                   	push   %ebx
c1009470:	83 ec 10             	sub    $0x10,%esp
c1009473:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c100947a:	eb 04                	jmp    c1009480 <block_bitmap_alloc+0x14>
c100947c:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1009480:	8b 45 08             	mov    0x8(%ebp),%eax
c1009483:	8b 50 18             	mov    0x18(%eax),%edx
c1009486:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009489:	01 d0                	add    %edx,%eax
c100948b:	0f b6 00             	movzbl (%eax),%eax
c100948e:	3c ff                	cmp    $0xff,%al
c1009490:	75 0b                	jne    c100949d <block_bitmap_alloc+0x31>
c1009492:	8b 45 08             	mov    0x8(%ebp),%eax
c1009495:	8b 40 14             	mov    0x14(%eax),%eax
c1009498:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c100949b:	72 df                	jb     c100947c <block_bitmap_alloc+0x10>
c100949d:	8b 45 08             	mov    0x8(%ebp),%eax
c10094a0:	8b 40 14             	mov    0x14(%eax),%eax
c10094a3:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10094a6:	75 0a                	jne    c10094b2 <block_bitmap_alloc+0x46>
c10094a8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10094ad:	e9 82 00 00 00       	jmp    c1009534 <block_bitmap_alloc+0xc8>
c10094b2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10094b9:	eb 04                	jmp    c10094bf <block_bitmap_alloc+0x53>
c10094bb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10094bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10094c2:	ba 01 00 00 00       	mov    $0x1,%edx
c10094c7:	89 c1                	mov    %eax,%ecx
c10094c9:	d3 e2                	shl    %cl,%edx
c10094cb:	89 d0                	mov    %edx,%eax
c10094cd:	89 c1                	mov    %eax,%ecx
c10094cf:	8b 45 08             	mov    0x8(%ebp),%eax
c10094d2:	8b 50 18             	mov    0x18(%eax),%edx
c10094d5:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10094d8:	01 d0                	add    %edx,%eax
c10094da:	0f b6 00             	movzbl (%eax),%eax
c10094dd:	21 c8                	and    %ecx,%eax
c10094df:	84 c0                	test   %al,%al
c10094e1:	75 d8                	jne    c10094bb <block_bitmap_alloc+0x4f>
c10094e3:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10094e6:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c10094ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10094f0:	01 d0                	add    %edx,%eax
c10094f2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10094f5:	8b 45 08             	mov    0x8(%ebp),%eax
c10094f8:	8b 50 18             	mov    0x18(%eax),%edx
c10094fb:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10094fe:	01 d0                	add    %edx,%eax
c1009500:	0f b6 00             	movzbl (%eax),%eax
c1009503:	89 c3                	mov    %eax,%ebx
c1009505:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009508:	ba 01 00 00 00       	mov    $0x1,%edx
c100950d:	89 c1                	mov    %eax,%ecx
c100950f:	d3 e2                	shl    %cl,%edx
c1009511:	89 d0                	mov    %edx,%eax
c1009513:	09 c3                	or     %eax,%ebx
c1009515:	89 d9                	mov    %ebx,%ecx
c1009517:	8b 45 08             	mov    0x8(%ebp),%eax
c100951a:	8b 50 18             	mov    0x18(%eax),%edx
c100951d:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009520:	01 d0                	add    %edx,%eax
c1009522:	89 ca                	mov    %ecx,%edx
c1009524:	88 10                	mov    %dl,(%eax)
c1009526:	8b 45 08             	mov    0x8(%ebp),%eax
c1009529:	8b 40 10             	mov    0x10(%eax),%eax
c100952c:	8b 50 28             	mov    0x28(%eax),%edx
c100952f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009532:	01 d0                	add    %edx,%eax
c1009534:	83 c4 10             	add    $0x10,%esp
c1009537:	5b                   	pop    %ebx
c1009538:	5d                   	pop    %ebp
c1009539:	c3                   	ret    

c100953a <bitmap_sync>:
c100953a:	55                   	push   %ebp
c100953b:	89 e5                	mov    %esp,%ebp
c100953d:	83 ec 28             	sub    $0x28,%esp
c1009540:	8b 45 10             	mov    0x10(%ebp),%eax
c1009543:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1009546:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009549:	c1 e8 0c             	shr    $0xc,%eax
c100954c:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100954f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009552:	c1 e0 09             	shl    $0x9,%eax
c1009555:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009558:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100955c:	85 c0                	test   %eax,%eax
c100955e:	74 07                	je     c1009567 <bitmap_sync+0x2d>
c1009560:	83 f8 01             	cmp    $0x1,%eax
c1009563:	74 23                	je     c1009588 <bitmap_sync+0x4e>
c1009565:	eb 41                	jmp    c10095a8 <bitmap_sync+0x6e>
c1009567:	8b 45 08             	mov    0x8(%ebp),%eax
c100956a:	8b 40 10             	mov    0x10(%eax),%eax
c100956d:	8b 50 18             	mov    0x18(%eax),%edx
c1009570:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009573:	01 d0                	add    %edx,%eax
c1009575:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009578:	8b 45 08             	mov    0x8(%ebp),%eax
c100957b:	8b 50 20             	mov    0x20(%eax),%edx
c100957e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009581:	01 d0                	add    %edx,%eax
c1009583:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009586:	eb 20                	jmp    c10095a8 <bitmap_sync+0x6e>
c1009588:	8b 45 08             	mov    0x8(%ebp),%eax
c100958b:	8b 40 10             	mov    0x10(%eax),%eax
c100958e:	8b 50 10             	mov    0x10(%eax),%edx
c1009591:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009594:	01 d0                	add    %edx,%eax
c1009596:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009599:	8b 45 08             	mov    0x8(%ebp),%eax
c100959c:	8b 50 18             	mov    0x18(%eax),%edx
c100959f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10095a2:	01 d0                	add    %edx,%eax
c10095a4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10095a7:	90                   	nop
c10095a8:	83 ec 04             	sub    $0x4,%esp
c10095ab:	6a 01                	push   $0x1
c10095ad:	ff 75 f4             	pushl  -0xc(%ebp)
c10095b0:	ff 75 f0             	pushl  -0x10(%ebp)
c10095b3:	e8 df ca ff ff       	call   c1006097 <ide_write>
c10095b8:	83 c4 10             	add    $0x10,%esp
c10095bb:	90                   	nop
c10095bc:	c9                   	leave  
c10095bd:	c3                   	ret    

c10095be <file_create>:
c10095be:	55                   	push   %ebp
c10095bf:	89 e5                	mov    %esp,%ebp
c10095c1:	83 ec 58             	sub    $0x58,%esp
c10095c4:	8b 45 10             	mov    0x10(%ebp),%eax
c10095c7:	88 45 b4             	mov    %al,-0x4c(%ebp)
c10095ca:	83 ec 08             	sub    $0x8,%esp
c10095cd:	6a 02                	push   $0x2
c10095cf:	68 00 04 00 00       	push   $0x400
c10095d4:	e8 da 96 ff ff       	call   c1002cb3 <vmm_malloc>
c10095d9:	83 c4 10             	add    $0x10,%esp
c10095dc:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10095df:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10095e3:	75 1a                	jne    c10095ff <file_create+0x41>
c10095e5:	83 ec 0c             	sub    $0xc,%esp
c10095e8:	68 cc c5 00 c1       	push   $0xc100c5cc
c10095ed:	e8 c0 c1 ff ff       	call   c10057b2 <printk>
c10095f2:	83 c4 10             	add    $0x10,%esp
c10095f5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10095fa:	e9 9f 02 00 00       	jmp    c100989e <file_create+0x2e0>
c10095ff:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1009603:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009608:	83 ec 0c             	sub    $0xc,%esp
c100960b:	50                   	push   %eax
c100960c:	e8 9b fd ff ff       	call   c10093ac <inode_bitmap_alloc>
c1009611:	83 c4 10             	add    $0x10,%esp
c1009614:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009617:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c100961b:	75 1a                	jne    c1009637 <file_create+0x79>
c100961d:	83 ec 0c             	sub    $0xc,%esp
c1009620:	68 fc c5 00 c1       	push   $0xc100c5fc
c1009625:	e8 88 c1 ff ff       	call   c10057b2 <printk>
c100962a:	83 c4 10             	add    $0x10,%esp
c100962d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009632:	e9 67 02 00 00       	jmp    c100989e <file_create+0x2e0>
c1009637:	83 ec 08             	sub    $0x8,%esp
c100963a:	6a 02                	push   $0x2
c100963c:	6a 44                	push   $0x44
c100963e:	e8 70 96 ff ff       	call   c1002cb3 <vmm_malloc>
c1009643:	83 c4 10             	add    $0x10,%esp
c1009646:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1009649:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c100964d:	75 19                	jne    c1009668 <file_create+0xaa>
c100964f:	83 ec 0c             	sub    $0xc,%esp
c1009652:	68 24 c6 00 c1       	push   $0xc100c624
c1009657:	e8 56 c1 ff ff       	call   c10057b2 <printk>
c100965c:	83 c4 10             	add    $0x10,%esp
c100965f:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1009663:	e9 88 01 00 00       	jmp    c10097f0 <file_create+0x232>
c1009668:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100966b:	83 ec 08             	sub    $0x8,%esp
c100966e:	ff 75 e4             	pushl  -0x1c(%ebp)
c1009671:	50                   	push   %eax
c1009672:	e8 b3 14 00 00       	call   c100ab2a <inode_init>
c1009677:	83 c4 10             	add    $0x10,%esp
c100967a:	e8 a2 fc ff ff       	call   c1009321 <get_free_slot_in_global>
c100967f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009682:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1009686:	75 19                	jne    c10096a1 <file_create+0xe3>
c1009688:	83 ec 0c             	sub    $0xc,%esp
c100968b:	68 4f c6 00 c1       	push   $0xc100c64f
c1009690:	e8 1d c1 ff ff       	call   c10057b2 <printk>
c1009695:	83 c4 10             	add    $0x10,%esp
c1009698:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c100969c:	e9 4f 01 00 00       	jmp    c10097f0 <file_create+0x232>
c10096a1:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10096a4:	89 d0                	mov    %edx,%eax
c10096a6:	01 c0                	add    %eax,%eax
c10096a8:	01 d0                	add    %edx,%eax
c10096aa:	c1 e0 02             	shl    $0x2,%eax
c10096ad:	8d 90 48 42 a1 c1    	lea    -0x3e5ebdb8(%eax),%edx
c10096b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10096b6:	89 02                	mov    %eax,(%edx)
c10096b8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10096bb:	89 d0                	mov    %edx,%eax
c10096bd:	01 c0                	add    %eax,%eax
c10096bf:	01 d0                	add    %edx,%eax
c10096c1:	c1 e0 02             	shl    $0x2,%eax
c10096c4:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10096c9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10096cf:	0f b6 4d b4          	movzbl -0x4c(%ebp),%ecx
c10096d3:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10096d6:	89 d0                	mov    %edx,%eax
c10096d8:	01 c0                	add    %eax,%eax
c10096da:	01 d0                	add    %edx,%eax
c10096dc:	c1 e0 02             	shl    $0x2,%eax
c10096df:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c10096e4:	89 08                	mov    %ecx,(%eax)
c10096e6:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10096e9:	89 d0                	mov    %edx,%eax
c10096eb:	01 c0                	add    %eax,%eax
c10096ed:	01 d0                	add    %edx,%eax
c10096ef:	c1 e0 02             	shl    $0x2,%eax
c10096f2:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10096f7:	8b 00                	mov    (%eax),%eax
c10096f9:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c10096fd:	83 ec 04             	sub    $0x4,%esp
c1009700:	6a 18                	push   $0x18
c1009702:	6a 00                	push   $0x0
c1009704:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1009707:	50                   	push   %eax
c1009708:	e8 9d 69 ff ff       	call   c10000aa <memset>
c100970d:	83 c4 10             	add    $0x10,%esp
c1009710:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009713:	8d 55 c4             	lea    -0x3c(%ebp),%edx
c1009716:	52                   	push   %edx
c1009717:	6a 01                	push   $0x1
c1009719:	50                   	push   %eax
c100971a:	ff 75 0c             	pushl  0xc(%ebp)
c100971d:	e8 cc ef ff ff       	call   c10086ee <create_dir_entry>
c1009722:	83 c4 10             	add    $0x10,%esp
c1009725:	83 ec 04             	sub    $0x4,%esp
c1009728:	ff 75 ec             	pushl  -0x14(%ebp)
c100972b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c100972e:	50                   	push   %eax
c100972f:	ff 75 08             	pushl  0x8(%ebp)
c1009732:	e8 23 f0 ff ff       	call   c100875a <sync_dir_entry>
c1009737:	83 c4 10             	add    $0x10,%esp
c100973a:	85 c0                	test   %eax,%eax
c100973c:	75 19                	jne    c1009757 <file_create+0x199>
c100973e:	83 ec 0c             	sub    $0xc,%esp
c1009741:	68 68 c6 00 c1       	push   $0xc100c668
c1009746:	e8 67 c0 ff ff       	call   c10057b2 <printk>
c100974b:	83 c4 10             	add    $0x10,%esp
c100974e:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c1009752:	e9 99 00 00 00       	jmp    c10097f0 <file_create+0x232>
c1009757:	83 ec 04             	sub    $0x4,%esp
c100975a:	68 00 04 00 00       	push   $0x400
c100975f:	6a 00                	push   $0x0
c1009761:	ff 75 ec             	pushl  -0x14(%ebp)
c1009764:	e8 41 69 ff ff       	call   c10000aa <memset>
c1009769:	83 c4 10             	add    $0x10,%esp
c100976c:	8b 45 08             	mov    0x8(%ebp),%eax
c100976f:	8b 10                	mov    (%eax),%edx
c1009771:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009776:	83 ec 04             	sub    $0x4,%esp
c1009779:	ff 75 ec             	pushl  -0x14(%ebp)
c100977c:	52                   	push   %edx
c100977d:	50                   	push   %eax
c100977e:	e8 d5 0d 00 00       	call   c100a558 <inode_sync>
c1009783:	83 c4 10             	add    $0x10,%esp
c1009786:	83 ec 04             	sub    $0x4,%esp
c1009789:	68 00 04 00 00       	push   $0x400
c100978e:	6a 00                	push   $0x0
c1009790:	ff 75 ec             	pushl  -0x14(%ebp)
c1009793:	e8 12 69 ff ff       	call   c10000aa <memset>
c1009798:	83 c4 10             	add    $0x10,%esp
c100979b:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10097a0:	83 ec 04             	sub    $0x4,%esp
c10097a3:	ff 75 ec             	pushl  -0x14(%ebp)
c10097a6:	ff 75 e4             	pushl  -0x1c(%ebp)
c10097a9:	50                   	push   %eax
c10097aa:	e8 a9 0d 00 00       	call   c100a558 <inode_sync>
c10097af:	83 c4 10             	add    $0x10,%esp
c10097b2:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10097b5:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10097ba:	83 ec 04             	sub    $0x4,%esp
c10097bd:	6a 00                	push   $0x0
c10097bf:	52                   	push   %edx
c10097c0:	50                   	push   %eax
c10097c1:	e8 74 fd ff ff       	call   c100953a <bitmap_sync>
c10097c6:	83 c4 10             	add    $0x10,%esp
c10097c9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10097cc:	83 ec 08             	sub    $0x8,%esp
c10097cf:	68 00 04 00 00       	push   $0x400
c10097d4:	50                   	push   %eax
c10097d5:	e8 fe 95 ff ff       	call   c1002dd8 <vmm_free>
c10097da:	83 c4 10             	add    $0x10,%esp
c10097dd:	83 ec 0c             	sub    $0xc,%esp
c10097e0:	ff 75 f0             	pushl  -0x10(%ebp)
c10097e3:	e8 7e fb ff ff       	call   c1009366 <task_fd_install>
c10097e8:	83 c4 10             	add    $0x10,%esp
c10097eb:	e9 ae 00 00 00       	jmp    c100989e <file_create+0x2e0>
c10097f0:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10097f4:	83 f8 03             	cmp    $0x3,%eax
c10097f7:	74 15                	je     c100980e <file_create+0x250>
c10097f9:	83 f8 03             	cmp    $0x3,%eax
c10097fc:	0f 8f 83 00 00 00    	jg     c1009885 <file_create+0x2c7>
c1009802:	83 f8 01             	cmp    $0x1,%eax
c1009805:	74 39                	je     c1009840 <file_create+0x282>
c1009807:	83 f8 02             	cmp    $0x2,%eax
c100980a:	74 23                	je     c100982f <file_create+0x271>
c100980c:	eb 77                	jmp    c1009885 <file_create+0x2c7>
c100980e:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009811:	89 d0                	mov    %edx,%eax
c1009813:	01 c0                	add    %eax,%eax
c1009815:	01 d0                	add    %edx,%eax
c1009817:	c1 e0 02             	shl    $0x2,%eax
c100981a:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100981f:	83 ec 04             	sub    $0x4,%esp
c1009822:	6a 0c                	push   $0xc
c1009824:	6a 00                	push   $0x0
c1009826:	50                   	push   %eax
c1009827:	e8 7e 68 ff ff       	call   c10000aa <memset>
c100982c:	83 c4 10             	add    $0x10,%esp
c100982f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009832:	83 ec 08             	sub    $0x8,%esp
c1009835:	6a 44                	push   $0x44
c1009837:	50                   	push   %eax
c1009838:	e8 9b 95 ff ff       	call   c1002dd8 <vmm_free>
c100983d:	83 c4 10             	add    $0x10,%esp
c1009840:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009843:	8d 50 07             	lea    0x7(%eax),%edx
c1009846:	85 c0                	test   %eax,%eax
c1009848:	0f 48 c2             	cmovs  %edx,%eax
c100984b:	c1 f8 03             	sar    $0x3,%eax
c100984e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009851:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009854:	99                   	cltd   
c1009855:	c1 ea 1d             	shr    $0x1d,%edx
c1009858:	01 d0                	add    %edx,%eax
c100985a:	83 e0 07             	and    $0x7,%eax
c100985d:	29 d0                	sub    %edx,%eax
c100985f:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1009862:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009867:	8b 50 20             	mov    0x20(%eax),%edx
c100986a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100986d:	01 d0                	add    %edx,%eax
c100986f:	0f b6 10             	movzbl (%eax),%edx
c1009872:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009877:	8b 48 20             	mov    0x20(%eax),%ecx
c100987a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100987d:	01 c8                	add    %ecx,%eax
c100987f:	83 e2 fe             	and    $0xfffffffe,%edx
c1009882:	88 10                	mov    %dl,(%eax)
c1009884:	90                   	nop
c1009885:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009888:	83 ec 08             	sub    $0x8,%esp
c100988b:	68 00 04 00 00       	push   $0x400
c1009890:	50                   	push   %eax
c1009891:	e8 42 95 ff ff       	call   c1002dd8 <vmm_free>
c1009896:	83 c4 10             	add    $0x10,%esp
c1009899:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100989e:	c9                   	leave  
c100989f:	c3                   	ret    

c10098a0 <file_open>:
c10098a0:	55                   	push   %ebp
c10098a1:	89 e5                	mov    %esp,%ebp
c10098a3:	83 ec 28             	sub    $0x28,%esp
c10098a6:	8b 45 0c             	mov    0xc(%ebp),%eax
c10098a9:	88 45 e4             	mov    %al,-0x1c(%ebp)
c10098ac:	e8 70 fa ff ff       	call   c1009321 <get_free_slot_in_global>
c10098b1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10098b4:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c10098b8:	75 1a                	jne    c10098d4 <file_open+0x34>
c10098ba:	83 ec 0c             	sub    $0xc,%esp
c10098bd:	68 4f c6 00 c1       	push   $0xc100c64f
c10098c2:	e8 eb be ff ff       	call   c10057b2 <printk>
c10098c7:	83 c4 10             	add    $0x10,%esp
c10098ca:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10098cf:	e9 e1 00 00 00       	jmp    c10099b5 <file_open+0x115>
c10098d4:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10098d9:	83 ec 08             	sub    $0x8,%esp
c10098dc:	ff 75 08             	pushl  0x8(%ebp)
c10098df:	50                   	push   %eax
c10098e0:	e8 94 0d 00 00       	call   c100a679 <inode_open>
c10098e5:	83 c4 10             	add    $0x10,%esp
c10098e8:	89 c1                	mov    %eax,%ecx
c10098ea:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10098ed:	89 d0                	mov    %edx,%eax
c10098ef:	01 c0                	add    %eax,%eax
c10098f1:	01 d0                	add    %edx,%eax
c10098f3:	c1 e0 02             	shl    $0x2,%eax
c10098f6:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10098fb:	89 08                	mov    %ecx,(%eax)
c10098fd:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1009900:	89 d0                	mov    %edx,%eax
c1009902:	01 c0                	add    %eax,%eax
c1009904:	01 d0                	add    %edx,%eax
c1009906:	c1 e0 02             	shl    $0x2,%eax
c1009909:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100990e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1009914:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
c1009918:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100991b:	89 d0                	mov    %edx,%eax
c100991d:	01 c0                	add    %eax,%eax
c100991f:	01 d0                	add    %edx,%eax
c1009921:	c1 e0 02             	shl    $0x2,%eax
c1009924:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c1009929:	89 08                	mov    %ecx,(%eax)
c100992b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100992e:	89 d0                	mov    %edx,%eax
c1009930:	01 c0                	add    %eax,%eax
c1009932:	01 d0                	add    %edx,%eax
c1009934:	c1 e0 02             	shl    $0x2,%eax
c1009937:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100993c:	8b 00                	mov    (%eax),%eax
c100993e:	83 c0 0c             	add    $0xc,%eax
c1009941:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009944:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009948:	83 e0 01             	and    $0x1,%eax
c100994b:	85 c0                	test   %eax,%eax
c100994d:	75 0b                	jne    c100995a <file_open+0xba>
c100994f:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009953:	83 e0 02             	and    $0x2,%eax
c1009956:	85 c0                	test   %eax,%eax
c1009958:	74 4d                	je     c10099a7 <file_open+0x107>
c100995a:	e8 4c 74 ff ff       	call   c1000dab <intr_save>
c100995f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009962:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009965:	0f b6 00             	movzbl (%eax),%eax
c1009968:	84 c0                	test   %al,%al
c100996a:	75 16                	jne    c1009982 <file_open+0xe2>
c100996c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100996f:	c6 00 01             	movb   $0x1,(%eax)
c1009972:	83 ec 0c             	sub    $0xc,%esp
c1009975:	ff 75 ec             	pushl  -0x14(%ebp)
c1009978:	e8 41 74 ff ff       	call   c1000dbe <intr_restore>
c100997d:	83 c4 10             	add    $0x10,%esp
c1009980:	eb 25                	jmp    c10099a7 <file_open+0x107>
c1009982:	83 ec 0c             	sub    $0xc,%esp
c1009985:	ff 75 ec             	pushl  -0x14(%ebp)
c1009988:	e8 31 74 ff ff       	call   c1000dbe <intr_restore>
c100998d:	83 c4 10             	add    $0x10,%esp
c1009990:	83 ec 0c             	sub    $0xc,%esp
c1009993:	68 88 c6 00 c1       	push   $0xc100c688
c1009998:	e8 15 be ff ff       	call   c10057b2 <printk>
c100999d:	83 c4 10             	add    $0x10,%esp
c10099a0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10099a5:	eb 0e                	jmp    c10099b5 <file_open+0x115>
c10099a7:	83 ec 0c             	sub    $0xc,%esp
c10099aa:	ff 75 f4             	pushl  -0xc(%ebp)
c10099ad:	e8 b4 f9 ff ff       	call   c1009366 <task_fd_install>
c10099b2:	83 c4 10             	add    $0x10,%esp
c10099b5:	c9                   	leave  
c10099b6:	c3                   	ret    

c10099b7 <file_close>:
c10099b7:	55                   	push   %ebp
c10099b8:	89 e5                	mov    %esp,%ebp
c10099ba:	83 ec 08             	sub    $0x8,%esp
c10099bd:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10099c1:	75 07                	jne    c10099ca <file_close+0x13>
c10099c3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10099c8:	eb 2b                	jmp    c10099f5 <file_close+0x3e>
c10099ca:	8b 45 08             	mov    0x8(%ebp),%eax
c10099cd:	8b 40 08             	mov    0x8(%eax),%eax
c10099d0:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c10099d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10099d7:	8b 40 08             	mov    0x8(%eax),%eax
c10099da:	83 ec 0c             	sub    $0xc,%esp
c10099dd:	50                   	push   %eax
c10099de:	e8 6c 0d 00 00       	call   c100a74f <inode_close>
c10099e3:	83 c4 10             	add    $0x10,%esp
c10099e6:	8b 45 08             	mov    0x8(%ebp),%eax
c10099e9:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c10099f0:	b8 00 00 00 00       	mov    $0x0,%eax
c10099f5:	c9                   	leave  
c10099f6:	c3                   	ret    

c10099f7 <file_write>:
c10099f7:	55                   	push   %ebp
c10099f8:	89 e5                	mov    %esp,%ebp
c10099fa:	83 ec 58             	sub    $0x58,%esp
c10099fd:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a00:	8b 40 08             	mov    0x8(%eax),%eax
c1009a03:	8b 50 04             	mov    0x4(%eax),%edx
c1009a06:	8b 45 10             	mov    0x10(%ebp),%eax
c1009a09:	01 d0                	add    %edx,%eax
c1009a0b:	3d 00 18 01 00       	cmp    $0x11800,%eax
c1009a10:	76 1a                	jbe    c1009a2c <file_write+0x35>
c1009a12:	83 ec 0c             	sub    $0xc,%esp
c1009a15:	68 b4 c6 00 c1       	push   $0xc100c6b4
c1009a1a:	e8 93 bd ff ff       	call   c10057b2 <printk>
c1009a1f:	83 c4 10             	add    $0x10,%esp
c1009a22:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009a27:	e9 2b 07 00 00       	jmp    c100a157 <file_write+0x760>
c1009a2c:	83 ec 08             	sub    $0x8,%esp
c1009a2f:	6a 02                	push   $0x2
c1009a31:	68 00 02 00 00       	push   $0x200
c1009a36:	e8 78 92 ff ff       	call   c1002cb3 <vmm_malloc>
c1009a3b:	83 c4 10             	add    $0x10,%esp
c1009a3e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009a41:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c1009a45:	75 1a                	jne    c1009a61 <file_write+0x6a>
c1009a47:	83 ec 0c             	sub    $0xc,%esp
c1009a4a:	68 ec c6 00 c1       	push   $0xc100c6ec
c1009a4f:	e8 5e bd ff ff       	call   c10057b2 <printk>
c1009a54:	83 c4 10             	add    $0x10,%esp
c1009a57:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009a5c:	e9 f6 06 00 00       	jmp    c100a157 <file_write+0x760>
c1009a61:	83 ec 08             	sub    $0x8,%esp
c1009a64:	6a 02                	push   $0x2
c1009a66:	68 30 02 00 00       	push   $0x230
c1009a6b:	e8 43 92 ff ff       	call   c1002cb3 <vmm_malloc>
c1009a70:	83 c4 10             	add    $0x10,%esp
c1009a73:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1009a76:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c1009a7a:	75 1a                	jne    c1009a96 <file_write+0x9f>
c1009a7c:	83 ec 0c             	sub    $0xc,%esp
c1009a7f:	68 18 c7 00 c1       	push   $0xc100c718
c1009a84:	e8 29 bd ff ff       	call   c10057b2 <printk>
c1009a89:	83 c4 10             	add    $0x10,%esp
c1009a8c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009a91:	e9 c1 06 00 00       	jmp    c100a157 <file_write+0x760>
c1009a96:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009a99:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009a9c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1009aa3:	8b 45 10             	mov    0x10(%ebp),%eax
c1009aa6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009aa9:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1009ab0:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
c1009ab7:	8b 45 08             	mov    0x8(%ebp),%eax
c1009aba:	8b 40 08             	mov    0x8(%eax),%eax
c1009abd:	8b 40 10             	mov    0x10(%eax),%eax
c1009ac0:	85 c0                	test   %eax,%eax
c1009ac2:	0f 85 8a 00 00 00    	jne    c1009b52 <file_write+0x15b>
c1009ac8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009acd:	83 ec 0c             	sub    $0xc,%esp
c1009ad0:	50                   	push   %eax
c1009ad1:	e8 96 f9 ff ff       	call   c100946c <block_bitmap_alloc>
c1009ad6:	83 c4 10             	add    $0x10,%esp
c1009ad9:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009adc:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009ae0:	75 1a                	jne    c1009afc <file_write+0x105>
c1009ae2:	83 ec 0c             	sub    $0xc,%esp
c1009ae5:	68 48 c7 00 c1       	push   $0xc100c748
c1009aea:	e8 c3 bc ff ff       	call   c10057b2 <printk>
c1009aef:	83 c4 10             	add    $0x10,%esp
c1009af2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009af7:	e9 5b 06 00 00       	jmp    c100a157 <file_write+0x760>
c1009afc:	8b 45 08             	mov    0x8(%ebp),%eax
c1009aff:	8b 40 08             	mov    0x8(%eax),%eax
c1009b02:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009b05:	89 50 10             	mov    %edx,0x10(%eax)
c1009b08:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009b0b:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009b10:	8b 40 10             	mov    0x10(%eax),%eax
c1009b13:	8b 40 28             	mov    0x28(%eax),%eax
c1009b16:	29 c2                	sub    %eax,%edx
c1009b18:	89 d0                	mov    %edx,%eax
c1009b1a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009b1d:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
c1009b21:	75 19                	jne    c1009b3c <file_write+0x145>
c1009b23:	68 6f c7 00 c1       	push   $0xc100c76f
c1009b28:	68 e0 c9 00 c1       	push   $0xc100c9e0
c1009b2d:	68 1e 01 00 00       	push   $0x11e
c1009b32:	68 88 c7 00 c1       	push   $0xc100c788
c1009b37:	e8 2f 68 ff ff       	call   c100036b <__PANIC>
c1009b3c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009b41:	83 ec 04             	sub    $0x4,%esp
c1009b44:	6a 01                	push   $0x1
c1009b46:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009b49:	50                   	push   %eax
c1009b4a:	e8 eb f9 ff ff       	call   c100953a <bitmap_sync>
c1009b4f:	83 c4 10             	add    $0x10,%esp
c1009b52:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b55:	8b 40 08             	mov    0x8(%eax),%eax
c1009b58:	8b 40 04             	mov    0x4(%eax),%eax
c1009b5b:	c1 e8 09             	shr    $0x9,%eax
c1009b5e:	83 c0 01             	add    $0x1,%eax
c1009b61:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1009b64:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b67:	8b 40 08             	mov    0x8(%eax),%eax
c1009b6a:	8b 50 04             	mov    0x4(%eax),%edx
c1009b6d:	8b 45 10             	mov    0x10(%ebp),%eax
c1009b70:	01 d0                	add    %edx,%eax
c1009b72:	c1 e8 09             	shr    $0x9,%eax
c1009b75:	83 c0 01             	add    $0x1,%eax
c1009b78:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009b7b:	81 7d cc 8c 00 00 00 	cmpl   $0x8c,-0x34(%ebp)
c1009b82:	76 19                	jbe    c1009b9d <file_write+0x1a6>
c1009b84:	68 b9 c7 00 c1       	push   $0xc100c7b9
c1009b89:	68 e0 c9 00 c1       	push   $0xc100c9e0
c1009b8e:	68 27 01 00 00       	push   $0x127
c1009b93:	68 88 c7 00 c1       	push   $0xc100c788
c1009b98:	e8 ce 67 ff ff       	call   c100036b <__PANIC>
c1009b9d:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1009ba0:	2b 45 d0             	sub    -0x30(%ebp),%eax
c1009ba3:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1009ba6:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
c1009baa:	0f 85 83 00 00 00    	jne    c1009c33 <file_write+0x23c>
c1009bb0:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009bb4:	77 2e                	ja     c1009be4 <file_write+0x1ed>
c1009bb6:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009bb9:	83 e8 01             	sub    $0x1,%eax
c1009bbc:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009bbf:	8b 45 08             	mov    0x8(%ebp),%eax
c1009bc2:	8b 40 08             	mov    0x8(%eax),%eax
c1009bc5:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009bc8:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009bcf:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009bd2:	01 ca                	add    %ecx,%edx
c1009bd4:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009bd7:	83 c1 04             	add    $0x4,%ecx
c1009bda:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009bdd:	89 02                	mov    %eax,(%edx)
c1009bdf:	e9 24 04 00 00       	jmp    c100a008 <file_write+0x611>
c1009be4:	8b 45 08             	mov    0x8(%ebp),%eax
c1009be7:	8b 40 08             	mov    0x8(%eax),%eax
c1009bea:	8b 40 40             	mov    0x40(%eax),%eax
c1009bed:	85 c0                	test   %eax,%eax
c1009bef:	75 19                	jne    c1009c0a <file_write+0x213>
c1009bf1:	68 d8 c7 00 c1       	push   $0xc100c7d8
c1009bf6:	68 e0 c9 00 c1       	push   $0xc100c9e0
c1009bfb:	68 35 01 00 00       	push   $0x135
c1009c00:	68 88 c7 00 c1       	push   $0xc100c788
c1009c05:	e8 61 67 ff ff       	call   c100036b <__PANIC>
c1009c0a:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c0d:	8b 40 08             	mov    0x8(%eax),%eax
c1009c10:	8b 40 40             	mov    0x40(%eax),%eax
c1009c13:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009c16:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009c19:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009c1c:	83 c2 30             	add    $0x30,%edx
c1009c1f:	83 ec 04             	sub    $0x4,%esp
c1009c22:	6a 01                	push   $0x1
c1009c24:	50                   	push   %eax
c1009c25:	52                   	push   %edx
c1009c26:	e8 2f c4 ff ff       	call   c100605a <ide_read>
c1009c2b:	83 c4 10             	add    $0x10,%esp
c1009c2e:	e9 d5 03 00 00       	jmp    c100a008 <file_write+0x611>
c1009c33:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009c37:	0f 87 25 01 00 00    	ja     c1009d62 <file_write+0x36b>
c1009c3d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009c40:	83 e8 01             	sub    $0x1,%eax
c1009c43:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009c46:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c49:	8b 40 08             	mov    0x8(%eax),%eax
c1009c4c:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009c4f:	83 c2 04             	add    $0x4,%edx
c1009c52:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009c55:	85 c0                	test   %eax,%eax
c1009c57:	75 19                	jne    c1009c72 <file_write+0x27b>
c1009c59:	68 fc c7 00 c1       	push   $0xc100c7fc
c1009c5e:	68 e0 c9 00 c1       	push   $0xc100c9e0
c1009c63:	68 3f 01 00 00       	push   $0x13f
c1009c68:	68 88 c7 00 c1       	push   $0xc100c788
c1009c6d:	e8 f9 66 ff ff       	call   c100036b <__PANIC>
c1009c72:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c75:	8b 40 08             	mov    0x8(%eax),%eax
c1009c78:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009c7b:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009c82:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009c85:	01 ca                	add    %ecx,%edx
c1009c87:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009c8a:	83 c1 04             	add    $0x4,%ecx
c1009c8d:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009c90:	89 02                	mov    %eax,(%edx)
c1009c92:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009c95:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009c98:	e9 b4 00 00 00       	jmp    c1009d51 <file_write+0x35a>
c1009c9d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009ca2:	83 ec 0c             	sub    $0xc,%esp
c1009ca5:	50                   	push   %eax
c1009ca6:	e8 c1 f7 ff ff       	call   c100946c <block_bitmap_alloc>
c1009cab:	83 c4 10             	add    $0x10,%esp
c1009cae:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009cb1:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009cb5:	75 1a                	jne    c1009cd1 <file_write+0x2da>
c1009cb7:	83 ec 0c             	sub    $0xc,%esp
c1009cba:	68 28 c8 00 c1       	push   $0xc100c828
c1009cbf:	e8 ee ba ff ff       	call   c10057b2 <printk>
c1009cc4:	83 c4 10             	add    $0x10,%esp
c1009cc7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009ccc:	e9 86 04 00 00       	jmp    c100a157 <file_write+0x760>
c1009cd1:	8b 45 08             	mov    0x8(%ebp),%eax
c1009cd4:	8b 40 08             	mov    0x8(%eax),%eax
c1009cd7:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009cda:	83 c2 04             	add    $0x4,%edx
c1009cdd:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009ce0:	85 c0                	test   %eax,%eax
c1009ce2:	74 19                	je     c1009cfd <file_write+0x306>
c1009ce4:	68 60 c8 00 c1       	push   $0xc100c860
c1009ce9:	68 e0 c9 00 c1       	push   $0xc100c9e0
c1009cee:	68 4c 01 00 00       	push   $0x14c
c1009cf3:	68 88 c7 00 c1       	push   $0xc100c788
c1009cf8:	e8 6e 66 ff ff       	call   c100036b <__PANIC>
c1009cfd:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009d00:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009d07:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009d0a:	01 d0                	add    %edx,%eax
c1009d0c:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009d0f:	89 10                	mov    %edx,(%eax)
c1009d11:	8b 55 08             	mov    0x8(%ebp),%edx
c1009d14:	8b 52 08             	mov    0x8(%edx),%edx
c1009d17:	8b 00                	mov    (%eax),%eax
c1009d19:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009d1c:	83 c1 04             	add    $0x4,%ecx
c1009d1f:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1009d22:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009d25:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009d2a:	8b 40 10             	mov    0x10(%eax),%eax
c1009d2d:	8b 40 28             	mov    0x28(%eax),%eax
c1009d30:	29 c2                	sub    %eax,%edx
c1009d32:	89 d0                	mov    %edx,%eax
c1009d34:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009d37:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009d3c:	83 ec 04             	sub    $0x4,%esp
c1009d3f:	6a 01                	push   $0x1
c1009d41:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009d44:	50                   	push   %eax
c1009d45:	e8 f0 f7 ff ff       	call   c100953a <bitmap_sync>
c1009d4a:	83 c4 10             	add    $0x10,%esp
c1009d4d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009d51:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009d54:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009d57:	0f 82 40 ff ff ff    	jb     c1009c9d <file_write+0x2a6>
c1009d5d:	e9 a6 02 00 00       	jmp    c100a008 <file_write+0x611>
c1009d62:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009d66:	0f 87 a3 01 00 00    	ja     c1009f0f <file_write+0x518>
c1009d6c:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009d70:	0f 86 99 01 00 00    	jbe    c1009f0f <file_write+0x518>
c1009d76:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009d79:	83 e8 01             	sub    $0x1,%eax
c1009d7c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009d7f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009d82:	8b 40 08             	mov    0x8(%eax),%eax
c1009d85:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009d88:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009d8f:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009d92:	01 ca                	add    %ecx,%edx
c1009d94:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009d97:	83 c1 04             	add    $0x4,%ecx
c1009d9a:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009d9d:	89 02                	mov    %eax,(%edx)
c1009d9f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009da4:	83 ec 0c             	sub    $0xc,%esp
c1009da7:	50                   	push   %eax
c1009da8:	e8 bf f6 ff ff       	call   c100946c <block_bitmap_alloc>
c1009dad:	83 c4 10             	add    $0x10,%esp
c1009db0:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009db3:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009db7:	75 1a                	jne    c1009dd3 <file_write+0x3dc>
c1009db9:	83 ec 0c             	sub    $0xc,%esp
c1009dbc:	68 8c c8 00 c1       	push   $0xc100c88c
c1009dc1:	e8 ec b9 ff ff       	call   c10057b2 <printk>
c1009dc6:	83 c4 10             	add    $0x10,%esp
c1009dc9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009dce:	e9 84 03 00 00       	jmp    c100a157 <file_write+0x760>
c1009dd3:	8b 45 08             	mov    0x8(%ebp),%eax
c1009dd6:	8b 40 08             	mov    0x8(%eax),%eax
c1009dd9:	8b 40 40             	mov    0x40(%eax),%eax
c1009ddc:	85 c0                	test   %eax,%eax
c1009dde:	74 19                	je     c1009df9 <file_write+0x402>
c1009de0:	68 c4 c8 00 c1       	push   $0xc100c8c4
c1009de5:	68 e0 c9 00 c1       	push   $0xc100c9e0
c1009dea:	68 63 01 00 00       	push   $0x163
c1009def:	68 88 c7 00 c1       	push   $0xc100c788
c1009df4:	e8 72 65 ff ff       	call   c100036b <__PANIC>
c1009df9:	8b 45 08             	mov    0x8(%ebp),%eax
c1009dfc:	8b 40 08             	mov    0x8(%eax),%eax
c1009dff:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009e02:	89 50 40             	mov    %edx,0x40(%eax)
c1009e05:	8b 40 40             	mov    0x40(%eax),%eax
c1009e08:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009e0b:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009e0e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009e11:	e9 d0 00 00 00       	jmp    c1009ee6 <file_write+0x4ef>
c1009e16:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009e1b:	83 ec 0c             	sub    $0xc,%esp
c1009e1e:	50                   	push   %eax
c1009e1f:	e8 48 f6 ff ff       	call   c100946c <block_bitmap_alloc>
c1009e24:	83 c4 10             	add    $0x10,%esp
c1009e27:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009e2a:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009e2e:	75 1a                	jne    c1009e4a <file_write+0x453>
c1009e30:	83 ec 0c             	sub    $0xc,%esp
c1009e33:	68 8c c8 00 c1       	push   $0xc100c88c
c1009e38:	e8 75 b9 ff ff       	call   c10057b2 <printk>
c1009e3d:	83 c4 10             	add    $0x10,%esp
c1009e40:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009e45:	e9 0d 03 00 00       	jmp    c100a157 <file_write+0x760>
c1009e4a:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1009e4e:	77 53                	ja     c1009ea3 <file_write+0x4ac>
c1009e50:	8b 45 08             	mov    0x8(%ebp),%eax
c1009e53:	8b 40 08             	mov    0x8(%eax),%eax
c1009e56:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009e59:	83 c2 04             	add    $0x4,%edx
c1009e5c:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009e5f:	85 c0                	test   %eax,%eax
c1009e61:	74 19                	je     c1009e7c <file_write+0x485>
c1009e63:	68 60 c8 00 c1       	push   $0xc100c860
c1009e68:	68 e0 c9 00 c1       	push   $0xc100c9e0
c1009e6d:	68 70 01 00 00       	push   $0x170
c1009e72:	68 88 c7 00 c1       	push   $0xc100c788
c1009e77:	e8 ef 64 ff ff       	call   c100036b <__PANIC>
c1009e7c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009e7f:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009e86:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009e89:	01 d0                	add    %edx,%eax
c1009e8b:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009e8e:	89 10                	mov    %edx,(%eax)
c1009e90:	8b 55 08             	mov    0x8(%ebp),%edx
c1009e93:	8b 52 08             	mov    0x8(%edx),%edx
c1009e96:	8b 00                	mov    (%eax),%eax
c1009e98:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009e9b:	83 c1 04             	add    $0x4,%ecx
c1009e9e:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1009ea1:	eb 14                	jmp    c1009eb7 <file_write+0x4c0>
c1009ea3:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009ea6:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009ead:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009eb0:	01 c2                	add    %eax,%edx
c1009eb2:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009eb5:	89 02                	mov    %eax,(%edx)
c1009eb7:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009eba:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009ebf:	8b 40 10             	mov    0x10(%eax),%eax
c1009ec2:	8b 40 28             	mov    0x28(%eax),%eax
c1009ec5:	29 c2                	sub    %eax,%edx
c1009ec7:	89 d0                	mov    %edx,%eax
c1009ec9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009ecc:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009ed1:	83 ec 04             	sub    $0x4,%esp
c1009ed4:	6a 01                	push   $0x1
c1009ed6:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009ed9:	50                   	push   %eax
c1009eda:	e8 5b f6 ff ff       	call   c100953a <bitmap_sync>
c1009edf:	83 c4 10             	add    $0x10,%esp
c1009ee2:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009ee6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009ee9:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009eec:	0f 82 24 ff ff ff    	jb     c1009e16 <file_write+0x41f>
c1009ef2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009ef5:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009ef8:	83 c2 30             	add    $0x30,%edx
c1009efb:	83 ec 04             	sub    $0x4,%esp
c1009efe:	6a 01                	push   $0x1
c1009f00:	50                   	push   %eax
c1009f01:	52                   	push   %edx
c1009f02:	e8 90 c1 ff ff       	call   c1006097 <ide_write>
c1009f07:	83 c4 10             	add    $0x10,%esp
c1009f0a:	e9 f9 00 00 00       	jmp    c100a008 <file_write+0x611>
c1009f0f:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009f13:	0f 86 ef 00 00 00    	jbe    c100a008 <file_write+0x611>
c1009f19:	8b 45 08             	mov    0x8(%ebp),%eax
c1009f1c:	8b 40 08             	mov    0x8(%eax),%eax
c1009f1f:	8b 40 40             	mov    0x40(%eax),%eax
c1009f22:	85 c0                	test   %eax,%eax
c1009f24:	75 19                	jne    c1009f3f <file_write+0x548>
c1009f26:	68 d8 c7 00 c1       	push   $0xc100c7d8
c1009f2b:	68 e0 c9 00 c1       	push   $0xc100c9e0
c1009f30:	68 7f 01 00 00       	push   $0x17f
c1009f35:	68 88 c7 00 c1       	push   $0xc100c788
c1009f3a:	e8 2c 64 ff ff       	call   c100036b <__PANIC>
c1009f3f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009f42:	8b 40 08             	mov    0x8(%eax),%eax
c1009f45:	8b 40 40             	mov    0x40(%eax),%eax
c1009f48:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009f4b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009f4e:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009f51:	83 c2 30             	add    $0x30,%edx
c1009f54:	83 ec 04             	sub    $0x4,%esp
c1009f57:	6a 01                	push   $0x1
c1009f59:	50                   	push   %eax
c1009f5a:	52                   	push   %edx
c1009f5b:	e8 fa c0 ff ff       	call   c100605a <ide_read>
c1009f60:	83 c4 10             	add    $0x10,%esp
c1009f63:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009f66:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009f69:	eb 79                	jmp    c1009fe4 <file_write+0x5ed>
c1009f6b:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009f70:	83 ec 0c             	sub    $0xc,%esp
c1009f73:	50                   	push   %eax
c1009f74:	e8 f3 f4 ff ff       	call   c100946c <block_bitmap_alloc>
c1009f79:	83 c4 10             	add    $0x10,%esp
c1009f7c:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009f7f:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009f83:	75 1a                	jne    c1009f9f <file_write+0x5a8>
c1009f85:	83 ec 0c             	sub    $0xc,%esp
c1009f88:	68 e8 c8 00 c1       	push   $0xc100c8e8
c1009f8d:	e8 20 b8 ff ff       	call   c10057b2 <printk>
c1009f92:	83 c4 10             	add    $0x10,%esp
c1009f95:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009f9a:	e9 b8 01 00 00       	jmp    c100a157 <file_write+0x760>
c1009f9f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009fa2:	8d 50 01             	lea    0x1(%eax),%edx
c1009fa5:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1009fa8:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009faf:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009fb2:	01 c2                	add    %eax,%edx
c1009fb4:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009fb7:	89 02                	mov    %eax,(%edx)
c1009fb9:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009fbc:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009fc1:	8b 40 10             	mov    0x10(%eax),%eax
c1009fc4:	8b 40 28             	mov    0x28(%eax),%eax
c1009fc7:	29 c2                	sub    %eax,%edx
c1009fc9:	89 d0                	mov    %edx,%eax
c1009fcb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009fce:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009fd3:	83 ec 04             	sub    $0x4,%esp
c1009fd6:	6a 01                	push   $0x1
c1009fd8:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009fdb:	50                   	push   %eax
c1009fdc:	e8 59 f5 ff ff       	call   c100953a <bitmap_sync>
c1009fe1:	83 c4 10             	add    $0x10,%esp
c1009fe4:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009fe7:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009fea:	0f 82 7b ff ff ff    	jb     c1009f6b <file_write+0x574>
c1009ff0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009ff3:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009ff6:	83 c2 30             	add    $0x30,%edx
c1009ff9:	83 ec 04             	sub    $0x4,%esp
c1009ffc:	6a 01                	push   $0x1
c1009ffe:	50                   	push   %eax
c1009fff:	52                   	push   %edx
c100a000:	e8 92 c0 ff ff       	call   c1006097 <ide_write>
c100a005:	83 c4 10             	add    $0x10,%esp
c100a008:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
c100a00c:	8b 45 08             	mov    0x8(%ebp),%eax
c100a00f:	8b 40 08             	mov    0x8(%eax),%eax
c100a012:	8b 40 04             	mov    0x4(%eax),%eax
c100a015:	8d 50 ff             	lea    -0x1(%eax),%edx
c100a018:	8b 45 08             	mov    0x8(%ebp),%eax
c100a01b:	89 10                	mov    %edx,(%eax)
c100a01d:	e9 e3 00 00 00       	jmp    c100a105 <file_write+0x70e>
c100a022:	83 ec 04             	sub    $0x4,%esp
c100a025:	68 00 02 00 00       	push   $0x200
c100a02a:	6a 00                	push   $0x0
c100a02c:	ff 75 e0             	pushl  -0x20(%ebp)
c100a02f:	e8 76 60 ff ff       	call   c10000aa <memset>
c100a034:	83 c4 10             	add    $0x10,%esp
c100a037:	8b 45 08             	mov    0x8(%ebp),%eax
c100a03a:	8b 40 08             	mov    0x8(%eax),%eax
c100a03d:	8b 40 04             	mov    0x4(%eax),%eax
c100a040:	c1 e8 09             	shr    $0x9,%eax
c100a043:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100a046:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100a049:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100a050:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a053:	01 d0                	add    %edx,%eax
c100a055:	8b 00                	mov    (%eax),%eax
c100a057:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100a05a:	8b 45 08             	mov    0x8(%ebp),%eax
c100a05d:	8b 40 08             	mov    0x8(%eax),%eax
c100a060:	8b 40 04             	mov    0x4(%eax),%eax
c100a063:	25 ff 01 00 00       	and    $0x1ff,%eax
c100a068:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100a06b:	b8 00 02 00 00       	mov    $0x200,%eax
c100a070:	2b 45 b8             	sub    -0x48(%ebp),%eax
c100a073:	89 45 b4             	mov    %eax,-0x4c(%ebp)
c100a076:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a079:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
c100a07c:	0f 46 45 b4          	cmovbe -0x4c(%ebp),%eax
c100a080:	89 45 b0             	mov    %eax,-0x50(%ebp)
c100a083:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
c100a087:	74 17                	je     c100a0a0 <file_write+0x6a9>
c100a089:	83 ec 04             	sub    $0x4,%esp
c100a08c:	6a 01                	push   $0x1
c100a08e:	ff 75 bc             	pushl  -0x44(%ebp)
c100a091:	ff 75 e0             	pushl  -0x20(%ebp)
c100a094:	e8 c1 bf ff ff       	call   c100605a <ide_read>
c100a099:	83 c4 10             	add    $0x10,%esp
c100a09c:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
c100a0a0:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100a0a3:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a0a6:	01 d0                	add    %edx,%eax
c100a0a8:	83 ec 04             	sub    $0x4,%esp
c100a0ab:	ff 75 b0             	pushl  -0x50(%ebp)
c100a0ae:	ff 75 f4             	pushl  -0xc(%ebp)
c100a0b1:	50                   	push   %eax
c100a0b2:	e8 51 60 ff ff       	call   c1000108 <memcpy>
c100a0b7:	83 c4 10             	add    $0x10,%esp
c100a0ba:	83 ec 04             	sub    $0x4,%esp
c100a0bd:	6a 01                	push   $0x1
c100a0bf:	ff 75 bc             	pushl  -0x44(%ebp)
c100a0c2:	ff 75 e0             	pushl  -0x20(%ebp)
c100a0c5:	e8 cd bf ff ff       	call   c1006097 <ide_write>
c100a0ca:	83 c4 10             	add    $0x10,%esp
c100a0cd:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100a0d0:	01 45 f4             	add    %eax,-0xc(%ebp)
c100a0d3:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0d6:	8b 40 08             	mov    0x8(%eax),%eax
c100a0d9:	8b 48 04             	mov    0x4(%eax),%ecx
c100a0dc:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0df:	8b 40 08             	mov    0x8(%eax),%eax
c100a0e2:	8b 55 b0             	mov    -0x50(%ebp),%edx
c100a0e5:	01 ca                	add    %ecx,%edx
c100a0e7:	89 50 04             	mov    %edx,0x4(%eax)
c100a0ea:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0ed:	8b 10                	mov    (%eax),%edx
c100a0ef:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100a0f2:	01 c2                	add    %eax,%edx
c100a0f4:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0f7:	89 10                	mov    %edx,(%eax)
c100a0f9:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100a0fc:	01 45 f0             	add    %eax,-0x10(%ebp)
c100a0ff:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100a102:	29 45 ec             	sub    %eax,-0x14(%ebp)
c100a105:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a108:	3b 45 10             	cmp    0x10(%ebp),%eax
c100a10b:	0f 82 11 ff ff ff    	jb     c100a022 <file_write+0x62b>
c100a111:	8b 45 08             	mov    0x8(%ebp),%eax
c100a114:	8b 50 08             	mov    0x8(%eax),%edx
c100a117:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a11c:	83 ec 04             	sub    $0x4,%esp
c100a11f:	ff 75 e0             	pushl  -0x20(%ebp)
c100a122:	52                   	push   %edx
c100a123:	50                   	push   %eax
c100a124:	e8 2f 04 00 00       	call   c100a558 <inode_sync>
c100a129:	83 c4 10             	add    $0x10,%esp
c100a12c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a12f:	83 ec 08             	sub    $0x8,%esp
c100a132:	68 30 02 00 00       	push   $0x230
c100a137:	50                   	push   %eax
c100a138:	e8 9b 8c ff ff       	call   c1002dd8 <vmm_free>
c100a13d:	83 c4 10             	add    $0x10,%esp
c100a140:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a143:	83 ec 08             	sub    $0x8,%esp
c100a146:	68 00 02 00 00       	push   $0x200
c100a14b:	50                   	push   %eax
c100a14c:	e8 87 8c ff ff       	call   c1002dd8 <vmm_free>
c100a151:	83 c4 10             	add    $0x10,%esp
c100a154:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a157:	c9                   	leave  
c100a158:	c3                   	ret    

c100a159 <file_read>:
c100a159:	55                   	push   %ebp
c100a15a:	89 e5                	mov    %esp,%ebp
c100a15c:	83 ec 48             	sub    $0x48,%esp
c100a15f:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a162:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a165:	8b 45 10             	mov    0x10(%ebp),%eax
c100a168:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a16b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a16e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a171:	8b 45 08             	mov    0x8(%ebp),%eax
c100a174:	8b 10                	mov    (%eax),%edx
c100a176:	8b 45 10             	mov    0x10(%ebp),%eax
c100a179:	01 c2                	add    %eax,%edx
c100a17b:	8b 45 08             	mov    0x8(%ebp),%eax
c100a17e:	8b 40 08             	mov    0x8(%eax),%eax
c100a181:	8b 40 04             	mov    0x4(%eax),%eax
c100a184:	39 c2                	cmp    %eax,%edx
c100a186:	76 2b                	jbe    c100a1b3 <file_read+0x5a>
c100a188:	8b 45 08             	mov    0x8(%ebp),%eax
c100a18b:	8b 40 08             	mov    0x8(%eax),%eax
c100a18e:	8b 50 04             	mov    0x4(%eax),%edx
c100a191:	8b 45 08             	mov    0x8(%ebp),%eax
c100a194:	8b 00                	mov    (%eax),%eax
c100a196:	29 c2                	sub    %eax,%edx
c100a198:	89 d0                	mov    %edx,%eax
c100a19a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a19d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a1a0:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a1a3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c100a1a7:	75 0a                	jne    c100a1b3 <file_read+0x5a>
c100a1a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100a1ae:	e9 31 03 00 00       	jmp    c100a4e4 <file_read+0x38b>
c100a1b3:	83 ec 08             	sub    $0x8,%esp
c100a1b6:	6a 02                	push   $0x2
c100a1b8:	68 00 02 00 00       	push   $0x200
c100a1bd:	e8 f1 8a ff ff       	call   c1002cb3 <vmm_malloc>
c100a1c2:	83 c4 10             	add    $0x10,%esp
c100a1c5:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100a1c8:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c100a1cc:	75 10                	jne    c100a1de <file_read+0x85>
c100a1ce:	83 ec 0c             	sub    $0xc,%esp
c100a1d1:	68 20 c9 00 c1       	push   $0xc100c920
c100a1d6:	e8 d7 b5 ff ff       	call   c10057b2 <printk>
c100a1db:	83 c4 10             	add    $0x10,%esp
c100a1de:	83 ec 08             	sub    $0x8,%esp
c100a1e1:	6a 02                	push   $0x2
c100a1e3:	68 30 02 00 00       	push   $0x230
c100a1e8:	e8 c6 8a ff ff       	call   c1002cb3 <vmm_malloc>
c100a1ed:	83 c4 10             	add    $0x10,%esp
c100a1f0:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100a1f3:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c100a1f7:	75 1a                	jne    c100a213 <file_read+0xba>
c100a1f9:	83 ec 0c             	sub    $0xc,%esp
c100a1fc:	68 4c c9 00 c1       	push   $0xc100c94c
c100a201:	e8 ac b5 ff ff       	call   c10057b2 <printk>
c100a206:	83 c4 10             	add    $0x10,%esp
c100a209:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100a20e:	e9 d1 02 00 00       	jmp    c100a4e4 <file_read+0x38b>
c100a213:	8b 45 08             	mov    0x8(%ebp),%eax
c100a216:	8b 00                	mov    (%eax),%eax
c100a218:	c1 e8 09             	shr    $0x9,%eax
c100a21b:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100a21e:	8b 45 08             	mov    0x8(%ebp),%eax
c100a221:	8b 10                	mov    (%eax),%edx
c100a223:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a226:	01 d0                	add    %edx,%eax
c100a228:	c1 e8 09             	shr    $0x9,%eax
c100a22b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100a22e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a231:	2b 45 d4             	sub    -0x2c(%ebp),%eax
c100a234:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100a237:	81 7d d8 8a 00 00 00 	cmpl   $0x8a,-0x28(%ebp)
c100a23e:	77 09                	ja     c100a249 <file_read+0xf0>
c100a240:	81 7d d4 8a 00 00 00 	cmpl   $0x8a,-0x2c(%ebp)
c100a247:	76 19                	jbe    c100a262 <file_read+0x109>
c100a249:	68 7c c9 00 c1       	push   $0xc100c97c
c100a24e:	68 ec c9 00 c1       	push   $0xc100c9ec
c100a253:	68 d1 01 00 00       	push   $0x1d1
c100a258:	68 88 c7 00 c1       	push   $0xc100c788
c100a25d:	e8 09 61 ff ff       	call   c100036b <__PANIC>
c100a262:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
c100a266:	75 7b                	jne    c100a2e3 <file_read+0x18a>
c100a268:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100a26b:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c100a26e:	74 19                	je     c100a289 <file_read+0x130>
c100a270:	68 b4 c9 00 c1       	push   $0xc100c9b4
c100a275:	68 ec c9 00 c1       	push   $0xc100c9ec
c100a27a:	68 d8 01 00 00       	push   $0x1d8
c100a27f:	68 88 c7 00 c1       	push   $0xc100c788
c100a284:	e8 e2 60 ff ff       	call   c100036b <__PANIC>
c100a289:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100a28d:	77 2b                	ja     c100a2ba <file_read+0x161>
c100a28f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100a292:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a295:	8b 45 08             	mov    0x8(%ebp),%eax
c100a298:	8b 40 08             	mov    0x8(%eax),%eax
c100a29b:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100a29e:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100a2a5:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a2a8:	01 ca                	add    %ecx,%edx
c100a2aa:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100a2ad:	83 c1 04             	add    $0x4,%ecx
c100a2b0:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100a2b3:	89 02                	mov    %eax,(%edx)
c100a2b5:	e9 40 01 00 00       	jmp    c100a3fa <file_read+0x2a1>
c100a2ba:	8b 45 08             	mov    0x8(%ebp),%eax
c100a2bd:	8b 40 08             	mov    0x8(%eax),%eax
c100a2c0:	8b 40 40             	mov    0x40(%eax),%eax
c100a2c3:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100a2c6:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100a2c9:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a2cc:	83 c2 30             	add    $0x30,%edx
c100a2cf:	83 ec 04             	sub    $0x4,%esp
c100a2d2:	6a 01                	push   $0x1
c100a2d4:	50                   	push   %eax
c100a2d5:	52                   	push   %edx
c100a2d6:	e8 7f bd ff ff       	call   c100605a <ide_read>
c100a2db:	83 c4 10             	add    $0x10,%esp
c100a2de:	e9 17 01 00 00       	jmp    c100a3fa <file_read+0x2a1>
c100a2e3:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100a2e7:	77 39                	ja     c100a322 <file_read+0x1c9>
c100a2e9:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a2ec:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a2ef:	eb 24                	jmp    c100a315 <file_read+0x1bc>
c100a2f1:	8b 45 08             	mov    0x8(%ebp),%eax
c100a2f4:	8b 40 08             	mov    0x8(%eax),%eax
c100a2f7:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100a2fa:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100a301:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a304:	01 ca                	add    %ecx,%edx
c100a306:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100a309:	83 c1 04             	add    $0x4,%ecx
c100a30c:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100a30f:	89 02                	mov    %eax,(%edx)
c100a311:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c100a315:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a318:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
c100a31b:	76 d4                	jbe    c100a2f1 <file_read+0x198>
c100a31d:	e9 d8 00 00 00       	jmp    c100a3fa <file_read+0x2a1>
c100a322:	83 7d d8 0b          	cmpl   $0xb,-0x28(%ebp)
c100a326:	0f 87 84 00 00 00    	ja     c100a3b0 <file_read+0x257>
c100a32c:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100a330:	76 7e                	jbe    c100a3b0 <file_read+0x257>
c100a332:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a335:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a338:	eb 24                	jmp    c100a35e <file_read+0x205>
c100a33a:	8b 45 08             	mov    0x8(%ebp),%eax
c100a33d:	8b 40 08             	mov    0x8(%eax),%eax
c100a340:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100a343:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100a34a:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a34d:	01 ca                	add    %ecx,%edx
c100a34f:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100a352:	83 c1 04             	add    $0x4,%ecx
c100a355:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100a358:	89 02                	mov    %eax,(%edx)
c100a35a:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c100a35e:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c100a362:	76 d6                	jbe    c100a33a <file_read+0x1e1>
c100a364:	8b 45 08             	mov    0x8(%ebp),%eax
c100a367:	8b 40 08             	mov    0x8(%eax),%eax
c100a36a:	8b 40 40             	mov    0x40(%eax),%eax
c100a36d:	85 c0                	test   %eax,%eax
c100a36f:	75 19                	jne    c100a38a <file_read+0x231>
c100a371:	68 d8 c7 00 c1       	push   $0xc100c7d8
c100a376:	68 ec c9 00 c1       	push   $0xc100c9ec
c100a37b:	68 f0 01 00 00       	push   $0x1f0
c100a380:	68 88 c7 00 c1       	push   $0xc100c788
c100a385:	e8 e1 5f ff ff       	call   c100036b <__PANIC>
c100a38a:	8b 45 08             	mov    0x8(%ebp),%eax
c100a38d:	8b 40 08             	mov    0x8(%eax),%eax
c100a390:	8b 40 40             	mov    0x40(%eax),%eax
c100a393:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100a396:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100a399:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a39c:	83 c2 30             	add    $0x30,%edx
c100a39f:	83 ec 04             	sub    $0x4,%esp
c100a3a2:	6a 01                	push   $0x1
c100a3a4:	50                   	push   %eax
c100a3a5:	52                   	push   %edx
c100a3a6:	e8 af bc ff ff       	call   c100605a <ide_read>
c100a3ab:	83 c4 10             	add    $0x10,%esp
c100a3ae:	eb 4a                	jmp    c100a3fa <file_read+0x2a1>
c100a3b0:	8b 45 08             	mov    0x8(%ebp),%eax
c100a3b3:	8b 40 08             	mov    0x8(%eax),%eax
c100a3b6:	8b 40 40             	mov    0x40(%eax),%eax
c100a3b9:	85 c0                	test   %eax,%eax
c100a3bb:	75 19                	jne    c100a3d6 <file_read+0x27d>
c100a3bd:	68 d8 c7 00 c1       	push   $0xc100c7d8
c100a3c2:	68 ec c9 00 c1       	push   $0xc100c9ec
c100a3c7:	68 f7 01 00 00       	push   $0x1f7
c100a3cc:	68 88 c7 00 c1       	push   $0xc100c788
c100a3d1:	e8 95 5f ff ff       	call   c100036b <__PANIC>
c100a3d6:	8b 45 08             	mov    0x8(%ebp),%eax
c100a3d9:	8b 40 08             	mov    0x8(%eax),%eax
c100a3dc:	8b 40 40             	mov    0x40(%eax),%eax
c100a3df:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100a3e2:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100a3e5:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a3e8:	83 c2 30             	add    $0x30,%edx
c100a3eb:	83 ec 04             	sub    $0x4,%esp
c100a3ee:	6a 01                	push   $0x1
c100a3f0:	50                   	push   %eax
c100a3f1:	52                   	push   %edx
c100a3f2:	e8 63 bc ff ff       	call   c100605a <ide_read>
c100a3f7:	83 c4 10             	add    $0x10,%esp
c100a3fa:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c100a401:	e9 a7 00 00 00       	jmp    c100a4ad <file_read+0x354>
c100a406:	8b 45 08             	mov    0x8(%ebp),%eax
c100a409:	8b 00                	mov    (%eax),%eax
c100a40b:	c1 e8 09             	shr    $0x9,%eax
c100a40e:	89 45 c8             	mov    %eax,-0x38(%ebp)
c100a411:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100a414:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100a41b:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a41e:	01 d0                	add    %edx,%eax
c100a420:	8b 00                	mov    (%eax),%eax
c100a422:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100a425:	8b 45 08             	mov    0x8(%ebp),%eax
c100a428:	8b 00                	mov    (%eax),%eax
c100a42a:	25 ff 01 00 00       	and    $0x1ff,%eax
c100a42f:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100a432:	b8 00 02 00 00       	mov    $0x200,%eax
c100a437:	2b 45 c0             	sub    -0x40(%ebp),%eax
c100a43a:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100a43d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a440:	39 45 bc             	cmp    %eax,-0x44(%ebp)
c100a443:	0f 46 45 bc          	cmovbe -0x44(%ebp),%eax
c100a447:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100a44a:	83 ec 04             	sub    $0x4,%esp
c100a44d:	68 00 02 00 00       	push   $0x200
c100a452:	6a 00                	push   $0x0
c100a454:	ff 75 e0             	pushl  -0x20(%ebp)
c100a457:	e8 4e 5c ff ff       	call   c10000aa <memset>
c100a45c:	83 c4 10             	add    $0x10,%esp
c100a45f:	83 ec 04             	sub    $0x4,%esp
c100a462:	6a 01                	push   $0x1
c100a464:	ff 75 c4             	pushl  -0x3c(%ebp)
c100a467:	ff 75 e0             	pushl  -0x20(%ebp)
c100a46a:	e8 eb bb ff ff       	call   c100605a <ide_read>
c100a46f:	83 c4 10             	add    $0x10,%esp
c100a472:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100a475:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100a478:	01 d0                	add    %edx,%eax
c100a47a:	83 ec 04             	sub    $0x4,%esp
c100a47d:	ff 75 b8             	pushl  -0x48(%ebp)
c100a480:	50                   	push   %eax
c100a481:	ff 75 f4             	pushl  -0xc(%ebp)
c100a484:	e8 7f 5c ff ff       	call   c1000108 <memcpy>
c100a489:	83 c4 10             	add    $0x10,%esp
c100a48c:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a48f:	01 45 f4             	add    %eax,-0xc(%ebp)
c100a492:	8b 45 08             	mov    0x8(%ebp),%eax
c100a495:	8b 10                	mov    (%eax),%edx
c100a497:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a49a:	01 c2                	add    %eax,%edx
c100a49c:	8b 45 08             	mov    0x8(%ebp),%eax
c100a49f:	89 10                	mov    %edx,(%eax)
c100a4a1:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a4a4:	01 45 e4             	add    %eax,-0x1c(%ebp)
c100a4a7:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a4aa:	29 45 ec             	sub    %eax,-0x14(%ebp)
c100a4ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a4b0:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c100a4b3:	0f 82 4d ff ff ff    	jb     c100a406 <file_read+0x2ad>
c100a4b9:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a4bc:	83 ec 08             	sub    $0x8,%esp
c100a4bf:	68 30 02 00 00       	push   $0x230
c100a4c4:	50                   	push   %eax
c100a4c5:	e8 0e 89 ff ff       	call   c1002dd8 <vmm_free>
c100a4ca:	83 c4 10             	add    $0x10,%esp
c100a4cd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a4d0:	83 ec 08             	sub    $0x8,%esp
c100a4d3:	68 00 02 00 00       	push   $0x200
c100a4d8:	50                   	push   %eax
c100a4d9:	e8 fa 88 ff ff       	call   c1002dd8 <vmm_free>
c100a4de:	83 c4 10             	add    $0x10,%esp
c100a4e1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a4e4:	c9                   	leave  
c100a4e5:	c3                   	ret    

c100a4e6 <inode_locate>:
c100a4e6:	55                   	push   %ebp
c100a4e7:	89 e5                	mov    %esp,%ebp
c100a4e9:	83 ec 20             	sub    $0x20,%esp
c100a4ec:	8b 45 08             	mov    0x8(%ebp),%eax
c100a4ef:	8b 40 10             	mov    0x10(%eax),%eax
c100a4f2:	8b 40 20             	mov    0x20(%eax),%eax
c100a4f5:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100a4f8:	c7 45 f8 44 00 00 00 	movl   $0x44,-0x8(%ebp)
c100a4ff:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a502:	0f af 45 f8          	imul   -0x8(%ebp),%eax
c100a506:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a509:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a50c:	c1 e8 09             	shr    $0x9,%eax
c100a50f:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a512:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a515:	25 ff 01 00 00       	and    $0x1ff,%eax
c100a51a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a51d:	b8 00 02 00 00       	mov    $0x200,%eax
c100a522:	2b 45 ec             	sub    -0x14(%ebp),%eax
c100a525:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a528:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a52b:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c100a52e:	73 08                	jae    c100a538 <inode_locate+0x52>
c100a530:	8b 45 10             	mov    0x10(%ebp),%eax
c100a533:	c6 00 01             	movb   $0x1,(%eax)
c100a536:	eb 06                	jmp    c100a53e <inode_locate+0x58>
c100a538:	8b 45 10             	mov    0x10(%ebp),%eax
c100a53b:	c6 00 00             	movb   $0x0,(%eax)
c100a53e:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100a541:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a544:	01 c2                	add    %eax,%edx
c100a546:	8b 45 10             	mov    0x10(%ebp),%eax
c100a549:	89 50 04             	mov    %edx,0x4(%eax)
c100a54c:	8b 45 10             	mov    0x10(%ebp),%eax
c100a54f:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a552:	89 50 08             	mov    %edx,0x8(%eax)
c100a555:	90                   	nop
c100a556:	c9                   	leave  
c100a557:	c3                   	ret    

c100a558 <inode_sync>:
c100a558:	55                   	push   %ebp
c100a559:	89 e5                	mov    %esp,%ebp
c100a55b:	57                   	push   %edi
c100a55c:	56                   	push   %esi
c100a55d:	53                   	push   %ebx
c100a55e:	83 ec 6c             	sub    $0x6c,%esp
c100a561:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a564:	8b 00                	mov    (%eax),%eax
c100a566:	88 45 e7             	mov    %al,-0x19(%ebp)
c100a569:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
c100a56d:	8d 55 d4             	lea    -0x2c(%ebp),%edx
c100a570:	52                   	push   %edx
c100a571:	50                   	push   %eax
c100a572:	ff 75 08             	pushl  0x8(%ebp)
c100a575:	e8 6c ff ff ff       	call   c100a4e6 <inode_locate>
c100a57a:	83 c4 0c             	add    $0xc,%esp
c100a57d:	83 ec 04             	sub    $0x4,%esp
c100a580:	6a 44                	push   $0x44
c100a582:	ff 75 0c             	pushl  0xc(%ebp)
c100a585:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a588:	50                   	push   %eax
c100a589:	e8 7a 5b ff ff       	call   c1000108 <memcpy>
c100a58e:	83 c4 10             	add    $0x10,%esp
c100a591:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
c100a598:	c6 45 9c 00          	movb   $0x0,-0x64(%ebp)
c100a59c:	8b 45 10             	mov    0x10(%ebp),%eax
c100a59f:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100a5a2:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
c100a5a6:	84 c0                	test   %al,%al
c100a5a8:	74 64                	je     c100a60e <inode_sync+0xb6>
c100a5aa:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a5ad:	83 ec 04             	sub    $0x4,%esp
c100a5b0:	6a 02                	push   $0x2
c100a5b2:	50                   	push   %eax
c100a5b3:	ff 75 e0             	pushl  -0x20(%ebp)
c100a5b6:	e8 9f ba ff ff       	call   c100605a <ide_read>
c100a5bb:	83 c4 10             	add    $0x10,%esp
c100a5be:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a5c1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a5c4:	01 d0                	add    %edx,%eax
c100a5c6:	89 c2                	mov    %eax,%edx
c100a5c8:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a5cb:	b9 44 00 00 00       	mov    $0x44,%ecx
c100a5d0:	8b 18                	mov    (%eax),%ebx
c100a5d2:	89 1a                	mov    %ebx,(%edx)
c100a5d4:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c100a5d8:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c100a5dc:	8d 5a 04             	lea    0x4(%edx),%ebx
c100a5df:	83 e3 fc             	and    $0xfffffffc,%ebx
c100a5e2:	29 da                	sub    %ebx,%edx
c100a5e4:	29 d0                	sub    %edx,%eax
c100a5e6:	01 d1                	add    %edx,%ecx
c100a5e8:	83 e1 fc             	and    $0xfffffffc,%ecx
c100a5eb:	c1 e9 02             	shr    $0x2,%ecx
c100a5ee:	89 ca                	mov    %ecx,%edx
c100a5f0:	89 df                	mov    %ebx,%edi
c100a5f2:	89 c6                	mov    %eax,%esi
c100a5f4:	89 d1                	mov    %edx,%ecx
c100a5f6:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100a5f8:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a5fb:	83 ec 04             	sub    $0x4,%esp
c100a5fe:	6a 02                	push   $0x2
c100a600:	50                   	push   %eax
c100a601:	ff 75 e0             	pushl  -0x20(%ebp)
c100a604:	e8 8e ba ff ff       	call   c1006097 <ide_write>
c100a609:	83 c4 10             	add    $0x10,%esp
c100a60c:	eb 62                	jmp    c100a670 <inode_sync+0x118>
c100a60e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a611:	83 ec 04             	sub    $0x4,%esp
c100a614:	6a 01                	push   $0x1
c100a616:	50                   	push   %eax
c100a617:	ff 75 e0             	pushl  -0x20(%ebp)
c100a61a:	e8 3b ba ff ff       	call   c100605a <ide_read>
c100a61f:	83 c4 10             	add    $0x10,%esp
c100a622:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a625:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a628:	01 d0                	add    %edx,%eax
c100a62a:	89 c2                	mov    %eax,%edx
c100a62c:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a62f:	b9 44 00 00 00       	mov    $0x44,%ecx
c100a634:	8b 18                	mov    (%eax),%ebx
c100a636:	89 1a                	mov    %ebx,(%edx)
c100a638:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c100a63c:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c100a640:	8d 5a 04             	lea    0x4(%edx),%ebx
c100a643:	83 e3 fc             	and    $0xfffffffc,%ebx
c100a646:	29 da                	sub    %ebx,%edx
c100a648:	29 d0                	sub    %edx,%eax
c100a64a:	01 d1                	add    %edx,%ecx
c100a64c:	83 e1 fc             	and    $0xfffffffc,%ecx
c100a64f:	c1 e9 02             	shr    $0x2,%ecx
c100a652:	89 ca                	mov    %ecx,%edx
c100a654:	89 df                	mov    %ebx,%edi
c100a656:	89 c6                	mov    %eax,%esi
c100a658:	89 d1                	mov    %edx,%ecx
c100a65a:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100a65c:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a65f:	83 ec 04             	sub    $0x4,%esp
c100a662:	6a 01                	push   $0x1
c100a664:	50                   	push   %eax
c100a665:	ff 75 e0             	pushl  -0x20(%ebp)
c100a668:	e8 2a ba ff ff       	call   c1006097 <ide_write>
c100a66d:	83 c4 10             	add    $0x10,%esp
c100a670:	90                   	nop
c100a671:	8d 65 f4             	lea    -0xc(%ebp),%esp
c100a674:	5b                   	pop    %ebx
c100a675:	5e                   	pop    %esi
c100a676:	5f                   	pop    %edi
c100a677:	5d                   	pop    %ebp
c100a678:	c3                   	ret    

c100a679 <inode_open>:
c100a679:	55                   	push   %ebp
c100a67a:	89 e5                	mov    %esp,%ebp
c100a67c:	83 ec 28             	sub    $0x28,%esp
c100a67f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
c100a682:	50                   	push   %eax
c100a683:	ff 75 0c             	pushl  0xc(%ebp)
c100a686:	ff 75 08             	pushl  0x8(%ebp)
c100a689:	e8 58 fe ff ff       	call   c100a4e6 <inode_locate>
c100a68e:	83 c4 0c             	add    $0xc,%esp
c100a691:	83 ec 08             	sub    $0x8,%esp
c100a694:	6a 02                	push   $0x2
c100a696:	6a 44                	push   $0x44
c100a698:	e8 16 86 ff ff       	call   c1002cb3 <vmm_malloc>
c100a69d:	83 c4 10             	add    $0x10,%esp
c100a6a0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a6a3:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100a6a7:	84 c0                	test   %al,%al
c100a6a9:	74 2b                	je     c100a6d6 <inode_open+0x5d>
c100a6ab:	83 ec 08             	sub    $0x8,%esp
c100a6ae:	6a 02                	push   $0x2
c100a6b0:	68 00 04 00 00       	push   $0x400
c100a6b5:	e8 f9 85 ff ff       	call   c1002cb3 <vmm_malloc>
c100a6ba:	83 c4 10             	add    $0x10,%esp
c100a6bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a6c0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a6c3:	83 ec 04             	sub    $0x4,%esp
c100a6c6:	6a 02                	push   $0x2
c100a6c8:	50                   	push   %eax
c100a6c9:	ff 75 f4             	pushl  -0xc(%ebp)
c100a6cc:	e8 89 b9 ff ff       	call   c100605a <ide_read>
c100a6d1:	83 c4 10             	add    $0x10,%esp
c100a6d4:	eb 29                	jmp    c100a6ff <inode_open+0x86>
c100a6d6:	83 ec 08             	sub    $0x8,%esp
c100a6d9:	6a 02                	push   $0x2
c100a6db:	68 00 02 00 00       	push   $0x200
c100a6e0:	e8 ce 85 ff ff       	call   c1002cb3 <vmm_malloc>
c100a6e5:	83 c4 10             	add    $0x10,%esp
c100a6e8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a6eb:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a6ee:	83 ec 04             	sub    $0x4,%esp
c100a6f1:	6a 01                	push   $0x1
c100a6f3:	50                   	push   %eax
c100a6f4:	ff 75 f4             	pushl  -0xc(%ebp)
c100a6f7:	e8 5e b9 ff ff       	call   c100605a <ide_read>
c100a6fc:	83 c4 10             	add    $0x10,%esp
c100a6ff:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a702:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a705:	01 d0                	add    %edx,%eax
c100a707:	83 ec 04             	sub    $0x4,%esp
c100a70a:	6a 44                	push   $0x44
c100a70c:	50                   	push   %eax
c100a70d:	ff 75 f0             	pushl  -0x10(%ebp)
c100a710:	e8 f3 59 ff ff       	call   c1000108 <memcpy>
c100a715:	83 c4 10             	add    $0x10,%esp
c100a718:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100a71c:	84 c0                	test   %al,%al
c100a71e:	74 16                	je     c100a736 <inode_open+0xbd>
c100a720:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a723:	83 ec 08             	sub    $0x8,%esp
c100a726:	68 00 04 00 00       	push   $0x400
c100a72b:	50                   	push   %eax
c100a72c:	e8 a7 86 ff ff       	call   c1002dd8 <vmm_free>
c100a731:	83 c4 10             	add    $0x10,%esp
c100a734:	eb 14                	jmp    c100a74a <inode_open+0xd1>
c100a736:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a739:	83 ec 08             	sub    $0x8,%esp
c100a73c:	68 00 02 00 00       	push   $0x200
c100a741:	50                   	push   %eax
c100a742:	e8 91 86 ff ff       	call   c1002dd8 <vmm_free>
c100a747:	83 c4 10             	add    $0x10,%esp
c100a74a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a74d:	c9                   	leave  
c100a74e:	c3                   	ret    

c100a74f <inode_close>:
c100a74f:	55                   	push   %ebp
c100a750:	89 e5                	mov    %esp,%ebp
c100a752:	83 ec 08             	sub    $0x8,%esp
c100a755:	8b 45 08             	mov    0x8(%ebp),%eax
c100a758:	83 ec 08             	sub    $0x8,%esp
c100a75b:	6a 44                	push   $0x44
c100a75d:	50                   	push   %eax
c100a75e:	e8 75 86 ff ff       	call   c1002dd8 <vmm_free>
c100a763:	83 c4 10             	add    $0x10,%esp
c100a766:	90                   	nop
c100a767:	c9                   	leave  
c100a768:	c3                   	ret    

c100a769 <inode_delete>:
c100a769:	55                   	push   %ebp
c100a76a:	89 e5                	mov    %esp,%ebp
c100a76c:	83 ec 18             	sub    $0x18,%esp
c100a76f:	81 7d 0c ff 0f 00 00 	cmpl   $0xfff,0xc(%ebp)
c100a776:	76 16                	jbe    c100a78e <inode_delete+0x25>
c100a778:	68 f8 c9 00 c1       	push   $0xc100c9f8
c100a77d:	68 b4 ca 00 c1       	push   $0xc100cab4
c100a782:	6a 6b                	push   $0x6b
c100a784:	68 08 ca 00 c1       	push   $0xc100ca08
c100a789:	e8 dd 5b ff ff       	call   c100036b <__PANIC>
c100a78e:	83 ec 04             	sub    $0x4,%esp
c100a791:	8d 45 e8             	lea    -0x18(%ebp),%eax
c100a794:	50                   	push   %eax
c100a795:	ff 75 0c             	pushl  0xc(%ebp)
c100a798:	ff 75 08             	pushl  0x8(%ebp)
c100a79b:	e8 46 fd ff ff       	call   c100a4e6 <inode_locate>
c100a7a0:	83 c4 10             	add    $0x10,%esp
c100a7a3:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a7a6:	8b 45 08             	mov    0x8(%ebp),%eax
c100a7a9:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c100a7ad:	0f b6 c8             	movzbl %al,%ecx
c100a7b0:	8b 45 08             	mov    0x8(%ebp),%eax
c100a7b3:	8b 40 0c             	mov    0xc(%eax),%eax
c100a7b6:	01 c8                	add    %ecx,%eax
c100a7b8:	39 c2                	cmp    %eax,%edx
c100a7ba:	76 16                	jbe    c100a7d2 <inode_delete+0x69>
c100a7bc:	68 3c ca 00 c1       	push   $0xc100ca3c
c100a7c1:	68 b4 ca 00 c1       	push   $0xc100cab4
c100a7c6:	6a 6e                	push   $0x6e
c100a7c8:	68 08 ca 00 c1       	push   $0xc100ca08
c100a7cd:	e8 99 5b ff ff       	call   c100036b <__PANIC>
c100a7d2:	8b 45 10             	mov    0x10(%ebp),%eax
c100a7d5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a7d8:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
c100a7dc:	84 c0                	test   %al,%al
c100a7de:	74 42                	je     c100a822 <inode_delete+0xb9>
c100a7e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a7e3:	83 ec 04             	sub    $0x4,%esp
c100a7e6:	6a 02                	push   $0x2
c100a7e8:	50                   	push   %eax
c100a7e9:	ff 75 f4             	pushl  -0xc(%ebp)
c100a7ec:	e8 69 b8 ff ff       	call   c100605a <ide_read>
c100a7f1:	83 c4 10             	add    $0x10,%esp
c100a7f4:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a7f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a7fa:	01 d0                	add    %edx,%eax
c100a7fc:	83 ec 04             	sub    $0x4,%esp
c100a7ff:	6a 44                	push   $0x44
c100a801:	6a 00                	push   $0x0
c100a803:	50                   	push   %eax
c100a804:	e8 a1 58 ff ff       	call   c10000aa <memset>
c100a809:	83 c4 10             	add    $0x10,%esp
c100a80c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a80f:	83 ec 04             	sub    $0x4,%esp
c100a812:	6a 02                	push   $0x2
c100a814:	50                   	push   %eax
c100a815:	ff 75 f4             	pushl  -0xc(%ebp)
c100a818:	e8 7a b8 ff ff       	call   c1006097 <ide_write>
c100a81d:	83 c4 10             	add    $0x10,%esp
c100a820:	eb 40                	jmp    c100a862 <inode_delete+0xf9>
c100a822:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a825:	83 ec 04             	sub    $0x4,%esp
c100a828:	6a 01                	push   $0x1
c100a82a:	50                   	push   %eax
c100a82b:	ff 75 f4             	pushl  -0xc(%ebp)
c100a82e:	e8 27 b8 ff ff       	call   c100605a <ide_read>
c100a833:	83 c4 10             	add    $0x10,%esp
c100a836:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a839:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a83c:	01 d0                	add    %edx,%eax
c100a83e:	83 ec 04             	sub    $0x4,%esp
c100a841:	6a 44                	push   $0x44
c100a843:	6a 00                	push   $0x0
c100a845:	50                   	push   %eax
c100a846:	e8 5f 58 ff ff       	call   c10000aa <memset>
c100a84b:	83 c4 10             	add    $0x10,%esp
c100a84e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a851:	83 ec 04             	sub    $0x4,%esp
c100a854:	6a 01                	push   $0x1
c100a856:	50                   	push   %eax
c100a857:	ff 75 f4             	pushl  -0xc(%ebp)
c100a85a:	e8 38 b8 ff ff       	call   c1006097 <ide_write>
c100a85f:	83 c4 10             	add    $0x10,%esp
c100a862:	90                   	nop
c100a863:	c9                   	leave  
c100a864:	c3                   	ret    

c100a865 <inode_release>:
c100a865:	55                   	push   %ebp
c100a866:	89 e5                	mov    %esp,%ebp
c100a868:	57                   	push   %edi
c100a869:	53                   	push   %ebx
c100a86a:	81 ec 50 02 00 00    	sub    $0x250,%esp
c100a870:	83 ec 08             	sub    $0x8,%esp
c100a873:	ff 75 0c             	pushl  0xc(%ebp)
c100a876:	ff 75 08             	pushl  0x8(%ebp)
c100a879:	e8 fb fd ff ff       	call   c100a679 <inode_open>
c100a87e:	83 c4 10             	add    $0x10,%esp
c100a881:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a884:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a887:	8b 00                	mov    (%eax),%eax
c100a889:	39 45 0c             	cmp    %eax,0xc(%ebp)
c100a88c:	74 19                	je     c100a8a7 <inode_release+0x42>
c100a88e:	68 7c ca 00 c1       	push   $0xc100ca7c
c100a893:	68 c4 ca 00 c1       	push   $0xc100cac4
c100a898:	68 85 00 00 00       	push   $0x85
c100a89d:	68 08 ca 00 c1       	push   $0xc100ca08
c100a8a2:	e8 c4 5a ff ff       	call   c100036b <__PANIC>
c100a8a7:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100a8ab:	c6 45 f6 0c          	movb   $0xc,-0xa(%ebp)
c100a8af:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
c100a8b5:	b8 00 00 00 00       	mov    $0x0,%eax
c100a8ba:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100a8bf:	89 d7                	mov    %edx,%edi
c100a8c1:	f3 ab                	rep stos %eax,%es:(%edi)
c100a8c3:	eb 22                	jmp    c100a8e7 <inode_release+0x82>
c100a8c5:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c100a8c9:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a8cd:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a8d0:	83 c1 04             	add    $0x4,%ecx
c100a8d3:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c100a8d6:	89 94 85 b0 fd ff ff 	mov    %edx,-0x250(%ebp,%eax,4)
c100a8dd:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a8e1:	83 c0 01             	add    $0x1,%eax
c100a8e4:	88 45 f7             	mov    %al,-0x9(%ebp)
c100a8e7:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c100a8eb:	76 d8                	jbe    c100a8c5 <inode_release+0x60>
c100a8ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a8f0:	8b 40 40             	mov    0x40(%eax),%eax
c100a8f3:	85 c0                	test   %eax,%eax
c100a8f5:	0f 84 b2 00 00 00    	je     c100a9ad <inode_release+0x148>
c100a8fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a8fe:	8b 50 40             	mov    0x40(%eax),%edx
c100a901:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
c100a907:	83 c0 30             	add    $0x30,%eax
c100a90a:	83 ec 04             	sub    $0x4,%esp
c100a90d:	6a 01                	push   $0x1
c100a90f:	52                   	push   %edx
c100a910:	50                   	push   %eax
c100a911:	e8 44 b7 ff ff       	call   c100605a <ide_read>
c100a916:	83 c4 10             	add    $0x10,%esp
c100a919:	c6 45 f6 8c          	movb   $0x8c,-0xa(%ebp)
c100a91d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a920:	8b 50 40             	mov    0x40(%eax),%edx
c100a923:	8b 45 08             	mov    0x8(%ebp),%eax
c100a926:	8b 40 10             	mov    0x10(%eax),%eax
c100a929:	8b 40 28             	mov    0x28(%eax),%eax
c100a92c:	29 c2                	sub    %eax,%edx
c100a92e:	89 d0                	mov    %edx,%eax
c100a930:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a933:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100a937:	75 19                	jne    c100a952 <inode_release+0xed>
c100a939:	68 9c ca 00 c1       	push   $0xc100ca9c
c100a93e:	68 c4 ca 00 c1       	push   $0xc100cac4
c100a943:	68 9d 00 00 00       	push   $0x9d
c100a948:	68 08 ca 00 c1       	push   $0xc100ca08
c100a94d:	e8 19 5a ff ff       	call   c100036b <__PANIC>
c100a952:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a955:	c1 e8 03             	shr    $0x3,%eax
c100a958:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a95b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a95e:	83 e0 07             	and    $0x7,%eax
c100a961:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a964:	8b 45 08             	mov    0x8(%ebp),%eax
c100a967:	8b 50 18             	mov    0x18(%eax),%edx
c100a96a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a96d:	01 d0                	add    %edx,%eax
c100a96f:	0f b6 00             	movzbl (%eax),%eax
c100a972:	89 c2                	mov    %eax,%edx
c100a974:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a977:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a97c:	89 c1                	mov    %eax,%ecx
c100a97e:	d3 e3                	shl    %cl,%ebx
c100a980:	89 d8                	mov    %ebx,%eax
c100a982:	f7 d0                	not    %eax
c100a984:	89 d1                	mov    %edx,%ecx
c100a986:	21 c1                	and    %eax,%ecx
c100a988:	8b 45 08             	mov    0x8(%ebp),%eax
c100a98b:	8b 50 18             	mov    0x18(%eax),%edx
c100a98e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a991:	01 d0                	add    %edx,%eax
c100a993:	89 ca                	mov    %ecx,%edx
c100a995:	88 10                	mov    %dl,(%eax)
c100a997:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a99c:	83 ec 04             	sub    $0x4,%esp
c100a99f:	6a 01                	push   $0x1
c100a9a1:	ff 75 ec             	pushl  -0x14(%ebp)
c100a9a4:	50                   	push   %eax
c100a9a5:	e8 90 eb ff ff       	call   c100953a <bitmap_sync>
c100a9aa:	83 c4 10             	add    $0x10,%esp
c100a9ad:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100a9b1:	e9 b9 00 00 00       	jmp    c100aa6f <inode_release+0x20a>
c100a9b6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a9ba:	8b 84 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%eax
c100a9c1:	85 c0                	test   %eax,%eax
c100a9c3:	0f 84 9c 00 00 00    	je     c100aa65 <inode_release+0x200>
c100a9c9:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100a9d0:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a9d4:	8b 94 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%edx
c100a9db:	8b 45 08             	mov    0x8(%ebp),%eax
c100a9de:	8b 40 10             	mov    0x10(%eax),%eax
c100a9e1:	8b 40 28             	mov    0x28(%eax),%eax
c100a9e4:	29 c2                	sub    %eax,%edx
c100a9e6:	89 d0                	mov    %edx,%eax
c100a9e8:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a9eb:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100a9ef:	75 19                	jne    c100aa0a <inode_release+0x1a5>
c100a9f1:	68 9c ca 00 c1       	push   $0xc100ca9c
c100a9f6:	68 c4 ca 00 c1       	push   $0xc100cac4
c100a9fb:	68 aa 00 00 00       	push   $0xaa
c100aa00:	68 08 ca 00 c1       	push   $0xc100ca08
c100aa05:	e8 61 59 ff ff       	call   c100036b <__PANIC>
c100aa0a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100aa0d:	c1 e8 03             	shr    $0x3,%eax
c100aa10:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100aa13:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100aa16:	83 e0 07             	and    $0x7,%eax
c100aa19:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100aa1c:	8b 45 08             	mov    0x8(%ebp),%eax
c100aa1f:	8b 50 18             	mov    0x18(%eax),%edx
c100aa22:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100aa25:	01 d0                	add    %edx,%eax
c100aa27:	0f b6 00             	movzbl (%eax),%eax
c100aa2a:	89 c2                	mov    %eax,%edx
c100aa2c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100aa2f:	bb 01 00 00 00       	mov    $0x1,%ebx
c100aa34:	89 c1                	mov    %eax,%ecx
c100aa36:	d3 e3                	shl    %cl,%ebx
c100aa38:	89 d8                	mov    %ebx,%eax
c100aa3a:	f7 d0                	not    %eax
c100aa3c:	89 d1                	mov    %edx,%ecx
c100aa3e:	21 c1                	and    %eax,%ecx
c100aa40:	8b 45 08             	mov    0x8(%ebp),%eax
c100aa43:	8b 50 18             	mov    0x18(%eax),%edx
c100aa46:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100aa49:	01 d0                	add    %edx,%eax
c100aa4b:	89 ca                	mov    %ecx,%edx
c100aa4d:	88 10                	mov    %dl,(%eax)
c100aa4f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100aa54:	83 ec 04             	sub    $0x4,%esp
c100aa57:	6a 01                	push   $0x1
c100aa59:	ff 75 ec             	pushl  -0x14(%ebp)
c100aa5c:	50                   	push   %eax
c100aa5d:	e8 d8 ea ff ff       	call   c100953a <bitmap_sync>
c100aa62:	83 c4 10             	add    $0x10,%esp
c100aa65:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100aa69:	83 c0 01             	add    $0x1,%eax
c100aa6c:	88 45 f7             	mov    %al,-0x9(%ebp)
c100aa6f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100aa73:	3a 45 f6             	cmp    -0xa(%ebp),%al
c100aa76:	0f 82 3a ff ff ff    	jb     c100a9b6 <inode_release+0x151>
c100aa7c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100aa7f:	c1 e8 03             	shr    $0x3,%eax
c100aa82:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100aa85:	8b 45 0c             	mov    0xc(%ebp),%eax
c100aa88:	83 e0 07             	and    $0x7,%eax
c100aa8b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100aa8e:	8b 45 08             	mov    0x8(%ebp),%eax
c100aa91:	8b 50 20             	mov    0x20(%eax),%edx
c100aa94:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100aa97:	01 d0                	add    %edx,%eax
c100aa99:	0f b6 00             	movzbl (%eax),%eax
c100aa9c:	89 c2                	mov    %eax,%edx
c100aa9e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100aaa1:	bb 01 00 00 00       	mov    $0x1,%ebx
c100aaa6:	89 c1                	mov    %eax,%ecx
c100aaa8:	d3 e3                	shl    %cl,%ebx
c100aaaa:	89 d8                	mov    %ebx,%eax
c100aaac:	f7 d0                	not    %eax
c100aaae:	89 d1                	mov    %edx,%ecx
c100aab0:	21 c1                	and    %eax,%ecx
c100aab2:	8b 45 08             	mov    0x8(%ebp),%eax
c100aab5:	8b 50 20             	mov    0x20(%eax),%edx
c100aab8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100aabb:	01 d0                	add    %edx,%eax
c100aabd:	89 ca                	mov    %ecx,%edx
c100aabf:	88 10                	mov    %dl,(%eax)
c100aac1:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100aac6:	83 ec 04             	sub    $0x4,%esp
c100aac9:	6a 00                	push   $0x0
c100aacb:	ff 75 0c             	pushl  0xc(%ebp)
c100aace:	50                   	push   %eax
c100aacf:	e8 66 ea ff ff       	call   c100953a <bitmap_sync>
c100aad4:	83 c4 10             	add    $0x10,%esp
c100aad7:	83 ec 08             	sub    $0x8,%esp
c100aada:	6a 02                	push   $0x2
c100aadc:	68 00 04 00 00       	push   $0x400
c100aae1:	e8 cd 81 ff ff       	call   c1002cb3 <vmm_malloc>
c100aae6:	83 c4 10             	add    $0x10,%esp
c100aae9:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100aaec:	83 ec 04             	sub    $0x4,%esp
c100aaef:	ff 75 e0             	pushl  -0x20(%ebp)
c100aaf2:	ff 75 0c             	pushl  0xc(%ebp)
c100aaf5:	ff 75 08             	pushl  0x8(%ebp)
c100aaf8:	e8 6c fc ff ff       	call   c100a769 <inode_delete>
c100aafd:	83 c4 10             	add    $0x10,%esp
c100ab00:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100ab03:	83 ec 08             	sub    $0x8,%esp
c100ab06:	68 00 04 00 00       	push   $0x400
c100ab0b:	50                   	push   %eax
c100ab0c:	e8 c7 82 ff ff       	call   c1002dd8 <vmm_free>
c100ab11:	83 c4 10             	add    $0x10,%esp
c100ab14:	83 ec 0c             	sub    $0xc,%esp
c100ab17:	ff 75 f0             	pushl  -0x10(%ebp)
c100ab1a:	e8 30 fc ff ff       	call   c100a74f <inode_close>
c100ab1f:	83 c4 10             	add    $0x10,%esp
c100ab22:	90                   	nop
c100ab23:	8d 65 f8             	lea    -0x8(%ebp),%esp
c100ab26:	5b                   	pop    %ebx
c100ab27:	5f                   	pop    %edi
c100ab28:	5d                   	pop    %ebp
c100ab29:	c3                   	ret    

c100ab2a <inode_init>:
c100ab2a:	55                   	push   %ebp
c100ab2b:	89 e5                	mov    %esp,%ebp
c100ab2d:	83 ec 10             	sub    $0x10,%esp
c100ab30:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ab33:	8b 55 08             	mov    0x8(%ebp),%edx
c100ab36:	89 10                	mov    %edx,(%eax)
c100ab38:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ab3b:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100ab42:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ab45:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100ab4c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ab4f:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c100ab53:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100ab5a:	eb 14                	jmp    c100ab70 <inode_init+0x46>
c100ab5c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ab5f:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100ab62:	83 c2 04             	add    $0x4,%edx
c100ab65:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c100ab6c:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100ab70:	83 7d fc 0c          	cmpl   $0xc,-0x4(%ebp)
c100ab74:	7e e6                	jle    c100ab5c <inode_init+0x32>
c100ab76:	90                   	nop
c100ab77:	90                   	nop
c100ab78:	c9                   	leave  
c100ab79:	c3                   	ret    

c100ab7a <hash32>:
c100ab7a:	55                   	push   %ebp
c100ab7b:	89 e5                	mov    %esp,%ebp
c100ab7d:	83 ec 10             	sub    $0x10,%esp
c100ab80:	8b 45 08             	mov    0x8(%ebp),%eax
c100ab83:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100ab89:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100ab8c:	b8 20 00 00 00       	mov    $0x20,%eax
c100ab91:	2b 45 0c             	sub    0xc(%ebp),%eax
c100ab94:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100ab97:	89 c1                	mov    %eax,%ecx
c100ab99:	d3 ea                	shr    %cl,%edx
c100ab9b:	89 d0                	mov    %edx,%eax
c100ab9d:	c9                   	leave  
c100ab9e:	c3                   	ret    

c100ab9f <is_pipe>:
c100ab9f:	55                   	push   %ebp
c100aba0:	89 e5                	mov    %esp,%ebp
c100aba2:	83 ec 18             	sub    $0x18,%esp
c100aba5:	83 ec 0c             	sub    $0xc,%esp
c100aba8:	ff 75 08             	pushl  0x8(%ebp)
c100abab:	e8 6a c4 ff ff       	call   c100701a <fd_local2global>
c100abb0:	83 c4 10             	add    $0x10,%esp
c100abb3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100abb6:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100abb9:	89 d0                	mov    %edx,%eax
c100abbb:	01 c0                	add    %eax,%eax
c100abbd:	01 d0                	add    %edx,%eax
c100abbf:	c1 e0 02             	shl    $0x2,%eax
c100abc2:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c100abc7:	8b 00                	mov    (%eax),%eax
c100abc9:	3d ff ff 00 00       	cmp    $0xffff,%eax
c100abce:	0f 94 c0             	sete   %al
c100abd1:	c9                   	leave  
c100abd2:	c3                   	ret    

c100abd3 <sys_pipe>:
c100abd3:	55                   	push   %ebp
c100abd4:	89 e5                	mov    %esp,%ebp
c100abd6:	53                   	push   %ebx
c100abd7:	83 ec 14             	sub    $0x14,%esp
c100abda:	e8 42 e7 ff ff       	call   c1009321 <get_free_slot_in_global>
c100abdf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100abe2:	83 ec 08             	sub    $0x8,%esp
c100abe5:	6a 01                	push   $0x1
c100abe7:	68 00 10 00 00       	push   $0x1000
c100abec:	e8 c2 80 ff ff       	call   c1002cb3 <vmm_malloc>
c100abf1:	83 c4 10             	add    $0x10,%esp
c100abf4:	89 c1                	mov    %eax,%ecx
c100abf6:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100abf9:	89 d0                	mov    %edx,%eax
c100abfb:	01 c0                	add    %eax,%eax
c100abfd:	01 d0                	add    %edx,%eax
c100abff:	c1 e0 02             	shl    $0x2,%eax
c100ac02:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100ac07:	89 08                	mov    %ecx,(%eax)
c100ac09:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ac0c:	89 d0                	mov    %edx,%eax
c100ac0e:	01 c0                	add    %eax,%eax
c100ac10:	01 d0                	add    %edx,%eax
c100ac12:	c1 e0 02             	shl    $0x2,%eax
c100ac15:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100ac1a:	8b 00                	mov    (%eax),%eax
c100ac1c:	83 ec 0c             	sub    $0xc,%esp
c100ac1f:	50                   	push   %eax
c100ac20:	e8 bb 01 00 00       	call   c100ade0 <ioqueue_init>
c100ac25:	83 c4 10             	add    $0x10,%esp
c100ac28:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ac2b:	89 d0                	mov    %edx,%eax
c100ac2d:	01 c0                	add    %eax,%eax
c100ac2f:	01 d0                	add    %edx,%eax
c100ac31:	c1 e0 02             	shl    $0x2,%eax
c100ac34:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100ac39:	8b 00                	mov    (%eax),%eax
c100ac3b:	85 c0                	test   %eax,%eax
c100ac3d:	75 07                	jne    c100ac46 <sys_pipe+0x73>
c100ac3f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100ac44:	eb 5c                	jmp    c100aca2 <sys_pipe+0xcf>
c100ac46:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ac49:	89 d0                	mov    %edx,%eax
c100ac4b:	01 c0                	add    %eax,%eax
c100ac4d:	01 d0                	add    %edx,%eax
c100ac4f:	c1 e0 02             	shl    $0x2,%eax
c100ac52:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c100ac57:	c7 00 ff ff 00 00    	movl   $0xffff,(%eax)
c100ac5d:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ac60:	89 d0                	mov    %edx,%eax
c100ac62:	01 c0                	add    %eax,%eax
c100ac64:	01 d0                	add    %edx,%eax
c100ac66:	c1 e0 02             	shl    $0x2,%eax
c100ac69:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100ac6e:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
c100ac74:	83 ec 0c             	sub    $0xc,%esp
c100ac77:	ff 75 f4             	pushl  -0xc(%ebp)
c100ac7a:	e8 e7 e6 ff ff       	call   c1009366 <task_fd_install>
c100ac7f:	83 c4 10             	add    $0x10,%esp
c100ac82:	8b 55 08             	mov    0x8(%ebp),%edx
c100ac85:	89 02                	mov    %eax,(%edx)
c100ac87:	8b 45 08             	mov    0x8(%ebp),%eax
c100ac8a:	8d 58 04             	lea    0x4(%eax),%ebx
c100ac8d:	83 ec 0c             	sub    $0xc,%esp
c100ac90:	ff 75 f4             	pushl  -0xc(%ebp)
c100ac93:	e8 ce e6 ff ff       	call   c1009366 <task_fd_install>
c100ac98:	83 c4 10             	add    $0x10,%esp
c100ac9b:	89 03                	mov    %eax,(%ebx)
c100ac9d:	b8 00 00 00 00       	mov    $0x0,%eax
c100aca2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100aca5:	c9                   	leave  
c100aca6:	c3                   	ret    

c100aca7 <pipe_read>:
c100aca7:	55                   	push   %ebp
c100aca8:	89 e5                	mov    %esp,%ebp
c100acaa:	83 ec 28             	sub    $0x28,%esp
c100acad:	8b 45 0c             	mov    0xc(%ebp),%eax
c100acb0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100acb3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100acba:	8b 45 08             	mov    0x8(%ebp),%eax
c100acbd:	83 ec 0c             	sub    $0xc,%esp
c100acc0:	50                   	push   %eax
c100acc1:	e8 54 c3 ff ff       	call   c100701a <fd_local2global>
c100acc6:	83 c4 10             	add    $0x10,%esp
c100acc9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100accc:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100accf:	89 d0                	mov    %edx,%eax
c100acd1:	01 c0                	add    %eax,%eax
c100acd3:	01 d0                	add    %edx,%eax
c100acd5:	c1 e0 02             	shl    $0x2,%eax
c100acd8:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100acdd:	8b 00                	mov    (%eax),%eax
c100acdf:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100ace2:	83 ec 0c             	sub    $0xc,%esp
c100ace5:	ff 75 e8             	pushl  -0x18(%ebp)
c100ace8:	e8 3d 03 00 00       	call   c100b02a <ioq_length>
c100aced:	83 c4 10             	add    $0x10,%esp
c100acf0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100acf3:	8b 45 10             	mov    0x10(%ebp),%eax
c100acf6:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c100acf9:	0f 46 45 e4          	cmovbe -0x1c(%ebp),%eax
c100acfd:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100ad00:	eb 1b                	jmp    c100ad1d <pipe_read+0x76>
c100ad02:	83 ec 0c             	sub    $0xc,%esp
c100ad05:	ff 75 e8             	pushl  -0x18(%ebp)
c100ad08:	e8 f0 01 00 00       	call   c100aefd <ioq_getchar>
c100ad0d:	83 c4 10             	add    $0x10,%esp
c100ad10:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ad13:	88 02                	mov    %al,(%edx)
c100ad15:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100ad19:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100ad1d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100ad20:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c100ad23:	72 dd                	jb     c100ad02 <pipe_read+0x5b>
c100ad25:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100ad28:	c9                   	leave  
c100ad29:	c3                   	ret    

c100ad2a <pipe_write>:
c100ad2a:	55                   	push   %ebp
c100ad2b:	89 e5                	mov    %esp,%ebp
c100ad2d:	83 ec 28             	sub    $0x28,%esp
c100ad30:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100ad37:	8b 45 08             	mov    0x8(%ebp),%eax
c100ad3a:	83 ec 0c             	sub    $0xc,%esp
c100ad3d:	50                   	push   %eax
c100ad3e:	e8 d7 c2 ff ff       	call   c100701a <fd_local2global>
c100ad43:	83 c4 10             	add    $0x10,%esp
c100ad46:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100ad49:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100ad4c:	89 d0                	mov    %edx,%eax
c100ad4e:	01 c0                	add    %eax,%eax
c100ad50:	01 d0                	add    %edx,%eax
c100ad52:	c1 e0 02             	shl    $0x2,%eax
c100ad55:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100ad5a:	8b 00                	mov    (%eax),%eax
c100ad5c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100ad5f:	83 ec 0c             	sub    $0xc,%esp
c100ad62:	ff 75 e8             	pushl  -0x18(%ebp)
c100ad65:	e8 c0 02 00 00       	call   c100b02a <ioq_length>
c100ad6a:	83 c4 10             	add    $0x10,%esp
c100ad6d:	ba 40 00 00 00       	mov    $0x40,%edx
c100ad72:	29 c2                	sub    %eax,%edx
c100ad74:	89 d0                	mov    %edx,%eax
c100ad76:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100ad79:	8b 45 10             	mov    0x10(%ebp),%eax
c100ad7c:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c100ad7f:	0f 46 45 e4          	cmovbe -0x1c(%ebp),%eax
c100ad83:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100ad86:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ad89:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100ad8c:	eb 20                	jmp    c100adae <pipe_write+0x84>
c100ad8e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100ad91:	0f b6 00             	movzbl (%eax),%eax
c100ad94:	0f be c0             	movsbl %al,%eax
c100ad97:	83 ec 08             	sub    $0x8,%esp
c100ad9a:	50                   	push   %eax
c100ad9b:	ff 75 e8             	pushl  -0x18(%ebp)
c100ad9e:	e8 ef 01 00 00       	call   c100af92 <ioq_putchar>
c100ada3:	83 c4 10             	add    $0x10,%esp
c100ada6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100adaa:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100adae:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100adb1:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c100adb4:	72 d8                	jb     c100ad8e <pipe_write+0x64>
c100adb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100adb9:	c9                   	leave  
c100adba:	c3                   	ret    

c100adbb <hash32>:
c100adbb:	55                   	push   %ebp
c100adbc:	89 e5                	mov    %esp,%ebp
c100adbe:	83 ec 10             	sub    $0x10,%esp
c100adc1:	8b 45 08             	mov    0x8(%ebp),%eax
c100adc4:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100adca:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100adcd:	b8 20 00 00 00       	mov    $0x20,%eax
c100add2:	2b 45 0c             	sub    0xc(%ebp),%eax
c100add5:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100add8:	89 c1                	mov    %eax,%ecx
c100adda:	d3 ea                	shr    %cl,%edx
c100addc:	89 d0                	mov    %edx,%eax
c100adde:	c9                   	leave  
c100addf:	c3                   	ret    

c100ade0 <ioqueue_init>:
c100ade0:	55                   	push   %ebp
c100ade1:	89 e5                	mov    %esp,%ebp
c100ade3:	83 ec 08             	sub    $0x8,%esp
c100ade6:	8b 45 08             	mov    0x8(%ebp),%eax
c100ade9:	83 ec 0c             	sub    $0xc,%esp
c100adec:	50                   	push   %eax
c100aded:	e8 4a ae ff ff       	call   c1005c3c <lock_init>
c100adf2:	83 c4 10             	add    $0x10,%esp
c100adf5:	8b 45 08             	mov    0x8(%ebp),%eax
c100adf8:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c100adff:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae02:	8b 50 18             	mov    0x18(%eax),%edx
c100ae05:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae08:	89 50 14             	mov    %edx,0x14(%eax)
c100ae0b:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae0e:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
c100ae15:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae18:	8b 50 60             	mov    0x60(%eax),%edx
c100ae1b:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae1e:	89 50 5c             	mov    %edx,0x5c(%eax)
c100ae21:	90                   	nop
c100ae22:	c9                   	leave  
c100ae23:	c3                   	ret    

c100ae24 <next_pos>:
c100ae24:	55                   	push   %ebp
c100ae25:	89 e5                	mov    %esp,%ebp
c100ae27:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae2a:	8d 50 01             	lea    0x1(%eax),%edx
c100ae2d:	89 d0                	mov    %edx,%eax
c100ae2f:	c1 f8 1f             	sar    $0x1f,%eax
c100ae32:	c1 e8 1a             	shr    $0x1a,%eax
c100ae35:	01 c2                	add    %eax,%edx
c100ae37:	83 e2 3f             	and    $0x3f,%edx
c100ae3a:	29 c2                	sub    %eax,%edx
c100ae3c:	89 d0                	mov    %edx,%eax
c100ae3e:	5d                   	pop    %ebp
c100ae3f:	c3                   	ret    

c100ae40 <ioq_full>:
c100ae40:	55                   	push   %ebp
c100ae41:	89 e5                	mov    %esp,%ebp
c100ae43:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae46:	8b 40 5c             	mov    0x5c(%eax),%eax
c100ae49:	50                   	push   %eax
c100ae4a:	e8 d5 ff ff ff       	call   c100ae24 <next_pos>
c100ae4f:	83 c4 04             	add    $0x4,%esp
c100ae52:	8b 55 08             	mov    0x8(%ebp),%edx
c100ae55:	8b 52 60             	mov    0x60(%edx),%edx
c100ae58:	39 d0                	cmp    %edx,%eax
c100ae5a:	0f 94 c0             	sete   %al
c100ae5d:	c9                   	leave  
c100ae5e:	c3                   	ret    

c100ae5f <ioq_empty>:
c100ae5f:	55                   	push   %ebp
c100ae60:	89 e5                	mov    %esp,%ebp
c100ae62:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae65:	8b 50 5c             	mov    0x5c(%eax),%edx
c100ae68:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae6b:	8b 40 60             	mov    0x60(%eax),%eax
c100ae6e:	39 c2                	cmp    %eax,%edx
c100ae70:	0f 94 c0             	sete   %al
c100ae73:	5d                   	pop    %ebp
c100ae74:	c3                   	ret    

c100ae75 <ioq_wait>:
c100ae75:	55                   	push   %ebp
c100ae76:	89 e5                	mov    %esp,%ebp
c100ae78:	83 ec 08             	sub    $0x8,%esp
c100ae7b:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae7e:	8b 00                	mov    (%eax),%eax
c100ae80:	85 c0                	test   %eax,%eax
c100ae82:	75 06                	jne    c100ae8a <ioq_wait+0x15>
c100ae84:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100ae88:	75 16                	jne    c100aea0 <ioq_wait+0x2b>
c100ae8a:	68 d4 ca 00 c1       	push   $0xc100cad4
c100ae8f:	68 3c cb 00 c1       	push   $0xc100cb3c
c100ae94:	6a 1f                	push   $0x1f
c100ae96:	68 f8 ca 00 c1       	push   $0xc100caf8
c100ae9b:	e8 cb 54 ff ff       	call   c100036b <__PANIC>
c100aea0:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c100aea6:	8b 45 08             	mov    0x8(%ebp),%eax
c100aea9:	89 10                	mov    %edx,(%eax)
c100aeab:	83 ec 0c             	sub    $0xc,%esp
c100aeae:	6a 01                	push   $0x1
c100aeb0:	e8 ae 8f ff ff       	call   c1003e63 <thread_block>
c100aeb5:	83 c4 10             	add    $0x10,%esp
c100aeb8:	90                   	nop
c100aeb9:	c9                   	leave  
c100aeba:	c3                   	ret    

c100aebb <wakeup>:
c100aebb:	55                   	push   %ebp
c100aebc:	89 e5                	mov    %esp,%ebp
c100aebe:	83 ec 08             	sub    $0x8,%esp
c100aec1:	8b 45 08             	mov    0x8(%ebp),%eax
c100aec4:	8b 00                	mov    (%eax),%eax
c100aec6:	85 c0                	test   %eax,%eax
c100aec8:	75 16                	jne    c100aee0 <wakeup+0x25>
c100aeca:	68 2c cb 00 c1       	push   $0xc100cb2c
c100aecf:	68 48 cb 00 c1       	push   $0xc100cb48
c100aed4:	6a 26                	push   $0x26
c100aed6:	68 f8 ca 00 c1       	push   $0xc100caf8
c100aedb:	e8 8b 54 ff ff       	call   c100036b <__PANIC>
c100aee0:	8b 45 08             	mov    0x8(%ebp),%eax
c100aee3:	8b 00                	mov    (%eax),%eax
c100aee5:	83 ec 0c             	sub    $0xc,%esp
c100aee8:	50                   	push   %eax
c100aee9:	e8 a3 8f ff ff       	call   c1003e91 <thread_unblock>
c100aeee:	83 c4 10             	add    $0x10,%esp
c100aef1:	8b 45 08             	mov    0x8(%ebp),%eax
c100aef4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100aefa:	90                   	nop
c100aefb:	c9                   	leave  
c100aefc:	c3                   	ret    

c100aefd <ioq_getchar>:
c100aefd:	55                   	push   %ebp
c100aefe:	89 e5                	mov    %esp,%ebp
c100af00:	83 ec 18             	sub    $0x18,%esp
c100af03:	eb 30                	jmp    c100af35 <ioq_getchar+0x38>
c100af05:	8b 45 08             	mov    0x8(%ebp),%eax
c100af08:	83 ec 0c             	sub    $0xc,%esp
c100af0b:	50                   	push   %eax
c100af0c:	e8 c9 ae ff ff       	call   c1005dda <lock_acquire>
c100af11:	83 c4 10             	add    $0x10,%esp
c100af14:	8b 45 08             	mov    0x8(%ebp),%eax
c100af17:	83 c0 18             	add    $0x18,%eax
c100af1a:	83 ec 0c             	sub    $0xc,%esp
c100af1d:	50                   	push   %eax
c100af1e:	e8 52 ff ff ff       	call   c100ae75 <ioq_wait>
c100af23:	83 c4 10             	add    $0x10,%esp
c100af26:	8b 45 08             	mov    0x8(%ebp),%eax
c100af29:	83 ec 0c             	sub    $0xc,%esp
c100af2c:	50                   	push   %eax
c100af2d:	e8 f7 ae ff ff       	call   c1005e29 <lock_release>
c100af32:	83 c4 10             	add    $0x10,%esp
c100af35:	83 ec 0c             	sub    $0xc,%esp
c100af38:	ff 75 08             	pushl  0x8(%ebp)
c100af3b:	e8 1f ff ff ff       	call   c100ae5f <ioq_empty>
c100af40:	83 c4 10             	add    $0x10,%esp
c100af43:	84 c0                	test   %al,%al
c100af45:	75 be                	jne    c100af05 <ioq_getchar+0x8>
c100af47:	8b 45 08             	mov    0x8(%ebp),%eax
c100af4a:	8b 40 60             	mov    0x60(%eax),%eax
c100af4d:	8b 55 08             	mov    0x8(%ebp),%edx
c100af50:	0f b6 44 02 1c       	movzbl 0x1c(%edx,%eax,1),%eax
c100af55:	88 45 f7             	mov    %al,-0x9(%ebp)
c100af58:	8b 45 08             	mov    0x8(%ebp),%eax
c100af5b:	8b 40 60             	mov    0x60(%eax),%eax
c100af5e:	83 ec 0c             	sub    $0xc,%esp
c100af61:	50                   	push   %eax
c100af62:	e8 bd fe ff ff       	call   c100ae24 <next_pos>
c100af67:	83 c4 10             	add    $0x10,%esp
c100af6a:	8b 55 08             	mov    0x8(%ebp),%edx
c100af6d:	89 42 60             	mov    %eax,0x60(%edx)
c100af70:	8b 45 08             	mov    0x8(%ebp),%eax
c100af73:	8b 40 14             	mov    0x14(%eax),%eax
c100af76:	85 c0                	test   %eax,%eax
c100af78:	74 12                	je     c100af8c <ioq_getchar+0x8f>
c100af7a:	8b 45 08             	mov    0x8(%ebp),%eax
c100af7d:	83 c0 14             	add    $0x14,%eax
c100af80:	83 ec 0c             	sub    $0xc,%esp
c100af83:	50                   	push   %eax
c100af84:	e8 32 ff ff ff       	call   c100aebb <wakeup>
c100af89:	83 c4 10             	add    $0x10,%esp
c100af8c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100af90:	c9                   	leave  
c100af91:	c3                   	ret    

c100af92 <ioq_putchar>:
c100af92:	55                   	push   %ebp
c100af93:	89 e5                	mov    %esp,%ebp
c100af95:	83 ec 18             	sub    $0x18,%esp
c100af98:	8b 45 0c             	mov    0xc(%ebp),%eax
c100af9b:	88 45 f4             	mov    %al,-0xc(%ebp)
c100af9e:	eb 30                	jmp    c100afd0 <ioq_putchar+0x3e>
c100afa0:	8b 45 08             	mov    0x8(%ebp),%eax
c100afa3:	83 ec 0c             	sub    $0xc,%esp
c100afa6:	50                   	push   %eax
c100afa7:	e8 2e ae ff ff       	call   c1005dda <lock_acquire>
c100afac:	83 c4 10             	add    $0x10,%esp
c100afaf:	8b 45 08             	mov    0x8(%ebp),%eax
c100afb2:	83 c0 14             	add    $0x14,%eax
c100afb5:	83 ec 0c             	sub    $0xc,%esp
c100afb8:	50                   	push   %eax
c100afb9:	e8 b7 fe ff ff       	call   c100ae75 <ioq_wait>
c100afbe:	83 c4 10             	add    $0x10,%esp
c100afc1:	8b 45 08             	mov    0x8(%ebp),%eax
c100afc4:	83 ec 0c             	sub    $0xc,%esp
c100afc7:	50                   	push   %eax
c100afc8:	e8 5c ae ff ff       	call   c1005e29 <lock_release>
c100afcd:	83 c4 10             	add    $0x10,%esp
c100afd0:	83 ec 0c             	sub    $0xc,%esp
c100afd3:	ff 75 08             	pushl  0x8(%ebp)
c100afd6:	e8 65 fe ff ff       	call   c100ae40 <ioq_full>
c100afdb:	83 c4 10             	add    $0x10,%esp
c100afde:	84 c0                	test   %al,%al
c100afe0:	75 be                	jne    c100afa0 <ioq_putchar+0xe>
c100afe2:	8b 45 08             	mov    0x8(%ebp),%eax
c100afe5:	8b 40 5c             	mov    0x5c(%eax),%eax
c100afe8:	8b 55 08             	mov    0x8(%ebp),%edx
c100afeb:	0f b6 4d f4          	movzbl -0xc(%ebp),%ecx
c100afef:	88 4c 02 1c          	mov    %cl,0x1c(%edx,%eax,1)
c100aff3:	8b 45 08             	mov    0x8(%ebp),%eax
c100aff6:	8b 40 5c             	mov    0x5c(%eax),%eax
c100aff9:	83 ec 0c             	sub    $0xc,%esp
c100affc:	50                   	push   %eax
c100affd:	e8 22 fe ff ff       	call   c100ae24 <next_pos>
c100b002:	83 c4 10             	add    $0x10,%esp
c100b005:	8b 55 08             	mov    0x8(%ebp),%edx
c100b008:	89 42 5c             	mov    %eax,0x5c(%edx)
c100b00b:	8b 45 08             	mov    0x8(%ebp),%eax
c100b00e:	8b 40 18             	mov    0x18(%eax),%eax
c100b011:	85 c0                	test   %eax,%eax
c100b013:	74 12                	je     c100b027 <ioq_putchar+0x95>
c100b015:	8b 45 08             	mov    0x8(%ebp),%eax
c100b018:	83 c0 18             	add    $0x18,%eax
c100b01b:	83 ec 0c             	sub    $0xc,%esp
c100b01e:	50                   	push   %eax
c100b01f:	e8 97 fe ff ff       	call   c100aebb <wakeup>
c100b024:	83 c4 10             	add    $0x10,%esp
c100b027:	90                   	nop
c100b028:	c9                   	leave  
c100b029:	c3                   	ret    

c100b02a <ioq_length>:
c100b02a:	55                   	push   %ebp
c100b02b:	89 e5                	mov    %esp,%ebp
c100b02d:	83 ec 10             	sub    $0x10,%esp
c100b030:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100b037:	8b 45 08             	mov    0x8(%ebp),%eax
c100b03a:	8b 50 5c             	mov    0x5c(%eax),%edx
c100b03d:	8b 45 08             	mov    0x8(%ebp),%eax
c100b040:	8b 40 60             	mov    0x60(%eax),%eax
c100b043:	39 c2                	cmp    %eax,%edx
c100b045:	7c 15                	jl     c100b05c <ioq_length+0x32>
c100b047:	8b 45 08             	mov    0x8(%ebp),%eax
c100b04a:	8b 50 5c             	mov    0x5c(%eax),%edx
c100b04d:	8b 45 08             	mov    0x8(%ebp),%eax
c100b050:	8b 40 60             	mov    0x60(%eax),%eax
c100b053:	29 c2                	sub    %eax,%edx
c100b055:	89 d0                	mov    %edx,%eax
c100b057:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100b05a:	eb 1c                	jmp    c100b078 <ioq_length+0x4e>
c100b05c:	8b 45 08             	mov    0x8(%ebp),%eax
c100b05f:	8b 50 60             	mov    0x60(%eax),%edx
c100b062:	8b 45 08             	mov    0x8(%ebp),%eax
c100b065:	8b 40 5c             	mov    0x5c(%eax),%eax
c100b068:	29 c2                	sub    %eax,%edx
c100b06a:	89 d0                	mov    %edx,%eax
c100b06c:	ba 40 00 00 00       	mov    $0x40,%edx
c100b071:	29 c2                	sub    %eax,%edx
c100b073:	89 d0                	mov    %edx,%eax
c100b075:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100b078:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100b07b:	c9                   	leave  
c100b07c:	c3                   	ret    
