
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
  100252:	68 d0 a2 00 c1       	push   $0xc100a2d0
  100257:	68 3c a3 00 c1       	push   $0xc100a33c
  10025c:	6a 51                	push   $0x51
  10025e:	68 08 a3 00 c1       	push   $0xc100a308
  100263:	e8 03 01 f0 c0       	call   c100036b <__PANIC>
  100268:	e8 cd 1c f0 c0       	call   c1001f3a <main>
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
40000043:	68 b4 15 00 40       	push   $0x400015b4
40000048:	e8 fb 02 00 00       	call   40000348 <printf>
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
400000b2:	e8 24 07 00 00       	call   400007db <my_shell>
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

40000348 <printf>:
40000348:	55                   	push   %ebp
40000349:	89 e5                	mov    %esp,%ebp
4000034b:	83 ec 38             	sub    $0x38,%esp
4000034e:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
40000352:	8d 45 0c             	lea    0xc(%ebp),%eax
40000355:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000358:	e9 da 02 00 00       	jmp    40000637 <printf+0x2ef>
4000035d:	8b 45 08             	mov    0x8(%ebp),%eax
40000360:	0f b6 00             	movzbl (%eax),%eax
40000363:	3c 25                	cmp    $0x25,%al
40000365:	0f 85 aa 02 00 00    	jne    40000615 <printf+0x2cd>
4000036b:	90                   	nop
4000036c:	8b 45 08             	mov    0x8(%ebp),%eax
4000036f:	83 c0 01             	add    $0x1,%eax
40000372:	89 45 08             	mov    %eax,0x8(%ebp)
40000375:	8b 45 08             	mov    0x8(%ebp),%eax
40000378:	0f b6 00             	movzbl (%eax),%eax
4000037b:	0f be c0             	movsbl %al,%eax
4000037e:	83 e8 30             	sub    $0x30,%eax
40000381:	83 f8 48             	cmp    $0x48,%eax
40000384:	0f 87 6f 02 00 00    	ja     400005f9 <printf+0x2b1>
4000038a:	8b 04 85 e4 15 00 40 	mov    0x400015e4(,%eax,4),%eax
40000391:	ff e0                	jmp    *%eax
40000393:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000397:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000039a:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
4000039e:	88 45 d7             	mov    %al,-0x29(%ebp)
400003a1:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
400003a5:	83 ec 0c             	sub    $0xc,%esp
400003a8:	50                   	push   %eax
400003a9:	e8 77 fd ff ff       	call   40000125 <user_print_char>
400003ae:	83 c4 10             	add    $0x10,%esp
400003b1:	e9 54 02 00 00       	jmp    4000060a <printf+0x2c2>
400003b6:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400003ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
400003bd:	8b 40 fc             	mov    -0x4(%eax),%eax
400003c0:	89 45 dc             	mov    %eax,-0x24(%ebp)
400003c3:	83 ec 0c             	sub    $0xc,%esp
400003c6:	ff 75 dc             	pushl  -0x24(%ebp)
400003c9:	e8 75 fd ff ff       	call   40000143 <user_print_string>
400003ce:	83 c4 10             	add    $0x10,%esp
400003d1:	e9 34 02 00 00       	jmp    4000060a <printf+0x2c2>
400003d6:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400003da:	8b 45 f4             	mov    -0xc(%ebp),%eax
400003dd:	8b 40 fc             	mov    -0x4(%eax),%eax
400003e0:	89 45 d8             	mov    %eax,-0x28(%ebp)
400003e3:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
400003e7:	74 19                	je     40000402 <printf+0xba>
400003e9:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
400003ed:	6a 01                	push   $0x1
400003ef:	50                   	push   %eax
400003f0:	6a 0a                	push   $0xa
400003f2:	ff 75 d8             	pushl  -0x28(%ebp)
400003f5:	e8 5c fd ff ff       	call   40000156 <user_print_num>
400003fa:	83 c4 10             	add    $0x10,%esp
400003fd:	e9 08 02 00 00       	jmp    4000060a <printf+0x2c2>
40000402:	6a 00                	push   $0x0
40000404:	6a 14                	push   $0x14
40000406:	6a 0a                	push   $0xa
40000408:	ff 75 d8             	pushl  -0x28(%ebp)
4000040b:	e8 46 fd ff ff       	call   40000156 <user_print_num>
40000410:	83 c4 10             	add    $0x10,%esp
40000413:	e9 f2 01 00 00       	jmp    4000060a <printf+0x2c2>
40000418:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
4000041c:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000041f:	8b 40 fc             	mov    -0x4(%eax),%eax
40000422:	89 45 d0             	mov    %eax,-0x30(%ebp)
40000425:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000429:	74 19                	je     40000444 <printf+0xfc>
4000042b:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
4000042f:	6a 01                	push   $0x1
40000431:	50                   	push   %eax
40000432:	6a 10                	push   $0x10
40000434:	ff 75 d0             	pushl  -0x30(%ebp)
40000437:	e8 1a fd ff ff       	call   40000156 <user_print_num>
4000043c:	83 c4 10             	add    $0x10,%esp
4000043f:	e9 c6 01 00 00       	jmp    4000060a <printf+0x2c2>
40000444:	6a 00                	push   $0x0
40000446:	6a 14                	push   $0x14
40000448:	6a 10                	push   $0x10
4000044a:	ff 75 d0             	pushl  -0x30(%ebp)
4000044d:	e8 04 fd ff ff       	call   40000156 <user_print_num>
40000452:	83 c4 10             	add    $0x10,%esp
40000455:	e9 b0 01 00 00       	jmp    4000060a <printf+0x2c2>
4000045a:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
4000045e:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000461:	8b 50 fc             	mov    -0x4(%eax),%edx
40000464:	8b 40 f8             	mov    -0x8(%eax),%eax
40000467:	89 45 c8             	mov    %eax,-0x38(%ebp)
4000046a:	89 55 cc             	mov    %edx,-0x34(%ebp)
4000046d:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000471:	74 1a                	je     4000048d <printf+0x145>
40000473:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
40000477:	8b 45 c8             	mov    -0x38(%ebp),%eax
4000047a:	6a 01                	push   $0x1
4000047c:	52                   	push   %edx
4000047d:	6a 10                	push   $0x10
4000047f:	50                   	push   %eax
40000480:	e8 d1 fc ff ff       	call   40000156 <user_print_num>
40000485:	83 c4 10             	add    $0x10,%esp
40000488:	e9 7d 01 00 00       	jmp    4000060a <printf+0x2c2>
4000048d:	8b 45 c8             	mov    -0x38(%ebp),%eax
40000490:	6a 00                	push   $0x0
40000492:	6a 14                	push   $0x14
40000494:	6a 10                	push   $0x10
40000496:	50                   	push   %eax
40000497:	e8 ba fc ff ff       	call   40000156 <user_print_num>
4000049c:	83 c4 10             	add    $0x10,%esp
4000049f:	e9 66 01 00 00       	jmp    4000060a <printf+0x2c2>
400004a4:	8b 45 08             	mov    0x8(%ebp),%eax
400004a7:	83 c0 01             	add    $0x1,%eax
400004aa:	89 45 08             	mov    %eax,0x8(%ebp)
400004ad:	8b 45 08             	mov    0x8(%ebp),%eax
400004b0:	0f b6 00             	movzbl (%eax),%eax
400004b3:	0f be c0             	movsbl %al,%eax
400004b6:	83 f8 78             	cmp    $0x78,%eax
400004b9:	0f 84 80 00 00 00    	je     4000053f <printf+0x1f7>
400004bf:	83 f8 78             	cmp    $0x78,%eax
400004c2:	0f 8f f9 00 00 00    	jg     400005c1 <printf+0x279>
400004c8:	83 f8 6c             	cmp    $0x6c,%eax
400004cb:	0f 84 ac 00 00 00    	je     4000057d <printf+0x235>
400004d1:	83 f8 6c             	cmp    $0x6c,%eax
400004d4:	0f 8f e7 00 00 00    	jg     400005c1 <printf+0x279>
400004da:	83 f8 64             	cmp    $0x64,%eax
400004dd:	74 1c                	je     400004fb <printf+0x1b3>
400004df:	83 f8 64             	cmp    $0x64,%eax
400004e2:	0f 8f d9 00 00 00    	jg     400005c1 <printf+0x279>
400004e8:	83 f8 4c             	cmp    $0x4c,%eax
400004eb:	0f 84 8c 00 00 00    	je     4000057d <printf+0x235>
400004f1:	83 f8 58             	cmp    $0x58,%eax
400004f4:	74 49                	je     4000053f <printf+0x1f7>
400004f6:	e9 c6 00 00 00       	jmp    400005c1 <printf+0x279>
400004fb:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
400004ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000502:	8b 40 fc             	mov    -0x4(%eax),%eax
40000505:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000508:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
4000050c:	74 1a                	je     40000528 <printf+0x1e0>
4000050e:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
40000512:	8b 45 ec             	mov    -0x14(%ebp),%eax
40000515:	6a 01                	push   $0x1
40000517:	52                   	push   %edx
40000518:	6a 0a                	push   $0xa
4000051a:	50                   	push   %eax
4000051b:	e8 36 fc ff ff       	call   40000156 <user_print_num>
40000520:	83 c4 10             	add    $0x10,%esp
40000523:	e9 9a 00 00 00       	jmp    400005c2 <printf+0x27a>
40000528:	8b 45 ec             	mov    -0x14(%ebp),%eax
4000052b:	6a 00                	push   $0x0
4000052d:	6a 14                	push   $0x14
4000052f:	6a 0a                	push   $0xa
40000531:	50                   	push   %eax
40000532:	e8 1f fc ff ff       	call   40000156 <user_print_num>
40000537:	83 c4 10             	add    $0x10,%esp
4000053a:	e9 83 00 00 00       	jmp    400005c2 <printf+0x27a>
4000053f:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
40000543:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000546:	8b 40 fc             	mov    -0x4(%eax),%eax
40000549:	89 45 e8             	mov    %eax,-0x18(%ebp)
4000054c:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000550:	74 17                	je     40000569 <printf+0x221>
40000552:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
40000556:	8b 45 e8             	mov    -0x18(%ebp),%eax
40000559:	6a 01                	push   $0x1
4000055b:	52                   	push   %edx
4000055c:	6a 10                	push   $0x10
4000055e:	50                   	push   %eax
4000055f:	e8 f2 fb ff ff       	call   40000156 <user_print_num>
40000564:	83 c4 10             	add    $0x10,%esp
40000567:	eb 59                	jmp    400005c2 <printf+0x27a>
40000569:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000056c:	6a 00                	push   $0x0
4000056e:	6a 14                	push   $0x14
40000570:	6a 10                	push   $0x10
40000572:	50                   	push   %eax
40000573:	e8 de fb ff ff       	call   40000156 <user_print_num>
40000578:	83 c4 10             	add    $0x10,%esp
4000057b:	eb 45                	jmp    400005c2 <printf+0x27a>
4000057d:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
40000581:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000584:	8b 50 fc             	mov    -0x4(%eax),%edx
40000587:	8b 40 f8             	mov    -0x8(%eax),%eax
4000058a:	89 45 e0             	mov    %eax,-0x20(%ebp)
4000058d:	89 55 e4             	mov    %edx,-0x1c(%ebp)
40000590:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40000594:	74 17                	je     400005ad <printf+0x265>
40000596:	0f be 55 f3          	movsbl -0xd(%ebp),%edx
4000059a:	8b 45 e0             	mov    -0x20(%ebp),%eax
4000059d:	6a 01                	push   $0x1
4000059f:	52                   	push   %edx
400005a0:	6a 10                	push   $0x10
400005a2:	50                   	push   %eax
400005a3:	e8 ae fb ff ff       	call   40000156 <user_print_num>
400005a8:	83 c4 10             	add    $0x10,%esp
400005ab:	eb 15                	jmp    400005c2 <printf+0x27a>
400005ad:	8b 45 e0             	mov    -0x20(%ebp),%eax
400005b0:	6a 00                	push   $0x0
400005b2:	6a 14                	push   $0x14
400005b4:	6a 10                	push   $0x10
400005b6:	50                   	push   %eax
400005b7:	e8 9a fb ff ff       	call   40000156 <user_print_num>
400005bc:	83 c4 10             	add    $0x10,%esp
400005bf:	eb 01                	jmp    400005c2 <printf+0x27a>
400005c1:	90                   	nop
400005c2:	eb 46                	jmp    4000060a <printf+0x2c2>
400005c4:	8b 45 08             	mov    0x8(%ebp),%eax
400005c7:	0f b6 00             	movzbl (%eax),%eax
400005ca:	0f be c0             	movsbl %al,%eax
400005cd:	83 e8 30             	sub    $0x30,%eax
400005d0:	89 c2                	mov    %eax,%edx
400005d2:	89 d0                	mov    %edx,%eax
400005d4:	c1 e0 02             	shl    $0x2,%eax
400005d7:	01 d0                	add    %edx,%eax
400005d9:	01 c0                	add    %eax,%eax
400005db:	89 c2                	mov    %eax,%edx
400005dd:	8b 45 08             	mov    0x8(%ebp),%eax
400005e0:	83 c0 01             	add    $0x1,%eax
400005e3:	89 45 08             	mov    %eax,0x8(%ebp)
400005e6:	8b 45 08             	mov    0x8(%ebp),%eax
400005e9:	0f b6 00             	movzbl (%eax),%eax
400005ec:	01 d0                	add    %edx,%eax
400005ee:	83 e8 30             	sub    $0x30,%eax
400005f1:	88 45 f3             	mov    %al,-0xd(%ebp)
400005f4:	e9 73 fd ff ff       	jmp    4000036c <printf+0x24>
400005f9:	83 ec 0c             	sub    $0xc,%esp
400005fc:	68 c4 15 00 40       	push   $0x400015c4
40000601:	e8 3d fb ff ff       	call   40000143 <user_print_string>
40000606:	83 c4 10             	add    $0x10,%esp
40000609:	90                   	nop
4000060a:	8b 45 08             	mov    0x8(%ebp),%eax
4000060d:	83 c0 01             	add    $0x1,%eax
40000610:	89 45 08             	mov    %eax,0x8(%ebp)
40000613:	eb 1e                	jmp    40000633 <printf+0x2eb>
40000615:	8b 45 08             	mov    0x8(%ebp),%eax
40000618:	0f b6 00             	movzbl (%eax),%eax
4000061b:	0f be c0             	movsbl %al,%eax
4000061e:	83 ec 0c             	sub    $0xc,%esp
40000621:	50                   	push   %eax
40000622:	e8 fe fa ff ff       	call   40000125 <user_print_char>
40000627:	83 c4 10             	add    $0x10,%esp
4000062a:	8b 45 08             	mov    0x8(%ebp),%eax
4000062d:	83 c0 01             	add    $0x1,%eax
40000630:	89 45 08             	mov    %eax,0x8(%ebp)
40000633:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
40000637:	8b 45 08             	mov    0x8(%ebp),%eax
4000063a:	0f b6 00             	movzbl (%eax),%eax
4000063d:	84 c0                	test   %al,%al
4000063f:	0f 85 18 fd ff ff    	jne    4000035d <printf+0x15>
40000645:	90                   	nop
40000646:	90                   	nop
40000647:	c9                   	leave  
40000648:	c3                   	ret    

40000649 <print_prompt>:
40000649:	55                   	push   %ebp
4000064a:	89 e5                	mov    %esp,%ebp
4000064c:	83 ec 08             	sub    $0x8,%esp
4000064f:	83 ec 08             	sub    $0x8,%esp
40000652:	68 a0 1a 00 40       	push   $0x40001aa0
40000657:	68 08 17 00 40       	push   $0x40001708
4000065c:	e8 e7 fc ff ff       	call   40000348 <printf>
40000661:	83 c4 10             	add    $0x10,%esp
40000664:	90                   	nop
40000665:	c9                   	leave  
40000666:	c3                   	ret    

40000667 <user_readline>:
40000667:	55                   	push   %ebp
40000668:	89 e5                	mov    %esp,%ebp
4000066a:	83 ec 18             	sub    $0x18,%esp
4000066d:	8b 45 08             	mov    0x8(%ebp),%eax
40000670:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000673:	eb 6a                	jmp    400006df <user_readline+0x78>
40000675:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000678:	0f b6 00             	movzbl (%eax),%eax
4000067b:	0f be c0             	movsbl %al,%eax
4000067e:	83 f8 0d             	cmp    $0xd,%eax
40000681:	74 0f                	je     40000692 <user_readline+0x2b>
40000683:	83 f8 0d             	cmp    $0xd,%eax
40000686:	7f 34                	jg     400006bc <user_readline+0x55>
40000688:	83 f8 08             	cmp    $0x8,%eax
4000068b:	74 1a                	je     400006a7 <user_readline+0x40>
4000068d:	83 f8 0a             	cmp    $0xa,%eax
40000690:	75 2a                	jne    400006bc <user_readline+0x55>
40000692:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000695:	c6 00 00             	movb   $0x0,(%eax)
40000698:	83 ec 0c             	sub    $0xc,%esp
4000069b:	6a 0a                	push   $0xa
4000069d:	e8 83 fa ff ff       	call   40000125 <user_print_char>
400006a2:	83 c4 10             	add    $0x10,%esp
400006a5:	eb 6e                	jmp    40000715 <user_readline+0xae>
400006a7:	8b 45 08             	mov    0x8(%ebp),%eax
400006aa:	0f b6 00             	movzbl (%eax),%eax
400006ad:	3c 08                	cmp    $0x8,%al
400006af:	74 2e                	je     400006df <user_readline+0x78>
400006b1:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
400006b5:	e8 cb fa ff ff       	call   40000185 <user_backtrace>
400006ba:	eb 23                	jmp    400006df <user_readline+0x78>
400006bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006bf:	0f b6 00             	movzbl (%eax),%eax
400006c2:	84 c0                	test   %al,%al
400006c4:	74 19                	je     400006df <user_readline+0x78>
400006c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006c9:	0f b6 00             	movzbl (%eax),%eax
400006cc:	0f be c0             	movsbl %al,%eax
400006cf:	83 ec 0c             	sub    $0xc,%esp
400006d2:	50                   	push   %eax
400006d3:	e8 4d fa ff ff       	call   40000125 <user_print_char>
400006d8:	83 c4 10             	add    $0x10,%esp
400006db:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
400006df:	83 ec 04             	sub    $0x4,%esp
400006e2:	6a 01                	push   $0x1
400006e4:	ff 75 f4             	pushl  -0xc(%ebp)
400006e7:	6a 00                	push   $0x0
400006e9:	e8 a7 fa ff ff       	call   40000195 <read>
400006ee:	83 c4 10             	add    $0x10,%esp
400006f1:	83 f8 ff             	cmp    $0xffffffff,%eax
400006f4:	74 0f                	je     40000705 <user_readline+0x9e>
400006f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
400006f9:	2b 45 08             	sub    0x8(%ebp),%eax
400006fc:	39 45 0c             	cmp    %eax,0xc(%ebp)
400006ff:	0f 8f 70 ff ff ff    	jg     40000675 <user_readline+0xe>
40000705:	83 ec 0c             	sub    $0xc,%esp
40000708:	68 20 17 00 40       	push   $0x40001720
4000070d:	e8 36 fc ff ff       	call   40000348 <printf>
40000712:	83 c4 10             	add    $0x10,%esp
40000715:	c9                   	leave  
40000716:	c3                   	ret    

40000717 <cmd_parse>:
40000717:	55                   	push   %ebp
40000718:	89 e5                	mov    %esp,%ebp
4000071a:	83 ec 14             	sub    $0x14,%esp
4000071d:	8b 45 10             	mov    0x10(%ebp),%eax
40000720:	88 45 ec             	mov    %al,-0x14(%ebp)
40000723:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
4000072a:	eb 19                	jmp    40000745 <cmd_parse+0x2e>
4000072c:	8b 45 fc             	mov    -0x4(%ebp),%eax
4000072f:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40000736:	8b 45 0c             	mov    0xc(%ebp),%eax
40000739:	01 d0                	add    %edx,%eax
4000073b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
40000741:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
40000745:	83 7d fc 0f          	cmpl   $0xf,-0x4(%ebp)
40000749:	7e e1                	jle    4000072c <cmd_parse+0x15>
4000074b:	8b 45 08             	mov    0x8(%ebp),%eax
4000074e:	89 45 f8             	mov    %eax,-0x8(%ebp)
40000751:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
40000758:	eb 6f                	jmp    400007c9 <cmd_parse+0xb2>
4000075a:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
4000075e:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000761:	0f b6 00             	movzbl (%eax),%eax
40000764:	38 45 ec             	cmp    %al,-0x14(%ebp)
40000767:	74 f1                	je     4000075a <cmd_parse+0x43>
40000769:	8b 45 f8             	mov    -0x8(%ebp),%eax
4000076c:	0f b6 00             	movzbl (%eax),%eax
4000076f:	84 c0                	test   %al,%al
40000771:	74 62                	je     400007d5 <cmd_parse+0xbe>
40000773:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000776:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
4000077d:	8b 45 0c             	mov    0xc(%ebp),%eax
40000780:	01 c2                	add    %eax,%edx
40000782:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000785:	89 02                	mov    %eax,(%edx)
40000787:	eb 04                	jmp    4000078d <cmd_parse+0x76>
40000789:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
4000078d:	8b 45 f8             	mov    -0x8(%ebp),%eax
40000790:	0f b6 00             	movzbl (%eax),%eax
40000793:	84 c0                	test   %al,%al
40000795:	74 0b                	je     400007a2 <cmd_parse+0x8b>
40000797:	8b 45 f8             	mov    -0x8(%ebp),%eax
4000079a:	0f b6 00             	movzbl (%eax),%eax
4000079d:	38 45 ec             	cmp    %al,-0x14(%ebp)
400007a0:	75 e7                	jne    40000789 <cmd_parse+0x72>
400007a2:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007a5:	0f b6 00             	movzbl (%eax),%eax
400007a8:	84 c0                	test   %al,%al
400007aa:	74 0c                	je     400007b8 <cmd_parse+0xa1>
400007ac:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007af:	8d 50 01             	lea    0x1(%eax),%edx
400007b2:	89 55 f8             	mov    %edx,-0x8(%ebp)
400007b5:	c6 00 00             	movb   $0x0,(%eax)
400007b8:	83 7d f4 10          	cmpl   $0x10,-0xc(%ebp)
400007bc:	7e 07                	jle    400007c5 <cmd_parse+0xae>
400007be:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
400007c3:	eb 14                	jmp    400007d9 <cmd_parse+0xc2>
400007c5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
400007c9:	8b 45 f8             	mov    -0x8(%ebp),%eax
400007cc:	0f b6 00             	movzbl (%eax),%eax
400007cf:	84 c0                	test   %al,%al
400007d1:	75 8b                	jne    4000075e <cmd_parse+0x47>
400007d3:	eb 01                	jmp    400007d6 <cmd_parse+0xbf>
400007d5:	90                   	nop
400007d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
400007d9:	c9                   	leave  
400007da:	c3                   	ret    

400007db <my_shell>:
400007db:	55                   	push   %ebp
400007dc:	89 e5                	mov    %esp,%ebp
400007de:	83 ec 28             	sub    $0x28,%esp
400007e1:	c6 05 a0 1a 00 40 2f 	movb   $0x2f,0x40001aa0
400007e8:	c6 05 a1 1a 00 40 00 	movb   $0x0,0x40001aa1
400007ef:	e8 55 fe ff ff       	call   40000649 <print_prompt>
400007f4:	83 ec 04             	sub    $0x4,%esp
400007f7:	68 00 02 00 00       	push   $0x200
400007fc:	6a 00                	push   $0x0
400007fe:	68 a0 1c 00 40       	push   $0x40001ca0
40000803:	e8 11 03 00 00       	call   40000b19 <user_memset>
40000808:	83 c4 10             	add    $0x10,%esp
4000080b:	83 ec 04             	sub    $0x4,%esp
4000080e:	68 80 00 00 00       	push   $0x80
40000813:	6a 00                	push   $0x0
40000815:	68 a0 1e 00 40       	push   $0x40001ea0
4000081a:	e8 fa 02 00 00       	call   40000b19 <user_memset>
4000081f:	83 c4 10             	add    $0x10,%esp
40000822:	83 ec 08             	sub    $0x8,%esp
40000825:	68 80 00 00 00       	push   $0x80
4000082a:	68 a0 1e 00 40       	push   $0x40001ea0
4000082f:	e8 33 fe ff ff       	call   40000667 <user_readline>
40000834:	83 c4 10             	add    $0x10,%esp
40000837:	0f b6 05 a0 1e 00 40 	movzbl 0x40001ea0,%eax
4000083e:	84 c0                	test   %al,%al
40000840:	0f 84 a1 02 00 00    	je     40000ae7 <my_shell+0x30c>
40000846:	c7 05 b0 15 00 40 ff 	movl   $0xffffffff,0x400015b0
4000084d:	ff ff ff 
40000850:	83 ec 04             	sub    $0x4,%esp
40000853:	6a 20                	push   $0x20
40000855:	68 20 1f 00 40       	push   $0x40001f20
4000085a:	68 a0 1e 00 40       	push   $0x40001ea0
4000085f:	e8 b3 fe ff ff       	call   40000717 <cmd_parse>
40000864:	83 c4 10             	add    $0x10,%esp
40000867:	a3 b0 15 00 40       	mov    %eax,0x400015b0
4000086c:	a1 b0 15 00 40       	mov    0x400015b0,%eax
40000871:	83 f8 ff             	cmp    $0xffffffff,%eax
40000874:	75 17                	jne    4000088d <my_shell+0xb2>
40000876:	83 ec 08             	sub    $0x8,%esp
40000879:	6a 10                	push   $0x10
4000087b:	68 68 17 00 40       	push   $0x40001768
40000880:	e8 c3 fa ff ff       	call   40000348 <printf>
40000885:	83 c4 10             	add    $0x10,%esp
40000888:	e9 5b 02 00 00       	jmp    40000ae8 <my_shell+0x30d>
4000088d:	a1 20 1f 00 40       	mov    0x40001f20,%eax
40000892:	83 ec 08             	sub    $0x8,%esp
40000895:	50                   	push   %eax
40000896:	68 84 17 00 40       	push   $0x40001784
4000089b:	e8 1c 03 00 00       	call   40000bbc <user_strcmp>
400008a0:	83 c4 10             	add    $0x10,%esp
400008a3:	85 c0                	test   %eax,%eax
400008a5:	75 1b                	jne    400008c2 <my_shell+0xe7>
400008a7:	a1 b0 15 00 40       	mov    0x400015b0,%eax
400008ac:	83 ec 08             	sub    $0x8,%esp
400008af:	68 20 1f 00 40       	push   $0x40001f20
400008b4:	50                   	push   %eax
400008b5:	e8 54 07 00 00       	call   4000100e <buildin_ls>
400008ba:	83 c4 10             	add    $0x10,%esp
400008bd:	e9 ff 01 00 00       	jmp    40000ac1 <my_shell+0x2e6>
400008c2:	a1 20 1f 00 40       	mov    0x40001f20,%eax
400008c7:	83 ec 08             	sub    $0x8,%esp
400008ca:	50                   	push   %eax
400008cb:	68 87 17 00 40       	push   $0x40001787
400008d0:	e8 e7 02 00 00       	call   40000bbc <user_strcmp>
400008d5:	83 c4 10             	add    $0x10,%esp
400008d8:	85 c0                	test   %eax,%eax
400008da:	75 4f                	jne    4000092b <my_shell+0x150>
400008dc:	a1 b0 15 00 40       	mov    0x400015b0,%eax
400008e1:	83 ec 08             	sub    $0x8,%esp
400008e4:	68 20 1f 00 40       	push   $0x40001f20
400008e9:	50                   	push   %eax
400008ea:	e8 95 06 00 00       	call   40000f84 <buildin_cd>
400008ef:	83 c4 10             	add    $0x10,%esp
400008f2:	85 c0                	test   %eax,%eax
400008f4:	0f 84 c7 01 00 00    	je     40000ac1 <my_shell+0x2e6>
400008fa:	83 ec 04             	sub    $0x4,%esp
400008fd:	68 00 02 00 00       	push   $0x200
40000902:	6a 00                	push   $0x0
40000904:	68 a0 1a 00 40       	push   $0x40001aa0
40000909:	e8 0b 02 00 00       	call   40000b19 <user_memset>
4000090e:	83 c4 10             	add    $0x10,%esp
40000911:	83 ec 08             	sub    $0x8,%esp
40000914:	68 a0 1c 00 40       	push   $0x40001ca0
40000919:	68 a0 1a 00 40       	push   $0x40001aa0
4000091e:	e8 66 03 00 00       	call   40000c89 <user_strcpy>
40000923:	83 c4 10             	add    $0x10,%esp
40000926:	e9 96 01 00 00       	jmp    40000ac1 <my_shell+0x2e6>
4000092b:	a1 20 1f 00 40       	mov    0x40001f20,%eax
40000930:	83 ec 08             	sub    $0x8,%esp
40000933:	50                   	push   %eax
40000934:	68 8a 17 00 40       	push   $0x4000178a
40000939:	e8 7e 02 00 00       	call   40000bbc <user_strcmp>
4000093e:	83 c4 10             	add    $0x10,%esp
40000941:	85 c0                	test   %eax,%eax
40000943:	75 1b                	jne    40000960 <my_shell+0x185>
40000945:	a1 b0 15 00 40       	mov    0x400015b0,%eax
4000094a:	83 ec 08             	sub    $0x8,%esp
4000094d:	68 20 1f 00 40       	push   $0x40001f20
40000952:	50                   	push   %eax
40000953:	e8 7b 0a 00 00       	call   400013d3 <buildin_ps>
40000958:	83 c4 10             	add    $0x10,%esp
4000095b:	e9 61 01 00 00       	jmp    40000ac1 <my_shell+0x2e6>
40000960:	a1 20 1f 00 40       	mov    0x40001f20,%eax
40000965:	83 ec 08             	sub    $0x8,%esp
40000968:	50                   	push   %eax
40000969:	68 8d 17 00 40       	push   $0x4000178d
4000096e:	e8 49 02 00 00       	call   40000bbc <user_strcmp>
40000973:	83 c4 10             	add    $0x10,%esp
40000976:	85 c0                	test   %eax,%eax
40000978:	75 1b                	jne    40000995 <my_shell+0x1ba>
4000097a:	a1 b0 15 00 40       	mov    0x400015b0,%eax
4000097f:	83 ec 08             	sub    $0x8,%esp
40000982:	68 20 1f 00 40       	push   $0x40001f20
40000987:	50                   	push   %eax
40000988:	e8 97 05 00 00       	call   40000f24 <buildin_pwd>
4000098d:	83 c4 10             	add    $0x10,%esp
40000990:	e9 2c 01 00 00       	jmp    40000ac1 <my_shell+0x2e6>
40000995:	a1 20 1f 00 40       	mov    0x40001f20,%eax
4000099a:	83 ec 08             	sub    $0x8,%esp
4000099d:	50                   	push   %eax
4000099e:	68 91 17 00 40       	push   $0x40001791
400009a3:	e8 14 02 00 00       	call   40000bbc <user_strcmp>
400009a8:	83 c4 10             	add    $0x10,%esp
400009ab:	85 c0                	test   %eax,%eax
400009ad:	75 1b                	jne    400009ca <my_shell+0x1ef>
400009af:	a1 b0 15 00 40       	mov    0x400015b0,%eax
400009b4:	83 ec 08             	sub    $0x8,%esp
400009b7:	68 20 1f 00 40       	push   $0x40001f20
400009bc:	50                   	push   %eax
400009bd:	e8 36 0a 00 00       	call   400013f8 <buildin_mkdir>
400009c2:	83 c4 10             	add    $0x10,%esp
400009c5:	e9 f7 00 00 00       	jmp    40000ac1 <my_shell+0x2e6>
400009ca:	a1 20 1f 00 40       	mov    0x40001f20,%eax
400009cf:	83 ec 08             	sub    $0x8,%esp
400009d2:	50                   	push   %eax
400009d3:	68 97 17 00 40       	push   $0x40001797
400009d8:	e8 df 01 00 00       	call   40000bbc <user_strcmp>
400009dd:	83 c4 10             	add    $0x10,%esp
400009e0:	85 c0                	test   %eax,%eax
400009e2:	75 1b                	jne    400009ff <my_shell+0x224>
400009e4:	a1 b0 15 00 40       	mov    0x400015b0,%eax
400009e9:	83 ec 08             	sub    $0x8,%esp
400009ec:	68 20 1f 00 40       	push   $0x40001f20
400009f1:	50                   	push   %eax
400009f2:	e8 93 0a 00 00       	call   4000148a <buildin_rmdir>
400009f7:	83 c4 10             	add    $0x10,%esp
400009fa:	e9 c2 00 00 00       	jmp    40000ac1 <my_shell+0x2e6>
400009ff:	a1 20 1f 00 40       	mov    0x40001f20,%eax
40000a04:	83 ec 08             	sub    $0x8,%esp
40000a07:	50                   	push   %eax
40000a08:	68 9d 17 00 40       	push   $0x4000179d
40000a0d:	e8 aa 01 00 00       	call   40000bbc <user_strcmp>
40000a12:	83 c4 10             	add    $0x10,%esp
40000a15:	85 c0                	test   %eax,%eax
40000a17:	75 1b                	jne    40000a34 <my_shell+0x259>
40000a19:	a1 b0 15 00 40       	mov    0x400015b0,%eax
40000a1e:	83 ec 08             	sub    $0x8,%esp
40000a21:	68 20 1f 00 40       	push   $0x40001f20
40000a26:	50                   	push   %eax
40000a27:	e8 f0 0a 00 00       	call   4000151c <buildin_rm>
40000a2c:	83 c4 10             	add    $0x10,%esp
40000a2f:	e9 8d 00 00 00       	jmp    40000ac1 <my_shell+0x2e6>
40000a34:	e8 d3 f8 ff ff       	call   4000030c <fork>
40000a39:	89 45 f0             	mov    %eax,-0x10(%ebp)
40000a3c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
40000a40:	74 02                	je     40000a44 <my_shell+0x269>
40000a42:	eb fe                	jmp    40000a42 <my_shell+0x267>
40000a44:	a1 20 1f 00 40       	mov    0x40001f20,%eax
40000a49:	83 ec 08             	sub    $0x8,%esp
40000a4c:	68 a0 1c 00 40       	push   $0x40001ca0
40000a51:	50                   	push   %eax
40000a52:	e8 0a 04 00 00       	call   40000e61 <make_clear_abs_path>
40000a57:	83 c4 10             	add    $0x10,%esp
40000a5a:	c7 05 20 1f 00 40 a0 	movl   $0x40001ca0,0x40001f20
40000a61:	1c 00 40 
40000a64:	83 ec 04             	sub    $0x4,%esp
40000a67:	6a 0c                	push   $0xc
40000a69:	6a 00                	push   $0x0
40000a6b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
40000a6e:	50                   	push   %eax
40000a6f:	e8 a5 00 00 00       	call   40000b19 <user_memset>
40000a74:	83 c4 10             	add    $0x10,%esp
40000a77:	a1 20 1f 00 40       	mov    0x40001f20,%eax
40000a7c:	83 ec 08             	sub    $0x8,%esp
40000a7f:	8d 55 e4             	lea    -0x1c(%ebp),%edx
40000a82:	52                   	push   %edx
40000a83:	50                   	push   %eax
40000a84:	e8 01 f8 ff ff       	call   4000028a <stat>
40000a89:	83 c4 10             	add    $0x10,%esp
40000a8c:	83 f8 ff             	cmp    $0xffffffff,%eax
40000a8f:	75 18                	jne    40000aa9 <my_shell+0x2ce>
40000a91:	a1 20 1f 00 40       	mov    0x40001f20,%eax
40000a96:	83 ec 08             	sub    $0x8,%esp
40000a99:	50                   	push   %eax
40000a9a:	68 a0 17 00 40       	push   $0x400017a0
40000a9f:	e8 a4 f8 ff ff       	call   40000348 <printf>
40000aa4:	83 c4 10             	add    $0x10,%esp
40000aa7:	eb 16                	jmp    40000abf <my_shell+0x2e4>
40000aa9:	a1 20 1f 00 40       	mov    0x40001f20,%eax
40000aae:	83 ec 08             	sub    $0x8,%esp
40000ab1:	68 20 1f 00 40       	push   $0x40001f20
40000ab6:	50                   	push   %eax
40000ab7:	e8 77 f8 ff ff       	call   40000333 <exec>
40000abc:	83 c4 10             	add    $0x10,%esp
40000abf:	eb fe                	jmp    40000abf <my_shell+0x2e4>
40000ac1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
40000ac8:	eb 12                	jmp    40000adc <my_shell+0x301>
40000aca:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000acd:	c7 04 85 20 1f 00 40 	movl   $0x0,0x40001f20(,%eax,4)
40000ad4:	00 00 00 00 
40000ad8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
40000adc:	83 7d f4 0f          	cmpl   $0xf,-0xc(%ebp)
40000ae0:	7e e8                	jle    40000aca <my_shell+0x2ef>
40000ae2:	e9 08 fd ff ff       	jmp    400007ef <my_shell+0x14>
40000ae7:	90                   	nop
40000ae8:	e9 02 fd ff ff       	jmp    400007ef <my_shell+0x14>

40000aed <__memset>:
40000aed:	55                   	push   %ebp
40000aee:	89 e5                	mov    %esp,%ebp
40000af0:	57                   	push   %edi
40000af1:	83 ec 14             	sub    $0x14,%esp
40000af4:	8b 45 0c             	mov    0xc(%ebp),%eax
40000af7:	88 45 e8             	mov    %al,-0x18(%ebp)
40000afa:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000afd:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
40000b01:	8b 55 08             	mov    0x8(%ebp),%edx
40000b04:	89 d7                	mov    %edx,%edi
40000b06:	f3 aa                	rep stos %al,%es:(%edi)
40000b08:	89 fa                	mov    %edi,%edx
40000b0a:	89 4d f8             	mov    %ecx,-0x8(%ebp)
40000b0d:	89 55 f4             	mov    %edx,-0xc(%ebp)
40000b10:	8b 45 08             	mov    0x8(%ebp),%eax
40000b13:	83 c4 14             	add    $0x14,%esp
40000b16:	5f                   	pop    %edi
40000b17:	5d                   	pop    %ebp
40000b18:	c3                   	ret    

40000b19 <user_memset>:
40000b19:	55                   	push   %ebp
40000b1a:	89 e5                	mov    %esp,%ebp
40000b1c:	83 ec 04             	sub    $0x4,%esp
40000b1f:	8b 45 0c             	mov    0xc(%ebp),%eax
40000b22:	88 45 fc             	mov    %al,-0x4(%ebp)
40000b25:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
40000b29:	ff 75 10             	pushl  0x10(%ebp)
40000b2c:	50                   	push   %eax
40000b2d:	ff 75 08             	pushl  0x8(%ebp)
40000b30:	e8 b8 ff ff ff       	call   40000aed <__memset>
40000b35:	83 c4 0c             	add    $0xc,%esp
40000b38:	c9                   	leave  
40000b39:	c3                   	ret    

40000b3a <user_strcat>:
40000b3a:	55                   	push   %ebp
40000b3b:	89 e5                	mov    %esp,%ebp
40000b3d:	83 ec 10             	sub    $0x10,%esp
40000b40:	8b 45 08             	mov    0x8(%ebp),%eax
40000b43:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000b46:	90                   	nop
40000b47:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000b4a:	8d 50 01             	lea    0x1(%eax),%edx
40000b4d:	89 55 fc             	mov    %edx,-0x4(%ebp)
40000b50:	0f b6 00             	movzbl (%eax),%eax
40000b53:	84 c0                	test   %al,%al
40000b55:	75 f0                	jne    40000b47 <user_strcat+0xd>
40000b57:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
40000b5b:	90                   	nop
40000b5c:	8b 55 0c             	mov    0xc(%ebp),%edx
40000b5f:	8d 42 01             	lea    0x1(%edx),%eax
40000b62:	89 45 0c             	mov    %eax,0xc(%ebp)
40000b65:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000b68:	8d 48 01             	lea    0x1(%eax),%ecx
40000b6b:	89 4d fc             	mov    %ecx,-0x4(%ebp)
40000b6e:	0f b6 12             	movzbl (%edx),%edx
40000b71:	88 10                	mov    %dl,(%eax)
40000b73:	0f b6 00             	movzbl (%eax),%eax
40000b76:	84 c0                	test   %al,%al
40000b78:	75 e2                	jne    40000b5c <user_strcat+0x22>
40000b7a:	8b 45 08             	mov    0x8(%ebp),%eax
40000b7d:	c9                   	leave  
40000b7e:	c3                   	ret    

40000b7f <__strcmp>:
40000b7f:	55                   	push   %ebp
40000b80:	89 e5                	mov    %esp,%ebp
40000b82:	57                   	push   %edi
40000b83:	56                   	push   %esi
40000b84:	83 ec 10             	sub    $0x10,%esp
40000b87:	8b 55 08             	mov    0x8(%ebp),%edx
40000b8a:	8b 45 0c             	mov    0xc(%ebp),%eax
40000b8d:	89 d1                	mov    %edx,%ecx
40000b8f:	89 c2                	mov    %eax,%edx
40000b91:	89 ce                	mov    %ecx,%esi
40000b93:	89 d7                	mov    %edx,%edi
40000b95:	ac                   	lods   %ds:(%esi),%al
40000b96:	ae                   	scas   %es:(%edi),%al
40000b97:	75 08                	jne    40000ba1 <__strcmp+0x22>
40000b99:	84 c0                	test   %al,%al
40000b9b:	75 f8                	jne    40000b95 <__strcmp+0x16>
40000b9d:	31 c0                	xor    %eax,%eax
40000b9f:	eb 04                	jmp    40000ba5 <__strcmp+0x26>
40000ba1:	19 c0                	sbb    %eax,%eax
40000ba3:	0c 01                	or     $0x1,%al
40000ba5:	89 fa                	mov    %edi,%edx
40000ba7:	89 f1                	mov    %esi,%ecx
40000ba9:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000bac:	89 4d f0             	mov    %ecx,-0x10(%ebp)
40000baf:	89 55 ec             	mov    %edx,-0x14(%ebp)
40000bb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
40000bb5:	83 c4 10             	add    $0x10,%esp
40000bb8:	5e                   	pop    %esi
40000bb9:	5f                   	pop    %edi
40000bba:	5d                   	pop    %ebp
40000bbb:	c3                   	ret    

40000bbc <user_strcmp>:
40000bbc:	55                   	push   %ebp
40000bbd:	89 e5                	mov    %esp,%ebp
40000bbf:	ff 75 0c             	pushl  0xc(%ebp)
40000bc2:	ff 75 08             	pushl  0x8(%ebp)
40000bc5:	e8 b5 ff ff ff       	call   40000b7f <__strcmp>
40000bca:	83 c4 08             	add    $0x8,%esp
40000bcd:	c9                   	leave  
40000bce:	c3                   	ret    

40000bcf <user_strrchr>:
40000bcf:	55                   	push   %ebp
40000bd0:	89 e5                	mov    %esp,%ebp
40000bd2:	83 ec 14             	sub    $0x14,%esp
40000bd5:	8b 45 0c             	mov    0xc(%ebp),%eax
40000bd8:	88 45 ec             	mov    %al,-0x14(%ebp)
40000bdb:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000be2:	eb 1b                	jmp    40000bff <user_strrchr+0x30>
40000be4:	8b 45 08             	mov    0x8(%ebp),%eax
40000be7:	0f b6 00             	movzbl (%eax),%eax
40000bea:	0f be d0             	movsbl %al,%edx
40000bed:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
40000bf1:	39 c2                	cmp    %eax,%edx
40000bf3:	75 06                	jne    40000bfb <user_strrchr+0x2c>
40000bf5:	8b 45 08             	mov    0x8(%ebp),%eax
40000bf8:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000bfb:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000bff:	8b 45 08             	mov    0x8(%ebp),%eax
40000c02:	0f b6 00             	movzbl (%eax),%eax
40000c05:	84 c0                	test   %al,%al
40000c07:	75 db                	jne    40000be4 <user_strrchr+0x15>
40000c09:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000c0c:	c9                   	leave  
40000c0d:	c3                   	ret    

40000c0e <user_strlen>:
40000c0e:	55                   	push   %ebp
40000c0f:	89 e5                	mov    %esp,%ebp
40000c11:	83 ec 10             	sub    $0x10,%esp
40000c14:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
40000c1b:	eb 04                	jmp    40000c21 <user_strlen+0x13>
40000c1d:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
40000c21:	8b 45 08             	mov    0x8(%ebp),%eax
40000c24:	8d 50 01             	lea    0x1(%eax),%edx
40000c27:	89 55 08             	mov    %edx,0x8(%ebp)
40000c2a:	0f b6 00             	movzbl (%eax),%eax
40000c2d:	84 c0                	test   %al,%al
40000c2f:	75 ec                	jne    40000c1d <user_strlen+0xf>
40000c31:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000c34:	c9                   	leave  
40000c35:	c3                   	ret    

40000c36 <__memcpy>:
40000c36:	55                   	push   %ebp
40000c37:	89 e5                	mov    %esp,%ebp
40000c39:	57                   	push   %edi
40000c3a:	56                   	push   %esi
40000c3b:	83 ec 10             	sub    $0x10,%esp
40000c3e:	8b 45 10             	mov    0x10(%ebp),%eax
40000c41:	c1 e8 02             	shr    $0x2,%eax
40000c44:	89 c1                	mov    %eax,%ecx
40000c46:	8b 55 08             	mov    0x8(%ebp),%edx
40000c49:	8b 45 0c             	mov    0xc(%ebp),%eax
40000c4c:	89 d7                	mov    %edx,%edi
40000c4e:	89 c6                	mov    %eax,%esi
40000c50:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
40000c52:	8b 4d 10             	mov    0x10(%ebp),%ecx
40000c55:	83 e1 03             	and    $0x3,%ecx
40000c58:	74 02                	je     40000c5c <__memcpy+0x26>
40000c5a:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
40000c5c:	89 f0                	mov    %esi,%eax
40000c5e:	89 fa                	mov    %edi,%edx
40000c60:	89 4d f4             	mov    %ecx,-0xc(%ebp)
40000c63:	89 55 f0             	mov    %edx,-0x10(%ebp)
40000c66:	89 45 ec             	mov    %eax,-0x14(%ebp)
40000c69:	8b 45 08             	mov    0x8(%ebp),%eax
40000c6c:	83 c4 10             	add    $0x10,%esp
40000c6f:	5e                   	pop    %esi
40000c70:	5f                   	pop    %edi
40000c71:	5d                   	pop    %ebp
40000c72:	c3                   	ret    

40000c73 <user_memcpy>:
40000c73:	55                   	push   %ebp
40000c74:	89 e5                	mov    %esp,%ebp
40000c76:	ff 75 10             	pushl  0x10(%ebp)
40000c79:	ff 75 0c             	pushl  0xc(%ebp)
40000c7c:	ff 75 08             	pushl  0x8(%ebp)
40000c7f:	e8 b2 ff ff ff       	call   40000c36 <__memcpy>
40000c84:	83 c4 0c             	add    $0xc,%esp
40000c87:	c9                   	leave  
40000c88:	c3                   	ret    

40000c89 <user_strcpy>:
40000c89:	55                   	push   %ebp
40000c8a:	89 e5                	mov    %esp,%ebp
40000c8c:	83 ec 10             	sub    $0x10,%esp
40000c8f:	8b 45 08             	mov    0x8(%ebp),%eax
40000c92:	89 45 fc             	mov    %eax,-0x4(%ebp)
40000c95:	90                   	nop
40000c96:	8b 55 0c             	mov    0xc(%ebp),%edx
40000c99:	8d 42 01             	lea    0x1(%edx),%eax
40000c9c:	89 45 0c             	mov    %eax,0xc(%ebp)
40000c9f:	8b 45 08             	mov    0x8(%ebp),%eax
40000ca2:	8d 48 01             	lea    0x1(%eax),%ecx
40000ca5:	89 4d 08             	mov    %ecx,0x8(%ebp)
40000ca8:	0f b6 12             	movzbl (%edx),%edx
40000cab:	88 10                	mov    %dl,(%eax)
40000cad:	0f b6 00             	movzbl (%eax),%eax
40000cb0:	84 c0                	test   %al,%al
40000cb2:	75 e2                	jne    40000c96 <user_strcpy+0xd>
40000cb4:	8b 45 fc             	mov    -0x4(%ebp),%eax
40000cb7:	c9                   	leave  
40000cb8:	c3                   	ret    

40000cb9 <path_parse>:
40000cb9:	55                   	push   %ebp
40000cba:	89 e5                	mov    %esp,%ebp
40000cbc:	8b 45 08             	mov    0x8(%ebp),%eax
40000cbf:	0f b6 00             	movzbl (%eax),%eax
40000cc2:	3c 2f                	cmp    $0x2f,%al
40000cc4:	75 27                	jne    40000ced <path_parse+0x34>
40000cc6:	83 45 08 01          	addl   $0x1,0x8(%ebp)
40000cca:	8b 45 08             	mov    0x8(%ebp),%eax
40000ccd:	0f b6 00             	movzbl (%eax),%eax
40000cd0:	3c 2f                	cmp    $0x2f,%al
40000cd2:	74 f2                	je     40000cc6 <path_parse+0xd>
40000cd4:	eb 17                	jmp    40000ced <path_parse+0x34>
40000cd6:	8b 55 08             	mov    0x8(%ebp),%edx
40000cd9:	8d 42 01             	lea    0x1(%edx),%eax
40000cdc:	89 45 08             	mov    %eax,0x8(%ebp)
40000cdf:	8b 45 0c             	mov    0xc(%ebp),%eax
40000ce2:	8d 48 01             	lea    0x1(%eax),%ecx
40000ce5:	89 4d 0c             	mov    %ecx,0xc(%ebp)
40000ce8:	0f b6 12             	movzbl (%edx),%edx
40000ceb:	88 10                	mov    %dl,(%eax)
40000ced:	8b 45 08             	mov    0x8(%ebp),%eax
40000cf0:	0f b6 00             	movzbl (%eax),%eax
40000cf3:	3c 2f                	cmp    $0x2f,%al
40000cf5:	74 0a                	je     40000d01 <path_parse+0x48>
40000cf7:	8b 45 08             	mov    0x8(%ebp),%eax
40000cfa:	0f b6 00             	movzbl (%eax),%eax
40000cfd:	84 c0                	test   %al,%al
40000cff:	75 d5                	jne    40000cd6 <path_parse+0x1d>
40000d01:	8b 45 08             	mov    0x8(%ebp),%eax
40000d04:	0f b6 00             	movzbl (%eax),%eax
40000d07:	84 c0                	test   %al,%al
40000d09:	75 07                	jne    40000d12 <path_parse+0x59>
40000d0b:	b8 00 00 00 00       	mov    $0x0,%eax
40000d10:	eb 03                	jmp    40000d15 <path_parse+0x5c>
40000d12:	8b 45 08             	mov    0x8(%ebp),%eax
40000d15:	5d                   	pop    %ebp
40000d16:	c3                   	ret    

40000d17 <wash_path>:
40000d17:	55                   	push   %ebp
40000d18:	89 e5                	mov    %esp,%ebp
40000d1a:	83 ec 28             	sub    $0x28,%esp
40000d1d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
40000d24:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
40000d2b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
40000d32:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
40000d39:	8b 45 08             	mov    0x8(%ebp),%eax
40000d3c:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000d3f:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000d42:	50                   	push   %eax
40000d43:	ff 75 f4             	pushl  -0xc(%ebp)
40000d46:	e8 6e ff ff ff       	call   40000cb9 <path_parse>
40000d4b:	83 c4 08             	add    $0x8,%esp
40000d4e:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000d51:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000d55:	84 c0                	test   %al,%al
40000d57:	75 14                	jne    40000d6d <wash_path+0x56>
40000d59:	8b 45 0c             	mov    0xc(%ebp),%eax
40000d5c:	c6 00 2f             	movb   $0x2f,(%eax)
40000d5f:	8b 45 0c             	mov    0xc(%ebp),%eax
40000d62:	83 c0 01             	add    $0x1,%eax
40000d65:	c6 00 00             	movb   $0x0,(%eax)
40000d68:	e9 f2 00 00 00       	jmp    40000e5f <wash_path+0x148>
40000d6d:	8b 45 0c             	mov    0xc(%ebp),%eax
40000d70:	c6 00 00             	movb   $0x0,(%eax)
40000d73:	83 ec 08             	sub    $0x8,%esp
40000d76:	68 d8 17 00 40       	push   $0x400017d8
40000d7b:	ff 75 0c             	pushl  0xc(%ebp)
40000d7e:	e8 b7 fd ff ff       	call   40000b3a <user_strcat>
40000d83:	83 c4 10             	add    $0x10,%esp
40000d86:	e9 c8 00 00 00       	jmp    40000e53 <wash_path+0x13c>
40000d8b:	83 ec 08             	sub    $0x8,%esp
40000d8e:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000d91:	50                   	push   %eax
40000d92:	68 da 17 00 40       	push   $0x400017da
40000d97:	e8 20 fe ff ff       	call   40000bbc <user_strcmp>
40000d9c:	83 c4 10             	add    $0x10,%esp
40000d9f:	85 c0                	test   %eax,%eax
40000da1:	75 2e                	jne    40000dd1 <wash_path+0xba>
40000da3:	83 ec 08             	sub    $0x8,%esp
40000da6:	6a 2f                	push   $0x2f
40000da8:	ff 75 0c             	pushl  0xc(%ebp)
40000dab:	e8 1f fe ff ff       	call   40000bcf <user_strrchr>
40000db0:	83 c4 10             	add    $0x10,%esp
40000db3:	89 45 f0             	mov    %eax,-0x10(%ebp)
40000db6:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000db9:	3b 45 0c             	cmp    0xc(%ebp),%eax
40000dbc:	74 08                	je     40000dc6 <wash_path+0xaf>
40000dbe:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000dc1:	c6 00 00             	movb   $0x0,(%eax)
40000dc4:	eb 5f                	jmp    40000e25 <wash_path+0x10e>
40000dc6:	8b 45 f0             	mov    -0x10(%ebp),%eax
40000dc9:	83 c0 01             	add    $0x1,%eax
40000dcc:	c6 00 00             	movb   $0x0,(%eax)
40000dcf:	eb 54                	jmp    40000e25 <wash_path+0x10e>
40000dd1:	83 ec 08             	sub    $0x8,%esp
40000dd4:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000dd7:	50                   	push   %eax
40000dd8:	68 dd 17 00 40       	push   $0x400017dd
40000ddd:	e8 da fd ff ff       	call   40000bbc <user_strcmp>
40000de2:	83 c4 10             	add    $0x10,%esp
40000de5:	85 c0                	test   %eax,%eax
40000de7:	74 3c                	je     40000e25 <wash_path+0x10e>
40000de9:	83 ec 08             	sub    $0x8,%esp
40000dec:	68 d8 17 00 40       	push   $0x400017d8
40000df1:	ff 75 0c             	pushl  0xc(%ebp)
40000df4:	e8 c3 fd ff ff       	call   40000bbc <user_strcmp>
40000df9:	83 c4 10             	add    $0x10,%esp
40000dfc:	85 c0                	test   %eax,%eax
40000dfe:	74 13                	je     40000e13 <wash_path+0xfc>
40000e00:	83 ec 08             	sub    $0x8,%esp
40000e03:	68 d8 17 00 40       	push   $0x400017d8
40000e08:	ff 75 0c             	pushl  0xc(%ebp)
40000e0b:	e8 2a fd ff ff       	call   40000b3a <user_strcat>
40000e10:	83 c4 10             	add    $0x10,%esp
40000e13:	83 ec 08             	sub    $0x8,%esp
40000e16:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e19:	50                   	push   %eax
40000e1a:	ff 75 0c             	pushl  0xc(%ebp)
40000e1d:	e8 18 fd ff ff       	call   40000b3a <user_strcat>
40000e22:	83 c4 10             	add    $0x10,%esp
40000e25:	83 ec 04             	sub    $0x4,%esp
40000e28:	6a 10                	push   $0x10
40000e2a:	6a 00                	push   $0x0
40000e2c:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e2f:	50                   	push   %eax
40000e30:	e8 e4 fc ff ff       	call   40000b19 <user_memset>
40000e35:	83 c4 10             	add    $0x10,%esp
40000e38:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
40000e3c:	74 15                	je     40000e53 <wash_path+0x13c>
40000e3e:	83 ec 08             	sub    $0x8,%esp
40000e41:	8d 45 e0             	lea    -0x20(%ebp),%eax
40000e44:	50                   	push   %eax
40000e45:	ff 75 f4             	pushl  -0xc(%ebp)
40000e48:	e8 6c fe ff ff       	call   40000cb9 <path_parse>
40000e4d:	83 c4 10             	add    $0x10,%esp
40000e50:	89 45 f4             	mov    %eax,-0xc(%ebp)
40000e53:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
40000e57:	84 c0                	test   %al,%al
40000e59:	0f 85 2c ff ff ff    	jne    40000d8b <wash_path+0x74>
40000e5f:	c9                   	leave  
40000e60:	c3                   	ret    

40000e61 <make_clear_abs_path>:
40000e61:	55                   	push   %ebp
40000e62:	89 e5                	mov    %esp,%ebp
40000e64:	57                   	push   %edi
40000e65:	81 ec 04 02 00 00    	sub    $0x204,%esp
40000e6b:	c7 85 f8 fd ff ff 00 	movl   $0x0,-0x208(%ebp)
40000e72:	00 00 00 
40000e75:	8d 95 fc fd ff ff    	lea    -0x204(%ebp),%edx
40000e7b:	b8 00 00 00 00       	mov    $0x0,%eax
40000e80:	b9 7f 00 00 00       	mov    $0x7f,%ecx
40000e85:	89 d7                	mov    %edx,%edi
40000e87:	f3 ab                	rep stos %eax,%es:(%edi)
40000e89:	8b 45 08             	mov    0x8(%ebp),%eax
40000e8c:	0f b6 00             	movzbl (%eax),%eax
40000e8f:	3c 2f                	cmp    $0x2f,%al
40000e91:	74 61                	je     40000ef4 <make_clear_abs_path+0x93>
40000e93:	83 ec 04             	sub    $0x4,%esp
40000e96:	68 00 02 00 00       	push   $0x200
40000e9b:	6a 00                	push   $0x0
40000e9d:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000ea3:	50                   	push   %eax
40000ea4:	e8 70 fc ff ff       	call   40000b19 <user_memset>
40000ea9:	83 c4 10             	add    $0x10,%esp
40000eac:	83 ec 08             	sub    $0x8,%esp
40000eaf:	68 00 02 00 00       	push   $0x200
40000eb4:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000eba:	50                   	push   %eax
40000ebb:	e8 a3 f3 ff ff       	call   40000263 <getcwd>
40000ec0:	83 c4 10             	add    $0x10,%esp
40000ec3:	85 c0                	test   %eax,%eax
40000ec5:	74 2d                	je     40000ef4 <make_clear_abs_path+0x93>
40000ec7:	0f b6 85 f8 fd ff ff 	movzbl -0x208(%ebp),%eax
40000ece:	3c 2f                	cmp    $0x2f,%al
40000ed0:	75 0b                	jne    40000edd <make_clear_abs_path+0x7c>
40000ed2:	0f b6 85 f9 fd ff ff 	movzbl -0x207(%ebp),%eax
40000ed9:	84 c0                	test   %al,%al
40000edb:	74 17                	je     40000ef4 <make_clear_abs_path+0x93>
40000edd:	83 ec 08             	sub    $0x8,%esp
40000ee0:	68 d8 17 00 40       	push   $0x400017d8
40000ee5:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000eeb:	50                   	push   %eax
40000eec:	e8 49 fc ff ff       	call   40000b3a <user_strcat>
40000ef1:	83 c4 10             	add    $0x10,%esp
40000ef4:	83 ec 08             	sub    $0x8,%esp
40000ef7:	ff 75 08             	pushl  0x8(%ebp)
40000efa:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f00:	50                   	push   %eax
40000f01:	e8 34 fc ff ff       	call   40000b3a <user_strcat>
40000f06:	83 c4 10             	add    $0x10,%esp
40000f09:	83 ec 08             	sub    $0x8,%esp
40000f0c:	ff 75 0c             	pushl  0xc(%ebp)
40000f0f:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
40000f15:	50                   	push   %eax
40000f16:	e8 fc fd ff ff       	call   40000d17 <wash_path>
40000f1b:	83 c4 10             	add    $0x10,%esp
40000f1e:	90                   	nop
40000f1f:	8b 7d fc             	mov    -0x4(%ebp),%edi
40000f22:	c9                   	leave  
40000f23:	c3                   	ret    

40000f24 <buildin_pwd>:
40000f24:	55                   	push   %ebp
40000f25:	89 e5                	mov    %esp,%ebp
40000f27:	83 ec 08             	sub    $0x8,%esp
40000f2a:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40000f2e:	74 12                	je     40000f42 <buildin_pwd+0x1e>
40000f30:	83 ec 0c             	sub    $0xc,%esp
40000f33:	68 df 17 00 40       	push   $0x400017df
40000f38:	e8 0b f4 ff ff       	call   40000348 <printf>
40000f3d:	83 c4 10             	add    $0x10,%esp
40000f40:	eb 40                	jmp    40000f82 <buildin_pwd+0x5e>
40000f42:	83 ec 08             	sub    $0x8,%esp
40000f45:	68 00 02 00 00       	push   $0x200
40000f4a:	68 a0 1c 00 40       	push   $0x40001ca0
40000f4f:	e8 0f f3 ff ff       	call   40000263 <getcwd>
40000f54:	83 c4 10             	add    $0x10,%esp
40000f57:	85 c0                	test   %eax,%eax
40000f59:	74 17                	je     40000f72 <buildin_pwd+0x4e>
40000f5b:	83 ec 08             	sub    $0x8,%esp
40000f5e:	68 a0 1c 00 40       	push   $0x40001ca0
40000f63:	68 fa 17 00 40       	push   $0x400017fa
40000f68:	e8 db f3 ff ff       	call   40000348 <printf>
40000f6d:	83 c4 10             	add    $0x10,%esp
40000f70:	eb 10                	jmp    40000f82 <buildin_pwd+0x5e>
40000f72:	83 ec 0c             	sub    $0xc,%esp
40000f75:	68 00 18 00 40       	push   $0x40001800
40000f7a:	e8 c9 f3 ff ff       	call   40000348 <printf>
40000f7f:	83 c4 10             	add    $0x10,%esp
40000f82:	c9                   	leave  
40000f83:	c3                   	ret    

40000f84 <buildin_cd>:
40000f84:	55                   	push   %ebp
40000f85:	89 e5                	mov    %esp,%ebp
40000f87:	83 ec 08             	sub    $0x8,%esp
40000f8a:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40000f8e:	7e 17                	jle    40000fa7 <buildin_cd+0x23>
40000f90:	83 ec 0c             	sub    $0xc,%esp
40000f93:	68 29 18 00 40       	push   $0x40001829
40000f98:	e8 ab f3 ff ff       	call   40000348 <printf>
40000f9d:	83 c4 10             	add    $0x10,%esp
40000fa0:	b8 00 00 00 00       	mov    $0x0,%eax
40000fa5:	eb 65                	jmp    4000100c <buildin_cd+0x88>
40000fa7:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
40000fab:	75 10                	jne    40000fbd <buildin_cd+0x39>
40000fad:	c6 05 a0 1c 00 40 2f 	movb   $0x2f,0x40001ca0
40000fb4:	c6 05 a1 1c 00 40 00 	movb   $0x0,0x40001ca1
40000fbb:	eb 19                	jmp    40000fd6 <buildin_cd+0x52>
40000fbd:	8b 45 0c             	mov    0xc(%ebp),%eax
40000fc0:	83 c0 04             	add    $0x4,%eax
40000fc3:	8b 00                	mov    (%eax),%eax
40000fc5:	83 ec 08             	sub    $0x8,%esp
40000fc8:	68 a0 1c 00 40       	push   $0x40001ca0
40000fcd:	50                   	push   %eax
40000fce:	e8 8e fe ff ff       	call   40000e61 <make_clear_abs_path>
40000fd3:	83 c4 10             	add    $0x10,%esp
40000fd6:	83 ec 0c             	sub    $0xc,%esp
40000fd9:	68 a0 1c 00 40       	push   $0x40001ca0
40000fde:	e8 95 f2 ff ff       	call   40000278 <chdir>
40000fe3:	83 c4 10             	add    $0x10,%esp
40000fe6:	83 f8 ff             	cmp    $0xffffffff,%eax
40000fe9:	75 1c                	jne    40001007 <buildin_cd+0x83>
40000feb:	83 ec 08             	sub    $0x8,%esp
40000fee:	68 a0 1c 00 40       	push   $0x40001ca0
40000ff3:	68 47 18 00 40       	push   $0x40001847
40000ff8:	e8 4b f3 ff ff       	call   40000348 <printf>
40000ffd:	83 c4 10             	add    $0x10,%esp
40001000:	b8 00 00 00 00       	mov    $0x0,%eax
40001005:	eb 05                	jmp    4000100c <buildin_cd+0x88>
40001007:	b8 a0 1c 00 40       	mov    $0x40001ca0,%eax
4000100c:	c9                   	leave  
4000100d:	c3                   	ret    

4000100e <buildin_ls>:
4000100e:	55                   	push   %ebp
4000100f:	89 e5                	mov    %esp,%ebp
40001011:	57                   	push   %edi
40001012:	53                   	push   %ebx
40001013:	81 ec 30 02 00 00    	sub    $0x230,%esp
40001019:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
40001020:	83 ec 04             	sub    $0x4,%esp
40001023:	6a 0c                	push   $0xc
40001025:	6a 00                	push   $0x0
40001027:	8d 45 c8             	lea    -0x38(%ebp),%eax
4000102a:	50                   	push   %eax
4000102b:	e8 e9 fa ff ff       	call   40000b19 <user_memset>
40001030:	83 c4 10             	add    $0x10,%esp
40001033:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
40001037:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
4000103e:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
40001045:	e9 e9 00 00 00       	jmp    40001133 <buildin_ls+0x125>
4000104a:	8b 45 e8             	mov    -0x18(%ebp),%eax
4000104d:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40001054:	8b 45 0c             	mov    0xc(%ebp),%eax
40001057:	01 d0                	add    %edx,%eax
40001059:	8b 00                	mov    (%eax),%eax
4000105b:	0f b6 00             	movzbl (%eax),%eax
4000105e:	3c 2d                	cmp    $0x2d,%al
40001060:	0f 85 91 00 00 00    	jne    400010f7 <buildin_ls+0xe9>
40001066:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001069:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40001070:	8b 45 0c             	mov    0xc(%ebp),%eax
40001073:	01 d0                	add    %edx,%eax
40001075:	8b 00                	mov    (%eax),%eax
40001077:	83 ec 08             	sub    $0x8,%esp
4000107a:	50                   	push   %eax
4000107b:	68 61 18 00 40       	push   $0x40001861
40001080:	e8 37 fb ff ff       	call   40000bbc <user_strcmp>
40001085:	83 c4 10             	add    $0x10,%esp
40001088:	85 c0                	test   %eax,%eax
4000108a:	75 09                	jne    40001095 <buildin_ls+0x87>
4000108c:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
40001090:	e9 9a 00 00 00       	jmp    4000112f <buildin_ls+0x121>
40001095:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001098:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
4000109f:	8b 45 0c             	mov    0xc(%ebp),%eax
400010a2:	01 d0                	add    %edx,%eax
400010a4:	8b 00                	mov    (%eax),%eax
400010a6:	83 ec 08             	sub    $0x8,%esp
400010a9:	50                   	push   %eax
400010aa:	68 64 18 00 40       	push   $0x40001864
400010af:	e8 08 fb ff ff       	call   40000bbc <user_strcmp>
400010b4:	83 c4 10             	add    $0x10,%esp
400010b7:	85 c0                	test   %eax,%eax
400010b9:	75 15                	jne    400010d0 <buildin_ls+0xc2>
400010bb:	83 ec 0c             	sub    $0xc,%esp
400010be:	68 68 18 00 40       	push   $0x40001868
400010c3:	e8 80 f2 ff ff       	call   40000348 <printf>
400010c8:	83 c4 10             	add    $0x10,%esp
400010cb:	e9 fc 02 00 00       	jmp    400013cc <buildin_ls+0x3be>
400010d0:	8b 45 e8             	mov    -0x18(%ebp),%eax
400010d3:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
400010da:	8b 45 0c             	mov    0xc(%ebp),%eax
400010dd:	01 d0                	add    %edx,%eax
400010df:	8b 00                	mov    (%eax),%eax
400010e1:	83 ec 08             	sub    $0x8,%esp
400010e4:	50                   	push   %eax
400010e5:	68 d8 18 00 40       	push   $0x400018d8
400010ea:	e8 59 f2 ff ff       	call   40000348 <printf>
400010ef:	83 c4 10             	add    $0x10,%esp
400010f2:	e9 d5 02 00 00       	jmp    400013cc <buildin_ls+0x3be>
400010f7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
400010fb:	75 1d                	jne    4000111a <buildin_ls+0x10c>
400010fd:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001100:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
40001107:	8b 45 0c             	mov    0xc(%ebp),%eax
4000110a:	01 d0                	add    %edx,%eax
4000110c:	8b 00                	mov    (%eax),%eax
4000110e:	89 45 f4             	mov    %eax,-0xc(%ebp)
40001111:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
40001118:	eb 15                	jmp    4000112f <buildin_ls+0x121>
4000111a:	83 ec 0c             	sub    $0xc,%esp
4000111d:	68 11 19 00 40       	push   $0x40001911
40001122:	e8 21 f2 ff ff       	call   40000348 <printf>
40001127:	83 c4 10             	add    $0x10,%esp
4000112a:	e9 9d 02 00 00       	jmp    400013cc <buildin_ls+0x3be>
4000112f:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
40001133:	8b 45 e8             	mov    -0x18(%ebp),%eax
40001136:	3b 45 08             	cmp    0x8(%ebp),%eax
40001139:	0f 8c 0b ff ff ff    	jl     4000104a <buildin_ls+0x3c>
4000113f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
40001143:	75 37                	jne    4000117c <buildin_ls+0x16e>
40001145:	83 ec 08             	sub    $0x8,%esp
40001148:	68 00 02 00 00       	push   $0x200
4000114d:	68 a0 1c 00 40       	push   $0x40001ca0
40001152:	e8 0c f1 ff ff       	call   40000263 <getcwd>
40001157:	83 c4 10             	add    $0x10,%esp
4000115a:	85 c0                	test   %eax,%eax
4000115c:	74 09                	je     40001167 <buildin_ls+0x159>
4000115e:	c7 45 f4 a0 1c 00 40 	movl   $0x40001ca0,-0xc(%ebp)
40001165:	eb 2f                	jmp    40001196 <buildin_ls+0x188>
40001167:	83 ec 0c             	sub    $0xc,%esp
4000116a:	68 2c 19 00 40       	push   $0x4000192c
4000116f:	e8 d4 f1 ff ff       	call   40000348 <printf>
40001174:	83 c4 10             	add    $0x10,%esp
40001177:	e9 50 02 00 00       	jmp    400013cc <buildin_ls+0x3be>
4000117c:	83 ec 08             	sub    $0x8,%esp
4000117f:	68 a0 1c 00 40       	push   $0x40001ca0
40001184:	ff 75 f4             	pushl  -0xc(%ebp)
40001187:	e8 d5 fc ff ff       	call   40000e61 <make_clear_abs_path>
4000118c:	83 c4 10             	add    $0x10,%esp
4000118f:	c7 45 f4 a0 1c 00 40 	movl   $0x40001ca0,-0xc(%ebp)
40001196:	83 ec 08             	sub    $0x8,%esp
40001199:	8d 45 c8             	lea    -0x38(%ebp),%eax
4000119c:	50                   	push   %eax
4000119d:	ff 75 f4             	pushl  -0xc(%ebp)
400011a0:	e8 e5 f0 ff ff       	call   4000028a <stat>
400011a5:	83 c4 10             	add    $0x10,%esp
400011a8:	83 f8 ff             	cmp    $0xffffffff,%eax
400011ab:	75 18                	jne    400011c5 <buildin_ls+0x1b7>
400011ad:	83 ec 08             	sub    $0x8,%esp
400011b0:	ff 75 f4             	pushl  -0xc(%ebp)
400011b3:	68 50 19 00 40       	push   $0x40001950
400011b8:	e8 8b f1 ff ff       	call   40000348 <printf>
400011bd:	83 c4 10             	add    $0x10,%esp
400011c0:	e9 07 02 00 00       	jmp    400013cc <buildin_ls+0x3be>
400011c5:	8b 45 d0             	mov    -0x30(%ebp),%eax
400011c8:	83 f8 02             	cmp    $0x2,%eax
400011cb:	0f 85 c8 01 00 00    	jne    40001399 <buildin_ls+0x38b>
400011d1:	83 ec 0c             	sub    $0xc,%esp
400011d4:	ff 75 f4             	pushl  -0xc(%ebp)
400011d7:	e8 c3 f0 ff ff       	call   4000029f <opendir>
400011dc:	83 c4 10             	add    $0x10,%esp
400011df:	89 45 dc             	mov    %eax,-0x24(%ebp)
400011e2:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
400011e9:	c7 85 c8 fd ff ff 00 	movl   $0x0,-0x238(%ebp)
400011f0:	00 00 00 
400011f3:	8d 95 cc fd ff ff    	lea    -0x234(%ebp),%edx
400011f9:	b8 00 00 00 00       	mov    $0x0,%eax
400011fe:	b9 7f 00 00 00       	mov    $0x7f,%ecx
40001203:	89 d7                	mov    %edx,%edi
40001205:	f3 ab                	rep stos %eax,%es:(%edi)
40001207:	83 ec 0c             	sub    $0xc,%esp
4000120a:	ff 75 f4             	pushl  -0xc(%ebp)
4000120d:	e8 fc f9 ff ff       	call   40000c0e <user_strlen>
40001212:	83 c4 10             	add    $0x10,%esp
40001215:	89 45 e4             	mov    %eax,-0x1c(%ebp)
40001218:	8b 45 e4             	mov    -0x1c(%ebp),%eax
4000121b:	83 e8 01             	sub    $0x1,%eax
4000121e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
40001221:	8b 45 e4             	mov    -0x1c(%ebp),%eax
40001224:	83 ec 04             	sub    $0x4,%esp
40001227:	50                   	push   %eax
40001228:	ff 75 f4             	pushl  -0xc(%ebp)
4000122b:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
40001231:	50                   	push   %eax
40001232:	e8 3c fa ff ff       	call   40000c73 <user_memcpy>
40001237:	83 c4 10             	add    $0x10,%esp
4000123a:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
40001240:	8b 45 d4             	mov    -0x2c(%ebp),%eax
40001243:	01 d0                	add    %edx,%eax
40001245:	0f b6 00             	movzbl (%eax),%eax
40001248:	3c 2f                	cmp    $0x2f,%al
4000124a:	74 12                	je     4000125e <buildin_ls+0x250>
4000124c:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
40001252:	8b 45 e4             	mov    -0x1c(%ebp),%eax
40001255:	01 d0                	add    %edx,%eax
40001257:	c6 00 2f             	movb   $0x2f,(%eax)
4000125a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
4000125e:	83 ec 0c             	sub    $0xc,%esp
40001261:	ff 75 dc             	pushl  -0x24(%ebp)
40001264:	e8 e7 ef ff ff       	call   40000250 <rewinddir>
40001269:	83 c4 10             	add    $0x10,%esp
4000126c:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
40001270:	0f 84 ec 00 00 00    	je     40001362 <buildin_ls+0x354>
40001276:	8b 45 cc             	mov    -0x34(%ebp),%eax
40001279:	83 ec 08             	sub    $0x8,%esp
4000127c:	50                   	push   %eax
4000127d:	68 81 19 00 40       	push   $0x40001981
40001282:	e8 c1 f0 ff ff       	call   40000348 <printf>
40001287:	83 c4 10             	add    $0x10,%esp
4000128a:	e9 a2 00 00 00       	jmp    40001331 <buildin_ls+0x323>
4000128f:	c6 45 e3 64          	movb   $0x64,-0x1d(%ebp)
40001293:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001296:	8b 40 14             	mov    0x14(%eax),%eax
40001299:	83 f8 01             	cmp    $0x1,%eax
4000129c:	75 04                	jne    400012a2 <buildin_ls+0x294>
4000129e:	c6 45 e3 2d          	movb   $0x2d,-0x1d(%ebp)
400012a2:	8d 95 c8 fd ff ff    	lea    -0x238(%ebp),%edx
400012a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
400012ab:	01 d0                	add    %edx,%eax
400012ad:	c6 00 00             	movb   $0x0,(%eax)
400012b0:	8b 45 d8             	mov    -0x28(%ebp),%eax
400012b3:	83 ec 08             	sub    $0x8,%esp
400012b6:	50                   	push   %eax
400012b7:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
400012bd:	50                   	push   %eax
400012be:	e8 77 f8 ff ff       	call   40000b3a <user_strcat>
400012c3:	83 c4 10             	add    $0x10,%esp
400012c6:	83 ec 04             	sub    $0x4,%esp
400012c9:	6a 0c                	push   $0xc
400012cb:	6a 00                	push   $0x0
400012cd:	8d 45 c8             	lea    -0x38(%ebp),%eax
400012d0:	50                   	push   %eax
400012d1:	e8 43 f8 ff ff       	call   40000b19 <user_memset>
400012d6:	83 c4 10             	add    $0x10,%esp
400012d9:	83 ec 08             	sub    $0x8,%esp
400012dc:	8d 45 c8             	lea    -0x38(%ebp),%eax
400012df:	50                   	push   %eax
400012e0:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
400012e6:	50                   	push   %eax
400012e7:	e8 9e ef ff ff       	call   4000028a <stat>
400012ec:	83 c4 10             	add    $0x10,%esp
400012ef:	83 f8 ff             	cmp    $0xffffffff,%eax
400012f2:	75 19                	jne    4000130d <buildin_ls+0x2ff>
400012f4:	8b 45 d8             	mov    -0x28(%ebp),%eax
400012f7:	83 ec 08             	sub    $0x8,%esp
400012fa:	50                   	push   %eax
400012fb:	68 50 19 00 40       	push   $0x40001950
40001300:	e8 43 f0 ff ff       	call   40000348 <printf>
40001305:	83 c4 10             	add    $0x10,%esp
40001308:	e9 bf 00 00 00       	jmp    400013cc <buildin_ls+0x3be>
4000130d:	8b 5d d8             	mov    -0x28(%ebp),%ebx
40001310:	8b 4d cc             	mov    -0x34(%ebp),%ecx
40001313:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001316:	8b 50 10             	mov    0x10(%eax),%edx
40001319:	0f be 45 e3          	movsbl -0x1d(%ebp),%eax
4000131d:	83 ec 0c             	sub    $0xc,%esp
40001320:	53                   	push   %ebx
40001321:	51                   	push   %ecx
40001322:	52                   	push   %edx
40001323:	50                   	push   %eax
40001324:	68 8c 19 00 40       	push   $0x4000198c
40001329:	e8 1a f0 ff ff       	call   40000348 <printf>
4000132e:	83 c4 20             	add    $0x20,%esp
40001331:	83 ec 0c             	sub    $0xc,%esp
40001334:	ff 75 dc             	pushl  -0x24(%ebp)
40001337:	e8 87 ef ff ff       	call   400002c3 <readdir>
4000133c:	83 c4 10             	add    $0x10,%esp
4000133f:	89 45 d8             	mov    %eax,-0x28(%ebp)
40001342:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
40001346:	0f 85 43 ff ff ff    	jne    4000128f <buildin_ls+0x281>
4000134c:	eb 3b                	jmp    40001389 <buildin_ls+0x37b>
4000134e:	8b 45 d8             	mov    -0x28(%ebp),%eax
40001351:	83 ec 08             	sub    $0x8,%esp
40001354:	50                   	push   %eax
40001355:	68 9c 19 00 40       	push   $0x4000199c
4000135a:	e8 e9 ef ff ff       	call   40000348 <printf>
4000135f:	83 c4 10             	add    $0x10,%esp
40001362:	83 ec 0c             	sub    $0xc,%esp
40001365:	ff 75 dc             	pushl  -0x24(%ebp)
40001368:	e8 56 ef ff ff       	call   400002c3 <readdir>
4000136d:	83 c4 10             	add    $0x10,%esp
40001370:	89 45 d8             	mov    %eax,-0x28(%ebp)
40001373:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
40001377:	75 d5                	jne    4000134e <buildin_ls+0x340>
40001379:	83 ec 0c             	sub    $0xc,%esp
4000137c:	68 a0 19 00 40       	push   $0x400019a0
40001381:	e8 c2 ef ff ff       	call   40000348 <printf>
40001386:	83 c4 10             	add    $0x10,%esp
40001389:	83 ec 0c             	sub    $0xc,%esp
4000138c:	ff 75 dc             	pushl  -0x24(%ebp)
4000138f:	e8 1d ef ff ff       	call   400002b1 <closedir>
40001394:	83 c4 10             	add    $0x10,%esp
40001397:	eb 33                	jmp    400013cc <buildin_ls+0x3be>
40001399:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
4000139d:	74 1a                	je     400013b9 <buildin_ls+0x3ab>
4000139f:	8b 55 cc             	mov    -0x34(%ebp),%edx
400013a2:	8b 45 c8             	mov    -0x38(%ebp),%eax
400013a5:	ff 75 f4             	pushl  -0xc(%ebp)
400013a8:	52                   	push   %edx
400013a9:	50                   	push   %eax
400013aa:	68 a2 19 00 40       	push   $0x400019a2
400013af:	e8 94 ef ff ff       	call   40000348 <printf>
400013b4:	83 c4 10             	add    $0x10,%esp
400013b7:	eb 13                	jmp    400013cc <buildin_ls+0x3be>
400013b9:	83 ec 08             	sub    $0x8,%esp
400013bc:	ff 75 f4             	pushl  -0xc(%ebp)
400013bf:	68 fa 17 00 40       	push   $0x400017fa
400013c4:	e8 7f ef ff ff       	call   40000348 <printf>
400013c9:	83 c4 10             	add    $0x10,%esp
400013cc:	8d 65 f8             	lea    -0x8(%ebp),%esp
400013cf:	5b                   	pop    %ebx
400013d0:	5f                   	pop    %edi
400013d1:	5d                   	pop    %ebp
400013d2:	c3                   	ret    

400013d3 <buildin_ps>:
400013d3:	55                   	push   %ebp
400013d4:	89 e5                	mov    %esp,%ebp
400013d6:	83 ec 08             	sub    $0x8,%esp
400013d9:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
400013dd:	74 12                	je     400013f1 <buildin_ps+0x1e>
400013df:	83 ec 0c             	sub    $0xc,%esp
400013e2:	68 b1 19 00 40       	push   $0x400019b1
400013e7:	e8 5c ef ff ff       	call   40000348 <printf>
400013ec:	83 c4 10             	add    $0x10,%esp
400013ef:	eb 05                	jmp    400013f6 <buildin_ps+0x23>
400013f1:	e8 df ee ff ff       	call   400002d5 <ps>
400013f6:	c9                   	leave  
400013f7:	c3                   	ret    

400013f8 <buildin_mkdir>:
400013f8:	55                   	push   %ebp
400013f9:	89 e5                	mov    %esp,%ebp
400013fb:	83 ec 18             	sub    $0x18,%esp
400013fe:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
40001405:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
40001409:	74 12                	je     4000141d <buildin_mkdir+0x25>
4000140b:	83 ec 0c             	sub    $0xc,%esp
4000140e:	68 cc 19 00 40       	push   $0x400019cc
40001413:	e8 30 ef ff ff       	call   40000348 <printf>
40001418:	83 c4 10             	add    $0x10,%esp
4000141b:	eb 68                	jmp    40001485 <buildin_mkdir+0x8d>
4000141d:	8b 45 0c             	mov    0xc(%ebp),%eax
40001420:	83 c0 04             	add    $0x4,%eax
40001423:	8b 00                	mov    (%eax),%eax
40001425:	83 ec 08             	sub    $0x8,%esp
40001428:	68 a0 1c 00 40       	push   $0x40001ca0
4000142d:	50                   	push   %eax
4000142e:	e8 2e fa ff ff       	call   40000e61 <make_clear_abs_path>
40001433:	83 c4 10             	add    $0x10,%esp
40001436:	83 ec 08             	sub    $0x8,%esp
40001439:	68 a0 1c 00 40       	push   $0x40001ca0
4000143e:	68 d8 17 00 40       	push   $0x400017d8
40001443:	e8 74 f7 ff ff       	call   40000bbc <user_strcmp>
40001448:	83 c4 10             	add    $0x10,%esp
4000144b:	85 c0                	test   %eax,%eax
4000144d:	74 36                	je     40001485 <buildin_mkdir+0x8d>
4000144f:	83 ec 0c             	sub    $0xc,%esp
40001452:	68 a0 1c 00 40       	push   $0x40001ca0
40001457:	e8 d0 ed ff ff       	call   4000022c <mkdir>
4000145c:	83 c4 10             	add    $0x10,%esp
4000145f:	85 c0                	test   %eax,%eax
40001461:	75 09                	jne    4000146c <buildin_mkdir+0x74>
40001463:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000146a:	eb 19                	jmp    40001485 <buildin_mkdir+0x8d>
4000146c:	8b 45 0c             	mov    0xc(%ebp),%eax
4000146f:	83 c0 04             	add    $0x4,%eax
40001472:	8b 00                	mov    (%eax),%eax
40001474:	83 ec 08             	sub    $0x8,%esp
40001477:	50                   	push   %eax
40001478:	68 f0 19 00 40       	push   $0x400019f0
4000147d:	e8 c6 ee ff ff       	call   40000348 <printf>
40001482:	83 c4 10             	add    $0x10,%esp
40001485:	8b 45 f4             	mov    -0xc(%ebp),%eax
40001488:	c9                   	leave  
40001489:	c3                   	ret    

4000148a <buildin_rmdir>:
4000148a:	55                   	push   %ebp
4000148b:	89 e5                	mov    %esp,%ebp
4000148d:	83 ec 18             	sub    $0x18,%esp
40001490:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
40001497:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
4000149b:	74 12                	je     400014af <buildin_rmdir+0x25>
4000149d:	83 ec 0c             	sub    $0xc,%esp
400014a0:	68 14 1a 00 40       	push   $0x40001a14
400014a5:	e8 9e ee ff ff       	call   40000348 <printf>
400014aa:	83 c4 10             	add    $0x10,%esp
400014ad:	eb 68                	jmp    40001517 <buildin_rmdir+0x8d>
400014af:	8b 45 0c             	mov    0xc(%ebp),%eax
400014b2:	83 c0 04             	add    $0x4,%eax
400014b5:	8b 00                	mov    (%eax),%eax
400014b7:	83 ec 08             	sub    $0x8,%esp
400014ba:	68 a0 1c 00 40       	push   $0x40001ca0
400014bf:	50                   	push   %eax
400014c0:	e8 9c f9 ff ff       	call   40000e61 <make_clear_abs_path>
400014c5:	83 c4 10             	add    $0x10,%esp
400014c8:	83 ec 08             	sub    $0x8,%esp
400014cb:	68 a0 1c 00 40       	push   $0x40001ca0
400014d0:	68 d8 17 00 40       	push   $0x400017d8
400014d5:	e8 e2 f6 ff ff       	call   40000bbc <user_strcmp>
400014da:	83 c4 10             	add    $0x10,%esp
400014dd:	85 c0                	test   %eax,%eax
400014df:	74 36                	je     40001517 <buildin_rmdir+0x8d>
400014e1:	83 ec 0c             	sub    $0xc,%esp
400014e4:	68 a0 1c 00 40       	push   $0x40001ca0
400014e9:	e8 50 ed ff ff       	call   4000023e <rmdir>
400014ee:	83 c4 10             	add    $0x10,%esp
400014f1:	85 c0                	test   %eax,%eax
400014f3:	75 09                	jne    400014fe <buildin_rmdir+0x74>
400014f5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
400014fc:	eb 19                	jmp    40001517 <buildin_rmdir+0x8d>
400014fe:	8b 45 0c             	mov    0xc(%ebp),%eax
40001501:	83 c0 04             	add    $0x4,%eax
40001504:	8b 00                	mov    (%eax),%eax
40001506:	83 ec 08             	sub    $0x8,%esp
40001509:	50                   	push   %eax
4000150a:	68 35 1a 00 40       	push   $0x40001a35
4000150f:	e8 34 ee ff ff       	call   40000348 <printf>
40001514:	83 c4 10             	add    $0x10,%esp
40001517:	8b 45 f4             	mov    -0xc(%ebp),%eax
4000151a:	c9                   	leave  
4000151b:	c3                   	ret    

4000151c <buildin_rm>:
4000151c:	55                   	push   %ebp
4000151d:	89 e5                	mov    %esp,%ebp
4000151f:	83 ec 18             	sub    $0x18,%esp
40001522:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
40001529:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
4000152d:	74 12                	je     40001541 <buildin_rm+0x25>
4000152f:	83 ec 0c             	sub    $0xc,%esp
40001532:	68 4f 1a 00 40       	push   $0x40001a4f
40001537:	e8 0c ee ff ff       	call   40000348 <printf>
4000153c:	83 c4 10             	add    $0x10,%esp
4000153f:	eb 68                	jmp    400015a9 <buildin_rm+0x8d>
40001541:	8b 45 0c             	mov    0xc(%ebp),%eax
40001544:	83 c0 04             	add    $0x4,%eax
40001547:	8b 00                	mov    (%eax),%eax
40001549:	83 ec 08             	sub    $0x8,%esp
4000154c:	68 a0 1c 00 40       	push   $0x40001ca0
40001551:	50                   	push   %eax
40001552:	e8 0a f9 ff ff       	call   40000e61 <make_clear_abs_path>
40001557:	83 c4 10             	add    $0x10,%esp
4000155a:	83 ec 08             	sub    $0x8,%esp
4000155d:	68 a0 1c 00 40       	push   $0x40001ca0
40001562:	68 d8 17 00 40       	push   $0x400017d8
40001567:	e8 50 f6 ff ff       	call   40000bbc <user_strcmp>
4000156c:	83 c4 10             	add    $0x10,%esp
4000156f:	85 c0                	test   %eax,%eax
40001571:	74 36                	je     400015a9 <buildin_rm+0x8d>
40001573:	83 ec 0c             	sub    $0xc,%esp
40001576:	68 a0 1c 00 40       	push   $0x40001ca0
4000157b:	e8 9a ec ff ff       	call   4000021a <unlink>
40001580:	83 c4 10             	add    $0x10,%esp
40001583:	85 c0                	test   %eax,%eax
40001585:	75 09                	jne    40001590 <buildin_rm+0x74>
40001587:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
4000158e:	eb 19                	jmp    400015a9 <buildin_rm+0x8d>
40001590:	8b 45 0c             	mov    0xc(%ebp),%eax
40001593:	83 c0 04             	add    $0x4,%eax
40001596:	8b 00                	mov    (%eax),%eax
40001598:	83 ec 08             	sub    $0x8,%esp
4000159b:	50                   	push   %eax
4000159c:	68 6d 1a 00 40       	push   $0x40001a6d
400015a1:	e8 a2 ed ff ff       	call   40000348 <printf>
400015a6:	83 c4 10             	add    $0x10,%esp
400015a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
400015ac:	c9                   	leave  
400015ad:	c3                   	ret    

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
c10002e3:	68 44 a3 00 c1       	push   $0xc100a344
c10002e8:	e8 cf 4c 00 00       	call   c1004fbc <printk>
c10002ed:	83 c4 10             	add    $0x10,%esp
c10002f0:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10002f4:	0f b7 c0             	movzwl %ax,%eax
c10002f7:	83 ec 08             	sub    $0x8,%esp
c10002fa:	50                   	push   %eax
c10002fb:	68 4d a3 00 c1       	push   $0xc100a34d
c1000300:	e8 b7 4c 00 00       	call   c1004fbc <printk>
c1000305:	83 c4 10             	add    $0x10,%esp
c1000308:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c100030c:	0f b7 c0             	movzwl %ax,%eax
c100030f:	83 ec 08             	sub    $0x8,%esp
c1000312:	50                   	push   %eax
c1000313:	68 56 a3 00 c1       	push   $0xc100a356
c1000318:	e8 9f 4c 00 00       	call   c1004fbc <printk>
c100031d:	83 c4 10             	add    $0x10,%esp
c1000320:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
c1000324:	0f b7 c0             	movzwl %ax,%eax
c1000327:	83 ec 08             	sub    $0x8,%esp
c100032a:	50                   	push   %eax
c100032b:	68 5f a3 00 c1       	push   $0xc100a35f
c1000330:	e8 87 4c 00 00       	call   c1004fbc <printk>
c1000335:	83 c4 10             	add    $0x10,%esp
c1000338:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
c100033c:	0f b7 c0             	movzwl %ax,%eax
c100033f:	83 ec 08             	sub    $0x8,%esp
c1000342:	50                   	push   %eax
c1000343:	68 68 a3 00 c1       	push   $0xc100a368
c1000348:	e8 6f 4c 00 00       	call   c1004fbc <printk>
c100034d:	83 c4 10             	add    $0x10,%esp
c1000350:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
c1000354:	0f b7 c0             	movzwl %ax,%eax
c1000357:	83 ec 08             	sub    $0x8,%esp
c100035a:	50                   	push   %eax
c100035b:	68 71 a3 00 c1       	push   $0xc100a371
c1000360:	e8 57 4c 00 00       	call   c1004fbc <printk>
c1000365:	83 c4 10             	add    $0x10,%esp
c1000368:	90                   	nop
c1000369:	c9                   	leave  
c100036a:	c3                   	ret    

c100036b <__PANIC>:
c100036b:	55                   	push   %ebp
c100036c:	89 e5                	mov    %esp,%ebp
c100036e:	83 ec 08             	sub    $0x8,%esp
c1000371:	e8 18 0a 00 00       	call   c1000d8e <intr_disable>
c1000376:	83 ec 04             	sub    $0x4,%esp
c1000379:	ff 75 0c             	pushl  0xc(%ebp)
c100037c:	ff 75 08             	pushl  0x8(%ebp)
c100037f:	68 7a a3 00 c1       	push   $0xc100a37a
c1000384:	e8 33 4c 00 00       	call   c1004fbc <printk>
c1000389:	83 c4 10             	add    $0x10,%esp
c100038c:	83 ec 04             	sub    $0x4,%esp
c100038f:	ff 75 14             	pushl  0x14(%ebp)
c1000392:	ff 75 10             	pushl  0x10(%ebp)
c1000395:	68 98 a3 00 c1       	push   $0xc100a398
c100039a:	e8 1d 4c 00 00       	call   c1004fbc <printk>
c100039f:	83 c4 10             	add    $0x10,%esp
c10003a2:	e8 02 00 00 00       	call   c10003a9 <monitor>
c10003a7:	eb f9                	jmp    c10003a2 <__PANIC+0x37>

c10003a9 <monitor>:
c10003a9:	55                   	push   %ebp
c10003aa:	89 e5                	mov    %esp,%ebp
c10003ac:	83 ec 18             	sub    $0x18,%esp
c10003af:	c7 05 68 ec 00 c1 00 	movl   $0x0,0xc100ec68
c10003b6:	00 00 00 
c10003b9:	83 ec 0c             	sub    $0xc,%esp
c10003bc:	68 3f a4 00 c1       	push   $0xc100a43f
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
c10003fd:	05 00 c0 00 c1       	add    $0xc100c000,%eax
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
c1000423:	05 08 c0 00 c1       	add    $0xc100c008,%eax
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
c1000442:	a1 04 c0 00 c1       	mov    0xc100c004,%eax
c1000447:	83 ec 08             	sub    $0x8,%esp
c100044a:	50                   	push   %eax
c100044b:	68 42 a4 00 c1       	push   $0xc100a442
c1000450:	e8 67 4b 00 00       	call   c1004fbc <printk>
c1000455:	83 c4 10             	add    $0x10,%esp
c1000458:	83 ec 0c             	sub    $0xc,%esp
c100045b:	68 48 a4 00 c1       	push   $0xc100a448
c1000460:	e8 57 4b 00 00       	call   c1004fbc <printk>
c1000465:	83 c4 10             	add    $0x10,%esp
c1000468:	90                   	nop
c1000469:	c9                   	leave  
c100046a:	c3                   	ret    

c100046b <instr_help>:
c100046b:	55                   	push   %ebp
c100046c:	89 e5                	mov    %esp,%ebp
c100046e:	83 ec 18             	sub    $0x18,%esp
c1000471:	a1 10 c0 00 c1       	mov    0xc100c010,%eax
c1000476:	83 ec 08             	sub    $0x8,%esp
c1000479:	50                   	push   %eax
c100047a:	68 42 a4 00 c1       	push   $0xc100a442
c100047f:	e8 38 4b 00 00       	call   c1004fbc <printk>
c1000484:	83 c4 10             	add    $0x10,%esp
c1000487:	83 ec 0c             	sub    $0xc,%esp
c100048a:	68 78 a4 00 c1       	push   $0xc100a478
c100048f:	e8 28 4b 00 00       	call   c1004fbc <printk>
c1000494:	83 c4 10             	add    $0x10,%esp
c1000497:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100049e:	eb 3c                	jmp    c10004dc <instr_help+0x71>
c10004a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10004a3:	89 d0                	mov    %edx,%eax
c10004a5:	01 c0                	add    %eax,%eax
c10004a7:	01 d0                	add    %edx,%eax
c10004a9:	c1 e0 02             	shl    $0x2,%eax
c10004ac:	05 04 c0 00 c1       	add    $0xc100c004,%eax
c10004b1:	8b 08                	mov    (%eax),%ecx
c10004b3:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10004b6:	89 d0                	mov    %edx,%eax
c10004b8:	01 c0                	add    %eax,%eax
c10004ba:	01 d0                	add    %edx,%eax
c10004bc:	c1 e0 02             	shl    $0x2,%eax
c10004bf:	05 00 c0 00 c1       	add    $0xc100c000,%eax
c10004c4:	8b 00                	mov    (%eax),%eax
c10004c6:	83 ec 04             	sub    $0x4,%esp
c10004c9:	51                   	push   %ecx
c10004ca:	50                   	push   %eax
c10004cb:	68 97 a4 00 c1       	push   $0xc100a497
c10004d0:	e8 e7 4a 00 00       	call   c1004fbc <printk>
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
c10004f5:	a1 1c c0 00 c1       	mov    0xc100c01c,%eax
c10004fa:	83 ec 08             	sub    $0x8,%esp
c10004fd:	50                   	push   %eax
c10004fe:	68 42 a4 00 c1       	push   $0xc100a442
c1000503:	e8 b4 4a 00 00       	call   c1004fbc <printk>
c1000508:	83 c4 10             	add    $0x10,%esp
c100050b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1000512:	83 ec 0c             	sub    $0xc,%esp
c1000515:	68 a2 a4 00 c1       	push   $0xc100a4a2
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
c1000565:	68 c0 a4 00 c1       	push   $0xc100a4c0
c100056a:	e8 4d 4a 00 00       	call   c1004fbc <printk>
c100056f:	83 c4 10             	add    $0x10,%esp
c1000572:	eb 32                	jmp    c10005a6 <instr_game+0xbe>
c1000574:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1000577:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c100057a:	7d 15                	jge    c1000591 <instr_game+0xa9>
c100057c:	83 ec 0c             	sub    $0xc,%esp
c100057f:	68 ef a4 00 c1       	push   $0xc100a4ef
c1000584:	e8 33 4a 00 00       	call   c1004fbc <printk>
c1000589:	83 c4 10             	add    $0x10,%esp
c100058c:	e9 7a ff ff ff       	jmp    c100050b <instr_game+0x23>
c1000591:	83 ec 0c             	sub    $0xc,%esp
c1000594:	68 07 a5 00 c1       	push   $0xc100a507
c1000599:	e8 1e 4a 00 00       	call   c1004fbc <printk>
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
c10005b0:	e8 da 4d 00 00       	call   c100538f <cons_getc>
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
c10005d5:	68 1e a5 00 c1       	push   $0xc100a51e
c10005da:	e8 dd 49 00 00       	call   c1004fbc <printk>
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
c1000616:	e8 36 4d 00 00       	call   c1005351 <cons_putc>
c100061b:	83 c4 10             	add    $0x10,%esp
c100061e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000621:	8d 50 01             	lea    0x1(%eax),%edx
c1000624:	89 55 f4             	mov    %edx,-0xc(%ebp)
c1000627:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100062a:	88 90 00 e0 00 c1    	mov    %dl,-0x3eff2000(%eax)
c1000630:	eb 4c                	jmp    c100067e <readline+0xbb>
c1000632:	83 7d f0 08          	cmpl   $0x8,-0x10(%ebp)
c1000636:	75 1a                	jne    c1000652 <readline+0x8f>
c1000638:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100063c:	7e 14                	jle    c1000652 <readline+0x8f>
c100063e:	83 ec 0c             	sub    $0xc,%esp
c1000641:	ff 75 f0             	pushl  -0x10(%ebp)
c1000644:	e8 08 4d 00 00       	call   c1005351 <cons_putc>
c1000649:	83 c4 10             	add    $0x10,%esp
c100064c:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
c1000650:	eb 2c                	jmp    c100067e <readline+0xbb>
c1000652:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
c1000656:	74 06                	je     c100065e <readline+0x9b>
c1000658:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
c100065c:	75 8b                	jne    c10005e9 <readline+0x26>
c100065e:	83 ec 0c             	sub    $0xc,%esp
c1000661:	ff 75 f0             	pushl  -0x10(%ebp)
c1000664:	e8 e8 4c 00 00       	call   c1005351 <cons_putc>
c1000669:	83 c4 10             	add    $0x10,%esp
c100066c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100066f:	05 00 e0 00 c1       	add    $0xc100e000,%eax
c1000674:	c6 00 00             	movb   $0x0,(%eax)
c1000677:	b8 00 e0 00 c1       	mov    $0xc100e000,%eax
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
c10006d5:	c7 05 04 ec 00 c1 00 	movl   $0xf8000000,0xc100ec04
c10006dc:	00 00 f8 
c10006df:	66 c7 05 08 ec 00 c1 	movw   $0x10,0xc100ec08
c10006e6:	10 00 
c10006e8:	66 c7 05 68 c0 00 c1 	movw   $0x68,0xc100c068
c10006ef:	68 00 
c10006f1:	b8 00 ec 00 c1       	mov    $0xc100ec00,%eax
c10006f6:	66 a3 6a c0 00 c1    	mov    %ax,0xc100c06a
c10006fc:	b8 00 ec 00 c1       	mov    $0xc100ec00,%eax
c1000701:	c1 e8 10             	shr    $0x10,%eax
c1000704:	a2 6c c0 00 c1       	mov    %al,0xc100c06c
c1000709:	0f b6 05 6d c0 00 c1 	movzbl 0xc100c06d,%eax
c1000710:	83 e0 f0             	and    $0xfffffff0,%eax
c1000713:	83 c8 09             	or     $0x9,%eax
c1000716:	a2 6d c0 00 c1       	mov    %al,0xc100c06d
c100071b:	0f b6 05 6d c0 00 c1 	movzbl 0xc100c06d,%eax
c1000722:	83 e0 ef             	and    $0xffffffef,%eax
c1000725:	a2 6d c0 00 c1       	mov    %al,0xc100c06d
c100072a:	0f b6 05 6d c0 00 c1 	movzbl 0xc100c06d,%eax
c1000731:	83 e0 9f             	and    $0xffffff9f,%eax
c1000734:	a2 6d c0 00 c1       	mov    %al,0xc100c06d
c1000739:	0f b6 05 6d c0 00 c1 	movzbl 0xc100c06d,%eax
c1000740:	83 c8 80             	or     $0xffffff80,%eax
c1000743:	a2 6d c0 00 c1       	mov    %al,0xc100c06d
c1000748:	0f b6 05 6e c0 00 c1 	movzbl 0xc100c06e,%eax
c100074f:	83 e0 f0             	and    $0xfffffff0,%eax
c1000752:	a2 6e c0 00 c1       	mov    %al,0xc100c06e
c1000757:	0f b6 05 6e c0 00 c1 	movzbl 0xc100c06e,%eax
c100075e:	83 e0 ef             	and    $0xffffffef,%eax
c1000761:	a2 6e c0 00 c1       	mov    %al,0xc100c06e
c1000766:	0f b6 05 6e c0 00 c1 	movzbl 0xc100c06e,%eax
c100076d:	83 e0 df             	and    $0xffffffdf,%eax
c1000770:	a2 6e c0 00 c1       	mov    %al,0xc100c06e
c1000775:	0f b6 05 6e c0 00 c1 	movzbl 0xc100c06e,%eax
c100077c:	83 c8 40             	or     $0x40,%eax
c100077f:	a2 6e c0 00 c1       	mov    %al,0xc100c06e
c1000784:	0f b6 05 6e c0 00 c1 	movzbl 0xc100c06e,%eax
c100078b:	83 e0 7f             	and    $0x7f,%eax
c100078e:	a2 6e c0 00 c1       	mov    %al,0xc100c06e
c1000793:	b8 00 ec 00 c1       	mov    $0xc100ec00,%eax
c1000798:	c1 e8 18             	shr    $0x18,%eax
c100079b:	a2 6f c0 00 c1       	mov    %al,0xc100c06f
c10007a0:	68 78 c0 00 c1       	push   $0xc100c078
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
c10007db:	8b 04 85 00 c1 00 c1 	mov    -0x3eff3f00(,%eax,4),%eax
c10007e2:	89 c2                	mov    %eax,%edx
c10007e4:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007e7:	66 89 14 c5 00 e4 00 	mov    %dx,-0x3eff1c00(,%eax,8)
c10007ee:	c1 
c10007ef:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007f2:	66 c7 04 c5 02 e4 00 	movw   $0x8,-0x3eff1bfe(,%eax,8)
c10007f9:	c1 08 00 
c10007fc:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10007ff:	0f b6 14 c5 04 e4 00 	movzbl -0x3eff1bfc(,%eax,8),%edx
c1000806:	c1 
c1000807:	83 e2 e0             	and    $0xffffffe0,%edx
c100080a:	88 14 c5 04 e4 00 c1 	mov    %dl,-0x3eff1bfc(,%eax,8)
c1000811:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000814:	0f b6 14 c5 04 e4 00 	movzbl -0x3eff1bfc(,%eax,8),%edx
c100081b:	c1 
c100081c:	83 e2 1f             	and    $0x1f,%edx
c100081f:	88 14 c5 04 e4 00 c1 	mov    %dl,-0x3eff1bfc(,%eax,8)
c1000826:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000829:	0f b6 14 c5 05 e4 00 	movzbl -0x3eff1bfb(,%eax,8),%edx
c1000830:	c1 
c1000831:	83 e2 f0             	and    $0xfffffff0,%edx
c1000834:	83 ca 0e             	or     $0xe,%edx
c1000837:	88 14 c5 05 e4 00 c1 	mov    %dl,-0x3eff1bfb(,%eax,8)
c100083e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000841:	0f b6 14 c5 05 e4 00 	movzbl -0x3eff1bfb(,%eax,8),%edx
c1000848:	c1 
c1000849:	83 e2 ef             	and    $0xffffffef,%edx
c100084c:	88 14 c5 05 e4 00 c1 	mov    %dl,-0x3eff1bfb(,%eax,8)
c1000853:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000856:	0f b6 14 c5 05 e4 00 	movzbl -0x3eff1bfb(,%eax,8),%edx
c100085d:	c1 
c100085e:	83 e2 9f             	and    $0xffffff9f,%edx
c1000861:	88 14 c5 05 e4 00 c1 	mov    %dl,-0x3eff1bfb(,%eax,8)
c1000868:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100086b:	0f b6 14 c5 05 e4 00 	movzbl -0x3eff1bfb(,%eax,8),%edx
c1000872:	c1 
c1000873:	83 ca 80             	or     $0xffffff80,%edx
c1000876:	88 14 c5 05 e4 00 c1 	mov    %dl,-0x3eff1bfb(,%eax,8)
c100087d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000880:	8b 04 85 00 c1 00 c1 	mov    -0x3eff3f00(,%eax,4),%eax
c1000887:	c1 e8 10             	shr    $0x10,%eax
c100088a:	89 c2                	mov    %eax,%edx
c100088c:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100088f:	66 89 14 c5 06 e4 00 	mov    %dx,-0x3eff1bfa(,%eax,8)
c1000896:	c1 
c1000897:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100089b:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100089e:	3d ff 00 00 00       	cmp    $0xff,%eax
c10008a3:	0f 86 2f ff ff ff    	jbe    c10007d8 <idt_init+0x12>
c10008a9:	a1 00 c3 00 c1       	mov    0xc100c300,%eax
c10008ae:	66 a3 00 e8 00 c1    	mov    %ax,0xc100e800
c10008b4:	66 c7 05 02 e8 00 c1 	movw   $0x8,0xc100e802
c10008bb:	08 00 
c10008bd:	0f b6 05 04 e8 00 c1 	movzbl 0xc100e804,%eax
c10008c4:	83 e0 e0             	and    $0xffffffe0,%eax
c10008c7:	a2 04 e8 00 c1       	mov    %al,0xc100e804
c10008cc:	0f b6 05 04 e8 00 c1 	movzbl 0xc100e804,%eax
c10008d3:	83 e0 1f             	and    $0x1f,%eax
c10008d6:	a2 04 e8 00 c1       	mov    %al,0xc100e804
c10008db:	0f b6 05 05 e8 00 c1 	movzbl 0xc100e805,%eax
c10008e2:	83 c8 0f             	or     $0xf,%eax
c10008e5:	a2 05 e8 00 c1       	mov    %al,0xc100e805
c10008ea:	0f b6 05 05 e8 00 c1 	movzbl 0xc100e805,%eax
c10008f1:	83 e0 ef             	and    $0xffffffef,%eax
c10008f4:	a2 05 e8 00 c1       	mov    %al,0xc100e805
c10008f9:	0f b6 05 05 e8 00 c1 	movzbl 0xc100e805,%eax
c1000900:	83 c8 60             	or     $0x60,%eax
c1000903:	a2 05 e8 00 c1       	mov    %al,0xc100e805
c1000908:	0f b6 05 05 e8 00 c1 	movzbl 0xc100e805,%eax
c100090f:	83 c8 80             	or     $0xffffff80,%eax
c1000912:	a2 05 e8 00 c1       	mov    %al,0xc100e805
c1000917:	a1 00 c3 00 c1       	mov    0xc100c300,%eax
c100091c:	c1 e8 10             	shr    $0x10,%eax
c100091f:	66 a3 06 e8 00 c1    	mov    %ax,0xc100e806
c1000925:	a1 80 c2 00 c1       	mov    0xc100c280,%eax
c100092a:	66 a3 00 e7 00 c1    	mov    %ax,0xc100e700
c1000930:	66 c7 05 02 e7 00 c1 	movw   $0x8,0xc100e702
c1000937:	08 00 
c1000939:	0f b6 05 04 e7 00 c1 	movzbl 0xc100e704,%eax
c1000940:	83 e0 e0             	and    $0xffffffe0,%eax
c1000943:	a2 04 e7 00 c1       	mov    %al,0xc100e704
c1000948:	0f b6 05 04 e7 00 c1 	movzbl 0xc100e704,%eax
c100094f:	83 e0 1f             	and    $0x1f,%eax
c1000952:	a2 04 e7 00 c1       	mov    %al,0xc100e704
c1000957:	0f b6 05 05 e7 00 c1 	movzbl 0xc100e705,%eax
c100095e:	83 c8 0f             	or     $0xf,%eax
c1000961:	a2 05 e7 00 c1       	mov    %al,0xc100e705
c1000966:	0f b6 05 05 e7 00 c1 	movzbl 0xc100e705,%eax
c100096d:	83 e0 ef             	and    $0xffffffef,%eax
c1000970:	a2 05 e7 00 c1       	mov    %al,0xc100e705
c1000975:	0f b6 05 05 e7 00 c1 	movzbl 0xc100e705,%eax
c100097c:	83 c8 60             	or     $0x60,%eax
c100097f:	a2 05 e7 00 c1       	mov    %al,0xc100e705
c1000984:	0f b6 05 05 e7 00 c1 	movzbl 0xc100e705,%eax
c100098b:	83 c8 80             	or     $0xffffff80,%eax
c100098e:	a2 05 e7 00 c1       	mov    %al,0xc100e705
c1000993:	a1 80 c2 00 c1       	mov    0xc100c280,%eax
c1000998:	c1 e8 10             	shr    $0x10,%eax
c100099b:	66 a3 06 e7 00 c1    	mov    %ax,0xc100e706
c10009a1:	68 80 c0 00 c1       	push   $0xc100c080
c10009a6:	e8 0f fe ff ff       	call   c10007ba <lidt>
c10009ab:	83 c4 04             	add    $0x4,%esp
c10009ae:	90                   	nop
c10009af:	c9                   	leave  
c10009b0:	c3                   	ret    

c10009b1 <set_ts_esp0>:
c10009b1:	55                   	push   %ebp
c10009b2:	89 e5                	mov    %esp,%ebp
c10009b4:	8b 45 08             	mov    0x8(%ebp),%eax
c10009b7:	a3 04 ec 00 c1       	mov    %eax,0xc100ec04
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
c10009f3:	68 56 a5 00 c1       	push   $0xc100a556
c10009f8:	e8 bf 45 00 00       	call   c1004fbc <printk>
c10009fd:	83 c4 10             	add    $0x10,%esp
c1000a00:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a03:	8b 40 04             	mov    0x4(%eax),%eax
c1000a06:	83 ec 08             	sub    $0x8,%esp
c1000a09:	50                   	push   %eax
c1000a0a:	68 66 a5 00 c1       	push   $0xc100a566
c1000a0f:	e8 a8 45 00 00       	call   c1004fbc <printk>
c1000a14:	83 c4 10             	add    $0x10,%esp
c1000a17:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a1a:	8b 40 08             	mov    0x8(%eax),%eax
c1000a1d:	83 ec 08             	sub    $0x8,%esp
c1000a20:	50                   	push   %eax
c1000a21:	68 76 a5 00 c1       	push   $0xc100a576
c1000a26:	e8 91 45 00 00       	call   c1004fbc <printk>
c1000a2b:	83 c4 10             	add    $0x10,%esp
c1000a2e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a31:	8b 40 0c             	mov    0xc(%eax),%eax
c1000a34:	83 ec 08             	sub    $0x8,%esp
c1000a37:	50                   	push   %eax
c1000a38:	68 86 a5 00 c1       	push   $0xc100a586
c1000a3d:	e8 7a 45 00 00       	call   c1004fbc <printk>
c1000a42:	83 c4 10             	add    $0x10,%esp
c1000a45:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a48:	8b 40 10             	mov    0x10(%eax),%eax
c1000a4b:	83 ec 08             	sub    $0x8,%esp
c1000a4e:	50                   	push   %eax
c1000a4f:	68 96 a5 00 c1       	push   $0xc100a596
c1000a54:	e8 63 45 00 00       	call   c1004fbc <printk>
c1000a59:	83 c4 10             	add    $0x10,%esp
c1000a5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a5f:	8b 40 14             	mov    0x14(%eax),%eax
c1000a62:	83 ec 08             	sub    $0x8,%esp
c1000a65:	50                   	push   %eax
c1000a66:	68 a6 a5 00 c1       	push   $0xc100a5a6
c1000a6b:	e8 4c 45 00 00       	call   c1004fbc <printk>
c1000a70:	83 c4 10             	add    $0x10,%esp
c1000a73:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a76:	8b 40 18             	mov    0x18(%eax),%eax
c1000a79:	83 ec 08             	sub    $0x8,%esp
c1000a7c:	50                   	push   %eax
c1000a7d:	68 b6 a5 00 c1       	push   $0xc100a5b6
c1000a82:	e8 35 45 00 00       	call   c1004fbc <printk>
c1000a87:	83 c4 10             	add    $0x10,%esp
c1000a8a:	8b 45 08             	mov    0x8(%ebp),%eax
c1000a8d:	8b 40 1c             	mov    0x1c(%eax),%eax
c1000a90:	83 ec 08             	sub    $0x8,%esp
c1000a93:	50                   	push   %eax
c1000a94:	68 c6 a5 00 c1       	push   $0xc100a5c6
c1000a99:	e8 1e 45 00 00       	call   c1004fbc <printk>
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
c1000ac7:	68 d6 a5 00 c1       	push   $0xc100a5d6
c1000acc:	e8 eb 44 00 00       	call   c1004fbc <printk>
c1000ad1:	83 c4 10             	add    $0x10,%esp
c1000ad4:	8b 45 08             	mov    0x8(%ebp),%eax
c1000ad7:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1000adb:	0f b7 c0             	movzwl %ax,%eax
c1000ade:	83 ec 08             	sub    $0x8,%esp
c1000ae1:	50                   	push   %eax
c1000ae2:	68 ea a5 00 c1       	push   $0xc100a5ea
c1000ae7:	e8 d0 44 00 00       	call   c1004fbc <printk>
c1000aec:	83 c4 10             	add    $0x10,%esp
c1000aef:	8b 45 08             	mov    0x8(%ebp),%eax
c1000af2:	0f b7 40 24          	movzwl 0x24(%eax),%eax
c1000af6:	0f b7 c0             	movzwl %ax,%eax
c1000af9:	83 ec 08             	sub    $0x8,%esp
c1000afc:	50                   	push   %eax
c1000afd:	68 fe a5 00 c1       	push   $0xc100a5fe
c1000b02:	e8 b5 44 00 00       	call   c1004fbc <printk>
c1000b07:	83 c4 10             	add    $0x10,%esp
c1000b0a:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b0d:	0f b7 40 20          	movzwl 0x20(%eax),%eax
c1000b11:	0f b7 c0             	movzwl %ax,%eax
c1000b14:	83 ec 08             	sub    $0x8,%esp
c1000b17:	50                   	push   %eax
c1000b18:	68 12 a6 00 c1       	push   $0xc100a612
c1000b1d:	e8 9a 44 00 00       	call   c1004fbc <printk>
c1000b22:	83 c4 10             	add    $0x10,%esp
c1000b25:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b28:	8b 40 34             	mov    0x34(%eax),%eax
c1000b2b:	83 ec 08             	sub    $0x8,%esp
c1000b2e:	50                   	push   %eax
c1000b2f:	68 26 a6 00 c1       	push   $0xc100a626
c1000b34:	e8 83 44 00 00       	call   c1004fbc <printk>
c1000b39:	83 c4 10             	add    $0x10,%esp
c1000b3c:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b3f:	8b 40 38             	mov    0x38(%eax),%eax
c1000b42:	83 ec 08             	sub    $0x8,%esp
c1000b45:	50                   	push   %eax
c1000b46:	68 36 a6 00 c1       	push   $0xc100a636
c1000b4b:	e8 6c 44 00 00       	call   c1004fbc <printk>
c1000b50:	83 c4 10             	add    $0x10,%esp
c1000b53:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b56:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
c1000b5a:	0f b7 c0             	movzwl %ax,%eax
c1000b5d:	83 ec 08             	sub    $0x8,%esp
c1000b60:	50                   	push   %eax
c1000b61:	68 46 a6 00 c1       	push   $0xc100a646
c1000b66:	e8 51 44 00 00       	call   c1004fbc <printk>
c1000b6b:	83 c4 10             	add    $0x10,%esp
c1000b6e:	8b 45 08             	mov    0x8(%ebp),%eax
c1000b71:	8b 40 40             	mov    0x40(%eax),%eax
c1000b74:	83 ec 08             	sub    $0x8,%esp
c1000b77:	50                   	push   %eax
c1000b78:	68 5a a6 00 c1       	push   $0xc100a65a
c1000b7d:	e8 3a 44 00 00       	call   c1004fbc <printk>
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
c1000ba7:	8b 04 85 a0 c0 00 c1 	mov    -0x3eff3f60(,%eax,4),%eax
c1000bae:	85 c0                	test   %eax,%eax
c1000bb0:	74 1b                	je     c1000bcd <print_trapframe+0x129>
c1000bb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1000bb5:	8b 04 85 a0 c0 00 c1 	mov    -0x3eff3f60(,%eax,4),%eax
c1000bbc:	83 ec 08             	sub    $0x8,%esp
c1000bbf:	50                   	push   %eax
c1000bc0:	68 6a a6 00 c1       	push   $0xc100a66a
c1000bc5:	e8 f2 43 00 00       	call   c1004fbc <printk>
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
c1000bec:	68 6e a6 00 c1       	push   $0xc100a66e
c1000bf1:	e8 c6 43 00 00       	call   c1004fbc <printk>
c1000bf6:	83 c4 10             	add    $0x10,%esp
c1000bf9:	90                   	nop
c1000bfa:	c9                   	leave  
c1000bfb:	c3                   	ret    

c1000bfc <trap_dispatch>:
c1000bfc:	55                   	push   %ebp
c1000bfd:	89 e5                	mov    %esp,%ebp
c1000bff:	83 ec 18             	sub    $0x18,%esp
c1000c02:	8b 45 08             	mov    0x8(%ebp),%eax
c1000c05:	8b 40 30             	mov    0x30(%eax),%eax
c1000c08:	3d 80 00 00 00       	cmp    $0x80,%eax
c1000c0d:	74 61                	je     c1000c70 <trap_dispatch+0x74>
c1000c0f:	3d 80 00 00 00       	cmp    $0x80,%eax
c1000c14:	0f 87 f7 00 00 00    	ja     c1000d11 <trap_dispatch+0x115>
c1000c1a:	83 f8 2f             	cmp    $0x2f,%eax
c1000c1d:	77 1e                	ja     c1000c3d <trap_dispatch+0x41>
c1000c1f:	83 f8 0e             	cmp    $0xe,%eax
c1000c22:	0f 82 e9 00 00 00    	jb     c1000d11 <trap_dispatch+0x115>
c1000c28:	83 e8 0e             	sub    $0xe,%eax
c1000c2b:	83 f8 21             	cmp    $0x21,%eax
c1000c2e:	0f 87 dd 00 00 00    	ja     c1000d11 <trap_dispatch+0x115>
c1000c34:	8b 04 85 ac a6 00 c1 	mov    -0x3eff5954(,%eax,4),%eax
c1000c3b:	ff e0                	jmp    *%eax
c1000c3d:	83 f8 60             	cmp    $0x60,%eax
c1000c40:	0f 85 cb 00 00 00    	jne    c1000d11 <trap_dispatch+0x115>
c1000c46:	83 ec 0c             	sub    $0xc,%esp
c1000c49:	68 77 a6 00 c1       	push   $0xc100a677
c1000c4e:	e8 69 43 00 00       	call   c1004fbc <printk>
c1000c53:	83 c4 10             	add    $0x10,%esp
c1000c56:	e9 cf 00 00 00       	jmp    c1000d2a <trap_dispatch+0x12e>
c1000c5b:	83 ec 0c             	sub    $0xc,%esp
c1000c5e:	68 87 a6 00 c1       	push   $0xc100a687
c1000c63:	e8 54 43 00 00       	call   c1004fbc <printk>
c1000c68:	83 c4 10             	add    $0x10,%esp
c1000c6b:	e9 ba 00 00 00       	jmp    c1000d2a <trap_dispatch+0x12e>
c1000c70:	83 ec 0c             	sub    $0xc,%esp
c1000c73:	ff 75 08             	pushl  0x8(%ebp)
c1000c76:	e8 2e 10 00 00       	call   c1001ca9 <syscall_trap>
c1000c7b:	83 c4 10             	add    $0x10,%esp
c1000c7e:	e9 a7 00 00 00       	jmp    c1000d2a <trap_dispatch+0x12e>
c1000c83:	a1 2c 32 a1 c1       	mov    0xc1a1322c,%eax
c1000c88:	83 c0 01             	add    $0x1,%eax
c1000c8b:	a3 2c 32 a1 c1       	mov    %eax,0xc1a1322c
c1000c90:	8b 0d 2c 32 a1 c1    	mov    0xc1a1322c,%ecx
c1000c96:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
c1000c9b:	89 c8                	mov    %ecx,%eax
c1000c9d:	f7 e2                	mul    %edx
c1000c9f:	89 d0                	mov    %edx,%eax
c1000ca1:	c1 e8 05             	shr    $0x5,%eax
c1000ca4:	6b c0 64             	imul   $0x64,%eax,%eax
c1000ca7:	29 c1                	sub    %eax,%ecx
c1000ca9:	89 c8                	mov    %ecx,%eax
c1000cab:	85 c0                	test   %eax,%eax
c1000cad:	75 1b                	jne    c1000cca <trap_dispatch+0xce>
c1000caf:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1000cb4:	8b 50 04             	mov    0x4(%eax),%edx
c1000cb7:	83 ea 01             	sub    $0x1,%edx
c1000cba:	89 50 04             	mov    %edx,0x4(%eax)
c1000cbd:	a1 28 32 a1 c1       	mov    0xc1a13228,%eax
c1000cc2:	83 c0 01             	add    $0x1,%eax
c1000cc5:	a3 28 32 a1 c1       	mov    %eax,0xc1a13228
c1000cca:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1000ccf:	8b 40 04             	mov    0x4(%eax),%eax
c1000cd2:	85 c0                	test   %eax,%eax
c1000cd4:	75 50                	jne    c1000d26 <trap_dispatch+0x12a>
c1000cd6:	e8 8b 2d 00 00       	call   c1003a66 <schedule>
c1000cdb:	eb 49                	jmp    c1000d26 <trap_dispatch+0x12a>
c1000cdd:	e8 ad 46 00 00       	call   c100538f <cons_getc>
c1000ce2:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000ce5:	eb 43                	jmp    c1000d2a <trap_dispatch+0x12e>
c1000ce7:	e8 a3 46 00 00       	call   c100538f <cons_getc>
c1000cec:	88 45 f7             	mov    %al,-0x9(%ebp)
c1000cef:	0f b6 05 b4 0c 01 c1 	movzbl 0xc1010cb4,%eax
c1000cf6:	84 c0                	test   %al,%al
c1000cf8:	75 2f                	jne    c1000d29 <trap_dispatch+0x12d>
c1000cfa:	83 ec 0c             	sub    $0xc,%esp
c1000cfd:	68 b4 0c 01 c1       	push   $0xc1010cb4
c1000d02:	e8 49 48 00 00       	call   c1005550 <sema_up>
c1000d07:	83 c4 10             	add    $0x10,%esp
c1000d0a:	e8 57 2d 00 00       	call   c1003a66 <schedule>
c1000d0f:	eb 18                	jmp    c1000d29 <trap_dispatch+0x12d>
c1000d11:	83 ec 0c             	sub    $0xc,%esp
c1000d14:	68 8e a6 00 c1       	push   $0xc100a68e
c1000d19:	e8 9e 42 00 00       	call   c1004fbc <printk>
c1000d1e:	83 c4 10             	add    $0x10,%esp
c1000d21:	eb 07                	jmp    c1000d2a <trap_dispatch+0x12e>
c1000d23:	90                   	nop
c1000d24:	eb 04                	jmp    c1000d2a <trap_dispatch+0x12e>
c1000d26:	90                   	nop
c1000d27:	eb 01                	jmp    c1000d2a <trap_dispatch+0x12e>
c1000d29:	90                   	nop
c1000d2a:	90                   	nop
c1000d2b:	c9                   	leave  
c1000d2c:	c3                   	ret    

c1000d2d <trap>:
c1000d2d:	55                   	push   %ebp
c1000d2e:	89 e5                	mov    %esp,%ebp
c1000d30:	83 ec 08             	sub    $0x8,%esp
c1000d33:	83 ec 0c             	sub    $0xc,%esp
c1000d36:	ff 75 08             	pushl  0x8(%ebp)
c1000d39:	e8 be fe ff ff       	call   c1000bfc <trap_dispatch>
c1000d3e:	83 c4 10             	add    $0x10,%esp
c1000d41:	90                   	nop
c1000d42:	c9                   	leave  
c1000d43:	c3                   	ret    

c1000d44 <disable_interupt>:
c1000d44:	55                   	push   %ebp
c1000d45:	89 e5                	mov    %esp,%ebp
c1000d47:	fa                   	cli    
c1000d48:	90                   	nop
c1000d49:	5d                   	pop    %ebp
c1000d4a:	c3                   	ret    

c1000d4b <enable_interupt>:
c1000d4b:	55                   	push   %ebp
c1000d4c:	89 e5                	mov    %esp,%ebp
c1000d4e:	fb                   	sti    
c1000d4f:	90                   	nop
c1000d50:	5d                   	pop    %ebp
c1000d51:	c3                   	ret    

c1000d52 <get_now_intr_status>:
c1000d52:	55                   	push   %ebp
c1000d53:	89 e5                	mov    %esp,%ebp
c1000d55:	83 ec 10             	sub    $0x10,%esp
c1000d58:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1000d5f:	9c                   	pushf  
c1000d60:	58                   	pop    %eax
c1000d61:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1000d64:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000d67:	c1 e8 09             	shr    $0x9,%eax
c1000d6a:	83 e0 01             	and    $0x1,%eax
c1000d6d:	c9                   	leave  
c1000d6e:	c3                   	ret    

c1000d6f <intr_enable>:
c1000d6f:	55                   	push   %ebp
c1000d70:	89 e5                	mov    %esp,%ebp
c1000d72:	e8 db ff ff ff       	call   c1000d52 <get_now_intr_status>
c1000d77:	85 c0                	test   %eax,%eax
c1000d79:	75 0c                	jne    c1000d87 <intr_enable+0x18>
c1000d7b:	e8 cb ff ff ff       	call   c1000d4b <enable_interupt>
c1000d80:	b8 00 00 00 00       	mov    $0x0,%eax
c1000d85:	eb 05                	jmp    c1000d8c <intr_enable+0x1d>
c1000d87:	b8 01 00 00 00       	mov    $0x1,%eax
c1000d8c:	5d                   	pop    %ebp
c1000d8d:	c3                   	ret    

c1000d8e <intr_disable>:
c1000d8e:	55                   	push   %ebp
c1000d8f:	89 e5                	mov    %esp,%ebp
c1000d91:	e8 bc ff ff ff       	call   c1000d52 <get_now_intr_status>
c1000d96:	83 f8 01             	cmp    $0x1,%eax
c1000d99:	75 0c                	jne    c1000da7 <intr_disable+0x19>
c1000d9b:	e8 a4 ff ff ff       	call   c1000d44 <disable_interupt>
c1000da0:	b8 01 00 00 00       	mov    $0x1,%eax
c1000da5:	eb 05                	jmp    c1000dac <intr_disable+0x1e>
c1000da7:	b8 00 00 00 00       	mov    $0x0,%eax
c1000dac:	5d                   	pop    %ebp
c1000dad:	c3                   	ret    

c1000dae <intr_save>:
c1000dae:	55                   	push   %ebp
c1000daf:	89 e5                	mov    %esp,%ebp
c1000db1:	83 ec 10             	sub    $0x10,%esp
c1000db4:	e8 d5 ff ff ff       	call   c1000d8e <intr_disable>
c1000db9:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1000dbc:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1000dbf:	c9                   	leave  
c1000dc0:	c3                   	ret    

c1000dc1 <intr_restore>:
c1000dc1:	55                   	push   %ebp
c1000dc2:	89 e5                	mov    %esp,%ebp
c1000dc4:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1000dc8:	75 05                	jne    c1000dcf <intr_restore+0xe>
c1000dca:	e8 7c ff ff ff       	call   c1000d4b <enable_interupt>
c1000dcf:	90                   	nop
c1000dd0:	5d                   	pop    %ebp
c1000dd1:	c3                   	ret    

c1000dd2 <__alltraps>:
c1000dd2:	1e                   	push   %ds
c1000dd3:	06                   	push   %es
c1000dd4:	0f a0                	push   %fs
c1000dd6:	0f a8                	push   %gs
c1000dd8:	60                   	pusha  
c1000dd9:	b8 10 00 00 00       	mov    $0x10,%eax
c1000dde:	8e d8                	mov    %eax,%ds
c1000de0:	8e c0                	mov    %eax,%es
c1000de2:	54                   	push   %esp
c1000de3:	e8 45 ff ff ff       	call   c1000d2d <trap>
c1000de8:	5c                   	pop    %esp

c1000de9 <__trapret>:
c1000de9:	61                   	popa   
c1000dea:	0f a9                	pop    %gs
c1000dec:	0f a1                	pop    %fs
c1000dee:	07                   	pop    %es
c1000def:	1f                   	pop    %ds
c1000df0:	83 c4 08             	add    $0x8,%esp
c1000df3:	cf                   	iret   

c1000df4 <forkrets>:
c1000df4:	8b 64 24 04          	mov    0x4(%esp),%esp
c1000df8:	eb ef                	jmp    c1000de9 <__trapret>

c1000dfa <vector0>:
c1000dfa:	6a 00                	push   $0x0
c1000dfc:	6a 00                	push   $0x0
c1000dfe:	e9 cf ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e03 <vector1>:
c1000e03:	6a 00                	push   $0x0
c1000e05:	6a 01                	push   $0x1
c1000e07:	e9 c6 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e0c <vector2>:
c1000e0c:	6a 00                	push   $0x0
c1000e0e:	6a 02                	push   $0x2
c1000e10:	e9 bd ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e15 <vector3>:
c1000e15:	6a 00                	push   $0x0
c1000e17:	6a 03                	push   $0x3
c1000e19:	e9 b4 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e1e <vector4>:
c1000e1e:	6a 00                	push   $0x0
c1000e20:	6a 04                	push   $0x4
c1000e22:	e9 ab ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e27 <vector5>:
c1000e27:	6a 00                	push   $0x0
c1000e29:	6a 05                	push   $0x5
c1000e2b:	e9 a2 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e30 <vector6>:
c1000e30:	6a 00                	push   $0x0
c1000e32:	6a 06                	push   $0x6
c1000e34:	e9 99 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e39 <vector7>:
c1000e39:	6a 00                	push   $0x0
c1000e3b:	6a 07                	push   $0x7
c1000e3d:	e9 90 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e42 <vector8>:
c1000e42:	6a 08                	push   $0x8
c1000e44:	e9 89 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e49 <vector9>:
c1000e49:	6a 09                	push   $0x9
c1000e4b:	e9 82 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e50 <vector10>:
c1000e50:	6a 0a                	push   $0xa
c1000e52:	e9 7b ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e57 <vector11>:
c1000e57:	6a 0b                	push   $0xb
c1000e59:	e9 74 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e5e <vector12>:
c1000e5e:	6a 0c                	push   $0xc
c1000e60:	e9 6d ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e65 <vector13>:
c1000e65:	6a 0d                	push   $0xd
c1000e67:	e9 66 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e6c <vector14>:
c1000e6c:	6a 0e                	push   $0xe
c1000e6e:	e9 5f ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e73 <vector15>:
c1000e73:	6a 00                	push   $0x0
c1000e75:	6a 0f                	push   $0xf
c1000e77:	e9 56 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e7c <vector16>:
c1000e7c:	6a 00                	push   $0x0
c1000e7e:	6a 10                	push   $0x10
c1000e80:	e9 4d ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e85 <vector17>:
c1000e85:	6a 11                	push   $0x11
c1000e87:	e9 46 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e8c <vector18>:
c1000e8c:	6a 00                	push   $0x0
c1000e8e:	6a 12                	push   $0x12
c1000e90:	e9 3d ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e95 <vector19>:
c1000e95:	6a 00                	push   $0x0
c1000e97:	6a 13                	push   $0x13
c1000e99:	e9 34 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000e9e <vector20>:
c1000e9e:	6a 00                	push   $0x0
c1000ea0:	6a 14                	push   $0x14
c1000ea2:	e9 2b ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000ea7 <vector21>:
c1000ea7:	6a 00                	push   $0x0
c1000ea9:	6a 15                	push   $0x15
c1000eab:	e9 22 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000eb0 <vector22>:
c1000eb0:	6a 00                	push   $0x0
c1000eb2:	6a 16                	push   $0x16
c1000eb4:	e9 19 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000eb9 <vector23>:
c1000eb9:	6a 00                	push   $0x0
c1000ebb:	6a 17                	push   $0x17
c1000ebd:	e9 10 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000ec2 <vector24>:
c1000ec2:	6a 00                	push   $0x0
c1000ec4:	6a 18                	push   $0x18
c1000ec6:	e9 07 ff ff ff       	jmp    c1000dd2 <__alltraps>

c1000ecb <vector25>:
c1000ecb:	6a 00                	push   $0x0
c1000ecd:	6a 19                	push   $0x19
c1000ecf:	e9 fe fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000ed4 <vector26>:
c1000ed4:	6a 00                	push   $0x0
c1000ed6:	6a 1a                	push   $0x1a
c1000ed8:	e9 f5 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000edd <vector27>:
c1000edd:	6a 00                	push   $0x0
c1000edf:	6a 1b                	push   $0x1b
c1000ee1:	e9 ec fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000ee6 <vector28>:
c1000ee6:	6a 00                	push   $0x0
c1000ee8:	6a 1c                	push   $0x1c
c1000eea:	e9 e3 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000eef <vector29>:
c1000eef:	6a 00                	push   $0x0
c1000ef1:	6a 1d                	push   $0x1d
c1000ef3:	e9 da fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000ef8 <vector30>:
c1000ef8:	6a 00                	push   $0x0
c1000efa:	6a 1e                	push   $0x1e
c1000efc:	e9 d1 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f01 <vector31>:
c1000f01:	6a 00                	push   $0x0
c1000f03:	6a 1f                	push   $0x1f
c1000f05:	e9 c8 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f0a <vector32>:
c1000f0a:	6a 00                	push   $0x0
c1000f0c:	6a 20                	push   $0x20
c1000f0e:	e9 bf fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f13 <vector33>:
c1000f13:	6a 00                	push   $0x0
c1000f15:	6a 21                	push   $0x21
c1000f17:	e9 b6 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f1c <vector34>:
c1000f1c:	6a 00                	push   $0x0
c1000f1e:	6a 22                	push   $0x22
c1000f20:	e9 ad fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f25 <vector35>:
c1000f25:	6a 00                	push   $0x0
c1000f27:	6a 23                	push   $0x23
c1000f29:	e9 a4 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f2e <vector36>:
c1000f2e:	6a 00                	push   $0x0
c1000f30:	6a 24                	push   $0x24
c1000f32:	e9 9b fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f37 <vector37>:
c1000f37:	6a 00                	push   $0x0
c1000f39:	6a 25                	push   $0x25
c1000f3b:	e9 92 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f40 <vector38>:
c1000f40:	6a 00                	push   $0x0
c1000f42:	6a 26                	push   $0x26
c1000f44:	e9 89 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f49 <vector39>:
c1000f49:	6a 00                	push   $0x0
c1000f4b:	6a 27                	push   $0x27
c1000f4d:	e9 80 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f52 <vector40>:
c1000f52:	6a 00                	push   $0x0
c1000f54:	6a 28                	push   $0x28
c1000f56:	e9 77 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f5b <vector41>:
c1000f5b:	6a 00                	push   $0x0
c1000f5d:	6a 29                	push   $0x29
c1000f5f:	e9 6e fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f64 <vector42>:
c1000f64:	6a 00                	push   $0x0
c1000f66:	6a 2a                	push   $0x2a
c1000f68:	e9 65 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f6d <vector43>:
c1000f6d:	6a 00                	push   $0x0
c1000f6f:	6a 2b                	push   $0x2b
c1000f71:	e9 5c fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f76 <vector44>:
c1000f76:	6a 00                	push   $0x0
c1000f78:	6a 2c                	push   $0x2c
c1000f7a:	e9 53 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f7f <vector45>:
c1000f7f:	6a 00                	push   $0x0
c1000f81:	6a 2d                	push   $0x2d
c1000f83:	e9 4a fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f88 <vector46>:
c1000f88:	6a 00                	push   $0x0
c1000f8a:	6a 2e                	push   $0x2e
c1000f8c:	e9 41 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f91 <vector47>:
c1000f91:	6a 00                	push   $0x0
c1000f93:	6a 2f                	push   $0x2f
c1000f95:	e9 38 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000f9a <vector48>:
c1000f9a:	6a 00                	push   $0x0
c1000f9c:	6a 30                	push   $0x30
c1000f9e:	e9 2f fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000fa3 <vector49>:
c1000fa3:	6a 00                	push   $0x0
c1000fa5:	6a 31                	push   $0x31
c1000fa7:	e9 26 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000fac <vector50>:
c1000fac:	6a 00                	push   $0x0
c1000fae:	6a 32                	push   $0x32
c1000fb0:	e9 1d fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000fb5 <vector51>:
c1000fb5:	6a 00                	push   $0x0
c1000fb7:	6a 33                	push   $0x33
c1000fb9:	e9 14 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000fbe <vector52>:
c1000fbe:	6a 00                	push   $0x0
c1000fc0:	6a 34                	push   $0x34
c1000fc2:	e9 0b fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000fc7 <vector53>:
c1000fc7:	6a 00                	push   $0x0
c1000fc9:	6a 35                	push   $0x35
c1000fcb:	e9 02 fe ff ff       	jmp    c1000dd2 <__alltraps>

c1000fd0 <vector54>:
c1000fd0:	6a 00                	push   $0x0
c1000fd2:	6a 36                	push   $0x36
c1000fd4:	e9 f9 fd ff ff       	jmp    c1000dd2 <__alltraps>

c1000fd9 <vector55>:
c1000fd9:	6a 00                	push   $0x0
c1000fdb:	6a 37                	push   $0x37
c1000fdd:	e9 f0 fd ff ff       	jmp    c1000dd2 <__alltraps>

c1000fe2 <vector56>:
c1000fe2:	6a 00                	push   $0x0
c1000fe4:	6a 38                	push   $0x38
c1000fe6:	e9 e7 fd ff ff       	jmp    c1000dd2 <__alltraps>

c1000feb <vector57>:
c1000feb:	6a 00                	push   $0x0
c1000fed:	6a 39                	push   $0x39
c1000fef:	e9 de fd ff ff       	jmp    c1000dd2 <__alltraps>

c1000ff4 <vector58>:
c1000ff4:	6a 00                	push   $0x0
c1000ff6:	6a 3a                	push   $0x3a
c1000ff8:	e9 d5 fd ff ff       	jmp    c1000dd2 <__alltraps>

c1000ffd <vector59>:
c1000ffd:	6a 00                	push   $0x0
c1000fff:	6a 3b                	push   $0x3b
c1001001:	e9 cc fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001006 <vector60>:
c1001006:	6a 00                	push   $0x0
c1001008:	6a 3c                	push   $0x3c
c100100a:	e9 c3 fd ff ff       	jmp    c1000dd2 <__alltraps>

c100100f <vector61>:
c100100f:	6a 00                	push   $0x0
c1001011:	6a 3d                	push   $0x3d
c1001013:	e9 ba fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001018 <vector62>:
c1001018:	6a 00                	push   $0x0
c100101a:	6a 3e                	push   $0x3e
c100101c:	e9 b1 fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001021 <vector63>:
c1001021:	6a 00                	push   $0x0
c1001023:	6a 3f                	push   $0x3f
c1001025:	e9 a8 fd ff ff       	jmp    c1000dd2 <__alltraps>

c100102a <vector64>:
c100102a:	6a 00                	push   $0x0
c100102c:	6a 40                	push   $0x40
c100102e:	e9 9f fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001033 <vector65>:
c1001033:	6a 00                	push   $0x0
c1001035:	6a 41                	push   $0x41
c1001037:	e9 96 fd ff ff       	jmp    c1000dd2 <__alltraps>

c100103c <vector66>:
c100103c:	6a 00                	push   $0x0
c100103e:	6a 42                	push   $0x42
c1001040:	e9 8d fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001045 <vector67>:
c1001045:	6a 00                	push   $0x0
c1001047:	6a 43                	push   $0x43
c1001049:	e9 84 fd ff ff       	jmp    c1000dd2 <__alltraps>

c100104e <vector68>:
c100104e:	6a 00                	push   $0x0
c1001050:	6a 44                	push   $0x44
c1001052:	e9 7b fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001057 <vector69>:
c1001057:	6a 00                	push   $0x0
c1001059:	6a 45                	push   $0x45
c100105b:	e9 72 fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001060 <vector70>:
c1001060:	6a 00                	push   $0x0
c1001062:	6a 46                	push   $0x46
c1001064:	e9 69 fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001069 <vector71>:
c1001069:	6a 00                	push   $0x0
c100106b:	6a 47                	push   $0x47
c100106d:	e9 60 fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001072 <vector72>:
c1001072:	6a 00                	push   $0x0
c1001074:	6a 48                	push   $0x48
c1001076:	e9 57 fd ff ff       	jmp    c1000dd2 <__alltraps>

c100107b <vector73>:
c100107b:	6a 00                	push   $0x0
c100107d:	6a 49                	push   $0x49
c100107f:	e9 4e fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001084 <vector74>:
c1001084:	6a 00                	push   $0x0
c1001086:	6a 4a                	push   $0x4a
c1001088:	e9 45 fd ff ff       	jmp    c1000dd2 <__alltraps>

c100108d <vector75>:
c100108d:	6a 00                	push   $0x0
c100108f:	6a 4b                	push   $0x4b
c1001091:	e9 3c fd ff ff       	jmp    c1000dd2 <__alltraps>

c1001096 <vector76>:
c1001096:	6a 00                	push   $0x0
c1001098:	6a 4c                	push   $0x4c
c100109a:	e9 33 fd ff ff       	jmp    c1000dd2 <__alltraps>

c100109f <vector77>:
c100109f:	6a 00                	push   $0x0
c10010a1:	6a 4d                	push   $0x4d
c10010a3:	e9 2a fd ff ff       	jmp    c1000dd2 <__alltraps>

c10010a8 <vector78>:
c10010a8:	6a 00                	push   $0x0
c10010aa:	6a 4e                	push   $0x4e
c10010ac:	e9 21 fd ff ff       	jmp    c1000dd2 <__alltraps>

c10010b1 <vector79>:
c10010b1:	6a 00                	push   $0x0
c10010b3:	6a 4f                	push   $0x4f
c10010b5:	e9 18 fd ff ff       	jmp    c1000dd2 <__alltraps>

c10010ba <vector80>:
c10010ba:	6a 00                	push   $0x0
c10010bc:	6a 50                	push   $0x50
c10010be:	e9 0f fd ff ff       	jmp    c1000dd2 <__alltraps>

c10010c3 <vector81>:
c10010c3:	6a 00                	push   $0x0
c10010c5:	6a 51                	push   $0x51
c10010c7:	e9 06 fd ff ff       	jmp    c1000dd2 <__alltraps>

c10010cc <vector82>:
c10010cc:	6a 00                	push   $0x0
c10010ce:	6a 52                	push   $0x52
c10010d0:	e9 fd fc ff ff       	jmp    c1000dd2 <__alltraps>

c10010d5 <vector83>:
c10010d5:	6a 00                	push   $0x0
c10010d7:	6a 53                	push   $0x53
c10010d9:	e9 f4 fc ff ff       	jmp    c1000dd2 <__alltraps>

c10010de <vector84>:
c10010de:	6a 00                	push   $0x0
c10010e0:	6a 54                	push   $0x54
c10010e2:	e9 eb fc ff ff       	jmp    c1000dd2 <__alltraps>

c10010e7 <vector85>:
c10010e7:	6a 00                	push   $0x0
c10010e9:	6a 55                	push   $0x55
c10010eb:	e9 e2 fc ff ff       	jmp    c1000dd2 <__alltraps>

c10010f0 <vector86>:
c10010f0:	6a 00                	push   $0x0
c10010f2:	6a 56                	push   $0x56
c10010f4:	e9 d9 fc ff ff       	jmp    c1000dd2 <__alltraps>

c10010f9 <vector87>:
c10010f9:	6a 00                	push   $0x0
c10010fb:	6a 57                	push   $0x57
c10010fd:	e9 d0 fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001102 <vector88>:
c1001102:	6a 00                	push   $0x0
c1001104:	6a 58                	push   $0x58
c1001106:	e9 c7 fc ff ff       	jmp    c1000dd2 <__alltraps>

c100110b <vector89>:
c100110b:	6a 00                	push   $0x0
c100110d:	6a 59                	push   $0x59
c100110f:	e9 be fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001114 <vector90>:
c1001114:	6a 00                	push   $0x0
c1001116:	6a 5a                	push   $0x5a
c1001118:	e9 b5 fc ff ff       	jmp    c1000dd2 <__alltraps>

c100111d <vector91>:
c100111d:	6a 00                	push   $0x0
c100111f:	6a 5b                	push   $0x5b
c1001121:	e9 ac fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001126 <vector92>:
c1001126:	6a 00                	push   $0x0
c1001128:	6a 5c                	push   $0x5c
c100112a:	e9 a3 fc ff ff       	jmp    c1000dd2 <__alltraps>

c100112f <vector93>:
c100112f:	6a 00                	push   $0x0
c1001131:	6a 5d                	push   $0x5d
c1001133:	e9 9a fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001138 <vector94>:
c1001138:	6a 00                	push   $0x0
c100113a:	6a 5e                	push   $0x5e
c100113c:	e9 91 fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001141 <vector95>:
c1001141:	6a 00                	push   $0x0
c1001143:	6a 5f                	push   $0x5f
c1001145:	e9 88 fc ff ff       	jmp    c1000dd2 <__alltraps>

c100114a <vector96>:
c100114a:	6a 00                	push   $0x0
c100114c:	6a 60                	push   $0x60
c100114e:	e9 7f fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001153 <vector97>:
c1001153:	6a 00                	push   $0x0
c1001155:	6a 61                	push   $0x61
c1001157:	e9 76 fc ff ff       	jmp    c1000dd2 <__alltraps>

c100115c <vector98>:
c100115c:	6a 00                	push   $0x0
c100115e:	6a 62                	push   $0x62
c1001160:	e9 6d fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001165 <vector99>:
c1001165:	6a 00                	push   $0x0
c1001167:	6a 63                	push   $0x63
c1001169:	e9 64 fc ff ff       	jmp    c1000dd2 <__alltraps>

c100116e <vector100>:
c100116e:	6a 00                	push   $0x0
c1001170:	6a 64                	push   $0x64
c1001172:	e9 5b fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001177 <vector101>:
c1001177:	6a 00                	push   $0x0
c1001179:	6a 65                	push   $0x65
c100117b:	e9 52 fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001180 <vector102>:
c1001180:	6a 00                	push   $0x0
c1001182:	6a 66                	push   $0x66
c1001184:	e9 49 fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001189 <vector103>:
c1001189:	6a 00                	push   $0x0
c100118b:	6a 67                	push   $0x67
c100118d:	e9 40 fc ff ff       	jmp    c1000dd2 <__alltraps>

c1001192 <vector104>:
c1001192:	6a 00                	push   $0x0
c1001194:	6a 68                	push   $0x68
c1001196:	e9 37 fc ff ff       	jmp    c1000dd2 <__alltraps>

c100119b <vector105>:
c100119b:	6a 00                	push   $0x0
c100119d:	6a 69                	push   $0x69
c100119f:	e9 2e fc ff ff       	jmp    c1000dd2 <__alltraps>

c10011a4 <vector106>:
c10011a4:	6a 00                	push   $0x0
c10011a6:	6a 6a                	push   $0x6a
c10011a8:	e9 25 fc ff ff       	jmp    c1000dd2 <__alltraps>

c10011ad <vector107>:
c10011ad:	6a 00                	push   $0x0
c10011af:	6a 6b                	push   $0x6b
c10011b1:	e9 1c fc ff ff       	jmp    c1000dd2 <__alltraps>

c10011b6 <vector108>:
c10011b6:	6a 00                	push   $0x0
c10011b8:	6a 6c                	push   $0x6c
c10011ba:	e9 13 fc ff ff       	jmp    c1000dd2 <__alltraps>

c10011bf <vector109>:
c10011bf:	6a 00                	push   $0x0
c10011c1:	6a 6d                	push   $0x6d
c10011c3:	e9 0a fc ff ff       	jmp    c1000dd2 <__alltraps>

c10011c8 <vector110>:
c10011c8:	6a 00                	push   $0x0
c10011ca:	6a 6e                	push   $0x6e
c10011cc:	e9 01 fc ff ff       	jmp    c1000dd2 <__alltraps>

c10011d1 <vector111>:
c10011d1:	6a 00                	push   $0x0
c10011d3:	6a 6f                	push   $0x6f
c10011d5:	e9 f8 fb ff ff       	jmp    c1000dd2 <__alltraps>

c10011da <vector112>:
c10011da:	6a 00                	push   $0x0
c10011dc:	6a 70                	push   $0x70
c10011de:	e9 ef fb ff ff       	jmp    c1000dd2 <__alltraps>

c10011e3 <vector113>:
c10011e3:	6a 00                	push   $0x0
c10011e5:	6a 71                	push   $0x71
c10011e7:	e9 e6 fb ff ff       	jmp    c1000dd2 <__alltraps>

c10011ec <vector114>:
c10011ec:	6a 00                	push   $0x0
c10011ee:	6a 72                	push   $0x72
c10011f0:	e9 dd fb ff ff       	jmp    c1000dd2 <__alltraps>

c10011f5 <vector115>:
c10011f5:	6a 00                	push   $0x0
c10011f7:	6a 73                	push   $0x73
c10011f9:	e9 d4 fb ff ff       	jmp    c1000dd2 <__alltraps>

c10011fe <vector116>:
c10011fe:	6a 00                	push   $0x0
c1001200:	6a 74                	push   $0x74
c1001202:	e9 cb fb ff ff       	jmp    c1000dd2 <__alltraps>

c1001207 <vector117>:
c1001207:	6a 00                	push   $0x0
c1001209:	6a 75                	push   $0x75
c100120b:	e9 c2 fb ff ff       	jmp    c1000dd2 <__alltraps>

c1001210 <vector118>:
c1001210:	6a 00                	push   $0x0
c1001212:	6a 76                	push   $0x76
c1001214:	e9 b9 fb ff ff       	jmp    c1000dd2 <__alltraps>

c1001219 <vector119>:
c1001219:	6a 00                	push   $0x0
c100121b:	6a 77                	push   $0x77
c100121d:	e9 b0 fb ff ff       	jmp    c1000dd2 <__alltraps>

c1001222 <vector120>:
c1001222:	6a 00                	push   $0x0
c1001224:	6a 78                	push   $0x78
c1001226:	e9 a7 fb ff ff       	jmp    c1000dd2 <__alltraps>

c100122b <vector121>:
c100122b:	6a 00                	push   $0x0
c100122d:	6a 79                	push   $0x79
c100122f:	e9 9e fb ff ff       	jmp    c1000dd2 <__alltraps>

c1001234 <vector122>:
c1001234:	6a 00                	push   $0x0
c1001236:	6a 7a                	push   $0x7a
c1001238:	e9 95 fb ff ff       	jmp    c1000dd2 <__alltraps>

c100123d <vector123>:
c100123d:	6a 00                	push   $0x0
c100123f:	6a 7b                	push   $0x7b
c1001241:	e9 8c fb ff ff       	jmp    c1000dd2 <__alltraps>

c1001246 <vector124>:
c1001246:	6a 00                	push   $0x0
c1001248:	6a 7c                	push   $0x7c
c100124a:	e9 83 fb ff ff       	jmp    c1000dd2 <__alltraps>

c100124f <vector125>:
c100124f:	6a 00                	push   $0x0
c1001251:	6a 7d                	push   $0x7d
c1001253:	e9 7a fb ff ff       	jmp    c1000dd2 <__alltraps>

c1001258 <vector126>:
c1001258:	6a 00                	push   $0x0
c100125a:	6a 7e                	push   $0x7e
c100125c:	e9 71 fb ff ff       	jmp    c1000dd2 <__alltraps>

c1001261 <vector127>:
c1001261:	6a 00                	push   $0x0
c1001263:	6a 7f                	push   $0x7f
c1001265:	e9 68 fb ff ff       	jmp    c1000dd2 <__alltraps>

c100126a <vector128>:
c100126a:	6a 00                	push   $0x0
c100126c:	68 80 00 00 00       	push   $0x80
c1001271:	e9 5c fb ff ff       	jmp    c1000dd2 <__alltraps>

c1001276 <vector129>:
c1001276:	6a 00                	push   $0x0
c1001278:	68 81 00 00 00       	push   $0x81
c100127d:	e9 50 fb ff ff       	jmp    c1000dd2 <__alltraps>

c1001282 <vector130>:
c1001282:	6a 00                	push   $0x0
c1001284:	68 82 00 00 00       	push   $0x82
c1001289:	e9 44 fb ff ff       	jmp    c1000dd2 <__alltraps>

c100128e <vector131>:
c100128e:	6a 00                	push   $0x0
c1001290:	68 83 00 00 00       	push   $0x83
c1001295:	e9 38 fb ff ff       	jmp    c1000dd2 <__alltraps>

c100129a <vector132>:
c100129a:	6a 00                	push   $0x0
c100129c:	68 84 00 00 00       	push   $0x84
c10012a1:	e9 2c fb ff ff       	jmp    c1000dd2 <__alltraps>

c10012a6 <vector133>:
c10012a6:	6a 00                	push   $0x0
c10012a8:	68 85 00 00 00       	push   $0x85
c10012ad:	e9 20 fb ff ff       	jmp    c1000dd2 <__alltraps>

c10012b2 <vector134>:
c10012b2:	6a 00                	push   $0x0
c10012b4:	68 86 00 00 00       	push   $0x86
c10012b9:	e9 14 fb ff ff       	jmp    c1000dd2 <__alltraps>

c10012be <vector135>:
c10012be:	6a 00                	push   $0x0
c10012c0:	68 87 00 00 00       	push   $0x87
c10012c5:	e9 08 fb ff ff       	jmp    c1000dd2 <__alltraps>

c10012ca <vector136>:
c10012ca:	6a 00                	push   $0x0
c10012cc:	68 88 00 00 00       	push   $0x88
c10012d1:	e9 fc fa ff ff       	jmp    c1000dd2 <__alltraps>

c10012d6 <vector137>:
c10012d6:	6a 00                	push   $0x0
c10012d8:	68 89 00 00 00       	push   $0x89
c10012dd:	e9 f0 fa ff ff       	jmp    c1000dd2 <__alltraps>

c10012e2 <vector138>:
c10012e2:	6a 00                	push   $0x0
c10012e4:	68 8a 00 00 00       	push   $0x8a
c10012e9:	e9 e4 fa ff ff       	jmp    c1000dd2 <__alltraps>

c10012ee <vector139>:
c10012ee:	6a 00                	push   $0x0
c10012f0:	68 8b 00 00 00       	push   $0x8b
c10012f5:	e9 d8 fa ff ff       	jmp    c1000dd2 <__alltraps>

c10012fa <vector140>:
c10012fa:	6a 00                	push   $0x0
c10012fc:	68 8c 00 00 00       	push   $0x8c
c1001301:	e9 cc fa ff ff       	jmp    c1000dd2 <__alltraps>

c1001306 <vector141>:
c1001306:	6a 00                	push   $0x0
c1001308:	68 8d 00 00 00       	push   $0x8d
c100130d:	e9 c0 fa ff ff       	jmp    c1000dd2 <__alltraps>

c1001312 <vector142>:
c1001312:	6a 00                	push   $0x0
c1001314:	68 8e 00 00 00       	push   $0x8e
c1001319:	e9 b4 fa ff ff       	jmp    c1000dd2 <__alltraps>

c100131e <vector143>:
c100131e:	6a 00                	push   $0x0
c1001320:	68 8f 00 00 00       	push   $0x8f
c1001325:	e9 a8 fa ff ff       	jmp    c1000dd2 <__alltraps>

c100132a <vector144>:
c100132a:	6a 00                	push   $0x0
c100132c:	68 90 00 00 00       	push   $0x90
c1001331:	e9 9c fa ff ff       	jmp    c1000dd2 <__alltraps>

c1001336 <vector145>:
c1001336:	6a 00                	push   $0x0
c1001338:	68 91 00 00 00       	push   $0x91
c100133d:	e9 90 fa ff ff       	jmp    c1000dd2 <__alltraps>

c1001342 <vector146>:
c1001342:	6a 00                	push   $0x0
c1001344:	68 92 00 00 00       	push   $0x92
c1001349:	e9 84 fa ff ff       	jmp    c1000dd2 <__alltraps>

c100134e <vector147>:
c100134e:	6a 00                	push   $0x0
c1001350:	68 93 00 00 00       	push   $0x93
c1001355:	e9 78 fa ff ff       	jmp    c1000dd2 <__alltraps>

c100135a <vector148>:
c100135a:	6a 00                	push   $0x0
c100135c:	68 94 00 00 00       	push   $0x94
c1001361:	e9 6c fa ff ff       	jmp    c1000dd2 <__alltraps>

c1001366 <vector149>:
c1001366:	6a 00                	push   $0x0
c1001368:	68 95 00 00 00       	push   $0x95
c100136d:	e9 60 fa ff ff       	jmp    c1000dd2 <__alltraps>

c1001372 <vector150>:
c1001372:	6a 00                	push   $0x0
c1001374:	68 96 00 00 00       	push   $0x96
c1001379:	e9 54 fa ff ff       	jmp    c1000dd2 <__alltraps>

c100137e <vector151>:
c100137e:	6a 00                	push   $0x0
c1001380:	68 97 00 00 00       	push   $0x97
c1001385:	e9 48 fa ff ff       	jmp    c1000dd2 <__alltraps>

c100138a <vector152>:
c100138a:	6a 00                	push   $0x0
c100138c:	68 98 00 00 00       	push   $0x98
c1001391:	e9 3c fa ff ff       	jmp    c1000dd2 <__alltraps>

c1001396 <vector153>:
c1001396:	6a 00                	push   $0x0
c1001398:	68 99 00 00 00       	push   $0x99
c100139d:	e9 30 fa ff ff       	jmp    c1000dd2 <__alltraps>

c10013a2 <vector154>:
c10013a2:	6a 00                	push   $0x0
c10013a4:	68 9a 00 00 00       	push   $0x9a
c10013a9:	e9 24 fa ff ff       	jmp    c1000dd2 <__alltraps>

c10013ae <vector155>:
c10013ae:	6a 00                	push   $0x0
c10013b0:	68 9b 00 00 00       	push   $0x9b
c10013b5:	e9 18 fa ff ff       	jmp    c1000dd2 <__alltraps>

c10013ba <vector156>:
c10013ba:	6a 00                	push   $0x0
c10013bc:	68 9c 00 00 00       	push   $0x9c
c10013c1:	e9 0c fa ff ff       	jmp    c1000dd2 <__alltraps>

c10013c6 <vector157>:
c10013c6:	6a 00                	push   $0x0
c10013c8:	68 9d 00 00 00       	push   $0x9d
c10013cd:	e9 00 fa ff ff       	jmp    c1000dd2 <__alltraps>

c10013d2 <vector158>:
c10013d2:	6a 00                	push   $0x0
c10013d4:	68 9e 00 00 00       	push   $0x9e
c10013d9:	e9 f4 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c10013de <vector159>:
c10013de:	6a 00                	push   $0x0
c10013e0:	68 9f 00 00 00       	push   $0x9f
c10013e5:	e9 e8 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c10013ea <vector160>:
c10013ea:	6a 00                	push   $0x0
c10013ec:	68 a0 00 00 00       	push   $0xa0
c10013f1:	e9 dc f9 ff ff       	jmp    c1000dd2 <__alltraps>

c10013f6 <vector161>:
c10013f6:	6a 00                	push   $0x0
c10013f8:	68 a1 00 00 00       	push   $0xa1
c10013fd:	e9 d0 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c1001402 <vector162>:
c1001402:	6a 00                	push   $0x0
c1001404:	68 a2 00 00 00       	push   $0xa2
c1001409:	e9 c4 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c100140e <vector163>:
c100140e:	6a 00                	push   $0x0
c1001410:	68 a3 00 00 00       	push   $0xa3
c1001415:	e9 b8 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c100141a <vector164>:
c100141a:	6a 00                	push   $0x0
c100141c:	68 a4 00 00 00       	push   $0xa4
c1001421:	e9 ac f9 ff ff       	jmp    c1000dd2 <__alltraps>

c1001426 <vector165>:
c1001426:	6a 00                	push   $0x0
c1001428:	68 a5 00 00 00       	push   $0xa5
c100142d:	e9 a0 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c1001432 <vector166>:
c1001432:	6a 00                	push   $0x0
c1001434:	68 a6 00 00 00       	push   $0xa6
c1001439:	e9 94 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c100143e <vector167>:
c100143e:	6a 00                	push   $0x0
c1001440:	68 a7 00 00 00       	push   $0xa7
c1001445:	e9 88 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c100144a <vector168>:
c100144a:	6a 00                	push   $0x0
c100144c:	68 a8 00 00 00       	push   $0xa8
c1001451:	e9 7c f9 ff ff       	jmp    c1000dd2 <__alltraps>

c1001456 <vector169>:
c1001456:	6a 00                	push   $0x0
c1001458:	68 a9 00 00 00       	push   $0xa9
c100145d:	e9 70 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c1001462 <vector170>:
c1001462:	6a 00                	push   $0x0
c1001464:	68 aa 00 00 00       	push   $0xaa
c1001469:	e9 64 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c100146e <vector171>:
c100146e:	6a 00                	push   $0x0
c1001470:	68 ab 00 00 00       	push   $0xab
c1001475:	e9 58 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c100147a <vector172>:
c100147a:	6a 00                	push   $0x0
c100147c:	68 ac 00 00 00       	push   $0xac
c1001481:	e9 4c f9 ff ff       	jmp    c1000dd2 <__alltraps>

c1001486 <vector173>:
c1001486:	6a 00                	push   $0x0
c1001488:	68 ad 00 00 00       	push   $0xad
c100148d:	e9 40 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c1001492 <vector174>:
c1001492:	6a 00                	push   $0x0
c1001494:	68 ae 00 00 00       	push   $0xae
c1001499:	e9 34 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c100149e <vector175>:
c100149e:	6a 00                	push   $0x0
c10014a0:	68 af 00 00 00       	push   $0xaf
c10014a5:	e9 28 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c10014aa <vector176>:
c10014aa:	6a 00                	push   $0x0
c10014ac:	68 b0 00 00 00       	push   $0xb0
c10014b1:	e9 1c f9 ff ff       	jmp    c1000dd2 <__alltraps>

c10014b6 <vector177>:
c10014b6:	6a 00                	push   $0x0
c10014b8:	68 b1 00 00 00       	push   $0xb1
c10014bd:	e9 10 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c10014c2 <vector178>:
c10014c2:	6a 00                	push   $0x0
c10014c4:	68 b2 00 00 00       	push   $0xb2
c10014c9:	e9 04 f9 ff ff       	jmp    c1000dd2 <__alltraps>

c10014ce <vector179>:
c10014ce:	6a 00                	push   $0x0
c10014d0:	68 b3 00 00 00       	push   $0xb3
c10014d5:	e9 f8 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c10014da <vector180>:
c10014da:	6a 00                	push   $0x0
c10014dc:	68 b4 00 00 00       	push   $0xb4
c10014e1:	e9 ec f8 ff ff       	jmp    c1000dd2 <__alltraps>

c10014e6 <vector181>:
c10014e6:	6a 00                	push   $0x0
c10014e8:	68 b5 00 00 00       	push   $0xb5
c10014ed:	e9 e0 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c10014f2 <vector182>:
c10014f2:	6a 00                	push   $0x0
c10014f4:	68 b6 00 00 00       	push   $0xb6
c10014f9:	e9 d4 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c10014fe <vector183>:
c10014fe:	6a 00                	push   $0x0
c1001500:	68 b7 00 00 00       	push   $0xb7
c1001505:	e9 c8 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c100150a <vector184>:
c100150a:	6a 00                	push   $0x0
c100150c:	68 b8 00 00 00       	push   $0xb8
c1001511:	e9 bc f8 ff ff       	jmp    c1000dd2 <__alltraps>

c1001516 <vector185>:
c1001516:	6a 00                	push   $0x0
c1001518:	68 b9 00 00 00       	push   $0xb9
c100151d:	e9 b0 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c1001522 <vector186>:
c1001522:	6a 00                	push   $0x0
c1001524:	68 ba 00 00 00       	push   $0xba
c1001529:	e9 a4 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c100152e <vector187>:
c100152e:	6a 00                	push   $0x0
c1001530:	68 bb 00 00 00       	push   $0xbb
c1001535:	e9 98 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c100153a <vector188>:
c100153a:	6a 00                	push   $0x0
c100153c:	68 bc 00 00 00       	push   $0xbc
c1001541:	e9 8c f8 ff ff       	jmp    c1000dd2 <__alltraps>

c1001546 <vector189>:
c1001546:	6a 00                	push   $0x0
c1001548:	68 bd 00 00 00       	push   $0xbd
c100154d:	e9 80 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c1001552 <vector190>:
c1001552:	6a 00                	push   $0x0
c1001554:	68 be 00 00 00       	push   $0xbe
c1001559:	e9 74 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c100155e <vector191>:
c100155e:	6a 00                	push   $0x0
c1001560:	68 bf 00 00 00       	push   $0xbf
c1001565:	e9 68 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c100156a <vector192>:
c100156a:	6a 00                	push   $0x0
c100156c:	68 c0 00 00 00       	push   $0xc0
c1001571:	e9 5c f8 ff ff       	jmp    c1000dd2 <__alltraps>

c1001576 <vector193>:
c1001576:	6a 00                	push   $0x0
c1001578:	68 c1 00 00 00       	push   $0xc1
c100157d:	e9 50 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c1001582 <vector194>:
c1001582:	6a 00                	push   $0x0
c1001584:	68 c2 00 00 00       	push   $0xc2
c1001589:	e9 44 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c100158e <vector195>:
c100158e:	6a 00                	push   $0x0
c1001590:	68 c3 00 00 00       	push   $0xc3
c1001595:	e9 38 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c100159a <vector196>:
c100159a:	6a 00                	push   $0x0
c100159c:	68 c4 00 00 00       	push   $0xc4
c10015a1:	e9 2c f8 ff ff       	jmp    c1000dd2 <__alltraps>

c10015a6 <vector197>:
c10015a6:	6a 00                	push   $0x0
c10015a8:	68 c5 00 00 00       	push   $0xc5
c10015ad:	e9 20 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c10015b2 <vector198>:
c10015b2:	6a 00                	push   $0x0
c10015b4:	68 c6 00 00 00       	push   $0xc6
c10015b9:	e9 14 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c10015be <vector199>:
c10015be:	6a 00                	push   $0x0
c10015c0:	68 c7 00 00 00       	push   $0xc7
c10015c5:	e9 08 f8 ff ff       	jmp    c1000dd2 <__alltraps>

c10015ca <vector200>:
c10015ca:	6a 00                	push   $0x0
c10015cc:	68 c8 00 00 00       	push   $0xc8
c10015d1:	e9 fc f7 ff ff       	jmp    c1000dd2 <__alltraps>

c10015d6 <vector201>:
c10015d6:	6a 00                	push   $0x0
c10015d8:	68 c9 00 00 00       	push   $0xc9
c10015dd:	e9 f0 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c10015e2 <vector202>:
c10015e2:	6a 00                	push   $0x0
c10015e4:	68 ca 00 00 00       	push   $0xca
c10015e9:	e9 e4 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c10015ee <vector203>:
c10015ee:	6a 00                	push   $0x0
c10015f0:	68 cb 00 00 00       	push   $0xcb
c10015f5:	e9 d8 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c10015fa <vector204>:
c10015fa:	6a 00                	push   $0x0
c10015fc:	68 cc 00 00 00       	push   $0xcc
c1001601:	e9 cc f7 ff ff       	jmp    c1000dd2 <__alltraps>

c1001606 <vector205>:
c1001606:	6a 00                	push   $0x0
c1001608:	68 cd 00 00 00       	push   $0xcd
c100160d:	e9 c0 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c1001612 <vector206>:
c1001612:	6a 00                	push   $0x0
c1001614:	68 ce 00 00 00       	push   $0xce
c1001619:	e9 b4 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c100161e <vector207>:
c100161e:	6a 00                	push   $0x0
c1001620:	68 cf 00 00 00       	push   $0xcf
c1001625:	e9 a8 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c100162a <vector208>:
c100162a:	6a 00                	push   $0x0
c100162c:	68 d0 00 00 00       	push   $0xd0
c1001631:	e9 9c f7 ff ff       	jmp    c1000dd2 <__alltraps>

c1001636 <vector209>:
c1001636:	6a 00                	push   $0x0
c1001638:	68 d1 00 00 00       	push   $0xd1
c100163d:	e9 90 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c1001642 <vector210>:
c1001642:	6a 00                	push   $0x0
c1001644:	68 d2 00 00 00       	push   $0xd2
c1001649:	e9 84 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c100164e <vector211>:
c100164e:	6a 00                	push   $0x0
c1001650:	68 d3 00 00 00       	push   $0xd3
c1001655:	e9 78 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c100165a <vector212>:
c100165a:	6a 00                	push   $0x0
c100165c:	68 d4 00 00 00       	push   $0xd4
c1001661:	e9 6c f7 ff ff       	jmp    c1000dd2 <__alltraps>

c1001666 <vector213>:
c1001666:	6a 00                	push   $0x0
c1001668:	68 d5 00 00 00       	push   $0xd5
c100166d:	e9 60 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c1001672 <vector214>:
c1001672:	6a 00                	push   $0x0
c1001674:	68 d6 00 00 00       	push   $0xd6
c1001679:	e9 54 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c100167e <vector215>:
c100167e:	6a 00                	push   $0x0
c1001680:	68 d7 00 00 00       	push   $0xd7
c1001685:	e9 48 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c100168a <vector216>:
c100168a:	6a 00                	push   $0x0
c100168c:	68 d8 00 00 00       	push   $0xd8
c1001691:	e9 3c f7 ff ff       	jmp    c1000dd2 <__alltraps>

c1001696 <vector217>:
c1001696:	6a 00                	push   $0x0
c1001698:	68 d9 00 00 00       	push   $0xd9
c100169d:	e9 30 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c10016a2 <vector218>:
c10016a2:	6a 00                	push   $0x0
c10016a4:	68 da 00 00 00       	push   $0xda
c10016a9:	e9 24 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c10016ae <vector219>:
c10016ae:	6a 00                	push   $0x0
c10016b0:	68 db 00 00 00       	push   $0xdb
c10016b5:	e9 18 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c10016ba <vector220>:
c10016ba:	6a 00                	push   $0x0
c10016bc:	68 dc 00 00 00       	push   $0xdc
c10016c1:	e9 0c f7 ff ff       	jmp    c1000dd2 <__alltraps>

c10016c6 <vector221>:
c10016c6:	6a 00                	push   $0x0
c10016c8:	68 dd 00 00 00       	push   $0xdd
c10016cd:	e9 00 f7 ff ff       	jmp    c1000dd2 <__alltraps>

c10016d2 <vector222>:
c10016d2:	6a 00                	push   $0x0
c10016d4:	68 de 00 00 00       	push   $0xde
c10016d9:	e9 f4 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c10016de <vector223>:
c10016de:	6a 00                	push   $0x0
c10016e0:	68 df 00 00 00       	push   $0xdf
c10016e5:	e9 e8 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c10016ea <vector224>:
c10016ea:	6a 00                	push   $0x0
c10016ec:	68 e0 00 00 00       	push   $0xe0
c10016f1:	e9 dc f6 ff ff       	jmp    c1000dd2 <__alltraps>

c10016f6 <vector225>:
c10016f6:	6a 00                	push   $0x0
c10016f8:	68 e1 00 00 00       	push   $0xe1
c10016fd:	e9 d0 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c1001702 <vector226>:
c1001702:	6a 00                	push   $0x0
c1001704:	68 e2 00 00 00       	push   $0xe2
c1001709:	e9 c4 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c100170e <vector227>:
c100170e:	6a 00                	push   $0x0
c1001710:	68 e3 00 00 00       	push   $0xe3
c1001715:	e9 b8 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c100171a <vector228>:
c100171a:	6a 00                	push   $0x0
c100171c:	68 e4 00 00 00       	push   $0xe4
c1001721:	e9 ac f6 ff ff       	jmp    c1000dd2 <__alltraps>

c1001726 <vector229>:
c1001726:	6a 00                	push   $0x0
c1001728:	68 e5 00 00 00       	push   $0xe5
c100172d:	e9 a0 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c1001732 <vector230>:
c1001732:	6a 00                	push   $0x0
c1001734:	68 e6 00 00 00       	push   $0xe6
c1001739:	e9 94 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c100173e <vector231>:
c100173e:	6a 00                	push   $0x0
c1001740:	68 e7 00 00 00       	push   $0xe7
c1001745:	e9 88 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c100174a <vector232>:
c100174a:	6a 00                	push   $0x0
c100174c:	68 e8 00 00 00       	push   $0xe8
c1001751:	e9 7c f6 ff ff       	jmp    c1000dd2 <__alltraps>

c1001756 <vector233>:
c1001756:	6a 00                	push   $0x0
c1001758:	68 e9 00 00 00       	push   $0xe9
c100175d:	e9 70 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c1001762 <vector234>:
c1001762:	6a 00                	push   $0x0
c1001764:	68 ea 00 00 00       	push   $0xea
c1001769:	e9 64 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c100176e <vector235>:
c100176e:	6a 00                	push   $0x0
c1001770:	68 eb 00 00 00       	push   $0xeb
c1001775:	e9 58 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c100177a <vector236>:
c100177a:	6a 00                	push   $0x0
c100177c:	68 ec 00 00 00       	push   $0xec
c1001781:	e9 4c f6 ff ff       	jmp    c1000dd2 <__alltraps>

c1001786 <vector237>:
c1001786:	6a 00                	push   $0x0
c1001788:	68 ed 00 00 00       	push   $0xed
c100178d:	e9 40 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c1001792 <vector238>:
c1001792:	6a 00                	push   $0x0
c1001794:	68 ee 00 00 00       	push   $0xee
c1001799:	e9 34 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c100179e <vector239>:
c100179e:	6a 00                	push   $0x0
c10017a0:	68 ef 00 00 00       	push   $0xef
c10017a5:	e9 28 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c10017aa <vector240>:
c10017aa:	6a 00                	push   $0x0
c10017ac:	68 f0 00 00 00       	push   $0xf0
c10017b1:	e9 1c f6 ff ff       	jmp    c1000dd2 <__alltraps>

c10017b6 <vector241>:
c10017b6:	6a 00                	push   $0x0
c10017b8:	68 f1 00 00 00       	push   $0xf1
c10017bd:	e9 10 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c10017c2 <vector242>:
c10017c2:	6a 00                	push   $0x0
c10017c4:	68 f2 00 00 00       	push   $0xf2
c10017c9:	e9 04 f6 ff ff       	jmp    c1000dd2 <__alltraps>

c10017ce <vector243>:
c10017ce:	6a 00                	push   $0x0
c10017d0:	68 f3 00 00 00       	push   $0xf3
c10017d5:	e9 f8 f5 ff ff       	jmp    c1000dd2 <__alltraps>

c10017da <vector244>:
c10017da:	6a 00                	push   $0x0
c10017dc:	68 f4 00 00 00       	push   $0xf4
c10017e1:	e9 ec f5 ff ff       	jmp    c1000dd2 <__alltraps>

c10017e6 <vector245>:
c10017e6:	6a 00                	push   $0x0
c10017e8:	68 f5 00 00 00       	push   $0xf5
c10017ed:	e9 e0 f5 ff ff       	jmp    c1000dd2 <__alltraps>

c10017f2 <vector246>:
c10017f2:	6a 00                	push   $0x0
c10017f4:	68 f6 00 00 00       	push   $0xf6
c10017f9:	e9 d4 f5 ff ff       	jmp    c1000dd2 <__alltraps>

c10017fe <vector247>:
c10017fe:	6a 00                	push   $0x0
c1001800:	68 f7 00 00 00       	push   $0xf7
c1001805:	e9 c8 f5 ff ff       	jmp    c1000dd2 <__alltraps>

c100180a <vector248>:
c100180a:	6a 00                	push   $0x0
c100180c:	68 f8 00 00 00       	push   $0xf8
c1001811:	e9 bc f5 ff ff       	jmp    c1000dd2 <__alltraps>

c1001816 <vector249>:
c1001816:	6a 00                	push   $0x0
c1001818:	68 f9 00 00 00       	push   $0xf9
c100181d:	e9 b0 f5 ff ff       	jmp    c1000dd2 <__alltraps>

c1001822 <vector250>:
c1001822:	6a 00                	push   $0x0
c1001824:	68 fa 00 00 00       	push   $0xfa
c1001829:	e9 a4 f5 ff ff       	jmp    c1000dd2 <__alltraps>

c100182e <vector251>:
c100182e:	6a 00                	push   $0x0
c1001830:	68 fb 00 00 00       	push   $0xfb
c1001835:	e9 98 f5 ff ff       	jmp    c1000dd2 <__alltraps>

c100183a <vector252>:
c100183a:	6a 00                	push   $0x0
c100183c:	68 fc 00 00 00       	push   $0xfc
c1001841:	e9 8c f5 ff ff       	jmp    c1000dd2 <__alltraps>

c1001846 <vector253>:
c1001846:	6a 00                	push   $0x0
c1001848:	68 fd 00 00 00       	push   $0xfd
c100184d:	e9 80 f5 ff ff       	jmp    c1000dd2 <__alltraps>

c1001852 <vector254>:
c1001852:	6a 00                	push   $0x0
c1001854:	68 fe 00 00 00       	push   $0xfe
c1001859:	e9 74 f5 ff ff       	jmp    c1000dd2 <__alltraps>

c100185e <vector255>:
c100185e:	6a 00                	push   $0x0
c1001860:	68 ff 00 00 00       	push   $0xff
c1001865:	e9 68 f5 ff ff       	jmp    c1000dd2 <__alltraps>

c100186a <hash32>:
c100186a:	55                   	push   %ebp
c100186b:	89 e5                	mov    %esp,%ebp
c100186d:	83 ec 10             	sub    $0x10,%esp
c1001870:	8b 45 08             	mov    0x8(%ebp),%eax
c1001873:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1001879:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100187c:	b8 20 00 00 00       	mov    $0x20,%eax
c1001881:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001884:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001887:	89 c1                	mov    %eax,%ecx
c1001889:	d3 ea                	shr    %cl,%edx
c100188b:	89 d0                	mov    %edx,%eax
c100188d:	c9                   	leave  
c100188e:	c3                   	ret    

c100188f <sys_exit>:
c100188f:	55                   	push   %ebp
c1001890:	89 e5                	mov    %esp,%ebp
c1001892:	83 ec 10             	sub    $0x10,%esp
c1001895:	8b 45 08             	mov    0x8(%ebp),%eax
c1001898:	8b 00                	mov    (%eax),%eax
c100189a:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100189d:	b8 00 00 00 00       	mov    $0x0,%eax
c10018a2:	c9                   	leave  
c10018a3:	c3                   	ret    

c10018a4 <sys_fork>:
c10018a4:	55                   	push   %ebp
c10018a5:	89 e5                	mov    %esp,%ebp
c10018a7:	83 ec 18             	sub    $0x18,%esp
c10018aa:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10018af:	8b 40 34             	mov    0x34(%eax),%eax
c10018b2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10018b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10018b8:	8b 40 44             	mov    0x44(%eax),%eax
c10018bb:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10018be:	83 ec 04             	sub    $0x4,%esp
c10018c1:	ff 75 f4             	pushl  -0xc(%ebp)
c10018c4:	ff 75 f0             	pushl  -0x10(%ebp)
c10018c7:	6a 00                	push   $0x0
c10018c9:	e8 67 1f 00 00       	call   c1003835 <do_fork>
c10018ce:	83 c4 10             	add    $0x10,%esp
c10018d1:	c9                   	leave  
c10018d2:	c3                   	ret    

c10018d3 <sys_wait>:
c10018d3:	55                   	push   %ebp
c10018d4:	89 e5                	mov    %esp,%ebp
c10018d6:	83 ec 10             	sub    $0x10,%esp
c10018d9:	8b 45 08             	mov    0x8(%ebp),%eax
c10018dc:	8b 00                	mov    (%eax),%eax
c10018de:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10018e1:	8b 45 08             	mov    0x8(%ebp),%eax
c10018e4:	83 c0 04             	add    $0x4,%eax
c10018e7:	8b 00                	mov    (%eax),%eax
c10018e9:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10018ec:	90                   	nop
c10018ed:	c9                   	leave  
c10018ee:	c3                   	ret    

c10018ef <sys_exec>:
c10018ef:	55                   	push   %ebp
c10018f0:	89 e5                	mov    %esp,%ebp
c10018f2:	83 ec 18             	sub    $0x18,%esp
c10018f5:	8b 45 08             	mov    0x8(%ebp),%eax
c10018f8:	8b 00                	mov    (%eax),%eax
c10018fa:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10018fd:	8b 45 08             	mov    0x8(%ebp),%eax
c1001900:	83 c0 04             	add    $0x4,%eax
c1001903:	8b 00                	mov    (%eax),%eax
c1001905:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001908:	83 ec 08             	sub    $0x8,%esp
c100190b:	ff 75 f0             	pushl  -0x10(%ebp)
c100190e:	ff 75 f4             	pushl  -0xc(%ebp)
c1001911:	e8 f2 2b 00 00       	call   c1004508 <sys_execv>
c1001916:	83 c4 10             	add    $0x10,%esp
c1001919:	c9                   	leave  
c100191a:	c3                   	ret    

c100191b <sys_yield>:
c100191b:	55                   	push   %ebp
c100191c:	89 e5                	mov    %esp,%ebp
c100191e:	90                   	nop
c100191f:	5d                   	pop    %ebp
c1001920:	c3                   	ret    

c1001921 <sys_kill>:
c1001921:	55                   	push   %ebp
c1001922:	89 e5                	mov    %esp,%ebp
c1001924:	83 ec 10             	sub    $0x10,%esp
c1001927:	8b 45 08             	mov    0x8(%ebp),%eax
c100192a:	8b 00                	mov    (%eax),%eax
c100192c:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100192f:	90                   	nop
c1001930:	c9                   	leave  
c1001931:	c3                   	ret    

c1001932 <sys_getpid>:
c1001932:	55                   	push   %ebp
c1001933:	89 e5                	mov    %esp,%ebp
c1001935:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100193a:	8b 40 0c             	mov    0xc(%eax),%eax
c100193d:	5d                   	pop    %ebp
c100193e:	c3                   	ret    

c100193f <sys_print_char>:
c100193f:	55                   	push   %ebp
c1001940:	89 e5                	mov    %esp,%ebp
c1001942:	83 ec 18             	sub    $0x18,%esp
c1001945:	8b 45 08             	mov    0x8(%ebp),%eax
c1001948:	8b 00                	mov    (%eax),%eax
c100194a:	88 45 f7             	mov    %al,-0x9(%ebp)
c100194d:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1001951:	83 ec 04             	sub    $0x4,%esp
c1001954:	6a 02                	push   $0x2
c1001956:	6a 00                	push   $0x0
c1001958:	50                   	push   %eax
c1001959:	e8 d9 32 00 00       	call   c1004c37 <print_char>
c100195e:	83 c4 10             	add    $0x10,%esp
c1001961:	b8 00 00 00 00       	mov    $0x0,%eax
c1001966:	c9                   	leave  
c1001967:	c3                   	ret    

c1001968 <sys_print_string>:
c1001968:	55                   	push   %ebp
c1001969:	89 e5                	mov    %esp,%ebp
c100196b:	83 ec 18             	sub    $0x18,%esp
c100196e:	8b 45 08             	mov    0x8(%ebp),%eax
c1001971:	8b 00                	mov    (%eax),%eax
c1001973:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001976:	83 ec 04             	sub    $0x4,%esp
c1001979:	6a 02                	push   $0x2
c100197b:	6a 00                	push   $0x0
c100197d:	ff 75 f4             	pushl  -0xc(%ebp)
c1001980:	e8 cf 33 00 00       	call   c1004d54 <print_string>
c1001985:	83 c4 10             	add    $0x10,%esp
c1001988:	b8 00 00 00 00       	mov    $0x0,%eax
c100198d:	c9                   	leave  
c100198e:	c3                   	ret    

c100198f <sys_print_num>:
c100198f:	55                   	push   %ebp
c1001990:	89 e5                	mov    %esp,%ebp
c1001992:	53                   	push   %ebx
c1001993:	83 ec 14             	sub    $0x14,%esp
c1001996:	8b 45 08             	mov    0x8(%ebp),%eax
c1001999:	8b 00                	mov    (%eax),%eax
c100199b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100199e:	8b 45 08             	mov    0x8(%ebp),%eax
c10019a1:	83 c0 04             	add    $0x4,%eax
c10019a4:	8b 00                	mov    (%eax),%eax
c10019a6:	88 45 f3             	mov    %al,-0xd(%ebp)
c10019a9:	8b 45 08             	mov    0x8(%ebp),%eax
c10019ac:	83 c0 08             	add    $0x8,%eax
c10019af:	8b 00                	mov    (%eax),%eax
c10019b1:	88 45 f2             	mov    %al,-0xe(%ebp)
c10019b4:	8b 45 08             	mov    0x8(%ebp),%eax
c10019b7:	83 c0 0c             	add    $0xc,%eax
c10019ba:	8b 00                	mov    (%eax),%eax
c10019bc:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10019bf:	0f be 5d f2          	movsbl -0xe(%ebp),%ebx
c10019c3:	0f b6 4d f3          	movzbl -0xd(%ebp),%ecx
c10019c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10019ca:	99                   	cltd   
c10019cb:	83 ec 04             	sub    $0x4,%esp
c10019ce:	ff 75 ec             	pushl  -0x14(%ebp)
c10019d1:	53                   	push   %ebx
c10019d2:	51                   	push   %ecx
c10019d3:	6a 02                	push   $0x2
c10019d5:	6a 00                	push   $0x0
c10019d7:	52                   	push   %edx
c10019d8:	50                   	push   %eax
c10019d9:	e8 ad 33 00 00       	call   c1004d8b <print_num>
c10019de:	83 c4 20             	add    $0x20,%esp
c10019e1:	b8 00 00 00 00       	mov    $0x0,%eax
c10019e6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10019e9:	c9                   	leave  
c10019ea:	c3                   	ret    

c10019eb <sys_backtrace>:
c10019eb:	55                   	push   %ebp
c10019ec:	89 e5                	mov    %esp,%ebp
c10019ee:	83 ec 08             	sub    $0x8,%esp
c10019f1:	e8 14 35 00 00       	call   c1004f0a <backtrace>
c10019f6:	b8 00 00 00 00       	mov    $0x0,%eax
c10019fb:	c9                   	leave  
c10019fc:	c3                   	ret    

c10019fd <sys_pgdir>:
c10019fd:	55                   	push   %ebp
c10019fe:	89 e5                	mov    %esp,%ebp
c1001a00:	b8 00 00 00 00       	mov    $0x0,%eax
c1001a05:	5d                   	pop    %ebp
c1001a06:	c3                   	ret    

c1001a07 <sys_fdread>:
c1001a07:	55                   	push   %ebp
c1001a08:	89 e5                	mov    %esp,%ebp
c1001a0a:	83 ec 18             	sub    $0x18,%esp
c1001a0d:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a10:	8b 00                	mov    (%eax),%eax
c1001a12:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a15:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a18:	83 c0 04             	add    $0x4,%eax
c1001a1b:	8b 00                	mov    (%eax),%eax
c1001a1d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001a20:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a23:	8b 40 08             	mov    0x8(%eax),%eax
c1001a26:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001a29:	83 ec 04             	sub    $0x4,%esp
c1001a2c:	ff 75 ec             	pushl  -0x14(%ebp)
c1001a2f:	ff 75 f0             	pushl  -0x10(%ebp)
c1001a32:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a35:	e8 a5 4f 00 00       	call   c10069df <sys_read>
c1001a3a:	83 c4 10             	add    $0x10,%esp
c1001a3d:	c9                   	leave  
c1001a3e:	c3                   	ret    

c1001a3f <syscall_open>:
c1001a3f:	55                   	push   %ebp
c1001a40:	89 e5                	mov    %esp,%ebp
c1001a42:	83 ec 18             	sub    $0x18,%esp
c1001a45:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a48:	8b 00                	mov    (%eax),%eax
c1001a4a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a4d:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a50:	83 c0 04             	add    $0x4,%eax
c1001a53:	8b 00                	mov    (%eax),%eax
c1001a55:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001a58:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001a5c:	83 ec 08             	sub    $0x8,%esp
c1001a5f:	50                   	push   %eax
c1001a60:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a63:	e8 60 4b 00 00       	call   c10065c8 <sys_open>
c1001a68:	83 c4 10             	add    $0x10,%esp
c1001a6b:	c9                   	leave  
c1001a6c:	c3                   	ret    

c1001a6d <syscall_close>:
c1001a6d:	55                   	push   %ebp
c1001a6e:	89 e5                	mov    %esp,%ebp
c1001a70:	83 ec 18             	sub    $0x18,%esp
c1001a73:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a76:	8b 00                	mov    (%eax),%eax
c1001a78:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a7b:	83 ec 0c             	sub    $0xc,%esp
c1001a7e:	ff 75 f4             	pushl  -0xc(%ebp)
c1001a81:	e8 0a 4e 00 00       	call   c1006890 <sys_close>
c1001a86:	83 c4 10             	add    $0x10,%esp
c1001a89:	c9                   	leave  
c1001a8a:	c3                   	ret    

c1001a8b <syscall_write>:
c1001a8b:	55                   	push   %ebp
c1001a8c:	89 e5                	mov    %esp,%ebp
c1001a8e:	83 ec 18             	sub    $0x18,%esp
c1001a91:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a94:	8b 00                	mov    (%eax),%eax
c1001a96:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001a99:	8b 45 08             	mov    0x8(%ebp),%eax
c1001a9c:	83 c0 04             	add    $0x4,%eax
c1001a9f:	8b 00                	mov    (%eax),%eax
c1001aa1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001aa4:	8b 45 08             	mov    0x8(%ebp),%eax
c1001aa7:	8b 40 08             	mov    0x8(%eax),%eax
c1001aaa:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001aad:	83 ec 04             	sub    $0x4,%esp
c1001ab0:	ff 75 ec             	pushl  -0x14(%ebp)
c1001ab3:	ff 75 f0             	pushl  -0x10(%ebp)
c1001ab6:	ff 75 f4             	pushl  -0xc(%ebp)
c1001ab9:	e8 2e 4e 00 00       	call   c10068ec <sys_write>
c1001abe:	83 c4 10             	add    $0x10,%esp
c1001ac1:	c9                   	leave  
c1001ac2:	c3                   	ret    

c1001ac3 <syscall_lseek>:
c1001ac3:	55                   	push   %ebp
c1001ac4:	89 e5                	mov    %esp,%ebp
c1001ac6:	83 ec 18             	sub    $0x18,%esp
c1001ac9:	8b 45 08             	mov    0x8(%ebp),%eax
c1001acc:	8b 00                	mov    (%eax),%eax
c1001ace:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001ad1:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ad4:	83 c0 04             	add    $0x4,%eax
c1001ad7:	8b 00                	mov    (%eax),%eax
c1001ad9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001adc:	8b 45 08             	mov    0x8(%ebp),%eax
c1001adf:	83 c0 08             	add    $0x8,%eax
c1001ae2:	8b 00                	mov    (%eax),%eax
c1001ae4:	88 45 ef             	mov    %al,-0x11(%ebp)
c1001ae7:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1001aeb:	83 ec 04             	sub    $0x4,%esp
c1001aee:	50                   	push   %eax
c1001aef:	ff 75 f0             	pushl  -0x10(%ebp)
c1001af2:	ff 75 f4             	pushl  -0xc(%ebp)
c1001af5:	e8 dd 4f 00 00       	call   c1006ad7 <sys_lseek>
c1001afa:	83 c4 10             	add    $0x10,%esp
c1001afd:	c9                   	leave  
c1001afe:	c3                   	ret    

c1001aff <syscall_unlink>:
c1001aff:	55                   	push   %ebp
c1001b00:	89 e5                	mov    %esp,%ebp
c1001b02:	83 ec 18             	sub    $0x18,%esp
c1001b05:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b08:	8b 00                	mov    (%eax),%eax
c1001b0a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b0d:	83 ec 0c             	sub    $0xc,%esp
c1001b10:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b13:	e8 ab 50 00 00       	call   c1006bc3 <sys_unlink>
c1001b18:	83 c4 10             	add    $0x10,%esp
c1001b1b:	c9                   	leave  
c1001b1c:	c3                   	ret    

c1001b1d <syscall_mkdir>:
c1001b1d:	55                   	push   %ebp
c1001b1e:	89 e5                	mov    %esp,%ebp
c1001b20:	83 ec 18             	sub    $0x18,%esp
c1001b23:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b26:	8b 00                	mov    (%eax),%eax
c1001b28:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b2b:	83 ec 0c             	sub    $0xc,%esp
c1001b2e:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b31:	e8 ad 52 00 00       	call   c1006de3 <sys_mkdir>
c1001b36:	83 c4 10             	add    $0x10,%esp
c1001b39:	c9                   	leave  
c1001b3a:	c3                   	ret    

c1001b3b <syscall_rmdir>:
c1001b3b:	55                   	push   %ebp
c1001b3c:	89 e5                	mov    %esp,%ebp
c1001b3e:	83 ec 18             	sub    $0x18,%esp
c1001b41:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b44:	8b 00                	mov    (%eax),%eax
c1001b46:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b49:	83 ec 0c             	sub    $0xc,%esp
c1001b4c:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b4f:	e8 48 58 00 00       	call   c100739c <sys_rmdir>
c1001b54:	83 c4 10             	add    $0x10,%esp
c1001b57:	c9                   	leave  
c1001b58:	c3                   	ret    

c1001b59 <syscall_rewinddir>:
c1001b59:	55                   	push   %ebp
c1001b5a:	89 e5                	mov    %esp,%ebp
c1001b5c:	83 ec 18             	sub    $0x18,%esp
c1001b5f:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b62:	8b 00                	mov    (%eax),%eax
c1001b64:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b67:	83 ec 0c             	sub    $0xc,%esp
c1001b6a:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b6d:	e8 1a 58 00 00       	call   c100738c <sys_rewinddir>
c1001b72:	83 c4 10             	add    $0x10,%esp
c1001b75:	b8 00 00 00 00       	mov    $0x0,%eax
c1001b7a:	c9                   	leave  
c1001b7b:	c3                   	ret    

c1001b7c <syscall_getcwd>:
c1001b7c:	55                   	push   %ebp
c1001b7d:	89 e5                	mov    %esp,%ebp
c1001b7f:	83 ec 18             	sub    $0x18,%esp
c1001b82:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b85:	8b 00                	mov    (%eax),%eax
c1001b87:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001b8a:	8b 45 08             	mov    0x8(%ebp),%eax
c1001b8d:	8b 40 04             	mov    0x4(%eax),%eax
c1001b90:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001b93:	83 ec 08             	sub    $0x8,%esp
c1001b96:	ff 75 f0             	pushl  -0x10(%ebp)
c1001b99:	ff 75 f4             	pushl  -0xc(%ebp)
c1001b9c:	e8 7a 5b 00 00       	call   c100771b <sys_getcwd>
c1001ba1:	83 c4 10             	add    $0x10,%esp
c1001ba4:	c9                   	leave  
c1001ba5:	c3                   	ret    

c1001ba6 <syscall_chdir>:
c1001ba6:	55                   	push   %ebp
c1001ba7:	89 e5                	mov    %esp,%ebp
c1001ba9:	83 ec 18             	sub    $0x18,%esp
c1001bac:	8b 45 08             	mov    0x8(%ebp),%eax
c1001baf:	8b 00                	mov    (%eax),%eax
c1001bb1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bb4:	83 ec 0c             	sub    $0xc,%esp
c1001bb7:	ff 75 f4             	pushl  -0xc(%ebp)
c1001bba:	e8 75 5e 00 00       	call   c1007a34 <sys_chdir>
c1001bbf:	83 c4 10             	add    $0x10,%esp
c1001bc2:	c9                   	leave  
c1001bc3:	c3                   	ret    

c1001bc4 <syscall_stat>:
c1001bc4:	55                   	push   %ebp
c1001bc5:	89 e5                	mov    %esp,%ebp
c1001bc7:	83 ec 18             	sub    $0x18,%esp
c1001bca:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bcd:	8b 00                	mov    (%eax),%eax
c1001bcf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bd2:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bd5:	83 c0 04             	add    $0x4,%eax
c1001bd8:	8b 00                	mov    (%eax),%eax
c1001bda:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001bdd:	83 ec 08             	sub    $0x8,%esp
c1001be0:	ff 75 f0             	pushl  -0x10(%ebp)
c1001be3:	ff 75 f4             	pushl  -0xc(%ebp)
c1001be6:	e8 1d 5d 00 00       	call   c1007908 <sys_stat>
c1001beb:	83 c4 10             	add    $0x10,%esp
c1001bee:	c9                   	leave  
c1001bef:	c3                   	ret    

c1001bf0 <syscall_opendir>:
c1001bf0:	55                   	push   %ebp
c1001bf1:	89 e5                	mov    %esp,%ebp
c1001bf3:	83 ec 18             	sub    $0x18,%esp
c1001bf6:	8b 45 08             	mov    0x8(%ebp),%eax
c1001bf9:	8b 00                	mov    (%eax),%eax
c1001bfb:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001bfe:	83 ec 0c             	sub    $0xc,%esp
c1001c01:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c04:	e8 14 56 00 00       	call   c100721d <sys_opendir>
c1001c09:	83 c4 10             	add    $0x10,%esp
c1001c0c:	c9                   	leave  
c1001c0d:	c3                   	ret    

c1001c0e <syscall_closedir>:
c1001c0e:	55                   	push   %ebp
c1001c0f:	89 e5                	mov    %esp,%ebp
c1001c11:	83 ec 18             	sub    $0x18,%esp
c1001c14:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c17:	8b 00                	mov    (%eax),%eax
c1001c19:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c1c:	83 ec 0c             	sub    $0xc,%esp
c1001c1f:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c22:	e8 03 57 00 00       	call   c100732a <sys_closedir>
c1001c27:	83 c4 10             	add    $0x10,%esp
c1001c2a:	c9                   	leave  
c1001c2b:	c3                   	ret    

c1001c2c <syscall_readdir>:
c1001c2c:	55                   	push   %ebp
c1001c2d:	89 e5                	mov    %esp,%ebp
c1001c2f:	83 ec 18             	sub    $0x18,%esp
c1001c32:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c35:	8b 00                	mov    (%eax),%eax
c1001c37:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c3a:	83 ec 0c             	sub    $0xc,%esp
c1001c3d:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c40:	e8 12 57 00 00       	call   c1007357 <sys_readdir>
c1001c45:	83 c4 10             	add    $0x10,%esp
c1001c48:	c9                   	leave  
c1001c49:	c3                   	ret    

c1001c4a <syscall_print_task>:
c1001c4a:	55                   	push   %ebp
c1001c4b:	89 e5                	mov    %esp,%ebp
c1001c4d:	83 ec 08             	sub    $0x8,%esp
c1001c50:	e8 6b 25 00 00       	call   c10041c0 <sys_print_task>
c1001c55:	b8 00 00 00 00       	mov    $0x0,%eax
c1001c5a:	c9                   	leave  
c1001c5b:	c3                   	ret    

c1001c5c <syscall_malloc>:
c1001c5c:	55                   	push   %ebp
c1001c5d:	89 e5                	mov    %esp,%ebp
c1001c5f:	83 ec 18             	sub    $0x18,%esp
c1001c62:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c65:	8b 00                	mov    (%eax),%eax
c1001c67:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c6a:	83 ec 0c             	sub    $0xc,%esp
c1001c6d:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c70:	e8 ee 11 00 00       	call   c1002e63 <sys_malloc>
c1001c75:	83 c4 10             	add    $0x10,%esp
c1001c78:	c9                   	leave  
c1001c79:	c3                   	ret    

c1001c7a <syscall_free>:
c1001c7a:	55                   	push   %ebp
c1001c7b:	89 e5                	mov    %esp,%ebp
c1001c7d:	83 ec 18             	sub    $0x18,%esp
c1001c80:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c83:	8b 00                	mov    (%eax),%eax
c1001c85:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001c88:	8b 45 08             	mov    0x8(%ebp),%eax
c1001c8b:	8b 40 04             	mov    0x4(%eax),%eax
c1001c8e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001c91:	83 ec 08             	sub    $0x8,%esp
c1001c94:	ff 75 f0             	pushl  -0x10(%ebp)
c1001c97:	ff 75 f4             	pushl  -0xc(%ebp)
c1001c9a:	e8 23 12 00 00       	call   c1002ec2 <sys_free>
c1001c9f:	83 c4 10             	add    $0x10,%esp
c1001ca2:	b8 00 00 00 00       	mov    $0x0,%eax
c1001ca7:	c9                   	leave  
c1001ca8:	c3                   	ret    

c1001ca9 <syscall_trap>:
c1001ca9:	55                   	push   %ebp
c1001caa:	89 e5                	mov    %esp,%ebp
c1001cac:	83 ec 28             	sub    $0x28,%esp
c1001caf:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cb2:	8b 40 1c             	mov    0x1c(%eax),%eax
c1001cb5:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001cb8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1001cbc:	78 60                	js     c1001d1e <syscall_trap+0x75>
c1001cbe:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001cc1:	83 f8 39             	cmp    $0x39,%eax
c1001cc4:	77 58                	ja     c1001d1e <syscall_trap+0x75>
c1001cc6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001cc9:	8b 04 85 00 c5 00 c1 	mov    -0x3eff3b00(,%eax,4),%eax
c1001cd0:	85 c0                	test   %eax,%eax
c1001cd2:	74 4a                	je     c1001d1e <syscall_trap+0x75>
c1001cd4:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cd7:	8b 40 14             	mov    0x14(%eax),%eax
c1001cda:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1001cdd:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ce0:	8b 40 18             	mov    0x18(%eax),%eax
c1001ce3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1001ce6:	8b 45 08             	mov    0x8(%ebp),%eax
c1001ce9:	8b 40 10             	mov    0x10(%eax),%eax
c1001cec:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1001cef:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cf2:	8b 00                	mov    (%eax),%eax
c1001cf4:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1001cf7:	8b 45 08             	mov    0x8(%ebp),%eax
c1001cfa:	8b 40 04             	mov    0x4(%eax),%eax
c1001cfd:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001d00:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001d03:	8b 04 85 00 c5 00 c1 	mov    -0x3eff3b00(,%eax,4),%eax
c1001d0a:	83 ec 0c             	sub    $0xc,%esp
c1001d0d:	8d 55 e0             	lea    -0x20(%ebp),%edx
c1001d10:	52                   	push   %edx
c1001d11:	ff d0                	call   *%eax
c1001d13:	83 c4 10             	add    $0x10,%esp
c1001d16:	89 c2                	mov    %eax,%edx
c1001d18:	8b 45 08             	mov    0x8(%ebp),%eax
c1001d1b:	89 50 1c             	mov    %edx,0x1c(%eax)
c1001d1e:	c9                   	leave  
c1001d1f:	c3                   	ret    

c1001d20 <kbd_proc_data>:
c1001d20:	55                   	push   %ebp
c1001d21:	89 e5                	mov    %esp,%ebp
c1001d23:	83 ec 18             	sub    $0x18,%esp
c1001d26:	83 ec 0c             	sub    $0xc,%esp
c1001d29:	6a 64                	push   $0x64
c1001d2b:	e8 d0 e2 ff ff       	call   c1000000 <inb>
c1001d30:	83 c4 10             	add    $0x10,%esp
c1001d33:	83 e0 01             	and    $0x1,%eax
c1001d36:	85 c0                	test   %eax,%eax
c1001d38:	75 0a                	jne    c1001d44 <kbd_proc_data+0x24>
c1001d3a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1001d3f:	e9 55 01 00 00       	jmp    c1001e99 <kbd_proc_data+0x179>
c1001d44:	83 ec 0c             	sub    $0xc,%esp
c1001d47:	6a 60                	push   $0x60
c1001d49:	e8 b2 e2 ff ff       	call   c1000000 <inb>
c1001d4e:	83 c4 10             	add    $0x10,%esp
c1001d51:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001d54:	80 7d f3 e0          	cmpb   $0xe0,-0xd(%ebp)
c1001d58:	75 17                	jne    c1001d71 <kbd_proc_data+0x51>
c1001d5a:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d5f:	83 c8 40             	or     $0x40,%eax
c1001d62:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001d67:	b8 00 00 00 00       	mov    $0x0,%eax
c1001d6c:	e9 28 01 00 00       	jmp    c1001e99 <kbd_proc_data+0x179>
c1001d71:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d75:	84 c0                	test   %al,%al
c1001d77:	79 47                	jns    c1001dc0 <kbd_proc_data+0xa0>
c1001d79:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001d7e:	83 e0 40             	and    $0x40,%eax
c1001d81:	85 c0                	test   %eax,%eax
c1001d83:	75 09                	jne    c1001d8e <kbd_proc_data+0x6e>
c1001d85:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d89:	83 e0 7f             	and    $0x7f,%eax
c1001d8c:	eb 04                	jmp    c1001d92 <kbd_proc_data+0x72>
c1001d8e:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d92:	88 45 f3             	mov    %al,-0xd(%ebp)
c1001d95:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001d99:	0f b6 80 00 c6 00 c1 	movzbl -0x3eff3a00(%eax),%eax
c1001da0:	83 c8 40             	or     $0x40,%eax
c1001da3:	0f b6 c0             	movzbl %al,%eax
c1001da6:	f7 d0                	not    %eax
c1001da8:	89 c2                	mov    %eax,%edx
c1001daa:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001daf:	21 d0                	and    %edx,%eax
c1001db1:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001db6:	b8 00 00 00 00       	mov    $0x0,%eax
c1001dbb:	e9 d9 00 00 00       	jmp    c1001e99 <kbd_proc_data+0x179>
c1001dc0:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001dc5:	83 e0 40             	and    $0x40,%eax
c1001dc8:	85 c0                	test   %eax,%eax
c1001dca:	74 11                	je     c1001ddd <kbd_proc_data+0xbd>
c1001dcc:	80 4d f3 80          	orb    $0x80,-0xd(%ebp)
c1001dd0:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001dd5:	83 e0 bf             	and    $0xffffffbf,%eax
c1001dd8:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001ddd:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001de1:	0f b6 80 00 c6 00 c1 	movzbl -0x3eff3a00(%eax),%eax
c1001de8:	0f b6 d0             	movzbl %al,%edx
c1001deb:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001df0:	09 d0                	or     %edx,%eax
c1001df2:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001df7:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001dfb:	0f b6 80 00 c7 00 c1 	movzbl -0x3eff3900(%eax),%eax
c1001e02:	0f b6 d0             	movzbl %al,%edx
c1001e05:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001e0a:	31 d0                	xor    %edx,%eax
c1001e0c:	a3 68 ec 00 c1       	mov    %eax,0xc100ec68
c1001e11:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001e16:	83 e0 03             	and    $0x3,%eax
c1001e19:	8b 14 85 00 cb 00 c1 	mov    -0x3eff3500(,%eax,4),%edx
c1001e20:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1001e24:	01 d0                	add    %edx,%eax
c1001e26:	0f b6 00             	movzbl (%eax),%eax
c1001e29:	0f b6 c0             	movzbl %al,%eax
c1001e2c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1001e2f:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001e34:	83 e0 08             	and    $0x8,%eax
c1001e37:	85 c0                	test   %eax,%eax
c1001e39:	74 22                	je     c1001e5d <kbd_proc_data+0x13d>
c1001e3b:	83 7d f4 60          	cmpl   $0x60,-0xc(%ebp)
c1001e3f:	7e 0c                	jle    c1001e4d <kbd_proc_data+0x12d>
c1001e41:	83 7d f4 7a          	cmpl   $0x7a,-0xc(%ebp)
c1001e45:	7f 06                	jg     c1001e4d <kbd_proc_data+0x12d>
c1001e47:	83 6d f4 20          	subl   $0x20,-0xc(%ebp)
c1001e4b:	eb 10                	jmp    c1001e5d <kbd_proc_data+0x13d>
c1001e4d:	83 7d f4 40          	cmpl   $0x40,-0xc(%ebp)
c1001e51:	7e 0a                	jle    c1001e5d <kbd_proc_data+0x13d>
c1001e53:	83 7d f4 5a          	cmpl   $0x5a,-0xc(%ebp)
c1001e57:	7f 04                	jg     c1001e5d <kbd_proc_data+0x13d>
c1001e59:	83 45 f4 20          	addl   $0x20,-0xc(%ebp)
c1001e5d:	a1 68 ec 00 c1       	mov    0xc100ec68,%eax
c1001e62:	f7 d0                	not    %eax
c1001e64:	83 e0 06             	and    $0x6,%eax
c1001e67:	85 c0                	test   %eax,%eax
c1001e69:	75 2b                	jne    c1001e96 <kbd_proc_data+0x176>
c1001e6b:	81 7d f4 e9 00 00 00 	cmpl   $0xe9,-0xc(%ebp)
c1001e72:	75 22                	jne    c1001e96 <kbd_proc_data+0x176>
c1001e74:	83 ec 0c             	sub    $0xc,%esp
c1001e77:	68 34 a7 00 c1       	push   $0xc100a734
c1001e7c:	e8 3b 31 00 00       	call   c1004fbc <printk>
c1001e81:	83 c4 10             	add    $0x10,%esp
c1001e84:	83 ec 08             	sub    $0x8,%esp
c1001e87:	6a 03                	push   $0x3
c1001e89:	68 92 00 00 00       	push   $0x92
c1001e8e:	e8 a9 e1 ff ff       	call   c100003c <outb>
c1001e93:	83 c4 10             	add    $0x10,%esp
c1001e96:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001e99:	c9                   	leave  
c1001e9a:	c3                   	ret    

c1001e9b <kbd_intr>:
c1001e9b:	55                   	push   %ebp
c1001e9c:	89 e5                	mov    %esp,%ebp
c1001e9e:	83 ec 08             	sub    $0x8,%esp
c1001ea1:	83 ec 0c             	sub    $0xc,%esp
c1001ea4:	68 20 1d 00 c1       	push   $0xc1001d20
c1001ea9:	e8 ab 2a 00 00       	call   c1004959 <cons_intr>
c1001eae:	83 c4 10             	add    $0x10,%esp
c1001eb1:	90                   	nop
c1001eb2:	c9                   	leave  
c1001eb3:	c3                   	ret    

c1001eb4 <kbd_init>:
c1001eb4:	55                   	push   %ebp
c1001eb5:	89 e5                	mov    %esp,%ebp
c1001eb7:	83 ec 18             	sub    $0x18,%esp
c1001eba:	c7 05 20 32 a1 c1 00 	movl   $0x0,0xc1a13220
c1001ec1:	00 00 00 
c1001ec4:	c7 05 24 32 a1 c1 00 	movl   $0x0,0xc1a13224
c1001ecb:	00 00 00 
c1001ece:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1001ed5:	eb 0f                	jmp    c1001ee6 <kbd_init+0x32>
c1001ed7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001eda:	05 20 30 a1 c1       	add    $0xc1a13020,%eax
c1001edf:	c6 00 00             	movb   $0x0,(%eax)
c1001ee2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1001ee6:	81 7d f4 ff 01 00 00 	cmpl   $0x1ff,-0xc(%ebp)
c1001eed:	7e e8                	jle    c1001ed7 <kbd_init+0x23>
c1001eef:	c6 05 6c ec 00 c1 00 	movb   $0x0,0xc100ec6c
c1001ef6:	c7 05 68 ec 00 c1 00 	movl   $0x0,0xc100ec68
c1001efd:	00 00 00 
c1001f00:	e8 96 ff ff ff       	call   c1001e9b <kbd_intr>
c1001f05:	83 ec 0c             	sub    $0xc,%esp
c1001f08:	6a 01                	push   $0x1
c1001f0a:	e8 09 27 00 00       	call   c1004618 <pic_enable>
c1001f0f:	83 c4 10             	add    $0x10,%esp
c1001f12:	90                   	nop
c1001f13:	c9                   	leave  
c1001f14:	c3                   	ret    

c1001f15 <hash32>:
c1001f15:	55                   	push   %ebp
c1001f16:	89 e5                	mov    %esp,%ebp
c1001f18:	83 ec 10             	sub    $0x10,%esp
c1001f1b:	8b 45 08             	mov    0x8(%ebp),%eax
c1001f1e:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1001f24:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1001f27:	b8 20 00 00 00       	mov    $0x20,%eax
c1001f2c:	2b 45 0c             	sub    0xc(%ebp),%eax
c1001f2f:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1001f32:	89 c1                	mov    %eax,%ecx
c1001f34:	d3 ea                	shr    %cl,%edx
c1001f36:	89 d0                	mov    %edx,%eax
c1001f38:	c9                   	leave  
c1001f39:	c3                   	ret    

c1001f3a <main>:
c1001f3a:	8d 4c 24 04          	lea    0x4(%esp),%ecx
c1001f3e:	83 e4 f0             	and    $0xfffffff0,%esp
c1001f41:	ff 71 fc             	pushl  -0x4(%ecx)
c1001f44:	55                   	push   %ebp
c1001f45:	89 e5                	mov    %esp,%ebp
c1001f47:	51                   	push   %ecx
c1001f48:	83 ec 04             	sub    $0x4,%esp
c1001f4b:	e8 6f 2c 00 00       	call   c1004bbf <clear>
c1001f50:	83 ec 0c             	sub    $0xc,%esp
c1001f53:	68 40 a7 00 c1       	push   $0xc100a740
c1001f58:	e8 5f 30 00 00       	call   c1004fbc <printk>
c1001f5d:	83 c4 10             	add    $0x10,%esp
c1001f60:	e8 6d e7 ff ff       	call   c10006d2 <gdt_init>
c1001f65:	e8 e1 26 00 00       	call   c100464b <pic_init>
c1001f6a:	e8 57 e8 ff ff       	call   c10007c6 <idt_init>
c1001f6f:	e8 d7 ed ff ff       	call   c1000d4b <enable_interupt>
c1001f74:	e8 3b 28 00 00       	call   c10047b4 <serial_init>
c1001f79:	e8 36 ff ff ff       	call   c1001eb4 <kbd_init>
c1001f7e:	e8 a2 0a 00 00       	call   c1002a25 <setup_vpt>
c1001f83:	e8 b5 04 00 00       	call   c100243d <pmm_init>
c1001f88:	e8 fa 00 00 00       	call   c1002087 <test_pmm>
c1001f8d:	e8 de 01 00 00       	call   c1002170 <test_vmm>
c1001f92:	e8 2a 5b 00 00       	call   c1007ac1 <fs_init>
c1001f97:	83 ec 0c             	sub    $0xc,%esp
c1001f9a:	68 82 20 00 c1       	push   $0xc1002082
c1001f9f:	e8 c6 0f 00 00       	call   c1002f6a <kernel_task_init>
c1001fa4:	83 c4 10             	add    $0x10,%esp
c1001fa7:	e8 13 2c 00 00       	call   c1004bbf <clear>
c1001fac:	83 ec 0c             	sub    $0xc,%esp
c1001faf:	6a 64                	push   $0x64
c1001fb1:	e8 06 2b 00 00       	call   c1004abc <timer_init>
c1001fb6:	83 c4 10             	add    $0x10,%esp
c1001fb9:	83 ec 08             	sub    $0x8,%esp
c1001fbc:	6a 00                	push   $0x0
c1001fbe:	68 b4 0c 01 c1       	push   $0xc1010cb4
c1001fc3:	e8 48 34 00 00       	call   c1005410 <sema_init>
c1001fc8:	83 c4 10             	add    $0x10,%esp
c1001fcb:	e8 9f ed ff ff       	call   c1000d6f <intr_enable>
c1001fd0:	83 ec 0c             	sub    $0xc,%esp
c1001fd3:	68 52 00 00 40       	push   $0x40000052
c1001fd8:	e8 f1 1e 00 00       	call   c1003ece <user_task_init>
c1001fdd:	83 c4 10             	add    $0x10,%esp
c1001fe0:	eb fe                	jmp    c1001fe0 <main+0xa6>

c1001fe2 <write2fs>:
c1001fe2:	55                   	push   %ebp
c1001fe3:	89 e5                	mov    %esp,%ebp
c1001fe5:	83 ec 18             	sub    $0x18,%esp
c1001fe8:	c7 45 f4 d0 2f 00 00 	movl   $0x2fd0,-0xc(%ebp)
c1001fef:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1001ff2:	05 ff 01 00 00       	add    $0x1ff,%eax
c1001ff7:	c1 e8 09             	shr    $0x9,%eax
c1001ffa:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1001ffd:	83 ec 08             	sub    $0x8,%esp
c1002000:	6a 01                	push   $0x1
c1002002:	ff 75 f4             	pushl  -0xc(%ebp)
c1002005:	e8 f3 0a 00 00       	call   c1002afd <vmm_malloc>
c100200a:	83 c4 10             	add    $0x10,%esp
c100200d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002010:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002013:	83 ec 04             	sub    $0x4,%esp
c1002016:	ff 75 f0             	pushl  -0x10(%ebp)
c1002019:	68 f4 01 00 00       	push   $0x1f4
c100201e:	50                   	push   %eax
c100201f:	e8 40 38 00 00       	call   c1005864 <ide_read>
c1002024:	83 c4 10             	add    $0x10,%esp
c1002027:	83 ec 08             	sub    $0x8,%esp
c100202a:	6a 06                	push   $0x6
c100202c:	68 56 a7 00 c1       	push   $0xc100a756
c1002031:	e8 92 45 00 00       	call   c10065c8 <sys_open>
c1002036:	83 c4 10             	add    $0x10,%esp
c1002039:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100203c:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1002040:	74 2c                	je     c100206e <write2fs+0x8c>
c1002042:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002045:	83 ec 04             	sub    $0x4,%esp
c1002048:	ff 75 f4             	pushl  -0xc(%ebp)
c100204b:	50                   	push   %eax
c100204c:	ff 75 e8             	pushl  -0x18(%ebp)
c100204f:	e8 98 48 00 00       	call   c10068ec <sys_write>
c1002054:	83 c4 10             	add    $0x10,%esp
c1002057:	83 f8 ff             	cmp    $0xffffffff,%eax
c100205a:	75 12                	jne    c100206e <write2fs+0x8c>
c100205c:	83 ec 0c             	sub    $0xc,%esp
c100205f:	68 63 a7 00 c1       	push   $0xc100a763
c1002064:	e8 53 2f 00 00       	call   c1004fbc <printk>
c1002069:	83 c4 10             	add    $0x10,%esp
c100206c:	eb fe                	jmp    c100206c <write2fs+0x8a>
c100206e:	83 ec 08             	sub    $0x8,%esp
c1002071:	ff 75 f4             	pushl  -0xc(%ebp)
c1002074:	ff 75 ec             	pushl  -0x14(%ebp)
c1002077:	e8 a6 0b 00 00       	call   c1002c22 <vmm_free>
c100207c:	83 c4 10             	add    $0x10,%esp
c100207f:	90                   	nop
c1002080:	c9                   	leave  
c1002081:	c3                   	ret    

c1002082 <kernel_main>:
c1002082:	55                   	push   %ebp
c1002083:	89 e5                	mov    %esp,%ebp
c1002085:	eb fe                	jmp    c1002085 <kernel_main+0x3>

c1002087 <test_pmm>:
c1002087:	55                   	push   %ebp
c1002088:	89 e5                	mov    %esp,%ebp
c100208a:	83 ec 18             	sub    $0x18,%esp
c100208d:	83 ec 08             	sub    $0x8,%esp
c1002090:	6a 01                	push   $0x1
c1002092:	68 00 02 00 00       	push   $0x200
c1002097:	e8 c1 07 00 00       	call   c100285d <pmm_alloc>
c100209c:	83 c4 10             	add    $0x10,%esp
c100209f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10020a2:	83 ec 08             	sub    $0x8,%esp
c10020a5:	6a 00                	push   $0x0
c10020a7:	68 00 20 00 00       	push   $0x2000
c10020ac:	e8 ac 07 00 00       	call   c100285d <pmm_alloc>
c10020b1:	83 c4 10             	add    $0x10,%esp
c10020b4:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10020b7:	83 ec 08             	sub    $0x8,%esp
c10020ba:	6a 02                	push   $0x2
c10020bc:	68 00 30 00 00       	push   $0x3000
c10020c1:	e8 97 07 00 00       	call   c100285d <pmm_alloc>
c10020c6:	83 c4 10             	add    $0x10,%esp
c10020c9:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10020cc:	83 ec 08             	sub    $0x8,%esp
c10020cf:	ff 75 f0             	pushl  -0x10(%ebp)
c10020d2:	68 76 a7 00 c1       	push   $0xc100a776
c10020d7:	e8 e0 2e 00 00       	call   c1004fbc <printk>
c10020dc:	83 c4 10             	add    $0x10,%esp
c10020df:	83 ec 08             	sub    $0x8,%esp
c10020e2:	ff 75 f4             	pushl  -0xc(%ebp)
c10020e5:	68 8c a7 00 c1       	push   $0xc100a78c
c10020ea:	e8 cd 2e 00 00       	call   c1004fbc <printk>
c10020ef:	83 c4 10             	add    $0x10,%esp
c10020f2:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c10020f8:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c10020fe:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c1002103:	51                   	push   %ecx
c1002104:	52                   	push   %edx
c1002105:	50                   	push   %eax
c1002106:	68 a8 a7 00 c1       	push   $0xc100a7a8
c100210b:	e8 ac 2e 00 00       	call   c1004fbc <printk>
c1002110:	83 c4 10             	add    $0x10,%esp
c1002113:	83 ec 08             	sub    $0x8,%esp
c1002116:	68 00 02 00 00       	push   $0x200
c100211b:	ff 75 f4             	pushl  -0xc(%ebp)
c100211e:	e8 36 08 00 00       	call   c1002959 <pmm_free>
c1002123:	83 c4 10             	add    $0x10,%esp
c1002126:	83 ec 08             	sub    $0x8,%esp
c1002129:	68 00 20 00 00       	push   $0x2000
c100212e:	ff 75 f0             	pushl  -0x10(%ebp)
c1002131:	e8 23 08 00 00       	call   c1002959 <pmm_free>
c1002136:	83 c4 10             	add    $0x10,%esp
c1002139:	83 ec 08             	sub    $0x8,%esp
c100213c:	68 00 30 00 00       	push   $0x3000
c1002141:	ff 75 ec             	pushl  -0x14(%ebp)
c1002144:	e8 10 08 00 00       	call   c1002959 <pmm_free>
c1002149:	83 c4 10             	add    $0x10,%esp
c100214c:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c1002152:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c1002158:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c100215d:	51                   	push   %ecx
c100215e:	52                   	push   %edx
c100215f:	50                   	push   %eax
c1002160:	68 a8 a7 00 c1       	push   $0xc100a7a8
c1002165:	e8 52 2e 00 00       	call   c1004fbc <printk>
c100216a:	83 c4 10             	add    $0x10,%esp
c100216d:	90                   	nop
c100216e:	c9                   	leave  
c100216f:	c3                   	ret    

c1002170 <test_vmm>:
c1002170:	55                   	push   %ebp
c1002171:	89 e5                	mov    %esp,%ebp
c1002173:	83 ec 38             	sub    $0x38,%esp
c1002176:	83 ec 0c             	sub    $0xc,%esp
c1002179:	68 ef a7 00 c1       	push   $0xc100a7ef
c100217e:	e8 39 2e 00 00       	call   c1004fbc <printk>
c1002183:	83 c4 10             	add    $0x10,%esp
c1002186:	83 ec 08             	sub    $0x8,%esp
c1002189:	6a 00                	push   $0x0
c100218b:	68 00 01 00 00       	push   $0x100
c1002190:	e8 68 09 00 00       	call   c1002afd <vmm_malloc>
c1002195:	83 c4 10             	add    $0x10,%esp
c1002198:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100219b:	83 ec 08             	sub    $0x8,%esp
c100219e:	6a 01                	push   $0x1
c10021a0:	68 00 20 00 00       	push   $0x2000
c10021a5:	e8 53 09 00 00       	call   c1002afd <vmm_malloc>
c10021aa:	83 c4 10             	add    $0x10,%esp
c10021ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10021b0:	83 ec 08             	sub    $0x8,%esp
c10021b3:	6a 02                	push   $0x2
c10021b5:	68 00 30 00 00       	push   $0x3000
c10021ba:	e8 3e 09 00 00       	call   c1002afd <vmm_malloc>
c10021bf:	83 c4 10             	add    $0x10,%esp
c10021c2:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10021c5:	83 ec 08             	sub    $0x8,%esp
c10021c8:	ff 75 f4             	pushl  -0xc(%ebp)
c10021cb:	68 76 a7 00 c1       	push   $0xc100a776
c10021d0:	e8 e7 2d 00 00       	call   c1004fbc <printk>
c10021d5:	83 c4 10             	add    $0x10,%esp
c10021d8:	83 ec 08             	sub    $0x8,%esp
c10021db:	ff 75 f0             	pushl  -0x10(%ebp)
c10021de:	68 8c a7 00 c1       	push   $0xc100a78c
c10021e3:	e8 d4 2d 00 00       	call   c1004fbc <printk>
c10021e8:	83 c4 10             	add    $0x10,%esp
c10021eb:	83 ec 08             	sub    $0x8,%esp
c10021ee:	ff 75 ec             	pushl  -0x14(%ebp)
c10021f1:	68 06 a8 00 c1       	push   $0xc100a806
c10021f6:	e8 c1 2d 00 00       	call   c1004fbc <printk>
c10021fb:	83 c4 10             	add    $0x10,%esp
c10021fe:	83 ec 0c             	sub    $0xc,%esp
c1002201:	68 21 a8 00 c1       	push   $0xc100a821
c1002206:	e8 b1 2d 00 00       	call   c1004fbc <printk>
c100220b:	83 c4 10             	add    $0x10,%esp
c100220e:	83 ec 08             	sub    $0x8,%esp
c1002211:	6a 00                	push   $0x0
c1002213:	68 00 01 00 00       	push   $0x100
c1002218:	e8 e0 08 00 00       	call   c1002afd <vmm_malloc>
c100221d:	83 c4 10             	add    $0x10,%esp
c1002220:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002223:	83 ec 08             	sub    $0x8,%esp
c1002226:	6a 01                	push   $0x1
c1002228:	68 00 20 00 00       	push   $0x2000
c100222d:	e8 cb 08 00 00       	call   c1002afd <vmm_malloc>
c1002232:	83 c4 10             	add    $0x10,%esp
c1002235:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002238:	83 ec 08             	sub    $0x8,%esp
c100223b:	6a 02                	push   $0x2
c100223d:	68 00 30 00 00       	push   $0x3000
c1002242:	e8 b6 08 00 00       	call   c1002afd <vmm_malloc>
c1002247:	83 c4 10             	add    $0x10,%esp
c100224a:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100224d:	83 ec 08             	sub    $0x8,%esp
c1002250:	ff 75 e8             	pushl  -0x18(%ebp)
c1002253:	68 76 a7 00 c1       	push   $0xc100a776
c1002258:	e8 5f 2d 00 00       	call   c1004fbc <printk>
c100225d:	83 c4 10             	add    $0x10,%esp
c1002260:	83 ec 08             	sub    $0x8,%esp
c1002263:	ff 75 e4             	pushl  -0x1c(%ebp)
c1002266:	68 8c a7 00 c1       	push   $0xc100a78c
c100226b:	e8 4c 2d 00 00       	call   c1004fbc <printk>
c1002270:	83 c4 10             	add    $0x10,%esp
c1002273:	83 ec 08             	sub    $0x8,%esp
c1002276:	ff 75 e0             	pushl  -0x20(%ebp)
c1002279:	68 06 a8 00 c1       	push   $0xc100a806
c100227e:	e8 39 2d 00 00       	call   c1004fbc <printk>
c1002283:	83 c4 10             	add    $0x10,%esp
c1002286:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002289:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100228c:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100228f:	c6 00 ff             	movb   $0xff,(%eax)
c1002292:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1002295:	0f b6 00             	movzbl (%eax),%eax
c1002298:	0f b6 c0             	movzbl %al,%eax
c100229b:	83 ec 08             	sub    $0x8,%esp
c100229e:	50                   	push   %eax
c100229f:	68 38 a8 00 c1       	push   $0xc100a838
c10022a4:	e8 13 2d 00 00       	call   c1004fbc <printk>
c10022a9:	83 c4 10             	add    $0x10,%esp
c10022ac:	83 ec 08             	sub    $0x8,%esp
c10022af:	68 00 01 00 00       	push   $0x100
c10022b4:	ff 75 f4             	pushl  -0xc(%ebp)
c10022b7:	e8 66 09 00 00       	call   c1002c22 <vmm_free>
c10022bc:	83 c4 10             	add    $0x10,%esp
c10022bf:	83 ec 08             	sub    $0x8,%esp
c10022c2:	68 00 20 00 00       	push   $0x2000
c10022c7:	ff 75 f0             	pushl  -0x10(%ebp)
c10022ca:	e8 53 09 00 00       	call   c1002c22 <vmm_free>
c10022cf:	83 c4 10             	add    $0x10,%esp
c10022d2:	83 ec 08             	sub    $0x8,%esp
c10022d5:	68 00 30 00 00       	push   $0x3000
c10022da:	ff 75 ec             	pushl  -0x14(%ebp)
c10022dd:	e8 40 09 00 00       	call   c1002c22 <vmm_free>
c10022e2:	83 c4 10             	add    $0x10,%esp
c10022e5:	83 ec 08             	sub    $0x8,%esp
c10022e8:	6a 00                	push   $0x0
c10022ea:	68 00 01 00 00       	push   $0x100
c10022ef:	e8 09 08 00 00       	call   c1002afd <vmm_malloc>
c10022f4:	83 c4 10             	add    $0x10,%esp
c10022f7:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10022fa:	83 ec 08             	sub    $0x8,%esp
c10022fd:	6a 01                	push   $0x1
c10022ff:	68 00 20 00 00       	push   $0x2000
c1002304:	e8 f4 07 00 00       	call   c1002afd <vmm_malloc>
c1002309:	83 c4 10             	add    $0x10,%esp
c100230c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100230f:	83 ec 08             	sub    $0x8,%esp
c1002312:	6a 02                	push   $0x2
c1002314:	68 00 30 00 00       	push   $0x3000
c1002319:	e8 df 07 00 00       	call   c1002afd <vmm_malloc>
c100231e:	83 c4 10             	add    $0x10,%esp
c1002321:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1002324:	83 ec 08             	sub    $0x8,%esp
c1002327:	ff 75 d8             	pushl  -0x28(%ebp)
c100232a:	68 76 a7 00 c1       	push   $0xc100a776
c100232f:	e8 88 2c 00 00       	call   c1004fbc <printk>
c1002334:	83 c4 10             	add    $0x10,%esp
c1002337:	83 ec 08             	sub    $0x8,%esp
c100233a:	ff 75 d4             	pushl  -0x2c(%ebp)
c100233d:	68 8c a7 00 c1       	push   $0xc100a78c
c1002342:	e8 75 2c 00 00       	call   c1004fbc <printk>
c1002347:	83 c4 10             	add    $0x10,%esp
c100234a:	83 ec 08             	sub    $0x8,%esp
c100234d:	ff 75 d0             	pushl  -0x30(%ebp)
c1002350:	68 06 a8 00 c1       	push   $0xc100a806
c1002355:	e8 62 2c 00 00       	call   c1004fbc <printk>
c100235a:	83 c4 10             	add    $0x10,%esp
c100235d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1002360:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1002363:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1002366:	c6 00 ff             	movb   $0xff,(%eax)
c1002369:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100236c:	0f b6 00             	movzbl (%eax),%eax
c100236f:	0f b6 c0             	movzbl %al,%eax
c1002372:	83 ec 08             	sub    $0x8,%esp
c1002375:	50                   	push   %eax
c1002376:	68 44 a8 00 c1       	push   $0xc100a844
c100237b:	e8 3c 2c 00 00       	call   c1004fbc <printk>
c1002380:	83 c4 10             	add    $0x10,%esp
c1002383:	90                   	nop
c1002384:	c9                   	leave  
c1002385:	c3                   	ret    

c1002386 <test_schedule>:
c1002386:	55                   	push   %ebp
c1002387:	89 e5                	mov    %esp,%ebp
c1002389:	83 ec 08             	sub    $0x8,%esp
c100238c:	e8 de e9 ff ff       	call   c1000d6f <intr_enable>
c1002391:	eb fe                	jmp    c1002391 <test_schedule+0xb>

c1002393 <print_task1>:
c1002393:	55                   	push   %ebp
c1002394:	89 e5                	mov    %esp,%ebp
c1002396:	83 ec 18             	sub    $0x18,%esp
c1002399:	8b 45 08             	mov    0x8(%ebp),%eax
c100239c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100239f:	83 ec 08             	sub    $0x8,%esp
c10023a2:	ff 75 f4             	pushl  -0xc(%ebp)
c10023a5:	68 50 a8 00 c1       	push   $0xc100a850
c10023aa:	e8 0d 2c 00 00       	call   c1004fbc <printk>
c10023af:	83 c4 10             	add    $0x10,%esp
c10023b2:	83 ec 0c             	sub    $0xc,%esp
c10023b5:	68 40 42 0f 00       	push   $0xf4240
c10023ba:	e8 36 00 00 00       	call   c10023f5 <delay>
c10023bf:	83 c4 10             	add    $0x10,%esp
c10023c2:	eb db                	jmp    c100239f <print_task1+0xc>

c10023c4 <print_task2>:
c10023c4:	55                   	push   %ebp
c10023c5:	89 e5                	mov    %esp,%ebp
c10023c7:	83 ec 18             	sub    $0x18,%esp
c10023ca:	8b 45 08             	mov    0x8(%ebp),%eax
c10023cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10023d0:	83 ec 08             	sub    $0x8,%esp
c10023d3:	ff 75 f4             	pushl  -0xc(%ebp)
c10023d6:	68 50 a8 00 c1       	push   $0xc100a850
c10023db:	e8 dc 2b 00 00       	call   c1004fbc <printk>
c10023e0:	83 c4 10             	add    $0x10,%esp
c10023e3:	83 ec 0c             	sub    $0xc,%esp
c10023e6:	68 40 42 0f 00       	push   $0xf4240
c10023eb:	e8 05 00 00 00       	call   c10023f5 <delay>
c10023f0:	83 c4 10             	add    $0x10,%esp
c10023f3:	eb db                	jmp    c10023d0 <print_task2+0xc>

c10023f5 <delay>:
c10023f5:	55                   	push   %ebp
c10023f6:	89 e5                	mov    %esp,%ebp
c10023f8:	83 ec 10             	sub    $0x10,%esp
c10023fb:	8b 45 08             	mov    0x8(%ebp),%eax
c10023fe:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002401:	eb 17                	jmp    c100241a <delay+0x25>
c1002403:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c100240a:	eb 04                	jmp    c1002410 <delay+0x1b>
c100240c:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c1002410:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c1002414:	75 f6                	jne    c100240c <delay+0x17>
c1002416:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c100241a:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c100241e:	75 e3                	jne    c1002403 <delay+0xe>
c1002420:	90                   	nop
c1002421:	90                   	nop
c1002422:	c9                   	leave  
c1002423:	c3                   	ret    

c1002424 <test_user>:
c1002424:	55                   	push   %ebp
c1002425:	89 e5                	mov    %esp,%ebp
c1002427:	83 ec 08             	sub    $0x8,%esp
c100242a:	83 ec 0c             	sub    $0xc,%esp
c100242d:	68 52 00 00 40       	push   $0x40000052
c1002432:	e8 97 1a 00 00       	call   c1003ece <user_task_init>
c1002437:	83 c4 10             	add    $0x10,%esp
c100243a:	90                   	nop
c100243b:	c9                   	leave  
c100243c:	c3                   	ret    

c100243d <pmm_init>:
c100243d:	55                   	push   %ebp
c100243e:	89 e5                	mov    %esp,%ebp
c1002440:	83 ec 38             	sub    $0x38,%esp
c1002443:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100244a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002451:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002458:	c7 45 d4 04 80 00 c0 	movl   $0xc0008004,-0x2c(%ebp)
c100245f:	b8 00 80 00 c0       	mov    $0xc0008000,%eax
c1002464:	8b 00                	mov    (%eax),%eax
c1002466:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002469:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002470:	e9 98 02 00 00       	jmp    c100270d <pmm_init+0x2d0>
c1002475:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002478:	89 d0                	mov    %edx,%eax
c100247a:	c1 e0 02             	shl    $0x2,%eax
c100247d:	01 d0                	add    %edx,%eax
c100247f:	c1 e0 02             	shl    $0x2,%eax
c1002482:	89 c2                	mov    %eax,%edx
c1002484:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1002487:	01 d0                	add    %edx,%eax
c1002489:	8b 50 04             	mov    0x4(%eax),%edx
c100248c:	8b 00                	mov    (%eax),%eax
c100248e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002491:	e9 40 02 00 00       	jmp    c10026d6 <pmm_init+0x299>
c1002496:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002499:	85 c0                	test   %eax,%eax
c100249b:	0f 88 2e 02 00 00    	js     c10026cf <pmm_init+0x292>
c10024a1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10024a4:	89 d0                	mov    %edx,%eax
c10024a6:	c1 e0 02             	shl    $0x2,%eax
c10024a9:	01 d0                	add    %edx,%eax
c10024ab:	c1 e0 02             	shl    $0x2,%eax
c10024ae:	89 c2                	mov    %eax,%edx
c10024b0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10024b3:	01 d0                	add    %edx,%eax
c10024b5:	8b 40 10             	mov    0x10(%eax),%eax
c10024b8:	83 f8 01             	cmp    $0x1,%eax
c10024bb:	75 59                	jne    c1002516 <pmm_init+0xd9>
c10024bd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024c0:	c1 e8 0c             	shr    $0xc,%eax
c10024c3:	89 c2                	mov    %eax,%edx
c10024c5:	89 d0                	mov    %edx,%eax
c10024c7:	01 c0                	add    %eax,%eax
c10024c9:	01 d0                	add    %edx,%eax
c10024cb:	c1 e0 02             	shl    $0x2,%eax
c10024ce:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10024d3:	c6 00 00             	movb   $0x0,(%eax)
c10024d6:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024d9:	c1 e8 0c             	shr    $0xc,%eax
c10024dc:	89 c2                	mov    %eax,%edx
c10024de:	89 d0                	mov    %edx,%eax
c10024e0:	01 c0                	add    %eax,%eax
c10024e2:	01 d0                	add    %edx,%eax
c10024e4:	c1 e0 02             	shl    $0x2,%eax
c10024e7:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c10024ec:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c10024f2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024f5:	c1 e8 0c             	shr    $0xc,%eax
c10024f8:	89 c2                	mov    %eax,%edx
c10024fa:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10024fd:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002502:	89 c1                	mov    %eax,%ecx
c1002504:	89 d0                	mov    %edx,%eax
c1002506:	01 c0                	add    %eax,%eax
c1002508:	01 d0                	add    %edx,%eax
c100250a:	c1 e0 02             	shl    $0x2,%eax
c100250d:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c1002512:	89 08                	mov    %ecx,(%eax)
c1002514:	eb 57                	jmp    c100256d <pmm_init+0x130>
c1002516:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002519:	c1 e8 0c             	shr    $0xc,%eax
c100251c:	89 c2                	mov    %eax,%edx
c100251e:	89 d0                	mov    %edx,%eax
c1002520:	01 c0                	add    %eax,%eax
c1002522:	01 d0                	add    %edx,%eax
c1002524:	c1 e0 02             	shl    $0x2,%eax
c1002527:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c100252c:	c6 00 08             	movb   $0x8,(%eax)
c100252f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002532:	c1 e8 0c             	shr    $0xc,%eax
c1002535:	89 c2                	mov    %eax,%edx
c1002537:	89 d0                	mov    %edx,%eax
c1002539:	01 c0                	add    %eax,%eax
c100253b:	01 d0                	add    %edx,%eax
c100253d:	c1 e0 02             	shl    $0x2,%eax
c1002540:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c1002545:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100254b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100254e:	c1 e8 0c             	shr    $0xc,%eax
c1002551:	89 c2                	mov    %eax,%edx
c1002553:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002556:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c100255b:	89 c1                	mov    %eax,%ecx
c100255d:	89 d0                	mov    %edx,%eax
c100255f:	01 c0                	add    %eax,%eax
c1002561:	01 d0                	add    %edx,%eax
c1002563:	c1 e0 02             	shl    $0x2,%eax
c1002566:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c100256b:	89 08                	mov    %ecx,(%eax)
c100256d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002570:	c1 e8 0c             	shr    $0xc,%eax
c1002573:	89 c2                	mov    %eax,%edx
c1002575:	89 d0                	mov    %edx,%eax
c1002577:	01 c0                	add    %eax,%eax
c1002579:	01 d0                	add    %edx,%eax
c100257b:	c1 e0 02             	shl    $0x2,%eax
c100257e:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c1002583:	8b 00                	mov    (%eax),%eax
c1002585:	3d ff ff ff 00       	cmp    $0xffffff,%eax
c100258a:	77 62                	ja     c10025ee <pmm_init+0x1b1>
c100258c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100258f:	c1 e8 0c             	shr    $0xc,%eax
c1002592:	89 c1                	mov    %eax,%ecx
c1002594:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002597:	c1 e8 0c             	shr    $0xc,%eax
c100259a:	89 c2                	mov    %eax,%edx
c100259c:	89 c8                	mov    %ecx,%eax
c100259e:	01 c0                	add    %eax,%eax
c10025a0:	01 c8                	add    %ecx,%eax
c10025a2:	c1 e0 02             	shl    $0x2,%eax
c10025a5:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10025aa:	0f b6 08             	movzbl (%eax),%ecx
c10025ad:	89 d0                	mov    %edx,%eax
c10025af:	01 c0                	add    %eax,%eax
c10025b1:	01 d0                	add    %edx,%eax
c10025b3:	c1 e0 02             	shl    $0x2,%eax
c10025b6:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10025bb:	88 08                	mov    %cl,(%eax)
c10025bd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025c0:	c1 e8 0c             	shr    $0xc,%eax
c10025c3:	89 c2                	mov    %eax,%edx
c10025c5:	89 d0                	mov    %edx,%eax
c10025c7:	01 c0                	add    %eax,%eax
c10025c9:	01 d0                	add    %edx,%eax
c10025cb:	c1 e0 02             	shl    $0x2,%eax
c10025ce:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c10025d3:	8b 00                	mov    (%eax),%eax
c10025d5:	83 f8 ff             	cmp    $0xffffffff,%eax
c10025d8:	75 07                	jne    c10025e1 <pmm_init+0x1a4>
c10025da:	b8 01 00 00 00       	mov    $0x1,%eax
c10025df:	eb 05                	jmp    c10025e6 <pmm_init+0x1a9>
c10025e1:	b8 00 00 00 00       	mov    $0x0,%eax
c10025e6:	01 45 f4             	add    %eax,-0xc(%ebp)
c10025e9:	e9 e1 00 00 00       	jmp    c10026cf <pmm_init+0x292>
c10025ee:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10025f1:	c1 e8 0c             	shr    $0xc,%eax
c10025f4:	89 c2                	mov    %eax,%edx
c10025f6:	89 d0                	mov    %edx,%eax
c10025f8:	01 c0                	add    %eax,%eax
c10025fa:	01 d0                	add    %edx,%eax
c10025fc:	c1 e0 02             	shl    $0x2,%eax
c10025ff:	05 e8 0c 01 c1       	add    $0xc1010ce8,%eax
c1002604:	8b 00                	mov    (%eax),%eax
c1002606:	3d ff ff ff 37       	cmp    $0x37ffffff,%eax
c100260b:	77 62                	ja     c100266f <pmm_init+0x232>
c100260d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002610:	c1 e8 0c             	shr    $0xc,%eax
c1002613:	89 c2                	mov    %eax,%edx
c1002615:	89 d0                	mov    %edx,%eax
c1002617:	01 c0                	add    %eax,%eax
c1002619:	01 d0                	add    %edx,%eax
c100261b:	c1 e0 02             	shl    $0x2,%eax
c100261e:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002623:	0f b6 08             	movzbl (%eax),%ecx
c1002626:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002629:	c1 e8 0c             	shr    $0xc,%eax
c100262c:	89 c2                	mov    %eax,%edx
c100262e:	83 c9 10             	or     $0x10,%ecx
c1002631:	89 d0                	mov    %edx,%eax
c1002633:	01 c0                	add    %eax,%eax
c1002635:	01 d0                	add    %edx,%eax
c1002637:	c1 e0 02             	shl    $0x2,%eax
c100263a:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c100263f:	88 08                	mov    %cl,(%eax)
c1002641:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002644:	c1 e8 0c             	shr    $0xc,%eax
c1002647:	89 c2                	mov    %eax,%edx
c1002649:	89 d0                	mov    %edx,%eax
c100264b:	01 c0                	add    %eax,%eax
c100264d:	01 d0                	add    %edx,%eax
c100264f:	c1 e0 02             	shl    $0x2,%eax
c1002652:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c1002657:	8b 00                	mov    (%eax),%eax
c1002659:	83 f8 ff             	cmp    $0xffffffff,%eax
c100265c:	75 07                	jne    c1002665 <pmm_init+0x228>
c100265e:	b8 01 00 00 00       	mov    $0x1,%eax
c1002663:	eb 05                	jmp    c100266a <pmm_init+0x22d>
c1002665:	b8 00 00 00 00       	mov    $0x0,%eax
c100266a:	01 45 f0             	add    %eax,-0x10(%ebp)
c100266d:	eb 60                	jmp    c10026cf <pmm_init+0x292>
c100266f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002672:	c1 e8 0c             	shr    $0xc,%eax
c1002675:	89 c2                	mov    %eax,%edx
c1002677:	89 d0                	mov    %edx,%eax
c1002679:	01 c0                	add    %eax,%eax
c100267b:	01 d0                	add    %edx,%eax
c100267d:	c1 e0 02             	shl    $0x2,%eax
c1002680:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002685:	0f b6 08             	movzbl (%eax),%ecx
c1002688:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100268b:	c1 e8 0c             	shr    $0xc,%eax
c100268e:	89 c2                	mov    %eax,%edx
c1002690:	83 c9 20             	or     $0x20,%ecx
c1002693:	89 d0                	mov    %edx,%eax
c1002695:	01 c0                	add    %eax,%eax
c1002697:	01 d0                	add    %edx,%eax
c1002699:	c1 e0 02             	shl    $0x2,%eax
c100269c:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c10026a1:	88 08                	mov    %cl,(%eax)
c10026a3:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026a6:	c1 e8 0c             	shr    $0xc,%eax
c10026a9:	89 c2                	mov    %eax,%edx
c10026ab:	89 d0                	mov    %edx,%eax
c10026ad:	01 c0                	add    %eax,%eax
c10026af:	01 d0                	add    %edx,%eax
c10026b1:	c1 e0 02             	shl    $0x2,%eax
c10026b4:	05 e4 0c 01 c1       	add    $0xc1010ce4,%eax
c10026b9:	8b 00                	mov    (%eax),%eax
c10026bb:	83 f8 ff             	cmp    $0xffffffff,%eax
c10026be:	75 07                	jne    c10026c7 <pmm_init+0x28a>
c10026c0:	b8 01 00 00 00       	mov    $0x1,%eax
c10026c5:	eb 05                	jmp    c10026cc <pmm_init+0x28f>
c10026c7:	b8 00 00 00 00       	mov    $0x0,%eax
c10026cc:	01 45 ec             	add    %eax,-0x14(%ebp)
c10026cf:	81 45 e0 00 10 00 00 	addl   $0x1000,-0x20(%ebp)
c10026d6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c10026d9:	89 d0                	mov    %edx,%eax
c10026db:	c1 e0 02             	shl    $0x2,%eax
c10026de:	01 d0                	add    %edx,%eax
c10026e0:	c1 e0 02             	shl    $0x2,%eax
c10026e3:	89 c2                	mov    %eax,%edx
c10026e5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10026e8:	01 d0                	add    %edx,%eax
c10026ea:	8b 50 0c             	mov    0xc(%eax),%edx
c10026ed:	8b 40 08             	mov    0x8(%eax),%eax
c10026f0:	89 c2                	mov    %eax,%edx
c10026f2:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10026f5:	01 d0                	add    %edx,%eax
c10026f7:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10026fc:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c10026ff:	0f 82 91 fd ff ff    	jb     c1002496 <pmm_init+0x59>
c1002705:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c1002709:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c100270d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1002711:	0f 85 5e fd ff ff    	jne    c1002475 <pmm_init+0x38>
c1002717:	c7 05 f0 0c 61 c1 00 	movl   $0x1000,0xc1610cf0
c100271e:	10 00 00 
c1002721:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002724:	a3 f4 0c 61 c1       	mov    %eax,0xc1610cf4
c1002729:	c7 05 ec 0c 61 c1 e0 	movl   $0xc1010ce0,0xc1610cec
c1002730:	0c 01 c1 
c1002733:	c7 05 e4 0c 61 c1 00 	movl   $0x37000,0xc1610ce4
c100273a:	70 03 00 
c100273d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002740:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c1002745:	8b 15 f0 0c 61 c1    	mov    0xc1610cf0,%edx
c100274b:	89 d0                	mov    %edx,%eax
c100274d:	01 c0                	add    %eax,%eax
c100274f:	01 d0                	add    %edx,%eax
c1002751:	c1 e0 02             	shl    $0x2,%eax
c1002754:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c1002759:	a3 e0 0c 61 c1       	mov    %eax,0xc1610ce0
c100275e:	c7 05 c4 0c 01 c1 00 	movl   $0x48000,0xc1010cc4
c1002765:	80 04 00 
c1002768:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100276b:	a3 c8 0c 01 c1       	mov    %eax,0xc1010cc8
c1002770:	8b 15 e4 0c 61 c1    	mov    0xc1610ce4,%edx
c1002776:	a1 f0 0c 61 c1       	mov    0xc1610cf0,%eax
c100277b:	01 c2                	add    %eax,%edx
c100277d:	89 d0                	mov    %edx,%eax
c100277f:	01 c0                	add    %eax,%eax
c1002781:	01 d0                	add    %edx,%eax
c1002783:	c1 e0 02             	shl    $0x2,%eax
c1002786:	05 e0 0c 01 c1       	add    $0xc1010ce0,%eax
c100278b:	a3 c0 0c 01 c1       	mov    %eax,0xc1010cc0
c1002790:	c7 45 d0 00 00 00 40 	movl   $0x40000000,-0x30(%ebp)
c1002797:	90                   	nop
c1002798:	c7 45 dc 00 00 00 01 	movl   $0x1000000,-0x24(%ebp)
c100279f:	eb 39                	jmp    c10027da <pmm_init+0x39d>
c10027a1:	8b 0d e0 0c 61 c1    	mov    0xc1610ce0,%ecx
c10027a7:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10027aa:	2d 00 00 00 01       	sub    $0x1000000,%eax
c10027af:	c1 e8 0c             	shr    $0xc,%eax
c10027b2:	89 c2                	mov    %eax,%edx
c10027b4:	89 d0                	mov    %edx,%eax
c10027b6:	01 c0                	add    %eax,%eax
c10027b8:	01 d0                	add    %edx,%eax
c10027ba:	c1 e0 02             	shl    $0x2,%eax
c10027bd:	01 c8                	add    %ecx,%eax
c10027bf:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c10027c6:	a1 e8 0c 61 c1       	mov    0xc1610ce8,%eax
c10027cb:	83 e8 01             	sub    $0x1,%eax
c10027ce:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c10027d3:	81 45 dc 00 10 00 00 	addl   $0x1000,-0x24(%ebp)
c10027da:	b8 c0 33 a1 c1       	mov    $0xc1a133c0,%eax
c10027df:	05 ff 0f 00 40       	add    $0x40000fff,%eax
c10027e4:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10027e9:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c10027ec:	72 b3                	jb     c10027a1 <pmm_init+0x364>
c10027ee:	c7 45 d8 00 e0 ff 37 	movl   $0x37ffe000,-0x28(%ebp)
c10027f5:	eb 39                	jmp    c1002830 <pmm_init+0x3f3>
c10027f7:	8b 0d e0 0c 61 c1    	mov    0xc1610ce0,%ecx
c10027fd:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1002800:	2d 00 00 00 01       	sub    $0x1000000,%eax
c1002805:	c1 e8 0c             	shr    $0xc,%eax
c1002808:	89 c2                	mov    %eax,%edx
c100280a:	89 d0                	mov    %edx,%eax
c100280c:	01 c0                	add    %eax,%eax
c100280e:	01 d0                	add    %edx,%eax
c1002810:	c1 e0 02             	shl    $0x2,%eax
c1002813:	01 c8                	add    %ecx,%eax
c1002815:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c100281c:	a1 e8 0c 61 c1       	mov    0xc1610ce8,%eax
c1002821:	83 e8 01             	sub    $0x1,%eax
c1002824:	a3 e8 0c 61 c1       	mov    %eax,0xc1610ce8
c1002829:	81 45 d8 00 10 00 00 	addl   $0x1000,-0x28(%ebp)
c1002830:	81 7d d8 ff ff ff 37 	cmpl   $0x37ffffff,-0x28(%ebp)
c1002837:	76 be                	jbe    c10027f7 <pmm_init+0x3ba>
c1002839:	8b 0d c8 0c 01 c1    	mov    0xc1010cc8,%ecx
c100283f:	8b 15 e8 0c 61 c1    	mov    0xc1610ce8,%edx
c1002845:	a1 f4 0c 61 c1       	mov    0xc1610cf4,%eax
c100284a:	51                   	push   %ecx
c100284b:	52                   	push   %edx
c100284c:	50                   	push   %eax
c100284d:	68 54 a8 00 c1       	push   $0xc100a854
c1002852:	e8 65 27 00 00       	call   c1004fbc <printk>
c1002857:	83 c4 10             	add    $0x10,%esp
c100285a:	90                   	nop
c100285b:	c9                   	leave  
c100285c:	c3                   	ret    

c100285d <pmm_alloc>:
c100285d:	55                   	push   %ebp
c100285e:	89 e5                	mov    %esp,%ebp
c1002860:	83 ec 24             	sub    $0x24,%esp
c1002863:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002866:	88 45 dc             	mov    %al,-0x24(%ebp)
c1002869:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002870:	8b 45 08             	mov    0x8(%ebp),%eax
c1002873:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002878:	c1 e8 0c             	shr    $0xc,%eax
c100287b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100287e:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
c1002882:	75 09                	jne    c100288d <pmm_alloc+0x30>
c1002884:	c7 45 f0 ec 0c 61 c1 	movl   $0xc1610cec,-0x10(%ebp)
c100288b:	eb 16                	jmp    c10028a3 <pmm_alloc+0x46>
c100288d:	80 7d dc 01          	cmpb   $0x1,-0x24(%ebp)
c1002891:	75 09                	jne    c100289c <pmm_alloc+0x3f>
c1002893:	c7 45 f0 e0 0c 61 c1 	movl   $0xc1610ce0,-0x10(%ebp)
c100289a:	eb 07                	jmp    c10028a3 <pmm_alloc+0x46>
c100289c:	c7 45 f0 c0 0c 01 c1 	movl   $0xc1010cc0,-0x10(%ebp)
c10028a3:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c10028aa:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c10028b1:	eb 43                	jmp    c10028f6 <pmm_alloc+0x99>
c10028b3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10028b6:	8b 08                	mov    (%eax),%ecx
c10028b8:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10028bb:	89 d0                	mov    %edx,%eax
c10028bd:	01 c0                	add    %eax,%eax
c10028bf:	01 d0                	add    %edx,%eax
c10028c1:	c1 e0 02             	shl    $0x2,%eax
c10028c4:	01 c8                	add    %ecx,%eax
c10028c6:	8b 40 04             	mov    0x4(%eax),%eax
c10028c9:	83 f8 ff             	cmp    $0xffffffff,%eax
c10028cc:	75 0c                	jne    c10028da <pmm_alloc+0x7d>
c10028ce:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10028d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10028d5:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10028d8:	eb 10                	jmp    c10028ea <pmm_alloc+0x8d>
c10028da:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10028dd:	83 c0 01             	add    $0x1,%eax
c10028e0:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10028e3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10028ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10028ed:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c10028f0:	74 11                	je     c1002903 <pmm_alloc+0xa6>
c10028f2:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10028f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10028f9:	8b 40 04             	mov    0x4(%eax),%eax
c10028fc:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c10028ff:	72 b2                	jb     c10028b3 <pmm_alloc+0x56>
c1002901:	eb 01                	jmp    c1002904 <pmm_alloc+0xa7>
c1002903:	90                   	nop
c1002904:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1002907:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100290a:	eb 2d                	jmp    c1002939 <pmm_alloc+0xdc>
c100290c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100290f:	8b 08                	mov    (%eax),%ecx
c1002911:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1002914:	89 d0                	mov    %edx,%eax
c1002916:	01 c0                	add    %eax,%eax
c1002918:	01 d0                	add    %edx,%eax
c100291a:	c1 e0 02             	shl    $0x2,%eax
c100291d:	01 c8                	add    %ecx,%eax
c100291f:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
c1002926:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002929:	8b 40 08             	mov    0x8(%eax),%eax
c100292c:	8d 50 ff             	lea    -0x1(%eax),%edx
c100292f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002932:	89 50 08             	mov    %edx,0x8(%eax)
c1002935:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1002939:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100293c:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c100293f:	76 cb                	jbe    c100290c <pmm_alloc+0xaf>
c1002941:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002944:	8b 08                	mov    (%eax),%ecx
c1002946:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002949:	89 d0                	mov    %edx,%eax
c100294b:	01 c0                	add    %eax,%eax
c100294d:	01 d0                	add    %edx,%eax
c100294f:	c1 e0 02             	shl    $0x2,%eax
c1002952:	01 c8                	add    %ecx,%eax
c1002954:	8b 40 08             	mov    0x8(%eax),%eax
c1002957:	c9                   	leave  
c1002958:	c3                   	ret    

c1002959 <pmm_free>:
c1002959:	55                   	push   %ebp
c100295a:	89 e5                	mov    %esp,%ebp
c100295c:	83 ec 20             	sub    $0x20,%esp
c100295f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002962:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002967:	c1 e8 0c             	shr    $0xc,%eax
c100296a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100296d:	81 7d 08 ff ff ff 00 	cmpl   $0xffffff,0x8(%ebp)
c1002974:	77 09                	ja     c100297f <pmm_free+0x26>
c1002976:	c7 45 fc ec 0c 61 c1 	movl   $0xc1610cec,-0x4(%ebp)
c100297d:	eb 27                	jmp    c10029a6 <pmm_free+0x4d>
c100297f:	81 7d 08 ff ff ff 37 	cmpl   $0x37ffffff,0x8(%ebp)
c1002986:	77 10                	ja     c1002998 <pmm_free+0x3f>
c1002988:	81 6d 08 00 00 00 01 	subl   $0x1000000,0x8(%ebp)
c100298f:	c7 45 fc e0 0c 61 c1 	movl   $0xc1610ce0,-0x4(%ebp)
c1002996:	eb 0e                	jmp    c10029a6 <pmm_free+0x4d>
c1002998:	81 6d 08 00 00 00 38 	subl   $0x38000000,0x8(%ebp)
c100299f:	c7 45 fc c0 0c 01 c1 	movl   $0xc1010cc0,-0x4(%ebp)
c10029a6:	8b 45 08             	mov    0x8(%ebp),%eax
c10029a9:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10029ae:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10029b1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10029b4:	c1 e8 0c             	shr    $0xc,%eax
c10029b7:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10029ba:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10029c1:	eb 31                	jmp    c10029f4 <pmm_free+0x9b>
c10029c3:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10029c6:	8b 08                	mov    (%eax),%ecx
c10029c8:	8b 55 f8             	mov    -0x8(%ebp),%edx
c10029cb:	89 d0                	mov    %edx,%eax
c10029cd:	01 c0                	add    %eax,%eax
c10029cf:	01 d0                	add    %edx,%eax
c10029d1:	c1 e0 02             	shl    $0x2,%eax
c10029d4:	01 c8                	add    %ecx,%eax
c10029d6:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
c10029dd:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10029e0:	8b 40 08             	mov    0x8(%eax),%eax
c10029e3:	8d 50 01             	lea    0x1(%eax),%edx
c10029e6:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10029e9:	89 50 08             	mov    %edx,0x8(%eax)
c10029ec:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c10029f0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10029f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10029f7:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c10029fa:	72 c7                	jb     c10029c3 <pmm_free+0x6a>
c10029fc:	90                   	nop
c10029fd:	90                   	nop
c10029fe:	c9                   	leave  
c10029ff:	c3                   	ret    

c1002a00 <hash32>:
c1002a00:	55                   	push   %ebp
c1002a01:	89 e5                	mov    %esp,%ebp
c1002a03:	83 ec 10             	sub    $0x10,%esp
c1002a06:	8b 45 08             	mov    0x8(%ebp),%eax
c1002a09:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1002a0f:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002a12:	b8 20 00 00 00       	mov    $0x20,%eax
c1002a17:	2b 45 0c             	sub    0xc(%ebp),%eax
c1002a1a:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002a1d:	89 c1                	mov    %eax,%ecx
c1002a1f:	d3 ea                	shr    %cl,%edx
c1002a21:	89 d0                	mov    %edx,%eax
c1002a23:	c9                   	leave  
c1002a24:	c3                   	ret    

c1002a25 <setup_vpt>:
c1002a25:	55                   	push   %ebp
c1002a26:	89 e5                	mov    %esp,%ebp
c1002a28:	83 ec 28             	sub    $0x28,%esp
c1002a2b:	c7 45 e0 e0 00 00 00 	movl   $0xe0,-0x20(%ebp)
c1002a32:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002a39:	eb 27                	jmp    c1002a62 <setup_vpt+0x3d>
c1002a3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002a3e:	c1 e0 0c             	shl    $0xc,%eax
c1002a41:	05 00 30 93 c1       	add    $0xc1933000,%eax
c1002a46:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002a4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002a4f:	05 00 03 00 00       	add    $0x300,%eax
c1002a54:	83 ca 03             	or     $0x3,%edx
c1002a57:	89 14 85 00 10 61 c1 	mov    %edx,-0x3e9ef000(,%eax,4)
c1002a5e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002a62:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002a65:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002a68:	72 d1                	jb     c1002a3b <setup_vpt+0x16>
c1002a6a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002a71:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002a78:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002a7f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1002a86:	eb 3d                	jmp    c1002ac5 <setup_vpt+0xa0>
c1002a88:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002a8b:	8d 50 01             	lea    0x1(%eax),%edx
c1002a8e:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1002a91:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1002a94:	83 ca 03             	or     $0x3,%edx
c1002a97:	8b 4d ec             	mov    -0x14(%ebp),%ecx
c1002a9a:	c1 e1 0a             	shl    $0xa,%ecx
c1002a9d:	01 c8                	add    %ecx,%eax
c1002a9f:	89 14 85 00 30 93 c1 	mov    %edx,-0x3e6cd000(,%eax,4)
c1002aa6:	81 7d e8 00 04 00 00 	cmpl   $0x400,-0x18(%ebp)
c1002aad:	75 0b                	jne    c1002aba <setup_vpt+0x95>
c1002aaf:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002ab3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1002aba:	81 45 f0 00 10 00 00 	addl   $0x1000,-0x10(%ebp)
c1002ac1:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1002ac5:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1002ac8:	c1 e0 0a             	shl    $0xa,%eax
c1002acb:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1002ace:	72 b8                	jb     c1002a88 <setup_vpt+0x63>
c1002ad0:	b8 60 1f 00 40       	mov    $0x40001f60,%eax
c1002ad5:	68 00 00 00 40       	push   $0x40000000
c1002ada:	50                   	push   %eax
c1002adb:	68 00 00 00 40       	push   $0x40000000
c1002ae0:	68 00 10 61 c1       	push   $0xc1611000
c1002ae5:	e8 30 02 00 00       	call   c1002d1a <vmm_map>
c1002aea:	83 c4 10             	add    $0x10,%esp
c1002aed:	b8 00 10 61 c1       	mov    $0xc1611000,%eax
c1002af2:	05 00 00 00 40       	add    $0x40000000,%eax
c1002af7:	0f 22 d8             	mov    %eax,%cr3
c1002afa:	90                   	nop
c1002afb:	c9                   	leave  
c1002afc:	c3                   	ret    

c1002afd <vmm_malloc>:
c1002afd:	55                   	push   %ebp
c1002afe:	89 e5                	mov    %esp,%ebp
c1002b00:	53                   	push   %ebx
c1002b01:	83 ec 34             	sub    $0x34,%esp
c1002b04:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002b07:	88 45 d4             	mov    %al,-0x2c(%ebp)
c1002b0a:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
c1002b0e:	83 ec 08             	sub    $0x8,%esp
c1002b11:	50                   	push   %eax
c1002b12:	ff 75 08             	pushl  0x8(%ebp)
c1002b15:	e8 43 fd ff ff       	call   c100285d <pmm_alloc>
c1002b1a:	83 c4 10             	add    $0x10,%esp
c1002b1d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002b20:	8b 45 08             	mov    0x8(%ebp),%eax
c1002b23:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002b28:	c1 e8 0c             	shr    $0xc,%eax
c1002b2b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002b2e:	80 7d d4 02          	cmpb   $0x2,-0x2c(%ebp)
c1002b32:	0f 85 db 00 00 00    	jne    c1002c13 <vmm_malloc+0x116>
c1002b38:	a1 14 cb 00 c1       	mov    0xc100cb14,%eax
c1002b3d:	a3 00 20 93 c1       	mov    %eax,0xc1932000
c1002b42:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002b49:	eb 5d                	jmp    c1002ba8 <vmm_malloc+0xab>
c1002b4b:	8b 15 14 cb 00 c1    	mov    0xc100cb14,%edx
c1002b51:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002b56:	29 c2                	sub    %eax,%edx
c1002b58:	89 d0                	mov    %edx,%eax
c1002b5a:	c1 e8 16             	shr    $0x16,%eax
c1002b5d:	89 c3                	mov    %eax,%ebx
c1002b5f:	8b 15 14 cb 00 c1    	mov    0xc100cb14,%edx
c1002b65:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002b6a:	29 c2                	sub    %eax,%edx
c1002b6c:	89 d0                	mov    %edx,%eax
c1002b6e:	c1 e8 0c             	shr    $0xc,%eax
c1002b71:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002b76:	89 c1                	mov    %eax,%ecx
c1002b78:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002b7b:	83 c8 07             	or     $0x7,%eax
c1002b7e:	89 c2                	mov    %eax,%edx
c1002b80:	89 d8                	mov    %ebx,%eax
c1002b82:	c1 e0 0a             	shl    $0xa,%eax
c1002b85:	01 c8                	add    %ecx,%eax
c1002b87:	89 14 85 00 20 91 c1 	mov    %edx,-0x3e6ee000(,%eax,4)
c1002b8e:	a1 14 cb 00 c1       	mov    0xc100cb14,%eax
c1002b93:	05 00 10 00 00       	add    $0x1000,%eax
c1002b98:	a3 14 cb 00 c1       	mov    %eax,0xc100cb14
c1002b9d:	81 45 f4 00 10 00 00 	addl   $0x1000,-0xc(%ebp)
c1002ba4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002ba8:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002bab:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1002bae:	72 9b                	jb     c1002b4b <vmm_malloc+0x4e>
c1002bb0:	8b 15 14 cb 00 c1    	mov    0xc100cb14,%edx
c1002bb6:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002bbb:	29 c2                	sub    %eax,%edx
c1002bbd:	89 d0                	mov    %edx,%eax
c1002bbf:	05 ff ff 3f 00       	add    $0x3fffff,%eax
c1002bc4:	c1 e8 16             	shr    $0x16,%eax
c1002bc7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002bca:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1002bd1:	eb 2e                	jmp    c1002c01 <vmm_malloc+0x104>
c1002bd3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002bd6:	c1 e0 0c             	shl    $0xc,%eax
c1002bd9:	05 00 20 91 c1       	add    $0xc1912000,%eax
c1002bde:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002be4:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002be9:	c1 e8 16             	shr    $0x16,%eax
c1002bec:	89 c1                	mov    %eax,%ecx
c1002bee:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002bf1:	01 c8                	add    %ecx,%eax
c1002bf3:	83 ca 07             	or     $0x7,%edx
c1002bf6:	89 14 85 00 10 61 c1 	mov    %edx,-0x3e9ef000(,%eax,4)
c1002bfd:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1002c01:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002c04:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002c07:	72 ca                	jb     c1002bd3 <vmm_malloc+0xd6>
c1002c09:	a1 00 20 93 c1       	mov    0xc1932000,%eax
c1002c0e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1002c11:	eb 07                	jmp    c1002c1a <vmm_malloc+0x11d>
c1002c13:	81 6d f4 00 00 00 40 	subl   $0x40000000,-0xc(%ebp)
c1002c1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002c1d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002c20:	c9                   	leave  
c1002c21:	c3                   	ret    

c1002c22 <vmm_free>:
c1002c22:	55                   	push   %ebp
c1002c23:	89 e5                	mov    %esp,%ebp
c1002c25:	53                   	push   %ebx
c1002c26:	83 ec 14             	sub    $0x14,%esp
c1002c29:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002c2c:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002c31:	c1 e8 0c             	shr    $0xc,%eax
c1002c34:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1002c37:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c3a:	05 00 00 00 40       	add    $0x40000000,%eax
c1002c3f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002c42:	81 7d ec ff ff ff 37 	cmpl   $0x37ffffff,-0x14(%ebp)
c1002c49:	0f 86 ae 00 00 00    	jbe    c1002cfd <vmm_free+0xdb>
c1002c4f:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c52:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002c57:	89 c2                	mov    %eax,%edx
c1002c59:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002c5e:	29 c2                	sub    %eax,%edx
c1002c60:	89 d0                	mov    %edx,%eax
c1002c62:	c1 e8 16             	shr    $0x16,%eax
c1002c65:	89 c2                	mov    %eax,%edx
c1002c67:	8b 45 08             	mov    0x8(%ebp),%eax
c1002c6a:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002c6f:	89 c1                	mov    %eax,%ecx
c1002c71:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002c76:	29 c1                	sub    %eax,%ecx
c1002c78:	89 c8                	mov    %ecx,%eax
c1002c7a:	c1 e8 0c             	shr    $0xc,%eax
c1002c7d:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002c82:	c1 e2 0a             	shl    $0xa,%edx
c1002c85:	01 d0                	add    %edx,%eax
c1002c87:	8b 04 85 00 20 91 c1 	mov    -0x3e6ee000(,%eax,4),%eax
c1002c8e:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002c93:	83 ec 08             	sub    $0x8,%esp
c1002c96:	ff 75 0c             	pushl  0xc(%ebp)
c1002c99:	50                   	push   %eax
c1002c9a:	e8 ba fc ff ff       	call   c1002959 <pmm_free>
c1002c9f:	83 c4 10             	add    $0x10,%esp
c1002ca2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002ca9:	eb 48                	jmp    c1002cf3 <vmm_free+0xd1>
c1002cab:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002cb0:	8b 55 08             	mov    0x8(%ebp),%edx
c1002cb3:	29 c2                	sub    %eax,%edx
c1002cb5:	89 d0                	mov    %edx,%eax
c1002cb7:	c1 e8 16             	shr    $0x16,%eax
c1002cba:	89 c3                	mov    %eax,%ebx
c1002cbc:	a1 10 cb 00 c1       	mov    0xc100cb10,%eax
c1002cc1:	8b 55 08             	mov    0x8(%ebp),%edx
c1002cc4:	29 c2                	sub    %eax,%edx
c1002cc6:	89 d0                	mov    %edx,%eax
c1002cc8:	c1 e8 0c             	shr    $0xc,%eax
c1002ccb:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002cd0:	89 c1                	mov    %eax,%ecx
c1002cd2:	8b 45 08             	mov    0x8(%ebp),%eax
c1002cd5:	83 c8 06             	or     $0x6,%eax
c1002cd8:	89 c2                	mov    %eax,%edx
c1002cda:	89 d8                	mov    %ebx,%eax
c1002cdc:	c1 e0 0a             	shl    $0xa,%eax
c1002cdf:	01 c8                	add    %ecx,%eax
c1002ce1:	89 14 85 00 20 91 c1 	mov    %edx,-0x3e6ee000(,%eax,4)
c1002ce8:	81 45 08 00 10 00 00 	addl   $0x1000,0x8(%ebp)
c1002cef:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002cf3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002cf6:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1002cf9:	72 b0                	jb     c1002cab <vmm_free+0x89>
c1002cfb:	eb 17                	jmp    c1002d14 <vmm_free+0xf2>
c1002cfd:	8b 45 08             	mov    0x8(%ebp),%eax
c1002d00:	05 00 00 00 40       	add    $0x40000000,%eax
c1002d05:	83 ec 08             	sub    $0x8,%esp
c1002d08:	ff 75 0c             	pushl  0xc(%ebp)
c1002d0b:	50                   	push   %eax
c1002d0c:	e8 48 fc ff ff       	call   c1002959 <pmm_free>
c1002d11:	83 c4 10             	add    $0x10,%esp
c1002d14:	90                   	nop
c1002d15:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1002d18:	c9                   	leave  
c1002d19:	c3                   	ret    

c1002d1a <vmm_map>:
c1002d1a:	55                   	push   %ebp
c1002d1b:	89 e5                	mov    %esp,%ebp
c1002d1d:	53                   	push   %ebx
c1002d1e:	83 ec 20             	sub    $0x20,%esp
c1002d21:	8b 45 0c             	mov    0xc(%ebp),%eax
c1002d24:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002d29:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1002d2c:	8b 45 10             	mov    0x10(%ebp),%eax
c1002d2f:	05 ff 0f 00 00       	add    $0xfff,%eax
c1002d34:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1002d39:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1002d3c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002d3f:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1002d42:	81 65 14 00 f0 ff ff 	andl   $0xfffff000,0x14(%ebp)
c1002d49:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002d4c:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1002d4f:	c1 e8 0c             	shr    $0xc,%eax
c1002d52:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002d55:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002d5c:	eb 3d                	jmp    c1002d9b <vmm_map+0x81>
c1002d5e:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002d61:	c1 e8 16             	shr    $0x16,%eax
c1002d64:	89 c3                	mov    %eax,%ebx
c1002d66:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1002d69:	c1 e8 0c             	shr    $0xc,%eax
c1002d6c:	25 ff 03 00 00       	and    $0x3ff,%eax
c1002d71:	89 c1                	mov    %eax,%ecx
c1002d73:	8b 45 14             	mov    0x14(%ebp),%eax
c1002d76:	83 c8 07             	or     $0x7,%eax
c1002d79:	89 c2                	mov    %eax,%edx
c1002d7b:	89 d8                	mov    %ebx,%eax
c1002d7d:	c1 e0 0a             	shl    $0xa,%eax
c1002d80:	01 c8                	add    %ecx,%eax
c1002d82:	89 14 85 00 20 61 c1 	mov    %edx,-0x3e9ee000(,%eax,4)
c1002d89:	81 45 14 00 10 00 00 	addl   $0x1000,0x14(%ebp)
c1002d90:	81 45 f8 00 10 00 00 	addl   $0x1000,-0x8(%ebp)
c1002d97:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002d9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002d9e:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1002da1:	72 bb                	jb     c1002d5e <vmm_map+0x44>
c1002da3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002da6:	05 ff 03 00 00       	add    $0x3ff,%eax
c1002dab:	c1 e8 0a             	shr    $0xa,%eax
c1002dae:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1002db1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1002db8:	eb 3d                	jmp    c1002df7 <vmm_map+0xdd>
c1002dba:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002dbd:	c1 e8 16             	shr    $0x16,%eax
c1002dc0:	89 c2                	mov    %eax,%edx
c1002dc2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002dc5:	01 d0                	add    %edx,%eax
c1002dc7:	c1 e0 0c             	shl    $0xc,%eax
c1002dca:	05 00 20 61 c1       	add    $0xc1612000,%eax
c1002dcf:	8d 90 00 00 00 40    	lea    0x40000000(%eax),%edx
c1002dd5:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002dd8:	c1 e8 16             	shr    $0x16,%eax
c1002ddb:	89 c1                	mov    %eax,%ecx
c1002ddd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002de0:	01 c8                	add    %ecx,%eax
c1002de2:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
c1002de9:	8b 45 08             	mov    0x8(%ebp),%eax
c1002dec:	01 c8                	add    %ecx,%eax
c1002dee:	83 ca 07             	or     $0x7,%edx
c1002df1:	89 10                	mov    %edx,(%eax)
c1002df3:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1002df7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1002dfa:	3b 45 e0             	cmp    -0x20(%ebp),%eax
c1002dfd:	72 bb                	jb     c1002dba <vmm_map+0xa0>
c1002dff:	90                   	nop
c1002e00:	90                   	nop
c1002e01:	83 c4 20             	add    $0x20,%esp
c1002e04:	5b                   	pop    %ebx
c1002e05:	5d                   	pop    %ebp
c1002e06:	c3                   	ret    

c1002e07 <setup_pgdir>:
c1002e07:	55                   	push   %ebp
c1002e08:	89 e5                	mov    %esp,%ebp
c1002e0a:	57                   	push   %edi
c1002e0b:	56                   	push   %esi
c1002e0c:	53                   	push   %ebx
c1002e0d:	83 ec 1c             	sub    $0x1c,%esp
c1002e10:	83 ec 08             	sub    $0x8,%esp
c1002e13:	6a 01                	push   $0x1
c1002e15:	68 00 10 00 00       	push   $0x1000
c1002e1a:	e8 de fc ff ff       	call   c1002afd <vmm_malloc>
c1002e1f:	83 c4 10             	add    $0x10,%esp
c1002e22:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002e25:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002e28:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1002e2d:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002e32:	8b 0b                	mov    (%ebx),%ecx
c1002e34:	89 08                	mov    %ecx,(%eax)
c1002e36:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002e3a:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002e3e:	8d 78 04             	lea    0x4(%eax),%edi
c1002e41:	83 e7 fc             	and    $0xfffffffc,%edi
c1002e44:	29 f8                	sub    %edi,%eax
c1002e46:	29 c3                	sub    %eax,%ebx
c1002e48:	01 c2                	add    %eax,%edx
c1002e4a:	83 e2 fc             	and    $0xfffffffc,%edx
c1002e4d:	89 d0                	mov    %edx,%eax
c1002e4f:	c1 e8 02             	shr    $0x2,%eax
c1002e52:	89 de                	mov    %ebx,%esi
c1002e54:	89 c1                	mov    %eax,%ecx
c1002e56:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002e58:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002e5b:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002e5e:	5b                   	pop    %ebx
c1002e5f:	5e                   	pop    %esi
c1002e60:	5f                   	pop    %edi
c1002e61:	5d                   	pop    %ebp
c1002e62:	c3                   	ret    

c1002e63 <sys_malloc>:
c1002e63:	55                   	push   %ebp
c1002e64:	89 e5                	mov    %esp,%ebp
c1002e66:	57                   	push   %edi
c1002e67:	56                   	push   %esi
c1002e68:	53                   	push   %ebx
c1002e69:	83 ec 1c             	sub    $0x1c,%esp
c1002e6c:	83 ec 08             	sub    $0x8,%esp
c1002e6f:	6a 02                	push   $0x2
c1002e71:	ff 75 08             	pushl  0x8(%ebp)
c1002e74:	e8 84 fc ff ff       	call   c1002afd <vmm_malloc>
c1002e79:	83 c4 10             	add    $0x10,%esp
c1002e7c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002e7f:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1002e84:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002e87:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1002e8c:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002e91:	8b 0b                	mov    (%ebx),%ecx
c1002e93:	89 08                	mov    %ecx,(%eax)
c1002e95:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002e99:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002e9d:	8d 78 04             	lea    0x4(%eax),%edi
c1002ea0:	83 e7 fc             	and    $0xfffffffc,%edi
c1002ea3:	29 f8                	sub    %edi,%eax
c1002ea5:	29 c3                	sub    %eax,%ebx
c1002ea7:	01 c2                	add    %eax,%edx
c1002ea9:	83 e2 fc             	and    $0xfffffffc,%edx
c1002eac:	89 d0                	mov    %edx,%eax
c1002eae:	c1 e8 02             	shr    $0x2,%eax
c1002eb1:	89 de                	mov    %ebx,%esi
c1002eb3:	89 c1                	mov    %eax,%ecx
c1002eb5:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002eb7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002eba:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002ebd:	5b                   	pop    %ebx
c1002ebe:	5e                   	pop    %esi
c1002ebf:	5f                   	pop    %edi
c1002ec0:	5d                   	pop    %ebp
c1002ec1:	c3                   	ret    

c1002ec2 <sys_free>:
c1002ec2:	55                   	push   %ebp
c1002ec3:	89 e5                	mov    %esp,%ebp
c1002ec5:	57                   	push   %edi
c1002ec6:	56                   	push   %esi
c1002ec7:	53                   	push   %ebx
c1002ec8:	83 ec 0c             	sub    $0xc,%esp
c1002ecb:	83 ec 08             	sub    $0x8,%esp
c1002ece:	ff 75 0c             	pushl  0xc(%ebp)
c1002ed1:	ff 75 08             	pushl  0x8(%ebp)
c1002ed4:	e8 49 fd ff ff       	call   c1002c22 <vmm_free>
c1002ed9:	83 c4 10             	add    $0x10,%esp
c1002edc:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1002ee1:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002ee4:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1002ee9:	ba 00 10 00 00       	mov    $0x1000,%edx
c1002eee:	8b 0b                	mov    (%ebx),%ecx
c1002ef0:	89 08                	mov    %ecx,(%eax)
c1002ef2:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1002ef6:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1002efa:	8d 78 04             	lea    0x4(%eax),%edi
c1002efd:	83 e7 fc             	and    $0xfffffffc,%edi
c1002f00:	29 f8                	sub    %edi,%eax
c1002f02:	29 c3                	sub    %eax,%ebx
c1002f04:	01 c2                	add    %eax,%edx
c1002f06:	83 e2 fc             	and    $0xfffffffc,%edx
c1002f09:	89 d0                	mov    %edx,%eax
c1002f0b:	c1 e8 02             	shr    $0x2,%eax
c1002f0e:	89 de                	mov    %ebx,%esi
c1002f10:	89 c1                	mov    %eax,%ecx
c1002f12:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1002f14:	90                   	nop
c1002f15:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1002f18:	5b                   	pop    %ebx
c1002f19:	5e                   	pop    %esi
c1002f1a:	5f                   	pop    %edi
c1002f1b:	5d                   	pop    %ebp
c1002f1c:	c3                   	ret    

c1002f1d <sys_mmap>:
c1002f1d:	55                   	push   %ebp
c1002f1e:	89 e5                	mov    %esp,%ebp
c1002f20:	83 ec 10             	sub    $0x10,%esp
c1002f23:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1002f28:	8b 40 2c             	mov    0x2c(%eax),%eax
c1002f2b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002f2e:	ff 75 10             	pushl  0x10(%ebp)
c1002f31:	ff 75 0c             	pushl  0xc(%ebp)
c1002f34:	ff 75 08             	pushl  0x8(%ebp)
c1002f37:	ff 75 fc             	pushl  -0x4(%ebp)
c1002f3a:	e8 db fd ff ff       	call   c1002d1a <vmm_map>
c1002f3f:	83 c4 10             	add    $0x10,%esp
c1002f42:	90                   	nop
c1002f43:	c9                   	leave  
c1002f44:	c3                   	ret    

c1002f45 <hash32>:
c1002f45:	55                   	push   %ebp
c1002f46:	89 e5                	mov    %esp,%ebp
c1002f48:	83 ec 10             	sub    $0x10,%esp
c1002f4b:	8b 45 08             	mov    0x8(%ebp),%eax
c1002f4e:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1002f54:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1002f57:	b8 20 00 00 00       	mov    $0x20,%eax
c1002f5c:	2b 45 0c             	sub    0xc(%ebp),%eax
c1002f5f:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1002f62:	89 c1                	mov    %eax,%ecx
c1002f64:	d3 ea                	shr    %cl,%edx
c1002f66:	89 d0                	mov    %edx,%eax
c1002f68:	c9                   	leave  
c1002f69:	c3                   	ret    

c1002f6a <kernel_task_init>:
c1002f6a:	55                   	push   %ebp
c1002f6b:	89 e5                	mov    %esp,%ebp
c1002f6d:	83 ec 28             	sub    $0x28,%esp
c1002f70:	c7 45 e8 84 0c 01 c1 	movl   $0xc1010c84,-0x18(%ebp)
c1002f77:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002f7a:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1002f7d:	89 50 04             	mov    %edx,0x4(%eax)
c1002f80:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002f83:	8b 50 04             	mov    0x4(%eax),%edx
c1002f86:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1002f89:	89 10                	mov    %edx,(%eax)
c1002f8b:	90                   	nop
c1002f8c:	c7 45 ec 8c 0c 01 c1 	movl   $0xc1010c8c,-0x14(%ebp)
c1002f93:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002f96:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1002f99:	89 50 04             	mov    %edx,0x4(%eax)
c1002f9c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002f9f:	8b 50 04             	mov    0x4(%eax),%edx
c1002fa2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1002fa5:	89 10                	mov    %edx,(%eax)
c1002fa7:	90                   	nop
c1002fa8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1002faf:	eb 27                	jmp    c1002fd8 <kernel_task_init+0x6e>
c1002fb1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1002fb4:	c1 e0 03             	shl    $0x3,%eax
c1002fb7:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c1002fbc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1002fbf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002fc2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1002fc5:	89 50 04             	mov    %edx,0x4(%eax)
c1002fc8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002fcb:	8b 50 04             	mov    0x4(%eax),%edx
c1002fce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1002fd1:	89 10                	mov    %edx,(%eax)
c1002fd3:	90                   	nop
c1002fd4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1002fd8:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%ebp)
c1002fdf:	7e d0                	jle    c1002fb1 <kernel_task_init+0x47>
c1002fe1:	83 ec 0c             	sub    $0xc,%esp
c1002fe4:	6a 01                	push   $0x1
c1002fe6:	e8 43 06 00 00       	call   c100362e <alloc_task>
c1002feb:	83 c4 10             	add    $0x10,%esp
c1002fee:	a3 00 30 a1 c1       	mov    %eax,0xc1a13000
c1002ff3:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1002ff8:	85 c0                	test   %eax,%eax
c1002ffa:	75 10                	jne    c100300c <kernel_task_init+0xa2>
c1002ffc:	83 ec 0c             	sub    $0xc,%esp
c1002fff:	68 9c a8 00 c1       	push   $0xc100a89c
c1003004:	e8 b3 1f 00 00       	call   c1004fbc <printk>
c1003009:	83 c4 10             	add    $0x10,%esp
c100300c:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003011:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c1003017:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100301c:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003023:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003028:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c100302f:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003034:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c100303b:	c7 05 80 0c 01 c1 00 	movl   $0x0,0xc1010c80
c1003042:	00 00 00 
c1003045:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100304a:	83 ec 08             	sub    $0x8,%esp
c100304d:	68 af a8 00 c1       	push   $0xc100a8af
c1003052:	50                   	push   %eax
c1003053:	e8 6d 03 00 00       	call   c10033c5 <set_task_name>
c1003058:	83 c4 10             	add    $0x10,%esp
c100305b:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003060:	89 c2                	mov    %eax,%edx
c1003062:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003067:	81 c2 00 10 00 00    	add    $0x1000,%edx
c100306d:	89 50 24             	mov    %edx,0x24(%eax)
c1003070:	ba 00 10 61 c1       	mov    $0xc1611000,%edx
c1003075:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100307a:	81 c2 00 00 00 40    	add    $0x40000000,%edx
c1003080:	89 50 28             	mov    %edx,0x28(%eax)
c1003083:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003088:	c7 80 f4 00 00 00 00 	movl   $0x0,0xf4(%eax)
c100308f:	00 00 00 
c1003092:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003097:	8b 40 24             	mov    0x24(%eax),%eax
c100309a:	8d 50 b4             	lea    -0x4c(%eax),%edx
c100309d:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030a2:	89 50 34             	mov    %edx,0x34(%eax)
c10030a5:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030aa:	8b 40 34             	mov    0x34(%eax),%eax
c10030ad:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c10030b4:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030b9:	8b 40 34             	mov    0x34(%eax),%eax
c10030bc:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c10030c3:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030c8:	8b 40 34             	mov    0x34(%eax),%eax
c10030cb:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c10030d2:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030d7:	8b 40 34             	mov    0x34(%eax),%eax
c10030da:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c10030e1:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030e6:	8b 40 34             	mov    0x34(%eax),%eax
c10030e9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c10030ef:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10030f4:	8b 40 34             	mov    0x34(%eax),%eax
c10030f7:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c10030fe:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003103:	8b 40 34             	mov    0x34(%eax),%eax
c1003106:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100310d:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003112:	8b 40 34             	mov    0x34(%eax),%eax
c1003115:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c100311c:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003121:	8b 40 34             	mov    0x34(%eax),%eax
c1003124:	66 c7 40 3c 08 00    	movw   $0x8,0x3c(%eax)
c100312a:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100312f:	8b 40 34             	mov    0x34(%eax),%eax
c1003132:	66 c7 40 48 10 00    	movw   $0x10,0x48(%eax)
c1003138:	8b 15 00 30 a1 c1    	mov    0xc1a13000,%edx
c100313e:	8b 52 34             	mov    0x34(%edx),%edx
c1003141:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c1003145:	66 89 42 24          	mov    %ax,0x24(%edx)
c1003149:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100314e:	8b 40 34             	mov    0x34(%eax),%eax
c1003151:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1003155:	66 89 50 28          	mov    %dx,0x28(%eax)
c1003159:	8b 15 00 30 a1 c1    	mov    0xc1a13000,%edx
c100315f:	8b 52 34             	mov    0x34(%edx),%edx
c1003162:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1003166:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c100316a:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100316f:	8b 40 34             	mov    0x34(%eax),%eax
c1003172:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1003178:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100317d:	8b 40 34             	mov    0x34(%eax),%eax
c1003180:	ba 24 37 00 c1       	mov    $0xc1003724,%edx
c1003185:	89 50 38             	mov    %edx,0x38(%eax)
c1003188:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100318d:	8b 40 34             	mov    0x34(%eax),%eax
c1003190:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1003197:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100319c:	8b 50 24             	mov    0x24(%eax),%edx
c100319f:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031a4:	8b 40 34             	mov    0x34(%eax),%eax
c10031a7:	83 ea 4c             	sub    $0x4c,%edx
c10031aa:	89 50 44             	mov    %edx,0x44(%eax)
c10031ad:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031b2:	8b 55 08             	mov    0x8(%ebp),%edx
c10031b5:	89 50 38             	mov    %edx,0x38(%eax)
c10031b8:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031bd:	8b 50 34             	mov    0x34(%eax),%edx
c10031c0:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031c5:	89 50 3c             	mov    %edx,0x3c(%eax)
c10031c8:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031cd:	8b 50 34             	mov    0x34(%eax),%edx
c10031d0:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031d5:	8b 52 10             	mov    0x10(%edx),%edx
c10031d8:	89 50 40             	mov    %edx,0x40(%eax)
c10031db:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031e0:	8b 50 34             	mov    0x34(%eax),%edx
c10031e3:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031e8:	8b 52 14             	mov    0x14(%edx),%edx
c10031eb:	89 50 48             	mov    %edx,0x48(%eax)
c10031ee:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c10031f3:	83 c0 58             	add    $0x58,%eax
c10031f6:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10031f9:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10031fc:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10031ff:	89 50 04             	mov    %edx,0x4(%eax)
c1003202:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003205:	8b 50 04             	mov    0x4(%eax),%edx
c1003208:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100320b:	89 10                	mov    %edx,(%eax)
c100320d:	90                   	nop
c100320e:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003213:	83 c0 58             	add    $0x58,%eax
c1003216:	83 ec 0c             	sub    $0xc,%esp
c1003219:	50                   	push   %eax
c100321a:	e8 10 02 00 00       	call   c100342f <add_link>
c100321f:	83 c4 10             	add    $0x10,%esp
c1003222:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003227:	83 c0 60             	add    $0x60,%eax
c100322a:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100322d:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003230:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1003233:	89 50 04             	mov    %edx,0x4(%eax)
c1003236:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003239:	8b 50 04             	mov    0x4(%eax),%edx
c100323c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100323f:	89 10                	mov    %edx,(%eax)
c1003241:	90                   	nop
c1003242:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003247:	83 c0 60             	add    $0x60,%eax
c100324a:	83 ec 0c             	sub    $0xc,%esp
c100324d:	50                   	push   %eax
c100324e:	e8 2c 02 00 00       	call   c100347f <add_all_link>
c1003253:	83 c4 10             	add    $0x10,%esp
c1003256:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100325d:	eb 16                	jmp    c1003275 <kernel_task_init+0x30b>
c100325f:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003264:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003267:	83 c2 1c             	add    $0x1c,%edx
c100326a:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1003271:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1003275:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c1003279:	7e e4                	jle    c100325f <kernel_task_init+0x2f5>
c100327b:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003280:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1003285:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100328a:	83 ec 0c             	sub    $0xc,%esp
c100328d:	50                   	push   %eax
c100328e:	e8 6f 02 00 00       	call   c1003502 <add_pid_hash>
c1003293:	83 c4 10             	add    $0x10,%esp
c1003296:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c100329b:	83 ec 0c             	sub    $0xc,%esp
c100329e:	50                   	push   %eax
c100329f:	e8 de 06 00 00       	call   c1003982 <wakeup_task>
c10032a4:	83 c4 10             	add    $0x10,%esp
c10032a7:	c7 05 94 0c 01 c1 01 	movl   $0x1,0xc1010c94
c10032ae:	00 00 00 
c10032b1:	90                   	nop
c10032b2:	c9                   	leave  
c10032b3:	c3                   	ret    

c10032b4 <set_pid_bit>:
c10032b4:	55                   	push   %ebp
c10032b5:	89 e5                	mov    %esp,%ebp
c10032b7:	83 ec 10             	sub    $0x10,%esp
c10032ba:	8b 45 08             	mov    0x8(%ebp),%eax
c10032bd:	8d 50 07             	lea    0x7(%eax),%edx
c10032c0:	85 c0                	test   %eax,%eax
c10032c2:	0f 48 c2             	cmovs  %edx,%eax
c10032c5:	c1 f8 03             	sar    $0x3,%eax
c10032c8:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10032cb:	8b 45 08             	mov    0x8(%ebp),%eax
c10032ce:	99                   	cltd   
c10032cf:	c1 ea 1d             	shr    $0x1d,%edx
c10032d2:	01 d0                	add    %edx,%eax
c10032d4:	83 e0 07             	and    $0x7,%eax
c10032d7:	29 d0                	sub    %edx,%eax
c10032d9:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10032dc:	90                   	nop
c10032dd:	c9                   	leave  
c10032de:	c3                   	ret    

c10032df <clear_pid_bit>:
c10032df:	55                   	push   %ebp
c10032e0:	89 e5                	mov    %esp,%ebp
c10032e2:	83 ec 10             	sub    $0x10,%esp
c10032e5:	8b 45 08             	mov    0x8(%ebp),%eax
c10032e8:	8d 50 07             	lea    0x7(%eax),%edx
c10032eb:	85 c0                	test   %eax,%eax
c10032ed:	0f 48 c2             	cmovs  %edx,%eax
c10032f0:	c1 f8 03             	sar    $0x3,%eax
c10032f3:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10032f6:	8b 45 08             	mov    0x8(%ebp),%eax
c10032f9:	99                   	cltd   
c10032fa:	c1 ea 1d             	shr    $0x1d,%edx
c10032fd:	01 d0                	add    %edx,%eax
c10032ff:	83 e0 07             	and    $0x7,%eax
c1003302:	29 d0                	sub    %edx,%eax
c1003304:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003307:	90                   	nop
c1003308:	c9                   	leave  
c1003309:	c3                   	ret    

c100330a <find_free_pid>:
c100330a:	55                   	push   %ebp
c100330b:	89 e5                	mov    %esp,%ebp
c100330d:	83 ec 10             	sub    $0x10,%esp
c1003310:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c1003317:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c100331e:	eb 1b                	jmp    c100333b <find_free_pid+0x31>
c1003320:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1003327:	eb 08                	jmp    c1003331 <find_free_pid+0x27>
c1003329:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100332d:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1003331:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
c1003335:	7e f2                	jle    c1003329 <find_free_pid+0x1f>
c1003337:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100333b:	81 7d f8 00 80 00 00 	cmpl   $0x8000,-0x8(%ebp)
c1003342:	75 dc                	jne    c1003320 <find_free_pid+0x16>
c1003344:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1003349:	c9                   	leave  
c100334a:	c3                   	ret    

c100334b <alloc_pid>:
c100334b:	55                   	push   %ebp
c100334c:	89 e5                	mov    %esp,%ebp
c100334e:	83 ec 10             	sub    $0x10,%esp
c1003351:	a1 20 cb 00 c1       	mov    0xc100cb20,%eax
c1003356:	85 c0                	test   %eax,%eax
c1003358:	75 07                	jne    c1003361 <alloc_pid+0x16>
c100335a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100335f:	eb 44                	jmp    c10033a5 <alloc_pid+0x5a>
c1003361:	81 7d fc ff 7f 00 00 	cmpl   $0x7fff,-0x4(%ebp)
c1003368:	75 07                	jne    c1003371 <alloc_pid+0x26>
c100336a:	e8 9b ff ff ff       	call   c100330a <find_free_pid>
c100336f:	eb 08                	jmp    c1003379 <alloc_pid+0x2e>
c1003371:	a1 80 0c 01 c1       	mov    0xc1010c80,%eax
c1003376:	83 c0 01             	add    $0x1,%eax
c1003379:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100337c:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1003380:	78 18                	js     c100339a <alloc_pid+0x4f>
c1003382:	ff 75 fc             	pushl  -0x4(%ebp)
c1003385:	e8 2a ff ff ff       	call   c10032b4 <set_pid_bit>
c100338a:	83 c4 04             	add    $0x4,%esp
c100338d:	a1 20 cb 00 c1       	mov    0xc100cb20,%eax
c1003392:	83 e8 01             	sub    $0x1,%eax
c1003395:	a3 20 cb 00 c1       	mov    %eax,0xc100cb20
c100339a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100339d:	a3 80 0c 01 c1       	mov    %eax,0xc1010c80
c10033a2:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10033a5:	c9                   	leave  
c10033a6:	c3                   	ret    

c10033a7 <free_pid>:
c10033a7:	55                   	push   %ebp
c10033a8:	89 e5                	mov    %esp,%ebp
c10033aa:	ff 75 08             	pushl  0x8(%ebp)
c10033ad:	e8 2d ff ff ff       	call   c10032df <clear_pid_bit>
c10033b2:	83 c4 04             	add    $0x4,%esp
c10033b5:	a1 20 cb 00 c1       	mov    0xc100cb20,%eax
c10033ba:	83 c0 01             	add    $0x1,%eax
c10033bd:	a3 20 cb 00 c1       	mov    %eax,0xc100cb20
c10033c2:	90                   	nop
c10033c3:	c9                   	leave  
c10033c4:	c3                   	ret    

c10033c5 <set_task_name>:
c10033c5:	55                   	push   %ebp
c10033c6:	89 e5                	mov    %esp,%ebp
c10033c8:	83 ec 08             	sub    $0x8,%esp
c10033cb:	8b 45 08             	mov    0x8(%ebp),%eax
c10033ce:	83 c0 10             	add    $0x10,%eax
c10033d1:	83 ec 04             	sub    $0x4,%esp
c10033d4:	6a 14                	push   $0x14
c10033d6:	6a 00                	push   $0x0
c10033d8:	50                   	push   %eax
c10033d9:	e8 cc cc ff ff       	call   c10000aa <memset>
c10033de:	83 c4 10             	add    $0x10,%esp
c10033e1:	8b 45 08             	mov    0x8(%ebp),%eax
c10033e4:	83 c0 10             	add    $0x10,%eax
c10033e7:	83 ec 04             	sub    $0x4,%esp
c10033ea:	6a 14                	push   $0x14
c10033ec:	ff 75 0c             	pushl  0xc(%ebp)
c10033ef:	50                   	push   %eax
c10033f0:	e8 13 cd ff ff       	call   c1000108 <memcpy>
c10033f5:	83 c4 10             	add    $0x10,%esp
c10033f8:	c9                   	leave  
c10033f9:	c3                   	ret    

c10033fa <get_task_name>:
c10033fa:	55                   	push   %ebp
c10033fb:	89 e5                	mov    %esp,%ebp
c10033fd:	83 ec 08             	sub    $0x8,%esp
c1003400:	83 ec 04             	sub    $0x4,%esp
c1003403:	6a 15                	push   $0x15
c1003405:	6a 00                	push   $0x0
c1003407:	68 98 0c 01 c1       	push   $0xc1010c98
c100340c:	e8 99 cc ff ff       	call   c10000aa <memset>
c1003411:	83 c4 10             	add    $0x10,%esp
c1003414:	8b 45 08             	mov    0x8(%ebp),%eax
c1003417:	83 c0 10             	add    $0x10,%eax
c100341a:	83 ec 04             	sub    $0x4,%esp
c100341d:	6a 14                	push   $0x14
c100341f:	50                   	push   %eax
c1003420:	68 98 0c 01 c1       	push   $0xc1010c98
c1003425:	e8 de cc ff ff       	call   c1000108 <memcpy>
c100342a:	83 c4 10             	add    $0x10,%esp
c100342d:	c9                   	leave  
c100342e:	c3                   	ret    

c100342f <add_link>:
c100342f:	55                   	push   %ebp
c1003430:	89 e5                	mov    %esp,%ebp
c1003432:	83 ec 20             	sub    $0x20,%esp
c1003435:	c7 45 fc 84 0c 01 c1 	movl   $0xc1010c84,-0x4(%ebp)
c100343c:	8b 45 08             	mov    0x8(%ebp),%eax
c100343f:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003442:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003445:	8b 00                	mov    (%eax),%eax
c1003447:	8b 55 f8             	mov    -0x8(%ebp),%edx
c100344a:	89 55 f4             	mov    %edx,-0xc(%ebp)
c100344d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003450:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003453:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003456:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003459:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100345c:	89 10                	mov    %edx,(%eax)
c100345e:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003461:	8b 10                	mov    (%eax),%edx
c1003463:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003466:	89 50 04             	mov    %edx,0x4(%eax)
c1003469:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100346c:	8b 55 ec             	mov    -0x14(%ebp),%edx
c100346f:	89 50 04             	mov    %edx,0x4(%eax)
c1003472:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003475:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003478:	89 10                	mov    %edx,(%eax)
c100347a:	90                   	nop
c100347b:	90                   	nop
c100347c:	90                   	nop
c100347d:	c9                   	leave  
c100347e:	c3                   	ret    

c100347f <add_all_link>:
c100347f:	55                   	push   %ebp
c1003480:	89 e5                	mov    %esp,%ebp
c1003482:	83 ec 20             	sub    $0x20,%esp
c1003485:	c7 45 fc 8c 0c 01 c1 	movl   $0xc1010c8c,-0x4(%ebp)
c100348c:	8b 45 08             	mov    0x8(%ebp),%eax
c100348f:	89 45 f8             	mov    %eax,-0x8(%ebp)
c1003492:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003495:	8b 00                	mov    (%eax),%eax
c1003497:	8b 55 f8             	mov    -0x8(%ebp),%edx
c100349a:	89 55 f4             	mov    %edx,-0xc(%ebp)
c100349d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10034a0:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10034a3:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10034a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10034a9:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10034ac:	89 10                	mov    %edx,(%eax)
c10034ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10034b1:	8b 10                	mov    (%eax),%edx
c10034b3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10034b6:	89 50 04             	mov    %edx,0x4(%eax)
c10034b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10034bc:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10034bf:	89 50 04             	mov    %edx,0x4(%eax)
c10034c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10034c5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10034c8:	89 10                	mov    %edx,(%eax)
c10034ca:	90                   	nop
c10034cb:	90                   	nop
c10034cc:	90                   	nop
c10034cd:	c9                   	leave  
c10034ce:	c3                   	ret    

c10034cf <remove_link>:
c10034cf:	55                   	push   %ebp
c10034d0:	89 e5                	mov    %esp,%ebp
c10034d2:	83 ec 10             	sub    $0x10,%esp
c10034d5:	8b 45 08             	mov    0x8(%ebp),%eax
c10034d8:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10034db:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10034de:	8b 40 04             	mov    0x4(%eax),%eax
c10034e1:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10034e4:	8b 12                	mov    (%edx),%edx
c10034e6:	89 55 f8             	mov    %edx,-0x8(%ebp)
c10034e9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10034ec:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10034ef:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10034f2:	89 50 04             	mov    %edx,0x4(%eax)
c10034f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10034f8:	8b 55 f8             	mov    -0x8(%ebp),%edx
c10034fb:	89 10                	mov    %edx,(%eax)
c10034fd:	90                   	nop
c10034fe:	90                   	nop
c10034ff:	90                   	nop
c1003500:	c9                   	leave  
c1003501:	c3                   	ret    

c1003502 <add_pid_hash>:
c1003502:	55                   	push   %ebp
c1003503:	89 e5                	mov    %esp,%ebp
c1003505:	53                   	push   %ebx
c1003506:	83 ec 20             	sub    $0x20,%esp
c1003509:	8b 45 08             	mov    0x8(%ebp),%eax
c100350c:	8d 58 68             	lea    0x68(%eax),%ebx
c100350f:	8b 45 08             	mov    0x8(%ebp),%eax
c1003512:	8b 40 0c             	mov    0xc(%eax),%eax
c1003515:	6a 0a                	push   $0xa
c1003517:	50                   	push   %eax
c1003518:	e8 28 fa ff ff       	call   c1002f45 <hash32>
c100351d:	83 c4 08             	add    $0x8,%esp
c1003520:	c1 e0 03             	shl    $0x3,%eax
c1003523:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c1003528:	89 45 f8             	mov    %eax,-0x8(%ebp)
c100352b:	89 5d f4             	mov    %ebx,-0xc(%ebp)
c100352e:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1003531:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003534:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003537:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100353a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100353d:	8b 40 04             	mov    0x4(%eax),%eax
c1003540:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003543:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1003546:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003549:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c100354c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100354f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003552:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1003555:	89 10                	mov    %edx,(%eax)
c1003557:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100355a:	8b 10                	mov    (%eax),%edx
c100355c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100355f:	89 50 04             	mov    %edx,0x4(%eax)
c1003562:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003565:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1003568:	89 50 04             	mov    %edx,0x4(%eax)
c100356b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100356e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003571:	89 10                	mov    %edx,(%eax)
c1003573:	90                   	nop
c1003574:	90                   	nop
c1003575:	90                   	nop
c1003576:	90                   	nop
c1003577:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100357a:	c9                   	leave  
c100357b:	c3                   	ret    

c100357c <remove_pid_hash>:
c100357c:	55                   	push   %ebp
c100357d:	89 e5                	mov    %esp,%ebp
c100357f:	83 ec 18             	sub    $0x18,%esp
c1003582:	83 ec 0c             	sub    $0xc,%esp
c1003585:	ff 75 08             	pushl  0x8(%ebp)
c1003588:	e8 36 00 00 00       	call   c10035c3 <find_task>
c100358d:	83 c4 10             	add    $0x10,%esp
c1003590:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003593:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003596:	83 c0 68             	add    $0x68,%eax
c1003599:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100359c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100359f:	8b 40 04             	mov    0x4(%eax),%eax
c10035a2:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10035a5:	8b 12                	mov    (%edx),%edx
c10035a7:	89 55 ec             	mov    %edx,-0x14(%ebp)
c10035aa:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10035ad:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10035b0:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10035b3:	89 50 04             	mov    %edx,0x4(%eax)
c10035b6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10035b9:	8b 55 ec             	mov    -0x14(%ebp),%edx
c10035bc:	89 10                	mov    %edx,(%eax)
c10035be:	90                   	nop
c10035bf:	90                   	nop
c10035c0:	90                   	nop
c10035c1:	c9                   	leave  
c10035c2:	c3                   	ret    

c10035c3 <find_task>:
c10035c3:	55                   	push   %ebp
c10035c4:	89 e5                	mov    %esp,%ebp
c10035c6:	83 ec 10             	sub    $0x10,%esp
c10035c9:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10035cd:	79 07                	jns    c10035d6 <find_task+0x13>
c10035cf:	b8 00 00 00 00       	mov    $0x0,%eax
c10035d4:	eb 56                	jmp    c100362c <find_task+0x69>
c10035d6:	8b 45 08             	mov    0x8(%ebp),%eax
c10035d9:	6a 0a                	push   $0xa
c10035db:	50                   	push   %eax
c10035dc:	e8 64 f9 ff ff       	call   c1002f45 <hash32>
c10035e1:	83 c4 08             	add    $0x8,%esp
c10035e4:	c1 e0 03             	shl    $0x3,%eax
c10035e7:	05 80 ec 00 c1       	add    $0xc100ec80,%eax
c10035ec:	89 45 f8             	mov    %eax,-0x8(%ebp)
c10035ef:	8b 45 f8             	mov    -0x8(%ebp),%eax
c10035f2:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10035f5:	eb 19                	jmp    c1003610 <find_task+0x4d>
c10035f7:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10035fa:	83 e8 68             	sub    $0x68,%eax
c10035fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003600:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003603:	8b 40 0c             	mov    0xc(%eax),%eax
c1003606:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003609:	75 05                	jne    c1003610 <find_task+0x4d>
c100360b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100360e:	eb 1c                	jmp    c100362c <find_task+0x69>
c1003610:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003613:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003616:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003619:	8b 40 04             	mov    0x4(%eax),%eax
c100361c:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100361f:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1003622:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1003625:	75 d0                	jne    c10035f7 <find_task+0x34>
c1003627:	b8 00 00 00 00       	mov    $0x0,%eax
c100362c:	c9                   	leave  
c100362d:	c3                   	ret    

c100362e <alloc_task>:
c100362e:	55                   	push   %ebp
c100362f:	89 e5                	mov    %esp,%ebp
c1003631:	83 ec 18             	sub    $0x18,%esp
c1003634:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1003638:	75 17                	jne    c1003651 <alloc_task+0x23>
c100363a:	83 ec 08             	sub    $0x8,%esp
c100363d:	6a 01                	push   $0x1
c100363f:	68 00 20 00 00       	push   $0x2000
c1003644:	e8 b4 f4 ff ff       	call   c1002afd <vmm_malloc>
c1003649:	83 c4 10             	add    $0x10,%esp
c100364c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100364f:	eb 15                	jmp    c1003666 <alloc_task+0x38>
c1003651:	83 ec 08             	sub    $0x8,%esp
c1003654:	6a 02                	push   $0x2
c1003656:	68 00 20 00 00       	push   $0x2000
c100365b:	e8 9d f4 ff ff       	call   c1002afd <vmm_malloc>
c1003660:	83 c4 10             	add    $0x10,%esp
c1003663:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003666:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100366a:	0f 84 af 00 00 00    	je     c100371f <alloc_task+0xf1>
c1003670:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003673:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
c1003679:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100367c:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003683:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003686:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100368d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003690:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
c1003697:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100369a:	83 c0 10             	add    $0x10,%eax
c100369d:	83 ec 04             	sub    $0x4,%esp
c10036a0:	6a 14                	push   $0x14
c10036a2:	6a 00                	push   $0x0
c10036a4:	50                   	push   %eax
c10036a5:	e8 00 ca ff ff       	call   c10000aa <memset>
c10036aa:	83 c4 10             	add    $0x10,%esp
c10036ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036b0:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
c10036b7:	ba 00 10 61 c1       	mov    $0xc1611000,%edx
c10036bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036bf:	89 50 28             	mov    %edx,0x28(%eax)
c10036c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036c5:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
c10036cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036cf:	83 c0 38             	add    $0x38,%eax
c10036d2:	83 ec 04             	sub    $0x4,%esp
c10036d5:	6a 20                	push   $0x20
c10036d7:	6a 00                	push   $0x0
c10036d9:	50                   	push   %eax
c10036da:	e8 cb c9 ff ff       	call   c10000aa <memset>
c10036df:	83 c4 10             	add    $0x10,%esp
c10036e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036e5:	c7 80 f0 00 00 00 11 	movl   $0x19971211,0xf0(%eax)
c10036ec:	12 97 19 
c10036ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10036f2:	c7 80 f4 00 00 00 00 	movl   $0x0,0xf4(%eax)
c10036f9:	00 00 00 
c10036fc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c1003703:	eb 14                	jmp    c1003719 <alloc_task+0xeb>
c1003705:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003708:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100370b:	83 c2 1c             	add    $0x1c,%edx
c100370e:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c1003715:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1003719:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
c100371d:	7e e6                	jle    c1003705 <alloc_task+0xd7>
c100371f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003722:	c9                   	leave  
c1003723:	c3                   	ret    

c1003724 <forkret>:
c1003724:	55                   	push   %ebp
c1003725:	89 e5                	mov    %esp,%ebp
c1003727:	83 ec 08             	sub    $0x8,%esp
c100372a:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100372f:	8b 40 34             	mov    0x34(%eax),%eax
c1003732:	83 ec 0c             	sub    $0xc,%esp
c1003735:	50                   	push   %eax
c1003736:	e8 b9 d6 ff ff       	call   c1000df4 <forkrets>
c100373b:	83 c4 10             	add    $0x10,%esp
c100373e:	90                   	nop
c100373f:	c9                   	leave  
c1003740:	c3                   	ret    

c1003741 <copy_thread>:
c1003741:	55                   	push   %ebp
c1003742:	89 e5                	mov    %esp,%ebp
c1003744:	57                   	push   %edi
c1003745:	56                   	push   %esi
c1003746:	53                   	push   %ebx
c1003747:	83 ec 0c             	sub    $0xc,%esp
c100374a:	8b 45 08             	mov    0x8(%ebp),%eax
c100374d:	8b 40 24             	mov    0x24(%eax),%eax
c1003750:	83 e8 4c             	sub    $0x4c,%eax
c1003753:	89 c2                	mov    %eax,%edx
c1003755:	8b 45 08             	mov    0x8(%ebp),%eax
c1003758:	89 50 34             	mov    %edx,0x34(%eax)
c100375b:	8b 45 08             	mov    0x8(%ebp),%eax
c100375e:	8b 40 34             	mov    0x34(%eax),%eax
c1003761:	8b 55 10             	mov    0x10(%ebp),%edx
c1003764:	89 d3                	mov    %edx,%ebx
c1003766:	ba 4c 00 00 00       	mov    $0x4c,%edx
c100376b:	8b 0b                	mov    (%ebx),%ecx
c100376d:	89 08                	mov    %ecx,(%eax)
c100376f:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003773:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003777:	8d 78 04             	lea    0x4(%eax),%edi
c100377a:	83 e7 fc             	and    $0xfffffffc,%edi
c100377d:	29 f8                	sub    %edi,%eax
c100377f:	29 c3                	sub    %eax,%ebx
c1003781:	01 c2                	add    %eax,%edx
c1003783:	83 e2 fc             	and    $0xfffffffc,%edx
c1003786:	89 d0                	mov    %edx,%eax
c1003788:	c1 e8 02             	shr    $0x2,%eax
c100378b:	89 de                	mov    %ebx,%esi
c100378d:	89 c1                	mov    %eax,%ecx
c100378f:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003791:	8b 45 08             	mov    0x8(%ebp),%eax
c1003794:	8b 40 34             	mov    0x34(%eax),%eax
c1003797:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c100379e:	8b 45 08             	mov    0x8(%ebp),%eax
c10037a1:	8b 40 34             	mov    0x34(%eax),%eax
c10037a4:	8b 50 40             	mov    0x40(%eax),%edx
c10037a7:	8b 45 08             	mov    0x8(%ebp),%eax
c10037aa:	8b 40 34             	mov    0x34(%eax),%eax
c10037ad:	80 ce 02             	or     $0x2,%dh
c10037b0:	89 50 40             	mov    %edx,0x40(%eax)
c10037b3:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10037b8:	05 f8 00 00 00       	add    $0xf8,%eax
c10037bd:	89 c2                	mov    %eax,%edx
c10037bf:	8b 45 08             	mov    0x8(%ebp),%eax
c10037c2:	05 f8 00 00 00       	add    $0xf8,%eax
c10037c7:	83 ec 04             	sub    $0x4,%esp
c10037ca:	68 08 0f 00 00       	push   $0xf08
c10037cf:	52                   	push   %edx
c10037d0:	50                   	push   %eax
c10037d1:	e8 32 c9 ff ff       	call   c1000108 <memcpy>
c10037d6:	83 c4 10             	add    $0x10,%esp
c10037d9:	8b 45 08             	mov    0x8(%ebp),%eax
c10037dc:	8b 40 34             	mov    0x34(%eax),%eax
c10037df:	8b 40 44             	mov    0x44(%eax),%eax
c10037e2:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c10037e8:	29 d0                	sub    %edx,%eax
c10037ea:	89 c1                	mov    %eax,%ecx
c10037ec:	8b 55 08             	mov    0x8(%ebp),%edx
c10037ef:	8b 45 08             	mov    0x8(%ebp),%eax
c10037f2:	8b 40 34             	mov    0x34(%eax),%eax
c10037f5:	01 ca                	add    %ecx,%edx
c10037f7:	89 50 44             	mov    %edx,0x44(%eax)
c10037fa:	ba 24 37 00 c1       	mov    $0xc1003724,%edx
c10037ff:	8b 45 08             	mov    0x8(%ebp),%eax
c1003802:	89 50 38             	mov    %edx,0x38(%eax)
c1003805:	8b 45 10             	mov    0x10(%ebp),%eax
c1003808:	8b 50 10             	mov    0x10(%eax),%edx
c100380b:	8b 45 08             	mov    0x8(%ebp),%eax
c100380e:	89 50 40             	mov    %edx,0x40(%eax)
c1003811:	8b 45 10             	mov    0x10(%ebp),%eax
c1003814:	8b 50 14             	mov    0x14(%eax),%edx
c1003817:	8b 45 08             	mov    0x8(%ebp),%eax
c100381a:	89 50 48             	mov    %edx,0x48(%eax)
c100381d:	8b 45 08             	mov    0x8(%ebp),%eax
c1003820:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c1003826:	8b 45 08             	mov    0x8(%ebp),%eax
c1003829:	89 50 3c             	mov    %edx,0x3c(%eax)
c100382c:	90                   	nop
c100382d:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003830:	5b                   	pop    %ebx
c1003831:	5e                   	pop    %esi
c1003832:	5f                   	pop    %edi
c1003833:	5d                   	pop    %ebp
c1003834:	c3                   	ret    

c1003835 <do_fork>:
c1003835:	55                   	push   %ebp
c1003836:	89 e5                	mov    %esp,%ebp
c1003838:	83 ec 18             	sub    $0x18,%esp
c100383b:	a1 94 0c 01 c1       	mov    0xc1010c94,%eax
c1003840:	3d 00 80 00 00       	cmp    $0x8000,%eax
c1003845:	76 0a                	jbe    c1003851 <do_fork+0x1c>
c1003847:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100384c:	e9 2f 01 00 00       	jmp    c1003980 <do_fork+0x14b>
c1003851:	83 ec 0c             	sub    $0xc,%esp
c1003854:	6a 00                	push   $0x0
c1003856:	e8 d3 fd ff ff       	call   c100362e <alloc_task>
c100385b:	83 c4 10             	add    $0x10,%esp
c100385e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003861:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1003865:	75 0a                	jne    c1003871 <do_fork+0x3c>
c1003867:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100386c:	e9 0f 01 00 00       	jmp    c1003980 <do_fork+0x14b>
c1003871:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c1003877:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100387a:	89 50 30             	mov    %edx,0x30(%eax)
c100387d:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003882:	8b 00                	mov    (%eax),%eax
c1003884:	85 c0                	test   %eax,%eax
c1003886:	74 19                	je     c10038a1 <do_fork+0x6c>
c1003888:	68 bb a8 00 c1       	push   $0xc100a8bb
c100388d:	68 28 aa 00 c1       	push   $0xc100aa28
c1003892:	68 5c 01 00 00       	push   $0x15c
c1003897:	68 d0 a8 00 c1       	push   $0xc100a8d0
c100389c:	e8 ca ca ff ff       	call   c100036b <__PANIC>
c10038a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038a4:	8d 90 00 20 00 00    	lea    0x2000(%eax),%edx
c10038aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038ad:	89 50 24             	mov    %edx,0x24(%eax)
c10038b0:	83 ec 0c             	sub    $0xc,%esp
c10038b3:	ff 75 f4             	pushl  -0xc(%ebp)
c10038b6:	e8 eb 04 00 00       	call   c1003da6 <copy_user_cr3>
c10038bb:	83 c4 10             	add    $0x10,%esp
c10038be:	83 ec 04             	sub    $0x4,%esp
c10038c1:	ff 75 10             	pushl  0x10(%ebp)
c10038c4:	ff 75 0c             	pushl  0xc(%ebp)
c10038c7:	ff 75 f4             	pushl  -0xc(%ebp)
c10038ca:	e8 72 fe ff ff       	call   c1003741 <copy_thread>
c10038cf:	83 c4 10             	add    $0x10,%esp
c10038d2:	e8 74 fa ff ff       	call   c100334b <alloc_pid>
c10038d7:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10038da:	89 42 0c             	mov    %eax,0xc(%edx)
c10038dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038e0:	8b 40 0c             	mov    0xc(%eax),%eax
c10038e3:	85 c0                	test   %eax,%eax
c10038e5:	79 0a                	jns    c10038f1 <do_fork+0xbc>
c10038e7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10038ec:	e9 8f 00 00 00       	jmp    c1003980 <do_fork+0x14b>
c10038f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10038f4:	83 c0 58             	add    $0x58,%eax
c10038f7:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10038fa:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10038fd:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1003900:	89 50 04             	mov    %edx,0x4(%eax)
c1003903:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003906:	8b 50 04             	mov    0x4(%eax),%edx
c1003909:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100390c:	89 10                	mov    %edx,(%eax)
c100390e:	90                   	nop
c100390f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003912:	83 c0 58             	add    $0x58,%eax
c1003915:	83 ec 0c             	sub    $0xc,%esp
c1003918:	50                   	push   %eax
c1003919:	e8 11 fb ff ff       	call   c100342f <add_link>
c100391e:	83 c4 10             	add    $0x10,%esp
c1003921:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003924:	83 c0 60             	add    $0x60,%eax
c1003927:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100392a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100392d:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1003930:	89 50 04             	mov    %edx,0x4(%eax)
c1003933:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003936:	8b 50 04             	mov    0x4(%eax),%edx
c1003939:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100393c:	89 10                	mov    %edx,(%eax)
c100393e:	90                   	nop
c100393f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003942:	83 c0 60             	add    $0x60,%eax
c1003945:	83 ec 0c             	sub    $0xc,%esp
c1003948:	50                   	push   %eax
c1003949:	e8 31 fb ff ff       	call   c100347f <add_all_link>
c100394e:	83 c4 10             	add    $0x10,%esp
c1003951:	83 ec 0c             	sub    $0xc,%esp
c1003954:	ff 75 f4             	pushl  -0xc(%ebp)
c1003957:	e8 a6 fb ff ff       	call   c1003502 <add_pid_hash>
c100395c:	83 c4 10             	add    $0x10,%esp
c100395f:	a1 94 0c 01 c1       	mov    0xc1010c94,%eax
c1003964:	83 c0 01             	add    $0x1,%eax
c1003967:	a3 94 0c 01 c1       	mov    %eax,0xc1010c94
c100396c:	83 ec 0c             	sub    $0xc,%esp
c100396f:	ff 75 f4             	pushl  -0xc(%ebp)
c1003972:	e8 0b 00 00 00       	call   c1003982 <wakeup_task>
c1003977:	83 c4 10             	add    $0x10,%esp
c100397a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100397d:	8b 40 0c             	mov    0xc(%eax),%eax
c1003980:	c9                   	leave  
c1003981:	c3                   	ret    

c1003982 <wakeup_task>:
c1003982:	55                   	push   %ebp
c1003983:	89 e5                	mov    %esp,%ebp
c1003985:	8b 45 08             	mov    0x8(%ebp),%eax
c1003988:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100398e:	90                   	nop
c100398f:	5d                   	pop    %ebp
c1003990:	c3                   	ret    

c1003991 <kernel_thread>:
c1003991:	55                   	push   %ebp
c1003992:	89 e5                	mov    %esp,%ebp
c1003994:	83 ec 58             	sub    $0x58,%esp
c1003997:	83 ec 04             	sub    $0x4,%esp
c100399a:	6a 4c                	push   $0x4c
c100399c:	6a 00                	push   $0x0
c100399e:	8d 45 ac             	lea    -0x54(%ebp),%eax
c10039a1:	50                   	push   %eax
c10039a2:	e8 03 c7 ff ff       	call   c10000aa <memset>
c10039a7:	83 c4 10             	add    $0x10,%esp
c10039aa:	66 c7 45 e8 08 00    	movw   $0x8,-0x18(%ebp)
c10039b0:	66 c7 45 f4 10 00    	movw   $0x10,-0xc(%ebp)
c10039b6:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c10039ba:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
c10039be:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
c10039c2:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
c10039c6:	8b 45 08             	mov    0x8(%ebp),%eax
c10039c9:	89 45 bc             	mov    %eax,-0x44(%ebp)
c10039cc:	8b 45 0c             	mov    0xc(%ebp),%eax
c10039cf:	89 45 c0             	mov    %eax,-0x40(%ebp)
c10039d2:	b8 72 42 00 c1       	mov    $0xc1004272,%eax
c10039d7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10039da:	83 ec 04             	sub    $0x4,%esp
c10039dd:	8d 45 ac             	lea    -0x54(%ebp),%eax
c10039e0:	50                   	push   %eax
c10039e1:	6a 00                	push   $0x0
c10039e3:	ff 75 10             	pushl  0x10(%ebp)
c10039e6:	e8 4a fe ff ff       	call   c1003835 <do_fork>
c10039eb:	83 c4 10             	add    $0x10,%esp
c10039ee:	c9                   	leave  
c10039ef:	c3                   	ret    

c10039f0 <task_run>:
c10039f0:	55                   	push   %ebp
c10039f1:	89 e5                	mov    %esp,%ebp
c10039f3:	83 ec 18             	sub    $0x18,%esp
c10039f6:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10039fb:	39 45 08             	cmp    %eax,0x8(%ebp)
c10039fe:	74 63                	je     c1003a63 <task_run+0x73>
c1003a00:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003a05:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003a08:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a0b:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1003a10:	a1 00 30 a1 c1       	mov    0xc1a13000,%eax
c1003a15:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003a18:	75 07                	jne    c1003a21 <task_run+0x31>
c1003a1a:	e8 50 d3 ff ff       	call   c1000d6f <intr_enable>
c1003a1f:	eb 05                	jmp    c1003a26 <task_run+0x36>
c1003a21:	e8 68 d3 ff ff       	call   c1000d8e <intr_disable>
c1003a26:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a29:	8b 40 24             	mov    0x24(%eax),%eax
c1003a2c:	83 ec 0c             	sub    $0xc,%esp
c1003a2f:	50                   	push   %eax
c1003a30:	e8 7c cf ff ff       	call   c10009b1 <set_ts_esp0>
c1003a35:	83 c4 10             	add    $0x10,%esp
c1003a38:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a3b:	8b 40 28             	mov    0x28(%eax),%eax
c1003a3e:	83 ec 0c             	sub    $0xc,%esp
c1003a41:	50                   	push   %eax
c1003a42:	e8 0f c8 ff ff       	call   c1000256 <lcr3>
c1003a47:	83 c4 10             	add    $0x10,%esp
c1003a4a:	8b 45 08             	mov    0x8(%ebp),%eax
c1003a4d:	8d 50 38             	lea    0x38(%eax),%edx
c1003a50:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003a53:	83 c0 38             	add    $0x38,%eax
c1003a56:	83 ec 08             	sub    $0x8,%esp
c1003a59:	52                   	push   %edx
c1003a5a:	50                   	push   %eax
c1003a5b:	e8 17 08 00 00       	call   c1004277 <switch_to>
c1003a60:	83 c4 10             	add    $0x10,%esp
c1003a63:	90                   	nop
c1003a64:	c9                   	leave  
c1003a65:	c3                   	ret    

c1003a66 <schedule>:
c1003a66:	55                   	push   %ebp
c1003a67:	89 e5                	mov    %esp,%ebp
c1003a69:	83 ec 18             	sub    $0x18,%esp
c1003a6c:	c7 45 ec 84 0c 01 c1 	movl   $0xc1010c84,-0x14(%ebp)
c1003a73:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1003a76:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003a79:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003a7e:	8b 00                	mov    (%eax),%eax
c1003a80:	85 c0                	test   %eax,%eax
c1003a82:	75 0c                	jne    c1003a90 <schedule+0x2a>
c1003a84:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003a89:	8b 40 04             	mov    0x4(%eax),%eax
c1003a8c:	85 c0                	test   %eax,%eax
c1003a8e:	74 0b                	je     c1003a9b <schedule+0x35>
c1003a90:	0f b6 05 b4 0c 01 c1 	movzbl 0xc1010cb4,%eax
c1003a97:	3c 01                	cmp    $0x1,%al
c1003a99:	75 48                	jne    c1003ae3 <schedule+0x7d>
c1003a9b:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003aa0:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003aa7:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003aac:	83 c0 58             	add    $0x58,%eax
c1003aaf:	50                   	push   %eax
c1003ab0:	e8 7a f9 ff ff       	call   c100342f <add_link>
c1003ab5:	83 c4 04             	add    $0x4,%esp
c1003ab8:	eb 29                	jmp    c1003ae3 <schedule+0x7d>
c1003aba:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003abd:	83 e8 58             	sub    $0x58,%eax
c1003ac0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1003ac3:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003ac6:	8b 00                	mov    (%eax),%eax
c1003ac8:	85 c0                	test   %eax,%eax
c1003aca:	75 17                	jne    c1003ae3 <schedule+0x7d>
c1003acc:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003acf:	8b 40 04             	mov    0x4(%eax),%eax
c1003ad2:	85 c0                	test   %eax,%eax
c1003ad4:	74 0d                	je     c1003ae3 <schedule+0x7d>
c1003ad6:	ff 75 f4             	pushl  -0xc(%ebp)
c1003ad9:	e8 f1 f9 ff ff       	call   c10034cf <remove_link>
c1003ade:	83 c4 04             	add    $0x4,%esp
c1003ae1:	eb 17                	jmp    c1003afa <schedule+0x94>
c1003ae3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003ae6:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003ae9:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003aec:	8b 40 04             	mov    0x4(%eax),%eax
c1003aef:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003af2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003af5:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1003af8:	75 c0                	jne    c1003aba <schedule+0x54>
c1003afa:	83 ec 0c             	sub    $0xc,%esp
c1003afd:	ff 75 f0             	pushl  -0x10(%ebp)
c1003b00:	e8 eb fe ff ff       	call   c10039f0 <task_run>
c1003b05:	83 c4 10             	add    $0x10,%esp
c1003b08:	90                   	nop
c1003b09:	c9                   	leave  
c1003b0a:	c3                   	ret    

c1003b0b <thread_block>:
c1003b0b:	55                   	push   %ebp
c1003b0c:	89 e5                	mov    %esp,%ebp
c1003b0e:	83 ec 18             	sub    $0x18,%esp
c1003b11:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1003b15:	74 19                	je     c1003b30 <thread_block+0x25>
c1003b17:	68 01 a9 00 c1       	push   $0xc100a901
c1003b1c:	68 30 aa 00 c1       	push   $0xc100aa30
c1003b21:	68 c1 01 00 00       	push   $0x1c1
c1003b26:	68 d0 a8 00 c1       	push   $0xc100a8d0
c1003b2b:	e8 3b c8 ff ff       	call   c100036b <__PANIC>
c1003b30:	e8 79 d2 ff ff       	call   c1000dae <intr_save>
c1003b35:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003b38:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003b3d:	8b 55 08             	mov    0x8(%ebp),%edx
c1003b40:	89 10                	mov    %edx,(%eax)
c1003b42:	e8 1f ff ff ff       	call   c1003a66 <schedule>
c1003b47:	83 ec 0c             	sub    $0xc,%esp
c1003b4a:	ff 75 f4             	pushl  -0xc(%ebp)
c1003b4d:	e8 6f d2 ff ff       	call   c1000dc1 <intr_restore>
c1003b52:	83 c4 10             	add    $0x10,%esp
c1003b55:	90                   	nop
c1003b56:	c9                   	leave  
c1003b57:	c3                   	ret    

c1003b58 <thread_unblock>:
c1003b58:	55                   	push   %ebp
c1003b59:	89 e5                	mov    %esp,%ebp
c1003b5b:	83 ec 18             	sub    $0x18,%esp
c1003b5e:	c7 45 f0 84 0c 01 c1 	movl   $0xc1010c84,-0x10(%ebp)
c1003b65:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003b68:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003b6b:	e8 3e d2 ff ff       	call   c1000dae <intr_save>
c1003b70:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1003b73:	8b 45 08             	mov    0x8(%ebp),%eax
c1003b76:	8b 00                	mov    (%eax),%eax
c1003b78:	83 f8 01             	cmp    $0x1,%eax
c1003b7b:	74 19                	je     c1003b96 <thread_unblock+0x3e>
c1003b7d:	68 11 a9 00 c1       	push   $0xc100a911
c1003b82:	68 40 aa 00 c1       	push   $0xc100aa40
c1003b87:	68 d2 01 00 00       	push   $0x1d2
c1003b8c:	68 d0 a8 00 c1       	push   $0xc100a8d0
c1003b91:	e8 d5 c7 ff ff       	call   c100036b <__PANIC>
c1003b96:	8b 45 08             	mov    0x8(%ebp),%eax
c1003b99:	8b 00                	mov    (%eax),%eax
c1003b9b:	85 c0                	test   %eax,%eax
c1003b9d:	74 58                	je     c1003bf7 <thread_unblock+0x9f>
c1003b9f:	eb 24                	jmp    c1003bc5 <thread_unblock+0x6d>
c1003ba1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003ba4:	83 e8 58             	sub    $0x58,%eax
c1003ba7:	39 45 08             	cmp    %eax,0x8(%ebp)
c1003baa:	75 19                	jne    c1003bc5 <thread_unblock+0x6d>
c1003bac:	68 28 a9 00 c1       	push   $0xc100a928
c1003bb1:	68 40 aa 00 c1       	push   $0xc100aa40
c1003bb6:	68 d7 01 00 00       	push   $0x1d7
c1003bbb:	68 d0 a8 00 c1       	push   $0xc100a8d0
c1003bc0:	e8 a6 c7 ff ff       	call   c100036b <__PANIC>
c1003bc5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003bc8:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1003bcb:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1003bce:	8b 40 04             	mov    0x4(%eax),%eax
c1003bd1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003bd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1003bd7:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1003bda:	75 c5                	jne    c1003ba1 <thread_unblock+0x49>
c1003bdc:	8b 45 08             	mov    0x8(%ebp),%eax
c1003bdf:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003be5:	8b 45 08             	mov    0x8(%ebp),%eax
c1003be8:	83 c0 58             	add    $0x58,%eax
c1003beb:	83 ec 0c             	sub    $0xc,%esp
c1003bee:	50                   	push   %eax
c1003bef:	e8 3b f8 ff ff       	call   c100342f <add_link>
c1003bf4:	83 c4 10             	add    $0x10,%esp
c1003bf7:	83 ec 0c             	sub    $0xc,%esp
c1003bfa:	ff 75 ec             	pushl  -0x14(%ebp)
c1003bfd:	e8 bf d1 ff ff       	call   c1000dc1 <intr_restore>
c1003c02:	83 c4 10             	add    $0x10,%esp
c1003c05:	90                   	nop
c1003c06:	c9                   	leave  
c1003c07:	c3                   	ret    

c1003c08 <print_taskinfo>:
c1003c08:	55                   	push   %ebp
c1003c09:	89 e5                	mov    %esp,%ebp
c1003c0b:	83 ec 08             	sub    $0x8,%esp
c1003c0e:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003c13:	83 ec 0c             	sub    $0xc,%esp
c1003c16:	50                   	push   %eax
c1003c17:	e8 de f7 ff ff       	call   c10033fa <get_task_name>
c1003c1c:	83 c4 10             	add    $0x10,%esp
c1003c1f:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c1003c25:	8b 52 0c             	mov    0xc(%edx),%edx
c1003c28:	83 ec 04             	sub    $0x4,%esp
c1003c2b:	50                   	push   %eax
c1003c2c:	52                   	push   %edx
c1003c2d:	68 5c a9 00 c1       	push   $0xc100a95c
c1003c32:	e8 85 13 00 00       	call   c1004fbc <printk>
c1003c37:	83 c4 10             	add    $0x10,%esp
c1003c3a:	83 ec 08             	sub    $0x8,%esp
c1003c3d:	ff 75 08             	pushl  0x8(%ebp)
c1003c40:	68 7e a9 00 c1       	push   $0xc100a97e
c1003c45:	e8 72 13 00 00       	call   c1004fbc <printk>
c1003c4a:	83 c4 10             	add    $0x10,%esp
c1003c4d:	83 ec 0c             	sub    $0xc,%esp
c1003c50:	68 8b a9 00 c1       	push   $0xc100a98b
c1003c55:	e8 62 13 00 00       	call   c1004fbc <printk>
c1003c5a:	83 c4 10             	add    $0x10,%esp
c1003c5d:	b8 00 00 00 00       	mov    $0x0,%eax
c1003c62:	c9                   	leave  
c1003c63:	c3                   	ret    

c1003c64 <do_exit>:
c1003c64:	55                   	push   %ebp
c1003c65:	89 e5                	mov    %esp,%ebp
c1003c67:	83 ec 08             	sub    $0x8,%esp
c1003c6a:	83 ec 0c             	sub    $0xc,%esp
c1003c6d:	68 a7 a9 00 c1       	push   $0xc100a9a7
c1003c72:	e8 45 13 00 00       	call   c1004fbc <printk>
c1003c77:	83 c4 10             	add    $0x10,%esp
c1003c7a:	eb fe                	jmp    c1003c7a <do_exit+0x16>

c1003c7c <do_execve>:
c1003c7c:	55                   	push   %ebp
c1003c7d:	89 e5                	mov    %esp,%ebp
c1003c7f:	b8 00 00 00 00       	mov    $0x0,%eax
c1003c84:	5d                   	pop    %ebp
c1003c85:	c3                   	ret    

c1003c86 <kernel_execve>:
c1003c86:	55                   	push   %ebp
c1003c87:	89 e5                	mov    %esp,%ebp
c1003c89:	83 ec 18             	sub    $0x18,%esp
c1003c8c:	83 ec 0c             	sub    $0xc,%esp
c1003c8f:	ff 75 08             	pushl  0x8(%ebp)
c1003c92:	e8 87 c4 ff ff       	call   c100011e <strlen>
c1003c97:	83 c4 10             	add    $0x10,%esp
c1003c9a:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1003c9d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1003ca0:	c9                   	leave  
c1003ca1:	c3                   	ret    

c1003ca2 <user_main>:
c1003ca2:	55                   	push   %ebp
c1003ca3:	89 e5                	mov    %esp,%ebp
c1003ca5:	90                   	nop
c1003ca6:	5d                   	pop    %ebp
c1003ca7:	c3                   	ret    

c1003ca8 <set_user_cr3>:
c1003ca8:	55                   	push   %ebp
c1003ca9:	89 e5                	mov    %esp,%ebp
c1003cab:	57                   	push   %edi
c1003cac:	56                   	push   %esi
c1003cad:	53                   	push   %ebx
c1003cae:	83 ec 2c             	sub    $0x2c,%esp
c1003cb1:	83 ec 08             	sub    $0x8,%esp
c1003cb4:	6a 02                	push   $0x2
c1003cb6:	68 00 10 00 00       	push   $0x1000
c1003cbb:	e8 3d ee ff ff       	call   c1002afd <vmm_malloc>
c1003cc0:	83 c4 10             	add    $0x10,%esp
c1003cc3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1003cc6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003cc9:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1003cce:	ba 00 10 00 00       	mov    $0x1000,%edx
c1003cd3:	8b 0b                	mov    (%ebx),%ecx
c1003cd5:	89 08                	mov    %ecx,(%eax)
c1003cd7:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003cdb:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003cdf:	8d 78 04             	lea    0x4(%eax),%edi
c1003ce2:	83 e7 fc             	and    $0xfffffffc,%edi
c1003ce5:	29 f8                	sub    %edi,%eax
c1003ce7:	29 c3                	sub    %eax,%ebx
c1003ce9:	01 c2                	add    %eax,%edx
c1003ceb:	83 e2 fc             	and    $0xfffffffc,%edx
c1003cee:	89 d0                	mov    %edx,%eax
c1003cf0:	c1 e8 02             	shr    $0x2,%eax
c1003cf3:	89 de                	mov    %ebx,%esi
c1003cf5:	89 c1                	mov    %eax,%ecx
c1003cf7:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003cf9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003cfc:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003cff:	a1 00 1c 61 c1       	mov    0xc1611c00,%eax
c1003d04:	83 ec 08             	sub    $0x8,%esp
c1003d07:	50                   	push   %eax
c1003d08:	68 b3 a9 00 c1       	push   $0xc100a9b3
c1003d0d:	e8 aa 12 00 00       	call   c1004fbc <printk>
c1003d12:	83 c4 10             	add    $0x10,%esp
c1003d15:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003d18:	05 00 0c 00 00       	add    $0xc00,%eax
c1003d1d:	8b 00                	mov    (%eax),%eax
c1003d1f:	83 ec 08             	sub    $0x8,%esp
c1003d22:	50                   	push   %eax
c1003d23:	68 c7 a9 00 c1       	push   $0xc100a9c7
c1003d28:	e8 8f 12 00 00       	call   c1004fbc <printk>
c1003d2d:	83 c4 10             	add    $0x10,%esp
c1003d30:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003d33:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1003d36:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003d39:	c1 e8 16             	shr    $0x16,%eax
c1003d3c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003d43:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003d46:	01 d0                	add    %edx,%eax
c1003d48:	8b 00                	mov    (%eax),%eax
c1003d4a:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003d4f:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1003d54:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1003d57:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003d5a:	c1 e8 0c             	shr    $0xc,%eax
c1003d5d:	25 ff 03 00 00       	and    $0x3ff,%eax
c1003d62:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003d69:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1003d6c:	01 d0                	add    %edx,%eax
c1003d6e:	8b 00                	mov    (%eax),%eax
c1003d70:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003d75:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1003d78:	83 ec 08             	sub    $0x8,%esp
c1003d7b:	ff 75 d4             	pushl  -0x2c(%ebp)
c1003d7e:	68 d7 a9 00 c1       	push   $0xc100a9d7
c1003d83:	e8 34 12 00 00       	call   c1004fbc <printk>
c1003d88:	83 c4 10             	add    $0x10,%esp
c1003d8b:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d8e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1003d91:	89 50 28             	mov    %edx,0x28(%eax)
c1003d94:	8b 45 08             	mov    0x8(%ebp),%eax
c1003d97:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003d9a:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003d9d:	90                   	nop
c1003d9e:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003da1:	5b                   	pop    %ebx
c1003da2:	5e                   	pop    %esi
c1003da3:	5f                   	pop    %edi
c1003da4:	5d                   	pop    %ebp
c1003da5:	c3                   	ret    

c1003da6 <copy_user_cr3>:
c1003da6:	55                   	push   %ebp
c1003da7:	89 e5                	mov    %esp,%ebp
c1003da9:	57                   	push   %edi
c1003daa:	56                   	push   %esi
c1003dab:	53                   	push   %ebx
c1003dac:	83 ec 2c             	sub    $0x2c,%esp
c1003daf:	83 ec 08             	sub    $0x8,%esp
c1003db2:	6a 02                	push   $0x2
c1003db4:	68 00 10 00 00       	push   $0x1000
c1003db9:	e8 3f ed ff ff       	call   c1002afd <vmm_malloc>
c1003dbe:	83 c4 10             	add    $0x10,%esp
c1003dc1:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1003dc4:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003dc7:	bb 00 10 61 c1       	mov    $0xc1611000,%ebx
c1003dcc:	ba 00 10 00 00       	mov    $0x1000,%edx
c1003dd1:	8b 0b                	mov    (%ebx),%ecx
c1003dd3:	89 08                	mov    %ecx,(%eax)
c1003dd5:	8b 4c 13 fc          	mov    -0x4(%ebx,%edx,1),%ecx
c1003dd9:	89 4c 10 fc          	mov    %ecx,-0x4(%eax,%edx,1)
c1003ddd:	8d 78 04             	lea    0x4(%eax),%edi
c1003de0:	83 e7 fc             	and    $0xfffffffc,%edi
c1003de3:	29 f8                	sub    %edi,%eax
c1003de5:	29 c3                	sub    %eax,%ebx
c1003de7:	01 c2                	add    %eax,%edx
c1003de9:	83 e2 fc             	and    $0xfffffffc,%edx
c1003dec:	89 d0                	mov    %edx,%eax
c1003dee:	c1 e8 02             	shr    $0x2,%eax
c1003df1:	89 de                	mov    %ebx,%esi
c1003df3:	89 c1                	mov    %eax,%ecx
c1003df5:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1003df7:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1003dfc:	8b 40 2c             	mov    0x2c(%eax),%eax
c1003dff:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1003e02:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003e05:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1003e08:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1003e0f:	eb 51                	jmp    c1003e62 <copy_user_cr3+0xbc>
c1003e11:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003e14:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003e1b:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003e1e:	01 d0                	add    %edx,%eax
c1003e20:	8b 00                	mov    (%eax),%eax
c1003e22:	83 e0 01             	and    $0x1,%eax
c1003e25:	85 c0                	test   %eax,%eax
c1003e27:	74 13                	je     c1003e3c <copy_user_cr3+0x96>
c1003e29:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003e2c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003e33:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1003e36:	01 d0                	add    %edx,%eax
c1003e38:	8b 00                	mov    (%eax),%eax
c1003e3a:	eb 11                	jmp    c1003e4d <copy_user_cr3+0xa7>
c1003e3c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1003e3f:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003e46:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1003e49:	01 d0                	add    %edx,%eax
c1003e4b:	8b 00                	mov    (%eax),%eax
c1003e4d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1003e50:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1003e57:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1003e5a:	01 ca                	add    %ecx,%edx
c1003e5c:	89 02                	mov    %eax,(%edx)
c1003e5e:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
c1003e62:	81 7d e4 ff 03 00 00 	cmpl   $0x3ff,-0x1c(%ebp)
c1003e69:	7e a6                	jle    c1003e11 <copy_user_cr3+0x6b>
c1003e6b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003e6e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1003e71:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003e74:	c1 e8 16             	shr    $0x16,%eax
c1003e77:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003e7e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1003e81:	01 d0                	add    %edx,%eax
c1003e83:	8b 00                	mov    (%eax),%eax
c1003e85:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003e8a:	2d 00 00 00 40       	sub    $0x40000000,%eax
c1003e8f:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1003e92:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1003e95:	c1 e8 0c             	shr    $0xc,%eax
c1003e98:	25 ff 03 00 00       	and    $0x3ff,%eax
c1003e9d:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1003ea4:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1003ea7:	01 d0                	add    %edx,%eax
c1003ea9:	8b 00                	mov    (%eax),%eax
c1003eab:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c1003eb0:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1003eb3:	8b 45 08             	mov    0x8(%ebp),%eax
c1003eb6:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1003eb9:	89 50 2c             	mov    %edx,0x2c(%eax)
c1003ebc:	8b 45 08             	mov    0x8(%ebp),%eax
c1003ebf:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1003ec2:	89 50 28             	mov    %edx,0x28(%eax)
c1003ec5:	90                   	nop
c1003ec6:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1003ec9:	5b                   	pop    %ebx
c1003eca:	5e                   	pop    %esi
c1003ecb:	5f                   	pop    %edi
c1003ecc:	5d                   	pop    %ebp
c1003ecd:	c3                   	ret    

c1003ece <user_task_init>:
c1003ece:	55                   	push   %ebp
c1003ecf:	89 e5                	mov    %esp,%ebp
c1003ed1:	53                   	push   %ebx
c1003ed2:	83 ec 14             	sub    $0x14,%esp
c1003ed5:	83 ec 0c             	sub    $0xc,%esp
c1003ed8:	6a 00                	push   $0x0
c1003eda:	e8 4f f7 ff ff       	call   c100362e <alloc_task>
c1003edf:	83 c4 10             	add    $0x10,%esp
c1003ee2:	a3 0c 30 a1 c1       	mov    %eax,0xc1a1300c
c1003ee7:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003eec:	85 c0                	test   %eax,%eax
c1003eee:	75 10                	jne    c1003f00 <user_task_init+0x32>
c1003ef0:	83 ec 0c             	sub    $0xc,%esp
c1003ef3:	68 9c a8 00 c1       	push   $0xc100a89c
c1003ef8:	e8 bf 10 00 00       	call   c1004fbc <printk>
c1003efd:	83 c4 10             	add    $0x10,%esp
c1003f00:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f05:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
c1003f0b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f10:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
c1003f17:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f1c:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
c1003f23:	8b 1d 0c 30 a1 c1    	mov    0xc1a1300c,%ebx
c1003f29:	e8 1d f4 ff ff       	call   c100334b <alloc_pid>
c1003f2e:	89 43 0c             	mov    %eax,0xc(%ebx)
c1003f31:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f36:	83 ec 08             	sub    $0x8,%esp
c1003f39:	68 e5 a9 00 c1       	push   $0xc100a9e5
c1003f3e:	50                   	push   %eax
c1003f3f:	e8 81 f4 ff ff       	call   c10033c5 <set_task_name>
c1003f44:	83 c4 10             	add    $0x10,%esp
c1003f47:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f4c:	89 c2                	mov    %eax,%edx
c1003f4e:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f53:	81 c2 00 20 00 00    	add    $0x2000,%edx
c1003f59:	89 50 24             	mov    %edx,0x24(%eax)
c1003f5c:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f61:	83 ec 0c             	sub    $0xc,%esp
c1003f64:	50                   	push   %eax
c1003f65:	e8 3e fd ff ff       	call   c1003ca8 <set_user_cr3>
c1003f6a:	83 c4 10             	add    $0x10,%esp
c1003f6d:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f72:	8d 90 b4 1f 00 00    	lea    0x1fb4(%eax),%edx
c1003f78:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f7d:	89 50 34             	mov    %edx,0x34(%eax)
c1003f80:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f85:	8b 40 34             	mov    0x34(%eax),%eax
c1003f88:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
c1003f8f:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003f94:	8b 40 34             	mov    0x34(%eax),%eax
c1003f97:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c1003f9e:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fa3:	8b 40 34             	mov    0x34(%eax),%eax
c1003fa6:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1003fad:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fb2:	8b 40 34             	mov    0x34(%eax),%eax
c1003fb5:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
c1003fbc:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fc1:	8b 40 34             	mov    0x34(%eax),%eax
c1003fc4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1003fca:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fcf:	8b 40 34             	mov    0x34(%eax),%eax
c1003fd2:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
c1003fd9:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fde:	8b 40 34             	mov    0x34(%eax),%eax
c1003fe1:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1003fe8:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003fed:	8b 40 34             	mov    0x34(%eax),%eax
c1003ff0:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
c1003ff7:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1003ffc:	8b 40 34             	mov    0x34(%eax),%eax
c1003fff:	66 c7 40 3c 1b 00    	movw   $0x1b,0x3c(%eax)
c1004005:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100400a:	8b 40 34             	mov    0x34(%eax),%eax
c100400d:	66 c7 40 48 23 00    	movw   $0x23,0x48(%eax)
c1004013:	8b 15 0c 30 a1 c1    	mov    0xc1a1300c,%edx
c1004019:	8b 52 34             	mov    0x34(%edx),%edx
c100401c:	0f b7 40 48          	movzwl 0x48(%eax),%eax
c1004020:	66 89 42 24          	mov    %ax,0x24(%edx)
c1004024:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004029:	8b 40 34             	mov    0x34(%eax),%eax
c100402c:	0f b7 52 24          	movzwl 0x24(%edx),%edx
c1004030:	66 89 50 28          	mov    %dx,0x28(%eax)
c1004034:	8b 15 0c 30 a1 c1    	mov    0xc1a1300c,%edx
c100403a:	8b 52 34             	mov    0x34(%edx),%edx
c100403d:	0f b7 40 28          	movzwl 0x28(%eax),%eax
c1004041:	66 89 42 2c          	mov    %ax,0x2c(%edx)
c1004045:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100404a:	8b 40 34             	mov    0x34(%eax),%eax
c100404d:	66 c7 40 20 00 00    	movw   $0x0,0x20(%eax)
c1004053:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004058:	8b 40 34             	mov    0x34(%eax),%eax
c100405b:	8b 55 08             	mov    0x8(%ebp),%edx
c100405e:	89 50 38             	mov    %edx,0x38(%eax)
c1004061:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004066:	8b 40 34             	mov    0x34(%eax),%eax
c1004069:	c7 40 40 02 02 00 00 	movl   $0x202,0x40(%eax)
c1004070:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004075:	89 c2                	mov    %eax,%edx
c1004077:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100407c:	8b 40 34             	mov    0x34(%eax),%eax
c100407f:	81 c2 00 10 00 00    	add    $0x1000,%edx
c1004085:	89 50 44             	mov    %edx,0x44(%eax)
c1004088:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100408d:	8b 15 e9 0d 00 c1    	mov    0xc1000de9,%edx
c1004093:	89 50 38             	mov    %edx,0x38(%eax)
c1004096:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100409b:	89 c2                	mov    %eax,%edx
c100409d:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040a2:	81 c2 00 10 00 00    	add    $0x1000,%edx
c10040a8:	89 50 3c             	mov    %edx,0x3c(%eax)
c10040ab:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040b0:	8b 50 34             	mov    0x34(%eax),%edx
c10040b3:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040b8:	8b 52 10             	mov    0x10(%edx),%edx
c10040bb:	89 50 40             	mov    %edx,0x40(%eax)
c10040be:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040c3:	8b 50 34             	mov    0x34(%eax),%edx
c10040c6:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040cb:	8b 52 14             	mov    0x14(%edx),%edx
c10040ce:	89 50 48             	mov    %edx,0x48(%eax)
c10040d1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10040d8:	eb 16                	jmp    c10040f0 <user_task_init+0x222>
c10040da:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040df:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10040e2:	83 c2 1c             	add    $0x1c,%edx
c10040e5:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c10040ec:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10040f0:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c10040f4:	7e e4                	jle    c10040da <user_task_init+0x20c>
c10040f6:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10040fb:	83 c0 58             	add    $0x58,%eax
c10040fe:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004101:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004104:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1004107:	89 50 04             	mov    %edx,0x4(%eax)
c100410a:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100410d:	8b 50 04             	mov    0x4(%eax),%edx
c1004110:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004113:	89 10                	mov    %edx,(%eax)
c1004115:	90                   	nop
c1004116:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100411b:	83 c0 60             	add    $0x60,%eax
c100411e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004121:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004124:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004127:	89 50 04             	mov    %edx,0x4(%eax)
c100412a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100412d:	8b 50 04             	mov    0x4(%eax),%edx
c1004130:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004133:	89 10                	mov    %edx,(%eax)
c1004135:	90                   	nop
c1004136:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100413b:	83 c0 60             	add    $0x60,%eax
c100413e:	83 ec 0c             	sub    $0xc,%esp
c1004141:	50                   	push   %eax
c1004142:	e8 38 f3 ff ff       	call   c100347f <add_all_link>
c1004147:	83 c4 10             	add    $0x10,%esp
c100414a:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100414f:	83 ec 0c             	sub    $0xc,%esp
c1004152:	50                   	push   %eax
c1004153:	e8 aa f3 ff ff       	call   c1003502 <add_pid_hash>
c1004158:	83 c4 10             	add    $0x10,%esp
c100415b:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004160:	83 ec 0c             	sub    $0xc,%esp
c1004163:	50                   	push   %eax
c1004164:	e8 19 f8 ff ff       	call   c1003982 <wakeup_task>
c1004169:	83 c4 10             	add    $0x10,%esp
c100416c:	a1 94 0c 01 c1       	mov    0xc1010c94,%eax
c1004171:	83 c0 01             	add    $0x1,%eax
c1004174:	a3 94 0c 01 c1       	mov    %eax,0xc1010c94
c1004179:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100417e:	a3 08 30 a1 c1       	mov    %eax,0xc1a13008
c1004183:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c1004188:	8b 40 24             	mov    0x24(%eax),%eax
c100418b:	83 ec 0c             	sub    $0xc,%esp
c100418e:	50                   	push   %eax
c100418f:	e8 1d c8 ff ff       	call   c10009b1 <set_ts_esp0>
c1004194:	83 c4 10             	add    $0x10,%esp
c1004197:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c100419c:	8b 40 28             	mov    0x28(%eax),%eax
c100419f:	83 ec 0c             	sub    $0xc,%esp
c10041a2:	50                   	push   %eax
c10041a3:	e8 ae c0 ff ff       	call   c1000256 <lcr3>
c10041a8:	83 c4 10             	add    $0x10,%esp
c10041ab:	a1 0c 30 a1 c1       	mov    0xc1a1300c,%eax
c10041b0:	8b 40 34             	mov    0x34(%eax),%eax
c10041b3:	89 c4                	mov    %eax,%esp
c10041b5:	e9 2f cc ff ff       	jmp    c1000de9 <__trapret>
c10041ba:	90                   	nop
c10041bb:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c10041be:	c9                   	leave  
c10041bf:	c3                   	ret    

c10041c0 <sys_print_task>:
c10041c0:	55                   	push   %ebp
c10041c1:	89 e5                	mov    %esp,%ebp
c10041c3:	83 ec 18             	sub    $0x18,%esp
c10041c6:	c7 45 f0 8c 0c 01 c1 	movl   $0xc1010c8c,-0x10(%ebp)
c10041cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10041d0:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10041d3:	83 ec 0c             	sub    $0xc,%esp
c10041d6:	68 ef a9 00 c1       	push   $0xc100a9ef
c10041db:	e8 dc 0d 00 00       	call   c1004fbc <printk>
c10041e0:	83 c4 10             	add    $0x10,%esp
c10041e3:	eb 6e                	jmp    c1004253 <sys_print_task+0x93>
c10041e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10041e8:	83 e8 60             	sub    $0x60,%eax
c10041eb:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10041ee:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10041f1:	8d 50 10             	lea    0x10(%eax),%edx
c10041f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10041f7:	8b 40 0c             	mov    0xc(%eax),%eax
c10041fa:	83 ec 04             	sub    $0x4,%esp
c10041fd:	52                   	push   %edx
c10041fe:	50                   	push   %eax
c10041ff:	68 01 aa 00 c1       	push   $0xc100aa01
c1004204:	e8 b3 0d 00 00       	call   c1004fbc <printk>
c1004209:	83 c4 10             	add    $0x10,%esp
c100420c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100420f:	8b 00                	mov    (%eax),%eax
c1004211:	83 f8 ff             	cmp    $0xffffffff,%eax
c1004214:	75 12                	jne    c1004228 <sys_print_task+0x68>
c1004216:	83 ec 0c             	sub    $0xc,%esp
c1004219:	68 09 aa 00 c1       	push   $0xc100aa09
c100421e:	e8 99 0d 00 00       	call   c1004fbc <printk>
c1004223:	83 c4 10             	add    $0x10,%esp
c1004226:	eb 2b                	jmp    c1004253 <sys_print_task+0x93>
c1004228:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100422b:	8b 00                	mov    (%eax),%eax
c100422d:	85 c0                	test   %eax,%eax
c100422f:	75 12                	jne    c1004243 <sys_print_task+0x83>
c1004231:	83 ec 0c             	sub    $0xc,%esp
c1004234:	68 15 aa 00 c1       	push   $0xc100aa15
c1004239:	e8 7e 0d 00 00       	call   c1004fbc <printk>
c100423e:	83 c4 10             	add    $0x10,%esp
c1004241:	eb 10                	jmp    c1004253 <sys_print_task+0x93>
c1004243:	83 ec 0c             	sub    $0xc,%esp
c1004246:	68 1f aa 00 c1       	push   $0xc100aa1f
c100424b:	e8 6c 0d 00 00       	call   c1004fbc <printk>
c1004250:	83 c4 10             	add    $0x10,%esp
c1004253:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004256:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004259:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100425c:	8b 40 04             	mov    0x4(%eax),%eax
c100425f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004262:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004265:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1004268:	0f 85 77 ff ff ff    	jne    c10041e5 <sys_print_task+0x25>
c100426e:	90                   	nop
c100426f:	90                   	nop
c1004270:	c9                   	leave  
c1004271:	c3                   	ret    

c1004272 <kernel_thread_entry>:
c1004272:	fb                   	sti    
c1004273:	52                   	push   %edx
c1004274:	ff d3                	call   *%ebx
c1004276:	c3                   	ret    

c1004277 <switch_to>:
c1004277:	8b 44 24 04          	mov    0x4(%esp),%eax
c100427b:	8f 00                	popl   (%eax)
c100427d:	89 60 04             	mov    %esp,0x4(%eax)
c1004280:	89 58 08             	mov    %ebx,0x8(%eax)
c1004283:	89 48 0c             	mov    %ecx,0xc(%eax)
c1004286:	89 50 10             	mov    %edx,0x10(%eax)
c1004289:	89 70 14             	mov    %esi,0x14(%eax)
c100428c:	89 78 18             	mov    %edi,0x18(%eax)
c100428f:	89 68 1c             	mov    %ebp,0x1c(%eax)
c1004292:	8b 44 24 04          	mov    0x4(%esp),%eax
c1004296:	8b 68 1c             	mov    0x1c(%eax),%ebp
c1004299:	8b 78 18             	mov    0x18(%eax),%edi
c100429c:	8b 70 14             	mov    0x14(%eax),%esi
c100429f:	8b 50 10             	mov    0x10(%eax),%edx
c10042a2:	8b 48 0c             	mov    0xc(%eax),%ecx
c10042a5:	8b 58 08             	mov    0x8(%eax),%ebx
c10042a8:	8b 60 04             	mov    0x4(%eax),%esp
c10042ab:	ff 30                	pushl  (%eax)
c10042ad:	c3                   	ret    

c10042ae <hash32>:
c10042ae:	55                   	push   %ebp
c10042af:	89 e5                	mov    %esp,%ebp
c10042b1:	83 ec 10             	sub    $0x10,%esp
c10042b4:	8b 45 08             	mov    0x8(%ebp),%eax
c10042b7:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10042bd:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10042c0:	b8 20 00 00 00       	mov    $0x20,%eax
c10042c5:	2b 45 0c             	sub    0xc(%ebp),%eax
c10042c8:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10042cb:	89 c1                	mov    %eax,%ecx
c10042cd:	d3 ea                	shr    %cl,%edx
c10042cf:	89 d0                	mov    %edx,%eax
c10042d1:	c9                   	leave  
c10042d2:	c3                   	ret    

c10042d3 <segment_load>:
c10042d3:	55                   	push   %ebp
c10042d4:	89 e5                	mov    %esp,%ebp
c10042d6:	83 ec 18             	sub    $0x18,%esp
c10042d9:	8b 45 14             	mov    0x14(%ebp),%eax
c10042dc:	25 00 f0 ff ff       	and    $0xfffff000,%eax
c10042e1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10042e4:	8b 45 14             	mov    0x14(%ebp),%eax
c10042e7:	25 ff 0f 00 00       	and    $0xfff,%eax
c10042ec:	ba 00 10 00 00       	mov    $0x1000,%edx
c10042f1:	29 c2                	sub    %eax,%edx
c10042f3:	89 d0                	mov    %edx,%eax
c10042f5:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10042f8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10042ff:	8b 45 10             	mov    0x10(%ebp),%eax
c1004302:	3b 45 ec             	cmp    -0x14(%ebp),%eax
c1004305:	76 1c                	jbe    c1004323 <segment_load+0x50>
c1004307:	8b 45 10             	mov    0x10(%ebp),%eax
c100430a:	2b 45 ec             	sub    -0x14(%ebp),%eax
c100430d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1004310:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004313:	05 00 10 00 00       	add    $0x1000,%eax
c1004318:	c1 e8 0c             	shr    $0xc,%eax
c100431b:	83 c0 01             	add    $0x1,%eax
c100431e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004321:	eb 07                	jmp    c100432a <segment_load+0x57>
c1004323:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c100432a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100432d:	c1 e0 0c             	shl    $0xc,%eax
c1004330:	89 c2                	mov    %eax,%edx
c1004332:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1004335:	01 d0                	add    %edx,%eax
c1004337:	83 ec 04             	sub    $0x4,%esp
c100433a:	68 00 00 00 60       	push   $0x60000000
c100433f:	50                   	push   %eax
c1004340:	ff 75 f0             	pushl  -0x10(%ebp)
c1004343:	e8 d5 eb ff ff       	call   c1002f1d <sys_mmap>
c1004348:	83 c4 10             	add    $0x10,%esp
c100434b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100434e:	83 ec 04             	sub    $0x4,%esp
c1004351:	6a 01                	push   $0x1
c1004353:	50                   	push   %eax
c1004354:	ff 75 08             	pushl  0x8(%ebp)
c1004357:	e8 7b 27 00 00       	call   c1006ad7 <sys_lseek>
c100435c:	83 c4 10             	add    $0x10,%esp
c100435f:	8b 45 14             	mov    0x14(%ebp),%eax
c1004362:	83 ec 04             	sub    $0x4,%esp
c1004365:	ff 75 10             	pushl  0x10(%ebp)
c1004368:	50                   	push   %eax
c1004369:	ff 75 08             	pushl  0x8(%ebp)
c100436c:	e8 6e 26 00 00       	call   c10069df <sys_read>
c1004371:	83 c4 10             	add    $0x10,%esp
c1004374:	b8 01 00 00 00       	mov    $0x1,%eax
c1004379:	c9                   	leave  
c100437a:	c3                   	ret    

c100437b <load>:
c100437b:	55                   	push   %ebp
c100437c:	89 e5                	mov    %esp,%ebp
c100437e:	83 ec 78             	sub    $0x78,%esp
c1004381:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004388:	83 ec 04             	sub    $0x4,%esp
c100438b:	6a 34                	push   $0x34
c100438d:	6a 00                	push   $0x0
c100438f:	8d 45 b0             	lea    -0x50(%ebp),%eax
c1004392:	50                   	push   %eax
c1004393:	e8 12 bd ff ff       	call   c10000aa <memset>
c1004398:	83 c4 10             	add    $0x10,%esp
c100439b:	83 ec 08             	sub    $0x8,%esp
c100439e:	6a 00                	push   $0x0
c10043a0:	ff 75 08             	pushl  0x8(%ebp)
c10043a3:	e8 20 22 00 00       	call   c10065c8 <sys_open>
c10043a8:	83 c4 10             	add    $0x10,%esp
c10043ab:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10043ae:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c10043b2:	75 0a                	jne    c10043be <load+0x43>
c10043b4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10043b9:	e9 48 01 00 00       	jmp    c1004506 <load+0x18b>
c10043be:	83 ec 04             	sub    $0x4,%esp
c10043c1:	6a 34                	push   $0x34
c10043c3:	8d 45 b0             	lea    -0x50(%ebp),%eax
c10043c6:	50                   	push   %eax
c10043c7:	ff 75 e8             	pushl  -0x18(%ebp)
c10043ca:	e8 10 26 00 00       	call   c10069df <sys_read>
c10043cf:	83 c4 10             	add    $0x10,%esp
c10043d2:	83 f8 34             	cmp    $0x34,%eax
c10043d5:	74 0c                	je     c10043e3 <load+0x68>
c10043d7:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10043de:	e9 12 01 00 00       	jmp    c10044f5 <load+0x17a>
c10043e3:	83 ec 04             	sub    $0x4,%esp
c10043e6:	6a 07                	push   $0x7
c10043e8:	68 4f aa 00 c1       	push   $0xc100aa4f
c10043ed:	8d 45 b0             	lea    -0x50(%ebp),%eax
c10043f0:	50                   	push   %eax
c10043f1:	e8 6c be ff ff       	call   c1000262 <memcmp>
c10043f6:	83 c4 10             	add    $0x10,%esp
c10043f9:	85 c0                	test   %eax,%eax
c10043fb:	75 30                	jne    c100442d <load+0xb2>
c10043fd:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
c1004401:	66 83 f8 02          	cmp    $0x2,%ax
c1004405:	75 26                	jne    c100442d <load+0xb2>
c1004407:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
c100440b:	66 83 f8 03          	cmp    $0x3,%ax
c100440f:	75 1c                	jne    c100442d <load+0xb2>
c1004411:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1004414:	83 f8 01             	cmp    $0x1,%eax
c1004417:	75 14                	jne    c100442d <load+0xb2>
c1004419:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
c100441d:	66 3d 00 04          	cmp    $0x400,%ax
c1004421:	77 0a                	ja     c100442d <load+0xb2>
c1004423:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004427:	66 83 f8 20          	cmp    $0x20,%ax
c100442b:	74 0c                	je     c1004439 <load+0xbe>
c100442d:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1004434:	e9 bc 00 00 00       	jmp    c10044f5 <load+0x17a>
c1004439:	8b 45 cc             	mov    -0x34(%ebp),%eax
c100443c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100443f:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c1004443:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c1004447:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100444e:	e9 8c 00 00 00       	jmp    c10044df <load+0x164>
c1004453:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
c1004457:	83 ec 04             	sub    $0x4,%esp
c100445a:	50                   	push   %eax
c100445b:	6a 00                	push   $0x0
c100445d:	8d 45 90             	lea    -0x70(%ebp),%eax
c1004460:	50                   	push   %eax
c1004461:	e8 44 bc ff ff       	call   c10000aa <memset>
c1004466:	83 c4 10             	add    $0x10,%esp
c1004469:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100446c:	83 ec 04             	sub    $0x4,%esp
c100446f:	6a 01                	push   $0x1
c1004471:	50                   	push   %eax
c1004472:	ff 75 e8             	pushl  -0x18(%ebp)
c1004475:	e8 5d 26 00 00       	call   c1006ad7 <sys_lseek>
c100447a:	83 c4 10             	add    $0x10,%esp
c100447d:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
c1004481:	83 ec 04             	sub    $0x4,%esp
c1004484:	50                   	push   %eax
c1004485:	8d 45 90             	lea    -0x70(%ebp),%eax
c1004488:	50                   	push   %eax
c1004489:	ff 75 e8             	pushl  -0x18(%ebp)
c100448c:	e8 4e 25 00 00       	call   c10069df <sys_read>
c1004491:	83 c4 10             	add    $0x10,%esp
c1004494:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c1004498:	39 d0                	cmp    %edx,%eax
c100449a:	74 09                	je     c10044a5 <load+0x12a>
c100449c:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10044a3:	eb 50                	jmp    c10044f5 <load+0x17a>
c10044a5:	8b 45 90             	mov    -0x70(%ebp),%eax
c10044a8:	83 f8 01             	cmp    $0x1,%eax
c10044ab:	75 24                	jne    c10044d1 <load+0x156>
c10044ad:	8b 4d 98             	mov    -0x68(%ebp),%ecx
c10044b0:	8b 55 a0             	mov    -0x60(%ebp),%edx
c10044b3:	8b 45 94             	mov    -0x6c(%ebp),%eax
c10044b6:	51                   	push   %ecx
c10044b7:	52                   	push   %edx
c10044b8:	50                   	push   %eax
c10044b9:	ff 75 e8             	pushl  -0x18(%ebp)
c10044bc:	e8 12 fe ff ff       	call   c10042d3 <segment_load>
c10044c1:	83 c4 10             	add    $0x10,%esp
c10044c4:	84 c0                	test   %al,%al
c10044c6:	75 09                	jne    c10044d1 <load+0x156>
c10044c8:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10044cf:	eb 24                	jmp    c10044f5 <load+0x17a>
c10044d1:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
c10044d5:	0f b7 c0             	movzwl %ax,%eax
c10044d8:	01 45 f0             	add    %eax,-0x10(%ebp)
c10044db:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10044df:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
c10044e3:	0f b7 c0             	movzwl %ax,%eax
c10044e6:	39 45 ec             	cmp    %eax,-0x14(%ebp)
c10044e9:	0f 82 64 ff ff ff    	jb     c1004453 <load+0xd8>
c10044ef:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10044f2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10044f5:	83 ec 0c             	sub    $0xc,%esp
c10044f8:	ff 75 e8             	pushl  -0x18(%ebp)
c10044fb:	e8 90 23 00 00       	call   c1006890 <sys_close>
c1004500:	83 c4 10             	add    $0x10,%esp
c1004503:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004506:	c9                   	leave  
c1004507:	c3                   	ret    

c1004508 <sys_execv>:
c1004508:	55                   	push   %ebp
c1004509:	89 e5                	mov    %esp,%ebp
c100450b:	83 ec 18             	sub    $0x18,%esp
c100450e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004515:	eb 04                	jmp    c100451b <sys_execv+0x13>
c1004517:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100451b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100451e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1004525:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004528:	01 d0                	add    %edx,%eax
c100452a:	8b 00                	mov    (%eax),%eax
c100452c:	85 c0                	test   %eax,%eax
c100452e:	75 e7                	jne    c1004517 <sys_execv+0xf>
c1004530:	83 ec 0c             	sub    $0xc,%esp
c1004533:	ff 75 08             	pushl  0x8(%ebp)
c1004536:	e8 40 fe ff ff       	call   c100437b <load>
c100453b:	83 c4 10             	add    $0x10,%esp
c100453e:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004541:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1004545:	75 07                	jne    c100454e <sys_execv+0x46>
c1004547:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100454c:	eb 6a                	jmp    c10045b8 <sys_execv+0xb0>
c100454e:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004553:	83 c0 10             	add    $0x10,%eax
c1004556:	83 ec 04             	sub    $0x4,%esp
c1004559:	6a 14                	push   $0x14
c100455b:	ff 75 08             	pushl  0x8(%ebp)
c100455e:	50                   	push   %eax
c100455f:	e8 a4 bb ff ff       	call   c1000108 <memcpy>
c1004564:	83 c4 10             	add    $0x10,%esp
c1004567:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100456c:	c6 40 23 00          	movb   $0x0,0x23(%eax)
c1004570:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1004575:	05 b4 1f 00 00       	add    $0x1fb4,%eax
c100457a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100457d:	8b 55 0c             	mov    0xc(%ebp),%edx
c1004580:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004583:	89 50 10             	mov    %edx,0x10(%eax)
c1004586:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004589:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100458c:	89 50 18             	mov    %edx,0x18(%eax)
c100458f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004592:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004595:	89 50 38             	mov    %edx,0x38(%eax)
c1004598:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100459d:	8d 90 00 10 00 00    	lea    0x1000(%eax),%edx
c10045a3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10045a6:	89 50 44             	mov    %edx,0x44(%eax)
c10045a9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10045ac:	89 c4                	mov    %eax,%esp
c10045ae:	e9 36 c8 ff ff       	jmp    c1000de9 <__trapret>
c10045b3:	b8 00 00 00 00       	mov    $0x0,%eax
c10045b8:	c9                   	leave  
c10045b9:	c3                   	ret    

c10045ba <pic_setmask>:
c10045ba:	55                   	push   %ebp
c10045bb:	89 e5                	mov    %esp,%ebp
c10045bd:	83 ec 28             	sub    $0x28,%esp
c10045c0:	8b 45 08             	mov    0x8(%ebp),%eax
c10045c3:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
c10045c7:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c10045cb:	66 a3 24 db 00 c1    	mov    %ax,0xc100db24
c10045d1:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c10045d5:	88 45 f7             	mov    %al,-0x9(%ebp)
c10045d8:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
c10045dc:	66 c1 e8 08          	shr    $0x8,%ax
c10045e0:	88 45 f6             	mov    %al,-0xa(%ebp)
c10045e3:	0f b6 05 ad 0c 01 c1 	movzbl 0xc1010cad,%eax
c10045ea:	84 c0                	test   %al,%al
c10045ec:	74 27                	je     c1004615 <pic_setmask+0x5b>
c10045ee:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10045f2:	83 ec 08             	sub    $0x8,%esp
c10045f5:	50                   	push   %eax
c10045f6:	6a 21                	push   $0x21
c10045f8:	e8 3f ba ff ff       	call   c100003c <outb>
c10045fd:	83 c4 10             	add    $0x10,%esp
c1004600:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1004604:	83 ec 08             	sub    $0x8,%esp
c1004607:	50                   	push   %eax
c1004608:	68 a1 00 00 00       	push   $0xa1
c100460d:	e8 2a ba ff ff       	call   c100003c <outb>
c1004612:	83 c4 10             	add    $0x10,%esp
c1004615:	90                   	nop
c1004616:	c9                   	leave  
c1004617:	c3                   	ret    

c1004618 <pic_enable>:
c1004618:	55                   	push   %ebp
c1004619:	89 e5                	mov    %esp,%ebp
c100461b:	83 ec 08             	sub    $0x8,%esp
c100461e:	8b 45 08             	mov    0x8(%ebp),%eax
c1004621:	ba 01 00 00 00       	mov    $0x1,%edx
c1004626:	89 c1                	mov    %eax,%ecx
c1004628:	d3 e2                	shl    %cl,%edx
c100462a:	89 d0                	mov    %edx,%eax
c100462c:	f7 d0                	not    %eax
c100462e:	89 c2                	mov    %eax,%edx
c1004630:	0f b7 05 24 db 00 c1 	movzwl 0xc100db24,%eax
c1004637:	21 d0                	and    %edx,%eax
c1004639:	0f b7 c0             	movzwl %ax,%eax
c100463c:	83 ec 0c             	sub    $0xc,%esp
c100463f:	50                   	push   %eax
c1004640:	e8 75 ff ff ff       	call   c10045ba <pic_setmask>
c1004645:	83 c4 10             	add    $0x10,%esp
c1004648:	90                   	nop
c1004649:	c9                   	leave  
c100464a:	c3                   	ret    

c100464b <pic_init>:
c100464b:	55                   	push   %ebp
c100464c:	89 e5                	mov    %esp,%ebp
c100464e:	83 ec 08             	sub    $0x8,%esp
c1004651:	c6 05 ad 0c 01 c1 01 	movb   $0x1,0xc1010cad
c1004658:	83 ec 08             	sub    $0x8,%esp
c100465b:	68 ff 00 00 00       	push   $0xff
c1004660:	6a 21                	push   $0x21
c1004662:	e8 d5 b9 ff ff       	call   c100003c <outb>
c1004667:	83 c4 10             	add    $0x10,%esp
c100466a:	83 ec 08             	sub    $0x8,%esp
c100466d:	68 ff 00 00 00       	push   $0xff
c1004672:	68 a1 00 00 00       	push   $0xa1
c1004677:	e8 c0 b9 ff ff       	call   c100003c <outb>
c100467c:	83 c4 10             	add    $0x10,%esp
c100467f:	83 ec 08             	sub    $0x8,%esp
c1004682:	6a 11                	push   $0x11
c1004684:	6a 20                	push   $0x20
c1004686:	e8 b1 b9 ff ff       	call   c100003c <outb>
c100468b:	83 c4 10             	add    $0x10,%esp
c100468e:	83 ec 08             	sub    $0x8,%esp
c1004691:	6a 11                	push   $0x11
c1004693:	68 a0 00 00 00       	push   $0xa0
c1004698:	e8 9f b9 ff ff       	call   c100003c <outb>
c100469d:	83 c4 10             	add    $0x10,%esp
c10046a0:	83 ec 08             	sub    $0x8,%esp
c10046a3:	6a 20                	push   $0x20
c10046a5:	6a 21                	push   $0x21
c10046a7:	e8 90 b9 ff ff       	call   c100003c <outb>
c10046ac:	83 c4 10             	add    $0x10,%esp
c10046af:	83 ec 08             	sub    $0x8,%esp
c10046b2:	6a 28                	push   $0x28
c10046b4:	68 a1 00 00 00       	push   $0xa1
c10046b9:	e8 7e b9 ff ff       	call   c100003c <outb>
c10046be:	83 c4 10             	add    $0x10,%esp
c10046c1:	83 ec 08             	sub    $0x8,%esp
c10046c4:	6a 04                	push   $0x4
c10046c6:	6a 21                	push   $0x21
c10046c8:	e8 6f b9 ff ff       	call   c100003c <outb>
c10046cd:	83 c4 10             	add    $0x10,%esp
c10046d0:	83 ec 08             	sub    $0x8,%esp
c10046d3:	6a 02                	push   $0x2
c10046d5:	68 a1 00 00 00       	push   $0xa1
c10046da:	e8 5d b9 ff ff       	call   c100003c <outb>
c10046df:	83 c4 10             	add    $0x10,%esp
c10046e2:	83 ec 08             	sub    $0x8,%esp
c10046e5:	6a 03                	push   $0x3
c10046e7:	6a 21                	push   $0x21
c10046e9:	e8 4e b9 ff ff       	call   c100003c <outb>
c10046ee:	83 c4 10             	add    $0x10,%esp
c10046f1:	83 ec 08             	sub    $0x8,%esp
c10046f4:	6a 03                	push   $0x3
c10046f6:	68 a1 00 00 00       	push   $0xa1
c10046fb:	e8 3c b9 ff ff       	call   c100003c <outb>
c1004700:	83 c4 10             	add    $0x10,%esp
c1004703:	83 ec 08             	sub    $0x8,%esp
c1004706:	6a 68                	push   $0x68
c1004708:	6a 20                	push   $0x20
c100470a:	e8 2d b9 ff ff       	call   c100003c <outb>
c100470f:	83 c4 10             	add    $0x10,%esp
c1004712:	83 ec 08             	sub    $0x8,%esp
c1004715:	6a 68                	push   $0x68
c1004717:	68 a0 00 00 00       	push   $0xa0
c100471c:	e8 1b b9 ff ff       	call   c100003c <outb>
c1004721:	83 c4 10             	add    $0x10,%esp
c1004724:	83 ec 08             	sub    $0x8,%esp
c1004727:	6a 0a                	push   $0xa
c1004729:	6a 20                	push   $0x20
c100472b:	e8 0c b9 ff ff       	call   c100003c <outb>
c1004730:	83 c4 10             	add    $0x10,%esp
c1004733:	83 ec 08             	sub    $0x8,%esp
c1004736:	6a 0a                	push   $0xa
c1004738:	68 a0 00 00 00       	push   $0xa0
c100473d:	e8 fa b8 ff ff       	call   c100003c <outb>
c1004742:	83 c4 10             	add    $0x10,%esp
c1004745:	0f b7 05 24 db 00 c1 	movzwl 0xc100db24,%eax
c100474c:	66 83 f8 ff          	cmp    $0xffff,%ax
c1004750:	74 16                	je     c1004768 <pic_init+0x11d>
c1004752:	0f b7 05 24 db 00 c1 	movzwl 0xc100db24,%eax
c1004759:	0f b7 c0             	movzwl %ax,%eax
c100475c:	83 ec 0c             	sub    $0xc,%esp
c100475f:	50                   	push   %eax
c1004760:	e8 55 fe ff ff       	call   c10045ba <pic_setmask>
c1004765:	83 c4 10             	add    $0x10,%esp
c1004768:	90                   	nop
c1004769:	c9                   	leave  
c100476a:	c3                   	ret    

c100476b <delay>:
c100476b:	55                   	push   %ebp
c100476c:	89 e5                	mov    %esp,%ebp
c100476e:	83 ec 08             	sub    $0x8,%esp
c1004771:	83 ec 0c             	sub    $0xc,%esp
c1004774:	68 84 00 00 00       	push   $0x84
c1004779:	e8 82 b8 ff ff       	call   c1000000 <inb>
c100477e:	83 c4 10             	add    $0x10,%esp
c1004781:	83 ec 0c             	sub    $0xc,%esp
c1004784:	68 84 00 00 00       	push   $0x84
c1004789:	e8 72 b8 ff ff       	call   c1000000 <inb>
c100478e:	83 c4 10             	add    $0x10,%esp
c1004791:	83 ec 0c             	sub    $0xc,%esp
c1004794:	68 84 00 00 00       	push   $0x84
c1004799:	e8 62 b8 ff ff       	call   c1000000 <inb>
c100479e:	83 c4 10             	add    $0x10,%esp
c10047a1:	83 ec 0c             	sub    $0xc,%esp
c10047a4:	68 84 00 00 00       	push   $0x84
c10047a9:	e8 52 b8 ff ff       	call   c1000000 <inb>
c10047ae:	83 c4 10             	add    $0x10,%esp
c10047b1:	90                   	nop
c10047b2:	c9                   	leave  
c10047b3:	c3                   	ret    

c10047b4 <serial_init>:
c10047b4:	55                   	push   %ebp
c10047b5:	89 e5                	mov    %esp,%ebp
c10047b7:	83 ec 08             	sub    $0x8,%esp
c10047ba:	83 ec 08             	sub    $0x8,%esp
c10047bd:	6a 00                	push   $0x0
c10047bf:	68 fa 03 00 00       	push   $0x3fa
c10047c4:	e8 73 b8 ff ff       	call   c100003c <outb>
c10047c9:	83 c4 10             	add    $0x10,%esp
c10047cc:	83 ec 08             	sub    $0x8,%esp
c10047cf:	68 80 00 00 00       	push   $0x80
c10047d4:	68 fb 03 00 00       	push   $0x3fb
c10047d9:	e8 5e b8 ff ff       	call   c100003c <outb>
c10047de:	83 c4 10             	add    $0x10,%esp
c10047e1:	83 ec 08             	sub    $0x8,%esp
c10047e4:	6a 0c                	push   $0xc
c10047e6:	68 f8 03 00 00       	push   $0x3f8
c10047eb:	e8 4c b8 ff ff       	call   c100003c <outb>
c10047f0:	83 c4 10             	add    $0x10,%esp
c10047f3:	83 ec 08             	sub    $0x8,%esp
c10047f6:	6a 00                	push   $0x0
c10047f8:	68 f9 03 00 00       	push   $0x3f9
c10047fd:	e8 3a b8 ff ff       	call   c100003c <outb>
c1004802:	83 c4 10             	add    $0x10,%esp
c1004805:	83 ec 08             	sub    $0x8,%esp
c1004808:	6a 03                	push   $0x3
c100480a:	68 fb 03 00 00       	push   $0x3fb
c100480f:	e8 28 b8 ff ff       	call   c100003c <outb>
c1004814:	83 c4 10             	add    $0x10,%esp
c1004817:	83 ec 08             	sub    $0x8,%esp
c100481a:	6a 00                	push   $0x0
c100481c:	68 fc 03 00 00       	push   $0x3fc
c1004821:	e8 16 b8 ff ff       	call   c100003c <outb>
c1004826:	83 c4 10             	add    $0x10,%esp
c1004829:	83 ec 08             	sub    $0x8,%esp
c100482c:	6a 01                	push   $0x1
c100482e:	68 f9 03 00 00       	push   $0x3f9
c1004833:	e8 04 b8 ff ff       	call   c100003c <outb>
c1004838:	83 c4 10             	add    $0x10,%esp
c100483b:	83 ec 0c             	sub    $0xc,%esp
c100483e:	68 fd 03 00 00       	push   $0x3fd
c1004843:	e8 b8 b7 ff ff       	call   c1000000 <inb>
c1004848:	83 c4 10             	add    $0x10,%esp
c100484b:	3c ff                	cmp    $0xff,%al
c100484d:	0f 95 c0             	setne  %al
c1004850:	a2 ae 0c 01 c1       	mov    %al,0xc1010cae
c1004855:	83 ec 0c             	sub    $0xc,%esp
c1004858:	68 fa 03 00 00       	push   $0x3fa
c100485d:	e8 9e b7 ff ff       	call   c1000000 <inb>
c1004862:	83 c4 10             	add    $0x10,%esp
c1004865:	83 ec 0c             	sub    $0xc,%esp
c1004868:	68 f8 03 00 00       	push   $0x3f8
c100486d:	e8 8e b7 ff ff       	call   c1000000 <inb>
c1004872:	83 c4 10             	add    $0x10,%esp
c1004875:	0f b6 05 ae 0c 01 c1 	movzbl 0xc1010cae,%eax
c100487c:	84 c0                	test   %al,%al
c100487e:	74 1d                	je     c100489d <serial_init+0xe9>
c1004880:	83 ec 0c             	sub    $0xc,%esp
c1004883:	68 57 aa 00 c1       	push   $0xc100aa57
c1004888:	e8 2f 07 00 00       	call   c1004fbc <printk>
c100488d:	83 c4 10             	add    $0x10,%esp
c1004890:	83 ec 0c             	sub    $0xc,%esp
c1004893:	6a 04                	push   $0x4
c1004895:	e8 7e fd ff ff       	call   c1004618 <pic_enable>
c100489a:	83 c4 10             	add    $0x10,%esp
c100489d:	90                   	nop
c100489e:	c9                   	leave  
c100489f:	c3                   	ret    

c10048a0 <lpt_putc_sub>:
c10048a0:	55                   	push   %ebp
c10048a1:	89 e5                	mov    %esp,%ebp
c10048a3:	83 ec 18             	sub    $0x18,%esp
c10048a6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10048ad:	eb 09                	jmp    c10048b8 <lpt_putc_sub+0x18>
c10048af:	e8 b7 fe ff ff       	call   c100476b <delay>
c10048b4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10048b8:	83 ec 0c             	sub    $0xc,%esp
c10048bb:	68 79 03 00 00       	push   $0x379
c10048c0:	e8 3b b7 ff ff       	call   c1000000 <inb>
c10048c5:	83 c4 10             	add    $0x10,%esp
c10048c8:	84 c0                	test   %al,%al
c10048ca:	78 09                	js     c10048d5 <lpt_putc_sub+0x35>
c10048cc:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c10048d3:	7e da                	jle    c10048af <lpt_putc_sub+0xf>
c10048d5:	8b 45 08             	mov    0x8(%ebp),%eax
c10048d8:	0f b6 c0             	movzbl %al,%eax
c10048db:	83 ec 08             	sub    $0x8,%esp
c10048de:	50                   	push   %eax
c10048df:	68 78 03 00 00       	push   $0x378
c10048e4:	e8 53 b7 ff ff       	call   c100003c <outb>
c10048e9:	83 c4 10             	add    $0x10,%esp
c10048ec:	83 ec 08             	sub    $0x8,%esp
c10048ef:	6a 0d                	push   $0xd
c10048f1:	68 7a 03 00 00       	push   $0x37a
c10048f6:	e8 41 b7 ff ff       	call   c100003c <outb>
c10048fb:	83 c4 10             	add    $0x10,%esp
c10048fe:	83 ec 08             	sub    $0x8,%esp
c1004901:	6a 08                	push   $0x8
c1004903:	68 7a 03 00 00       	push   $0x37a
c1004908:	e8 2f b7 ff ff       	call   c100003c <outb>
c100490d:	83 c4 10             	add    $0x10,%esp
c1004910:	90                   	nop
c1004911:	c9                   	leave  
c1004912:	c3                   	ret    

c1004913 <lpt_putc>:
c1004913:	55                   	push   %ebp
c1004914:	89 e5                	mov    %esp,%ebp
c1004916:	83 ec 08             	sub    $0x8,%esp
c1004919:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c100491d:	74 10                	je     c100492f <lpt_putc+0x1c>
c100491f:	83 ec 0c             	sub    $0xc,%esp
c1004922:	ff 75 08             	pushl  0x8(%ebp)
c1004925:	e8 76 ff ff ff       	call   c10048a0 <lpt_putc_sub>
c100492a:	83 c4 10             	add    $0x10,%esp
c100492d:	eb 27                	jmp    c1004956 <lpt_putc+0x43>
c100492f:	83 ec 0c             	sub    $0xc,%esp
c1004932:	6a 08                	push   $0x8
c1004934:	e8 67 ff ff ff       	call   c10048a0 <lpt_putc_sub>
c1004939:	83 c4 10             	add    $0x10,%esp
c100493c:	83 ec 0c             	sub    $0xc,%esp
c100493f:	6a 20                	push   $0x20
c1004941:	e8 5a ff ff ff       	call   c10048a0 <lpt_putc_sub>
c1004946:	83 c4 10             	add    $0x10,%esp
c1004949:	83 ec 0c             	sub    $0xc,%esp
c100494c:	6a 08                	push   $0x8
c100494e:	e8 4d ff ff ff       	call   c10048a0 <lpt_putc_sub>
c1004953:	83 c4 10             	add    $0x10,%esp
c1004956:	90                   	nop
c1004957:	c9                   	leave  
c1004958:	c3                   	ret    

c1004959 <cons_intr>:
c1004959:	55                   	push   %ebp
c100495a:	89 e5                	mov    %esp,%ebp
c100495c:	83 ec 18             	sub    $0x18,%esp
c100495f:	eb 3b                	jmp    c100499c <cons_intr+0x43>
c1004961:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1004965:	74 35                	je     c100499c <cons_intr+0x43>
c1004967:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c100496c:	8d 50 01             	lea    0x1(%eax),%edx
c100496f:	89 15 24 32 a1 c1    	mov    %edx,0xc1a13224
c1004975:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1004978:	88 90 20 30 a1 c1    	mov    %dl,-0x3e5ecfe0(%eax)
c100497e:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004981:	a2 6c ec 00 c1       	mov    %al,0xc100ec6c
c1004986:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c100498b:	3d 00 02 00 00       	cmp    $0x200,%eax
c1004990:	75 0a                	jne    c100499c <cons_intr+0x43>
c1004992:	c7 05 24 32 a1 c1 00 	movl   $0x0,0xc1a13224
c1004999:	00 00 00 
c100499c:	8b 45 08             	mov    0x8(%ebp),%eax
c100499f:	ff d0                	call   *%eax
c10049a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10049a4:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c10049a8:	75 b7                	jne    c1004961 <cons_intr+0x8>
c10049aa:	90                   	nop
c10049ab:	90                   	nop
c10049ac:	c9                   	leave  
c10049ad:	c3                   	ret    

c10049ae <serial_proc_data>:
c10049ae:	55                   	push   %ebp
c10049af:	89 e5                	mov    %esp,%ebp
c10049b1:	83 ec 18             	sub    $0x18,%esp
c10049b4:	83 ec 0c             	sub    $0xc,%esp
c10049b7:	68 fd 03 00 00       	push   $0x3fd
c10049bc:	e8 3f b6 ff ff       	call   c1000000 <inb>
c10049c1:	83 c4 10             	add    $0x10,%esp
c10049c4:	0f b6 c0             	movzbl %al,%eax
c10049c7:	83 e0 01             	and    $0x1,%eax
c10049ca:	85 c0                	test   %eax,%eax
c10049cc:	75 07                	jne    c10049d5 <serial_proc_data+0x27>
c10049ce:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10049d3:	eb 26                	jmp    c10049fb <serial_proc_data+0x4d>
c10049d5:	83 ec 0c             	sub    $0xc,%esp
c10049d8:	68 f8 03 00 00       	push   $0x3f8
c10049dd:	e8 1e b6 ff ff       	call   c1000000 <inb>
c10049e2:	83 c4 10             	add    $0x10,%esp
c10049e5:	0f b6 c0             	movzbl %al,%eax
c10049e8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10049eb:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
c10049ef:	75 07                	jne    c10049f8 <serial_proc_data+0x4a>
c10049f1:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
c10049f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10049fb:	c9                   	leave  
c10049fc:	c3                   	ret    

c10049fd <serial_intr>:
c10049fd:	55                   	push   %ebp
c10049fe:	89 e5                	mov    %esp,%ebp
c1004a00:	83 ec 08             	sub    $0x8,%esp
c1004a03:	0f b6 05 ae 0c 01 c1 	movzbl 0xc1010cae,%eax
c1004a0a:	84 c0                	test   %al,%al
c1004a0c:	74 10                	je     c1004a1e <serial_intr+0x21>
c1004a0e:	83 ec 0c             	sub    $0xc,%esp
c1004a11:	68 ae 49 00 c1       	push   $0xc10049ae
c1004a16:	e8 3e ff ff ff       	call   c1004959 <cons_intr>
c1004a1b:	83 c4 10             	add    $0x10,%esp
c1004a1e:	90                   	nop
c1004a1f:	c9                   	leave  
c1004a20:	c3                   	ret    

c1004a21 <serial_putc_sub>:
c1004a21:	55                   	push   %ebp
c1004a22:	89 e5                	mov    %esp,%ebp
c1004a24:	83 ec 18             	sub    $0x18,%esp
c1004a27:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1004a2e:	eb 09                	jmp    c1004a39 <serial_putc_sub+0x18>
c1004a30:	e8 36 fd ff ff       	call   c100476b <delay>
c1004a35:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1004a39:	83 ec 0c             	sub    $0xc,%esp
c1004a3c:	68 fd 03 00 00       	push   $0x3fd
c1004a41:	e8 ba b5 ff ff       	call   c1000000 <inb>
c1004a46:	83 c4 10             	add    $0x10,%esp
c1004a49:	0f b6 c0             	movzbl %al,%eax
c1004a4c:	83 e0 20             	and    $0x20,%eax
c1004a4f:	85 c0                	test   %eax,%eax
c1004a51:	75 09                	jne    c1004a5c <serial_putc_sub+0x3b>
c1004a53:	81 7d f4 ff 31 00 00 	cmpl   $0x31ff,-0xc(%ebp)
c1004a5a:	7e d4                	jle    c1004a30 <serial_putc_sub+0xf>
c1004a5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1004a5f:	0f b6 c0             	movzbl %al,%eax
c1004a62:	83 ec 08             	sub    $0x8,%esp
c1004a65:	50                   	push   %eax
c1004a66:	68 f8 03 00 00       	push   $0x3f8
c1004a6b:	e8 cc b5 ff ff       	call   c100003c <outb>
c1004a70:	83 c4 10             	add    $0x10,%esp
c1004a73:	90                   	nop
c1004a74:	c9                   	leave  
c1004a75:	c3                   	ret    

c1004a76 <serial_putc>:
c1004a76:	55                   	push   %ebp
c1004a77:	89 e5                	mov    %esp,%ebp
c1004a79:	83 ec 08             	sub    $0x8,%esp
c1004a7c:	83 7d 08 08          	cmpl   $0x8,0x8(%ebp)
c1004a80:	74 10                	je     c1004a92 <serial_putc+0x1c>
c1004a82:	83 ec 0c             	sub    $0xc,%esp
c1004a85:	ff 75 08             	pushl  0x8(%ebp)
c1004a88:	e8 94 ff ff ff       	call   c1004a21 <serial_putc_sub>
c1004a8d:	83 c4 10             	add    $0x10,%esp
c1004a90:	eb 27                	jmp    c1004ab9 <serial_putc+0x43>
c1004a92:	83 ec 0c             	sub    $0xc,%esp
c1004a95:	6a 08                	push   $0x8
c1004a97:	e8 85 ff ff ff       	call   c1004a21 <serial_putc_sub>
c1004a9c:	83 c4 10             	add    $0x10,%esp
c1004a9f:	83 ec 0c             	sub    $0xc,%esp
c1004aa2:	6a 20                	push   $0x20
c1004aa4:	e8 78 ff ff ff       	call   c1004a21 <serial_putc_sub>
c1004aa9:	83 c4 10             	add    $0x10,%esp
c1004aac:	83 ec 0c             	sub    $0xc,%esp
c1004aaf:	6a 08                	push   $0x8
c1004ab1:	e8 6b ff ff ff       	call   c1004a21 <serial_putc_sub>
c1004ab6:	83 c4 10             	add    $0x10,%esp
c1004ab9:	90                   	nop
c1004aba:	c9                   	leave  
c1004abb:	c3                   	ret    

c1004abc <timer_init>:
c1004abc:	55                   	push   %ebp
c1004abd:	89 e5                	mov    %esp,%ebp
c1004abf:	83 ec 18             	sub    $0x18,%esp
c1004ac2:	b8 dc 34 12 00       	mov    $0x1234dc,%eax
c1004ac7:	ba 00 00 00 00       	mov    $0x0,%edx
c1004acc:	f7 75 08             	divl   0x8(%ebp)
c1004acf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004ad2:	83 ec 08             	sub    $0x8,%esp
c1004ad5:	6a 36                	push   $0x36
c1004ad7:	6a 43                	push   $0x43
c1004ad9:	e8 5e b5 ff ff       	call   c100003c <outb>
c1004ade:	83 c4 10             	add    $0x10,%esp
c1004ae1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004ae4:	88 45 f3             	mov    %al,-0xd(%ebp)
c1004ae7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1004aea:	c1 e8 08             	shr    $0x8,%eax
c1004aed:	88 45 f2             	mov    %al,-0xe(%ebp)
c1004af0:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
c1004af4:	83 ec 08             	sub    $0x8,%esp
c1004af7:	50                   	push   %eax
c1004af8:	6a 40                	push   $0x40
c1004afa:	e8 3d b5 ff ff       	call   c100003c <outb>
c1004aff:	83 c4 10             	add    $0x10,%esp
c1004b02:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
c1004b06:	83 ec 08             	sub    $0x8,%esp
c1004b09:	50                   	push   %eax
c1004b0a:	6a 40                	push   $0x40
c1004b0c:	e8 2b b5 ff ff       	call   c100003c <outb>
c1004b11:	83 c4 10             	add    $0x10,%esp
c1004b14:	c7 05 2c 32 a1 c1 00 	movl   $0x0,0xc1a1322c
c1004b1b:	00 00 00 
c1004b1e:	c7 05 28 32 a1 c1 00 	movl   $0x0,0xc1a13228
c1004b25:	00 00 00 
c1004b28:	83 ec 0c             	sub    $0xc,%esp
c1004b2b:	6a 00                	push   $0x0
c1004b2d:	e8 e6 fa ff ff       	call   c1004618 <pic_enable>
c1004b32:	83 c4 10             	add    $0x10,%esp
c1004b35:	90                   	nop
c1004b36:	c9                   	leave  
c1004b37:	c3                   	ret    

c1004b38 <print_cursor>:
c1004b38:	55                   	push   %ebp
c1004b39:	89 e5                	mov    %esp,%ebp
c1004b3b:	83 ec 28             	sub    $0x28,%esp
c1004b3e:	8b 55 08             	mov    0x8(%ebp),%edx
c1004b41:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004b44:	88 55 e4             	mov    %dl,-0x1c(%ebp)
c1004b47:	88 45 e0             	mov    %al,-0x20(%ebp)
c1004b4a:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
c1004b4e:	89 d0                	mov    %edx,%eax
c1004b50:	c1 e0 02             	shl    $0x2,%eax
c1004b53:	01 d0                	add    %edx,%eax
c1004b55:	c1 e0 04             	shl    $0x4,%eax
c1004b58:	89 c2                	mov    %eax,%edx
c1004b5a:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c1004b5e:	01 d0                	add    %edx,%eax
c1004b60:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c1004b64:	83 ec 08             	sub    $0x8,%esp
c1004b67:	6a 0e                	push   $0xe
c1004b69:	68 d4 03 00 00       	push   $0x3d4
c1004b6e:	e8 c9 b4 ff ff       	call   c100003c <outb>
c1004b73:	83 c4 10             	add    $0x10,%esp
c1004b76:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004b7a:	66 c1 e8 08          	shr    $0x8,%ax
c1004b7e:	0f b6 c0             	movzbl %al,%eax
c1004b81:	83 ec 08             	sub    $0x8,%esp
c1004b84:	50                   	push   %eax
c1004b85:	68 d5 03 00 00       	push   $0x3d5
c1004b8a:	e8 ad b4 ff ff       	call   c100003c <outb>
c1004b8f:	83 c4 10             	add    $0x10,%esp
c1004b92:	83 ec 08             	sub    $0x8,%esp
c1004b95:	6a 0f                	push   $0xf
c1004b97:	68 d4 03 00 00       	push   $0x3d4
c1004b9c:	e8 9b b4 ff ff       	call   c100003c <outb>
c1004ba1:	83 c4 10             	add    $0x10,%esp
c1004ba4:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004ba8:	0f b6 c0             	movzbl %al,%eax
c1004bab:	83 ec 08             	sub    $0x8,%esp
c1004bae:	50                   	push   %eax
c1004baf:	68 d5 03 00 00       	push   $0x3d5
c1004bb4:	e8 83 b4 ff ff       	call   c100003c <outb>
c1004bb9:	83 c4 10             	add    $0x10,%esp
c1004bbc:	90                   	nop
c1004bbd:	c9                   	leave  
c1004bbe:	c3                   	ret    

c1004bbf <clear>:
c1004bbf:	55                   	push   %ebp
c1004bc0:	89 e5                	mov    %esp,%ebp
c1004bc2:	83 ec 18             	sub    $0x18,%esp
c1004bc5:	66 c7 45 f4 00 0f    	movw   $0xf00,-0xc(%ebp)
c1004bcb:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1004bcf:	83 c8 20             	or     $0x20,%eax
c1004bd2:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1004bd6:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1004bdc:	eb 1f                	jmp    c1004bfd <clear+0x3e>
c1004bde:	a1 28 db 00 c1       	mov    0xc100db28,%eax
c1004be3:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
c1004be7:	01 d2                	add    %edx,%edx
c1004be9:	01 c2                	add    %eax,%edx
c1004beb:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
c1004bef:	66 89 02             	mov    %ax,(%edx)
c1004bf2:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004bf6:	83 c0 01             	add    $0x1,%eax
c1004bf9:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c1004bfd:	66 81 7d f6 cf 07    	cmpw   $0x7cf,-0xa(%ebp)
c1004c03:	76 d9                	jbe    c1004bde <clear+0x1f>
c1004c05:	c6 05 af 0c 01 c1 00 	movb   $0x0,0xc1010caf
c1004c0c:	c6 05 b0 0c 01 c1 00 	movb   $0x0,0xc1010cb0
c1004c13:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004c1a:	0f b6 d0             	movzbl %al,%edx
c1004c1d:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004c24:	0f b6 c0             	movzbl %al,%eax
c1004c27:	83 ec 08             	sub    $0x8,%esp
c1004c2a:	52                   	push   %edx
c1004c2b:	50                   	push   %eax
c1004c2c:	e8 07 ff ff ff       	call   c1004b38 <print_cursor>
c1004c31:	83 c4 10             	add    $0x10,%esp
c1004c34:	90                   	nop
c1004c35:	c9                   	leave  
c1004c36:	c3                   	ret    

c1004c37 <print_char>:
c1004c37:	55                   	push   %ebp
c1004c38:	89 e5                	mov    %esp,%ebp
c1004c3a:	83 ec 28             	sub    $0x28,%esp
c1004c3d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004c40:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1004c43:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1004c49:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c1004c4f:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004c56:	3c 18                	cmp    $0x18,%al
c1004c58:	76 05                	jbe    c1004c5f <print_char+0x28>
c1004c5a:	e8 60 ff ff ff       	call   c1004bbf <clear>
c1004c5f:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004c66:	0f b6 d0             	movzbl %al,%edx
c1004c69:	89 d0                	mov    %edx,%eax
c1004c6b:	c1 e0 02             	shl    $0x2,%eax
c1004c6e:	01 d0                	add    %edx,%eax
c1004c70:	c1 e0 04             	shl    $0x4,%eax
c1004c73:	89 c2                	mov    %eax,%edx
c1004c75:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004c7c:	0f b6 c0             	movzbl %al,%eax
c1004c7f:	01 d0                	add    %edx,%eax
c1004c81:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1004c85:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
c1004c89:	83 f8 09             	cmp    $0x9,%eax
c1004c8c:	74 20                	je     c1004cae <print_char+0x77>
c1004c8e:	83 f8 0a             	cmp    $0xa,%eax
c1004c91:	75 2f                	jne    c1004cc2 <print_char+0x8b>
c1004c93:	c6 05 b0 0c 01 c1 00 	movb   $0x0,0xc1010cb0
c1004c9a:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004ca1:	83 c0 01             	add    $0x1,%eax
c1004ca4:	a2 af 0c 01 c1       	mov    %al,0xc1010caf
c1004ca9:	e9 82 00 00 00       	jmp    c1004d30 <print_char+0xf9>
c1004cae:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004cb5:	83 c0 08             	add    $0x8,%eax
c1004cb8:	83 e0 f8             	and    $0xfffffff8,%eax
c1004cbb:	a2 b0 0c 01 c1       	mov    %al,0xc1010cb0
c1004cc0:	eb 6e                	jmp    c1004d30 <print_char+0xf9>
c1004cc2:	66 0f be 45 e4       	movsbw -0x1c(%ebp),%ax
c1004cc7:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
c1004ccb:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004cce:	c1 e0 04             	shl    $0x4,%eax
c1004cd1:	0f b6 c0             	movzbl %al,%eax
c1004cd4:	8b 55 10             	mov    0x10(%ebp),%edx
c1004cd7:	83 e2 0f             	and    $0xf,%edx
c1004cda:	09 d0                	or     %edx,%eax
c1004cdc:	c1 e0 08             	shl    $0x8,%eax
c1004cdf:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
c1004ce3:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004ce7:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c1004ceb:	a1 28 db 00 c1       	mov    0xc100db28,%eax
c1004cf0:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c1004cf4:	01 d2                	add    %edx,%edx
c1004cf6:	01 c2                	add    %eax,%edx
c1004cf8:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1004cfc:	66 89 02             	mov    %ax,(%edx)
c1004cff:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004d06:	83 c0 01             	add    $0x1,%eax
c1004d09:	a2 b0 0c 01 c1       	mov    %al,0xc1010cb0
c1004d0e:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004d15:	3c 4f                	cmp    $0x4f,%al
c1004d17:	76 16                	jbe    c1004d2f <print_char+0xf8>
c1004d19:	c6 05 b0 0c 01 c1 00 	movb   $0x0,0xc1010cb0
c1004d20:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004d27:	83 c0 01             	add    $0x1,%eax
c1004d2a:	a2 af 0c 01 c1       	mov    %al,0xc1010caf
c1004d2f:	90                   	nop
c1004d30:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004d37:	0f b6 d0             	movzbl %al,%edx
c1004d3a:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004d41:	0f b6 c0             	movzbl %al,%eax
c1004d44:	83 ec 08             	sub    $0x8,%esp
c1004d47:	52                   	push   %edx
c1004d48:	50                   	push   %eax
c1004d49:	e8 ea fd ff ff       	call   c1004b38 <print_cursor>
c1004d4e:	83 c4 10             	add    $0x10,%esp
c1004d51:	90                   	nop
c1004d52:	c9                   	leave  
c1004d53:	c3                   	ret    

c1004d54 <print_string>:
c1004d54:	55                   	push   %ebp
c1004d55:	89 e5                	mov    %esp,%ebp
c1004d57:	83 ec 08             	sub    $0x8,%esp
c1004d5a:	eb 21                	jmp    c1004d7d <print_string+0x29>
c1004d5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d5f:	8d 50 01             	lea    0x1(%eax),%edx
c1004d62:	89 55 08             	mov    %edx,0x8(%ebp)
c1004d65:	0f b6 00             	movzbl (%eax),%eax
c1004d68:	0f be c0             	movsbl %al,%eax
c1004d6b:	83 ec 04             	sub    $0x4,%esp
c1004d6e:	ff 75 10             	pushl  0x10(%ebp)
c1004d71:	ff 75 0c             	pushl  0xc(%ebp)
c1004d74:	50                   	push   %eax
c1004d75:	e8 bd fe ff ff       	call   c1004c37 <print_char>
c1004d7a:	83 c4 10             	add    $0x10,%esp
c1004d7d:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d80:	0f b6 00             	movzbl (%eax),%eax
c1004d83:	84 c0                	test   %al,%al
c1004d85:	75 d5                	jne    c1004d5c <print_string+0x8>
c1004d87:	90                   	nop
c1004d88:	90                   	nop
c1004d89:	c9                   	leave  
c1004d8a:	c3                   	ret    

c1004d8b <print_num>:
c1004d8b:	55                   	push   %ebp
c1004d8c:	89 e5                	mov    %esp,%ebp
c1004d8e:	83 ec 48             	sub    $0x48,%esp
c1004d91:	8b 4d 18             	mov    0x18(%ebp),%ecx
c1004d94:	8b 55 1c             	mov    0x1c(%ebp),%edx
c1004d97:	8b 45 08             	mov    0x8(%ebp),%eax
c1004d9a:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1004d9d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1004da0:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1004da3:	89 c8                	mov    %ecx,%eax
c1004da5:	88 45 bc             	mov    %al,-0x44(%ebp)
c1004da8:	89 d0                	mov    %edx,%eax
c1004daa:	88 45 b8             	mov    %al,-0x48(%ebp)
c1004dad:	0f be 45 b8          	movsbl -0x48(%ebp),%eax
c1004db1:	c6 44 05 c8 00       	movb   $0x0,-0x38(%ebp,%eax,1)
c1004db6:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
c1004dba:	83 e8 01             	sub    $0x1,%eax
c1004dbd:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004dc0:	e9 c0 00 00 00       	jmp    c1004e85 <print_num+0xfa>
c1004dc5:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
c1004dc9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1004dcc:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1004dcf:	8b 55 c4             	mov    -0x3c(%ebp),%edx
c1004dd2:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004dd5:	89 55 ec             	mov    %edx,-0x14(%ebp)
c1004dd8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004ddb:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1004dde:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1004de2:	74 1c                	je     c1004e00 <print_num+0x75>
c1004de4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004de7:	ba 00 00 00 00       	mov    $0x0,%edx
c1004dec:	f7 75 e4             	divl   -0x1c(%ebp)
c1004def:	89 55 f0             	mov    %edx,-0x10(%ebp)
c1004df2:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1004df5:	ba 00 00 00 00       	mov    $0x0,%edx
c1004dfa:	f7 75 e4             	divl   -0x1c(%ebp)
c1004dfd:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1004e00:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004e03:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1004e06:	f7 75 e4             	divl   -0x1c(%ebp)
c1004e09:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1004e0c:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1004e0f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1004e12:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1004e15:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1004e18:	89 55 c4             	mov    %edx,-0x3c(%ebp)
c1004e1b:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1004e1e:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004e22:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1004e26:	80 7d bc 0a          	cmpb   $0xa,-0x44(%ebp)
c1004e2a:	75 16                	jne    c1004e42 <print_num+0xb7>
c1004e2c:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004e30:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004e35:	8d 50 30             	lea    0x30(%eax),%edx
c1004e38:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004e3c:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1004e40:	eb 39                	jmp    c1004e7b <print_num+0xf0>
c1004e42:	80 7d bc 10          	cmpb   $0x10,-0x44(%ebp)
c1004e46:	75 33                	jne    c1004e7b <print_num+0xf0>
c1004e48:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004e4c:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004e51:	3c 09                	cmp    $0x9,%al
c1004e53:	7e 10                	jle    c1004e65 <print_num+0xda>
c1004e55:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004e59:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004e5e:	83 c0 37             	add    $0x37,%eax
c1004e61:	89 c2                	mov    %eax,%edx
c1004e63:	eb 0e                	jmp    c1004e73 <print_num+0xe8>
c1004e65:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004e69:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004e6e:	83 c0 30             	add    $0x30,%eax
c1004e71:	89 c2                	mov    %eax,%edx
c1004e73:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1004e77:	88 54 05 c8          	mov    %dl,-0x38(%ebp,%eax,1)
c1004e7b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1004e7f:	83 e8 01             	sub    $0x1,%eax
c1004e82:	88 45 f7             	mov    %al,-0x9(%ebp)
c1004e85:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
c1004e89:	0f 89 36 ff ff ff    	jns    c1004dc5 <print_num+0x3a>
c1004e8f:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
c1004e93:	75 5e                	jne    c1004ef3 <print_num+0x168>
c1004e95:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c1004e9c:	90                   	nop
c1004e9d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004ea0:	8d 50 01             	lea    0x1(%eax),%edx
c1004ea3:	89 55 e8             	mov    %edx,-0x18(%ebp)
c1004ea6:	0f b6 44 05 c8       	movzbl -0x38(%ebp,%eax,1),%eax
c1004eab:	3c 30                	cmp    $0x30,%al
c1004ead:	74 ee                	je     c1004e9d <print_num+0x112>
c1004eaf:	83 6d e8 01          	subl   $0x1,-0x18(%ebp)
c1004eb3:	8d 55 c8             	lea    -0x38(%ebp),%edx
c1004eb6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004eb9:	01 d0                	add    %edx,%eax
c1004ebb:	0f b6 00             	movzbl (%eax),%eax
c1004ebe:	84 c0                	test   %al,%al
c1004ec0:	74 1c                	je     c1004ede <print_num+0x153>
c1004ec2:	8d 55 c8             	lea    -0x38(%ebp),%edx
c1004ec5:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1004ec8:	01 d0                	add    %edx,%eax
c1004eca:	83 ec 04             	sub    $0x4,%esp
c1004ecd:	ff 75 14             	pushl  0x14(%ebp)
c1004ed0:	ff 75 10             	pushl  0x10(%ebp)
c1004ed3:	50                   	push   %eax
c1004ed4:	e8 7b fe ff ff       	call   c1004d54 <print_string>
c1004ed9:	83 c4 10             	add    $0x10,%esp
c1004edc:	eb 2a                	jmp    c1004f08 <print_num+0x17d>
c1004ede:	83 ec 04             	sub    $0x4,%esp
c1004ee1:	ff 75 14             	pushl  0x14(%ebp)
c1004ee4:	ff 75 10             	pushl  0x10(%ebp)
c1004ee7:	6a 30                	push   $0x30
c1004ee9:	e8 49 fd ff ff       	call   c1004c37 <print_char>
c1004eee:	83 c4 10             	add    $0x10,%esp
c1004ef1:	eb 15                	jmp    c1004f08 <print_num+0x17d>
c1004ef3:	83 ec 04             	sub    $0x4,%esp
c1004ef6:	ff 75 14             	pushl  0x14(%ebp)
c1004ef9:	ff 75 10             	pushl  0x10(%ebp)
c1004efc:	8d 45 c8             	lea    -0x38(%ebp),%eax
c1004eff:	50                   	push   %eax
c1004f00:	e8 4f fe ff ff       	call   c1004d54 <print_string>
c1004f05:	83 c4 10             	add    $0x10,%esp
c1004f08:	c9                   	leave  
c1004f09:	c3                   	ret    

c1004f0a <backtrace>:
c1004f0a:	55                   	push   %ebp
c1004f0b:	89 e5                	mov    %esp,%ebp
c1004f0d:	83 ec 18             	sub    $0x18,%esp
c1004f10:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004f17:	3c 15                	cmp    $0x15,%al
c1004f19:	0f 86 9a 00 00 00    	jbe    c1004fb9 <backtrace+0xaf>
c1004f1f:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004f26:	83 e8 01             	sub    $0x1,%eax
c1004f29:	a2 b0 0c 01 c1       	mov    %al,0xc1010cb0
c1004f2e:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
c1004f34:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
c1004f3a:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004f41:	3c 18                	cmp    $0x18,%al
c1004f43:	76 05                	jbe    c1004f4a <backtrace+0x40>
c1004f45:	e8 75 fc ff ff       	call   c1004bbf <clear>
c1004f4a:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004f51:	0f b6 d0             	movzbl %al,%edx
c1004f54:	89 d0                	mov    %edx,%eax
c1004f56:	c1 e0 02             	shl    $0x2,%eax
c1004f59:	01 d0                	add    %edx,%eax
c1004f5b:	c1 e0 04             	shl    $0x4,%eax
c1004f5e:	89 c2                	mov    %eax,%edx
c1004f60:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004f67:	0f b6 c0             	movzbl %al,%eax
c1004f6a:	01 d0                	add    %edx,%eax
c1004f6c:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
c1004f70:	66 c7 45 f4 20 00    	movw   $0x20,-0xc(%ebp)
c1004f76:	66 c7 45 f6 00 02    	movw   $0x200,-0xa(%ebp)
c1004f7c:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
c1004f80:	66 09 45 f4          	or     %ax,-0xc(%ebp)
c1004f84:	a1 28 db 00 c1       	mov    0xc100db28,%eax
c1004f89:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
c1004f8d:	01 d2                	add    %edx,%edx
c1004f8f:	01 c2                	add    %eax,%edx
c1004f91:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
c1004f95:	66 89 02             	mov    %ax,(%edx)
c1004f98:	0f b6 05 b0 0c 01 c1 	movzbl 0xc1010cb0,%eax
c1004f9f:	0f b6 d0             	movzbl %al,%edx
c1004fa2:	0f b6 05 af 0c 01 c1 	movzbl 0xc1010caf,%eax
c1004fa9:	0f b6 c0             	movzbl %al,%eax
c1004fac:	83 ec 08             	sub    $0x8,%esp
c1004faf:	52                   	push   %edx
c1004fb0:	50                   	push   %eax
c1004fb1:	e8 82 fb ff ff       	call   c1004b38 <print_cursor>
c1004fb6:	83 c4 10             	add    $0x10,%esp
c1004fb9:	90                   	nop
c1004fba:	c9                   	leave  
c1004fbb:	c3                   	ret    

c1004fbc <printk>:
c1004fbc:	55                   	push   %ebp
c1004fbd:	89 e5                	mov    %esp,%ebp
c1004fbf:	83 ec 38             	sub    $0x38,%esp
c1004fc2:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c1004fc6:	8d 45 0c             	lea    0xc(%ebp),%eax
c1004fc9:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1004fcc:	e9 6e 03 00 00       	jmp    c100533f <printk+0x383>
c1004fd1:	8b 45 08             	mov    0x8(%ebp),%eax
c1004fd4:	0f b6 00             	movzbl (%eax),%eax
c1004fd7:	3c 25                	cmp    $0x25,%al
c1004fd9:	0f 85 3a 03 00 00    	jne    c1005319 <printk+0x35d>
c1004fdf:	90                   	nop
c1004fe0:	8b 45 08             	mov    0x8(%ebp),%eax
c1004fe3:	83 c0 01             	add    $0x1,%eax
c1004fe6:	89 45 08             	mov    %eax,0x8(%ebp)
c1004fe9:	8b 45 08             	mov    0x8(%ebp),%eax
c1004fec:	0f b6 00             	movzbl (%eax),%eax
c1004fef:	0f be c0             	movsbl %al,%eax
c1004ff2:	83 e8 30             	sub    $0x30,%eax
c1004ff5:	83 f8 48             	cmp    $0x48,%eax
c1004ff8:	0f 87 fb 02 00 00    	ja     c10052f9 <printk+0x33d>
c1004ffe:	8b 04 85 88 aa 00 c1 	mov    -0x3eff5578(,%eax,4),%eax
c1005005:	ff e0                	jmp    *%eax
c1005007:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c100500b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100500e:	0f b6 40 fc          	movzbl -0x4(%eax),%eax
c1005012:	88 45 d7             	mov    %al,-0x29(%ebp)
c1005015:	0f be 45 d7          	movsbl -0x29(%ebp),%eax
c1005019:	83 ec 04             	sub    $0x4,%esp
c100501c:	6a 02                	push   $0x2
c100501e:	6a 00                	push   $0x0
c1005020:	50                   	push   %eax
c1005021:	e8 11 fc ff ff       	call   c1004c37 <print_char>
c1005026:	83 c4 10             	add    $0x10,%esp
c1005029:	e9 e0 02 00 00       	jmp    c100530e <printk+0x352>
c100502e:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005032:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005035:	8b 40 fc             	mov    -0x4(%eax),%eax
c1005038:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100503b:	83 ec 04             	sub    $0x4,%esp
c100503e:	6a 02                	push   $0x2
c1005040:	6a 00                	push   $0x0
c1005042:	ff 75 dc             	pushl  -0x24(%ebp)
c1005045:	e8 0a fd ff ff       	call   c1004d54 <print_string>
c100504a:	83 c4 10             	add    $0x10,%esp
c100504d:	e9 bc 02 00 00       	jmp    c100530e <printk+0x352>
c1005052:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005056:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005059:	8b 40 fc             	mov    -0x4(%eax),%eax
c100505c:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100505f:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005063:	74 23                	je     c1005088 <printk+0xcc>
c1005065:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c1005069:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100506c:	99                   	cltd   
c100506d:	83 ec 04             	sub    $0x4,%esp
c1005070:	6a 01                	push   $0x1
c1005072:	51                   	push   %ecx
c1005073:	6a 0a                	push   $0xa
c1005075:	6a 02                	push   $0x2
c1005077:	6a 00                	push   $0x0
c1005079:	52                   	push   %edx
c100507a:	50                   	push   %eax
c100507b:	e8 0b fd ff ff       	call   c1004d8b <print_num>
c1005080:	83 c4 20             	add    $0x20,%esp
c1005083:	e9 86 02 00 00       	jmp    c100530e <printk+0x352>
c1005088:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100508b:	99                   	cltd   
c100508c:	83 ec 04             	sub    $0x4,%esp
c100508f:	6a 00                	push   $0x0
c1005091:	6a 14                	push   $0x14
c1005093:	6a 0a                	push   $0xa
c1005095:	6a 02                	push   $0x2
c1005097:	6a 00                	push   $0x0
c1005099:	52                   	push   %edx
c100509a:	50                   	push   %eax
c100509b:	e8 eb fc ff ff       	call   c1004d8b <print_num>
c10050a0:	83 c4 20             	add    $0x20,%esp
c10050a3:	e9 66 02 00 00       	jmp    c100530e <printk+0x352>
c10050a8:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10050ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10050af:	8b 40 fc             	mov    -0x4(%eax),%eax
c10050b2:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10050b5:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10050b9:	74 23                	je     c10050de <printk+0x122>
c10050bb:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10050bf:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10050c2:	99                   	cltd   
c10050c3:	83 ec 04             	sub    $0x4,%esp
c10050c6:	6a 01                	push   $0x1
c10050c8:	51                   	push   %ecx
c10050c9:	6a 10                	push   $0x10
c10050cb:	6a 02                	push   $0x2
c10050cd:	6a 00                	push   $0x0
c10050cf:	52                   	push   %edx
c10050d0:	50                   	push   %eax
c10050d1:	e8 b5 fc ff ff       	call   c1004d8b <print_num>
c10050d6:	83 c4 20             	add    $0x20,%esp
c10050d9:	e9 30 02 00 00       	jmp    c100530e <printk+0x352>
c10050de:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10050e1:	99                   	cltd   
c10050e2:	83 ec 04             	sub    $0x4,%esp
c10050e5:	6a 00                	push   $0x0
c10050e7:	6a 14                	push   $0x14
c10050e9:	6a 10                	push   $0x10
c10050eb:	6a 02                	push   $0x2
c10050ed:	6a 00                	push   $0x0
c10050ef:	52                   	push   %edx
c10050f0:	50                   	push   %eax
c10050f1:	e8 95 fc ff ff       	call   c1004d8b <print_num>
c10050f6:	83 c4 20             	add    $0x20,%esp
c10050f9:	e9 10 02 00 00       	jmp    c100530e <printk+0x352>
c10050fe:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c1005102:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005105:	8b 50 fc             	mov    -0x4(%eax),%edx
c1005108:	8b 40 f8             	mov    -0x8(%eax),%eax
c100510b:	89 45 c8             	mov    %eax,-0x38(%ebp)
c100510e:	89 55 cc             	mov    %edx,-0x34(%ebp)
c1005111:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005115:	74 25                	je     c100513c <printk+0x180>
c1005117:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c100511b:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100511e:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1005121:	83 ec 04             	sub    $0x4,%esp
c1005124:	6a 01                	push   $0x1
c1005126:	51                   	push   %ecx
c1005127:	6a 10                	push   $0x10
c1005129:	6a 02                	push   $0x2
c100512b:	6a 00                	push   $0x0
c100512d:	52                   	push   %edx
c100512e:	50                   	push   %eax
c100512f:	e8 57 fc ff ff       	call   c1004d8b <print_num>
c1005134:	83 c4 20             	add    $0x20,%esp
c1005137:	e9 d2 01 00 00       	jmp    c100530e <printk+0x352>
c100513c:	8b 45 c8             	mov    -0x38(%ebp),%eax
c100513f:	8b 55 cc             	mov    -0x34(%ebp),%edx
c1005142:	83 ec 04             	sub    $0x4,%esp
c1005145:	6a 00                	push   $0x0
c1005147:	6a 14                	push   $0x14
c1005149:	6a 10                	push   $0x10
c100514b:	6a 02                	push   $0x2
c100514d:	6a 00                	push   $0x0
c100514f:	52                   	push   %edx
c1005150:	50                   	push   %eax
c1005151:	e8 35 fc ff ff       	call   c1004d8b <print_num>
c1005156:	83 c4 20             	add    $0x20,%esp
c1005159:	e9 b0 01 00 00       	jmp    c100530e <printk+0x352>
c100515e:	8b 45 08             	mov    0x8(%ebp),%eax
c1005161:	83 c0 01             	add    $0x1,%eax
c1005164:	89 45 08             	mov    %eax,0x8(%ebp)
c1005167:	8b 45 08             	mov    0x8(%ebp),%eax
c100516a:	0f b6 00             	movzbl (%eax),%eax
c100516d:	0f be c0             	movsbl %al,%eax
c1005170:	83 f8 78             	cmp    $0x78,%eax
c1005173:	0f 84 9a 00 00 00    	je     c1005213 <printk+0x257>
c1005179:	83 f8 78             	cmp    $0x78,%eax
c100517c:	0f 8f 3f 01 00 00    	jg     c10052c1 <printk+0x305>
c1005182:	83 f8 6c             	cmp    $0x6c,%eax
c1005185:	0f 84 e0 00 00 00    	je     c100526b <printk+0x2af>
c100518b:	83 f8 6c             	cmp    $0x6c,%eax
c100518e:	0f 8f 2d 01 00 00    	jg     c10052c1 <printk+0x305>
c1005194:	83 f8 64             	cmp    $0x64,%eax
c1005197:	74 1c                	je     c10051b5 <printk+0x1f9>
c1005199:	83 f8 64             	cmp    $0x64,%eax
c100519c:	0f 8f 1f 01 00 00    	jg     c10052c1 <printk+0x305>
c10051a2:	83 f8 4c             	cmp    $0x4c,%eax
c10051a5:	0f 84 c0 00 00 00    	je     c100526b <printk+0x2af>
c10051ab:	83 f8 58             	cmp    $0x58,%eax
c10051ae:	74 63                	je     c1005213 <printk+0x257>
c10051b0:	e9 0c 01 00 00       	jmp    c10052c1 <printk+0x305>
c10051b5:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c10051b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10051bc:	8b 40 fc             	mov    -0x4(%eax),%eax
c10051bf:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10051c2:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c10051c6:	74 27                	je     c10051ef <printk+0x233>
c10051c8:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c10051cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10051cf:	ba 00 00 00 00       	mov    $0x0,%edx
c10051d4:	83 ec 04             	sub    $0x4,%esp
c10051d7:	6a 01                	push   $0x1
c10051d9:	51                   	push   %ecx
c10051da:	6a 0a                	push   $0xa
c10051dc:	6a 02                	push   $0x2
c10051de:	6a 00                	push   $0x0
c10051e0:	52                   	push   %edx
c10051e1:	50                   	push   %eax
c10051e2:	e8 a4 fb ff ff       	call   c1004d8b <print_num>
c10051e7:	83 c4 20             	add    $0x20,%esp
c10051ea:	e9 d3 00 00 00       	jmp    c10052c2 <printk+0x306>
c10051ef:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10051f2:	ba 00 00 00 00       	mov    $0x0,%edx
c10051f7:	83 ec 04             	sub    $0x4,%esp
c10051fa:	6a 00                	push   $0x0
c10051fc:	6a 14                	push   $0x14
c10051fe:	6a 0a                	push   $0xa
c1005200:	6a 02                	push   $0x2
c1005202:	6a 00                	push   $0x0
c1005204:	52                   	push   %edx
c1005205:	50                   	push   %eax
c1005206:	e8 80 fb ff ff       	call   c1004d8b <print_num>
c100520b:	83 c4 20             	add    $0x20,%esp
c100520e:	e9 af 00 00 00       	jmp    c10052c2 <printk+0x306>
c1005213:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
c1005217:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100521a:	8b 40 fc             	mov    -0x4(%eax),%eax
c100521d:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005220:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005224:	74 24                	je     c100524a <printk+0x28e>
c1005226:	0f be 4d f3          	movsbl -0xd(%ebp),%ecx
c100522a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100522d:	ba 00 00 00 00       	mov    $0x0,%edx
c1005232:	83 ec 04             	sub    $0x4,%esp
c1005235:	6a 01                	push   $0x1
c1005237:	51                   	push   %ecx
c1005238:	6a 10                	push   $0x10
c100523a:	6a 02                	push   $0x2
c100523c:	6a 00                	push   $0x0
c100523e:	52                   	push   %edx
c100523f:	50                   	push   %eax
c1005240:	e8 46 fb ff ff       	call   c1004d8b <print_num>
c1005245:	83 c4 20             	add    $0x20,%esp
c1005248:	eb 78                	jmp    c10052c2 <printk+0x306>
c100524a:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100524d:	ba 00 00 00 00       	mov    $0x0,%edx
c1005252:	83 ec 04             	sub    $0x4,%esp
c1005255:	6a 00                	push   $0x0
c1005257:	6a 14                	push   $0x14
c1005259:	6a 10                	push   $0x10
c100525b:	6a 02                	push   $0x2
c100525d:	6a 00                	push   $0x0
c100525f:	52                   	push   %edx
c1005260:	50                   	push   %eax
c1005261:	e8 25 fb ff ff       	call   c1004d8b <print_num>
c1005266:	83 c4 20             	add    $0x20,%esp
c1005269:	eb 57                	jmp    c10052c2 <printk+0x306>
c100526b:	83 45 f4 08          	addl   $0x8,-0xc(%ebp)
c100526f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005272:	8b 50 fc             	mov    -0x4(%eax),%edx
c1005275:	8b 40 f8             	mov    -0x8(%eax),%eax
c1005278:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100527b:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c100527e:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
c1005282:	74 20                	je     c10052a4 <printk+0x2e8>
c1005284:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
c1005288:	83 ec 04             	sub    $0x4,%esp
c100528b:	6a 01                	push   $0x1
c100528d:	50                   	push   %eax
c100528e:	6a 10                	push   $0x10
c1005290:	6a 02                	push   $0x2
c1005292:	6a 00                	push   $0x0
c1005294:	ff 75 e4             	pushl  -0x1c(%ebp)
c1005297:	ff 75 e0             	pushl  -0x20(%ebp)
c100529a:	e8 ec fa ff ff       	call   c1004d8b <print_num>
c100529f:	83 c4 20             	add    $0x20,%esp
c10052a2:	eb 1e                	jmp    c10052c2 <printk+0x306>
c10052a4:	83 ec 04             	sub    $0x4,%esp
c10052a7:	6a 00                	push   $0x0
c10052a9:	6a 14                	push   $0x14
c10052ab:	6a 10                	push   $0x10
c10052ad:	6a 02                	push   $0x2
c10052af:	6a 00                	push   $0x0
c10052b1:	ff 75 e4             	pushl  -0x1c(%ebp)
c10052b4:	ff 75 e0             	pushl  -0x20(%ebp)
c10052b7:	e8 cf fa ff ff       	call   c1004d8b <print_num>
c10052bc:	83 c4 20             	add    $0x20,%esp
c10052bf:	eb 01                	jmp    c10052c2 <printk+0x306>
c10052c1:	90                   	nop
c10052c2:	eb 4a                	jmp    c100530e <printk+0x352>
c10052c4:	8b 45 08             	mov    0x8(%ebp),%eax
c10052c7:	0f b6 00             	movzbl (%eax),%eax
c10052ca:	0f be c0             	movsbl %al,%eax
c10052cd:	83 e8 30             	sub    $0x30,%eax
c10052d0:	89 c2                	mov    %eax,%edx
c10052d2:	89 d0                	mov    %edx,%eax
c10052d4:	c1 e0 02             	shl    $0x2,%eax
c10052d7:	01 d0                	add    %edx,%eax
c10052d9:	01 c0                	add    %eax,%eax
c10052db:	89 c2                	mov    %eax,%edx
c10052dd:	8b 45 08             	mov    0x8(%ebp),%eax
c10052e0:	83 c0 01             	add    $0x1,%eax
c10052e3:	89 45 08             	mov    %eax,0x8(%ebp)
c10052e6:	8b 45 08             	mov    0x8(%ebp),%eax
c10052e9:	0f b6 00             	movzbl (%eax),%eax
c10052ec:	01 d0                	add    %edx,%eax
c10052ee:	83 e8 30             	sub    $0x30,%eax
c10052f1:	88 45 f3             	mov    %al,-0xd(%ebp)
c10052f4:	e9 e7 fc ff ff       	jmp    c1004fe0 <printk+0x24>
c10052f9:	83 ec 04             	sub    $0x4,%esp
c10052fc:	6a 02                	push   $0x2
c10052fe:	6a 00                	push   $0x0
c1005300:	68 68 aa 00 c1       	push   $0xc100aa68
c1005305:	e8 4a fa ff ff       	call   c1004d54 <print_string>
c100530a:	83 c4 10             	add    $0x10,%esp
c100530d:	90                   	nop
c100530e:	8b 45 08             	mov    0x8(%ebp),%eax
c1005311:	83 c0 01             	add    $0x1,%eax
c1005314:	89 45 08             	mov    %eax,0x8(%ebp)
c1005317:	eb 22                	jmp    c100533b <printk+0x37f>
c1005319:	8b 45 08             	mov    0x8(%ebp),%eax
c100531c:	0f b6 00             	movzbl (%eax),%eax
c100531f:	0f be c0             	movsbl %al,%eax
c1005322:	83 ec 04             	sub    $0x4,%esp
c1005325:	6a 02                	push   $0x2
c1005327:	6a 00                	push   $0x0
c1005329:	50                   	push   %eax
c100532a:	e8 08 f9 ff ff       	call   c1004c37 <print_char>
c100532f:	83 c4 10             	add    $0x10,%esp
c1005332:	8b 45 08             	mov    0x8(%ebp),%eax
c1005335:	83 c0 01             	add    $0x1,%eax
c1005338:	89 45 08             	mov    %eax,0x8(%ebp)
c100533b:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
c100533f:	8b 45 08             	mov    0x8(%ebp),%eax
c1005342:	0f b6 00             	movzbl (%eax),%eax
c1005345:	84 c0                	test   %al,%al
c1005347:	0f 85 84 fc ff ff    	jne    c1004fd1 <printk+0x15>
c100534d:	90                   	nop
c100534e:	90                   	nop
c100534f:	c9                   	leave  
c1005350:	c3                   	ret    

c1005351 <cons_putc>:
c1005351:	55                   	push   %ebp
c1005352:	89 e5                	mov    %esp,%ebp
c1005354:	83 ec 08             	sub    $0x8,%esp
c1005357:	83 ec 0c             	sub    $0xc,%esp
c100535a:	ff 75 08             	pushl  0x8(%ebp)
c100535d:	e8 b1 f5 ff ff       	call   c1004913 <lpt_putc>
c1005362:	83 c4 10             	add    $0x10,%esp
c1005365:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1005369:	74 13                	je     c100537e <cons_putc+0x2d>
c100536b:	83 ec 08             	sub    $0x8,%esp
c100536e:	ff 75 08             	pushl  0x8(%ebp)
c1005371:	68 ac ab 00 c1       	push   $0xc100abac
c1005376:	e8 41 fc ff ff       	call   c1004fbc <printk>
c100537b:	83 c4 10             	add    $0x10,%esp
c100537e:	83 ec 0c             	sub    $0xc,%esp
c1005381:	ff 75 08             	pushl  0x8(%ebp)
c1005384:	e8 ed f6 ff ff       	call   c1004a76 <serial_putc>
c1005389:	83 c4 10             	add    $0x10,%esp
c100538c:	90                   	nop
c100538d:	c9                   	leave  
c100538e:	c3                   	ret    

c100538f <cons_getc>:
c100538f:	55                   	push   %ebp
c1005390:	89 e5                	mov    %esp,%ebp
c1005392:	83 ec 18             	sub    $0x18,%esp
c1005395:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100539c:	e8 5c f6 ff ff       	call   c10049fd <serial_intr>
c10053a1:	e8 f5 ca ff ff       	call   c1001e9b <kbd_intr>
c10053a6:	8b 15 20 32 a1 c1    	mov    0xc1a13220,%edx
c10053ac:	a1 24 32 a1 c1       	mov    0xc1a13224,%eax
c10053b1:	39 c2                	cmp    %eax,%edx
c10053b3:	74 31                	je     c10053e6 <cons_getc+0x57>
c10053b5:	a1 20 32 a1 c1       	mov    0xc1a13220,%eax
c10053ba:	8d 50 01             	lea    0x1(%eax),%edx
c10053bd:	89 15 20 32 a1 c1    	mov    %edx,0xc1a13220
c10053c3:	0f b6 80 20 30 a1 c1 	movzbl -0x3e5ecfe0(%eax),%eax
c10053ca:	0f b6 c0             	movzbl %al,%eax
c10053cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10053d0:	a1 20 32 a1 c1       	mov    0xc1a13220,%eax
c10053d5:	3d 00 02 00 00       	cmp    $0x200,%eax
c10053da:	75 0a                	jne    c10053e6 <cons_getc+0x57>
c10053dc:	c7 05 20 32 a1 c1 00 	movl   $0x0,0xc1a13220
c10053e3:	00 00 00 
c10053e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10053e9:	c9                   	leave  
c10053ea:	c3                   	ret    

c10053eb <hash32>:
c10053eb:	55                   	push   %ebp
c10053ec:	89 e5                	mov    %esp,%ebp
c10053ee:	83 ec 10             	sub    $0x10,%esp
c10053f1:	8b 45 08             	mov    0x8(%ebp),%eax
c10053f4:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10053fa:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10053fd:	b8 20 00 00 00       	mov    $0x20,%eax
c1005402:	2b 45 0c             	sub    0xc(%ebp),%eax
c1005405:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005408:	89 c1                	mov    %eax,%ecx
c100540a:	d3 ea                	shr    %cl,%edx
c100540c:	89 d0                	mov    %edx,%eax
c100540e:	c9                   	leave  
c100540f:	c3                   	ret    

c1005410 <sema_init>:
c1005410:	55                   	push   %ebp
c1005411:	89 e5                	mov    %esp,%ebp
c1005413:	83 ec 14             	sub    $0x14,%esp
c1005416:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005419:	88 45 ec             	mov    %al,-0x14(%ebp)
c100541c:	8b 45 08             	mov    0x8(%ebp),%eax
c100541f:	0f b6 55 ec          	movzbl -0x14(%ebp),%edx
c1005423:	88 10                	mov    %dl,(%eax)
c1005425:	8b 45 08             	mov    0x8(%ebp),%eax
c1005428:	83 c0 04             	add    $0x4,%eax
c100542b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c100542e:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005431:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005434:	89 50 04             	mov    %edx,0x4(%eax)
c1005437:	8b 45 fc             	mov    -0x4(%ebp),%eax
c100543a:	8b 50 04             	mov    0x4(%eax),%edx
c100543d:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1005440:	89 10                	mov    %edx,(%eax)
c1005442:	90                   	nop
c1005443:	90                   	nop
c1005444:	c9                   	leave  
c1005445:	c3                   	ret    

c1005446 <lock_init>:
c1005446:	55                   	push   %ebp
c1005447:	89 e5                	mov    %esp,%ebp
c1005449:	8b 45 08             	mov    0x8(%ebp),%eax
c100544c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005452:	8b 45 08             	mov    0x8(%ebp),%eax
c1005455:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c100545c:	8b 45 08             	mov    0x8(%ebp),%eax
c100545f:	83 c0 04             	add    $0x4,%eax
c1005462:	6a 01                	push   $0x1
c1005464:	50                   	push   %eax
c1005465:	e8 a6 ff ff ff       	call   c1005410 <sema_init>
c100546a:	83 c4 08             	add    $0x8,%esp
c100546d:	90                   	nop
c100546e:	c9                   	leave  
c100546f:	c3                   	ret    

c1005470 <sema_down>:
c1005470:	55                   	push   %ebp
c1005471:	89 e5                	mov    %esp,%ebp
c1005473:	83 ec 38             	sub    $0x38,%esp
c1005476:	8b 45 08             	mov    0x8(%ebp),%eax
c1005479:	83 c0 04             	add    $0x4,%eax
c100547c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100547f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005482:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005485:	e8 24 b9 ff ff       	call   c1000dae <intr_save>
c100548a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100548d:	e9 95 00 00 00       	jmp    c1005527 <sema_down+0xb7>
c1005492:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1005497:	83 c0 58             	add    $0x58,%eax
c100549a:	39 45 f4             	cmp    %eax,-0xc(%ebp)
c100549d:	75 16                	jne    c10054b5 <sema_down+0x45>
c100549f:	68 b0 ab 00 c1       	push   $0xc100abb0
c10054a4:	68 18 ac 00 c1       	push   $0xc100ac18
c10054a9:	6a 26                	push   $0x26
c10054ab:	68 e4 ab 00 c1       	push   $0xc100abe4
c10054b0:	e8 b6 ae ff ff       	call   c100036b <__PANIC>
c10054b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10054b8:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10054bb:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10054be:	8b 40 04             	mov    0x4(%eax),%eax
c10054c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10054c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10054c7:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c10054ca:	75 c6                	jne    c1005492 <sema_down+0x22>
c10054cc:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10054d1:	83 c0 58             	add    $0x58,%eax
c10054d4:	8b 55 08             	mov    0x8(%ebp),%edx
c10054d7:	83 c2 04             	add    $0x4,%edx
c10054da:	89 55 e4             	mov    %edx,-0x1c(%ebp)
c10054dd:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10054e0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10054e3:	8b 00                	mov    (%eax),%eax
c10054e5:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10054e8:	89 55 dc             	mov    %edx,-0x24(%ebp)
c10054eb:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10054ee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10054f1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10054f4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10054f7:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10054fa:	89 10                	mov    %edx,(%eax)
c10054fc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10054ff:	8b 10                	mov    (%eax),%edx
c1005501:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005504:	89 50 04             	mov    %edx,0x4(%eax)
c1005507:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100550a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c100550d:	89 50 04             	mov    %edx,0x4(%eax)
c1005510:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005513:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1005516:	89 10                	mov    %edx,(%eax)
c1005518:	90                   	nop
c1005519:	90                   	nop
c100551a:	83 ec 0c             	sub    $0xc,%esp
c100551d:	6a 01                	push   $0x1
c100551f:	e8 e7 e5 ff ff       	call   c1003b0b <thread_block>
c1005524:	83 c4 10             	add    $0x10,%esp
c1005527:	8b 45 08             	mov    0x8(%ebp),%eax
c100552a:	0f b6 00             	movzbl (%eax),%eax
c100552d:	84 c0                	test   %al,%al
c100552f:	74 84                	je     c10054b5 <sema_down+0x45>
c1005531:	8b 45 08             	mov    0x8(%ebp),%eax
c1005534:	0f b6 00             	movzbl (%eax),%eax
c1005537:	8d 50 ff             	lea    -0x1(%eax),%edx
c100553a:	8b 45 08             	mov    0x8(%ebp),%eax
c100553d:	88 10                	mov    %dl,(%eax)
c100553f:	83 ec 0c             	sub    $0xc,%esp
c1005542:	ff 75 ec             	pushl  -0x14(%ebp)
c1005545:	e8 77 b8 ff ff       	call   c1000dc1 <intr_restore>
c100554a:	83 c4 10             	add    $0x10,%esp
c100554d:	90                   	nop
c100554e:	c9                   	leave  
c100554f:	c3                   	ret    

c1005550 <sema_up>:
c1005550:	55                   	push   %ebp
c1005551:	89 e5                	mov    %esp,%ebp
c1005553:	83 ec 28             	sub    $0x28,%esp
c1005556:	8b 45 08             	mov    0x8(%ebp),%eax
c1005559:	83 c0 04             	add    $0x4,%eax
c100555c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100555f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005562:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005565:	e8 44 b8 ff ff       	call   c1000dae <intr_save>
c100556a:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100556d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005570:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1005573:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005576:	8b 40 04             	mov    0x4(%eax),%eax
c1005579:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100557c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100557f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1005582:	74 41                	je     c10055c5 <sema_up+0x75>
c1005584:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005587:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100558a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100558d:	8b 40 04             	mov    0x4(%eax),%eax
c1005590:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1005593:	8b 12                	mov    (%edx),%edx
c1005595:	89 55 dc             	mov    %edx,-0x24(%ebp)
c1005598:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100559b:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100559e:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10055a1:	89 50 04             	mov    %edx,0x4(%eax)
c10055a4:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10055a7:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10055aa:	89 10                	mov    %edx,(%eax)
c10055ac:	90                   	nop
c10055ad:	90                   	nop
c10055ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10055b1:	83 e8 58             	sub    $0x58,%eax
c10055b4:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10055b7:	83 ec 0c             	sub    $0xc,%esp
c10055ba:	ff 75 e8             	pushl  -0x18(%ebp)
c10055bd:	e8 96 e5 ff ff       	call   c1003b58 <thread_unblock>
c10055c2:	83 c4 10             	add    $0x10,%esp
c10055c5:	8b 45 08             	mov    0x8(%ebp),%eax
c10055c8:	0f b6 00             	movzbl (%eax),%eax
c10055cb:	8d 50 01             	lea    0x1(%eax),%edx
c10055ce:	8b 45 08             	mov    0x8(%ebp),%eax
c10055d1:	88 10                	mov    %dl,(%eax)
c10055d3:	83 ec 0c             	sub    $0xc,%esp
c10055d6:	ff 75 ec             	pushl  -0x14(%ebp)
c10055d9:	e8 e3 b7 ff ff       	call   c1000dc1 <intr_restore>
c10055de:	83 c4 10             	add    $0x10,%esp
c10055e1:	90                   	nop
c10055e2:	c9                   	leave  
c10055e3:	c3                   	ret    

c10055e4 <lock_acquire>:
c10055e4:	55                   	push   %ebp
c10055e5:	89 e5                	mov    %esp,%ebp
c10055e7:	83 ec 08             	sub    $0x8,%esp
c10055ea:	8b 45 08             	mov    0x8(%ebp),%eax
c10055ed:	8b 10                	mov    (%eax),%edx
c10055ef:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10055f4:	39 c2                	cmp    %eax,%edx
c10055f6:	74 29                	je     c1005621 <lock_acquire+0x3d>
c10055f8:	8b 45 08             	mov    0x8(%ebp),%eax
c10055fb:	83 c0 04             	add    $0x4,%eax
c10055fe:	83 ec 0c             	sub    $0xc,%esp
c1005601:	50                   	push   %eax
c1005602:	e8 69 fe ff ff       	call   c1005470 <sema_down>
c1005607:	83 c4 10             	add    $0x10,%esp
c100560a:	8b 15 08 30 a1 c1    	mov    0xc1a13008,%edx
c1005610:	8b 45 08             	mov    0x8(%ebp),%eax
c1005613:	89 10                	mov    %edx,(%eax)
c1005615:	8b 45 08             	mov    0x8(%ebp),%eax
c1005618:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
c100561f:	eb 0f                	jmp    c1005630 <lock_acquire+0x4c>
c1005621:	8b 45 08             	mov    0x8(%ebp),%eax
c1005624:	8b 40 10             	mov    0x10(%eax),%eax
c1005627:	8d 50 01             	lea    0x1(%eax),%edx
c100562a:	8b 45 08             	mov    0x8(%ebp),%eax
c100562d:	89 50 10             	mov    %edx,0x10(%eax)
c1005630:	90                   	nop
c1005631:	c9                   	leave  
c1005632:	c3                   	ret    

c1005633 <lock_release>:
c1005633:	55                   	push   %ebp
c1005634:	89 e5                	mov    %esp,%ebp
c1005636:	83 ec 08             	sub    $0x8,%esp
c1005639:	8b 45 08             	mov    0x8(%ebp),%eax
c100563c:	8b 40 10             	mov    0x10(%eax),%eax
c100563f:	83 f8 01             	cmp    $0x1,%eax
c1005642:	76 11                	jbe    c1005655 <lock_release+0x22>
c1005644:	8b 45 08             	mov    0x8(%ebp),%eax
c1005647:	8b 40 10             	mov    0x10(%eax),%eax
c100564a:	8d 50 ff             	lea    -0x1(%eax),%edx
c100564d:	8b 45 08             	mov    0x8(%ebp),%eax
c1005650:	89 50 10             	mov    %edx,0x10(%eax)
c1005653:	eb 25                	jmp    c100567a <lock_release+0x47>
c1005655:	8b 45 08             	mov    0x8(%ebp),%eax
c1005658:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c100565e:	8b 45 08             	mov    0x8(%ebp),%eax
c1005661:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005668:	8b 45 08             	mov    0x8(%ebp),%eax
c100566b:	83 c0 04             	add    $0x4,%eax
c100566e:	83 ec 0c             	sub    $0xc,%esp
c1005671:	50                   	push   %eax
c1005672:	e8 d9 fe ff ff       	call   c1005550 <sema_up>
c1005677:	83 c4 10             	add    $0x10,%esp
c100567a:	c9                   	leave  
c100567b:	c3                   	ret    

c100567c <waitdisk>:
c100567c:	55                   	push   %ebp
c100567d:	89 e5                	mov    %esp,%ebp
c100567f:	83 ec 08             	sub    $0x8,%esp
c1005682:	90                   	nop
c1005683:	83 ec 0c             	sub    $0xc,%esp
c1005686:	68 f7 01 00 00       	push   $0x1f7
c100568b:	e8 70 a9 ff ff       	call   c1000000 <inb>
c1005690:	83 c4 10             	add    $0x10,%esp
c1005693:	0f b6 c0             	movzbl %al,%eax
c1005696:	25 c0 00 00 00       	and    $0xc0,%eax
c100569b:	83 f8 40             	cmp    $0x40,%eax
c100569e:	75 e3                	jne    c1005683 <waitdisk+0x7>
c10056a0:	90                   	nop
c10056a1:	90                   	nop
c10056a2:	c9                   	leave  
c10056a3:	c3                   	ret    

c10056a4 <insl>:
c10056a4:	55                   	push   %ebp
c10056a5:	89 e5                	mov    %esp,%ebp
c10056a7:	57                   	push   %edi
c10056a8:	53                   	push   %ebx
c10056a9:	8b 55 08             	mov    0x8(%ebp),%edx
c10056ac:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c10056af:	8b 45 10             	mov    0x10(%ebp),%eax
c10056b2:	89 cb                	mov    %ecx,%ebx
c10056b4:	89 df                	mov    %ebx,%edi
c10056b6:	89 c1                	mov    %eax,%ecx
c10056b8:	fc                   	cld    
c10056b9:	f2 6d                	repnz insl (%dx),%es:(%edi)
c10056bb:	89 c8                	mov    %ecx,%eax
c10056bd:	89 fb                	mov    %edi,%ebx
c10056bf:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c10056c2:	89 45 10             	mov    %eax,0x10(%ebp)
c10056c5:	90                   	nop
c10056c6:	5b                   	pop    %ebx
c10056c7:	5f                   	pop    %edi
c10056c8:	5d                   	pop    %ebp
c10056c9:	c3                   	ret    

c10056ca <outsl>:
c10056ca:	55                   	push   %ebp
c10056cb:	89 e5                	mov    %esp,%ebp
c10056cd:	56                   	push   %esi
c10056ce:	53                   	push   %ebx
c10056cf:	8b 55 08             	mov    0x8(%ebp),%edx
c10056d2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
c10056d5:	8b 45 10             	mov    0x10(%ebp),%eax
c10056d8:	89 cb                	mov    %ecx,%ebx
c10056da:	89 de                	mov    %ebx,%esi
c10056dc:	89 c1                	mov    %eax,%ecx
c10056de:	fc                   	cld    
c10056df:	f2 6f                	repnz outsl %ds:(%esi),(%dx)
c10056e1:	89 c8                	mov    %ecx,%eax
c10056e3:	89 f3                	mov    %esi,%ebx
c10056e5:	89 5d 0c             	mov    %ebx,0xc(%ebp)
c10056e8:	89 45 10             	mov    %eax,0x10(%ebp)
c10056eb:	90                   	nop
c10056ec:	5b                   	pop    %ebx
c10056ed:	5e                   	pop    %esi
c10056ee:	5d                   	pop    %ebp
c10056ef:	c3                   	ret    

c10056f0 <ide_read_sect>:
c10056f0:	55                   	push   %ebp
c10056f1:	89 e5                	mov    %esp,%ebp
c10056f3:	83 ec 08             	sub    $0x8,%esp
c10056f6:	e8 81 ff ff ff       	call   c100567c <waitdisk>
c10056fb:	83 ec 08             	sub    $0x8,%esp
c10056fe:	6a 01                	push   $0x1
c1005700:	68 f2 01 00 00       	push   $0x1f2
c1005705:	e8 32 a9 ff ff       	call   c100003c <outb>
c100570a:	83 c4 10             	add    $0x10,%esp
c100570d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005710:	0f b6 c0             	movzbl %al,%eax
c1005713:	83 ec 08             	sub    $0x8,%esp
c1005716:	50                   	push   %eax
c1005717:	68 f3 01 00 00       	push   $0x1f3
c100571c:	e8 1b a9 ff ff       	call   c100003c <outb>
c1005721:	83 c4 10             	add    $0x10,%esp
c1005724:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005727:	c1 e8 08             	shr    $0x8,%eax
c100572a:	0f b6 c0             	movzbl %al,%eax
c100572d:	83 ec 08             	sub    $0x8,%esp
c1005730:	50                   	push   %eax
c1005731:	68 f4 01 00 00       	push   $0x1f4
c1005736:	e8 01 a9 ff ff       	call   c100003c <outb>
c100573b:	83 c4 10             	add    $0x10,%esp
c100573e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005741:	c1 e8 10             	shr    $0x10,%eax
c1005744:	0f b6 c0             	movzbl %al,%eax
c1005747:	83 ec 08             	sub    $0x8,%esp
c100574a:	50                   	push   %eax
c100574b:	68 f5 01 00 00       	push   $0x1f5
c1005750:	e8 e7 a8 ff ff       	call   c100003c <outb>
c1005755:	83 c4 10             	add    $0x10,%esp
c1005758:	8b 45 0c             	mov    0xc(%ebp),%eax
c100575b:	c1 e8 18             	shr    $0x18,%eax
c100575e:	83 e0 0f             	and    $0xf,%eax
c1005761:	83 c8 e0             	or     $0xffffffe0,%eax
c1005764:	0f b6 c0             	movzbl %al,%eax
c1005767:	83 ec 08             	sub    $0x8,%esp
c100576a:	50                   	push   %eax
c100576b:	68 f6 01 00 00       	push   $0x1f6
c1005770:	e8 c7 a8 ff ff       	call   c100003c <outb>
c1005775:	83 c4 10             	add    $0x10,%esp
c1005778:	83 ec 08             	sub    $0x8,%esp
c100577b:	6a 20                	push   $0x20
c100577d:	68 f7 01 00 00       	push   $0x1f7
c1005782:	e8 b5 a8 ff ff       	call   c100003c <outb>
c1005787:	83 c4 10             	add    $0x10,%esp
c100578a:	e8 ed fe ff ff       	call   c100567c <waitdisk>
c100578f:	83 ec 04             	sub    $0x4,%esp
c1005792:	68 80 00 00 00       	push   $0x80
c1005797:	ff 75 08             	pushl  0x8(%ebp)
c100579a:	68 f0 01 00 00       	push   $0x1f0
c100579f:	e8 00 ff ff ff       	call   c10056a4 <insl>
c10057a4:	83 c4 10             	add    $0x10,%esp
c10057a7:	90                   	nop
c10057a8:	c9                   	leave  
c10057a9:	c3                   	ret    

c10057aa <ide_write_sect>:
c10057aa:	55                   	push   %ebp
c10057ab:	89 e5                	mov    %esp,%ebp
c10057ad:	83 ec 08             	sub    $0x8,%esp
c10057b0:	e8 c7 fe ff ff       	call   c100567c <waitdisk>
c10057b5:	83 ec 08             	sub    $0x8,%esp
c10057b8:	6a 01                	push   $0x1
c10057ba:	68 f2 01 00 00       	push   $0x1f2
c10057bf:	e8 78 a8 ff ff       	call   c100003c <outb>
c10057c4:	83 c4 10             	add    $0x10,%esp
c10057c7:	8b 45 0c             	mov    0xc(%ebp),%eax
c10057ca:	0f b6 c0             	movzbl %al,%eax
c10057cd:	83 ec 08             	sub    $0x8,%esp
c10057d0:	50                   	push   %eax
c10057d1:	68 f3 01 00 00       	push   $0x1f3
c10057d6:	e8 61 a8 ff ff       	call   c100003c <outb>
c10057db:	83 c4 10             	add    $0x10,%esp
c10057de:	8b 45 0c             	mov    0xc(%ebp),%eax
c10057e1:	c1 e8 08             	shr    $0x8,%eax
c10057e4:	0f b6 c0             	movzbl %al,%eax
c10057e7:	83 ec 08             	sub    $0x8,%esp
c10057ea:	50                   	push   %eax
c10057eb:	68 f4 01 00 00       	push   $0x1f4
c10057f0:	e8 47 a8 ff ff       	call   c100003c <outb>
c10057f5:	83 c4 10             	add    $0x10,%esp
c10057f8:	8b 45 0c             	mov    0xc(%ebp),%eax
c10057fb:	c1 e8 10             	shr    $0x10,%eax
c10057fe:	0f b6 c0             	movzbl %al,%eax
c1005801:	83 ec 08             	sub    $0x8,%esp
c1005804:	50                   	push   %eax
c1005805:	68 f5 01 00 00       	push   $0x1f5
c100580a:	e8 2d a8 ff ff       	call   c100003c <outb>
c100580f:	83 c4 10             	add    $0x10,%esp
c1005812:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005815:	c1 e8 18             	shr    $0x18,%eax
c1005818:	83 e0 0f             	and    $0xf,%eax
c100581b:	83 c8 e0             	or     $0xffffffe0,%eax
c100581e:	0f b6 c0             	movzbl %al,%eax
c1005821:	83 ec 08             	sub    $0x8,%esp
c1005824:	50                   	push   %eax
c1005825:	68 f6 01 00 00       	push   $0x1f6
c100582a:	e8 0d a8 ff ff       	call   c100003c <outb>
c100582f:	83 c4 10             	add    $0x10,%esp
c1005832:	83 ec 08             	sub    $0x8,%esp
c1005835:	6a 30                	push   $0x30
c1005837:	68 f7 01 00 00       	push   $0x1f7
c100583c:	e8 fb a7 ff ff       	call   c100003c <outb>
c1005841:	83 c4 10             	add    $0x10,%esp
c1005844:	e8 33 fe ff ff       	call   c100567c <waitdisk>
c1005849:	83 ec 04             	sub    $0x4,%esp
c100584c:	68 80 00 00 00       	push   $0x80
c1005851:	ff 75 08             	pushl  0x8(%ebp)
c1005854:	68 f0 01 00 00       	push   $0x1f0
c1005859:	e8 6c fe ff ff       	call   c10056ca <outsl>
c100585e:	83 c4 10             	add    $0x10,%esp
c1005861:	90                   	nop
c1005862:	c9                   	leave  
c1005863:	c3                   	ret    

c1005864 <ide_read>:
c1005864:	55                   	push   %ebp
c1005865:	89 e5                	mov    %esp,%ebp
c1005867:	83 ec 18             	sub    $0x18,%esp
c100586a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1005871:	eb 22                	jmp    c1005895 <ide_read+0x31>
c1005873:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005876:	8b 45 0c             	mov    0xc(%ebp),%eax
c1005879:	01 d0                	add    %edx,%eax
c100587b:	83 ec 08             	sub    $0x8,%esp
c100587e:	50                   	push   %eax
c100587f:	ff 75 08             	pushl  0x8(%ebp)
c1005882:	e8 69 fe ff ff       	call   c10056f0 <ide_read_sect>
c1005887:	83 c4 10             	add    $0x10,%esp
c100588a:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c1005891:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1005895:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1005898:	39 45 10             	cmp    %eax,0x10(%ebp)
c100589b:	77 d6                	ja     c1005873 <ide_read+0xf>
c100589d:	90                   	nop
c100589e:	90                   	nop
c100589f:	c9                   	leave  
c10058a0:	c3                   	ret    

c10058a1 <ide_write>:
c10058a1:	55                   	push   %ebp
c10058a2:	89 e5                	mov    %esp,%ebp
c10058a4:	83 ec 18             	sub    $0x18,%esp
c10058a7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10058ae:	eb 22                	jmp    c10058d2 <ide_write+0x31>
c10058b0:	8b 55 f4             	mov    -0xc(%ebp),%edx
c10058b3:	8b 45 0c             	mov    0xc(%ebp),%eax
c10058b6:	01 d0                	add    %edx,%eax
c10058b8:	83 ec 08             	sub    $0x8,%esp
c10058bb:	50                   	push   %eax
c10058bc:	ff 75 08             	pushl  0x8(%ebp)
c10058bf:	e8 e6 fe ff ff       	call   c10057aa <ide_write_sect>
c10058c4:	83 c4 10             	add    $0x10,%esp
c10058c7:	81 45 08 00 02 00 00 	addl   $0x200,0x8(%ebp)
c10058ce:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10058d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10058d5:	39 45 10             	cmp    %eax,0x10(%ebp)
c10058d8:	77 d6                	ja     c10058b0 <ide_write+0xf>
c10058da:	90                   	nop
c10058db:	90                   	nop
c10058dc:	c9                   	leave  
c10058dd:	c3                   	ret    

c10058de <delay>:
c10058de:	55                   	push   %ebp
c10058df:	89 e5                	mov    %esp,%ebp
c10058e1:	83 ec 10             	sub    $0x10,%esp
c10058e4:	8b 45 08             	mov    0x8(%ebp),%eax
c10058e7:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10058ea:	eb 17                	jmp    c1005903 <delay+0x25>
c10058ec:	c7 45 f8 6e 00 00 00 	movl   $0x6e,-0x8(%ebp)
c10058f3:	eb 04                	jmp    c10058f9 <delay+0x1b>
c10058f5:	83 6d f8 01          	subl   $0x1,-0x8(%ebp)
c10058f9:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
c10058fd:	75 f6                	jne    c10058f5 <delay+0x17>
c10058ff:	83 6d fc 01          	subl   $0x1,-0x4(%ebp)
c1005903:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
c1005907:	75 e3                	jne    c10058ec <delay+0xe>
c1005909:	90                   	nop
c100590a:	90                   	nop
c100590b:	c9                   	leave  
c100590c:	c3                   	ret    

c100590d <read_main_partition>:
c100590d:	55                   	push   %ebp
c100590e:	89 e5                	mov    %esp,%ebp
c1005910:	83 ec 18             	sub    $0x18,%esp
c1005913:	83 ec 08             	sub    $0x8,%esp
c1005916:	6a 02                	push   $0x2
c1005918:	68 00 02 00 00       	push   $0x200
c100591d:	e8 db d1 ff ff       	call   c1002afd <vmm_malloc>
c1005922:	83 c4 10             	add    $0x10,%esp
c1005925:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005928:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100592b:	83 ec 08             	sub    $0x8,%esp
c100592e:	6a 00                	push   $0x0
c1005930:	50                   	push   %eax
c1005931:	e8 ba fd ff ff       	call   c10056f0 <ide_read_sect>
c1005936:	83 c4 10             	add    $0x10,%esp
c1005939:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100593c:	05 be 01 00 00       	add    $0x1be,%eax
c1005941:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005944:	e8 76 f2 ff ff       	call   c1004bbf <clear>
c1005949:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100594c:	0f b6 00             	movzbl (%eax),%eax
c100594f:	0f b6 c0             	movzbl %al,%eax
c1005952:	83 ec 08             	sub    $0x8,%esp
c1005955:	50                   	push   %eax
c1005956:	68 22 ac 00 c1       	push   $0xc100ac22
c100595b:	e8 5c f6 ff ff       	call   c1004fbc <printk>
c1005960:	83 c4 10             	add    $0x10,%esp
c1005963:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005966:	0f b6 40 01          	movzbl 0x1(%eax),%eax
c100596a:	0f b6 c0             	movzbl %al,%eax
c100596d:	83 ec 08             	sub    $0x8,%esp
c1005970:	50                   	push   %eax
c1005971:	68 35 ac 00 c1       	push   $0xc100ac35
c1005976:	e8 41 f6 ff ff       	call   c1004fbc <printk>
c100597b:	83 c4 10             	add    $0x10,%esp
c100597e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005981:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c1005985:	0f b6 c0             	movzbl %al,%eax
c1005988:	83 ec 08             	sub    $0x8,%esp
c100598b:	50                   	push   %eax
c100598c:	68 4b ac 00 c1       	push   $0xc100ac4b
c1005991:	e8 26 f6 ff ff       	call   c1004fbc <printk>
c1005996:	83 c4 10             	add    $0x10,%esp
c1005999:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100599c:	0f b6 40 03          	movzbl 0x3(%eax),%eax
c10059a0:	0f b6 c0             	movzbl %al,%eax
c10059a3:	83 ec 08             	sub    $0x8,%esp
c10059a6:	50                   	push   %eax
c10059a7:	68 5f ac 00 c1       	push   $0xc100ac5f
c10059ac:	e8 0b f6 ff ff       	call   c1004fbc <printk>
c10059b1:	83 c4 10             	add    $0x10,%esp
c10059b4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10059b7:	0f b6 40 04          	movzbl 0x4(%eax),%eax
c10059bb:	0f b6 c0             	movzbl %al,%eax
c10059be:	83 ec 08             	sub    $0x8,%esp
c10059c1:	50                   	push   %eax
c10059c2:	68 75 ac 00 c1       	push   $0xc100ac75
c10059c7:	e8 f0 f5 ff ff       	call   c1004fbc <printk>
c10059cc:	83 c4 10             	add    $0x10,%esp
c10059cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10059d2:	0f b6 40 05          	movzbl 0x5(%eax),%eax
c10059d6:	0f b6 c0             	movzbl %al,%eax
c10059d9:	83 ec 08             	sub    $0x8,%esp
c10059dc:	50                   	push   %eax
c10059dd:	68 86 ac 00 c1       	push   $0xc100ac86
c10059e2:	e8 d5 f5 ff ff       	call   c1004fbc <printk>
c10059e7:	83 c4 10             	add    $0x10,%esp
c10059ea:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10059ed:	0f b6 40 06          	movzbl 0x6(%eax),%eax
c10059f1:	0f b6 c0             	movzbl %al,%eax
c10059f4:	83 ec 08             	sub    $0x8,%esp
c10059f7:	50                   	push   %eax
c10059f8:	68 9a ac 00 c1       	push   $0xc100ac9a
c10059fd:	e8 ba f5 ff ff       	call   c1004fbc <printk>
c1005a02:	83 c4 10             	add    $0x10,%esp
c1005a05:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005a08:	0f b6 40 07          	movzbl 0x7(%eax),%eax
c1005a0c:	0f b6 c0             	movzbl %al,%eax
c1005a0f:	83 ec 08             	sub    $0x8,%esp
c1005a12:	50                   	push   %eax
c1005a13:	68 ac ac 00 c1       	push   $0xc100acac
c1005a18:	e8 9f f5 ff ff       	call   c1004fbc <printk>
c1005a1d:	83 c4 10             	add    $0x10,%esp
c1005a20:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005a23:	8b 40 08             	mov    0x8(%eax),%eax
c1005a26:	83 ec 08             	sub    $0x8,%esp
c1005a29:	50                   	push   %eax
c1005a2a:	68 c0 ac 00 c1       	push   $0xc100acc0
c1005a2f:	e8 88 f5 ff ff       	call   c1004fbc <printk>
c1005a34:	83 c4 10             	add    $0x10,%esp
c1005a37:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005a3a:	8b 40 0c             	mov    0xc(%eax),%eax
c1005a3d:	83 ec 08             	sub    $0x8,%esp
c1005a40:	50                   	push   %eax
c1005a41:	68 d4 ac 00 c1       	push   $0xc100acd4
c1005a46:	e8 71 f5 ff ff       	call   c1004fbc <printk>
c1005a4b:	83 c4 10             	add    $0x10,%esp
c1005a4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005a51:	c9                   	leave  
c1005a52:	c3                   	ret    

c1005a53 <test_ide_io>:
c1005a53:	55                   	push   %ebp
c1005a54:	89 e5                	mov    %esp,%ebp
c1005a56:	83 ec 18             	sub    $0x18,%esp
c1005a59:	83 ec 08             	sub    $0x8,%esp
c1005a5c:	68 00 90 10 00       	push   $0x109000
c1005a61:	68 e7 ac 00 c1       	push   $0xc100ace7
c1005a66:	e8 51 f5 ff ff       	call   c1004fbc <printk>
c1005a6b:	83 c4 10             	add    $0x10,%esp
c1005a6e:	83 ec 08             	sub    $0x8,%esp
c1005a71:	68 2c db 00 c1       	push   $0xc100db2c
c1005a76:	68 f6 ac 00 c1       	push   $0xc100acf6
c1005a7b:	e8 3c f5 ff ff       	call   c1004fbc <printk>
c1005a80:	83 c4 10             	add    $0x10,%esp
c1005a83:	b8 00 90 10 00       	mov    $0x109000,%eax
c1005a88:	2d 01 fe 0f 00       	sub    $0xffe01,%eax
c1005a8d:	c1 e8 09             	shr    $0x9,%eax
c1005a90:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1005a93:	b8 2c db 00 c1       	mov    $0xc100db2c,%eax
c1005a98:	05 ff 01 00 3f       	add    $0x3f0001ff,%eax
c1005a9d:	c1 e8 09             	shr    $0x9,%eax
c1005aa0:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005aa3:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1005aa6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005aa9:	01 d0                	add    %edx,%eax
c1005aab:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1005aae:	83 ec 08             	sub    $0x8,%esp
c1005ab1:	ff 75 ec             	pushl  -0x14(%ebp)
c1005ab4:	68 05 ad 00 c1       	push   $0xc100ad05
c1005ab9:	e8 fe f4 ff ff       	call   c1004fbc <printk>
c1005abe:	83 c4 10             	add    $0x10,%esp
c1005ac1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1005ac5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1005acc:	e8 3c fe ff ff       	call   c100590d <read_main_partition>
c1005ad1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1005ad4:	90                   	nop
c1005ad5:	c9                   	leave  
c1005ad6:	c3                   	ret    

c1005ad7 <hash32>:
c1005ad7:	55                   	push   %ebp
c1005ad8:	89 e5                	mov    %esp,%ebp
c1005ada:	83 ec 10             	sub    $0x10,%esp
c1005add:	8b 45 08             	mov    0x8(%ebp),%eax
c1005ae0:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c1005ae6:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1005ae9:	b8 20 00 00 00       	mov    $0x20,%eax
c1005aee:	2b 45 0c             	sub    0xc(%ebp),%eax
c1005af1:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1005af4:	89 c1                	mov    %eax,%ecx
c1005af6:	d3 ea                	shr    %cl,%edx
c1005af8:	89 d0                	mov    %edx,%eax
c1005afa:	c9                   	leave  
c1005afb:	c3                   	ret    

c1005afc <partition_format>:
c1005afc:	55                   	push   %ebp
c1005afd:	89 e5                	mov    %esp,%ebp
c1005aff:	53                   	push   %ebx
c1005b00:	81 ec 44 02 00 00    	sub    $0x244,%esp
c1005b06:	e8 02 fe ff ff       	call   c100590d <read_main_partition>
c1005b0b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005b0e:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
c1005b15:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
c1005b1c:	c7 45 e4 11 00 00 00 	movl   $0x11,-0x1c(%ebp)
c1005b23:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005b26:	8b 40 0c             	mov    0xc(%eax),%eax
c1005b29:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1005b2c:	2b 45 e8             	sub    -0x18(%ebp),%eax
c1005b2f:	2b 45 e4             	sub    -0x1c(%ebp),%eax
c1005b32:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1005b35:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005b38:	05 ff 0f 00 00       	add    $0xfff,%eax
c1005b3d:	c1 e8 0c             	shr    $0xc,%eax
c1005b40:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1005b43:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1005b46:	2b 45 dc             	sub    -0x24(%ebp),%eax
c1005b49:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1005b4c:	c7 85 bc fd ff ff 18 	movl   $0x19590318,-0x244(%ebp)
c1005b53:	03 59 19 
c1005b56:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005b59:	8b 40 0c             	mov    0xc(%eax),%eax
c1005b5c:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
c1005b62:	c7 85 c4 fd ff ff e8 	movl   $0x3e8,-0x23c(%ebp)
c1005b69:	03 00 00 
c1005b6c:	c7 85 c8 fd ff ff 00 	movl   $0x800,-0x238(%ebp)
c1005b73:	08 00 00 
c1005b76:	c7 85 cc fd ff ff 01 	movl   $0x801,-0x234(%ebp)
c1005b7d:	08 00 00 
c1005b80:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1005b83:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c1005b89:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
c1005b8f:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c1005b95:	01 d0                	add    %edx,%eax
c1005b97:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
c1005b9d:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1005ba0:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
c1005ba6:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
c1005bac:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c1005bb2:	01 d0                	add    %edx,%eax
c1005bb4:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
c1005bba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1005bbd:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
c1005bc3:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
c1005bc9:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1005bcf:	01 d0                	add    %edx,%eax
c1005bd1:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
c1005bd7:	c7 85 e8 fd ff ff 00 	movl   $0x0,-0x218(%ebp)
c1005bde:	00 00 00 
c1005be1:	c7 85 ec fd ff ff 18 	movl   $0x18,-0x214(%ebp)
c1005be8:	00 00 00 
c1005beb:	e8 cf ef ff ff       	call   c1004bbf <clear>
c1005bf0:	8b 85 bc fd ff ff    	mov    -0x244(%ebp),%eax
c1005bf6:	83 ec 08             	sub    $0x8,%esp
c1005bf9:	50                   	push   %eax
c1005bfa:	68 18 ad 00 c1       	push   $0xc100ad18
c1005bff:	e8 b8 f3 ff ff       	call   c1004fbc <printk>
c1005c04:	83 c4 10             	add    $0x10,%esp
c1005c07:	8b 85 c0 fd ff ff    	mov    -0x240(%ebp),%eax
c1005c0d:	83 ec 08             	sub    $0x8,%esp
c1005c10:	50                   	push   %eax
c1005c11:	68 28 ad 00 c1       	push   $0xc100ad28
c1005c16:	e8 a1 f3 ff ff       	call   c1004fbc <printk>
c1005c1b:	83 c4 10             	add    $0x10,%esp
c1005c1e:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
c1005c24:	83 ec 08             	sub    $0x8,%esp
c1005c27:	50                   	push   %eax
c1005c28:	68 3a ad 00 c1       	push   $0xc100ad3a
c1005c2d:	e8 8a f3 ff ff       	call   c1004fbc <printk>
c1005c32:	83 c4 10             	add    $0x10,%esp
c1005c35:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c1005c3b:	83 ec 08             	sub    $0x8,%esp
c1005c3e:	50                   	push   %eax
c1005c3f:	68 4e ad 00 c1       	push   $0xc100ad4e
c1005c44:	e8 73 f3 ff ff       	call   c1004fbc <printk>
c1005c49:	83 c4 10             	add    $0x10,%esp
c1005c4c:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c1005c52:	83 ec 08             	sub    $0x8,%esp
c1005c55:	50                   	push   %eax
c1005c56:	68 69 ad 00 c1       	push   $0xc100ad69
c1005c5b:	e8 5c f3 ff ff       	call   c1004fbc <printk>
c1005c60:	83 c4 10             	add    $0x10,%esp
c1005c63:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1005c69:	83 ec 08             	sub    $0x8,%esp
c1005c6c:	50                   	push   %eax
c1005c6d:	68 86 ad 00 c1       	push   $0xc100ad86
c1005c72:	e8 45 f3 ff ff       	call   c1004fbc <printk>
c1005c77:	83 c4 10             	add    $0x10,%esp
c1005c7a:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
c1005c80:	83 ec 08             	sub    $0x8,%esp
c1005c83:	50                   	push   %eax
c1005c84:	68 a1 ad 00 c1       	push   $0xc100ada1
c1005c89:	e8 2e f3 ff ff       	call   c1004fbc <printk>
c1005c8e:	83 c4 10             	add    $0x10,%esp
c1005c91:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c1005c97:	83 ec 08             	sub    $0x8,%esp
c1005c9a:	50                   	push   %eax
c1005c9b:	68 be ad 00 c1       	push   $0xc100adbe
c1005ca0:	e8 17 f3 ff ff       	call   c1004fbc <printk>
c1005ca5:	83 c4 10             	add    $0x10,%esp
c1005ca8:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1005cae:	83 ec 08             	sub    $0x8,%esp
c1005cb1:	50                   	push   %eax
c1005cb2:	68 d8 ad 00 c1       	push   $0xc100add8
c1005cb7:	e8 00 f3 ff ff       	call   c1004fbc <printk>
c1005cbc:	83 c4 10             	add    $0x10,%esp
c1005cbf:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c1005cc5:	83 ec 08             	sub    $0x8,%esp
c1005cc8:	50                   	push   %eax
c1005cc9:	68 f4 ad 00 c1       	push   $0xc100adf4
c1005cce:	e8 e9 f2 ff ff       	call   c1004fbc <printk>
c1005cd3:	83 c4 10             	add    $0x10,%esp
c1005cd6:	83 ec 04             	sub    $0x4,%esp
c1005cd9:	6a 01                	push   $0x1
c1005cdb:	68 00 08 00 00       	push   $0x800
c1005ce0:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
c1005ce6:	50                   	push   %eax
c1005ce7:	e8 b5 fb ff ff       	call   c10058a1 <ide_write>
c1005cec:	83 c4 10             	add    $0x10,%esp
c1005cef:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c1005cf5:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
c1005cfb:	39 c2                	cmp    %eax,%edx
c1005cfd:	0f 43 c2             	cmovae %edx,%eax
c1005d00:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1005d03:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
c1005d09:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
c1005d0c:	0f 43 45 d4          	cmovae -0x2c(%ebp),%eax
c1005d10:	c1 e0 09             	shl    $0x9,%eax
c1005d13:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1005d16:	83 ec 08             	sub    $0x8,%esp
c1005d19:	6a 02                	push   $0x2
c1005d1b:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005d1e:	e8 da cd ff ff       	call   c1002afd <vmm_malloc>
c1005d23:	83 c4 10             	add    $0x10,%esp
c1005d26:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1005d29:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005d2c:	0f b6 00             	movzbl (%eax),%eax
c1005d2f:	83 c8 01             	or     $0x1,%eax
c1005d32:	89 c2                	mov    %eax,%edx
c1005d34:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005d37:	88 10                	mov    %dl,(%eax)
c1005d39:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005d3c:	c1 e8 03             	shr    $0x3,%eax
c1005d3f:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1005d42:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1005d45:	83 e0 07             	and    $0x7,%eax
c1005d48:	88 45 cb             	mov    %al,-0x35(%ebp)
c1005d4b:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005d4e:	25 ff 01 00 00       	and    $0x1ff,%eax
c1005d53:	ba 00 02 00 00       	mov    $0x200,%edx
c1005d58:	29 c2                	sub    %eax,%edx
c1005d5a:	89 d0                	mov    %edx,%eax
c1005d5c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1005d5f:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005d62:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005d65:	01 d0                	add    %edx,%eax
c1005d67:	83 ec 04             	sub    $0x4,%esp
c1005d6a:	ff 75 c4             	pushl  -0x3c(%ebp)
c1005d6d:	6a ff                	push   $0xffffffff
c1005d6f:	50                   	push   %eax
c1005d70:	e8 35 a3 ff ff       	call   c10000aa <memset>
c1005d75:	83 c4 10             	add    $0x10,%esp
c1005d78:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1005d7c:	eb 38                	jmp    c1005db6 <partition_format+0x2ba>
c1005d7e:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005d81:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005d84:	01 d0                	add    %edx,%eax
c1005d86:	0f b6 00             	movzbl (%eax),%eax
c1005d89:	89 c2                	mov    %eax,%edx
c1005d8b:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
c1005d8f:	bb 01 00 00 00       	mov    $0x1,%ebx
c1005d94:	89 c1                	mov    %eax,%ecx
c1005d96:	d3 e3                	shl    %cl,%ebx
c1005d98:	89 d8                	mov    %ebx,%eax
c1005d9a:	f7 d0                	not    %eax
c1005d9c:	89 d1                	mov    %edx,%ecx
c1005d9e:	21 c1                	and    %eax,%ecx
c1005da0:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005da3:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005da6:	01 d0                	add    %edx,%eax
c1005da8:	89 ca                	mov    %ecx,%edx
c1005daa:	88 10                	mov    %dl,(%eax)
c1005dac:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1005db0:	83 c0 01             	add    $0x1,%eax
c1005db3:	88 45 f7             	mov    %al,-0x9(%ebp)
c1005db6:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
c1005dba:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1005dbe:	39 c2                	cmp    %eax,%edx
c1005dc0:	7c bc                	jl     c1005d7e <partition_format+0x282>
c1005dc2:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
c1005dc8:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
c1005dce:	83 ec 04             	sub    $0x4,%esp
c1005dd1:	52                   	push   %edx
c1005dd2:	50                   	push   %eax
c1005dd3:	ff 75 d0             	pushl  -0x30(%ebp)
c1005dd6:	e8 c6 fa ff ff       	call   c10058a1 <ide_write>
c1005ddb:	83 c4 10             	add    $0x10,%esp
c1005dde:	83 ec 04             	sub    $0x4,%esp
c1005de1:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005de4:	6a 00                	push   $0x0
c1005de6:	ff 75 d0             	pushl  -0x30(%ebp)
c1005de9:	e8 bc a2 ff ff       	call   c10000aa <memset>
c1005dee:	83 c4 10             	add    $0x10,%esp
c1005df1:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005df4:	0f b6 00             	movzbl (%eax),%eax
c1005df7:	83 c8 01             	or     $0x1,%eax
c1005dfa:	89 c2                	mov    %eax,%edx
c1005dfc:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005dff:	88 10                	mov    %dl,(%eax)
c1005e01:	c7 45 cc 7d 00 00 00 	movl   $0x7d,-0x34(%ebp)
c1005e08:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
c1005e0c:	b8 00 02 00 00       	mov    $0x200,%eax
c1005e11:	2b 45 cc             	sub    -0x34(%ebp),%eax
c1005e14:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1005e17:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005e1a:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005e1d:	01 d0                	add    %edx,%eax
c1005e1f:	83 ec 04             	sub    $0x4,%esp
c1005e22:	ff 75 c4             	pushl  -0x3c(%ebp)
c1005e25:	6a ff                	push   $0xffffffff
c1005e27:	50                   	push   %eax
c1005e28:	e8 7d a2 ff ff       	call   c10000aa <memset>
c1005e2d:	83 c4 10             	add    $0x10,%esp
c1005e30:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c1005e34:	eb 38                	jmp    c1005e6e <partition_format+0x372>
c1005e36:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005e39:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005e3c:	01 d0                	add    %edx,%eax
c1005e3e:	0f b6 00             	movzbl (%eax),%eax
c1005e41:	89 c2                	mov    %eax,%edx
c1005e43:	0f be 45 f6          	movsbl -0xa(%ebp),%eax
c1005e47:	bb 01 00 00 00       	mov    $0x1,%ebx
c1005e4c:	89 c1                	mov    %eax,%ecx
c1005e4e:	d3 e3                	shl    %cl,%ebx
c1005e50:	89 d8                	mov    %ebx,%eax
c1005e52:	f7 d0                	not    %eax
c1005e54:	89 d1                	mov    %edx,%ecx
c1005e56:	21 c1                	and    %eax,%ecx
c1005e58:	8b 55 d0             	mov    -0x30(%ebp),%edx
c1005e5b:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1005e5e:	01 d0                	add    %edx,%eax
c1005e60:	89 ca                	mov    %ecx,%edx
c1005e62:	88 10                	mov    %dl,(%eax)
c1005e64:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1005e68:	83 c0 01             	add    $0x1,%eax
c1005e6b:	88 45 f6             	mov    %al,-0xa(%ebp)
c1005e6e:	0f be 55 f6          	movsbl -0xa(%ebp),%edx
c1005e72:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
c1005e76:	39 c2                	cmp    %eax,%edx
c1005e78:	7c bc                	jl     c1005e36 <partition_format+0x33a>
c1005e7a:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
c1005e80:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
c1005e86:	83 ec 04             	sub    $0x4,%esp
c1005e89:	52                   	push   %edx
c1005e8a:	50                   	push   %eax
c1005e8b:	ff 75 d0             	pushl  -0x30(%ebp)
c1005e8e:	e8 0e fa ff ff       	call   c10058a1 <ide_write>
c1005e93:	83 c4 10             	add    $0x10,%esp
c1005e96:	83 ec 04             	sub    $0x4,%esp
c1005e99:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005e9c:	6a 00                	push   $0x0
c1005e9e:	ff 75 d0             	pushl  -0x30(%ebp)
c1005ea1:	e8 04 a2 ff ff       	call   c10000aa <memset>
c1005ea6:	83 c4 10             	add    $0x10,%esp
c1005ea9:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005eac:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1005eaf:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
c1005eb5:	8d 14 00             	lea    (%eax,%eax,1),%edx
c1005eb8:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1005ebb:	89 50 04             	mov    %edx,0x4(%eax)
c1005ebe:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1005ec1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1005ec7:	8b 95 e4 fd ff ff    	mov    -0x21c(%ebp),%edx
c1005ecd:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1005ed0:	89 50 10             	mov    %edx,0x10(%eax)
c1005ed3:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
c1005ed9:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
c1005edf:	83 ec 04             	sub    $0x4,%esp
c1005ee2:	52                   	push   %edx
c1005ee3:	50                   	push   %eax
c1005ee4:	ff 75 d0             	pushl  -0x30(%ebp)
c1005ee7:	e8 b5 f9 ff ff       	call   c10058a1 <ide_write>
c1005eec:	83 c4 10             	add    $0x10,%esp
c1005eef:	83 ec 04             	sub    $0x4,%esp
c1005ef2:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005ef5:	6a 00                	push   $0x0
c1005ef7:	ff 75 d0             	pushl  -0x30(%ebp)
c1005efa:	e8 ab a1 ff ff       	call   c10000aa <memset>
c1005eff:	83 c4 10             	add    $0x10,%esp
c1005f02:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005f05:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1005f08:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005f0b:	83 ec 04             	sub    $0x4,%esp
c1005f0e:	6a 01                	push   $0x1
c1005f10:	68 0d ae 00 c1       	push   $0xc100ae0d
c1005f15:	50                   	push   %eax
c1005f16:	e8 ed a1 ff ff       	call   c1000108 <memcpy>
c1005f1b:	83 c4 10             	add    $0x10,%esp
c1005f1e:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005f21:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005f28:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005f2b:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1005f32:	83 45 bc 18          	addl   $0x18,-0x44(%ebp)
c1005f36:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005f39:	83 ec 04             	sub    $0x4,%esp
c1005f3c:	6a 02                	push   $0x2
c1005f3e:	68 0f ae 00 c1       	push   $0xc100ae0f
c1005f43:	50                   	push   %eax
c1005f44:	e8 bf a1 ff ff       	call   c1000108 <memcpy>
c1005f49:	83 c4 10             	add    $0x10,%esp
c1005f4c:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005f4f:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
c1005f56:	8b 45 bc             	mov    -0x44(%ebp),%eax
c1005f59:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1005f60:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
c1005f66:	83 ec 04             	sub    $0x4,%esp
c1005f69:	6a 01                	push   $0x1
c1005f6b:	50                   	push   %eax
c1005f6c:	ff 75 d0             	pushl  -0x30(%ebp)
c1005f6f:	e8 2d f9 ff ff       	call   c10058a1 <ide_write>
c1005f74:	83 c4 10             	add    $0x10,%esp
c1005f77:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1005f7a:	83 ec 08             	sub    $0x8,%esp
c1005f7d:	ff 75 d4             	pushl  -0x2c(%ebp)
c1005f80:	50                   	push   %eax
c1005f81:	e8 9c cc ff ff       	call   c1002c22 <vmm_free>
c1005f86:	83 c4 10             	add    $0x10,%esp
c1005f89:	90                   	nop
c1005f8a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1005f8d:	c9                   	leave  
c1005f8e:	c3                   	ret    

c1005f8f <mount_partition>:
c1005f8f:	55                   	push   %ebp
c1005f90:	89 e5                	mov    %esp,%ebp
c1005f92:	83 ec 18             	sub    $0x18,%esp
c1005f95:	e8 73 f9 ff ff       	call   c100590d <read_main_partition>
c1005f9a:	a3 30 32 a1 c1       	mov    %eax,0xc1a13230
c1005f9f:	83 ec 08             	sub    $0x8,%esp
c1005fa2:	6a 02                	push   $0x2
c1005fa4:	68 00 02 00 00       	push   $0x200
c1005fa9:	e8 4f cb ff ff       	call   c1002afd <vmm_malloc>
c1005fae:	83 c4 10             	add    $0x10,%esp
c1005fb1:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1005fb4:	83 ec 04             	sub    $0x4,%esp
c1005fb7:	68 00 02 00 00       	push   $0x200
c1005fbc:	6a 00                	push   $0x0
c1005fbe:	ff 75 f0             	pushl  -0x10(%ebp)
c1005fc1:	e8 e4 a0 ff ff       	call   c10000aa <memset>
c1005fc6:	83 c4 10             	add    $0x10,%esp
c1005fc9:	83 ec 04             	sub    $0x4,%esp
c1005fcc:	6a 01                	push   $0x1
c1005fce:	68 00 08 00 00       	push   $0x800
c1005fd3:	ff 75 f0             	pushl  -0x10(%ebp)
c1005fd6:	e8 89 f8 ff ff       	call   c1005864 <ide_read>
c1005fdb:	83 c4 10             	add    $0x10,%esp
c1005fde:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1005fe3:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1005fe6:	89 50 10             	mov    %edx,0x10(%eax)
c1005fe9:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1005fec:	8b 40 14             	mov    0x14(%eax),%eax
c1005fef:	c1 e0 09             	shl    $0x9,%eax
c1005ff2:	83 ec 08             	sub    $0x8,%esp
c1005ff5:	6a 02                	push   $0x2
c1005ff7:	50                   	push   %eax
c1005ff8:	e8 00 cb ff ff       	call   c1002afd <vmm_malloc>
c1005ffd:	83 c4 10             	add    $0x10,%esp
c1006000:	89 c2                	mov    %eax,%edx
c1006002:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006007:	89 50 18             	mov    %edx,0x18(%eax)
c100600a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100600d:	8b 50 14             	mov    0x14(%eax),%edx
c1006010:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006015:	c1 e2 09             	shl    $0x9,%edx
c1006018:	89 50 14             	mov    %edx,0x14(%eax)
c100601b:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100601e:	8b 48 14             	mov    0x14(%eax),%ecx
c1006021:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006024:	8b 50 10             	mov    0x10(%eax),%edx
c1006027:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100602c:	8b 40 18             	mov    0x18(%eax),%eax
c100602f:	83 ec 04             	sub    $0x4,%esp
c1006032:	51                   	push   %ecx
c1006033:	52                   	push   %edx
c1006034:	50                   	push   %eax
c1006035:	e8 2a f8 ff ff       	call   c1005864 <ide_read>
c100603a:	83 c4 10             	add    $0x10,%esp
c100603d:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006040:	8b 40 1c             	mov    0x1c(%eax),%eax
c1006043:	c1 e0 09             	shl    $0x9,%eax
c1006046:	83 ec 08             	sub    $0x8,%esp
c1006049:	6a 02                	push   $0x2
c100604b:	50                   	push   %eax
c100604c:	e8 ac ca ff ff       	call   c1002afd <vmm_malloc>
c1006051:	83 c4 10             	add    $0x10,%esp
c1006054:	89 c2                	mov    %eax,%edx
c1006056:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100605b:	89 50 20             	mov    %edx,0x20(%eax)
c100605e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006061:	8b 50 1c             	mov    0x1c(%eax),%edx
c1006064:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006069:	c1 e2 09             	shl    $0x9,%edx
c100606c:	89 50 1c             	mov    %edx,0x1c(%eax)
c100606f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006072:	8b 48 1c             	mov    0x1c(%eax),%ecx
c1006075:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006078:	8b 50 18             	mov    0x18(%eax),%edx
c100607b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006080:	8b 40 20             	mov    0x20(%eax),%eax
c1006083:	83 ec 04             	sub    $0x4,%esp
c1006086:	51                   	push   %ecx
c1006087:	52                   	push   %edx
c1006088:	50                   	push   %eax
c1006089:	e8 d6 f7 ff ff       	call   c1005864 <ide_read>
c100608e:	83 c4 10             	add    $0x10,%esp
c1006091:	e8 29 eb ff ff       	call   c1004bbf <clear>
c1006096:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100609b:	8b 40 10             	mov    0x10(%eax),%eax
c100609e:	8b 00                	mov    (%eax),%eax
c10060a0:	83 ec 08             	sub    $0x8,%esp
c10060a3:	50                   	push   %eax
c10060a4:	68 18 ad 00 c1       	push   $0xc100ad18
c10060a9:	e8 0e ef ff ff       	call   c1004fbc <printk>
c10060ae:	83 c4 10             	add    $0x10,%esp
c10060b1:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10060b6:	8b 40 10             	mov    0x10(%eax),%eax
c10060b9:	8b 40 04             	mov    0x4(%eax),%eax
c10060bc:	83 ec 08             	sub    $0x8,%esp
c10060bf:	50                   	push   %eax
c10060c0:	68 28 ad 00 c1       	push   $0xc100ad28
c10060c5:	e8 f2 ee ff ff       	call   c1004fbc <printk>
c10060ca:	83 c4 10             	add    $0x10,%esp
c10060cd:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10060d2:	8b 40 10             	mov    0x10(%eax),%eax
c10060d5:	8b 40 08             	mov    0x8(%eax),%eax
c10060d8:	83 ec 08             	sub    $0x8,%esp
c10060db:	50                   	push   %eax
c10060dc:	68 3a ad 00 c1       	push   $0xc100ad3a
c10060e1:	e8 d6 ee ff ff       	call   c1004fbc <printk>
c10060e6:	83 c4 10             	add    $0x10,%esp
c10060e9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10060ee:	8b 40 10             	mov    0x10(%eax),%eax
c10060f1:	8b 40 10             	mov    0x10(%eax),%eax
c10060f4:	83 ec 08             	sub    $0x8,%esp
c10060f7:	50                   	push   %eax
c10060f8:	68 4e ad 00 c1       	push   $0xc100ad4e
c10060fd:	e8 ba ee ff ff       	call   c1004fbc <printk>
c1006102:	83 c4 10             	add    $0x10,%esp
c1006105:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100610a:	8b 40 10             	mov    0x10(%eax),%eax
c100610d:	8b 40 14             	mov    0x14(%eax),%eax
c1006110:	83 ec 08             	sub    $0x8,%esp
c1006113:	50                   	push   %eax
c1006114:	68 69 ad 00 c1       	push   $0xc100ad69
c1006119:	e8 9e ee ff ff       	call   c1004fbc <printk>
c100611e:	83 c4 10             	add    $0x10,%esp
c1006121:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006126:	8b 40 10             	mov    0x10(%eax),%eax
c1006129:	8b 40 18             	mov    0x18(%eax),%eax
c100612c:	83 ec 08             	sub    $0x8,%esp
c100612f:	50                   	push   %eax
c1006130:	68 86 ad 00 c1       	push   $0xc100ad86
c1006135:	e8 82 ee ff ff       	call   c1004fbc <printk>
c100613a:	83 c4 10             	add    $0x10,%esp
c100613d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006142:	8b 40 10             	mov    0x10(%eax),%eax
c1006145:	8b 40 1c             	mov    0x1c(%eax),%eax
c1006148:	83 ec 08             	sub    $0x8,%esp
c100614b:	50                   	push   %eax
c100614c:	68 a1 ad 00 c1       	push   $0xc100ada1
c1006151:	e8 66 ee ff ff       	call   c1004fbc <printk>
c1006156:	83 c4 10             	add    $0x10,%esp
c1006159:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100615e:	8b 40 10             	mov    0x10(%eax),%eax
c1006161:	8b 40 20             	mov    0x20(%eax),%eax
c1006164:	83 ec 08             	sub    $0x8,%esp
c1006167:	50                   	push   %eax
c1006168:	68 be ad 00 c1       	push   $0xc100adbe
c100616d:	e8 4a ee ff ff       	call   c1004fbc <printk>
c1006172:	83 c4 10             	add    $0x10,%esp
c1006175:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100617a:	8b 40 10             	mov    0x10(%eax),%eax
c100617d:	8b 40 24             	mov    0x24(%eax),%eax
c1006180:	83 ec 08             	sub    $0x8,%esp
c1006183:	50                   	push   %eax
c1006184:	68 d8 ad 00 c1       	push   $0xc100add8
c1006189:	e8 2e ee ff ff       	call   c1004fbc <printk>
c100618e:	83 c4 10             	add    $0x10,%esp
c1006191:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006196:	8b 40 10             	mov    0x10(%eax),%eax
c1006199:	8b 40 28             	mov    0x28(%eax),%eax
c100619c:	83 ec 08             	sub    $0x8,%esp
c100619f:	50                   	push   %eax
c10061a0:	68 f4 ad 00 c1       	push   $0xc100adf4
c10061a5:	e8 12 ee ff ff       	call   c1004fbc <printk>
c10061aa:	83 c4 10             	add    $0x10,%esp
c10061ad:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10061b2:	8b 40 18             	mov    0x18(%eax),%eax
c10061b5:	83 ec 08             	sub    $0x8,%esp
c10061b8:	50                   	push   %eax
c10061b9:	68 14 ae 00 c1       	push   $0xc100ae14
c10061be:	e8 f9 ed ff ff       	call   c1004fbc <printk>
c10061c3:	83 c4 10             	add    $0x10,%esp
c10061c6:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10061cb:	8b 40 14             	mov    0x14(%eax),%eax
c10061ce:	83 ec 08             	sub    $0x8,%esp
c10061d1:	50                   	push   %eax
c10061d2:	68 38 ae 00 c1       	push   $0xc100ae38
c10061d7:	e8 e0 ed ff ff       	call   c1004fbc <printk>
c10061dc:	83 c4 10             	add    $0x10,%esp
c10061df:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10061e4:	8b 40 20             	mov    0x20(%eax),%eax
c10061e7:	83 ec 08             	sub    $0x8,%esp
c10061ea:	50                   	push   %eax
c10061eb:	68 68 ae 00 c1       	push   $0xc100ae68
c10061f0:	e8 c7 ed ff ff       	call   c1004fbc <printk>
c10061f5:	83 c4 10             	add    $0x10,%esp
c10061f8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10061fd:	8b 40 1c             	mov    0x1c(%eax),%eax
c1006200:	83 ec 08             	sub    $0x8,%esp
c1006203:	50                   	push   %eax
c1006204:	68 8c ae 00 c1       	push   $0xc100ae8c
c1006209:	e8 ae ed ff ff       	call   c1004fbc <printk>
c100620e:	83 c4 10             	add    $0x10,%esp
c1006211:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006216:	83 ec 0c             	sub    $0xc,%esp
c1006219:	50                   	push   %eax
c100621a:	e8 b0 18 00 00       	call   c1007acf <open_root_dir>
c100621f:	83 c4 10             	add    $0x10,%esp
c1006222:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006229:	eb 1d                	jmp    c1006248 <mount_partition+0x2b9>
c100622b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100622e:	8d 42 01             	lea    0x1(%edx),%eax
c1006231:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006234:	89 d0                	mov    %edx,%eax
c1006236:	01 c0                	add    %eax,%eax
c1006238:	01 d0                	add    %edx,%eax
c100623a:	c1 e0 02             	shl    $0x2,%eax
c100623d:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1006242:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1006248:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c100624c:	76 dd                	jbe    c100622b <mount_partition+0x29c>
c100624e:	90                   	nop
c100624f:	90                   	nop
c1006250:	c9                   	leave  
c1006251:	c3                   	ret    

c1006252 <path_parse>:
c1006252:	55                   	push   %ebp
c1006253:	89 e5                	mov    %esp,%ebp
c1006255:	8b 45 08             	mov    0x8(%ebp),%eax
c1006258:	0f b6 00             	movzbl (%eax),%eax
c100625b:	3c 2f                	cmp    $0x2f,%al
c100625d:	75 27                	jne    c1006286 <path_parse+0x34>
c100625f:	83 45 08 01          	addl   $0x1,0x8(%ebp)
c1006263:	8b 45 08             	mov    0x8(%ebp),%eax
c1006266:	0f b6 00             	movzbl (%eax),%eax
c1006269:	3c 2f                	cmp    $0x2f,%al
c100626b:	74 f2                	je     c100625f <path_parse+0xd>
c100626d:	eb 17                	jmp    c1006286 <path_parse+0x34>
c100626f:	8b 55 08             	mov    0x8(%ebp),%edx
c1006272:	8d 42 01             	lea    0x1(%edx),%eax
c1006275:	89 45 08             	mov    %eax,0x8(%ebp)
c1006278:	8b 45 0c             	mov    0xc(%ebp),%eax
c100627b:	8d 48 01             	lea    0x1(%eax),%ecx
c100627e:	89 4d 0c             	mov    %ecx,0xc(%ebp)
c1006281:	0f b6 12             	movzbl (%edx),%edx
c1006284:	88 10                	mov    %dl,(%eax)
c1006286:	8b 45 08             	mov    0x8(%ebp),%eax
c1006289:	0f b6 00             	movzbl (%eax),%eax
c100628c:	3c 2f                	cmp    $0x2f,%al
c100628e:	74 0a                	je     c100629a <path_parse+0x48>
c1006290:	8b 45 08             	mov    0x8(%ebp),%eax
c1006293:	0f b6 00             	movzbl (%eax),%eax
c1006296:	84 c0                	test   %al,%al
c1006298:	75 d5                	jne    c100626f <path_parse+0x1d>
c100629a:	8b 45 08             	mov    0x8(%ebp),%eax
c100629d:	0f b6 00             	movzbl (%eax),%eax
c10062a0:	84 c0                	test   %al,%al
c10062a2:	75 07                	jne    c10062ab <path_parse+0x59>
c10062a4:	b8 00 00 00 00       	mov    $0x0,%eax
c10062a9:	eb 03                	jmp    c10062ae <path_parse+0x5c>
c10062ab:	8b 45 08             	mov    0x8(%ebp),%eax
c10062ae:	5d                   	pop    %ebp
c10062af:	c3                   	ret    

c10062b0 <path_depth_cnt>:
c10062b0:	55                   	push   %ebp
c10062b1:	89 e5                	mov    %esp,%ebp
c10062b3:	83 ec 28             	sub    $0x28,%esp
c10062b6:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10062ba:	75 19                	jne    c10062d5 <path_depth_cnt+0x25>
c10062bc:	68 b9 ae 00 c1       	push   $0xc100aeb9
c10062c1:	68 10 b5 00 c1       	push   $0xc100b510
c10062c6:	68 d1 00 00 00       	push   $0xd1
c10062cb:	68 cc ae 00 c1       	push   $0xc100aecc
c10062d0:	e8 96 a0 ff ff       	call   c100036b <__PANIC>
c10062d5:	8b 45 08             	mov    0x8(%ebp),%eax
c10062d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10062db:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10062e2:	83 ec 08             	sub    $0x8,%esp
c10062e5:	8d 45 e0             	lea    -0x20(%ebp),%eax
c10062e8:	50                   	push   %eax
c10062e9:	ff 75 f4             	pushl  -0xc(%ebp)
c10062ec:	e8 61 ff ff ff       	call   c1006252 <path_parse>
c10062f1:	83 c4 10             	add    $0x10,%esp
c10062f4:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10062f7:	eb 32                	jmp    c100632b <path_depth_cnt+0x7b>
c10062f9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10062fd:	83 ec 04             	sub    $0x4,%esp
c1006300:	6a 10                	push   $0x10
c1006302:	6a 00                	push   $0x0
c1006304:	8d 45 e0             	lea    -0x20(%ebp),%eax
c1006307:	50                   	push   %eax
c1006308:	e8 9d 9d ff ff       	call   c10000aa <memset>
c100630d:	83 c4 10             	add    $0x10,%esp
c1006310:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006314:	74 15                	je     c100632b <path_depth_cnt+0x7b>
c1006316:	83 ec 08             	sub    $0x8,%esp
c1006319:	8d 45 e0             	lea    -0x20(%ebp),%eax
c100631c:	50                   	push   %eax
c100631d:	ff 75 f4             	pushl  -0xc(%ebp)
c1006320:	e8 2d ff ff ff       	call   c1006252 <path_parse>
c1006325:	83 c4 10             	add    $0x10,%esp
c1006328:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100632b:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
c100632f:	84 c0                	test   %al,%al
c1006331:	75 c6                	jne    c10062f9 <path_depth_cnt+0x49>
c1006333:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006336:	c9                   	leave  
c1006337:	c3                   	ret    

c1006338 <search_file>:
c1006338:	55                   	push   %ebp
c1006339:	89 e5                	mov    %esp,%ebp
c100633b:	57                   	push   %edi
c100633c:	53                   	push   %ebx
c100633d:	83 ec 40             	sub    $0x40,%esp
c1006340:	83 ec 08             	sub    $0x8,%esp
c1006343:	68 fb ae 00 c1       	push   $0xc100aefb
c1006348:	ff 75 08             	pushl  0x8(%ebp)
c100634b:	e8 33 9e ff ff       	call   c1000183 <strcmp>
c1006350:	83 c4 10             	add    $0x10,%esp
c1006353:	85 c0                	test   %eax,%eax
c1006355:	74 2e                	je     c1006385 <search_file+0x4d>
c1006357:	83 ec 08             	sub    $0x8,%esp
c100635a:	68 fd ae 00 c1       	push   $0xc100aefd
c100635f:	ff 75 08             	pushl  0x8(%ebp)
c1006362:	e8 1c 9e ff ff       	call   c1000183 <strcmp>
c1006367:	83 c4 10             	add    $0x10,%esp
c100636a:	85 c0                	test   %eax,%eax
c100636c:	74 17                	je     c1006385 <search_file+0x4d>
c100636e:	83 ec 08             	sub    $0x8,%esp
c1006371:	68 00 af 00 c1       	push   $0xc100af00
c1006376:	ff 75 08             	pushl  0x8(%ebp)
c1006379:	e8 05 9e ff ff       	call   c1000183 <strcmp>
c100637e:	83 c4 10             	add    $0x10,%esp
c1006381:	85 c0                	test   %eax,%eax
c1006383:	75 2c                	jne    c10063b1 <search_file+0x79>
c1006385:	8b 15 34 32 a1 c1    	mov    0xc1a13234,%edx
c100638b:	8b 45 0c             	mov    0xc(%ebp),%eax
c100638e:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006394:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006397:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c100639e:	00 00 00 
c10063a1:	8b 45 0c             	mov    0xc(%ebp),%eax
c10063a4:	c6 00 00             	movb   $0x0,(%eax)
c10063a7:	b8 00 00 00 00       	mov    $0x0,%eax
c10063ac:	e9 10 02 00 00       	jmp    c10065c1 <search_file+0x289>
c10063b1:	83 ec 0c             	sub    $0xc,%esp
c10063b4:	ff 75 08             	pushl  0x8(%ebp)
c10063b7:	e8 62 9d ff ff       	call   c100011e <strlen>
c10063bc:	83 c4 10             	add    $0x10,%esp
c10063bf:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10063c2:	8b 45 08             	mov    0x8(%ebp),%eax
c10063c5:	0f b6 00             	movzbl (%eax),%eax
c10063c8:	3c 2f                	cmp    $0x2f,%al
c10063ca:	75 0f                	jne    c10063db <search_file+0xa3>
c10063cc:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c10063d0:	76 09                	jbe    c10063db <search_file+0xa3>
c10063d2:	81 7d e8 ff 01 00 00 	cmpl   $0x1ff,-0x18(%ebp)
c10063d9:	76 19                	jbe    c10063f4 <search_file+0xbc>
c10063db:	68 04 af 00 c1       	push   $0xc100af04
c10063e0:	68 20 b5 00 c1       	push   $0xc100b520
c10063e5:	68 ee 00 00 00       	push   $0xee
c10063ea:	68 cc ae 00 c1       	push   $0xc100aecc
c10063ef:	e8 77 9f ff ff       	call   c100036b <__PANIC>
c10063f4:	8b 45 08             	mov    0x8(%ebp),%eax
c10063f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10063fa:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c10063ff:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006402:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
c1006409:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
c1006410:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
c1006417:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
c100641e:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006421:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006424:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c100642a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100642d:	c7 80 04 02 00 00 00 	movl   $0x0,0x204(%eax)
c1006434:	00 00 00 
c1006437:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100643e:	83 ec 08             	sub    $0x8,%esp
c1006441:	8d 45 c0             	lea    -0x40(%ebp),%eax
c1006444:	50                   	push   %eax
c1006445:	ff 75 f4             	pushl  -0xc(%ebp)
c1006448:	e8 05 fe ff ff       	call   c1006252 <path_parse>
c100644d:	83 c4 10             	add    $0x10,%esp
c1006450:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006453:	e9 1b 01 00 00       	jmp    c1006573 <search_file+0x23b>
c1006458:	8b 45 0c             	mov    0xc(%ebp),%eax
c100645b:	83 ec 0c             	sub    $0xc,%esp
c100645e:	50                   	push   %eax
c100645f:	e8 ba 9c ff ff       	call   c100011e <strlen>
c1006464:	83 c4 10             	add    $0x10,%esp
c1006467:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c100646c:	76 19                	jbe    c1006487 <search_file+0x14f>
c100646e:	68 44 af 00 c1       	push   $0xc100af44
c1006473:	68 20 b5 00 c1       	push   $0xc100b520
c1006478:	68 ff 00 00 00       	push   $0xff
c100647d:	68 cc ae 00 c1       	push   $0xc100aecc
c1006482:	e8 e4 9e ff ff       	call   c100036b <__PANIC>
c1006487:	8b 55 0c             	mov    0xc(%ebp),%edx
c100648a:	89 d0                	mov    %edx,%eax
c100648c:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c1006491:	89 c3                	mov    %eax,%ebx
c1006493:	b8 00 00 00 00       	mov    $0x0,%eax
c1006498:	89 df                	mov    %ebx,%edi
c100649a:	f2 ae                	repnz scas %es:(%edi),%al
c100649c:	89 c8                	mov    %ecx,%eax
c100649e:	f7 d0                	not    %eax
c10064a0:	83 e8 01             	sub    $0x1,%eax
c10064a3:	01 d0                	add    %edx,%eax
c10064a5:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c10064aa:	8b 45 0c             	mov    0xc(%ebp),%eax
c10064ad:	83 ec 08             	sub    $0x8,%esp
c10064b0:	8d 55 c0             	lea    -0x40(%ebp),%edx
c10064b3:	52                   	push   %edx
c10064b4:	50                   	push   %eax
c10064b5:	e8 1b 9d ff ff       	call   c10001d5 <strcat>
c10064ba:	83 c4 10             	add    $0x10,%esp
c10064bd:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10064c2:	8d 55 d0             	lea    -0x30(%ebp),%edx
c10064c5:	52                   	push   %edx
c10064c6:	8d 55 c0             	lea    -0x40(%ebp),%edx
c10064c9:	52                   	push   %edx
c10064ca:	ff 75 f0             	pushl  -0x10(%ebp)
c10064cd:	50                   	push   %eax
c10064ce:	e8 be 16 00 00       	call   c1007b91 <search_dir_entry>
c10064d3:	83 c4 10             	add    $0x10,%esp
c10064d6:	84 c0                	test   %al,%al
c10064d8:	0f 84 8e 00 00 00    	je     c100656c <search_file+0x234>
c10064de:	83 ec 04             	sub    $0x4,%esp
c10064e1:	6a 10                	push   $0x10
c10064e3:	6a 00                	push   $0x0
c10064e5:	8d 45 c0             	lea    -0x40(%ebp),%eax
c10064e8:	50                   	push   %eax
c10064e9:	e8 bc 9b ff ff       	call   c10000aa <memset>
c10064ee:	83 c4 10             	add    $0x10,%esp
c10064f1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10064f5:	74 15                	je     c100650c <search_file+0x1d4>
c10064f7:	83 ec 08             	sub    $0x8,%esp
c10064fa:	8d 45 c0             	lea    -0x40(%ebp),%eax
c10064fd:	50                   	push   %eax
c10064fe:	ff 75 f4             	pushl  -0xc(%ebp)
c1006501:	e8 4c fd ff ff       	call   c1006252 <path_parse>
c1006506:	83 c4 10             	add    $0x10,%esp
c1006509:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100650c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100650f:	83 f8 02             	cmp    $0x2,%eax
c1006512:	75 3e                	jne    c1006552 <search_file+0x21a>
c1006514:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006517:	8b 00                	mov    (%eax),%eax
c1006519:	8b 00                	mov    (%eax),%eax
c100651b:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100651e:	83 ec 0c             	sub    $0xc,%esp
c1006521:	ff 75 f0             	pushl  -0x10(%ebp)
c1006524:	e8 54 18 00 00       	call   c1007d7d <dir_close>
c1006529:	83 c4 10             	add    $0x10,%esp
c100652c:	8b 55 e0             	mov    -0x20(%ebp),%edx
c100652f:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006534:	83 ec 08             	sub    $0x8,%esp
c1006537:	52                   	push   %edx
c1006538:	50                   	push   %eax
c1006539:	e8 13 16 00 00       	call   c1007b51 <dir_open>
c100653e:	83 c4 10             	add    $0x10,%esp
c1006541:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006544:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006547:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100654a:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
c1006550:	eb 21                	jmp    c1006573 <search_file+0x23b>
c1006552:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006555:	83 f8 01             	cmp    $0x1,%eax
c1006558:	75 19                	jne    c1006573 <search_file+0x23b>
c100655a:	8b 45 0c             	mov    0xc(%ebp),%eax
c100655d:	c7 80 04 02 00 00 01 	movl   $0x1,0x204(%eax)
c1006564:	00 00 00 
c1006567:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100656a:	eb 55                	jmp    c10065c1 <search_file+0x289>
c100656c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006571:	eb 4e                	jmp    c10065c1 <search_file+0x289>
c1006573:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
c1006577:	84 c0                	test   %al,%al
c1006579:	0f 85 d9 fe ff ff    	jne    c1006458 <search_file+0x120>
c100657f:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006582:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
c1006588:	83 ec 0c             	sub    $0xc,%esp
c100658b:	50                   	push   %eax
c100658c:	e8 ec 17 00 00       	call   c1007d7d <dir_close>
c1006591:	83 c4 10             	add    $0x10,%esp
c1006594:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006599:	83 ec 08             	sub    $0x8,%esp
c100659c:	ff 75 ec             	pushl  -0x14(%ebp)
c100659f:	50                   	push   %eax
c10065a0:	e8 ac 15 00 00       	call   c1007b51 <dir_open>
c10065a5:	83 c4 10             	add    $0x10,%esp
c10065a8:	8b 55 0c             	mov    0xc(%ebp),%edx
c10065ab:	89 82 00 02 00 00    	mov    %eax,0x200(%edx)
c10065b1:	8b 45 0c             	mov    0xc(%ebp),%eax
c10065b4:	c7 80 04 02 00 00 02 	movl   $0x2,0x204(%eax)
c10065bb:	00 00 00 
c10065be:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10065c1:	8d 65 f8             	lea    -0x8(%ebp),%esp
c10065c4:	5b                   	pop    %ebx
c10065c5:	5f                   	pop    %edi
c10065c6:	5d                   	pop    %ebp
c10065c7:	c3                   	ret    

c10065c8 <sys_open>:
c10065c8:	55                   	push   %ebp
c10065c9:	89 e5                	mov    %esp,%ebp
c10065cb:	53                   	push   %ebx
c10065cc:	81 ec 34 02 00 00    	sub    $0x234,%esp
c10065d2:	8b 45 0c             	mov    0xc(%ebp),%eax
c10065d5:	88 85 d4 fd ff ff    	mov    %al,-0x22c(%ebp)
c10065db:	83 ec 0c             	sub    $0xc,%esp
c10065de:	ff 75 08             	pushl  0x8(%ebp)
c10065e1:	e8 38 9b ff ff       	call   c100011e <strlen>
c10065e6:	83 c4 10             	add    $0x10,%esp
c10065e9:	8d 50 ff             	lea    -0x1(%eax),%edx
c10065ec:	8b 45 08             	mov    0x8(%ebp),%eax
c10065ef:	01 d0                	add    %edx,%eax
c10065f1:	0f b6 00             	movzbl (%eax),%eax
c10065f4:	3c 2f                	cmp    $0x2f,%al
c10065f6:	75 1d                	jne    c1006615 <sys_open+0x4d>
c10065f8:	83 ec 08             	sub    $0x8,%esp
c10065fb:	ff 75 08             	pushl  0x8(%ebp)
c10065fe:	68 71 af 00 c1       	push   $0xc100af71
c1006603:	e8 b4 e9 ff ff       	call   c1004fbc <printk>
c1006608:	83 c4 10             	add    $0x10,%esp
c100660b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006610:	e9 35 02 00 00       	jmp    c100684a <sys_open+0x282>
c1006615:	80 bd d4 fd ff ff 07 	cmpb   $0x7,-0x22c(%ebp)
c100661c:	76 19                	jbe    c1006637 <sys_open+0x6f>
c100661e:	68 8c af 00 c1       	push   $0xc100af8c
c1006623:	68 2c b5 00 c1       	push   $0xc100b52c
c1006628:	68 2d 01 00 00       	push   $0x12d
c100662d:	68 cc ae 00 c1       	push   $0xc100aecc
c1006632:	e8 34 9d ff ff       	call   c100036b <__PANIC>
c1006637:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c100663e:	83 ec 04             	sub    $0x4,%esp
c1006641:	68 08 02 00 00       	push   $0x208
c1006646:	6a 00                	push   $0x0
c1006648:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c100664e:	50                   	push   %eax
c100664f:	e8 56 9a ff ff       	call   c10000aa <memset>
c1006654:	83 c4 10             	add    $0x10,%esp
c1006657:	83 ec 0c             	sub    $0xc,%esp
c100665a:	ff 75 08             	pushl  0x8(%ebp)
c100665d:	e8 4e fc ff ff       	call   c10062b0 <path_depth_cnt>
c1006662:	83 c4 10             	add    $0x10,%esp
c1006665:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006668:	83 ec 08             	sub    $0x8,%esp
c100666b:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006671:	50                   	push   %eax
c1006672:	ff 75 08             	pushl  0x8(%ebp)
c1006675:	e8 be fc ff ff       	call   c1006338 <search_file>
c100667a:	83 c4 10             	add    $0x10,%esp
c100667d:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006680:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
c1006684:	0f 95 c0             	setne  %al
c1006687:	88 45 eb             	mov    %al,-0x15(%ebp)
c100668a:	0f be 45 eb          	movsbl -0x15(%ebp),%eax
c100668e:	83 ec 08             	sub    $0x8,%esp
c1006691:	50                   	push   %eax
c1006692:	68 97 af 00 c1       	push   $0xc100af97
c1006697:	e8 20 e9 ff ff       	call   c1004fbc <printk>
c100669c:	83 c4 10             	add    $0x10,%esp
c100669f:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10066a2:	83 f8 02             	cmp    $0x2,%eax
c10066a5:	75 29                	jne    c10066d0 <sys_open+0x108>
c10066a7:	83 ec 0c             	sub    $0xc,%esp
c10066aa:	68 a8 af 00 c1       	push   $0xc100afa8
c10066af:	e8 08 e9 ff ff       	call   c1004fbc <printk>
c10066b4:	83 c4 10             	add    $0x10,%esp
c10066b7:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10066ba:	83 ec 0c             	sub    $0xc,%esp
c10066bd:	50                   	push   %eax
c10066be:	e8 ba 16 00 00       	call   c1007d7d <dir_close>
c10066c3:	83 c4 10             	add    $0x10,%esp
c10066c6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10066cb:	e9 7a 01 00 00       	jmp    c100684a <sys_open+0x282>
c10066d0:	83 ec 0c             	sub    $0xc,%esp
c10066d3:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c10066d9:	50                   	push   %eax
c10066da:	e8 d1 fb ff ff       	call   c10062b0 <path_depth_cnt>
c10066df:	83 c4 10             	add    $0x10,%esp
c10066e2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c10066e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10066e8:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c10066eb:	74 33                	je     c1006720 <sys_open+0x158>
c10066ed:	83 ec 04             	sub    $0x4,%esp
c10066f0:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c10066f6:	50                   	push   %eax
c10066f7:	ff 75 08             	pushl  0x8(%ebp)
c10066fa:	68 e8 af 00 c1       	push   $0xc100afe8
c10066ff:	e8 b8 e8 ff ff       	call   c1004fbc <printk>
c1006704:	83 c4 10             	add    $0x10,%esp
c1006707:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100670a:	83 ec 0c             	sub    $0xc,%esp
c100670d:	50                   	push   %eax
c100670e:	e8 6a 16 00 00       	call   c1007d7d <dir_close>
c1006713:	83 c4 10             	add    $0x10,%esp
c1006716:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100671b:	e9 2a 01 00 00       	jmp    c100684a <sys_open+0x282>
c1006720:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006724:	75 56                	jne    c100677c <sys_open+0x1b4>
c1006726:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c100672d:	83 e0 04             	and    $0x4,%eax
c1006730:	85 c0                	test   %eax,%eax
c1006732:	75 48                	jne    c100677c <sys_open+0x1b4>
c1006734:	83 ec 08             	sub    $0x8,%esp
c1006737:	6a 2f                	push   $0x2f
c1006739:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c100673f:	50                   	push   %eax
c1006740:	e8 51 9a ff ff       	call   c1000196 <strrchr>
c1006745:	83 c4 10             	add    $0x10,%esp
c1006748:	83 c0 01             	add    $0x1,%eax
c100674b:	83 ec 04             	sub    $0x4,%esp
c100674e:	50                   	push   %eax
c100674f:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
c1006755:	50                   	push   %eax
c1006756:	68 24 b0 00 c1       	push   $0xc100b024
c100675b:	e8 5c e8 ff ff       	call   c1004fbc <printk>
c1006760:	83 c4 10             	add    $0x10,%esp
c1006763:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1006766:	83 ec 0c             	sub    $0xc,%esp
c1006769:	50                   	push   %eax
c100676a:	e8 0e 16 00 00       	call   c1007d7d <dir_close>
c100676f:	83 c4 10             	add    $0x10,%esp
c1006772:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006777:	e9 ce 00 00 00       	jmp    c100684a <sys_open+0x282>
c100677c:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
c1006780:	74 3a                	je     c10067bc <sys_open+0x1f4>
c1006782:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c1006789:	83 e0 04             	and    $0x4,%eax
c100678c:	85 c0                	test   %eax,%eax
c100678e:	74 2c                	je     c10067bc <sys_open+0x1f4>
c1006790:	83 ec 08             	sub    $0x8,%esp
c1006793:	ff 75 08             	pushl  0x8(%ebp)
c1006796:	68 44 b0 00 c1       	push   $0xc100b044
c100679b:	e8 1c e8 ff ff       	call   c1004fbc <printk>
c10067a0:	83 c4 10             	add    $0x10,%esp
c10067a3:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10067a6:	83 ec 0c             	sub    $0xc,%esp
c10067a9:	50                   	push   %eax
c10067aa:	e8 ce 15 00 00       	call   c1007d7d <dir_close>
c10067af:	83 c4 10             	add    $0x10,%esp
c10067b2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10067b7:	e9 8e 00 00 00       	jmp    c100684a <sys_open+0x282>
c10067bc:	0f b6 85 d4 fd ff ff 	movzbl -0x22c(%ebp),%eax
c10067c3:	83 e0 04             	and    $0x4,%eax
c10067c6:	83 f8 04             	cmp    $0x4,%eax
c10067c9:	75 4f                	jne    c100681a <sys_open+0x252>
c10067cb:	83 ec 0c             	sub    $0xc,%esp
c10067ce:	68 5b b0 00 c1       	push   $0xc100b05b
c10067d3:	e8 e4 e7 ff ff       	call   c1004fbc <printk>
c10067d8:	83 c4 10             	add    $0x10,%esp
c10067db:	0f b6 9d d4 fd ff ff 	movzbl -0x22c(%ebp),%ebx
c10067e2:	83 ec 08             	sub    $0x8,%esp
c10067e5:	6a 2f                	push   $0x2f
c10067e7:	ff 75 08             	pushl  0x8(%ebp)
c10067ea:	e8 a7 99 ff ff       	call   c1000196 <strrchr>
c10067ef:	83 c4 10             	add    $0x10,%esp
c10067f2:	8d 50 01             	lea    0x1(%eax),%edx
c10067f5:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10067f8:	83 ec 04             	sub    $0x4,%esp
c10067fb:	53                   	push   %ebx
c10067fc:	52                   	push   %edx
c10067fd:	50                   	push   %eax
c10067fe:	e8 82 24 00 00       	call   c1008c85 <file_create>
c1006803:	83 c4 10             	add    $0x10,%esp
c1006806:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006809:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100680c:	83 ec 0c             	sub    $0xc,%esp
c100680f:	50                   	push   %eax
c1006810:	e8 68 15 00 00       	call   c1007d7d <dir_close>
c1006815:	83 c4 10             	add    $0x10,%esp
c1006818:	eb 2d                	jmp    c1006847 <sys_open+0x27f>
c100681a:	83 ec 08             	sub    $0x8,%esp
c100681d:	ff 75 ec             	pushl  -0x14(%ebp)
c1006820:	68 6a b0 00 c1       	push   $0xc100b06a
c1006825:	e8 92 e7 ff ff       	call   c1004fbc <printk>
c100682a:	83 c4 10             	add    $0x10,%esp
c100682d:	0f b6 95 d4 fd ff ff 	movzbl -0x22c(%ebp),%edx
c1006834:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006837:	83 ec 08             	sub    $0x8,%esp
c100683a:	52                   	push   %edx
c100683b:	50                   	push   %eax
c100683c:	e8 26 27 00 00       	call   c1008f67 <file_open>
c1006841:	83 c4 10             	add    $0x10,%esp
c1006844:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006847:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100684a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100684d:	c9                   	leave  
c100684e:	c3                   	ret    

c100684f <fd_local2global>:
c100684f:	55                   	push   %ebp
c1006850:	89 e5                	mov    %esp,%ebp
c1006852:	83 ec 18             	sub    $0x18,%esp
c1006855:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c100685a:	8b 55 08             	mov    0x8(%ebp),%edx
c100685d:	83 c2 1c             	add    $0x1c,%edx
c1006860:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1006863:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006866:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100686a:	78 06                	js     c1006872 <fd_local2global+0x23>
c100686c:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006870:	7e 19                	jle    c100688b <fd_local2global+0x3c>
c1006872:	68 7c b0 00 c1       	push   $0xc100b07c
c1006877:	68 38 b5 00 c1       	push   $0xc100b538
c100687c:	68 6c 01 00 00       	push   $0x16c
c1006881:	68 cc ae 00 c1       	push   $0xc100aecc
c1006886:	e8 e0 9a ff ff       	call   c100036b <__PANIC>
c100688b:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100688e:	c9                   	leave  
c100688f:	c3                   	ret    

c1006890 <sys_close>:
c1006890:	55                   	push   %ebp
c1006891:	89 e5                	mov    %esp,%ebp
c1006893:	83 ec 18             	sub    $0x18,%esp
c1006896:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c100689d:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c10068a1:	7e 44                	jle    c10068e7 <sys_close+0x57>
c10068a3:	8b 45 08             	mov    0x8(%ebp),%eax
c10068a6:	83 ec 0c             	sub    $0xc,%esp
c10068a9:	50                   	push   %eax
c10068aa:	e8 a0 ff ff ff       	call   c100684f <fd_local2global>
c10068af:	83 c4 10             	add    $0x10,%esp
c10068b2:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10068b5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10068b8:	89 d0                	mov    %edx,%eax
c10068ba:	01 c0                	add    %eax,%eax
c10068bc:	01 d0                	add    %edx,%eax
c10068be:	c1 e0 02             	shl    $0x2,%eax
c10068c1:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c10068c6:	83 ec 0c             	sub    $0xc,%esp
c10068c9:	50                   	push   %eax
c10068ca:	e8 e8 27 00 00       	call   c10090b7 <file_close>
c10068cf:	83 c4 10             	add    $0x10,%esp
c10068d2:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10068d5:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c10068da:	8b 55 08             	mov    0x8(%ebp),%edx
c10068dd:	83 c2 1c             	add    $0x1c,%edx
c10068e0:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
c10068e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10068ea:	c9                   	leave  
c10068eb:	c3                   	ret    

c10068ec <sys_write>:
c10068ec:	55                   	push   %ebp
c10068ed:	89 e5                	mov    %esp,%ebp
c10068ef:	57                   	push   %edi
c10068f0:	81 ec 14 04 00 00    	sub    $0x414,%esp
c10068f6:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10068fa:	79 1a                	jns    c1006916 <sys_write+0x2a>
c10068fc:	83 ec 0c             	sub    $0xc,%esp
c10068ff:	68 a8 b0 00 c1       	push   $0xc100b0a8
c1006904:	e8 b3 e6 ff ff       	call   c1004fbc <printk>
c1006909:	83 c4 10             	add    $0x10,%esp
c100690c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006911:	e9 c4 00 00 00       	jmp    c10069da <sys_write+0xee>
c1006916:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c100691a:	75 4d                	jne    c1006969 <sys_write+0x7d>
c100691c:	c7 85 ec fb ff ff 00 	movl   $0x0,-0x414(%ebp)
c1006923:	00 00 00 
c1006926:	8d 95 f0 fb ff ff    	lea    -0x410(%ebp),%edx
c100692c:	b8 00 00 00 00       	mov    $0x0,%eax
c1006931:	b9 ff 00 00 00       	mov    $0xff,%ecx
c1006936:	89 d7                	mov    %edx,%edi
c1006938:	f3 ab                	rep stos %eax,%es:(%edi)
c100693a:	83 ec 04             	sub    $0x4,%esp
c100693d:	ff 75 10             	pushl  0x10(%ebp)
c1006940:	ff 75 0c             	pushl  0xc(%ebp)
c1006943:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c1006949:	50                   	push   %eax
c100694a:	e8 b9 97 ff ff       	call   c1000108 <memcpy>
c100694f:	83 c4 10             	add    $0x10,%esp
c1006952:	83 ec 0c             	sub    $0xc,%esp
c1006955:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
c100695b:	50                   	push   %eax
c100695c:	e8 5b e6 ff ff       	call   c1004fbc <printk>
c1006961:	83 c4 10             	add    $0x10,%esp
c1006964:	8b 45 10             	mov    0x10(%ebp),%eax
c1006967:	eb 71                	jmp    c10069da <sys_write+0xee>
c1006969:	8b 45 08             	mov    0x8(%ebp),%eax
c100696c:	83 ec 0c             	sub    $0xc,%esp
c100696f:	50                   	push   %eax
c1006970:	e8 da fe ff ff       	call   c100684f <fd_local2global>
c1006975:	83 c4 10             	add    $0x10,%esp
c1006978:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100697b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100697e:	89 d0                	mov    %edx,%eax
c1006980:	01 c0                	add    %eax,%eax
c1006982:	01 d0                	add    %edx,%eax
c1006984:	c1 e0 02             	shl    $0x2,%eax
c1006987:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c100698c:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100698f:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006992:	8b 40 04             	mov    0x4(%eax),%eax
c1006995:	83 e0 01             	and    $0x1,%eax
c1006998:	85 c0                	test   %eax,%eax
c100699a:	75 0d                	jne    c10069a9 <sys_write+0xbd>
c100699c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100699f:	8b 40 04             	mov    0x4(%eax),%eax
c10069a2:	83 e0 02             	and    $0x2,%eax
c10069a5:	85 c0                	test   %eax,%eax
c10069a7:	74 1c                	je     c10069c5 <sys_write+0xd9>
c10069a9:	83 ec 04             	sub    $0x4,%esp
c10069ac:	ff 75 10             	pushl  0x10(%ebp)
c10069af:	ff 75 0c             	pushl  0xc(%ebp)
c10069b2:	ff 75 f0             	pushl  -0x10(%ebp)
c10069b5:	e8 3d 27 00 00       	call   c10090f7 <file_write>
c10069ba:	83 c4 10             	add    $0x10,%esp
c10069bd:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10069c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10069c3:	eb 15                	jmp    c10069da <sys_write+0xee>
c10069c5:	83 ec 0c             	sub    $0xc,%esp
c10069c8:	68 c0 b0 00 c1       	push   $0xc100b0c0
c10069cd:	e8 ea e5 ff ff       	call   c1004fbc <printk>
c10069d2:	83 c4 10             	add    $0x10,%esp
c10069d5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10069da:	8b 7d fc             	mov    -0x4(%ebp),%edi
c10069dd:	c9                   	leave  
c10069de:	c3                   	ret    

c10069df <sys_read>:
c10069df:	55                   	push   %ebp
c10069e0:	89 e5                	mov    %esp,%ebp
c10069e2:	83 ec 18             	sub    $0x18,%esp
c10069e5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
c10069e9:	75 19                	jne    c1006a04 <sys_read+0x25>
c10069eb:	68 06 b1 00 c1       	push   $0xc100b106
c10069f0:	68 48 b5 00 c1       	push   $0xc100b548
c10069f5:	68 92 01 00 00       	push   $0x192
c10069fa:	68 cc ae 00 c1       	push   $0xc100aecc
c10069ff:	e8 67 99 ff ff       	call   c100036b <__PANIC>
c1006a04:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1006a0b:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006a0f:	78 0c                	js     c1006a1d <sys_read+0x3e>
c1006a11:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
c1006a15:	74 06                	je     c1006a1d <sys_read+0x3e>
c1006a17:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
c1006a1b:	75 15                	jne    c1006a32 <sys_read+0x53>
c1006a1d:	83 ec 0c             	sub    $0xc,%esp
c1006a20:	68 12 b1 00 c1       	push   $0xc100b112
c1006a25:	e8 92 e5 ff ff       	call   c1004fbc <printk>
c1006a2a:	83 c4 10             	add    $0x10,%esp
c1006a2d:	e9 a0 00 00 00       	jmp    c1006ad2 <sys_read+0xf3>
c1006a32:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006a36:	75 62                	jne    c1006a9a <sys_read+0xbb>
c1006a38:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006a3b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006a3e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1006a45:	0f b6 05 6c ec 00 c1 	movzbl 0xc100ec6c,%eax
c1006a4c:	84 c0                	test   %al,%al
c1006a4e:	75 2d                	jne    c1006a7d <sys_read+0x9e>
c1006a50:	83 ec 0c             	sub    $0xc,%esp
c1006a53:	68 b4 0c 01 c1       	push   $0xc1010cb4
c1006a58:	e8 13 ea ff ff       	call   c1005470 <sema_down>
c1006a5d:	83 c4 10             	add    $0x10,%esp
c1006a60:	eb 1b                	jmp    c1006a7d <sys_read+0x9e>
c1006a62:	0f b6 15 6c ec 00 c1 	movzbl 0xc100ec6c,%edx
c1006a69:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006a6c:	88 10                	mov    %dl,(%eax)
c1006a6e:	c6 05 6c ec 00 c1 00 	movb   $0x0,0xc100ec6c
c1006a75:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1006a79:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1006a7d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006a80:	3b 45 10             	cmp    0x10(%ebp),%eax
c1006a83:	72 dd                	jb     c1006a62 <sys_read+0x83>
c1006a85:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1006a89:	74 05                	je     c1006a90 <sys_read+0xb1>
c1006a8b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006a8e:	eb 05                	jmp    c1006a95 <sys_read+0xb6>
c1006a90:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006a95:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006a98:	eb 38                	jmp    c1006ad2 <sys_read+0xf3>
c1006a9a:	8b 45 08             	mov    0x8(%ebp),%eax
c1006a9d:	83 ec 0c             	sub    $0xc,%esp
c1006aa0:	50                   	push   %eax
c1006aa1:	e8 a9 fd ff ff       	call   c100684f <fd_local2global>
c1006aa6:	83 c4 10             	add    $0x10,%esp
c1006aa9:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006aac:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1006aaf:	89 d0                	mov    %edx,%eax
c1006ab1:	01 c0                	add    %eax,%eax
c1006ab3:	01 d0                	add    %edx,%eax
c1006ab5:	c1 e0 02             	shl    $0x2,%eax
c1006ab8:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1006abd:	83 ec 04             	sub    $0x4,%esp
c1006ac0:	ff 75 10             	pushl  0x10(%ebp)
c1006ac3:	ff 75 0c             	pushl  0xc(%ebp)
c1006ac6:	50                   	push   %eax
c1006ac7:	e8 a0 2d 00 00       	call   c100986c <file_read>
c1006acc:	83 c4 10             	add    $0x10,%esp
c1006acf:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006ad2:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1006ad5:	c9                   	leave  
c1006ad6:	c3                   	ret    

c1006ad7 <sys_lseek>:
c1006ad7:	55                   	push   %ebp
c1006ad8:	89 e5                	mov    %esp,%ebp
c1006ada:	83 ec 28             	sub    $0x28,%esp
c1006add:	8b 45 10             	mov    0x10(%ebp),%eax
c1006ae0:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1006ae3:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1006ae7:	79 1a                	jns    c1006b03 <sys_lseek+0x2c>
c1006ae9:	83 ec 0c             	sub    $0xc,%esp
c1006aec:	68 26 b1 00 c1       	push   $0xc100b126
c1006af1:	e8 c6 e4 ff ff       	call   c1004fbc <printk>
c1006af6:	83 c4 10             	add    $0x10,%esp
c1006af9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006afe:	e9 be 00 00 00       	jmp    c1006bc1 <sys_lseek+0xea>
c1006b03:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
c1006b07:	74 06                	je     c1006b0f <sys_lseek+0x38>
c1006b09:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
c1006b0d:	76 19                	jbe    c1006b28 <sys_lseek+0x51>
c1006b0f:	68 3b b1 00 c1       	push   $0xc100b13b
c1006b14:	68 54 b5 00 c1       	push   $0xc100b554
c1006b19:	68 b2 01 00 00       	push   $0x1b2
c1006b1e:	68 cc ae 00 c1       	push   $0xc100aecc
c1006b23:	e8 43 98 ff ff       	call   c100036b <__PANIC>
c1006b28:	8b 45 08             	mov    0x8(%ebp),%eax
c1006b2b:	83 ec 0c             	sub    $0xc,%esp
c1006b2e:	50                   	push   %eax
c1006b2f:	e8 1b fd ff ff       	call   c100684f <fd_local2global>
c1006b34:	83 c4 10             	add    $0x10,%esp
c1006b37:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006b3a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1006b3d:	89 d0                	mov    %edx,%eax
c1006b3f:	01 c0                	add    %eax,%eax
c1006b41:	01 d0                	add    %edx,%eax
c1006b43:	c1 e0 02             	shl    $0x2,%eax
c1006b46:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1006b4b:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006b4e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006b55:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006b58:	8b 40 08             	mov    0x8(%eax),%eax
c1006b5b:	8b 40 04             	mov    0x4(%eax),%eax
c1006b5e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006b61:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1006b65:	83 f8 03             	cmp    $0x3,%eax
c1006b68:	74 2a                	je     c1006b94 <sys_lseek+0xbd>
c1006b6a:	83 f8 03             	cmp    $0x3,%eax
c1006b6d:	7f 30                	jg     c1006b9f <sys_lseek+0xc8>
c1006b6f:	83 f8 01             	cmp    $0x1,%eax
c1006b72:	74 07                	je     c1006b7b <sys_lseek+0xa4>
c1006b74:	83 f8 02             	cmp    $0x2,%eax
c1006b77:	74 0a                	je     c1006b83 <sys_lseek+0xac>
c1006b79:	eb 24                	jmp    c1006b9f <sys_lseek+0xc8>
c1006b7b:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b7e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006b81:	eb 1c                	jmp    c1006b9f <sys_lseek+0xc8>
c1006b83:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006b86:	8b 00                	mov    (%eax),%eax
c1006b88:	89 c2                	mov    %eax,%edx
c1006b8a:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b8d:	01 d0                	add    %edx,%eax
c1006b8f:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006b92:	eb 0b                	jmp    c1006b9f <sys_lseek+0xc8>
c1006b94:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1006b97:	8b 45 0c             	mov    0xc(%ebp),%eax
c1006b9a:	01 d0                	add    %edx,%eax
c1006b9c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1006b9f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1006ba3:	78 08                	js     c1006bad <sys_lseek+0xd6>
c1006ba5:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006ba8:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c1006bab:	7f 07                	jg     c1006bb4 <sys_lseek+0xdd>
c1006bad:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006bb2:	eb 0d                	jmp    c1006bc1 <sys_lseek+0xea>
c1006bb4:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006bb7:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006bba:	89 10                	mov    %edx,(%eax)
c1006bbc:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006bbf:	8b 00                	mov    (%eax),%eax
c1006bc1:	c9                   	leave  
c1006bc2:	c3                   	ret    

c1006bc3 <sys_unlink>:
c1006bc3:	55                   	push   %ebp
c1006bc4:	89 e5                	mov    %esp,%ebp
c1006bc6:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1006bcc:	83 ec 0c             	sub    $0xc,%esp
c1006bcf:	ff 75 08             	pushl  0x8(%ebp)
c1006bd2:	e8 47 95 ff ff       	call   c100011e <strlen>
c1006bd7:	83 c4 10             	add    $0x10,%esp
c1006bda:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1006bdf:	76 19                	jbe    c1006bfa <sys_unlink+0x37>
c1006be1:	68 54 b1 00 c1       	push   $0xc100b154
c1006be6:	68 60 b5 00 c1       	push   $0xc100b560
c1006beb:	68 cc 01 00 00       	push   $0x1cc
c1006bf0:	68 cc ae 00 c1       	push   $0xc100aecc
c1006bf5:	e8 71 97 ff ff       	call   c100036b <__PANIC>
c1006bfa:	83 ec 04             	sub    $0x4,%esp
c1006bfd:	68 08 02 00 00       	push   $0x208
c1006c02:	6a 00                	push   $0x0
c1006c04:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1006c0a:	50                   	push   %eax
c1006c0b:	e8 9a 94 ff ff       	call   c10000aa <memset>
c1006c10:	83 c4 10             	add    $0x10,%esp
c1006c13:	83 ec 08             	sub    $0x8,%esp
c1006c16:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
c1006c1c:	50                   	push   %eax
c1006c1d:	ff 75 08             	pushl  0x8(%ebp)
c1006c20:	e8 13 f7 ff ff       	call   c1006338 <search_file>
c1006c25:	83 c4 10             	add    $0x10,%esp
c1006c28:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006c2b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1006c2f:	75 19                	jne    c1006c4a <sys_unlink+0x87>
c1006c31:	68 74 b1 00 c1       	push   $0xc100b174
c1006c36:	68 60 b5 00 c1       	push   $0xc100b560
c1006c3b:	68 d2 01 00 00       	push   $0x1d2
c1006c40:	68 cc ae 00 c1       	push   $0xc100aecc
c1006c45:	e8 21 97 ff ff       	call   c100036b <__PANIC>
c1006c4a:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006c4e:	75 2c                	jne    c1006c7c <sys_unlink+0xb9>
c1006c50:	83 ec 08             	sub    $0x8,%esp
c1006c53:	ff 75 08             	pushl  0x8(%ebp)
c1006c56:	68 82 b1 00 c1       	push   $0xc100b182
c1006c5b:	e8 5c e3 ff ff       	call   c1004fbc <printk>
c1006c60:	83 c4 10             	add    $0x10,%esp
c1006c63:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006c66:	83 ec 0c             	sub    $0xc,%esp
c1006c69:	50                   	push   %eax
c1006c6a:	e8 0e 11 00 00       	call   c1007d7d <dir_close>
c1006c6f:	83 c4 10             	add    $0x10,%esp
c1006c72:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006c77:	e9 65 01 00 00       	jmp    c1006de1 <sys_unlink+0x21e>
c1006c7c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1006c7f:	83 f8 02             	cmp    $0x2,%eax
c1006c82:	75 29                	jne    c1006cad <sys_unlink+0xea>
c1006c84:	83 ec 0c             	sub    $0xc,%esp
c1006c87:	68 98 b1 00 c1       	push   $0xc100b198
c1006c8c:	e8 2b e3 ff ff       	call   c1004fbc <printk>
c1006c91:	83 c4 10             	add    $0x10,%esp
c1006c94:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006c97:	83 ec 0c             	sub    $0xc,%esp
c1006c9a:	50                   	push   %eax
c1006c9b:	e8 dd 10 00 00       	call   c1007d7d <dir_close>
c1006ca0:	83 c4 10             	add    $0x10,%esp
c1006ca3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006ca8:	e9 34 01 00 00       	jmp    c1006de1 <sys_unlink+0x21e>
c1006cad:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1006cb4:	eb 37                	jmp    c1006ced <sys_unlink+0x12a>
c1006cb6:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006cb9:	89 d0                	mov    %edx,%eax
c1006cbb:	01 c0                	add    %eax,%eax
c1006cbd:	01 d0                	add    %edx,%eax
c1006cbf:	c1 e0 02             	shl    $0x2,%eax
c1006cc2:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1006cc7:	8b 00                	mov    (%eax),%eax
c1006cc9:	85 c0                	test   %eax,%eax
c1006ccb:	74 1c                	je     c1006ce9 <sys_unlink+0x126>
c1006ccd:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1006cd0:	89 d0                	mov    %edx,%eax
c1006cd2:	01 c0                	add    %eax,%eax
c1006cd4:	01 d0                	add    %edx,%eax
c1006cd6:	c1 e0 02             	shl    $0x2,%eax
c1006cd9:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1006cde:	8b 00                	mov    (%eax),%eax
c1006ce0:	8b 10                	mov    (%eax),%edx
c1006ce2:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006ce5:	39 c2                	cmp    %eax,%edx
c1006ce7:	74 0c                	je     c1006cf5 <sys_unlink+0x132>
c1006ce9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1006ced:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006cf1:	76 c3                	jbe    c1006cb6 <sys_unlink+0xf3>
c1006cf3:	eb 01                	jmp    c1006cf6 <sys_unlink+0x133>
c1006cf5:	90                   	nop
c1006cf6:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
c1006cfa:	77 2c                	ja     c1006d28 <sys_unlink+0x165>
c1006cfc:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006cff:	83 ec 0c             	sub    $0xc,%esp
c1006d02:	50                   	push   %eax
c1006d03:	e8 75 10 00 00       	call   c1007d7d <dir_close>
c1006d08:	83 c4 10             	add    $0x10,%esp
c1006d0b:	83 ec 08             	sub    $0x8,%esp
c1006d0e:	ff 75 08             	pushl  0x8(%ebp)
c1006d11:	68 d8 b1 00 c1       	push   $0xc100b1d8
c1006d16:	e8 a1 e2 ff ff       	call   c1004fbc <printk>
c1006d1b:	83 c4 10             	add    $0x10,%esp
c1006d1e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006d23:	e9 b9 00 00 00       	jmp    c1006de1 <sys_unlink+0x21e>
c1006d28:	83 7d f4 20          	cmpl   $0x20,-0xc(%ebp)
c1006d2c:	74 19                	je     c1006d47 <sys_unlink+0x184>
c1006d2e:	68 01 b2 00 c1       	push   $0xc100b201
c1006d33:	68 60 b5 00 c1       	push   $0xc100b560
c1006d38:	68 eb 01 00 00       	push   $0x1eb
c1006d3d:	68 cc ae 00 c1       	push   $0xc100aecc
c1006d42:	e8 24 96 ff ff       	call   c100036b <__PANIC>
c1006d47:	83 ec 08             	sub    $0x8,%esp
c1006d4a:	6a 02                	push   $0x2
c1006d4c:	68 00 04 00 00       	push   $0x400
c1006d51:	e8 a7 bd ff ff       	call   c1002afd <vmm_malloc>
c1006d56:	83 c4 10             	add    $0x10,%esp
c1006d59:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006d5c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1006d60:	75 26                	jne    c1006d88 <sys_unlink+0x1c5>
c1006d62:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006d65:	83 ec 0c             	sub    $0xc,%esp
c1006d68:	50                   	push   %eax
c1006d69:	e8 0f 10 00 00       	call   c1007d7d <dir_close>
c1006d6e:	83 c4 10             	add    $0x10,%esp
c1006d71:	83 ec 0c             	sub    $0xc,%esp
c1006d74:	68 1c b2 00 c1       	push   $0xc100b21c
c1006d79:	e8 3e e2 ff ff       	call   c1004fbc <printk>
c1006d7e:	83 c4 10             	add    $0x10,%esp
c1006d81:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006d86:	eb 59                	jmp    c1006de1 <sys_unlink+0x21e>
c1006d88:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006d8b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006d8e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006d93:	ff 75 ec             	pushl  -0x14(%ebp)
c1006d96:	ff 75 f0             	pushl  -0x10(%ebp)
c1006d99:	ff 75 e8             	pushl  -0x18(%ebp)
c1006d9c:	50                   	push   %eax
c1006d9d:	e8 bc 14 00 00       	call   c100825e <delete_dir_entry>
c1006da2:	83 c4 10             	add    $0x10,%esp
c1006da5:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006daa:	83 ec 08             	sub    $0x8,%esp
c1006dad:	ff 75 f0             	pushl  -0x10(%ebp)
c1006db0:	50                   	push   %eax
c1006db1:	e8 05 32 00 00       	call   c1009fbb <inode_release>
c1006db6:	83 c4 10             	add    $0x10,%esp
c1006db9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006dbc:	83 ec 08             	sub    $0x8,%esp
c1006dbf:	68 00 04 00 00       	push   $0x400
c1006dc4:	50                   	push   %eax
c1006dc5:	e8 58 be ff ff       	call   c1002c22 <vmm_free>
c1006dca:	83 c4 10             	add    $0x10,%esp
c1006dcd:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1006dd0:	83 ec 0c             	sub    $0xc,%esp
c1006dd3:	50                   	push   %eax
c1006dd4:	e8 a4 0f 00 00       	call   c1007d7d <dir_close>
c1006dd9:	83 c4 10             	add    $0x10,%esp
c1006ddc:	b8 00 00 00 00       	mov    $0x0,%eax
c1006de1:	c9                   	leave  
c1006de2:	c3                   	ret    

c1006de3 <sys_mkdir>:
c1006de3:	55                   	push   %ebp
c1006de4:	89 e5                	mov    %esp,%ebp
c1006de6:	53                   	push   %ebx
c1006de7:	81 ec a4 02 00 00    	sub    $0x2a4,%esp
c1006ded:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1006df1:	83 ec 08             	sub    $0x8,%esp
c1006df4:	6a 02                	push   $0x2
c1006df6:	68 00 04 00 00       	push   $0x400
c1006dfb:	e8 fd bc ff ff       	call   c1002afd <vmm_malloc>
c1006e00:	83 c4 10             	add    $0x10,%esp
c1006e03:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1006e06:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1006e0a:	75 1a                	jne    c1006e26 <sys_mkdir+0x43>
c1006e0c:	83 ec 0c             	sub    $0xc,%esp
c1006e0f:	68 44 b2 00 c1       	push   $0xc100b244
c1006e14:	e8 a3 e1 ff ff       	call   c1004fbc <printk>
c1006e19:	83 c4 10             	add    $0x10,%esp
c1006e1c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1006e21:	e9 f2 03 00 00       	jmp    c1007218 <sys_mkdir+0x435>
c1006e26:	83 ec 04             	sub    $0x4,%esp
c1006e29:	68 08 02 00 00       	push   $0x208
c1006e2e:	6a 00                	push   $0x0
c1006e30:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006e36:	50                   	push   %eax
c1006e37:	e8 6e 92 ff ff       	call   c10000aa <memset>
c1006e3c:	83 c4 10             	add    $0x10,%esp
c1006e3f:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
c1006e46:	83 ec 08             	sub    $0x8,%esp
c1006e49:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006e4f:	50                   	push   %eax
c1006e50:	ff 75 08             	pushl  0x8(%ebp)
c1006e53:	e8 e0 f4 ff ff       	call   c1006338 <search_file>
c1006e58:	83 c4 10             	add    $0x10,%esp
c1006e5b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006e5e:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006e62:	74 1c                	je     c1006e80 <sys_mkdir+0x9d>
c1006e64:	83 ec 08             	sub    $0x8,%esp
c1006e67:	ff 75 08             	pushl  0x8(%ebp)
c1006e6a:	68 70 b2 00 c1       	push   $0xc100b270
c1006e6f:	e8 48 e1 ff ff       	call   c1004fbc <printk>
c1006e74:	83 c4 10             	add    $0x10,%esp
c1006e77:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1006e7b:	e9 08 03 00 00       	jmp    c1007188 <sys_mkdir+0x3a5>
c1006e80:	83 ec 0c             	sub    $0xc,%esp
c1006e83:	ff 75 08             	pushl  0x8(%ebp)
c1006e86:	e8 25 f4 ff ff       	call   c10062b0 <path_depth_cnt>
c1006e8b:	83 c4 10             	add    $0x10,%esp
c1006e8e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1006e91:	83 ec 0c             	sub    $0xc,%esp
c1006e94:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006e9a:	50                   	push   %eax
c1006e9b:	e8 10 f4 ff ff       	call   c10062b0 <path_depth_cnt>
c1006ea0:	83 c4 10             	add    $0x10,%esp
c1006ea3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1006ea6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1006ea9:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
c1006eac:	74 23                	je     c1006ed1 <sys_mkdir+0xee>
c1006eae:	83 ec 04             	sub    $0x4,%esp
c1006eb1:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006eb7:	50                   	push   %eax
c1006eb8:	ff 75 08             	pushl  0x8(%ebp)
c1006ebb:	68 98 b2 00 c1       	push   $0xc100b298
c1006ec0:	e8 f7 e0 ff ff       	call   c1004fbc <printk>
c1006ec5:	83 c4 10             	add    $0x10,%esp
c1006ec8:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1006ecc:	e9 b7 02 00 00       	jmp    c1007188 <sys_mkdir+0x3a5>
c1006ed1:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1006ed4:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1006ed7:	83 ec 08             	sub    $0x8,%esp
c1006eda:	6a 2f                	push   $0x2f
c1006edc:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
c1006ee2:	50                   	push   %eax
c1006ee3:	e8 ae 92 ff ff       	call   c1000196 <strrchr>
c1006ee8:	83 c4 10             	add    $0x10,%esp
c1006eeb:	83 c0 01             	add    $0x1,%eax
c1006eee:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1006ef1:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006ef6:	83 ec 0c             	sub    $0xc,%esp
c1006ef9:	50                   	push   %eax
c1006efa:	e8 74 1b 00 00       	call   c1008a73 <inode_bitmap_alloc>
c1006eff:	83 c4 10             	add    $0x10,%esp
c1006f02:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1006f05:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1006f09:	75 19                	jne    c1006f24 <sys_mkdir+0x141>
c1006f0b:	83 ec 0c             	sub    $0xc,%esp
c1006f0e:	68 cc b2 00 c1       	push   $0xc100b2cc
c1006f13:	e8 a4 e0 ff ff       	call   c1004fbc <printk>
c1006f18:	83 c4 10             	add    $0x10,%esp
c1006f1b:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1006f1f:	e9 64 02 00 00       	jmp    c1007188 <sys_mkdir+0x3a5>
c1006f24:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1006f27:	83 ec 08             	sub    $0x8,%esp
c1006f2a:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c1006f30:	52                   	push   %edx
c1006f31:	50                   	push   %eax
c1006f32:	e8 49 33 00 00       	call   c100a280 <inode_init>
c1006f37:	83 c4 10             	add    $0x10,%esp
c1006f3a:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
c1006f41:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
c1006f48:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006f4d:	83 ec 0c             	sub    $0xc,%esp
c1006f50:	50                   	push   %eax
c1006f51:	e8 dd 1b 00 00       	call   c1008b33 <block_bitmap_alloc>
c1006f56:	83 c4 10             	add    $0x10,%esp
c1006f59:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1006f5c:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
c1006f60:	75 19                	jne    c1006f7b <sys_mkdir+0x198>
c1006f62:	83 ec 0c             	sub    $0xc,%esp
c1006f65:	68 f0 b2 00 c1       	push   $0xc100b2f0
c1006f6a:	e8 4d e0 ff ff       	call   c1004fbc <printk>
c1006f6f:	83 c4 10             	add    $0x10,%esp
c1006f72:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1006f76:	e9 0d 02 00 00       	jmp    c1007188 <sys_mkdir+0x3a5>
c1006f7b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1006f7e:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
c1006f84:	8b 55 d4             	mov    -0x2c(%ebp),%edx
c1006f87:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006f8c:	8b 40 10             	mov    0x10(%eax),%eax
c1006f8f:	8b 40 28             	mov    0x28(%eax),%eax
c1006f92:	29 c2                	sub    %eax,%edx
c1006f94:	89 d0                	mov    %edx,%eax
c1006f96:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1006f99:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
c1006f9d:	75 19                	jne    c1006fb8 <sys_mkdir+0x1d5>
c1006f9f:	68 2b b3 00 c1       	push   $0xc100b32b
c1006fa4:	68 6c b5 00 c1       	push   $0xc100b56c
c1006fa9:	68 33 02 00 00       	push   $0x233
c1006fae:	68 cc ae 00 c1       	push   $0xc100aecc
c1006fb3:	e8 b3 93 ff ff       	call   c100036b <__PANIC>
c1006fb8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1006fbd:	83 ec 04             	sub    $0x4,%esp
c1006fc0:	6a 01                	push   $0x1
c1006fc2:	ff 75 d8             	pushl  -0x28(%ebp)
c1006fc5:	50                   	push   %eax
c1006fc6:	e8 36 1c 00 00       	call   c1008c01 <bitmap_sync>
c1006fcb:	83 c4 10             	add    $0x10,%esp
c1006fce:	83 ec 04             	sub    $0x4,%esp
c1006fd1:	68 00 04 00 00       	push   $0x400
c1006fd6:	6a 00                	push   $0x0
c1006fd8:	ff 75 ec             	pushl  -0x14(%ebp)
c1006fdb:	e8 ca 90 ff ff       	call   c10000aa <memset>
c1006fe0:	83 c4 10             	add    $0x10,%esp
c1006fe3:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1006fe6:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1006fe9:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1006fec:	83 ec 04             	sub    $0x4,%esp
c1006fef:	6a 01                	push   $0x1
c1006ff1:	68 0d ae 00 c1       	push   $0xc100ae0d
c1006ff6:	50                   	push   %eax
c1006ff7:	e8 0c 91 ff ff       	call   c1000108 <memcpy>
c1006ffc:	83 c4 10             	add    $0x10,%esp
c1006fff:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007002:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007005:	89 50 10             	mov    %edx,0x10(%eax)
c1007008:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100700b:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1007012:	83 45 d0 18          	addl   $0x18,-0x30(%ebp)
c1007016:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007019:	83 ec 04             	sub    $0x4,%esp
c100701c:	6a 02                	push   $0x2
c100701e:	68 0f ae 00 c1       	push   $0xc100ae0f
c1007023:	50                   	push   %eax
c1007024:	e8 df 90 ff ff       	call   c1000108 <memcpy>
c1007029:	83 c4 10             	add    $0x10,%esp
c100702c:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100702f:	8b 00                	mov    (%eax),%eax
c1007031:	8b 10                	mov    (%eax),%edx
c1007033:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1007036:	89 50 10             	mov    %edx,0x10(%eax)
c1007039:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100703c:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
c1007043:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
c1007049:	83 ec 04             	sub    $0x4,%esp
c100704c:	6a 01                	push   $0x1
c100704e:	50                   	push   %eax
c100704f:	ff 75 ec             	pushl  -0x14(%ebp)
c1007052:	e8 4a e8 ff ff       	call   c10058a1 <ide_write>
c1007057:	83 c4 10             	add    $0x10,%esp
c100705a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100705f:	8b 40 10             	mov    0x10(%eax),%eax
c1007062:	8b 40 30             	mov    0x30(%eax),%eax
c1007065:	01 c0                	add    %eax,%eax
c1007067:	89 85 80 fd ff ff    	mov    %eax,-0x280(%ebp)
c100706d:	83 ec 04             	sub    $0x4,%esp
c1007070:	6a 18                	push   $0x18
c1007072:	6a 00                	push   $0x0
c1007074:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c100707a:	50                   	push   %eax
c100707b:	e8 2a 90 ff ff       	call   c10000aa <memset>
c1007080:	83 c4 10             	add    $0x10,%esp
c1007083:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007086:	8d 95 64 fd ff ff    	lea    -0x29c(%ebp),%edx
c100708c:	52                   	push   %edx
c100708d:	6a 02                	push   $0x2
c100708f:	50                   	push   %eax
c1007090:	ff 75 dc             	pushl  -0x24(%ebp)
c1007093:	e8 1f 0d 00 00       	call   c1007db7 <create_dir_entry>
c1007098:	83 c4 10             	add    $0x10,%esp
c100709b:	83 ec 04             	sub    $0x4,%esp
c100709e:	68 00 04 00 00       	push   $0x400
c10070a3:	6a 00                	push   $0x0
c10070a5:	ff 75 ec             	pushl  -0x14(%ebp)
c10070a8:	e8 fd 8f ff ff       	call   c10000aa <memset>
c10070ad:	83 c4 10             	add    $0x10,%esp
c10070b0:	83 ec 04             	sub    $0x4,%esp
c10070b3:	ff 75 ec             	pushl  -0x14(%ebp)
c10070b6:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
c10070bc:	50                   	push   %eax
c10070bd:	ff 75 e0             	pushl  -0x20(%ebp)
c10070c0:	e8 5e 0d 00 00       	call   c1007e23 <sync_dir_entry>
c10070c5:	83 c4 10             	add    $0x10,%esp
c10070c8:	85 c0                	test   %eax,%eax
c10070ca:	75 19                	jne    c10070e5 <sys_mkdir+0x302>
c10070cc:	83 ec 0c             	sub    $0xc,%esp
c10070cf:	68 44 b3 00 c1       	push   $0xc100b344
c10070d4:	e8 e3 de ff ff       	call   c1004fbc <printk>
c10070d9:	83 c4 10             	add    $0x10,%esp
c10070dc:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c10070e0:	e9 a3 00 00 00       	jmp    c1007188 <sys_mkdir+0x3a5>
c10070e5:	83 ec 04             	sub    $0x4,%esp
c10070e8:	68 00 04 00 00       	push   $0x400
c10070ed:	6a 00                	push   $0x0
c10070ef:	ff 75 ec             	pushl  -0x14(%ebp)
c10070f2:	e8 b3 8f ff ff       	call   c10000aa <memset>
c10070f7:	83 c4 10             	add    $0x10,%esp
c10070fa:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10070fd:	8b 10                	mov    (%eax),%edx
c10070ff:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007104:	83 ec 04             	sub    $0x4,%esp
c1007107:	ff 75 ec             	pushl  -0x14(%ebp)
c100710a:	52                   	push   %edx
c100710b:	50                   	push   %eax
c100710c:	e8 9d 2b 00 00       	call   c1009cae <inode_sync>
c1007111:	83 c4 10             	add    $0x10,%esp
c1007114:	83 ec 04             	sub    $0x4,%esp
c1007117:	68 00 04 00 00       	push   $0x400
c100711c:	6a 00                	push   $0x0
c100711e:	ff 75 ec             	pushl  -0x14(%ebp)
c1007121:	e8 84 8f ff ff       	call   c10000aa <memset>
c1007126:	83 c4 10             	add    $0x10,%esp
c1007129:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100712e:	83 ec 04             	sub    $0x4,%esp
c1007131:	ff 75 ec             	pushl  -0x14(%ebp)
c1007134:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
c100713a:	52                   	push   %edx
c100713b:	50                   	push   %eax
c100713c:	e8 6d 2b 00 00       	call   c1009cae <inode_sync>
c1007141:	83 c4 10             	add    $0x10,%esp
c1007144:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007147:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100714c:	83 ec 04             	sub    $0x4,%esp
c100714f:	6a 00                	push   $0x0
c1007151:	52                   	push   %edx
c1007152:	50                   	push   %eax
c1007153:	e8 a9 1a 00 00       	call   c1008c01 <bitmap_sync>
c1007158:	83 c4 10             	add    $0x10,%esp
c100715b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100715e:	83 ec 08             	sub    $0x8,%esp
c1007161:	68 00 04 00 00       	push   $0x400
c1007166:	50                   	push   %eax
c1007167:	e8 b6 ba ff ff       	call   c1002c22 <vmm_free>
c100716c:	83 c4 10             	add    $0x10,%esp
c100716f:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1007172:	83 ec 0c             	sub    $0xc,%esp
c1007175:	50                   	push   %eax
c1007176:	e8 02 0c 00 00       	call   c1007d7d <dir_close>
c100717b:	83 c4 10             	add    $0x10,%esp
c100717e:	b8 00 00 00 00       	mov    $0x0,%eax
c1007183:	e9 90 00 00 00       	jmp    c1007218 <sys_mkdir+0x435>
c1007188:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100718c:	83 f8 01             	cmp    $0x1,%eax
c100718f:	74 5e                	je     c10071ef <sys_mkdir+0x40c>
c1007191:	83 f8 02             	cmp    $0x2,%eax
c1007194:	75 69                	jne    c10071ff <sys_mkdir+0x41c>
c1007196:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007199:	8d 50 07             	lea    0x7(%eax),%edx
c100719c:	85 c0                	test   %eax,%eax
c100719e:	0f 48 c2             	cmovs  %edx,%eax
c10071a1:	c1 f8 03             	sar    $0x3,%eax
c10071a4:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10071a7:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10071aa:	99                   	cltd   
c10071ab:	c1 ea 1d             	shr    $0x1d,%edx
c10071ae:	01 d0                	add    %edx,%eax
c10071b0:	83 e0 07             	and    $0x7,%eax
c10071b3:	29 d0                	sub    %edx,%eax
c10071b5:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10071b8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10071bd:	8b 50 20             	mov    0x20(%eax),%edx
c10071c0:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10071c3:	01 d0                	add    %edx,%eax
c10071c5:	0f b6 00             	movzbl (%eax),%eax
c10071c8:	89 c2                	mov    %eax,%edx
c10071ca:	8b 45 c8             	mov    -0x38(%ebp),%eax
c10071cd:	bb 01 00 00 00       	mov    $0x1,%ebx
c10071d2:	89 c1                	mov    %eax,%ecx
c10071d4:	d3 e3                	shl    %cl,%ebx
c10071d6:	89 d8                	mov    %ebx,%eax
c10071d8:	f7 d0                	not    %eax
c10071da:	89 d1                	mov    %edx,%ecx
c10071dc:	21 c1                	and    %eax,%ecx
c10071de:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10071e3:	8b 50 20             	mov    0x20(%eax),%edx
c10071e6:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10071e9:	01 d0                	add    %edx,%eax
c10071eb:	89 ca                	mov    %ecx,%edx
c10071ed:	88 10                	mov    %dl,(%eax)
c10071ef:	8b 45 c0             	mov    -0x40(%ebp),%eax
c10071f2:	83 ec 0c             	sub    $0xc,%esp
c10071f5:	50                   	push   %eax
c10071f6:	e8 82 0b 00 00       	call   c1007d7d <dir_close>
c10071fb:	83 c4 10             	add    $0x10,%esp
c10071fe:	90                   	nop
c10071ff:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007202:	83 ec 08             	sub    $0x8,%esp
c1007205:	68 00 04 00 00       	push   $0x400
c100720a:	50                   	push   %eax
c100720b:	e8 12 ba ff ff       	call   c1002c22 <vmm_free>
c1007210:	83 c4 10             	add    $0x10,%esp
c1007213:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007218:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c100721b:	c9                   	leave  
c100721c:	c3                   	ret    

c100721d <sys_opendir>:
c100721d:	55                   	push   %ebp
c100721e:	89 e5                	mov    %esp,%ebp
c1007220:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1007226:	83 ec 0c             	sub    $0xc,%esp
c1007229:	ff 75 08             	pushl  0x8(%ebp)
c100722c:	e8 ed 8e ff ff       	call   c100011e <strlen>
c1007231:	83 c4 10             	add    $0x10,%esp
c1007234:	3d ff 01 00 00       	cmp    $0x1ff,%eax
c1007239:	76 19                	jbe    c1007254 <sys_opendir+0x37>
c100723b:	68 6f b3 00 c1       	push   $0xc100b36f
c1007240:	68 78 b5 00 c1       	push   $0xc100b578
c1007245:	68 75 02 00 00       	push   $0x275
c100724a:	68 cc ae 00 c1       	push   $0xc100aecc
c100724f:	e8 17 91 ff ff       	call   c100036b <__PANIC>
c1007254:	8b 45 08             	mov    0x8(%ebp),%eax
c1007257:	0f b6 00             	movzbl (%eax),%eax
c100725a:	3c 2f                	cmp    $0x2f,%al
c100725c:	75 21                	jne    c100727f <sys_opendir+0x62>
c100725e:	8b 45 08             	mov    0x8(%ebp),%eax
c1007261:	83 c0 01             	add    $0x1,%eax
c1007264:	0f b6 00             	movzbl (%eax),%eax
c1007267:	84 c0                	test   %al,%al
c1007269:	74 0a                	je     c1007275 <sys_opendir+0x58>
c100726b:	8b 45 08             	mov    0x8(%ebp),%eax
c100726e:	0f b6 00             	movzbl (%eax),%eax
c1007271:	3c 2e                	cmp    $0x2e,%al
c1007273:	75 0a                	jne    c100727f <sys_opendir+0x62>
c1007275:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c100727a:	e9 a9 00 00 00       	jmp    c1007328 <sys_opendir+0x10b>
c100727f:	83 ec 04             	sub    $0x4,%esp
c1007282:	68 08 02 00 00       	push   $0x208
c1007287:	6a 00                	push   $0x0
c1007289:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c100728f:	50                   	push   %eax
c1007290:	e8 15 8e ff ff       	call   c10000aa <memset>
c1007295:	83 c4 10             	add    $0x10,%esp
c1007298:	83 ec 08             	sub    $0x8,%esp
c100729b:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c10072a1:	50                   	push   %eax
c10072a2:	ff 75 08             	pushl  0x8(%ebp)
c10072a5:	e8 8e f0 ff ff       	call   c1006338 <search_file>
c10072aa:	83 c4 10             	add    $0x10,%esp
c10072ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10072b0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c10072b7:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10072bb:	75 1c                	jne    c10072d9 <sys_opendir+0xbc>
c10072bd:	83 ec 04             	sub    $0x4,%esp
c10072c0:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c10072c6:	50                   	push   %eax
c10072c7:	ff 75 08             	pushl  0x8(%ebp)
c10072ca:	68 8b b3 00 c1       	push   $0xc100b38b
c10072cf:	e8 e8 dc ff ff       	call   c1004fbc <printk>
c10072d4:	83 c4 10             	add    $0x10,%esp
c10072d7:	eb 3d                	jmp    c1007316 <sys_opendir+0xf9>
c10072d9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10072dc:	83 f8 01             	cmp    $0x1,%eax
c10072df:	75 15                	jne    c10072f6 <sys_opendir+0xd9>
c10072e1:	83 ec 08             	sub    $0x8,%esp
c10072e4:	ff 75 08             	pushl  0x8(%ebp)
c10072e7:	68 a9 b3 00 c1       	push   $0xc100b3a9
c10072ec:	e8 cb dc ff ff       	call   c1004fbc <printk>
c10072f1:	83 c4 10             	add    $0x10,%esp
c10072f4:	eb 20                	jmp    c1007316 <sys_opendir+0xf9>
c10072f6:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10072f9:	83 f8 02             	cmp    $0x2,%eax
c10072fc:	75 18                	jne    c1007316 <sys_opendir+0xf9>
c10072fe:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007301:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007306:	83 ec 08             	sub    $0x8,%esp
c1007309:	52                   	push   %edx
c100730a:	50                   	push   %eax
c100730b:	e8 41 08 00 00       	call   c1007b51 <dir_open>
c1007310:	83 c4 10             	add    $0x10,%esp
c1007313:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007316:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007319:	83 ec 0c             	sub    $0xc,%esp
c100731c:	50                   	push   %eax
c100731d:	e8 5b 0a 00 00       	call   c1007d7d <dir_close>
c1007322:	83 c4 10             	add    $0x10,%esp
c1007325:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007328:	c9                   	leave  
c1007329:	c3                   	ret    

c100732a <sys_closedir>:
c100732a:	55                   	push   %ebp
c100732b:	89 e5                	mov    %esp,%ebp
c100732d:	83 ec 18             	sub    $0x18,%esp
c1007330:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007337:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100733b:	74 15                	je     c1007352 <sys_closedir+0x28>
c100733d:	83 ec 0c             	sub    $0xc,%esp
c1007340:	ff 75 08             	pushl  0x8(%ebp)
c1007343:	e8 35 0a 00 00       	call   c1007d7d <dir_close>
c1007348:	83 c4 10             	add    $0x10,%esp
c100734b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007352:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007355:	c9                   	leave  
c1007356:	c3                   	ret    

c1007357 <sys_readdir>:
c1007357:	55                   	push   %ebp
c1007358:	89 e5                	mov    %esp,%ebp
c100735a:	83 ec 08             	sub    $0x8,%esp
c100735d:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c1007361:	75 19                	jne    c100737c <sys_readdir+0x25>
c1007363:	68 be b3 00 c1       	push   $0xc100b3be
c1007368:	68 84 b5 00 c1       	push   $0xc100b584
c100736d:	68 98 02 00 00       	push   $0x298
c1007372:	68 cc ae 00 c1       	push   $0xc100aecc
c1007377:	e8 ef 8f ff ff       	call   c100036b <__PANIC>
c100737c:	83 ec 0c             	sub    $0xc,%esp
c100737f:	ff 75 08             	pushl  0x8(%ebp)
c1007382:	e8 79 13 00 00       	call   c1008700 <dir_read>
c1007387:	83 c4 10             	add    $0x10,%esp
c100738a:	c9                   	leave  
c100738b:	c3                   	ret    

c100738c <sys_rewinddir>:
c100738c:	55                   	push   %ebp
c100738d:	89 e5                	mov    %esp,%ebp
c100738f:	8b 45 08             	mov    0x8(%ebp),%eax
c1007392:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1007399:	90                   	nop
c100739a:	5d                   	pop    %ebp
c100739b:	c3                   	ret    

c100739c <sys_rmdir>:
c100739c:	55                   	push   %ebp
c100739d:	89 e5                	mov    %esp,%ebp
c100739f:	81 ec 28 02 00 00    	sub    $0x228,%esp
c10073a5:	83 ec 04             	sub    $0x4,%esp
c10073a8:	68 08 02 00 00       	push   $0x208
c10073ad:	6a 00                	push   $0x0
c10073af:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10073b5:	50                   	push   %eax
c10073b6:	e8 ef 8c ff ff       	call   c10000aa <memset>
c10073bb:	83 c4 10             	add    $0x10,%esp
c10073be:	83 ec 08             	sub    $0x8,%esp
c10073c1:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10073c7:	50                   	push   %eax
c10073c8:	ff 75 08             	pushl  0x8(%ebp)
c10073cb:	e8 68 ef ff ff       	call   c1006338 <search_file>
c10073d0:	83 c4 10             	add    $0x10,%esp
c10073d3:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10073d6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c10073da:	75 19                	jne    c10073f5 <sys_rmdir+0x59>
c10073dc:	68 74 b1 00 c1       	push   $0xc100b174
c10073e1:	68 90 b5 00 c1       	push   $0xc100b590
c10073e6:	68 a6 02 00 00       	push   $0x2a6
c10073eb:	68 cc ae 00 c1       	push   $0xc100aecc
c10073f0:	e8 76 8f ff ff       	call   c100036b <__PANIC>
c10073f5:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c10073fc:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007400:	75 1f                	jne    c1007421 <sys_rmdir+0x85>
c1007402:	83 ec 04             	sub    $0x4,%esp
c1007405:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c100740b:	50                   	push   %eax
c100740c:	ff 75 08             	pushl  0x8(%ebp)
c100740f:	68 8b b3 00 c1       	push   $0xc100b38b
c1007414:	e8 a3 db ff ff       	call   c1004fbc <printk>
c1007419:	83 c4 10             	add    $0x10,%esp
c100741c:	e9 87 00 00 00       	jmp    c10074a8 <sys_rmdir+0x10c>
c1007421:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007424:	83 f8 01             	cmp    $0x1,%eax
c1007427:	75 15                	jne    c100743e <sys_rmdir+0xa2>
c1007429:	83 ec 08             	sub    $0x8,%esp
c100742c:	ff 75 08             	pushl  0x8(%ebp)
c100742f:	68 a9 b3 00 c1       	push   $0xc100b3a9
c1007434:	e8 83 db ff ff       	call   c1004fbc <printk>
c1007439:	83 c4 10             	add    $0x10,%esp
c100743c:	eb 6a                	jmp    c10074a8 <sys_rmdir+0x10c>
c100743e:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007441:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007446:	83 ec 08             	sub    $0x8,%esp
c1007449:	52                   	push   %edx
c100744a:	50                   	push   %eax
c100744b:	e8 01 07 00 00       	call   c1007b51 <dir_open>
c1007450:	83 c4 10             	add    $0x10,%esp
c1007453:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007456:	83 ec 0c             	sub    $0xc,%esp
c1007459:	ff 75 ec             	pushl  -0x14(%ebp)
c100745c:	e8 74 14 00 00       	call   c10088d5 <dir_is_empty>
c1007461:	83 c4 10             	add    $0x10,%esp
c1007464:	85 c0                	test   %eax,%eax
c1007466:	75 15                	jne    c100747d <sys_rmdir+0xe1>
c1007468:	83 ec 08             	sub    $0x8,%esp
c100746b:	ff 75 08             	pushl  0x8(%ebp)
c100746e:	68 cc b3 00 c1       	push   $0xc100b3cc
c1007473:	e8 44 db ff ff       	call   c1004fbc <printk>
c1007478:	83 c4 10             	add    $0x10,%esp
c100747b:	eb 1d                	jmp    c100749a <sys_rmdir+0xfe>
c100747d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007480:	83 ec 08             	sub    $0x8,%esp
c1007483:	ff 75 ec             	pushl  -0x14(%ebp)
c1007486:	50                   	push   %eax
c1007487:	e8 71 14 00 00       	call   c10088fd <dir_remove>
c100748c:	83 c4 10             	add    $0x10,%esp
c100748f:	85 c0                	test   %eax,%eax
c1007491:	75 07                	jne    c100749a <sys_rmdir+0xfe>
c1007493:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100749a:	83 ec 0c             	sub    $0xc,%esp
c100749d:	ff 75 ec             	pushl  -0x14(%ebp)
c10074a0:	e8 d8 08 00 00       	call   c1007d7d <dir_close>
c10074a5:	83 c4 10             	add    $0x10,%esp
c10074a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10074ab:	83 ec 0c             	sub    $0xc,%esp
c10074ae:	50                   	push   %eax
c10074af:	e8 c9 08 00 00       	call   c1007d7d <dir_close>
c10074b4:	83 c4 10             	add    $0x10,%esp
c10074b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10074ba:	c9                   	leave  
c10074bb:	c3                   	ret    

c10074bc <get_parent_dir_inode_nr>:
c10074bc:	55                   	push   %ebp
c10074bd:	89 e5                	mov    %esp,%ebp
c10074bf:	83 ec 18             	sub    $0x18,%esp
c10074c2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10074c7:	83 ec 08             	sub    $0x8,%esp
c10074ca:	ff 75 08             	pushl  0x8(%ebp)
c10074cd:	50                   	push   %eax
c10074ce:	e8 fc 28 00 00       	call   c1009dcf <inode_open>
c10074d3:	83 c4 10             	add    $0x10,%esp
c10074d6:	89 45 f4             	mov    %eax,-0xc(%ebp)
c10074d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10074dc:	8b 40 10             	mov    0x10(%eax),%eax
c10074df:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10074e2:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10074e7:	8b 40 10             	mov    0x10(%eax),%eax
c10074ea:	8b 40 28             	mov    0x28(%eax),%eax
c10074ed:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c10074f0:	73 19                	jae    c100750b <get_parent_dir_inode_nr+0x4f>
c10074f2:	68 14 b4 00 c1       	push   $0xc100b414
c10074f7:	68 9c b5 00 c1       	push   $0xc100b59c
c10074fc:	68 c1 02 00 00       	push   $0x2c1
c1007501:	68 cc ae 00 c1       	push   $0xc100aecc
c1007506:	e8 60 8e ff ff       	call   c100036b <__PANIC>
c100750b:	83 ec 0c             	sub    $0xc,%esp
c100750e:	ff 75 f4             	pushl  -0xc(%ebp)
c1007511:	e8 8f 29 00 00       	call   c1009ea5 <inode_close>
c1007516:	83 c4 10             	add    $0x10,%esp
c1007519:	83 ec 04             	sub    $0x4,%esp
c100751c:	6a 01                	push   $0x1
c100751e:	ff 75 f0             	pushl  -0x10(%ebp)
c1007521:	ff 75 0c             	pushl  0xc(%ebp)
c1007524:	e8 3b e3 ff ff       	call   c1005864 <ide_read>
c1007529:	83 c4 10             	add    $0x10,%esp
c100752c:	8b 45 0c             	mov    0xc(%ebp),%eax
c100752f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007532:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007535:	83 c0 18             	add    $0x18,%eax
c1007538:	8b 40 10             	mov    0x10(%eax),%eax
c100753b:	3d ff 0f 00 00       	cmp    $0xfff,%eax
c1007540:	77 0e                	ja     c1007550 <get_parent_dir_inode_nr+0x94>
c1007542:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007545:	83 c0 18             	add    $0x18,%eax
c1007548:	8b 40 14             	mov    0x14(%eax),%eax
c100754b:	83 f8 02             	cmp    $0x2,%eax
c100754e:	74 19                	je     c1007569 <get_parent_dir_inode_nr+0xad>
c1007550:	68 40 b4 00 c1       	push   $0xc100b440
c1007555:	68 9c b5 00 c1       	push   $0xc100b59c
c100755a:	68 c6 02 00 00       	push   $0x2c6
c100755f:	68 cc ae 00 c1       	push   $0xc100aecc
c1007564:	e8 02 8e ff ff       	call   c100036b <__PANIC>
c1007569:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100756c:	83 c0 18             	add    $0x18,%eax
c100756f:	8b 40 10             	mov    0x10(%eax),%eax
c1007572:	c9                   	leave  
c1007573:	c3                   	ret    

c1007574 <get_child_dir_name>:
c1007574:	55                   	push   %ebp
c1007575:	89 e5                	mov    %esp,%ebp
c1007577:	57                   	push   %edi
c1007578:	81 ec 54 02 00 00    	sub    $0x254,%esp
c100757e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007583:	83 ec 08             	sub    $0x8,%esp
c1007586:	ff 75 08             	pushl  0x8(%ebp)
c1007589:	50                   	push   %eax
c100758a:	e8 40 28 00 00       	call   c1009dcf <inode_open>
c100758f:	83 c4 10             	add    $0x10,%esp
c1007592:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007595:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007599:	8d 95 ac fd ff ff    	lea    -0x254(%ebp),%edx
c100759f:	b8 00 00 00 00       	mov    $0x0,%eax
c10075a4:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c10075a9:	89 d7                	mov    %edx,%edi
c10075ab:	f3 ab                	rep stos %eax,%es:(%edi)
c10075ad:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
c10075b4:	eb 22                	jmp    c10075d8 <get_child_dir_name+0x64>
c10075b6:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c10075ba:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10075be:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10075c1:	83 c1 04             	add    $0x4,%ecx
c10075c4:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c10075c7:	89 94 85 ac fd ff ff 	mov    %edx,-0x254(%ebp,%eax,4)
c10075ce:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10075d2:	83 c0 01             	add    $0x1,%eax
c10075d5:	88 45 f7             	mov    %al,-0x9(%ebp)
c10075d8:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c10075dc:	76 d8                	jbe    c10075b6 <get_child_dir_name+0x42>
c10075de:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10075e1:	8b 40 40             	mov    0x40(%eax),%eax
c10075e4:	85 c0                	test   %eax,%eax
c10075e6:	74 25                	je     c100760d <get_child_dir_name+0x99>
c10075e8:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10075eb:	8b 50 40             	mov    0x40(%eax),%edx
c10075ee:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
c10075f4:	83 c0 30             	add    $0x30,%eax
c10075f7:	83 ec 04             	sub    $0x4,%esp
c10075fa:	6a 01                	push   $0x1
c10075fc:	52                   	push   %edx
c10075fd:	50                   	push   %eax
c10075fe:	e8 61 e2 ff ff       	call   c1005864 <ide_read>
c1007603:	83 c4 10             	add    $0x10,%esp
c1007606:	c7 45 f0 8c 00 00 00 	movl   $0x8c,-0x10(%ebp)
c100760d:	83 ec 0c             	sub    $0xc,%esp
c1007610:	ff 75 e8             	pushl  -0x18(%ebp)
c1007613:	e8 8d 28 00 00       	call   c1009ea5 <inode_close>
c1007618:	83 c4 10             	add    $0x10,%esp
c100761b:	8b 45 14             	mov    0x14(%ebp),%eax
c100761e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007621:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007626:	8b 40 10             	mov    0x10(%eax),%eax
c1007629:	8b 40 30             	mov    0x30(%eax),%eax
c100762c:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100762f:	b8 00 02 00 00       	mov    $0x200,%eax
c1007634:	ba 00 00 00 00       	mov    $0x0,%edx
c1007639:	f7 75 e0             	divl   -0x20(%ebp)
c100763c:	89 45 dc             	mov    %eax,-0x24(%ebp)
c100763f:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007643:	e9 bc 00 00 00       	jmp    c1007704 <get_child_dir_name+0x190>
c1007648:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100764c:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1007653:	85 c0                	test   %eax,%eax
c1007655:	0f 84 9f 00 00 00    	je     c10076fa <get_child_dir_name+0x186>
c100765b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100765f:	8b 84 85 ac fd ff ff 	mov    -0x254(%ebp,%eax,4),%eax
c1007666:	83 ec 04             	sub    $0x4,%esp
c1007669:	6a 01                	push   $0x1
c100766b:	50                   	push   %eax
c100766c:	ff 75 14             	pushl  0x14(%ebp)
c100766f:	e8 f0 e1 ff ff       	call   c1005864 <ide_read>
c1007674:	83 c4 10             	add    $0x10,%esp
c1007677:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
c100767b:	eb 74                	jmp    c10076f1 <get_child_dir_name+0x17d>
c100767d:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c1007681:	89 d0                	mov    %edx,%eax
c1007683:	01 c0                	add    %eax,%eax
c1007685:	01 d0                	add    %edx,%eax
c1007687:	c1 e0 03             	shl    $0x3,%eax
c100768a:	89 c2                	mov    %eax,%edx
c100768c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100768f:	01 d0                	add    %edx,%eax
c1007691:	8b 40 10             	mov    0x10(%eax),%eax
c1007694:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1007697:	75 4e                	jne    c10076e7 <get_child_dir_name+0x173>
c1007699:	8b 45 10             	mov    0x10(%ebp),%eax
c100769c:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
c10076a1:	89 c2                	mov    %eax,%edx
c10076a3:	b8 00 00 00 00       	mov    $0x0,%eax
c10076a8:	89 d7                	mov    %edx,%edi
c10076aa:	f2 ae                	repnz scas %es:(%edi),%al
c10076ac:	89 c8                	mov    %ecx,%eax
c10076ae:	f7 d0                	not    %eax
c10076b0:	8d 50 ff             	lea    -0x1(%eax),%edx
c10076b3:	8b 45 10             	mov    0x10(%ebp),%eax
c10076b6:	01 d0                	add    %edx,%eax
c10076b8:	66 c7 00 2f 00       	movw   $0x2f,(%eax)
c10076bd:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c10076c1:	89 d0                	mov    %edx,%eax
c10076c3:	01 c0                	add    %eax,%eax
c10076c5:	01 d0                	add    %edx,%eax
c10076c7:	c1 e0 03             	shl    $0x3,%eax
c10076ca:	89 c2                	mov    %eax,%edx
c10076cc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10076cf:	01 d0                	add    %edx,%eax
c10076d1:	83 ec 08             	sub    $0x8,%esp
c10076d4:	50                   	push   %eax
c10076d5:	ff 75 10             	pushl  0x10(%ebp)
c10076d8:	e8 f8 8a ff ff       	call   c10001d5 <strcat>
c10076dd:	83 c4 10             	add    $0x10,%esp
c10076e0:	b8 00 00 00 00       	mov    $0x0,%eax
c10076e5:	eb 2f                	jmp    c1007716 <get_child_dir_name+0x1a2>
c10076e7:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c10076eb:	83 c0 01             	add    $0x1,%eax
c10076ee:	88 45 ef             	mov    %al,-0x11(%ebp)
c10076f1:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c10076f5:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c10076f8:	77 83                	ja     c100767d <get_child_dir_name+0x109>
c10076fa:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10076fe:	83 c0 01             	add    $0x1,%eax
c1007701:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007704:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007708:	39 45 f0             	cmp    %eax,-0x10(%ebp)
c100770b:	0f 87 37 ff ff ff    	ja     c1007648 <get_child_dir_name+0xd4>
c1007711:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1007716:	8b 7d fc             	mov    -0x4(%ebp),%edi
c1007719:	c9                   	leave  
c100771a:	c3                   	ret    

c100771b <sys_getcwd>:
c100771b:	55                   	push   %ebp
c100771c:	89 e5                	mov    %esp,%ebp
c100771e:	57                   	push   %edi
c100771f:	53                   	push   %ebx
c1007720:	81 ec 20 02 00 00    	sub    $0x220,%esp
c1007726:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c100772a:	75 19                	jne    c1007745 <sys_getcwd+0x2a>
c100772c:	68 06 b1 00 c1       	push   $0xc100b106
c1007731:	68 b4 b5 00 c1       	push   $0xc100b5b4
c1007736:	68 f9 02 00 00       	push   $0x2f9
c100773b:	68 cc ae 00 c1       	push   $0xc100aecc
c1007740:	e8 26 8c ff ff       	call   c100036b <__PANIC>
c1007745:	83 ec 08             	sub    $0x8,%esp
c1007748:	6a 02                	push   $0x2
c100774a:	68 00 02 00 00       	push   $0x200
c100774f:	e8 a9 b3 ff ff       	call   c1002afd <vmm_malloc>
c1007754:	83 c4 10             	add    $0x10,%esp
c1007757:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100775a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c100775e:	75 0a                	jne    c100776a <sys_getcwd+0x4f>
c1007760:	b8 00 00 00 00       	mov    $0x0,%eax
c1007765:	e9 97 01 00 00       	jmp    c1007901 <sys_getcwd+0x1e6>
c100776a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007771:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1007776:	8b 80 f4 00 00 00    	mov    0xf4(%eax),%eax
c100777c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100777f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c1007783:	78 09                	js     c100778e <sys_getcwd+0x73>
c1007785:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
c100778c:	7e 19                	jle    c10077a7 <sys_getcwd+0x8c>
c100778e:	68 78 b4 00 c1       	push   $0xc100b478
c1007793:	68 b4 b5 00 c1       	push   $0xc100b5b4
c1007798:	68 01 03 00 00       	push   $0x301
c100779d:	68 cc ae 00 c1       	push   $0xc100aecc
c10077a2:	e8 c4 8b ff ff       	call   c100036b <__PANIC>
c10077a7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c10077ab:	75 17                	jne    c10077c4 <sys_getcwd+0xa9>
c10077ad:	8b 45 08             	mov    0x8(%ebp),%eax
c10077b0:	c6 00 2f             	movb   $0x2f,(%eax)
c10077b3:	8b 45 08             	mov    0x8(%ebp),%eax
c10077b6:	83 c0 01             	add    $0x1,%eax
c10077b9:	c6 00 00             	movb   $0x0,(%eax)
c10077bc:	8b 45 08             	mov    0x8(%ebp),%eax
c10077bf:	e9 3d 01 00 00       	jmp    c1007901 <sys_getcwd+0x1e6>
c10077c4:	83 ec 04             	sub    $0x4,%esp
c10077c7:	ff 75 0c             	pushl  0xc(%ebp)
c10077ca:	6a 00                	push   $0x0
c10077cc:	ff 75 08             	pushl  0x8(%ebp)
c10077cf:	e8 d6 88 ff ff       	call   c10000aa <memset>
c10077d4:	83 c4 10             	add    $0x10,%esp
c10077d7:	c7 85 e6 fd ff ff 00 	movl   $0x0,-0x21a(%ebp)
c10077de:	00 00 00 
c10077e1:	8d 85 ea fd ff ff    	lea    -0x216(%ebp),%eax
c10077e7:	b9 fc 01 00 00       	mov    $0x1fc,%ecx
c10077ec:	bb 00 00 00 00       	mov    $0x0,%ebx
c10077f1:	89 18                	mov    %ebx,(%eax)
c10077f3:	89 5c 08 fc          	mov    %ebx,-0x4(%eax,%ecx,1)
c10077f7:	8d 50 04             	lea    0x4(%eax),%edx
c10077fa:	83 e2 fc             	and    $0xfffffffc,%edx
c10077fd:	29 d0                	sub    %edx,%eax
c10077ff:	01 c1                	add    %eax,%ecx
c1007801:	83 e1 fc             	and    $0xfffffffc,%ecx
c1007804:	c1 e9 02             	shr    $0x2,%ecx
c1007807:	89 d7                	mov    %edx,%edi
c1007809:	89 d8                	mov    %ebx,%eax
c100780b:	f3 ab                	rep stos %eax,%es:(%edi)
c100780d:	eb 58                	jmp    c1007867 <sys_getcwd+0x14c>
c100780f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007812:	83 ec 08             	sub    $0x8,%esp
c1007815:	ff 75 f0             	pushl  -0x10(%ebp)
c1007818:	50                   	push   %eax
c1007819:	e8 9e fc ff ff       	call   c10074bc <get_parent_dir_inode_nr>
c100781e:	83 c4 10             	add    $0x10,%esp
c1007821:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007824:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007827:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100782a:	ff 75 f0             	pushl  -0x10(%ebp)
c100782d:	8d 8d e6 fd ff ff    	lea    -0x21a(%ebp),%ecx
c1007833:	51                   	push   %ecx
c1007834:	52                   	push   %edx
c1007835:	50                   	push   %eax
c1007836:	e8 39 fd ff ff       	call   c1007574 <get_child_dir_name>
c100783b:	83 c4 10             	add    $0x10,%esp
c100783e:	83 f8 ff             	cmp    $0xffffffff,%eax
c1007841:	75 1e                	jne    c1007861 <sys_getcwd+0x146>
c1007843:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007846:	83 ec 08             	sub    $0x8,%esp
c1007849:	68 00 02 00 00       	push   $0x200
c100784e:	50                   	push   %eax
c100784f:	e8 ce b3 ff ff       	call   c1002c22 <vmm_free>
c1007854:	83 c4 10             	add    $0x10,%esp
c1007857:	b8 00 00 00 00       	mov    $0x0,%eax
c100785c:	e9 a0 00 00 00       	jmp    c1007901 <sys_getcwd+0x1e6>
c1007861:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007864:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007867:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
c100786b:	75 a2                	jne    c100780f <sys_getcwd+0xf4>
c100786d:	83 ec 0c             	sub    $0xc,%esp
c1007870:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c1007876:	50                   	push   %eax
c1007877:	e8 a2 88 ff ff       	call   c100011e <strlen>
c100787c:	83 c4 10             	add    $0x10,%esp
c100787f:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1007882:	73 49                	jae    c10078cd <sys_getcwd+0x1b2>
c1007884:	68 a8 b4 00 c1       	push   $0xc100b4a8
c1007889:	68 b4 b5 00 c1       	push   $0xc100b5b4
c100788e:	68 17 03 00 00       	push   $0x317
c1007893:	68 cc ae 00 c1       	push   $0xc100aecc
c1007898:	e8 ce 8a ff ff       	call   c100036b <__PANIC>
c100789d:	83 ec 0c             	sub    $0xc,%esp
c10078a0:	ff 75 08             	pushl  0x8(%ebp)
c10078a3:	e8 76 88 ff ff       	call   c100011e <strlen>
c10078a8:	83 c4 10             	add    $0x10,%esp
c10078ab:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
c10078af:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
c10078b3:	8b 45 08             	mov    0x8(%ebp),%eax
c10078b6:	01 d0                	add    %edx,%eax
c10078b8:	83 ec 08             	sub    $0x8,%esp
c10078bb:	ff 75 e8             	pushl  -0x18(%ebp)
c10078be:	50                   	push   %eax
c10078bf:	e8 56 89 ff ff       	call   c100021a <strcpy>
c10078c4:	83 c4 10             	add    $0x10,%esp
c10078c7:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10078ca:	c6 00 00             	movb   $0x0,(%eax)
c10078cd:	83 ec 08             	sub    $0x8,%esp
c10078d0:	6a 2f                	push   $0x2f
c10078d2:	8d 85 e6 fd ff ff    	lea    -0x21a(%ebp),%eax
c10078d8:	50                   	push   %eax
c10078d9:	e8 b8 88 ff ff       	call   c1000196 <strrchr>
c10078de:	83 c4 10             	add    $0x10,%esp
c10078e1:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10078e4:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c10078e8:	75 b3                	jne    c100789d <sys_getcwd+0x182>
c10078ea:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10078ed:	83 ec 08             	sub    $0x8,%esp
c10078f0:	68 00 02 00 00       	push   $0x200
c10078f5:	50                   	push   %eax
c10078f6:	e8 27 b3 ff ff       	call   c1002c22 <vmm_free>
c10078fb:	83 c4 10             	add    $0x10,%esp
c10078fe:	8b 45 08             	mov    0x8(%ebp),%eax
c1007901:	8d 65 f8             	lea    -0x8(%ebp),%esp
c1007904:	5b                   	pop    %ebx
c1007905:	5f                   	pop    %edi
c1007906:	5d                   	pop    %ebp
c1007907:	c3                   	ret    

c1007908 <sys_stat>:
c1007908:	55                   	push   %ebp
c1007909:	89 e5                	mov    %esp,%ebp
c100790b:	81 ec 28 02 00 00    	sub    $0x228,%esp
c1007911:	83 ec 08             	sub    $0x8,%esp
c1007914:	68 fb ae 00 c1       	push   $0xc100aefb
c1007919:	ff 75 08             	pushl  0x8(%ebp)
c100791c:	e8 62 88 ff ff       	call   c1000183 <strcmp>
c1007921:	83 c4 10             	add    $0x10,%esp
c1007924:	85 c0                	test   %eax,%eax
c1007926:	74 2e                	je     c1007956 <sys_stat+0x4e>
c1007928:	83 ec 08             	sub    $0x8,%esp
c100792b:	68 fd ae 00 c1       	push   $0xc100aefd
c1007930:	ff 75 08             	pushl  0x8(%ebp)
c1007933:	e8 4b 88 ff ff       	call   c1000183 <strcmp>
c1007938:	83 c4 10             	add    $0x10,%esp
c100793b:	85 c0                	test   %eax,%eax
c100793d:	74 17                	je     c1007956 <sys_stat+0x4e>
c100793f:	83 ec 08             	sub    $0x8,%esp
c1007942:	68 00 af 00 c1       	push   $0xc100af00
c1007947:	ff 75 08             	pushl  0x8(%ebp)
c100794a:	e8 34 88 ff ff       	call   c1000183 <strcmp>
c100794f:	83 c4 10             	add    $0x10,%esp
c1007952:	85 c0                	test   %eax,%eax
c1007954:	75 2d                	jne    c1007983 <sys_stat+0x7b>
c1007956:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007959:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
c1007960:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007963:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1007969:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c100796e:	8b 00                	mov    (%eax),%eax
c1007970:	8b 50 04             	mov    0x4(%eax),%edx
c1007973:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007976:	89 50 04             	mov    %edx,0x4(%eax)
c1007979:	b8 00 00 00 00       	mov    $0x0,%eax
c100797e:	e9 af 00 00 00       	jmp    c1007a32 <sys_stat+0x12a>
c1007983:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c100798a:	83 ec 04             	sub    $0x4,%esp
c100798d:	68 08 02 00 00       	push   $0x208
c1007992:	6a 00                	push   $0x0
c1007994:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c100799a:	50                   	push   %eax
c100799b:	e8 0a 87 ff ff       	call   c10000aa <memset>
c10079a0:	83 c4 10             	add    $0x10,%esp
c10079a3:	83 ec 08             	sub    $0x8,%esp
c10079a6:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
c10079ac:	50                   	push   %eax
c10079ad:	ff 75 08             	pushl  0x8(%ebp)
c10079b0:	e8 83 e9 ff ff       	call   c1006338 <search_file>
c10079b5:	83 c4 10             	add    $0x10,%esp
c10079b8:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10079bb:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c10079bf:	74 4c                	je     c1007a0d <sys_stat+0x105>
c10079c1:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10079c4:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10079c9:	83 ec 08             	sub    $0x8,%esp
c10079cc:	52                   	push   %edx
c10079cd:	50                   	push   %eax
c10079ce:	e8 fc 23 00 00       	call   c1009dcf <inode_open>
c10079d3:	83 c4 10             	add    $0x10,%esp
c10079d6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10079d9:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10079dc:	8b 50 04             	mov    0x4(%eax),%edx
c10079df:	8b 45 0c             	mov    0xc(%ebp),%eax
c10079e2:	89 50 04             	mov    %edx,0x4(%eax)
c10079e5:	83 ec 0c             	sub    $0xc,%esp
c10079e8:	ff 75 ec             	pushl  -0x14(%ebp)
c10079eb:	e8 b5 24 00 00       	call   c1009ea5 <inode_close>
c10079f0:	83 c4 10             	add    $0x10,%esp
c10079f3:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10079f6:	8b 45 0c             	mov    0xc(%ebp),%eax
c10079f9:	89 50 08             	mov    %edx,0x8(%eax)
c10079fc:	8b 55 f0             	mov    -0x10(%ebp),%edx
c10079ff:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007a02:	89 10                	mov    %edx,(%eax)
c1007a04:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007a0b:	eb 13                	jmp    c1007a20 <sys_stat+0x118>
c1007a0d:	83 ec 08             	sub    $0x8,%esp
c1007a10:	ff 75 08             	pushl  0x8(%ebp)
c1007a13:	68 ca b4 00 c1       	push   $0xc100b4ca
c1007a18:	e8 9f d5 ff ff       	call   c1004fbc <printk>
c1007a1d:	83 c4 10             	add    $0x10,%esp
c1007a20:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007a23:	83 ec 0c             	sub    $0xc,%esp
c1007a26:	50                   	push   %eax
c1007a27:	e8 51 03 00 00       	call   c1007d7d <dir_close>
c1007a2c:	83 c4 10             	add    $0x10,%esp
c1007a2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007a32:	c9                   	leave  
c1007a33:	c3                   	ret    

c1007a34 <sys_chdir>:
c1007a34:	55                   	push   %ebp
c1007a35:	89 e5                	mov    %esp,%ebp
c1007a37:	81 ec 18 02 00 00    	sub    $0x218,%esp
c1007a3d:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
c1007a44:	83 ec 04             	sub    $0x4,%esp
c1007a47:	68 08 02 00 00       	push   $0x208
c1007a4c:	6a 00                	push   $0x0
c1007a4e:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007a54:	50                   	push   %eax
c1007a55:	e8 50 86 ff ff       	call   c10000aa <memset>
c1007a5a:	83 c4 10             	add    $0x10,%esp
c1007a5d:	83 ec 08             	sub    $0x8,%esp
c1007a60:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
c1007a66:	50                   	push   %eax
c1007a67:	ff 75 08             	pushl  0x8(%ebp)
c1007a6a:	e8 c9 e8 ff ff       	call   c1006338 <search_file>
c1007a6f:	83 c4 10             	add    $0x10,%esp
c1007a72:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007a75:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1007a79:	74 32                	je     c1007aad <sys_chdir+0x79>
c1007a7b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007a7e:	83 f8 02             	cmp    $0x2,%eax
c1007a81:	75 17                	jne    c1007a9a <sys_chdir+0x66>
c1007a83:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1007a88:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007a8b:	89 90 f4 00 00 00    	mov    %edx,0xf4(%eax)
c1007a91:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007a98:	eb 13                	jmp    c1007aad <sys_chdir+0x79>
c1007a9a:	83 ec 08             	sub    $0x8,%esp
c1007a9d:	ff 75 08             	pushl  0x8(%ebp)
c1007aa0:	68 e4 b4 00 c1       	push   $0xc100b4e4
c1007aa5:	e8 12 d5 ff ff       	call   c1004fbc <printk>
c1007aaa:	83 c4 10             	add    $0x10,%esp
c1007aad:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1007ab0:	83 ec 0c             	sub    $0xc,%esp
c1007ab3:	50                   	push   %eax
c1007ab4:	e8 c4 02 00 00       	call   c1007d7d <dir_close>
c1007ab9:	83 c4 10             	add    $0x10,%esp
c1007abc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007abf:	c9                   	leave  
c1007ac0:	c3                   	ret    

c1007ac1 <fs_init>:
c1007ac1:	55                   	push   %ebp
c1007ac2:	89 e5                	mov    %esp,%ebp
c1007ac4:	83 ec 08             	sub    $0x8,%esp
c1007ac7:	e8 c3 e4 ff ff       	call   c1005f8f <mount_partition>
c1007acc:	90                   	nop
c1007acd:	c9                   	leave  
c1007ace:	c3                   	ret    

c1007acf <open_root_dir>:
c1007acf:	55                   	push   %ebp
c1007ad0:	89 e5                	mov    %esp,%ebp
c1007ad2:	53                   	push   %ebx
c1007ad3:	83 ec 04             	sub    $0x4,%esp
c1007ad6:	83 ec 08             	sub    $0x8,%esp
c1007ad9:	6a 02                	push   $0x2
c1007adb:	68 08 02 00 00       	push   $0x208
c1007ae0:	e8 18 b0 ff ff       	call   c1002afd <vmm_malloc>
c1007ae5:	83 c4 10             	add    $0x10,%esp
c1007ae8:	a3 34 32 a1 c1       	mov    %eax,0xc1a13234
c1007aed:	8b 45 08             	mov    0x8(%ebp),%eax
c1007af0:	8b 40 10             	mov    0x10(%eax),%eax
c1007af3:	8b 40 2c             	mov    0x2c(%eax),%eax
c1007af6:	83 ec 08             	sub    $0x8,%esp
c1007af9:	50                   	push   %eax
c1007afa:	68 c0 b5 00 c1       	push   $0xc100b5c0
c1007aff:	e8 b8 d4 ff ff       	call   c1004fbc <printk>
c1007b04:	83 c4 10             	add    $0x10,%esp
c1007b07:	8b 45 08             	mov    0x8(%ebp),%eax
c1007b0a:	8b 40 10             	mov    0x10(%eax),%eax
c1007b0d:	8b 40 2c             	mov    0x2c(%eax),%eax
c1007b10:	8b 1d 34 32 a1 c1    	mov    0xc1a13234,%ebx
c1007b16:	83 ec 08             	sub    $0x8,%esp
c1007b19:	50                   	push   %eax
c1007b1a:	ff 75 08             	pushl  0x8(%ebp)
c1007b1d:	e8 ad 22 00 00       	call   c1009dcf <inode_open>
c1007b22:	83 c4 10             	add    $0x10,%esp
c1007b25:	89 03                	mov    %eax,(%ebx)
c1007b27:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1007b2c:	8b 00                	mov    (%eax),%eax
c1007b2e:	83 ec 08             	sub    $0x8,%esp
c1007b31:	50                   	push   %eax
c1007b32:	68 d4 b5 00 c1       	push   $0xc100b5d4
c1007b37:	e8 80 d4 ff ff       	call   c1004fbc <printk>
c1007b3c:	83 c4 10             	add    $0x10,%esp
c1007b3f:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1007b44:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1007b4b:	90                   	nop
c1007b4c:	8b 5d fc             	mov    -0x4(%ebp),%ebx
c1007b4f:	c9                   	leave  
c1007b50:	c3                   	ret    

c1007b51 <dir_open>:
c1007b51:	55                   	push   %ebp
c1007b52:	89 e5                	mov    %esp,%ebp
c1007b54:	83 ec 18             	sub    $0x18,%esp
c1007b57:	83 ec 08             	sub    $0x8,%esp
c1007b5a:	6a 02                	push   $0x2
c1007b5c:	68 08 02 00 00       	push   $0x208
c1007b61:	e8 97 af ff ff       	call   c1002afd <vmm_malloc>
c1007b66:	83 c4 10             	add    $0x10,%esp
c1007b69:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1007b6c:	83 ec 08             	sub    $0x8,%esp
c1007b6f:	ff 75 0c             	pushl  0xc(%ebp)
c1007b72:	ff 75 08             	pushl  0x8(%ebp)
c1007b75:	e8 55 22 00 00       	call   c1009dcf <inode_open>
c1007b7a:	83 c4 10             	add    $0x10,%esp
c1007b7d:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007b80:	89 02                	mov    %eax,(%edx)
c1007b82:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007b85:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c1007b8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007b8f:	c9                   	leave  
c1007b90:	c3                   	ret    

c1007b91 <search_dir_entry>:
c1007b91:	55                   	push   %ebp
c1007b92:	89 e5                	mov    %esp,%ebp
c1007b94:	83 ec 28             	sub    $0x28,%esp
c1007b97:	c7 45 e8 8c 00 00 00 	movl   $0x8c,-0x18(%ebp)
c1007b9e:	83 ec 08             	sub    $0x8,%esp
c1007ba1:	6a 02                	push   $0x2
c1007ba3:	68 30 02 00 00       	push   $0x230
c1007ba8:	e8 50 af ff ff       	call   c1002afd <vmm_malloc>
c1007bad:	83 c4 10             	add    $0x10,%esp
c1007bb0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007bb3:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c1007bb7:	75 1a                	jne    c1007bd3 <search_dir_entry+0x42>
c1007bb9:	83 ec 0c             	sub    $0xc,%esp
c1007bbc:	68 ec b5 00 c1       	push   $0xc100b5ec
c1007bc1:	e8 f6 d3 ff ff       	call   c1004fbc <printk>
c1007bc6:	83 c4 10             	add    $0x10,%esp
c1007bc9:	b8 00 00 00 00       	mov    $0x0,%eax
c1007bce:	e9 a8 01 00 00       	jmp    c1007d7b <search_dir_entry+0x1ea>
c1007bd3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007bda:	eb 23                	jmp    c1007bff <search_dir_entry+0x6e>
c1007bdc:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007bdf:	8b 00                	mov    (%eax),%eax
c1007be1:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1007be4:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1007beb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1007bee:	01 ca                	add    %ecx,%edx
c1007bf0:	8b 4d f4             	mov    -0xc(%ebp),%ecx
c1007bf3:	83 c1 04             	add    $0x4,%ecx
c1007bf6:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1007bf9:	89 02                	mov    %eax,(%edx)
c1007bfb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007bff:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c1007c03:	76 d7                	jbe    c1007bdc <search_dir_entry+0x4b>
c1007c05:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1007c0c:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007c0f:	8b 00                	mov    (%eax),%eax
c1007c11:	8b 40 40             	mov    0x40(%eax),%eax
c1007c14:	85 c0                	test   %eax,%eax
c1007c16:	74 1d                	je     c1007c35 <search_dir_entry+0xa4>
c1007c18:	8b 45 0c             	mov    0xc(%ebp),%eax
c1007c1b:	8b 00                	mov    (%eax),%eax
c1007c1d:	8b 40 40             	mov    0x40(%eax),%eax
c1007c20:	8b 55 e4             	mov    -0x1c(%ebp),%edx
c1007c23:	83 c2 30             	add    $0x30,%edx
c1007c26:	83 ec 04             	sub    $0x4,%esp
c1007c29:	6a 01                	push   $0x1
c1007c2b:	50                   	push   %eax
c1007c2c:	52                   	push   %edx
c1007c2d:	e8 32 dc ff ff       	call   c1005864 <ide_read>
c1007c32:	83 c4 10             	add    $0x10,%esp
c1007c35:	83 ec 08             	sub    $0x8,%esp
c1007c38:	6a 02                	push   $0x2
c1007c3a:	68 00 02 00 00       	push   $0x200
c1007c3f:	e8 b9 ae ff ff       	call   c1002afd <vmm_malloc>
c1007c44:	83 c4 10             	add    $0x10,%esp
c1007c47:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007c4a:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007c4d:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007c50:	8b 45 08             	mov    0x8(%ebp),%eax
c1007c53:	8b 40 10             	mov    0x10(%eax),%eax
c1007c56:	8b 40 30             	mov    0x30(%eax),%eax
c1007c59:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007c5c:	b8 00 02 00 00       	mov    $0x200,%eax
c1007c61:	ba 00 00 00 00       	mov    $0x0,%edx
c1007c66:	f7 75 dc             	divl   -0x24(%ebp)
c1007c69:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007c6c:	e9 d1 00 00 00       	jmp    c1007d42 <search_dir_entry+0x1b1>
c1007c71:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007c74:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1007c7b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007c7e:	01 d0                	add    %edx,%eax
c1007c80:	8b 00                	mov    (%eax),%eax
c1007c82:	85 c0                	test   %eax,%eax
c1007c84:	75 09                	jne    c1007c8f <search_dir_entry+0xfe>
c1007c86:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007c8a:	e9 b3 00 00 00       	jmp    c1007d42 <search_dir_entry+0x1b1>
c1007c8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007c92:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1007c99:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007c9c:	01 d0                	add    %edx,%eax
c1007c9e:	8b 00                	mov    (%eax),%eax
c1007ca0:	83 ec 04             	sub    $0x4,%esp
c1007ca3:	6a 01                	push   $0x1
c1007ca5:	50                   	push   %eax
c1007ca6:	ff 75 e0             	pushl  -0x20(%ebp)
c1007ca9:	e8 b6 db ff ff       	call   c1005864 <ide_read>
c1007cae:	83 c4 10             	add    $0x10,%esp
c1007cb1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1007cb8:	eb 61                	jmp    c1007d1b <search_dir_entry+0x18a>
c1007cba:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007cbd:	83 ec 08             	sub    $0x8,%esp
c1007cc0:	ff 75 10             	pushl  0x10(%ebp)
c1007cc3:	50                   	push   %eax
c1007cc4:	e8 ba 84 ff ff       	call   c1000183 <strcmp>
c1007cc9:	83 c4 10             	add    $0x10,%esp
c1007ccc:	85 c0                	test   %eax,%eax
c1007cce:	75 43                	jne    c1007d13 <search_dir_entry+0x182>
c1007cd0:	83 ec 04             	sub    $0x4,%esp
c1007cd3:	ff 75 dc             	pushl  -0x24(%ebp)
c1007cd6:	ff 75 f0             	pushl  -0x10(%ebp)
c1007cd9:	ff 75 14             	pushl  0x14(%ebp)
c1007cdc:	e8 27 84 ff ff       	call   c1000108 <memcpy>
c1007ce1:	83 c4 10             	add    $0x10,%esp
c1007ce4:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007ce7:	83 ec 08             	sub    $0x8,%esp
c1007cea:	68 00 02 00 00       	push   $0x200
c1007cef:	50                   	push   %eax
c1007cf0:	e8 2d af ff ff       	call   c1002c22 <vmm_free>
c1007cf5:	83 c4 10             	add    $0x10,%esp
c1007cf8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007cfb:	83 ec 08             	sub    $0x8,%esp
c1007cfe:	68 30 02 00 00       	push   $0x230
c1007d03:	50                   	push   %eax
c1007d04:	e8 19 af ff ff       	call   c1002c22 <vmm_free>
c1007d09:	83 c4 10             	add    $0x10,%esp
c1007d0c:	b8 01 00 00 00       	mov    $0x1,%eax
c1007d11:	eb 68                	jmp    c1007d7b <search_dir_entry+0x1ea>
c1007d13:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c1007d17:	83 45 f0 18          	addl   $0x18,-0x10(%ebp)
c1007d1b:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007d1e:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c1007d21:	72 97                	jb     c1007cba <search_dir_entry+0x129>
c1007d23:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1007d27:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007d2a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007d2d:	83 ec 04             	sub    $0x4,%esp
c1007d30:	68 00 02 00 00       	push   $0x200
c1007d35:	6a 00                	push   $0x0
c1007d37:	ff 75 e0             	pushl  -0x20(%ebp)
c1007d3a:	e8 6b 83 ff ff       	call   c10000aa <memset>
c1007d3f:	83 c4 10             	add    $0x10,%esp
c1007d42:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1007d45:	3b 45 e8             	cmp    -0x18(%ebp),%eax
c1007d48:	0f 82 23 ff ff ff    	jb     c1007c71 <search_dir_entry+0xe0>
c1007d4e:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1007d51:	83 ec 08             	sub    $0x8,%esp
c1007d54:	68 00 02 00 00       	push   $0x200
c1007d59:	50                   	push   %eax
c1007d5a:	e8 c3 ae ff ff       	call   c1002c22 <vmm_free>
c1007d5f:	83 c4 10             	add    $0x10,%esp
c1007d62:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1007d65:	83 ec 08             	sub    $0x8,%esp
c1007d68:	68 30 02 00 00       	push   $0x230
c1007d6d:	50                   	push   %eax
c1007d6e:	e8 af ae ff ff       	call   c1002c22 <vmm_free>
c1007d73:	83 c4 10             	add    $0x10,%esp
c1007d76:	b8 00 00 00 00       	mov    $0x0,%eax
c1007d7b:	c9                   	leave  
c1007d7c:	c3                   	ret    

c1007d7d <dir_close>:
c1007d7d:	55                   	push   %ebp
c1007d7e:	89 e5                	mov    %esp,%ebp
c1007d80:	83 ec 08             	sub    $0x8,%esp
c1007d83:	a1 34 32 a1 c1       	mov    0xc1a13234,%eax
c1007d88:	39 45 08             	cmp    %eax,0x8(%ebp)
c1007d8b:	74 27                	je     c1007db4 <dir_close+0x37>
c1007d8d:	8b 45 08             	mov    0x8(%ebp),%eax
c1007d90:	8b 00                	mov    (%eax),%eax
c1007d92:	83 ec 0c             	sub    $0xc,%esp
c1007d95:	50                   	push   %eax
c1007d96:	e8 0a 21 00 00       	call   c1009ea5 <inode_close>
c1007d9b:	83 c4 10             	add    $0x10,%esp
c1007d9e:	8b 45 08             	mov    0x8(%ebp),%eax
c1007da1:	83 ec 08             	sub    $0x8,%esp
c1007da4:	68 08 02 00 00       	push   $0x208
c1007da9:	50                   	push   %eax
c1007daa:	e8 73 ae ff ff       	call   c1002c22 <vmm_free>
c1007daf:	83 c4 10             	add    $0x10,%esp
c1007db2:	eb 01                	jmp    c1007db5 <dir_close+0x38>
c1007db4:	90                   	nop
c1007db5:	c9                   	leave  
c1007db6:	c3                   	ret    

c1007db7 <create_dir_entry>:
c1007db7:	55                   	push   %ebp
c1007db8:	89 e5                	mov    %esp,%ebp
c1007dba:	83 ec 18             	sub    $0x18,%esp
c1007dbd:	8b 45 10             	mov    0x10(%ebp),%eax
c1007dc0:	88 45 f4             	mov    %al,-0xc(%ebp)
c1007dc3:	83 ec 0c             	sub    $0xc,%esp
c1007dc6:	ff 75 08             	pushl  0x8(%ebp)
c1007dc9:	e8 50 83 ff ff       	call   c100011e <strlen>
c1007dce:	83 c4 10             	add    $0x10,%esp
c1007dd1:	83 f8 10             	cmp    $0x10,%eax
c1007dd4:	76 16                	jbe    c1007dec <create_dir_entry+0x35>
c1007dd6:	68 20 b6 00 c1       	push   $0xc100b620
c1007ddb:	68 d4 b7 00 c1       	push   $0xc100b7d4
c1007de0:	6a 72                	push   $0x72
c1007de2:	68 48 b6 00 c1       	push   $0xc100b648
c1007de7:	e8 7f 85 ff ff       	call   c100036b <__PANIC>
c1007dec:	83 ec 0c             	sub    $0xc,%esp
c1007def:	ff 75 08             	pushl  0x8(%ebp)
c1007df2:	e8 27 83 ff ff       	call   c100011e <strlen>
c1007df7:	83 c4 10             	add    $0x10,%esp
c1007dfa:	8b 55 14             	mov    0x14(%ebp),%edx
c1007dfd:	83 ec 04             	sub    $0x4,%esp
c1007e00:	50                   	push   %eax
c1007e01:	ff 75 08             	pushl  0x8(%ebp)
c1007e04:	52                   	push   %edx
c1007e05:	e8 fe 82 ff ff       	call   c1000108 <memcpy>
c1007e0a:	83 c4 10             	add    $0x10,%esp
c1007e0d:	8b 45 14             	mov    0x14(%ebp),%eax
c1007e10:	8b 55 0c             	mov    0xc(%ebp),%edx
c1007e13:	89 50 10             	mov    %edx,0x10(%eax)
c1007e16:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
c1007e1a:	8b 45 14             	mov    0x14(%ebp),%eax
c1007e1d:	89 50 14             	mov    %edx,0x14(%eax)
c1007e20:	90                   	nop
c1007e21:	c9                   	leave  
c1007e22:	c3                   	ret    

c1007e23 <sync_dir_entry>:
c1007e23:	55                   	push   %ebp
c1007e24:	89 e5                	mov    %esp,%ebp
c1007e26:	57                   	push   %edi
c1007e27:	53                   	push   %ebx
c1007e28:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1007e2e:	8b 45 08             	mov    0x8(%ebp),%eax
c1007e31:	8b 00                	mov    (%eax),%eax
c1007e33:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1007e36:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007e39:	8b 40 04             	mov    0x4(%eax),%eax
c1007e3c:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1007e3f:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007e44:	8b 40 10             	mov    0x10(%eax),%eax
c1007e47:	8b 40 30             	mov    0x30(%eax),%eax
c1007e4a:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1007e4d:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1007e50:	ba 00 00 00 00       	mov    $0x0,%edx
c1007e55:	f7 75 e8             	divl   -0x18(%ebp)
c1007e58:	89 d0                	mov    %edx,%eax
c1007e5a:	85 c0                	test   %eax,%eax
c1007e5c:	74 19                	je     c1007e77 <sync_dir_entry+0x54>
c1007e5e:	68 78 b6 00 c1       	push   $0xc100b678
c1007e63:	68 e8 b7 00 c1       	push   $0xc100b7e8
c1007e68:	68 80 00 00 00       	push   $0x80
c1007e6d:	68 48 b6 00 c1       	push   $0xc100b648
c1007e72:	e8 f4 84 ff ff       	call   c100036b <__PANIC>
c1007e77:	b8 00 02 00 00       	mov    $0x200,%eax
c1007e7c:	ba 00 00 00 00       	mov    $0x0,%edx
c1007e81:	f7 75 e8             	divl   -0x18(%ebp)
c1007e84:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1007e87:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1007e8e:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007e92:	8d 95 a0 fd ff ff    	lea    -0x260(%ebp),%edx
c1007e98:	b8 00 00 00 00       	mov    $0x0,%eax
c1007e9d:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1007ea2:	89 d7                	mov    %edx,%edi
c1007ea4:	f3 ab                	rep stos %eax,%es:(%edi)
c1007ea6:	eb 22                	jmp    c1007eca <sync_dir_entry+0xa7>
c1007ea8:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007eac:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007eb0:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1007eb3:	83 c1 04             	add    $0x4,%ecx
c1007eb6:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c1007eb9:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1007ec0:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007ec4:	83 c0 01             	add    $0x1,%eax
c1007ec7:	88 45 f7             	mov    %al,-0x9(%ebp)
c1007eca:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007ece:	76 d8                	jbe    c1007ea8 <sync_dir_entry+0x85>
c1007ed0:	8b 45 10             	mov    0x10(%ebp),%eax
c1007ed3:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1007ed6:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007edd:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1007ee1:	e9 52 03 00 00       	jmp    c1008238 <sync_dir_entry+0x415>
c1007ee6:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007eed:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007ef1:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1007ef8:	85 c0                	test   %eax,%eax
c1007efa:	0f 85 80 02 00 00    	jne    c1008180 <sync_dir_entry+0x35d>
c1007f00:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007f05:	83 ec 0c             	sub    $0xc,%esp
c1007f08:	50                   	push   %eax
c1007f09:	e8 25 0c 00 00       	call   c1008b33 <block_bitmap_alloc>
c1007f0e:	83 c4 10             	add    $0x10,%esp
c1007f11:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007f14:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c1007f18:	75 1a                	jne    c1007f34 <sync_dir_entry+0x111>
c1007f1a:	83 ec 0c             	sub    $0xc,%esp
c1007f1d:	68 98 b6 00 c1       	push   $0xc100b698
c1007f22:	e8 95 d0 ff ff       	call   c1004fbc <printk>
c1007f27:	83 c4 10             	add    $0x10,%esp
c1007f2a:	b8 00 00 00 00       	mov    $0x0,%eax
c1007f2f:	e9 23 03 00 00       	jmp    c1008257 <sync_dir_entry+0x434>
c1007f34:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007f37:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007f3c:	8b 40 10             	mov    0x10(%eax),%eax
c1007f3f:	8b 40 28             	mov    0x28(%eax),%eax
c1007f42:	29 c2                	sub    %eax,%edx
c1007f44:	89 d0                	mov    %edx,%eax
c1007f46:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1007f49:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1007f4d:	75 19                	jne    c1007f68 <sync_dir_entry+0x145>
c1007f4f:	68 c6 b6 00 c1       	push   $0xc100b6c6
c1007f54:	68 e8 b7 00 c1       	push   $0xc100b7e8
c1007f59:	68 a3 00 00 00       	push   $0xa3
c1007f5e:	68 48 b6 00 c1       	push   $0xc100b648
c1007f63:	e8 03 84 ff ff       	call   c100036b <__PANIC>
c1007f68:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1007f6b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007f70:	83 ec 04             	sub    $0x4,%esp
c1007f73:	6a 01                	push   $0x1
c1007f75:	52                   	push   %edx
c1007f76:	50                   	push   %eax
c1007f77:	e8 85 0c 00 00       	call   c1008c01 <bitmap_sync>
c1007f7c:	83 c4 10             	add    $0x10,%esp
c1007f7f:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c1007f86:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c1007f8a:	77 27                	ja     c1007fb3 <sync_dir_entry+0x190>
c1007f8c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1007f90:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007f93:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1007f9a:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c1007f9e:	8b 94 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%edx
c1007fa5:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007fa8:	83 c1 04             	add    $0x4,%ecx
c1007fab:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c1007fae:	e9 6d 01 00 00       	jmp    c1008120 <sync_dir_entry+0x2fd>
c1007fb3:	80 7d f7 0c          	cmpb   $0xc,-0x9(%ebp)
c1007fb7:	0f 85 37 01 00 00    	jne    c10080f4 <sync_dir_entry+0x2d1>
c1007fbd:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1007fc0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007fc3:	89 50 40             	mov    %edx,0x40(%eax)
c1007fc6:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
c1007fcd:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007fd2:	83 ec 0c             	sub    $0xc,%esp
c1007fd5:	50                   	push   %eax
c1007fd6:	e8 58 0b 00 00       	call   c1008b33 <block_bitmap_alloc>
c1007fdb:	83 c4 10             	add    $0x10,%esp
c1007fde:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1007fe1:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
c1007fe5:	0f 85 95 00 00 00    	jne    c1008080 <sync_dir_entry+0x25d>
c1007feb:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1007fee:	8b 50 40             	mov    0x40(%eax),%edx
c1007ff1:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1007ff6:	8b 40 10             	mov    0x10(%eax),%eax
c1007ff9:	8b 40 28             	mov    0x28(%eax),%eax
c1007ffc:	29 c2                	sub    %eax,%edx
c1007ffe:	89 d0                	mov    %edx,%eax
c1008000:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008003:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008006:	8d 50 07             	lea    0x7(%eax),%edx
c1008009:	85 c0                	test   %eax,%eax
c100800b:	0f 48 c2             	cmovs  %edx,%eax
c100800e:	c1 f8 03             	sar    $0x3,%eax
c1008011:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1008014:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008017:	99                   	cltd   
c1008018:	c1 ea 1d             	shr    $0x1d,%edx
c100801b:	01 d0                	add    %edx,%eax
c100801d:	83 e0 07             	and    $0x7,%eax
c1008020:	29 d0                	sub    %edx,%eax
c1008022:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1008025:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100802a:	8b 50 18             	mov    0x18(%eax),%edx
c100802d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008030:	01 d0                	add    %edx,%eax
c1008032:	0f b6 00             	movzbl (%eax),%eax
c1008035:	89 c2                	mov    %eax,%edx
c1008037:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100803a:	bb 01 00 00 00       	mov    $0x1,%ebx
c100803f:	89 c1                	mov    %eax,%ecx
c1008041:	d3 e3                	shl    %cl,%ebx
c1008043:	89 d8                	mov    %ebx,%eax
c1008045:	f7 d0                	not    %eax
c1008047:	89 d1                	mov    %edx,%ecx
c1008049:	21 c1                	and    %eax,%ecx
c100804b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008050:	8b 50 18             	mov    0x18(%eax),%edx
c1008053:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c1008056:	01 d0                	add    %edx,%eax
c1008058:	89 ca                	mov    %ecx,%edx
c100805a:	88 10                	mov    %dl,(%eax)
c100805c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100805f:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1008066:	83 ec 0c             	sub    $0xc,%esp
c1008069:	68 98 b6 00 c1       	push   $0xc100b698
c100806e:	e8 49 cf ff ff       	call   c1004fbc <printk>
c1008073:	83 c4 10             	add    $0x10,%esp
c1008076:	b8 00 00 00 00       	mov    $0x0,%eax
c100807b:	e9 d7 01 00 00       	jmp    c1008257 <sync_dir_entry+0x434>
c1008080:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1008083:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008088:	8b 40 10             	mov    0x10(%eax),%eax
c100808b:	8b 40 28             	mov    0x28(%eax),%eax
c100808e:	29 c2                	sub    %eax,%edx
c1008090:	89 d0                	mov    %edx,%eax
c1008092:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1008095:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1008099:	75 19                	jne    c10080b4 <sync_dir_entry+0x291>
c100809b:	68 c6 b6 00 c1       	push   $0xc100b6c6
c10080a0:	68 e8 b7 00 c1       	push   $0xc100b7e8
c10080a5:	68 ba 00 00 00       	push   $0xba
c10080aa:	68 48 b6 00 c1       	push   $0xc100b648
c10080af:	e8 b7 82 ff ff       	call   c100036b <__PANIC>
c10080b4:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10080b7:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10080bc:	83 ec 04             	sub    $0x4,%esp
c10080bf:	6a 01                	push   $0x1
c10080c1:	52                   	push   %edx
c10080c2:	50                   	push   %eax
c10080c3:	e8 39 0b 00 00       	call   c1008c01 <bitmap_sync>
c10080c8:	83 c4 10             	add    $0x10,%esp
c10080cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10080ce:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
c10080d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10080d7:	8b 50 40             	mov    0x40(%eax),%edx
c10080da:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c10080e0:	83 c0 30             	add    $0x30,%eax
c10080e3:	83 ec 04             	sub    $0x4,%esp
c10080e6:	6a 01                	push   $0x1
c10080e8:	52                   	push   %edx
c10080e9:	50                   	push   %eax
c10080ea:	e8 b2 d7 ff ff       	call   c10058a1 <ide_write>
c10080ef:	83 c4 10             	add    $0x10,%esp
c10080f2:	eb 2c                	jmp    c1008120 <sync_dir_entry+0x2fd>
c10080f4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10080f8:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10080fb:	89 94 85 a0 fd ff ff 	mov    %edx,-0x260(%ebp,%eax,4)
c1008102:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008105:	8b 50 40             	mov    0x40(%eax),%edx
c1008108:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
c100810e:	83 c0 30             	add    $0x30,%eax
c1008111:	83 ec 04             	sub    $0x4,%esp
c1008114:	6a 01                	push   $0x1
c1008116:	52                   	push   %edx
c1008117:	50                   	push   %eax
c1008118:	e8 84 d7 ff ff       	call   c10058a1 <ide_write>
c100811d:	83 c4 10             	add    $0x10,%esp
c1008120:	83 ec 04             	sub    $0x4,%esp
c1008123:	68 00 02 00 00       	push   $0x200
c1008128:	6a 00                	push   $0x0
c100812a:	ff 75 10             	pushl  0x10(%ebp)
c100812d:	e8 78 7f ff ff       	call   c10000aa <memset>
c1008132:	83 c4 10             	add    $0x10,%esp
c1008135:	83 ec 04             	sub    $0x4,%esp
c1008138:	ff 75 e8             	pushl  -0x18(%ebp)
c100813b:	ff 75 0c             	pushl  0xc(%ebp)
c100813e:	ff 75 10             	pushl  0x10(%ebp)
c1008141:	e8 c2 7f ff ff       	call   c1000108 <memcpy>
c1008146:	83 c4 10             	add    $0x10,%esp
c1008149:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100814d:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c1008154:	83 ec 04             	sub    $0x4,%esp
c1008157:	6a 01                	push   $0x1
c1008159:	50                   	push   %eax
c100815a:	ff 75 10             	pushl  0x10(%ebp)
c100815d:	e8 3f d7 ff ff       	call   c10058a1 <ide_write>
c1008162:	83 c4 10             	add    $0x10,%esp
c1008165:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008168:	8b 50 04             	mov    0x4(%eax),%edx
c100816b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100816e:	01 c2                	add    %eax,%edx
c1008170:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008173:	89 50 04             	mov    %edx,0x4(%eax)
c1008176:	b8 01 00 00 00       	mov    $0x1,%eax
c100817b:	e9 d7 00 00 00       	jmp    c1008257 <sync_dir_entry+0x434>
c1008180:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008184:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c100818b:	83 ec 04             	sub    $0x4,%esp
c100818e:	6a 01                	push   $0x1
c1008190:	50                   	push   %eax
c1008191:	ff 75 10             	pushl  0x10(%ebp)
c1008194:	e8 cb d6 ff ff       	call   c1005864 <ide_read>
c1008199:	83 c4 10             	add    $0x10,%esp
c100819c:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
c10081a0:	eb 7f                	jmp    c1008221 <sync_dir_entry+0x3fe>
c10081a2:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c10081a6:	89 d0                	mov    %edx,%eax
c10081a8:	01 c0                	add    %eax,%eax
c10081aa:	01 d0                	add    %edx,%eax
c10081ac:	c1 e0 03             	shl    $0x3,%eax
c10081af:	89 c2                	mov    %eax,%edx
c10081b1:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10081b4:	01 d0                	add    %edx,%eax
c10081b6:	8b 40 14             	mov    0x14(%eax),%eax
c10081b9:	85 c0                	test   %eax,%eax
c10081bb:	75 5a                	jne    c1008217 <sync_dir_entry+0x3f4>
c10081bd:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
c10081c1:	89 d0                	mov    %edx,%eax
c10081c3:	01 c0                	add    %eax,%eax
c10081c5:	01 d0                	add    %edx,%eax
c10081c7:	c1 e0 03             	shl    $0x3,%eax
c10081ca:	89 c2                	mov    %eax,%edx
c10081cc:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10081cf:	01 d0                	add    %edx,%eax
c10081d1:	83 ec 04             	sub    $0x4,%esp
c10081d4:	ff 75 e8             	pushl  -0x18(%ebp)
c10081d7:	ff 75 0c             	pushl  0xc(%ebp)
c10081da:	50                   	push   %eax
c10081db:	e8 28 7f ff ff       	call   c1000108 <memcpy>
c10081e0:	83 c4 10             	add    $0x10,%esp
c10081e3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c10081e7:	8b 84 85 a0 fd ff ff 	mov    -0x260(%ebp,%eax,4),%eax
c10081ee:	83 ec 04             	sub    $0x4,%esp
c10081f1:	6a 01                	push   $0x1
c10081f3:	50                   	push   %eax
c10081f4:	ff 75 10             	pushl  0x10(%ebp)
c10081f7:	e8 a5 d6 ff ff       	call   c10058a1 <ide_write>
c10081fc:	83 c4 10             	add    $0x10,%esp
c10081ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008202:	8b 50 04             	mov    0x4(%eax),%edx
c1008205:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008208:	01 c2                	add    %eax,%edx
c100820a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100820d:	89 50 04             	mov    %edx,0x4(%eax)
c1008210:	b8 01 00 00 00       	mov    $0x1,%eax
c1008215:	eb 40                	jmp    c1008257 <sync_dir_entry+0x434>
c1008217:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c100821b:	83 c0 01             	add    $0x1,%eax
c100821e:	88 45 f6             	mov    %al,-0xa(%ebp)
c1008221:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
c1008225:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
c1008228:	0f 87 74 ff ff ff    	ja     c10081a2 <sync_dir_entry+0x37f>
c100822e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008232:	83 c0 01             	add    $0x1,%eax
c1008235:	88 45 f7             	mov    %al,-0x9(%ebp)
c1008238:	80 7d f7 8b          	cmpb   $0x8b,-0x9(%ebp)
c100823c:	0f 86 a4 fc ff ff    	jbe    c1007ee6 <sync_dir_entry+0xc3>
c1008242:	83 ec 0c             	sub    $0xc,%esp
c1008245:	68 dd b6 00 c1       	push   $0xc100b6dd
c100824a:	e8 6d cd ff ff       	call   c1004fbc <printk>
c100824f:	83 c4 10             	add    $0x10,%esp
c1008252:	b8 00 00 00 00       	mov    $0x0,%eax
c1008257:	8d 65 f8             	lea    -0x8(%ebp),%esp
c100825a:	5b                   	pop    %ebx
c100825b:	5f                   	pop    %edi
c100825c:	5d                   	pop    %ebp
c100825d:	c3                   	ret    

c100825e <delete_dir_entry>:
c100825e:	55                   	push   %ebp
c100825f:	89 e5                	mov    %esp,%ebp
c1008261:	57                   	push   %edi
c1008262:	53                   	push   %ebx
c1008263:	81 ec 60 02 00 00    	sub    $0x260,%esp
c1008269:	8b 45 0c             	mov    0xc(%ebp),%eax
c100826c:	8b 00                	mov    (%eax),%eax
c100826e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008271:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008278:	8d 95 98 fd ff ff    	lea    -0x268(%ebp),%edx
c100827e:	b8 00 00 00 00       	mov    $0x0,%eax
c1008283:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c1008288:	89 d7                	mov    %edx,%edi
c100828a:	f3 ab                	rep stos %eax,%es:(%edi)
c100828c:	eb 1a                	jmp    c10082a8 <delete_dir_entry+0x4a>
c100828e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008291:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008294:	83 c2 04             	add    $0x4,%edx
c1008297:	8b 14 90             	mov    (%eax,%edx,4),%edx
c100829a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100829d:	89 94 85 98 fd ff ff 	mov    %edx,-0x268(%ebp,%eax,4)
c10082a4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c10082a8:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c10082ac:	76 e0                	jbe    c100828e <delete_dir_entry+0x30>
c10082ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10082b1:	8b 40 40             	mov    0x40(%eax),%eax
c10082b4:	85 c0                	test   %eax,%eax
c10082b6:	74 1e                	je     c10082d6 <delete_dir_entry+0x78>
c10082b8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10082bb:	8b 50 40             	mov    0x40(%eax),%edx
c10082be:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c10082c4:	83 c0 30             	add    $0x30,%eax
c10082c7:	83 ec 04             	sub    $0x4,%esp
c10082ca:	6a 01                	push   $0x1
c10082cc:	52                   	push   %edx
c10082cd:	50                   	push   %eax
c10082ce:	e8 91 d5 ff ff       	call   c1005864 <ide_read>
c10082d3:	83 c4 10             	add    $0x10,%esp
c10082d6:	8b 45 08             	mov    0x8(%ebp),%eax
c10082d9:	8b 40 10             	mov    0x10(%eax),%eax
c10082dc:	8b 40 30             	mov    0x30(%eax),%eax
c10082df:	89 45 e0             	mov    %eax,-0x20(%ebp)
c10082e2:	b8 00 02 00 00       	mov    $0x200,%eax
c10082e7:	ba 00 00 00 00       	mov    $0x0,%edx
c10082ec:	f7 75 e0             	divl   -0x20(%ebp)
c10082ef:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10082f2:	8b 45 14             	mov    0x14(%ebp),%eax
c10082f5:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10082f8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10082ff:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1008303:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c100830a:	e9 d8 03 00 00       	jmp    c10086e7 <delete_dir_entry+0x489>
c100830f:	c6 45 ed 00          	movb   $0x0,-0x13(%ebp)
c1008313:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008316:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c100831d:	85 c0                	test   %eax,%eax
c100831f:	75 09                	jne    c100832a <delete_dir_entry+0xcc>
c1008321:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008325:	e9 bd 03 00 00       	jmp    c10086e7 <delete_dir_entry+0x489>
c100832a:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
c100832e:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1008332:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008335:	83 ec 04             	sub    $0x4,%esp
c1008338:	68 00 02 00 00       	push   $0x200
c100833d:	6a 00                	push   $0x0
c100833f:	ff 75 14             	pushl  0x14(%ebp)
c1008342:	e8 63 7d ff ff       	call   c10000aa <memset>
c1008347:	83 c4 10             	add    $0x10,%esp
c100834a:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100834d:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008354:	83 ec 04             	sub    $0x4,%esp
c1008357:	6a 01                	push   $0x1
c1008359:	50                   	push   %eax
c100835a:	ff 75 14             	pushl  0x14(%ebp)
c100835d:	e8 02 d5 ff ff       	call   c1005864 <ide_read>
c1008362:	83 c4 10             	add    $0x10,%esp
c1008365:	e9 0d 01 00 00       	jmp    c1008477 <delete_dir_entry+0x219>
c100836a:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c100836e:	89 d0                	mov    %edx,%eax
c1008370:	01 c0                	add    %eax,%eax
c1008372:	01 d0                	add    %edx,%eax
c1008374:	c1 e0 03             	shl    $0x3,%eax
c1008377:	89 c2                	mov    %eax,%edx
c1008379:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100837c:	01 d0                	add    %edx,%eax
c100837e:	8b 40 14             	mov    0x14(%eax),%eax
c1008381:	85 c0                	test   %eax,%eax
c1008383:	0f 84 e4 00 00 00    	je     c100846d <delete_dir_entry+0x20f>
c1008389:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c100838d:	89 d0                	mov    %edx,%eax
c100838f:	01 c0                	add    %eax,%eax
c1008391:	01 d0                	add    %edx,%eax
c1008393:	c1 e0 03             	shl    $0x3,%eax
c1008396:	89 c2                	mov    %eax,%edx
c1008398:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100839b:	01 d0                	add    %edx,%eax
c100839d:	83 ec 08             	sub    $0x8,%esp
c10083a0:	68 f1 b6 00 c1       	push   $0xc100b6f1
c10083a5:	50                   	push   %eax
c10083a6:	e8 d8 7d ff ff       	call   c1000183 <strcmp>
c10083ab:	83 c4 10             	add    $0x10,%esp
c10083ae:	85 c0                	test   %eax,%eax
c10083b0:	75 09                	jne    c10083bb <delete_dir_entry+0x15d>
c10083b2:	c6 45 ed 01          	movb   $0x1,-0x13(%ebp)
c10083b6:	e9 b2 00 00 00       	jmp    c100846d <delete_dir_entry+0x20f>
c10083bb:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c10083bf:	89 d0                	mov    %edx,%eax
c10083c1:	01 c0                	add    %eax,%eax
c10083c3:	01 d0                	add    %edx,%eax
c10083c5:	c1 e0 03             	shl    $0x3,%eax
c10083c8:	89 c2                	mov    %eax,%edx
c10083ca:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10083cd:	01 d0                	add    %edx,%eax
c10083cf:	83 ec 08             	sub    $0x8,%esp
c10083d2:	68 f1 b6 00 c1       	push   $0xc100b6f1
c10083d7:	50                   	push   %eax
c10083d8:	e8 a6 7d ff ff       	call   c1000183 <strcmp>
c10083dd:	83 c4 10             	add    $0x10,%esp
c10083e0:	85 c0                	test   %eax,%eax
c10083e2:	0f 84 85 00 00 00    	je     c100846d <delete_dir_entry+0x20f>
c10083e8:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c10083ec:	89 d0                	mov    %edx,%eax
c10083ee:	01 c0                	add    %eax,%eax
c10083f0:	01 d0                	add    %edx,%eax
c10083f2:	c1 e0 03             	shl    $0x3,%eax
c10083f5:	89 c2                	mov    %eax,%edx
c10083f7:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10083fa:	01 d0                	add    %edx,%eax
c10083fc:	83 ec 08             	sub    $0x8,%esp
c10083ff:	68 f3 b6 00 c1       	push   $0xc100b6f3
c1008404:	50                   	push   %eax
c1008405:	e8 79 7d ff ff       	call   c1000183 <strcmp>
c100840a:	83 c4 10             	add    $0x10,%esp
c100840d:	85 c0                	test   %eax,%eax
c100840f:	74 5c                	je     c100846d <delete_dir_entry+0x20f>
c1008411:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
c1008415:	83 c0 01             	add    $0x1,%eax
c1008418:	88 45 ee             	mov    %al,-0x12(%ebp)
c100841b:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c100841f:	89 d0                	mov    %edx,%eax
c1008421:	01 c0                	add    %eax,%eax
c1008423:	01 d0                	add    %edx,%eax
c1008425:	c1 e0 03             	shl    $0x3,%eax
c1008428:	89 c2                	mov    %eax,%edx
c100842a:	8b 45 d8             	mov    -0x28(%ebp),%eax
c100842d:	01 d0                	add    %edx,%eax
c100842f:	8b 40 10             	mov    0x10(%eax),%eax
c1008432:	39 45 10             	cmp    %eax,0x10(%ebp)
c1008435:	75 36                	jne    c100846d <delete_dir_entry+0x20f>
c1008437:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c100843b:	74 19                	je     c1008456 <delete_dir_entry+0x1f8>
c100843d:	68 f6 b6 00 c1       	push   $0xc100b6f6
c1008442:	68 f8 b7 00 c1       	push   $0xc100b7f8
c1008447:	68 10 01 00 00       	push   $0x110
c100844c:	68 48 b6 00 c1       	push   $0xc100b648
c1008451:	e8 15 7f ff ff       	call   c100036b <__PANIC>
c1008456:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
c100845a:	89 d0                	mov    %edx,%eax
c100845c:	01 c0                	add    %eax,%eax
c100845e:	01 d0                	add    %edx,%eax
c1008460:	c1 e0 03             	shl    $0x3,%eax
c1008463:	89 c2                	mov    %eax,%edx
c1008465:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1008468:	01 d0                	add    %edx,%eax
c100846a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100846d:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c1008471:	83 c0 01             	add    $0x1,%eax
c1008474:	88 45 ef             	mov    %al,-0x11(%ebp)
c1008477:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
c100847b:	39 45 dc             	cmp    %eax,-0x24(%ebp)
c100847e:	0f 87 e6 fe ff ff    	ja     c100836a <delete_dir_entry+0x10c>
c1008484:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c1008488:	75 09                	jne    c1008493 <delete_dir_entry+0x235>
c100848a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c100848e:	e9 54 02 00 00       	jmp    c10086e7 <delete_dir_entry+0x489>
c1008493:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
c1008497:	75 19                	jne    c10084b2 <delete_dir_entry+0x254>
c1008499:	68 0e b7 00 c1       	push   $0xc100b70e
c100849e:	68 f8 b7 00 c1       	push   $0xc100b7f8
c10084a3:	68 20 01 00 00       	push   $0x120
c10084a8:	68 48 b6 00 c1       	push   $0xc100b648
c10084ad:	e8 b9 7e ff ff       	call   c100036b <__PANIC>
c10084b2:	80 7d ee 01          	cmpb   $0x1,-0x12(%ebp)
c10084b6:	0f 85 98 01 00 00    	jne    c1008654 <delete_dir_entry+0x3f6>
c10084bc:	80 7d ed 00          	cmpb   $0x0,-0x13(%ebp)
c10084c0:	0f 85 8e 01 00 00    	jne    c1008654 <delete_dir_entry+0x3f6>
c10084c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10084c9:	8b 94 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%edx
c10084d0:	8b 45 08             	mov    0x8(%ebp),%eax
c10084d3:	8b 40 10             	mov    0x10(%eax),%eax
c10084d6:	8b 40 28             	mov    0x28(%eax),%eax
c10084d9:	29 c2                	sub    %eax,%edx
c10084db:	89 d0                	mov    %edx,%eax
c10084dd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10084e0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10084e3:	c1 e8 03             	shr    $0x3,%eax
c10084e6:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10084e9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10084ec:	83 e0 07             	and    $0x7,%eax
c10084ef:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10084f2:	8b 45 08             	mov    0x8(%ebp),%eax
c10084f5:	8b 50 18             	mov    0x18(%eax),%edx
c10084f8:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10084fb:	01 d0                	add    %edx,%eax
c10084fd:	0f b6 00             	movzbl (%eax),%eax
c1008500:	89 c2                	mov    %eax,%edx
c1008502:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008505:	bb 01 00 00 00       	mov    $0x1,%ebx
c100850a:	89 c1                	mov    %eax,%ecx
c100850c:	d3 e3                	shl    %cl,%ebx
c100850e:	89 d8                	mov    %ebx,%eax
c1008510:	f7 d0                	not    %eax
c1008512:	89 d1                	mov    %edx,%ecx
c1008514:	21 c1                	and    %eax,%ecx
c1008516:	8b 45 08             	mov    0x8(%ebp),%eax
c1008519:	8b 50 18             	mov    0x18(%eax),%edx
c100851c:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100851f:	01 d0                	add    %edx,%eax
c1008521:	89 ca                	mov    %ecx,%edx
c1008523:	88 10                	mov    %dl,(%eax)
c1008525:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100852a:	83 ec 04             	sub    $0x4,%esp
c100852d:	6a 01                	push   $0x1
c100852f:	ff 75 d4             	pushl  -0x2c(%ebp)
c1008532:	50                   	push   %eax
c1008533:	e8 c9 06 00 00       	call   c1008c01 <bitmap_sync>
c1008538:	83 c4 10             	add    $0x10,%esp
c100853b:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
c100853f:	77 15                	ja     c1008556 <delete_dir_entry+0x2f8>
c1008541:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008544:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008547:	83 c2 04             	add    $0x4,%edx
c100854a:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c1008551:	e9 2c 01 00 00       	jmp    c1008682 <delete_dir_entry+0x424>
c1008556:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c100855d:	c7 45 c8 0c 00 00 00 	movl   $0xc,-0x38(%ebp)
c1008564:	eb 12                	jmp    c1008578 <delete_dir_entry+0x31a>
c1008566:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1008569:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008570:	85 c0                	test   %eax,%eax
c1008572:	74 04                	je     c1008578 <delete_dir_entry+0x31a>
c1008574:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1008578:	81 7d c8 8b 00 00 00 	cmpl   $0x8b,-0x38(%ebp)
c100857f:	76 e5                	jbe    c1008566 <delete_dir_entry+0x308>
c1008581:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
c1008585:	75 19                	jne    c10085a0 <delete_dir_entry+0x342>
c1008587:	68 21 b7 00 c1       	push   $0xc100b721
c100858c:	68 f8 b7 00 c1       	push   $0xc100b7f8
c1008591:	68 36 01 00 00       	push   $0x136
c1008596:	68 48 b6 00 c1       	push   $0xc100b648
c100859b:	e8 cb 7d ff ff       	call   c100036b <__PANIC>
c10085a0:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
c10085a4:	76 31                	jbe    c10085d7 <delete_dir_entry+0x379>
c10085a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
c10085a9:	c7 84 85 98 fd ff ff 	movl   $0x0,-0x268(%ebp,%eax,4)
c10085b0:	00 00 00 00 
c10085b4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10085b7:	8b 50 40             	mov    0x40(%eax),%edx
c10085ba:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
c10085c0:	83 c0 30             	add    $0x30,%eax
c10085c3:	83 ec 04             	sub    $0x4,%esp
c10085c6:	6a 01                	push   $0x1
c10085c8:	52                   	push   %edx
c10085c9:	50                   	push   %eax
c10085ca:	e8 d2 d2 ff ff       	call   c10058a1 <ide_write>
c10085cf:	83 c4 10             	add    $0x10,%esp
c10085d2:	e9 ab 00 00 00       	jmp    c1008682 <delete_dir_entry+0x424>
c10085d7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10085da:	8b 50 40             	mov    0x40(%eax),%edx
c10085dd:	8b 45 08             	mov    0x8(%ebp),%eax
c10085e0:	8b 40 10             	mov    0x10(%eax),%eax
c10085e3:	8b 40 28             	mov    0x28(%eax),%eax
c10085e6:	29 c2                	sub    %eax,%edx
c10085e8:	89 d0                	mov    %edx,%eax
c10085ea:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10085ed:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10085f0:	c1 e8 03             	shr    $0x3,%eax
c10085f3:	89 45 d0             	mov    %eax,-0x30(%ebp)
c10085f6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10085f9:	83 e0 07             	and    $0x7,%eax
c10085fc:	89 45 cc             	mov    %eax,-0x34(%ebp)
c10085ff:	8b 45 08             	mov    0x8(%ebp),%eax
c1008602:	8b 50 18             	mov    0x18(%eax),%edx
c1008605:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1008608:	01 d0                	add    %edx,%eax
c100860a:	0f b6 00             	movzbl (%eax),%eax
c100860d:	89 c2                	mov    %eax,%edx
c100860f:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1008612:	bb 01 00 00 00       	mov    $0x1,%ebx
c1008617:	89 c1                	mov    %eax,%ecx
c1008619:	d3 e3                	shl    %cl,%ebx
c100861b:	89 d8                	mov    %ebx,%eax
c100861d:	f7 d0                	not    %eax
c100861f:	89 d1                	mov    %edx,%ecx
c1008621:	21 c1                	and    %eax,%ecx
c1008623:	8b 45 08             	mov    0x8(%ebp),%eax
c1008626:	8b 50 18             	mov    0x18(%eax),%edx
c1008629:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100862c:	01 d0                	add    %edx,%eax
c100862e:	89 ca                	mov    %ecx,%edx
c1008630:	88 10                	mov    %dl,(%eax)
c1008632:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008637:	83 ec 04             	sub    $0x4,%esp
c100863a:	6a 01                	push   $0x1
c100863c:	ff 75 d4             	pushl  -0x2c(%ebp)
c100863f:	50                   	push   %eax
c1008640:	e8 bc 05 00 00       	call   c1008c01 <bitmap_sync>
c1008645:	83 c4 10             	add    $0x10,%esp
c1008648:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100864b:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
c1008652:	eb 2e                	jmp    c1008682 <delete_dir_entry+0x424>
c1008654:	83 ec 04             	sub    $0x4,%esp
c1008657:	ff 75 e0             	pushl  -0x20(%ebp)
c100865a:	6a 00                	push   $0x0
c100865c:	ff 75 f0             	pushl  -0x10(%ebp)
c100865f:	e8 46 7a ff ff       	call   c10000aa <memset>
c1008664:	83 c4 10             	add    $0x10,%esp
c1008667:	8b 45 f4             	mov    -0xc(%ebp),%eax
c100866a:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
c1008671:	83 ec 04             	sub    $0x4,%esp
c1008674:	6a 01                	push   $0x1
c1008676:	50                   	push   %eax
c1008677:	ff 75 14             	pushl  0x14(%ebp)
c100867a:	e8 22 d2 ff ff       	call   c10058a1 <ide_write>
c100867f:	83 c4 10             	add    $0x10,%esp
c1008682:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008685:	8b 40 04             	mov    0x4(%eax),%eax
c1008688:	39 45 e0             	cmp    %eax,-0x20(%ebp)
c100868b:	76 19                	jbe    c10086a6 <delete_dir_entry+0x448>
c100868d:	68 38 b7 00 c1       	push   $0xc100b738
c1008692:	68 f8 b7 00 c1       	push   $0xc100b7f8
c1008697:	68 4d 01 00 00       	push   $0x14d
c100869c:	68 48 b6 00 c1       	push   $0xc100b648
c10086a1:	e8 c5 7c ff ff       	call   c100036b <__PANIC>
c10086a6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10086a9:	8b 40 04             	mov    0x4(%eax),%eax
c10086ac:	2b 45 e0             	sub    -0x20(%ebp),%eax
c10086af:	89 c2                	mov    %eax,%edx
c10086b1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10086b4:	89 50 04             	mov    %edx,0x4(%eax)
c10086b7:	83 ec 04             	sub    $0x4,%esp
c10086ba:	68 00 04 00 00       	push   $0x400
c10086bf:	6a 00                	push   $0x0
c10086c1:	ff 75 14             	pushl  0x14(%ebp)
c10086c4:	e8 e1 79 ff ff       	call   c10000aa <memset>
c10086c9:	83 c4 10             	add    $0x10,%esp
c10086cc:	83 ec 04             	sub    $0x4,%esp
c10086cf:	ff 75 14             	pushl  0x14(%ebp)
c10086d2:	ff 75 e4             	pushl  -0x1c(%ebp)
c10086d5:	ff 75 08             	pushl  0x8(%ebp)
c10086d8:	e8 d1 15 00 00       	call   c1009cae <inode_sync>
c10086dd:	83 c4 10             	add    $0x10,%esp
c10086e0:	b8 01 00 00 00       	mov    $0x1,%eax
c10086e5:	eb 12                	jmp    c10086f9 <delete_dir_entry+0x49b>
c10086e7:	81 7d f4 8b 00 00 00 	cmpl   $0x8b,-0xc(%ebp)
c10086ee:	0f 86 1b fc ff ff    	jbe    c100830f <delete_dir_entry+0xb1>
c10086f4:	b8 00 00 00 00       	mov    $0x0,%eax
c10086f9:	8d 65 f8             	lea    -0x8(%ebp),%esp
c10086fc:	5b                   	pop    %ebx
c10086fd:	5f                   	pop    %edi
c10086fe:	5d                   	pop    %ebp
c10086ff:	c3                   	ret    

c1008700 <dir_read>:
c1008700:	55                   	push   %ebp
c1008701:	89 e5                	mov    %esp,%ebp
c1008703:	57                   	push   %edi
c1008704:	81 ec 54 02 00 00    	sub    $0x254,%esp
c100870a:	8b 45 08             	mov    0x8(%ebp),%eax
c100870d:	83 c0 08             	add    $0x8,%eax
c1008710:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008713:	8b 45 08             	mov    0x8(%ebp),%eax
c1008716:	8b 00                	mov    (%eax),%eax
c1008718:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100871b:	8d 95 a8 fd ff ff    	lea    -0x258(%ebp),%edx
c1008721:	b8 00 00 00 00       	mov    $0x0,%eax
c1008726:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100872b:	89 d7                	mov    %edx,%edi
c100872d:	f3 ab                	rep stos %eax,%es:(%edi)
c100872f:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
c1008736:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100873d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c1008744:	eb 1a                	jmp    c1008760 <dir_read+0x60>
c1008746:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008749:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100874c:	83 c2 04             	add    $0x4,%edx
c100874f:	8b 14 90             	mov    (%eax,%edx,4),%edx
c1008752:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008755:	89 94 85 a8 fd ff ff 	mov    %edx,-0x258(%ebp,%eax,4)
c100875c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c1008760:	83 7d f0 0b          	cmpl   $0xb,-0x10(%ebp)
c1008764:	76 e0                	jbe    c1008746 <dir_read+0x46>
c1008766:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008769:	8b 40 40             	mov    0x40(%eax),%eax
c100876c:	85 c0                	test   %eax,%eax
c100876e:	74 25                	je     c1008795 <dir_read+0x95>
c1008770:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008773:	8b 50 40             	mov    0x40(%eax),%edx
c1008776:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
c100877c:	83 c0 30             	add    $0x30,%eax
c100877f:	83 ec 04             	sub    $0x4,%esp
c1008782:	6a 01                	push   $0x1
c1008784:	52                   	push   %edx
c1008785:	50                   	push   %eax
c1008786:	e8 d9 d0 ff ff       	call   c1005864 <ide_read>
c100878b:	83 c4 10             	add    $0x10,%esp
c100878e:	c7 45 f4 8c 00 00 00 	movl   $0x8c,-0xc(%ebp)
c1008795:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c100879c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
c10087a3:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10087a8:	8b 40 10             	mov    0x10(%eax),%eax
c10087ab:	8b 40 30             	mov    0x30(%eax),%eax
c10087ae:	89 45 dc             	mov    %eax,-0x24(%ebp)
c10087b1:	b8 00 02 00 00       	mov    $0x200,%eax
c10087b6:	ba 00 00 00 00       	mov    $0x0,%edx
c10087bb:	f7 75 dc             	divl   -0x24(%ebp)
c10087be:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10087c1:	e9 f9 00 00 00       	jmp    c10088bf <dir_read+0x1bf>
c10087c6:	8b 45 08             	mov    0x8(%ebp),%eax
c10087c9:	8b 50 04             	mov    0x4(%eax),%edx
c10087cc:	8b 45 e0             	mov    -0x20(%ebp),%eax
c10087cf:	8b 40 04             	mov    0x4(%eax),%eax
c10087d2:	39 c2                	cmp    %eax,%edx
c10087d4:	72 0a                	jb     c10087e0 <dir_read+0xe0>
c10087d6:	b8 00 00 00 00       	mov    $0x0,%eax
c10087db:	e9 f0 00 00 00       	jmp    c10088d0 <dir_read+0x1d0>
c10087e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10087e3:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c10087ea:	85 c0                	test   %eax,%eax
c10087ec:	75 09                	jne    c10087f7 <dir_read+0xf7>
c10087ee:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10087f2:	e9 c8 00 00 00       	jmp    c10088bf <dir_read+0x1bf>
c10087f7:	83 ec 04             	sub    $0x4,%esp
c10087fa:	68 00 02 00 00       	push   $0x200
c10087ff:	6a 00                	push   $0x0
c1008801:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008804:	e8 a1 78 ff ff       	call   c10000aa <memset>
c1008809:	83 c4 10             	add    $0x10,%esp
c100880c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100880f:	8b 84 85 a8 fd ff ff 	mov    -0x258(%ebp,%eax,4),%eax
c1008816:	83 ec 04             	sub    $0x4,%esp
c1008819:	6a 01                	push   $0x1
c100881b:	50                   	push   %eax
c100881c:	ff 75 e4             	pushl  -0x1c(%ebp)
c100881f:	e8 40 d0 ff ff       	call   c1005864 <ide_read>
c1008824:	83 c4 10             	add    $0x10,%esp
c1008827:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100882e:	eb 7f                	jmp    c10088af <dir_read+0x1af>
c1008830:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1008833:	89 d0                	mov    %edx,%eax
c1008835:	01 c0                	add    %eax,%eax
c1008837:	01 d0                	add    %edx,%eax
c1008839:	c1 e0 03             	shl    $0x3,%eax
c100883c:	89 c2                	mov    %eax,%edx
c100883e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008841:	01 d0                	add    %edx,%eax
c1008843:	8b 40 14             	mov    0x14(%eax),%eax
c1008846:	85 c0                	test   %eax,%eax
c1008848:	74 61                	je     c10088ab <dir_read+0x1ab>
c100884a:	8b 45 08             	mov    0x8(%ebp),%eax
c100884d:	8b 40 04             	mov    0x4(%eax),%eax
c1008850:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c1008853:	73 0c                	jae    c1008861 <dir_read+0x161>
c1008855:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1008858:	01 45 e8             	add    %eax,-0x18(%ebp)
c100885b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c100885f:	eb 4e                	jmp    c10088af <dir_read+0x1af>
c1008861:	8b 45 08             	mov    0x8(%ebp),%eax
c1008864:	8b 40 04             	mov    0x4(%eax),%eax
c1008867:	39 45 e8             	cmp    %eax,-0x18(%ebp)
c100886a:	74 19                	je     c1008885 <dir_read+0x185>
c100886c:	68 5c b7 00 c1       	push   $0xc100b75c
c1008871:	68 0c b8 00 c1       	push   $0xc100b80c
c1008876:	68 7f 01 00 00       	push   $0x17f
c100887b:	68 48 b6 00 c1       	push   $0xc100b648
c1008880:	e8 e6 7a ff ff       	call   c100036b <__PANIC>
c1008885:	8b 45 08             	mov    0x8(%ebp),%eax
c1008888:	8b 50 04             	mov    0x4(%eax),%edx
c100888b:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100888e:	01 c2                	add    %eax,%edx
c1008890:	8b 45 08             	mov    0x8(%ebp),%eax
c1008893:	89 50 04             	mov    %edx,0x4(%eax)
c1008896:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1008899:	89 d0                	mov    %edx,%eax
c100889b:	01 c0                	add    %eax,%eax
c100889d:	01 d0                	add    %edx,%eax
c100889f:	c1 e0 03             	shl    $0x3,%eax
c10088a2:	89 c2                	mov    %eax,%edx
c10088a4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c10088a7:	01 d0                	add    %edx,%eax
c10088a9:	eb 25                	jmp    c10088d0 <dir_read+0x1d0>
c10088ab:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
c10088af:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10088b2:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c10088b5:	0f 82 75 ff ff ff    	jb     c1008830 <dir_read+0x130>
c10088bb:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
c10088bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10088c2:	3b 45 f4             	cmp    -0xc(%ebp),%eax
c10088c5:	0f 82 fb fe ff ff    	jb     c10087c6 <dir_read+0xc6>
c10088cb:	b8 00 00 00 00       	mov    $0x0,%eax
c10088d0:	8b 7d fc             	mov    -0x4(%ebp),%edi
c10088d3:	c9                   	leave  
c10088d4:	c3                   	ret    

c10088d5 <dir_is_empty>:
c10088d5:	55                   	push   %ebp
c10088d6:	89 e5                	mov    %esp,%ebp
c10088d8:	83 ec 10             	sub    $0x10,%esp
c10088db:	8b 45 08             	mov    0x8(%ebp),%eax
c10088de:	8b 00                	mov    (%eax),%eax
c10088e0:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10088e3:	8b 45 fc             	mov    -0x4(%ebp),%eax
c10088e6:	8b 50 04             	mov    0x4(%eax),%edx
c10088e9:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10088ee:	8b 40 10             	mov    0x10(%eax),%eax
c10088f1:	8b 40 30             	mov    0x30(%eax),%eax
c10088f4:	01 c0                	add    %eax,%eax
c10088f6:	39 c2                	cmp    %eax,%edx
c10088f8:	0f 94 c0             	sete   %al
c10088fb:	c9                   	leave  
c10088fc:	c3                   	ret    

c10088fd <dir_remove>:
c10088fd:	55                   	push   %ebp
c10088fe:	89 e5                	mov    %esp,%ebp
c1008900:	83 ec 18             	sub    $0x18,%esp
c1008903:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008906:	8b 00                	mov    (%eax),%eax
c1008908:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100890b:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
c1008912:	eb 2d                	jmp    c1008941 <dir_remove+0x44>
c1008914:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008917:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100891a:	83 c2 04             	add    $0x4,%edx
c100891d:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008920:	85 c0                	test   %eax,%eax
c1008922:	74 19                	je     c100893d <dir_remove+0x40>
c1008924:	68 80 b7 00 c1       	push   $0xc100b780
c1008929:	68 18 b8 00 c1       	push   $0xc100b818
c100892e:	68 96 01 00 00       	push   $0x196
c1008933:	68 48 b6 00 c1       	push   $0xc100b648
c1008938:	e8 2e 7a ff ff       	call   c100036b <__PANIC>
c100893d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008941:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
c1008945:	7e cd                	jle    c1008914 <dir_remove+0x17>
c1008947:	83 ec 08             	sub    $0x8,%esp
c100894a:	6a 02                	push   $0x2
c100894c:	68 00 04 00 00       	push   $0x400
c1008951:	e8 a7 a1 ff ff       	call   c1002afd <vmm_malloc>
c1008956:	83 c4 10             	add    $0x10,%esp
c1008959:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100895c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1008960:	75 17                	jne    c1008979 <dir_remove+0x7c>
c1008962:	83 ec 0c             	sub    $0xc,%esp
c1008965:	68 ac b7 00 c1       	push   $0xc100b7ac
c100896a:	e8 4d c6 ff ff       	call   c1004fbc <printk>
c100896f:	83 c4 10             	add    $0x10,%esp
c1008972:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008977:	eb 4a                	jmp    c10089c3 <dir_remove+0xc6>
c1008979:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100897c:	8b 10                	mov    (%eax),%edx
c100897e:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008983:	ff 75 ec             	pushl  -0x14(%ebp)
c1008986:	52                   	push   %edx
c1008987:	ff 75 08             	pushl  0x8(%ebp)
c100898a:	50                   	push   %eax
c100898b:	e8 ce f8 ff ff       	call   c100825e <delete_dir_entry>
c1008990:	83 c4 10             	add    $0x10,%esp
c1008993:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008996:	8b 10                	mov    (%eax),%edx
c1008998:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100899d:	83 ec 08             	sub    $0x8,%esp
c10089a0:	52                   	push   %edx
c10089a1:	50                   	push   %eax
c10089a2:	e8 14 16 00 00       	call   c1009fbb <inode_release>
c10089a7:	83 c4 10             	add    $0x10,%esp
c10089aa:	8b 45 ec             	mov    -0x14(%ebp),%eax
c10089ad:	83 ec 08             	sub    $0x8,%esp
c10089b0:	68 00 04 00 00       	push   $0x400
c10089b5:	50                   	push   %eax
c10089b6:	e8 67 a2 ff ff       	call   c1002c22 <vmm_free>
c10089bb:	83 c4 10             	add    $0x10,%esp
c10089be:	b8 00 00 00 00       	mov    $0x0,%eax
c10089c3:	c9                   	leave  
c10089c4:	c3                   	ret    

c10089c5 <hash32>:
c10089c5:	55                   	push   %ebp
c10089c6:	89 e5                	mov    %esp,%ebp
c10089c8:	83 ec 10             	sub    $0x10,%esp
c10089cb:	8b 45 08             	mov    0x8(%ebp),%eax
c10089ce:	69 c0 01 00 37 9e    	imul   $0x9e370001,%eax,%eax
c10089d4:	89 45 fc             	mov    %eax,-0x4(%ebp)
c10089d7:	b8 20 00 00 00       	mov    $0x20,%eax
c10089dc:	2b 45 0c             	sub    0xc(%ebp),%eax
c10089df:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10089e2:	89 c1                	mov    %eax,%ecx
c10089e4:	d3 ea                	shr    %cl,%edx
c10089e6:	89 d0                	mov    %edx,%eax
c10089e8:	c9                   	leave  
c10089e9:	c3                   	ret    

c10089ea <get_free_slot_in_global>:
c10089ea:	55                   	push   %ebp
c10089eb:	89 e5                	mov    %esp,%ebp
c10089ed:	83 ec 10             	sub    $0x10,%esp
c10089f0:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
c10089f7:	eb 1b                	jmp    c1008a14 <get_free_slot_in_global+0x2a>
c10089f9:	8b 55 fc             	mov    -0x4(%ebp),%edx
c10089fc:	89 d0                	mov    %edx,%eax
c10089fe:	01 c0                	add    %eax,%eax
c1008a00:	01 d0                	add    %edx,%eax
c1008a02:	c1 e0 02             	shl    $0x2,%eax
c1008a05:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008a0a:	8b 00                	mov    (%eax),%eax
c1008a0c:	85 c0                	test   %eax,%eax
c1008a0e:	74 0c                	je     c1008a1c <get_free_slot_in_global+0x32>
c1008a10:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c1008a14:	83 7d fc 1f          	cmpl   $0x1f,-0x4(%ebp)
c1008a18:	76 df                	jbe    c10089f9 <get_free_slot_in_global+0xf>
c1008a1a:	eb 01                	jmp    c1008a1d <get_free_slot_in_global+0x33>
c1008a1c:	90                   	nop
c1008a1d:	83 7d fc 20          	cmpl   $0x20,-0x4(%ebp)
c1008a21:	75 07                	jne    c1008a2a <get_free_slot_in_global+0x40>
c1008a23:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008a28:	eb 03                	jmp    c1008a2d <get_free_slot_in_global+0x43>
c1008a2a:	8b 45 fc             	mov    -0x4(%ebp),%eax
c1008a2d:	c9                   	leave  
c1008a2e:	c3                   	ret    

c1008a2f <task_fd_install>:
c1008a2f:	55                   	push   %ebp
c1008a30:	89 e5                	mov    %esp,%ebp
c1008a32:	83 ec 10             	sub    $0x10,%esp
c1008a35:	c6 45 ff 03          	movb   $0x3,-0x1(%ebp)
c1008a39:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1008a3e:	0f be 55 ff          	movsbl -0x1(%ebp),%edx
c1008a42:	83 c2 1c             	add    $0x1c,%edx
c1008a45:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1008a48:	83 f8 ff             	cmp    $0xffffffff,%eax
c1008a4b:	75 14                	jne    c1008a61 <task_fd_install+0x32>
c1008a4d:	a1 08 30 a1 c1       	mov    0xc1a13008,%eax
c1008a52:	0f be 4d ff          	movsbl -0x1(%ebp),%ecx
c1008a56:	8b 55 08             	mov    0x8(%ebp),%edx
c1008a59:	83 c1 1c             	add    $0x1c,%ecx
c1008a5c:	89 14 88             	mov    %edx,(%eax,%ecx,4)
c1008a5f:	eb 0c                	jmp    c1008a6d <task_fd_install+0x3e>
c1008a61:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
c1008a65:	83 c0 01             	add    $0x1,%eax
c1008a68:	88 45 ff             	mov    %al,-0x1(%ebp)
c1008a6b:	eb cc                	jmp    c1008a39 <task_fd_install+0xa>
c1008a6d:	0f be 45 ff          	movsbl -0x1(%ebp),%eax
c1008a71:	c9                   	leave  
c1008a72:	c3                   	ret    

c1008a73 <inode_bitmap_alloc>:
c1008a73:	55                   	push   %ebp
c1008a74:	89 e5                	mov    %esp,%ebp
c1008a76:	53                   	push   %ebx
c1008a77:	83 ec 10             	sub    $0x10,%esp
c1008a7a:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1008a81:	eb 04                	jmp    c1008a87 <inode_bitmap_alloc+0x14>
c1008a83:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1008a87:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a8a:	8b 50 20             	mov    0x20(%eax),%edx
c1008a8d:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008a90:	01 d0                	add    %edx,%eax
c1008a92:	0f b6 00             	movzbl (%eax),%eax
c1008a95:	3c ff                	cmp    $0xff,%al
c1008a97:	75 0b                	jne    c1008aa4 <inode_bitmap_alloc+0x31>
c1008a99:	8b 45 08             	mov    0x8(%ebp),%eax
c1008a9c:	8b 40 1c             	mov    0x1c(%eax),%eax
c1008a9f:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1008aa2:	72 df                	jb     c1008a83 <inode_bitmap_alloc+0x10>
c1008aa4:	8b 45 08             	mov    0x8(%ebp),%eax
c1008aa7:	8b 40 1c             	mov    0x1c(%eax),%eax
c1008aaa:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1008aad:	75 07                	jne    c1008ab6 <inode_bitmap_alloc+0x43>
c1008aaf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008ab4:	eb 77                	jmp    c1008b2d <inode_bitmap_alloc+0xba>
c1008ab6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008abd:	eb 04                	jmp    c1008ac3 <inode_bitmap_alloc+0x50>
c1008abf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008ac3:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008ac6:	ba 01 00 00 00       	mov    $0x1,%edx
c1008acb:	89 c1                	mov    %eax,%ecx
c1008acd:	d3 e2                	shl    %cl,%edx
c1008acf:	89 d0                	mov    %edx,%eax
c1008ad1:	89 c1                	mov    %eax,%ecx
c1008ad3:	8b 45 08             	mov    0x8(%ebp),%eax
c1008ad6:	8b 50 20             	mov    0x20(%eax),%edx
c1008ad9:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008adc:	01 d0                	add    %edx,%eax
c1008ade:	0f b6 00             	movzbl (%eax),%eax
c1008ae1:	21 c8                	and    %ecx,%eax
c1008ae3:	84 c0                	test   %al,%al
c1008ae5:	75 d8                	jne    c1008abf <inode_bitmap_alloc+0x4c>
c1008ae7:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008aea:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c1008af1:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008af4:	01 d0                	add    %edx,%eax
c1008af6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008af9:	8b 45 08             	mov    0x8(%ebp),%eax
c1008afc:	8b 50 20             	mov    0x20(%eax),%edx
c1008aff:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008b02:	01 d0                	add    %edx,%eax
c1008b04:	0f b6 00             	movzbl (%eax),%eax
c1008b07:	89 c3                	mov    %eax,%ebx
c1008b09:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008b0c:	ba 01 00 00 00       	mov    $0x1,%edx
c1008b11:	89 c1                	mov    %eax,%ecx
c1008b13:	d3 e2                	shl    %cl,%edx
c1008b15:	89 d0                	mov    %edx,%eax
c1008b17:	09 c3                	or     %eax,%ebx
c1008b19:	89 d9                	mov    %ebx,%ecx
c1008b1b:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b1e:	8b 50 20             	mov    0x20(%eax),%edx
c1008b21:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008b24:	01 d0                	add    %edx,%eax
c1008b26:	89 ca                	mov    %ecx,%edx
c1008b28:	88 10                	mov    %dl,(%eax)
c1008b2a:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008b2d:	83 c4 10             	add    $0x10,%esp
c1008b30:	5b                   	pop    %ebx
c1008b31:	5d                   	pop    %ebp
c1008b32:	c3                   	ret    

c1008b33 <block_bitmap_alloc>:
c1008b33:	55                   	push   %ebp
c1008b34:	89 e5                	mov    %esp,%ebp
c1008b36:	53                   	push   %ebx
c1008b37:	83 ec 10             	sub    $0x10,%esp
c1008b3a:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
c1008b41:	eb 04                	jmp    c1008b47 <block_bitmap_alloc+0x14>
c1008b43:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
c1008b47:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b4a:	8b 50 18             	mov    0x18(%eax),%edx
c1008b4d:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008b50:	01 d0                	add    %edx,%eax
c1008b52:	0f b6 00             	movzbl (%eax),%eax
c1008b55:	3c ff                	cmp    $0xff,%al
c1008b57:	75 0b                	jne    c1008b64 <block_bitmap_alloc+0x31>
c1008b59:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b5c:	8b 40 14             	mov    0x14(%eax),%eax
c1008b5f:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1008b62:	72 df                	jb     c1008b43 <block_bitmap_alloc+0x10>
c1008b64:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b67:	8b 40 14             	mov    0x14(%eax),%eax
c1008b6a:	39 45 f8             	cmp    %eax,-0x8(%ebp)
c1008b6d:	75 0a                	jne    c1008b79 <block_bitmap_alloc+0x46>
c1008b6f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008b74:	e9 82 00 00 00       	jmp    c1008bfb <block_bitmap_alloc+0xc8>
c1008b79:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
c1008b80:	eb 04                	jmp    c1008b86 <block_bitmap_alloc+0x53>
c1008b82:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
c1008b86:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008b89:	ba 01 00 00 00       	mov    $0x1,%edx
c1008b8e:	89 c1                	mov    %eax,%ecx
c1008b90:	d3 e2                	shl    %cl,%edx
c1008b92:	89 d0                	mov    %edx,%eax
c1008b94:	89 c1                	mov    %eax,%ecx
c1008b96:	8b 45 08             	mov    0x8(%ebp),%eax
c1008b99:	8b 50 18             	mov    0x18(%eax),%edx
c1008b9c:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008b9f:	01 d0                	add    %edx,%eax
c1008ba1:	0f b6 00             	movzbl (%eax),%eax
c1008ba4:	21 c8                	and    %ecx,%eax
c1008ba6:	84 c0                	test   %al,%al
c1008ba8:	75 d8                	jne    c1008b82 <block_bitmap_alloc+0x4f>
c1008baa:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008bad:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
c1008bb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008bb7:	01 d0                	add    %edx,%eax
c1008bb9:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008bbc:	8b 45 08             	mov    0x8(%ebp),%eax
c1008bbf:	8b 50 18             	mov    0x18(%eax),%edx
c1008bc2:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008bc5:	01 d0                	add    %edx,%eax
c1008bc7:	0f b6 00             	movzbl (%eax),%eax
c1008bca:	89 c3                	mov    %eax,%ebx
c1008bcc:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1008bcf:	ba 01 00 00 00       	mov    $0x1,%edx
c1008bd4:	89 c1                	mov    %eax,%ecx
c1008bd6:	d3 e2                	shl    %cl,%edx
c1008bd8:	89 d0                	mov    %edx,%eax
c1008bda:	09 c3                	or     %eax,%ebx
c1008bdc:	89 d9                	mov    %ebx,%ecx
c1008bde:	8b 45 08             	mov    0x8(%ebp),%eax
c1008be1:	8b 50 18             	mov    0x18(%eax),%edx
c1008be4:	8b 45 f8             	mov    -0x8(%ebp),%eax
c1008be7:	01 d0                	add    %edx,%eax
c1008be9:	89 ca                	mov    %ecx,%edx
c1008beb:	88 10                	mov    %dl,(%eax)
c1008bed:	8b 45 08             	mov    0x8(%ebp),%eax
c1008bf0:	8b 40 10             	mov    0x10(%eax),%eax
c1008bf3:	8b 50 28             	mov    0x28(%eax),%edx
c1008bf6:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1008bf9:	01 d0                	add    %edx,%eax
c1008bfb:	83 c4 10             	add    $0x10,%esp
c1008bfe:	5b                   	pop    %ebx
c1008bff:	5d                   	pop    %ebp
c1008c00:	c3                   	ret    

c1008c01 <bitmap_sync>:
c1008c01:	55                   	push   %ebp
c1008c02:	89 e5                	mov    %esp,%ebp
c1008c04:	83 ec 28             	sub    $0x28,%esp
c1008c07:	8b 45 10             	mov    0x10(%ebp),%eax
c1008c0a:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1008c0d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008c10:	c1 e8 0c             	shr    $0xc,%eax
c1008c13:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008c16:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008c19:	c1 e0 09             	shl    $0x9,%eax
c1008c1c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008c1f:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1008c23:	85 c0                	test   %eax,%eax
c1008c25:	74 07                	je     c1008c2e <bitmap_sync+0x2d>
c1008c27:	83 f8 01             	cmp    $0x1,%eax
c1008c2a:	74 23                	je     c1008c4f <bitmap_sync+0x4e>
c1008c2c:	eb 41                	jmp    c1008c6f <bitmap_sync+0x6e>
c1008c2e:	8b 45 08             	mov    0x8(%ebp),%eax
c1008c31:	8b 40 10             	mov    0x10(%eax),%eax
c1008c34:	8b 50 18             	mov    0x18(%eax),%edx
c1008c37:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008c3a:	01 d0                	add    %edx,%eax
c1008c3c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008c3f:	8b 45 08             	mov    0x8(%ebp),%eax
c1008c42:	8b 50 20             	mov    0x20(%eax),%edx
c1008c45:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008c48:	01 d0                	add    %edx,%eax
c1008c4a:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008c4d:	eb 20                	jmp    c1008c6f <bitmap_sync+0x6e>
c1008c4f:	8b 45 08             	mov    0x8(%ebp),%eax
c1008c52:	8b 40 10             	mov    0x10(%eax),%eax
c1008c55:	8b 50 10             	mov    0x10(%eax),%edx
c1008c58:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008c5b:	01 d0                	add    %edx,%eax
c1008c5d:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008c60:	8b 45 08             	mov    0x8(%ebp),%eax
c1008c63:	8b 50 18             	mov    0x18(%eax),%edx
c1008c66:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008c69:	01 d0                	add    %edx,%eax
c1008c6b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008c6e:	90                   	nop
c1008c6f:	83 ec 04             	sub    $0x4,%esp
c1008c72:	6a 01                	push   $0x1
c1008c74:	ff 75 f4             	pushl  -0xc(%ebp)
c1008c77:	ff 75 f0             	pushl  -0x10(%ebp)
c1008c7a:	e8 22 cc ff ff       	call   c10058a1 <ide_write>
c1008c7f:	83 c4 10             	add    $0x10,%esp
c1008c82:	90                   	nop
c1008c83:	c9                   	leave  
c1008c84:	c3                   	ret    

c1008c85 <file_create>:
c1008c85:	55                   	push   %ebp
c1008c86:	89 e5                	mov    %esp,%ebp
c1008c88:	83 ec 58             	sub    $0x58,%esp
c1008c8b:	8b 45 10             	mov    0x10(%ebp),%eax
c1008c8e:	88 45 b4             	mov    %al,-0x4c(%ebp)
c1008c91:	83 ec 08             	sub    $0x8,%esp
c1008c94:	6a 02                	push   $0x2
c1008c96:	68 00 04 00 00       	push   $0x400
c1008c9b:	e8 5d 9e ff ff       	call   c1002afd <vmm_malloc>
c1008ca0:	83 c4 10             	add    $0x10,%esp
c1008ca3:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1008ca6:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c1008caa:	75 1a                	jne    c1008cc6 <file_create+0x41>
c1008cac:	83 ec 0c             	sub    $0xc,%esp
c1008caf:	68 24 b8 00 c1       	push   $0xc100b824
c1008cb4:	e8 03 c3 ff ff       	call   c1004fbc <printk>
c1008cb9:	83 c4 10             	add    $0x10,%esp
c1008cbc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008cc1:	e9 9f 02 00 00       	jmp    c1008f65 <file_create+0x2e0>
c1008cc6:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c1008cca:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008ccf:	83 ec 0c             	sub    $0xc,%esp
c1008cd2:	50                   	push   %eax
c1008cd3:	e8 9b fd ff ff       	call   c1008a73 <inode_bitmap_alloc>
c1008cd8:	83 c4 10             	add    $0x10,%esp
c1008cdb:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1008cde:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
c1008ce2:	75 1a                	jne    c1008cfe <file_create+0x79>
c1008ce4:	83 ec 0c             	sub    $0xc,%esp
c1008ce7:	68 54 b8 00 c1       	push   $0xc100b854
c1008cec:	e8 cb c2 ff ff       	call   c1004fbc <printk>
c1008cf1:	83 c4 10             	add    $0x10,%esp
c1008cf4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008cf9:	e9 67 02 00 00       	jmp    c1008f65 <file_create+0x2e0>
c1008cfe:	83 ec 08             	sub    $0x8,%esp
c1008d01:	6a 02                	push   $0x2
c1008d03:	6a 44                	push   $0x44
c1008d05:	e8 f3 9d ff ff       	call   c1002afd <vmm_malloc>
c1008d0a:	83 c4 10             	add    $0x10,%esp
c1008d0d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c1008d10:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
c1008d14:	75 19                	jne    c1008d2f <file_create+0xaa>
c1008d16:	83 ec 0c             	sub    $0xc,%esp
c1008d19:	68 7c b8 00 c1       	push   $0xc100b87c
c1008d1e:	e8 99 c2 ff ff       	call   c1004fbc <printk>
c1008d23:	83 c4 10             	add    $0x10,%esp
c1008d26:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
c1008d2a:	e9 88 01 00 00       	jmp    c1008eb7 <file_create+0x232>
c1008d2f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008d32:	83 ec 08             	sub    $0x8,%esp
c1008d35:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008d38:	50                   	push   %eax
c1008d39:	e8 42 15 00 00       	call   c100a280 <inode_init>
c1008d3e:	83 c4 10             	add    $0x10,%esp
c1008d41:	e8 a4 fc ff ff       	call   c10089ea <get_free_slot_in_global>
c1008d46:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1008d49:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
c1008d4d:	75 19                	jne    c1008d68 <file_create+0xe3>
c1008d4f:	83 ec 0c             	sub    $0xc,%esp
c1008d52:	68 a7 b8 00 c1       	push   $0xc100b8a7
c1008d57:	e8 60 c2 ff ff       	call   c1004fbc <printk>
c1008d5c:	83 c4 10             	add    $0x10,%esp
c1008d5f:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
c1008d63:	e9 4f 01 00 00       	jmp    c1008eb7 <file_create+0x232>
c1008d68:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008d6b:	89 d0                	mov    %edx,%eax
c1008d6d:	01 c0                	add    %eax,%eax
c1008d6f:	01 d0                	add    %edx,%eax
c1008d71:	c1 e0 02             	shl    $0x2,%eax
c1008d74:	8d 90 48 32 a1 c1    	lea    -0x3e5ecdb8(%eax),%edx
c1008d7a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008d7d:	89 02                	mov    %eax,(%edx)
c1008d7f:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008d82:	89 d0                	mov    %edx,%eax
c1008d84:	01 c0                	add    %eax,%eax
c1008d86:	01 d0                	add    %edx,%eax
c1008d88:	c1 e0 02             	shl    $0x2,%eax
c1008d8b:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1008d90:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1008d96:	0f b6 4d b4          	movzbl -0x4c(%ebp),%ecx
c1008d9a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008d9d:	89 d0                	mov    %edx,%eax
c1008d9f:	01 c0                	add    %eax,%eax
c1008da1:	01 d0                	add    %edx,%eax
c1008da3:	c1 e0 02             	shl    $0x2,%eax
c1008da6:	05 44 32 a1 c1       	add    $0xc1a13244,%eax
c1008dab:	89 08                	mov    %ecx,(%eax)
c1008dad:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008db0:	89 d0                	mov    %edx,%eax
c1008db2:	01 c0                	add    %eax,%eax
c1008db4:	01 d0                	add    %edx,%eax
c1008db6:	c1 e0 02             	shl    $0x2,%eax
c1008db9:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008dbe:	8b 00                	mov    (%eax),%eax
c1008dc0:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c1008dc4:	83 ec 04             	sub    $0x4,%esp
c1008dc7:	6a 18                	push   $0x18
c1008dc9:	6a 00                	push   $0x0
c1008dcb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1008dce:	50                   	push   %eax
c1008dcf:	e8 d6 72 ff ff       	call   c10000aa <memset>
c1008dd4:	83 c4 10             	add    $0x10,%esp
c1008dd7:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008dda:	8d 55 c4             	lea    -0x3c(%ebp),%edx
c1008ddd:	52                   	push   %edx
c1008dde:	6a 01                	push   $0x1
c1008de0:	50                   	push   %eax
c1008de1:	ff 75 0c             	pushl  0xc(%ebp)
c1008de4:	e8 ce ef ff ff       	call   c1007db7 <create_dir_entry>
c1008de9:	83 c4 10             	add    $0x10,%esp
c1008dec:	83 ec 04             	sub    $0x4,%esp
c1008def:	ff 75 ec             	pushl  -0x14(%ebp)
c1008df2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
c1008df5:	50                   	push   %eax
c1008df6:	ff 75 08             	pushl  0x8(%ebp)
c1008df9:	e8 25 f0 ff ff       	call   c1007e23 <sync_dir_entry>
c1008dfe:	83 c4 10             	add    $0x10,%esp
c1008e01:	85 c0                	test   %eax,%eax
c1008e03:	75 19                	jne    c1008e1e <file_create+0x199>
c1008e05:	83 ec 0c             	sub    $0xc,%esp
c1008e08:	68 c0 b8 00 c1       	push   $0xc100b8c0
c1008e0d:	e8 aa c1 ff ff       	call   c1004fbc <printk>
c1008e12:	83 c4 10             	add    $0x10,%esp
c1008e15:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
c1008e19:	e9 99 00 00 00       	jmp    c1008eb7 <file_create+0x232>
c1008e1e:	83 ec 04             	sub    $0x4,%esp
c1008e21:	68 00 04 00 00       	push   $0x400
c1008e26:	6a 00                	push   $0x0
c1008e28:	ff 75 ec             	pushl  -0x14(%ebp)
c1008e2b:	e8 7a 72 ff ff       	call   c10000aa <memset>
c1008e30:	83 c4 10             	add    $0x10,%esp
c1008e33:	8b 45 08             	mov    0x8(%ebp),%eax
c1008e36:	8b 10                	mov    (%eax),%edx
c1008e38:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008e3d:	83 ec 04             	sub    $0x4,%esp
c1008e40:	ff 75 ec             	pushl  -0x14(%ebp)
c1008e43:	52                   	push   %edx
c1008e44:	50                   	push   %eax
c1008e45:	e8 64 0e 00 00       	call   c1009cae <inode_sync>
c1008e4a:	83 c4 10             	add    $0x10,%esp
c1008e4d:	83 ec 04             	sub    $0x4,%esp
c1008e50:	68 00 04 00 00       	push   $0x400
c1008e55:	6a 00                	push   $0x0
c1008e57:	ff 75 ec             	pushl  -0x14(%ebp)
c1008e5a:	e8 4b 72 ff ff       	call   c10000aa <memset>
c1008e5f:	83 c4 10             	add    $0x10,%esp
c1008e62:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008e67:	83 ec 04             	sub    $0x4,%esp
c1008e6a:	ff 75 ec             	pushl  -0x14(%ebp)
c1008e6d:	ff 75 e4             	pushl  -0x1c(%ebp)
c1008e70:	50                   	push   %eax
c1008e71:	e8 38 0e 00 00       	call   c1009cae <inode_sync>
c1008e76:	83 c4 10             	add    $0x10,%esp
c1008e79:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1008e7c:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008e81:	83 ec 04             	sub    $0x4,%esp
c1008e84:	6a 00                	push   $0x0
c1008e86:	52                   	push   %edx
c1008e87:	50                   	push   %eax
c1008e88:	e8 74 fd ff ff       	call   c1008c01 <bitmap_sync>
c1008e8d:	83 c4 10             	add    $0x10,%esp
c1008e90:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008e93:	83 ec 08             	sub    $0x8,%esp
c1008e96:	68 00 04 00 00       	push   $0x400
c1008e9b:	50                   	push   %eax
c1008e9c:	e8 81 9d ff ff       	call   c1002c22 <vmm_free>
c1008ea1:	83 c4 10             	add    $0x10,%esp
c1008ea4:	83 ec 0c             	sub    $0xc,%esp
c1008ea7:	ff 75 f0             	pushl  -0x10(%ebp)
c1008eaa:	e8 80 fb ff ff       	call   c1008a2f <task_fd_install>
c1008eaf:	83 c4 10             	add    $0x10,%esp
c1008eb2:	e9 ae 00 00 00       	jmp    c1008f65 <file_create+0x2e0>
c1008eb7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c1008ebb:	83 f8 03             	cmp    $0x3,%eax
c1008ebe:	74 15                	je     c1008ed5 <file_create+0x250>
c1008ec0:	83 f8 03             	cmp    $0x3,%eax
c1008ec3:	0f 8f 83 00 00 00    	jg     c1008f4c <file_create+0x2c7>
c1008ec9:	83 f8 01             	cmp    $0x1,%eax
c1008ecc:	74 39                	je     c1008f07 <file_create+0x282>
c1008ece:	83 f8 02             	cmp    $0x2,%eax
c1008ed1:	74 23                	je     c1008ef6 <file_create+0x271>
c1008ed3:	eb 77                	jmp    c1008f4c <file_create+0x2c7>
c1008ed5:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1008ed8:	89 d0                	mov    %edx,%eax
c1008eda:	01 c0                	add    %eax,%eax
c1008edc:	01 d0                	add    %edx,%eax
c1008ede:	c1 e0 02             	shl    $0x2,%eax
c1008ee1:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c1008ee6:	83 ec 04             	sub    $0x4,%esp
c1008ee9:	6a 0c                	push   $0xc
c1008eeb:	6a 00                	push   $0x0
c1008eed:	50                   	push   %eax
c1008eee:	e8 b7 71 ff ff       	call   c10000aa <memset>
c1008ef3:	83 c4 10             	add    $0x10,%esp
c1008ef6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1008ef9:	83 ec 08             	sub    $0x8,%esp
c1008efc:	6a 44                	push   $0x44
c1008efe:	50                   	push   %eax
c1008eff:	e8 1e 9d ff ff       	call   c1002c22 <vmm_free>
c1008f04:	83 c4 10             	add    $0x10,%esp
c1008f07:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008f0a:	8d 50 07             	lea    0x7(%eax),%edx
c1008f0d:	85 c0                	test   %eax,%eax
c1008f0f:	0f 48 c2             	cmovs  %edx,%eax
c1008f12:	c1 f8 03             	sar    $0x3,%eax
c1008f15:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1008f18:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1008f1b:	99                   	cltd   
c1008f1c:	c1 ea 1d             	shr    $0x1d,%edx
c1008f1f:	01 d0                	add    %edx,%eax
c1008f21:	83 e0 07             	and    $0x7,%eax
c1008f24:	29 d0                	sub    %edx,%eax
c1008f26:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1008f29:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008f2e:	8b 50 20             	mov    0x20(%eax),%edx
c1008f31:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008f34:	01 d0                	add    %edx,%eax
c1008f36:	0f b6 10             	movzbl (%eax),%edx
c1008f39:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008f3e:	8b 48 20             	mov    0x20(%eax),%ecx
c1008f41:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1008f44:	01 c8                	add    %ecx,%eax
c1008f46:	83 e2 fe             	and    $0xfffffffe,%edx
c1008f49:	88 10                	mov    %dl,(%eax)
c1008f4b:	90                   	nop
c1008f4c:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1008f4f:	83 ec 08             	sub    $0x8,%esp
c1008f52:	68 00 04 00 00       	push   $0x400
c1008f57:	50                   	push   %eax
c1008f58:	e8 c5 9c ff ff       	call   c1002c22 <vmm_free>
c1008f5d:	83 c4 10             	add    $0x10,%esp
c1008f60:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008f65:	c9                   	leave  
c1008f66:	c3                   	ret    

c1008f67 <file_open>:
c1008f67:	55                   	push   %ebp
c1008f68:	89 e5                	mov    %esp,%ebp
c1008f6a:	83 ec 28             	sub    $0x28,%esp
c1008f6d:	8b 45 0c             	mov    0xc(%ebp),%eax
c1008f70:	88 45 e4             	mov    %al,-0x1c(%ebp)
c1008f73:	e8 72 fa ff ff       	call   c10089ea <get_free_slot_in_global>
c1008f78:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1008f7b:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
c1008f7f:	75 1a                	jne    c1008f9b <file_open+0x34>
c1008f81:	83 ec 0c             	sub    $0xc,%esp
c1008f84:	68 a7 b8 00 c1       	push   $0xc100b8a7
c1008f89:	e8 2e c0 ff ff       	call   c1004fbc <printk>
c1008f8e:	83 c4 10             	add    $0x10,%esp
c1008f91:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1008f96:	e9 1a 01 00 00       	jmp    c10090b5 <file_open+0x14e>
c1008f9b:	83 ec 08             	sub    $0x8,%esp
c1008f9e:	ff 75 08             	pushl  0x8(%ebp)
c1008fa1:	68 df b8 00 c1       	push   $0xc100b8df
c1008fa6:	e8 11 c0 ff ff       	call   c1004fbc <printk>
c1008fab:	83 c4 10             	add    $0x10,%esp
c1008fae:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1008fb3:	83 ec 08             	sub    $0x8,%esp
c1008fb6:	ff 75 08             	pushl  0x8(%ebp)
c1008fb9:	50                   	push   %eax
c1008fba:	e8 10 0e 00 00       	call   c1009dcf <inode_open>
c1008fbf:	83 c4 10             	add    $0x10,%esp
c1008fc2:	89 c1                	mov    %eax,%ecx
c1008fc4:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008fc7:	89 d0                	mov    %edx,%eax
c1008fc9:	01 c0                	add    %eax,%eax
c1008fcb:	01 d0                	add    %edx,%eax
c1008fcd:	c1 e0 02             	shl    $0x2,%eax
c1008fd0:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008fd5:	89 08                	mov    %ecx,(%eax)
c1008fd7:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1008fda:	89 d0                	mov    %edx,%eax
c1008fdc:	01 c0                	add    %eax,%eax
c1008fde:	01 d0                	add    %edx,%eax
c1008fe0:	c1 e0 02             	shl    $0x2,%eax
c1008fe3:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c1008fe8:	8b 00                	mov    (%eax),%eax
c1008fea:	8b 00                	mov    (%eax),%eax
c1008fec:	83 ec 08             	sub    $0x8,%esp
c1008fef:	50                   	push   %eax
c1008ff0:	68 ec b8 00 c1       	push   $0xc100b8ec
c1008ff5:	e8 c2 bf ff ff       	call   c1004fbc <printk>
c1008ffa:	83 c4 10             	add    $0x10,%esp
c1008ffd:	8b 55 f4             	mov    -0xc(%ebp),%edx
c1009000:	89 d0                	mov    %edx,%eax
c1009002:	01 c0                	add    %eax,%eax
c1009004:	01 d0                	add    %edx,%eax
c1009006:	c1 e0 02             	shl    $0x2,%eax
c1009009:	05 40 32 a1 c1       	add    $0xc1a13240,%eax
c100900e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
c1009014:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
c1009018:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100901b:	89 d0                	mov    %edx,%eax
c100901d:	01 c0                	add    %eax,%eax
c100901f:	01 d0                	add    %edx,%eax
c1009021:	c1 e0 02             	shl    $0x2,%eax
c1009024:	05 44 32 a1 c1       	add    $0xc1a13244,%eax
c1009029:	89 08                	mov    %ecx,(%eax)
c100902b:	8b 55 f4             	mov    -0xc(%ebp),%edx
c100902e:	89 d0                	mov    %edx,%eax
c1009030:	01 c0                	add    %eax,%eax
c1009032:	01 d0                	add    %edx,%eax
c1009034:	c1 e0 02             	shl    $0x2,%eax
c1009037:	05 48 32 a1 c1       	add    $0xc1a13248,%eax
c100903c:	8b 00                	mov    (%eax),%eax
c100903e:	83 c0 0c             	add    $0xc,%eax
c1009041:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009044:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009048:	83 e0 01             	and    $0x1,%eax
c100904b:	85 c0                	test   %eax,%eax
c100904d:	75 0b                	jne    c100905a <file_open+0xf3>
c100904f:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009053:	83 e0 02             	and    $0x2,%eax
c1009056:	85 c0                	test   %eax,%eax
c1009058:	74 4d                	je     c10090a7 <file_open+0x140>
c100905a:	e8 4f 7d ff ff       	call   c1000dae <intr_save>
c100905f:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009062:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009065:	0f b6 00             	movzbl (%eax),%eax
c1009068:	84 c0                	test   %al,%al
c100906a:	75 16                	jne    c1009082 <file_open+0x11b>
c100906c:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100906f:	c6 00 01             	movb   $0x1,(%eax)
c1009072:	83 ec 0c             	sub    $0xc,%esp
c1009075:	ff 75 ec             	pushl  -0x14(%ebp)
c1009078:	e8 44 7d ff ff       	call   c1000dc1 <intr_restore>
c100907d:	83 c4 10             	add    $0x10,%esp
c1009080:	eb 25                	jmp    c10090a7 <file_open+0x140>
c1009082:	83 ec 0c             	sub    $0xc,%esp
c1009085:	ff 75 ec             	pushl  -0x14(%ebp)
c1009088:	e8 34 7d ff ff       	call   c1000dc1 <intr_restore>
c100908d:	83 c4 10             	add    $0x10,%esp
c1009090:	83 ec 0c             	sub    $0xc,%esp
c1009093:	68 14 b9 00 c1       	push   $0xc100b914
c1009098:	e8 1f bf ff ff       	call   c1004fbc <printk>
c100909d:	83 c4 10             	add    $0x10,%esp
c10090a0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10090a5:	eb 0e                	jmp    c10090b5 <file_open+0x14e>
c10090a7:	83 ec 0c             	sub    $0xc,%esp
c10090aa:	ff 75 f4             	pushl  -0xc(%ebp)
c10090ad:	e8 7d f9 ff ff       	call   c1008a2f <task_fd_install>
c10090b2:	83 c4 10             	add    $0x10,%esp
c10090b5:	c9                   	leave  
c10090b6:	c3                   	ret    

c10090b7 <file_close>:
c10090b7:	55                   	push   %ebp
c10090b8:	89 e5                	mov    %esp,%ebp
c10090ba:	83 ec 08             	sub    $0x8,%esp
c10090bd:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
c10090c1:	75 07                	jne    c10090ca <file_close+0x13>
c10090c3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10090c8:	eb 2b                	jmp    c10090f5 <file_close+0x3e>
c10090ca:	8b 45 08             	mov    0x8(%ebp),%eax
c10090cd:	8b 40 08             	mov    0x8(%eax),%eax
c10090d0:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c10090d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10090d7:	8b 40 08             	mov    0x8(%eax),%eax
c10090da:	83 ec 0c             	sub    $0xc,%esp
c10090dd:	50                   	push   %eax
c10090de:	e8 c2 0d 00 00       	call   c1009ea5 <inode_close>
c10090e3:	83 c4 10             	add    $0x10,%esp
c10090e6:	8b 45 08             	mov    0x8(%ebp),%eax
c10090e9:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c10090f0:	b8 00 00 00 00       	mov    $0x0,%eax
c10090f5:	c9                   	leave  
c10090f6:	c3                   	ret    

c10090f7 <file_write>:
c10090f7:	55                   	push   %ebp
c10090f8:	89 e5                	mov    %esp,%ebp
c10090fa:	83 ec 58             	sub    $0x58,%esp
c10090fd:	8b 45 08             	mov    0x8(%ebp),%eax
c1009100:	8b 40 08             	mov    0x8(%eax),%eax
c1009103:	8b 50 04             	mov    0x4(%eax),%edx
c1009106:	8b 45 10             	mov    0x10(%ebp),%eax
c1009109:	01 d0                	add    %edx,%eax
c100910b:	3d 00 18 01 00       	cmp    $0x11800,%eax
c1009110:	76 1a                	jbe    c100912c <file_write+0x35>
c1009112:	83 ec 0c             	sub    $0xc,%esp
c1009115:	68 40 b9 00 c1       	push   $0xc100b940
c100911a:	e8 9d be ff ff       	call   c1004fbc <printk>
c100911f:	83 c4 10             	add    $0x10,%esp
c1009122:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009127:	e9 3e 07 00 00       	jmp    c100986a <file_write+0x773>
c100912c:	83 ec 08             	sub    $0x8,%esp
c100912f:	6a 02                	push   $0x2
c1009131:	68 00 02 00 00       	push   $0x200
c1009136:	e8 c2 99 ff ff       	call   c1002afd <vmm_malloc>
c100913b:	83 c4 10             	add    $0x10,%esp
c100913e:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009141:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c1009145:	75 1a                	jne    c1009161 <file_write+0x6a>
c1009147:	83 ec 0c             	sub    $0xc,%esp
c100914a:	68 78 b9 00 c1       	push   $0xc100b978
c100914f:	e8 68 be ff ff       	call   c1004fbc <printk>
c1009154:	83 c4 10             	add    $0x10,%esp
c1009157:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100915c:	e9 09 07 00 00       	jmp    c100986a <file_write+0x773>
c1009161:	83 ec 08             	sub    $0x8,%esp
c1009164:	6a 02                	push   $0x2
c1009166:	68 30 02 00 00       	push   $0x230
c100916b:	e8 8d 99 ff ff       	call   c1002afd <vmm_malloc>
c1009170:	83 c4 10             	add    $0x10,%esp
c1009173:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1009176:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c100917a:	75 1a                	jne    c1009196 <file_write+0x9f>
c100917c:	83 ec 0c             	sub    $0xc,%esp
c100917f:	68 a4 b9 00 c1       	push   $0xc100b9a4
c1009184:	e8 33 be ff ff       	call   c1004fbc <printk>
c1009189:	83 c4 10             	add    $0x10,%esp
c100918c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009191:	e9 d4 06 00 00       	jmp    c100986a <file_write+0x773>
c1009196:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009199:	89 45 f4             	mov    %eax,-0xc(%ebp)
c100919c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
c10091a3:	8b 45 10             	mov    0x10(%ebp),%eax
c10091a6:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10091a9:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
c10091b0:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
c10091b7:	8b 45 08             	mov    0x8(%ebp),%eax
c10091ba:	8b 40 08             	mov    0x8(%eax),%eax
c10091bd:	8b 40 10             	mov    0x10(%eax),%eax
c10091c0:	85 c0                	test   %eax,%eax
c10091c2:	0f 85 8a 00 00 00    	jne    c1009252 <file_write+0x15b>
c10091c8:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10091cd:	83 ec 0c             	sub    $0xc,%esp
c10091d0:	50                   	push   %eax
c10091d1:	e8 5d f9 ff ff       	call   c1008b33 <block_bitmap_alloc>
c10091d6:	83 c4 10             	add    $0x10,%esp
c10091d9:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10091dc:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10091e0:	75 1a                	jne    c10091fc <file_write+0x105>
c10091e2:	83 ec 0c             	sub    $0xc,%esp
c10091e5:	68 d4 b9 00 c1       	push   $0xc100b9d4
c10091ea:	e8 cd bd ff ff       	call   c1004fbc <printk>
c10091ef:	83 c4 10             	add    $0x10,%esp
c10091f2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10091f7:	e9 6e 06 00 00       	jmp    c100986a <file_write+0x773>
c10091fc:	8b 45 08             	mov    0x8(%ebp),%eax
c10091ff:	8b 40 08             	mov    0x8(%eax),%eax
c1009202:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009205:	89 50 10             	mov    %edx,0x10(%eax)
c1009208:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100920b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009210:	8b 40 10             	mov    0x10(%eax),%eax
c1009213:	8b 40 28             	mov    0x28(%eax),%eax
c1009216:	29 c2                	sub    %eax,%edx
c1009218:	89 d0                	mov    %edx,%eax
c100921a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c100921d:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
c1009221:	75 19                	jne    c100923c <file_write+0x145>
c1009223:	68 fb b9 00 c1       	push   $0xc100b9fb
c1009228:	68 bc bc 00 c1       	push   $0xc100bcbc
c100922d:	68 1e 01 00 00       	push   $0x11e
c1009232:	68 14 ba 00 c1       	push   $0xc100ba14
c1009237:	e8 2f 71 ff ff       	call   c100036b <__PANIC>
c100923c:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009241:	83 ec 04             	sub    $0x4,%esp
c1009244:	6a 01                	push   $0x1
c1009246:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009249:	50                   	push   %eax
c100924a:	e8 b2 f9 ff ff       	call   c1008c01 <bitmap_sync>
c100924f:	83 c4 10             	add    $0x10,%esp
c1009252:	8b 45 08             	mov    0x8(%ebp),%eax
c1009255:	8b 40 08             	mov    0x8(%eax),%eax
c1009258:	8b 40 04             	mov    0x4(%eax),%eax
c100925b:	c1 e8 09             	shr    $0x9,%eax
c100925e:	83 c0 01             	add    $0x1,%eax
c1009261:	89 45 d0             	mov    %eax,-0x30(%ebp)
c1009264:	8b 45 08             	mov    0x8(%ebp),%eax
c1009267:	8b 40 08             	mov    0x8(%eax),%eax
c100926a:	8b 50 04             	mov    0x4(%eax),%edx
c100926d:	8b 45 10             	mov    0x10(%ebp),%eax
c1009270:	01 d0                	add    %edx,%eax
c1009272:	c1 e8 09             	shr    $0x9,%eax
c1009275:	83 c0 01             	add    $0x1,%eax
c1009278:	89 45 cc             	mov    %eax,-0x34(%ebp)
c100927b:	81 7d cc 8c 00 00 00 	cmpl   $0x8c,-0x34(%ebp)
c1009282:	76 19                	jbe    c100929d <file_write+0x1a6>
c1009284:	68 45 ba 00 c1       	push   $0xc100ba45
c1009289:	68 bc bc 00 c1       	push   $0xc100bcbc
c100928e:	68 27 01 00 00       	push   $0x127
c1009293:	68 14 ba 00 c1       	push   $0xc100ba14
c1009298:	e8 ce 70 ff ff       	call   c100036b <__PANIC>
c100929d:	8b 45 cc             	mov    -0x34(%ebp),%eax
c10092a0:	2b 45 d0             	sub    -0x30(%ebp),%eax
c10092a3:	89 45 c8             	mov    %eax,-0x38(%ebp)
c10092a6:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
c10092aa:	0f 85 83 00 00 00    	jne    c1009333 <file_write+0x23c>
c10092b0:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c10092b4:	77 2e                	ja     c10092e4 <file_write+0x1ed>
c10092b6:	8b 45 d0             	mov    -0x30(%ebp),%eax
c10092b9:	83 e8 01             	sub    $0x1,%eax
c10092bc:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10092bf:	8b 45 08             	mov    0x8(%ebp),%eax
c10092c2:	8b 40 08             	mov    0x8(%eax),%eax
c10092c5:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10092c8:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10092cf:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10092d2:	01 ca                	add    %ecx,%edx
c10092d4:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c10092d7:	83 c1 04             	add    $0x4,%ecx
c10092da:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c10092dd:	89 02                	mov    %eax,(%edx)
c10092df:	e9 24 04 00 00       	jmp    c1009708 <file_write+0x611>
c10092e4:	8b 45 08             	mov    0x8(%ebp),%eax
c10092e7:	8b 40 08             	mov    0x8(%eax),%eax
c10092ea:	8b 40 40             	mov    0x40(%eax),%eax
c10092ed:	85 c0                	test   %eax,%eax
c10092ef:	75 19                	jne    c100930a <file_write+0x213>
c10092f1:	68 64 ba 00 c1       	push   $0xc100ba64
c10092f6:	68 bc bc 00 c1       	push   $0xc100bcbc
c10092fb:	68 35 01 00 00       	push   $0x135
c1009300:	68 14 ba 00 c1       	push   $0xc100ba14
c1009305:	e8 61 70 ff ff       	call   c100036b <__PANIC>
c100930a:	8b 45 08             	mov    0x8(%ebp),%eax
c100930d:	8b 40 08             	mov    0x8(%eax),%eax
c1009310:	8b 40 40             	mov    0x40(%eax),%eax
c1009313:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009316:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c1009319:	8b 55 dc             	mov    -0x24(%ebp),%edx
c100931c:	83 c2 30             	add    $0x30,%edx
c100931f:	83 ec 04             	sub    $0x4,%esp
c1009322:	6a 01                	push   $0x1
c1009324:	50                   	push   %eax
c1009325:	52                   	push   %edx
c1009326:	e8 39 c5 ff ff       	call   c1005864 <ide_read>
c100932b:	83 c4 10             	add    $0x10,%esp
c100932e:	e9 d5 03 00 00       	jmp    c1009708 <file_write+0x611>
c1009333:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009337:	0f 87 25 01 00 00    	ja     c1009462 <file_write+0x36b>
c100933d:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009340:	83 e8 01             	sub    $0x1,%eax
c1009343:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009346:	8b 45 08             	mov    0x8(%ebp),%eax
c1009349:	8b 40 08             	mov    0x8(%eax),%eax
c100934c:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100934f:	83 c2 04             	add    $0x4,%edx
c1009352:	8b 04 90             	mov    (%eax,%edx,4),%eax
c1009355:	85 c0                	test   %eax,%eax
c1009357:	75 19                	jne    c1009372 <file_write+0x27b>
c1009359:	68 88 ba 00 c1       	push   $0xc100ba88
c100935e:	68 bc bc 00 c1       	push   $0xc100bcbc
c1009363:	68 3f 01 00 00       	push   $0x13f
c1009368:	68 14 ba 00 c1       	push   $0xc100ba14
c100936d:	e8 f9 6f ff ff       	call   c100036b <__PANIC>
c1009372:	8b 45 08             	mov    0x8(%ebp),%eax
c1009375:	8b 40 08             	mov    0x8(%eax),%eax
c1009378:	8b 55 e8             	mov    -0x18(%ebp),%edx
c100937b:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009382:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009385:	01 ca                	add    %ecx,%edx
c1009387:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100938a:	83 c1 04             	add    $0x4,%ecx
c100938d:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009390:	89 02                	mov    %eax,(%edx)
c1009392:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009395:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009398:	e9 b4 00 00 00       	jmp    c1009451 <file_write+0x35a>
c100939d:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10093a2:	83 ec 0c             	sub    $0xc,%esp
c10093a5:	50                   	push   %eax
c10093a6:	e8 88 f7 ff ff       	call   c1008b33 <block_bitmap_alloc>
c10093ab:	83 c4 10             	add    $0x10,%esp
c10093ae:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10093b1:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10093b5:	75 1a                	jne    c10093d1 <file_write+0x2da>
c10093b7:	83 ec 0c             	sub    $0xc,%esp
c10093ba:	68 b4 ba 00 c1       	push   $0xc100bab4
c10093bf:	e8 f8 bb ff ff       	call   c1004fbc <printk>
c10093c4:	83 c4 10             	add    $0x10,%esp
c10093c7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10093cc:	e9 99 04 00 00       	jmp    c100986a <file_write+0x773>
c10093d1:	8b 45 08             	mov    0x8(%ebp),%eax
c10093d4:	8b 40 08             	mov    0x8(%eax),%eax
c10093d7:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10093da:	83 c2 04             	add    $0x4,%edx
c10093dd:	8b 04 90             	mov    (%eax,%edx,4),%eax
c10093e0:	85 c0                	test   %eax,%eax
c10093e2:	74 19                	je     c10093fd <file_write+0x306>
c10093e4:	68 ec ba 00 c1       	push   $0xc100baec
c10093e9:	68 bc bc 00 c1       	push   $0xc100bcbc
c10093ee:	68 4c 01 00 00       	push   $0x14c
c10093f3:	68 14 ba 00 c1       	push   $0xc100ba14
c10093f8:	e8 6e 6f ff ff       	call   c100036b <__PANIC>
c10093fd:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009400:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009407:	8b 45 dc             	mov    -0x24(%ebp),%eax
c100940a:	01 d0                	add    %edx,%eax
c100940c:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100940f:	89 10                	mov    %edx,(%eax)
c1009411:	8b 55 08             	mov    0x8(%ebp),%edx
c1009414:	8b 52 08             	mov    0x8(%edx),%edx
c1009417:	8b 00                	mov    (%eax),%eax
c1009419:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100941c:	83 c1 04             	add    $0x4,%ecx
c100941f:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c1009422:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009425:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100942a:	8b 40 10             	mov    0x10(%eax),%eax
c100942d:	8b 40 28             	mov    0x28(%eax),%eax
c1009430:	29 c2                	sub    %eax,%edx
c1009432:	89 d0                	mov    %edx,%eax
c1009434:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009437:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100943c:	83 ec 04             	sub    $0x4,%esp
c100943f:	6a 01                	push   $0x1
c1009441:	ff 75 d4             	pushl  -0x2c(%ebp)
c1009444:	50                   	push   %eax
c1009445:	e8 b7 f7 ff ff       	call   c1008c01 <bitmap_sync>
c100944a:	83 c4 10             	add    $0x10,%esp
c100944d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009451:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009454:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c1009457:	0f 82 40 ff ff ff    	jb     c100939d <file_write+0x2a6>
c100945d:	e9 a6 02 00 00       	jmp    c1009708 <file_write+0x611>
c1009462:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009466:	0f 87 a3 01 00 00    	ja     c100960f <file_write+0x518>
c100946c:	83 7d cc 0c          	cmpl   $0xc,-0x34(%ebp)
c1009470:	0f 86 99 01 00 00    	jbe    c100960f <file_write+0x518>
c1009476:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009479:	83 e8 01             	sub    $0x1,%eax
c100947c:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100947f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009482:	8b 40 08             	mov    0x8(%eax),%eax
c1009485:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009488:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c100948f:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009492:	01 ca                	add    %ecx,%edx
c1009494:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009497:	83 c1 04             	add    $0x4,%ecx
c100949a:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c100949d:	89 02                	mov    %eax,(%edx)
c100949f:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10094a4:	83 ec 0c             	sub    $0xc,%esp
c10094a7:	50                   	push   %eax
c10094a8:	e8 86 f6 ff ff       	call   c1008b33 <block_bitmap_alloc>
c10094ad:	83 c4 10             	add    $0x10,%esp
c10094b0:	89 45 d8             	mov    %eax,-0x28(%ebp)
c10094b3:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c10094b7:	75 1a                	jne    c10094d3 <file_write+0x3dc>
c10094b9:	83 ec 0c             	sub    $0xc,%esp
c10094bc:	68 18 bb 00 c1       	push   $0xc100bb18
c10094c1:	e8 f6 ba ff ff       	call   c1004fbc <printk>
c10094c6:	83 c4 10             	add    $0x10,%esp
c10094c9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10094ce:	e9 97 03 00 00       	jmp    c100986a <file_write+0x773>
c10094d3:	8b 45 08             	mov    0x8(%ebp),%eax
c10094d6:	8b 40 08             	mov    0x8(%eax),%eax
c10094d9:	8b 40 40             	mov    0x40(%eax),%eax
c10094dc:	85 c0                	test   %eax,%eax
c10094de:	74 19                	je     c10094f9 <file_write+0x402>
c10094e0:	68 50 bb 00 c1       	push   $0xc100bb50
c10094e5:	68 bc bc 00 c1       	push   $0xc100bcbc
c10094ea:	68 63 01 00 00       	push   $0x163
c10094ef:	68 14 ba 00 c1       	push   $0xc100ba14
c10094f4:	e8 72 6e ff ff       	call   c100036b <__PANIC>
c10094f9:	8b 45 08             	mov    0x8(%ebp),%eax
c10094fc:	8b 40 08             	mov    0x8(%eax),%eax
c10094ff:	8b 55 d8             	mov    -0x28(%ebp),%edx
c1009502:	89 50 40             	mov    %edx,0x40(%eax)
c1009505:	8b 40 40             	mov    0x40(%eax),%eax
c1009508:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100950b:	8b 45 d0             	mov    -0x30(%ebp),%eax
c100950e:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009511:	e9 d0 00 00 00       	jmp    c10095e6 <file_write+0x4ef>
c1009516:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100951b:	83 ec 0c             	sub    $0xc,%esp
c100951e:	50                   	push   %eax
c100951f:	e8 0f f6 ff ff       	call   c1008b33 <block_bitmap_alloc>
c1009524:	83 c4 10             	add    $0x10,%esp
c1009527:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100952a:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c100952e:	75 1a                	jne    c100954a <file_write+0x453>
c1009530:	83 ec 0c             	sub    $0xc,%esp
c1009533:	68 18 bb 00 c1       	push   $0xc100bb18
c1009538:	e8 7f ba ff ff       	call   c1004fbc <printk>
c100953d:	83 c4 10             	add    $0x10,%esp
c1009540:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009545:	e9 20 03 00 00       	jmp    c100986a <file_write+0x773>
c100954a:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c100954e:	77 53                	ja     c10095a3 <file_write+0x4ac>
c1009550:	8b 45 08             	mov    0x8(%ebp),%eax
c1009553:	8b 40 08             	mov    0x8(%eax),%eax
c1009556:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009559:	83 c2 04             	add    $0x4,%edx
c100955c:	8b 04 90             	mov    (%eax,%edx,4),%eax
c100955f:	85 c0                	test   %eax,%eax
c1009561:	74 19                	je     c100957c <file_write+0x485>
c1009563:	68 ec ba 00 c1       	push   $0xc100baec
c1009568:	68 bc bc 00 c1       	push   $0xc100bcbc
c100956d:	68 70 01 00 00       	push   $0x170
c1009572:	68 14 ba 00 c1       	push   $0xc100ba14
c1009577:	e8 ef 6d ff ff       	call   c100036b <__PANIC>
c100957c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100957f:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009586:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009589:	01 d0                	add    %edx,%eax
c100958b:	8b 55 d8             	mov    -0x28(%ebp),%edx
c100958e:	89 10                	mov    %edx,(%eax)
c1009590:	8b 55 08             	mov    0x8(%ebp),%edx
c1009593:	8b 52 08             	mov    0x8(%edx),%edx
c1009596:	8b 00                	mov    (%eax),%eax
c1009598:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c100959b:	83 c1 04             	add    $0x4,%ecx
c100959e:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
c10095a1:	eb 14                	jmp    c10095b7 <file_write+0x4c0>
c10095a3:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10095a6:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10095ad:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10095b0:	01 c2                	add    %eax,%edx
c10095b2:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10095b5:	89 02                	mov    %eax,(%edx)
c10095b7:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10095ba:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10095bf:	8b 40 10             	mov    0x10(%eax),%eax
c10095c2:	8b 40 28             	mov    0x28(%eax),%eax
c10095c5:	29 c2                	sub    %eax,%edx
c10095c7:	89 d0                	mov    %edx,%eax
c10095c9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10095cc:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10095d1:	83 ec 04             	sub    $0x4,%esp
c10095d4:	6a 01                	push   $0x1
c10095d6:	ff 75 d4             	pushl  -0x2c(%ebp)
c10095d9:	50                   	push   %eax
c10095da:	e8 22 f6 ff ff       	call   c1008c01 <bitmap_sync>
c10095df:	83 c4 10             	add    $0x10,%esp
c10095e2:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c10095e6:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10095e9:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c10095ec:	0f 82 24 ff ff ff    	jb     c1009516 <file_write+0x41f>
c10095f2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c10095f5:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10095f8:	83 c2 30             	add    $0x30,%edx
c10095fb:	83 ec 04             	sub    $0x4,%esp
c10095fe:	6a 01                	push   $0x1
c1009600:	50                   	push   %eax
c1009601:	52                   	push   %edx
c1009602:	e8 9a c2 ff ff       	call   c10058a1 <ide_write>
c1009607:	83 c4 10             	add    $0x10,%esp
c100960a:	e9 f9 00 00 00       	jmp    c1009708 <file_write+0x611>
c100960f:	83 7d d0 0c          	cmpl   $0xc,-0x30(%ebp)
c1009613:	0f 86 ef 00 00 00    	jbe    c1009708 <file_write+0x611>
c1009619:	8b 45 08             	mov    0x8(%ebp),%eax
c100961c:	8b 40 08             	mov    0x8(%eax),%eax
c100961f:	8b 40 40             	mov    0x40(%eax),%eax
c1009622:	85 c0                	test   %eax,%eax
c1009624:	75 19                	jne    c100963f <file_write+0x548>
c1009626:	68 64 ba 00 c1       	push   $0xc100ba64
c100962b:	68 bc bc 00 c1       	push   $0xc100bcbc
c1009630:	68 7f 01 00 00       	push   $0x17f
c1009635:	68 14 ba 00 c1       	push   $0xc100ba14
c100963a:	e8 2c 6d ff ff       	call   c100036b <__PANIC>
c100963f:	8b 45 08             	mov    0x8(%ebp),%eax
c1009642:	8b 40 08             	mov    0x8(%eax),%eax
c1009645:	8b 40 40             	mov    0x40(%eax),%eax
c1009648:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c100964b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c100964e:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009651:	83 c2 30             	add    $0x30,%edx
c1009654:	83 ec 04             	sub    $0x4,%esp
c1009657:	6a 01                	push   $0x1
c1009659:	50                   	push   %eax
c100965a:	52                   	push   %edx
c100965b:	e8 04 c2 ff ff       	call   c1005864 <ide_read>
c1009660:	83 c4 10             	add    $0x10,%esp
c1009663:	8b 45 d0             	mov    -0x30(%ebp),%eax
c1009666:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009669:	eb 79                	jmp    c10096e4 <file_write+0x5ed>
c100966b:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c1009670:	83 ec 0c             	sub    $0xc,%esp
c1009673:	50                   	push   %eax
c1009674:	e8 ba f4 ff ff       	call   c1008b33 <block_bitmap_alloc>
c1009679:	83 c4 10             	add    $0x10,%esp
c100967c:	89 45 d8             	mov    %eax,-0x28(%ebp)
c100967f:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
c1009683:	75 1a                	jne    c100969f <file_write+0x5a8>
c1009685:	83 ec 0c             	sub    $0xc,%esp
c1009688:	68 74 bb 00 c1       	push   $0xc100bb74
c100968d:	e8 2a b9 ff ff       	call   c1004fbc <printk>
c1009692:	83 c4 10             	add    $0x10,%esp
c1009695:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c100969a:	e9 cb 01 00 00       	jmp    c100986a <file_write+0x773>
c100969f:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10096a2:	8d 50 01             	lea    0x1(%eax),%edx
c10096a5:	89 55 e8             	mov    %edx,-0x18(%ebp)
c10096a8:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c10096af:	8b 45 dc             	mov    -0x24(%ebp),%eax
c10096b2:	01 c2                	add    %eax,%edx
c10096b4:	8b 45 d8             	mov    -0x28(%ebp),%eax
c10096b7:	89 02                	mov    %eax,(%edx)
c10096b9:	8b 55 d8             	mov    -0x28(%ebp),%edx
c10096bc:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10096c1:	8b 40 10             	mov    0x10(%eax),%eax
c10096c4:	8b 40 28             	mov    0x28(%eax),%eax
c10096c7:	29 c2                	sub    %eax,%edx
c10096c9:	89 d0                	mov    %edx,%eax
c10096cb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c10096ce:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c10096d3:	83 ec 04             	sub    $0x4,%esp
c10096d6:	6a 01                	push   $0x1
c10096d8:	ff 75 d4             	pushl  -0x2c(%ebp)
c10096db:	50                   	push   %eax
c10096dc:	e8 20 f5 ff ff       	call   c1008c01 <bitmap_sync>
c10096e1:	83 c4 10             	add    $0x10,%esp
c10096e4:	8b 45 e8             	mov    -0x18(%ebp),%eax
c10096e7:	3b 45 cc             	cmp    -0x34(%ebp),%eax
c10096ea:	0f 82 7b ff ff ff    	jb     c100966b <file_write+0x574>
c10096f0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
c10096f3:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10096f6:	83 c2 30             	add    $0x30,%edx
c10096f9:	83 ec 04             	sub    $0x4,%esp
c10096fc:	6a 01                	push   $0x1
c10096fe:	50                   	push   %eax
c10096ff:	52                   	push   %edx
c1009700:	e8 9c c1 ff ff       	call   c10058a1 <ide_write>
c1009705:	83 c4 10             	add    $0x10,%esp
c1009708:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
c100970c:	8b 45 08             	mov    0x8(%ebp),%eax
c100970f:	8b 40 08             	mov    0x8(%eax),%eax
c1009712:	8b 40 04             	mov    0x4(%eax),%eax
c1009715:	8d 50 ff             	lea    -0x1(%eax),%edx
c1009718:	8b 45 08             	mov    0x8(%ebp),%eax
c100971b:	89 10                	mov    %edx,(%eax)
c100971d:	e9 f6 00 00 00       	jmp    c1009818 <file_write+0x721>
c1009722:	83 ec 04             	sub    $0x4,%esp
c1009725:	68 00 02 00 00       	push   $0x200
c100972a:	6a 00                	push   $0x0
c100972c:	ff 75 e0             	pushl  -0x20(%ebp)
c100972f:	e8 76 69 ff ff       	call   c10000aa <memset>
c1009734:	83 c4 10             	add    $0x10,%esp
c1009737:	8b 45 08             	mov    0x8(%ebp),%eax
c100973a:	8b 40 08             	mov    0x8(%eax),%eax
c100973d:	8b 40 04             	mov    0x4(%eax),%eax
c1009740:	c1 e8 09             	shr    $0x9,%eax
c1009743:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1009746:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1009749:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009750:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009753:	01 d0                	add    %edx,%eax
c1009755:	8b 00                	mov    (%eax),%eax
c1009757:	89 45 bc             	mov    %eax,-0x44(%ebp)
c100975a:	8b 45 08             	mov    0x8(%ebp),%eax
c100975d:	8b 40 08             	mov    0x8(%eax),%eax
c1009760:	8b 40 04             	mov    0x4(%eax),%eax
c1009763:	25 ff 01 00 00       	and    $0x1ff,%eax
c1009768:	89 45 b8             	mov    %eax,-0x48(%ebp)
c100976b:	b8 00 02 00 00       	mov    $0x200,%eax
c1009770:	2b 45 b8             	sub    -0x48(%ebp),%eax
c1009773:	89 45 b4             	mov    %eax,-0x4c(%ebp)
c1009776:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009779:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
c100977c:	0f 46 45 b4          	cmovbe -0x4c(%ebp),%eax
c1009780:	89 45 b0             	mov    %eax,-0x50(%ebp)
c1009783:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
c1009787:	74 17                	je     c10097a0 <file_write+0x6a9>
c1009789:	83 ec 04             	sub    $0x4,%esp
c100978c:	6a 01                	push   $0x1
c100978e:	ff 75 bc             	pushl  -0x44(%ebp)
c1009791:	ff 75 e0             	pushl  -0x20(%ebp)
c1009794:	e8 cb c0 ff ff       	call   c1005864 <ide_read>
c1009799:	83 c4 10             	add    $0x10,%esp
c100979c:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
c10097a0:	8b 55 e0             	mov    -0x20(%ebp),%edx
c10097a3:	8b 45 b8             	mov    -0x48(%ebp),%eax
c10097a6:	01 d0                	add    %edx,%eax
c10097a8:	83 ec 04             	sub    $0x4,%esp
c10097ab:	ff 75 b0             	pushl  -0x50(%ebp)
c10097ae:	ff 75 f4             	pushl  -0xc(%ebp)
c10097b1:	50                   	push   %eax
c10097b2:	e8 51 69 ff ff       	call   c1000108 <memcpy>
c10097b7:	83 c4 10             	add    $0x10,%esp
c10097ba:	83 ec 04             	sub    $0x4,%esp
c10097bd:	6a 01                	push   $0x1
c10097bf:	ff 75 bc             	pushl  -0x44(%ebp)
c10097c2:	ff 75 e0             	pushl  -0x20(%ebp)
c10097c5:	e8 d7 c0 ff ff       	call   c10058a1 <ide_write>
c10097ca:	83 c4 10             	add    $0x10,%esp
c10097cd:	83 ec 08             	sub    $0x8,%esp
c10097d0:	ff 75 bc             	pushl  -0x44(%ebp)
c10097d3:	68 ab bb 00 c1       	push   $0xc100bbab
c10097d8:	e8 df b7 ff ff       	call   c1004fbc <printk>
c10097dd:	83 c4 10             	add    $0x10,%esp
c10097e0:	8b 45 b0             	mov    -0x50(%ebp),%eax
c10097e3:	01 45 f4             	add    %eax,-0xc(%ebp)
c10097e6:	8b 45 08             	mov    0x8(%ebp),%eax
c10097e9:	8b 40 08             	mov    0x8(%eax),%eax
c10097ec:	8b 48 04             	mov    0x4(%eax),%ecx
c10097ef:	8b 45 08             	mov    0x8(%ebp),%eax
c10097f2:	8b 40 08             	mov    0x8(%eax),%eax
c10097f5:	8b 55 b0             	mov    -0x50(%ebp),%edx
c10097f8:	01 ca                	add    %ecx,%edx
c10097fa:	89 50 04             	mov    %edx,0x4(%eax)
c10097fd:	8b 45 08             	mov    0x8(%ebp),%eax
c1009800:	8b 10                	mov    (%eax),%edx
c1009802:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009805:	01 c2                	add    %eax,%edx
c1009807:	8b 45 08             	mov    0x8(%ebp),%eax
c100980a:	89 10                	mov    %edx,(%eax)
c100980c:	8b 45 b0             	mov    -0x50(%ebp),%eax
c100980f:	01 45 f0             	add    %eax,-0x10(%ebp)
c1009812:	8b 45 b0             	mov    -0x50(%ebp),%eax
c1009815:	29 45 ec             	sub    %eax,-0x14(%ebp)
c1009818:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100981b:	3b 45 10             	cmp    0x10(%ebp),%eax
c100981e:	0f 82 fe fe ff ff    	jb     c1009722 <file_write+0x62b>
c1009824:	8b 45 08             	mov    0x8(%ebp),%eax
c1009827:	8b 50 08             	mov    0x8(%eax),%edx
c100982a:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100982f:	83 ec 04             	sub    $0x4,%esp
c1009832:	ff 75 e0             	pushl  -0x20(%ebp)
c1009835:	52                   	push   %edx
c1009836:	50                   	push   %eax
c1009837:	e8 72 04 00 00       	call   c1009cae <inode_sync>
c100983c:	83 c4 10             	add    $0x10,%esp
c100983f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009842:	83 ec 08             	sub    $0x8,%esp
c1009845:	68 30 02 00 00       	push   $0x230
c100984a:	50                   	push   %eax
c100984b:	e8 d2 93 ff ff       	call   c1002c22 <vmm_free>
c1009850:	83 c4 10             	add    $0x10,%esp
c1009853:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009856:	83 ec 08             	sub    $0x8,%esp
c1009859:	68 00 02 00 00       	push   $0x200
c100985e:	50                   	push   %eax
c100985f:	e8 be 93 ff ff       	call   c1002c22 <vmm_free>
c1009864:	83 c4 10             	add    $0x10,%esp
c1009867:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100986a:	c9                   	leave  
c100986b:	c3                   	ret    

c100986c <file_read>:
c100986c:	55                   	push   %ebp
c100986d:	89 e5                	mov    %esp,%ebp
c100986f:	83 ec 48             	sub    $0x48,%esp
c1009872:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009875:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009878:	8b 45 10             	mov    0x10(%ebp),%eax
c100987b:	89 45 f0             	mov    %eax,-0x10(%ebp)
c100987e:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009881:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009884:	8b 45 08             	mov    0x8(%ebp),%eax
c1009887:	8b 00                	mov    (%eax),%eax
c1009889:	83 ec 08             	sub    $0x8,%esp
c100988c:	50                   	push   %eax
c100988d:	68 c5 bb 00 c1       	push   $0xc100bbc5
c1009892:	e8 25 b7 ff ff       	call   c1004fbc <printk>
c1009897:	83 c4 10             	add    $0x10,%esp
c100989a:	8b 45 08             	mov    0x8(%ebp),%eax
c100989d:	8b 40 08             	mov    0x8(%eax),%eax
c10098a0:	8b 40 04             	mov    0x4(%eax),%eax
c10098a3:	83 ec 08             	sub    $0x8,%esp
c10098a6:	50                   	push   %eax
c10098a7:	68 d4 bb 00 c1       	push   $0xc100bbd4
c10098ac:	e8 0b b7 ff ff       	call   c1004fbc <printk>
c10098b1:	83 c4 10             	add    $0x10,%esp
c10098b4:	8b 45 08             	mov    0x8(%ebp),%eax
c10098b7:	8b 10                	mov    (%eax),%edx
c10098b9:	8b 45 10             	mov    0x10(%ebp),%eax
c10098bc:	01 c2                	add    %eax,%edx
c10098be:	8b 45 08             	mov    0x8(%ebp),%eax
c10098c1:	8b 40 08             	mov    0x8(%eax),%eax
c10098c4:	8b 40 04             	mov    0x4(%eax),%eax
c10098c7:	39 c2                	cmp    %eax,%edx
c10098c9:	76 2b                	jbe    c10098f6 <file_read+0x8a>
c10098cb:	8b 45 08             	mov    0x8(%ebp),%eax
c10098ce:	8b 40 08             	mov    0x8(%eax),%eax
c10098d1:	8b 50 04             	mov    0x4(%eax),%edx
c10098d4:	8b 45 08             	mov    0x8(%ebp),%eax
c10098d7:	8b 00                	mov    (%eax),%eax
c10098d9:	29 c2                	sub    %eax,%edx
c10098db:	89 d0                	mov    %edx,%eax
c10098dd:	89 45 f0             	mov    %eax,-0x10(%ebp)
c10098e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c10098e3:	89 45 ec             	mov    %eax,-0x14(%ebp)
c10098e6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
c10098ea:	75 0a                	jne    c10098f6 <file_read+0x8a>
c10098ec:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c10098f1:	e9 44 03 00 00       	jmp    c1009c3a <file_read+0x3ce>
c10098f6:	83 ec 08             	sub    $0x8,%esp
c10098f9:	ff 75 f0             	pushl  -0x10(%ebp)
c10098fc:	68 e4 bb 00 c1       	push   $0xc100bbe4
c1009901:	e8 b6 b6 ff ff       	call   c1004fbc <printk>
c1009906:	83 c4 10             	add    $0x10,%esp
c1009909:	83 ec 08             	sub    $0x8,%esp
c100990c:	6a 02                	push   $0x2
c100990e:	68 00 02 00 00       	push   $0x200
c1009913:	e8 e5 91 ff ff       	call   c1002afd <vmm_malloc>
c1009918:	83 c4 10             	add    $0x10,%esp
c100991b:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100991e:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
c1009922:	75 10                	jne    c1009934 <file_read+0xc8>
c1009924:	83 ec 0c             	sub    $0xc,%esp
c1009927:	68 fc bb 00 c1       	push   $0xc100bbfc
c100992c:	e8 8b b6 ff ff       	call   c1004fbc <printk>
c1009931:	83 c4 10             	add    $0x10,%esp
c1009934:	83 ec 08             	sub    $0x8,%esp
c1009937:	6a 02                	push   $0x2
c1009939:	68 30 02 00 00       	push   $0x230
c100993e:	e8 ba 91 ff ff       	call   c1002afd <vmm_malloc>
c1009943:	83 c4 10             	add    $0x10,%esp
c1009946:	89 45 dc             	mov    %eax,-0x24(%ebp)
c1009949:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
c100994d:	75 1a                	jne    c1009969 <file_read+0xfd>
c100994f:	83 ec 0c             	sub    $0xc,%esp
c1009952:	68 28 bc 00 c1       	push   $0xc100bc28
c1009957:	e8 60 b6 ff ff       	call   c1004fbc <printk>
c100995c:	83 c4 10             	add    $0x10,%esp
c100995f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
c1009964:	e9 d1 02 00 00       	jmp    c1009c3a <file_read+0x3ce>
c1009969:	8b 45 08             	mov    0x8(%ebp),%eax
c100996c:	8b 00                	mov    (%eax),%eax
c100996e:	c1 e8 09             	shr    $0x9,%eax
c1009971:	89 45 d8             	mov    %eax,-0x28(%ebp)
c1009974:	8b 45 08             	mov    0x8(%ebp),%eax
c1009977:	8b 10                	mov    (%eax),%edx
c1009979:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100997c:	01 d0                	add    %edx,%eax
c100997e:	c1 e8 09             	shr    $0x9,%eax
c1009981:	89 45 d4             	mov    %eax,-0x2c(%ebp)
c1009984:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009987:	2b 45 d4             	sub    -0x2c(%ebp),%eax
c100998a:	89 45 d0             	mov    %eax,-0x30(%ebp)
c100998d:	81 7d d8 8a 00 00 00 	cmpl   $0x8a,-0x28(%ebp)
c1009994:	77 09                	ja     c100999f <file_read+0x133>
c1009996:	81 7d d4 8a 00 00 00 	cmpl   $0x8a,-0x2c(%ebp)
c100999d:	76 19                	jbe    c10099b8 <file_read+0x14c>
c100999f:	68 58 bc 00 c1       	push   $0xc100bc58
c10099a4:	68 c8 bc 00 c1       	push   $0xc100bcc8
c10099a9:	68 d1 01 00 00       	push   $0x1d1
c10099ae:	68 14 ba 00 c1       	push   $0xc100ba14
c10099b3:	e8 b3 69 ff ff       	call   c100036b <__PANIC>
c10099b8:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
c10099bc:	75 7b                	jne    c1009a39 <file_read+0x1cd>
c10099be:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10099c1:	3b 45 d8             	cmp    -0x28(%ebp),%eax
c10099c4:	74 19                	je     c10099df <file_read+0x173>
c10099c6:	68 90 bc 00 c1       	push   $0xc100bc90
c10099cb:	68 c8 bc 00 c1       	push   $0xc100bcc8
c10099d0:	68 d8 01 00 00       	push   $0x1d8
c10099d5:	68 14 ba 00 c1       	push   $0xc100ba14
c10099da:	e8 8c 69 ff ff       	call   c100036b <__PANIC>
c10099df:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c10099e3:	77 2b                	ja     c1009a10 <file_read+0x1a4>
c10099e5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
c10099e8:	89 45 e8             	mov    %eax,-0x18(%ebp)
c10099eb:	8b 45 08             	mov    0x8(%ebp),%eax
c10099ee:	8b 40 08             	mov    0x8(%eax),%eax
c10099f1:	8b 55 e8             	mov    -0x18(%ebp),%edx
c10099f4:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c10099fb:	8b 55 dc             	mov    -0x24(%ebp),%edx
c10099fe:	01 ca                	add    %ecx,%edx
c1009a00:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009a03:	83 c1 04             	add    $0x4,%ecx
c1009a06:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009a09:	89 02                	mov    %eax,(%edx)
c1009a0b:	e9 40 01 00 00       	jmp    c1009b50 <file_read+0x2e4>
c1009a10:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a13:	8b 40 08             	mov    0x8(%eax),%eax
c1009a16:	8b 40 40             	mov    0x40(%eax),%eax
c1009a19:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009a1c:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1009a1f:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009a22:	83 c2 30             	add    $0x30,%edx
c1009a25:	83 ec 04             	sub    $0x4,%esp
c1009a28:	6a 01                	push   $0x1
c1009a2a:	50                   	push   %eax
c1009a2b:	52                   	push   %edx
c1009a2c:	e8 33 be ff ff       	call   c1005864 <ide_read>
c1009a31:	83 c4 10             	add    $0x10,%esp
c1009a34:	e9 17 01 00 00       	jmp    c1009b50 <file_read+0x2e4>
c1009a39:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c1009a3d:	77 39                	ja     c1009a78 <file_read+0x20c>
c1009a3f:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009a42:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009a45:	eb 24                	jmp    c1009a6b <file_read+0x1ff>
c1009a47:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a4a:	8b 40 08             	mov    0x8(%eax),%eax
c1009a4d:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009a50:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009a57:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009a5a:	01 ca                	add    %ecx,%edx
c1009a5c:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009a5f:	83 c1 04             	add    $0x4,%ecx
c1009a62:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009a65:	89 02                	mov    %eax,(%edx)
c1009a67:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009a6b:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009a6e:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
c1009a71:	76 d4                	jbe    c1009a47 <file_read+0x1db>
c1009a73:	e9 d8 00 00 00       	jmp    c1009b50 <file_read+0x2e4>
c1009a78:	83 7d d8 0b          	cmpl   $0xb,-0x28(%ebp)
c1009a7c:	0f 87 84 00 00 00    	ja     c1009b06 <file_read+0x29a>
c1009a82:	83 7d d4 0b          	cmpl   $0xb,-0x2c(%ebp)
c1009a86:	76 7e                	jbe    c1009b06 <file_read+0x29a>
c1009a88:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009a8b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009a8e:	eb 24                	jmp    c1009ab4 <file_read+0x248>
c1009a90:	8b 45 08             	mov    0x8(%ebp),%eax
c1009a93:	8b 40 08             	mov    0x8(%eax),%eax
c1009a96:	8b 55 e8             	mov    -0x18(%ebp),%edx
c1009a99:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
c1009aa0:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009aa3:	01 ca                	add    %ecx,%edx
c1009aa5:	8b 4d e8             	mov    -0x18(%ebp),%ecx
c1009aa8:	83 c1 04             	add    $0x4,%ecx
c1009aab:	8b 04 88             	mov    (%eax,%ecx,4),%eax
c1009aae:	89 02                	mov    %eax,(%edx)
c1009ab0:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
c1009ab4:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
c1009ab8:	76 d6                	jbe    c1009a90 <file_read+0x224>
c1009aba:	8b 45 08             	mov    0x8(%ebp),%eax
c1009abd:	8b 40 08             	mov    0x8(%eax),%eax
c1009ac0:	8b 40 40             	mov    0x40(%eax),%eax
c1009ac3:	85 c0                	test   %eax,%eax
c1009ac5:	75 19                	jne    c1009ae0 <file_read+0x274>
c1009ac7:	68 64 ba 00 c1       	push   $0xc100ba64
c1009acc:	68 c8 bc 00 c1       	push   $0xc100bcc8
c1009ad1:	68 f0 01 00 00       	push   $0x1f0
c1009ad6:	68 14 ba 00 c1       	push   $0xc100ba14
c1009adb:	e8 8b 68 ff ff       	call   c100036b <__PANIC>
c1009ae0:	8b 45 08             	mov    0x8(%ebp),%eax
c1009ae3:	8b 40 08             	mov    0x8(%eax),%eax
c1009ae6:	8b 40 40             	mov    0x40(%eax),%eax
c1009ae9:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009aec:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1009aef:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009af2:	83 c2 30             	add    $0x30,%edx
c1009af5:	83 ec 04             	sub    $0x4,%esp
c1009af8:	6a 01                	push   $0x1
c1009afa:	50                   	push   %eax
c1009afb:	52                   	push   %edx
c1009afc:	e8 63 bd ff ff       	call   c1005864 <ide_read>
c1009b01:	83 c4 10             	add    $0x10,%esp
c1009b04:	eb 4a                	jmp    c1009b50 <file_read+0x2e4>
c1009b06:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b09:	8b 40 08             	mov    0x8(%eax),%eax
c1009b0c:	8b 40 40             	mov    0x40(%eax),%eax
c1009b0f:	85 c0                	test   %eax,%eax
c1009b11:	75 19                	jne    c1009b2c <file_read+0x2c0>
c1009b13:	68 64 ba 00 c1       	push   $0xc100ba64
c1009b18:	68 c8 bc 00 c1       	push   $0xc100bcc8
c1009b1d:	68 f7 01 00 00       	push   $0x1f7
c1009b22:	68 14 ba 00 c1       	push   $0xc100ba14
c1009b27:	e8 3f 68 ff ff       	call   c100036b <__PANIC>
c1009b2c:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b2f:	8b 40 08             	mov    0x8(%eax),%eax
c1009b32:	8b 40 40             	mov    0x40(%eax),%eax
c1009b35:	89 45 cc             	mov    %eax,-0x34(%ebp)
c1009b38:	8b 45 cc             	mov    -0x34(%ebp),%eax
c1009b3b:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009b3e:	83 c2 30             	add    $0x30,%edx
c1009b41:	83 ec 04             	sub    $0x4,%esp
c1009b44:	6a 01                	push   $0x1
c1009b46:	50                   	push   %eax
c1009b47:	52                   	push   %edx
c1009b48:	e8 17 bd ff ff       	call   c1005864 <ide_read>
c1009b4d:	83 c4 10             	add    $0x10,%esp
c1009b50:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
c1009b57:	e9 a7 00 00 00       	jmp    c1009c03 <file_read+0x397>
c1009b5c:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b5f:	8b 00                	mov    (%eax),%eax
c1009b61:	c1 e8 09             	shr    $0x9,%eax
c1009b64:	89 45 c8             	mov    %eax,-0x38(%ebp)
c1009b67:	8b 45 c8             	mov    -0x38(%ebp),%eax
c1009b6a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
c1009b71:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009b74:	01 d0                	add    %edx,%eax
c1009b76:	8b 00                	mov    (%eax),%eax
c1009b78:	89 45 c4             	mov    %eax,-0x3c(%ebp)
c1009b7b:	8b 45 08             	mov    0x8(%ebp),%eax
c1009b7e:	8b 00                	mov    (%eax),%eax
c1009b80:	25 ff 01 00 00       	and    $0x1ff,%eax
c1009b85:	89 45 c0             	mov    %eax,-0x40(%ebp)
c1009b88:	b8 00 02 00 00       	mov    $0x200,%eax
c1009b8d:	2b 45 c0             	sub    -0x40(%ebp),%eax
c1009b90:	89 45 bc             	mov    %eax,-0x44(%ebp)
c1009b93:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009b96:	39 45 bc             	cmp    %eax,-0x44(%ebp)
c1009b99:	0f 46 45 bc          	cmovbe -0x44(%ebp),%eax
c1009b9d:	89 45 b8             	mov    %eax,-0x48(%ebp)
c1009ba0:	83 ec 04             	sub    $0x4,%esp
c1009ba3:	68 00 02 00 00       	push   $0x200
c1009ba8:	6a 00                	push   $0x0
c1009baa:	ff 75 e0             	pushl  -0x20(%ebp)
c1009bad:	e8 f8 64 ff ff       	call   c10000aa <memset>
c1009bb2:	83 c4 10             	add    $0x10,%esp
c1009bb5:	83 ec 04             	sub    $0x4,%esp
c1009bb8:	6a 01                	push   $0x1
c1009bba:	ff 75 c4             	pushl  -0x3c(%ebp)
c1009bbd:	ff 75 e0             	pushl  -0x20(%ebp)
c1009bc0:	e8 9f bc ff ff       	call   c1005864 <ide_read>
c1009bc5:	83 c4 10             	add    $0x10,%esp
c1009bc8:	8b 55 e0             	mov    -0x20(%ebp),%edx
c1009bcb:	8b 45 c0             	mov    -0x40(%ebp),%eax
c1009bce:	01 d0                	add    %edx,%eax
c1009bd0:	83 ec 04             	sub    $0x4,%esp
c1009bd3:	ff 75 b8             	pushl  -0x48(%ebp)
c1009bd6:	50                   	push   %eax
c1009bd7:	ff 75 f4             	pushl  -0xc(%ebp)
c1009bda:	e8 29 65 ff ff       	call   c1000108 <memcpy>
c1009bdf:	83 c4 10             	add    $0x10,%esp
c1009be2:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009be5:	01 45 f4             	add    %eax,-0xc(%ebp)
c1009be8:	8b 45 08             	mov    0x8(%ebp),%eax
c1009beb:	8b 10                	mov    (%eax),%edx
c1009bed:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009bf0:	01 c2                	add    %eax,%edx
c1009bf2:	8b 45 08             	mov    0x8(%ebp),%eax
c1009bf5:	89 10                	mov    %edx,(%eax)
c1009bf7:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009bfa:	01 45 e4             	add    %eax,-0x1c(%ebp)
c1009bfd:	8b 45 b8             	mov    -0x48(%ebp),%eax
c1009c00:	29 45 ec             	sub    %eax,-0x14(%ebp)
c1009c03:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009c06:	3b 45 f0             	cmp    -0x10(%ebp),%eax
c1009c09:	0f 82 4d ff ff ff    	jb     c1009b5c <file_read+0x2f0>
c1009c0f:	8b 45 dc             	mov    -0x24(%ebp),%eax
c1009c12:	83 ec 08             	sub    $0x8,%esp
c1009c15:	68 30 02 00 00       	push   $0x230
c1009c1a:	50                   	push   %eax
c1009c1b:	e8 02 90 ff ff       	call   c1002c22 <vmm_free>
c1009c20:	83 c4 10             	add    $0x10,%esp
c1009c23:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009c26:	83 ec 08             	sub    $0x8,%esp
c1009c29:	68 00 02 00 00       	push   $0x200
c1009c2e:	50                   	push   %eax
c1009c2f:	e8 ee 8f ff ff       	call   c1002c22 <vmm_free>
c1009c34:	83 c4 10             	add    $0x10,%esp
c1009c37:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c1009c3a:	c9                   	leave  
c1009c3b:	c3                   	ret    

c1009c3c <inode_locate>:
c1009c3c:	55                   	push   %ebp
c1009c3d:	89 e5                	mov    %esp,%ebp
c1009c3f:	83 ec 20             	sub    $0x20,%esp
c1009c42:	8b 45 08             	mov    0x8(%ebp),%eax
c1009c45:	8b 40 10             	mov    0x10(%eax),%eax
c1009c48:	8b 40 20             	mov    0x20(%eax),%eax
c1009c4b:	89 45 fc             	mov    %eax,-0x4(%ebp)
c1009c4e:	c7 45 f8 44 00 00 00 	movl   $0x44,-0x8(%ebp)
c1009c55:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009c58:	0f af 45 f8          	imul   -0x8(%ebp),%eax
c1009c5c:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009c5f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009c62:	c1 e8 09             	shr    $0x9,%eax
c1009c65:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009c68:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009c6b:	25 ff 01 00 00       	and    $0x1ff,%eax
c1009c70:	89 45 ec             	mov    %eax,-0x14(%ebp)
c1009c73:	b8 00 02 00 00       	mov    $0x200,%eax
c1009c78:	2b 45 ec             	sub    -0x14(%ebp),%eax
c1009c7b:	89 45 e8             	mov    %eax,-0x18(%ebp)
c1009c7e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009c81:	3b 45 f8             	cmp    -0x8(%ebp),%eax
c1009c84:	73 08                	jae    c1009c8e <inode_locate+0x52>
c1009c86:	8b 45 10             	mov    0x10(%ebp),%eax
c1009c89:	c6 00 01             	movb   $0x1,(%eax)
c1009c8c:	eb 06                	jmp    c1009c94 <inode_locate+0x58>
c1009c8e:	8b 45 10             	mov    0x10(%ebp),%eax
c1009c91:	c6 00 00             	movb   $0x0,(%eax)
c1009c94:	8b 55 fc             	mov    -0x4(%ebp),%edx
c1009c97:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009c9a:	01 c2                	add    %eax,%edx
c1009c9c:	8b 45 10             	mov    0x10(%ebp),%eax
c1009c9f:	89 50 04             	mov    %edx,0x4(%eax)
c1009ca2:	8b 45 10             	mov    0x10(%ebp),%eax
c1009ca5:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009ca8:	89 50 08             	mov    %edx,0x8(%eax)
c1009cab:	90                   	nop
c1009cac:	c9                   	leave  
c1009cad:	c3                   	ret    

c1009cae <inode_sync>:
c1009cae:	55                   	push   %ebp
c1009caf:	89 e5                	mov    %esp,%ebp
c1009cb1:	57                   	push   %edi
c1009cb2:	56                   	push   %esi
c1009cb3:	53                   	push   %ebx
c1009cb4:	83 ec 6c             	sub    $0x6c,%esp
c1009cb7:	8b 45 0c             	mov    0xc(%ebp),%eax
c1009cba:	8b 00                	mov    (%eax),%eax
c1009cbc:	88 45 e7             	mov    %al,-0x19(%ebp)
c1009cbf:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
c1009cc3:	8d 55 d4             	lea    -0x2c(%ebp),%edx
c1009cc6:	52                   	push   %edx
c1009cc7:	50                   	push   %eax
c1009cc8:	ff 75 08             	pushl  0x8(%ebp)
c1009ccb:	e8 6c ff ff ff       	call   c1009c3c <inode_locate>
c1009cd0:	83 c4 0c             	add    $0xc,%esp
c1009cd3:	83 ec 04             	sub    $0x4,%esp
c1009cd6:	6a 44                	push   $0x44
c1009cd8:	ff 75 0c             	pushl  0xc(%ebp)
c1009cdb:	8d 45 90             	lea    -0x70(%ebp),%eax
c1009cde:	50                   	push   %eax
c1009cdf:	e8 24 64 ff ff       	call   c1000108 <memcpy>
c1009ce4:	83 c4 10             	add    $0x10,%esp
c1009ce7:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
c1009cee:	c6 45 9c 00          	movb   $0x0,-0x64(%ebp)
c1009cf2:	8b 45 10             	mov    0x10(%ebp),%eax
c1009cf5:	89 45 e0             	mov    %eax,-0x20(%ebp)
c1009cf8:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
c1009cfc:	84 c0                	test   %al,%al
c1009cfe:	74 64                	je     c1009d64 <inode_sync+0xb6>
c1009d00:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009d03:	83 ec 04             	sub    $0x4,%esp
c1009d06:	6a 02                	push   $0x2
c1009d08:	50                   	push   %eax
c1009d09:	ff 75 e0             	pushl  -0x20(%ebp)
c1009d0c:	e8 53 bb ff ff       	call   c1005864 <ide_read>
c1009d11:	83 c4 10             	add    $0x10,%esp
c1009d14:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009d17:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009d1a:	01 d0                	add    %edx,%eax
c1009d1c:	89 c2                	mov    %eax,%edx
c1009d1e:	8d 45 90             	lea    -0x70(%ebp),%eax
c1009d21:	b9 44 00 00 00       	mov    $0x44,%ecx
c1009d26:	8b 18                	mov    (%eax),%ebx
c1009d28:	89 1a                	mov    %ebx,(%edx)
c1009d2a:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c1009d2e:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c1009d32:	8d 5a 04             	lea    0x4(%edx),%ebx
c1009d35:	83 e3 fc             	and    $0xfffffffc,%ebx
c1009d38:	29 da                	sub    %ebx,%edx
c1009d3a:	29 d0                	sub    %edx,%eax
c1009d3c:	01 d1                	add    %edx,%ecx
c1009d3e:	83 e1 fc             	and    $0xfffffffc,%ecx
c1009d41:	c1 e9 02             	shr    $0x2,%ecx
c1009d44:	89 ca                	mov    %ecx,%edx
c1009d46:	89 df                	mov    %ebx,%edi
c1009d48:	89 c6                	mov    %eax,%esi
c1009d4a:	89 d1                	mov    %edx,%ecx
c1009d4c:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1009d4e:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009d51:	83 ec 04             	sub    $0x4,%esp
c1009d54:	6a 02                	push   $0x2
c1009d56:	50                   	push   %eax
c1009d57:	ff 75 e0             	pushl  -0x20(%ebp)
c1009d5a:	e8 42 bb ff ff       	call   c10058a1 <ide_write>
c1009d5f:	83 c4 10             	add    $0x10,%esp
c1009d62:	eb 62                	jmp    c1009dc6 <inode_sync+0x118>
c1009d64:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009d67:	83 ec 04             	sub    $0x4,%esp
c1009d6a:	6a 01                	push   $0x1
c1009d6c:	50                   	push   %eax
c1009d6d:	ff 75 e0             	pushl  -0x20(%ebp)
c1009d70:	e8 ef ba ff ff       	call   c1005864 <ide_read>
c1009d75:	83 c4 10             	add    $0x10,%esp
c1009d78:	8b 55 dc             	mov    -0x24(%ebp),%edx
c1009d7b:	8b 45 e0             	mov    -0x20(%ebp),%eax
c1009d7e:	01 d0                	add    %edx,%eax
c1009d80:	89 c2                	mov    %eax,%edx
c1009d82:	8d 45 90             	lea    -0x70(%ebp),%eax
c1009d85:	b9 44 00 00 00       	mov    $0x44,%ecx
c1009d8a:	8b 18                	mov    (%eax),%ebx
c1009d8c:	89 1a                	mov    %ebx,(%edx)
c1009d8e:	8b 5c 08 fc          	mov    -0x4(%eax,%ecx,1),%ebx
c1009d92:	89 5c 0a fc          	mov    %ebx,-0x4(%edx,%ecx,1)
c1009d96:	8d 5a 04             	lea    0x4(%edx),%ebx
c1009d99:	83 e3 fc             	and    $0xfffffffc,%ebx
c1009d9c:	29 da                	sub    %ebx,%edx
c1009d9e:	29 d0                	sub    %edx,%eax
c1009da0:	01 d1                	add    %edx,%ecx
c1009da2:	83 e1 fc             	and    $0xfffffffc,%ecx
c1009da5:	c1 e9 02             	shr    $0x2,%ecx
c1009da8:	89 ca                	mov    %ecx,%edx
c1009daa:	89 df                	mov    %ebx,%edi
c1009dac:	89 c6                	mov    %eax,%esi
c1009dae:	89 d1                	mov    %edx,%ecx
c1009db0:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
c1009db2:	8b 45 d8             	mov    -0x28(%ebp),%eax
c1009db5:	83 ec 04             	sub    $0x4,%esp
c1009db8:	6a 01                	push   $0x1
c1009dba:	50                   	push   %eax
c1009dbb:	ff 75 e0             	pushl  -0x20(%ebp)
c1009dbe:	e8 de ba ff ff       	call   c10058a1 <ide_write>
c1009dc3:	83 c4 10             	add    $0x10,%esp
c1009dc6:	90                   	nop
c1009dc7:	8d 65 f4             	lea    -0xc(%ebp),%esp
c1009dca:	5b                   	pop    %ebx
c1009dcb:	5e                   	pop    %esi
c1009dcc:	5f                   	pop    %edi
c1009dcd:	5d                   	pop    %ebp
c1009dce:	c3                   	ret    

c1009dcf <inode_open>:
c1009dcf:	55                   	push   %ebp
c1009dd0:	89 e5                	mov    %esp,%ebp
c1009dd2:	83 ec 28             	sub    $0x28,%esp
c1009dd5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
c1009dd8:	50                   	push   %eax
c1009dd9:	ff 75 0c             	pushl  0xc(%ebp)
c1009ddc:	ff 75 08             	pushl  0x8(%ebp)
c1009ddf:	e8 58 fe ff ff       	call   c1009c3c <inode_locate>
c1009de4:	83 c4 0c             	add    $0xc,%esp
c1009de7:	83 ec 08             	sub    $0x8,%esp
c1009dea:	6a 02                	push   $0x2
c1009dec:	6a 44                	push   $0x44
c1009dee:	e8 0a 8d ff ff       	call   c1002afd <vmm_malloc>
c1009df3:	83 c4 10             	add    $0x10,%esp
c1009df6:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009df9:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009dfd:	84 c0                	test   %al,%al
c1009dff:	74 2b                	je     c1009e2c <inode_open+0x5d>
c1009e01:	83 ec 08             	sub    $0x8,%esp
c1009e04:	6a 02                	push   $0x2
c1009e06:	68 00 04 00 00       	push   $0x400
c1009e0b:	e8 ed 8c ff ff       	call   c1002afd <vmm_malloc>
c1009e10:	83 c4 10             	add    $0x10,%esp
c1009e13:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009e16:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009e19:	83 ec 04             	sub    $0x4,%esp
c1009e1c:	6a 02                	push   $0x2
c1009e1e:	50                   	push   %eax
c1009e1f:	ff 75 f4             	pushl  -0xc(%ebp)
c1009e22:	e8 3d ba ff ff       	call   c1005864 <ide_read>
c1009e27:	83 c4 10             	add    $0x10,%esp
c1009e2a:	eb 29                	jmp    c1009e55 <inode_open+0x86>
c1009e2c:	83 ec 08             	sub    $0x8,%esp
c1009e2f:	6a 02                	push   $0x2
c1009e31:	68 00 02 00 00       	push   $0x200
c1009e36:	e8 c2 8c ff ff       	call   c1002afd <vmm_malloc>
c1009e3b:	83 c4 10             	add    $0x10,%esp
c1009e3e:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009e41:	8b 45 e8             	mov    -0x18(%ebp),%eax
c1009e44:	83 ec 04             	sub    $0x4,%esp
c1009e47:	6a 01                	push   $0x1
c1009e49:	50                   	push   %eax
c1009e4a:	ff 75 f4             	pushl  -0xc(%ebp)
c1009e4d:	e8 12 ba ff ff       	call   c1005864 <ide_read>
c1009e52:	83 c4 10             	add    $0x10,%esp
c1009e55:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009e58:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009e5b:	01 d0                	add    %edx,%eax
c1009e5d:	83 ec 04             	sub    $0x4,%esp
c1009e60:	6a 44                	push   $0x44
c1009e62:	50                   	push   %eax
c1009e63:	ff 75 f0             	pushl  -0x10(%ebp)
c1009e66:	e8 9d 62 ff ff       	call   c1000108 <memcpy>
c1009e6b:	83 c4 10             	add    $0x10,%esp
c1009e6e:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
c1009e72:	84 c0                	test   %al,%al
c1009e74:	74 16                	je     c1009e8c <inode_open+0xbd>
c1009e76:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009e79:	83 ec 08             	sub    $0x8,%esp
c1009e7c:	68 00 04 00 00       	push   $0x400
c1009e81:	50                   	push   %eax
c1009e82:	e8 9b 8d ff ff       	call   c1002c22 <vmm_free>
c1009e87:	83 c4 10             	add    $0x10,%esp
c1009e8a:	eb 14                	jmp    c1009ea0 <inode_open+0xd1>
c1009e8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009e8f:	83 ec 08             	sub    $0x8,%esp
c1009e92:	68 00 02 00 00       	push   $0x200
c1009e97:	50                   	push   %eax
c1009e98:	e8 85 8d ff ff       	call   c1002c22 <vmm_free>
c1009e9d:	83 c4 10             	add    $0x10,%esp
c1009ea0:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009ea3:	c9                   	leave  
c1009ea4:	c3                   	ret    

c1009ea5 <inode_close>:
c1009ea5:	55                   	push   %ebp
c1009ea6:	89 e5                	mov    %esp,%ebp
c1009ea8:	83 ec 08             	sub    $0x8,%esp
c1009eab:	8b 45 08             	mov    0x8(%ebp),%eax
c1009eae:	83 ec 08             	sub    $0x8,%esp
c1009eb1:	6a 44                	push   $0x44
c1009eb3:	50                   	push   %eax
c1009eb4:	e8 69 8d ff ff       	call   c1002c22 <vmm_free>
c1009eb9:	83 c4 10             	add    $0x10,%esp
c1009ebc:	90                   	nop
c1009ebd:	c9                   	leave  
c1009ebe:	c3                   	ret    

c1009ebf <inode_delete>:
c1009ebf:	55                   	push   %ebp
c1009ec0:	89 e5                	mov    %esp,%ebp
c1009ec2:	83 ec 18             	sub    $0x18,%esp
c1009ec5:	81 7d 0c ff 0f 00 00 	cmpl   $0xfff,0xc(%ebp)
c1009ecc:	76 16                	jbe    c1009ee4 <inode_delete+0x25>
c1009ece:	68 d4 bc 00 c1       	push   $0xc100bcd4
c1009ed3:	68 90 bd 00 c1       	push   $0xc100bd90
c1009ed8:	6a 6b                	push   $0x6b
c1009eda:	68 e4 bc 00 c1       	push   $0xc100bce4
c1009edf:	e8 87 64 ff ff       	call   c100036b <__PANIC>
c1009ee4:	83 ec 04             	sub    $0x4,%esp
c1009ee7:	8d 45 e8             	lea    -0x18(%ebp),%eax
c1009eea:	50                   	push   %eax
c1009eeb:	ff 75 0c             	pushl  0xc(%ebp)
c1009eee:	ff 75 08             	pushl  0x8(%ebp)
c1009ef1:	e8 46 fd ff ff       	call   c1009c3c <inode_locate>
c1009ef6:	83 c4 10             	add    $0x10,%esp
c1009ef9:	8b 55 ec             	mov    -0x14(%ebp),%edx
c1009efc:	8b 45 08             	mov    0x8(%ebp),%eax
c1009eff:	0f b6 40 02          	movzbl 0x2(%eax),%eax
c1009f03:	0f b6 c8             	movzbl %al,%ecx
c1009f06:	8b 45 08             	mov    0x8(%ebp),%eax
c1009f09:	8b 40 0c             	mov    0xc(%eax),%eax
c1009f0c:	01 c8                	add    %ecx,%eax
c1009f0e:	39 c2                	cmp    %eax,%edx
c1009f10:	76 16                	jbe    c1009f28 <inode_delete+0x69>
c1009f12:	68 18 bd 00 c1       	push   $0xc100bd18
c1009f17:	68 90 bd 00 c1       	push   $0xc100bd90
c1009f1c:	6a 6e                	push   $0x6e
c1009f1e:	68 e4 bc 00 c1       	push   $0xc100bce4
c1009f23:	e8 43 64 ff ff       	call   c100036b <__PANIC>
c1009f28:	8b 45 10             	mov    0x10(%ebp),%eax
c1009f2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
c1009f2e:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
c1009f32:	84 c0                	test   %al,%al
c1009f34:	74 42                	je     c1009f78 <inode_delete+0xb9>
c1009f36:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009f39:	83 ec 04             	sub    $0x4,%esp
c1009f3c:	6a 02                	push   $0x2
c1009f3e:	50                   	push   %eax
c1009f3f:	ff 75 f4             	pushl  -0xc(%ebp)
c1009f42:	e8 1d b9 ff ff       	call   c1005864 <ide_read>
c1009f47:	83 c4 10             	add    $0x10,%esp
c1009f4a:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009f4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009f50:	01 d0                	add    %edx,%eax
c1009f52:	83 ec 04             	sub    $0x4,%esp
c1009f55:	6a 44                	push   $0x44
c1009f57:	6a 00                	push   $0x0
c1009f59:	50                   	push   %eax
c1009f5a:	e8 4b 61 ff ff       	call   c10000aa <memset>
c1009f5f:	83 c4 10             	add    $0x10,%esp
c1009f62:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009f65:	83 ec 04             	sub    $0x4,%esp
c1009f68:	6a 02                	push   $0x2
c1009f6a:	50                   	push   %eax
c1009f6b:	ff 75 f4             	pushl  -0xc(%ebp)
c1009f6e:	e8 2e b9 ff ff       	call   c10058a1 <ide_write>
c1009f73:	83 c4 10             	add    $0x10,%esp
c1009f76:	eb 40                	jmp    c1009fb8 <inode_delete+0xf9>
c1009f78:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009f7b:	83 ec 04             	sub    $0x4,%esp
c1009f7e:	6a 01                	push   $0x1
c1009f80:	50                   	push   %eax
c1009f81:	ff 75 f4             	pushl  -0xc(%ebp)
c1009f84:	e8 db b8 ff ff       	call   c1005864 <ide_read>
c1009f89:	83 c4 10             	add    $0x10,%esp
c1009f8c:	8b 55 f0             	mov    -0x10(%ebp),%edx
c1009f8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
c1009f92:	01 d0                	add    %edx,%eax
c1009f94:	83 ec 04             	sub    $0x4,%esp
c1009f97:	6a 44                	push   $0x44
c1009f99:	6a 00                	push   $0x0
c1009f9b:	50                   	push   %eax
c1009f9c:	e8 09 61 ff ff       	call   c10000aa <memset>
c1009fa1:	83 c4 10             	add    $0x10,%esp
c1009fa4:	8b 45 ec             	mov    -0x14(%ebp),%eax
c1009fa7:	83 ec 04             	sub    $0x4,%esp
c1009faa:	6a 01                	push   $0x1
c1009fac:	50                   	push   %eax
c1009fad:	ff 75 f4             	pushl  -0xc(%ebp)
c1009fb0:	e8 ec b8 ff ff       	call   c10058a1 <ide_write>
c1009fb5:	83 c4 10             	add    $0x10,%esp
c1009fb8:	90                   	nop
c1009fb9:	c9                   	leave  
c1009fba:	c3                   	ret    

c1009fbb <inode_release>:
c1009fbb:	55                   	push   %ebp
c1009fbc:	89 e5                	mov    %esp,%ebp
c1009fbe:	57                   	push   %edi
c1009fbf:	53                   	push   %ebx
c1009fc0:	81 ec 50 02 00 00    	sub    $0x250,%esp
c1009fc6:	83 ec 08             	sub    $0x8,%esp
c1009fc9:	ff 75 0c             	pushl  0xc(%ebp)
c1009fcc:	ff 75 08             	pushl  0x8(%ebp)
c1009fcf:	e8 fb fd ff ff       	call   c1009dcf <inode_open>
c1009fd4:	83 c4 10             	add    $0x10,%esp
c1009fd7:	89 45 f0             	mov    %eax,-0x10(%ebp)
c1009fda:	8b 45 f0             	mov    -0x10(%ebp),%eax
c1009fdd:	8b 00                	mov    (%eax),%eax
c1009fdf:	39 45 0c             	cmp    %eax,0xc(%ebp)
c1009fe2:	74 19                	je     c1009ffd <inode_release+0x42>
c1009fe4:	68 58 bd 00 c1       	push   $0xc100bd58
c1009fe9:	68 a0 bd 00 c1       	push   $0xc100bda0
c1009fee:	68 85 00 00 00       	push   $0x85
c1009ff3:	68 e4 bc 00 c1       	push   $0xc100bce4
c1009ff8:	e8 6e 63 ff ff       	call   c100036b <__PANIC>
c1009ffd:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100a001:	c6 45 f6 0c          	movb   $0xc,-0xa(%ebp)
c100a005:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
c100a00b:	b8 00 00 00 00       	mov    $0x0,%eax
c100a010:	b9 8c 00 00 00       	mov    $0x8c,%ecx
c100a015:	89 d7                	mov    %edx,%edi
c100a017:	f3 ab                	rep stos %eax,%es:(%edi)
c100a019:	eb 22                	jmp    c100a03d <inode_release+0x82>
c100a01b:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
c100a01f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a023:	8b 55 f0             	mov    -0x10(%ebp),%edx
c100a026:	83 c1 04             	add    $0x4,%ecx
c100a029:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
c100a02c:	89 94 85 b0 fd ff ff 	mov    %edx,-0x250(%ebp,%eax,4)
c100a033:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a037:	83 c0 01             	add    $0x1,%eax
c100a03a:	88 45 f7             	mov    %al,-0x9(%ebp)
c100a03d:	80 7d f7 0b          	cmpb   $0xb,-0x9(%ebp)
c100a041:	76 d8                	jbe    c100a01b <inode_release+0x60>
c100a043:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a046:	8b 40 40             	mov    0x40(%eax),%eax
c100a049:	85 c0                	test   %eax,%eax
c100a04b:	0f 84 b2 00 00 00    	je     c100a103 <inode_release+0x148>
c100a051:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a054:	8b 50 40             	mov    0x40(%eax),%edx
c100a057:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
c100a05d:	83 c0 30             	add    $0x30,%eax
c100a060:	83 ec 04             	sub    $0x4,%esp
c100a063:	6a 01                	push   $0x1
c100a065:	52                   	push   %edx
c100a066:	50                   	push   %eax
c100a067:	e8 f8 b7 ff ff       	call   c1005864 <ide_read>
c100a06c:	83 c4 10             	add    $0x10,%esp
c100a06f:	c6 45 f6 8c          	movb   $0x8c,-0xa(%ebp)
c100a073:	8b 45 f0             	mov    -0x10(%ebp),%eax
c100a076:	8b 50 40             	mov    0x40(%eax),%edx
c100a079:	8b 45 08             	mov    0x8(%ebp),%eax
c100a07c:	8b 40 10             	mov    0x10(%eax),%eax
c100a07f:	8b 40 28             	mov    0x28(%eax),%eax
c100a082:	29 c2                	sub    %eax,%edx
c100a084:	89 d0                	mov    %edx,%eax
c100a086:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a089:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100a08d:	75 19                	jne    c100a0a8 <inode_release+0xed>
c100a08f:	68 78 bd 00 c1       	push   $0xc100bd78
c100a094:	68 a0 bd 00 c1       	push   $0xc100bda0
c100a099:	68 9d 00 00 00       	push   $0x9d
c100a09e:	68 e4 bc 00 c1       	push   $0xc100bce4
c100a0a3:	e8 c3 62 ff ff       	call   c100036b <__PANIC>
c100a0a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a0ab:	c1 e8 03             	shr    $0x3,%eax
c100a0ae:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a0b1:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a0b4:	83 e0 07             	and    $0x7,%eax
c100a0b7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a0ba:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0bd:	8b 50 18             	mov    0x18(%eax),%edx
c100a0c0:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a0c3:	01 d0                	add    %edx,%eax
c100a0c5:	0f b6 00             	movzbl (%eax),%eax
c100a0c8:	89 c2                	mov    %eax,%edx
c100a0ca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a0cd:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a0d2:	89 c1                	mov    %eax,%ecx
c100a0d4:	d3 e3                	shl    %cl,%ebx
c100a0d6:	89 d8                	mov    %ebx,%eax
c100a0d8:	f7 d0                	not    %eax
c100a0da:	89 d1                	mov    %edx,%ecx
c100a0dc:	21 c1                	and    %eax,%ecx
c100a0de:	8b 45 08             	mov    0x8(%ebp),%eax
c100a0e1:	8b 50 18             	mov    0x18(%eax),%edx
c100a0e4:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a0e7:	01 d0                	add    %edx,%eax
c100a0e9:	89 ca                	mov    %ecx,%edx
c100a0eb:	88 10                	mov    %dl,(%eax)
c100a0ed:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100a0f2:	83 ec 04             	sub    $0x4,%esp
c100a0f5:	6a 01                	push   $0x1
c100a0f7:	ff 75 ec             	pushl  -0x14(%ebp)
c100a0fa:	50                   	push   %eax
c100a0fb:	e8 01 eb ff ff       	call   c1008c01 <bitmap_sync>
c100a100:	83 c4 10             	add    $0x10,%esp
c100a103:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
c100a107:	e9 b9 00 00 00       	jmp    c100a1c5 <inode_release+0x20a>
c100a10c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a110:	8b 84 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%eax
c100a117:	85 c0                	test   %eax,%eax
c100a119:	0f 84 9c 00 00 00    	je     c100a1bb <inode_release+0x200>
c100a11f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
c100a126:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a12a:	8b 94 85 b0 fd ff ff 	mov    -0x250(%ebp,%eax,4),%edx
c100a131:	8b 45 08             	mov    0x8(%ebp),%eax
c100a134:	8b 40 10             	mov    0x10(%eax),%eax
c100a137:	8b 40 28             	mov    0x28(%eax),%eax
c100a13a:	29 c2                	sub    %eax,%edx
c100a13c:	89 d0                	mov    %edx,%eax
c100a13e:	89 45 ec             	mov    %eax,-0x14(%ebp)
c100a141:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
c100a145:	75 19                	jne    c100a160 <inode_release+0x1a5>
c100a147:	68 78 bd 00 c1       	push   $0xc100bd78
c100a14c:	68 a0 bd 00 c1       	push   $0xc100bda0
c100a151:	68 aa 00 00 00       	push   $0xaa
c100a156:	68 e4 bc 00 c1       	push   $0xc100bce4
c100a15b:	e8 0b 62 ff ff       	call   c100036b <__PANIC>
c100a160:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a163:	c1 e8 03             	shr    $0x3,%eax
c100a166:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a169:	8b 45 ec             	mov    -0x14(%ebp),%eax
c100a16c:	83 e0 07             	and    $0x7,%eax
c100a16f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a172:	8b 45 08             	mov    0x8(%ebp),%eax
c100a175:	8b 50 18             	mov    0x18(%eax),%edx
c100a178:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a17b:	01 d0                	add    %edx,%eax
c100a17d:	0f b6 00             	movzbl (%eax),%eax
c100a180:	89 c2                	mov    %eax,%edx
c100a182:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a185:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a18a:	89 c1                	mov    %eax,%ecx
c100a18c:	d3 e3                	shl    %cl,%ebx
c100a18e:	89 d8                	mov    %ebx,%eax
c100a190:	f7 d0                	not    %eax
c100a192:	89 d1                	mov    %edx,%ecx
c100a194:	21 c1                	and    %eax,%ecx
c100a196:	8b 45 08             	mov    0x8(%ebp),%eax
c100a199:	8b 50 18             	mov    0x18(%eax),%edx
c100a19c:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a19f:	01 d0                	add    %edx,%eax
c100a1a1:	89 ca                	mov    %ecx,%edx
c100a1a3:	88 10                	mov    %dl,(%eax)
c100a1a5:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100a1aa:	83 ec 04             	sub    $0x4,%esp
c100a1ad:	6a 01                	push   $0x1
c100a1af:	ff 75 ec             	pushl  -0x14(%ebp)
c100a1b2:	50                   	push   %eax
c100a1b3:	e8 49 ea ff ff       	call   c1008c01 <bitmap_sync>
c100a1b8:	83 c4 10             	add    $0x10,%esp
c100a1bb:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a1bf:	83 c0 01             	add    $0x1,%eax
c100a1c2:	88 45 f7             	mov    %al,-0x9(%ebp)
c100a1c5:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
c100a1c9:	3a 45 f6             	cmp    -0xa(%ebp),%al
c100a1cc:	0f 82 3a ff ff ff    	jb     c100a10c <inode_release+0x151>
c100a1d2:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a1d5:	c1 e8 03             	shr    $0x3,%eax
c100a1d8:	89 45 e8             	mov    %eax,-0x18(%ebp)
c100a1db:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a1de:	83 e0 07             	and    $0x7,%eax
c100a1e1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
c100a1e4:	8b 45 08             	mov    0x8(%ebp),%eax
c100a1e7:	8b 50 20             	mov    0x20(%eax),%edx
c100a1ea:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a1ed:	01 d0                	add    %edx,%eax
c100a1ef:	0f b6 00             	movzbl (%eax),%eax
c100a1f2:	89 c2                	mov    %eax,%edx
c100a1f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
c100a1f7:	bb 01 00 00 00       	mov    $0x1,%ebx
c100a1fc:	89 c1                	mov    %eax,%ecx
c100a1fe:	d3 e3                	shl    %cl,%ebx
c100a200:	89 d8                	mov    %ebx,%eax
c100a202:	f7 d0                	not    %eax
c100a204:	89 d1                	mov    %edx,%ecx
c100a206:	21 c1                	and    %eax,%ecx
c100a208:	8b 45 08             	mov    0x8(%ebp),%eax
c100a20b:	8b 50 20             	mov    0x20(%eax),%edx
c100a20e:	8b 45 e8             	mov    -0x18(%ebp),%eax
c100a211:	01 d0                	add    %edx,%eax
c100a213:	89 ca                	mov    %ecx,%edx
c100a215:	88 10                	mov    %dl,(%eax)
c100a217:	a1 30 32 a1 c1       	mov    0xc1a13230,%eax
c100a21c:	83 ec 04             	sub    $0x4,%esp
c100a21f:	6a 00                	push   $0x0
c100a221:	ff 75 0c             	pushl  0xc(%ebp)
c100a224:	50                   	push   %eax
c100a225:	e8 d7 e9 ff ff       	call   c1008c01 <bitmap_sync>
c100a22a:	83 c4 10             	add    $0x10,%esp
c100a22d:	83 ec 08             	sub    $0x8,%esp
c100a230:	6a 02                	push   $0x2
c100a232:	68 00 04 00 00       	push   $0x400
c100a237:	e8 c1 88 ff ff       	call   c1002afd <vmm_malloc>
c100a23c:	83 c4 10             	add    $0x10,%esp
c100a23f:	89 45 e0             	mov    %eax,-0x20(%ebp)
c100a242:	83 ec 04             	sub    $0x4,%esp
c100a245:	ff 75 e0             	pushl  -0x20(%ebp)
c100a248:	ff 75 0c             	pushl  0xc(%ebp)
c100a24b:	ff 75 08             	pushl  0x8(%ebp)
c100a24e:	e8 6c fc ff ff       	call   c1009ebf <inode_delete>
c100a253:	83 c4 10             	add    $0x10,%esp
c100a256:	8b 45 e0             	mov    -0x20(%ebp),%eax
c100a259:	83 ec 08             	sub    $0x8,%esp
c100a25c:	68 00 04 00 00       	push   $0x400
c100a261:	50                   	push   %eax
c100a262:	e8 bb 89 ff ff       	call   c1002c22 <vmm_free>
c100a267:	83 c4 10             	add    $0x10,%esp
c100a26a:	83 ec 0c             	sub    $0xc,%esp
c100a26d:	ff 75 f0             	pushl  -0x10(%ebp)
c100a270:	e8 30 fc ff ff       	call   c1009ea5 <inode_close>
c100a275:	83 c4 10             	add    $0x10,%esp
c100a278:	90                   	nop
c100a279:	8d 65 f8             	lea    -0x8(%ebp),%esp
c100a27c:	5b                   	pop    %ebx
c100a27d:	5f                   	pop    %edi
c100a27e:	5d                   	pop    %ebp
c100a27f:	c3                   	ret    

c100a280 <inode_init>:
c100a280:	55                   	push   %ebp
c100a281:	89 e5                	mov    %esp,%ebp
c100a283:	83 ec 10             	sub    $0x10,%esp
c100a286:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a289:	8b 55 08             	mov    0x8(%ebp),%edx
c100a28c:	89 10                	mov    %edx,(%eax)
c100a28e:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a291:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
c100a298:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a29b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
c100a2a2:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a2a5:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
c100a2a9:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
c100a2b0:	eb 14                	jmp    c100a2c6 <inode_init+0x46>
c100a2b2:	8b 45 0c             	mov    0xc(%ebp),%eax
c100a2b5:	8b 55 fc             	mov    -0x4(%ebp),%edx
c100a2b8:	83 c2 04             	add    $0x4,%edx
c100a2bb:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
c100a2c2:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
c100a2c6:	83 7d fc 0c          	cmpl   $0xc,-0x4(%ebp)
c100a2ca:	7e e6                	jle    c100a2b2 <inode_init+0x32>
c100a2cc:	90                   	nop
c100a2cd:	90                   	nop
c100a2ce:	c9                   	leave  
c100a2cf:	c3                   	ret    
