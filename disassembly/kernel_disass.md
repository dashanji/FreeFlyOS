
kernel:     file format elf32-i386


Disassembly of section .init.text:

00100000 <init>:
  100000:	55                   	push   %ebp
  100001:	89 e5                	mov    %esp,%ebp
  100003:	83 ec 48             	sub    $0x48,%esp
  100006:	c7 45 c8 04 03 00 00 	movl   $0x304,-0x38(%ebp)
  10000d:	c7 45 c4 df 03 00 00 	movl   $0x3df,-0x3c(%ebp)
  100014:	b8 00 20 10 00       	mov    $0x102000,%eax
  100019:	83 c8 03             	or     $0x3,%eax
  10001c:	a3 00 10 10 00       	mov    %eax,0x101000
  100021:	ba 00 30 10 00       	mov    $0x103000,%edx
  100026:	8b 45 c8             	mov    -0x38(%ebp),%eax
  100029:	83 e8 04             	sub    $0x4,%eax
  10002c:	83 ca 03             	or     $0x3,%edx
  10002f:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  100036:	b8 00 40 10 00       	mov    $0x104000,%eax
  10003b:	83 c8 03             	or     $0x3,%eax
  10003e:	89 c2                	mov    %eax,%edx
  100040:	8b 45 c8             	mov    -0x38(%ebp),%eax
  100043:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  10004a:	ba 00 50 10 00       	mov    $0x105000,%edx
  10004f:	8b 45 c8             	mov    -0x38(%ebp),%eax
  100052:	83 c0 01             	add    $0x1,%eax
  100055:	83 ca 03             	or     $0x3,%edx
  100058:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  10005f:	ba 00 60 10 00       	mov    $0x106000,%edx
  100064:	8b 45 c8             	mov    -0x38(%ebp),%eax
  100067:	83 c0 02             	add    $0x2,%eax
  10006a:	83 ca 03             	or     $0x3,%edx
  10006d:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  100074:	b8 00 70 10 00       	mov    $0x107000,%eax
  100079:	83 c8 03             	or     $0x3,%eax
  10007c:	89 c2                	mov    %eax,%edx
  10007e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
  100081:	89 14 85 00 10 10 00 	mov    %edx,0x101000(,%eax,4)
  100088:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
  10008f:	eb 19                	jmp    1000aa <init+0xaa>
  100091:	8b 45 f4             	mov    -0xc(%ebp),%eax
  100094:	c1 e0 0c             	shl    $0xc,%eax
  100097:	83 c8 03             	or     $0x3,%eax
  10009a:	89 c2                	mov    %eax,%edx
  10009c:	8b 45 f4             	mov    -0xc(%ebp),%eax
  10009f:	89 14 85 00 20 10 00 	mov    %edx,0x102000(,%eax,4)
  1000a6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
  1000aa:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%ebp)
  1000b1:	76 de                	jbe    100091 <init+0x91>
  1000b3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
  1000ba:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
  1000c1:	eb 1d                	jmp    1000e0 <init+0xe0>
  1000c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
  1000c6:	83 c8 03             	or     $0x3,%eax
  1000c9:	89 c2                	mov    %eax,%edx
  1000cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
  1000ce:	89 14 85 00 30 10 00 	mov    %edx,0x103000(,%eax,4)
  1000d5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
  1000d9:	81 45 ec 00 10 00 00 	addl   $0x1000,-0x14(%ebp)
  1000e0:	81 7d f0 ff 03 00 00 	cmpl   $0x3ff,-0x10(%ebp)
  1000e7:	76 da                	jbe    1000c3 <init+0xc3>
  1000e9:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
  1000f0:	c7 45 e4 00 00 00 01 	movl   $0x1000000,-0x1c(%ebp)
  1000f7:	eb 1d                	jmp    100116 <init+0x116>
  1000f9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  1000fc:	83 c8 03             	or     $0x3,%eax
  1000ff:	89 c2                	mov    %eax,%edx
  100101:	8b 45 e8             	mov    -0x18(%ebp),%eax
  100104:	89 14 85 00 40 10 00 	mov    %edx,0x104000(,%eax,4)
  10010b:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
  10010f:	81 45 e4 00 10 00 00 	addl   $0x1000,-0x1c(%ebp)
  100116:	81 7d e8 ff 03 00 00 	cmpl   $0x3ff,-0x18(%ebp)
  10011d:	76 da                	jbe    1000f9 <init+0xf9>
  10011f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
  100126:	c7 45 dc 00 00 40 01 	movl   $0x1400000,-0x24(%ebp)
  10012d:	eb 1d                	jmp    10014c <init+0x14c>
  10012f:	8b 45 dc             	mov    -0x24(%ebp),%eax
  100132:	83 c8 03             	or     $0x3,%eax
  100135:	89 c2                	mov    %eax,%edx
  100137:	8b 45 e0             	mov    -0x20(%ebp),%eax
  10013a:	89 14 85 00 50 10 00 	mov    %edx,0x105000(,%eax,4)
  100141:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
  100145:	81 45 dc 00 10 00 00 	addl   $0x1000,-0x24(%ebp)
  10014c:	81 7d e0 ff 03 00 00 	cmpl   $0x3ff,-0x20(%ebp)
  100153:	76 da                	jbe    10012f <init+0x12f>
  100155:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
  10015c:	c7 45 d4 00 00 80 01 	movl   $0x1800000,-0x2c(%ebp)
  100163:	eb 1d                	jmp    100182 <init+0x182>
  100165:	8b 45 d4             	mov    -0x2c(%ebp),%eax
  100168:	83 c8 03             	or     $0x3,%eax
  10016b:	89 c2                	mov    %eax,%edx
  10016d:	8b 45 d8             	mov    -0x28(%ebp),%eax
  100170:	89 14 85 00 60 10 00 	mov    %edx,0x106000(,%eax,4)
  100177:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
  10017b:	81 45 d4 00 10 00 00 	addl   $0x1000,-0x2c(%ebp)
  100182:	81 7d d8 ff 03 00 00 	cmpl   $0x3ff,-0x28(%ebp)
  100189:	76 da                	jbe    100165 <init+0x165>
  10018b:	c7 45 c0 fe 03 00 00 	movl   $0x3fe,-0x40(%ebp)
  100192:	8b 45 c0             	mov    -0x40(%ebp),%eax
  100195:	89 45 d0             	mov    %eax,-0x30(%ebp)
  100198:	c7 45 cc 00 e0 ff 37 	movl   $0x37ffe000,-0x34(%ebp)
  10019f:	eb 1d                	jmp    1001be <init+0x1be>
  1001a1:	8b 45 cc             	mov    -0x34(%ebp),%eax
  1001a4:	83 c8 03             	or     $0x3,%eax
  1001a7:	89 c2                	mov    %eax,%edx
  1001a9:	8b 45 d0             	mov    -0x30(%ebp),%eax
  1001ac:	89 14 85 00 70 10 00 	mov    %edx,0x107000(,%eax,4)
  1001b3:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
  1001b7:	81 45 cc 00 10 00 00 	addl   $0x1000,-0x34(%ebp)
  1001be:	8b 45 c0             	mov    -0x40(%ebp),%eax
  1001c1:	83 c0 02             	add    $0x2,%eax
  1001c4:	39 45 d0             	cmp    %eax,-0x30(%ebp)
  1001c7:	72 d8                	jb     1001a1 <init+0x1a1>
  1001c9:	b8 00 10 10 00       	mov    $0x101000,%eax
  1001ce:	0f 22 d8             	mov    %eax,%cr3
  1001d1:	0f 20 c0             	mov    %cr0,%eax
  1001d4:	89 45 bc             	mov    %eax,-0x44(%ebp)
  1001d7:	81 4d bc 00 00 00 80 	orl    $0x80000000,-0x44(%ebp)
  1001de:	8b 45 bc             	mov    -0x44(%ebp),%eax
  1001e1:	0f 22 c0             	mov    %eax,%cr0
  1001e4:	b8 00 00 00 f8       	mov    $0xf8000000,%eax
  1001e9:	89 c4                	mov    %eax,%esp
  1001eb:	31 ed                	xor    %ebp,%ebp
  1001ed:	e8 78 1d f0 c0       	call   c1001f6a <main>
  1001f2:	90                   	nop
  1001f3:	c9                   	leave  
  1001f4:	c3                   	ret    

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
c10002e3:	68 40 af 00 c1       	push   $0xc100af40
c10002e8:	e8 c4 54 00 00       	call   c10057b1 <printk>
c10002ed:	83 c4 10             	add    $0x10,%esp
c10002f0:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10002f4:	0f b7 c0             	movzwl %ax,%eax
c10002f7:	83 ec 08             	sub    $0x8,%esp
c10002fa:	50                   	push   %eax
c10002fb:	68 49 af 00 c1       	push   $0xc100af49
c1000300:	e8 ac 54 00 00       	call   c10057b1 <printk>
c1000305:	83 c4 10             	add    $0x10,%esp
c1000308:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c100030c:	0f b7 c0             	movzwl %ax,%eax
c100030f:	83 ec 08             	sub    $0x8,%esp
c1000312:	50                   	push   %eax
c1000313:	68 52 af 00 c1       	push   $0xc100af52
c1000318:	e8 94 54 00 00       	call   c10057b1 <printk>
c100031d:	83 c4 10             	add    $0x10,%esp
c1000320:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
c1000324:	0f b7 c0             	movzwl %ax,%eax
c1000327:	83 ec 08             	sub    $0x8,%esp
c100032a:	50                   	push   %eax
c100032b:	68 5b af 00 c1       	push   $0xc100af5b
c1000330:	e8 7c 54 00 00       	call   c10057b1 <printk>
c1000335:	83 c4 10             	add    $0x10,%esp
c1000338:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
c100033c:	0f b7 c0             	movzwl %ax,%eax
c100033f:	83 ec 08             	sub    $0x8,%esp
c1000342:	50                   	push   %eax
c1000343:	68 64 af 00 c1       	push   $0xc100af64
c1000348:	e8 64 54 00 00       	call   c10057b1 <printk>
c100034d:	83 c4 10             	add    $0x10,%esp
c1000350:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c1000354:	0f b7 c0             	movzwl %ax,%eax
c1000357:	83 ec 08             	sub    $0x8,%esp
c100035a:	50                   	push   %eax
c100035b:	68 6d af 00 c1       	push   $0xc100af6d
c1000360:	e8 4c 54 00 00       	call   c10057b1 <printk>
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
c100037f:	68 76 af 00 c1       	push   $0xc100af76
c1000384:	e8 28 54 00 00       	call   c10057b1 <printk>
c1000389:	83 c4 10             	add    $0x10,%esp
c100038c:	83 ec 04             	sub    $0x4,%esp
c100038f:	ff 75 14             	pushl  0x14(%ebp)
c1000392:	ff 75 10             	pushl  0x10(%ebp)
c1000395:	68 94 af 00 c1       	push   $0xc100af94
c100039a:	e8 12 54 00 00       	call   c10057b1 <printk>
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
c10003bc:	68 3b b0 00 c1       	push   $0xc100b03b
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
c100044b:	68 3e b0 00 c1       	push   $0xc100b03e
c1000450:	e8 5c 53 00 00       	call   c10057b1 <printk>
c1000455:	83 c4 10             	add    $0x10,%esp
c1000458:	83 ec 0c             	sub    $0xc,%esp
c100045b:	68 44 b0 00 c1       	push   $0xc100b044
c1000460:	e8 4c 53 00 00       	call   c10057b1 <printk>
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
c100047a:	68 3e b0 00 c1       	push   $0xc100b03e
c100047f:	e8 2d 53 00 00       	call   c10057b1 <printk>
c1000484:	83 c4 10             	add    $0x10,%esp
c1000487:	83 ec 0c             	sub    $0xc,%esp
c100048a:	68 74 b0 00 c1       	push   $0xc100b074
c100048f:	e8 1d 53 00 00       	call   c10057b1 <printk>
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
c10004cb:	68 93 b0 00 c1       	push   $0xc100b093
c10004d0:	e8 dc 52 00 00       	call   c10057b1 <printk>
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
c10004fe:	68 3e b0 00 c1       	push   $0xc100b03e
c1000503:	e8 a9 52 00 00       	call   c10057b1 <printk>
c1000508:	83 c4 10             	add    $0x10,%esp
c100050b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1000512:	83 ec 0c             	sub    $0xc,%esp
c1000515:	68 9e b0 00 c1       	push   $0xc100b09e
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
c1000565:	68 bc b0 00 c1       	push   $0xc100b0bc
c100056a:	e8 42 52 00 00       	call   c10057b1 <printk>
c100056f:	83 c4 10             	add    $0x10,%esp
c1000572:	eb 32                	jmp    c10005a6 <instr_game+0xbe>
c1000574:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000577:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c100057a:	7d 15                	jge    c1000591 <instr_game+0xa9>
c100057c:	83 ec 0c             	sub    $0xc,%esp
c100057f:	68 eb b0 00 c1       	push   $0xc100b0eb
c1000584:	e8 28 52 00 00       	call   c10057b1 <printk>
c1000589:	83 c4 10             	add    $0x10,%esp
c100058c:	e9 7a ff ff ff       	jmp    c100050b <instr_game+0x23>
c1000591:	83 ec 0c             	sub    $0xc,%esp
c1000594:	68 03 b1 00 c1       	push   $0xc100b103
c1000599:	e8 13 52 00 00       	call   c10057b1 <printk>
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
c10005b0:	e8 cf 55 00 00       	call   c1005b84 <cons_getc>
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
c10005d5:	68 1a b1 00 c1       	push   $0xc100b11a
c10005da:	e8 d2 51 00 00       	call   c10057b1 <printk>
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
c1000616:	e8 2b 55 00 00       	call   c1005b46 <cons_putc>
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
c1000644:	e8 fd 54 00 00       	call   c1005b46 <cons_putc>
c1000649:	83 c4 10             	add    $0x10,%esp
c100064c:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
c1000650:	eb 2c                	jmp    c100067e <readline+0xbb>
c1000652:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
c1000656:	74 06                	je     c100065e <readline+0x9b>
c1000658:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
c100065c:	75 8b                	jne    c10005e9 <readline+0x26>
c100065e:	83 ec 0c             	sub    $0xc,%esp
c1000661:	ff 75 f0             	pushl  -0x10(%ebp)
c1000664:	e8 dd 54 00 00       	call   c1005b46 <cons_putc>
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
c10009f3:	68 52 b1 00 c1       	push   $0xc100b152
c10009f8:	e8 b4 4d 00 00       	call   c10057b1 <printk>
c10009fd:	83 c4 10             	add    $0x10,%esp
c1000a00:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a03:	8b 40 04             	mov    0x4(%eax),%eax
c1000a06:	83 ec 08             	sub    $0x8,%esp
c1000a09:	50                   	push   %eax
c1000a0a:	68 62 b1 00 c1       	push   $0xc100b162
c1000a0f:	e8 9d 4d 00 00       	call   c10057b1 <printk>
c1000a14:	83 c4 10             	add    $0x10,%esp
c1000a17:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a1a:	8b 40 08             	mov    0x8(%eax),%eax
c1000a1d:	83 ec 08             	sub    $0x8,%esp
c1000a20:	50                   	push   %eax
c1000a21:	68 72 b1 00 c1       	push   $0xc100b172
c1000a26:	e8 86 4d 00 00       	call   c10057b1 <printk>
c1000a2b:	83 c4 10             	add    $0x10,%esp
c1000a2e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a31:	8b 40 0c             	mov    0xc(%eax),%eax
c1000a34:	83 ec 08             	sub    $0x8,%esp
c1000a37:	50                   	push   %eax
c1000a38:	68 82 b1 00 c1       	push   $0xc100b182
c1000a3d:	e8 6f 4d 00 00       	call   c10057b1 <printk>
c1000a42:	83 c4 10             	add    $0x10,%esp
c1000a45:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a48:	8b 40 10             	mov    0x10(%eax),%eax
c1000a4b:	83 ec 08             	sub    $0x8,%esp
c1000a4e:	50                   	push   %eax
c1000a4f:	68 92 b1 00 c1       	push   $0xc100b192
c1000a54:	e8 58 4d 00 00       	call   c10057b1 <printk>
c1000a59:	83 c4 10             	add    $0x10,%esp
c1000a5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a5f:	8b 40 14             	mov    0x14(%eax),%eax
c1000a62:	83 ec 08             	sub    $0x8,%esp
c1000a65:	50                   	push   %eax
c1000a66:	68 a2 b1 00 c1       	push   $0xc100b1a2
c1000a6b:	e8 41 4d 00 00       	call   c10057b1 <printk>
c1000a70:	83 c4 10             	add    $0x10,%esp
c1000a73:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a76:	8b 40 18             	mov    0x18(%eax),%eax
c1000a79:	83 ec 08             	sub    $0x8,%esp
c1000a7c:	50                   	push   %eax
c1000a7d:	68 b2 b1 00 c1       	push   $0xc100b1b2
c1000a82:	e8 2a 4d 00 00       	call   c10057b1 <printk>
c1000a87:	83 c4 10             	add    $0x10,%esp
c1000a8a:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a8d:	8b 40 1c             	mov    0x1c(%eax),%eax
c1000a90:	83 ec 08             	sub    $0x8,%esp
c1000a93:	50                   	push   %eax
c1000a94:	68 c2 b1 00 c1       	push   $0xc100b1c2
c1000a99:	e8 13 4d 00 00       	call   c10057b1 <printk>
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
c1000ac7:	68 d2 b1 00 c1       	push   $0xc100b1d2
c1000acc:	e8 e0 4c 00 00       	call   c10057b1 <printk>
c1000ad1:	83 c4 10             	add    $0x10,%esp
c1000ad4:	8b 45 08             	mov    0x8(%ebp),%eax
c1000ad7:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1000adb:	0f b7 c0             	movzwl %ax,%eax
c1000ade:	83 ec 08             	sub    $0x8,%esp
c1000ae1:	50                   	push   %eax
c1000ae2:	68 e6 b1 00 c1       	push   $0xc100b1e6
c1000ae7:	e8 c5 4c 00 00       	call   c10057b1 <printk>
c1000aec:	83 c4 10             	add    $0x10,%esp
c1000aef:	8b 45 08             	mov    0x8(%ebp),%eax
c1000af2:	0f b7 40 24          	movzwl 0x24(%eax),%eax
c1000af6:	0f b7 c0             	movzwl %ax,%eax
c1000af9:	83 ec 08             	sub    $0x8,%esp
c1000afc:	50                   	push   %eax
c1000afd:	68 fa b1 00 c1       	push   $0xc100b1fa
c1000b02:	e8 aa 4c 00 00       	call   c10057b1 <printk>
c1000b07:	83 c4 10             	add    $0x10,%esp
c1000b0a:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b0d:	0f b7 40 20          	movzwl 0x20(%eax),%eax
c1000b11:	0f b7 c0             	movzwl %ax,%eax
c1000b14:	83 ec 08             	sub    $0x8,%esp
c1000b17:	50                   	push   %eax
c1000b18:	68 0e b2 00 c1       	push   $0xc100b20e
c1000b1d:	e8 8f 4c 00 00       	call   c10057b1 <printk>
c1000b22:	83 c4 10             	add    $0x10,%esp
c1000b25:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b28:	8b 40 34             	mov    0x34(%eax),%eax
c1000b2b:	83 ec 08             	sub    $0x8,%esp
c1000b2e:	50                   	push   %eax
c1000b2f:	68 22 b2 00 c1       	push   $0xc100b222
c1000b34:	e8 78 4c 00 00       	call   c10057b1 <printk>
c1000b39:	83 c4 10             	add    $0x10,%esp
c1000b3c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b3f:	8b 40 38             	mov    0x38(%eax),%eax
c1000b42:	83 ec 08             	sub    $0x8,%esp
c1000b45:	50                   	push   %eax
c1000b46:	68 32 b2 00 c1       	push   $0xc100b232
c1000b4b:	e8 61 4c 00 00       	call   c10057b1 <printk>
c1000b50:	83 c4 10             	add    $0x10,%esp
c1000b53:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b56:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
c1000b5a:	0f b7 c0             	movzwl %ax,%eax
c1000b5d:	83 ec 08             	sub    $0x8,%esp
c1000b60:	50                   	push   %eax
c1000b61:	68 42 b2 00 c1       	push   $0xc100b242
c1000b66:	e8 46 4c 00 00       	call   c10057b1 <printk>
c1000b6b:	83 c4 10             	add    $0x10,%esp
c1000b6e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b71:	8b 40 40             	mov    0x40(%eax),%eax
c1000b74:	83 ec 08             	sub    $0x8,%esp
c1000b77:	50                   	push   %eax
c1000b78:	68 56 b2 00 c1       	push   $0xc100b256
c1000b7d:	e8 2f 4c 00 00       	call   c10057b1 <printk>
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
c1000bc0:	68 66 b2 00 c1       	push   $0xc100b266
c1000bc5:	e8 e7 4b 00 00       	call   c10057b1 <printk>
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
c1000bec:	68 6a b2 00 c1       	push   $0xc100b26a
c1000bf1:	e8 bb 4b 00 00       	call   c10057b1 <printk>
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
c1000c33:	8b 04 85 a0 b2 00 c1 	mov    -0x3eff4d60(,%eax,4),%eax
c1000c3a:	ff e0                	jmp    *%eax
c1000c3c:	83 f8 60             	cmp    $0x60,%eax
c1000c3f:	0f 85 c9 00 00 00    	jne    c1000d0e <trap_dispatch+0x113>
c1000c45:	83 ec 0c             	sub    $0xc,%esp
c1000c48:	68 73 b2 00 c1       	push   $0xc100b273
c1000c4d:	e8 5f 4b 00 00       	call   c10057b1 <printk>
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
c1000cd3:	e8 e5 30 00 00       	call   c1003dbd <schedule>
c1000cd8:	eb 49                	jmp    c1000d23 <trap_dispatch+0x128>
c1000cda:	e8 a5 4e 00 00       	call   c1005b84 <cons_getc>
c1000cdf:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000ce2:	eb 43                	jmp    c1000d27 <trap_dispatch+0x12c>
c1000ce4:	e8 9b 4e 00 00       	call   c1005b84 <cons_getc>
c1000ce9:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000cec:	0f b6 05 b4 1c 01 c1 	movzbl 0xc1011cb4,%eax
c1000cf3:	84 c0                	test   %al,%al
c1000cf5:	75 2f                	jne    c1000d26 <trap_dispatch+0x12b>
c1000cf7:	83 ec 0c             	sub    $0xc,%esp
c1000cfa:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1000cff:	e8 41 50 00 00       	call   c1005d45 <sema_up>
c1000d04:	83 c4 10             	add    $0x10,%esp
c1000d07:	e8 b1 30 00 00       	call   c1003dbd <schedule>
c1000d0c:	eb 18                	jmp    c1000d26 <trap_dispatch+0x12b>
c1000d0e:	83 ec 0c             	sub    $0xc,%esp
c1000d11:	68 83 b2 00 c1       	push   $0xc100b283
c1000d16:	e8 96 4a 00 00       	call   c10057b1 <printk>
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
c10018a0:	e8 56 2d 00 00       	call   c10045fb <sys_exit>
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
c10018d4:	e8 68 22 00 00       	call   c1003b41 <do_fork>
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
c10018f2:	e8 5e 2c 00 00       	call   c1004555 <sys_wait>
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
c100191e:	e8 da 33 00 00       	call   c1004cfd <sys_execv>
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
c1001966:	e8 c1 3a 00 00       	call   c100542c <print_char>
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
c100198d:	e8 b7 3b 00 00       	call   c1005549 <print_string>
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
c10019e6:	e8 95 3b 00 00       	call   c1005580 <print_num>
c10019eb:	83 c4 20             	add    $0x20,%esp
c10019ee:	b8 00 00 00 00       	mov    $0x0,%eax
c10019f3:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10019f6:	c9                   	leave  
c10019f7:	c3                   	ret    

c10019f8 <sys_backtrace>:
c10019f8:	55                   	push   %ebp
c10019f9:	89 e5                	mov    %esp,%ebp
c10019fb:	83 ec 08             	sub    $0x8,%esp
c10019fe:	e8 fc 3c 00 00       	call   c10056ff <backtrace>
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
c1001a42:	e8 65 57 00 00       	call   c10071ac <sys_read>
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
c1001a70:	e8 3e 52 00 00       	call   c1006cb3 <sys_open>
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
c1001a8e:	e8 be 54 00 00       	call   c1006f51 <sys_close>
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
c1001ac6:	e8 82 55 00 00       	call   c100704d <sys_write>
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
c1001b02:	e8 fc 57 00 00       	call   c1007303 <sys_lseek>
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
c1001b20:	e8 ca 58 00 00       	call   c10073ef <sys_unlink>
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
c1001b3e:	e8 cc 5a 00 00       	call   c100760f <sys_mkdir>
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
c1001b5c:	e8 67 60 00 00       	call   c1007bc8 <sys_rmdir>
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
c1001b7a:	e8 39 60 00 00       	call   c1007bb8 <sys_rewinddir>
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
c1001ba9:	e8 99 63 00 00       	call   c1007f47 <sys_getcwd>
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
c1001bc7:	e8 94 66 00 00       	call   c1008260 <sys_chdir>
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
c1001bf3:	e8 3c 65 00 00       	call   c1008134 <sys_stat>
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
c1001c11:	e8 33 5e 00 00       	call   c1007a49 <sys_opendir>
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
c1001c2f:	e8 22 5f 00 00       	call   c1007b56 <sys_closedir>
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
c1001c4d:	e8 31 5f 00 00       	call   c1007b83 <sys_readdir>
c1001c52:	83 c4 10             	add    $0x10,%esp
c1001c55:	c9                   	leave  
c1001c56:	c3                   	ret    

c1001c57 <syscall_print_task>:
c1001c57:	55                   	push   %ebp
c1001c58:	89 e5                	mov    %esp,%ebp
c1001c5a:	83 ec 08             	sub    $0x8,%esp
c1001c5d:	e8 53 2d 00 00       	call   c10049b5 <sys_print_task>
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
c1001cca:	e8 c7 8d 00 00       	call   c100aa96 <sys_pipe>
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
c1001ea7:	68 28 b3 00 c1       	push   $0xc100b328
c1001eac:	e8 00 39 00 00       	call   c10057b1 <printk>
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
c1001ed9:	e8 70 32 00 00       	call   c100514e <cons_intr>
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
c1001f3a:	e8 ce 2e 00 00       	call   c1004e0d <pic_enable>
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
c1001f7b:	e8 34 34 00 00       	call   c10053b4 <clear>
c1001f80:	83 ec 0c             	sub    $0xc,%esp
c1001f83:	68 34 b3 00 c1       	push   $0xc100b334
c1001f88:	e8 24 38 00 00       	call   c10057b1 <printk>
c1001f8d:	83 c4 10             	add    $0x10,%esp
c1001f90:	e8 3d e7 ff ff       	call   c10006d2 <gdt_init>
c1001f95:	e8 a6 2e 00 00       	call   c1004e40 <pic_init>
c1001f9a:	e8 27 e8 ff ff       	call   c10007c6 <idt_init>
c1001f9f:	e8 a4 ed ff ff       	call   c1000d48 <enable_interupt>
c1001fa4:	e8 00 30 00 00       	call   c1004fa9 <serial_init>
c1001fa9:	e8 36 ff ff ff       	call   c1001ee4 <kbd_init>
c1001fae:	e8 28 0c 00 00       	call   c1002bdb <setup_vpt>
c1001fb3:	e8 3b 06 00 00       	call   c10025f3 <pmm_init>
c1001fb8:	e8 80 02 00 00       	call   c100223d <test_pmm>
c1001fbd:	e8 64 03 00 00       	call   c1002326 <test_vmm>
c1001fc2:	e8 26 63 00 00       	call   c10082ed <fs_init>
c1001fc7:	83 ec 0c             	sub    $0xc,%esp
c1001fca:	68 38 22 00 c1       	push   $0xc1002238
c1001fcf:	e8 4c 11 00 00       	call   c1003120 <kernel_task_init>
c1001fd4:	83 c4 10             	add    $0x10,%esp
c1001fd7:	83 ec 0c             	sub    $0xc,%esp
c1001fda:	6a 64                	push   $0x64
c1001fdc:	e8 d0 32 00 00       	call   c10052b1 <timer_init>
c1001fe1:	83 c4 10             	add    $0x10,%esp
c1001fe4:	83 ec 08             	sub    $0x8,%esp
c1001fe7:	6a 00                	push   $0x0
c1001fe9:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1001fee:	e8 12 3c 00 00       	call   c1005c05 <sema_init>
c1001ff3:	83 c4 10             	add    $0x10,%esp
c1001ff6:	e8 71 ed ff ff       	call   c1000d6c <intr_enable>
c1001ffb:	e8 b4 33 00 00       	call   c10053b4 <clear>
c1002000:	83 ec 0c             	sub    $0xc,%esp
c1002003:	68 52 00 00 40       	push   $0x40000052
c1002008:	e8 85 26 00 00       	call   c1004692 <user_task_init>
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
c100204f:	e8 05 40 00 00       	call   c1006059 <ide_read>
c1002054:	83 c4 10             	add    $0x10,%esp
c1002057:	83 ec 08             	sub    $0x8,%esp
c100205a:	6a 06                	push   $0x6
c100205c:	68 4a b3 00 c1       	push   $0xc100b34a
c1002061:	e8 4d 4c 00 00       	call   c1006cb3 <sys_open>
c1002066:	83 c4 10             	add    $0x10,%esp
c1002069:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100206c:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1002070:	74 2c                	je     c100209e <write2fs+0x8c>
c1002072:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002075:	83 ec 04             	sub    $0x4,%esp
c1002078:	ff 75 f4             	pushl  -0xc(%ebp)
c100207b:	50                   	push   %eax
c100207c:	ff 75 e8             	pushl  -0x18(%ebp)
c100207f:	e8 c9 4f 00 00       	call   c100704d <sys_write>
c1002084:	83 c4 10             	add    $0x10,%esp
c1002087:	83 f8 ff             	cmp    $0xffffffff,%eax
c100208a:	75 12                	jne    c100209e <write2fs+0x8c>
c100208c:	83 ec 0c             	sub    $0xc,%esp
c100208f:	68 50 b3 00 c1       	push   $0xc100b350
c1002094:	e8 18 37 00 00       	call   c10057b1 <printk>
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
c10020e6:	e8 6e 3f 00 00       	call   c1006059 <ide_read>
c10020eb:	83 c4 10             	add    $0x10,%esp
c10020ee:	83 ec 08             	sub    $0x8,%esp
c10020f1:	6a 06                	push   $0x6
c10020f3:	68 63 b3 00 c1       	push   $0xc100b363
c10020f8:	e8 b6 4b 00 00       	call   c1006cb3 <sys_open>
c10020fd:	83 c4 10             	add    $0x10,%esp
c1002100:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002103:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1002107:	74 2c                	je     c1002135 <write2fs+0x123>
c1002109:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100210c:	83 ec 04             	sub    $0x4,%esp
c100210f:	ff 75 f4             	pushl  -0xc(%ebp)
c1002112:	50                   	push   %eax
c1002113:	ff 75 e8             	pushl  -0x18(%ebp)
c1002116:	e8 32 4f 00 00       	call   c100704d <sys_write>
c100211b:	83 c4 10             	add    $0x10,%esp
c100211e:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002121:	75 12                	jne    c1002135 <write2fs+0x123>
c1002123:	83 ec 0c             	sub    $0xc,%esp
c1002126:	68 50 b3 00 c1       	push   $0xc100b350
c100212b:	e8 81 36 00 00       	call   c10057b1 <printk>
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
c100216c:	e8 e8 3e 00 00       	call   c1006059 <ide_read>
c1002171:	83 c4 10             	add    $0x10,%esp
c1002174:	83 ec 08             	sub    $0x8,%esp
c1002177:	6a 06                	push   $0x6
c1002179:	68 68 b3 00 c1       	push   $0xc100b368
c100217e:	e8 30 4b 00 00       	call   c1006cb3 <sys_open>
c1002183:	83 c4 10             	add    $0x10,%esp
c1002186:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002189:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c100218d:	74 2c                	je     c10021bb <write2fs+0x1a9>
c100218f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002192:	83 ec 04             	sub    $0x4,%esp
c1002195:	ff 75 f4             	pushl  -0xc(%ebp)
c1002198:	50                   	push   %eax
c1002199:	ff 75 e8             	pushl  -0x18(%ebp)
c100219c:	e8 ac 4e 00 00       	call   c100704d <sys_write>
c10021a1:	83 c4 10             	add    $0x10,%esp
c10021a4:	83 f8 ff             	cmp    $0xffffffff,%eax
c10021a7:	75 12                	jne    c10021bb <write2fs+0x1a9>
c10021a9:	83 ec 0c             	sub    $0xc,%esp
c10021ac:	68 50 b3 00 c1       	push   $0xc100b350
c10021b1:	e8 fb 35 00 00       	call   c10057b1 <printk>
c10021b6:	83 c4 10             	add    $0x10,%esp
c10021b9:	eb fe                	jmp    c10021b9 <write2fs+0x1a7>
c10021bb:	83 ec 08             	sub    $0x8,%esp
c10021be:	ff 75 f4             	pushl  -0xc(%ebp)
c10021c1:	ff 75 ec             	pushl  -0x14(%ebp)
c10021c4:	e8 0f 0c 00 00       	call   c1002dd8 <vmm_free>
c10021c9:	83 c4 10             	add    $0x10,%esp
c10021cc:	83 ec 08             	sub    $0x8,%esp
c10021cf:	6a 06                	push   $0x6
c10021d1:	68 6e b3 00 c1       	push   $0xc100b36e
c10021d6:	e8 d8 4a 00 00       	call   c1006cb3 <sys_open>
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
c1002216:	e8 32 4e 00 00       	call   c100704d <sys_write>
c100221b:	83 c4 10             	add    $0x10,%esp
c100221e:	83 f8 ff             	cmp    $0xffffffff,%eax
c1002221:	75 12                	jne    c1002235 <write2fs+0x223>
c1002223:	83 ec 0c             	sub    $0xc,%esp
c1002226:	68 50 b3 00 c1       	push   $0xc100b350
c100222b:	e8 81 35 00 00       	call   c10057b1 <printk>
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
c1002288:	68 74 b3 00 c1       	push   $0xc100b374
c100228d:	e8 1f 35 00 00       	call   c10057b1 <printk>
c1002292:	83 c4 10             	add    $0x10,%esp
c1002295:	83 ec 08             	sub    $0x8,%esp
c1002298:	ff 75 f4             	pushl  -0xc(%ebp)
c100229b:	68 8a b3 00 c1       	push   $0xc100b38a
c10022a0:	e8 0c 35 00 00       	call   c10057b1 <printk>
c10022a5:	83 c4 10             	add    $0x10,%esp
c10022a8:	8b 0d c8 1c 01 c1    	mov    0xc1011cc8,%ecx
c10022ae:	8b 15 e8 1c 61 c1    	mov    0xc1611ce8,%edx
c10022b4:	a1 f4 1c 61 c1       	mov    0xc1611cf4,%eax
c10022b9:	51                   	push   %ecx
c10022ba:	52                   	push   %edx
c10022bb:	50                   	push   %eax
c10022bc:	68 a4 b3 00 c1       	push   $0xc100b3a4
c10022c1:	e8 eb 34 00 00       	call   c10057b1 <printk>
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
c1002316:	68 a4 b3 00 c1       	push   $0xc100b3a4
c100231b:	e8 91 34 00 00       	call   c10057b1 <printk>
c1002320:	83 c4 10             	add    $0x10,%esp
c1002323:	90                   	nop
c1002324:	c9                   	leave  
c1002325:	c3                   	ret    

c1002326 <test_vmm>:
c1002326:	55                   	push   %ebp
c1002327:	89 e5                	mov    %esp,%ebp
c1002329:	83 ec 38             	sub    $0x38,%esp
c100232c:	83 ec 0c             	sub    $0xc,%esp
c100232f:	68 eb b3 00 c1       	push   $0xc100b3eb
c1002334:	e8 78 34 00 00       	call   c10057b1 <printk>
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
c1002381:	68 74 b3 00 c1       	push   $0xc100b374
c1002386:	e8 26 34 00 00       	call   c10057b1 <printk>
c100238b:	83 c4 10             	add    $0x10,%esp
c100238e:	83 ec 08             	sub    $0x8,%esp
c1002391:	ff 75 f0             	pushl  -0x10(%ebp)
c1002394:	68 8a b3 00 c1       	push   $0xc100b38a
c1002399:	e8 13 34 00 00       	call   c10057b1 <printk>
c100239e:	83 c4 10             	add    $0x10,%esp
c10023a1:	83 ec 08             	sub    $0x8,%esp
c10023a4:	ff 75 ec             	pushl  -0x14(%ebp)
c10023a7:	68 02 b4 00 c1       	push   $0xc100b402
c10023ac:	e8 00 34 00 00       	call   c10057b1 <printk>
c10023b1:	83 c4 10             	add    $0x10,%esp
c10023b4:	83 ec 0c             	sub    $0xc,%esp
c10023b7:	68 1d b4 00 c1       	push   $0xc100b41d
c10023bc:	e8 f0 33 00 00       	call   c10057b1 <printk>
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
c1002409:	68 74 b3 00 c1       	push   $0xc100b374
c100240e:	e8 9e 33 00 00       	call   c10057b1 <printk>
c1002413:	83 c4 10             	add    $0x10,%esp
c1002416:	83 ec 08             	sub    $0x8,%esp
c1002419:	ff 75 e4             	pushl  -0x1c(%ebp)
c100241c:	68 8a b3 00 c1       	push   $0xc100b38a
c1002421:	e8 8b 33 00 00       	call   c10057b1 <printk>
c1002426:	83 c4 10             	add    $0x10,%esp
c1002429:	83 ec 08             	sub    $0x8,%esp
c100242c:	ff 75 e0             	pushl  -0x20(%ebp)
c100242f:	68 02 b4 00 c1       	push   $0xc100b402
c1002434:	e8 78 33 00 00       	call   c10057b1 <printk>
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
c1002455:	68 34 b4 00 c1       	push   $0xc100b434
c100245a:	e8 52 33 00 00       	call   c10057b1 <printk>
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
c10024e0:	68 74 b3 00 c1       	push   $0xc100b374
c10024e5:	e8 c7 32 00 00       	call   c10057b1 <printk>
c10024ea:	83 c4 10             	add    $0x10,%esp
c10024ed:	83 ec 08             	sub    $0x8,%esp
c10024f0:	ff 75 d4             	pushl  -0x2c(%ebp)
c10024f3:	68 8a b3 00 c1       	push   $0xc100b38a
c10024f8:	e8 b4 32 00 00       	call   c10057b1 <printk>
c10024fd:	83 c4 10             	add    $0x10,%esp
c1002500:	83 ec 08             	sub    $0x8,%esp
c1002503:	ff 75 d0             	pushl  -0x30(%ebp)
c1002506:	68 02 b4 00 c1       	push   $0xc100b402
c100250b:	e8 a1 32 00 00       	call   c10057b1 <printk>
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
c100252c:	68 40 b4 00 c1       	push   $0xc100b440
c1002531:	e8 7b 32 00 00       	call   c10057b1 <printk>
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
c100255b:	68 4c b4 00 c1       	push   $0xc100b44c
c1002560:	e8 4c 32 00 00       	call   c10057b1 <printk>
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
c100258c:	68 4c b4 00 c1       	push   $0xc100b44c
c1002591:	e8 1b 32 00 00       	call   c10057b1 <printk>
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
c10025e8:	e8 a5 20 00 00       	call   c1004692 <user_task_init>
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
c1002a03:	68 50 b4 00 c1       	push   $0xc100b450
c1002a08:	e8 a4 2d 00 00       	call   c10057b1 <printk>
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
c100319c:	e8 67 06 00 00       	call   c1003808 <alloc_task>
c10031a1:	83 c4 10             	add    $0x10,%esp
c10031a4:	a3 00 40 a1 c1       	mov    %eax,0xc1a14000
c10031a9:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10031ae:	85 c0                	test   %eax,%eax
c10031b0:	75 10                	jne    c10031c2 <kernel_task_init+0xa2>
c10031b2:	83 ec 0c             	sub    $0xc,%esp
c10031b5:	68 98 b4 00 c1       	push   $0xc100b498
c10031ba:	e8 f2 25 00 00       	call   c10057b1 <printk>
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
c1003203:	68 ab b4 00 c1       	push   $0xc100b4ab
c1003208:	50                   	push   %eax
c1003209:	e8 91 03 00 00       	call   c100359f <set_task_name>
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
c1003336:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
c100333d:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003342:	8b 40 38             	mov    0x38(%eax),%eax
c1003345:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c100334c:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003351:	8b 50 28             	mov    0x28(%eax),%edx
c1003354:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003359:	8b 40 38             	mov    0x38(%eax),%eax
c100335c:	83 ea 4c             	sub    $0x4c,%edx
c100335f:	89 50 44             	mov    %edx,0x44(%eax)
c1003362:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003367:	8b 55 08             	mov    0x8(%ebp),%edx
c100336a:	89 50 3c             	mov    %edx,0x3c(%eax)
c100336d:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003372:	8b 50 38             	mov    0x38(%eax),%edx
c1003375:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100337a:	89 50 40             	mov    %edx,0x40(%eax)
c100337d:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003382:	8b 50 38             	mov    0x38(%eax),%edx
c1003385:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100338a:	8b 52 10             	mov    0x10(%edx),%edx
c100338d:	89 50 44             	mov    %edx,0x44(%eax)
c1003390:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003395:	8b 50 38             	mov    0x38(%eax),%edx
c1003398:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100339d:	8b 52 14             	mov    0x14(%edx),%edx
c10033a0:	89 50 4c             	mov    %edx,0x4c(%eax)
c10033a3:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033a8:	83 c0 5c             	add    $0x5c,%eax
c10033ab:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10033ae:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10033b1:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10033b4:	89 50 04             	mov    %edx,0x4(%eax)
c10033b7:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10033ba:	8b 50 04             	mov    0x4(%eax),%edx
c10033bd:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10033c0:	89 10                	mov    %edx,(%eax)
c10033c2:	90                   	nop
c10033c3:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033c8:	83 c0 5c             	add    $0x5c,%eax
c10033cb:	83 ec 0c             	sub    $0xc,%esp
c10033ce:	50                   	push   %eax
c10033cf:	e8 35 02 00 00       	call   c1003609 <add_link>
c10033d4:	83 c4 10             	add    $0x10,%esp
c10033d7:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033dc:	83 c0 64             	add    $0x64,%eax
c10033df:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10033e2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10033e5:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10033e8:	89 50 04             	mov    %edx,0x4(%eax)
c10033eb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10033ee:	8b 50 04             	mov    0x4(%eax),%edx
c10033f1:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10033f4:	89 10                	mov    %edx,(%eax)
c10033f6:	90                   	nop
c10033f7:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c10033fc:	83 c0 64             	add    $0x64,%eax
c10033ff:	83 ec 0c             	sub    $0xc,%esp
c1003402:	50                   	push   %eax
c1003403:	e8 51 02 00 00       	call   c1003659 <add_all_link>
c1003408:	83 c4 10             	add    $0x10,%esp
c100340b:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003410:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
c1003417:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100341c:	c7 40 78 01 00 00 00 	movl   $0x1,0x78(%eax)
c1003423:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003428:	c7 40 7c 02 00 00 00 	movl   $0x2,0x7c(%eax)
c100342f:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
c1003436:	eb 17                	jmp    c100344f <kernel_task_init+0x32f>
c1003438:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100343d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003440:	83 c2 1c             	add    $0x1c,%edx
c1003443:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c100344a:	ff 
c100344b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100344f:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1003453:	7e e3                	jle    c1003438 <kernel_task_init+0x318>
c1003455:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c100345a:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c100345f:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003464:	83 ec 0c             	sub    $0xc,%esp
c1003467:	50                   	push   %eax
c1003468:	e8 6f 02 00 00       	call   c10036dc <add_pid_hash>
c100346d:	83 c4 10             	add    $0x10,%esp
c1003470:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003475:	83 ec 0c             	sub    $0xc,%esp
c1003478:	50                   	push   %eax
c1003479:	e8 5b 08 00 00       	call   c1003cd9 <wakeup_task>
c100347e:	83 c4 10             	add    $0x10,%esp
c1003481:	c7 05 94 1c 01 c1 01 	movl   $0x1,0xc1011c94
c1003488:	00 00 00 
c100348b:	90                   	nop
c100348c:	c9                   	leave  
c100348d:	c3                   	ret    

c100348e <set_pid_bit>:
c100348e:	55                   	push   %ebp
c100348f:	89 e5                	mov    %esp,%ebp
c1003491:	83 ec 10             	sub    $0x10,%esp
c1003494:	8b 45 08             	mov    0x8(%ebp),%eax
c1003497:	8d 50 07             	lea    0x7(%eax),%edx
c100349a:	85 c0                	test   %eax,%eax
c100349c:	0f 48 c2             	cmovs  %edx,%eax
c100349f:	c1 f8 03             	sar    $0x3,%eax
c10034a2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10034a5:	8b 45 08             	mov    0x8(%ebp),%eax
c10034a8:	99                   	cltd   
c10034a9:	c1 ea 1d             	shr    $0x1d,%edx
c10034ac:	01 d0                	add    %edx,%eax
c10034ae:	83 e0 07             	and    $0x7,%eax
c10034b1:	29 d0                	sub    %edx,%eax
c10034b3:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10034b6:	90                   	nop
c10034b7:	c9                   	leave  
c10034b8:	c3                   	ret    

c10034b9 <clear_pid_bit>:
c10034b9:	55                   	push   %ebp
c10034ba:	89 e5                	mov    %esp,%ebp
c10034bc:	83 ec 10             	sub    $0x10,%esp
c10034bf:	8b 45 08             	mov    0x8(%ebp),%eax
c10034c2:	8d 50 07             	lea    0x7(%eax),%edx
c10034c5:	85 c0                	test   %eax,%eax
c10034c7:	0f 48 c2             	cmovs  %edx,%eax
c10034ca:	c1 f8 03             	sar    $0x3,%eax
c10034cd:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10034d0:	8b 45 08             	mov    0x8(%ebp),%eax
c10034d3:	99                   	cltd   
c10034d4:	c1 ea 1d             	shr    $0x1d,%edx
c10034d7:	01 d0                	add    %edx,%eax
c10034d9:	83 e0 07             	and    $0x7,%eax
c10034dc:	29 d0                	sub    %edx,%eax
c10034de:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10034e1:	90                   	nop
c10034e2:	c9                   	leave  
c10034e3:	c3                   	ret    

c10034e4 <find_free_pid>:
c10034e4:	55                   	push   %ebp
c10034e5:	89 e5                	mov    %esp,%ebp
c10034e7:	83 ec 10             	sub    $0x10,%esp
c10034ea:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c10034f1:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c10034f8:	eb 1b                	jmp    c1003515 <find_free_pid+0x31>
c10034fa:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003501:	eb 08                	jmp    c100350b <find_free_pid+0x27>
c1003503:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003507:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c100350b:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
c100350f:	7e f2                	jle    c1003503 <find_free_pid+0x1f>
c1003511:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1003515:	81 7d f8 00 80 00 00 	cmpl   $0x8000,-0x8(%ebp)
c100351c:	75 dc                	jne    c10034fa <find_free_pid+0x16>
c100351e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003523:	c9                   	leave  
c1003524:	c3                   	ret    

c1003525 <alloc_pid>:
c1003525:	55                   	push   %ebp
c1003526:	89 e5                	mov    %esp,%ebp
c1003528:	83 ec 10             	sub    $0x10,%esp
c100352b:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c1003530:	85 c0                	test   %eax,%eax
c1003532:	75 07                	jne    c100353b <alloc_pid+0x16>
c1003534:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003539:	eb 44                	jmp    c100357f <alloc_pid+0x5a>
c100353b:	81 7d fc ff 7f 00 00 	cmpl   $0x7fff,-0x4(%ebp)
c1003542:	75 07                	jne    c100354b <alloc_pid+0x26>
c1003544:	e8 9b ff ff ff       	call   c10034e4 <find_free_pid>
c1003549:	eb 08                	jmp    c1003553 <alloc_pid+0x2e>
c100354b:	a1 80 1c 01 c1       	mov    0xc1011c80,%eax
c1003550:	83 c0 01             	add    $0x1,%eax
c1003553:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1003556:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c100355a:	78 18                	js     c1003574 <alloc_pid+0x4f>
c100355c:	ff 75 fc             	pushl  -0x4(%ebp)
c100355f:	e8 2a ff ff ff       	call   c100348e <set_pid_bit>
c1003564:	83 c4 04             	add    $0x4,%esp
c1003567:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c100356c:	83 e8 01             	sub    $0x1,%eax
c100356f:	a3 20 db 00 c1       	mov    %eax,0xc100db20
c1003574:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003577:	a3 80 1c 01 c1       	mov    %eax,0xc1011c80
c100357c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100357f:	c9                   	leave  
c1003580:	c3                   	ret    

c1003581 <free_pid>:
c1003581:	55                   	push   %ebp
c1003582:	89 e5                	mov    %esp,%ebp
c1003584:	ff 75 08             	pushl  0x8(%ebp)
c1003587:	e8 2d ff ff ff       	call   c10034b9 <clear_pid_bit>
c100358c:	83 c4 04             	add    $0x4,%esp
c100358f:	a1 20 db 00 c1       	mov    0xc100db20,%eax
c1003594:	83 c0 01             	add    $0x1,%eax
c1003597:	a3 20 db 00 c1       	mov    %eax,0xc100db20
c100359c:	90                   	nop
c100359d:	c9                   	leave  
c100359e:	c3                   	ret    

c100359f <set_task_name>:
c100359f:	55                   	push   %ebp
c10035a0:	89 e5                	mov    %esp,%ebp
c10035a2:	83 ec 08             	sub    $0x8,%esp
c10035a5:	8b 45 08             	mov    0x8(%ebp),%eax
c10035a8:	83 c0 14             	add    $0x14,%eax
c10035ab:	83 ec 04             	sub    $0x4,%esp
c10035ae:	6a 14                	push   $0x14
c10035b0:	6a 00                	push   $0x0
c10035b2:	50                   	push   %eax
c10035b3:	e8 f2 ca ff ff       	call   c10000aa <memset>
c10035b8:	83 c4 10             	add    $0x10,%esp
c10035bb:	8b 45 08             	mov    0x8(%ebp),%eax
c10035be:	83 c0 14             	add    $0x14,%eax
c10035c1:	83 ec 04             	sub    $0x4,%esp
c10035c4:	6a 14                	push   $0x14
c10035c6:	ff 75 0c             	pushl  0xc(%ebp)
c10035c9:	50                   	push   %eax
c10035ca:	e8 39 cb ff ff       	call   c1000108 <memcpy>
c10035cf:	83 c4 10             	add    $0x10,%esp
c10035d2:	c9                   	leave  
c10035d3:	c3                   	ret    

c10035d4 <get_task_name>:
c10035d4:	55                   	push   %ebp
c10035d5:	89 e5                	mov    %esp,%ebp
c10035d7:	83 ec 08             	sub    $0x8,%esp
c10035da:	83 ec 04             	sub    $0x4,%esp
c10035dd:	6a 15                	push   $0x15
c10035df:	6a 00                	push   $0x0
c10035e1:	68 98 1c 01 c1       	push   $0xc1011c98
c10035e6:	e8 bf ca ff ff       	call   c10000aa <memset>
c10035eb:	83 c4 10             	add    $0x10,%esp
c10035ee:	8b 45 08             	mov    0x8(%ebp),%eax
c10035f1:	83 c0 14             	add    $0x14,%eax
c10035f4:	83 ec 04             	sub    $0x4,%esp
c10035f7:	6a 14                	push   $0x14
c10035f9:	50                   	push   %eax
c10035fa:	68 98 1c 01 c1       	push   $0xc1011c98
c10035ff:	e8 04 cb ff ff       	call   c1000108 <memcpy>
c1003604:	83 c4 10             	add    $0x10,%esp
c1003607:	c9                   	leave  
c1003608:	c3                   	ret    

c1003609 <add_link>:
c1003609:	55                   	push   %ebp
c100360a:	89 e5                	mov    %esp,%ebp
c100360c:	83 ec 20             	sub    $0x20,%esp
c100360f:	c7 45 fc 84 1c 01 c1 	movl   $0xc1011c84,-0x4(%ebp)
c1003616:	8b 45 08             	mov    0x8(%ebp),%eax
c1003619:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100361c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100361f:	8b 00                	mov    (%eax),%eax
c1003621:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1003624:	89 55 f4             	mov    %edx,-0xc(%ebp)
c1003627:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100362a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100362d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003630:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003633:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003636:	89 10                	mov    %edx,(%eax)
c1003638:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100363b:	8b 10                	mov    (%eax),%edx
c100363d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003640:	89 50 04             	mov    %edx,0x4(%eax)
c1003643:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003646:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003649:	89 50 04             	mov    %edx,0x4(%eax)
c100364c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100364f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003652:	89 10                	mov    %edx,(%eax)
c1003654:	90                   	nop
c1003655:	90                   	nop
c1003656:	90                   	nop
c1003657:	c9                   	leave  
c1003658:	c3                   	ret    

c1003659 <add_all_link>:
c1003659:	55                   	push   %ebp
c100365a:	89 e5                	mov    %esp,%ebp
c100365c:	83 ec 20             	sub    $0x20,%esp
c100365f:	c7 45 fc 8c 1c 01 c1 	movl   $0xc1011c8c,-0x4(%ebp)
c1003666:	8b 45 08             	mov    0x8(%ebp),%eax
c1003669:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100366c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100366f:	8b 00                	mov    (%eax),%eax
c1003671:	8b 55 f8             	mov    -0x8(%ebp),%edx
c1003674:	89 55 f4             	mov    %edx,-0xc(%ebp)
c1003677:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100367a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100367d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003680:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003683:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003686:	89 10                	mov    %edx,(%eax)
c1003688:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100368b:	8b 10                	mov    (%eax),%edx
c100368d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003690:	89 50 04             	mov    %edx,0x4(%eax)
c1003693:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003696:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003699:	89 50 04             	mov    %edx,0x4(%eax)
c100369c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100369f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10036a2:	89 10                	mov    %edx,(%eax)
c10036a4:	90                   	nop
c10036a5:	90                   	nop
c10036a6:	90                   	nop
c10036a7:	c9                   	leave  
c10036a8:	c3                   	ret    

c10036a9 <remove_link>:
c10036a9:	55                   	push   %ebp
c10036aa:	89 e5                	mov    %esp,%ebp
c10036ac:	83 ec 10             	sub    $0x10,%esp
c10036af:	8b 45 08             	mov    0x8(%ebp),%eax
c10036b2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10036b5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10036b8:	8b 40 04             	mov    0x4(%eax),%eax
c10036bb:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10036be:	8b 12                	mov    (%edx),%edx
c10036c0:	89 55 f8             	mov    %edx,-0x8(%ebp)
c10036c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10036c6:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10036c9:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10036cc:	89 50 04             	mov    %edx,0x4(%eax)
c10036cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036d2:	8b 55 f8             	mov    -0x8(%ebp),%edx
c10036d5:	89 10                	mov    %edx,(%eax)
c10036d7:	90                   	nop
c10036d8:	90                   	nop
c10036d9:	90                   	nop
c10036da:	c9                   	leave  
c10036db:	c3                   	ret    

c10036dc <add_pid_hash>:
c10036dc:	55                   	push   %ebp
c10036dd:	89 e5                	mov    %esp,%ebp
c10036df:	53                   	push   %ebx
c10036e0:	83 ec 20             	sub    $0x20,%esp
c10036e3:	8b 45 08             	mov    0x8(%ebp),%eax
c10036e6:	8d 58 6c             	lea    0x6c(%eax),%ebx
c10036e9:	8b 45 08             	mov    0x8(%ebp),%eax
c10036ec:	8b 40 0c             	mov    0xc(%eax),%eax
c10036ef:	6a 0a                	push   $0xa
c10036f1:	50                   	push   %eax
c10036f2:	e8 04 fa ff ff       	call   c10030fb <hash32>
c10036f7:	83 c4 08             	add    $0x8,%esp
c10036fa:	c1 e0 03             	shl    $0x3,%eax
c10036fd:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c1003702:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003705:	89 5d f4             	mov    %ebx,-0xc(%ebp)
c1003708:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100370b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100370e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003711:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003714:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003717:	8b 40 04             	mov    0x4(%eax),%eax
c100371a:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100371d:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1003720:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003723:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1003726:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003729:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100372c:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100372f:	89 10                	mov    %edx,(%eax)
c1003731:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003734:	8b 10                	mov    (%eax),%edx
c1003736:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003739:	89 50 04             	mov    %edx,0x4(%eax)
c100373c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100373f:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1003742:	89 50 04             	mov    %edx,0x4(%eax)
c1003745:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003748:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100374b:	89 10                	mov    %edx,(%eax)
c100374d:	90                   	nop
c100374e:	90                   	nop
c100374f:	90                   	nop
c1003750:	90                   	nop
c1003751:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1003754:	c9                   	leave  
c1003755:	c3                   	ret    

c1003756 <remove_pid_hash>:
c1003756:	55                   	push   %ebp
c1003757:	89 e5                	mov    %esp,%ebp
c1003759:	83 ec 18             	sub    $0x18,%esp
c100375c:	83 ec 0c             	sub    $0xc,%esp
c100375f:	ff 75 08             	pushl  0x8(%ebp)
c1003762:	e8 36 00 00 00       	call   c100379d <find_task>
c1003767:	83 c4 10             	add    $0x10,%esp
c100376a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100376d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003770:	83 c0 6c             	add    $0x6c,%eax
c1003773:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003776:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003779:	8b 40 04             	mov    0x4(%eax),%eax
c100377c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100377f:	8b 12                	mov    (%edx),%edx
c1003781:	89 55 ec             	mov    %edx,-0x14(%ebp)
c1003784:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003787:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100378a:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100378d:	89 50 04             	mov    %edx,0x4(%eax)
c1003790:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003793:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003796:	89 10                	mov    %edx,(%eax)
c1003798:	90                   	nop
c1003799:	90                   	nop
c100379a:	90                   	nop
c100379b:	c9                   	leave  
c100379c:	c3                   	ret    

c100379d <find_task>:
c100379d:	55                   	push   %ebp
c100379e:	89 e5                	mov    %esp,%ebp
c10037a0:	83 ec 10             	sub    $0x10,%esp
c10037a3:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10037a7:	79 07                	jns    c10037b0 <find_task+0x13>
c10037a9:	b8 00 00 00 00       	mov    $0x0,%eax
c10037ae:	eb 56                	jmp    c1003806 <find_task+0x69>
c10037b0:	8b 45 08             	mov    0x8(%ebp),%eax
c10037b3:	6a 0a                	push   $0xa
c10037b5:	50                   	push   %eax
c10037b6:	e8 40 f9 ff ff       	call   c10030fb <hash32>
c10037bb:	83 c4 08             	add    $0x8,%esp
c10037be:	c1 e0 03             	shl    $0x3,%eax
c10037c1:	05 80 fc 00 c1       	add    $0xc100fc80,%eax
c10037c6:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10037c9:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10037cc:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10037cf:	eb 19                	jmp    c10037ea <find_task+0x4d>
c10037d1:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10037d4:	83 e8 6c             	sub    $0x6c,%eax
c10037d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10037da:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037dd:	8b 40 0c             	mov    0xc(%eax),%eax
c10037e0:	39 45 08             	cmp    %eax,0x8(%ebp)
c10037e3:	75 05                	jne    c10037ea <find_task+0x4d>
c10037e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10037e8:	eb 1c                	jmp    c1003806 <find_task+0x69>
c10037ea:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10037ed:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10037f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10037f3:	8b 40 04             	mov    0x4(%eax),%eax
c10037f6:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10037f9:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10037fc:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c10037ff:	75 d0                	jne    c10037d1 <find_task+0x34>
c1003801:	b8 00 00 00 00       	mov    $0x0,%eax
c1003806:	c9                   	leave  
c1003807:	c3                   	ret    

c1003808 <alloc_task>:
c1003808:	55                   	push   %ebp
c1003809:	89 e5                	mov    %esp,%ebp
c100380b:	83 ec 18             	sub    $0x18,%esp
c100380e:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1003812:	75 17                	jne    c100382b <alloc_task+0x23>
c1003814:	83 ec 08             	sub    $0x8,%esp
c1003817:	6a 01                	push   $0x1
c1003819:	68 00 20 00 00       	push   $0x2000
c100381e:	e8 90 f4 ff ff       	call   c1002cb3 <vmm_malloc>
c1003823:	83 c4 10             	add    $0x10,%esp
c1003826:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003829:	eb 15                	jmp    c1003840 <alloc_task+0x38>
c100382b:	83 ec 08             	sub    $0x8,%esp
c100382e:	6a 02                	push   $0x2
c1003830:	68 00 20 00 00       	push   $0x2000
c1003835:	e8 79 f4 ff ff       	call   c1002cb3 <vmm_malloc>
c100383a:	83 c4 10             	add    $0x10,%esp
c100383d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003840:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1003844:	0f 84 b0 00 00 00    	je     c10038fa <alloc_task+0xf2>
c100384a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100384d:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c1003853:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003856:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c100385d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003860:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1003867:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100386a:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
c1003871:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003874:	83 c0 14             	add    $0x14,%eax
c1003877:	83 ec 04             	sub    $0x4,%esp
c100387a:	6a 14                	push   $0x14
c100387c:	6a 00                	push   $0x0
c100387e:	50                   	push   %eax
c100387f:	e8 26 c8 ff ff       	call   c10000aa <memset>
c1003884:	83 c4 10             	add    $0x10,%esp
c1003887:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100388a:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
c1003891:	ba 00 20 61 c1       	mov    $0xc1612000,%edx
c1003896:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003899:	89 50 2c             	mov    %edx,0x2c(%eax)
c100389c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100389f:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
c10038a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038a9:	83 c0 3c             	add    $0x3c,%eax
c10038ac:	83 ec 04             	sub    $0x4,%esp
c10038af:	6a 20                	push   $0x20
c10038b1:	6a 00                	push   $0x0
c10038b3:	50                   	push   %eax
c10038b4:	e8 f1 c7 ff ff       	call   c10000aa <memset>
c10038b9:	83 c4 10             	add    $0x10,%esp
c10038bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038bf:	c7 80 f4 00 00 00 11 	movl   $0x19971211,0xf4(%eax)
c10038c6:	12 97 19 
c10038c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038cc:	c7 80 f8 00 00 00 00 	movl   $0x0,0xf8(%eax)
c10038d3:	00 00 00 
c10038d6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10038dd:	eb 15                	jmp    c10038f4 <alloc_task+0xec>
c10038df:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038e2:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10038e5:	83 c2 1c             	add    $0x1c,%edx
c10038e8:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c10038ef:	ff 
c10038f0:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10038f4:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c10038f8:	7e e5                	jle    c10038df <alloc_task+0xd7>
c10038fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038fd:	c9                   	leave  
c10038fe:	c3                   	ret    

c10038ff <forkret>:
c10038ff:	55                   	push   %ebp
c1003900:	89 e5                	mov    %esp,%ebp
c1003902:	83 ec 08             	sub    $0x8,%esp
c1003905:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100390a:	8b 40 38             	mov    0x38(%eax),%eax
c100390d:	83 ec 0c             	sub    $0xc,%esp
c1003910:	50                   	push   %eax
c1003911:	e8 db d4 ff ff       	call   c1000df1 <forkrets>
c1003916:	83 c4 10             	add    $0x10,%esp
c1003919:	90                   	nop
c100391a:	c9                   	leave  
c100391b:	c3                   	ret    

c100391c <copy_thread>:
c100391c:	55                   	push   %ebp
c100391d:	89 e5                	mov    %esp,%ebp
c100391f:	57                   	push   %edi
c1003920:	56                   	push   %esi
c1003921:	53                   	push   %ebx
c1003922:	83 ec 1c             	sub    $0x1c,%esp
c1003925:	8b 45 08             	mov    0x8(%ebp),%eax
c1003928:	8b 40 28             	mov    0x28(%eax),%eax
c100392b:	83 e8 4c             	sub    $0x4c,%eax
c100392e:	89 c2                	mov    %eax,%edx
c1003930:	8b 45 08             	mov    0x8(%ebp),%eax
c1003933:	89 50 38             	mov    %edx,0x38(%eax)
c1003936:	8b 45 08             	mov    0x8(%ebp),%eax
c1003939:	8b 40 38             	mov    0x38(%eax),%eax
c100393c:	8b 55 10             	mov    0x10(%ebp),%edx
c100393f:	89 d3                	mov    %edx,%ebx
c1003941:	ba 4c 00 00 00       	mov    $0x4c,%edx
c1003946:	8b 0b                	mov    (%ebx),%ecx
c1003948:	89 08                	mov    %ecx,(%eax)
c100394a:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c100394e:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003952:	8d 78 04             	lea    0x4(%eax),%edi
c1003955:	83 e7 fc             	and    $0xfffffffc,%edi
c1003958:	29 f8                	sub    %edi,%eax
c100395a:	29 c3                	sub    %eax,%ebx
c100395c:	01 c2                	add    %eax,%edx
c100395e:	83 e2 fc             	and    $0xfffffffc,%edx
c1003961:	89 d0                	mov    %edx,%eax
c1003963:	c1 e8 02             	shr    $0x2,%eax
c1003966:	89 de                	mov    %ebx,%esi
c1003968:	89 c1                	mov    %eax,%ecx
c100396a:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100396c:	8b 45 08             	mov    0x8(%ebp),%eax
c100396f:	8b 40 38             	mov    0x38(%eax),%eax
c1003972:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1003979:	8b 45 08             	mov    0x8(%ebp),%eax
c100397c:	8b 40 38             	mov    0x38(%eax),%eax
c100397f:	8b 50 40             	mov    0x40(%eax),%edx
c1003982:	8b 45 08             	mov    0x8(%ebp),%eax
c1003985:	8b 40 38             	mov    0x38(%eax),%eax
c1003988:	80 ce 02             	or     $0x2,%dh
c100398b:	89 50 40             	mov    %edx,0x40(%eax)
c100398e:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003993:	05 00 01 00 00       	add    $0x100,%eax
c1003998:	89 c2                	mov    %eax,%edx
c100399a:	8b 45 08             	mov    0x8(%ebp),%eax
c100399d:	05 00 01 00 00       	add    $0x100,%eax
c10039a2:	83 ec 04             	sub    $0x4,%esp
c10039a5:	68 00 0f 00 00       	push   $0xf00
c10039aa:	52                   	push   %edx
c10039ab:	50                   	push   %eax
c10039ac:	e8 57 c7 ff ff       	call   c1000108 <memcpy>
c10039b1:	83 c4 10             	add    $0x10,%esp
c10039b4:	8b 45 08             	mov    0x8(%ebp),%eax
c10039b7:	05 00 01 00 00       	add    $0x100,%eax
c10039bc:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10039bf:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c10039c6:	eb 5b                	jmp    c1003a23 <copy_thread+0x107>
c10039c8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10039cb:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10039d2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10039d5:	01 d0                	add    %edx,%eax
c10039d7:	8b 00                	mov    (%eax),%eax
c10039d9:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c10039df:	31 d0                	xor    %edx,%eax
c10039e1:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10039e6:	85 c0                	test   %eax,%eax
c10039e8:	75 35                	jne    c1003a1f <copy_thread+0x103>
c10039ea:	8b 45 08             	mov    0x8(%ebp),%eax
c10039ed:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10039f2:	89 c1                	mov    %eax,%ecx
c10039f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10039f7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10039fe:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003a01:	01 d0                	add    %edx,%eax
c1003a03:	8b 00                	mov    (%eax),%eax
c1003a05:	25 ff 0f 00 00       	and    $0xfff,%eax
c1003a0a:	89 c2                	mov    %eax,%edx
c1003a0c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003a0f:	8d 1c 85 00 00 00 00 	lea    0x0(,%eax,4),%ebx
c1003a16:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003a19:	01 d8                	add    %ebx,%eax
c1003a1b:	09 ca                	or     %ecx,%edx
c1003a1d:	89 10                	mov    %edx,(%eax)
c1003a1f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1003a23:	81 7d e4 bf 03 00 00 	cmpl   $0x3bf,-0x1c(%ebp)
c1003a2a:	76 9c                	jbe    c10039c8 <copy_thread+0xac>
c1003a2c:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a2f:	8b 40 38             	mov    0x38(%eax),%eax
c1003a32:	8b 40 44             	mov    0x44(%eax),%eax
c1003a35:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003a3b:	29 d0                	sub    %edx,%eax
c1003a3d:	89 c1                	mov    %eax,%ecx
c1003a3f:	8b 55 08             	mov    0x8(%ebp),%edx
c1003a42:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a45:	8b 40 38             	mov    0x38(%eax),%eax
c1003a48:	01 ca                	add    %ecx,%edx
c1003a4a:	89 50 44             	mov    %edx,0x44(%eax)
c1003a4d:	ba ff 38 00 c1       	mov    $0xc10038ff,%edx
c1003a52:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a55:	89 50 3c             	mov    %edx,0x3c(%eax)
c1003a58:	8b 45 10             	mov    0x10(%ebp),%eax
c1003a5b:	8b 50 10             	mov    0x10(%eax),%edx
c1003a5e:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a61:	89 50 44             	mov    %edx,0x44(%eax)
c1003a64:	8b 45 10             	mov    0x10(%ebp),%eax
c1003a67:	8b 50 14             	mov    0x14(%eax),%edx
c1003a6a:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a6d:	89 50 4c             	mov    %edx,0x4c(%eax)
c1003a70:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a73:	8b 40 38             	mov    0x38(%eax),%eax
c1003a76:	8b 50 44             	mov    0x44(%eax),%edx
c1003a79:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a7c:	89 50 40             	mov    %edx,0x40(%eax)
c1003a7f:	90                   	nop
c1003a80:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003a83:	5b                   	pop    %ebx
c1003a84:	5e                   	pop    %esi
c1003a85:	5f                   	pop    %edi
c1003a86:	5d                   	pop    %ebp
c1003a87:	c3                   	ret    

c1003a88 <update_inode_open_cnts>:
c1003a88:	55                   	push   %ebp
c1003a89:	89 e5                	mov    %esp,%ebp
c1003a8b:	83 ec 18             	sub    $0x18,%esp
c1003a8e:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
c1003a95:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1003a9c:	e9 92 00 00 00       	jmp    c1003b33 <update_inode_open_cnts+0xab>
c1003aa1:	8b 45 08             	mov    0x8(%ebp),%eax
c1003aa4:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003aa7:	83 c2 1c             	add    $0x1c,%edx
c1003aaa:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c1003aae:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003ab1:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1003ab5:	7e 19                	jle    c1003ad0 <update_inode_open_cnts+0x48>
c1003ab7:	68 b7 b4 00 c1       	push   $0xc100b4b7
c1003abc:	68 2c b6 00 c1       	push   $0xc100b62c
c1003ac1:	68 5f 01 00 00       	push   $0x15f
c1003ac6:	68 d4 b4 00 c1       	push   $0xc100b4d4
c1003acb:	e8 9b c8 ff ff       	call   c100036b <__PANIC>
c1003ad0:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1003ad4:	74 59                	je     c1003b2f <update_inode_open_cnts+0xa7>
c1003ad6:	83 ec 0c             	sub    $0xc,%esp
c1003ad9:	ff 75 f4             	pushl  -0xc(%ebp)
c1003adc:	e8 81 6f 00 00       	call   c100aa62 <is_pipe>
c1003ae1:	83 c4 10             	add    $0x10,%esp
c1003ae4:	85 c0                	test   %eax,%eax
c1003ae6:	74 2b                	je     c1003b13 <update_inode_open_cnts+0x8b>
c1003ae8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003aeb:	89 d0                	mov    %edx,%eax
c1003aed:	01 c0                	add    %eax,%eax
c1003aef:	01 d0                	add    %edx,%eax
c1003af1:	c1 e0 02             	shl    $0x2,%eax
c1003af4:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1003af9:	8b 00                	mov    (%eax),%eax
c1003afb:	8d 48 01             	lea    0x1(%eax),%ecx
c1003afe:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003b01:	89 d0                	mov    %edx,%eax
c1003b03:	01 c0                	add    %eax,%eax
c1003b05:	01 d0                	add    %edx,%eax
c1003b07:	c1 e0 02             	shl    $0x2,%eax
c1003b0a:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1003b0f:	89 08                	mov    %ecx,(%eax)
c1003b11:	eb 1c                	jmp    c1003b2f <update_inode_open_cnts+0xa7>
c1003b13:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003b16:	89 d0                	mov    %edx,%eax
c1003b18:	01 c0                	add    %eax,%eax
c1003b1a:	01 d0                	add    %edx,%eax
c1003b1c:	c1 e0 02             	shl    $0x2,%eax
c1003b1f:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1003b24:	8b 00                	mov    (%eax),%eax
c1003b26:	8b 50 08             	mov    0x8(%eax),%edx
c1003b29:	83 c2 01             	add    $0x1,%edx
c1003b2c:	89 50 08             	mov    %edx,0x8(%eax)
c1003b2f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003b33:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1003b37:	0f 8e 64 ff ff ff    	jle    c1003aa1 <update_inode_open_cnts+0x19>
c1003b3d:	90                   	nop
c1003b3e:	90                   	nop
c1003b3f:	c9                   	leave  
c1003b40:	c3                   	ret    

c1003b41 <do_fork>:
c1003b41:	55                   	push   %ebp
c1003b42:	89 e5                	mov    %esp,%ebp
c1003b44:	83 ec 18             	sub    $0x18,%esp
c1003b47:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c1003b4c:	3d 00 80 00 00       	cmp    $0x8000,%eax
c1003b51:	76 0a                	jbe    c1003b5d <do_fork+0x1c>
c1003b53:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003b58:	e9 7a 01 00 00       	jmp    c1003cd7 <do_fork+0x196>
c1003b5d:	83 ec 0c             	sub    $0xc,%esp
c1003b60:	6a 00                	push   $0x0
c1003b62:	e8 a1 fc ff ff       	call   c1003808 <alloc_task>
c1003b67:	83 c4 10             	add    $0x10,%esp
c1003b6a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003b6d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1003b71:	75 0a                	jne    c1003b7d <do_fork+0x3c>
c1003b73:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003b78:	e9 5a 01 00 00       	jmp    c1003cd7 <do_fork+0x196>
c1003b7d:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003b83:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003b86:	89 50 34             	mov    %edx,0x34(%eax)
c1003b89:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003b8e:	8b 50 0c             	mov    0xc(%eax),%edx
c1003b91:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003b94:	89 50 10             	mov    %edx,0x10(%eax)
c1003b97:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003b9c:	8b 00                	mov    (%eax),%eax
c1003b9e:	85 c0                	test   %eax,%eax
c1003ba0:	74 19                	je     c1003bbb <do_fork+0x7a>
c1003ba2:	68 05 b5 00 c1       	push   $0xc100b505
c1003ba7:	68 44 b6 00 c1       	push   $0xc100b644
c1003bac:	68 80 01 00 00       	push   $0x180
c1003bb1:	68 d4 b4 00 c1       	push   $0xc100b4d4
c1003bb6:	e8 b0 c7 ff ff       	call   c100036b <__PANIC>
c1003bbb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003bbe:	8d 90 00 20 00 00    	lea    0x2000(%eax),%edx
c1003bc4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003bc7:	89 50 28             	mov    %edx,0x28(%eax)
c1003bca:	83 ec 0c             	sub    $0xc,%esp
c1003bcd:	ff 75 f0             	pushl  -0x10(%ebp)
c1003bd0:	e8 c5 04 00 00       	call   c100409a <copy_user_cr3>
c1003bd5:	83 c4 10             	add    $0x10,%esp
c1003bd8:	83 ec 04             	sub    $0x4,%esp
c1003bdb:	ff 75 10             	pushl  0x10(%ebp)
c1003bde:	ff 75 0c             	pushl  0xc(%ebp)
c1003be1:	ff 75 f0             	pushl  -0x10(%ebp)
c1003be4:	e8 33 fd ff ff       	call   c100391c <copy_thread>
c1003be9:	83 c4 10             	add    $0x10,%esp
c1003bec:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003bf3:	eb 20                	jmp    c1003c15 <do_fork+0xd4>
c1003bf5:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003bfa:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1003bfd:	83 c2 1c             	add    $0x1c,%edx
c1003c00:	8b 54 90 04          	mov    0x4(%eax,%edx,4),%edx
c1003c04:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c07:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c1003c0a:	83 c1 1c             	add    $0x1c,%ecx
c1003c0d:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
c1003c11:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1003c15:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1003c19:	7e da                	jle    c1003bf5 <do_fork+0xb4>
c1003c1b:	83 ec 0c             	sub    $0xc,%esp
c1003c1e:	ff 75 f0             	pushl  -0x10(%ebp)
c1003c21:	e8 62 fe ff ff       	call   c1003a88 <update_inode_open_cnts>
c1003c26:	83 c4 10             	add    $0x10,%esp
c1003c29:	e8 f7 f8 ff ff       	call   c1003525 <alloc_pid>
c1003c2e:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003c31:	89 42 0c             	mov    %eax,0xc(%edx)
c1003c34:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c37:	8b 40 0c             	mov    0xc(%eax),%eax
c1003c3a:	85 c0                	test   %eax,%eax
c1003c3c:	79 0a                	jns    c1003c48 <do_fork+0x107>
c1003c3e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003c43:	e9 8f 00 00 00       	jmp    c1003cd7 <do_fork+0x196>
c1003c48:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c4b:	83 c0 5c             	add    $0x5c,%eax
c1003c4e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003c51:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003c54:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003c57:	89 50 04             	mov    %edx,0x4(%eax)
c1003c5a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003c5d:	8b 50 04             	mov    0x4(%eax),%edx
c1003c60:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003c63:	89 10                	mov    %edx,(%eax)
c1003c65:	90                   	nop
c1003c66:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c69:	83 c0 5c             	add    $0x5c,%eax
c1003c6c:	83 ec 0c             	sub    $0xc,%esp
c1003c6f:	50                   	push   %eax
c1003c70:	e8 94 f9 ff ff       	call   c1003609 <add_link>
c1003c75:	83 c4 10             	add    $0x10,%esp
c1003c78:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c7b:	83 c0 64             	add    $0x64,%eax
c1003c7e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003c81:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003c84:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003c87:	89 50 04             	mov    %edx,0x4(%eax)
c1003c8a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003c8d:	8b 50 04             	mov    0x4(%eax),%edx
c1003c90:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003c93:	89 10                	mov    %edx,(%eax)
c1003c95:	90                   	nop
c1003c96:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003c99:	83 c0 64             	add    $0x64,%eax
c1003c9c:	83 ec 0c             	sub    $0xc,%esp
c1003c9f:	50                   	push   %eax
c1003ca0:	e8 b4 f9 ff ff       	call   c1003659 <add_all_link>
c1003ca5:	83 c4 10             	add    $0x10,%esp
c1003ca8:	83 ec 0c             	sub    $0xc,%esp
c1003cab:	ff 75 f0             	pushl  -0x10(%ebp)
c1003cae:	e8 29 fa ff ff       	call   c10036dc <add_pid_hash>
c1003cb3:	83 c4 10             	add    $0x10,%esp
c1003cb6:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c1003cbb:	83 c0 01             	add    $0x1,%eax
c1003cbe:	a3 94 1c 01 c1       	mov    %eax,0xc1011c94
c1003cc3:	83 ec 0c             	sub    $0xc,%esp
c1003cc6:	ff 75 f0             	pushl  -0x10(%ebp)
c1003cc9:	e8 0b 00 00 00       	call   c1003cd9 <wakeup_task>
c1003cce:	83 c4 10             	add    $0x10,%esp
c1003cd1:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003cd4:	8b 40 0c             	mov    0xc(%eax),%eax
c1003cd7:	c9                   	leave  
c1003cd8:	c3                   	ret    

c1003cd9 <wakeup_task>:
c1003cd9:	55                   	push   %ebp
c1003cda:	89 e5                	mov    %esp,%ebp
c1003cdc:	8b 45 08             	mov    0x8(%ebp),%eax
c1003cdf:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003ce5:	90                   	nop
c1003ce6:	5d                   	pop    %ebp
c1003ce7:	c3                   	ret    

c1003ce8 <kernel_thread>:
c1003ce8:	55                   	push   %ebp
c1003ce9:	89 e5                	mov    %esp,%ebp
c1003ceb:	83 ec 58             	sub    $0x58,%esp
c1003cee:	83 ec 04             	sub    $0x4,%esp
c1003cf1:	6a 4c                	push   $0x4c
c1003cf3:	6a 00                	push   $0x0
c1003cf5:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003cf8:	50                   	push   %eax
c1003cf9:	e8 ac c3 ff ff       	call   c10000aa <memset>
c1003cfe:	83 c4 10             	add    $0x10,%esp
c1003d01:	66 c7 45 e8 08 00    	movw   $0x8,-0x18(%ebp)
c1003d07:	66 c7 45 f4 10 00    	movw   $0x10,-0xc(%ebp)
c1003d0d:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1003d11:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
c1003d15:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
c1003d19:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
c1003d1d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d20:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1003d23:	8b 45 0c             	mov    0xc(%ebp),%eax
c1003d26:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1003d29:	b8 67 4a 00 c1       	mov    $0xc1004a67,%eax
c1003d2e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003d31:	83 ec 04             	sub    $0x4,%esp
c1003d34:	8d 45 ac             	lea    -0x54(%ebp),%eax
c1003d37:	50                   	push   %eax
c1003d38:	6a 00                	push   $0x0
c1003d3a:	ff 75 10             	pushl  0x10(%ebp)
c1003d3d:	e8 ff fd ff ff       	call   c1003b41 <do_fork>
c1003d42:	83 c4 10             	add    $0x10,%esp
c1003d45:	c9                   	leave  
c1003d46:	c3                   	ret    

c1003d47 <task_run>:
c1003d47:	55                   	push   %ebp
c1003d48:	89 e5                	mov    %esp,%ebp
c1003d4a:	83 ec 18             	sub    $0x18,%esp
c1003d4d:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003d52:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003d55:	74 63                	je     c1003dba <task_run+0x73>
c1003d57:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003d5c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003d5f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d62:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c1003d67:	a1 00 40 a1 c1       	mov    0xc1a14000,%eax
c1003d6c:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003d6f:	75 07                	jne    c1003d78 <task_run+0x31>
c1003d71:	e8 f6 cf ff ff       	call   c1000d6c <intr_enable>
c1003d76:	eb 05                	jmp    c1003d7d <task_run+0x36>
c1003d78:	e8 0e d0 ff ff       	call   c1000d8b <intr_disable>
c1003d7d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d80:	8b 40 28             	mov    0x28(%eax),%eax
c1003d83:	83 ec 0c             	sub    $0xc,%esp
c1003d86:	50                   	push   %eax
c1003d87:	e8 25 cc ff ff       	call   c10009b1 <set_ts_esp0>
c1003d8c:	83 c4 10             	add    $0x10,%esp
c1003d8f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d92:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003d95:	83 ec 0c             	sub    $0xc,%esp
c1003d98:	50                   	push   %eax
c1003d99:	e8 b8 c4 ff ff       	call   c1000256 <lcr3>
c1003d9e:	83 c4 10             	add    $0x10,%esp
c1003da1:	8b 45 08             	mov    0x8(%ebp),%eax
c1003da4:	8d 50 3c             	lea    0x3c(%eax),%edx
c1003da7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003daa:	83 c0 3c             	add    $0x3c,%eax
c1003dad:	83 ec 08             	sub    $0x8,%esp
c1003db0:	52                   	push   %edx
c1003db1:	50                   	push   %eax
c1003db2:	e8 b5 0c 00 00       	call   c1004a6c <switch_to>
c1003db7:	83 c4 10             	add    $0x10,%esp
c1003dba:	90                   	nop
c1003dbb:	c9                   	leave  
c1003dbc:	c3                   	ret    

c1003dbd <schedule>:
c1003dbd:	55                   	push   %ebp
c1003dbe:	89 e5                	mov    %esp,%ebp
c1003dc0:	83 ec 18             	sub    $0x18,%esp
c1003dc3:	c7 45 ec 84 1c 01 c1 	movl   $0xc1011c84,-0x14(%ebp)
c1003dca:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003dcd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003dd0:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003dd5:	8b 00                	mov    (%eax),%eax
c1003dd7:	85 c0                	test   %eax,%eax
c1003dd9:	75 0c                	jne    c1003de7 <schedule+0x2a>
c1003ddb:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003de0:	8b 40 04             	mov    0x4(%eax),%eax
c1003de3:	85 c0                	test   %eax,%eax
c1003de5:	74 0b                	je     c1003df2 <schedule+0x35>
c1003de7:	0f b6 05 b4 1c 01 c1 	movzbl 0xc1011cb4,%eax
c1003dee:	3c 01                	cmp    $0x1,%al
c1003df0:	75 48                	jne    c1003e3a <schedule+0x7d>
c1003df2:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003df7:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003dfe:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003e03:	83 c0 5c             	add    $0x5c,%eax
c1003e06:	50                   	push   %eax
c1003e07:	e8 fd f7 ff ff       	call   c1003609 <add_link>
c1003e0c:	83 c4 04             	add    $0x4,%esp
c1003e0f:	eb 29                	jmp    c1003e3a <schedule+0x7d>
c1003e11:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003e14:	83 e8 5c             	sub    $0x5c,%eax
c1003e17:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003e1a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003e1d:	8b 00                	mov    (%eax),%eax
c1003e1f:	85 c0                	test   %eax,%eax
c1003e21:	75 17                	jne    c1003e3a <schedule+0x7d>
c1003e23:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003e26:	8b 40 04             	mov    0x4(%eax),%eax
c1003e29:	85 c0                	test   %eax,%eax
c1003e2b:	74 0d                	je     c1003e3a <schedule+0x7d>
c1003e2d:	ff 75 f4             	pushl  -0xc(%ebp)
c1003e30:	e8 74 f8 ff ff       	call   c10036a9 <remove_link>
c1003e35:	83 c4 04             	add    $0x4,%esp
c1003e38:	eb 17                	jmp    c1003e51 <schedule+0x94>
c1003e3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003e3d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003e40:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003e43:	8b 40 04             	mov    0x4(%eax),%eax
c1003e46:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003e49:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003e4c:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1003e4f:	75 c0                	jne    c1003e11 <schedule+0x54>
c1003e51:	83 ec 0c             	sub    $0xc,%esp
c1003e54:	ff 75 f0             	pushl  -0x10(%ebp)
c1003e57:	e8 eb fe ff ff       	call   c1003d47 <task_run>
c1003e5c:	83 c4 10             	add    $0x10,%esp
c1003e5f:	90                   	nop
c1003e60:	c9                   	leave  
c1003e61:	c3                   	ret    

c1003e62 <thread_block>:
c1003e62:	55                   	push   %ebp
c1003e63:	89 e5                	mov    %esp,%ebp
c1003e65:	83 ec 18             	sub    $0x18,%esp
c1003e68:	e8 3e cf ff ff       	call   c1000dab <intr_save>
c1003e6d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003e70:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003e75:	8b 55 08             	mov    0x8(%ebp),%edx
c1003e78:	89 10                	mov    %edx,(%eax)
c1003e7a:	e8 3e ff ff ff       	call   c1003dbd <schedule>
c1003e7f:	83 ec 0c             	sub    $0xc,%esp
c1003e82:	ff 75 f4             	pushl  -0xc(%ebp)
c1003e85:	e8 34 cf ff ff       	call   c1000dbe <intr_restore>
c1003e8a:	83 c4 10             	add    $0x10,%esp
c1003e8d:	90                   	nop
c1003e8e:	c9                   	leave  
c1003e8f:	c3                   	ret    

c1003e90 <thread_unblock>:
c1003e90:	55                   	push   %ebp
c1003e91:	89 e5                	mov    %esp,%ebp
c1003e93:	83 ec 18             	sub    $0x18,%esp
c1003e96:	c7 45 f0 84 1c 01 c1 	movl   $0xc1011c84,-0x10(%ebp)
c1003e9d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003ea0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003ea3:	e8 03 cf ff ff       	call   c1000dab <intr_save>
c1003ea8:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003eab:	8b 45 08             	mov    0x8(%ebp),%eax
c1003eae:	8b 00                	mov    (%eax),%eax
c1003eb0:	83 f8 01             	cmp    $0x1,%eax
c1003eb3:	74 19                	je     c1003ece <thread_unblock+0x3e>
c1003eb5:	68 17 b5 00 c1       	push   $0xc100b517
c1003eba:	68 4c b6 00 c1       	push   $0xc100b64c
c1003ebf:	68 fc 01 00 00       	push   $0x1fc
c1003ec4:	68 d4 b4 00 c1       	push   $0xc100b4d4
c1003ec9:	e8 9d c4 ff ff       	call   c100036b <__PANIC>
c1003ece:	8b 45 08             	mov    0x8(%ebp),%eax
c1003ed1:	8b 00                	mov    (%eax),%eax
c1003ed3:	85 c0                	test   %eax,%eax
c1003ed5:	74 58                	je     c1003f2f <thread_unblock+0x9f>
c1003ed7:	eb 24                	jmp    c1003efd <thread_unblock+0x6d>
c1003ed9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003edc:	83 e8 5c             	sub    $0x5c,%eax
c1003edf:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003ee2:	75 19                	jne    c1003efd <thread_unblock+0x6d>
c1003ee4:	68 30 b5 00 c1       	push   $0xc100b530
c1003ee9:	68 4c b6 00 c1       	push   $0xc100b64c
c1003eee:	68 01 02 00 00       	push   $0x201
c1003ef3:	68 d4 b4 00 c1       	push   $0xc100b4d4
c1003ef8:	e8 6e c4 ff ff       	call   c100036b <__PANIC>
c1003efd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003f00:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003f03:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003f06:	8b 40 04             	mov    0x4(%eax),%eax
c1003f09:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003f0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003f0f:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1003f12:	75 c5                	jne    c1003ed9 <thread_unblock+0x49>
c1003f14:	8b 45 08             	mov    0x8(%ebp),%eax
c1003f17:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003f1d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003f20:	83 c0 5c             	add    $0x5c,%eax
c1003f23:	83 ec 0c             	sub    $0xc,%esp
c1003f26:	50                   	push   %eax
c1003f27:	e8 dd f6 ff ff       	call   c1003609 <add_link>
c1003f2c:	83 c4 10             	add    $0x10,%esp
c1003f2f:	83 ec 0c             	sub    $0xc,%esp
c1003f32:	ff 75 ec             	pushl  -0x14(%ebp)
c1003f35:	e8 84 ce ff ff       	call   c1000dbe <intr_restore>
c1003f3a:	83 c4 10             	add    $0x10,%esp
c1003f3d:	90                   	nop
c1003f3e:	c9                   	leave  
c1003f3f:	c3                   	ret    

c1003f40 <print_taskinfo>:
c1003f40:	55                   	push   %ebp
c1003f41:	89 e5                	mov    %esp,%ebp
c1003f43:	83 ec 08             	sub    $0x8,%esp
c1003f46:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1003f4b:	83 ec 0c             	sub    $0xc,%esp
c1003f4e:	50                   	push   %eax
c1003f4f:	e8 80 f6 ff ff       	call   c10035d4 <get_task_name>
c1003f54:	83 c4 10             	add    $0x10,%esp
c1003f57:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1003f5d:	8b 52 0c             	mov    0xc(%edx),%edx
c1003f60:	83 ec 04             	sub    $0x4,%esp
c1003f63:	50                   	push   %eax
c1003f64:	52                   	push   %edx
c1003f65:	68 64 b5 00 c1       	push   $0xc100b564
c1003f6a:	e8 42 18 00 00       	call   c10057b1 <printk>
c1003f6f:	83 c4 10             	add    $0x10,%esp
c1003f72:	83 ec 08             	sub    $0x8,%esp
c1003f75:	ff 75 08             	pushl  0x8(%ebp)
c1003f78:	68 86 b5 00 c1       	push   $0xc100b586
c1003f7d:	e8 2f 18 00 00       	call   c10057b1 <printk>
c1003f82:	83 c4 10             	add    $0x10,%esp
c1003f85:	83 ec 0c             	sub    $0xc,%esp
c1003f88:	68 93 b5 00 c1       	push   $0xc100b593
c1003f8d:	e8 1f 18 00 00       	call   c10057b1 <printk>
c1003f92:	83 c4 10             	add    $0x10,%esp
c1003f95:	b8 00 00 00 00       	mov    $0x0,%eax
c1003f9a:	c9                   	leave  
c1003f9b:	c3                   	ret    

c1003f9c <do_exit>:
c1003f9c:	55                   	push   %ebp
c1003f9d:	89 e5                	mov    %esp,%ebp
c1003f9f:	83 ec 08             	sub    $0x8,%esp
c1003fa2:	83 ec 0c             	sub    $0xc,%esp
c1003fa5:	68 af b5 00 c1       	push   $0xc100b5af
c1003faa:	e8 02 18 00 00       	call   c10057b1 <printk>
c1003faf:	83 c4 10             	add    $0x10,%esp
c1003fb2:	eb fe                	jmp    c1003fb2 <do_exit+0x16>

c1003fb4 <do_execve>:
c1003fb4:	55                   	push   %ebp
c1003fb5:	89 e5                	mov    %esp,%ebp
c1003fb7:	b8 00 00 00 00       	mov    $0x0,%eax
c1003fbc:	5d                   	pop    %ebp
c1003fbd:	c3                   	ret    

c1003fbe <kernel_execve>:
c1003fbe:	55                   	push   %ebp
c1003fbf:	89 e5                	mov    %esp,%ebp
c1003fc1:	83 ec 18             	sub    $0x18,%esp
c1003fc4:	83 ec 0c             	sub    $0xc,%esp
c1003fc7:	ff 75 08             	pushl  0x8(%ebp)
c1003fca:	e8 4f c1 ff ff       	call   c100011e <strlen>
c1003fcf:	83 c4 10             	add    $0x10,%esp
c1003fd2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003fd5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003fd8:	c9                   	leave  
c1003fd9:	c3                   	ret    

c1003fda <user_main>:
c1003fda:	55                   	push   %ebp
c1003fdb:	89 e5                	mov    %esp,%ebp
c1003fdd:	90                   	nop
c1003fde:	5d                   	pop    %ebp
c1003fdf:	c3                   	ret    

c1003fe0 <set_user_cr3>:
c1003fe0:	55                   	push   %ebp
c1003fe1:	89 e5                	mov    %esp,%ebp
c1003fe3:	57                   	push   %edi
c1003fe4:	56                   	push   %esi
c1003fe5:	53                   	push   %ebx
c1003fe6:	83 ec 2c             	sub    $0x2c,%esp
c1003fe9:	83 ec 08             	sub    $0x8,%esp
c1003fec:	6a 02                	push   $0x2
c1003fee:	68 00 10 00 00       	push   $0x1000
c1003ff3:	e8 bb ec ff ff       	call   c1002cb3 <vmm_malloc>
c1003ff8:	83 c4 10             	add    $0x10,%esp
c1003ffb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003ffe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004001:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c1004006:	ba 00 10 00 00       	mov    $0x1000,%edx
c100400b:	8b 0b                	mov    (%ebx),%ecx
c100400d:	89 08                	mov    %ecx,(%eax)
c100400f:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1004013:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1004017:	8d 78 04             	lea    0x4(%eax),%edi
c100401a:	83 e7 fc             	and    $0xfffffffc,%edi
c100401d:	29 f8                	sub    %edi,%eax
c100401f:	29 c3                	sub    %eax,%ebx
c1004021:	01 c2                	add    %eax,%edx
c1004023:	83 e2 fc             	and    $0xfffffffc,%edx
c1004026:	89 d0                	mov    %edx,%eax
c1004028:	c1 e8 02             	shr    $0x2,%eax
c100402b:	89 de                	mov    %ebx,%esi
c100402d:	89 c1                	mov    %eax,%ecx
c100402f:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1004031:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004034:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004037:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100403a:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100403d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004040:	c1 e8 16             	shr    $0x16,%eax
c1004043:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100404a:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100404d:	01 d0                	add    %edx,%eax
c100404f:	8b 00                	mov    (%eax),%eax
c1004051:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1004056:	2d 00 00 00 40       	sub    $0x40000000,%eax
c100405b:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100405e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004061:	c1 e8 0c             	shr    $0xc,%eax
c1004064:	25 ff 03 00 00       	and    $0x3ff,%eax
c1004069:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004070:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1004073:	01 d0                	add    %edx,%eax
c1004075:	8b 00                	mov    (%eax),%eax
c1004077:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100407c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100407f:	8b 45 08             	mov    0x8(%ebp),%eax
c1004082:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1004085:	89 50 2c             	mov    %edx,0x2c(%eax)
c1004088:	8b 45 08             	mov    0x8(%ebp),%eax
c100408b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100408e:	89 50 30             	mov    %edx,0x30(%eax)
c1004091:	90                   	nop
c1004092:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1004095:	5b                   	pop    %ebx
c1004096:	5e                   	pop    %esi
c1004097:	5f                   	pop    %edi
c1004098:	5d                   	pop    %ebp
c1004099:	c3                   	ret    

c100409a <copy_user_cr3>:
c100409a:	55                   	push   %ebp
c100409b:	89 e5                	mov    %esp,%ebp
c100409d:	57                   	push   %edi
c100409e:	56                   	push   %esi
c100409f:	53                   	push   %ebx
c10040a0:	83 ec 2c             	sub    $0x2c,%esp
c10040a3:	83 ec 08             	sub    $0x8,%esp
c10040a6:	6a 02                	push   $0x2
c10040a8:	68 00 10 00 00       	push   $0x1000
c10040ad:	e8 01 ec ff ff       	call   c1002cb3 <vmm_malloc>
c10040b2:	83 c4 10             	add    $0x10,%esp
c10040b5:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10040b8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10040bb:	bb 00 20 61 c1       	mov    $0xc1612000,%ebx
c10040c0:	ba 00 10 00 00       	mov    $0x1000,%edx
c10040c5:	8b 0b                	mov    (%ebx),%ecx
c10040c7:	89 08                	mov    %ecx,(%eax)
c10040c9:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c10040cd:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c10040d1:	8d 78 04             	lea    0x4(%eax),%edi
c10040d4:	83 e7 fc             	and    $0xfffffffc,%edi
c10040d7:	29 f8                	sub    %edi,%eax
c10040d9:	29 c3                	sub    %eax,%ebx
c10040db:	01 c2                	add    %eax,%edx
c10040dd:	83 e2 fc             	and    $0xfffffffc,%edx
c10040e0:	89 d0                	mov    %edx,%eax
c10040e2:	c1 e8 02             	shr    $0x2,%eax
c10040e5:	89 de                	mov    %ebx,%esi
c10040e7:	89 c1                	mov    %eax,%ecx
c10040e9:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c10040eb:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10040f0:	8b 40 30             	mov    0x30(%eax),%eax
c10040f3:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10040f6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10040f9:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10040fc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1004103:	eb 51                	jmp    c1004156 <copy_user_cr3+0xbc>
c1004105:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004108:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100410f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004112:	01 d0                	add    %edx,%eax
c1004114:	8b 00                	mov    (%eax),%eax
c1004116:	83 e0 01             	and    $0x1,%eax
c1004119:	85 c0                	test   %eax,%eax
c100411b:	74 13                	je     c1004130 <copy_user_cr3+0x96>
c100411d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004120:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004127:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100412a:	01 d0                	add    %edx,%eax
c100412c:	8b 00                	mov    (%eax),%eax
c100412e:	eb 11                	jmp    c1004141 <copy_user_cr3+0xa7>
c1004130:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004133:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100413a:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100413d:	01 d0                	add    %edx,%eax
c100413f:	8b 00                	mov    (%eax),%eax
c1004141:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1004144:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100414b:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100414e:	01 ca                	add    %ecx,%edx
c1004150:	89 02                	mov    %eax,(%edx)
c1004152:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1004156:	81 7d e4 ff 03 00 00 	cmpl   $0x3ff,-0x1c(%ebp)
c100415d:	7e a6                	jle    c1004105 <copy_user_cr3+0x6b>
c100415f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004162:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1004165:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004168:	c1 e8 16             	shr    $0x16,%eax
c100416b:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004172:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1004175:	01 d0                	add    %edx,%eax
c1004177:	8b 00                	mov    (%eax),%eax
c1004179:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100417e:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1004183:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1004186:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004189:	c1 e8 0c             	shr    $0xc,%eax
c100418c:	25 ff 03 00 00       	and    $0x3ff,%eax
c1004191:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004198:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100419b:	01 d0                	add    %edx,%eax
c100419d:	8b 00                	mov    (%eax),%eax
c100419f:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10041a4:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10041a7:	8b 45 08             	mov    0x8(%ebp),%eax
c10041aa:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10041ad:	89 50 30             	mov    %edx,0x30(%eax)
c10041b0:	8b 45 08             	mov    0x8(%ebp),%eax
c10041b3:	8b 55 cc             	mov    -0x34(%ebp),%edx
c10041b6:	89 50 2c             	mov    %edx,0x2c(%eax)
c10041b9:	90                   	nop
c10041ba:	8d 65 f4             	lea    -0xc(%ebp),%esp
c10041bd:	5b                   	pop    %ebx
c10041be:	5e                   	pop    %esi
c10041bf:	5f                   	pop    %edi
c10041c0:	5d                   	pop    %ebp
c10041c1:	c3                   	ret    

c10041c2 <list_traversal>:
c10041c2:	55                   	push   %ebp
c10041c3:	89 e5                	mov    %esp,%ebp
c10041c5:	83 ec 18             	sub    $0x18,%esp
c10041c8:	8b 45 08             	mov    0x8(%ebp),%eax
c10041cb:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10041ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041d1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10041d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10041d7:	8b 40 04             	mov    0x4(%eax),%eax
c10041da:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c10041dd:	75 07                	jne    c10041e6 <list_traversal+0x24>
c10041df:	b8 01 00 00 00       	mov    $0x1,%eax
c10041e4:	eb 05                	jmp    c10041eb <list_traversal+0x29>
c10041e6:	b8 00 00 00 00       	mov    $0x0,%eax
c10041eb:	84 c0                	test   %al,%al
c10041ed:	74 21                	je     c1004210 <list_traversal+0x4e>
c10041ef:	b8 00 00 00 00       	mov    $0x0,%eax
c10041f4:	eb 36                	jmp    c100422c <list_traversal+0x6a>
c10041f6:	83 ec 08             	sub    $0x8,%esp
c10041f9:	ff 75 10             	pushl  0x10(%ebp)
c10041fc:	ff 75 f4             	pushl  -0xc(%ebp)
c10041ff:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004202:	ff d0                	call   *%eax
c1004204:	83 c4 10             	add    $0x10,%esp
c1004207:	84 c0                	test   %al,%al
c1004209:	74 05                	je     c1004210 <list_traversal+0x4e>
c100420b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100420e:	eb 1c                	jmp    c100422c <list_traversal+0x6a>
c1004210:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004213:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004216:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004219:	8b 40 04             	mov    0x4(%eax),%eax
c100421c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100421f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004222:	3b 45 08             	cmp    0x8(%ebp),%eax
c1004225:	75 cf                	jne    c10041f6 <list_traversal+0x34>
c1004227:	b8 00 00 00 00       	mov    $0x0,%eax
c100422c:	c9                   	leave  
c100422d:	c3                   	ret    

c100422e <task_exit>:
c100422e:	55                   	push   %ebp
c100422f:	89 e5                	mov    %esp,%ebp
c1004231:	83 ec 48             	sub    $0x48,%esp
c1004234:	c7 45 f0 84 1c 01 c1 	movl   $0xc1011c84,-0x10(%ebp)
c100423b:	c7 45 ec 8c 1c 01 c1 	movl   $0xc1011c8c,-0x14(%ebp)
c1004242:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004245:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004248:	e8 5e cb ff ff       	call   c1000dab <intr_save>
c100424d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004250:	8b 45 08             	mov    0x8(%ebp),%eax
c1004253:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
c1004259:	eb 59                	jmp    c10042b4 <task_exit+0x86>
c100425b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100425e:	83 e8 5c             	sub    $0x5c,%eax
c1004261:	39 45 08             	cmp    %eax,0x8(%ebp)
c1004264:	75 4e                	jne    c10042b4 <task_exit+0x86>
c1004266:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004269:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100426c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100426f:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004272:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004275:	8b 40 04             	mov    0x4(%eax),%eax
c1004278:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100427b:	8b 12                	mov    (%edx),%edx
c100427d:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1004280:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1004283:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1004286:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1004289:	89 50 04             	mov    %edx,0x4(%eax)
c100428c:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100428f:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1004292:	89 10                	mov    %edx,(%eax)
c1004294:	90                   	nop
c1004295:	90                   	nop
c1004296:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1004299:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100429c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100429f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c10042a2:	89 50 04             	mov    %edx,0x4(%eax)
c10042a5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10042a8:	8b 50 04             	mov    0x4(%eax),%edx
c10042ab:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10042ae:	89 10                	mov    %edx,(%eax)
c10042b0:	90                   	nop
c10042b1:	90                   	nop
c10042b2:	eb 17                	jmp    c10042cb <task_exit+0x9d>
c10042b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042b7:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10042ba:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10042bd:	8b 40 04             	mov    0x4(%eax),%eax
c10042c0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10042c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042c6:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c10042c9:	75 90                	jne    c100425b <task_exit+0x2d>
c10042cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10042ce:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10042d1:	eb 59                	jmp    c100432c <task_exit+0xfe>
c10042d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042d6:	83 e8 64             	sub    $0x64,%eax
c10042d9:	39 45 08             	cmp    %eax,0x8(%ebp)
c10042dc:	75 4e                	jne    c100432c <task_exit+0xfe>
c10042de:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10042e1:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10042e4:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10042e7:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10042ea:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10042ed:	8b 40 04             	mov    0x4(%eax),%eax
c10042f0:	8b 55 c8             	mov    -0x38(%ebp),%edx
c10042f3:	8b 12                	mov    (%edx),%edx
c10042f5:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c10042f8:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10042fb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c10042fe:	8b 55 c0             	mov    -0x40(%ebp),%edx
c1004301:	89 50 04             	mov    %edx,0x4(%eax)
c1004304:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1004307:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c100430a:	89 10                	mov    %edx,(%eax)
c100430c:	90                   	nop
c100430d:	90                   	nop
c100430e:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1004311:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1004314:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1004317:	8b 55 bc             	mov    -0x44(%ebp),%edx
c100431a:	89 50 04             	mov    %edx,0x4(%eax)
c100431d:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1004320:	8b 50 04             	mov    0x4(%eax),%edx
c1004323:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1004326:	89 10                	mov    %edx,(%eax)
c1004328:	90                   	nop
c1004329:	90                   	nop
c100432a:	eb 17                	jmp    c1004343 <task_exit+0x115>
c100432c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100432f:	89 45 b8             	mov    %eax,-0x48(%ebp)
c1004332:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1004335:	8b 40 04             	mov    0x4(%eax),%eax
c1004338:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100433b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100433e:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1004341:	75 90                	jne    c10042d3 <task_exit+0xa5>
c1004343:	8b 45 08             	mov    0x8(%ebp),%eax
c1004346:	8b 40 0c             	mov    0xc(%eax),%eax
c1004349:	83 ec 0c             	sub    $0xc,%esp
c100434c:	50                   	push   %eax
c100434d:	e8 2f f2 ff ff       	call   c1003581 <free_pid>
c1004352:	83 c4 10             	add    $0x10,%esp
c1004355:	8b 45 08             	mov    0x8(%ebp),%eax
c1004358:	8b 40 30             	mov    0x30(%eax),%eax
c100435b:	83 ec 08             	sub    $0x8,%esp
c100435e:	68 00 10 00 00       	push   $0x1000
c1004363:	50                   	push   %eax
c1004364:	e8 6f ea ff ff       	call   c1002dd8 <vmm_free>
c1004369:	83 c4 10             	add    $0x10,%esp
c100436c:	8b 45 08             	mov    0x8(%ebp),%eax
c100436f:	05 00 10 00 00       	add    $0x1000,%eax
c1004374:	83 ec 08             	sub    $0x8,%esp
c1004377:	68 00 10 00 00       	push   $0x1000
c100437c:	50                   	push   %eax
c100437d:	e8 56 ea ff ff       	call   c1002dd8 <vmm_free>
c1004382:	83 c4 10             	add    $0x10,%esp
c1004385:	8b 45 08             	mov    0x8(%ebp),%eax
c1004388:	83 ec 08             	sub    $0x8,%esp
c100438b:	68 00 10 00 00       	push   $0x1000
c1004390:	50                   	push   %eax
c1004391:	e8 42 ea ff ff       	call   c1002dd8 <vmm_free>
c1004396:	83 c4 10             	add    $0x10,%esp
c1004399:	83 ec 0c             	sub    $0xc,%esp
c100439c:	ff 75 e8             	pushl  -0x18(%ebp)
c100439f:	e8 1a ca ff ff       	call   c1000dbe <intr_restore>
c10043a4:	83 c4 10             	add    $0x10,%esp
c10043a7:	90                   	nop
c10043a8:	c9                   	leave  
c10043a9:	c3                   	ret    

c10043aa <pte_ptr>:
c10043aa:	55                   	push   %ebp
c10043ab:	89 e5                	mov    %esp,%ebp
c10043ad:	83 ec 10             	sub    $0x10,%esp
c10043b0:	8b 45 08             	mov    0x8(%ebp),%eax
c10043b3:	c1 e8 0a             	shr    $0xa,%eax
c10043b6:	25 00 f0 3f 00       	and    $0x3ff000,%eax
c10043bb:	89 c2                	mov    %eax,%edx
c10043bd:	8b 45 08             	mov    0x8(%ebp),%eax
c10043c0:	c1 e8 0c             	shr    $0xc,%eax
c10043c3:	25 ff 03 00 00       	and    $0x3ff,%eax
c10043c8:	c1 e0 02             	shl    $0x2,%eax
c10043cb:	01 d0                	add    %edx,%eax
c10043cd:	2d 00 00 40 00       	sub    $0x400000,%eax
c10043d2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10043d5:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10043d8:	c9                   	leave  
c10043d9:	c3                   	ret    

c10043da <release_prog_resource>:
c10043da:	55                   	push   %ebp
c10043db:	89 e5                	mov    %esp,%ebp
c10043dd:	83 ec 18             	sub    $0x18,%esp
c10043e0:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c10043e4:	e9 d9 00 00 00       	jmp    c10044c2 <release_prog_resource+0xe8>
c10043e9:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
c10043ed:	8b 45 08             	mov    0x8(%ebp),%eax
c10043f0:	83 c2 1c             	add    $0x1c,%edx
c10043f3:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c10043f7:	83 f8 ff             	cmp    $0xffffffff,%eax
c10043fa:	0f 84 b8 00 00 00    	je     c10044b8 <release_prog_resource+0xde>
c1004400:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004404:	83 ec 0c             	sub    $0xc,%esp
c1004407:	50                   	push   %eax
c1004408:	e8 55 66 00 00       	call   c100aa62 <is_pipe>
c100440d:	83 c4 10             	add    $0x10,%esp
c1004410:	85 c0                	test   %eax,%eax
c1004412:	0f 84 90 00 00 00    	je     c10044a8 <release_prog_resource+0xce>
c1004418:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100441c:	83 ec 0c             	sub    $0xc,%esp
c100441f:	50                   	push   %eax
c1004420:	e8 ea 2a 00 00       	call   c1006f0f <fd_local2global>
c1004425:	83 c4 10             	add    $0x10,%esp
c1004428:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100442b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100442e:	89 d0                	mov    %edx,%eax
c1004430:	01 c0                	add    %eax,%eax
c1004432:	01 d0                	add    %edx,%eax
c1004434:	c1 e0 02             	shl    $0x2,%eax
c1004437:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100443c:	8b 00                	mov    (%eax),%eax
c100443e:	8d 48 ff             	lea    -0x1(%eax),%ecx
c1004441:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004444:	89 d0                	mov    %edx,%eax
c1004446:	01 c0                	add    %eax,%eax
c1004448:	01 d0                	add    %edx,%eax
c100444a:	c1 e0 02             	shl    $0x2,%eax
c100444d:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1004452:	89 08                	mov    %ecx,(%eax)
c1004454:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004457:	89 d0                	mov    %edx,%eax
c1004459:	01 c0                	add    %eax,%eax
c100445b:	01 d0                	add    %edx,%eax
c100445d:	c1 e0 02             	shl    $0x2,%eax
c1004460:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1004465:	8b 00                	mov    (%eax),%eax
c1004467:	85 c0                	test   %eax,%eax
c1004469:	75 4d                	jne    c10044b8 <release_prog_resource+0xde>
c100446b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100446e:	89 d0                	mov    %edx,%eax
c1004470:	01 c0                	add    %eax,%eax
c1004472:	01 d0                	add    %edx,%eax
c1004474:	c1 e0 02             	shl    $0x2,%eax
c1004477:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100447c:	8b 00                	mov    (%eax),%eax
c100447e:	83 ec 08             	sub    $0x8,%esp
c1004481:	68 00 10 00 00       	push   $0x1000
c1004486:	50                   	push   %eax
c1004487:	e8 4c e9 ff ff       	call   c1002dd8 <vmm_free>
c100448c:	83 c4 10             	add    $0x10,%esp
c100448f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004492:	89 d0                	mov    %edx,%eax
c1004494:	01 c0                	add    %eax,%eax
c1004496:	01 d0                	add    %edx,%eax
c1004498:	c1 e0 02             	shl    $0x2,%eax
c100449b:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10044a0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10044a6:	eb 10                	jmp    c10044b8 <release_prog_resource+0xde>
c10044a8:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10044ac:	83 ec 0c             	sub    $0xc,%esp
c10044af:	50                   	push   %eax
c10044b0:	e8 9c 2a 00 00       	call   c1006f51 <sys_close>
c10044b5:	83 c4 10             	add    $0x10,%esp
c10044b8:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10044bc:	83 c0 01             	add    $0x1,%eax
c10044bf:	88 45 f7             	mov    %al,-0x9(%ebp)
c10044c2:	80 7d f7 1f          	cmpb   $0x1f,-0x9(%ebp)
c10044c6:	0f 86 1d ff ff ff    	jbe    c10043e9 <release_prog_resource+0xf>
c10044cc:	90                   	nop
c10044cd:	90                   	nop
c10044ce:	c9                   	leave  
c10044cf:	c3                   	ret    

c10044d0 <find_child>:
c10044d0:	55                   	push   %ebp
c10044d1:	89 e5                	mov    %esp,%ebp
c10044d3:	83 ec 10             	sub    $0x10,%esp
c10044d6:	8b 45 08             	mov    0x8(%ebp),%eax
c10044d9:	83 e8 64             	sub    $0x64,%eax
c10044dc:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10044df:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10044e2:	8b 40 10             	mov    0x10(%eax),%eax
c10044e5:	39 45 0c             	cmp    %eax,0xc(%ebp)
c10044e8:	75 07                	jne    c10044f1 <find_child+0x21>
c10044ea:	b8 01 00 00 00       	mov    $0x1,%eax
c10044ef:	eb 05                	jmp    c10044f6 <find_child+0x26>
c10044f1:	b8 00 00 00 00       	mov    $0x0,%eax
c10044f6:	c9                   	leave  
c10044f7:	c3                   	ret    

c10044f8 <find_hanging_child>:
c10044f8:	55                   	push   %ebp
c10044f9:	89 e5                	mov    %esp,%ebp
c10044fb:	83 ec 10             	sub    $0x10,%esp
c10044fe:	8b 45 08             	mov    0x8(%ebp),%eax
c1004501:	83 e8 64             	sub    $0x64,%eax
c1004504:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004507:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100450a:	8b 40 10             	mov    0x10(%eax),%eax
c100450d:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1004510:	75 11                	jne    c1004523 <find_hanging_child+0x2b>
c1004512:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004515:	8b 00                	mov    (%eax),%eax
c1004517:	83 f8 02             	cmp    $0x2,%eax
c100451a:	75 07                	jne    c1004523 <find_hanging_child+0x2b>
c100451c:	b8 01 00 00 00       	mov    $0x1,%eax
c1004521:	eb 05                	jmp    c1004528 <find_hanging_child+0x30>
c1004523:	b8 00 00 00 00       	mov    $0x0,%eax
c1004528:	c9                   	leave  
c1004529:	c3                   	ret    

c100452a <task0_adopt_a_child>:
c100452a:	55                   	push   %ebp
c100452b:	89 e5                	mov    %esp,%ebp
c100452d:	83 ec 10             	sub    $0x10,%esp
c1004530:	8b 45 08             	mov    0x8(%ebp),%eax
c1004533:	83 e8 64             	sub    $0x64,%eax
c1004536:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004539:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100453c:	8b 40 10             	mov    0x10(%eax),%eax
c100453f:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1004542:	75 0a                	jne    c100454e <task0_adopt_a_child+0x24>
c1004544:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1004547:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c100454e:	b8 00 00 00 00       	mov    $0x0,%eax
c1004553:	c9                   	leave  
c1004554:	c3                   	ret    

c1004555 <sys_wait>:
c1004555:	55                   	push   %ebp
c1004556:	89 e5                	mov    %esp,%ebp
c1004558:	83 ec 18             	sub    $0x18,%esp
c100455b:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004560:	8b 40 0c             	mov    0xc(%eax),%eax
c1004563:	83 ec 04             	sub    $0x4,%esp
c1004566:	50                   	push   %eax
c1004567:	68 f8 44 00 c1       	push   $0xc10044f8
c100456c:	68 8c 1c 01 c1       	push   $0xc1011c8c
c1004571:	e8 4c fc ff ff       	call   c10041c2 <list_traversal>
c1004576:	83 c4 10             	add    $0x10,%esp
c1004579:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100457c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1004580:	74 37                	je     c10045b9 <sys_wait+0x64>
c1004582:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004585:	83 e8 64             	sub    $0x64,%eax
c1004588:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100458b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100458e:	0f b6 80 fc 00 00 00 	movzbl 0xfc(%eax),%eax
c1004595:	0f be d0             	movsbl %al,%edx
c1004598:	8b 45 08             	mov    0x8(%ebp),%eax
c100459b:	89 10                	mov    %edx,(%eax)
c100459d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10045a0:	8b 40 0c             	mov    0xc(%eax),%eax
c10045a3:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10045a6:	83 ec 0c             	sub    $0xc,%esp
c10045a9:	ff 75 f0             	pushl  -0x10(%ebp)
c10045ac:	e8 7d fc ff ff       	call   c100422e <task_exit>
c10045b1:	83 c4 10             	add    $0x10,%esp
c10045b4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10045b7:	eb 40                	jmp    c10045f9 <sys_wait+0xa4>
c10045b9:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10045be:	8b 40 0c             	mov    0xc(%eax),%eax
c10045c1:	83 ec 04             	sub    $0x4,%esp
c10045c4:	50                   	push   %eax
c10045c5:	68 d0 44 00 c1       	push   $0xc10044d0
c10045ca:	68 8c 1c 01 c1       	push   $0xc1011c8c
c10045cf:	e8 ee fb ff ff       	call   c10041c2 <list_traversal>
c10045d4:	83 c4 10             	add    $0x10,%esp
c10045d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10045da:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10045de:	75 07                	jne    c10045e7 <sys_wait+0x92>
c10045e0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10045e5:	eb 12                	jmp    c10045f9 <sys_wait+0xa4>
c10045e7:	83 ec 0c             	sub    $0xc,%esp
c10045ea:	6a 01                	push   $0x1
c10045ec:	e8 71 f8 ff ff       	call   c1003e62 <thread_block>
c10045f1:	83 c4 10             	add    $0x10,%esp
c10045f4:	e9 62 ff ff ff       	jmp    c100455b <sys_wait+0x6>
c10045f9:	c9                   	leave  
c10045fa:	c3                   	ret    

c10045fb <sys_exit>:
c10045fb:	55                   	push   %ebp
c10045fc:	89 e5                	mov    %esp,%ebp
c10045fe:	83 ec 18             	sub    $0x18,%esp
c1004601:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004606:	8b 55 08             	mov    0x8(%ebp),%edx
c1004609:	88 90 fc 00 00 00    	mov    %dl,0xfc(%eax)
c100460f:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004614:	8b 40 10             	mov    0x10(%eax),%eax
c1004617:	83 f8 ff             	cmp    $0xffffffff,%eax
c100461a:	75 19                	jne    c1004635 <sys_exit+0x3a>
c100461c:	68 bc b5 00 c1       	push   $0xc100b5bc
c1004621:	68 5c b6 00 c1       	push   $0xc100b65c
c1004626:	68 3c 03 00 00       	push   $0x33c
c100462b:	68 d4 b4 00 c1       	push   $0xc100b4d4
c1004630:	e8 36 bd ff ff       	call   c100036b <__PANIC>
c1004635:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100463a:	8b 40 0c             	mov    0xc(%eax),%eax
c100463d:	83 ec 04             	sub    $0x4,%esp
c1004640:	50                   	push   %eax
c1004641:	68 2a 45 00 c1       	push   $0xc100452a
c1004646:	68 8c 1c 01 c1       	push   $0xc1011c8c
c100464b:	e8 72 fb ff ff       	call   c10041c2 <list_traversal>
c1004650:	83 c4 10             	add    $0x10,%esp
c1004653:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004658:	8b 40 10             	mov    0x10(%eax),%eax
c100465b:	83 ec 0c             	sub    $0xc,%esp
c100465e:	50                   	push   %eax
c100465f:	e8 39 f1 ff ff       	call   c100379d <find_task>
c1004664:	83 c4 10             	add    $0x10,%esp
c1004667:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100466a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100466d:	8b 00                	mov    (%eax),%eax
c100466f:	83 f8 01             	cmp    $0x1,%eax
c1004672:	75 0e                	jne    c1004682 <sys_exit+0x87>
c1004674:	83 ec 0c             	sub    $0xc,%esp
c1004677:	ff 75 f4             	pushl  -0xc(%ebp)
c100467a:	e8 11 f8 ff ff       	call   c1003e90 <thread_unblock>
c100467f:	83 c4 10             	add    $0x10,%esp
c1004682:	83 ec 0c             	sub    $0xc,%esp
c1004685:	6a 02                	push   $0x2
c1004687:	e8 d6 f7 ff ff       	call   c1003e62 <thread_block>
c100468c:	83 c4 10             	add    $0x10,%esp
c100468f:	90                   	nop
c1004690:	c9                   	leave  
c1004691:	c3                   	ret    

c1004692 <user_task_init>:
c1004692:	55                   	push   %ebp
c1004693:	89 e5                	mov    %esp,%ebp
c1004695:	53                   	push   %ebx
c1004696:	83 ec 14             	sub    $0x14,%esp
c1004699:	83 ec 0c             	sub    $0xc,%esp
c100469c:	6a 00                	push   $0x0
c100469e:	e8 65 f1 ff ff       	call   c1003808 <alloc_task>
c10046a3:	83 c4 10             	add    $0x10,%esp
c10046a6:	a3 0c 40 a1 c1       	mov    %eax,0xc1a1400c
c10046ab:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046b0:	85 c0                	test   %eax,%eax
c10046b2:	75 10                	jne    c10046c4 <user_task_init+0x32>
c10046b4:	83 ec 0c             	sub    $0xc,%esp
c10046b7:	68 98 b4 00 c1       	push   $0xc100b498
c10046bc:	e8 f0 10 00 00       	call   c10057b1 <printk>
c10046c1:	83 c4 10             	add    $0x10,%esp
c10046c4:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046c9:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c10046cf:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046d4:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c10046db:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046e0:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c10046e7:	8b 1d 0c 40 a1 c1    	mov    0xc1a1400c,%ebx
c10046ed:	e8 33 ee ff ff       	call   c1003525 <alloc_pid>
c10046f2:	89 43 0c             	mov    %eax,0xc(%ebx)
c10046f5:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10046fa:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1004701:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004706:	83 ec 08             	sub    $0x8,%esp
c1004709:	68 e6 b5 00 c1       	push   $0xc100b5e6
c100470e:	50                   	push   %eax
c100470f:	e8 8b ee ff ff       	call   c100359f <set_task_name>
c1004714:	83 c4 10             	add    $0x10,%esp
c1004717:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100471c:	89 c2                	mov    %eax,%edx
c100471e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004723:	81 c2 00 20 00 00    	add    $0x2000,%edx
c1004729:	89 50 28             	mov    %edx,0x28(%eax)
c100472c:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004731:	83 ec 0c             	sub    $0xc,%esp
c1004734:	50                   	push   %eax
c1004735:	e8 a6 f8 ff ff       	call   c1003fe0 <set_user_cr3>
c100473a:	83 c4 10             	add    $0x10,%esp
c100473d:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004742:	8d 90 b4 1f 00 00    	lea    0x1fb4(%eax),%edx
c1004748:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100474d:	89 50 38             	mov    %edx,0x38(%eax)
c1004750:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004755:	8b 40 38             	mov    0x38(%eax),%eax
c1004758:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c100475f:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004764:	8b 40 38             	mov    0x38(%eax),%eax
c1004767:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100476e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004773:	8b 40 38             	mov    0x38(%eax),%eax
c1004776:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c100477d:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004782:	8b 40 38             	mov    0x38(%eax),%eax
c1004785:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c100478c:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004791:	8b 40 38             	mov    0x38(%eax),%eax
c1004794:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100479a:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100479f:	8b 40 38             	mov    0x38(%eax),%eax
c10047a2:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c10047a9:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047ae:	8b 40 38             	mov    0x38(%eax),%eax
c10047b1:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c10047b8:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047bd:	8b 40 38             	mov    0x38(%eax),%eax
c10047c0:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c10047c7:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047cc:	8b 40 38             	mov    0x38(%eax),%eax
c10047cf:	66 c7 40 3c 1b 00    	movw   $0x1b,0x3c(%eax)
c10047d5:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047da:	8b 40 38             	mov    0x38(%eax),%eax
c10047dd:	66 c7 40 48 23 00    	movw   $0x23,0x48(%eax)
c10047e3:	8b 15 0c 40 a1 c1    	mov    0xc1a1400c,%edx
c10047e9:	8b 52 38             	mov    0x38(%edx),%edx
c10047ec:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c10047f0:	66 89 42 24          	mov    %ax,0x24(%edx)
c10047f4:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10047f9:	8b 40 38             	mov    0x38(%eax),%eax
c10047fc:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1004800:	66 89 50 28          	mov    %dx,0x28(%eax)
c1004804:	8b 15 0c 40 a1 c1    	mov    0xc1a1400c,%edx
c100480a:	8b 52 38             	mov    0x38(%edx),%edx
c100480d:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1004811:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1004815:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100481a:	8b 40 38             	mov    0x38(%eax),%eax
c100481d:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1004823:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004828:	8b 40 38             	mov    0x38(%eax),%eax
c100482b:	8b 55 08             	mov    0x8(%ebp),%edx
c100482e:	89 50 38             	mov    %edx,0x38(%eax)
c1004831:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004836:	8b 40 38             	mov    0x38(%eax),%eax
c1004839:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1004840:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004845:	89 c2                	mov    %eax,%edx
c1004847:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100484c:	8b 40 38             	mov    0x38(%eax),%eax
c100484f:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1004855:	89 50 44             	mov    %edx,0x44(%eax)
c1004858:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100485d:	8b 15 e6 0d 00 c1    	mov    0xc1000de6,%edx
c1004863:	89 50 3c             	mov    %edx,0x3c(%eax)
c1004866:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100486b:	89 c2                	mov    %eax,%edx
c100486d:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004872:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1004878:	89 50 40             	mov    %edx,0x40(%eax)
c100487b:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004880:	8b 50 38             	mov    0x38(%eax),%edx
c1004883:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004888:	8b 52 10             	mov    0x10(%edx),%edx
c100488b:	89 50 44             	mov    %edx,0x44(%eax)
c100488e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004893:	8b 50 38             	mov    0x38(%eax),%edx
c1004896:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100489b:	8b 52 14             	mov    0x14(%edx),%edx
c100489e:	89 50 4c             	mov    %edx,0x4c(%eax)
c10048a1:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048a6:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
c10048ad:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048b2:	c7 40 78 01 00 00 00 	movl   $0x1,0x78(%eax)
c10048b9:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048be:	c7 40 7c 02 00 00 00 	movl   $0x2,0x7c(%eax)
c10048c5:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
c10048cc:	eb 17                	jmp    c10048e5 <user_task_init+0x253>
c10048ce:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048d3:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10048d6:	83 c2 1c             	add    $0x1c,%edx
c10048d9:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c10048e0:	ff 
c10048e1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10048e5:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c10048e9:	7e e3                	jle    c10048ce <user_task_init+0x23c>
c10048eb:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10048f0:	83 c0 5c             	add    $0x5c,%eax
c10048f3:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10048f6:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10048f9:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10048fc:	89 50 04             	mov    %edx,0x4(%eax)
c10048ff:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004902:	8b 50 04             	mov    0x4(%eax),%edx
c1004905:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004908:	89 10                	mov    %edx,(%eax)
c100490a:	90                   	nop
c100490b:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004910:	83 c0 64             	add    $0x64,%eax
c1004913:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004916:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004919:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100491c:	89 50 04             	mov    %edx,0x4(%eax)
c100491f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004922:	8b 50 04             	mov    0x4(%eax),%edx
c1004925:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004928:	89 10                	mov    %edx,(%eax)
c100492a:	90                   	nop
c100492b:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004930:	83 c0 64             	add    $0x64,%eax
c1004933:	83 ec 0c             	sub    $0xc,%esp
c1004936:	50                   	push   %eax
c1004937:	e8 1d ed ff ff       	call   c1003659 <add_all_link>
c100493c:	83 c4 10             	add    $0x10,%esp
c100493f:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004944:	83 ec 0c             	sub    $0xc,%esp
c1004947:	50                   	push   %eax
c1004948:	e8 8f ed ff ff       	call   c10036dc <add_pid_hash>
c100494d:	83 c4 10             	add    $0x10,%esp
c1004950:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004955:	83 ec 0c             	sub    $0xc,%esp
c1004958:	50                   	push   %eax
c1004959:	e8 7b f3 ff ff       	call   c1003cd9 <wakeup_task>
c100495e:	83 c4 10             	add    $0x10,%esp
c1004961:	a1 94 1c 01 c1       	mov    0xc1011c94,%eax
c1004966:	83 c0 01             	add    $0x1,%eax
c1004969:	a3 94 1c 01 c1       	mov    %eax,0xc1011c94
c100496e:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004973:	a3 08 40 a1 c1       	mov    %eax,0xc1a14008
c1004978:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c100497d:	8b 40 28             	mov    0x28(%eax),%eax
c1004980:	83 ec 0c             	sub    $0xc,%esp
c1004983:	50                   	push   %eax
c1004984:	e8 28 c0 ff ff       	call   c10009b1 <set_ts_esp0>
c1004989:	83 c4 10             	add    $0x10,%esp
c100498c:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c1004991:	8b 40 2c             	mov    0x2c(%eax),%eax
c1004994:	83 ec 0c             	sub    $0xc,%esp
c1004997:	50                   	push   %eax
c1004998:	e8 b9 b8 ff ff       	call   c1000256 <lcr3>
c100499d:	83 c4 10             	add    $0x10,%esp
c10049a0:	a1 0c 40 a1 c1       	mov    0xc1a1400c,%eax
c10049a5:	8b 40 38             	mov    0x38(%eax),%eax
c10049a8:	89 c4                	mov    %eax,%esp
c10049aa:	e9 37 c4 ff ff       	jmp    c1000de6 <__trapret>
c10049af:	90                   	nop
c10049b0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10049b3:	c9                   	leave  
c10049b4:	c3                   	ret    

c10049b5 <sys_print_task>:
c10049b5:	55                   	push   %ebp
c10049b6:	89 e5                	mov    %esp,%ebp
c10049b8:	83 ec 18             	sub    $0x18,%esp
c10049bb:	c7 45 f0 8c 1c 01 c1 	movl   $0xc1011c8c,-0x10(%ebp)
c10049c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10049c5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10049c8:	83 ec 0c             	sub    $0xc,%esp
c10049cb:	68 f0 b5 00 c1       	push   $0xc100b5f0
c10049d0:	e8 dc 0d 00 00       	call   c10057b1 <printk>
c10049d5:	83 c4 10             	add    $0x10,%esp
c10049d8:	eb 6e                	jmp    c1004a48 <sys_print_task+0x93>
c10049da:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10049dd:	83 e8 64             	sub    $0x64,%eax
c10049e0:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10049e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10049e6:	8d 50 14             	lea    0x14(%eax),%edx
c10049e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10049ec:	8b 40 0c             	mov    0xc(%eax),%eax
c10049ef:	83 ec 04             	sub    $0x4,%esp
c10049f2:	52                   	push   %edx
c10049f3:	50                   	push   %eax
c10049f4:	68 02 b6 00 c1       	push   $0xc100b602
c10049f9:	e8 b3 0d 00 00       	call   c10057b1 <printk>
c10049fe:	83 c4 10             	add    $0x10,%esp
c1004a01:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a04:	8b 00                	mov    (%eax),%eax
c1004a06:	83 f8 ff             	cmp    $0xffffffff,%eax
c1004a09:	75 12                	jne    c1004a1d <sys_print_task+0x68>
c1004a0b:	83 ec 0c             	sub    $0xc,%esp
c1004a0e:	68 0a b6 00 c1       	push   $0xc100b60a
c1004a13:	e8 99 0d 00 00       	call   c10057b1 <printk>
c1004a18:	83 c4 10             	add    $0x10,%esp
c1004a1b:	eb 2b                	jmp    c1004a48 <sys_print_task+0x93>
c1004a1d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004a20:	8b 00                	mov    (%eax),%eax
c1004a22:	85 c0                	test   %eax,%eax
c1004a24:	75 12                	jne    c1004a38 <sys_print_task+0x83>
c1004a26:	83 ec 0c             	sub    $0xc,%esp
c1004a29:	68 16 b6 00 c1       	push   $0xc100b616
c1004a2e:	e8 7e 0d 00 00       	call   c10057b1 <printk>
c1004a33:	83 c4 10             	add    $0x10,%esp
c1004a36:	eb 10                	jmp    c1004a48 <sys_print_task+0x93>
c1004a38:	83 ec 0c             	sub    $0xc,%esp
c1004a3b:	68 20 b6 00 c1       	push   $0xc100b620
c1004a40:	e8 6c 0d 00 00       	call   c10057b1 <printk>
c1004a45:	83 c4 10             	add    $0x10,%esp
c1004a48:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004a4b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004a4e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004a51:	8b 40 04             	mov    0x4(%eax),%eax
c1004a54:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004a57:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004a5a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1004a5d:	0f 85 77 ff ff ff    	jne    c10049da <sys_print_task+0x25>
c1004a63:	90                   	nop
c1004a64:	90                   	nop
c1004a65:	c9                   	leave  
c1004a66:	c3                   	ret    

c1004a67 <kernel_thread_entry>:
c1004a67:	fb                   	sti    
c1004a68:	52                   	push   %edx
c1004a69:	ff d3                	call   *%ebx
c1004a6b:	c3                   	ret    

c1004a6c <switch_to>:
c1004a6c:	8b 44 24 04          	mov    0x4(%esp),%eax
c1004a70:	8f 00                	popl   (%eax)
c1004a72:	89 60 04             	mov    %esp,0x4(%eax)
c1004a75:	89 58 08             	mov    %ebx,0x8(%eax)
c1004a78:	89 48 0c             	mov    %ecx,0xc(%eax)
c1004a7b:	89 50 10             	mov    %edx,0x10(%eax)
c1004a7e:	89 70 14             	mov    %esi,0x14(%eax)
c1004a81:	89 78 18             	mov    %edi,0x18(%eax)
c1004a84:	89 68 1c             	mov    %ebp,0x1c(%eax)
c1004a87:	8b 44 24 04          	mov    0x4(%esp),%eax
c1004a8b:	8b 68 1c             	mov    0x1c(%eax),%ebp
c1004a8e:	8b 78 18             	mov    0x18(%eax),%edi
c1004a91:	8b 70 14             	mov    0x14(%eax),%esi
c1004a94:	8b 50 10             	mov    0x10(%eax),%edx
c1004a97:	8b 48 0c             	mov    0xc(%eax),%ecx
c1004a9a:	8b 58 08             	mov    0x8(%eax),%ebx
c1004a9d:	8b 60 04             	mov    0x4(%eax),%esp
c1004aa0:	ff 30                	pushl  (%eax)
c1004aa2:	c3                   	ret    

c1004aa3 <hash32>:
c1004aa3:	55                   	push   %ebp
c1004aa4:	89 e5                	mov    %esp,%ebp
c1004aa6:	83 ec 10             	sub    $0x10,%esp
c1004aa9:	8b 45 08             	mov    0x8(%ebp),%eax
c1004aac:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1004ab2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1004ab5:	b8 20 00 00 00       	mov    $0x20,%eax
c1004aba:	2b 45 0c             	sub    0xc(%ebp),%eax
c1004abd:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1004ac0:	89 c1                	mov    %eax,%ecx
c1004ac2:	d3 ea                	shr    %cl,%edx
c1004ac4:	89 d0                	mov    %edx,%eax
c1004ac6:	c9                   	leave  
c1004ac7:	c3                   	ret    

c1004ac8 <segment_load>:
c1004ac8:	55                   	push   %ebp
c1004ac9:	89 e5                	mov    %esp,%ebp
c1004acb:	83 ec 18             	sub    $0x18,%esp
c1004ace:	8b 45 14             	mov    0x14(%ebp),%eax
c1004ad1:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1004ad6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004ad9:	8b 45 14             	mov    0x14(%ebp),%eax
c1004adc:	25 ff 0f 00 00       	and    $0xfff,%eax
c1004ae1:	ba 00 10 00 00       	mov    $0x1000,%edx
c1004ae6:	29 c2                	sub    %eax,%edx
c1004ae8:	89 d0                	mov    %edx,%eax
c1004aea:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004aed:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004af4:	8b 45 10             	mov    0x10(%ebp),%eax
c1004af7:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1004afa:	76 1c                	jbe    c1004b18 <segment_load+0x50>
c1004afc:	8b 45 10             	mov    0x10(%ebp),%eax
c1004aff:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1004b02:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004b05:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004b08:	05 00 10 00 00       	add    $0x1000,%eax
c1004b0d:	c1 e8 0c             	shr    $0xc,%eax
c1004b10:	83 c0 01             	add    $0x1,%eax
c1004b13:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004b16:	eb 07                	jmp    c1004b1f <segment_load+0x57>
c1004b18:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c1004b1f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004b22:	c1 e0 0c             	shl    $0xc,%eax
c1004b25:	89 c2                	mov    %eax,%edx
c1004b27:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004b2a:	01 d0                	add    %edx,%eax
c1004b2c:	83 ec 04             	sub    $0x4,%esp
c1004b2f:	68 00 00 00 60       	push   $0x60000000
c1004b34:	50                   	push   %eax
c1004b35:	ff 75 f0             	pushl  -0x10(%ebp)
c1004b38:	e8 96 e5 ff ff       	call   c10030d3 <sys_mmap>
c1004b3d:	83 c4 10             	add    $0x10,%esp
c1004b40:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004b43:	83 ec 04             	sub    $0x4,%esp
c1004b46:	6a 01                	push   $0x1
c1004b48:	50                   	push   %eax
c1004b49:	ff 75 08             	pushl  0x8(%ebp)
c1004b4c:	e8 b2 27 00 00       	call   c1007303 <sys_lseek>
c1004b51:	83 c4 10             	add    $0x10,%esp
c1004b54:	8b 45 14             	mov    0x14(%ebp),%eax
c1004b57:	83 ec 04             	sub    $0x4,%esp
c1004b5a:	ff 75 10             	pushl  0x10(%ebp)
c1004b5d:	50                   	push   %eax
c1004b5e:	ff 75 08             	pushl  0x8(%ebp)
c1004b61:	e8 46 26 00 00       	call   c10071ac <sys_read>
c1004b66:	83 c4 10             	add    $0x10,%esp
c1004b69:	b8 01 00 00 00       	mov    $0x1,%eax
c1004b6e:	c9                   	leave  
c1004b6f:	c3                   	ret    

c1004b70 <load>:
c1004b70:	55                   	push   %ebp
c1004b71:	89 e5                	mov    %esp,%ebp
c1004b73:	83 ec 78             	sub    $0x78,%esp
c1004b76:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004b7d:	83 ec 04             	sub    $0x4,%esp
c1004b80:	6a 34                	push   $0x34
c1004b82:	6a 00                	push   $0x0
c1004b84:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004b87:	50                   	push   %eax
c1004b88:	e8 1d b5 ff ff       	call   c10000aa <memset>
c1004b8d:	83 c4 10             	add    $0x10,%esp
c1004b90:	83 ec 08             	sub    $0x8,%esp
c1004b93:	6a 00                	push   $0x0
c1004b95:	ff 75 08             	pushl  0x8(%ebp)
c1004b98:	e8 16 21 00 00       	call   c1006cb3 <sys_open>
c1004b9d:	83 c4 10             	add    $0x10,%esp
c1004ba0:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004ba3:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1004ba7:	75 0a                	jne    c1004bb3 <load+0x43>
c1004ba9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1004bae:	e9 48 01 00 00       	jmp    c1004cfb <load+0x18b>
c1004bb3:	83 ec 04             	sub    $0x4,%esp
c1004bb6:	6a 34                	push   $0x34
c1004bb8:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004bbb:	50                   	push   %eax
c1004bbc:	ff 75 e8             	pushl  -0x18(%ebp)
c1004bbf:	e8 e8 25 00 00       	call   c10071ac <sys_read>
c1004bc4:	83 c4 10             	add    $0x10,%esp
c1004bc7:	83 f8 34             	cmp    $0x34,%eax
c1004bca:	74 0c                	je     c1004bd8 <load+0x68>
c1004bcc:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004bd3:	e9 12 01 00 00       	jmp    c1004cea <load+0x17a>
c1004bd8:	83 ec 04             	sub    $0x4,%esp
c1004bdb:	6a 07                	push   $0x7
c1004bdd:	68 65 b6 00 c1       	push   $0xc100b665
c1004be2:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004be5:	50                   	push   %eax
c1004be6:	e8 77 b6 ff ff       	call   c1000262 <memcmp>
c1004beb:	83 c4 10             	add    $0x10,%esp
c1004bee:	85 c0                	test   %eax,%eax
c1004bf0:	75 30                	jne    c1004c22 <load+0xb2>
c1004bf2:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
c1004bf6:	66 83 f8 02          	cmp    $0x2,%ax
c1004bfa:	75 26                	jne    c1004c22 <load+0xb2>
c1004bfc:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
c1004c00:	66 83 f8 03          	cmp    $0x3,%ax
c1004c04:	75 1c                	jne    c1004c22 <load+0xb2>
c1004c06:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1004c09:	83 f8 01             	cmp    $0x1,%eax
c1004c0c:	75 14                	jne    c1004c22 <load+0xb2>
c1004c0e:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
c1004c12:	66 3d 00 04          	cmp    $0x400,%ax
c1004c16:	77 0a                	ja     c1004c22 <load+0xb2>
c1004c18:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004c1c:	66 83 f8 20          	cmp    $0x20,%ax
c1004c20:	74 0c                	je     c1004c2e <load+0xbe>
c1004c22:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004c29:	e9 bc 00 00 00       	jmp    c1004cea <load+0x17a>
c1004c2e:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1004c31:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004c34:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004c38:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c1004c3c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1004c43:	e9 8c 00 00 00       	jmp    c1004cd4 <load+0x164>
c1004c48:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
c1004c4c:	83 ec 04             	sub    $0x4,%esp
c1004c4f:	50                   	push   %eax
c1004c50:	6a 00                	push   $0x0
c1004c52:	8d 45 90             	lea    -0x70(%ebp),%eax
c1004c55:	50                   	push   %eax
c1004c56:	e8 4f b4 ff ff       	call   c10000aa <memset>
c1004c5b:	83 c4 10             	add    $0x10,%esp
c1004c5e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004c61:	83 ec 04             	sub    $0x4,%esp
c1004c64:	6a 01                	push   $0x1
c1004c66:	50                   	push   %eax
c1004c67:	ff 75 e8             	pushl  -0x18(%ebp)
c1004c6a:	e8 94 26 00 00       	call   c1007303 <sys_lseek>
c1004c6f:	83 c4 10             	add    $0x10,%esp
c1004c72:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
c1004c76:	83 ec 04             	sub    $0x4,%esp
c1004c79:	50                   	push   %eax
c1004c7a:	8d 45 90             	lea    -0x70(%ebp),%eax
c1004c7d:	50                   	push   %eax
c1004c7e:	ff 75 e8             	pushl  -0x18(%ebp)
c1004c81:	e8 26 25 00 00       	call   c10071ac <sys_read>
c1004c86:	83 c4 10             	add    $0x10,%esp
c1004c89:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c1004c8d:	39 d0                	cmp    %edx,%eax
c1004c8f:	74 09                	je     c1004c9a <load+0x12a>
c1004c91:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004c98:	eb 50                	jmp    c1004cea <load+0x17a>
c1004c9a:	8b 45 90             	mov    -0x70(%ebp),%eax
c1004c9d:	83 f8 01             	cmp    $0x1,%eax
c1004ca0:	75 24                	jne    c1004cc6 <load+0x156>
c1004ca2:	8b 4d 98             	mov    -0x68(%ebp),%ecx
c1004ca5:	8b 55 a0             	mov    -0x60(%ebp),%edx
c1004ca8:	8b 45 94             	mov    -0x6c(%ebp),%eax
c1004cab:	51                   	push   %ecx
c1004cac:	52                   	push   %edx
c1004cad:	50                   	push   %eax
c1004cae:	ff 75 e8             	pushl  -0x18(%ebp)
c1004cb1:	e8 12 fe ff ff       	call   c1004ac8 <segment_load>
c1004cb6:	83 c4 10             	add    $0x10,%esp
c1004cb9:	84 c0                	test   %al,%al
c1004cbb:	75 09                	jne    c1004cc6 <load+0x156>
c1004cbd:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004cc4:	eb 24                	jmp    c1004cea <load+0x17a>
c1004cc6:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004cca:	0f b7 c0             	movzwl %ax,%eax
c1004ccd:	01 45 f0             	add    %eax,-0x10(%ebp)
c1004cd0:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1004cd4:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
c1004cd8:	0f b7 c0             	movzwl %ax,%eax
c1004cdb:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c1004cde:	0f 82 64 ff ff ff    	jb     c1004c48 <load+0xd8>
c1004ce4:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1004ce7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004cea:	83 ec 0c             	sub    $0xc,%esp
c1004ced:	ff 75 e8             	pushl  -0x18(%ebp)
c1004cf0:	e8 5c 22 00 00       	call   c1006f51 <sys_close>
c1004cf5:	83 c4 10             	add    $0x10,%esp
c1004cf8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004cfb:	c9                   	leave  
c1004cfc:	c3                   	ret    

c1004cfd <sys_execv>:
c1004cfd:	55                   	push   %ebp
c1004cfe:	89 e5                	mov    %esp,%ebp
c1004d00:	83 ec 18             	sub    $0x18,%esp
c1004d03:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004d0a:	eb 04                	jmp    c1004d10 <sys_execv+0x13>
c1004d0c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004d10:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004d13:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004d1a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004d1d:	01 d0                	add    %edx,%eax
c1004d1f:	8b 00                	mov    (%eax),%eax
c1004d21:	85 c0                	test   %eax,%eax
c1004d23:	75 e7                	jne    c1004d0c <sys_execv+0xf>
c1004d25:	83 ec 0c             	sub    $0xc,%esp
c1004d28:	ff 75 08             	pushl  0x8(%ebp)
c1004d2b:	e8 40 fe ff ff       	call   c1004b70 <load>
c1004d30:	83 c4 10             	add    $0x10,%esp
c1004d33:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004d36:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1004d3a:	75 07                	jne    c1004d43 <sys_execv+0x46>
c1004d3c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1004d41:	eb 6a                	jmp    c1004dad <sys_execv+0xb0>
c1004d43:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004d48:	83 c0 14             	add    $0x14,%eax
c1004d4b:	83 ec 04             	sub    $0x4,%esp
c1004d4e:	6a 14                	push   $0x14
c1004d50:	ff 75 08             	pushl  0x8(%ebp)
c1004d53:	50                   	push   %eax
c1004d54:	e8 af b3 ff ff       	call   c1000108 <memcpy>
c1004d59:	83 c4 10             	add    $0x10,%esp
c1004d5c:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004d61:	c6 40 27 00          	movb   $0x0,0x27(%eax)
c1004d65:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004d6a:	05 b4 1f 00 00       	add    $0x1fb4,%eax
c1004d6f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004d72:	8b 55 0c             	mov    0xc(%ebp),%edx
c1004d75:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004d78:	89 50 10             	mov    %edx,0x10(%eax)
c1004d7b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004d7e:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004d81:	89 50 18             	mov    %edx,0x18(%eax)
c1004d84:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004d87:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004d8a:	89 50 38             	mov    %edx,0x38(%eax)
c1004d8d:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1004d92:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c1004d98:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004d9b:	89 50 44             	mov    %edx,0x44(%eax)
c1004d9e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004da1:	89 c4                	mov    %eax,%esp
c1004da3:	e9 3e c0 ff ff       	jmp    c1000de6 <__trapret>
c1004da8:	b8 00 00 00 00       	mov    $0x0,%eax
c1004dad:	c9                   	leave  
c1004dae:	c3                   	ret    

c1004daf <pic_setmask>:
c1004daf:	55                   	push   %ebp
c1004db0:	89 e5                	mov    %esp,%ebp
c1004db2:	83 ec 28             	sub    $0x28,%esp
c1004db5:	8b 45 08             	mov    0x8(%ebp),%eax
c1004db8:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
c1004dbc:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004dc0:	66 a3 24 eb 00 c1    	mov    %ax,0xc100eb24
c1004dc6:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004dca:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004dcd:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c1004dd1:	66 c1 e8 08          	shr    $0x8,%ax
c1004dd5:	88 45 f6             	mov    %al,-0xa(%ebp)
c1004dd8:	0f b6 05 ad 1c 01 c1 	movzbl 0xc1011cad,%eax
c1004ddf:	84 c0                	test   %al,%al
c1004de1:	74 27                	je     c1004e0a <pic_setmask+0x5b>
c1004de3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004de7:	83 ec 08             	sub    $0x8,%esp
c1004dea:	50                   	push   %eax
c1004deb:	6a 21                	push   $0x21
c1004ded:	e8 4a b2 ff ff       	call   c100003c <outb>
c1004df2:	83 c4 10             	add    $0x10,%esp
c1004df5:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1004df9:	83 ec 08             	sub    $0x8,%esp
c1004dfc:	50                   	push   %eax
c1004dfd:	68 a1 00 00 00       	push   $0xa1
c1004e02:	e8 35 b2 ff ff       	call   c100003c <outb>
c1004e07:	83 c4 10             	add    $0x10,%esp
c1004e0a:	90                   	nop
c1004e0b:	c9                   	leave  
c1004e0c:	c3                   	ret    

c1004e0d <pic_enable>:
c1004e0d:	55                   	push   %ebp
c1004e0e:	89 e5                	mov    %esp,%ebp
c1004e10:	83 ec 08             	sub    $0x8,%esp
c1004e13:	8b 45 08             	mov    0x8(%ebp),%eax
c1004e16:	ba 01 00 00 00       	mov    $0x1,%edx
c1004e1b:	89 c1                	mov    %eax,%ecx
c1004e1d:	d3 e2                	shl    %cl,%edx
c1004e1f:	89 d0                	mov    %edx,%eax
c1004e21:	f7 d0                	not    %eax
c1004e23:	89 c2                	mov    %eax,%edx
c1004e25:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004e2c:	21 d0                	and    %edx,%eax
c1004e2e:	0f b7 c0             	movzwl %ax,%eax
c1004e31:	83 ec 0c             	sub    $0xc,%esp
c1004e34:	50                   	push   %eax
c1004e35:	e8 75 ff ff ff       	call   c1004daf <pic_setmask>
c1004e3a:	83 c4 10             	add    $0x10,%esp
c1004e3d:	90                   	nop
c1004e3e:	c9                   	leave  
c1004e3f:	c3                   	ret    

c1004e40 <pic_init>:
c1004e40:	55                   	push   %ebp
c1004e41:	89 e5                	mov    %esp,%ebp
c1004e43:	83 ec 08             	sub    $0x8,%esp
c1004e46:	c6 05 ad 1c 01 c1 01 	movb   $0x1,0xc1011cad
c1004e4d:	83 ec 08             	sub    $0x8,%esp
c1004e50:	68 ff 00 00 00       	push   $0xff
c1004e55:	6a 21                	push   $0x21
c1004e57:	e8 e0 b1 ff ff       	call   c100003c <outb>
c1004e5c:	83 c4 10             	add    $0x10,%esp
c1004e5f:	83 ec 08             	sub    $0x8,%esp
c1004e62:	68 ff 00 00 00       	push   $0xff
c1004e67:	68 a1 00 00 00       	push   $0xa1
c1004e6c:	e8 cb b1 ff ff       	call   c100003c <outb>
c1004e71:	83 c4 10             	add    $0x10,%esp
c1004e74:	83 ec 08             	sub    $0x8,%esp
c1004e77:	6a 11                	push   $0x11
c1004e79:	6a 20                	push   $0x20
c1004e7b:	e8 bc b1 ff ff       	call   c100003c <outb>
c1004e80:	83 c4 10             	add    $0x10,%esp
c1004e83:	83 ec 08             	sub    $0x8,%esp
c1004e86:	6a 11                	push   $0x11
c1004e88:	68 a0 00 00 00       	push   $0xa0
c1004e8d:	e8 aa b1 ff ff       	call   c100003c <outb>
c1004e92:	83 c4 10             	add    $0x10,%esp
c1004e95:	83 ec 08             	sub    $0x8,%esp
c1004e98:	6a 20                	push   $0x20
c1004e9a:	6a 21                	push   $0x21
c1004e9c:	e8 9b b1 ff ff       	call   c100003c <outb>
c1004ea1:	83 c4 10             	add    $0x10,%esp
c1004ea4:	83 ec 08             	sub    $0x8,%esp
c1004ea7:	6a 28                	push   $0x28
c1004ea9:	68 a1 00 00 00       	push   $0xa1
c1004eae:	e8 89 b1 ff ff       	call   c100003c <outb>
c1004eb3:	83 c4 10             	add    $0x10,%esp
c1004eb6:	83 ec 08             	sub    $0x8,%esp
c1004eb9:	6a 04                	push   $0x4
c1004ebb:	6a 21                	push   $0x21
c1004ebd:	e8 7a b1 ff ff       	call   c100003c <outb>
c1004ec2:	83 c4 10             	add    $0x10,%esp
c1004ec5:	83 ec 08             	sub    $0x8,%esp
c1004ec8:	6a 02                	push   $0x2
c1004eca:	68 a1 00 00 00       	push   $0xa1
c1004ecf:	e8 68 b1 ff ff       	call   c100003c <outb>
c1004ed4:	83 c4 10             	add    $0x10,%esp
c1004ed7:	83 ec 08             	sub    $0x8,%esp
c1004eda:	6a 03                	push   $0x3
c1004edc:	6a 21                	push   $0x21
c1004ede:	e8 59 b1 ff ff       	call   c100003c <outb>
c1004ee3:	83 c4 10             	add    $0x10,%esp
c1004ee6:	83 ec 08             	sub    $0x8,%esp
c1004ee9:	6a 03                	push   $0x3
c1004eeb:	68 a1 00 00 00       	push   $0xa1
c1004ef0:	e8 47 b1 ff ff       	call   c100003c <outb>
c1004ef5:	83 c4 10             	add    $0x10,%esp
c1004ef8:	83 ec 08             	sub    $0x8,%esp
c1004efb:	6a 68                	push   $0x68
c1004efd:	6a 20                	push   $0x20
c1004eff:	e8 38 b1 ff ff       	call   c100003c <outb>
c1004f04:	83 c4 10             	add    $0x10,%esp
c1004f07:	83 ec 08             	sub    $0x8,%esp
c1004f0a:	6a 68                	push   $0x68
c1004f0c:	68 a0 00 00 00       	push   $0xa0
c1004f11:	e8 26 b1 ff ff       	call   c100003c <outb>
c1004f16:	83 c4 10             	add    $0x10,%esp
c1004f19:	83 ec 08             	sub    $0x8,%esp
c1004f1c:	6a 0a                	push   $0xa
c1004f1e:	6a 20                	push   $0x20
c1004f20:	e8 17 b1 ff ff       	call   c100003c <outb>
c1004f25:	83 c4 10             	add    $0x10,%esp
c1004f28:	83 ec 08             	sub    $0x8,%esp
c1004f2b:	6a 0a                	push   $0xa
c1004f2d:	68 a0 00 00 00       	push   $0xa0
c1004f32:	e8 05 b1 ff ff       	call   c100003c <outb>
c1004f37:	83 c4 10             	add    $0x10,%esp
c1004f3a:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004f41:	66 83 f8 ff          	cmp    $0xffff,%ax
c1004f45:	74 16                	je     c1004f5d <pic_init+0x11d>
c1004f47:	0f b7 05 24 eb 00 c1 	movzwl 0xc100eb24,%eax
c1004f4e:	0f b7 c0             	movzwl %ax,%eax
c1004f51:	83 ec 0c             	sub    $0xc,%esp
c1004f54:	50                   	push   %eax
c1004f55:	e8 55 fe ff ff       	call   c1004daf <pic_setmask>
c1004f5a:	83 c4 10             	add    $0x10,%esp
c1004f5d:	90                   	nop
c1004f5e:	c9                   	leave  
c1004f5f:	c3                   	ret    

c1004f60 <delay>:
c1004f60:	55                   	push   %ebp
c1004f61:	89 e5                	mov    %esp,%ebp
c1004f63:	83 ec 08             	sub    $0x8,%esp
c1004f66:	83 ec 0c             	sub    $0xc,%esp
c1004f69:	68 84 00 00 00       	push   $0x84
c1004f6e:	e8 8d b0 ff ff       	call   c1000000 <inb>
c1004f73:	83 c4 10             	add    $0x10,%esp
c1004f76:	83 ec 0c             	sub    $0xc,%esp
c1004f79:	68 84 00 00 00       	push   $0x84
c1004f7e:	e8 7d b0 ff ff       	call   c1000000 <inb>
c1004f83:	83 c4 10             	add    $0x10,%esp
c1004f86:	83 ec 0c             	sub    $0xc,%esp
c1004f89:	68 84 00 00 00       	push   $0x84
c1004f8e:	e8 6d b0 ff ff       	call   c1000000 <inb>
c1004f93:	83 c4 10             	add    $0x10,%esp
c1004f96:	83 ec 0c             	sub    $0xc,%esp
c1004f99:	68 84 00 00 00       	push   $0x84
c1004f9e:	e8 5d b0 ff ff       	call   c1000000 <inb>
c1004fa3:	83 c4 10             	add    $0x10,%esp
c1004fa6:	90                   	nop
c1004fa7:	c9                   	leave  
c1004fa8:	c3                   	ret    

c1004fa9 <serial_init>:
c1004fa9:	55                   	push   %ebp
c1004faa:	89 e5                	mov    %esp,%ebp
c1004fac:	83 ec 08             	sub    $0x8,%esp
c1004faf:	83 ec 08             	sub    $0x8,%esp
c1004fb2:	6a 00                	push   $0x0
c1004fb4:	68 fa 03 00 00       	push   $0x3fa
c1004fb9:	e8 7e b0 ff ff       	call   c100003c <outb>
c1004fbe:	83 c4 10             	add    $0x10,%esp
c1004fc1:	83 ec 08             	sub    $0x8,%esp
c1004fc4:	68 80 00 00 00       	push   $0x80
c1004fc9:	68 fb 03 00 00       	push   $0x3fb
c1004fce:	e8 69 b0 ff ff       	call   c100003c <outb>
c1004fd3:	83 c4 10             	add    $0x10,%esp
c1004fd6:	83 ec 08             	sub    $0x8,%esp
c1004fd9:	6a 0c                	push   $0xc
c1004fdb:	68 f8 03 00 00       	push   $0x3f8
c1004fe0:	e8 57 b0 ff ff       	call   c100003c <outb>
c1004fe5:	83 c4 10             	add    $0x10,%esp
c1004fe8:	83 ec 08             	sub    $0x8,%esp
c1004feb:	6a 00                	push   $0x0
c1004fed:	68 f9 03 00 00       	push   $0x3f9
c1004ff2:	e8 45 b0 ff ff       	call   c100003c <outb>
c1004ff7:	83 c4 10             	add    $0x10,%esp
c1004ffa:	83 ec 08             	sub    $0x8,%esp
c1004ffd:	6a 03                	push   $0x3
c1004fff:	68 fb 03 00 00       	push   $0x3fb
c1005004:	e8 33 b0 ff ff       	call   c100003c <outb>
c1005009:	83 c4 10             	add    $0x10,%esp
c100500c:	83 ec 08             	sub    $0x8,%esp
c100500f:	6a 00                	push   $0x0
c1005011:	68 fc 03 00 00       	push   $0x3fc
c1005016:	e8 21 b0 ff ff       	call   c100003c <outb>
c100501b:	83 c4 10             	add    $0x10,%esp
c100501e:	83 ec 08             	sub    $0x8,%esp
c1005021:	6a 01                	push   $0x1
c1005023:	68 f9 03 00 00       	push   $0x3f9
c1005028:	e8 0f b0 ff ff       	call   c100003c <outb>
c100502d:	83 c4 10             	add    $0x10,%esp
c1005030:	83 ec 0c             	sub    $0xc,%esp
c1005033:	68 fd 03 00 00       	push   $0x3fd
c1005038:	e8 c3 af ff ff       	call   c1000000 <inb>
c100503d:	83 c4 10             	add    $0x10,%esp
c1005040:	3c ff                	cmp    $0xff,%al
c1005042:	0f 95 c0             	setne  %al
c1005045:	a2 ae 1c 01 c1       	mov    %al,0xc1011cae
c100504a:	83 ec 0c             	sub    $0xc,%esp
c100504d:	68 fa 03 00 00       	push   $0x3fa
c1005052:	e8 a9 af ff ff       	call   c1000000 <inb>
c1005057:	83 c4 10             	add    $0x10,%esp
c100505a:	83 ec 0c             	sub    $0xc,%esp
c100505d:	68 f8 03 00 00       	push   $0x3f8
c1005062:	e8 99 af ff ff       	call   c1000000 <inb>
c1005067:	83 c4 10             	add    $0x10,%esp
c100506a:	0f b6 05 ae 1c 01 c1 	movzbl 0xc1011cae,%eax
c1005071:	84 c0                	test   %al,%al
c1005073:	74 1d                	je     c1005092 <serial_init+0xe9>
c1005075:	83 ec 0c             	sub    $0xc,%esp
c1005078:	68 6d b6 00 c1       	push   $0xc100b66d
c100507d:	e8 2f 07 00 00       	call   c10057b1 <printk>
c1005082:	83 c4 10             	add    $0x10,%esp
c1005085:	83 ec 0c             	sub    $0xc,%esp
c1005088:	6a 04                	push   $0x4
c100508a:	e8 7e fd ff ff       	call   c1004e0d <pic_enable>
c100508f:	83 c4 10             	add    $0x10,%esp
c1005092:	90                   	nop
c1005093:	c9                   	leave  
c1005094:	c3                   	ret    

c1005095 <lpt_putc_sub>:
c1005095:	55                   	push   %ebp
c1005096:	89 e5                	mov    %esp,%ebp
c1005098:	83 ec 18             	sub    $0x18,%esp
c100509b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10050a2:	eb 09                	jmp    c10050ad <lpt_putc_sub+0x18>
c10050a4:	e8 b7 fe ff ff       	call   c1004f60 <delay>
c10050a9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10050ad:	83 ec 0c             	sub    $0xc,%esp
c10050b0:	68 79 03 00 00       	push   $0x379
c10050b5:	e8 46 af ff ff       	call   c1000000 <inb>
c10050ba:	83 c4 10             	add    $0x10,%esp
c10050bd:	84 c0                	test   %al,%al
c10050bf:	78 09                	js     c10050ca <lpt_putc_sub+0x35>
c10050c1:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c10050c8:	7e da                	jle    c10050a4 <lpt_putc_sub+0xf>
c10050ca:	8b 45 08             	mov    0x8(%ebp),%eax
c10050cd:	0f b6 c0             	movzbl %al,%eax
c10050d0:	83 ec 08             	sub    $0x8,%esp
c10050d3:	50                   	push   %eax
c10050d4:	68 78 03 00 00       	push   $0x378
c10050d9:	e8 5e af ff ff       	call   c100003c <outb>
c10050de:	83 c4 10             	add    $0x10,%esp
c10050e1:	83 ec 08             	sub    $0x8,%esp
c10050e4:	6a 0d                	push   $0xd
c10050e6:	68 7a 03 00 00       	push   $0x37a
c10050eb:	e8 4c af ff ff       	call   c100003c <outb>
c10050f0:	83 c4 10             	add    $0x10,%esp
c10050f3:	83 ec 08             	sub    $0x8,%esp
c10050f6:	6a 08                	push   $0x8
c10050f8:	68 7a 03 00 00       	push   $0x37a
c10050fd:	e8 3a af ff ff       	call   c100003c <outb>
c1005102:	83 c4 10             	add    $0x10,%esp
c1005105:	90                   	nop
c1005106:	c9                   	leave  
c1005107:	c3                   	ret    

c1005108 <lpt_putc>:
c1005108:	55                   	push   %ebp
c1005109:	89 e5                	mov    %esp,%ebp
c100510b:	83 ec 08             	sub    $0x8,%esp
c100510e:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1005112:	74 10                	je     c1005124 <lpt_putc+0x1c>
c1005114:	83 ec 0c             	sub    $0xc,%esp
c1005117:	ff 75 08             	pushl  0x8(%ebp)
c100511a:	e8 76 ff ff ff       	call   c1005095 <lpt_putc_sub>
c100511f:	83 c4 10             	add    $0x10,%esp
c1005122:	eb 27                	jmp    c100514b <lpt_putc+0x43>
c1005124:	83 ec 0c             	sub    $0xc,%esp
c1005127:	6a 08                	push   $0x8
c1005129:	e8 67 ff ff ff       	call   c1005095 <lpt_putc_sub>
c100512e:	83 c4 10             	add    $0x10,%esp
c1005131:	83 ec 0c             	sub    $0xc,%esp
c1005134:	6a 20                	push   $0x20
c1005136:	e8 5a ff ff ff       	call   c1005095 <lpt_putc_sub>
c100513b:	83 c4 10             	add    $0x10,%esp
c100513e:	83 ec 0c             	sub    $0xc,%esp
c1005141:	6a 08                	push   $0x8
c1005143:	e8 4d ff ff ff       	call   c1005095 <lpt_putc_sub>
c1005148:	83 c4 10             	add    $0x10,%esp
c100514b:	90                   	nop
c100514c:	c9                   	leave  
c100514d:	c3                   	ret    

c100514e <cons_intr>:
c100514e:	55                   	push   %ebp
c100514f:	89 e5                	mov    %esp,%ebp
c1005151:	83 ec 18             	sub    $0x18,%esp
c1005154:	eb 3b                	jmp    c1005191 <cons_intr+0x43>
c1005156:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100515a:	74 35                	je     c1005191 <cons_intr+0x43>
c100515c:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c1005161:	8d 50 01             	lea    0x1(%eax),%edx
c1005164:	89 15 24 42 a1 c1    	mov    %edx,0xc1a14224
c100516a:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100516d:	88 90 20 40 a1 c1    	mov    %dl,-0x3e5ebfe0(%eax)
c1005173:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005176:	a2 6c fc 00 c1       	mov    %al,0xc100fc6c
c100517b:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c1005180:	3d 00 02 00 00       	cmp    $0x200,%eax
c1005185:	75 0a                	jne    c1005191 <cons_intr+0x43>
c1005187:	c7 05 24 42 a1 c1 00 	movl   $0x0,0xc1a14224
c100518e:	00 00 00 
c1005191:	8b 45 08             	mov    0x8(%ebp),%eax
c1005194:	ff d0                	call   *%eax
c1005196:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005199:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c100519d:	75 b7                	jne    c1005156 <cons_intr+0x8>
c100519f:	90                   	nop
c10051a0:	90                   	nop
c10051a1:	c9                   	leave  
c10051a2:	c3                   	ret    

c10051a3 <serial_proc_data>:
c10051a3:	55                   	push   %ebp
c10051a4:	89 e5                	mov    %esp,%ebp
c10051a6:	83 ec 18             	sub    $0x18,%esp
c10051a9:	83 ec 0c             	sub    $0xc,%esp
c10051ac:	68 fd 03 00 00       	push   $0x3fd
c10051b1:	e8 4a ae ff ff       	call   c1000000 <inb>
c10051b6:	83 c4 10             	add    $0x10,%esp
c10051b9:	0f b6 c0             	movzbl %al,%eax
c10051bc:	83 e0 01             	and    $0x1,%eax
c10051bf:	85 c0                	test   %eax,%eax
c10051c1:	75 07                	jne    c10051ca <serial_proc_data+0x27>
c10051c3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10051c8:	eb 26                	jmp    c10051f0 <serial_proc_data+0x4d>
c10051ca:	83 ec 0c             	sub    $0xc,%esp
c10051cd:	68 f8 03 00 00       	push   $0x3f8
c10051d2:	e8 29 ae ff ff       	call   c1000000 <inb>
c10051d7:	83 c4 10             	add    $0x10,%esp
c10051da:	0f b6 c0             	movzbl %al,%eax
c10051dd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10051e0:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
c10051e4:	75 07                	jne    c10051ed <serial_proc_data+0x4a>
c10051e6:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
c10051ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10051f0:	c9                   	leave  
c10051f1:	c3                   	ret    

c10051f2 <serial_intr>:
c10051f2:	55                   	push   %ebp
c10051f3:	89 e5                	mov    %esp,%ebp
c10051f5:	83 ec 08             	sub    $0x8,%esp
c10051f8:	0f b6 05 ae 1c 01 c1 	movzbl 0xc1011cae,%eax
c10051ff:	84 c0                	test   %al,%al
c1005201:	74 10                	je     c1005213 <serial_intr+0x21>
c1005203:	83 ec 0c             	sub    $0xc,%esp
c1005206:	68 a3 51 00 c1       	push   $0xc10051a3
c100520b:	e8 3e ff ff ff       	call   c100514e <cons_intr>
c1005210:	83 c4 10             	add    $0x10,%esp
c1005213:	90                   	nop
c1005214:	c9                   	leave  
c1005215:	c3                   	ret    

c1005216 <serial_putc_sub>:
c1005216:	55                   	push   %ebp
c1005217:	89 e5                	mov    %esp,%ebp
c1005219:	83 ec 18             	sub    $0x18,%esp
c100521c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005223:	eb 09                	jmp    c100522e <serial_putc_sub+0x18>
c1005225:	e8 36 fd ff ff       	call   c1004f60 <delay>
c100522a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100522e:	83 ec 0c             	sub    $0xc,%esp
c1005231:	68 fd 03 00 00       	push   $0x3fd
c1005236:	e8 c5 ad ff ff       	call   c1000000 <inb>
c100523b:	83 c4 10             	add    $0x10,%esp
c100523e:	0f b6 c0             	movzbl %al,%eax
c1005241:	83 e0 20             	and    $0x20,%eax
c1005244:	85 c0                	test   %eax,%eax
c1005246:	75 09                	jne    c1005251 <serial_putc_sub+0x3b>
c1005248:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c100524f:	7e d4                	jle    c1005225 <serial_putc_sub+0xf>
c1005251:	8b 45 08             	mov    0x8(%ebp),%eax
c1005254:	0f b6 c0             	movzbl %al,%eax
c1005257:	83 ec 08             	sub    $0x8,%esp
c100525a:	50                   	push   %eax
c100525b:	68 f8 03 00 00       	push   $0x3f8
c1005260:	e8 d7 ad ff ff       	call   c100003c <outb>
c1005265:	83 c4 10             	add    $0x10,%esp
c1005268:	90                   	nop
c1005269:	c9                   	leave  
c100526a:	c3                   	ret    

c100526b <serial_putc>:
c100526b:	55                   	push   %ebp
c100526c:	89 e5                	mov    %esp,%ebp
c100526e:	83 ec 08             	sub    $0x8,%esp
c1005271:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1005275:	74 10                	je     c1005287 <serial_putc+0x1c>
c1005277:	83 ec 0c             	sub    $0xc,%esp
c100527a:	ff 75 08             	pushl  0x8(%ebp)
c100527d:	e8 94 ff ff ff       	call   c1005216 <serial_putc_sub>
c1005282:	83 c4 10             	add    $0x10,%esp
c1005285:	eb 27                	jmp    c10052ae <serial_putc+0x43>
c1005287:	83 ec 0c             	sub    $0xc,%esp
c100528a:	6a 08                	push   $0x8
c100528c:	e8 85 ff ff ff       	call   c1005216 <serial_putc_sub>
c1005291:	83 c4 10             	add    $0x10,%esp
c1005294:	83 ec 0c             	sub    $0xc,%esp
c1005297:	6a 20                	push   $0x20
c1005299:	e8 78 ff ff ff       	call   c1005216 <serial_putc_sub>
c100529e:	83 c4 10             	add    $0x10,%esp
c10052a1:	83 ec 0c             	sub    $0xc,%esp
c10052a4:	6a 08                	push   $0x8
c10052a6:	e8 6b ff ff ff       	call   c1005216 <serial_putc_sub>
c10052ab:	83 c4 10             	add    $0x10,%esp
c10052ae:	90                   	nop
c10052af:	c9                   	leave  
c10052b0:	c3                   	ret    

c10052b1 <timer_init>:
c10052b1:	55                   	push   %ebp
c10052b2:	89 e5                	mov    %esp,%ebp
c10052b4:	83 ec 18             	sub    $0x18,%esp
c10052b7:	b8 dc 34 12 00       	mov    $0x1234dc,%eax
c10052bc:	ba 00 00 00 00       	mov    $0x0,%edx
c10052c1:	f7 75 08             	divl   0x8(%ebp)
c10052c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10052c7:	83 ec 08             	sub    $0x8,%esp
c10052ca:	6a 36                	push   $0x36
c10052cc:	6a 43                	push   $0x43
c10052ce:	e8 69 ad ff ff       	call   c100003c <outb>
c10052d3:	83 c4 10             	add    $0x10,%esp
c10052d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10052d9:	88 45 f3             	mov    %al,-0xd(%ebp)
c10052dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10052df:	c1 e8 08             	shr    $0x8,%eax
c10052e2:	88 45 f2             	mov    %al,-0xe(%ebp)
c10052e5:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c10052e9:	83 ec 08             	sub    $0x8,%esp
c10052ec:	50                   	push   %eax
c10052ed:	6a 40                	push   $0x40
c10052ef:	e8 48 ad ff ff       	call   c100003c <outb>
c10052f4:	83 c4 10             	add    $0x10,%esp
c10052f7:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
c10052fb:	83 ec 08             	sub    $0x8,%esp
c10052fe:	50                   	push   %eax
c10052ff:	6a 40                	push   $0x40
c1005301:	e8 36 ad ff ff       	call   c100003c <outb>
c1005306:	83 c4 10             	add    $0x10,%esp
c1005309:	c7 05 2c 42 a1 c1 00 	movl   $0x0,0xc1a1422c
c1005310:	00 00 00 
c1005313:	c7 05 28 42 a1 c1 00 	movl   $0x0,0xc1a14228
c100531a:	00 00 00 
c100531d:	83 ec 0c             	sub    $0xc,%esp
c1005320:	6a 00                	push   $0x0
c1005322:	e8 e6 fa ff ff       	call   c1004e0d <pic_enable>
c1005327:	83 c4 10             	add    $0x10,%esp
c100532a:	90                   	nop
c100532b:	c9                   	leave  
c100532c:	c3                   	ret    

c100532d <print_cursor>:
c100532d:	55                   	push   %ebp
c100532e:	89 e5                	mov    %esp,%ebp
c1005330:	83 ec 28             	sub    $0x28,%esp
c1005333:	8b 55 08             	mov    0x8(%ebp),%edx
c1005336:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005339:	88 55 e4             	mov    %dl,-0x1c(%ebp)
c100533c:	88 45 e0             	mov    %al,-0x20(%ebp)
c100533f:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
c1005343:	89 d0                	mov    %edx,%eax
c1005345:	c1 e0 02             	shl    $0x2,%eax
c1005348:	01 d0                	add    %edx,%eax
c100534a:	c1 e0 04             	shl    $0x4,%eax
c100534d:	89 c2                	mov    %eax,%edx
c100534f:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1005353:	01 d0                	add    %edx,%eax
c1005355:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c1005359:	83 ec 08             	sub    $0x8,%esp
c100535c:	6a 0e                	push   $0xe
c100535e:	68 d4 03 00 00       	push   $0x3d4
c1005363:	e8 d4 ac ff ff       	call   c100003c <outb>
c1005368:	83 c4 10             	add    $0x10,%esp
c100536b:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c100536f:	66 c1 e8 08          	shr    $0x8,%ax
c1005373:	0f b6 c0             	movzbl %al,%eax
c1005376:	83 ec 08             	sub    $0x8,%esp
c1005379:	50                   	push   %eax
c100537a:	68 d5 03 00 00       	push   $0x3d5
c100537f:	e8 b8 ac ff ff       	call   c100003c <outb>
c1005384:	83 c4 10             	add    $0x10,%esp
c1005387:	83 ec 08             	sub    $0x8,%esp
c100538a:	6a 0f                	push   $0xf
c100538c:	68 d4 03 00 00       	push   $0x3d4
c1005391:	e8 a6 ac ff ff       	call   c100003c <outb>
c1005396:	83 c4 10             	add    $0x10,%esp
c1005399:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c100539d:	0f b6 c0             	movzbl %al,%eax
c10053a0:	83 ec 08             	sub    $0x8,%esp
c10053a3:	50                   	push   %eax
c10053a4:	68 d5 03 00 00       	push   $0x3d5
c10053a9:	e8 8e ac ff ff       	call   c100003c <outb>
c10053ae:	83 c4 10             	add    $0x10,%esp
c10053b1:	90                   	nop
c10053b2:	c9                   	leave  
c10053b3:	c3                   	ret    

c10053b4 <clear>:
c10053b4:	55                   	push   %ebp
c10053b5:	89 e5                	mov    %esp,%ebp
c10053b7:	83 ec 18             	sub    $0x18,%esp
c10053ba:	66 c7 45 f4 00 0f    	movw   $0xf00,-0xc(%ebp)
c10053c0:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10053c4:	83 c8 20             	or     $0x20,%eax
c10053c7:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c10053cb:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c10053d1:	eb 1f                	jmp    c10053f2 <clear+0x3e>
c10053d3:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c10053d8:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
c10053dc:	01 d2                	add    %edx,%edx
c10053de:	01 c2                	add    %eax,%edx
c10053e0:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c10053e4:	66 89 02             	mov    %ax,(%edx)
c10053e7:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10053eb:	83 c0 01             	add    $0x1,%eax
c10053ee:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10053f2:	66 81 7d f6 cf 07    	cmpw   $0x7cf,-0xa(%ebp)
c10053f8:	76 d9                	jbe    c10053d3 <clear+0x1f>
c10053fa:	c6 05 af 1c 01 c1 00 	movb   $0x0,0xc1011caf
c1005401:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c1005408:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100540f:	0f b6 d0             	movzbl %al,%edx
c1005412:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005419:	0f b6 c0             	movzbl %al,%eax
c100541c:	83 ec 08             	sub    $0x8,%esp
c100541f:	52                   	push   %edx
c1005420:	50                   	push   %eax
c1005421:	e8 07 ff ff ff       	call   c100532d <print_cursor>
c1005426:	83 c4 10             	add    $0x10,%esp
c1005429:	90                   	nop
c100542a:	c9                   	leave  
c100542b:	c3                   	ret    

c100542c <print_char>:
c100542c:	55                   	push   %ebp
c100542d:	89 e5                	mov    %esp,%ebp
c100542f:	83 ec 28             	sub    $0x28,%esp
c1005432:	8b 45 08             	mov    0x8(%ebp),%eax
c1005435:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1005438:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c100543e:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c1005444:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c100544b:	3c 18                	cmp    $0x18,%al
c100544d:	76 05                	jbe    c1005454 <print_char+0x28>
c100544f:	e8 60 ff ff ff       	call   c10053b4 <clear>
c1005454:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c100545b:	0f b6 d0             	movzbl %al,%edx
c100545e:	89 d0                	mov    %edx,%eax
c1005460:	c1 e0 02             	shl    $0x2,%eax
c1005463:	01 d0                	add    %edx,%eax
c1005465:	c1 e0 04             	shl    $0x4,%eax
c1005468:	89 c2                	mov    %eax,%edx
c100546a:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005471:	0f b6 c0             	movzbl %al,%eax
c1005474:	01 d0                	add    %edx,%eax
c1005476:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c100547a:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
c100547e:	83 f8 09             	cmp    $0x9,%eax
c1005481:	74 20                	je     c10054a3 <print_char+0x77>
c1005483:	83 f8 0a             	cmp    $0xa,%eax
c1005486:	75 2f                	jne    c10054b7 <print_char+0x8b>
c1005488:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c100548f:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005496:	83 c0 01             	add    $0x1,%eax
c1005499:	a2 af 1c 01 c1       	mov    %al,0xc1011caf
c100549e:	e9 82 00 00 00       	jmp    c1005525 <print_char+0xf9>
c10054a3:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10054aa:	83 c0 08             	add    $0x8,%eax
c10054ad:	83 e0 f8             	and    $0xfffffff8,%eax
c10054b0:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c10054b5:	eb 6e                	jmp    c1005525 <print_char+0xf9>
c10054b7:	66 0f be 45 e4       	movsbw -0x1c(%ebp),%ax
c10054bc:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
c10054c0:	8b 45 0c             	mov    0xc(%ebp),%eax
c10054c3:	c1 e0 04             	shl    $0x4,%eax
c10054c6:	0f b6 c0             	movzbl %al,%eax
c10054c9:	8b 55 10             	mov    0x10(%ebp),%edx
c10054cc:	83 e2 0f             	and    $0xf,%edx
c10054cf:	09 d0                	or     %edx,%eax
c10054d1:	c1 e0 08             	shl    $0x8,%eax
c10054d4:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c10054d8:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c10054dc:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c10054e0:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c10054e5:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c10054e9:	01 d2                	add    %edx,%edx
c10054eb:	01 c2                	add    %eax,%edx
c10054ed:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10054f1:	66 89 02             	mov    %ax,(%edx)
c10054f4:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c10054fb:	83 c0 01             	add    $0x1,%eax
c10054fe:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c1005503:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100550a:	3c 4f                	cmp    $0x4f,%al
c100550c:	76 16                	jbe    c1005524 <print_char+0xf8>
c100550e:	c6 05 b0 1c 01 c1 00 	movb   $0x0,0xc1011cb0
c1005515:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c100551c:	83 c0 01             	add    $0x1,%eax
c100551f:	a2 af 1c 01 c1       	mov    %al,0xc1011caf
c1005524:	90                   	nop
c1005525:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100552c:	0f b6 d0             	movzbl %al,%edx
c100552f:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005536:	0f b6 c0             	movzbl %al,%eax
c1005539:	83 ec 08             	sub    $0x8,%esp
c100553c:	52                   	push   %edx
c100553d:	50                   	push   %eax
c100553e:	e8 ea fd ff ff       	call   c100532d <print_cursor>
c1005543:	83 c4 10             	add    $0x10,%esp
c1005546:	90                   	nop
c1005547:	c9                   	leave  
c1005548:	c3                   	ret    

c1005549 <print_string>:
c1005549:	55                   	push   %ebp
c100554a:	89 e5                	mov    %esp,%ebp
c100554c:	83 ec 08             	sub    $0x8,%esp
c100554f:	eb 21                	jmp    c1005572 <print_string+0x29>
c1005551:	8b 45 08             	mov    0x8(%ebp),%eax
c1005554:	8d 50 01             	lea    0x1(%eax),%edx
c1005557:	89 55 08             	mov    %edx,0x8(%ebp)
c100555a:	0f b6 00             	movzbl (%eax),%eax
c100555d:	0f be c0             	movsbl %al,%eax
c1005560:	83 ec 04             	sub    $0x4,%esp
c1005563:	ff 75 10             	pushl  0x10(%ebp)
c1005566:	ff 75 0c             	pushl  0xc(%ebp)
c1005569:	50                   	push   %eax
c100556a:	e8 bd fe ff ff       	call   c100542c <print_char>
c100556f:	83 c4 10             	add    $0x10,%esp
c1005572:	8b 45 08             	mov    0x8(%ebp),%eax
c1005575:	0f b6 00             	movzbl (%eax),%eax
c1005578:	84 c0                	test   %al,%al
c100557a:	75 d5                	jne    c1005551 <print_string+0x8>
c100557c:	90                   	nop
c100557d:	90                   	nop
c100557e:	c9                   	leave  
c100557f:	c3                   	ret    

c1005580 <print_num>:
c1005580:	55                   	push   %ebp
c1005581:	89 e5                	mov    %esp,%ebp
c1005583:	83 ec 48             	sub    $0x48,%esp
c1005586:	8b 4d 18             	mov    0x18(%ebp),%ecx
c1005589:	8b 55 1c             	mov    0x1c(%ebp),%edx
c100558c:	8b 45 08             	mov    0x8(%ebp),%eax
c100558f:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1005592:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005595:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1005598:	89 c8                	mov    %ecx,%eax
c100559a:	88 45 bc             	mov    %al,-0x44(%ebp)
c100559d:	89 d0                	mov    %edx,%eax
c100559f:	88 45 b8             	mov    %al,-0x48(%ebp)
c10055a2:	0f be 45 b8          	movsbl -0x48(%ebp),%eax
c10055a6:	c6 44 05 c8 00       	movb   $0x0,-0x38(%ebp,%eax,1)
c10055ab:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
c10055af:	83 e8 01             	sub    $0x1,%eax
c10055b2:	88 45 f7             	mov    %al,-0x9(%ebp)
c10055b5:	e9 c0 00 00 00       	jmp    c100567a <print_num+0xfa>
c10055ba:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
c10055be:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10055c1:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10055c4:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c10055c7:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10055ca:	89 55 ec             	mov    %edx,-0x14(%ebp)
c10055cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10055d0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10055d3:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10055d7:	74 1c                	je     c10055f5 <print_num+0x75>
c10055d9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10055dc:	ba 00 00 00 00       	mov    $0x0,%edx
c10055e1:	f7 75 e4             	divl   -0x1c(%ebp)
c10055e4:	89 55 f0             	mov    %edx,-0x10(%ebp)
c10055e7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10055ea:	ba 00 00 00 00       	mov    $0x0,%edx
c10055ef:	f7 75 e4             	divl   -0x1c(%ebp)
c10055f2:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10055f5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10055f8:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10055fb:	f7 75 e4             	divl   -0x1c(%ebp)
c10055fe:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005601:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005604:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005607:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100560a:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100560d:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c1005610:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005613:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005617:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c100561b:	80 7d bc 0a          	cmpb   $0xa,-0x44(%ebp)
c100561f:	75 16                	jne    c1005637 <print_num+0xb7>
c1005621:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005625:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c100562a:	8d 50 30             	lea    0x30(%eax),%edx
c100562d:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005631:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1005635:	eb 39                	jmp    c1005670 <print_num+0xf0>
c1005637:	80 7d bc 10          	cmpb   $0x10,-0x44(%ebp)
c100563b:	75 33                	jne    c1005670 <print_num+0xf0>
c100563d:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005641:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005646:	3c 09                	cmp    $0x9,%al
c1005648:	7e 10                	jle    c100565a <print_num+0xda>
c100564a:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100564e:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005653:	83 c0 37             	add    $0x37,%eax
c1005656:	89 c2                	mov    %eax,%edx
c1005658:	eb 0e                	jmp    c1005668 <print_num+0xe8>
c100565a:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100565e:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1005663:	83 c0 30             	add    $0x30,%eax
c1005666:	89 c2                	mov    %eax,%edx
c1005668:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100566c:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1005670:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1005674:	83 e8 01             	sub    $0x1,%eax
c1005677:	88 45 f7             	mov    %al,-0x9(%ebp)
c100567a:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
c100567e:	0f 89 36 ff ff ff    	jns    c10055ba <print_num+0x3a>
c1005684:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
c1005688:	75 5e                	jne    c10056e8 <print_num+0x168>
c100568a:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1005691:	90                   	nop
c1005692:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005695:	8d 50 01             	lea    0x1(%eax),%edx
c1005698:	89 55 e8             	mov    %edx,-0x18(%ebp)
c100569b:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c10056a0:	3c 30                	cmp    $0x30,%al
c10056a2:	74 ee                	je     c1005692 <print_num+0x112>
c10056a4:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c10056a8:	8d 55 c8             	lea    -0x38(%ebp),%edx
c10056ab:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10056ae:	01 d0                	add    %edx,%eax
c10056b0:	0f b6 00             	movzbl (%eax),%eax
c10056b3:	84 c0                	test   %al,%al
c10056b5:	74 1c                	je     c10056d3 <print_num+0x153>
c10056b7:	8d 55 c8             	lea    -0x38(%ebp),%edx
c10056ba:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10056bd:	01 d0                	add    %edx,%eax
c10056bf:	83 ec 04             	sub    $0x4,%esp
c10056c2:	ff 75 14             	pushl  0x14(%ebp)
c10056c5:	ff 75 10             	pushl  0x10(%ebp)
c10056c8:	50                   	push   %eax
c10056c9:	e8 7b fe ff ff       	call   c1005549 <print_string>
c10056ce:	83 c4 10             	add    $0x10,%esp
c10056d1:	eb 2a                	jmp    c10056fd <print_num+0x17d>
c10056d3:	83 ec 04             	sub    $0x4,%esp
c10056d6:	ff 75 14             	pushl  0x14(%ebp)
c10056d9:	ff 75 10             	pushl  0x10(%ebp)
c10056dc:	6a 30                	push   $0x30
c10056de:	e8 49 fd ff ff       	call   c100542c <print_char>
c10056e3:	83 c4 10             	add    $0x10,%esp
c10056e6:	eb 15                	jmp    c10056fd <print_num+0x17d>
c10056e8:	83 ec 04             	sub    $0x4,%esp
c10056eb:	ff 75 14             	pushl  0x14(%ebp)
c10056ee:	ff 75 10             	pushl  0x10(%ebp)
c10056f1:	8d 45 c8             	lea    -0x38(%ebp),%eax
c10056f4:	50                   	push   %eax
c10056f5:	e8 4f fe ff ff       	call   c1005549 <print_string>
c10056fa:	83 c4 10             	add    $0x10,%esp
c10056fd:	c9                   	leave  
c10056fe:	c3                   	ret    

c10056ff <backtrace>:
c10056ff:	55                   	push   %ebp
c1005700:	89 e5                	mov    %esp,%ebp
c1005702:	83 ec 18             	sub    $0x18,%esp
c1005705:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100570c:	3c 15                	cmp    $0x15,%al
c100570e:	0f 86 9a 00 00 00    	jbe    c10057ae <backtrace+0xaf>
c1005714:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100571b:	83 e8 01             	sub    $0x1,%eax
c100571e:	a2 b0 1c 01 c1       	mov    %al,0xc1011cb0
c1005723:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1005729:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c100572f:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005736:	3c 18                	cmp    $0x18,%al
c1005738:	76 05                	jbe    c100573f <backtrace+0x40>
c100573a:	e8 75 fc ff ff       	call   c10053b4 <clear>
c100573f:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c1005746:	0f b6 d0             	movzbl %al,%edx
c1005749:	89 d0                	mov    %edx,%eax
c100574b:	c1 e0 02             	shl    $0x2,%eax
c100574e:	01 d0                	add    %edx,%eax
c1005750:	c1 e0 04             	shl    $0x4,%eax
c1005753:	89 c2                	mov    %eax,%edx
c1005755:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c100575c:	0f b6 c0             	movzbl %al,%eax
c100575f:	01 d0                	add    %edx,%eax
c1005761:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1005765:	66 c7 45 f4 20 00    	movw   $0x20,-0xc(%ebp)
c100576b:	66 c7 45 f6 00 02    	movw   $0x200,-0xa(%ebp)
c1005771:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1005775:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c1005779:	a1 28 eb 00 c1       	mov    0xc100eb28,%eax
c100577e:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c1005782:	01 d2                	add    %edx,%edx
c1005784:	01 c2                	add    %eax,%edx
c1005786:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c100578a:	66 89 02             	mov    %ax,(%edx)
c100578d:	0f b6 05 b0 1c 01 c1 	movzbl 0xc1011cb0,%eax
c1005794:	0f b6 d0             	movzbl %al,%edx
c1005797:	0f b6 05 af 1c 01 c1 	movzbl 0xc1011caf,%eax
c100579e:	0f b6 c0             	movzbl %al,%eax
c10057a1:	83 ec 08             	sub    $0x8,%esp
c10057a4:	52                   	push   %edx
c10057a5:	50                   	push   %eax
c10057a6:	e8 82 fb ff ff       	call   c100532d <print_cursor>
c10057ab:	83 c4 10             	add    $0x10,%esp
c10057ae:	90                   	nop
c10057af:	c9                   	leave  
c10057b0:	c3                   	ret    

c10057b1 <printk>:
c10057b1:	55                   	push   %ebp
c10057b2:	89 e5                	mov    %esp,%ebp
c10057b4:	83 ec 38             	sub    $0x38,%esp
c10057b7:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c10057bb:	8d 45 0c             	lea    0xc(%ebp),%eax
c10057be:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10057c1:	e9 6e 03 00 00       	jmp    c1005b34 <printk+0x383>
c10057c6:	8b 45 08             	mov    0x8(%ebp),%eax
c10057c9:	0f b6 00             	movzbl (%eax),%eax
c10057cc:	3c 25                	cmp    $0x25,%al
c10057ce:	0f 85 3a 03 00 00    	jne    c1005b0e <printk+0x35d>
c10057d4:	90                   	nop
c10057d5:	8b 45 08             	mov    0x8(%ebp),%eax
c10057d8:	83 c0 01             	add    $0x1,%eax
c10057db:	89 45 08             	mov    %eax,0x8(%ebp)
c10057de:	8b 45 08             	mov    0x8(%ebp),%eax
c10057e1:	0f b6 00             	movzbl (%eax),%eax
c10057e4:	0f be c0             	movsbl %al,%eax
c10057e7:	83 e8 30             	sub    $0x30,%eax
c10057ea:	83 f8 48             	cmp    $0x48,%eax
c10057ed:	0f 87 fb 02 00 00    	ja     c1005aee <printk+0x33d>
c10057f3:	8b 04 85 9c b6 00 c1 	mov    -0x3eff4964(,%eax,4),%eax
c10057fa:	ff e0                	jmp    *%eax
c10057fc:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005800:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005803:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
c1005807:	88 45 d7             	mov    %al,-0x29(%ebp)
c100580a:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
c100580e:	83 ec 04             	sub    $0x4,%esp
c1005811:	6a 02                	push   $0x2
c1005813:	6a 00                	push   $0x0
c1005815:	50                   	push   %eax
c1005816:	e8 11 fc ff ff       	call   c100542c <print_char>
c100581b:	83 c4 10             	add    $0x10,%esp
c100581e:	e9 e0 02 00 00       	jmp    c1005b03 <printk+0x352>
c1005823:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005827:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100582a:	8b 40 fc             	mov    -0x4(%eax),%eax
c100582d:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1005830:	83 ec 04             	sub    $0x4,%esp
c1005833:	6a 02                	push   $0x2
c1005835:	6a 00                	push   $0x0
c1005837:	ff 75 dc             	pushl  -0x24(%ebp)
c100583a:	e8 0a fd ff ff       	call   c1005549 <print_string>
c100583f:	83 c4 10             	add    $0x10,%esp
c1005842:	e9 bc 02 00 00       	jmp    c1005b03 <printk+0x352>
c1005847:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c100584b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100584e:	8b 40 fc             	mov    -0x4(%eax),%eax
c1005851:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005854:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005858:	74 23                	je     c100587d <printk+0xcc>
c100585a:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c100585e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005861:	99                   	cltd   
c1005862:	83 ec 04             	sub    $0x4,%esp
c1005865:	6a 01                	push   $0x1
c1005867:	51                   	push   %ecx
c1005868:	6a 0a                	push   $0xa
c100586a:	6a 02                	push   $0x2
c100586c:	6a 00                	push   $0x0
c100586e:	52                   	push   %edx
c100586f:	50                   	push   %eax
c1005870:	e8 0b fd ff ff       	call   c1005580 <print_num>
c1005875:	83 c4 20             	add    $0x20,%esp
c1005878:	e9 86 02 00 00       	jmp    c1005b03 <printk+0x352>
c100587d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005880:	99                   	cltd   
c1005881:	83 ec 04             	sub    $0x4,%esp
c1005884:	6a 00                	push   $0x0
c1005886:	6a 14                	push   $0x14
c1005888:	6a 0a                	push   $0xa
c100588a:	6a 02                	push   $0x2
c100588c:	6a 00                	push   $0x0
c100588e:	52                   	push   %edx
c100588f:	50                   	push   %eax
c1005890:	e8 eb fc ff ff       	call   c1005580 <print_num>
c1005895:	83 c4 20             	add    $0x20,%esp
c1005898:	e9 66 02 00 00       	jmp    c1005b03 <printk+0x352>
c100589d:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10058a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10058a4:	8b 40 fc             	mov    -0x4(%eax),%eax
c10058a7:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10058aa:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10058ae:	74 23                	je     c10058d3 <printk+0x122>
c10058b0:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10058b4:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10058b7:	99                   	cltd   
c10058b8:	83 ec 04             	sub    $0x4,%esp
c10058bb:	6a 01                	push   $0x1
c10058bd:	51                   	push   %ecx
c10058be:	6a 10                	push   $0x10
c10058c0:	6a 02                	push   $0x2
c10058c2:	6a 00                	push   $0x0
c10058c4:	52                   	push   %edx
c10058c5:	50                   	push   %eax
c10058c6:	e8 b5 fc ff ff       	call   c1005580 <print_num>
c10058cb:	83 c4 20             	add    $0x20,%esp
c10058ce:	e9 30 02 00 00       	jmp    c1005b03 <printk+0x352>
c10058d3:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10058d6:	99                   	cltd   
c10058d7:	83 ec 04             	sub    $0x4,%esp
c10058da:	6a 00                	push   $0x0
c10058dc:	6a 14                	push   $0x14
c10058de:	6a 10                	push   $0x10
c10058e0:	6a 02                	push   $0x2
c10058e2:	6a 00                	push   $0x0
c10058e4:	52                   	push   %edx
c10058e5:	50                   	push   %eax
c10058e6:	e8 95 fc ff ff       	call   c1005580 <print_num>
c10058eb:	83 c4 20             	add    $0x20,%esp
c10058ee:	e9 10 02 00 00       	jmp    c1005b03 <printk+0x352>
c10058f3:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c10058f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10058fa:	8b 50 fc             	mov    -0x4(%eax),%edx
c10058fd:	8b 40 f8             	mov    -0x8(%eax),%eax
c1005900:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1005903:	89 55 cc             	mov    %edx,-0x34(%ebp)
c1005906:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c100590a:	74 25                	je     c1005931 <printk+0x180>
c100590c:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1005910:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1005913:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1005916:	83 ec 04             	sub    $0x4,%esp
c1005919:	6a 01                	push   $0x1
c100591b:	51                   	push   %ecx
c100591c:	6a 10                	push   $0x10
c100591e:	6a 02                	push   $0x2
c1005920:	6a 00                	push   $0x0
c1005922:	52                   	push   %edx
c1005923:	50                   	push   %eax
c1005924:	e8 57 fc ff ff       	call   c1005580 <print_num>
c1005929:	83 c4 20             	add    $0x20,%esp
c100592c:	e9 d2 01 00 00       	jmp    c1005b03 <printk+0x352>
c1005931:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1005934:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1005937:	83 ec 04             	sub    $0x4,%esp
c100593a:	6a 00                	push   $0x0
c100593c:	6a 14                	push   $0x14
c100593e:	6a 10                	push   $0x10
c1005940:	6a 02                	push   $0x2
c1005942:	6a 00                	push   $0x0
c1005944:	52                   	push   %edx
c1005945:	50                   	push   %eax
c1005946:	e8 35 fc ff ff       	call   c1005580 <print_num>
c100594b:	83 c4 20             	add    $0x20,%esp
c100594e:	e9 b0 01 00 00       	jmp    c1005b03 <printk+0x352>
c1005953:	8b 45 08             	mov    0x8(%ebp),%eax
c1005956:	83 c0 01             	add    $0x1,%eax
c1005959:	89 45 08             	mov    %eax,0x8(%ebp)
c100595c:	8b 45 08             	mov    0x8(%ebp),%eax
c100595f:	0f b6 00             	movzbl (%eax),%eax
c1005962:	0f be c0             	movsbl %al,%eax
c1005965:	83 f8 78             	cmp    $0x78,%eax
c1005968:	0f 84 9a 00 00 00    	je     c1005a08 <printk+0x257>
c100596e:	83 f8 78             	cmp    $0x78,%eax
c1005971:	0f 8f 3f 01 00 00    	jg     c1005ab6 <printk+0x305>
c1005977:	83 f8 6c             	cmp    $0x6c,%eax
c100597a:	0f 84 e0 00 00 00    	je     c1005a60 <printk+0x2af>
c1005980:	83 f8 6c             	cmp    $0x6c,%eax
c1005983:	0f 8f 2d 01 00 00    	jg     c1005ab6 <printk+0x305>
c1005989:	83 f8 64             	cmp    $0x64,%eax
c100598c:	74 1c                	je     c10059aa <printk+0x1f9>
c100598e:	83 f8 64             	cmp    $0x64,%eax
c1005991:	0f 8f 1f 01 00 00    	jg     c1005ab6 <printk+0x305>
c1005997:	83 f8 4c             	cmp    $0x4c,%eax
c100599a:	0f 84 c0 00 00 00    	je     c1005a60 <printk+0x2af>
c10059a0:	83 f8 58             	cmp    $0x58,%eax
c10059a3:	74 63                	je     c1005a08 <printk+0x257>
c10059a5:	e9 0c 01 00 00       	jmp    c1005ab6 <printk+0x305>
c10059aa:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10059ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10059b1:	8b 40 fc             	mov    -0x4(%eax),%eax
c10059b4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10059b7:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10059bb:	74 27                	je     c10059e4 <printk+0x233>
c10059bd:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10059c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10059c4:	ba 00 00 00 00       	mov    $0x0,%edx
c10059c9:	83 ec 04             	sub    $0x4,%esp
c10059cc:	6a 01                	push   $0x1
c10059ce:	51                   	push   %ecx
c10059cf:	6a 0a                	push   $0xa
c10059d1:	6a 02                	push   $0x2
c10059d3:	6a 00                	push   $0x0
c10059d5:	52                   	push   %edx
c10059d6:	50                   	push   %eax
c10059d7:	e8 a4 fb ff ff       	call   c1005580 <print_num>
c10059dc:	83 c4 20             	add    $0x20,%esp
c10059df:	e9 d3 00 00 00       	jmp    c1005ab7 <printk+0x306>
c10059e4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10059e7:	ba 00 00 00 00       	mov    $0x0,%edx
c10059ec:	83 ec 04             	sub    $0x4,%esp
c10059ef:	6a 00                	push   $0x0
c10059f1:	6a 14                	push   $0x14
c10059f3:	6a 0a                	push   $0xa
c10059f5:	6a 02                	push   $0x2
c10059f7:	6a 00                	push   $0x0
c10059f9:	52                   	push   %edx
c10059fa:	50                   	push   %eax
c10059fb:	e8 80 fb ff ff       	call   c1005580 <print_num>
c1005a00:	83 c4 20             	add    $0x20,%esp
c1005a03:	e9 af 00 00 00       	jmp    c1005ab7 <printk+0x306>
c1005a08:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005a0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005a0f:	8b 40 fc             	mov    -0x4(%eax),%eax
c1005a12:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005a15:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005a19:	74 24                	je     c1005a3f <printk+0x28e>
c1005a1b:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1005a1f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005a22:	ba 00 00 00 00       	mov    $0x0,%edx
c1005a27:	83 ec 04             	sub    $0x4,%esp
c1005a2a:	6a 01                	push   $0x1
c1005a2c:	51                   	push   %ecx
c1005a2d:	6a 10                	push   $0x10
c1005a2f:	6a 02                	push   $0x2
c1005a31:	6a 00                	push   $0x0
c1005a33:	52                   	push   %edx
c1005a34:	50                   	push   %eax
c1005a35:	e8 46 fb ff ff       	call   c1005580 <print_num>
c1005a3a:	83 c4 20             	add    $0x20,%esp
c1005a3d:	eb 78                	jmp    c1005ab7 <printk+0x306>
c1005a3f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005a42:	ba 00 00 00 00       	mov    $0x0,%edx
c1005a47:	83 ec 04             	sub    $0x4,%esp
c1005a4a:	6a 00                	push   $0x0
c1005a4c:	6a 14                	push   $0x14
c1005a4e:	6a 10                	push   $0x10
c1005a50:	6a 02                	push   $0x2
c1005a52:	6a 00                	push   $0x0
c1005a54:	52                   	push   %edx
c1005a55:	50                   	push   %eax
c1005a56:	e8 25 fb ff ff       	call   c1005580 <print_num>
c1005a5b:	83 c4 20             	add    $0x20,%esp
c1005a5e:	eb 57                	jmp    c1005ab7 <printk+0x306>
c1005a60:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1005a64:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005a67:	8b 50 fc             	mov    -0x4(%eax),%edx
c1005a6a:	8b 40 f8             	mov    -0x8(%eax),%eax
c1005a6d:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005a70:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1005a73:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005a77:	74 20                	je     c1005a99 <printk+0x2e8>
c1005a79:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c1005a7d:	83 ec 04             	sub    $0x4,%esp
c1005a80:	6a 01                	push   $0x1
c1005a82:	50                   	push   %eax
c1005a83:	6a 10                	push   $0x10
c1005a85:	6a 02                	push   $0x2
c1005a87:	6a 00                	push   $0x0
c1005a89:	ff 75 e4             	pushl  -0x1c(%ebp)
c1005a8c:	ff 75 e0             	pushl  -0x20(%ebp)
c1005a8f:	e8 ec fa ff ff       	call   c1005580 <print_num>
c1005a94:	83 c4 20             	add    $0x20,%esp
c1005a97:	eb 1e                	jmp    c1005ab7 <printk+0x306>
c1005a99:	83 ec 04             	sub    $0x4,%esp
c1005a9c:	6a 00                	push   $0x0
c1005a9e:	6a 14                	push   $0x14
c1005aa0:	6a 10                	push   $0x10
c1005aa2:	6a 02                	push   $0x2
c1005aa4:	6a 00                	push   $0x0
c1005aa6:	ff 75 e4             	pushl  -0x1c(%ebp)
c1005aa9:	ff 75 e0             	pushl  -0x20(%ebp)
c1005aac:	e8 cf fa ff ff       	call   c1005580 <print_num>
c1005ab1:	83 c4 20             	add    $0x20,%esp
c1005ab4:	eb 01                	jmp    c1005ab7 <printk+0x306>
c1005ab6:	90                   	nop
c1005ab7:	eb 4a                	jmp    c1005b03 <printk+0x352>
c1005ab9:	8b 45 08             	mov    0x8(%ebp),%eax
c1005abc:	0f b6 00             	movzbl (%eax),%eax
c1005abf:	0f be c0             	movsbl %al,%eax
c1005ac2:	83 e8 30             	sub    $0x30,%eax
c1005ac5:	89 c2                	mov    %eax,%edx
c1005ac7:	89 d0                	mov    %edx,%eax
c1005ac9:	c1 e0 02             	shl    $0x2,%eax
c1005acc:	01 d0                	add    %edx,%eax
c1005ace:	01 c0                	add    %eax,%eax
c1005ad0:	89 c2                	mov    %eax,%edx
c1005ad2:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ad5:	83 c0 01             	add    $0x1,%eax
c1005ad8:	89 45 08             	mov    %eax,0x8(%ebp)
c1005adb:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ade:	0f b6 00             	movzbl (%eax),%eax
c1005ae1:	01 d0                	add    %edx,%eax
c1005ae3:	83 e8 30             	sub    $0x30,%eax
c1005ae6:	88 45 f3             	mov    %al,-0xd(%ebp)
c1005ae9:	e9 e7 fc ff ff       	jmp    c10057d5 <printk+0x24>
c1005aee:	83 ec 04             	sub    $0x4,%esp
c1005af1:	6a 02                	push   $0x2
c1005af3:	6a 00                	push   $0x0
c1005af5:	68 7c b6 00 c1       	push   $0xc100b67c
c1005afa:	e8 4a fa ff ff       	call   c1005549 <print_string>
c1005aff:	83 c4 10             	add    $0x10,%esp
c1005b02:	90                   	nop
c1005b03:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b06:	83 c0 01             	add    $0x1,%eax
c1005b09:	89 45 08             	mov    %eax,0x8(%ebp)
c1005b0c:	eb 22                	jmp    c1005b30 <printk+0x37f>
c1005b0e:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b11:	0f b6 00             	movzbl (%eax),%eax
c1005b14:	0f be c0             	movsbl %al,%eax
c1005b17:	83 ec 04             	sub    $0x4,%esp
c1005b1a:	6a 02                	push   $0x2
c1005b1c:	6a 00                	push   $0x0
c1005b1e:	50                   	push   %eax
c1005b1f:	e8 08 f9 ff ff       	call   c100542c <print_char>
c1005b24:	83 c4 10             	add    $0x10,%esp
c1005b27:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b2a:	83 c0 01             	add    $0x1,%eax
c1005b2d:	89 45 08             	mov    %eax,0x8(%ebp)
c1005b30:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c1005b34:	8b 45 08             	mov    0x8(%ebp),%eax
c1005b37:	0f b6 00             	movzbl (%eax),%eax
c1005b3a:	84 c0                	test   %al,%al
c1005b3c:	0f 85 84 fc ff ff    	jne    c10057c6 <printk+0x15>
c1005b42:	90                   	nop
c1005b43:	90                   	nop
c1005b44:	c9                   	leave  
c1005b45:	c3                   	ret    

c1005b46 <cons_putc>:
c1005b46:	55                   	push   %ebp
c1005b47:	89 e5                	mov    %esp,%ebp
c1005b49:	83 ec 08             	sub    $0x8,%esp
c1005b4c:	83 ec 0c             	sub    $0xc,%esp
c1005b4f:	ff 75 08             	pushl  0x8(%ebp)
c1005b52:	e8 b1 f5 ff ff       	call   c1005108 <lpt_putc>
c1005b57:	83 c4 10             	add    $0x10,%esp
c1005b5a:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1005b5e:	74 13                	je     c1005b73 <cons_putc+0x2d>
c1005b60:	83 ec 08             	sub    $0x8,%esp
c1005b63:	ff 75 08             	pushl  0x8(%ebp)
c1005b66:	68 c0 b7 00 c1       	push   $0xc100b7c0
c1005b6b:	e8 41 fc ff ff       	call   c10057b1 <printk>
c1005b70:	83 c4 10             	add    $0x10,%esp
c1005b73:	83 ec 0c             	sub    $0xc,%esp
c1005b76:	ff 75 08             	pushl  0x8(%ebp)
c1005b79:	e8 ed f6 ff ff       	call   c100526b <serial_putc>
c1005b7e:	83 c4 10             	add    $0x10,%esp
c1005b81:	90                   	nop
c1005b82:	c9                   	leave  
c1005b83:	c3                   	ret    

c1005b84 <cons_getc>:
c1005b84:	55                   	push   %ebp
c1005b85:	89 e5                	mov    %esp,%ebp
c1005b87:	83 ec 18             	sub    $0x18,%esp
c1005b8a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005b91:	e8 5c f6 ff ff       	call   c10051f2 <serial_intr>
c1005b96:	e8 30 c3 ff ff       	call   c1001ecb <kbd_intr>
c1005b9b:	8b 15 20 42 a1 c1    	mov    0xc1a14220,%edx
c1005ba1:	a1 24 42 a1 c1       	mov    0xc1a14224,%eax
c1005ba6:	39 c2                	cmp    %eax,%edx
c1005ba8:	74 31                	je     c1005bdb <cons_getc+0x57>
c1005baa:	a1 20 42 a1 c1       	mov    0xc1a14220,%eax
c1005baf:	8d 50 01             	lea    0x1(%eax),%edx
c1005bb2:	89 15 20 42 a1 c1    	mov    %edx,0xc1a14220
c1005bb8:	0f b6 80 20 40 a1 c1 	movzbl -0x3e5ebfe0(%eax),%eax
c1005bbf:	0f b6 c0             	movzbl %al,%eax
c1005bc2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005bc5:	a1 20 42 a1 c1       	mov    0xc1a14220,%eax
c1005bca:	3d 00 02 00 00       	cmp    $0x200,%eax
c1005bcf:	75 0a                	jne    c1005bdb <cons_getc+0x57>
c1005bd1:	c7 05 20 42 a1 c1 00 	movl   $0x0,0xc1a14220
c1005bd8:	00 00 00 
c1005bdb:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005bde:	c9                   	leave  
c1005bdf:	c3                   	ret    

c1005be0 <hash32>:
c1005be0:	55                   	push   %ebp
c1005be1:	89 e5                	mov    %esp,%ebp
c1005be3:	83 ec 10             	sub    $0x10,%esp
c1005be6:	8b 45 08             	mov    0x8(%ebp),%eax
c1005be9:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1005bef:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005bf2:	b8 20 00 00 00       	mov    $0x20,%eax
c1005bf7:	2b 45 0c             	sub    0xc(%ebp),%eax
c1005bfa:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005bfd:	89 c1                	mov    %eax,%ecx
c1005bff:	d3 ea                	shr    %cl,%edx
c1005c01:	89 d0                	mov    %edx,%eax
c1005c03:	c9                   	leave  
c1005c04:	c3                   	ret    

c1005c05 <sema_init>:
c1005c05:	55                   	push   %ebp
c1005c06:	89 e5                	mov    %esp,%ebp
c1005c08:	83 ec 14             	sub    $0x14,%esp
c1005c0b:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005c0e:	88 45 ec             	mov    %al,-0x14(%ebp)
c1005c11:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c14:	0f b6 55 ec          	movzbl -0x14(%ebp),%edx
c1005c18:	88 10                	mov    %dl,(%eax)
c1005c1a:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c1d:	83 c0 04             	add    $0x4,%eax
c1005c20:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005c23:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005c26:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005c29:	89 50 04             	mov    %edx,0x4(%eax)
c1005c2c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005c2f:	8b 50 04             	mov    0x4(%eax),%edx
c1005c32:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005c35:	89 10                	mov    %edx,(%eax)
c1005c37:	90                   	nop
c1005c38:	90                   	nop
c1005c39:	c9                   	leave  
c1005c3a:	c3                   	ret    

c1005c3b <lock_init>:
c1005c3b:	55                   	push   %ebp
c1005c3c:	89 e5                	mov    %esp,%ebp
c1005c3e:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c41:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005c47:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c4a:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005c51:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c54:	83 c0 04             	add    $0x4,%eax
c1005c57:	6a 01                	push   $0x1
c1005c59:	50                   	push   %eax
c1005c5a:	e8 a6 ff ff ff       	call   c1005c05 <sema_init>
c1005c5f:	83 c4 08             	add    $0x8,%esp
c1005c62:	90                   	nop
c1005c63:	c9                   	leave  
c1005c64:	c3                   	ret    

c1005c65 <sema_down>:
c1005c65:	55                   	push   %ebp
c1005c66:	89 e5                	mov    %esp,%ebp
c1005c68:	83 ec 38             	sub    $0x38,%esp
c1005c6b:	8b 45 08             	mov    0x8(%ebp),%eax
c1005c6e:	83 c0 04             	add    $0x4,%eax
c1005c71:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005c74:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005c77:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005c7a:	e8 2c b1 ff ff       	call   c1000dab <intr_save>
c1005c7f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005c82:	e9 95 00 00 00       	jmp    c1005d1c <sema_down+0xb7>
c1005c87:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005c8c:	83 c0 5c             	add    $0x5c,%eax
c1005c8f:	39 45 f4             	cmp    %eax,-0xc(%ebp)
c1005c92:	75 16                	jne    c1005caa <sema_down+0x45>
c1005c94:	68 c4 b7 00 c1       	push   $0xc100b7c4
c1005c99:	68 2c b8 00 c1       	push   $0xc100b82c
c1005c9e:	6a 26                	push   $0x26
c1005ca0:	68 f8 b7 00 c1       	push   $0xc100b7f8
c1005ca5:	e8 c1 a6 ff ff       	call   c100036b <__PANIC>
c1005caa:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005cad:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005cb0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005cb3:	8b 40 04             	mov    0x4(%eax),%eax
c1005cb6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005cb9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005cbc:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1005cbf:	75 c6                	jne    c1005c87 <sema_down+0x22>
c1005cc1:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005cc6:	83 c0 5c             	add    $0x5c,%eax
c1005cc9:	8b 55 08             	mov    0x8(%ebp),%edx
c1005ccc:	83 c2 04             	add    $0x4,%edx
c1005ccf:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c1005cd2:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005cd5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005cd8:	8b 00                	mov    (%eax),%eax
c1005cda:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005cdd:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005ce0:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005ce3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005ce6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1005ce9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1005cec:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005cef:	89 10                	mov    %edx,(%eax)
c1005cf1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1005cf4:	8b 10                	mov    (%eax),%edx
c1005cf6:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005cf9:	89 50 04             	mov    %edx,0x4(%eax)
c1005cfc:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005cff:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1005d02:	89 50 04             	mov    %edx,0x4(%eax)
c1005d05:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005d08:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1005d0b:	89 10                	mov    %edx,(%eax)
c1005d0d:	90                   	nop
c1005d0e:	90                   	nop
c1005d0f:	83 ec 0c             	sub    $0xc,%esp
c1005d12:	6a 01                	push   $0x1
c1005d14:	e8 49 e1 ff ff       	call   c1003e62 <thread_block>
c1005d19:	83 c4 10             	add    $0x10,%esp
c1005d1c:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d1f:	0f b6 00             	movzbl (%eax),%eax
c1005d22:	84 c0                	test   %al,%al
c1005d24:	74 84                	je     c1005caa <sema_down+0x45>
c1005d26:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d29:	0f b6 00             	movzbl (%eax),%eax
c1005d2c:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005d2f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d32:	88 10                	mov    %dl,(%eax)
c1005d34:	83 ec 0c             	sub    $0xc,%esp
c1005d37:	ff 75 ec             	pushl  -0x14(%ebp)
c1005d3a:	e8 7f b0 ff ff       	call   c1000dbe <intr_restore>
c1005d3f:	83 c4 10             	add    $0x10,%esp
c1005d42:	90                   	nop
c1005d43:	c9                   	leave  
c1005d44:	c3                   	ret    

c1005d45 <sema_up>:
c1005d45:	55                   	push   %ebp
c1005d46:	89 e5                	mov    %esp,%ebp
c1005d48:	83 ec 28             	sub    $0x28,%esp
c1005d4b:	8b 45 08             	mov    0x8(%ebp),%eax
c1005d4e:	83 c0 04             	add    $0x4,%eax
c1005d51:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005d54:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005d57:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005d5a:	e8 4c b0 ff ff       	call   c1000dab <intr_save>
c1005d5f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005d62:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005d65:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1005d68:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005d6b:	8b 40 04             	mov    0x4(%eax),%eax
c1005d6e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005d71:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005d74:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1005d77:	74 41                	je     c1005dba <sema_up+0x75>
c1005d79:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005d7c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005d7f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005d82:	8b 40 04             	mov    0x4(%eax),%eax
c1005d85:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005d88:	8b 12                	mov    (%edx),%edx
c1005d8a:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005d8d:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005d90:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005d93:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1005d96:	89 50 04             	mov    %edx,0x4(%eax)
c1005d99:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005d9c:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1005d9f:	89 10                	mov    %edx,(%eax)
c1005da1:	90                   	nop
c1005da2:	90                   	nop
c1005da3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005da6:	83 e8 5c             	sub    $0x5c,%eax
c1005da9:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005dac:	83 ec 0c             	sub    $0xc,%esp
c1005daf:	ff 75 e8             	pushl  -0x18(%ebp)
c1005db2:	e8 d9 e0 ff ff       	call   c1003e90 <thread_unblock>
c1005db7:	83 c4 10             	add    $0x10,%esp
c1005dba:	8b 45 08             	mov    0x8(%ebp),%eax
c1005dbd:	0f b6 00             	movzbl (%eax),%eax
c1005dc0:	8d 50 01             	lea    0x1(%eax),%edx
c1005dc3:	8b 45 08             	mov    0x8(%ebp),%eax
c1005dc6:	88 10                	mov    %dl,(%eax)
c1005dc8:	83 ec 0c             	sub    $0xc,%esp
c1005dcb:	ff 75 ec             	pushl  -0x14(%ebp)
c1005dce:	e8 eb af ff ff       	call   c1000dbe <intr_restore>
c1005dd3:	83 c4 10             	add    $0x10,%esp
c1005dd6:	90                   	nop
c1005dd7:	c9                   	leave  
c1005dd8:	c3                   	ret    

c1005dd9 <lock_acquire>:
c1005dd9:	55                   	push   %ebp
c1005dda:	89 e5                	mov    %esp,%ebp
c1005ddc:	83 ec 08             	sub    $0x8,%esp
c1005ddf:	8b 45 08             	mov    0x8(%ebp),%eax
c1005de2:	8b 10                	mov    (%eax),%edx
c1005de4:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1005de9:	39 c2                	cmp    %eax,%edx
c1005deb:	74 29                	je     c1005e16 <lock_acquire+0x3d>
c1005ded:	8b 45 08             	mov    0x8(%ebp),%eax
c1005df0:	83 c0 04             	add    $0x4,%eax
c1005df3:	83 ec 0c             	sub    $0xc,%esp
c1005df6:	50                   	push   %eax
c1005df7:	e8 69 fe ff ff       	call   c1005c65 <sema_down>
c1005dfc:	83 c4 10             	add    $0x10,%esp
c1005dff:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c1005e05:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e08:	89 10                	mov    %edx,(%eax)
c1005e0a:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e0d:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
c1005e14:	eb 0f                	jmp    c1005e25 <lock_acquire+0x4c>
c1005e16:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e19:	8b 40 10             	mov    0x10(%eax),%eax
c1005e1c:	8d 50 01             	lea    0x1(%eax),%edx
c1005e1f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e22:	89 50 10             	mov    %edx,0x10(%eax)
c1005e25:	90                   	nop
c1005e26:	c9                   	leave  
c1005e27:	c3                   	ret    

c1005e28 <lock_release>:
c1005e28:	55                   	push   %ebp
c1005e29:	89 e5                	mov    %esp,%ebp
c1005e2b:	83 ec 08             	sub    $0x8,%esp
c1005e2e:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e31:	8b 40 10             	mov    0x10(%eax),%eax
c1005e34:	83 f8 01             	cmp    $0x1,%eax
c1005e37:	76 11                	jbe    c1005e4a <lock_release+0x22>
c1005e39:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e3c:	8b 40 10             	mov    0x10(%eax),%eax
c1005e3f:	8d 50 ff             	lea    -0x1(%eax),%edx
c1005e42:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e45:	89 50 10             	mov    %edx,0x10(%eax)
c1005e48:	eb 25                	jmp    c1005e6f <lock_release+0x47>
c1005e4a:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e4d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005e53:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e56:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005e5d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005e60:	83 c0 04             	add    $0x4,%eax
c1005e63:	83 ec 0c             	sub    $0xc,%esp
c1005e66:	50                   	push   %eax
c1005e67:	e8 d9 fe ff ff       	call   c1005d45 <sema_up>
c1005e6c:	83 c4 10             	add    $0x10,%esp
c1005e6f:	c9                   	leave  
c1005e70:	c3                   	ret    

c1005e71 <waitdisk>:
c1005e71:	55                   	push   %ebp
c1005e72:	89 e5                	mov    %esp,%ebp
c1005e74:	83 ec 08             	sub    $0x8,%esp
c1005e77:	90                   	nop
c1005e78:	83 ec 0c             	sub    $0xc,%esp
c1005e7b:	68 f7 01 00 00       	push   $0x1f7
c1005e80:	e8 7b a1 ff ff       	call   c1000000 <inb>
c1005e85:	83 c4 10             	add    $0x10,%esp
c1005e88:	0f b6 c0             	movzbl %al,%eax
c1005e8b:	25 c0 00 00 00       	and    $0xc0,%eax
c1005e90:	83 f8 40             	cmp    $0x40,%eax
c1005e93:	75 e3                	jne    c1005e78 <waitdisk+0x7>
c1005e95:	90                   	nop
c1005e96:	90                   	nop
c1005e97:	c9                   	leave  
c1005e98:	c3                   	ret    

c1005e99 <insl>:
c1005e99:	55                   	push   %ebp
c1005e9a:	89 e5                	mov    %esp,%ebp
c1005e9c:	57                   	push   %edi
c1005e9d:	53                   	push   %ebx
c1005e9e:	8b 55 08             	mov    0x8(%ebp),%edx
c1005ea1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1005ea4:	8b 45 10             	mov    0x10(%ebp),%eax
c1005ea7:	89 cb                	mov    %ecx,%ebx
c1005ea9:	89 df                	mov    %ebx,%edi
c1005eab:	89 c1                	mov    %eax,%ecx
c1005ead:	fc                   	cld    
c1005eae:	f2 6d                	repnz insl (%dx),%es:(%edi)
c1005eb0:	89 c8                	mov    %ecx,%eax
c1005eb2:	89 fb                	mov    %edi,%ebx
c1005eb4:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1005eb7:	89 45 10             	mov    %eax,0x10(%ebp)
c1005eba:	90                   	nop
c1005ebb:	5b                   	pop    %ebx
c1005ebc:	5f                   	pop    %edi
c1005ebd:	5d                   	pop    %ebp
c1005ebe:	c3                   	ret    

c1005ebf <outsl>:
c1005ebf:	55                   	push   %ebp
c1005ec0:	89 e5                	mov    %esp,%ebp
c1005ec2:	56                   	push   %esi
c1005ec3:	53                   	push   %ebx
c1005ec4:	8b 55 08             	mov    0x8(%ebp),%edx
c1005ec7:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c1005eca:	8b 45 10             	mov    0x10(%ebp),%eax
c1005ecd:	89 cb                	mov    %ecx,%ebx
c1005ecf:	89 de                	mov    %ebx,%esi
c1005ed1:	89 c1                	mov    %eax,%ecx
c1005ed3:	fc                   	cld    
c1005ed4:	f2 6f                	repnz outsl %ds:(%esi),(%dx)
c1005ed6:	89 c8                	mov    %ecx,%eax
c1005ed8:	89 f3                	mov    %esi,%ebx
c1005eda:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c1005edd:	89 45 10             	mov    %eax,0x10(%ebp)
c1005ee0:	90                   	nop
c1005ee1:	5b                   	pop    %ebx
c1005ee2:	5e                   	pop    %esi
c1005ee3:	5d                   	pop    %ebp
c1005ee4:	c3                   	ret    

c1005ee5 <ide_read_sect>:
c1005ee5:	55                   	push   %ebp
c1005ee6:	89 e5                	mov    %esp,%ebp
c1005ee8:	83 ec 08             	sub    $0x8,%esp
c1005eeb:	e8 81 ff ff ff       	call   c1005e71 <waitdisk>
c1005ef0:	83 ec 08             	sub    $0x8,%esp
c1005ef3:	6a 01                	push   $0x1
c1005ef5:	68 f2 01 00 00       	push   $0x1f2
c1005efa:	e8 3d a1 ff ff       	call   c100003c <outb>
c1005eff:	83 c4 10             	add    $0x10,%esp
c1005f02:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f05:	0f b6 c0             	movzbl %al,%eax
c1005f08:	83 ec 08             	sub    $0x8,%esp
c1005f0b:	50                   	push   %eax
c1005f0c:	68 f3 01 00 00       	push   $0x1f3
c1005f11:	e8 26 a1 ff ff       	call   c100003c <outb>
c1005f16:	83 c4 10             	add    $0x10,%esp
c1005f19:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f1c:	c1 e8 08             	shr    $0x8,%eax
c1005f1f:	0f b6 c0             	movzbl %al,%eax
c1005f22:	83 ec 08             	sub    $0x8,%esp
c1005f25:	50                   	push   %eax
c1005f26:	68 f4 01 00 00       	push   $0x1f4
c1005f2b:	e8 0c a1 ff ff       	call   c100003c <outb>
c1005f30:	83 c4 10             	add    $0x10,%esp
c1005f33:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f36:	c1 e8 10             	shr    $0x10,%eax
c1005f39:	0f b6 c0             	movzbl %al,%eax
c1005f3c:	83 ec 08             	sub    $0x8,%esp
c1005f3f:	50                   	push   %eax
c1005f40:	68 f5 01 00 00       	push   $0x1f5
c1005f45:	e8 f2 a0 ff ff       	call   c100003c <outb>
c1005f4a:	83 c4 10             	add    $0x10,%esp
c1005f4d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005f50:	c1 e8 18             	shr    $0x18,%eax
c1005f53:	83 e0 0f             	and    $0xf,%eax
c1005f56:	83 c8 e0             	or     $0xffffffe0,%eax
c1005f59:	0f b6 c0             	movzbl %al,%eax
c1005f5c:	83 ec 08             	sub    $0x8,%esp
c1005f5f:	50                   	push   %eax
c1005f60:	68 f6 01 00 00       	push   $0x1f6
c1005f65:	e8 d2 a0 ff ff       	call   c100003c <outb>
c1005f6a:	83 c4 10             	add    $0x10,%esp
c1005f6d:	83 ec 08             	sub    $0x8,%esp
c1005f70:	6a 20                	push   $0x20
c1005f72:	68 f7 01 00 00       	push   $0x1f7
c1005f77:	e8 c0 a0 ff ff       	call   c100003c <outb>
c1005f7c:	83 c4 10             	add    $0x10,%esp
c1005f7f:	e8 ed fe ff ff       	call   c1005e71 <waitdisk>
c1005f84:	83 ec 04             	sub    $0x4,%esp
c1005f87:	68 80 00 00 00       	push   $0x80
c1005f8c:	ff 75 08             	pushl  0x8(%ebp)
c1005f8f:	68 f0 01 00 00       	push   $0x1f0
c1005f94:	e8 00 ff ff ff       	call   c1005e99 <insl>
c1005f99:	83 c4 10             	add    $0x10,%esp
c1005f9c:	90                   	nop
c1005f9d:	c9                   	leave  
c1005f9e:	c3                   	ret    

c1005f9f <ide_write_sect>:
c1005f9f:	55                   	push   %ebp
c1005fa0:	89 e5                	mov    %esp,%ebp
c1005fa2:	83 ec 08             	sub    $0x8,%esp
c1005fa5:	e8 c7 fe ff ff       	call   c1005e71 <waitdisk>
c1005faa:	83 ec 08             	sub    $0x8,%esp
c1005fad:	6a 01                	push   $0x1
c1005faf:	68 f2 01 00 00       	push   $0x1f2
c1005fb4:	e8 83 a0 ff ff       	call   c100003c <outb>
c1005fb9:	83 c4 10             	add    $0x10,%esp
c1005fbc:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005fbf:	0f b6 c0             	movzbl %al,%eax
c1005fc2:	83 ec 08             	sub    $0x8,%esp
c1005fc5:	50                   	push   %eax
c1005fc6:	68 f3 01 00 00       	push   $0x1f3
c1005fcb:	e8 6c a0 ff ff       	call   c100003c <outb>
c1005fd0:	83 c4 10             	add    $0x10,%esp
c1005fd3:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005fd6:	c1 e8 08             	shr    $0x8,%eax
c1005fd9:	0f b6 c0             	movzbl %al,%eax
c1005fdc:	83 ec 08             	sub    $0x8,%esp
c1005fdf:	50                   	push   %eax
c1005fe0:	68 f4 01 00 00       	push   $0x1f4
c1005fe5:	e8 52 a0 ff ff       	call   c100003c <outb>
c1005fea:	83 c4 10             	add    $0x10,%esp
c1005fed:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005ff0:	c1 e8 10             	shr    $0x10,%eax
c1005ff3:	0f b6 c0             	movzbl %al,%eax
c1005ff6:	83 ec 08             	sub    $0x8,%esp
c1005ff9:	50                   	push   %eax
c1005ffa:	68 f5 01 00 00       	push   $0x1f5
c1005fff:	e8 38 a0 ff ff       	call   c100003c <outb>
c1006004:	83 c4 10             	add    $0x10,%esp
c1006007:	8b 45 0c             	mov    0xc(%ebp),%eax
c100600a:	c1 e8 18             	shr    $0x18,%eax
c100600d:	83 e0 0f             	and    $0xf,%eax
c1006010:	83 c8 e0             	or     $0xffffffe0,%eax
c1006013:	0f b6 c0             	movzbl %al,%eax
c1006016:	83 ec 08             	sub    $0x8,%esp
c1006019:	50                   	push   %eax
c100601a:	68 f6 01 00 00       	push   $0x1f6
c100601f:	e8 18 a0 ff ff       	call   c100003c <outb>
c1006024:	83 c4 10             	add    $0x10,%esp
c1006027:	83 ec 08             	sub    $0x8,%esp
c100602a:	6a 30                	push   $0x30
c100602c:	68 f7 01 00 00       	push   $0x1f7
c1006031:	e8 06 a0 ff ff       	call   c100003c <outb>
c1006036:	83 c4 10             	add    $0x10,%esp
c1006039:	e8 33 fe ff ff       	call   c1005e71 <waitdisk>
c100603e:	83 ec 04             	sub    $0x4,%esp
c1006041:	68 80 00 00 00       	push   $0x80
c1006046:	ff 75 08             	pushl  0x8(%ebp)
c1006049:	68 f0 01 00 00       	push   $0x1f0
c100604e:	e8 6c fe ff ff       	call   c1005ebf <outsl>
c1006053:	83 c4 10             	add    $0x10,%esp
c1006056:	90                   	nop
c1006057:	c9                   	leave  
c1006058:	c3                   	ret    

c1006059 <ide_read>:
c1006059:	55                   	push   %ebp
c100605a:	89 e5                	mov    %esp,%ebp
c100605c:	83 ec 18             	sub    $0x18,%esp
c100605f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006066:	eb 22                	jmp    c100608a <ide_read+0x31>
c1006068:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100606b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100606e:	01 d0                	add    %edx,%eax
c1006070:	83 ec 08             	sub    $0x8,%esp
c1006073:	50                   	push   %eax
c1006074:	ff 75 08             	pushl  0x8(%ebp)
c1006077:	e8 69 fe ff ff       	call   c1005ee5 <ide_read_sect>
c100607c:	83 c4 10             	add    $0x10,%esp
c100607f:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1006086:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100608a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100608d:	39 45 10             	cmp    %eax,0x10(%ebp)
c1006090:	77 d6                	ja     c1006068 <ide_read+0xf>
c1006092:	90                   	nop
c1006093:	90                   	nop
c1006094:	c9                   	leave  
c1006095:	c3                   	ret    

c1006096 <ide_write>:
c1006096:	55                   	push   %ebp
c1006097:	89 e5                	mov    %esp,%ebp
c1006099:	83 ec 18             	sub    $0x18,%esp
c100609c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10060a3:	eb 22                	jmp    c10060c7 <ide_write+0x31>
c10060a5:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10060a8:	8b 45 0c             	mov    0xc(%ebp),%eax
c10060ab:	01 d0                	add    %edx,%eax
c10060ad:	83 ec 08             	sub    $0x8,%esp
c10060b0:	50                   	push   %eax
c10060b1:	ff 75 08             	pushl  0x8(%ebp)
c10060b4:	e8 e6 fe ff ff       	call   c1005f9f <ide_write_sect>
c10060b9:	83 c4 10             	add    $0x10,%esp
c10060bc:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c10060c3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10060c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10060ca:	39 45 10             	cmp    %eax,0x10(%ebp)
c10060cd:	77 d6                	ja     c10060a5 <ide_write+0xf>
c10060cf:	90                   	nop
c10060d0:	90                   	nop
c10060d1:	c9                   	leave  
c10060d2:	c3                   	ret    

c10060d3 <delay>:
c10060d3:	55                   	push   %ebp
c10060d4:	89 e5                	mov    %esp,%ebp
c10060d6:	83 ec 10             	sub    $0x10,%esp
c10060d9:	8b 45 08             	mov    0x8(%ebp),%eax
c10060dc:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10060df:	eb 17                	jmp    c10060f8 <delay+0x25>
c10060e1:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c10060e8:	eb 04                	jmp    c10060ee <delay+0x1b>
c10060ea:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c10060ee:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c10060f2:	75 f6                	jne    c10060ea <delay+0x17>
c10060f4:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c10060f8:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c10060fc:	75 e3                	jne    c10060e1 <delay+0xe>
c10060fe:	90                   	nop
c10060ff:	90                   	nop
c1006100:	c9                   	leave  
c1006101:	c3                   	ret    

c1006102 <read_main_partition>:
c1006102:	55                   	push   %ebp
c1006103:	89 e5                	mov    %esp,%ebp
c1006105:	83 ec 18             	sub    $0x18,%esp
c1006108:	83 ec 08             	sub    $0x8,%esp
c100610b:	6a 02                	push   $0x2
c100610d:	68 00 02 00 00       	push   $0x200
c1006112:	e8 9c cb ff ff       	call   c1002cb3 <vmm_malloc>
c1006117:	83 c4 10             	add    $0x10,%esp
c100611a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100611d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006120:	83 ec 08             	sub    $0x8,%esp
c1006123:	6a 00                	push   $0x0
c1006125:	50                   	push   %eax
c1006126:	e8 ba fd ff ff       	call   c1005ee5 <ide_read_sect>
c100612b:	83 c4 10             	add    $0x10,%esp
c100612e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006131:	05 be 01 00 00       	add    $0x1be,%eax
c1006136:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006139:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100613c:	c9                   	leave  
c100613d:	c3                   	ret    

c100613e <test_ide_io>:
c100613e:	55                   	push   %ebp
c100613f:	89 e5                	mov    %esp,%ebp
c1006141:	83 ec 18             	sub    $0x18,%esp
c1006144:	83 ec 08             	sub    $0x8,%esp
c1006147:	68 00 90 10 00       	push   $0x109000
c100614c:	68 36 b8 00 c1       	push   $0xc100b836
c1006151:	e8 5b f6 ff ff       	call   c10057b1 <printk>
c1006156:	83 c4 10             	add    $0x10,%esp
c1006159:	83 ec 08             	sub    $0x8,%esp
c100615c:	68 2c eb 00 c1       	push   $0xc100eb2c
c1006161:	68 45 b8 00 c1       	push   $0xc100b845
c1006166:	e8 46 f6 ff ff       	call   c10057b1 <printk>
c100616b:	83 c4 10             	add    $0x10,%esp
c100616e:	b8 00 90 10 00       	mov    $0x109000,%eax
c1006173:	2d 01 fe 0f 00       	sub    $0xffe01,%eax
c1006178:	c1 e8 09             	shr    $0x9,%eax
c100617b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100617e:	b8 2c eb 00 c1       	mov    $0xc100eb2c,%eax
c1006183:	05 ff 01 00 3f       	add    $0x3f0001ff,%eax
c1006188:	c1 e8 09             	shr    $0x9,%eax
c100618b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100618e:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006191:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006194:	01 d0                	add    %edx,%eax
c1006196:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006199:	83 ec 08             	sub    $0x8,%esp
c100619c:	ff 75 ec             	pushl  -0x14(%ebp)
c100619f:	68 54 b8 00 c1       	push   $0xc100b854
c10061a4:	e8 08 f6 ff ff       	call   c10057b1 <printk>
c10061a9:	83 c4 10             	add    $0x10,%esp
c10061ac:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10061b0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10061b7:	e8 46 ff ff ff       	call   c1006102 <read_main_partition>
c10061bc:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10061bf:	90                   	nop
c10061c0:	c9                   	leave  
c10061c1:	c3                   	ret    

c10061c2 <hash32>:
c10061c2:	55                   	push   %ebp
c10061c3:	89 e5                	mov    %esp,%ebp
c10061c5:	83 ec 10             	sub    $0x10,%esp
c10061c8:	8b 45 08             	mov    0x8(%ebp),%eax
c10061cb:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10061d1:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10061d4:	b8 20 00 00 00       	mov    $0x20,%eax
c10061d9:	2b 45 0c             	sub    0xc(%ebp),%eax
c10061dc:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10061df:	89 c1                	mov    %eax,%ecx
c10061e1:	d3 ea                	shr    %cl,%edx
c10061e3:	89 d0                	mov    %edx,%eax
c10061e5:	c9                   	leave  
c10061e6:	c3                   	ret    

c10061e7 <partition_format>:
c10061e7:	55                   	push   %ebp
c10061e8:	89 e5                	mov    %esp,%ebp
c10061ea:	53                   	push   %ebx
c10061eb:	81 ec 44 02 00 00    	sub    $0x244,%esp
c10061f1:	e8 0c ff ff ff       	call   c1006102 <read_main_partition>
c10061f6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10061f9:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
c1006200:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
c1006207:	c7 45 e4 11 00 00 00 	movl   $0x11,-0x1c(%ebp)
c100620e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006211:	8b 40 0c             	mov    0xc(%eax),%eax
c1006214:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1006217:	2b 45 e8             	sub    -0x18(%ebp),%eax
c100621a:	2b 45 e4             	sub    -0x1c(%ebp),%eax
c100621d:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1006220:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006223:	05 ff 0f 00 00       	add    $0xfff,%eax
c1006228:	c1 e8 0c             	shr    $0xc,%eax
c100622b:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100622e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006231:	2b 45 dc             	sub    -0x24(%ebp),%eax
c1006234:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1006237:	c7 85 bc fd ff ff 18 	movl   $0x19590318,-0x244(%ebp)
c100623e:	03 59 19 
c1006241:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006244:	8b 40 0c             	mov    0xc(%eax),%eax
c1006247:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
c100624d:	c7 85 c4 fd ff ff e8 	movl   $0x3e8,-0x23c(%ebp)
c1006254:	03 00 00 
c1006257:	c7 85 c8 fd ff ff 00 	movl   $0x800,-0x238(%ebp)
c100625e:	08 00 00 
c1006261:	c7 85 cc fd ff ff 01 	movl   $0x801,-0x234(%ebp)
c1006268:	08 00 00 
c100626b:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100626e:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c1006274:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
c100627a:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c1006280:	01 d0                	add    %edx,%eax
c1006282:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
c1006288:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100628b:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
c1006291:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
c1006297:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c100629d:	01 d0                	add    %edx,%eax
c100629f:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
c10062a5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10062a8:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
c10062ae:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
c10062b4:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10062ba:	01 d0                	add    %edx,%eax
c10062bc:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
c10062c2:	c7 85 e8 fd ff ff 00 	movl   $0x0,-0x218(%ebp)
c10062c9:	00 00 00 
c10062cc:	c7 85 ec fd ff ff 18 	movl   $0x18,-0x214(%ebp)
c10062d3:	00 00 00 
c10062d6:	e8 d9 f0 ff ff       	call   c10053b4 <clear>
c10062db:	8b 85 bc fd ff ff    	mov    -0x244(%ebp),%eax
c10062e1:	83 ec 08             	sub    $0x8,%esp
c10062e4:	50                   	push   %eax
c10062e5:	68 64 b8 00 c1       	push   $0xc100b864
c10062ea:	e8 c2 f4 ff ff       	call   c10057b1 <printk>
c10062ef:	83 c4 10             	add    $0x10,%esp
c10062f2:	8b 85 c0 fd ff ff    	mov    -0x240(%ebp),%eax
c10062f8:	83 ec 08             	sub    $0x8,%esp
c10062fb:	50                   	push   %eax
c10062fc:	68 74 b8 00 c1       	push   $0xc100b874
c1006301:	e8 ab f4 ff ff       	call   c10057b1 <printk>
c1006306:	83 c4 10             	add    $0x10,%esp
c1006309:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
c100630f:	83 ec 08             	sub    $0x8,%esp
c1006312:	50                   	push   %eax
c1006313:	68 86 b8 00 c1       	push   $0xc100b886
c1006318:	e8 94 f4 ff ff       	call   c10057b1 <printk>
c100631d:	83 c4 10             	add    $0x10,%esp
c1006320:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c1006326:	83 ec 08             	sub    $0x8,%esp
c1006329:	50                   	push   %eax
c100632a:	68 9a b8 00 c1       	push   $0xc100b89a
c100632f:	e8 7d f4 ff ff       	call   c10057b1 <printk>
c1006334:	83 c4 10             	add    $0x10,%esp
c1006337:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c100633d:	83 ec 08             	sub    $0x8,%esp
c1006340:	50                   	push   %eax
c1006341:	68 b5 b8 00 c1       	push   $0xc100b8b5
c1006346:	e8 66 f4 ff ff       	call   c10057b1 <printk>
c100634b:	83 c4 10             	add    $0x10,%esp
c100634e:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1006354:	83 ec 08             	sub    $0x8,%esp
c1006357:	50                   	push   %eax
c1006358:	68 d2 b8 00 c1       	push   $0xc100b8d2
c100635d:	e8 4f f4 ff ff       	call   c10057b1 <printk>
c1006362:	83 c4 10             	add    $0x10,%esp
c1006365:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c100636b:	83 ec 08             	sub    $0x8,%esp
c100636e:	50                   	push   %eax
c100636f:	68 ed b8 00 c1       	push   $0xc100b8ed
c1006374:	e8 38 f4 ff ff       	call   c10057b1 <printk>
c1006379:	83 c4 10             	add    $0x10,%esp
c100637c:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c1006382:	83 ec 08             	sub    $0x8,%esp
c1006385:	50                   	push   %eax
c1006386:	68 0a b9 00 c1       	push   $0xc100b90a
c100638b:	e8 21 f4 ff ff       	call   c10057b1 <printk>
c1006390:	83 c4 10             	add    $0x10,%esp
c1006393:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1006399:	83 ec 08             	sub    $0x8,%esp
c100639c:	50                   	push   %eax
c100639d:	68 24 b9 00 c1       	push   $0xc100b924
c10063a2:	e8 0a f4 ff ff       	call   c10057b1 <printk>
c10063a7:	83 c4 10             	add    $0x10,%esp
c10063aa:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c10063b0:	83 ec 08             	sub    $0x8,%esp
c10063b3:	50                   	push   %eax
c10063b4:	68 40 b9 00 c1       	push   $0xc100b940
c10063b9:	e8 f3 f3 ff ff       	call   c10057b1 <printk>
c10063be:	83 c4 10             	add    $0x10,%esp
c10063c1:	83 ec 04             	sub    $0x4,%esp
c10063c4:	6a 01                	push   $0x1
c10063c6:	68 00 08 00 00       	push   $0x800
c10063cb:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
c10063d1:	50                   	push   %eax
c10063d2:	e8 bf fc ff ff       	call   c1006096 <ide_write>
c10063d7:	83 c4 10             	add    $0x10,%esp
c10063da:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c10063e0:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c10063e6:	39 c2                	cmp    %eax,%edx
c10063e8:	0f 43 c2             	cmovae %edx,%eax
c10063eb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10063ee:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c10063f4:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
c10063f7:	0f 43 45 d4          	cmovae -0x2c(%ebp),%eax
c10063fb:	c1 e0 09             	shl    $0x9,%eax
c10063fe:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1006401:	83 ec 08             	sub    $0x8,%esp
c1006404:	6a 02                	push   $0x2
c1006406:	ff 75 d4             	pushl  -0x2c(%ebp)
c1006409:	e8 a5 c8 ff ff       	call   c1002cb3 <vmm_malloc>
c100640e:	83 c4 10             	add    $0x10,%esp
c1006411:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1006414:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006417:	0f b6 00             	movzbl (%eax),%eax
c100641a:	83 c8 01             	or     $0x1,%eax
c100641d:	89 c2                	mov    %eax,%edx
c100641f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006422:	88 10                	mov    %dl,(%eax)
c1006424:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1006427:	c1 e8 03             	shr    $0x3,%eax
c100642a:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100642d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1006430:	83 e0 07             	and    $0x7,%eax
c1006433:	88 45 cb             	mov    %al,-0x35(%ebp)
c1006436:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006439:	25 ff 01 00 00       	and    $0x1ff,%eax
c100643e:	ba 00 02 00 00       	mov    $0x200,%edx
c1006443:	29 c2                	sub    %eax,%edx
c1006445:	89 d0                	mov    %edx,%eax
c1006447:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100644a:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100644d:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006450:	01 d0                	add    %edx,%eax
c1006452:	83 ec 04             	sub    $0x4,%esp
c1006455:	ff 75 c4             	pushl  -0x3c(%ebp)
c1006458:	6a ff                	push   $0xffffffff
c100645a:	50                   	push   %eax
c100645b:	e8 4a 9c ff ff       	call   c10000aa <memset>
c1006460:	83 c4 10             	add    $0x10,%esp
c1006463:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006467:	eb 38                	jmp    c10064a1 <partition_format+0x2ba>
c1006469:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100646c:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100646f:	01 d0                	add    %edx,%eax
c1006471:	0f b6 00             	movzbl (%eax),%eax
c1006474:	89 c2                	mov    %eax,%edx
c1006476:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c100647a:	bb 01 00 00 00       	mov    $0x1,%ebx
c100647f:	89 c1                	mov    %eax,%ecx
c1006481:	d3 e3                	shl    %cl,%ebx
c1006483:	89 d8                	mov    %ebx,%eax
c1006485:	f7 d0                	not    %eax
c1006487:	89 d1                	mov    %edx,%ecx
c1006489:	21 c1                	and    %eax,%ecx
c100648b:	8b 55 d0             	mov    -0x30(%ebp),%edx
c100648e:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006491:	01 d0                	add    %edx,%eax
c1006493:	89 ca                	mov    %ecx,%edx
c1006495:	88 10                	mov    %dl,(%eax)
c1006497:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100649b:	83 c0 01             	add    $0x1,%eax
c100649e:	88 45 f7             	mov    %al,-0x9(%ebp)
c10064a1:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
c10064a5:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c10064a9:	39 c2                	cmp    %eax,%edx
c10064ab:	7c bc                	jl     c1006469 <partition_format+0x282>
c10064ad:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
c10064b3:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c10064b9:	83 ec 04             	sub    $0x4,%esp
c10064bc:	52                   	push   %edx
c10064bd:	50                   	push   %eax
c10064be:	ff 75 d0             	pushl  -0x30(%ebp)
c10064c1:	e8 d0 fb ff ff       	call   c1006096 <ide_write>
c10064c6:	83 c4 10             	add    $0x10,%esp
c10064c9:	83 ec 04             	sub    $0x4,%esp
c10064cc:	ff 75 d4             	pushl  -0x2c(%ebp)
c10064cf:	6a 00                	push   $0x0
c10064d1:	ff 75 d0             	pushl  -0x30(%ebp)
c10064d4:	e8 d1 9b ff ff       	call   c10000aa <memset>
c10064d9:	83 c4 10             	add    $0x10,%esp
c10064dc:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10064df:	0f b6 00             	movzbl (%eax),%eax
c10064e2:	83 c8 01             	or     $0x1,%eax
c10064e5:	89 c2                	mov    %eax,%edx
c10064e7:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10064ea:	88 10                	mov    %dl,(%eax)
c10064ec:	c7 45 cc 7d 00 00 00 	movl   $0x7d,-0x34(%ebp)
c10064f3:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
c10064f7:	b8 00 02 00 00       	mov    $0x200,%eax
c10064fc:	2b 45 cc             	sub    -0x34(%ebp),%eax
c10064ff:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1006502:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006505:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006508:	01 d0                	add    %edx,%eax
c100650a:	83 ec 04             	sub    $0x4,%esp
c100650d:	ff 75 c4             	pushl  -0x3c(%ebp)
c1006510:	6a ff                	push   $0xffffffff
c1006512:	50                   	push   %eax
c1006513:	e8 92 9b ff ff       	call   c10000aa <memset>
c1006518:	83 c4 10             	add    $0x10,%esp
c100651b:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c100651f:	eb 38                	jmp    c1006559 <partition_format+0x372>
c1006521:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006524:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006527:	01 d0                	add    %edx,%eax
c1006529:	0f b6 00             	movzbl (%eax),%eax
c100652c:	89 c2                	mov    %eax,%edx
c100652e:	0f be 45 f6          	movsbl -0xa(%ebp),%eax
c1006532:	bb 01 00 00 00       	mov    $0x1,%ebx
c1006537:	89 c1                	mov    %eax,%ecx
c1006539:	d3 e3                	shl    %cl,%ebx
c100653b:	89 d8                	mov    %ebx,%eax
c100653d:	f7 d0                	not    %eax
c100653f:	89 d1                	mov    %edx,%ecx
c1006541:	21 c1                	and    %eax,%ecx
c1006543:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1006546:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1006549:	01 d0                	add    %edx,%eax
c100654b:	89 ca                	mov    %ecx,%edx
c100654d:	88 10                	mov    %dl,(%eax)
c100654f:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1006553:	83 c0 01             	add    $0x1,%eax
c1006556:	88 45 f6             	mov    %al,-0xa(%ebp)
c1006559:	0f be 55 f6          	movsbl -0xa(%ebp),%edx
c100655d:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1006561:	39 c2                	cmp    %eax,%edx
c1006563:	7c bc                	jl     c1006521 <partition_format+0x33a>
c1006565:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c100656b:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1006571:	83 ec 04             	sub    $0x4,%esp
c1006574:	52                   	push   %edx
c1006575:	50                   	push   %eax
c1006576:	ff 75 d0             	pushl  -0x30(%ebp)
c1006579:	e8 18 fb ff ff       	call   c1006096 <ide_write>
c100657e:	83 c4 10             	add    $0x10,%esp
c1006581:	83 ec 04             	sub    $0x4,%esp
c1006584:	ff 75 d4             	pushl  -0x2c(%ebp)
c1006587:	6a 00                	push   $0x0
c1006589:	ff 75 d0             	pushl  -0x30(%ebp)
c100658c:	e8 19 9b ff ff       	call   c10000aa <memset>
c1006591:	83 c4 10             	add    $0x10,%esp
c1006594:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006597:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100659a:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
c10065a0:	8d 14 00             	lea    (%eax,%eax,1),%edx
c10065a3:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10065a6:	89 50 04             	mov    %edx,0x4(%eax)
c10065a9:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10065ac:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10065b2:	8b 95 e4 fd ff ff    	mov    -0x21c(%ebp),%edx
c10065b8:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10065bb:	89 50 10             	mov    %edx,0x10(%eax)
c10065be:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
c10065c4:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c10065ca:	83 ec 04             	sub    $0x4,%esp
c10065cd:	52                   	push   %edx
c10065ce:	50                   	push   %eax
c10065cf:	ff 75 d0             	pushl  -0x30(%ebp)
c10065d2:	e8 bf fa ff ff       	call   c1006096 <ide_write>
c10065d7:	83 c4 10             	add    $0x10,%esp
c10065da:	83 ec 04             	sub    $0x4,%esp
c10065dd:	ff 75 d4             	pushl  -0x2c(%ebp)
c10065e0:	6a 00                	push   $0x0
c10065e2:	ff 75 d0             	pushl  -0x30(%ebp)
c10065e5:	e8 c0 9a ff ff       	call   c10000aa <memset>
c10065ea:	83 c4 10             	add    $0x10,%esp
c10065ed:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10065f0:	89 45 bc             	mov    %eax,-0x44(%ebp)
c10065f3:	8b 45 bc             	mov    -0x44(%ebp),%eax
c10065f6:	83 ec 04             	sub    $0x4,%esp
c10065f9:	6a 01                	push   $0x1
c10065fb:	68 59 b9 00 c1       	push   $0xc100b959
c1006600:	50                   	push   %eax
c1006601:	e8 02 9b ff ff       	call   c1000108 <memcpy>
c1006606:	83 c4 10             	add    $0x10,%esp
c1006609:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100660c:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1006613:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006616:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100661d:	83 45 bc 18          	addl   $0x18,-0x44(%ebp)
c1006621:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006624:	83 ec 04             	sub    $0x4,%esp
c1006627:	6a 02                	push   $0x2
c1006629:	68 5b b9 00 c1       	push   $0xc100b95b
c100662e:	50                   	push   %eax
c100662f:	e8 d4 9a ff ff       	call   c1000108 <memcpy>
c1006634:	83 c4 10             	add    $0x10,%esp
c1006637:	8b 45 bc             	mov    -0x44(%ebp),%eax
c100663a:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1006641:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1006644:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100664b:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c1006651:	83 ec 04             	sub    $0x4,%esp
c1006654:	6a 01                	push   $0x1
c1006656:	50                   	push   %eax
c1006657:	ff 75 d0             	pushl  -0x30(%ebp)
c100665a:	e8 37 fa ff ff       	call   c1006096 <ide_write>
c100665f:	83 c4 10             	add    $0x10,%esp
c1006662:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006665:	83 ec 08             	sub    $0x8,%esp
c1006668:	ff 75 d4             	pushl  -0x2c(%ebp)
c100666b:	50                   	push   %eax
c100666c:	e8 67 c7 ff ff       	call   c1002dd8 <vmm_free>
c1006671:	83 c4 10             	add    $0x10,%esp
c1006674:	90                   	nop
c1006675:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1006678:	c9                   	leave  
c1006679:	c3                   	ret    

c100667a <mount_partition>:
c100667a:	55                   	push   %ebp
c100667b:	89 e5                	mov    %esp,%ebp
c100667d:	83 ec 18             	sub    $0x18,%esp
c1006680:	e8 7d fa ff ff       	call   c1006102 <read_main_partition>
c1006685:	a3 30 42 a1 c1       	mov    %eax,0xc1a14230
c100668a:	83 ec 08             	sub    $0x8,%esp
c100668d:	6a 02                	push   $0x2
c100668f:	68 00 02 00 00       	push   $0x200
c1006694:	e8 1a c6 ff ff       	call   c1002cb3 <vmm_malloc>
c1006699:	83 c4 10             	add    $0x10,%esp
c100669c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100669f:	83 ec 04             	sub    $0x4,%esp
c10066a2:	68 00 02 00 00       	push   $0x200
c10066a7:	6a 00                	push   $0x0
c10066a9:	ff 75 f0             	pushl  -0x10(%ebp)
c10066ac:	e8 f9 99 ff ff       	call   c10000aa <memset>
c10066b1:	83 c4 10             	add    $0x10,%esp
c10066b4:	83 ec 04             	sub    $0x4,%esp
c10066b7:	6a 01                	push   $0x1
c10066b9:	68 00 08 00 00       	push   $0x800
c10066be:	ff 75 f0             	pushl  -0x10(%ebp)
c10066c1:	e8 93 f9 ff ff       	call   c1006059 <ide_read>
c10066c6:	83 c4 10             	add    $0x10,%esp
c10066c9:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10066ce:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10066d1:	89 50 10             	mov    %edx,0x10(%eax)
c10066d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10066d7:	8b 40 14             	mov    0x14(%eax),%eax
c10066da:	c1 e0 09             	shl    $0x9,%eax
c10066dd:	83 ec 08             	sub    $0x8,%esp
c10066e0:	6a 02                	push   $0x2
c10066e2:	50                   	push   %eax
c10066e3:	e8 cb c5 ff ff       	call   c1002cb3 <vmm_malloc>
c10066e8:	83 c4 10             	add    $0x10,%esp
c10066eb:	89 c2                	mov    %eax,%edx
c10066ed:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10066f2:	89 50 18             	mov    %edx,0x18(%eax)
c10066f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10066f8:	8b 50 14             	mov    0x14(%eax),%edx
c10066fb:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006700:	c1 e2 09             	shl    $0x9,%edx
c1006703:	89 50 14             	mov    %edx,0x14(%eax)
c1006706:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006709:	8b 48 14             	mov    0x14(%eax),%ecx
c100670c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100670f:	8b 50 10             	mov    0x10(%eax),%edx
c1006712:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006717:	8b 40 18             	mov    0x18(%eax),%eax
c100671a:	83 ec 04             	sub    $0x4,%esp
c100671d:	51                   	push   %ecx
c100671e:	52                   	push   %edx
c100671f:	50                   	push   %eax
c1006720:	e8 34 f9 ff ff       	call   c1006059 <ide_read>
c1006725:	83 c4 10             	add    $0x10,%esp
c1006728:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100672b:	8b 40 1c             	mov    0x1c(%eax),%eax
c100672e:	c1 e0 09             	shl    $0x9,%eax
c1006731:	83 ec 08             	sub    $0x8,%esp
c1006734:	6a 02                	push   $0x2
c1006736:	50                   	push   %eax
c1006737:	e8 77 c5 ff ff       	call   c1002cb3 <vmm_malloc>
c100673c:	83 c4 10             	add    $0x10,%esp
c100673f:	89 c2                	mov    %eax,%edx
c1006741:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006746:	89 50 20             	mov    %edx,0x20(%eax)
c1006749:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100674c:	8b 50 1c             	mov    0x1c(%eax),%edx
c100674f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006754:	c1 e2 09             	shl    $0x9,%edx
c1006757:	89 50 1c             	mov    %edx,0x1c(%eax)
c100675a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100675d:	8b 48 1c             	mov    0x1c(%eax),%ecx
c1006760:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006763:	8b 50 18             	mov    0x18(%eax),%edx
c1006766:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100676b:	8b 40 20             	mov    0x20(%eax),%eax
c100676e:	83 ec 04             	sub    $0x4,%esp
c1006771:	51                   	push   %ecx
c1006772:	52                   	push   %edx
c1006773:	50                   	push   %eax
c1006774:	e8 e0 f8 ff ff       	call   c1006059 <ide_read>
c1006779:	83 c4 10             	add    $0x10,%esp
c100677c:	e8 33 ec ff ff       	call   c10053b4 <clear>
c1006781:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006786:	8b 40 10             	mov    0x10(%eax),%eax
c1006789:	8b 00                	mov    (%eax),%eax
c100678b:	83 ec 08             	sub    $0x8,%esp
c100678e:	50                   	push   %eax
c100678f:	68 64 b8 00 c1       	push   $0xc100b864
c1006794:	e8 18 f0 ff ff       	call   c10057b1 <printk>
c1006799:	83 c4 10             	add    $0x10,%esp
c100679c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10067a1:	8b 40 10             	mov    0x10(%eax),%eax
c10067a4:	8b 40 04             	mov    0x4(%eax),%eax
c10067a7:	83 ec 08             	sub    $0x8,%esp
c10067aa:	50                   	push   %eax
c10067ab:	68 74 b8 00 c1       	push   $0xc100b874
c10067b0:	e8 fc ef ff ff       	call   c10057b1 <printk>
c10067b5:	83 c4 10             	add    $0x10,%esp
c10067b8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10067bd:	8b 40 10             	mov    0x10(%eax),%eax
c10067c0:	8b 40 08             	mov    0x8(%eax),%eax
c10067c3:	83 ec 08             	sub    $0x8,%esp
c10067c6:	50                   	push   %eax
c10067c7:	68 86 b8 00 c1       	push   $0xc100b886
c10067cc:	e8 e0 ef ff ff       	call   c10057b1 <printk>
c10067d1:	83 c4 10             	add    $0x10,%esp
c10067d4:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10067d9:	8b 40 10             	mov    0x10(%eax),%eax
c10067dc:	8b 40 10             	mov    0x10(%eax),%eax
c10067df:	83 ec 08             	sub    $0x8,%esp
c10067e2:	50                   	push   %eax
c10067e3:	68 9a b8 00 c1       	push   $0xc100b89a
c10067e8:	e8 c4 ef ff ff       	call   c10057b1 <printk>
c10067ed:	83 c4 10             	add    $0x10,%esp
c10067f0:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10067f5:	8b 40 10             	mov    0x10(%eax),%eax
c10067f8:	8b 40 14             	mov    0x14(%eax),%eax
c10067fb:	83 ec 08             	sub    $0x8,%esp
c10067fe:	50                   	push   %eax
c10067ff:	68 b5 b8 00 c1       	push   $0xc100b8b5
c1006804:	e8 a8 ef ff ff       	call   c10057b1 <printk>
c1006809:	83 c4 10             	add    $0x10,%esp
c100680c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006811:	8b 40 10             	mov    0x10(%eax),%eax
c1006814:	8b 40 18             	mov    0x18(%eax),%eax
c1006817:	83 ec 08             	sub    $0x8,%esp
c100681a:	50                   	push   %eax
c100681b:	68 d2 b8 00 c1       	push   $0xc100b8d2
c1006820:	e8 8c ef ff ff       	call   c10057b1 <printk>
c1006825:	83 c4 10             	add    $0x10,%esp
c1006828:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100682d:	8b 40 10             	mov    0x10(%eax),%eax
c1006830:	8b 40 1c             	mov    0x1c(%eax),%eax
c1006833:	83 ec 08             	sub    $0x8,%esp
c1006836:	50                   	push   %eax
c1006837:	68 ed b8 00 c1       	push   $0xc100b8ed
c100683c:	e8 70 ef ff ff       	call   c10057b1 <printk>
c1006841:	83 c4 10             	add    $0x10,%esp
c1006844:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006849:	8b 40 10             	mov    0x10(%eax),%eax
c100684c:	8b 40 20             	mov    0x20(%eax),%eax
c100684f:	83 ec 08             	sub    $0x8,%esp
c1006852:	50                   	push   %eax
c1006853:	68 0a b9 00 c1       	push   $0xc100b90a
c1006858:	e8 54 ef ff ff       	call   c10057b1 <printk>
c100685d:	83 c4 10             	add    $0x10,%esp
c1006860:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006865:	8b 40 10             	mov    0x10(%eax),%eax
c1006868:	8b 40 24             	mov    0x24(%eax),%eax
c100686b:	83 ec 08             	sub    $0x8,%esp
c100686e:	50                   	push   %eax
c100686f:	68 24 b9 00 c1       	push   $0xc100b924
c1006874:	e8 38 ef ff ff       	call   c10057b1 <printk>
c1006879:	83 c4 10             	add    $0x10,%esp
c100687c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006881:	8b 40 10             	mov    0x10(%eax),%eax
c1006884:	8b 40 28             	mov    0x28(%eax),%eax
c1006887:	83 ec 08             	sub    $0x8,%esp
c100688a:	50                   	push   %eax
c100688b:	68 40 b9 00 c1       	push   $0xc100b940
c1006890:	e8 1c ef ff ff       	call   c10057b1 <printk>
c1006895:	83 c4 10             	add    $0x10,%esp
c1006898:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100689d:	8b 40 18             	mov    0x18(%eax),%eax
c10068a0:	83 ec 08             	sub    $0x8,%esp
c10068a3:	50                   	push   %eax
c10068a4:	68 60 b9 00 c1       	push   $0xc100b960
c10068a9:	e8 03 ef ff ff       	call   c10057b1 <printk>
c10068ae:	83 c4 10             	add    $0x10,%esp
c10068b1:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10068b6:	8b 40 14             	mov    0x14(%eax),%eax
c10068b9:	83 ec 08             	sub    $0x8,%esp
c10068bc:	50                   	push   %eax
c10068bd:	68 84 b9 00 c1       	push   $0xc100b984
c10068c2:	e8 ea ee ff ff       	call   c10057b1 <printk>
c10068c7:	83 c4 10             	add    $0x10,%esp
c10068ca:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10068cf:	8b 40 20             	mov    0x20(%eax),%eax
c10068d2:	83 ec 08             	sub    $0x8,%esp
c10068d5:	50                   	push   %eax
c10068d6:	68 b4 b9 00 c1       	push   $0xc100b9b4
c10068db:	e8 d1 ee ff ff       	call   c10057b1 <printk>
c10068e0:	83 c4 10             	add    $0x10,%esp
c10068e3:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10068e8:	8b 40 1c             	mov    0x1c(%eax),%eax
c10068eb:	83 ec 08             	sub    $0x8,%esp
c10068ee:	50                   	push   %eax
c10068ef:	68 d8 b9 00 c1       	push   $0xc100b9d8
c10068f4:	e8 b8 ee ff ff       	call   c10057b1 <printk>
c10068f9:	83 c4 10             	add    $0x10,%esp
c10068fc:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006901:	83 ec 0c             	sub    $0xc,%esp
c1006904:	50                   	push   %eax
c1006905:	e8 f1 19 00 00       	call   c10082fb <open_root_dir>
c100690a:	83 c4 10             	add    $0x10,%esp
c100690d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006914:	eb 1d                	jmp    c1006933 <mount_partition+0x2b9>
c1006916:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006919:	8d 42 01             	lea    0x1(%edx),%eax
c100691c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100691f:	89 d0                	mov    %edx,%eax
c1006921:	01 c0                	add    %eax,%eax
c1006923:	01 d0                	add    %edx,%eax
c1006925:	c1 e0 02             	shl    $0x2,%eax
c1006928:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100692d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1006933:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006937:	76 dd                	jbe    c1006916 <mount_partition+0x29c>
c1006939:	90                   	nop
c100693a:	90                   	nop
c100693b:	c9                   	leave  
c100693c:	c3                   	ret    

c100693d <path_parse>:
c100693d:	55                   	push   %ebp
c100693e:	89 e5                	mov    %esp,%ebp
c1006940:	8b 45 08             	mov    0x8(%ebp),%eax
c1006943:	0f b6 00             	movzbl (%eax),%eax
c1006946:	3c 2f                	cmp    $0x2f,%al
c1006948:	75 27                	jne    c1006971 <path_parse+0x34>
c100694a:	83 45 08 01          	addl   $0x1,0x8(%ebp)
c100694e:	8b 45 08             	mov    0x8(%ebp),%eax
c1006951:	0f b6 00             	movzbl (%eax),%eax
c1006954:	3c 2f                	cmp    $0x2f,%al
c1006956:	74 f2                	je     c100694a <path_parse+0xd>
c1006958:	eb 17                	jmp    c1006971 <path_parse+0x34>
c100695a:	8b 55 08             	mov    0x8(%ebp),%edx
c100695d:	8d 42 01             	lea    0x1(%edx),%eax
c1006960:	89 45 08             	mov    %eax,0x8(%ebp)
c1006963:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006966:	8d 48 01             	lea    0x1(%eax),%ecx
c1006969:	89 4d 0c             	mov    %ecx,0xc(%ebp)
c100696c:	0f b6 12             	movzbl (%edx),%edx
c100696f:	88 10                	mov    %dl,(%eax)
c1006971:	8b 45 08             	mov    0x8(%ebp),%eax
c1006974:	0f b6 00             	movzbl (%eax),%eax
c1006977:	3c 2f                	cmp    $0x2f,%al
c1006979:	74 0a                	je     c1006985 <path_parse+0x48>
c100697b:	8b 45 08             	mov    0x8(%ebp),%eax
c100697e:	0f b6 00             	movzbl (%eax),%eax
c1006981:	84 c0                	test   %al,%al
c1006983:	75 d5                	jne    c100695a <path_parse+0x1d>
c1006985:	8b 45 08             	mov    0x8(%ebp),%eax
c1006988:	0f b6 00             	movzbl (%eax),%eax
c100698b:	84 c0                	test   %al,%al
c100698d:	75 07                	jne    c1006996 <path_parse+0x59>
c100698f:	b8 00 00 00 00       	mov    $0x0,%eax
c1006994:	eb 03                	jmp    c1006999 <path_parse+0x5c>
c1006996:	8b 45 08             	mov    0x8(%ebp),%eax
c1006999:	5d                   	pop    %ebp
c100699a:	c3                   	ret    

c100699b <path_depth_cnt>:
c100699b:	55                   	push   %ebp
c100699c:	89 e5                	mov    %esp,%ebp
c100699e:	83 ec 28             	sub    $0x28,%esp
c10069a1:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10069a5:	75 19                	jne    c10069c0 <path_depth_cnt+0x25>
c10069a7:	68 05 ba 00 c1       	push   $0xc100ba05
c10069ac:	68 3c c0 00 c1       	push   $0xc100c03c
c10069b1:	68 d4 00 00 00       	push   $0xd4
c10069b6:	68 18 ba 00 c1       	push   $0xc100ba18
c10069bb:	e8 ab 99 ff ff       	call   c100036b <__PANIC>
c10069c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10069c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10069c6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10069cd:	83 ec 08             	sub    $0x8,%esp
c10069d0:	8d 45 e0             	lea    -0x20(%ebp),%eax
c10069d3:	50                   	push   %eax
c10069d4:	ff 75 f4             	pushl  -0xc(%ebp)
c10069d7:	e8 61 ff ff ff       	call   c100693d <path_parse>
c10069dc:	83 c4 10             	add    $0x10,%esp
c10069df:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10069e2:	eb 32                	jmp    c1006a16 <path_depth_cnt+0x7b>
c10069e4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10069e8:	83 ec 04             	sub    $0x4,%esp
c10069eb:	6a 10                	push   $0x10
c10069ed:	6a 00                	push   $0x0
c10069ef:	8d 45 e0             	lea    -0x20(%ebp),%eax
c10069f2:	50                   	push   %eax
c10069f3:	e8 b2 96 ff ff       	call   c10000aa <memset>
c10069f8:	83 c4 10             	add    $0x10,%esp
c10069fb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10069ff:	74 15                	je     c1006a16 <path_depth_cnt+0x7b>
c1006a01:	83 ec 08             	sub    $0x8,%esp
c1006a04:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1006a07:	50                   	push   %eax
c1006a08:	ff 75 f4             	pushl  -0xc(%ebp)
c1006a0b:	e8 2d ff ff ff       	call   c100693d <path_parse>
c1006a10:	83 c4 10             	add    $0x10,%esp
c1006a13:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006a16:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1006a1a:	84 c0                	test   %al,%al
c1006a1c:	75 c6                	jne    c10069e4 <path_depth_cnt+0x49>
c1006a1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006a21:	c9                   	leave  
c1006a22:	c3                   	ret    

c1006a23 <search_file>:
c1006a23:	55                   	push   %ebp
c1006a24:	89 e5                	mov    %esp,%ebp
c1006a26:	57                   	push   %edi
c1006a27:	53                   	push   %ebx
c1006a28:	83 ec 40             	sub    $0x40,%esp
c1006a2b:	83 ec 08             	sub    $0x8,%esp
c1006a2e:	68 47 ba 00 c1       	push   $0xc100ba47
c1006a33:	ff 75 08             	pushl  0x8(%ebp)
c1006a36:	e8 48 97 ff ff       	call   c1000183 <strcmp>
c1006a3b:	83 c4 10             	add    $0x10,%esp
c1006a3e:	85 c0                	test   %eax,%eax
c1006a40:	74 2e                	je     c1006a70 <search_file+0x4d>
c1006a42:	83 ec 08             	sub    $0x8,%esp
c1006a45:	68 49 ba 00 c1       	push   $0xc100ba49
c1006a4a:	ff 75 08             	pushl  0x8(%ebp)
c1006a4d:	e8 31 97 ff ff       	call   c1000183 <strcmp>
c1006a52:	83 c4 10             	add    $0x10,%esp
c1006a55:	85 c0                	test   %eax,%eax
c1006a57:	74 17                	je     c1006a70 <search_file+0x4d>
c1006a59:	83 ec 08             	sub    $0x8,%esp
c1006a5c:	68 4c ba 00 c1       	push   $0xc100ba4c
c1006a61:	ff 75 08             	pushl  0x8(%ebp)
c1006a64:	e8 1a 97 ff ff       	call   c1000183 <strcmp>
c1006a69:	83 c4 10             	add    $0x10,%esp
c1006a6c:	85 c0                	test   %eax,%eax
c1006a6e:	75 2c                	jne    c1006a9c <search_file+0x79>
c1006a70:	8b 15 34 42 a1 c1    	mov    0xc1a14234,%edx
c1006a76:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006a79:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006a7f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006a82:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1006a89:	00 00 00 
c1006a8c:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006a8f:	c6 00 00             	movb   $0x0,(%eax)
c1006a92:	b8 00 00 00 00       	mov    $0x0,%eax
c1006a97:	e9 10 02 00 00       	jmp    c1006cac <search_file+0x289>
c1006a9c:	83 ec 0c             	sub    $0xc,%esp
c1006a9f:	ff 75 08             	pushl  0x8(%ebp)
c1006aa2:	e8 77 96 ff ff       	call   c100011e <strlen>
c1006aa7:	83 c4 10             	add    $0x10,%esp
c1006aaa:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006aad:	8b 45 08             	mov    0x8(%ebp),%eax
c1006ab0:	0f b6 00             	movzbl (%eax),%eax
c1006ab3:	3c 2f                	cmp    $0x2f,%al
c1006ab5:	75 0f                	jne    c1006ac6 <search_file+0xa3>
c1006ab7:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1006abb:	76 09                	jbe    c1006ac6 <search_file+0xa3>
c1006abd:	81 7d e8 ff 01 00 00 	cmpl   $0x1ff,-0x18(%ebp)
c1006ac4:	76 19                	jbe    c1006adf <search_file+0xbc>
c1006ac6:	68 50 ba 00 c1       	push   $0xc100ba50
c1006acb:	68 4c c0 00 c1       	push   $0xc100c04c
c1006ad0:	68 f1 00 00 00       	push   $0xf1
c1006ad5:	68 18 ba 00 c1       	push   $0xc100ba18
c1006ada:	e8 8c 98 ff ff       	call   c100036b <__PANIC>
c1006adf:	8b 45 08             	mov    0x8(%ebp),%eax
c1006ae2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006ae5:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c1006aea:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006aed:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
c1006af4:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
c1006afb:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
c1006b02:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
c1006b09:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b0c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006b0f:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006b15:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b18:	c7 80 04 02 00 00 00 	movl   $0x0,0x204(%eax)
c1006b1f:	00 00 00 
c1006b22:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1006b29:	83 ec 08             	sub    $0x8,%esp
c1006b2c:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006b2f:	50                   	push   %eax
c1006b30:	ff 75 f4             	pushl  -0xc(%ebp)
c1006b33:	e8 05 fe ff ff       	call   c100693d <path_parse>
c1006b38:	83 c4 10             	add    $0x10,%esp
c1006b3b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006b3e:	e9 1b 01 00 00       	jmp    c1006c5e <search_file+0x23b>
c1006b43:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b46:	83 ec 0c             	sub    $0xc,%esp
c1006b49:	50                   	push   %eax
c1006b4a:	e8 cf 95 ff ff       	call   c100011e <strlen>
c1006b4f:	83 c4 10             	add    $0x10,%esp
c1006b52:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1006b57:	76 19                	jbe    c1006b72 <search_file+0x14f>
c1006b59:	68 90 ba 00 c1       	push   $0xc100ba90
c1006b5e:	68 4c c0 00 c1       	push   $0xc100c04c
c1006b63:	68 02 01 00 00       	push   $0x102
c1006b68:	68 18 ba 00 c1       	push   $0xc100ba18
c1006b6d:	e8 f9 97 ff ff       	call   c100036b <__PANIC>
c1006b72:	8b 55 0c             	mov    0xc(%ebp),%edx
c1006b75:	89 d0                	mov    %edx,%eax
c1006b77:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1006b7c:	89 c3                	mov    %eax,%ebx
c1006b7e:	b8 00 00 00 00       	mov    $0x0,%eax
c1006b83:	89 df                	mov    %ebx,%edi
c1006b85:	f2 ae                	repnz scas %es:(%edi),%al
c1006b87:	89 c8                	mov    %ecx,%eax
c1006b89:	f7 d0                	not    %eax
c1006b8b:	83 e8 01             	sub    $0x1,%eax
c1006b8e:	01 d0                	add    %edx,%eax
c1006b90:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1006b95:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b98:	83 ec 08             	sub    $0x8,%esp
c1006b9b:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1006b9e:	52                   	push   %edx
c1006b9f:	50                   	push   %eax
c1006ba0:	e8 30 96 ff ff       	call   c10001d5 <strcat>
c1006ba5:	83 c4 10             	add    $0x10,%esp
c1006ba8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006bad:	8d 55 d0             	lea    -0x30(%ebp),%edx
c1006bb0:	52                   	push   %edx
c1006bb1:	8d 55 c0             	lea    -0x40(%ebp),%edx
c1006bb4:	52                   	push   %edx
c1006bb5:	ff 75 f0             	pushl  -0x10(%ebp)
c1006bb8:	50                   	push   %eax
c1006bb9:	e8 cd 17 00 00       	call   c100838b <search_dir_entry>
c1006bbe:	83 c4 10             	add    $0x10,%esp
c1006bc1:	84 c0                	test   %al,%al
c1006bc3:	0f 84 8e 00 00 00    	je     c1006c57 <search_file+0x234>
c1006bc9:	83 ec 04             	sub    $0x4,%esp
c1006bcc:	6a 10                	push   $0x10
c1006bce:	6a 00                	push   $0x0
c1006bd0:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006bd3:	50                   	push   %eax
c1006bd4:	e8 d1 94 ff ff       	call   c10000aa <memset>
c1006bd9:	83 c4 10             	add    $0x10,%esp
c1006bdc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006be0:	74 15                	je     c1006bf7 <search_file+0x1d4>
c1006be2:	83 ec 08             	sub    $0x8,%esp
c1006be5:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006be8:	50                   	push   %eax
c1006be9:	ff 75 f4             	pushl  -0xc(%ebp)
c1006bec:	e8 4c fd ff ff       	call   c100693d <path_parse>
c1006bf1:	83 c4 10             	add    $0x10,%esp
c1006bf4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006bf7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006bfa:	83 f8 02             	cmp    $0x2,%eax
c1006bfd:	75 3e                	jne    c1006c3d <search_file+0x21a>
c1006bff:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006c02:	8b 00                	mov    (%eax),%eax
c1006c04:	8b 00                	mov    (%eax),%eax
c1006c06:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006c09:	83 ec 0c             	sub    $0xc,%esp
c1006c0c:	ff 75 f0             	pushl  -0x10(%ebp)
c1006c0f:	e8 63 19 00 00       	call   c1008577 <dir_close>
c1006c14:	83 c4 10             	add    $0x10,%esp
c1006c17:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1006c1a:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006c1f:	83 ec 08             	sub    $0x8,%esp
c1006c22:	52                   	push   %edx
c1006c23:	50                   	push   %eax
c1006c24:	e8 22 17 00 00       	call   c100834b <dir_open>
c1006c29:	83 c4 10             	add    $0x10,%esp
c1006c2c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006c2f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c32:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006c35:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006c3b:	eb 21                	jmp    c1006c5e <search_file+0x23b>
c1006c3d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006c40:	83 f8 01             	cmp    $0x1,%eax
c1006c43:	75 19                	jne    c1006c5e <search_file+0x23b>
c1006c45:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c48:	c7 80 04 02 00 00 01 	movl   $0x1,0x204(%eax)
c1006c4f:	00 00 00 
c1006c52:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006c55:	eb 55                	jmp    c1006cac <search_file+0x289>
c1006c57:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006c5c:	eb 4e                	jmp    c1006cac <search_file+0x289>
c1006c5e:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
c1006c62:	84 c0                	test   %al,%al
c1006c64:	0f 85 d9 fe ff ff    	jne    c1006b43 <search_file+0x120>
c1006c6a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c6d:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
c1006c73:	83 ec 0c             	sub    $0xc,%esp
c1006c76:	50                   	push   %eax
c1006c77:	e8 fb 18 00 00       	call   c1008577 <dir_close>
c1006c7c:	83 c4 10             	add    $0x10,%esp
c1006c7f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1006c84:	83 ec 08             	sub    $0x8,%esp
c1006c87:	ff 75 ec             	pushl  -0x14(%ebp)
c1006c8a:	50                   	push   %eax
c1006c8b:	e8 bb 16 00 00       	call   c100834b <dir_open>
c1006c90:	83 c4 10             	add    $0x10,%esp
c1006c93:	8b 55 0c             	mov    0xc(%ebp),%edx
c1006c96:	89 82 00 02 00 00    	mov    %eax,0x200(%edx)
c1006c9c:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006c9f:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c1006ca6:	00 00 00 
c1006ca9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006cac:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1006caf:	5b                   	pop    %ebx
c1006cb0:	5f                   	pop    %edi
c1006cb1:	5d                   	pop    %ebp
c1006cb2:	c3                   	ret    

c1006cb3 <sys_open>:
c1006cb3:	55                   	push   %ebp
c1006cb4:	89 e5                	mov    %esp,%ebp
c1006cb6:	53                   	push   %ebx
c1006cb7:	81 ec 34 02 00 00    	sub    $0x234,%esp
c1006cbd:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006cc0:	88 85 d4 fd ff ff    	mov    %al,-0x22c(%ebp)
c1006cc6:	83 ec 0c             	sub    $0xc,%esp
c1006cc9:	ff 75 08             	pushl  0x8(%ebp)
c1006ccc:	e8 4d 94 ff ff       	call   c100011e <strlen>
c1006cd1:	83 c4 10             	add    $0x10,%esp
c1006cd4:	8d 50 ff             	lea    -0x1(%eax),%edx
c1006cd7:	8b 45 08             	mov    0x8(%ebp),%eax
c1006cda:	01 d0                	add    %edx,%eax
c1006cdc:	0f b6 00             	movzbl (%eax),%eax
c1006cdf:	3c 2f                	cmp    $0x2f,%al
c1006ce1:	75 1d                	jne    c1006d00 <sys_open+0x4d>
c1006ce3:	83 ec 08             	sub    $0x8,%esp
c1006ce6:	ff 75 08             	pushl  0x8(%ebp)
c1006ce9:	68 bd ba 00 c1       	push   $0xc100babd
c1006cee:	e8 be ea ff ff       	call   c10057b1 <printk>
c1006cf3:	83 c4 10             	add    $0x10,%esp
c1006cf6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006cfb:	e9 0a 02 00 00       	jmp    c1006f0a <sys_open+0x257>
c1006d00:	80 bd d4 fd ff ff 07 	cmpb   $0x7,-0x22c(%ebp)
c1006d07:	76 19                	jbe    c1006d22 <sys_open+0x6f>
c1006d09:	68 d8 ba 00 c1       	push   $0xc100bad8
c1006d0e:	68 58 c0 00 c1       	push   $0xc100c058
c1006d13:	68 30 01 00 00       	push   $0x130
c1006d18:	68 18 ba 00 c1       	push   $0xc100ba18
c1006d1d:	e8 49 96 ff ff       	call   c100036b <__PANIC>
c1006d22:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006d29:	83 ec 04             	sub    $0x4,%esp
c1006d2c:	68 08 02 00 00       	push   $0x208
c1006d31:	6a 00                	push   $0x0
c1006d33:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006d39:	50                   	push   %eax
c1006d3a:	e8 6b 93 ff ff       	call   c10000aa <memset>
c1006d3f:	83 c4 10             	add    $0x10,%esp
c1006d42:	83 ec 0c             	sub    $0xc,%esp
c1006d45:	ff 75 08             	pushl  0x8(%ebp)
c1006d48:	e8 4e fc ff ff       	call   c100699b <path_depth_cnt>
c1006d4d:	83 c4 10             	add    $0x10,%esp
c1006d50:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006d53:	83 ec 08             	sub    $0x8,%esp
c1006d56:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006d5c:	50                   	push   %eax
c1006d5d:	ff 75 08             	pushl  0x8(%ebp)
c1006d60:	e8 be fc ff ff       	call   c1006a23 <search_file>
c1006d65:	83 c4 10             	add    $0x10,%esp
c1006d68:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006d6b:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
c1006d6f:	0f 95 c0             	setne  %al
c1006d72:	88 45 eb             	mov    %al,-0x15(%ebp)
c1006d75:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006d78:	83 f8 02             	cmp    $0x2,%eax
c1006d7b:	75 29                	jne    c1006da6 <sys_open+0xf3>
c1006d7d:	83 ec 0c             	sub    $0xc,%esp
c1006d80:	68 e4 ba 00 c1       	push   $0xc100bae4
c1006d85:	e8 27 ea ff ff       	call   c10057b1 <printk>
c1006d8a:	83 c4 10             	add    $0x10,%esp
c1006d8d:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006d90:	83 ec 0c             	sub    $0xc,%esp
c1006d93:	50                   	push   %eax
c1006d94:	e8 de 17 00 00       	call   c1008577 <dir_close>
c1006d99:	83 c4 10             	add    $0x10,%esp
c1006d9c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006da1:	e9 64 01 00 00       	jmp    c1006f0a <sys_open+0x257>
c1006da6:	83 ec 0c             	sub    $0xc,%esp
c1006da9:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006daf:	50                   	push   %eax
c1006db0:	e8 e6 fb ff ff       	call   c100699b <path_depth_cnt>
c1006db5:	83 c4 10             	add    $0x10,%esp
c1006db8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006dbb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006dbe:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1006dc1:	74 33                	je     c1006df6 <sys_open+0x143>
c1006dc3:	83 ec 04             	sub    $0x4,%esp
c1006dc6:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006dcc:	50                   	push   %eax
c1006dcd:	ff 75 08             	pushl  0x8(%ebp)
c1006dd0:	68 24 bb 00 c1       	push   $0xc100bb24
c1006dd5:	e8 d7 e9 ff ff       	call   c10057b1 <printk>
c1006dda:	83 c4 10             	add    $0x10,%esp
c1006ddd:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006de0:	83 ec 0c             	sub    $0xc,%esp
c1006de3:	50                   	push   %eax
c1006de4:	e8 8e 17 00 00       	call   c1008577 <dir_close>
c1006de9:	83 c4 10             	add    $0x10,%esp
c1006dec:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006df1:	e9 14 01 00 00       	jmp    c1006f0a <sys_open+0x257>
c1006df6:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006dfa:	75 56                	jne    c1006e52 <sys_open+0x19f>
c1006dfc:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006e03:	83 e0 04             	and    $0x4,%eax
c1006e06:	85 c0                	test   %eax,%eax
c1006e08:	75 48                	jne    c1006e52 <sys_open+0x19f>
c1006e0a:	83 ec 08             	sub    $0x8,%esp
c1006e0d:	6a 2f                	push   $0x2f
c1006e0f:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006e15:	50                   	push   %eax
c1006e16:	e8 7b 93 ff ff       	call   c1000196 <strrchr>
c1006e1b:	83 c4 10             	add    $0x10,%esp
c1006e1e:	83 c0 01             	add    $0x1,%eax
c1006e21:	83 ec 04             	sub    $0x4,%esp
c1006e24:	50                   	push   %eax
c1006e25:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006e2b:	50                   	push   %eax
c1006e2c:	68 60 bb 00 c1       	push   $0xc100bb60
c1006e31:	e8 7b e9 ff ff       	call   c10057b1 <printk>
c1006e36:	83 c4 10             	add    $0x10,%esp
c1006e39:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006e3c:	83 ec 0c             	sub    $0xc,%esp
c1006e3f:	50                   	push   %eax
c1006e40:	e8 32 17 00 00       	call   c1008577 <dir_close>
c1006e45:	83 c4 10             	add    $0x10,%esp
c1006e48:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006e4d:	e9 b8 00 00 00       	jmp    c1006f0a <sys_open+0x257>
c1006e52:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006e56:	74 37                	je     c1006e8f <sys_open+0x1dc>
c1006e58:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006e5f:	83 e0 04             	and    $0x4,%eax
c1006e62:	85 c0                	test   %eax,%eax
c1006e64:	74 29                	je     c1006e8f <sys_open+0x1dc>
c1006e66:	83 ec 08             	sub    $0x8,%esp
c1006e69:	ff 75 08             	pushl  0x8(%ebp)
c1006e6c:	68 80 bb 00 c1       	push   $0xc100bb80
c1006e71:	e8 3b e9 ff ff       	call   c10057b1 <printk>
c1006e76:	83 c4 10             	add    $0x10,%esp
c1006e79:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006e7c:	83 ec 0c             	sub    $0xc,%esp
c1006e7f:	50                   	push   %eax
c1006e80:	e8 f2 16 00 00       	call   c1008577 <dir_close>
c1006e85:	83 c4 10             	add    $0x10,%esp
c1006e88:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006e8d:	eb 7b                	jmp    c1006f0a <sys_open+0x257>
c1006e8f:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006e96:	83 e0 04             	and    $0x4,%eax
c1006e99:	83 f8 04             	cmp    $0x4,%eax
c1006e9c:	75 4f                	jne    c1006eed <sys_open+0x23a>
c1006e9e:	83 ec 0c             	sub    $0xc,%esp
c1006ea1:	68 97 bb 00 c1       	push   $0xc100bb97
c1006ea6:	e8 06 e9 ff ff       	call   c10057b1 <printk>
c1006eab:	83 c4 10             	add    $0x10,%esp
c1006eae:	0f b6 9d d4 fd ff ff 	movzbl -0x22c(%ebp),%ebx
c1006eb5:	83 ec 08             	sub    $0x8,%esp
c1006eb8:	6a 2f                	push   $0x2f
c1006eba:	ff 75 08             	pushl  0x8(%ebp)
c1006ebd:	e8 d4 92 ff ff       	call   c1000196 <strrchr>
c1006ec2:	83 c4 10             	add    $0x10,%esp
c1006ec5:	8d 50 01             	lea    0x1(%eax),%edx
c1006ec8:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006ecb:	83 ec 04             	sub    $0x4,%esp
c1006ece:	53                   	push   %ebx
c1006ecf:	52                   	push   %edx
c1006ed0:	50                   	push   %eax
c1006ed1:	e8 ab 25 00 00       	call   c1009481 <file_create>
c1006ed6:	83 c4 10             	add    $0x10,%esp
c1006ed9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006edc:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006edf:	83 ec 0c             	sub    $0xc,%esp
c1006ee2:	50                   	push   %eax
c1006ee3:	e8 8f 16 00 00       	call   c1008577 <dir_close>
c1006ee8:	83 c4 10             	add    $0x10,%esp
c1006eeb:	eb 1a                	jmp    c1006f07 <sys_open+0x254>
c1006eed:	0f b6 95 d4 fd ff ff 	movzbl -0x22c(%ebp),%edx
c1006ef4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006ef7:	83 ec 08             	sub    $0x8,%esp
c1006efa:	52                   	push   %edx
c1006efb:	50                   	push   %eax
c1006efc:	e8 62 28 00 00       	call   c1009763 <file_open>
c1006f01:	83 c4 10             	add    $0x10,%esp
c1006f04:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006f07:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006f0a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1006f0d:	c9                   	leave  
c1006f0e:	c3                   	ret    

c1006f0f <fd_local2global>:
c1006f0f:	55                   	push   %ebp
c1006f10:	89 e5                	mov    %esp,%ebp
c1006f12:	83 ec 18             	sub    $0x18,%esp
c1006f15:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1006f1a:	8b 55 08             	mov    0x8(%ebp),%edx
c1006f1d:	83 c2 1c             	add    $0x1c,%edx
c1006f20:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c1006f24:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006f27:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006f2b:	78 06                	js     c1006f33 <fd_local2global+0x24>
c1006f2d:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006f31:	7e 19                	jle    c1006f4c <fd_local2global+0x3d>
c1006f33:	68 a8 bb 00 c1       	push   $0xc100bba8
c1006f38:	68 64 c0 00 c1       	push   $0xc100c064
c1006f3d:	68 6f 01 00 00       	push   $0x16f
c1006f42:	68 18 ba 00 c1       	push   $0xc100ba18
c1006f47:	e8 1f 94 ff ff       	call   c100036b <__PANIC>
c1006f4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006f4f:	c9                   	leave  
c1006f50:	c3                   	ret    

c1006f51 <sys_close>:
c1006f51:	55                   	push   %ebp
c1006f52:	89 e5                	mov    %esp,%ebp
c1006f54:	83 ec 18             	sub    $0x18,%esp
c1006f57:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006f5e:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c1006f62:	0f 8e e0 00 00 00    	jle    c1007048 <sys_close+0xf7>
c1006f68:	8b 45 08             	mov    0x8(%ebp),%eax
c1006f6b:	83 ec 0c             	sub    $0xc,%esp
c1006f6e:	50                   	push   %eax
c1006f6f:	e8 9b ff ff ff       	call   c1006f0f <fd_local2global>
c1006f74:	83 c4 10             	add    $0x10,%esp
c1006f77:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006f7a:	8b 45 08             	mov    0x8(%ebp),%eax
c1006f7d:	83 ec 0c             	sub    $0xc,%esp
c1006f80:	50                   	push   %eax
c1006f81:	e8 dc 3a 00 00       	call   c100aa62 <is_pipe>
c1006f86:	83 c4 10             	add    $0x10,%esp
c1006f89:	84 c0                	test   %al,%al
c1006f8b:	0f 84 84 00 00 00    	je     c1007015 <sys_close+0xc4>
c1006f91:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006f94:	89 d0                	mov    %edx,%eax
c1006f96:	01 c0                	add    %eax,%eax
c1006f98:	01 d0                	add    %edx,%eax
c1006f9a:	c1 e0 02             	shl    $0x2,%eax
c1006f9d:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1006fa2:	8b 00                	mov    (%eax),%eax
c1006fa4:	8d 48 ff             	lea    -0x1(%eax),%ecx
c1006fa7:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006faa:	89 d0                	mov    %edx,%eax
c1006fac:	01 c0                	add    %eax,%eax
c1006fae:	01 d0                	add    %edx,%eax
c1006fb0:	c1 e0 02             	shl    $0x2,%eax
c1006fb3:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1006fb8:	89 08                	mov    %ecx,(%eax)
c1006fba:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006fbd:	89 d0                	mov    %edx,%eax
c1006fbf:	01 c0                	add    %eax,%eax
c1006fc1:	01 d0                	add    %edx,%eax
c1006fc3:	c1 e0 02             	shl    $0x2,%eax
c1006fc6:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1006fcb:	8b 00                	mov    (%eax),%eax
c1006fcd:	85 c0                	test   %eax,%eax
c1006fcf:	75 3b                	jne    c100700c <sys_close+0xbb>
c1006fd1:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006fd4:	89 d0                	mov    %edx,%eax
c1006fd6:	01 c0                	add    %eax,%eax
c1006fd8:	01 d0                	add    %edx,%eax
c1006fda:	c1 e0 02             	shl    $0x2,%eax
c1006fdd:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1006fe2:	8b 00                	mov    (%eax),%eax
c1006fe4:	83 ec 08             	sub    $0x8,%esp
c1006fe7:	68 00 10 00 00       	push   $0x1000
c1006fec:	50                   	push   %eax
c1006fed:	e8 e6 bd ff ff       	call   c1002dd8 <vmm_free>
c1006ff2:	83 c4 10             	add    $0x10,%esp
c1006ff5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006ff8:	89 d0                	mov    %edx,%eax
c1006ffa:	01 c0                	add    %eax,%eax
c1006ffc:	01 d0                	add    %edx,%eax
c1006ffe:	c1 e0 02             	shl    $0x2,%eax
c1007001:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1007006:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100700c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007013:	eb 20                	jmp    c1007035 <sys_close+0xe4>
c1007015:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007018:	89 d0                	mov    %edx,%eax
c100701a:	01 c0                	add    %eax,%eax
c100701c:	01 d0                	add    %edx,%eax
c100701e:	c1 e0 02             	shl    $0x2,%eax
c1007021:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1007026:	83 ec 0c             	sub    $0xc,%esp
c1007029:	50                   	push   %eax
c100702a:	e8 4b 28 00 00       	call   c100987a <file_close>
c100702f:	83 c4 10             	add    $0x10,%esp
c1007032:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007035:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100703a:	8b 55 08             	mov    0x8(%ebp),%edx
c100703d:	83 c2 1c             	add    $0x1c,%edx
c1007040:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
c1007047:	ff 
c1007048:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100704b:	c9                   	leave  
c100704c:	c3                   	ret    

c100704d <sys_write>:
c100704d:	55                   	push   %ebp
c100704e:	89 e5                	mov    %esp,%ebp
c1007050:	57                   	push   %edi
c1007051:	81 ec 14 04 00 00    	sub    $0x414,%esp
c1007057:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100705b:	79 1a                	jns    c1007077 <sys_write+0x2a>
c100705d:	83 ec 0c             	sub    $0xc,%esp
c1007060:	68 d4 bb 00 c1       	push   $0xc100bbd4
c1007065:	e8 47 e7 ff ff       	call   c10057b1 <printk>
c100706a:	83 c4 10             	add    $0x10,%esp
c100706d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007072:	e9 30 01 00 00       	jmp    c10071a7 <sys_write+0x15a>
c1007077:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c100707b:	0f 85 8c 00 00 00    	jne    c100710d <sys_write+0xc0>
c1007081:	8b 45 08             	mov    0x8(%ebp),%eax
c1007084:	83 ec 0c             	sub    $0xc,%esp
c1007087:	50                   	push   %eax
c1007088:	e8 d5 39 00 00       	call   c100aa62 <is_pipe>
c100708d:	83 c4 10             	add    $0x10,%esp
c1007090:	84 c0                	test   %al,%al
c1007092:	74 19                	je     c10070ad <sys_write+0x60>
c1007094:	83 ec 04             	sub    $0x4,%esp
c1007097:	ff 75 10             	pushl  0x10(%ebp)
c100709a:	ff 75 0c             	pushl  0xc(%ebp)
c100709d:	ff 75 08             	pushl  0x8(%ebp)
c10070a0:	e8 48 3b 00 00       	call   c100abed <pipe_write>
c10070a5:	83 c4 10             	add    $0x10,%esp
c10070a8:	e9 fa 00 00 00       	jmp    c10071a7 <sys_write+0x15a>
c10070ad:	c7 85 ec fb ff ff 00 	movl   $0x0,-0x414(%ebp)
c10070b4:	00 00 00 
c10070b7:	8d 95 f0 fb ff ff    	lea    -0x410(%ebp),%edx
c10070bd:	b8 00 00 00 00       	mov    $0x0,%eax
c10070c2:	b9 ff 00 00 00       	mov    $0xff,%ecx
c10070c7:	89 d7                	mov    %edx,%edi
c10070c9:	f3 ab                	rep stos %eax,%es:(%edi)
c10070cb:	83 ec 04             	sub    $0x4,%esp
c10070ce:	ff 75 10             	pushl  0x10(%ebp)
c10070d1:	ff 75 0c             	pushl  0xc(%ebp)
c10070d4:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c10070da:	50                   	push   %eax
c10070db:	e8 28 90 ff ff       	call   c1000108 <memcpy>
c10070e0:	83 c4 10             	add    $0x10,%esp
c10070e3:	83 ec 0c             	sub    $0xc,%esp
c10070e6:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c10070ec:	50                   	push   %eax
c10070ed:	e8 bf e6 ff ff       	call   c10057b1 <printk>
c10070f2:	83 c4 10             	add    $0x10,%esp
c10070f5:	83 ec 0c             	sub    $0xc,%esp
c10070f8:	68 e9 bb 00 c1       	push   $0xc100bbe9
c10070fd:	e8 af e6 ff ff       	call   c10057b1 <printk>
c1007102:	83 c4 10             	add    $0x10,%esp
c1007105:	8b 45 10             	mov    0x10(%ebp),%eax
c1007108:	e9 9a 00 00 00       	jmp    c10071a7 <sys_write+0x15a>
c100710d:	8b 45 08             	mov    0x8(%ebp),%eax
c1007110:	83 ec 0c             	sub    $0xc,%esp
c1007113:	50                   	push   %eax
c1007114:	e8 49 39 00 00       	call   c100aa62 <is_pipe>
c1007119:	83 c4 10             	add    $0x10,%esp
c100711c:	84 c0                	test   %al,%al
c100711e:	74 16                	je     c1007136 <sys_write+0xe9>
c1007120:	83 ec 04             	sub    $0x4,%esp
c1007123:	ff 75 10             	pushl  0x10(%ebp)
c1007126:	ff 75 0c             	pushl  0xc(%ebp)
c1007129:	ff 75 08             	pushl  0x8(%ebp)
c100712c:	e8 bc 3a 00 00       	call   c100abed <pipe_write>
c1007131:	83 c4 10             	add    $0x10,%esp
c1007134:	eb 71                	jmp    c10071a7 <sys_write+0x15a>
c1007136:	8b 45 08             	mov    0x8(%ebp),%eax
c1007139:	83 ec 0c             	sub    $0xc,%esp
c100713c:	50                   	push   %eax
c100713d:	e8 cd fd ff ff       	call   c1006f0f <fd_local2global>
c1007142:	83 c4 10             	add    $0x10,%esp
c1007145:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007148:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100714b:	89 d0                	mov    %edx,%eax
c100714d:	01 c0                	add    %eax,%eax
c100714f:	01 d0                	add    %edx,%eax
c1007151:	c1 e0 02             	shl    $0x2,%eax
c1007154:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1007159:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100715c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100715f:	8b 40 04             	mov    0x4(%eax),%eax
c1007162:	83 e0 01             	and    $0x1,%eax
c1007165:	85 c0                	test   %eax,%eax
c1007167:	75 0d                	jne    c1007176 <sys_write+0x129>
c1007169:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100716c:	8b 40 04             	mov    0x4(%eax),%eax
c100716f:	83 e0 02             	and    $0x2,%eax
c1007172:	85 c0                	test   %eax,%eax
c1007174:	74 1c                	je     c1007192 <sys_write+0x145>
c1007176:	83 ec 04             	sub    $0x4,%esp
c1007179:	ff 75 10             	pushl  0x10(%ebp)
c100717c:	ff 75 0c             	pushl  0xc(%ebp)
c100717f:	ff 75 f0             	pushl  -0x10(%ebp)
c1007182:	e8 33 27 00 00       	call   c10098ba <file_write>
c1007187:	83 c4 10             	add    $0x10,%esp
c100718a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100718d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007190:	eb 15                	jmp    c10071a7 <sys_write+0x15a>
c1007192:	83 ec 0c             	sub    $0xc,%esp
c1007195:	68 ec bb 00 c1       	push   $0xc100bbec
c100719a:	e8 12 e6 ff ff       	call   c10057b1 <printk>
c100719f:	83 c4 10             	add    $0x10,%esp
c10071a2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10071a7:	8b 7d fc             	mov    -0x4(%ebp),%edi
c10071aa:	c9                   	leave  
c10071ab:	c3                   	ret    

c10071ac <sys_read>:
c10071ac:	55                   	push   %ebp
c10071ad:	89 e5                	mov    %esp,%ebp
c10071af:	83 ec 18             	sub    $0x18,%esp
c10071b2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
c10071b6:	75 19                	jne    c10071d1 <sys_read+0x25>
c10071b8:	68 32 bc 00 c1       	push   $0xc100bc32
c10071bd:	68 74 c0 00 c1       	push   $0xc100c074
c10071c2:	68 a7 01 00 00       	push   $0x1a7
c10071c7:	68 18 ba 00 c1       	push   $0xc100ba18
c10071cc:	e8 9a 91 ff ff       	call   c100036b <__PANIC>
c10071d1:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10071d8:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10071dc:	78 0c                	js     c10071ea <sys_read+0x3e>
c10071de:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c10071e2:	74 06                	je     c10071ea <sys_read+0x3e>
c10071e4:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c10071e8:	75 15                	jne    c10071ff <sys_read+0x53>
c10071ea:	83 ec 0c             	sub    $0xc,%esp
c10071ed:	68 3e bc 00 c1       	push   $0xc100bc3e
c10071f2:	e8 ba e5 ff ff       	call   c10057b1 <printk>
c10071f7:	83 c4 10             	add    $0x10,%esp
c10071fa:	e9 ff 00 00 00       	jmp    c10072fe <sys_read+0x152>
c10071ff:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007203:	0f 85 91 00 00 00    	jne    c100729a <sys_read+0xee>
c1007209:	8b 45 08             	mov    0x8(%ebp),%eax
c100720c:	83 ec 0c             	sub    $0xc,%esp
c100720f:	50                   	push   %eax
c1007210:	e8 4d 38 00 00       	call   c100aa62 <is_pipe>
c1007215:	83 c4 10             	add    $0x10,%esp
c1007218:	84 c0                	test   %al,%al
c100721a:	74 1c                	je     c1007238 <sys_read+0x8c>
c100721c:	83 ec 04             	sub    $0x4,%esp
c100721f:	ff 75 10             	pushl  0x10(%ebp)
c1007222:	ff 75 0c             	pushl  0xc(%ebp)
c1007225:	ff 75 08             	pushl  0x8(%ebp)
c1007228:	e8 3d 39 00 00       	call   c100ab6a <pipe_read>
c100722d:	83 c4 10             	add    $0x10,%esp
c1007230:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007233:	e9 c6 00 00 00       	jmp    c10072fe <sys_read+0x152>
c1007238:	8b 45 0c             	mov    0xc(%ebp),%eax
c100723b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100723e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007245:	0f b6 05 6c fc 00 c1 	movzbl 0xc100fc6c,%eax
c100724c:	84 c0                	test   %al,%al
c100724e:	75 2d                	jne    c100727d <sys_read+0xd1>
c1007250:	83 ec 0c             	sub    $0xc,%esp
c1007253:	68 b4 1c 01 c1       	push   $0xc1011cb4
c1007258:	e8 08 ea ff ff       	call   c1005c65 <sema_down>
c100725d:	83 c4 10             	add    $0x10,%esp
c1007260:	eb 1b                	jmp    c100727d <sys_read+0xd1>
c1007262:	0f b6 15 6c fc 00 c1 	movzbl 0xc100fc6c,%edx
c1007269:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100726c:	88 10                	mov    %dl,(%eax)
c100726e:	c6 05 6c fc 00 c1 00 	movb   $0x0,0xc100fc6c
c1007275:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1007279:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100727d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007280:	3b 45 10             	cmp    0x10(%ebp),%eax
c1007283:	72 dd                	jb     c1007262 <sys_read+0xb6>
c1007285:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1007289:	74 05                	je     c1007290 <sys_read+0xe4>
c100728b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100728e:	eb 05                	jmp    c1007295 <sys_read+0xe9>
c1007290:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007295:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007298:	eb 64                	jmp    c10072fe <sys_read+0x152>
c100729a:	8b 45 08             	mov    0x8(%ebp),%eax
c100729d:	83 ec 0c             	sub    $0xc,%esp
c10072a0:	50                   	push   %eax
c10072a1:	e8 bc 37 00 00       	call   c100aa62 <is_pipe>
c10072a6:	83 c4 10             	add    $0x10,%esp
c10072a9:	84 c0                	test   %al,%al
c10072ab:	74 19                	je     c10072c6 <sys_read+0x11a>
c10072ad:	83 ec 04             	sub    $0x4,%esp
c10072b0:	ff 75 10             	pushl  0x10(%ebp)
c10072b3:	ff 75 0c             	pushl  0xc(%ebp)
c10072b6:	ff 75 08             	pushl  0x8(%ebp)
c10072b9:	e8 ac 38 00 00       	call   c100ab6a <pipe_read>
c10072be:	83 c4 10             	add    $0x10,%esp
c10072c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10072c4:	eb 38                	jmp    c10072fe <sys_read+0x152>
c10072c6:	8b 45 08             	mov    0x8(%ebp),%eax
c10072c9:	83 ec 0c             	sub    $0xc,%esp
c10072cc:	50                   	push   %eax
c10072cd:	e8 3d fc ff ff       	call   c1006f0f <fd_local2global>
c10072d2:	83 c4 10             	add    $0x10,%esp
c10072d5:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10072d8:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10072db:	89 d0                	mov    %edx,%eax
c10072dd:	01 c0                	add    %eax,%eax
c10072df:	01 d0                	add    %edx,%eax
c10072e1:	c1 e0 02             	shl    $0x2,%eax
c10072e4:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10072e9:	83 ec 04             	sub    $0x4,%esp
c10072ec:	ff 75 10             	pushl  0x10(%ebp)
c10072ef:	ff 75 0c             	pushl  0xc(%ebp)
c10072f2:	50                   	push   %eax
c10072f3:	e8 24 2d 00 00       	call   c100a01c <file_read>
c10072f8:	83 c4 10             	add    $0x10,%esp
c10072fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10072fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007301:	c9                   	leave  
c1007302:	c3                   	ret    

c1007303 <sys_lseek>:
c1007303:	55                   	push   %ebp
c1007304:	89 e5                	mov    %esp,%ebp
c1007306:	83 ec 28             	sub    $0x28,%esp
c1007309:	8b 45 10             	mov    0x10(%ebp),%eax
c100730c:	88 45 e4             	mov    %al,-0x1c(%ebp)
c100730f:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007313:	79 1a                	jns    c100732f <sys_lseek+0x2c>
c1007315:	83 ec 0c             	sub    $0xc,%esp
c1007318:	68 52 bc 00 c1       	push   $0xc100bc52
c100731d:	e8 8f e4 ff ff       	call   c10057b1 <printk>
c1007322:	83 c4 10             	add    $0x10,%esp
c1007325:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100732a:	e9 be 00 00 00       	jmp    c10073ed <sys_lseek+0xea>
c100732f:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
c1007333:	74 06                	je     c100733b <sys_lseek+0x38>
c1007335:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
c1007339:	76 19                	jbe    c1007354 <sys_lseek+0x51>
c100733b:	68 67 bc 00 c1       	push   $0xc100bc67
c1007340:	68 80 c0 00 c1       	push   $0xc100c080
c1007345:	68 ce 01 00 00       	push   $0x1ce
c100734a:	68 18 ba 00 c1       	push   $0xc100ba18
c100734f:	e8 17 90 ff ff       	call   c100036b <__PANIC>
c1007354:	8b 45 08             	mov    0x8(%ebp),%eax
c1007357:	83 ec 0c             	sub    $0xc,%esp
c100735a:	50                   	push   %eax
c100735b:	e8 af fb ff ff       	call   c1006f0f <fd_local2global>
c1007360:	83 c4 10             	add    $0x10,%esp
c1007363:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007366:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007369:	89 d0                	mov    %edx,%eax
c100736b:	01 c0                	add    %eax,%eax
c100736d:	01 d0                	add    %edx,%eax
c100736f:	c1 e0 02             	shl    $0x2,%eax
c1007372:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c1007377:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100737a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007381:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007384:	8b 40 08             	mov    0x8(%eax),%eax
c1007387:	8b 40 04             	mov    0x4(%eax),%eax
c100738a:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100738d:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1007391:	83 f8 03             	cmp    $0x3,%eax
c1007394:	74 2a                	je     c10073c0 <sys_lseek+0xbd>
c1007396:	83 f8 03             	cmp    $0x3,%eax
c1007399:	7f 30                	jg     c10073cb <sys_lseek+0xc8>
c100739b:	83 f8 01             	cmp    $0x1,%eax
c100739e:	74 07                	je     c10073a7 <sys_lseek+0xa4>
c10073a0:	83 f8 02             	cmp    $0x2,%eax
c10073a3:	74 0a                	je     c10073af <sys_lseek+0xac>
c10073a5:	eb 24                	jmp    c10073cb <sys_lseek+0xc8>
c10073a7:	8b 45 0c             	mov    0xc(%ebp),%eax
c10073aa:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10073ad:	eb 1c                	jmp    c10073cb <sys_lseek+0xc8>
c10073af:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10073b2:	8b 00                	mov    (%eax),%eax
c10073b4:	89 c2                	mov    %eax,%edx
c10073b6:	8b 45 0c             	mov    0xc(%ebp),%eax
c10073b9:	01 d0                	add    %edx,%eax
c10073bb:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10073be:	eb 0b                	jmp    c10073cb <sys_lseek+0xc8>
c10073c0:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10073c3:	8b 45 0c             	mov    0xc(%ebp),%eax
c10073c6:	01 d0                	add    %edx,%eax
c10073c8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10073cb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10073cf:	78 08                	js     c10073d9 <sys_lseek+0xd6>
c10073d1:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10073d4:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c10073d7:	7f 07                	jg     c10073e0 <sys_lseek+0xdd>
c10073d9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10073de:	eb 0d                	jmp    c10073ed <sys_lseek+0xea>
c10073e0:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10073e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10073e6:	89 10                	mov    %edx,(%eax)
c10073e8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10073eb:	8b 00                	mov    (%eax),%eax
c10073ed:	c9                   	leave  
c10073ee:	c3                   	ret    

c10073ef <sys_unlink>:
c10073ef:	55                   	push   %ebp
c10073f0:	89 e5                	mov    %esp,%ebp
c10073f2:	81 ec 28 02 00 00    	sub    $0x228,%esp
c10073f8:	83 ec 0c             	sub    $0xc,%esp
c10073fb:	ff 75 08             	pushl  0x8(%ebp)
c10073fe:	e8 1b 8d ff ff       	call   c100011e <strlen>
c1007403:	83 c4 10             	add    $0x10,%esp
c1007406:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c100740b:	76 19                	jbe    c1007426 <sys_unlink+0x37>
c100740d:	68 80 bc 00 c1       	push   $0xc100bc80
c1007412:	68 8c c0 00 c1       	push   $0xc100c08c
c1007417:	68 e8 01 00 00       	push   $0x1e8
c100741c:	68 18 ba 00 c1       	push   $0xc100ba18
c1007421:	e8 45 8f ff ff       	call   c100036b <__PANIC>
c1007426:	83 ec 04             	sub    $0x4,%esp
c1007429:	68 08 02 00 00       	push   $0x208
c100742e:	6a 00                	push   $0x0
c1007430:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1007436:	50                   	push   %eax
c1007437:	e8 6e 8c ff ff       	call   c10000aa <memset>
c100743c:	83 c4 10             	add    $0x10,%esp
c100743f:	83 ec 08             	sub    $0x8,%esp
c1007442:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1007448:	50                   	push   %eax
c1007449:	ff 75 08             	pushl  0x8(%ebp)
c100744c:	e8 d2 f5 ff ff       	call   c1006a23 <search_file>
c1007451:	83 c4 10             	add    $0x10,%esp
c1007454:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007457:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c100745b:	75 19                	jne    c1007476 <sys_unlink+0x87>
c100745d:	68 a0 bc 00 c1       	push   $0xc100bca0
c1007462:	68 8c c0 00 c1       	push   $0xc100c08c
c1007467:	68 ee 01 00 00       	push   $0x1ee
c100746c:	68 18 ba 00 c1       	push   $0xc100ba18
c1007471:	e8 f5 8e ff ff       	call   c100036b <__PANIC>
c1007476:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c100747a:	75 2c                	jne    c10074a8 <sys_unlink+0xb9>
c100747c:	83 ec 08             	sub    $0x8,%esp
c100747f:	ff 75 08             	pushl  0x8(%ebp)
c1007482:	68 ae bc 00 c1       	push   $0xc100bcae
c1007487:	e8 25 e3 ff ff       	call   c10057b1 <printk>
c100748c:	83 c4 10             	add    $0x10,%esp
c100748f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007492:	83 ec 0c             	sub    $0xc,%esp
c1007495:	50                   	push   %eax
c1007496:	e8 dc 10 00 00       	call   c1008577 <dir_close>
c100749b:	83 c4 10             	add    $0x10,%esp
c100749e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10074a3:	e9 65 01 00 00       	jmp    c100760d <sys_unlink+0x21e>
c10074a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10074ab:	83 f8 02             	cmp    $0x2,%eax
c10074ae:	75 29                	jne    c10074d9 <sys_unlink+0xea>
c10074b0:	83 ec 0c             	sub    $0xc,%esp
c10074b3:	68 c4 bc 00 c1       	push   $0xc100bcc4
c10074b8:	e8 f4 e2 ff ff       	call   c10057b1 <printk>
c10074bd:	83 c4 10             	add    $0x10,%esp
c10074c0:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10074c3:	83 ec 0c             	sub    $0xc,%esp
c10074c6:	50                   	push   %eax
c10074c7:	e8 ab 10 00 00       	call   c1008577 <dir_close>
c10074cc:	83 c4 10             	add    $0x10,%esp
c10074cf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10074d4:	e9 34 01 00 00       	jmp    c100760d <sys_unlink+0x21e>
c10074d9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10074e0:	eb 37                	jmp    c1007519 <sys_unlink+0x12a>
c10074e2:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10074e5:	89 d0                	mov    %edx,%eax
c10074e7:	01 c0                	add    %eax,%eax
c10074e9:	01 d0                	add    %edx,%eax
c10074eb:	c1 e0 02             	shl    $0x2,%eax
c10074ee:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10074f3:	8b 00                	mov    (%eax),%eax
c10074f5:	85 c0                	test   %eax,%eax
c10074f7:	74 1c                	je     c1007515 <sys_unlink+0x126>
c10074f9:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10074fc:	89 d0                	mov    %edx,%eax
c10074fe:	01 c0                	add    %eax,%eax
c1007500:	01 d0                	add    %edx,%eax
c1007502:	c1 e0 02             	shl    $0x2,%eax
c1007505:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100750a:	8b 00                	mov    (%eax),%eax
c100750c:	8b 10                	mov    (%eax),%edx
c100750e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007511:	39 c2                	cmp    %eax,%edx
c1007513:	74 0c                	je     c1007521 <sys_unlink+0x132>
c1007515:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007519:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c100751d:	76 c3                	jbe    c10074e2 <sys_unlink+0xf3>
c100751f:	eb 01                	jmp    c1007522 <sys_unlink+0x133>
c1007521:	90                   	nop
c1007522:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1007526:	77 2c                	ja     c1007554 <sys_unlink+0x165>
c1007528:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100752b:	83 ec 0c             	sub    $0xc,%esp
c100752e:	50                   	push   %eax
c100752f:	e8 43 10 00 00       	call   c1008577 <dir_close>
c1007534:	83 c4 10             	add    $0x10,%esp
c1007537:	83 ec 08             	sub    $0x8,%esp
c100753a:	ff 75 08             	pushl  0x8(%ebp)
c100753d:	68 04 bd 00 c1       	push   $0xc100bd04
c1007542:	e8 6a e2 ff ff       	call   c10057b1 <printk>
c1007547:	83 c4 10             	add    $0x10,%esp
c100754a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100754f:	e9 b9 00 00 00       	jmp    c100760d <sys_unlink+0x21e>
c1007554:	83 7d f4 20          	cmpl   $0x20,-0xc(%ebp)
c1007558:	74 19                	je     c1007573 <sys_unlink+0x184>
c100755a:	68 2d bd 00 c1       	push   $0xc100bd2d
c100755f:	68 8c c0 00 c1       	push   $0xc100c08c
c1007564:	68 07 02 00 00       	push   $0x207
c1007569:	68 18 ba 00 c1       	push   $0xc100ba18
c100756e:	e8 f8 8d ff ff       	call   c100036b <__PANIC>
c1007573:	83 ec 08             	sub    $0x8,%esp
c1007576:	6a 02                	push   $0x2
c1007578:	68 00 04 00 00       	push   $0x400
c100757d:	e8 31 b7 ff ff       	call   c1002cb3 <vmm_malloc>
c1007582:	83 c4 10             	add    $0x10,%esp
c1007585:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007588:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100758c:	75 26                	jne    c10075b4 <sys_unlink+0x1c5>
c100758e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007591:	83 ec 0c             	sub    $0xc,%esp
c1007594:	50                   	push   %eax
c1007595:	e8 dd 0f 00 00       	call   c1008577 <dir_close>
c100759a:	83 c4 10             	add    $0x10,%esp
c100759d:	83 ec 0c             	sub    $0xc,%esp
c10075a0:	68 48 bd 00 c1       	push   $0xc100bd48
c10075a5:	e8 07 e2 ff ff       	call   c10057b1 <printk>
c10075aa:	83 c4 10             	add    $0x10,%esp
c10075ad:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10075b2:	eb 59                	jmp    c100760d <sys_unlink+0x21e>
c10075b4:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10075b7:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10075ba:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10075bf:	ff 75 ec             	pushl  -0x14(%ebp)
c10075c2:	ff 75 f0             	pushl  -0x10(%ebp)
c10075c5:	ff 75 e8             	pushl  -0x18(%ebp)
c10075c8:	50                   	push   %eax
c10075c9:	e8 8a 14 00 00       	call   c1008a58 <delete_dir_entry>
c10075ce:	83 c4 10             	add    $0x10,%esp
c10075d1:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10075d6:	83 ec 08             	sub    $0x8,%esp
c10075d9:	ff 75 f0             	pushl  -0x10(%ebp)
c10075dc:	50                   	push   %eax
c10075dd:	e8 46 31 00 00       	call   c100a728 <inode_release>
c10075e2:	83 c4 10             	add    $0x10,%esp
c10075e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10075e8:	83 ec 08             	sub    $0x8,%esp
c10075eb:	68 00 04 00 00       	push   $0x400
c10075f0:	50                   	push   %eax
c10075f1:	e8 e2 b7 ff ff       	call   c1002dd8 <vmm_free>
c10075f6:	83 c4 10             	add    $0x10,%esp
c10075f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10075fc:	83 ec 0c             	sub    $0xc,%esp
c10075ff:	50                   	push   %eax
c1007600:	e8 72 0f 00 00       	call   c1008577 <dir_close>
c1007605:	83 c4 10             	add    $0x10,%esp
c1007608:	b8 00 00 00 00       	mov    $0x0,%eax
c100760d:	c9                   	leave  
c100760e:	c3                   	ret    

c100760f <sys_mkdir>:
c100760f:	55                   	push   %ebp
c1007610:	89 e5                	mov    %esp,%ebp
c1007612:	53                   	push   %ebx
c1007613:	81 ec a4 02 00 00    	sub    $0x2a4,%esp
c1007619:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100761d:	83 ec 08             	sub    $0x8,%esp
c1007620:	6a 02                	push   $0x2
c1007622:	68 00 04 00 00       	push   $0x400
c1007627:	e8 87 b6 ff ff       	call   c1002cb3 <vmm_malloc>
c100762c:	83 c4 10             	add    $0x10,%esp
c100762f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007632:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1007636:	75 1a                	jne    c1007652 <sys_mkdir+0x43>
c1007638:	83 ec 0c             	sub    $0xc,%esp
c100763b:	68 70 bd 00 c1       	push   $0xc100bd70
c1007640:	e8 6c e1 ff ff       	call   c10057b1 <printk>
c1007645:	83 c4 10             	add    $0x10,%esp
c1007648:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100764d:	e9 f2 03 00 00       	jmp    c1007a44 <sys_mkdir+0x435>
c1007652:	83 ec 04             	sub    $0x4,%esp
c1007655:	68 08 02 00 00       	push   $0x208
c100765a:	6a 00                	push   $0x0
c100765c:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1007662:	50                   	push   %eax
c1007663:	e8 42 8a ff ff       	call   c10000aa <memset>
c1007668:	83 c4 10             	add    $0x10,%esp
c100766b:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
c1007672:	83 ec 08             	sub    $0x8,%esp
c1007675:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c100767b:	50                   	push   %eax
c100767c:	ff 75 08             	pushl  0x8(%ebp)
c100767f:	e8 9f f3 ff ff       	call   c1006a23 <search_file>
c1007684:	83 c4 10             	add    $0x10,%esp
c1007687:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100768a:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c100768e:	74 1c                	je     c10076ac <sys_mkdir+0x9d>
c1007690:	83 ec 08             	sub    $0x8,%esp
c1007693:	ff 75 08             	pushl  0x8(%ebp)
c1007696:	68 9c bd 00 c1       	push   $0xc100bd9c
c100769b:	e8 11 e1 ff ff       	call   c10057b1 <printk>
c10076a0:	83 c4 10             	add    $0x10,%esp
c10076a3:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10076a7:	e9 08 03 00 00       	jmp    c10079b4 <sys_mkdir+0x3a5>
c10076ac:	83 ec 0c             	sub    $0xc,%esp
c10076af:	ff 75 08             	pushl  0x8(%ebp)
c10076b2:	e8 e4 f2 ff ff       	call   c100699b <path_depth_cnt>
c10076b7:	83 c4 10             	add    $0x10,%esp
c10076ba:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10076bd:	83 ec 0c             	sub    $0xc,%esp
c10076c0:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10076c6:	50                   	push   %eax
c10076c7:	e8 cf f2 ff ff       	call   c100699b <path_depth_cnt>
c10076cc:	83 c4 10             	add    $0x10,%esp
c10076cf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10076d2:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10076d5:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c10076d8:	74 23                	je     c10076fd <sys_mkdir+0xee>
c10076da:	83 ec 04             	sub    $0x4,%esp
c10076dd:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c10076e3:	50                   	push   %eax
c10076e4:	ff 75 08             	pushl  0x8(%ebp)
c10076e7:	68 c4 bd 00 c1       	push   $0xc100bdc4
c10076ec:	e8 c0 e0 ff ff       	call   c10057b1 <printk>
c10076f1:	83 c4 10             	add    $0x10,%esp
c10076f4:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c10076f8:	e9 b7 02 00 00       	jmp    c10079b4 <sys_mkdir+0x3a5>
c10076fd:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007700:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007703:	83 ec 08             	sub    $0x8,%esp
c1007706:	6a 2f                	push   $0x2f
c1007708:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c100770e:	50                   	push   %eax
c100770f:	e8 82 8a ff ff       	call   c1000196 <strrchr>
c1007714:	83 c4 10             	add    $0x10,%esp
c1007717:	83 c0 01             	add    $0x1,%eax
c100771a:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100771d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007722:	83 ec 0c             	sub    $0xc,%esp
c1007725:	50                   	push   %eax
c1007726:	e8 44 1b 00 00       	call   c100926f <inode_bitmap_alloc>
c100772b:	83 c4 10             	add    $0x10,%esp
c100772e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007731:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007735:	75 19                	jne    c1007750 <sys_mkdir+0x141>
c1007737:	83 ec 0c             	sub    $0xc,%esp
c100773a:	68 f8 bd 00 c1       	push   $0xc100bdf8
c100773f:	e8 6d e0 ff ff       	call   c10057b1 <printk>
c1007744:	83 c4 10             	add    $0x10,%esp
c1007747:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c100774b:	e9 64 02 00 00       	jmp    c10079b4 <sys_mkdir+0x3a5>
c1007750:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007753:	83 ec 08             	sub    $0x8,%esp
c1007756:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c100775c:	52                   	push   %edx
c100775d:	50                   	push   %eax
c100775e:	e8 8a 32 00 00       	call   c100a9ed <inode_init>
c1007763:	83 c4 10             	add    $0x10,%esp
c1007766:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
c100776d:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
c1007774:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007779:	83 ec 0c             	sub    $0xc,%esp
c100777c:	50                   	push   %eax
c100777d:	e8 ad 1b 00 00       	call   c100932f <block_bitmap_alloc>
c1007782:	83 c4 10             	add    $0x10,%esp
c1007785:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1007788:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
c100778c:	75 19                	jne    c10077a7 <sys_mkdir+0x198>
c100778e:	83 ec 0c             	sub    $0xc,%esp
c1007791:	68 1c be 00 c1       	push   $0xc100be1c
c1007796:	e8 16 e0 ff ff       	call   c10057b1 <printk>
c100779b:	83 c4 10             	add    $0x10,%esp
c100779e:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10077a2:	e9 0d 02 00 00       	jmp    c10079b4 <sys_mkdir+0x3a5>
c10077a7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10077aa:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
c10077b0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c10077b3:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10077b8:	8b 40 10             	mov    0x10(%eax),%eax
c10077bb:	8b 40 28             	mov    0x28(%eax),%eax
c10077be:	29 c2                	sub    %eax,%edx
c10077c0:	89 d0                	mov    %edx,%eax
c10077c2:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10077c5:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
c10077c9:	75 19                	jne    c10077e4 <sys_mkdir+0x1d5>
c10077cb:	68 57 be 00 c1       	push   $0xc100be57
c10077d0:	68 98 c0 00 c1       	push   $0xc100c098
c10077d5:	68 4f 02 00 00       	push   $0x24f
c10077da:	68 18 ba 00 c1       	push   $0xc100ba18
c10077df:	e8 87 8b ff ff       	call   c100036b <__PANIC>
c10077e4:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10077e9:	83 ec 04             	sub    $0x4,%esp
c10077ec:	6a 01                	push   $0x1
c10077ee:	ff 75 d8             	pushl  -0x28(%ebp)
c10077f1:	50                   	push   %eax
c10077f2:	e8 06 1c 00 00       	call   c10093fd <bitmap_sync>
c10077f7:	83 c4 10             	add    $0x10,%esp
c10077fa:	83 ec 04             	sub    $0x4,%esp
c10077fd:	68 00 04 00 00       	push   $0x400
c1007802:	6a 00                	push   $0x0
c1007804:	ff 75 ec             	pushl  -0x14(%ebp)
c1007807:	e8 9e 88 ff ff       	call   c10000aa <memset>
c100780c:	83 c4 10             	add    $0x10,%esp
c100780f:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007812:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1007815:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007818:	83 ec 04             	sub    $0x4,%esp
c100781b:	6a 01                	push   $0x1
c100781d:	68 59 b9 00 c1       	push   $0xc100b959
c1007822:	50                   	push   %eax
c1007823:	e8 e0 88 ff ff       	call   c1000108 <memcpy>
c1007828:	83 c4 10             	add    $0x10,%esp
c100782b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100782e:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007831:	89 50 10             	mov    %edx,0x10(%eax)
c1007834:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007837:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100783e:	83 45 d0 18          	addl   $0x18,-0x30(%ebp)
c1007842:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007845:	83 ec 04             	sub    $0x4,%esp
c1007848:	6a 02                	push   $0x2
c100784a:	68 5b b9 00 c1       	push   $0xc100b95b
c100784f:	50                   	push   %eax
c1007850:	e8 b3 88 ff ff       	call   c1000108 <memcpy>
c1007855:	83 c4 10             	add    $0x10,%esp
c1007858:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100785b:	8b 00                	mov    (%eax),%eax
c100785d:	8b 10                	mov    (%eax),%edx
c100785f:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007862:	89 50 10             	mov    %edx,0x10(%eax)
c1007865:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007868:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c100786f:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
c1007875:	83 ec 04             	sub    $0x4,%esp
c1007878:	6a 01                	push   $0x1
c100787a:	50                   	push   %eax
c100787b:	ff 75 ec             	pushl  -0x14(%ebp)
c100787e:	e8 13 e8 ff ff       	call   c1006096 <ide_write>
c1007883:	83 c4 10             	add    $0x10,%esp
c1007886:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100788b:	8b 40 10             	mov    0x10(%eax),%eax
c100788e:	8b 40 30             	mov    0x30(%eax),%eax
c1007891:	01 c0                	add    %eax,%eax
c1007893:	89 85 80 fd ff ff    	mov    %eax,-0x280(%ebp)
c1007899:	83 ec 04             	sub    $0x4,%esp
c100789c:	6a 18                	push   $0x18
c100789e:	6a 00                	push   $0x0
c10078a0:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c10078a6:	50                   	push   %eax
c10078a7:	e8 fe 87 ff ff       	call   c10000aa <memset>
c10078ac:	83 c4 10             	add    $0x10,%esp
c10078af:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10078b2:	8d 95 64 fd ff ff    	lea    -0x29c(%ebp),%edx
c10078b8:	52                   	push   %edx
c10078b9:	6a 02                	push   $0x2
c10078bb:	50                   	push   %eax
c10078bc:	ff 75 dc             	pushl  -0x24(%ebp)
c10078bf:	e8 ed 0c 00 00       	call   c10085b1 <create_dir_entry>
c10078c4:	83 c4 10             	add    $0x10,%esp
c10078c7:	83 ec 04             	sub    $0x4,%esp
c10078ca:	68 00 04 00 00       	push   $0x400
c10078cf:	6a 00                	push   $0x0
c10078d1:	ff 75 ec             	pushl  -0x14(%ebp)
c10078d4:	e8 d1 87 ff ff       	call   c10000aa <memset>
c10078d9:	83 c4 10             	add    $0x10,%esp
c10078dc:	83 ec 04             	sub    $0x4,%esp
c10078df:	ff 75 ec             	pushl  -0x14(%ebp)
c10078e2:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c10078e8:	50                   	push   %eax
c10078e9:	ff 75 e0             	pushl  -0x20(%ebp)
c10078ec:	e8 2c 0d 00 00       	call   c100861d <sync_dir_entry>
c10078f1:	83 c4 10             	add    $0x10,%esp
c10078f4:	85 c0                	test   %eax,%eax
c10078f6:	75 19                	jne    c1007911 <sys_mkdir+0x302>
c10078f8:	83 ec 0c             	sub    $0xc,%esp
c10078fb:	68 70 be 00 c1       	push   $0xc100be70
c1007900:	e8 ac de ff ff       	call   c10057b1 <printk>
c1007905:	83 c4 10             	add    $0x10,%esp
c1007908:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c100790c:	e9 a3 00 00 00       	jmp    c10079b4 <sys_mkdir+0x3a5>
c1007911:	83 ec 04             	sub    $0x4,%esp
c1007914:	68 00 04 00 00       	push   $0x400
c1007919:	6a 00                	push   $0x0
c100791b:	ff 75 ec             	pushl  -0x14(%ebp)
c100791e:	e8 87 87 ff ff       	call   c10000aa <memset>
c1007923:	83 c4 10             	add    $0x10,%esp
c1007926:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007929:	8b 10                	mov    (%eax),%edx
c100792b:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007930:	83 ec 04             	sub    $0x4,%esp
c1007933:	ff 75 ec             	pushl  -0x14(%ebp)
c1007936:	52                   	push   %edx
c1007937:	50                   	push   %eax
c1007938:	e8 de 2a 00 00       	call   c100a41b <inode_sync>
c100793d:	83 c4 10             	add    $0x10,%esp
c1007940:	83 ec 04             	sub    $0x4,%esp
c1007943:	68 00 04 00 00       	push   $0x400
c1007948:	6a 00                	push   $0x0
c100794a:	ff 75 ec             	pushl  -0x14(%ebp)
c100794d:	e8 58 87 ff ff       	call   c10000aa <memset>
c1007952:	83 c4 10             	add    $0x10,%esp
c1007955:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100795a:	83 ec 04             	sub    $0x4,%esp
c100795d:	ff 75 ec             	pushl  -0x14(%ebp)
c1007960:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1007966:	52                   	push   %edx
c1007967:	50                   	push   %eax
c1007968:	e8 ae 2a 00 00       	call   c100a41b <inode_sync>
c100796d:	83 c4 10             	add    $0x10,%esp
c1007970:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007973:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007978:	83 ec 04             	sub    $0x4,%esp
c100797b:	6a 00                	push   $0x0
c100797d:	52                   	push   %edx
c100797e:	50                   	push   %eax
c100797f:	e8 79 1a 00 00       	call   c10093fd <bitmap_sync>
c1007984:	83 c4 10             	add    $0x10,%esp
c1007987:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100798a:	83 ec 08             	sub    $0x8,%esp
c100798d:	68 00 04 00 00       	push   $0x400
c1007992:	50                   	push   %eax
c1007993:	e8 40 b4 ff ff       	call   c1002dd8 <vmm_free>
c1007998:	83 c4 10             	add    $0x10,%esp
c100799b:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100799e:	83 ec 0c             	sub    $0xc,%esp
c10079a1:	50                   	push   %eax
c10079a2:	e8 d0 0b 00 00       	call   c1008577 <dir_close>
c10079a7:	83 c4 10             	add    $0x10,%esp
c10079aa:	b8 00 00 00 00       	mov    $0x0,%eax
c10079af:	e9 90 00 00 00       	jmp    c1007a44 <sys_mkdir+0x435>
c10079b4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10079b8:	83 f8 01             	cmp    $0x1,%eax
c10079bb:	74 5e                	je     c1007a1b <sys_mkdir+0x40c>
c10079bd:	83 f8 02             	cmp    $0x2,%eax
c10079c0:	75 69                	jne    c1007a2b <sys_mkdir+0x41c>
c10079c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10079c5:	8d 50 07             	lea    0x7(%eax),%edx
c10079c8:	85 c0                	test   %eax,%eax
c10079ca:	0f 48 c2             	cmovs  %edx,%eax
c10079cd:	c1 f8 03             	sar    $0x3,%eax
c10079d0:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10079d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10079d6:	99                   	cltd   
c10079d7:	c1 ea 1d             	shr    $0x1d,%edx
c10079da:	01 d0                	add    %edx,%eax
c10079dc:	83 e0 07             	and    $0x7,%eax
c10079df:	29 d0                	sub    %edx,%eax
c10079e1:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10079e4:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10079e9:	8b 50 20             	mov    0x20(%eax),%edx
c10079ec:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10079ef:	01 d0                	add    %edx,%eax
c10079f1:	0f b6 00             	movzbl (%eax),%eax
c10079f4:	89 c2                	mov    %eax,%edx
c10079f6:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10079f9:	bb 01 00 00 00       	mov    $0x1,%ebx
c10079fe:	89 c1                	mov    %eax,%ecx
c1007a00:	d3 e3                	shl    %cl,%ebx
c1007a02:	89 d8                	mov    %ebx,%eax
c1007a04:	f7 d0                	not    %eax
c1007a06:	89 d1                	mov    %edx,%ecx
c1007a08:	21 c1                	and    %eax,%ecx
c1007a0a:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007a0f:	8b 50 20             	mov    0x20(%eax),%edx
c1007a12:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1007a15:	01 d0                	add    %edx,%eax
c1007a17:	89 ca                	mov    %ecx,%edx
c1007a19:	88 10                	mov    %dl,(%eax)
c1007a1b:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007a1e:	83 ec 0c             	sub    $0xc,%esp
c1007a21:	50                   	push   %eax
c1007a22:	e8 50 0b 00 00       	call   c1008577 <dir_close>
c1007a27:	83 c4 10             	add    $0x10,%esp
c1007a2a:	90                   	nop
c1007a2b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007a2e:	83 ec 08             	sub    $0x8,%esp
c1007a31:	68 00 04 00 00       	push   $0x400
c1007a36:	50                   	push   %eax
c1007a37:	e8 9c b3 ff ff       	call   c1002dd8 <vmm_free>
c1007a3c:	83 c4 10             	add    $0x10,%esp
c1007a3f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007a44:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1007a47:	c9                   	leave  
c1007a48:	c3                   	ret    

c1007a49 <sys_opendir>:
c1007a49:	55                   	push   %ebp
c1007a4a:	89 e5                	mov    %esp,%ebp
c1007a4c:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1007a52:	83 ec 0c             	sub    $0xc,%esp
c1007a55:	ff 75 08             	pushl  0x8(%ebp)
c1007a58:	e8 c1 86 ff ff       	call   c100011e <strlen>
c1007a5d:	83 c4 10             	add    $0x10,%esp
c1007a60:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1007a65:	76 19                	jbe    c1007a80 <sys_opendir+0x37>
c1007a67:	68 9b be 00 c1       	push   $0xc100be9b
c1007a6c:	68 a4 c0 00 c1       	push   $0xc100c0a4
c1007a71:	68 91 02 00 00       	push   $0x291
c1007a76:	68 18 ba 00 c1       	push   $0xc100ba18
c1007a7b:	e8 eb 88 ff ff       	call   c100036b <__PANIC>
c1007a80:	8b 45 08             	mov    0x8(%ebp),%eax
c1007a83:	0f b6 00             	movzbl (%eax),%eax
c1007a86:	3c 2f                	cmp    $0x2f,%al
c1007a88:	75 21                	jne    c1007aab <sys_opendir+0x62>
c1007a8a:	8b 45 08             	mov    0x8(%ebp),%eax
c1007a8d:	83 c0 01             	add    $0x1,%eax
c1007a90:	0f b6 00             	movzbl (%eax),%eax
c1007a93:	84 c0                	test   %al,%al
c1007a95:	74 0a                	je     c1007aa1 <sys_opendir+0x58>
c1007a97:	8b 45 08             	mov    0x8(%ebp),%eax
c1007a9a:	0f b6 00             	movzbl (%eax),%eax
c1007a9d:	3c 2e                	cmp    $0x2e,%al
c1007a9f:	75 0a                	jne    c1007aab <sys_opendir+0x62>
c1007aa1:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c1007aa6:	e9 a9 00 00 00       	jmp    c1007b54 <sys_opendir+0x10b>
c1007aab:	83 ec 04             	sub    $0x4,%esp
c1007aae:	68 08 02 00 00       	push   $0x208
c1007ab3:	6a 00                	push   $0x0
c1007ab5:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007abb:	50                   	push   %eax
c1007abc:	e8 e9 85 ff ff       	call   c10000aa <memset>
c1007ac1:	83 c4 10             	add    $0x10,%esp
c1007ac4:	83 ec 08             	sub    $0x8,%esp
c1007ac7:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007acd:	50                   	push   %eax
c1007ace:	ff 75 08             	pushl  0x8(%ebp)
c1007ad1:	e8 4d ef ff ff       	call   c1006a23 <search_file>
c1007ad6:	83 c4 10             	add    $0x10,%esp
c1007ad9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007adc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007ae3:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007ae7:	75 1c                	jne    c1007b05 <sys_opendir+0xbc>
c1007ae9:	83 ec 04             	sub    $0x4,%esp
c1007aec:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007af2:	50                   	push   %eax
c1007af3:	ff 75 08             	pushl  0x8(%ebp)
c1007af6:	68 b7 be 00 c1       	push   $0xc100beb7
c1007afb:	e8 b1 dc ff ff       	call   c10057b1 <printk>
c1007b00:	83 c4 10             	add    $0x10,%esp
c1007b03:	eb 3d                	jmp    c1007b42 <sys_opendir+0xf9>
c1007b05:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007b08:	83 f8 01             	cmp    $0x1,%eax
c1007b0b:	75 15                	jne    c1007b22 <sys_opendir+0xd9>
c1007b0d:	83 ec 08             	sub    $0x8,%esp
c1007b10:	ff 75 08             	pushl  0x8(%ebp)
c1007b13:	68 d5 be 00 c1       	push   $0xc100bed5
c1007b18:	e8 94 dc ff ff       	call   c10057b1 <printk>
c1007b1d:	83 c4 10             	add    $0x10,%esp
c1007b20:	eb 20                	jmp    c1007b42 <sys_opendir+0xf9>
c1007b22:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007b25:	83 f8 02             	cmp    $0x2,%eax
c1007b28:	75 18                	jne    c1007b42 <sys_opendir+0xf9>
c1007b2a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007b2d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007b32:	83 ec 08             	sub    $0x8,%esp
c1007b35:	52                   	push   %edx
c1007b36:	50                   	push   %eax
c1007b37:	e8 0f 08 00 00       	call   c100834b <dir_open>
c1007b3c:	83 c4 10             	add    $0x10,%esp
c1007b3f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007b42:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007b45:	83 ec 0c             	sub    $0xc,%esp
c1007b48:	50                   	push   %eax
c1007b49:	e8 29 0a 00 00       	call   c1008577 <dir_close>
c1007b4e:	83 c4 10             	add    $0x10,%esp
c1007b51:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007b54:	c9                   	leave  
c1007b55:	c3                   	ret    

c1007b56 <sys_closedir>:
c1007b56:	55                   	push   %ebp
c1007b57:	89 e5                	mov    %esp,%ebp
c1007b59:	83 ec 18             	sub    $0x18,%esp
c1007b5c:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007b63:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007b67:	74 15                	je     c1007b7e <sys_closedir+0x28>
c1007b69:	83 ec 0c             	sub    $0xc,%esp
c1007b6c:	ff 75 08             	pushl  0x8(%ebp)
c1007b6f:	e8 03 0a 00 00       	call   c1008577 <dir_close>
c1007b74:	83 c4 10             	add    $0x10,%esp
c1007b77:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007b7e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007b81:	c9                   	leave  
c1007b82:	c3                   	ret    

c1007b83 <sys_readdir>:
c1007b83:	55                   	push   %ebp
c1007b84:	89 e5                	mov    %esp,%ebp
c1007b86:	83 ec 08             	sub    $0x8,%esp
c1007b89:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007b8d:	75 19                	jne    c1007ba8 <sys_readdir+0x25>
c1007b8f:	68 ea be 00 c1       	push   $0xc100beea
c1007b94:	68 b0 c0 00 c1       	push   $0xc100c0b0
c1007b99:	68 b4 02 00 00       	push   $0x2b4
c1007b9e:	68 18 ba 00 c1       	push   $0xc100ba18
c1007ba3:	e8 c3 87 ff ff       	call   c100036b <__PANIC>
c1007ba8:	83 ec 0c             	sub    $0xc,%esp
c1007bab:	ff 75 08             	pushl  0x8(%ebp)
c1007bae:	e8 47 13 00 00       	call   c1008efa <dir_read>
c1007bb3:	83 c4 10             	add    $0x10,%esp
c1007bb6:	c9                   	leave  
c1007bb7:	c3                   	ret    

c1007bb8 <sys_rewinddir>:
c1007bb8:	55                   	push   %ebp
c1007bb9:	89 e5                	mov    %esp,%ebp
c1007bbb:	8b 45 08             	mov    0x8(%ebp),%eax
c1007bbe:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1007bc5:	90                   	nop
c1007bc6:	5d                   	pop    %ebp
c1007bc7:	c3                   	ret    

c1007bc8 <sys_rmdir>:
c1007bc8:	55                   	push   %ebp
c1007bc9:	89 e5                	mov    %esp,%ebp
c1007bcb:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1007bd1:	83 ec 04             	sub    $0x4,%esp
c1007bd4:	68 08 02 00 00       	push   $0x208
c1007bd9:	6a 00                	push   $0x0
c1007bdb:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007be1:	50                   	push   %eax
c1007be2:	e8 c3 84 ff ff       	call   c10000aa <memset>
c1007be7:	83 c4 10             	add    $0x10,%esp
c1007bea:	83 ec 08             	sub    $0x8,%esp
c1007bed:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007bf3:	50                   	push   %eax
c1007bf4:	ff 75 08             	pushl  0x8(%ebp)
c1007bf7:	e8 27 ee ff ff       	call   c1006a23 <search_file>
c1007bfc:	83 c4 10             	add    $0x10,%esp
c1007bff:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007c02:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007c06:	75 19                	jne    c1007c21 <sys_rmdir+0x59>
c1007c08:	68 a0 bc 00 c1       	push   $0xc100bca0
c1007c0d:	68 bc c0 00 c1       	push   $0xc100c0bc
c1007c12:	68 c2 02 00 00       	push   $0x2c2
c1007c17:	68 18 ba 00 c1       	push   $0xc100ba18
c1007c1c:	e8 4a 87 ff ff       	call   c100036b <__PANIC>
c1007c21:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007c28:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007c2c:	75 1f                	jne    c1007c4d <sys_rmdir+0x85>
c1007c2e:	83 ec 04             	sub    $0x4,%esp
c1007c31:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c1007c37:	50                   	push   %eax
c1007c38:	ff 75 08             	pushl  0x8(%ebp)
c1007c3b:	68 b7 be 00 c1       	push   $0xc100beb7
c1007c40:	e8 6c db ff ff       	call   c10057b1 <printk>
c1007c45:	83 c4 10             	add    $0x10,%esp
c1007c48:	e9 87 00 00 00       	jmp    c1007cd4 <sys_rmdir+0x10c>
c1007c4d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007c50:	83 f8 01             	cmp    $0x1,%eax
c1007c53:	75 15                	jne    c1007c6a <sys_rmdir+0xa2>
c1007c55:	83 ec 08             	sub    $0x8,%esp
c1007c58:	ff 75 08             	pushl  0x8(%ebp)
c1007c5b:	68 d5 be 00 c1       	push   $0xc100bed5
c1007c60:	e8 4c db ff ff       	call   c10057b1 <printk>
c1007c65:	83 c4 10             	add    $0x10,%esp
c1007c68:	eb 6a                	jmp    c1007cd4 <sys_rmdir+0x10c>
c1007c6a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007c6d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007c72:	83 ec 08             	sub    $0x8,%esp
c1007c75:	52                   	push   %edx
c1007c76:	50                   	push   %eax
c1007c77:	e8 cf 06 00 00       	call   c100834b <dir_open>
c1007c7c:	83 c4 10             	add    $0x10,%esp
c1007c7f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007c82:	83 ec 0c             	sub    $0xc,%esp
c1007c85:	ff 75 ec             	pushl  -0x14(%ebp)
c1007c88:	e8 42 14 00 00       	call   c10090cf <dir_is_empty>
c1007c8d:	83 c4 10             	add    $0x10,%esp
c1007c90:	85 c0                	test   %eax,%eax
c1007c92:	75 15                	jne    c1007ca9 <sys_rmdir+0xe1>
c1007c94:	83 ec 08             	sub    $0x8,%esp
c1007c97:	ff 75 08             	pushl  0x8(%ebp)
c1007c9a:	68 f8 be 00 c1       	push   $0xc100bef8
c1007c9f:	e8 0d db ff ff       	call   c10057b1 <printk>
c1007ca4:	83 c4 10             	add    $0x10,%esp
c1007ca7:	eb 1d                	jmp    c1007cc6 <sys_rmdir+0xfe>
c1007ca9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007cac:	83 ec 08             	sub    $0x8,%esp
c1007caf:	ff 75 ec             	pushl  -0x14(%ebp)
c1007cb2:	50                   	push   %eax
c1007cb3:	e8 3f 14 00 00       	call   c10090f7 <dir_remove>
c1007cb8:	83 c4 10             	add    $0x10,%esp
c1007cbb:	85 c0                	test   %eax,%eax
c1007cbd:	75 07                	jne    c1007cc6 <sys_rmdir+0xfe>
c1007cbf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007cc6:	83 ec 0c             	sub    $0xc,%esp
c1007cc9:	ff 75 ec             	pushl  -0x14(%ebp)
c1007ccc:	e8 a6 08 00 00       	call   c1008577 <dir_close>
c1007cd1:	83 c4 10             	add    $0x10,%esp
c1007cd4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007cd7:	83 ec 0c             	sub    $0xc,%esp
c1007cda:	50                   	push   %eax
c1007cdb:	e8 97 08 00 00       	call   c1008577 <dir_close>
c1007ce0:	83 c4 10             	add    $0x10,%esp
c1007ce3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007ce6:	c9                   	leave  
c1007ce7:	c3                   	ret    

c1007ce8 <get_parent_dir_inode_nr>:
c1007ce8:	55                   	push   %ebp
c1007ce9:	89 e5                	mov    %esp,%ebp
c1007ceb:	83 ec 18             	sub    $0x18,%esp
c1007cee:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007cf3:	83 ec 08             	sub    $0x8,%esp
c1007cf6:	ff 75 08             	pushl  0x8(%ebp)
c1007cf9:	50                   	push   %eax
c1007cfa:	e8 3d 28 00 00       	call   c100a53c <inode_open>
c1007cff:	83 c4 10             	add    $0x10,%esp
c1007d02:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007d05:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007d08:	8b 40 10             	mov    0x10(%eax),%eax
c1007d0b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007d0e:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007d13:	8b 40 10             	mov    0x10(%eax),%eax
c1007d16:	8b 40 28             	mov    0x28(%eax),%eax
c1007d19:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1007d1c:	73 19                	jae    c1007d37 <get_parent_dir_inode_nr+0x4f>
c1007d1e:	68 40 bf 00 c1       	push   $0xc100bf40
c1007d23:	68 c8 c0 00 c1       	push   $0xc100c0c8
c1007d28:	68 dd 02 00 00       	push   $0x2dd
c1007d2d:	68 18 ba 00 c1       	push   $0xc100ba18
c1007d32:	e8 34 86 ff ff       	call   c100036b <__PANIC>
c1007d37:	83 ec 0c             	sub    $0xc,%esp
c1007d3a:	ff 75 f4             	pushl  -0xc(%ebp)
c1007d3d:	e8 d0 28 00 00       	call   c100a612 <inode_close>
c1007d42:	83 c4 10             	add    $0x10,%esp
c1007d45:	83 ec 04             	sub    $0x4,%esp
c1007d48:	6a 01                	push   $0x1
c1007d4a:	ff 75 f0             	pushl  -0x10(%ebp)
c1007d4d:	ff 75 0c             	pushl  0xc(%ebp)
c1007d50:	e8 04 e3 ff ff       	call   c1006059 <ide_read>
c1007d55:	83 c4 10             	add    $0x10,%esp
c1007d58:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007d5b:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007d5e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007d61:	83 c0 18             	add    $0x18,%eax
c1007d64:	8b 40 10             	mov    0x10(%eax),%eax
c1007d67:	3d ff 0f 00 00       	cmp    $0xfff,%eax
c1007d6c:	77 0e                	ja     c1007d7c <get_parent_dir_inode_nr+0x94>
c1007d6e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007d71:	83 c0 18             	add    $0x18,%eax
c1007d74:	8b 40 14             	mov    0x14(%eax),%eax
c1007d77:	83 f8 02             	cmp    $0x2,%eax
c1007d7a:	74 19                	je     c1007d95 <get_parent_dir_inode_nr+0xad>
c1007d7c:	68 6c bf 00 c1       	push   $0xc100bf6c
c1007d81:	68 c8 c0 00 c1       	push   $0xc100c0c8
c1007d86:	68 e2 02 00 00       	push   $0x2e2
c1007d8b:	68 18 ba 00 c1       	push   $0xc100ba18
c1007d90:	e8 d6 85 ff ff       	call   c100036b <__PANIC>
c1007d95:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007d98:	83 c0 18             	add    $0x18,%eax
c1007d9b:	8b 40 10             	mov    0x10(%eax),%eax
c1007d9e:	c9                   	leave  
c1007d9f:	c3                   	ret    

c1007da0 <get_child_dir_name>:
c1007da0:	55                   	push   %ebp
c1007da1:	89 e5                	mov    %esp,%ebp
c1007da3:	57                   	push   %edi
c1007da4:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1007daa:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007daf:	83 ec 08             	sub    $0x8,%esp
c1007db2:	ff 75 08             	pushl  0x8(%ebp)
c1007db5:	50                   	push   %eax
c1007db6:	e8 81 27 00 00       	call   c100a53c <inode_open>
c1007dbb:	83 c4 10             	add    $0x10,%esp
c1007dbe:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007dc1:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007dc5:	8d 95 ac fd ff ff    	lea    -0x254(%ebp),%edx
c1007dcb:	b8 00 00 00 00       	mov    $0x0,%eax
c1007dd0:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007dd5:	89 d7                	mov    %edx,%edi
c1007dd7:	f3 ab                	rep stos %eax,%es:(%edi)
c1007dd9:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
c1007de0:	eb 22                	jmp    c1007e04 <get_child_dir_name+0x64>
c1007de2:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007de6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007dea:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1007ded:	83 c1 04             	add    $0x4,%ecx
c1007df0:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1007df3:	89 94 85 ac fd ff ff 	mov    %edx,-0x254(%ebp,%eax,4)
c1007dfa:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007dfe:	83 c0 01             	add    $0x1,%eax
c1007e01:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007e04:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007e08:	76 d8                	jbe    c1007de2 <get_child_dir_name+0x42>
c1007e0a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007e0d:	8b 40 40             	mov    0x40(%eax),%eax
c1007e10:	85 c0                	test   %eax,%eax
c1007e12:	74 25                	je     c1007e39 <get_child_dir_name+0x99>
c1007e14:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007e17:	8b 50 40             	mov    0x40(%eax),%edx
c1007e1a:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
c1007e20:	83 c0 30             	add    $0x30,%eax
c1007e23:	83 ec 04             	sub    $0x4,%esp
c1007e26:	6a 01                	push   $0x1
c1007e28:	52                   	push   %edx
c1007e29:	50                   	push   %eax
c1007e2a:	e8 2a e2 ff ff       	call   c1006059 <ide_read>
c1007e2f:	83 c4 10             	add    $0x10,%esp
c1007e32:	c7 45 f0 8c 00 00 00 	movl   $0x8c,-0x10(%ebp)
c1007e39:	83 ec 0c             	sub    $0xc,%esp
c1007e3c:	ff 75 e8             	pushl  -0x18(%ebp)
c1007e3f:	e8 ce 27 00 00       	call   c100a612 <inode_close>
c1007e44:	83 c4 10             	add    $0x10,%esp
c1007e47:	8b 45 14             	mov    0x14(%ebp),%eax
c1007e4a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007e4d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1007e52:	8b 40 10             	mov    0x10(%eax),%eax
c1007e55:	8b 40 30             	mov    0x30(%eax),%eax
c1007e58:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007e5b:	b8 00 02 00 00       	mov    $0x200,%eax
c1007e60:	ba 00 00 00 00       	mov    $0x0,%edx
c1007e65:	f7 75 e0             	divl   -0x20(%ebp)
c1007e68:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007e6b:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007e6f:	e9 bc 00 00 00       	jmp    c1007f30 <get_child_dir_name+0x190>
c1007e74:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007e78:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1007e7f:	85 c0                	test   %eax,%eax
c1007e81:	0f 84 9f 00 00 00    	je     c1007f26 <get_child_dir_name+0x186>
c1007e87:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007e8b:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1007e92:	83 ec 04             	sub    $0x4,%esp
c1007e95:	6a 01                	push   $0x1
c1007e97:	50                   	push   %eax
c1007e98:	ff 75 14             	pushl  0x14(%ebp)
c1007e9b:	e8 b9 e1 ff ff       	call   c1006059 <ide_read>
c1007ea0:	83 c4 10             	add    $0x10,%esp
c1007ea3:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
c1007ea7:	eb 74                	jmp    c1007f1d <get_child_dir_name+0x17d>
c1007ea9:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007ead:	89 d0                	mov    %edx,%eax
c1007eaf:	01 c0                	add    %eax,%eax
c1007eb1:	01 d0                	add    %edx,%eax
c1007eb3:	c1 e0 03             	shl    $0x3,%eax
c1007eb6:	89 c2                	mov    %eax,%edx
c1007eb8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007ebb:	01 d0                	add    %edx,%eax
c1007ebd:	8b 40 10             	mov    0x10(%eax),%eax
c1007ec0:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1007ec3:	75 4e                	jne    c1007f13 <get_child_dir_name+0x173>
c1007ec5:	8b 45 10             	mov    0x10(%ebp),%eax
c1007ec8:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1007ecd:	89 c2                	mov    %eax,%edx
c1007ecf:	b8 00 00 00 00       	mov    $0x0,%eax
c1007ed4:	89 d7                	mov    %edx,%edi
c1007ed6:	f2 ae                	repnz scas %es:(%edi),%al
c1007ed8:	89 c8                	mov    %ecx,%eax
c1007eda:	f7 d0                	not    %eax
c1007edc:	8d 50 ff             	lea    -0x1(%eax),%edx
c1007edf:	8b 45 10             	mov    0x10(%ebp),%eax
c1007ee2:	01 d0                	add    %edx,%eax
c1007ee4:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c1007ee9:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007eed:	89 d0                	mov    %edx,%eax
c1007eef:	01 c0                	add    %eax,%eax
c1007ef1:	01 d0                	add    %edx,%eax
c1007ef3:	c1 e0 03             	shl    $0x3,%eax
c1007ef6:	89 c2                	mov    %eax,%edx
c1007ef8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007efb:	01 d0                	add    %edx,%eax
c1007efd:	83 ec 08             	sub    $0x8,%esp
c1007f00:	50                   	push   %eax
c1007f01:	ff 75 10             	pushl  0x10(%ebp)
c1007f04:	e8 cc 82 ff ff       	call   c10001d5 <strcat>
c1007f09:	83 c4 10             	add    $0x10,%esp
c1007f0c:	b8 00 00 00 00       	mov    $0x0,%eax
c1007f11:	eb 2f                	jmp    c1007f42 <get_child_dir_name+0x1a2>
c1007f13:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007f17:	83 c0 01             	add    $0x1,%eax
c1007f1a:	88 45 ef             	mov    %al,-0x11(%ebp)
c1007f1d:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1007f21:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1007f24:	77 83                	ja     c1007ea9 <get_child_dir_name+0x109>
c1007f26:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007f2a:	83 c0 01             	add    $0x1,%eax
c1007f2d:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007f30:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007f34:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c1007f37:	0f 87 37 ff ff ff    	ja     c1007e74 <get_child_dir_name+0xd4>
c1007f3d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007f42:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1007f45:	c9                   	leave  
c1007f46:	c3                   	ret    

c1007f47 <sys_getcwd>:
c1007f47:	55                   	push   %ebp
c1007f48:	89 e5                	mov    %esp,%ebp
c1007f4a:	57                   	push   %edi
c1007f4b:	53                   	push   %ebx
c1007f4c:	81 ec 20 02 00 00    	sub    $0x220,%esp
c1007f52:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007f56:	75 19                	jne    c1007f71 <sys_getcwd+0x2a>
c1007f58:	68 32 bc 00 c1       	push   $0xc100bc32
c1007f5d:	68 e0 c0 00 c1       	push   $0xc100c0e0
c1007f62:	68 15 03 00 00       	push   $0x315
c1007f67:	68 18 ba 00 c1       	push   $0xc100ba18
c1007f6c:	e8 fa 83 ff ff       	call   c100036b <__PANIC>
c1007f71:	83 ec 08             	sub    $0x8,%esp
c1007f74:	6a 02                	push   $0x2
c1007f76:	68 00 02 00 00       	push   $0x200
c1007f7b:	e8 33 ad ff ff       	call   c1002cb3 <vmm_malloc>
c1007f80:	83 c4 10             	add    $0x10,%esp
c1007f83:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007f86:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1007f8a:	75 0a                	jne    c1007f96 <sys_getcwd+0x4f>
c1007f8c:	b8 00 00 00 00       	mov    $0x0,%eax
c1007f91:	e9 97 01 00 00       	jmp    c100812d <sys_getcwd+0x1e6>
c1007f96:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007f9d:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1007fa2:	8b 80 f8 00 00 00    	mov    0xf8(%eax),%eax
c1007fa8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007fab:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1007faf:	78 09                	js     c1007fba <sys_getcwd+0x73>
c1007fb1:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
c1007fb8:	7e 19                	jle    c1007fd3 <sys_getcwd+0x8c>
c1007fba:	68 a4 bf 00 c1       	push   $0xc100bfa4
c1007fbf:	68 e0 c0 00 c1       	push   $0xc100c0e0
c1007fc4:	68 1d 03 00 00       	push   $0x31d
c1007fc9:	68 18 ba 00 c1       	push   $0xc100ba18
c1007fce:	e8 98 83 ff ff       	call   c100036b <__PANIC>
c1007fd3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1007fd7:	75 17                	jne    c1007ff0 <sys_getcwd+0xa9>
c1007fd9:	8b 45 08             	mov    0x8(%ebp),%eax
c1007fdc:	c6 00 2f             	movb   $0x2f,(%eax)
c1007fdf:	8b 45 08             	mov    0x8(%ebp),%eax
c1007fe2:	83 c0 01             	add    $0x1,%eax
c1007fe5:	c6 00 00             	movb   $0x0,(%eax)
c1007fe8:	8b 45 08             	mov    0x8(%ebp),%eax
c1007feb:	e9 3d 01 00 00       	jmp    c100812d <sys_getcwd+0x1e6>
c1007ff0:	83 ec 04             	sub    $0x4,%esp
c1007ff3:	ff 75 0c             	pushl  0xc(%ebp)
c1007ff6:	6a 00                	push   $0x0
c1007ff8:	ff 75 08             	pushl  0x8(%ebp)
c1007ffb:	e8 aa 80 ff ff       	call   c10000aa <memset>
c1008000:	83 c4 10             	add    $0x10,%esp
c1008003:	c7 85 e6 fd ff ff 00 	movl   $0x0,-0x21a(%ebp)
c100800a:	00 00 00 
c100800d:	8d 85 ea fd ff ff    	lea    -0x216(%ebp),%eax
c1008013:	b9 fc 01 00 00       	mov    $0x1fc,%ecx
c1008018:	bb 00 00 00 00       	mov    $0x0,%ebx
c100801d:	89 18                	mov    %ebx,(%eax)
c100801f:	89 5c 08 fc          	mov    %ebx,-0x4(%eax,%ecx,1)
c1008023:	8d 50 04             	lea    0x4(%eax),%edx
c1008026:	83 e2 fc             	and    $0xfffffffc,%edx
c1008029:	29 d0                	sub    %edx,%eax
c100802b:	01 c1                	add    %eax,%ecx
c100802d:	83 e1 fc             	and    $0xfffffffc,%ecx
c1008030:	c1 e9 02             	shr    $0x2,%ecx
c1008033:	89 d7                	mov    %edx,%edi
c1008035:	89 d8                	mov    %ebx,%eax
c1008037:	f3 ab                	rep stos %eax,%es:(%edi)
c1008039:	eb 58                	jmp    c1008093 <sys_getcwd+0x14c>
c100803b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100803e:	83 ec 08             	sub    $0x8,%esp
c1008041:	ff 75 f0             	pushl  -0x10(%ebp)
c1008044:	50                   	push   %eax
c1008045:	e8 9e fc ff ff       	call   c1007ce8 <get_parent_dir_inode_nr>
c100804a:	83 c4 10             	add    $0x10,%esp
c100804d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008050:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008053:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008056:	ff 75 f0             	pushl  -0x10(%ebp)
c1008059:	8d 8d e6 fd ff ff    	lea    -0x21a(%ebp),%ecx
c100805f:	51                   	push   %ecx
c1008060:	52                   	push   %edx
c1008061:	50                   	push   %eax
c1008062:	e8 39 fd ff ff       	call   c1007da0 <get_child_dir_name>
c1008067:	83 c4 10             	add    $0x10,%esp
c100806a:	83 f8 ff             	cmp    $0xffffffff,%eax
c100806d:	75 1e                	jne    c100808d <sys_getcwd+0x146>
c100806f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008072:	83 ec 08             	sub    $0x8,%esp
c1008075:	68 00 02 00 00       	push   $0x200
c100807a:	50                   	push   %eax
c100807b:	e8 58 ad ff ff       	call   c1002dd8 <vmm_free>
c1008080:	83 c4 10             	add    $0x10,%esp
c1008083:	b8 00 00 00 00       	mov    $0x0,%eax
c1008088:	e9 a0 00 00 00       	jmp    c100812d <sys_getcwd+0x1e6>
c100808d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008090:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008093:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1008097:	75 a2                	jne    c100803b <sys_getcwd+0xf4>
c1008099:	83 ec 0c             	sub    $0xc,%esp
c100809c:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c10080a2:	50                   	push   %eax
c10080a3:	e8 76 80 ff ff       	call   c100011e <strlen>
c10080a8:	83 c4 10             	add    $0x10,%esp
c10080ab:	39 45 0c             	cmp    %eax,0xc(%ebp)
c10080ae:	73 49                	jae    c10080f9 <sys_getcwd+0x1b2>
c10080b0:	68 d4 bf 00 c1       	push   $0xc100bfd4
c10080b5:	68 e0 c0 00 c1       	push   $0xc100c0e0
c10080ba:	68 33 03 00 00       	push   $0x333
c10080bf:	68 18 ba 00 c1       	push   $0xc100ba18
c10080c4:	e8 a2 82 ff ff       	call   c100036b <__PANIC>
c10080c9:	83 ec 0c             	sub    $0xc,%esp
c10080cc:	ff 75 08             	pushl  0x8(%ebp)
c10080cf:	e8 4a 80 ff ff       	call   c100011e <strlen>
c10080d4:	83 c4 10             	add    $0x10,%esp
c10080d7:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c10080db:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c10080df:	8b 45 08             	mov    0x8(%ebp),%eax
c10080e2:	01 d0                	add    %edx,%eax
c10080e4:	83 ec 08             	sub    $0x8,%esp
c10080e7:	ff 75 e8             	pushl  -0x18(%ebp)
c10080ea:	50                   	push   %eax
c10080eb:	e8 2a 81 ff ff       	call   c100021a <strcpy>
c10080f0:	83 c4 10             	add    $0x10,%esp
c10080f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10080f6:	c6 00 00             	movb   $0x0,(%eax)
c10080f9:	83 ec 08             	sub    $0x8,%esp
c10080fc:	6a 2f                	push   $0x2f
c10080fe:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c1008104:	50                   	push   %eax
c1008105:	e8 8c 80 ff ff       	call   c1000196 <strrchr>
c100810a:	83 c4 10             	add    $0x10,%esp
c100810d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008110:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1008114:	75 b3                	jne    c10080c9 <sys_getcwd+0x182>
c1008116:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008119:	83 ec 08             	sub    $0x8,%esp
c100811c:	68 00 02 00 00       	push   $0x200
c1008121:	50                   	push   %eax
c1008122:	e8 b1 ac ff ff       	call   c1002dd8 <vmm_free>
c1008127:	83 c4 10             	add    $0x10,%esp
c100812a:	8b 45 08             	mov    0x8(%ebp),%eax
c100812d:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1008130:	5b                   	pop    %ebx
c1008131:	5f                   	pop    %edi
c1008132:	5d                   	pop    %ebp
c1008133:	c3                   	ret    

c1008134 <sys_stat>:
c1008134:	55                   	push   %ebp
c1008135:	89 e5                	mov    %esp,%ebp
c1008137:	81 ec 28 02 00 00    	sub    $0x228,%esp
c100813d:	83 ec 08             	sub    $0x8,%esp
c1008140:	68 47 ba 00 c1       	push   $0xc100ba47
c1008145:	ff 75 08             	pushl  0x8(%ebp)
c1008148:	e8 36 80 ff ff       	call   c1000183 <strcmp>
c100814d:	83 c4 10             	add    $0x10,%esp
c1008150:	85 c0                	test   %eax,%eax
c1008152:	74 2e                	je     c1008182 <sys_stat+0x4e>
c1008154:	83 ec 08             	sub    $0x8,%esp
c1008157:	68 49 ba 00 c1       	push   $0xc100ba49
c100815c:	ff 75 08             	pushl  0x8(%ebp)
c100815f:	e8 1f 80 ff ff       	call   c1000183 <strcmp>
c1008164:	83 c4 10             	add    $0x10,%esp
c1008167:	85 c0                	test   %eax,%eax
c1008169:	74 17                	je     c1008182 <sys_stat+0x4e>
c100816b:	83 ec 08             	sub    $0x8,%esp
c100816e:	68 4c ba 00 c1       	push   $0xc100ba4c
c1008173:	ff 75 08             	pushl  0x8(%ebp)
c1008176:	e8 08 80 ff ff       	call   c1000183 <strcmp>
c100817b:	83 c4 10             	add    $0x10,%esp
c100817e:	85 c0                	test   %eax,%eax
c1008180:	75 2d                	jne    c10081af <sys_stat+0x7b>
c1008182:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008185:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
c100818c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100818f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1008195:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c100819a:	8b 00                	mov    (%eax),%eax
c100819c:	8b 50 04             	mov    0x4(%eax),%edx
c100819f:	8b 45 0c             	mov    0xc(%ebp),%eax
c10081a2:	89 50 04             	mov    %edx,0x4(%eax)
c10081a5:	b8 00 00 00 00       	mov    $0x0,%eax
c10081aa:	e9 af 00 00 00       	jmp    c100825e <sys_stat+0x12a>
c10081af:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10081b6:	83 ec 04             	sub    $0x4,%esp
c10081b9:	68 08 02 00 00       	push   $0x208
c10081be:	6a 00                	push   $0x0
c10081c0:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10081c6:	50                   	push   %eax
c10081c7:	e8 de 7e ff ff       	call   c10000aa <memset>
c10081cc:	83 c4 10             	add    $0x10,%esp
c10081cf:	83 ec 08             	sub    $0x8,%esp
c10081d2:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10081d8:	50                   	push   %eax
c10081d9:	ff 75 08             	pushl  0x8(%ebp)
c10081dc:	e8 42 e8 ff ff       	call   c1006a23 <search_file>
c10081e1:	83 c4 10             	add    $0x10,%esp
c10081e4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10081e7:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10081eb:	74 4c                	je     c1008239 <sys_stat+0x105>
c10081ed:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10081f0:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10081f5:	83 ec 08             	sub    $0x8,%esp
c10081f8:	52                   	push   %edx
c10081f9:	50                   	push   %eax
c10081fa:	e8 3d 23 00 00       	call   c100a53c <inode_open>
c10081ff:	83 c4 10             	add    $0x10,%esp
c1008202:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008205:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008208:	8b 50 04             	mov    0x4(%eax),%edx
c100820b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100820e:	89 50 04             	mov    %edx,0x4(%eax)
c1008211:	83 ec 0c             	sub    $0xc,%esp
c1008214:	ff 75 ec             	pushl  -0x14(%ebp)
c1008217:	e8 f6 23 00 00       	call   c100a612 <inode_close>
c100821c:	83 c4 10             	add    $0x10,%esp
c100821f:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008222:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008225:	89 50 08             	mov    %edx,0x8(%eax)
c1008228:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100822b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100822e:	89 10                	mov    %edx,(%eax)
c1008230:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008237:	eb 13                	jmp    c100824c <sys_stat+0x118>
c1008239:	83 ec 08             	sub    $0x8,%esp
c100823c:	ff 75 08             	pushl  0x8(%ebp)
c100823f:	68 f6 bf 00 c1       	push   $0xc100bff6
c1008244:	e8 68 d5 ff ff       	call   c10057b1 <printk>
c1008249:	83 c4 10             	add    $0x10,%esp
c100824c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100824f:	83 ec 0c             	sub    $0xc,%esp
c1008252:	50                   	push   %eax
c1008253:	e8 1f 03 00 00       	call   c1008577 <dir_close>
c1008258:	83 c4 10             	add    $0x10,%esp
c100825b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100825e:	c9                   	leave  
c100825f:	c3                   	ret    

c1008260 <sys_chdir>:
c1008260:	55                   	push   %ebp
c1008261:	89 e5                	mov    %esp,%ebp
c1008263:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1008269:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1008270:	83 ec 04             	sub    $0x4,%esp
c1008273:	68 08 02 00 00       	push   $0x208
c1008278:	6a 00                	push   $0x0
c100827a:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1008280:	50                   	push   %eax
c1008281:	e8 24 7e ff ff       	call   c10000aa <memset>
c1008286:	83 c4 10             	add    $0x10,%esp
c1008289:	83 ec 08             	sub    $0x8,%esp
c100828c:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1008292:	50                   	push   %eax
c1008293:	ff 75 08             	pushl  0x8(%ebp)
c1008296:	e8 88 e7 ff ff       	call   c1006a23 <search_file>
c100829b:	83 c4 10             	add    $0x10,%esp
c100829e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10082a1:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10082a5:	74 32                	je     c10082d9 <sys_chdir+0x79>
c10082a7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10082aa:	83 f8 02             	cmp    $0x2,%eax
c10082ad:	75 17                	jne    c10082c6 <sys_chdir+0x66>
c10082af:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c10082b4:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10082b7:	89 90 f8 00 00 00    	mov    %edx,0xf8(%eax)
c10082bd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10082c4:	eb 13                	jmp    c10082d9 <sys_chdir+0x79>
c10082c6:	83 ec 08             	sub    $0x8,%esp
c10082c9:	ff 75 08             	pushl  0x8(%ebp)
c10082cc:	68 10 c0 00 c1       	push   $0xc100c010
c10082d1:	e8 db d4 ff ff       	call   c10057b1 <printk>
c10082d6:	83 c4 10             	add    $0x10,%esp
c10082d9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10082dc:	83 ec 0c             	sub    $0xc,%esp
c10082df:	50                   	push   %eax
c10082e0:	e8 92 02 00 00       	call   c1008577 <dir_close>
c10082e5:	83 c4 10             	add    $0x10,%esp
c10082e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10082eb:	c9                   	leave  
c10082ec:	c3                   	ret    

c10082ed <fs_init>:
c10082ed:	55                   	push   %ebp
c10082ee:	89 e5                	mov    %esp,%ebp
c10082f0:	83 ec 08             	sub    $0x8,%esp
c10082f3:	e8 82 e3 ff ff       	call   c100667a <mount_partition>
c10082f8:	90                   	nop
c10082f9:	c9                   	leave  
c10082fa:	c3                   	ret    

c10082fb <open_root_dir>:
c10082fb:	55                   	push   %ebp
c10082fc:	89 e5                	mov    %esp,%ebp
c10082fe:	53                   	push   %ebx
c10082ff:	83 ec 04             	sub    $0x4,%esp
c1008302:	83 ec 08             	sub    $0x8,%esp
c1008305:	6a 02                	push   $0x2
c1008307:	68 08 02 00 00       	push   $0x208
c100830c:	e8 a2 a9 ff ff       	call   c1002cb3 <vmm_malloc>
c1008311:	83 c4 10             	add    $0x10,%esp
c1008314:	a3 34 42 a1 c1       	mov    %eax,0xc1a14234
c1008319:	8b 45 08             	mov    0x8(%ebp),%eax
c100831c:	8b 40 10             	mov    0x10(%eax),%eax
c100831f:	8b 40 2c             	mov    0x2c(%eax),%eax
c1008322:	8b 1d 34 42 a1 c1    	mov    0xc1a14234,%ebx
c1008328:	83 ec 08             	sub    $0x8,%esp
c100832b:	50                   	push   %eax
c100832c:	ff 75 08             	pushl  0x8(%ebp)
c100832f:	e8 08 22 00 00       	call   c100a53c <inode_open>
c1008334:	83 c4 10             	add    $0x10,%esp
c1008337:	89 03                	mov    %eax,(%ebx)
c1008339:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c100833e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1008345:	90                   	nop
c1008346:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1008349:	c9                   	leave  
c100834a:	c3                   	ret    

c100834b <dir_open>:
c100834b:	55                   	push   %ebp
c100834c:	89 e5                	mov    %esp,%ebp
c100834e:	83 ec 18             	sub    $0x18,%esp
c1008351:	83 ec 08             	sub    $0x8,%esp
c1008354:	6a 02                	push   $0x2
c1008356:	68 08 02 00 00       	push   $0x208
c100835b:	e8 53 a9 ff ff       	call   c1002cb3 <vmm_malloc>
c1008360:	83 c4 10             	add    $0x10,%esp
c1008363:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008366:	83 ec 08             	sub    $0x8,%esp
c1008369:	ff 75 0c             	pushl  0xc(%ebp)
c100836c:	ff 75 08             	pushl  0x8(%ebp)
c100836f:	e8 c8 21 00 00       	call   c100a53c <inode_open>
c1008374:	83 c4 10             	add    $0x10,%esp
c1008377:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100837a:	89 02                	mov    %eax,(%edx)
c100837c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100837f:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1008386:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008389:	c9                   	leave  
c100838a:	c3                   	ret    

c100838b <search_dir_entry>:
c100838b:	55                   	push   %ebp
c100838c:	89 e5                	mov    %esp,%ebp
c100838e:	83 ec 28             	sub    $0x28,%esp
c1008391:	c7 45 e8 8c 00 00 00 	movl   $0x8c,-0x18(%ebp)
c1008398:	83 ec 08             	sub    $0x8,%esp
c100839b:	6a 02                	push   $0x2
c100839d:	68 30 02 00 00       	push   $0x230
c10083a2:	e8 0c a9 ff ff       	call   c1002cb3 <vmm_malloc>
c10083a7:	83 c4 10             	add    $0x10,%esp
c10083aa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10083ad:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c10083b1:	75 1a                	jne    c10083cd <search_dir_entry+0x42>
c10083b3:	83 ec 0c             	sub    $0xc,%esp
c10083b6:	68 ec c0 00 c1       	push   $0xc100c0ec
c10083bb:	e8 f1 d3 ff ff       	call   c10057b1 <printk>
c10083c0:	83 c4 10             	add    $0x10,%esp
c10083c3:	b8 00 00 00 00       	mov    $0x0,%eax
c10083c8:	e9 a8 01 00 00       	jmp    c1008575 <search_dir_entry+0x1ea>
c10083cd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10083d4:	eb 23                	jmp    c10083f9 <search_dir_entry+0x6e>
c10083d6:	8b 45 0c             	mov    0xc(%ebp),%eax
c10083d9:	8b 00                	mov    (%eax),%eax
c10083db:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10083de:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10083e5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10083e8:	01 ca                	add    %ecx,%edx
c10083ea:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c10083ed:	83 c1 04             	add    $0x4,%ecx
c10083f0:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c10083f3:	89 02                	mov    %eax,(%edx)
c10083f5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10083f9:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c10083fd:	76 d7                	jbe    c10083d6 <search_dir_entry+0x4b>
c10083ff:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008406:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008409:	8b 00                	mov    (%eax),%eax
c100840b:	8b 40 40             	mov    0x40(%eax),%eax
c100840e:	85 c0                	test   %eax,%eax
c1008410:	74 1d                	je     c100842f <search_dir_entry+0xa4>
c1008412:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008415:	8b 00                	mov    (%eax),%eax
c1008417:	8b 40 40             	mov    0x40(%eax),%eax
c100841a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c100841d:	83 c2 30             	add    $0x30,%edx
c1008420:	83 ec 04             	sub    $0x4,%esp
c1008423:	6a 01                	push   $0x1
c1008425:	50                   	push   %eax
c1008426:	52                   	push   %edx
c1008427:	e8 2d dc ff ff       	call   c1006059 <ide_read>
c100842c:	83 c4 10             	add    $0x10,%esp
c100842f:	83 ec 08             	sub    $0x8,%esp
c1008432:	6a 02                	push   $0x2
c1008434:	68 00 02 00 00       	push   $0x200
c1008439:	e8 75 a8 ff ff       	call   c1002cb3 <vmm_malloc>
c100843e:	83 c4 10             	add    $0x10,%esp
c1008441:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008444:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008447:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100844a:	8b 45 08             	mov    0x8(%ebp),%eax
c100844d:	8b 40 10             	mov    0x10(%eax),%eax
c1008450:	8b 40 30             	mov    0x30(%eax),%eax
c1008453:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008456:	b8 00 02 00 00       	mov    $0x200,%eax
c100845b:	ba 00 00 00 00       	mov    $0x0,%edx
c1008460:	f7 75 dc             	divl   -0x24(%ebp)
c1008463:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008466:	e9 d1 00 00 00       	jmp    c100853c <search_dir_entry+0x1b1>
c100846b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100846e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008475:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008478:	01 d0                	add    %edx,%eax
c100847a:	8b 00                	mov    (%eax),%eax
c100847c:	85 c0                	test   %eax,%eax
c100847e:	75 09                	jne    c1008489 <search_dir_entry+0xfe>
c1008480:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008484:	e9 b3 00 00 00       	jmp    c100853c <search_dir_entry+0x1b1>
c1008489:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100848c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1008493:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008496:	01 d0                	add    %edx,%eax
c1008498:	8b 00                	mov    (%eax),%eax
c100849a:	83 ec 04             	sub    $0x4,%esp
c100849d:	6a 01                	push   $0x1
c100849f:	50                   	push   %eax
c10084a0:	ff 75 e0             	pushl  -0x20(%ebp)
c10084a3:	e8 b1 db ff ff       	call   c1006059 <ide_read>
c10084a8:	83 c4 10             	add    $0x10,%esp
c10084ab:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10084b2:	eb 61                	jmp    c1008515 <search_dir_entry+0x18a>
c10084b4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10084b7:	83 ec 08             	sub    $0x8,%esp
c10084ba:	ff 75 10             	pushl  0x10(%ebp)
c10084bd:	50                   	push   %eax
c10084be:	e8 c0 7c ff ff       	call   c1000183 <strcmp>
c10084c3:	83 c4 10             	add    $0x10,%esp
c10084c6:	85 c0                	test   %eax,%eax
c10084c8:	75 43                	jne    c100850d <search_dir_entry+0x182>
c10084ca:	83 ec 04             	sub    $0x4,%esp
c10084cd:	ff 75 dc             	pushl  -0x24(%ebp)
c10084d0:	ff 75 f0             	pushl  -0x10(%ebp)
c10084d3:	ff 75 14             	pushl  0x14(%ebp)
c10084d6:	e8 2d 7c ff ff       	call   c1000108 <memcpy>
c10084db:	83 c4 10             	add    $0x10,%esp
c10084de:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10084e1:	83 ec 08             	sub    $0x8,%esp
c10084e4:	68 00 02 00 00       	push   $0x200
c10084e9:	50                   	push   %eax
c10084ea:	e8 e9 a8 ff ff       	call   c1002dd8 <vmm_free>
c10084ef:	83 c4 10             	add    $0x10,%esp
c10084f2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10084f5:	83 ec 08             	sub    $0x8,%esp
c10084f8:	68 30 02 00 00       	push   $0x230
c10084fd:	50                   	push   %eax
c10084fe:	e8 d5 a8 ff ff       	call   c1002dd8 <vmm_free>
c1008503:	83 c4 10             	add    $0x10,%esp
c1008506:	b8 01 00 00 00       	mov    $0x1,%eax
c100850b:	eb 68                	jmp    c1008575 <search_dir_entry+0x1ea>
c100850d:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1008511:	83 45 f0 18          	addl   $0x18,-0x10(%ebp)
c1008515:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008518:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c100851b:	72 97                	jb     c10084b4 <search_dir_entry+0x129>
c100851d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008521:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008524:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008527:	83 ec 04             	sub    $0x4,%esp
c100852a:	68 00 02 00 00       	push   $0x200
c100852f:	6a 00                	push   $0x0
c1008531:	ff 75 e0             	pushl  -0x20(%ebp)
c1008534:	e8 71 7b ff ff       	call   c10000aa <memset>
c1008539:	83 c4 10             	add    $0x10,%esp
c100853c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100853f:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1008542:	0f 82 23 ff ff ff    	jb     c100846b <search_dir_entry+0xe0>
c1008548:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100854b:	83 ec 08             	sub    $0x8,%esp
c100854e:	68 00 02 00 00       	push   $0x200
c1008553:	50                   	push   %eax
c1008554:	e8 7f a8 ff ff       	call   c1002dd8 <vmm_free>
c1008559:	83 c4 10             	add    $0x10,%esp
c100855c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100855f:	83 ec 08             	sub    $0x8,%esp
c1008562:	68 30 02 00 00       	push   $0x230
c1008567:	50                   	push   %eax
c1008568:	e8 6b a8 ff ff       	call   c1002dd8 <vmm_free>
c100856d:	83 c4 10             	add    $0x10,%esp
c1008570:	b8 00 00 00 00       	mov    $0x0,%eax
c1008575:	c9                   	leave  
c1008576:	c3                   	ret    

c1008577 <dir_close>:
c1008577:	55                   	push   %ebp
c1008578:	89 e5                	mov    %esp,%ebp
c100857a:	83 ec 08             	sub    $0x8,%esp
c100857d:	a1 34 42 a1 c1       	mov    0xc1a14234,%eax
c1008582:	39 45 08             	cmp    %eax,0x8(%ebp)
c1008585:	74 27                	je     c10085ae <dir_close+0x37>
c1008587:	8b 45 08             	mov    0x8(%ebp),%eax
c100858a:	8b 00                	mov    (%eax),%eax
c100858c:	83 ec 0c             	sub    $0xc,%esp
c100858f:	50                   	push   %eax
c1008590:	e8 7d 20 00 00       	call   c100a612 <inode_close>
c1008595:	83 c4 10             	add    $0x10,%esp
c1008598:	8b 45 08             	mov    0x8(%ebp),%eax
c100859b:	83 ec 08             	sub    $0x8,%esp
c100859e:	68 08 02 00 00       	push   $0x208
c10085a3:	50                   	push   %eax
c10085a4:	e8 2f a8 ff ff       	call   c1002dd8 <vmm_free>
c10085a9:	83 c4 10             	add    $0x10,%esp
c10085ac:	eb 01                	jmp    c10085af <dir_close+0x38>
c10085ae:	90                   	nop
c10085af:	c9                   	leave  
c10085b0:	c3                   	ret    

c10085b1 <create_dir_entry>:
c10085b1:	55                   	push   %ebp
c10085b2:	89 e5                	mov    %esp,%ebp
c10085b4:	83 ec 18             	sub    $0x18,%esp
c10085b7:	8b 45 10             	mov    0x10(%ebp),%eax
c10085ba:	88 45 f4             	mov    %al,-0xc(%ebp)
c10085bd:	83 ec 0c             	sub    $0xc,%esp
c10085c0:	ff 75 08             	pushl  0x8(%ebp)
c10085c3:	e8 56 7b ff ff       	call   c100011e <strlen>
c10085c8:	83 c4 10             	add    $0x10,%esp
c10085cb:	83 f8 10             	cmp    $0x10,%eax
c10085ce:	76 16                	jbe    c10085e6 <create_dir_entry+0x35>
c10085d0:	68 20 c1 00 c1       	push   $0xc100c120
c10085d5:	68 d4 c2 00 c1       	push   $0xc100c2d4
c10085da:	6a 72                	push   $0x72
c10085dc:	68 48 c1 00 c1       	push   $0xc100c148
c10085e1:	e8 85 7d ff ff       	call   c100036b <__PANIC>
c10085e6:	83 ec 0c             	sub    $0xc,%esp
c10085e9:	ff 75 08             	pushl  0x8(%ebp)
c10085ec:	e8 2d 7b ff ff       	call   c100011e <strlen>
c10085f1:	83 c4 10             	add    $0x10,%esp
c10085f4:	8b 55 14             	mov    0x14(%ebp),%edx
c10085f7:	83 ec 04             	sub    $0x4,%esp
c10085fa:	50                   	push   %eax
c10085fb:	ff 75 08             	pushl  0x8(%ebp)
c10085fe:	52                   	push   %edx
c10085ff:	e8 04 7b ff ff       	call   c1000108 <memcpy>
c1008604:	83 c4 10             	add    $0x10,%esp
c1008607:	8b 45 14             	mov    0x14(%ebp),%eax
c100860a:	8b 55 0c             	mov    0xc(%ebp),%edx
c100860d:	89 50 10             	mov    %edx,0x10(%eax)
c1008610:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
c1008614:	8b 45 14             	mov    0x14(%ebp),%eax
c1008617:	89 50 14             	mov    %edx,0x14(%eax)
c100861a:	90                   	nop
c100861b:	c9                   	leave  
c100861c:	c3                   	ret    

c100861d <sync_dir_entry>:
c100861d:	55                   	push   %ebp
c100861e:	89 e5                	mov    %esp,%ebp
c1008620:	57                   	push   %edi
c1008621:	53                   	push   %ebx
c1008622:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1008628:	8b 45 08             	mov    0x8(%ebp),%eax
c100862b:	8b 00                	mov    (%eax),%eax
c100862d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008630:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008633:	8b 40 04             	mov    0x4(%eax),%eax
c1008636:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008639:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100863e:	8b 40 10             	mov    0x10(%eax),%eax
c1008641:	8b 40 30             	mov    0x30(%eax),%eax
c1008644:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008647:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100864a:	ba 00 00 00 00       	mov    $0x0,%edx
c100864f:	f7 75 e8             	divl   -0x18(%ebp)
c1008652:	89 d0                	mov    %edx,%eax
c1008654:	85 c0                	test   %eax,%eax
c1008656:	74 19                	je     c1008671 <sync_dir_entry+0x54>
c1008658:	68 78 c1 00 c1       	push   $0xc100c178
c100865d:	68 e8 c2 00 c1       	push   $0xc100c2e8
c1008662:	68 80 00 00 00       	push   $0x80
c1008667:	68 48 c1 00 c1       	push   $0xc100c148
c100866c:	e8 fa 7c ff ff       	call   c100036b <__PANIC>
c1008671:	b8 00 02 00 00       	mov    $0x200,%eax
c1008676:	ba 00 00 00 00       	mov    $0x0,%edx
c100867b:	f7 75 e8             	divl   -0x18(%ebp)
c100867e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008681:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1008688:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100868c:	8d 95 a0 fd ff ff    	lea    -0x260(%ebp),%edx
c1008692:	b8 00 00 00 00       	mov    $0x0,%eax
c1008697:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100869c:	89 d7                	mov    %edx,%edi
c100869e:	f3 ab                	rep stos %eax,%es:(%edi)
c10086a0:	eb 22                	jmp    c10086c4 <sync_dir_entry+0xa7>
c10086a2:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c10086a6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10086aa:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10086ad:	83 c1 04             	add    $0x4,%ecx
c10086b0:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c10086b3:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c10086ba:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10086be:	83 c0 01             	add    $0x1,%eax
c10086c1:	88 45 f7             	mov    %al,-0x9(%ebp)
c10086c4:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c10086c8:	76 d8                	jbe    c10086a2 <sync_dir_entry+0x85>
c10086ca:	8b 45 10             	mov    0x10(%ebp),%eax
c10086cd:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10086d0:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c10086d7:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c10086db:	e9 52 03 00 00       	jmp    c1008a32 <sync_dir_entry+0x415>
c10086e0:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c10086e7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10086eb:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c10086f2:	85 c0                	test   %eax,%eax
c10086f4:	0f 85 80 02 00 00    	jne    c100897a <sync_dir_entry+0x35d>
c10086fa:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10086ff:	83 ec 0c             	sub    $0xc,%esp
c1008702:	50                   	push   %eax
c1008703:	e8 27 0c 00 00       	call   c100932f <block_bitmap_alloc>
c1008708:	83 c4 10             	add    $0x10,%esp
c100870b:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100870e:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c1008712:	75 1a                	jne    c100872e <sync_dir_entry+0x111>
c1008714:	83 ec 0c             	sub    $0xc,%esp
c1008717:	68 98 c1 00 c1       	push   $0xc100c198
c100871c:	e8 90 d0 ff ff       	call   c10057b1 <printk>
c1008721:	83 c4 10             	add    $0x10,%esp
c1008724:	b8 00 00 00 00       	mov    $0x0,%eax
c1008729:	e9 23 03 00 00       	jmp    c1008a51 <sync_dir_entry+0x434>
c100872e:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008731:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008736:	8b 40 10             	mov    0x10(%eax),%eax
c1008739:	8b 40 28             	mov    0x28(%eax),%eax
c100873c:	29 c2                	sub    %eax,%edx
c100873e:	89 d0                	mov    %edx,%eax
c1008740:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008743:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008747:	75 19                	jne    c1008762 <sync_dir_entry+0x145>
c1008749:	68 c6 c1 00 c1       	push   $0xc100c1c6
c100874e:	68 e8 c2 00 c1       	push   $0xc100c2e8
c1008753:	68 a3 00 00 00       	push   $0xa3
c1008758:	68 48 c1 00 c1       	push   $0xc100c148
c100875d:	e8 09 7c ff ff       	call   c100036b <__PANIC>
c1008762:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1008765:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100876a:	83 ec 04             	sub    $0x4,%esp
c100876d:	6a 01                	push   $0x1
c100876f:	52                   	push   %edx
c1008770:	50                   	push   %eax
c1008771:	e8 87 0c 00 00       	call   c10093fd <bitmap_sync>
c1008776:	83 c4 10             	add    $0x10,%esp
c1008779:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1008780:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1008784:	77 27                	ja     c10087ad <sync_dir_entry+0x190>
c1008786:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100878a:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100878d:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1008794:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1008798:	8b 94 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%edx
c100879f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10087a2:	83 c1 04             	add    $0x4,%ecx
c10087a5:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c10087a8:	e9 6d 01 00 00       	jmp    c100891a <sync_dir_entry+0x2fd>
c10087ad:	80 7d f7 0c          	cmpb   $0xc,-0x9(%ebp)
c10087b1:	0f 85 37 01 00 00    	jne    c10088ee <sync_dir_entry+0x2d1>
c10087b7:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10087ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10087bd:	89 50 40             	mov    %edx,0x40(%eax)
c10087c0:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c10087c7:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10087cc:	83 ec 0c             	sub    $0xc,%esp
c10087cf:	50                   	push   %eax
c10087d0:	e8 5a 0b 00 00       	call   c100932f <block_bitmap_alloc>
c10087d5:	83 c4 10             	add    $0x10,%esp
c10087d8:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10087db:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c10087df:	0f 85 95 00 00 00    	jne    c100887a <sync_dir_entry+0x25d>
c10087e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10087e8:	8b 50 40             	mov    0x40(%eax),%edx
c10087eb:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10087f0:	8b 40 10             	mov    0x10(%eax),%eax
c10087f3:	8b 40 28             	mov    0x28(%eax),%eax
c10087f6:	29 c2                	sub    %eax,%edx
c10087f8:	89 d0                	mov    %edx,%eax
c10087fa:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10087fd:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008800:	8d 50 07             	lea    0x7(%eax),%edx
c1008803:	85 c0                	test   %eax,%eax
c1008805:	0f 48 c2             	cmovs  %edx,%eax
c1008808:	c1 f8 03             	sar    $0x3,%eax
c100880b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100880e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008811:	99                   	cltd   
c1008812:	c1 ea 1d             	shr    $0x1d,%edx
c1008815:	01 d0                	add    %edx,%eax
c1008817:	83 e0 07             	and    $0x7,%eax
c100881a:	29 d0                	sub    %edx,%eax
c100881c:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100881f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008824:	8b 50 18             	mov    0x18(%eax),%edx
c1008827:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100882a:	01 d0                	add    %edx,%eax
c100882c:	0f b6 00             	movzbl (%eax),%eax
c100882f:	89 c2                	mov    %eax,%edx
c1008831:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008834:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008839:	89 c1                	mov    %eax,%ecx
c100883b:	d3 e3                	shl    %cl,%ebx
c100883d:	89 d8                	mov    %ebx,%eax
c100883f:	f7 d0                	not    %eax
c1008841:	89 d1                	mov    %edx,%ecx
c1008843:	21 c1                	and    %eax,%ecx
c1008845:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100884a:	8b 50 18             	mov    0x18(%eax),%edx
c100884d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008850:	01 d0                	add    %edx,%eax
c1008852:	89 ca                	mov    %ecx,%edx
c1008854:	88 10                	mov    %dl,(%eax)
c1008856:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008859:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1008860:	83 ec 0c             	sub    $0xc,%esp
c1008863:	68 98 c1 00 c1       	push   $0xc100c198
c1008868:	e8 44 cf ff ff       	call   c10057b1 <printk>
c100886d:	83 c4 10             	add    $0x10,%esp
c1008870:	b8 00 00 00 00       	mov    $0x0,%eax
c1008875:	e9 d7 01 00 00       	jmp    c1008a51 <sync_dir_entry+0x434>
c100887a:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100887d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008882:	8b 40 10             	mov    0x10(%eax),%eax
c1008885:	8b 40 28             	mov    0x28(%eax),%eax
c1008888:	29 c2                	sub    %eax,%edx
c100888a:	89 d0                	mov    %edx,%eax
c100888c:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100888f:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008893:	75 19                	jne    c10088ae <sync_dir_entry+0x291>
c1008895:	68 c6 c1 00 c1       	push   $0xc100c1c6
c100889a:	68 e8 c2 00 c1       	push   $0xc100c2e8
c100889f:	68 ba 00 00 00       	push   $0xba
c10088a4:	68 48 c1 00 c1       	push   $0xc100c148
c10088a9:	e8 bd 7a ff ff       	call   c100036b <__PANIC>
c10088ae:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10088b1:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10088b6:	83 ec 04             	sub    $0x4,%esp
c10088b9:	6a 01                	push   $0x1
c10088bb:	52                   	push   %edx
c10088bc:	50                   	push   %eax
c10088bd:	e8 3b 0b 00 00       	call   c10093fd <bitmap_sync>
c10088c2:	83 c4 10             	add    $0x10,%esp
c10088c5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10088c8:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c10088ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10088d1:	8b 50 40             	mov    0x40(%eax),%edx
c10088d4:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c10088da:	83 c0 30             	add    $0x30,%eax
c10088dd:	83 ec 04             	sub    $0x4,%esp
c10088e0:	6a 01                	push   $0x1
c10088e2:	52                   	push   %edx
c10088e3:	50                   	push   %eax
c10088e4:	e8 ad d7 ff ff       	call   c1006096 <ide_write>
c10088e9:	83 c4 10             	add    $0x10,%esp
c10088ec:	eb 2c                	jmp    c100891a <sync_dir_entry+0x2fd>
c10088ee:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10088f2:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10088f5:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c10088fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10088ff:	8b 50 40             	mov    0x40(%eax),%edx
c1008902:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c1008908:	83 c0 30             	add    $0x30,%eax
c100890b:	83 ec 04             	sub    $0x4,%esp
c100890e:	6a 01                	push   $0x1
c1008910:	52                   	push   %edx
c1008911:	50                   	push   %eax
c1008912:	e8 7f d7 ff ff       	call   c1006096 <ide_write>
c1008917:	83 c4 10             	add    $0x10,%esp
c100891a:	83 ec 04             	sub    $0x4,%esp
c100891d:	68 00 02 00 00       	push   $0x200
c1008922:	6a 00                	push   $0x0
c1008924:	ff 75 10             	pushl  0x10(%ebp)
c1008927:	e8 7e 77 ff ff       	call   c10000aa <memset>
c100892c:	83 c4 10             	add    $0x10,%esp
c100892f:	83 ec 04             	sub    $0x4,%esp
c1008932:	ff 75 e8             	pushl  -0x18(%ebp)
c1008935:	ff 75 0c             	pushl  0xc(%ebp)
c1008938:	ff 75 10             	pushl  0x10(%ebp)
c100893b:	e8 c8 77 ff ff       	call   c1000108 <memcpy>
c1008940:	83 c4 10             	add    $0x10,%esp
c1008943:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008947:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c100894e:	83 ec 04             	sub    $0x4,%esp
c1008951:	6a 01                	push   $0x1
c1008953:	50                   	push   %eax
c1008954:	ff 75 10             	pushl  0x10(%ebp)
c1008957:	e8 3a d7 ff ff       	call   c1006096 <ide_write>
c100895c:	83 c4 10             	add    $0x10,%esp
c100895f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008962:	8b 50 04             	mov    0x4(%eax),%edx
c1008965:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008968:	01 c2                	add    %eax,%edx
c100896a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100896d:	89 50 04             	mov    %edx,0x4(%eax)
c1008970:	b8 01 00 00 00       	mov    $0x1,%eax
c1008975:	e9 d7 00 00 00       	jmp    c1008a51 <sync_dir_entry+0x434>
c100897a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100897e:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1008985:	83 ec 04             	sub    $0x4,%esp
c1008988:	6a 01                	push   $0x1
c100898a:	50                   	push   %eax
c100898b:	ff 75 10             	pushl  0x10(%ebp)
c100898e:	e8 c6 d6 ff ff       	call   c1006059 <ide_read>
c1008993:	83 c4 10             	add    $0x10,%esp
c1008996:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c100899a:	eb 7f                	jmp    c1008a1b <sync_dir_entry+0x3fe>
c100899c:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c10089a0:	89 d0                	mov    %edx,%eax
c10089a2:	01 c0                	add    %eax,%eax
c10089a4:	01 d0                	add    %edx,%eax
c10089a6:	c1 e0 03             	shl    $0x3,%eax
c10089a9:	89 c2                	mov    %eax,%edx
c10089ab:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10089ae:	01 d0                	add    %edx,%eax
c10089b0:	8b 40 14             	mov    0x14(%eax),%eax
c10089b3:	85 c0                	test   %eax,%eax
c10089b5:	75 5a                	jne    c1008a11 <sync_dir_entry+0x3f4>
c10089b7:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c10089bb:	89 d0                	mov    %edx,%eax
c10089bd:	01 c0                	add    %eax,%eax
c10089bf:	01 d0                	add    %edx,%eax
c10089c1:	c1 e0 03             	shl    $0x3,%eax
c10089c4:	89 c2                	mov    %eax,%edx
c10089c6:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10089c9:	01 d0                	add    %edx,%eax
c10089cb:	83 ec 04             	sub    $0x4,%esp
c10089ce:	ff 75 e8             	pushl  -0x18(%ebp)
c10089d1:	ff 75 0c             	pushl  0xc(%ebp)
c10089d4:	50                   	push   %eax
c10089d5:	e8 2e 77 ff ff       	call   c1000108 <memcpy>
c10089da:	83 c4 10             	add    $0x10,%esp
c10089dd:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10089e1:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c10089e8:	83 ec 04             	sub    $0x4,%esp
c10089eb:	6a 01                	push   $0x1
c10089ed:	50                   	push   %eax
c10089ee:	ff 75 10             	pushl  0x10(%ebp)
c10089f1:	e8 a0 d6 ff ff       	call   c1006096 <ide_write>
c10089f6:	83 c4 10             	add    $0x10,%esp
c10089f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10089fc:	8b 50 04             	mov    0x4(%eax),%edx
c10089ff:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008a02:	01 c2                	add    %eax,%edx
c1008a04:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008a07:	89 50 04             	mov    %edx,0x4(%eax)
c1008a0a:	b8 01 00 00 00       	mov    $0x1,%eax
c1008a0f:	eb 40                	jmp    c1008a51 <sync_dir_entry+0x434>
c1008a11:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1008a15:	83 c0 01             	add    $0x1,%eax
c1008a18:	88 45 f6             	mov    %al,-0xa(%ebp)
c1008a1b:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1008a1f:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1008a22:	0f 87 74 ff ff ff    	ja     c100899c <sync_dir_entry+0x37f>
c1008a28:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008a2c:	83 c0 01             	add    $0x1,%eax
c1008a2f:	88 45 f7             	mov    %al,-0x9(%ebp)
c1008a32:	80 7d f7 8b          	cmpb   $0x8b,-0x9(%ebp)
c1008a36:	0f 86 a4 fc ff ff    	jbe    c10086e0 <sync_dir_entry+0xc3>
c1008a3c:	83 ec 0c             	sub    $0xc,%esp
c1008a3f:	68 dd c1 00 c1       	push   $0xc100c1dd
c1008a44:	e8 68 cd ff ff       	call   c10057b1 <printk>
c1008a49:	83 c4 10             	add    $0x10,%esp
c1008a4c:	b8 00 00 00 00       	mov    $0x0,%eax
c1008a51:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1008a54:	5b                   	pop    %ebx
c1008a55:	5f                   	pop    %edi
c1008a56:	5d                   	pop    %ebp
c1008a57:	c3                   	ret    

c1008a58 <delete_dir_entry>:
c1008a58:	55                   	push   %ebp
c1008a59:	89 e5                	mov    %esp,%ebp
c1008a5b:	57                   	push   %edi
c1008a5c:	53                   	push   %ebx
c1008a5d:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1008a63:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008a66:	8b 00                	mov    (%eax),%eax
c1008a68:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008a6b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008a72:	8d 95 98 fd ff ff    	lea    -0x268(%ebp),%edx
c1008a78:	b8 00 00 00 00       	mov    $0x0,%eax
c1008a7d:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1008a82:	89 d7                	mov    %edx,%edi
c1008a84:	f3 ab                	rep stos %eax,%es:(%edi)
c1008a86:	eb 1a                	jmp    c1008aa2 <delete_dir_entry+0x4a>
c1008a88:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008a8b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008a8e:	83 c2 04             	add    $0x4,%edx
c1008a91:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1008a94:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008a97:	89 94 85 98 fd ff ff 	mov    %edx,-0x268(%ebp,%eax,4)
c1008a9e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008aa2:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1008aa6:	76 e0                	jbe    c1008a88 <delete_dir_entry+0x30>
c1008aa8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008aab:	8b 40 40             	mov    0x40(%eax),%eax
c1008aae:	85 c0                	test   %eax,%eax
c1008ab0:	74 1e                	je     c1008ad0 <delete_dir_entry+0x78>
c1008ab2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008ab5:	8b 50 40             	mov    0x40(%eax),%edx
c1008ab8:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1008abe:	83 c0 30             	add    $0x30,%eax
c1008ac1:	83 ec 04             	sub    $0x4,%esp
c1008ac4:	6a 01                	push   $0x1
c1008ac6:	52                   	push   %edx
c1008ac7:	50                   	push   %eax
c1008ac8:	e8 8c d5 ff ff       	call   c1006059 <ide_read>
c1008acd:	83 c4 10             	add    $0x10,%esp
c1008ad0:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ad3:	8b 40 10             	mov    0x10(%eax),%eax
c1008ad6:	8b 40 30             	mov    0x30(%eax),%eax
c1008ad9:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008adc:	b8 00 02 00 00       	mov    $0x200,%eax
c1008ae1:	ba 00 00 00 00       	mov    $0x0,%edx
c1008ae6:	f7 75 e0             	divl   -0x20(%ebp)
c1008ae9:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008aec:	8b 45 14             	mov    0x14(%ebp),%eax
c1008aef:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008af2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008af9:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1008afd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008b04:	e9 d8 03 00 00       	jmp    c1008ee1 <delete_dir_entry+0x489>
c1008b09:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1008b0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008b10:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008b17:	85 c0                	test   %eax,%eax
c1008b19:	75 09                	jne    c1008b24 <delete_dir_entry+0xcc>
c1008b1b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008b1f:	e9 bd 03 00 00       	jmp    c1008ee1 <delete_dir_entry+0x489>
c1008b24:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
c1008b28:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1008b2c:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008b2f:	83 ec 04             	sub    $0x4,%esp
c1008b32:	68 00 02 00 00       	push   $0x200
c1008b37:	6a 00                	push   $0x0
c1008b39:	ff 75 14             	pushl  0x14(%ebp)
c1008b3c:	e8 69 75 ff ff       	call   c10000aa <memset>
c1008b41:	83 c4 10             	add    $0x10,%esp
c1008b44:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008b47:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008b4e:	83 ec 04             	sub    $0x4,%esp
c1008b51:	6a 01                	push   $0x1
c1008b53:	50                   	push   %eax
c1008b54:	ff 75 14             	pushl  0x14(%ebp)
c1008b57:	e8 fd d4 ff ff       	call   c1006059 <ide_read>
c1008b5c:	83 c4 10             	add    $0x10,%esp
c1008b5f:	e9 0d 01 00 00       	jmp    c1008c71 <delete_dir_entry+0x219>
c1008b64:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008b68:	89 d0                	mov    %edx,%eax
c1008b6a:	01 c0                	add    %eax,%eax
c1008b6c:	01 d0                	add    %edx,%eax
c1008b6e:	c1 e0 03             	shl    $0x3,%eax
c1008b71:	89 c2                	mov    %eax,%edx
c1008b73:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008b76:	01 d0                	add    %edx,%eax
c1008b78:	8b 40 14             	mov    0x14(%eax),%eax
c1008b7b:	85 c0                	test   %eax,%eax
c1008b7d:	0f 84 e4 00 00 00    	je     c1008c67 <delete_dir_entry+0x20f>
c1008b83:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008b87:	89 d0                	mov    %edx,%eax
c1008b89:	01 c0                	add    %eax,%eax
c1008b8b:	01 d0                	add    %edx,%eax
c1008b8d:	c1 e0 03             	shl    $0x3,%eax
c1008b90:	89 c2                	mov    %eax,%edx
c1008b92:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008b95:	01 d0                	add    %edx,%eax
c1008b97:	83 ec 08             	sub    $0x8,%esp
c1008b9a:	68 f1 c1 00 c1       	push   $0xc100c1f1
c1008b9f:	50                   	push   %eax
c1008ba0:	e8 de 75 ff ff       	call   c1000183 <strcmp>
c1008ba5:	83 c4 10             	add    $0x10,%esp
c1008ba8:	85 c0                	test   %eax,%eax
c1008baa:	75 09                	jne    c1008bb5 <delete_dir_entry+0x15d>
c1008bac:	c6 45 ed 01          	movb   $0x1,-0x13(%ebp)
c1008bb0:	e9 b2 00 00 00       	jmp    c1008c67 <delete_dir_entry+0x20f>
c1008bb5:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008bb9:	89 d0                	mov    %edx,%eax
c1008bbb:	01 c0                	add    %eax,%eax
c1008bbd:	01 d0                	add    %edx,%eax
c1008bbf:	c1 e0 03             	shl    $0x3,%eax
c1008bc2:	89 c2                	mov    %eax,%edx
c1008bc4:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008bc7:	01 d0                	add    %edx,%eax
c1008bc9:	83 ec 08             	sub    $0x8,%esp
c1008bcc:	68 f1 c1 00 c1       	push   $0xc100c1f1
c1008bd1:	50                   	push   %eax
c1008bd2:	e8 ac 75 ff ff       	call   c1000183 <strcmp>
c1008bd7:	83 c4 10             	add    $0x10,%esp
c1008bda:	85 c0                	test   %eax,%eax
c1008bdc:	0f 84 85 00 00 00    	je     c1008c67 <delete_dir_entry+0x20f>
c1008be2:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008be6:	89 d0                	mov    %edx,%eax
c1008be8:	01 c0                	add    %eax,%eax
c1008bea:	01 d0                	add    %edx,%eax
c1008bec:	c1 e0 03             	shl    $0x3,%eax
c1008bef:	89 c2                	mov    %eax,%edx
c1008bf1:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008bf4:	01 d0                	add    %edx,%eax
c1008bf6:	83 ec 08             	sub    $0x8,%esp
c1008bf9:	68 f3 c1 00 c1       	push   $0xc100c1f3
c1008bfe:	50                   	push   %eax
c1008bff:	e8 7f 75 ff ff       	call   c1000183 <strcmp>
c1008c04:	83 c4 10             	add    $0x10,%esp
c1008c07:	85 c0                	test   %eax,%eax
c1008c09:	74 5c                	je     c1008c67 <delete_dir_entry+0x20f>
c1008c0b:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1008c0f:	83 c0 01             	add    $0x1,%eax
c1008c12:	88 45 ee             	mov    %al,-0x12(%ebp)
c1008c15:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008c19:	89 d0                	mov    %edx,%eax
c1008c1b:	01 c0                	add    %eax,%eax
c1008c1d:	01 d0                	add    %edx,%eax
c1008c1f:	c1 e0 03             	shl    $0x3,%eax
c1008c22:	89 c2                	mov    %eax,%edx
c1008c24:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008c27:	01 d0                	add    %edx,%eax
c1008c29:	8b 40 10             	mov    0x10(%eax),%eax
c1008c2c:	39 45 10             	cmp    %eax,0x10(%ebp)
c1008c2f:	75 36                	jne    c1008c67 <delete_dir_entry+0x20f>
c1008c31:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1008c35:	74 19                	je     c1008c50 <delete_dir_entry+0x1f8>
c1008c37:	68 f6 c1 00 c1       	push   $0xc100c1f6
c1008c3c:	68 f8 c2 00 c1       	push   $0xc100c2f8
c1008c41:	68 10 01 00 00       	push   $0x110
c1008c46:	68 48 c1 00 c1       	push   $0xc100c148
c1008c4b:	e8 1b 77 ff ff       	call   c100036b <__PANIC>
c1008c50:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1008c54:	89 d0                	mov    %edx,%eax
c1008c56:	01 c0                	add    %eax,%eax
c1008c58:	01 d0                	add    %edx,%eax
c1008c5a:	c1 e0 03             	shl    $0x3,%eax
c1008c5d:	89 c2                	mov    %eax,%edx
c1008c5f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008c62:	01 d0                	add    %edx,%eax
c1008c64:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008c67:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008c6b:	83 c0 01             	add    $0x1,%eax
c1008c6e:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008c71:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008c75:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c1008c78:	0f 87 e6 fe ff ff    	ja     c1008b64 <delete_dir_entry+0x10c>
c1008c7e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1008c82:	75 09                	jne    c1008c8d <delete_dir_entry+0x235>
c1008c84:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008c88:	e9 54 02 00 00       	jmp    c1008ee1 <delete_dir_entry+0x489>
c1008c8d:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
c1008c91:	75 19                	jne    c1008cac <delete_dir_entry+0x254>
c1008c93:	68 0e c2 00 c1       	push   $0xc100c20e
c1008c98:	68 f8 c2 00 c1       	push   $0xc100c2f8
c1008c9d:	68 20 01 00 00       	push   $0x120
c1008ca2:	68 48 c1 00 c1       	push   $0xc100c148
c1008ca7:	e8 bf 76 ff ff       	call   c100036b <__PANIC>
c1008cac:	80 7d ee 01          	cmpb   $0x1,-0x12(%ebp)
c1008cb0:	0f 85 98 01 00 00    	jne    c1008e4e <delete_dir_entry+0x3f6>
c1008cb6:	80 7d ed 00          	cmpb   $0x0,-0x13(%ebp)
c1008cba:	0f 85 8e 01 00 00    	jne    c1008e4e <delete_dir_entry+0x3f6>
c1008cc0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008cc3:	8b 94 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%edx
c1008cca:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ccd:	8b 40 10             	mov    0x10(%eax),%eax
c1008cd0:	8b 40 28             	mov    0x28(%eax),%eax
c1008cd3:	29 c2                	sub    %eax,%edx
c1008cd5:	89 d0                	mov    %edx,%eax
c1008cd7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008cda:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008cdd:	c1 e8 03             	shr    $0x3,%eax
c1008ce0:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008ce3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008ce6:	83 e0 07             	and    $0x7,%eax
c1008ce9:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008cec:	8b 45 08             	mov    0x8(%ebp),%eax
c1008cef:	8b 50 18             	mov    0x18(%eax),%edx
c1008cf2:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008cf5:	01 d0                	add    %edx,%eax
c1008cf7:	0f b6 00             	movzbl (%eax),%eax
c1008cfa:	89 c2                	mov    %eax,%edx
c1008cfc:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008cff:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008d04:	89 c1                	mov    %eax,%ecx
c1008d06:	d3 e3                	shl    %cl,%ebx
c1008d08:	89 d8                	mov    %ebx,%eax
c1008d0a:	f7 d0                	not    %eax
c1008d0c:	89 d1                	mov    %edx,%ecx
c1008d0e:	21 c1                	and    %eax,%ecx
c1008d10:	8b 45 08             	mov    0x8(%ebp),%eax
c1008d13:	8b 50 18             	mov    0x18(%eax),%edx
c1008d16:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008d19:	01 d0                	add    %edx,%eax
c1008d1b:	89 ca                	mov    %ecx,%edx
c1008d1d:	88 10                	mov    %dl,(%eax)
c1008d1f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008d24:	83 ec 04             	sub    $0x4,%esp
c1008d27:	6a 01                	push   $0x1
c1008d29:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008d2c:	50                   	push   %eax
c1008d2d:	e8 cb 06 00 00       	call   c10093fd <bitmap_sync>
c1008d32:	83 c4 10             	add    $0x10,%esp
c1008d35:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1008d39:	77 15                	ja     c1008d50 <delete_dir_entry+0x2f8>
c1008d3b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008d3e:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008d41:	83 c2 04             	add    $0x4,%edx
c1008d44:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1008d4b:	e9 2c 01 00 00       	jmp    c1008e7c <delete_dir_entry+0x424>
c1008d50:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1008d57:	c7 45 c8 0c 00 00 00 	movl   $0xc,-0x38(%ebp)
c1008d5e:	eb 12                	jmp    c1008d72 <delete_dir_entry+0x31a>
c1008d60:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1008d63:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008d6a:	85 c0                	test   %eax,%eax
c1008d6c:	74 04                	je     c1008d72 <delete_dir_entry+0x31a>
c1008d6e:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008d72:	81 7d c8 8b 00 00 00 	cmpl   $0x8b,-0x38(%ebp)
c1008d79:	76 e5                	jbe    c1008d60 <delete_dir_entry+0x308>
c1008d7b:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1008d7f:	75 19                	jne    c1008d9a <delete_dir_entry+0x342>
c1008d81:	68 21 c2 00 c1       	push   $0xc100c221
c1008d86:	68 f8 c2 00 c1       	push   $0xc100c2f8
c1008d8b:	68 36 01 00 00       	push   $0x136
c1008d90:	68 48 c1 00 c1       	push   $0xc100c148
c1008d95:	e8 d1 75 ff ff       	call   c100036b <__PANIC>
c1008d9a:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c1008d9e:	76 31                	jbe    c1008dd1 <delete_dir_entry+0x379>
c1008da0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008da3:	c7 84 85 98 fd ff ff 	movl   $0x0,-0x268(%ebp,%eax,4)
c1008daa:	00 00 00 00 
c1008dae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008db1:	8b 50 40             	mov    0x40(%eax),%edx
c1008db4:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c1008dba:	83 c0 30             	add    $0x30,%eax
c1008dbd:	83 ec 04             	sub    $0x4,%esp
c1008dc0:	6a 01                	push   $0x1
c1008dc2:	52                   	push   %edx
c1008dc3:	50                   	push   %eax
c1008dc4:	e8 cd d2 ff ff       	call   c1006096 <ide_write>
c1008dc9:	83 c4 10             	add    $0x10,%esp
c1008dcc:	e9 ab 00 00 00       	jmp    c1008e7c <delete_dir_entry+0x424>
c1008dd1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008dd4:	8b 50 40             	mov    0x40(%eax),%edx
c1008dd7:	8b 45 08             	mov    0x8(%ebp),%eax
c1008dda:	8b 40 10             	mov    0x10(%eax),%eax
c1008ddd:	8b 40 28             	mov    0x28(%eax),%eax
c1008de0:	29 c2                	sub    %eax,%edx
c1008de2:	89 d0                	mov    %edx,%eax
c1008de4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008de7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008dea:	c1 e8 03             	shr    $0x3,%eax
c1008ded:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008df0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008df3:	83 e0 07             	and    $0x7,%eax
c1008df6:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1008df9:	8b 45 08             	mov    0x8(%ebp),%eax
c1008dfc:	8b 50 18             	mov    0x18(%eax),%edx
c1008dff:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008e02:	01 d0                	add    %edx,%eax
c1008e04:	0f b6 00             	movzbl (%eax),%eax
c1008e07:	89 c2                	mov    %eax,%edx
c1008e09:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008e0c:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008e11:	89 c1                	mov    %eax,%ecx
c1008e13:	d3 e3                	shl    %cl,%ebx
c1008e15:	89 d8                	mov    %ebx,%eax
c1008e17:	f7 d0                	not    %eax
c1008e19:	89 d1                	mov    %edx,%ecx
c1008e1b:	21 c1                	and    %eax,%ecx
c1008e1d:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e20:	8b 50 18             	mov    0x18(%eax),%edx
c1008e23:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008e26:	01 d0                	add    %edx,%eax
c1008e28:	89 ca                	mov    %ecx,%edx
c1008e2a:	88 10                	mov    %dl,(%eax)
c1008e2c:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008e31:	83 ec 04             	sub    $0x4,%esp
c1008e34:	6a 01                	push   $0x1
c1008e36:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008e39:	50                   	push   %eax
c1008e3a:	e8 be 05 00 00       	call   c10093fd <bitmap_sync>
c1008e3f:	83 c4 10             	add    $0x10,%esp
c1008e42:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008e45:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1008e4c:	eb 2e                	jmp    c1008e7c <delete_dir_entry+0x424>
c1008e4e:	83 ec 04             	sub    $0x4,%esp
c1008e51:	ff 75 e0             	pushl  -0x20(%ebp)
c1008e54:	6a 00                	push   $0x0
c1008e56:	ff 75 f0             	pushl  -0x10(%ebp)
c1008e59:	e8 4c 72 ff ff       	call   c10000aa <memset>
c1008e5e:	83 c4 10             	add    $0x10,%esp
c1008e61:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008e64:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008e6b:	83 ec 04             	sub    $0x4,%esp
c1008e6e:	6a 01                	push   $0x1
c1008e70:	50                   	push   %eax
c1008e71:	ff 75 14             	pushl  0x14(%ebp)
c1008e74:	e8 1d d2 ff ff       	call   c1006096 <ide_write>
c1008e79:	83 c4 10             	add    $0x10,%esp
c1008e7c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008e7f:	8b 40 04             	mov    0x4(%eax),%eax
c1008e82:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c1008e85:	76 19                	jbe    c1008ea0 <delete_dir_entry+0x448>
c1008e87:	68 38 c2 00 c1       	push   $0xc100c238
c1008e8c:	68 f8 c2 00 c1       	push   $0xc100c2f8
c1008e91:	68 4d 01 00 00       	push   $0x14d
c1008e96:	68 48 c1 00 c1       	push   $0xc100c148
c1008e9b:	e8 cb 74 ff ff       	call   c100036b <__PANIC>
c1008ea0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008ea3:	8b 40 04             	mov    0x4(%eax),%eax
c1008ea6:	2b 45 e0             	sub    -0x20(%ebp),%eax
c1008ea9:	89 c2                	mov    %eax,%edx
c1008eab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008eae:	89 50 04             	mov    %edx,0x4(%eax)
c1008eb1:	83 ec 04             	sub    $0x4,%esp
c1008eb4:	68 00 04 00 00       	push   $0x400
c1008eb9:	6a 00                	push   $0x0
c1008ebb:	ff 75 14             	pushl  0x14(%ebp)
c1008ebe:	e8 e7 71 ff ff       	call   c10000aa <memset>
c1008ec3:	83 c4 10             	add    $0x10,%esp
c1008ec6:	83 ec 04             	sub    $0x4,%esp
c1008ec9:	ff 75 14             	pushl  0x14(%ebp)
c1008ecc:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008ecf:	ff 75 08             	pushl  0x8(%ebp)
c1008ed2:	e8 44 15 00 00       	call   c100a41b <inode_sync>
c1008ed7:	83 c4 10             	add    $0x10,%esp
c1008eda:	b8 01 00 00 00       	mov    $0x1,%eax
c1008edf:	eb 12                	jmp    c1008ef3 <delete_dir_entry+0x49b>
c1008ee1:	81 7d f4 8b 00 00 00 	cmpl   $0x8b,-0xc(%ebp)
c1008ee8:	0f 86 1b fc ff ff    	jbe    c1008b09 <delete_dir_entry+0xb1>
c1008eee:	b8 00 00 00 00       	mov    $0x0,%eax
c1008ef3:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1008ef6:	5b                   	pop    %ebx
c1008ef7:	5f                   	pop    %edi
c1008ef8:	5d                   	pop    %ebp
c1008ef9:	c3                   	ret    

c1008efa <dir_read>:
c1008efa:	55                   	push   %ebp
c1008efb:	89 e5                	mov    %esp,%ebp
c1008efd:	57                   	push   %edi
c1008efe:	81 ec 54 02 00 00    	sub    $0x254,%esp
c1008f04:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f07:	83 c0 08             	add    $0x8,%eax
c1008f0a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008f0d:	8b 45 08             	mov    0x8(%ebp),%eax
c1008f10:	8b 00                	mov    (%eax),%eax
c1008f12:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008f15:	8d 95 a8 fd ff ff    	lea    -0x258(%ebp),%edx
c1008f1b:	b8 00 00 00 00       	mov    $0x0,%eax
c1008f20:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1008f25:	89 d7                	mov    %edx,%edi
c1008f27:	f3 ab                	rep stos %eax,%es:(%edi)
c1008f29:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
c1008f30:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008f37:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1008f3e:	eb 1a                	jmp    c1008f5a <dir_read+0x60>
c1008f40:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008f43:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008f46:	83 c2 04             	add    $0x4,%edx
c1008f49:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1008f4c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008f4f:	89 94 85 a8 fd ff ff 	mov    %edx,-0x258(%ebp,%eax,4)
c1008f56:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1008f5a:	83 7d f0 0b          	cmpl   $0xb,-0x10(%ebp)
c1008f5e:	76 e0                	jbe    c1008f40 <dir_read+0x46>
c1008f60:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008f63:	8b 40 40             	mov    0x40(%eax),%eax
c1008f66:	85 c0                	test   %eax,%eax
c1008f68:	74 25                	je     c1008f8f <dir_read+0x95>
c1008f6a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008f6d:	8b 50 40             	mov    0x40(%eax),%edx
c1008f70:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
c1008f76:	83 c0 30             	add    $0x30,%eax
c1008f79:	83 ec 04             	sub    $0x4,%esp
c1008f7c:	6a 01                	push   $0x1
c1008f7e:	52                   	push   %edx
c1008f7f:	50                   	push   %eax
c1008f80:	e8 d4 d0 ff ff       	call   c1006059 <ide_read>
c1008f85:	83 c4 10             	add    $0x10,%esp
c1008f88:	c7 45 f4 8c 00 00 00 	movl   $0x8c,-0xc(%ebp)
c1008f8f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1008f96:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1008f9d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1008fa2:	8b 40 10             	mov    0x10(%eax),%eax
c1008fa5:	8b 40 30             	mov    0x30(%eax),%eax
c1008fa8:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008fab:	b8 00 02 00 00       	mov    $0x200,%eax
c1008fb0:	ba 00 00 00 00       	mov    $0x0,%edx
c1008fb5:	f7 75 dc             	divl   -0x24(%ebp)
c1008fb8:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008fbb:	e9 f9 00 00 00       	jmp    c10090b9 <dir_read+0x1bf>
c1008fc0:	8b 45 08             	mov    0x8(%ebp),%eax
c1008fc3:	8b 50 04             	mov    0x4(%eax),%edx
c1008fc6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008fc9:	8b 40 04             	mov    0x4(%eax),%eax
c1008fcc:	39 c2                	cmp    %eax,%edx
c1008fce:	72 0a                	jb     c1008fda <dir_read+0xe0>
c1008fd0:	b8 00 00 00 00       	mov    $0x0,%eax
c1008fd5:	e9 f0 00 00 00       	jmp    c10090ca <dir_read+0x1d0>
c1008fda:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008fdd:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1008fe4:	85 c0                	test   %eax,%eax
c1008fe6:	75 09                	jne    c1008ff1 <dir_read+0xf7>
c1008fe8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1008fec:	e9 c8 00 00 00       	jmp    c10090b9 <dir_read+0x1bf>
c1008ff1:	83 ec 04             	sub    $0x4,%esp
c1008ff4:	68 00 02 00 00       	push   $0x200
c1008ff9:	6a 00                	push   $0x0
c1008ffb:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008ffe:	e8 a7 70 ff ff       	call   c10000aa <memset>
c1009003:	83 c4 10             	add    $0x10,%esp
c1009006:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009009:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1009010:	83 ec 04             	sub    $0x4,%esp
c1009013:	6a 01                	push   $0x1
c1009015:	50                   	push   %eax
c1009016:	ff 75 e4             	pushl  -0x1c(%ebp)
c1009019:	e8 3b d0 ff ff       	call   c1006059 <ide_read>
c100901e:	83 c4 10             	add    $0x10,%esp
c1009021:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1009028:	eb 7f                	jmp    c10090a9 <dir_read+0x1af>
c100902a:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100902d:	89 d0                	mov    %edx,%eax
c100902f:	01 c0                	add    %eax,%eax
c1009031:	01 d0                	add    %edx,%eax
c1009033:	c1 e0 03             	shl    $0x3,%eax
c1009036:	89 c2                	mov    %eax,%edx
c1009038:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100903b:	01 d0                	add    %edx,%eax
c100903d:	8b 40 14             	mov    0x14(%eax),%eax
c1009040:	85 c0                	test   %eax,%eax
c1009042:	74 61                	je     c10090a5 <dir_read+0x1ab>
c1009044:	8b 45 08             	mov    0x8(%ebp),%eax
c1009047:	8b 40 04             	mov    0x4(%eax),%eax
c100904a:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c100904d:	73 0c                	jae    c100905b <dir_read+0x161>
c100904f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009052:	01 45 e8             	add    %eax,-0x18(%ebp)
c1009055:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1009059:	eb 4e                	jmp    c10090a9 <dir_read+0x1af>
c100905b:	8b 45 08             	mov    0x8(%ebp),%eax
c100905e:	8b 40 04             	mov    0x4(%eax),%eax
c1009061:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c1009064:	74 19                	je     c100907f <dir_read+0x185>
c1009066:	68 5c c2 00 c1       	push   $0xc100c25c
c100906b:	68 0c c3 00 c1       	push   $0xc100c30c
c1009070:	68 7f 01 00 00       	push   $0x17f
c1009075:	68 48 c1 00 c1       	push   $0xc100c148
c100907a:	e8 ec 72 ff ff       	call   c100036b <__PANIC>
c100907f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009082:	8b 50 04             	mov    0x4(%eax),%edx
c1009085:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009088:	01 c2                	add    %eax,%edx
c100908a:	8b 45 08             	mov    0x8(%ebp),%eax
c100908d:	89 50 04             	mov    %edx,0x4(%eax)
c1009090:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009093:	89 d0                	mov    %edx,%eax
c1009095:	01 c0                	add    %eax,%eax
c1009097:	01 d0                	add    %edx,%eax
c1009099:	c1 e0 03             	shl    $0x3,%eax
c100909c:	89 c2                	mov    %eax,%edx
c100909e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10090a1:	01 d0                	add    %edx,%eax
c10090a3:	eb 25                	jmp    c10090ca <dir_read+0x1d0>
c10090a5:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10090a9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10090ac:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c10090af:	0f 82 75 ff ff ff    	jb     c100902a <dir_read+0x130>
c10090b5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10090b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10090bc:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c10090bf:	0f 82 fb fe ff ff    	jb     c1008fc0 <dir_read+0xc6>
c10090c5:	b8 00 00 00 00       	mov    $0x0,%eax
c10090ca:	8b 7d fc             	mov    -0x4(%ebp),%edi
c10090cd:	c9                   	leave  
c10090ce:	c3                   	ret    

c10090cf <dir_is_empty>:
c10090cf:	55                   	push   %ebp
c10090d0:	89 e5                	mov    %esp,%ebp
c10090d2:	83 ec 10             	sub    $0x10,%esp
c10090d5:	8b 45 08             	mov    0x8(%ebp),%eax
c10090d8:	8b 00                	mov    (%eax),%eax
c10090da:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10090dd:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10090e0:	8b 50 04             	mov    0x4(%eax),%edx
c10090e3:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10090e8:	8b 40 10             	mov    0x10(%eax),%eax
c10090eb:	8b 40 30             	mov    0x30(%eax),%eax
c10090ee:	01 c0                	add    %eax,%eax
c10090f0:	39 c2                	cmp    %eax,%edx
c10090f2:	0f 94 c0             	sete   %al
c10090f5:	c9                   	leave  
c10090f6:	c3                   	ret    

c10090f7 <dir_remove>:
c10090f7:	55                   	push   %ebp
c10090f8:	89 e5                	mov    %esp,%ebp
c10090fa:	83 ec 18             	sub    $0x18,%esp
c10090fd:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009100:	8b 00                	mov    (%eax),%eax
c1009102:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009105:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c100910c:	eb 2d                	jmp    c100913b <dir_remove+0x44>
c100910e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009111:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1009114:	83 c2 04             	add    $0x4,%edx
c1009117:	8b 04 90             	mov    (%eax,%edx,4),%eax
c100911a:	85 c0                	test   %eax,%eax
c100911c:	74 19                	je     c1009137 <dir_remove+0x40>
c100911e:	68 80 c2 00 c1       	push   $0xc100c280
c1009123:	68 18 c3 00 c1       	push   $0xc100c318
c1009128:	68 96 01 00 00       	push   $0x196
c100912d:	68 48 c1 00 c1       	push   $0xc100c148
c1009132:	e8 34 72 ff ff       	call   c100036b <__PANIC>
c1009137:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100913b:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
c100913f:	7e cd                	jle    c100910e <dir_remove+0x17>
c1009141:	83 ec 08             	sub    $0x8,%esp
c1009144:	6a 02                	push   $0x2
c1009146:	68 00 04 00 00       	push   $0x400
c100914b:	e8 63 9b ff ff       	call   c1002cb3 <vmm_malloc>
c1009150:	83 c4 10             	add    $0x10,%esp
c1009153:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009156:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100915a:	75 17                	jne    c1009173 <dir_remove+0x7c>
c100915c:	83 ec 0c             	sub    $0xc,%esp
c100915f:	68 ac c2 00 c1       	push   $0xc100c2ac
c1009164:	e8 48 c6 ff ff       	call   c10057b1 <printk>
c1009169:	83 c4 10             	add    $0x10,%esp
c100916c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009171:	eb 4a                	jmp    c10091bd <dir_remove+0xc6>
c1009173:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009176:	8b 10                	mov    (%eax),%edx
c1009178:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100917d:	ff 75 ec             	pushl  -0x14(%ebp)
c1009180:	52                   	push   %edx
c1009181:	ff 75 08             	pushl  0x8(%ebp)
c1009184:	50                   	push   %eax
c1009185:	e8 ce f8 ff ff       	call   c1008a58 <delete_dir_entry>
c100918a:	83 c4 10             	add    $0x10,%esp
c100918d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009190:	8b 10                	mov    (%eax),%edx
c1009192:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009197:	83 ec 08             	sub    $0x8,%esp
c100919a:	52                   	push   %edx
c100919b:	50                   	push   %eax
c100919c:	e8 87 15 00 00       	call   c100a728 <inode_release>
c10091a1:	83 c4 10             	add    $0x10,%esp
c10091a4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10091a7:	83 ec 08             	sub    $0x8,%esp
c10091aa:	68 00 04 00 00       	push   $0x400
c10091af:	50                   	push   %eax
c10091b0:	e8 23 9c ff ff       	call   c1002dd8 <vmm_free>
c10091b5:	83 c4 10             	add    $0x10,%esp
c10091b8:	b8 00 00 00 00       	mov    $0x0,%eax
c10091bd:	c9                   	leave  
c10091be:	c3                   	ret    

c10091bf <hash32>:
c10091bf:	55                   	push   %ebp
c10091c0:	89 e5                	mov    %esp,%ebp
c10091c2:	83 ec 10             	sub    $0x10,%esp
c10091c5:	8b 45 08             	mov    0x8(%ebp),%eax
c10091c8:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10091ce:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10091d1:	b8 20 00 00 00       	mov    $0x20,%eax
c10091d6:	2b 45 0c             	sub    0xc(%ebp),%eax
c10091d9:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10091dc:	89 c1                	mov    %eax,%ecx
c10091de:	d3 ea                	shr    %cl,%edx
c10091e0:	89 d0                	mov    %edx,%eax
c10091e2:	c9                   	leave  
c10091e3:	c3                   	ret    

c10091e4 <get_free_slot_in_global>:
c10091e4:	55                   	push   %ebp
c10091e5:	89 e5                	mov    %esp,%ebp
c10091e7:	83 ec 10             	sub    $0x10,%esp
c10091ea:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
c10091f1:	eb 1b                	jmp    c100920e <get_free_slot_in_global+0x2a>
c10091f3:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10091f6:	89 d0                	mov    %edx,%eax
c10091f8:	01 c0                	add    %eax,%eax
c10091fa:	01 d0                	add    %edx,%eax
c10091fc:	c1 e0 02             	shl    $0x2,%eax
c10091ff:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c1009204:	8b 00                	mov    (%eax),%eax
c1009206:	85 c0                	test   %eax,%eax
c1009208:	74 0c                	je     c1009216 <get_free_slot_in_global+0x32>
c100920a:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100920e:	83 7d fc 1f          	cmpl   $0x1f,-0x4(%ebp)
c1009212:	76 df                	jbe    c10091f3 <get_free_slot_in_global+0xf>
c1009214:	eb 01                	jmp    c1009217 <get_free_slot_in_global+0x33>
c1009216:	90                   	nop
c1009217:	83 7d fc 20          	cmpl   $0x20,-0x4(%ebp)
c100921b:	75 07                	jne    c1009224 <get_free_slot_in_global+0x40>
c100921d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009222:	eb 03                	jmp    c1009227 <get_free_slot_in_global+0x43>
c1009224:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1009227:	c9                   	leave  
c1009228:	c3                   	ret    

c1009229 <task_fd_install>:
c1009229:	55                   	push   %ebp
c100922a:	89 e5                	mov    %esp,%ebp
c100922c:	83 ec 10             	sub    $0x10,%esp
c100922f:	c6 45 ff 03          	movb   $0x3,-0x1(%ebp)
c1009233:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c1009238:	0f be 55 ff          	movsbl -0x1(%ebp),%edx
c100923c:	83 c2 1c             	add    $0x1c,%edx
c100923f:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
c1009243:	83 f8 ff             	cmp    $0xffffffff,%eax
c1009246:	75 15                	jne    c100925d <task_fd_install+0x34>
c1009248:	a1 08 40 a1 c1       	mov    0xc1a14008,%eax
c100924d:	0f be 4d ff          	movsbl -0x1(%ebp),%ecx
c1009251:	8b 55 08             	mov    0x8(%ebp),%edx
c1009254:	83 c1 1c             	add    $0x1c,%ecx
c1009257:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
c100925b:	eb 0c                	jmp    c1009269 <task_fd_install+0x40>
c100925d:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
c1009261:	83 c0 01             	add    $0x1,%eax
c1009264:	88 45 ff             	mov    %al,-0x1(%ebp)
c1009267:	eb ca                	jmp    c1009233 <task_fd_install+0xa>
c1009269:	0f be 45 ff          	movsbl -0x1(%ebp),%eax
c100926d:	c9                   	leave  
c100926e:	c3                   	ret    

c100926f <inode_bitmap_alloc>:
c100926f:	55                   	push   %ebp
c1009270:	89 e5                	mov    %esp,%ebp
c1009272:	53                   	push   %ebx
c1009273:	83 ec 10             	sub    $0x10,%esp
c1009276:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c100927d:	eb 04                	jmp    c1009283 <inode_bitmap_alloc+0x14>
c100927f:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1009283:	8b 45 08             	mov    0x8(%ebp),%eax
c1009286:	8b 50 20             	mov    0x20(%eax),%edx
c1009289:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100928c:	01 d0                	add    %edx,%eax
c100928e:	0f b6 00             	movzbl (%eax),%eax
c1009291:	3c ff                	cmp    $0xff,%al
c1009293:	75 0b                	jne    c10092a0 <inode_bitmap_alloc+0x31>
c1009295:	8b 45 08             	mov    0x8(%ebp),%eax
c1009298:	8b 40 1c             	mov    0x1c(%eax),%eax
c100929b:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c100929e:	72 df                	jb     c100927f <inode_bitmap_alloc+0x10>
c10092a0:	8b 45 08             	mov    0x8(%ebp),%eax
c10092a3:	8b 40 1c             	mov    0x1c(%eax),%eax
c10092a6:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c10092a9:	75 07                	jne    c10092b2 <inode_bitmap_alloc+0x43>
c10092ab:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10092b0:	eb 77                	jmp    c1009329 <inode_bitmap_alloc+0xba>
c10092b2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10092b9:	eb 04                	jmp    c10092bf <inode_bitmap_alloc+0x50>
c10092bb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10092bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10092c2:	ba 01 00 00 00       	mov    $0x1,%edx
c10092c7:	89 c1                	mov    %eax,%ecx
c10092c9:	d3 e2                	shl    %cl,%edx
c10092cb:	89 d0                	mov    %edx,%eax
c10092cd:	89 c1                	mov    %eax,%ecx
c10092cf:	8b 45 08             	mov    0x8(%ebp),%eax
c10092d2:	8b 50 20             	mov    0x20(%eax),%edx
c10092d5:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10092d8:	01 d0                	add    %edx,%eax
c10092da:	0f b6 00             	movzbl (%eax),%eax
c10092dd:	21 c8                	and    %ecx,%eax
c10092df:	84 c0                	test   %al,%al
c10092e1:	75 d8                	jne    c10092bb <inode_bitmap_alloc+0x4c>
c10092e3:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10092e6:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c10092ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10092f0:	01 d0                	add    %edx,%eax
c10092f2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10092f5:	8b 45 08             	mov    0x8(%ebp),%eax
c10092f8:	8b 50 20             	mov    0x20(%eax),%edx
c10092fb:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10092fe:	01 d0                	add    %edx,%eax
c1009300:	0f b6 00             	movzbl (%eax),%eax
c1009303:	89 c3                	mov    %eax,%ebx
c1009305:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009308:	ba 01 00 00 00       	mov    $0x1,%edx
c100930d:	89 c1                	mov    %eax,%ecx
c100930f:	d3 e2                	shl    %cl,%edx
c1009311:	89 d0                	mov    %edx,%eax
c1009313:	09 c3                	or     %eax,%ebx
c1009315:	89 d9                	mov    %ebx,%ecx
c1009317:	8b 45 08             	mov    0x8(%ebp),%eax
c100931a:	8b 50 20             	mov    0x20(%eax),%edx
c100931d:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1009320:	01 d0                	add    %edx,%eax
c1009322:	89 ca                	mov    %ecx,%edx
c1009324:	88 10                	mov    %dl,(%eax)
c1009326:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009329:	83 c4 10             	add    $0x10,%esp
c100932c:	5b                   	pop    %ebx
c100932d:	5d                   	pop    %ebp
c100932e:	c3                   	ret    

c100932f <block_bitmap_alloc>:
c100932f:	55                   	push   %ebp
c1009330:	89 e5                	mov    %esp,%ebp
c1009332:	53                   	push   %ebx
c1009333:	83 ec 10             	sub    $0x10,%esp
c1009336:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c100933d:	eb 04                	jmp    c1009343 <block_bitmap_alloc+0x14>
c100933f:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1009343:	8b 45 08             	mov    0x8(%ebp),%eax
c1009346:	8b 50 18             	mov    0x18(%eax),%edx
c1009349:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100934c:	01 d0                	add    %edx,%eax
c100934e:	0f b6 00             	movzbl (%eax),%eax
c1009351:	3c ff                	cmp    $0xff,%al
c1009353:	75 0b                	jne    c1009360 <block_bitmap_alloc+0x31>
c1009355:	8b 45 08             	mov    0x8(%ebp),%eax
c1009358:	8b 40 14             	mov    0x14(%eax),%eax
c100935b:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c100935e:	72 df                	jb     c100933f <block_bitmap_alloc+0x10>
c1009360:	8b 45 08             	mov    0x8(%ebp),%eax
c1009363:	8b 40 14             	mov    0x14(%eax),%eax
c1009366:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1009369:	75 0a                	jne    c1009375 <block_bitmap_alloc+0x46>
c100936b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009370:	e9 82 00 00 00       	jmp    c10093f7 <block_bitmap_alloc+0xc8>
c1009375:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100937c:	eb 04                	jmp    c1009382 <block_bitmap_alloc+0x53>
c100937e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1009382:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009385:	ba 01 00 00 00       	mov    $0x1,%edx
c100938a:	89 c1                	mov    %eax,%ecx
c100938c:	d3 e2                	shl    %cl,%edx
c100938e:	89 d0                	mov    %edx,%eax
c1009390:	89 c1                	mov    %eax,%ecx
c1009392:	8b 45 08             	mov    0x8(%ebp),%eax
c1009395:	8b 50 18             	mov    0x18(%eax),%edx
c1009398:	8b 45 f8             	mov    -0x8(%ebp),%eax
c100939b:	01 d0                	add    %edx,%eax
c100939d:	0f b6 00             	movzbl (%eax),%eax
c10093a0:	21 c8                	and    %ecx,%eax
c10093a2:	84 c0                	test   %al,%al
c10093a4:	75 d8                	jne    c100937e <block_bitmap_alloc+0x4f>
c10093a6:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10093a9:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c10093b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10093b3:	01 d0                	add    %edx,%eax
c10093b5:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10093b8:	8b 45 08             	mov    0x8(%ebp),%eax
c10093bb:	8b 50 18             	mov    0x18(%eax),%edx
c10093be:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10093c1:	01 d0                	add    %edx,%eax
c10093c3:	0f b6 00             	movzbl (%eax),%eax
c10093c6:	89 c3                	mov    %eax,%ebx
c10093c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10093cb:	ba 01 00 00 00       	mov    $0x1,%edx
c10093d0:	89 c1                	mov    %eax,%ecx
c10093d2:	d3 e2                	shl    %cl,%edx
c10093d4:	89 d0                	mov    %edx,%eax
c10093d6:	09 c3                	or     %eax,%ebx
c10093d8:	89 d9                	mov    %ebx,%ecx
c10093da:	8b 45 08             	mov    0x8(%ebp),%eax
c10093dd:	8b 50 18             	mov    0x18(%eax),%edx
c10093e0:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10093e3:	01 d0                	add    %edx,%eax
c10093e5:	89 ca                	mov    %ecx,%edx
c10093e7:	88 10                	mov    %dl,(%eax)
c10093e9:	8b 45 08             	mov    0x8(%ebp),%eax
c10093ec:	8b 40 10             	mov    0x10(%eax),%eax
c10093ef:	8b 50 28             	mov    0x28(%eax),%edx
c10093f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10093f5:	01 d0                	add    %edx,%eax
c10093f7:	83 c4 10             	add    $0x10,%esp
c10093fa:	5b                   	pop    %ebx
c10093fb:	5d                   	pop    %ebp
c10093fc:	c3                   	ret    

c10093fd <bitmap_sync>:
c10093fd:	55                   	push   %ebp
c10093fe:	89 e5                	mov    %esp,%ebp
c1009400:	83 ec 28             	sub    $0x28,%esp
c1009403:	8b 45 10             	mov    0x10(%ebp),%eax
c1009406:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1009409:	8b 45 0c             	mov    0xc(%ebp),%eax
c100940c:	c1 e8 0c             	shr    $0xc,%eax
c100940f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009412:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009415:	c1 e0 09             	shl    $0x9,%eax
c1009418:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100941b:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100941f:	85 c0                	test   %eax,%eax
c1009421:	74 07                	je     c100942a <bitmap_sync+0x2d>
c1009423:	83 f8 01             	cmp    $0x1,%eax
c1009426:	74 23                	je     c100944b <bitmap_sync+0x4e>
c1009428:	eb 41                	jmp    c100946b <bitmap_sync+0x6e>
c100942a:	8b 45 08             	mov    0x8(%ebp),%eax
c100942d:	8b 40 10             	mov    0x10(%eax),%eax
c1009430:	8b 50 18             	mov    0x18(%eax),%edx
c1009433:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009436:	01 d0                	add    %edx,%eax
c1009438:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100943b:	8b 45 08             	mov    0x8(%ebp),%eax
c100943e:	8b 50 20             	mov    0x20(%eax),%edx
c1009441:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009444:	01 d0                	add    %edx,%eax
c1009446:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009449:	eb 20                	jmp    c100946b <bitmap_sync+0x6e>
c100944b:	8b 45 08             	mov    0x8(%ebp),%eax
c100944e:	8b 40 10             	mov    0x10(%eax),%eax
c1009451:	8b 50 10             	mov    0x10(%eax),%edx
c1009454:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009457:	01 d0                	add    %edx,%eax
c1009459:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100945c:	8b 45 08             	mov    0x8(%ebp),%eax
c100945f:	8b 50 18             	mov    0x18(%eax),%edx
c1009462:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009465:	01 d0                	add    %edx,%eax
c1009467:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100946a:	90                   	nop
c100946b:	83 ec 04             	sub    $0x4,%esp
c100946e:	6a 01                	push   $0x1
c1009470:	ff 75 f4             	pushl  -0xc(%ebp)
c1009473:	ff 75 f0             	pushl  -0x10(%ebp)
c1009476:	e8 1b cc ff ff       	call   c1006096 <ide_write>
c100947b:	83 c4 10             	add    $0x10,%esp
c100947e:	90                   	nop
c100947f:	c9                   	leave  
c1009480:	c3                   	ret    

c1009481 <file_create>:
c1009481:	55                   	push   %ebp
c1009482:	89 e5                	mov    %esp,%ebp
c1009484:	83 ec 58             	sub    $0x58,%esp
c1009487:	8b 45 10             	mov    0x10(%ebp),%eax
c100948a:	88 45 b4             	mov    %al,-0x4c(%ebp)
c100948d:	83 ec 08             	sub    $0x8,%esp
c1009490:	6a 02                	push   $0x2
c1009492:	68 00 10 00 00       	push   $0x1000
c1009497:	e8 17 98 ff ff       	call   c1002cb3 <vmm_malloc>
c100949c:	83 c4 10             	add    $0x10,%esp
c100949f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10094a2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c10094a6:	75 1a                	jne    c10094c2 <file_create+0x41>
c10094a8:	83 ec 0c             	sub    $0xc,%esp
c10094ab:	68 24 c3 00 c1       	push   $0xc100c324
c10094b0:	e8 fc c2 ff ff       	call   c10057b1 <printk>
c10094b5:	83 c4 10             	add    $0x10,%esp
c10094b8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10094bd:	e9 9f 02 00 00       	jmp    c1009761 <file_create+0x2e0>
c10094c2:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c10094c6:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10094cb:	83 ec 0c             	sub    $0xc,%esp
c10094ce:	50                   	push   %eax
c10094cf:	e8 9b fd ff ff       	call   c100926f <inode_bitmap_alloc>
c10094d4:	83 c4 10             	add    $0x10,%esp
c10094d7:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10094da:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c10094de:	75 1a                	jne    c10094fa <file_create+0x79>
c10094e0:	83 ec 0c             	sub    $0xc,%esp
c10094e3:	68 54 c3 00 c1       	push   $0xc100c354
c10094e8:	e8 c4 c2 ff ff       	call   c10057b1 <printk>
c10094ed:	83 c4 10             	add    $0x10,%esp
c10094f0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10094f5:	e9 67 02 00 00       	jmp    c1009761 <file_create+0x2e0>
c10094fa:	83 ec 08             	sub    $0x8,%esp
c10094fd:	6a 02                	push   $0x2
c10094ff:	6a 44                	push   $0x44
c1009501:	e8 ad 97 ff ff       	call   c1002cb3 <vmm_malloc>
c1009506:	83 c4 10             	add    $0x10,%esp
c1009509:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100950c:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c1009510:	75 19                	jne    c100952b <file_create+0xaa>
c1009512:	83 ec 0c             	sub    $0xc,%esp
c1009515:	68 7c c3 00 c1       	push   $0xc100c37c
c100951a:	e8 92 c2 ff ff       	call   c10057b1 <printk>
c100951f:	83 c4 10             	add    $0x10,%esp
c1009522:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1009526:	e9 88 01 00 00       	jmp    c10096b3 <file_create+0x232>
c100952b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100952e:	83 ec 08             	sub    $0x8,%esp
c1009531:	ff 75 e4             	pushl  -0x1c(%ebp)
c1009534:	50                   	push   %eax
c1009535:	e8 b3 14 00 00       	call   c100a9ed <inode_init>
c100953a:	83 c4 10             	add    $0x10,%esp
c100953d:	e8 a2 fc ff ff       	call   c10091e4 <get_free_slot_in_global>
c1009542:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009545:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1009549:	75 19                	jne    c1009564 <file_create+0xe3>
c100954b:	83 ec 0c             	sub    $0xc,%esp
c100954e:	68 a7 c3 00 c1       	push   $0xc100c3a7
c1009553:	e8 59 c2 ff ff       	call   c10057b1 <printk>
c1009558:	83 c4 10             	add    $0x10,%esp
c100955b:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c100955f:	e9 4f 01 00 00       	jmp    c10096b3 <file_create+0x232>
c1009564:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009567:	89 d0                	mov    %edx,%eax
c1009569:	01 c0                	add    %eax,%eax
c100956b:	01 d0                	add    %edx,%eax
c100956d:	c1 e0 02             	shl    $0x2,%eax
c1009570:	8d 90 48 42 a1 c1    	lea    -0x3e5ebdb8(%eax),%edx
c1009576:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009579:	89 02                	mov    %eax,(%edx)
c100957b:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100957e:	89 d0                	mov    %edx,%eax
c1009580:	01 c0                	add    %eax,%eax
c1009582:	01 d0                	add    %edx,%eax
c1009584:	c1 e0 02             	shl    $0x2,%eax
c1009587:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100958c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1009592:	0f b6 4d b4          	movzbl -0x4c(%ebp),%ecx
c1009596:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009599:	89 d0                	mov    %edx,%eax
c100959b:	01 c0                	add    %eax,%eax
c100959d:	01 d0                	add    %edx,%eax
c100959f:	c1 e0 02             	shl    $0x2,%eax
c10095a2:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c10095a7:	89 08                	mov    %ecx,(%eax)
c10095a9:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10095ac:	89 d0                	mov    %edx,%eax
c10095ae:	01 c0                	add    %eax,%eax
c10095b0:	01 d0                	add    %edx,%eax
c10095b2:	c1 e0 02             	shl    $0x2,%eax
c10095b5:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10095ba:	8b 00                	mov    (%eax),%eax
c10095bc:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c10095c0:	83 ec 04             	sub    $0x4,%esp
c10095c3:	6a 18                	push   $0x18
c10095c5:	6a 00                	push   $0x0
c10095c7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c10095ca:	50                   	push   %eax
c10095cb:	e8 da 6a ff ff       	call   c10000aa <memset>
c10095d0:	83 c4 10             	add    $0x10,%esp
c10095d3:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10095d6:	8d 55 c4             	lea    -0x3c(%ebp),%edx
c10095d9:	52                   	push   %edx
c10095da:	6a 01                	push   $0x1
c10095dc:	50                   	push   %eax
c10095dd:	ff 75 0c             	pushl  0xc(%ebp)
c10095e0:	e8 cc ef ff ff       	call   c10085b1 <create_dir_entry>
c10095e5:	83 c4 10             	add    $0x10,%esp
c10095e8:	83 ec 04             	sub    $0x4,%esp
c10095eb:	ff 75 ec             	pushl  -0x14(%ebp)
c10095ee:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c10095f1:	50                   	push   %eax
c10095f2:	ff 75 08             	pushl  0x8(%ebp)
c10095f5:	e8 23 f0 ff ff       	call   c100861d <sync_dir_entry>
c10095fa:	83 c4 10             	add    $0x10,%esp
c10095fd:	85 c0                	test   %eax,%eax
c10095ff:	75 19                	jne    c100961a <file_create+0x199>
c1009601:	83 ec 0c             	sub    $0xc,%esp
c1009604:	68 c0 c3 00 c1       	push   $0xc100c3c0
c1009609:	e8 a3 c1 ff ff       	call   c10057b1 <printk>
c100960e:	83 c4 10             	add    $0x10,%esp
c1009611:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c1009615:	e9 99 00 00 00       	jmp    c10096b3 <file_create+0x232>
c100961a:	83 ec 04             	sub    $0x4,%esp
c100961d:	68 00 04 00 00       	push   $0x400
c1009622:	6a 00                	push   $0x0
c1009624:	ff 75 ec             	pushl  -0x14(%ebp)
c1009627:	e8 7e 6a ff ff       	call   c10000aa <memset>
c100962c:	83 c4 10             	add    $0x10,%esp
c100962f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009632:	8b 10                	mov    (%eax),%edx
c1009634:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009639:	83 ec 04             	sub    $0x4,%esp
c100963c:	ff 75 ec             	pushl  -0x14(%ebp)
c100963f:	52                   	push   %edx
c1009640:	50                   	push   %eax
c1009641:	e8 d5 0d 00 00       	call   c100a41b <inode_sync>
c1009646:	83 c4 10             	add    $0x10,%esp
c1009649:	83 ec 04             	sub    $0x4,%esp
c100964c:	68 00 04 00 00       	push   $0x400
c1009651:	6a 00                	push   $0x0
c1009653:	ff 75 ec             	pushl  -0x14(%ebp)
c1009656:	e8 4f 6a ff ff       	call   c10000aa <memset>
c100965b:	83 c4 10             	add    $0x10,%esp
c100965e:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009663:	83 ec 04             	sub    $0x4,%esp
c1009666:	ff 75 ec             	pushl  -0x14(%ebp)
c1009669:	ff 75 e4             	pushl  -0x1c(%ebp)
c100966c:	50                   	push   %eax
c100966d:	e8 a9 0d 00 00       	call   c100a41b <inode_sync>
c1009672:	83 c4 10             	add    $0x10,%esp
c1009675:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009678:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100967d:	83 ec 04             	sub    $0x4,%esp
c1009680:	6a 00                	push   $0x0
c1009682:	52                   	push   %edx
c1009683:	50                   	push   %eax
c1009684:	e8 74 fd ff ff       	call   c10093fd <bitmap_sync>
c1009689:	83 c4 10             	add    $0x10,%esp
c100968c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100968f:	83 ec 08             	sub    $0x8,%esp
c1009692:	68 00 04 00 00       	push   $0x400
c1009697:	50                   	push   %eax
c1009698:	e8 3b 97 ff ff       	call   c1002dd8 <vmm_free>
c100969d:	83 c4 10             	add    $0x10,%esp
c10096a0:	83 ec 0c             	sub    $0xc,%esp
c10096a3:	ff 75 f0             	pushl  -0x10(%ebp)
c10096a6:	e8 7e fb ff ff       	call   c1009229 <task_fd_install>
c10096ab:	83 c4 10             	add    $0x10,%esp
c10096ae:	e9 ae 00 00 00       	jmp    c1009761 <file_create+0x2e0>
c10096b3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10096b7:	83 f8 03             	cmp    $0x3,%eax
c10096ba:	74 15                	je     c10096d1 <file_create+0x250>
c10096bc:	83 f8 03             	cmp    $0x3,%eax
c10096bf:	0f 8f 83 00 00 00    	jg     c1009748 <file_create+0x2c7>
c10096c5:	83 f8 01             	cmp    $0x1,%eax
c10096c8:	74 39                	je     c1009703 <file_create+0x282>
c10096ca:	83 f8 02             	cmp    $0x2,%eax
c10096cd:	74 23                	je     c10096f2 <file_create+0x271>
c10096cf:	eb 77                	jmp    c1009748 <file_create+0x2c7>
c10096d1:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10096d4:	89 d0                	mov    %edx,%eax
c10096d6:	01 c0                	add    %eax,%eax
c10096d8:	01 d0                	add    %edx,%eax
c10096da:	c1 e0 02             	shl    $0x2,%eax
c10096dd:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10096e2:	83 ec 04             	sub    $0x4,%esp
c10096e5:	6a 0c                	push   $0xc
c10096e7:	6a 00                	push   $0x0
c10096e9:	50                   	push   %eax
c10096ea:	e8 bb 69 ff ff       	call   c10000aa <memset>
c10096ef:	83 c4 10             	add    $0x10,%esp
c10096f2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10096f5:	83 ec 08             	sub    $0x8,%esp
c10096f8:	6a 44                	push   $0x44
c10096fa:	50                   	push   %eax
c10096fb:	e8 d8 96 ff ff       	call   c1002dd8 <vmm_free>
c1009700:	83 c4 10             	add    $0x10,%esp
c1009703:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009706:	8d 50 07             	lea    0x7(%eax),%edx
c1009709:	85 c0                	test   %eax,%eax
c100970b:	0f 48 c2             	cmovs  %edx,%eax
c100970e:	c1 f8 03             	sar    $0x3,%eax
c1009711:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009714:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009717:	99                   	cltd   
c1009718:	c1 ea 1d             	shr    $0x1d,%edx
c100971b:	01 d0                	add    %edx,%eax
c100971d:	83 e0 07             	and    $0x7,%eax
c1009720:	29 d0                	sub    %edx,%eax
c1009722:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1009725:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100972a:	8b 50 20             	mov    0x20(%eax),%edx
c100972d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009730:	01 d0                	add    %edx,%eax
c1009732:	0f b6 10             	movzbl (%eax),%edx
c1009735:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100973a:	8b 48 20             	mov    0x20(%eax),%ecx
c100973d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009740:	01 c8                	add    %ecx,%eax
c1009742:	83 e2 fe             	and    $0xfffffffe,%edx
c1009745:	88 10                	mov    %dl,(%eax)
c1009747:	90                   	nop
c1009748:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100974b:	83 ec 08             	sub    $0x8,%esp
c100974e:	68 00 04 00 00       	push   $0x400
c1009753:	50                   	push   %eax
c1009754:	e8 7f 96 ff ff       	call   c1002dd8 <vmm_free>
c1009759:	83 c4 10             	add    $0x10,%esp
c100975c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009761:	c9                   	leave  
c1009762:	c3                   	ret    

c1009763 <file_open>:
c1009763:	55                   	push   %ebp
c1009764:	89 e5                	mov    %esp,%ebp
c1009766:	83 ec 28             	sub    $0x28,%esp
c1009769:	8b 45 0c             	mov    0xc(%ebp),%eax
c100976c:	88 45 e4             	mov    %al,-0x1c(%ebp)
c100976f:	e8 70 fa ff ff       	call   c10091e4 <get_free_slot_in_global>
c1009774:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009777:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c100977b:	75 1a                	jne    c1009797 <file_open+0x34>
c100977d:	83 ec 0c             	sub    $0xc,%esp
c1009780:	68 a7 c3 00 c1       	push   $0xc100c3a7
c1009785:	e8 27 c0 ff ff       	call   c10057b1 <printk>
c100978a:	83 c4 10             	add    $0x10,%esp
c100978d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009792:	e9 e1 00 00 00       	jmp    c1009878 <file_open+0x115>
c1009797:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100979c:	83 ec 08             	sub    $0x8,%esp
c100979f:	ff 75 08             	pushl  0x8(%ebp)
c10097a2:	50                   	push   %eax
c10097a3:	e8 94 0d 00 00       	call   c100a53c <inode_open>
c10097a8:	83 c4 10             	add    $0x10,%esp
c10097ab:	89 c1                	mov    %eax,%ecx
c10097ad:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10097b0:	89 d0                	mov    %edx,%eax
c10097b2:	01 c0                	add    %eax,%eax
c10097b4:	01 d0                	add    %edx,%eax
c10097b6:	c1 e0 02             	shl    $0x2,%eax
c10097b9:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10097be:	89 08                	mov    %ecx,(%eax)
c10097c0:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10097c3:	89 d0                	mov    %edx,%eax
c10097c5:	01 c0                	add    %eax,%eax
c10097c7:	01 d0                	add    %edx,%eax
c10097c9:	c1 e0 02             	shl    $0x2,%eax
c10097cc:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c10097d1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10097d7:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
c10097db:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10097de:	89 d0                	mov    %edx,%eax
c10097e0:	01 c0                	add    %eax,%eax
c10097e2:	01 d0                	add    %edx,%eax
c10097e4:	c1 e0 02             	shl    $0x2,%eax
c10097e7:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c10097ec:	89 08                	mov    %ecx,(%eax)
c10097ee:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10097f1:	89 d0                	mov    %edx,%eax
c10097f3:	01 c0                	add    %eax,%eax
c10097f5:	01 d0                	add    %edx,%eax
c10097f7:	c1 e0 02             	shl    $0x2,%eax
c10097fa:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c10097ff:	8b 00                	mov    (%eax),%eax
c1009801:	83 c0 0c             	add    $0xc,%eax
c1009804:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009807:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100980b:	83 e0 01             	and    $0x1,%eax
c100980e:	85 c0                	test   %eax,%eax
c1009810:	75 0b                	jne    c100981d <file_open+0xba>
c1009812:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009816:	83 e0 02             	and    $0x2,%eax
c1009819:	85 c0                	test   %eax,%eax
c100981b:	74 4d                	je     c100986a <file_open+0x107>
c100981d:	e8 89 75 ff ff       	call   c1000dab <intr_save>
c1009822:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009825:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009828:	0f b6 00             	movzbl (%eax),%eax
c100982b:	84 c0                	test   %al,%al
c100982d:	75 16                	jne    c1009845 <file_open+0xe2>
c100982f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009832:	c6 00 01             	movb   $0x1,(%eax)
c1009835:	83 ec 0c             	sub    $0xc,%esp
c1009838:	ff 75 ec             	pushl  -0x14(%ebp)
c100983b:	e8 7e 75 ff ff       	call   c1000dbe <intr_restore>
c1009840:	83 c4 10             	add    $0x10,%esp
c1009843:	eb 25                	jmp    c100986a <file_open+0x107>
c1009845:	83 ec 0c             	sub    $0xc,%esp
c1009848:	ff 75 ec             	pushl  -0x14(%ebp)
c100984b:	e8 6e 75 ff ff       	call   c1000dbe <intr_restore>
c1009850:	83 c4 10             	add    $0x10,%esp
c1009853:	83 ec 0c             	sub    $0xc,%esp
c1009856:	68 e0 c3 00 c1       	push   $0xc100c3e0
c100985b:	e8 51 bf ff ff       	call   c10057b1 <printk>
c1009860:	83 c4 10             	add    $0x10,%esp
c1009863:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009868:	eb 0e                	jmp    c1009878 <file_open+0x115>
c100986a:	83 ec 0c             	sub    $0xc,%esp
c100986d:	ff 75 f4             	pushl  -0xc(%ebp)
c1009870:	e8 b4 f9 ff ff       	call   c1009229 <task_fd_install>
c1009875:	83 c4 10             	add    $0x10,%esp
c1009878:	c9                   	leave  
c1009879:	c3                   	ret    

c100987a <file_close>:
c100987a:	55                   	push   %ebp
c100987b:	89 e5                	mov    %esp,%ebp
c100987d:	83 ec 08             	sub    $0x8,%esp
c1009880:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1009884:	75 07                	jne    c100988d <file_close+0x13>
c1009886:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100988b:	eb 2b                	jmp    c10098b8 <file_close+0x3e>
c100988d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009890:	8b 40 08             	mov    0x8(%eax),%eax
c1009893:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1009897:	8b 45 08             	mov    0x8(%ebp),%eax
c100989a:	8b 40 08             	mov    0x8(%eax),%eax
c100989d:	83 ec 0c             	sub    $0xc,%esp
c10098a0:	50                   	push   %eax
c10098a1:	e8 6c 0d 00 00       	call   c100a612 <inode_close>
c10098a6:	83 c4 10             	add    $0x10,%esp
c10098a9:	8b 45 08             	mov    0x8(%ebp),%eax
c10098ac:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c10098b3:	b8 00 00 00 00       	mov    $0x0,%eax
c10098b8:	c9                   	leave  
c10098b9:	c3                   	ret    

c10098ba <file_write>:
c10098ba:	55                   	push   %ebp
c10098bb:	89 e5                	mov    %esp,%ebp
c10098bd:	83 ec 58             	sub    $0x58,%esp
c10098c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10098c3:	8b 40 08             	mov    0x8(%eax),%eax
c10098c6:	8b 50 04             	mov    0x4(%eax),%edx
c10098c9:	8b 45 10             	mov    0x10(%ebp),%eax
c10098cc:	01 d0                	add    %edx,%eax
c10098ce:	3d 00 18 01 00       	cmp    $0x11800,%eax
c10098d3:	76 1a                	jbe    c10098ef <file_write+0x35>
c10098d5:	83 ec 0c             	sub    $0xc,%esp
c10098d8:	68 0c c4 00 c1       	push   $0xc100c40c
c10098dd:	e8 cf be ff ff       	call   c10057b1 <printk>
c10098e2:	83 c4 10             	add    $0x10,%esp
c10098e5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10098ea:	e9 2b 07 00 00       	jmp    c100a01a <file_write+0x760>
c10098ef:	83 ec 08             	sub    $0x8,%esp
c10098f2:	6a 02                	push   $0x2
c10098f4:	68 00 02 00 00       	push   $0x200
c10098f9:	e8 b5 93 ff ff       	call   c1002cb3 <vmm_malloc>
c10098fe:	83 c4 10             	add    $0x10,%esp
c1009901:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009904:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c1009908:	75 1a                	jne    c1009924 <file_write+0x6a>
c100990a:	83 ec 0c             	sub    $0xc,%esp
c100990d:	68 44 c4 00 c1       	push   $0xc100c444
c1009912:	e8 9a be ff ff       	call   c10057b1 <printk>
c1009917:	83 c4 10             	add    $0x10,%esp
c100991a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100991f:	e9 f6 06 00 00       	jmp    c100a01a <file_write+0x760>
c1009924:	83 ec 08             	sub    $0x8,%esp
c1009927:	6a 02                	push   $0x2
c1009929:	68 30 02 00 00       	push   $0x230
c100992e:	e8 80 93 ff ff       	call   c1002cb3 <vmm_malloc>
c1009933:	83 c4 10             	add    $0x10,%esp
c1009936:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1009939:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c100993d:	75 1a                	jne    c1009959 <file_write+0x9f>
c100993f:	83 ec 0c             	sub    $0xc,%esp
c1009942:	68 70 c4 00 c1       	push   $0xc100c470
c1009947:	e8 65 be ff ff       	call   c10057b1 <printk>
c100994c:	83 c4 10             	add    $0x10,%esp
c100994f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009954:	e9 c1 06 00 00       	jmp    c100a01a <file_write+0x760>
c1009959:	8b 45 0c             	mov    0xc(%ebp),%eax
c100995c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100995f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1009966:	8b 45 10             	mov    0x10(%ebp),%eax
c1009969:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100996c:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1009973:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
c100997a:	8b 45 08             	mov    0x8(%ebp),%eax
c100997d:	8b 40 08             	mov    0x8(%eax),%eax
c1009980:	8b 40 10             	mov    0x10(%eax),%eax
c1009983:	85 c0                	test   %eax,%eax
c1009985:	0f 85 8a 00 00 00    	jne    c1009a15 <file_write+0x15b>
c100998b:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009990:	83 ec 0c             	sub    $0xc,%esp
c1009993:	50                   	push   %eax
c1009994:	e8 96 f9 ff ff       	call   c100932f <block_bitmap_alloc>
c1009999:	83 c4 10             	add    $0x10,%esp
c100999c:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100999f:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10099a3:	75 1a                	jne    c10099bf <file_write+0x105>
c10099a5:	83 ec 0c             	sub    $0xc,%esp
c10099a8:	68 a0 c4 00 c1       	push   $0xc100c4a0
c10099ad:	e8 ff bd ff ff       	call   c10057b1 <printk>
c10099b2:	83 c4 10             	add    $0x10,%esp
c10099b5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10099ba:	e9 5b 06 00 00       	jmp    c100a01a <file_write+0x760>
c10099bf:	8b 45 08             	mov    0x8(%ebp),%eax
c10099c2:	8b 40 08             	mov    0x8(%eax),%eax
c10099c5:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10099c8:	89 50 10             	mov    %edx,0x10(%eax)
c10099cb:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10099ce:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c10099d3:	8b 40 10             	mov    0x10(%eax),%eax
c10099d6:	8b 40 28             	mov    0x28(%eax),%eax
c10099d9:	29 c2                	sub    %eax,%edx
c10099db:	89 d0                	mov    %edx,%eax
c10099dd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10099e0:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
c10099e4:	75 19                	jne    c10099ff <file_write+0x145>
c10099e6:	68 c7 c4 00 c1       	push   $0xc100c4c7
c10099eb:	68 38 c7 00 c1       	push   $0xc100c738
c10099f0:	68 1e 01 00 00       	push   $0x11e
c10099f5:	68 e0 c4 00 c1       	push   $0xc100c4e0
c10099fa:	e8 6c 69 ff ff       	call   c100036b <__PANIC>
c10099ff:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009a04:	83 ec 04             	sub    $0x4,%esp
c1009a07:	6a 01                	push   $0x1
c1009a09:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009a0c:	50                   	push   %eax
c1009a0d:	e8 eb f9 ff ff       	call   c10093fd <bitmap_sync>
c1009a12:	83 c4 10             	add    $0x10,%esp
c1009a15:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a18:	8b 40 08             	mov    0x8(%eax),%eax
c1009a1b:	8b 40 04             	mov    0x4(%eax),%eax
c1009a1e:	c1 e8 09             	shr    $0x9,%eax
c1009a21:	83 c0 01             	add    $0x1,%eax
c1009a24:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1009a27:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a2a:	8b 40 08             	mov    0x8(%eax),%eax
c1009a2d:	8b 50 04             	mov    0x4(%eax),%edx
c1009a30:	8b 45 10             	mov    0x10(%ebp),%eax
c1009a33:	01 d0                	add    %edx,%eax
c1009a35:	c1 e8 09             	shr    $0x9,%eax
c1009a38:	83 c0 01             	add    $0x1,%eax
c1009a3b:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009a3e:	81 7d cc 8c 00 00 00 	cmpl   $0x8c,-0x34(%ebp)
c1009a45:	76 19                	jbe    c1009a60 <file_write+0x1a6>
c1009a47:	68 11 c5 00 c1       	push   $0xc100c511
c1009a4c:	68 38 c7 00 c1       	push   $0xc100c738
c1009a51:	68 27 01 00 00       	push   $0x127
c1009a56:	68 e0 c4 00 c1       	push   $0xc100c4e0
c1009a5b:	e8 0b 69 ff ff       	call   c100036b <__PANIC>
c1009a60:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1009a63:	2b 45 d0             	sub    -0x30(%ebp),%eax
c1009a66:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1009a69:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
c1009a6d:	0f 85 83 00 00 00    	jne    c1009af6 <file_write+0x23c>
c1009a73:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009a77:	77 2e                	ja     c1009aa7 <file_write+0x1ed>
c1009a79:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009a7c:	83 e8 01             	sub    $0x1,%eax
c1009a7f:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009a82:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a85:	8b 40 08             	mov    0x8(%eax),%eax
c1009a88:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009a8b:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009a92:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009a95:	01 ca                	add    %ecx,%edx
c1009a97:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009a9a:	83 c1 04             	add    $0x4,%ecx
c1009a9d:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009aa0:	89 02                	mov    %eax,(%edx)
c1009aa2:	e9 24 04 00 00       	jmp    c1009ecb <file_write+0x611>
c1009aa7:	8b 45 08             	mov    0x8(%ebp),%eax
c1009aaa:	8b 40 08             	mov    0x8(%eax),%eax
c1009aad:	8b 40 40             	mov    0x40(%eax),%eax
c1009ab0:	85 c0                	test   %eax,%eax
c1009ab2:	75 19                	jne    c1009acd <file_write+0x213>
c1009ab4:	68 30 c5 00 c1       	push   $0xc100c530
c1009ab9:	68 38 c7 00 c1       	push   $0xc100c738
c1009abe:	68 35 01 00 00       	push   $0x135
c1009ac3:	68 e0 c4 00 c1       	push   $0xc100c4e0
c1009ac8:	e8 9e 68 ff ff       	call   c100036b <__PANIC>
c1009acd:	8b 45 08             	mov    0x8(%ebp),%eax
c1009ad0:	8b 40 08             	mov    0x8(%eax),%eax
c1009ad3:	8b 40 40             	mov    0x40(%eax),%eax
c1009ad6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009ad9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009adc:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009adf:	83 c2 30             	add    $0x30,%edx
c1009ae2:	83 ec 04             	sub    $0x4,%esp
c1009ae5:	6a 01                	push   $0x1
c1009ae7:	50                   	push   %eax
c1009ae8:	52                   	push   %edx
c1009ae9:	e8 6b c5 ff ff       	call   c1006059 <ide_read>
c1009aee:	83 c4 10             	add    $0x10,%esp
c1009af1:	e9 d5 03 00 00       	jmp    c1009ecb <file_write+0x611>
c1009af6:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009afa:	0f 87 25 01 00 00    	ja     c1009c25 <file_write+0x36b>
c1009b00:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009b03:	83 e8 01             	sub    $0x1,%eax
c1009b06:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009b09:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b0c:	8b 40 08             	mov    0x8(%eax),%eax
c1009b0f:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009b12:	83 c2 04             	add    $0x4,%edx
c1009b15:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009b18:	85 c0                	test   %eax,%eax
c1009b1a:	75 19                	jne    c1009b35 <file_write+0x27b>
c1009b1c:	68 54 c5 00 c1       	push   $0xc100c554
c1009b21:	68 38 c7 00 c1       	push   $0xc100c738
c1009b26:	68 3f 01 00 00       	push   $0x13f
c1009b2b:	68 e0 c4 00 c1       	push   $0xc100c4e0
c1009b30:	e8 36 68 ff ff       	call   c100036b <__PANIC>
c1009b35:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b38:	8b 40 08             	mov    0x8(%eax),%eax
c1009b3b:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009b3e:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009b45:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009b48:	01 ca                	add    %ecx,%edx
c1009b4a:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009b4d:	83 c1 04             	add    $0x4,%ecx
c1009b50:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009b53:	89 02                	mov    %eax,(%edx)
c1009b55:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009b58:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009b5b:	e9 b4 00 00 00       	jmp    c1009c14 <file_write+0x35a>
c1009b60:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009b65:	83 ec 0c             	sub    $0xc,%esp
c1009b68:	50                   	push   %eax
c1009b69:	e8 c1 f7 ff ff       	call   c100932f <block_bitmap_alloc>
c1009b6e:	83 c4 10             	add    $0x10,%esp
c1009b71:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009b74:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009b78:	75 1a                	jne    c1009b94 <file_write+0x2da>
c1009b7a:	83 ec 0c             	sub    $0xc,%esp
c1009b7d:	68 80 c5 00 c1       	push   $0xc100c580
c1009b82:	e8 2a bc ff ff       	call   c10057b1 <printk>
c1009b87:	83 c4 10             	add    $0x10,%esp
c1009b8a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009b8f:	e9 86 04 00 00       	jmp    c100a01a <file_write+0x760>
c1009b94:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b97:	8b 40 08             	mov    0x8(%eax),%eax
c1009b9a:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009b9d:	83 c2 04             	add    $0x4,%edx
c1009ba0:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009ba3:	85 c0                	test   %eax,%eax
c1009ba5:	74 19                	je     c1009bc0 <file_write+0x306>
c1009ba7:	68 b8 c5 00 c1       	push   $0xc100c5b8
c1009bac:	68 38 c7 00 c1       	push   $0xc100c738
c1009bb1:	68 4c 01 00 00       	push   $0x14c
c1009bb6:	68 e0 c4 00 c1       	push   $0xc100c4e0
c1009bbb:	e8 ab 67 ff ff       	call   c100036b <__PANIC>
c1009bc0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009bc3:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009bca:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009bcd:	01 d0                	add    %edx,%eax
c1009bcf:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009bd2:	89 10                	mov    %edx,(%eax)
c1009bd4:	8b 55 08             	mov    0x8(%ebp),%edx
c1009bd7:	8b 52 08             	mov    0x8(%edx),%edx
c1009bda:	8b 00                	mov    (%eax),%eax
c1009bdc:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009bdf:	83 c1 04             	add    $0x4,%ecx
c1009be2:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1009be5:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009be8:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009bed:	8b 40 10             	mov    0x10(%eax),%eax
c1009bf0:	8b 40 28             	mov    0x28(%eax),%eax
c1009bf3:	29 c2                	sub    %eax,%edx
c1009bf5:	89 d0                	mov    %edx,%eax
c1009bf7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009bfa:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009bff:	83 ec 04             	sub    $0x4,%esp
c1009c02:	6a 01                	push   $0x1
c1009c04:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009c07:	50                   	push   %eax
c1009c08:	e8 f0 f7 ff ff       	call   c10093fd <bitmap_sync>
c1009c0d:	83 c4 10             	add    $0x10,%esp
c1009c10:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009c14:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009c17:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009c1a:	0f 82 40 ff ff ff    	jb     c1009b60 <file_write+0x2a6>
c1009c20:	e9 a6 02 00 00       	jmp    c1009ecb <file_write+0x611>
c1009c25:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009c29:	0f 87 a3 01 00 00    	ja     c1009dd2 <file_write+0x518>
c1009c2f:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009c33:	0f 86 99 01 00 00    	jbe    c1009dd2 <file_write+0x518>
c1009c39:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009c3c:	83 e8 01             	sub    $0x1,%eax
c1009c3f:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009c42:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c45:	8b 40 08             	mov    0x8(%eax),%eax
c1009c48:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009c4b:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009c52:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009c55:	01 ca                	add    %ecx,%edx
c1009c57:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009c5a:	83 c1 04             	add    $0x4,%ecx
c1009c5d:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009c60:	89 02                	mov    %eax,(%edx)
c1009c62:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009c67:	83 ec 0c             	sub    $0xc,%esp
c1009c6a:	50                   	push   %eax
c1009c6b:	e8 bf f6 ff ff       	call   c100932f <block_bitmap_alloc>
c1009c70:	83 c4 10             	add    $0x10,%esp
c1009c73:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009c76:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009c7a:	75 1a                	jne    c1009c96 <file_write+0x3dc>
c1009c7c:	83 ec 0c             	sub    $0xc,%esp
c1009c7f:	68 e4 c5 00 c1       	push   $0xc100c5e4
c1009c84:	e8 28 bb ff ff       	call   c10057b1 <printk>
c1009c89:	83 c4 10             	add    $0x10,%esp
c1009c8c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009c91:	e9 84 03 00 00       	jmp    c100a01a <file_write+0x760>
c1009c96:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c99:	8b 40 08             	mov    0x8(%eax),%eax
c1009c9c:	8b 40 40             	mov    0x40(%eax),%eax
c1009c9f:	85 c0                	test   %eax,%eax
c1009ca1:	74 19                	je     c1009cbc <file_write+0x402>
c1009ca3:	68 1c c6 00 c1       	push   $0xc100c61c
c1009ca8:	68 38 c7 00 c1       	push   $0xc100c738
c1009cad:	68 63 01 00 00       	push   $0x163
c1009cb2:	68 e0 c4 00 c1       	push   $0xc100c4e0
c1009cb7:	e8 af 66 ff ff       	call   c100036b <__PANIC>
c1009cbc:	8b 45 08             	mov    0x8(%ebp),%eax
c1009cbf:	8b 40 08             	mov    0x8(%eax),%eax
c1009cc2:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009cc5:	89 50 40             	mov    %edx,0x40(%eax)
c1009cc8:	8b 40 40             	mov    0x40(%eax),%eax
c1009ccb:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009cce:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009cd1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009cd4:	e9 d0 00 00 00       	jmp    c1009da9 <file_write+0x4ef>
c1009cd9:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009cde:	83 ec 0c             	sub    $0xc,%esp
c1009ce1:	50                   	push   %eax
c1009ce2:	e8 48 f6 ff ff       	call   c100932f <block_bitmap_alloc>
c1009ce7:	83 c4 10             	add    $0x10,%esp
c1009cea:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009ced:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009cf1:	75 1a                	jne    c1009d0d <file_write+0x453>
c1009cf3:	83 ec 0c             	sub    $0xc,%esp
c1009cf6:	68 e4 c5 00 c1       	push   $0xc100c5e4
c1009cfb:	e8 b1 ba ff ff       	call   c10057b1 <printk>
c1009d00:	83 c4 10             	add    $0x10,%esp
c1009d03:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009d08:	e9 0d 03 00 00       	jmp    c100a01a <file_write+0x760>
c1009d0d:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1009d11:	77 53                	ja     c1009d66 <file_write+0x4ac>
c1009d13:	8b 45 08             	mov    0x8(%ebp),%eax
c1009d16:	8b 40 08             	mov    0x8(%eax),%eax
c1009d19:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009d1c:	83 c2 04             	add    $0x4,%edx
c1009d1f:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009d22:	85 c0                	test   %eax,%eax
c1009d24:	74 19                	je     c1009d3f <file_write+0x485>
c1009d26:	68 b8 c5 00 c1       	push   $0xc100c5b8
c1009d2b:	68 38 c7 00 c1       	push   $0xc100c738
c1009d30:	68 70 01 00 00       	push   $0x170
c1009d35:	68 e0 c4 00 c1       	push   $0xc100c4e0
c1009d3a:	e8 2c 66 ff ff       	call   c100036b <__PANIC>
c1009d3f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009d42:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009d49:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009d4c:	01 d0                	add    %edx,%eax
c1009d4e:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009d51:	89 10                	mov    %edx,(%eax)
c1009d53:	8b 55 08             	mov    0x8(%ebp),%edx
c1009d56:	8b 52 08             	mov    0x8(%edx),%edx
c1009d59:	8b 00                	mov    (%eax),%eax
c1009d5b:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009d5e:	83 c1 04             	add    $0x4,%ecx
c1009d61:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1009d64:	eb 14                	jmp    c1009d7a <file_write+0x4c0>
c1009d66:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009d69:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009d70:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009d73:	01 c2                	add    %eax,%edx
c1009d75:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009d78:	89 02                	mov    %eax,(%edx)
c1009d7a:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009d7d:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009d82:	8b 40 10             	mov    0x10(%eax),%eax
c1009d85:	8b 40 28             	mov    0x28(%eax),%eax
c1009d88:	29 c2                	sub    %eax,%edx
c1009d8a:	89 d0                	mov    %edx,%eax
c1009d8c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009d8f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009d94:	83 ec 04             	sub    $0x4,%esp
c1009d97:	6a 01                	push   $0x1
c1009d99:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009d9c:	50                   	push   %eax
c1009d9d:	e8 5b f6 ff ff       	call   c10093fd <bitmap_sync>
c1009da2:	83 c4 10             	add    $0x10,%esp
c1009da5:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009da9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009dac:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009daf:	0f 82 24 ff ff ff    	jb     c1009cd9 <file_write+0x41f>
c1009db5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009db8:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009dbb:	83 c2 30             	add    $0x30,%edx
c1009dbe:	83 ec 04             	sub    $0x4,%esp
c1009dc1:	6a 01                	push   $0x1
c1009dc3:	50                   	push   %eax
c1009dc4:	52                   	push   %edx
c1009dc5:	e8 cc c2 ff ff       	call   c1006096 <ide_write>
c1009dca:	83 c4 10             	add    $0x10,%esp
c1009dcd:	e9 f9 00 00 00       	jmp    c1009ecb <file_write+0x611>
c1009dd2:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009dd6:	0f 86 ef 00 00 00    	jbe    c1009ecb <file_write+0x611>
c1009ddc:	8b 45 08             	mov    0x8(%ebp),%eax
c1009ddf:	8b 40 08             	mov    0x8(%eax),%eax
c1009de2:	8b 40 40             	mov    0x40(%eax),%eax
c1009de5:	85 c0                	test   %eax,%eax
c1009de7:	75 19                	jne    c1009e02 <file_write+0x548>
c1009de9:	68 30 c5 00 c1       	push   $0xc100c530
c1009dee:	68 38 c7 00 c1       	push   $0xc100c738
c1009df3:	68 7f 01 00 00       	push   $0x17f
c1009df8:	68 e0 c4 00 c1       	push   $0xc100c4e0
c1009dfd:	e8 69 65 ff ff       	call   c100036b <__PANIC>
c1009e02:	8b 45 08             	mov    0x8(%ebp),%eax
c1009e05:	8b 40 08             	mov    0x8(%eax),%eax
c1009e08:	8b 40 40             	mov    0x40(%eax),%eax
c1009e0b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009e0e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009e11:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009e14:	83 c2 30             	add    $0x30,%edx
c1009e17:	83 ec 04             	sub    $0x4,%esp
c1009e1a:	6a 01                	push   $0x1
c1009e1c:	50                   	push   %eax
c1009e1d:	52                   	push   %edx
c1009e1e:	e8 36 c2 ff ff       	call   c1006059 <ide_read>
c1009e23:	83 c4 10             	add    $0x10,%esp
c1009e26:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009e29:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009e2c:	eb 79                	jmp    c1009ea7 <file_write+0x5ed>
c1009e2e:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009e33:	83 ec 0c             	sub    $0xc,%esp
c1009e36:	50                   	push   %eax
c1009e37:	e8 f3 f4 ff ff       	call   c100932f <block_bitmap_alloc>
c1009e3c:	83 c4 10             	add    $0x10,%esp
c1009e3f:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009e42:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009e46:	75 1a                	jne    c1009e62 <file_write+0x5a8>
c1009e48:	83 ec 0c             	sub    $0xc,%esp
c1009e4b:	68 40 c6 00 c1       	push   $0xc100c640
c1009e50:	e8 5c b9 ff ff       	call   c10057b1 <printk>
c1009e55:	83 c4 10             	add    $0x10,%esp
c1009e58:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009e5d:	e9 b8 01 00 00       	jmp    c100a01a <file_write+0x760>
c1009e62:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009e65:	8d 50 01             	lea    0x1(%eax),%edx
c1009e68:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1009e6b:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009e72:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009e75:	01 c2                	add    %eax,%edx
c1009e77:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009e7a:	89 02                	mov    %eax,(%edx)
c1009e7c:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009e7f:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009e84:	8b 40 10             	mov    0x10(%eax),%eax
c1009e87:	8b 40 28             	mov    0x28(%eax),%eax
c1009e8a:	29 c2                	sub    %eax,%edx
c1009e8c:	89 d0                	mov    %edx,%eax
c1009e8e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009e91:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009e96:	83 ec 04             	sub    $0x4,%esp
c1009e99:	6a 01                	push   $0x1
c1009e9b:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009e9e:	50                   	push   %eax
c1009e9f:	e8 59 f5 ff ff       	call   c10093fd <bitmap_sync>
c1009ea4:	83 c4 10             	add    $0x10,%esp
c1009ea7:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009eaa:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009ead:	0f 82 7b ff ff ff    	jb     c1009e2e <file_write+0x574>
c1009eb3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009eb6:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009eb9:	83 c2 30             	add    $0x30,%edx
c1009ebc:	83 ec 04             	sub    $0x4,%esp
c1009ebf:	6a 01                	push   $0x1
c1009ec1:	50                   	push   %eax
c1009ec2:	52                   	push   %edx
c1009ec3:	e8 ce c1 ff ff       	call   c1006096 <ide_write>
c1009ec8:	83 c4 10             	add    $0x10,%esp
c1009ecb:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
c1009ecf:	8b 45 08             	mov    0x8(%ebp),%eax
c1009ed2:	8b 40 08             	mov    0x8(%eax),%eax
c1009ed5:	8b 40 04             	mov    0x4(%eax),%eax
c1009ed8:	8d 50 ff             	lea    -0x1(%eax),%edx
c1009edb:	8b 45 08             	mov    0x8(%ebp),%eax
c1009ede:	89 10                	mov    %edx,(%eax)
c1009ee0:	e9 e3 00 00 00       	jmp    c1009fc8 <file_write+0x70e>
c1009ee5:	83 ec 04             	sub    $0x4,%esp
c1009ee8:	68 00 02 00 00       	push   $0x200
c1009eed:	6a 00                	push   $0x0
c1009eef:	ff 75 e0             	pushl  -0x20(%ebp)
c1009ef2:	e8 b3 61 ff ff       	call   c10000aa <memset>
c1009ef7:	83 c4 10             	add    $0x10,%esp
c1009efa:	8b 45 08             	mov    0x8(%ebp),%eax
c1009efd:	8b 40 08             	mov    0x8(%eax),%eax
c1009f00:	8b 40 04             	mov    0x4(%eax),%eax
c1009f03:	c1 e8 09             	shr    $0x9,%eax
c1009f06:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1009f09:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1009f0c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009f13:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009f16:	01 d0                	add    %edx,%eax
c1009f18:	8b 00                	mov    (%eax),%eax
c1009f1a:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1009f1d:	8b 45 08             	mov    0x8(%ebp),%eax
c1009f20:	8b 40 08             	mov    0x8(%eax),%eax
c1009f23:	8b 40 04             	mov    0x4(%eax),%eax
c1009f26:	25 ff 01 00 00       	and    $0x1ff,%eax
c1009f2b:	89 45 b8             	mov    %eax,-0x48(%ebp)
c1009f2e:	b8 00 02 00 00       	mov    $0x200,%eax
c1009f33:	2b 45 b8             	sub    -0x48(%ebp),%eax
c1009f36:	89 45 b4             	mov    %eax,-0x4c(%ebp)
c1009f39:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009f3c:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
c1009f3f:	0f 46 45 b4          	cmovbe -0x4c(%ebp),%eax
c1009f43:	89 45 b0             	mov    %eax,-0x50(%ebp)
c1009f46:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
c1009f4a:	74 17                	je     c1009f63 <file_write+0x6a9>
c1009f4c:	83 ec 04             	sub    $0x4,%esp
c1009f4f:	6a 01                	push   $0x1
c1009f51:	ff 75 bc             	pushl  -0x44(%ebp)
c1009f54:	ff 75 e0             	pushl  -0x20(%ebp)
c1009f57:	e8 fd c0 ff ff       	call   c1006059 <ide_read>
c1009f5c:	83 c4 10             	add    $0x10,%esp
c1009f5f:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
c1009f63:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1009f66:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009f69:	01 d0                	add    %edx,%eax
c1009f6b:	83 ec 04             	sub    $0x4,%esp
c1009f6e:	ff 75 b0             	pushl  -0x50(%ebp)
c1009f71:	ff 75 f4             	pushl  -0xc(%ebp)
c1009f74:	50                   	push   %eax
c1009f75:	e8 8e 61 ff ff       	call   c1000108 <memcpy>
c1009f7a:	83 c4 10             	add    $0x10,%esp
c1009f7d:	83 ec 04             	sub    $0x4,%esp
c1009f80:	6a 01                	push   $0x1
c1009f82:	ff 75 bc             	pushl  -0x44(%ebp)
c1009f85:	ff 75 e0             	pushl  -0x20(%ebp)
c1009f88:	e8 09 c1 ff ff       	call   c1006096 <ide_write>
c1009f8d:	83 c4 10             	add    $0x10,%esp
c1009f90:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009f93:	01 45 f4             	add    %eax,-0xc(%ebp)
c1009f96:	8b 45 08             	mov    0x8(%ebp),%eax
c1009f99:	8b 40 08             	mov    0x8(%eax),%eax
c1009f9c:	8b 48 04             	mov    0x4(%eax),%ecx
c1009f9f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009fa2:	8b 40 08             	mov    0x8(%eax),%eax
c1009fa5:	8b 55 b0             	mov    -0x50(%ebp),%edx
c1009fa8:	01 ca                	add    %ecx,%edx
c1009faa:	89 50 04             	mov    %edx,0x4(%eax)
c1009fad:	8b 45 08             	mov    0x8(%ebp),%eax
c1009fb0:	8b 10                	mov    (%eax),%edx
c1009fb2:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009fb5:	01 c2                	add    %eax,%edx
c1009fb7:	8b 45 08             	mov    0x8(%ebp),%eax
c1009fba:	89 10                	mov    %edx,(%eax)
c1009fbc:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009fbf:	01 45 f0             	add    %eax,-0x10(%ebp)
c1009fc2:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009fc5:	29 45 ec             	sub    %eax,-0x14(%ebp)
c1009fc8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009fcb:	3b 45 10             	cmp    0x10(%ebp),%eax
c1009fce:	0f 82 11 ff ff ff    	jb     c1009ee5 <file_write+0x62b>
c1009fd4:	8b 45 08             	mov    0x8(%ebp),%eax
c1009fd7:	8b 50 08             	mov    0x8(%eax),%edx
c1009fda:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c1009fdf:	83 ec 04             	sub    $0x4,%esp
c1009fe2:	ff 75 e0             	pushl  -0x20(%ebp)
c1009fe5:	52                   	push   %edx
c1009fe6:	50                   	push   %eax
c1009fe7:	e8 2f 04 00 00       	call   c100a41b <inode_sync>
c1009fec:	83 c4 10             	add    $0x10,%esp
c1009fef:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009ff2:	83 ec 08             	sub    $0x8,%esp
c1009ff5:	68 30 02 00 00       	push   $0x230
c1009ffa:	50                   	push   %eax
c1009ffb:	e8 d8 8d ff ff       	call   c1002dd8 <vmm_free>
c100a000:	83 c4 10             	add    $0x10,%esp
c100a003:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a006:	83 ec 08             	sub    $0x8,%esp
c100a009:	68 00 02 00 00       	push   $0x200
c100a00e:	50                   	push   %eax
c100a00f:	e8 c4 8d ff ff       	call   c1002dd8 <vmm_free>
c100a014:	83 c4 10             	add    $0x10,%esp
c100a017:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a01a:	c9                   	leave  
c100a01b:	c3                   	ret    

c100a01c <file_read>:
c100a01c:	55                   	push   %ebp
c100a01d:	89 e5                	mov    %esp,%ebp
c100a01f:	83 ec 48             	sub    $0x48,%esp
c100a022:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a025:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a028:	8b 45 10             	mov    0x10(%ebp),%eax
c100a02b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a02e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a031:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a034:	8b 45 08             	mov    0x8(%ebp),%eax
c100a037:	8b 10                	mov    (%eax),%edx
c100a039:	8b 45 10             	mov    0x10(%ebp),%eax
c100a03c:	01 c2                	add    %eax,%edx
c100a03e:	8b 45 08             	mov    0x8(%ebp),%eax
c100a041:	8b 40 08             	mov    0x8(%eax),%eax
c100a044:	8b 40 04             	mov    0x4(%eax),%eax
c100a047:	39 c2                	cmp    %eax,%edx
c100a049:	76 2b                	jbe    c100a076 <file_read+0x5a>
c100a04b:	8b 45 08             	mov    0x8(%ebp),%eax
c100a04e:	8b 40 08             	mov    0x8(%eax),%eax
c100a051:	8b 50 04             	mov    0x4(%eax),%edx
c100a054:	8b 45 08             	mov    0x8(%ebp),%eax
c100a057:	8b 00                	mov    (%eax),%eax
c100a059:	29 c2                	sub    %eax,%edx
c100a05b:	89 d0                	mov    %edx,%eax
c100a05d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a060:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a063:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a066:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c100a06a:	75 0a                	jne    c100a076 <file_read+0x5a>
c100a06c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100a071:	e9 31 03 00 00       	jmp    c100a3a7 <file_read+0x38b>
c100a076:	83 ec 08             	sub    $0x8,%esp
c100a079:	6a 02                	push   $0x2
c100a07b:	68 00 02 00 00       	push   $0x200
c100a080:	e8 2e 8c ff ff       	call   c1002cb3 <vmm_malloc>
c100a085:	83 c4 10             	add    $0x10,%esp
c100a088:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100a08b:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c100a08f:	75 10                	jne    c100a0a1 <file_read+0x85>
c100a091:	83 ec 0c             	sub    $0xc,%esp
c100a094:	68 78 c6 00 c1       	push   $0xc100c678
c100a099:	e8 13 b7 ff ff       	call   c10057b1 <printk>
c100a09e:	83 c4 10             	add    $0x10,%esp
c100a0a1:	83 ec 08             	sub    $0x8,%esp
c100a0a4:	6a 02                	push   $0x2
c100a0a6:	68 30 02 00 00       	push   $0x230
c100a0ab:	e8 03 8c ff ff       	call   c1002cb3 <vmm_malloc>
c100a0b0:	83 c4 10             	add    $0x10,%esp
c100a0b3:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100a0b6:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c100a0ba:	75 1a                	jne    c100a0d6 <file_read+0xba>
c100a0bc:	83 ec 0c             	sub    $0xc,%esp
c100a0bf:	68 a4 c6 00 c1       	push   $0xc100c6a4
c100a0c4:	e8 e8 b6 ff ff       	call   c10057b1 <printk>
c100a0c9:	83 c4 10             	add    $0x10,%esp
c100a0cc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100a0d1:	e9 d1 02 00 00       	jmp    c100a3a7 <file_read+0x38b>
c100a0d6:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0d9:	8b 00                	mov    (%eax),%eax
c100a0db:	c1 e8 09             	shr    $0x9,%eax
c100a0de:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100a0e1:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0e4:	8b 10                	mov    (%eax),%edx
c100a0e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a0e9:	01 d0                	add    %edx,%eax
c100a0eb:	c1 e8 09             	shr    $0x9,%eax
c100a0ee:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100a0f1:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a0f4:	2b 45 d4             	sub    -0x2c(%ebp),%eax
c100a0f7:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100a0fa:	81 7d d8 8a 00 00 00 	cmpl   $0x8a,-0x28(%ebp)
c100a101:	77 09                	ja     c100a10c <file_read+0xf0>
c100a103:	81 7d d4 8a 00 00 00 	cmpl   $0x8a,-0x2c(%ebp)
c100a10a:	76 19                	jbe    c100a125 <file_read+0x109>
c100a10c:	68 d4 c6 00 c1       	push   $0xc100c6d4
c100a111:	68 44 c7 00 c1       	push   $0xc100c744
c100a116:	68 d1 01 00 00       	push   $0x1d1
c100a11b:	68 e0 c4 00 c1       	push   $0xc100c4e0
c100a120:	e8 46 62 ff ff       	call   c100036b <__PANIC>
c100a125:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
c100a129:	75 7b                	jne    c100a1a6 <file_read+0x18a>
c100a12b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100a12e:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c100a131:	74 19                	je     c100a14c <file_read+0x130>
c100a133:	68 0c c7 00 c1       	push   $0xc100c70c
c100a138:	68 44 c7 00 c1       	push   $0xc100c744
c100a13d:	68 d8 01 00 00       	push   $0x1d8
c100a142:	68 e0 c4 00 c1       	push   $0xc100c4e0
c100a147:	e8 1f 62 ff ff       	call   c100036b <__PANIC>
c100a14c:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100a150:	77 2b                	ja     c100a17d <file_read+0x161>
c100a152:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c100a155:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a158:	8b 45 08             	mov    0x8(%ebp),%eax
c100a15b:	8b 40 08             	mov    0x8(%eax),%eax
c100a15e:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100a161:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100a168:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a16b:	01 ca                	add    %ecx,%edx
c100a16d:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100a170:	83 c1 04             	add    $0x4,%ecx
c100a173:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100a176:	89 02                	mov    %eax,(%edx)
c100a178:	e9 40 01 00 00       	jmp    c100a2bd <file_read+0x2a1>
c100a17d:	8b 45 08             	mov    0x8(%ebp),%eax
c100a180:	8b 40 08             	mov    0x8(%eax),%eax
c100a183:	8b 40 40             	mov    0x40(%eax),%eax
c100a186:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100a189:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100a18c:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a18f:	83 c2 30             	add    $0x30,%edx
c100a192:	83 ec 04             	sub    $0x4,%esp
c100a195:	6a 01                	push   $0x1
c100a197:	50                   	push   %eax
c100a198:	52                   	push   %edx
c100a199:	e8 bb be ff ff       	call   c1006059 <ide_read>
c100a19e:	83 c4 10             	add    $0x10,%esp
c100a1a1:	e9 17 01 00 00       	jmp    c100a2bd <file_read+0x2a1>
c100a1a6:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100a1aa:	77 39                	ja     c100a1e5 <file_read+0x1c9>
c100a1ac:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a1af:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a1b2:	eb 24                	jmp    c100a1d8 <file_read+0x1bc>
c100a1b4:	8b 45 08             	mov    0x8(%ebp),%eax
c100a1b7:	8b 40 08             	mov    0x8(%eax),%eax
c100a1ba:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100a1bd:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100a1c4:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a1c7:	01 ca                	add    %ecx,%edx
c100a1c9:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100a1cc:	83 c1 04             	add    $0x4,%ecx
c100a1cf:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100a1d2:	89 02                	mov    %eax,(%edx)
c100a1d4:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c100a1d8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a1db:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
c100a1de:	76 d4                	jbe    c100a1b4 <file_read+0x198>
c100a1e0:	e9 d8 00 00 00       	jmp    c100a2bd <file_read+0x2a1>
c100a1e5:	83 7d d8 0b          	cmpl   $0xb,-0x28(%ebp)
c100a1e9:	0f 87 84 00 00 00    	ja     c100a273 <file_read+0x257>
c100a1ef:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c100a1f3:	76 7e                	jbe    c100a273 <file_read+0x257>
c100a1f5:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a1f8:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a1fb:	eb 24                	jmp    c100a221 <file_read+0x205>
c100a1fd:	8b 45 08             	mov    0x8(%ebp),%eax
c100a200:	8b 40 08             	mov    0x8(%eax),%eax
c100a203:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100a206:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100a20d:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a210:	01 ca                	add    %ecx,%edx
c100a212:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100a215:	83 c1 04             	add    $0x4,%ecx
c100a218:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100a21b:	89 02                	mov    %eax,(%edx)
c100a21d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c100a221:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c100a225:	76 d6                	jbe    c100a1fd <file_read+0x1e1>
c100a227:	8b 45 08             	mov    0x8(%ebp),%eax
c100a22a:	8b 40 08             	mov    0x8(%eax),%eax
c100a22d:	8b 40 40             	mov    0x40(%eax),%eax
c100a230:	85 c0                	test   %eax,%eax
c100a232:	75 19                	jne    c100a24d <file_read+0x231>
c100a234:	68 30 c5 00 c1       	push   $0xc100c530
c100a239:	68 44 c7 00 c1       	push   $0xc100c744
c100a23e:	68 f0 01 00 00       	push   $0x1f0
c100a243:	68 e0 c4 00 c1       	push   $0xc100c4e0
c100a248:	e8 1e 61 ff ff       	call   c100036b <__PANIC>
c100a24d:	8b 45 08             	mov    0x8(%ebp),%eax
c100a250:	8b 40 08             	mov    0x8(%eax),%eax
c100a253:	8b 40 40             	mov    0x40(%eax),%eax
c100a256:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100a259:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100a25c:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a25f:	83 c2 30             	add    $0x30,%edx
c100a262:	83 ec 04             	sub    $0x4,%esp
c100a265:	6a 01                	push   $0x1
c100a267:	50                   	push   %eax
c100a268:	52                   	push   %edx
c100a269:	e8 eb bd ff ff       	call   c1006059 <ide_read>
c100a26e:	83 c4 10             	add    $0x10,%esp
c100a271:	eb 4a                	jmp    c100a2bd <file_read+0x2a1>
c100a273:	8b 45 08             	mov    0x8(%ebp),%eax
c100a276:	8b 40 08             	mov    0x8(%eax),%eax
c100a279:	8b 40 40             	mov    0x40(%eax),%eax
c100a27c:	85 c0                	test   %eax,%eax
c100a27e:	75 19                	jne    c100a299 <file_read+0x27d>
c100a280:	68 30 c5 00 c1       	push   $0xc100c530
c100a285:	68 44 c7 00 c1       	push   $0xc100c744
c100a28a:	68 f7 01 00 00       	push   $0x1f7
c100a28f:	68 e0 c4 00 c1       	push   $0xc100c4e0
c100a294:	e8 d2 60 ff ff       	call   c100036b <__PANIC>
c100a299:	8b 45 08             	mov    0x8(%ebp),%eax
c100a29c:	8b 40 08             	mov    0x8(%eax),%eax
c100a29f:	8b 40 40             	mov    0x40(%eax),%eax
c100a2a2:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100a2a5:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100a2a8:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a2ab:	83 c2 30             	add    $0x30,%edx
c100a2ae:	83 ec 04             	sub    $0x4,%esp
c100a2b1:	6a 01                	push   $0x1
c100a2b3:	50                   	push   %eax
c100a2b4:	52                   	push   %edx
c100a2b5:	e8 9f bd ff ff       	call   c1006059 <ide_read>
c100a2ba:	83 c4 10             	add    $0x10,%esp
c100a2bd:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c100a2c4:	e9 a7 00 00 00       	jmp    c100a370 <file_read+0x354>
c100a2c9:	8b 45 08             	mov    0x8(%ebp),%eax
c100a2cc:	8b 00                	mov    (%eax),%eax
c100a2ce:	c1 e8 09             	shr    $0x9,%eax
c100a2d1:	89 45 c8             	mov    %eax,-0x38(%ebp)
c100a2d4:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100a2d7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c100a2de:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a2e1:	01 d0                	add    %edx,%eax
c100a2e3:	8b 00                	mov    (%eax),%eax
c100a2e5:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100a2e8:	8b 45 08             	mov    0x8(%ebp),%eax
c100a2eb:	8b 00                	mov    (%eax),%eax
c100a2ed:	25 ff 01 00 00       	and    $0x1ff,%eax
c100a2f2:	89 45 c0             	mov    %eax,-0x40(%ebp)
c100a2f5:	b8 00 02 00 00       	mov    $0x200,%eax
c100a2fa:	2b 45 c0             	sub    -0x40(%ebp),%eax
c100a2fd:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100a300:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a303:	39 45 bc             	cmp    %eax,-0x44(%ebp)
c100a306:	0f 46 45 bc          	cmovbe -0x44(%ebp),%eax
c100a30a:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100a30d:	83 ec 04             	sub    $0x4,%esp
c100a310:	68 00 02 00 00       	push   $0x200
c100a315:	6a 00                	push   $0x0
c100a317:	ff 75 e0             	pushl  -0x20(%ebp)
c100a31a:	e8 8b 5d ff ff       	call   c10000aa <memset>
c100a31f:	83 c4 10             	add    $0x10,%esp
c100a322:	83 ec 04             	sub    $0x4,%esp
c100a325:	6a 01                	push   $0x1
c100a327:	ff 75 c4             	pushl  -0x3c(%ebp)
c100a32a:	ff 75 e0             	pushl  -0x20(%ebp)
c100a32d:	e8 27 bd ff ff       	call   c1006059 <ide_read>
c100a332:	83 c4 10             	add    $0x10,%esp
c100a335:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100a338:	8b 45 c0             	mov    -0x40(%ebp),%eax
c100a33b:	01 d0                	add    %edx,%eax
c100a33d:	83 ec 04             	sub    $0x4,%esp
c100a340:	ff 75 b8             	pushl  -0x48(%ebp)
c100a343:	50                   	push   %eax
c100a344:	ff 75 f4             	pushl  -0xc(%ebp)
c100a347:	e8 bc 5d ff ff       	call   c1000108 <memcpy>
c100a34c:	83 c4 10             	add    $0x10,%esp
c100a34f:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a352:	01 45 f4             	add    %eax,-0xc(%ebp)
c100a355:	8b 45 08             	mov    0x8(%ebp),%eax
c100a358:	8b 10                	mov    (%eax),%edx
c100a35a:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a35d:	01 c2                	add    %eax,%edx
c100a35f:	8b 45 08             	mov    0x8(%ebp),%eax
c100a362:	89 10                	mov    %edx,(%eax)
c100a364:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a367:	01 45 e4             	add    %eax,-0x1c(%ebp)
c100a36a:	8b 45 b8             	mov    -0x48(%ebp),%eax
c100a36d:	29 45 ec             	sub    %eax,-0x14(%ebp)
c100a370:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a373:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c100a376:	0f 82 4d ff ff ff    	jb     c100a2c9 <file_read+0x2ad>
c100a37c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100a37f:	83 ec 08             	sub    $0x8,%esp
c100a382:	68 30 02 00 00       	push   $0x230
c100a387:	50                   	push   %eax
c100a388:	e8 4b 8a ff ff       	call   c1002dd8 <vmm_free>
c100a38d:	83 c4 10             	add    $0x10,%esp
c100a390:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a393:	83 ec 08             	sub    $0x8,%esp
c100a396:	68 00 02 00 00       	push   $0x200
c100a39b:	50                   	push   %eax
c100a39c:	e8 37 8a ff ff       	call   c1002dd8 <vmm_free>
c100a3a1:	83 c4 10             	add    $0x10,%esp
c100a3a4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a3a7:	c9                   	leave  
c100a3a8:	c3                   	ret    

c100a3a9 <inode_locate>:
c100a3a9:	55                   	push   %ebp
c100a3aa:	89 e5                	mov    %esp,%ebp
c100a3ac:	83 ec 20             	sub    $0x20,%esp
c100a3af:	8b 45 08             	mov    0x8(%ebp),%eax
c100a3b2:	8b 40 10             	mov    0x10(%eax),%eax
c100a3b5:	8b 40 20             	mov    0x20(%eax),%eax
c100a3b8:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100a3bb:	c7 45 f8 44 00 00 00 	movl   $0x44,-0x8(%ebp)
c100a3c2:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a3c5:	0f af 45 f8          	imul   -0x8(%ebp),%eax
c100a3c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a3cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a3cf:	c1 e8 09             	shr    $0x9,%eax
c100a3d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a3d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a3d8:	25 ff 01 00 00       	and    $0x1ff,%eax
c100a3dd:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a3e0:	b8 00 02 00 00       	mov    $0x200,%eax
c100a3e5:	2b 45 ec             	sub    -0x14(%ebp),%eax
c100a3e8:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a3eb:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a3ee:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c100a3f1:	73 08                	jae    c100a3fb <inode_locate+0x52>
c100a3f3:	8b 45 10             	mov    0x10(%ebp),%eax
c100a3f6:	c6 00 01             	movb   $0x1,(%eax)
c100a3f9:	eb 06                	jmp    c100a401 <inode_locate+0x58>
c100a3fb:	8b 45 10             	mov    0x10(%ebp),%eax
c100a3fe:	c6 00 00             	movb   $0x0,(%eax)
c100a401:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100a404:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a407:	01 c2                	add    %eax,%edx
c100a409:	8b 45 10             	mov    0x10(%ebp),%eax
c100a40c:	89 50 04             	mov    %edx,0x4(%eax)
c100a40f:	8b 45 10             	mov    0x10(%ebp),%eax
c100a412:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a415:	89 50 08             	mov    %edx,0x8(%eax)
c100a418:	90                   	nop
c100a419:	c9                   	leave  
c100a41a:	c3                   	ret    

c100a41b <inode_sync>:
c100a41b:	55                   	push   %ebp
c100a41c:	89 e5                	mov    %esp,%ebp
c100a41e:	57                   	push   %edi
c100a41f:	56                   	push   %esi
c100a420:	53                   	push   %ebx
c100a421:	83 ec 6c             	sub    $0x6c,%esp
c100a424:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a427:	8b 00                	mov    (%eax),%eax
c100a429:	88 45 e7             	mov    %al,-0x19(%ebp)
c100a42c:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
c100a430:	8d 55 d4             	lea    -0x2c(%ebp),%edx
c100a433:	52                   	push   %edx
c100a434:	50                   	push   %eax
c100a435:	ff 75 08             	pushl  0x8(%ebp)
c100a438:	e8 6c ff ff ff       	call   c100a3a9 <inode_locate>
c100a43d:	83 c4 0c             	add    $0xc,%esp
c100a440:	83 ec 04             	sub    $0x4,%esp
c100a443:	6a 44                	push   $0x44
c100a445:	ff 75 0c             	pushl  0xc(%ebp)
c100a448:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a44b:	50                   	push   %eax
c100a44c:	e8 b7 5c ff ff       	call   c1000108 <memcpy>
c100a451:	83 c4 10             	add    $0x10,%esp
c100a454:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
c100a45b:	c6 45 9c 00          	movb   $0x0,-0x64(%ebp)
c100a45f:	8b 45 10             	mov    0x10(%ebp),%eax
c100a462:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100a465:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
c100a469:	84 c0                	test   %al,%al
c100a46b:	74 64                	je     c100a4d1 <inode_sync+0xb6>
c100a46d:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a470:	83 ec 04             	sub    $0x4,%esp
c100a473:	6a 02                	push   $0x2
c100a475:	50                   	push   %eax
c100a476:	ff 75 e0             	pushl  -0x20(%ebp)
c100a479:	e8 db bb ff ff       	call   c1006059 <ide_read>
c100a47e:	83 c4 10             	add    $0x10,%esp
c100a481:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a484:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a487:	01 d0                	add    %edx,%eax
c100a489:	89 c2                	mov    %eax,%edx
c100a48b:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a48e:	b9 44 00 00 00       	mov    $0x44,%ecx
c100a493:	8b 18                	mov    (%eax),%ebx
c100a495:	89 1a                	mov    %ebx,(%edx)
c100a497:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c100a49b:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c100a49f:	8d 5a 04             	lea    0x4(%edx),%ebx
c100a4a2:	83 e3 fc             	and    $0xfffffffc,%ebx
c100a4a5:	29 da                	sub    %ebx,%edx
c100a4a7:	29 d0                	sub    %edx,%eax
c100a4a9:	01 d1                	add    %edx,%ecx
c100a4ab:	83 e1 fc             	and    $0xfffffffc,%ecx
c100a4ae:	c1 e9 02             	shr    $0x2,%ecx
c100a4b1:	89 ca                	mov    %ecx,%edx
c100a4b3:	89 df                	mov    %ebx,%edi
c100a4b5:	89 c6                	mov    %eax,%esi
c100a4b7:	89 d1                	mov    %edx,%ecx
c100a4b9:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100a4bb:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a4be:	83 ec 04             	sub    $0x4,%esp
c100a4c1:	6a 02                	push   $0x2
c100a4c3:	50                   	push   %eax
c100a4c4:	ff 75 e0             	pushl  -0x20(%ebp)
c100a4c7:	e8 ca bb ff ff       	call   c1006096 <ide_write>
c100a4cc:	83 c4 10             	add    $0x10,%esp
c100a4cf:	eb 62                	jmp    c100a533 <inode_sync+0x118>
c100a4d1:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a4d4:	83 ec 04             	sub    $0x4,%esp
c100a4d7:	6a 01                	push   $0x1
c100a4d9:	50                   	push   %eax
c100a4da:	ff 75 e0             	pushl  -0x20(%ebp)
c100a4dd:	e8 77 bb ff ff       	call   c1006059 <ide_read>
c100a4e2:	83 c4 10             	add    $0x10,%esp
c100a4e5:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100a4e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a4eb:	01 d0                	add    %edx,%eax
c100a4ed:	89 c2                	mov    %eax,%edx
c100a4ef:	8d 45 90             	lea    -0x70(%ebp),%eax
c100a4f2:	b9 44 00 00 00       	mov    $0x44,%ecx
c100a4f7:	8b 18                	mov    (%eax),%ebx
c100a4f9:	89 1a                	mov    %ebx,(%edx)
c100a4fb:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c100a4ff:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c100a503:	8d 5a 04             	lea    0x4(%edx),%ebx
c100a506:	83 e3 fc             	and    $0xfffffffc,%ebx
c100a509:	29 da                	sub    %ebx,%edx
c100a50b:	29 d0                	sub    %edx,%eax
c100a50d:	01 d1                	add    %edx,%ecx
c100a50f:	83 e1 fc             	and    $0xfffffffc,%ecx
c100a512:	c1 e9 02             	shr    $0x2,%ecx
c100a515:	89 ca                	mov    %ecx,%edx
c100a517:	89 df                	mov    %ebx,%edi
c100a519:	89 c6                	mov    %eax,%esi
c100a51b:	89 d1                	mov    %edx,%ecx
c100a51d:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c100a51f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100a522:	83 ec 04             	sub    $0x4,%esp
c100a525:	6a 01                	push   $0x1
c100a527:	50                   	push   %eax
c100a528:	ff 75 e0             	pushl  -0x20(%ebp)
c100a52b:	e8 66 bb ff ff       	call   c1006096 <ide_write>
c100a530:	83 c4 10             	add    $0x10,%esp
c100a533:	90                   	nop
c100a534:	8d 65 f4             	lea    -0xc(%ebp),%esp
c100a537:	5b                   	pop    %ebx
c100a538:	5e                   	pop    %esi
c100a539:	5f                   	pop    %edi
c100a53a:	5d                   	pop    %ebp
c100a53b:	c3                   	ret    

c100a53c <inode_open>:
c100a53c:	55                   	push   %ebp
c100a53d:	89 e5                	mov    %esp,%ebp
c100a53f:	83 ec 28             	sub    $0x28,%esp
c100a542:	8d 45 e4             	lea    -0x1c(%ebp),%eax
c100a545:	50                   	push   %eax
c100a546:	ff 75 0c             	pushl  0xc(%ebp)
c100a549:	ff 75 08             	pushl  0x8(%ebp)
c100a54c:	e8 58 fe ff ff       	call   c100a3a9 <inode_locate>
c100a551:	83 c4 0c             	add    $0xc,%esp
c100a554:	83 ec 08             	sub    $0x8,%esp
c100a557:	6a 02                	push   $0x2
c100a559:	6a 44                	push   $0x44
c100a55b:	e8 53 87 ff ff       	call   c1002cb3 <vmm_malloc>
c100a560:	83 c4 10             	add    $0x10,%esp
c100a563:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a566:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100a56a:	84 c0                	test   %al,%al
c100a56c:	74 2b                	je     c100a599 <inode_open+0x5d>
c100a56e:	83 ec 08             	sub    $0x8,%esp
c100a571:	6a 02                	push   $0x2
c100a573:	68 00 04 00 00       	push   $0x400
c100a578:	e8 36 87 ff ff       	call   c1002cb3 <vmm_malloc>
c100a57d:	83 c4 10             	add    $0x10,%esp
c100a580:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a583:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a586:	83 ec 04             	sub    $0x4,%esp
c100a589:	6a 02                	push   $0x2
c100a58b:	50                   	push   %eax
c100a58c:	ff 75 f4             	pushl  -0xc(%ebp)
c100a58f:	e8 c5 ba ff ff       	call   c1006059 <ide_read>
c100a594:	83 c4 10             	add    $0x10,%esp
c100a597:	eb 29                	jmp    c100a5c2 <inode_open+0x86>
c100a599:	83 ec 08             	sub    $0x8,%esp
c100a59c:	6a 02                	push   $0x2
c100a59e:	68 00 02 00 00       	push   $0x200
c100a5a3:	e8 0b 87 ff ff       	call   c1002cb3 <vmm_malloc>
c100a5a8:	83 c4 10             	add    $0x10,%esp
c100a5ab:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a5ae:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a5b1:	83 ec 04             	sub    $0x4,%esp
c100a5b4:	6a 01                	push   $0x1
c100a5b6:	50                   	push   %eax
c100a5b7:	ff 75 f4             	pushl  -0xc(%ebp)
c100a5ba:	e8 9a ba ff ff       	call   c1006059 <ide_read>
c100a5bf:	83 c4 10             	add    $0x10,%esp
c100a5c2:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a5c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a5c8:	01 d0                	add    %edx,%eax
c100a5ca:	83 ec 04             	sub    $0x4,%esp
c100a5cd:	6a 44                	push   $0x44
c100a5cf:	50                   	push   %eax
c100a5d0:	ff 75 f0             	pushl  -0x10(%ebp)
c100a5d3:	e8 30 5b ff ff       	call   c1000108 <memcpy>
c100a5d8:	83 c4 10             	add    $0x10,%esp
c100a5db:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c100a5df:	84 c0                	test   %al,%al
c100a5e1:	74 16                	je     c100a5f9 <inode_open+0xbd>
c100a5e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a5e6:	83 ec 08             	sub    $0x8,%esp
c100a5e9:	68 00 04 00 00       	push   $0x400
c100a5ee:	50                   	push   %eax
c100a5ef:	e8 e4 87 ff ff       	call   c1002dd8 <vmm_free>
c100a5f4:	83 c4 10             	add    $0x10,%esp
c100a5f7:	eb 14                	jmp    c100a60d <inode_open+0xd1>
c100a5f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a5fc:	83 ec 08             	sub    $0x8,%esp
c100a5ff:	68 00 02 00 00       	push   $0x200
c100a604:	50                   	push   %eax
c100a605:	e8 ce 87 ff ff       	call   c1002dd8 <vmm_free>
c100a60a:	83 c4 10             	add    $0x10,%esp
c100a60d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a610:	c9                   	leave  
c100a611:	c3                   	ret    

c100a612 <inode_close>:
c100a612:	55                   	push   %ebp
c100a613:	89 e5                	mov    %esp,%ebp
c100a615:	83 ec 08             	sub    $0x8,%esp
c100a618:	8b 45 08             	mov    0x8(%ebp),%eax
c100a61b:	83 ec 08             	sub    $0x8,%esp
c100a61e:	6a 44                	push   $0x44
c100a620:	50                   	push   %eax
c100a621:	e8 b2 87 ff ff       	call   c1002dd8 <vmm_free>
c100a626:	83 c4 10             	add    $0x10,%esp
c100a629:	90                   	nop
c100a62a:	c9                   	leave  
c100a62b:	c3                   	ret    

c100a62c <inode_delete>:
c100a62c:	55                   	push   %ebp
c100a62d:	89 e5                	mov    %esp,%ebp
c100a62f:	83 ec 18             	sub    $0x18,%esp
c100a632:	81 7d 0c ff 0f 00 00 	cmpl   $0xfff,0xc(%ebp)
c100a639:	76 16                	jbe    c100a651 <inode_delete+0x25>
c100a63b:	68 50 c7 00 c1       	push   $0xc100c750
c100a640:	68 0c c8 00 c1       	push   $0xc100c80c
c100a645:	6a 6a                	push   $0x6a
c100a647:	68 60 c7 00 c1       	push   $0xc100c760
c100a64c:	e8 1a 5d ff ff       	call   c100036b <__PANIC>
c100a651:	83 ec 04             	sub    $0x4,%esp
c100a654:	8d 45 e8             	lea    -0x18(%ebp),%eax
c100a657:	50                   	push   %eax
c100a658:	ff 75 0c             	pushl  0xc(%ebp)
c100a65b:	ff 75 08             	pushl  0x8(%ebp)
c100a65e:	e8 46 fd ff ff       	call   c100a3a9 <inode_locate>
c100a663:	83 c4 10             	add    $0x10,%esp
c100a666:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100a669:	8b 45 08             	mov    0x8(%ebp),%eax
c100a66c:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c100a670:	0f b6 c8             	movzbl %al,%ecx
c100a673:	8b 45 08             	mov    0x8(%ebp),%eax
c100a676:	8b 40 0c             	mov    0xc(%eax),%eax
c100a679:	01 c8                	add    %ecx,%eax
c100a67b:	39 c2                	cmp    %eax,%edx
c100a67d:	76 16                	jbe    c100a695 <inode_delete+0x69>
c100a67f:	68 94 c7 00 c1       	push   $0xc100c794
c100a684:	68 0c c8 00 c1       	push   $0xc100c80c
c100a689:	6a 6d                	push   $0x6d
c100a68b:	68 60 c7 00 c1       	push   $0xc100c760
c100a690:	e8 d6 5c ff ff       	call   c100036b <__PANIC>
c100a695:	8b 45 10             	mov    0x10(%ebp),%eax
c100a698:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100a69b:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
c100a69f:	84 c0                	test   %al,%al
c100a6a1:	74 42                	je     c100a6e5 <inode_delete+0xb9>
c100a6a3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a6a6:	83 ec 04             	sub    $0x4,%esp
c100a6a9:	6a 02                	push   $0x2
c100a6ab:	50                   	push   %eax
c100a6ac:	ff 75 f4             	pushl  -0xc(%ebp)
c100a6af:	e8 a5 b9 ff ff       	call   c1006059 <ide_read>
c100a6b4:	83 c4 10             	add    $0x10,%esp
c100a6b7:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a6ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a6bd:	01 d0                	add    %edx,%eax
c100a6bf:	83 ec 04             	sub    $0x4,%esp
c100a6c2:	6a 44                	push   $0x44
c100a6c4:	6a 00                	push   $0x0
c100a6c6:	50                   	push   %eax
c100a6c7:	e8 de 59 ff ff       	call   c10000aa <memset>
c100a6cc:	83 c4 10             	add    $0x10,%esp
c100a6cf:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a6d2:	83 ec 04             	sub    $0x4,%esp
c100a6d5:	6a 02                	push   $0x2
c100a6d7:	50                   	push   %eax
c100a6d8:	ff 75 f4             	pushl  -0xc(%ebp)
c100a6db:	e8 b6 b9 ff ff       	call   c1006096 <ide_write>
c100a6e0:	83 c4 10             	add    $0x10,%esp
c100a6e3:	eb 40                	jmp    c100a725 <inode_delete+0xf9>
c100a6e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a6e8:	83 ec 04             	sub    $0x4,%esp
c100a6eb:	6a 01                	push   $0x1
c100a6ed:	50                   	push   %eax
c100a6ee:	ff 75 f4             	pushl  -0xc(%ebp)
c100a6f1:	e8 63 b9 ff ff       	call   c1006059 <ide_read>
c100a6f6:	83 c4 10             	add    $0x10,%esp
c100a6f9:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a6fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100a6ff:	01 d0                	add    %edx,%eax
c100a701:	83 ec 04             	sub    $0x4,%esp
c100a704:	6a 44                	push   $0x44
c100a706:	6a 00                	push   $0x0
c100a708:	50                   	push   %eax
c100a709:	e8 9c 59 ff ff       	call   c10000aa <memset>
c100a70e:	83 c4 10             	add    $0x10,%esp
c100a711:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a714:	83 ec 04             	sub    $0x4,%esp
c100a717:	6a 01                	push   $0x1
c100a719:	50                   	push   %eax
c100a71a:	ff 75 f4             	pushl  -0xc(%ebp)
c100a71d:	e8 74 b9 ff ff       	call   c1006096 <ide_write>
c100a722:	83 c4 10             	add    $0x10,%esp
c100a725:	90                   	nop
c100a726:	c9                   	leave  
c100a727:	c3                   	ret    

c100a728 <inode_release>:
c100a728:	55                   	push   %ebp
c100a729:	89 e5                	mov    %esp,%ebp
c100a72b:	57                   	push   %edi
c100a72c:	53                   	push   %ebx
c100a72d:	81 ec 50 02 00 00    	sub    $0x250,%esp
c100a733:	83 ec 08             	sub    $0x8,%esp
c100a736:	ff 75 0c             	pushl  0xc(%ebp)
c100a739:	ff 75 08             	pushl  0x8(%ebp)
c100a73c:	e8 fb fd ff ff       	call   c100a53c <inode_open>
c100a741:	83 c4 10             	add    $0x10,%esp
c100a744:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100a747:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a74a:	8b 00                	mov    (%eax),%eax
c100a74c:	39 45 0c             	cmp    %eax,0xc(%ebp)
c100a74f:	74 19                	je     c100a76a <inode_release+0x42>
c100a751:	68 d4 c7 00 c1       	push   $0xc100c7d4
c100a756:	68 1c c8 00 c1       	push   $0xc100c81c
c100a75b:	68 84 00 00 00       	push   $0x84
c100a760:	68 60 c7 00 c1       	push   $0xc100c760
c100a765:	e8 01 5c ff ff       	call   c100036b <__PANIC>
c100a76a:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100a76e:	c6 45 f6 0c          	movb   $0xc,-0xa(%ebp)
c100a772:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
c100a778:	b8 00 00 00 00       	mov    $0x0,%eax
c100a77d:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100a782:	89 d7                	mov    %edx,%edi
c100a784:	f3 ab                	rep stos %eax,%es:(%edi)
c100a786:	eb 22                	jmp    c100a7aa <inode_release+0x82>
c100a788:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c100a78c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a790:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a793:	83 c1 04             	add    $0x4,%ecx
c100a796:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c100a799:	89 94 85 b0 fd ff ff 	mov    %edx,-0x250(%ebp,%eax,4)
c100a7a0:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a7a4:	83 c0 01             	add    $0x1,%eax
c100a7a7:	88 45 f7             	mov    %al,-0x9(%ebp)
c100a7aa:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c100a7ae:	76 d8                	jbe    c100a788 <inode_release+0x60>
c100a7b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a7b3:	8b 40 40             	mov    0x40(%eax),%eax
c100a7b6:	85 c0                	test   %eax,%eax
c100a7b8:	0f 84 b2 00 00 00    	je     c100a870 <inode_release+0x148>
c100a7be:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a7c1:	8b 50 40             	mov    0x40(%eax),%edx
c100a7c4:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
c100a7ca:	83 c0 30             	add    $0x30,%eax
c100a7cd:	83 ec 04             	sub    $0x4,%esp
c100a7d0:	6a 01                	push   $0x1
c100a7d2:	52                   	push   %edx
c100a7d3:	50                   	push   %eax
c100a7d4:	e8 80 b8 ff ff       	call   c1006059 <ide_read>
c100a7d9:	83 c4 10             	add    $0x10,%esp
c100a7dc:	c6 45 f6 8c          	movb   $0x8c,-0xa(%ebp)
c100a7e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a7e3:	8b 50 40             	mov    0x40(%eax),%edx
c100a7e6:	8b 45 08             	mov    0x8(%ebp),%eax
c100a7e9:	8b 40 10             	mov    0x10(%eax),%eax
c100a7ec:	8b 40 28             	mov    0x28(%eax),%eax
c100a7ef:	29 c2                	sub    %eax,%edx
c100a7f1:	89 d0                	mov    %edx,%eax
c100a7f3:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a7f6:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100a7fa:	75 19                	jne    c100a815 <inode_release+0xed>
c100a7fc:	68 f4 c7 00 c1       	push   $0xc100c7f4
c100a801:	68 1c c8 00 c1       	push   $0xc100c81c
c100a806:	68 9c 00 00 00       	push   $0x9c
c100a80b:	68 60 c7 00 c1       	push   $0xc100c760
c100a810:	e8 56 5b ff ff       	call   c100036b <__PANIC>
c100a815:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a818:	c1 e8 03             	shr    $0x3,%eax
c100a81b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a81e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a821:	83 e0 07             	and    $0x7,%eax
c100a824:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a827:	8b 45 08             	mov    0x8(%ebp),%eax
c100a82a:	8b 50 18             	mov    0x18(%eax),%edx
c100a82d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a830:	01 d0                	add    %edx,%eax
c100a832:	0f b6 00             	movzbl (%eax),%eax
c100a835:	89 c2                	mov    %eax,%edx
c100a837:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a83a:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a83f:	89 c1                	mov    %eax,%ecx
c100a841:	d3 e3                	shl    %cl,%ebx
c100a843:	89 d8                	mov    %ebx,%eax
c100a845:	f7 d0                	not    %eax
c100a847:	89 d1                	mov    %edx,%ecx
c100a849:	21 c1                	and    %eax,%ecx
c100a84b:	8b 45 08             	mov    0x8(%ebp),%eax
c100a84e:	8b 50 18             	mov    0x18(%eax),%edx
c100a851:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a854:	01 d0                	add    %edx,%eax
c100a856:	89 ca                	mov    %ecx,%edx
c100a858:	88 10                	mov    %dl,(%eax)
c100a85a:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a85f:	83 ec 04             	sub    $0x4,%esp
c100a862:	6a 01                	push   $0x1
c100a864:	ff 75 ec             	pushl  -0x14(%ebp)
c100a867:	50                   	push   %eax
c100a868:	e8 90 eb ff ff       	call   c10093fd <bitmap_sync>
c100a86d:	83 c4 10             	add    $0x10,%esp
c100a870:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100a874:	e9 b9 00 00 00       	jmp    c100a932 <inode_release+0x20a>
c100a879:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a87d:	8b 84 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%eax
c100a884:	85 c0                	test   %eax,%eax
c100a886:	0f 84 9c 00 00 00    	je     c100a928 <inode_release+0x200>
c100a88c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100a893:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a897:	8b 94 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%edx
c100a89e:	8b 45 08             	mov    0x8(%ebp),%eax
c100a8a1:	8b 40 10             	mov    0x10(%eax),%eax
c100a8a4:	8b 40 28             	mov    0x28(%eax),%eax
c100a8a7:	29 c2                	sub    %eax,%edx
c100a8a9:	89 d0                	mov    %edx,%eax
c100a8ab:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a8ae:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100a8b2:	75 19                	jne    c100a8cd <inode_release+0x1a5>
c100a8b4:	68 f4 c7 00 c1       	push   $0xc100c7f4
c100a8b9:	68 1c c8 00 c1       	push   $0xc100c81c
c100a8be:	68 a9 00 00 00       	push   $0xa9
c100a8c3:	68 60 c7 00 c1       	push   $0xc100c760
c100a8c8:	e8 9e 5a ff ff       	call   c100036b <__PANIC>
c100a8cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a8d0:	c1 e8 03             	shr    $0x3,%eax
c100a8d3:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a8d6:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a8d9:	83 e0 07             	and    $0x7,%eax
c100a8dc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a8df:	8b 45 08             	mov    0x8(%ebp),%eax
c100a8e2:	8b 50 18             	mov    0x18(%eax),%edx
c100a8e5:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a8e8:	01 d0                	add    %edx,%eax
c100a8ea:	0f b6 00             	movzbl (%eax),%eax
c100a8ed:	89 c2                	mov    %eax,%edx
c100a8ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a8f2:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a8f7:	89 c1                	mov    %eax,%ecx
c100a8f9:	d3 e3                	shl    %cl,%ebx
c100a8fb:	89 d8                	mov    %ebx,%eax
c100a8fd:	f7 d0                	not    %eax
c100a8ff:	89 d1                	mov    %edx,%ecx
c100a901:	21 c1                	and    %eax,%ecx
c100a903:	8b 45 08             	mov    0x8(%ebp),%eax
c100a906:	8b 50 18             	mov    0x18(%eax),%edx
c100a909:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a90c:	01 d0                	add    %edx,%eax
c100a90e:	89 ca                	mov    %ecx,%edx
c100a910:	88 10                	mov    %dl,(%eax)
c100a912:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a917:	83 ec 04             	sub    $0x4,%esp
c100a91a:	6a 01                	push   $0x1
c100a91c:	ff 75 ec             	pushl  -0x14(%ebp)
c100a91f:	50                   	push   %eax
c100a920:	e8 d8 ea ff ff       	call   c10093fd <bitmap_sync>
c100a925:	83 c4 10             	add    $0x10,%esp
c100a928:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a92c:	83 c0 01             	add    $0x1,%eax
c100a92f:	88 45 f7             	mov    %al,-0x9(%ebp)
c100a932:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a936:	3a 45 f6             	cmp    -0xa(%ebp),%al
c100a939:	0f 82 3a ff ff ff    	jb     c100a879 <inode_release+0x151>
c100a93f:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a942:	c1 e8 03             	shr    $0x3,%eax
c100a945:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a948:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a94b:	83 e0 07             	and    $0x7,%eax
c100a94e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a951:	8b 45 08             	mov    0x8(%ebp),%eax
c100a954:	8b 50 20             	mov    0x20(%eax),%edx
c100a957:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a95a:	01 d0                	add    %edx,%eax
c100a95c:	0f b6 00             	movzbl (%eax),%eax
c100a95f:	89 c2                	mov    %eax,%edx
c100a961:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a964:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a969:	89 c1                	mov    %eax,%ecx
c100a96b:	d3 e3                	shl    %cl,%ebx
c100a96d:	89 d8                	mov    %ebx,%eax
c100a96f:	f7 d0                	not    %eax
c100a971:	89 d1                	mov    %edx,%ecx
c100a973:	21 c1                	and    %eax,%ecx
c100a975:	8b 45 08             	mov    0x8(%ebp),%eax
c100a978:	8b 50 20             	mov    0x20(%eax),%edx
c100a97b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a97e:	01 d0                	add    %edx,%eax
c100a980:	89 ca                	mov    %ecx,%edx
c100a982:	88 10                	mov    %dl,(%eax)
c100a984:	a1 30 42 a1 c1       	mov    0xc1a14230,%eax
c100a989:	83 ec 04             	sub    $0x4,%esp
c100a98c:	6a 00                	push   $0x0
c100a98e:	ff 75 0c             	pushl  0xc(%ebp)
c100a991:	50                   	push   %eax
c100a992:	e8 66 ea ff ff       	call   c10093fd <bitmap_sync>
c100a997:	83 c4 10             	add    $0x10,%esp
c100a99a:	83 ec 08             	sub    $0x8,%esp
c100a99d:	6a 02                	push   $0x2
c100a99f:	68 00 04 00 00       	push   $0x400
c100a9a4:	e8 0a 83 ff ff       	call   c1002cb3 <vmm_malloc>
c100a9a9:	83 c4 10             	add    $0x10,%esp
c100a9ac:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100a9af:	83 ec 04             	sub    $0x4,%esp
c100a9b2:	ff 75 e0             	pushl  -0x20(%ebp)
c100a9b5:	ff 75 0c             	pushl  0xc(%ebp)
c100a9b8:	ff 75 08             	pushl  0x8(%ebp)
c100a9bb:	e8 6c fc ff ff       	call   c100a62c <inode_delete>
c100a9c0:	83 c4 10             	add    $0x10,%esp
c100a9c3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a9c6:	83 ec 08             	sub    $0x8,%esp
c100a9c9:	68 00 04 00 00       	push   $0x400
c100a9ce:	50                   	push   %eax
c100a9cf:	e8 04 84 ff ff       	call   c1002dd8 <vmm_free>
c100a9d4:	83 c4 10             	add    $0x10,%esp
c100a9d7:	83 ec 0c             	sub    $0xc,%esp
c100a9da:	ff 75 f0             	pushl  -0x10(%ebp)
c100a9dd:	e8 30 fc ff ff       	call   c100a612 <inode_close>
c100a9e2:	83 c4 10             	add    $0x10,%esp
c100a9e5:	90                   	nop
c100a9e6:	8d 65 f8             	lea    -0x8(%ebp),%esp
c100a9e9:	5b                   	pop    %ebx
c100a9ea:	5f                   	pop    %edi
c100a9eb:	5d                   	pop    %ebp
c100a9ec:	c3                   	ret    

c100a9ed <inode_init>:
c100a9ed:	55                   	push   %ebp
c100a9ee:	89 e5                	mov    %esp,%ebp
c100a9f0:	83 ec 10             	sub    $0x10,%esp
c100a9f3:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a9f6:	8b 55 08             	mov    0x8(%ebp),%edx
c100a9f9:	89 10                	mov    %edx,(%eax)
c100a9fb:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a9fe:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100aa05:	8b 45 0c             	mov    0xc(%ebp),%eax
c100aa08:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100aa0f:	8b 45 0c             	mov    0xc(%ebp),%eax
c100aa12:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c100aa16:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100aa1d:	eb 14                	jmp    c100aa33 <inode_init+0x46>
c100aa1f:	8b 45 0c             	mov    0xc(%ebp),%eax
c100aa22:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100aa25:	83 c2 04             	add    $0x4,%edx
c100aa28:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c100aa2f:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100aa33:	83 7d fc 0c          	cmpl   $0xc,-0x4(%ebp)
c100aa37:	7e e6                	jle    c100aa1f <inode_init+0x32>
c100aa39:	90                   	nop
c100aa3a:	90                   	nop
c100aa3b:	c9                   	leave  
c100aa3c:	c3                   	ret    

c100aa3d <hash32>:
c100aa3d:	55                   	push   %ebp
c100aa3e:	89 e5                	mov    %esp,%ebp
c100aa40:	83 ec 10             	sub    $0x10,%esp
c100aa43:	8b 45 08             	mov    0x8(%ebp),%eax
c100aa46:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100aa4c:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100aa4f:	b8 20 00 00 00       	mov    $0x20,%eax
c100aa54:	2b 45 0c             	sub    0xc(%ebp),%eax
c100aa57:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100aa5a:	89 c1                	mov    %eax,%ecx
c100aa5c:	d3 ea                	shr    %cl,%edx
c100aa5e:	89 d0                	mov    %edx,%eax
c100aa60:	c9                   	leave  
c100aa61:	c3                   	ret    

c100aa62 <is_pipe>:
c100aa62:	55                   	push   %ebp
c100aa63:	89 e5                	mov    %esp,%ebp
c100aa65:	83 ec 18             	sub    $0x18,%esp
c100aa68:	83 ec 0c             	sub    $0xc,%esp
c100aa6b:	ff 75 08             	pushl  0x8(%ebp)
c100aa6e:	e8 9c c4 ff ff       	call   c1006f0f <fd_local2global>
c100aa73:	83 c4 10             	add    $0x10,%esp
c100aa76:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100aa79:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100aa7c:	89 d0                	mov    %edx,%eax
c100aa7e:	01 c0                	add    %eax,%eax
c100aa80:	01 d0                	add    %edx,%eax
c100aa82:	c1 e0 02             	shl    $0x2,%eax
c100aa85:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c100aa8a:	8b 00                	mov    (%eax),%eax
c100aa8c:	3d ff ff 00 00       	cmp    $0xffff,%eax
c100aa91:	0f 94 c0             	sete   %al
c100aa94:	c9                   	leave  
c100aa95:	c3                   	ret    

c100aa96 <sys_pipe>:
c100aa96:	55                   	push   %ebp
c100aa97:	89 e5                	mov    %esp,%ebp
c100aa99:	53                   	push   %ebx
c100aa9a:	83 ec 14             	sub    $0x14,%esp
c100aa9d:	e8 42 e7 ff ff       	call   c10091e4 <get_free_slot_in_global>
c100aaa2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100aaa5:	83 ec 08             	sub    $0x8,%esp
c100aaa8:	6a 01                	push   $0x1
c100aaaa:	68 00 10 00 00       	push   $0x1000
c100aaaf:	e8 ff 81 ff ff       	call   c1002cb3 <vmm_malloc>
c100aab4:	83 c4 10             	add    $0x10,%esp
c100aab7:	89 c1                	mov    %eax,%ecx
c100aab9:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100aabc:	89 d0                	mov    %edx,%eax
c100aabe:	01 c0                	add    %eax,%eax
c100aac0:	01 d0                	add    %edx,%eax
c100aac2:	c1 e0 02             	shl    $0x2,%eax
c100aac5:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100aaca:	89 08                	mov    %ecx,(%eax)
c100aacc:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100aacf:	89 d0                	mov    %edx,%eax
c100aad1:	01 c0                	add    %eax,%eax
c100aad3:	01 d0                	add    %edx,%eax
c100aad5:	c1 e0 02             	shl    $0x2,%eax
c100aad8:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100aadd:	8b 00                	mov    (%eax),%eax
c100aadf:	83 ec 0c             	sub    $0xc,%esp
c100aae2:	50                   	push   %eax
c100aae3:	e8 bb 01 00 00       	call   c100aca3 <ioqueue_init>
c100aae8:	83 c4 10             	add    $0x10,%esp
c100aaeb:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100aaee:	89 d0                	mov    %edx,%eax
c100aaf0:	01 c0                	add    %eax,%eax
c100aaf2:	01 d0                	add    %edx,%eax
c100aaf4:	c1 e0 02             	shl    $0x2,%eax
c100aaf7:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100aafc:	8b 00                	mov    (%eax),%eax
c100aafe:	85 c0                	test   %eax,%eax
c100ab00:	75 07                	jne    c100ab09 <sys_pipe+0x73>
c100ab02:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100ab07:	eb 5c                	jmp    c100ab65 <sys_pipe+0xcf>
c100ab09:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ab0c:	89 d0                	mov    %edx,%eax
c100ab0e:	01 c0                	add    %eax,%eax
c100ab10:	01 d0                	add    %edx,%eax
c100ab12:	c1 e0 02             	shl    $0x2,%eax
c100ab15:	05 44 42 a1 c1       	add    $0xc1a14244,%eax
c100ab1a:	c7 00 ff ff 00 00    	movl   $0xffff,(%eax)
c100ab20:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100ab23:	89 d0                	mov    %edx,%eax
c100ab25:	01 c0                	add    %eax,%eax
c100ab27:	01 d0                	add    %edx,%eax
c100ab29:	c1 e0 02             	shl    $0x2,%eax
c100ab2c:	05 40 42 a1 c1       	add    $0xc1a14240,%eax
c100ab31:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
c100ab37:	83 ec 0c             	sub    $0xc,%esp
c100ab3a:	ff 75 f4             	pushl  -0xc(%ebp)
c100ab3d:	e8 e7 e6 ff ff       	call   c1009229 <task_fd_install>
c100ab42:	83 c4 10             	add    $0x10,%esp
c100ab45:	8b 55 08             	mov    0x8(%ebp),%edx
c100ab48:	89 02                	mov    %eax,(%edx)
c100ab4a:	8b 45 08             	mov    0x8(%ebp),%eax
c100ab4d:	8d 58 04             	lea    0x4(%eax),%ebx
c100ab50:	83 ec 0c             	sub    $0xc,%esp
c100ab53:	ff 75 f4             	pushl  -0xc(%ebp)
c100ab56:	e8 ce e6 ff ff       	call   c1009229 <task_fd_install>
c100ab5b:	83 c4 10             	add    $0x10,%esp
c100ab5e:	89 03                	mov    %eax,(%ebx)
c100ab60:	b8 00 00 00 00       	mov    $0x0,%eax
c100ab65:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100ab68:	c9                   	leave  
c100ab69:	c3                   	ret    

c100ab6a <pipe_read>:
c100ab6a:	55                   	push   %ebp
c100ab6b:	89 e5                	mov    %esp,%ebp
c100ab6d:	83 ec 28             	sub    $0x28,%esp
c100ab70:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ab73:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100ab76:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100ab7d:	8b 45 08             	mov    0x8(%ebp),%eax
c100ab80:	83 ec 0c             	sub    $0xc,%esp
c100ab83:	50                   	push   %eax
c100ab84:	e8 86 c3 ff ff       	call   c1006f0f <fd_local2global>
c100ab89:	83 c4 10             	add    $0x10,%esp
c100ab8c:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100ab8f:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100ab92:	89 d0                	mov    %edx,%eax
c100ab94:	01 c0                	add    %eax,%eax
c100ab96:	01 d0                	add    %edx,%eax
c100ab98:	c1 e0 02             	shl    $0x2,%eax
c100ab9b:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100aba0:	8b 00                	mov    (%eax),%eax
c100aba2:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100aba5:	83 ec 0c             	sub    $0xc,%esp
c100aba8:	ff 75 e8             	pushl  -0x18(%ebp)
c100abab:	e8 3d 03 00 00       	call   c100aeed <ioq_length>
c100abb0:	83 c4 10             	add    $0x10,%esp
c100abb3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100abb6:	8b 45 10             	mov    0x10(%ebp),%eax
c100abb9:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c100abbc:	0f 46 45 e4          	cmovbe -0x1c(%ebp),%eax
c100abc0:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100abc3:	eb 1b                	jmp    c100abe0 <pipe_read+0x76>
c100abc5:	83 ec 0c             	sub    $0xc,%esp
c100abc8:	ff 75 e8             	pushl  -0x18(%ebp)
c100abcb:	e8 f0 01 00 00       	call   c100adc0 <ioq_getchar>
c100abd0:	83 c4 10             	add    $0x10,%esp
c100abd3:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100abd6:	88 02                	mov    %al,(%edx)
c100abd8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100abdc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100abe0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100abe3:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c100abe6:	72 dd                	jb     c100abc5 <pipe_read+0x5b>
c100abe8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100abeb:	c9                   	leave  
c100abec:	c3                   	ret    

c100abed <pipe_write>:
c100abed:	55                   	push   %ebp
c100abee:	89 e5                	mov    %esp,%ebp
c100abf0:	83 ec 28             	sub    $0x28,%esp
c100abf3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100abfa:	8b 45 08             	mov    0x8(%ebp),%eax
c100abfd:	83 ec 0c             	sub    $0xc,%esp
c100ac00:	50                   	push   %eax
c100ac01:	e8 09 c3 ff ff       	call   c1006f0f <fd_local2global>
c100ac06:	83 c4 10             	add    $0x10,%esp
c100ac09:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100ac0c:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100ac0f:	89 d0                	mov    %edx,%eax
c100ac11:	01 c0                	add    %eax,%eax
c100ac13:	01 d0                	add    %edx,%eax
c100ac15:	c1 e0 02             	shl    $0x2,%eax
c100ac18:	05 48 42 a1 c1       	add    $0xc1a14248,%eax
c100ac1d:	8b 00                	mov    (%eax),%eax
c100ac1f:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100ac22:	83 ec 0c             	sub    $0xc,%esp
c100ac25:	ff 75 e8             	pushl  -0x18(%ebp)
c100ac28:	e8 c0 02 00 00       	call   c100aeed <ioq_length>
c100ac2d:	83 c4 10             	add    $0x10,%esp
c100ac30:	ba 40 00 00 00       	mov    $0x40,%edx
c100ac35:	29 c2                	sub    %eax,%edx
c100ac37:	89 d0                	mov    %edx,%eax
c100ac39:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100ac3c:	8b 45 10             	mov    0x10(%ebp),%eax
c100ac3f:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c100ac42:	0f 46 45 e4          	cmovbe -0x1c(%ebp),%eax
c100ac46:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100ac49:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ac4c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100ac4f:	eb 20                	jmp    c100ac71 <pipe_write+0x84>
c100ac51:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100ac54:	0f b6 00             	movzbl (%eax),%eax
c100ac57:	0f be c0             	movsbl %al,%eax
c100ac5a:	83 ec 08             	sub    $0x8,%esp
c100ac5d:	50                   	push   %eax
c100ac5e:	ff 75 e8             	pushl  -0x18(%ebp)
c100ac61:	e8 ef 01 00 00       	call   c100ae55 <ioq_putchar>
c100ac66:	83 c4 10             	add    $0x10,%esp
c100ac69:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100ac6d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c100ac71:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100ac74:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c100ac77:	72 d8                	jb     c100ac51 <pipe_write+0x64>
c100ac79:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100ac7c:	c9                   	leave  
c100ac7d:	c3                   	ret    

c100ac7e <hash32>:
c100ac7e:	55                   	push   %ebp
c100ac7f:	89 e5                	mov    %esp,%ebp
c100ac81:	83 ec 10             	sub    $0x10,%esp
c100ac84:	8b 45 08             	mov    0x8(%ebp),%eax
c100ac87:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c100ac8d:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100ac90:	b8 20 00 00 00       	mov    $0x20,%eax
c100ac95:	2b 45 0c             	sub    0xc(%ebp),%eax
c100ac98:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100ac9b:	89 c1                	mov    %eax,%ecx
c100ac9d:	d3 ea                	shr    %cl,%edx
c100ac9f:	89 d0                	mov    %edx,%eax
c100aca1:	c9                   	leave  
c100aca2:	c3                   	ret    

c100aca3 <ioqueue_init>:
c100aca3:	55                   	push   %ebp
c100aca4:	89 e5                	mov    %esp,%ebp
c100aca6:	83 ec 08             	sub    $0x8,%esp
c100aca9:	8b 45 08             	mov    0x8(%ebp),%eax
c100acac:	83 ec 0c             	sub    $0xc,%esp
c100acaf:	50                   	push   %eax
c100acb0:	e8 86 af ff ff       	call   c1005c3b <lock_init>
c100acb5:	83 c4 10             	add    $0x10,%esp
c100acb8:	8b 45 08             	mov    0x8(%ebp),%eax
c100acbb:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c100acc2:	8b 45 08             	mov    0x8(%ebp),%eax
c100acc5:	8b 50 18             	mov    0x18(%eax),%edx
c100acc8:	8b 45 08             	mov    0x8(%ebp),%eax
c100accb:	89 50 14             	mov    %edx,0x14(%eax)
c100acce:	8b 45 08             	mov    0x8(%ebp),%eax
c100acd1:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
c100acd8:	8b 45 08             	mov    0x8(%ebp),%eax
c100acdb:	8b 50 60             	mov    0x60(%eax),%edx
c100acde:	8b 45 08             	mov    0x8(%ebp),%eax
c100ace1:	89 50 5c             	mov    %edx,0x5c(%eax)
c100ace4:	90                   	nop
c100ace5:	c9                   	leave  
c100ace6:	c3                   	ret    

c100ace7 <next_pos>:
c100ace7:	55                   	push   %ebp
c100ace8:	89 e5                	mov    %esp,%ebp
c100acea:	8b 45 08             	mov    0x8(%ebp),%eax
c100aced:	8d 50 01             	lea    0x1(%eax),%edx
c100acf0:	89 d0                	mov    %edx,%eax
c100acf2:	c1 f8 1f             	sar    $0x1f,%eax
c100acf5:	c1 e8 1a             	shr    $0x1a,%eax
c100acf8:	01 c2                	add    %eax,%edx
c100acfa:	83 e2 3f             	and    $0x3f,%edx
c100acfd:	29 c2                	sub    %eax,%edx
c100acff:	89 d0                	mov    %edx,%eax
c100ad01:	5d                   	pop    %ebp
c100ad02:	c3                   	ret    

c100ad03 <ioq_full>:
c100ad03:	55                   	push   %ebp
c100ad04:	89 e5                	mov    %esp,%ebp
c100ad06:	8b 45 08             	mov    0x8(%ebp),%eax
c100ad09:	8b 40 5c             	mov    0x5c(%eax),%eax
c100ad0c:	50                   	push   %eax
c100ad0d:	e8 d5 ff ff ff       	call   c100ace7 <next_pos>
c100ad12:	83 c4 04             	add    $0x4,%esp
c100ad15:	8b 55 08             	mov    0x8(%ebp),%edx
c100ad18:	8b 52 60             	mov    0x60(%edx),%edx
c100ad1b:	39 d0                	cmp    %edx,%eax
c100ad1d:	0f 94 c0             	sete   %al
c100ad20:	c9                   	leave  
c100ad21:	c3                   	ret    

c100ad22 <ioq_empty>:
c100ad22:	55                   	push   %ebp
c100ad23:	89 e5                	mov    %esp,%ebp
c100ad25:	8b 45 08             	mov    0x8(%ebp),%eax
c100ad28:	8b 50 5c             	mov    0x5c(%eax),%edx
c100ad2b:	8b 45 08             	mov    0x8(%ebp),%eax
c100ad2e:	8b 40 60             	mov    0x60(%eax),%eax
c100ad31:	39 c2                	cmp    %eax,%edx
c100ad33:	0f 94 c0             	sete   %al
c100ad36:	5d                   	pop    %ebp
c100ad37:	c3                   	ret    

c100ad38 <ioq_wait>:
c100ad38:	55                   	push   %ebp
c100ad39:	89 e5                	mov    %esp,%ebp
c100ad3b:	83 ec 08             	sub    $0x8,%esp
c100ad3e:	8b 45 08             	mov    0x8(%ebp),%eax
c100ad41:	8b 00                	mov    (%eax),%eax
c100ad43:	85 c0                	test   %eax,%eax
c100ad45:	75 06                	jne    c100ad4d <ioq_wait+0x15>
c100ad47:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100ad4b:	75 16                	jne    c100ad63 <ioq_wait+0x2b>
c100ad4d:	68 2c c8 00 c1       	push   $0xc100c82c
c100ad52:	68 94 c8 00 c1       	push   $0xc100c894
c100ad57:	6a 1f                	push   $0x1f
c100ad59:	68 50 c8 00 c1       	push   $0xc100c850
c100ad5e:	e8 08 56 ff ff       	call   c100036b <__PANIC>
c100ad63:	8b 15 08 40 a1 c1    	mov    0xc1a14008,%edx
c100ad69:	8b 45 08             	mov    0x8(%ebp),%eax
c100ad6c:	89 10                	mov    %edx,(%eax)
c100ad6e:	83 ec 0c             	sub    $0xc,%esp
c100ad71:	6a 01                	push   $0x1
c100ad73:	e8 ea 90 ff ff       	call   c1003e62 <thread_block>
c100ad78:	83 c4 10             	add    $0x10,%esp
c100ad7b:	90                   	nop
c100ad7c:	c9                   	leave  
c100ad7d:	c3                   	ret    

c100ad7e <wakeup>:
c100ad7e:	55                   	push   %ebp
c100ad7f:	89 e5                	mov    %esp,%ebp
c100ad81:	83 ec 08             	sub    $0x8,%esp
c100ad84:	8b 45 08             	mov    0x8(%ebp),%eax
c100ad87:	8b 00                	mov    (%eax),%eax
c100ad89:	85 c0                	test   %eax,%eax
c100ad8b:	75 16                	jne    c100ada3 <wakeup+0x25>
c100ad8d:	68 84 c8 00 c1       	push   $0xc100c884
c100ad92:	68 a0 c8 00 c1       	push   $0xc100c8a0
c100ad97:	6a 26                	push   $0x26
c100ad99:	68 50 c8 00 c1       	push   $0xc100c850
c100ad9e:	e8 c8 55 ff ff       	call   c100036b <__PANIC>
c100ada3:	8b 45 08             	mov    0x8(%ebp),%eax
c100ada6:	8b 00                	mov    (%eax),%eax
c100ada8:	83 ec 0c             	sub    $0xc,%esp
c100adab:	50                   	push   %eax
c100adac:	e8 df 90 ff ff       	call   c1003e90 <thread_unblock>
c100adb1:	83 c4 10             	add    $0x10,%esp
c100adb4:	8b 45 08             	mov    0x8(%ebp),%eax
c100adb7:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100adbd:	90                   	nop
c100adbe:	c9                   	leave  
c100adbf:	c3                   	ret    

c100adc0 <ioq_getchar>:
c100adc0:	55                   	push   %ebp
c100adc1:	89 e5                	mov    %esp,%ebp
c100adc3:	83 ec 18             	sub    $0x18,%esp
c100adc6:	eb 30                	jmp    c100adf8 <ioq_getchar+0x38>
c100adc8:	8b 45 08             	mov    0x8(%ebp),%eax
c100adcb:	83 ec 0c             	sub    $0xc,%esp
c100adce:	50                   	push   %eax
c100adcf:	e8 05 b0 ff ff       	call   c1005dd9 <lock_acquire>
c100add4:	83 c4 10             	add    $0x10,%esp
c100add7:	8b 45 08             	mov    0x8(%ebp),%eax
c100adda:	83 c0 18             	add    $0x18,%eax
c100addd:	83 ec 0c             	sub    $0xc,%esp
c100ade0:	50                   	push   %eax
c100ade1:	e8 52 ff ff ff       	call   c100ad38 <ioq_wait>
c100ade6:	83 c4 10             	add    $0x10,%esp
c100ade9:	8b 45 08             	mov    0x8(%ebp),%eax
c100adec:	83 ec 0c             	sub    $0xc,%esp
c100adef:	50                   	push   %eax
c100adf0:	e8 33 b0 ff ff       	call   c1005e28 <lock_release>
c100adf5:	83 c4 10             	add    $0x10,%esp
c100adf8:	83 ec 0c             	sub    $0xc,%esp
c100adfb:	ff 75 08             	pushl  0x8(%ebp)
c100adfe:	e8 1f ff ff ff       	call   c100ad22 <ioq_empty>
c100ae03:	83 c4 10             	add    $0x10,%esp
c100ae06:	84 c0                	test   %al,%al
c100ae08:	75 be                	jne    c100adc8 <ioq_getchar+0x8>
c100ae0a:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae0d:	8b 40 60             	mov    0x60(%eax),%eax
c100ae10:	8b 55 08             	mov    0x8(%ebp),%edx
c100ae13:	0f b6 44 02 1c       	movzbl 0x1c(%edx,%eax,1),%eax
c100ae18:	88 45 f7             	mov    %al,-0x9(%ebp)
c100ae1b:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae1e:	8b 40 60             	mov    0x60(%eax),%eax
c100ae21:	83 ec 0c             	sub    $0xc,%esp
c100ae24:	50                   	push   %eax
c100ae25:	e8 bd fe ff ff       	call   c100ace7 <next_pos>
c100ae2a:	83 c4 10             	add    $0x10,%esp
c100ae2d:	8b 55 08             	mov    0x8(%ebp),%edx
c100ae30:	89 42 60             	mov    %eax,0x60(%edx)
c100ae33:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae36:	8b 40 14             	mov    0x14(%eax),%eax
c100ae39:	85 c0                	test   %eax,%eax
c100ae3b:	74 12                	je     c100ae4f <ioq_getchar+0x8f>
c100ae3d:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae40:	83 c0 14             	add    $0x14,%eax
c100ae43:	83 ec 0c             	sub    $0xc,%esp
c100ae46:	50                   	push   %eax
c100ae47:	e8 32 ff ff ff       	call   c100ad7e <wakeup>
c100ae4c:	83 c4 10             	add    $0x10,%esp
c100ae4f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100ae53:	c9                   	leave  
c100ae54:	c3                   	ret    

c100ae55 <ioq_putchar>:
c100ae55:	55                   	push   %ebp
c100ae56:	89 e5                	mov    %esp,%ebp
c100ae58:	83 ec 18             	sub    $0x18,%esp
c100ae5b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100ae5e:	88 45 f4             	mov    %al,-0xc(%ebp)
c100ae61:	eb 30                	jmp    c100ae93 <ioq_putchar+0x3e>
c100ae63:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae66:	83 ec 0c             	sub    $0xc,%esp
c100ae69:	50                   	push   %eax
c100ae6a:	e8 6a af ff ff       	call   c1005dd9 <lock_acquire>
c100ae6f:	83 c4 10             	add    $0x10,%esp
c100ae72:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae75:	83 c0 14             	add    $0x14,%eax
c100ae78:	83 ec 0c             	sub    $0xc,%esp
c100ae7b:	50                   	push   %eax
c100ae7c:	e8 b7 fe ff ff       	call   c100ad38 <ioq_wait>
c100ae81:	83 c4 10             	add    $0x10,%esp
c100ae84:	8b 45 08             	mov    0x8(%ebp),%eax
c100ae87:	83 ec 0c             	sub    $0xc,%esp
c100ae8a:	50                   	push   %eax
c100ae8b:	e8 98 af ff ff       	call   c1005e28 <lock_release>
c100ae90:	83 c4 10             	add    $0x10,%esp
c100ae93:	83 ec 0c             	sub    $0xc,%esp
c100ae96:	ff 75 08             	pushl  0x8(%ebp)
c100ae99:	e8 65 fe ff ff       	call   c100ad03 <ioq_full>
c100ae9e:	83 c4 10             	add    $0x10,%esp
c100aea1:	84 c0                	test   %al,%al
c100aea3:	75 be                	jne    c100ae63 <ioq_putchar+0xe>
c100aea5:	8b 45 08             	mov    0x8(%ebp),%eax
c100aea8:	8b 40 5c             	mov    0x5c(%eax),%eax
c100aeab:	8b 55 08             	mov    0x8(%ebp),%edx
c100aeae:	0f b6 4d f4          	movzbl -0xc(%ebp),%ecx
c100aeb2:	88 4c 02 1c          	mov    %cl,0x1c(%edx,%eax,1)
c100aeb6:	8b 45 08             	mov    0x8(%ebp),%eax
c100aeb9:	8b 40 5c             	mov    0x5c(%eax),%eax
c100aebc:	83 ec 0c             	sub    $0xc,%esp
c100aebf:	50                   	push   %eax
c100aec0:	e8 22 fe ff ff       	call   c100ace7 <next_pos>
c100aec5:	83 c4 10             	add    $0x10,%esp
c100aec8:	8b 55 08             	mov    0x8(%ebp),%edx
c100aecb:	89 42 5c             	mov    %eax,0x5c(%edx)
c100aece:	8b 45 08             	mov    0x8(%ebp),%eax
c100aed1:	8b 40 18             	mov    0x18(%eax),%eax
c100aed4:	85 c0                	test   %eax,%eax
c100aed6:	74 12                	je     c100aeea <ioq_putchar+0x95>
c100aed8:	8b 45 08             	mov    0x8(%ebp),%eax
c100aedb:	83 c0 18             	add    $0x18,%eax
c100aede:	83 ec 0c             	sub    $0xc,%esp
c100aee1:	50                   	push   %eax
c100aee2:	e8 97 fe ff ff       	call   c100ad7e <wakeup>
c100aee7:	83 c4 10             	add    $0x10,%esp
c100aeea:	90                   	nop
c100aeeb:	c9                   	leave  
c100aeec:	c3                   	ret    

c100aeed <ioq_length>:
c100aeed:	55                   	push   %ebp
c100aeee:	89 e5                	mov    %esp,%ebp
c100aef0:	83 ec 10             	sub    $0x10,%esp
c100aef3:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100aefa:	8b 45 08             	mov    0x8(%ebp),%eax
c100aefd:	8b 50 5c             	mov    0x5c(%eax),%edx
c100af00:	8b 45 08             	mov    0x8(%ebp),%eax
c100af03:	8b 40 60             	mov    0x60(%eax),%eax
c100af06:	39 c2                	cmp    %eax,%edx
c100af08:	7c 15                	jl     c100af1f <ioq_length+0x32>
c100af0a:	8b 45 08             	mov    0x8(%ebp),%eax
c100af0d:	8b 50 5c             	mov    0x5c(%eax),%edx
c100af10:	8b 45 08             	mov    0x8(%ebp),%eax
c100af13:	8b 40 60             	mov    0x60(%eax),%eax
c100af16:	29 c2                	sub    %eax,%edx
c100af18:	89 d0                	mov    %edx,%eax
c100af1a:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100af1d:	eb 1c                	jmp    c100af3b <ioq_length+0x4e>
c100af1f:	8b 45 08             	mov    0x8(%ebp),%eax
c100af22:	8b 50 60             	mov    0x60(%eax),%edx
c100af25:	8b 45 08             	mov    0x8(%ebp),%eax
c100af28:	8b 40 5c             	mov    0x5c(%eax),%eax
c100af2b:	29 c2                	sub    %eax,%edx
c100af2d:	89 d0                	mov    %edx,%eax
c100af2f:	ba 40 00 00 00       	mov    $0x40,%edx
c100af34:	29 c2                	sub    %eax,%edx
c100af36:	89 d0                	mov    %edx,%eax
c100af38:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100af3b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100af3e:	c9                   	leave  
c100af3f:	c3                   	ret    
